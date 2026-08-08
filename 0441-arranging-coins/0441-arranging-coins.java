class Solution {
    public int arrangeCoins(int n) {
        int low = 1;
        int high = n;
        int index = 0;
        while (low <=high){
            int mid = low + (high - low)/2;
            // make mid to long if not multiplication overflows before the result is assigned to long...
            long sum = ((long)mid*((long)mid+1))/2;
            if(sum == n) return mid;
            if(sum > n ) high = mid -1;
            else { 
                index = mid;
            low = mid +1;
            }
        }    
        return index;    
    }
}