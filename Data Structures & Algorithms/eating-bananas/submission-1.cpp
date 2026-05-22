class Solution {
    bool isFeasible(vector<int> &ps, int k, int h) {
        int sum = 0;
        for(int p : ps) {
            sum+= std::ceil(p/(double)k);
        }
        return sum <= h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(isFeasible(piles, mid, h)) {
                high = mid - 1;
            } else {
                low = mid+1;
            } 
        }
        return low;
    }
};
