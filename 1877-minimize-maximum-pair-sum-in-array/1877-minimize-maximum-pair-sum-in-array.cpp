class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxi = INT_MIN;

        for(int i=0; i<n/2; i++){
            if(nums[i] + nums[n-i-1] > maxi){
                maxi = nums[i] + nums[n-i-1];
            }
        }

        return maxi;
    }
};