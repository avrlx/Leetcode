class Solution {
public:
    int byrecusion(vector<int>& arr, int start, int end, int target) {
        if (start > end)
            return -1;
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            return byrecusion(arr, mid + 1, end, target);
        else
            return byrecusion(arr, start, mid - 1, target);
    }
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        return byrecusion(nums, i, j, target);
    }
};