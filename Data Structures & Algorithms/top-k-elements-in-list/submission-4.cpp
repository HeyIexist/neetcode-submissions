class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        vector<int> solution;
        for (int num : nums)
            frequency[num]++;
        vector<int> frequencyArray;
        for(auto element : frequency)
            frequencyArray.push_back(element.second);
        sort(frequencyArray.begin(), frequencyArray.end(), greater<int>());
        for (int i = 0; i < k; i++) {
            for(auto &element : frequency){
                if(element.second == frequencyArray[i]) {
                    solution.push_back(element.first);
                    element.second = -1;
                    break;
                }
            }
        }
        return solution;
    }
};
