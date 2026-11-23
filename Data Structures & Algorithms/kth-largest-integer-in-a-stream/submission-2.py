class KthLargest:
    def __init__(self, k: int, nums: List[int]):
        self.nums = nums
        self.k = k

    def add(self, val: int) -> int:
        self.nums.append(val)
        heapq.heapify(self.nums)
        while len(self.nums) > self.k:
            self.nums.pop(0)
            heapq.heapify(self.nums)
        return self.nums[0]
