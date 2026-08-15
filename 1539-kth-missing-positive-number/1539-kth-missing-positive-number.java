class Solution {
    public int findKthPositive(int[] arr, int k) {
        int low = 0;
        int high = arr.length -1;
        while(low<=high){
            int mid = low +( high - low)/2;
            int orig = mid + 1; // original number has to be at mid
            int missing = arr[mid] - orig; // no of missing numbers = missing
            if(missing >= k) high = mid -1; // if missing >= k go left 
            else {
                low = mid +1; // if missing < k go right
            }
        }
        return high +1+ k; // b/c while loop always at (low = high + 1) in Binary search...
    }
}