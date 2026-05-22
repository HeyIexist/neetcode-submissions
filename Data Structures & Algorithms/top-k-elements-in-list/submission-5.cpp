bool compareByFrequency(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }
        vector<pair<int, int>> freqArr(freqMap.begin(), freqMap.end());
        sort(freqArr.begin(), freqArr.end(), compareByFrequency);
        vector<int> solution;
        for (int i = 0; i < k; i++) {
            solution.push_back(freqArr[i].first);
        }
        return solution;
    }
};
