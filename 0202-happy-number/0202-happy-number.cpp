class Solution {
public:
    int digitSquareSum(int n){
        int sum = 0, temp = 0;
        while(n){
            temp = n % 10;
            sum += temp * temp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow, fast;
        slow = fast = n;

        while(fast != 1){
            slow = digitSquareSum(slow);
            fast = digitSquareSum(digitSquareSum(fast));

            if(slow == fast && slow != 1){
                return false;
            }
        }
        return true;
    }
};