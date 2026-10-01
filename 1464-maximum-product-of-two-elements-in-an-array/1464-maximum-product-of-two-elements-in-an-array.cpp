class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int second = 1;

        for(auto x : nums){
            if(x > first){
                second = first;
                first = x;
            }
            else if(x > second){
                second = x;
            }
        }

        return (first - 1) * (second - 1); 
        
    }   
};