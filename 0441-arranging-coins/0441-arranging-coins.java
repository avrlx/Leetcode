class Solution {
    public int arrangeCoins(int n) {
        long low = 1,high = n;
        while (low <=high){
            long mid = low + (high - low)/2;
            // make mid to long if not multiplication overflows before the result is assigned to long...
            long sum = mid*(mid+1)/2;
            if(sum == n) return (int)mid;
            if(sum > n ) high = mid -1;
            else { 
            low = mid +1;
            }
        }    
        return (int)high;    
    }
}