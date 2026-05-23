class Solution:
    def findMin(self, nums: List[int]) -> int:
        low : int = 0
        high : int = len(nums)-1
        mid : int = low + (high-low) // 2
        while(low < high):
            mid : int = low + (high-low) // 2
            if nums[mid] > nums[high]:
                low = mid + 1
            elif nums[mid] < nums[high]:
                high = mid
        return nums[low]