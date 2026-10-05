class Solution {
public:
    int findsum(int x){
        int sum = 0;
        while(x){
            sum += x % 10;
            x /= 10;
        }

        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            if(findsum(nums[i]) == i) return i;
        }

        return -1;
    }
};