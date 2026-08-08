class Solution {
    public int maximumCount(int[] arr) {
        int low = 0;
        int high = arr.length - 1;
        int index = 0;
        // for positive elements
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > 0)
                high = mid - 1;
            else {
                low = mid + 1;
            }
        }
        index = arr.length - low;

        // for negative elements
        low = 0;
        high = arr.length - 1;
        int index2 = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= 0)
                high = mid -1;
            else {
                low = mid + 1;
            }
        }
        index2 = low ;
        
        if (index > index2)
            return index;
        return index2;
    }
}