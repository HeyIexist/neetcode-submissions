# class Solution:
#     def hasDuplicate(self, nums: List[int]) -> bool:
#         if len(nums) == 0:
#             return False
#         for i in nums:
#          count = 0
#          for j in nums:
#               if i == j:
#                 count+=1
#                 if count > 1:
#                     return True
#         return False

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums = sorted(nums)
        for i in range(len(nums) - 1):
            if nums[i] == nums[i+1]:
                return True
        return False
