class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;

        // Overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool sign = true;

        if (dividend >= 0 && divisor < 0)
            sign = false;

        if (dividend < 0 && divisor > 0)
            sign = false;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long ans = 0;

        while (n >= d) {
            long long count = 0;

            // Find the largest power of 2 such that
            // d * 2^count <= n
            while (n >= (d << (count + 1))) {
                count++;
            }

            ans += (1LL << count);

            // Instead of:
            // n = n - d * (1 << count);

            n = n - (d << count);
        }

        if (!sign)
            ans = -ans;

        return (int)ans;
    }
};