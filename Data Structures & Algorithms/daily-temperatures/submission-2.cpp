class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> s;
        vector<int> solution(temperatures.size(), 0);
        for(int i = 0; i < temperatures.size(); i++){
            int temperature = temperatures[i];
            
            while(!s.empty() && temperature > s.top().first){
                solution[s.top().second] += i - s.top().second;
                s.pop();
            }
                s.push({temperature, i});
        }
        return solution;
    }
};
