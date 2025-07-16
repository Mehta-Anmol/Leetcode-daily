class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int ans = INT_MIN;
        vector<vector<int>> patterns = {{0,0},{1,1},{0,1},{1,0}};
        for(auto& pattern : patterns){
            int count = 0;
            for(int num: nums){
                if(num%2 == pattern[count%2]){
                    count++;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};