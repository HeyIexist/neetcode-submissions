class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = []
        i : int = 0
        j : int = 0

        while(i < len(nums1) and j < len(nums2)):
            if(nums1[i] < nums2[j]):
                nums.append(nums1[i])
                i+=1
            else:
                nums.append(nums2[j])
                j+=1

        if(i == len(nums1)):
            nums.extend(nums2[j : ])
        else:
            nums.extend(nums1[i:])

        isEven = len(nums) % 2 == 0

        if(isEven):
            mid1 : int = (len(nums) // 2 ) - 1
            mid2 : int = len(nums) // 2 
            mid = (nums[mid1] + nums[mid2]) / 2
            return mid
        else:
            mid = (len(nums) // 2)
            return float(nums[mid])
