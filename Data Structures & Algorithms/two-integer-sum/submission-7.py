class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        solutions = []
        for i in range(len(nums)):
            j = target - nums[i]
            if j in nums:
                if not (i == nums.index(j)):
                    return sorted([i, nums.index(j)])
                    
