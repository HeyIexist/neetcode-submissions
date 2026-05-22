class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        vector<int> solution(2, 0);
        while (i < numbers.size()) {
            int compliment = target - numbers[i];
            int j = i + 1;
            while (j < numbers.size()) {
                if (numbers[j] == compliment) {
                    solution[0] = i + 1;
                    solution[1] = j + 1;
                    return solution;
                }
                j++;
            }
            i++;
        }
        return {};
    }
};
