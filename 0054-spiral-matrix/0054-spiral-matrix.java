class Solution {
    public List<Integer> spiralOrder(int[][] a) {
        List<Integer> arr = new ArrayList<>();
        int start_row = 0;
        int end_row = a.length - 1;
        int start_column = 0;
        int end_column = a[0].length - 1;
        while(start_row<=end_row && start_column<= end_column){
            // go right
            for(int i = start_column ; i<=end_column;i++)
            arr.add(a[start_row][i]);
            start_row++;
            // condition check
            if(start_row>end_row || start_column>end_column) break;

            // go down
            for(int j = start_row ; j<=end_row;j++)
            arr.add(a[j][end_column]);
            end_column--;
            // condition check
            if(start_row>end_row || start_column>end_column) break;

            // go left
            for(int i = end_column;i>=start_column;i--)
            arr.add(a[end_row][i]);
            end_row--;
            // condition check
            if(start_row>end_row || start_column>end_column) break;

            // go up
            for(int j = end_row;j>=start_row;j--)
            arr.add(a[j][start_column]);
            start_column++;
        }
        return arr;
    }
}