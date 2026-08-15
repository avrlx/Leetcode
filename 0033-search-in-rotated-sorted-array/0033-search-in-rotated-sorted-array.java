class Solution {
    public int search(int[] arr, int key) {
        int low =0 ;
        int high= arr.length - 1;
        while (low <= high){
            int mid = low + (high - low )/2;
            if(arr[mid] == key) return mid;// if element element is found..
            else if(arr[low] <= arr[mid]){ // if left is sorted
                if(arr[low] <= key && arr[mid] > key) high = mid -1; // if found in left 
                else low = mid +1; // else right
            }
            else{ // if right is sorted
                if(arr[high] >= key && arr[mid] < key) low = mid +1; // if found in right
                else high = mid -1; // else left
            }
        }
        return -1;
    }
}