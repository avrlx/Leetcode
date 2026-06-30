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