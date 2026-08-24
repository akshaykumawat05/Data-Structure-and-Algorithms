class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, maxi2 = INT_MIN;
        int mini = INT_MAX, mini2 = INT_MAX;

        for(int i=0; i<n; i++){
            if(nums[i] > maxi){
                maxi2 = maxi;
                maxi = nums[i];
            }
            else if(nums[i] > maxi2){
                maxi2 = nums[i];
            }
            if(nums[i] < mini){
                mini2 = mini;
                mini = nums[i];
            }
            else if(nums[i] < mini2){
                mini2 = nums[i];
            }
        }

        return maxi*maxi2 - mini*mini2;
    }
};