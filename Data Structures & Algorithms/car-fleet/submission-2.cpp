class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> positionSpeed(position.size(), {0, 0});
        for (int i = 0; i < position.size(); i++) {
            positionSpeed[i] = {position[i], speed[i]};
        }
        sort(positionSpeed.begin(), positionSpeed.end(),
             [](auto a, auto b) { return a.first > b.first; });
        stack<pair<int, int>> s;
        for(int i = 0; i < positionSpeed.size(); i++) {
            auto ps = positionSpeed[i];
            if(s.empty())
                s.push(ps);
            else{
                double time1 = (target - s.top().first)/(double)s.top().second;
                double time2 = (target - ps.first) / (double)ps.second;
                if(!(time2 <= time1)) s.push(ps);
            }
        }
        return s.size();
    }
};
