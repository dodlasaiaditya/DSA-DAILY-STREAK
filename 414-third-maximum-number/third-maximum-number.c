#include <limits.h>

int thirdMax(int* nums, int numsSize) {
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        long val = nums[i];

        if (val == first || val == second || val == third)
            continue;

        if (val > first) {
            third = second;
            second = first;
            first = val;
        } else if (val > second) {
            third = second;
            second = val;
        } else if (val > third) {
            third = val;
        }
    }

    return third == LONG_MIN ? (int)first : (int)third;
}