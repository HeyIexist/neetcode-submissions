class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        mult = 1
        countZero=0
        for num in nums:
            if num != 0:
                mult*=num
            else:
                countZero+=1
        solution= []
        if countZero == 0:
            for num in nums:
                solution.append(mult//num)
        elif countZero == 1:
            for num in nums:
                if num == 0:
                    solution.append(mult)
                else:
                    solution.append(0)
        else:
            for num in nums:
                solution.append(0)
        return solution