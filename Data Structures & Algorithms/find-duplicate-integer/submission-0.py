class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        s = set()
        temp = nums
        for num in nums:
            if num in s:
                return num
            else:
                s.add(num)
