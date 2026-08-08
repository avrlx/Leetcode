class Solution {
    public int mySqrt(int n) {
      		int low = 1;
		int high = n;
		int index = 0;
		while (low <= high) {
			int mid = low + (high - low)/2;
			if (mid> n/mid)
				high = mid - 1;
			else {
				index = mid;
				low = mid + 1;
			}
		}
		return index;  
    }
}