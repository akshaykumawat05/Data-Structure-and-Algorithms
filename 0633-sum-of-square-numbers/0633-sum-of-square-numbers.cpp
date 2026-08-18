class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low = 0, high = sqrt(c);

        while (low <= high) {
            long long sum = low * low + high * high;
            if (sum > c){
                high--;
            }
            else if(sum < c){
                low++;
            }
            else return true;
        }
        return false;
    }
};