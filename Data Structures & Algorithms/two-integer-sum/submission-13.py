class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hmap = {}

        for i in range(len(nums)):
            compliment = target - nums[i]

            if compliment not in hmap:
                hmap[nums[i]] = i
            else:
                return [hmap[compliment], i]