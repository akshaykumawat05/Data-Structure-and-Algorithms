class Solution {
public:
    int findprod(int n){
        int prod = 1;
        while(n){
            prod *= n % 10;
            n /= 10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(n){
            if(findprod(n) % t == 0){
                return n;
            }
            n++;
        }

        return 0;
    }
};