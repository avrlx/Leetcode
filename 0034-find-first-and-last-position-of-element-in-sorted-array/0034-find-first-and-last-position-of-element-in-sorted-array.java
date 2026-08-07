class Solution {
    public int[] searchRange(int[] arr, int x) {
        int n = arr.length;

        int[] a = new int[2];
        int low = 0;
        int high = n - 1;
        int index = -1;
        int mid = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] < x)
                low = mid + 1;
            else if (arr[mid] > x)
                high = mid - 1;
            else {
                index = mid;
                high = mid - 1;
            }
        }
        a[0] = index;
        low = 0;
        high = n - 1;
        index = -1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] < x)
                low = mid + 1;
            else if (arr[mid] > x)
                high = mid - 1;
            else {
                index = mid;
                low = mid + 1;
            }
        }
        a[1] = index;
        return a;
    }
}
