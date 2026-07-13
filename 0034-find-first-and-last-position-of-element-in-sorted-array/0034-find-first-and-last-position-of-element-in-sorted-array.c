int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int f = -1, l = -1;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            if (f == -1) {
                f= i;
            }
            l = i;
        }
    }

    int* r = (int*)malloc(2 * sizeof(int));
    r[0] = f;
    r[1] = l;
    *returnSize = 2;
    return r;
}