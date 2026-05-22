class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> s;
        vector<int> output(temperatures.size(), 0);
        for(int i = 0; i < temperatures.size(); i++){
            int temperature = temperatures[i];
            while(!s.empty() && s.top().first < temperature) {
                output[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push({temperature, i});
        }
        return output;
    }
};
