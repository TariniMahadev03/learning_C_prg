#include <stdio.h>

int jump(int* nums, int numsSize) {
    int jumps = 0;
    int end = 0;
    int farthest = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        if (i + nums[i] > farthest) {
            farthest = i + nums[i];
        }

        if (i == end) {
            jumps++;
            end = farthest;
        }
    }

    return jumps;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    printf("Minimum jumps: %d\n", jump(nums, numsSize));

    return 0;
}