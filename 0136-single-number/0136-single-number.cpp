class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        for(int i=0; i<n; i++){
            int xor2 = xor1^nums[i];
            xor1 = xor2;
        }

        return xor1;
    }
};