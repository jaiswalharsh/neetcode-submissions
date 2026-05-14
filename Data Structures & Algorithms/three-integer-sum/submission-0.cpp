class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());


        vector<vector<int>> result;
        for (int i = 0; i < (int)nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int l = i+1, r = nums.size() - 1;
            int sum;
            while(l < r) {
                sum = nums[l] + nums[r] + nums[i];
                if(sum < 0) {
                    l++;
                } else if(sum > 0) {
                    r--;
                }
                else {
                    result.push_back({nums[i],nums[l],nums[r]});
                    while (l < r && nums[l] == nums[l+1]) l++;
                    l++;
                    r--;
                }
            }
        }

        return result;
    }
};