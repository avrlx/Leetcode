class Solution {
    public boolean searchMatrix(int[][] arr, int k) {
        int i =0;
        int j = arr[0].length - 1;
        while(j>=0 && i < arr.length){
            if(arr[i][j] > k ) j--;
            else if(arr[i][j] < k) i++;
            else return true;
        }
        return false;
    }
}