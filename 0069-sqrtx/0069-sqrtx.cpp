class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) {
        return x;  // The square root of 0 and 1 is itself
    }

    long left = 2, right = x / 2;   // right = x / 2 because the square root of any number greater than 1 will not exceed x / 2.
    long mid, num;

    while (left <= right) {
        mid = left + (right - left) / 2;
        num = mid * mid;
        if (num > x) {
            right = mid - 1;
        } else if (num < x) {
            left = mid + 1;
        } else {
            return mid;  // Exact square root found
        }
    }

    return right;   // The largest integer whose square is less than x
    }
};