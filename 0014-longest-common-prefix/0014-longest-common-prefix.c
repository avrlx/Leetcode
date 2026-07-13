char* longestCommonPrefix(char** strs, int n) {

    if (n == 0) {
        char* result = malloc(1);
        result[0] = '\0';
        return result;
    }
    

    int prefix_len = 0;
    while (1) {
        if (strs[0][prefix_len] == '\0') {
            break;
        }
        
        int all_match = 1;
        for (int i = 1; i < n; i++) {
            if (strs[i][prefix_len] != strs[0][prefix_len] || 
                strs[i][prefix_len] == '\0') {
                all_match = 0;
                break;
            }
        }
        
        if (!all_match) {
            break;
        }
        
        prefix_len++;
    }
    
    char* result = malloc(prefix_len + 1);
    
    for (int i = 0; i < prefix_len; i++) {
        result[i] = strs[0][i];
    }
    result[prefix_len] = '\0';
    
    return result;
}