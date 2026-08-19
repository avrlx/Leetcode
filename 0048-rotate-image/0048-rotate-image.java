class Solution {
    public void rotate(int[][] arr) {
        for(int i = 0 ;i<arr.length;i++){
            for(int j =0;j<i;j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        for(int i = 0 ;i<arr.length;i++){
            int low = 0;
            int high = arr.length -1;
            while(low<high){
                int temp = arr[i][low];
                arr[i][low] = arr[i][high];
                arr[i][high] = temp;
                low++;
                high--;
            }
    
        }
    }

}