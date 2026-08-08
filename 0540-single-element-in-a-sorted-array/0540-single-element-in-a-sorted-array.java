class Solution {
    public int singleNonDuplicate(int[] arr) {
        int n = arr.length;
        //one element
        if (n==1) return arr[0];
        // if first is single
        if(arr[0] != arr[1]) return arr[0];
        // if last is single
        if(arr[n-1] != arr[n-2] ) return arr[n-1];

        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low +(high -low)/2;
            // if mid is single 
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid + 1]) return arr[mid];
            int f = mid;
            int s = mid;
            // if mid is second element
            if(arr[mid] == arr[mid -1] ) f= mid-1;
            // if mid is first element
            else s = mid +1;
            //elements in left side
            int first = f- low;
            // elements in right side
            int second = high - s;
            //if left is even
            if(first %2==0) low = s +1;
            // if right is even
            else high = f -1; 
        }
        return 1;
    }
}