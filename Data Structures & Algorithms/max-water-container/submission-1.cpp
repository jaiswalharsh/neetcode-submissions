class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_water = 0;
        int l = 0, r = heights.size() - 1; 
        
        while(l < r) {
            int min_h = std::min(heights[l], heights[r]);
            int water_cap = (r - l) * min_h;
            if (water_cap > max_water) {
                max_water = water_cap;
            }
            if(min_h == heights[l])l++;
            if(min_h == heights[r])r--;
        }
        return max_water;
    }
};
