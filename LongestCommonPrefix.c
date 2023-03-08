#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int i, n = 0;
    char c;

    if (strsSize == 0) return "";

    while (c = strs[0][n]) {
        for (i = 1; i < strsSize; i ++) {
            if (strs[i][n] != c) {
                strs[0][n] = 0;
                return strs[0];
            }
        }
        n ++;
    }
    strs[0][n] = 0;
    return strs[0];
}
