class Solution {
    public int[][] transpose(int[][] arr) {

        int[][] a = new int[arr[0].length][arr.length]; 
        int k =0;
        for (int i = 0; i <arr[0].length ; i++) {
            int m =0;
            for (int j = 0; j <arr.length ; j++) {
                   a [k][m] = arr[j][i];
                   m++;
            }
            k++;

        }
        return a;
    }
    
}