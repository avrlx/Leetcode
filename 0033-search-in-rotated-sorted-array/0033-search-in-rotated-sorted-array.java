class Solution {
    public int search(int[] arr, int key) {
        int low =0 ;
        int high= arr.length - 1;
        while (low <= high){
            int mid = low + (high - low )/2;
            if(arr[mid] == key) return mid;
            else if(arr[low] <= arr[mid]){
                if(arr[low] <= key && arr[mid] > key) high = mid -1;
                else low = mid +1;
            }
            else{
                if(arr[high] >= key && arr[mid] < key) low = mid +1;
                else high = mid -1;
            }
        }
        return -1;
    }
}