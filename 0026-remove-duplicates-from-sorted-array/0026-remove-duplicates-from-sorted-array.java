class Solution {
    public int removeDuplicates(int[] arr) {
        int n = arr.length;
        int last = arr[n -1];
        int i = 0,j = 1;
        for( i =0;i<n;){
            if(arr[i] == last) break; // loop terminater
            while(arr[i] == arr[j]){
                while(j<n-1){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    j++;
                }
                j = i+1;
            }
            i++;
            j=i+1; 
            if(arr[i] == last) break; // loop terminater

        }
        return i + 1;
    }
}