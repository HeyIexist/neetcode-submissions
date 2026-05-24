class Solution:
    def search(self, nums: List[int], target: int) -> int:

        def b_search(low: int, high: int) -> int:
            while low <= high:
                mid = low + (high - low) // 2
                if nums[mid] == target:
                    return mid
                elif nums[mid] < target:
                    low = mid + 1
                else:
                    high = mid - 1
            return -1

        l, r = 0, len(nums) - 1

        # find pivot (smallest element index)
        while l < r:
            mid = l + (r - l) // 2
            if nums[mid] > nums[r]:
                l = mid + 1
            else:
                r = mid

        pivot = l

        # choose correct sorted half
        if nums[pivot] <= target <= nums[-1]:
            return b_search(pivot, len(nums) - 1)
        else:
            return b_search(0, pivot - 1)