/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106*/

double findMedianSortedArrays(int* a, int m, int* b, int n) {
    int* x = (int*)malloc((m + n) * sizeof(int));
    int i, j;
    for (i = 0; i < m; i++) {
        x[i] = a[i];
    }
    for (i = 0; i < n; i++) {
        x[m + i] = b[i];
    }
    int l = m + n;
    for (i = 0; i < l - 1; i++) {
        for (j = 0; j < l - 1 - i; j++) {
            if (x[j] > x[j + 1]) {
                int temp;
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    float f;
    if (l % 2 != 0) {
        f = x[l / 2];
        free(x);
        return f;
    }
    f = (x[l / 2- 1] + x[l / 2]) / 2.0;

    free(x);
    return f;
}