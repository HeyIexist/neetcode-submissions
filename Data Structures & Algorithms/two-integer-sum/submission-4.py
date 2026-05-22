class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        solutions = []
        for i in range(len(nums)):
            for j in range(len(nums)):
                if not (i == j):
                    if (nums[i] + nums[j]) == target:
                        if i <= j:
                            return [i, j]
                        else:
                            return [j, i]