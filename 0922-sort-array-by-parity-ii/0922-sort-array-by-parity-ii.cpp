class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int i=0, j=1, k=0;

        while(k < n){
            if(nums[k] % 2 == 0){
                ans[i] = nums[k];
                i += 2;
            }
            else{
                ans[j] = nums[k];
                j += 2;
            }
            k++;
        }

        return ans;
    }
};