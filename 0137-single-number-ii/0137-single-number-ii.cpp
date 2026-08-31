class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int bit_index=0; bit_index<=31; bit_index++){
            int count = 0;
            for(int i=0; i<n; i++){
                if(nums[i] & (1 << bit_index)){
                    count++;
                }
            }
            if(count % 3 == 1){
                ans = ans | (1 << bit_index);
            }
        }

        return ans;
    }
};