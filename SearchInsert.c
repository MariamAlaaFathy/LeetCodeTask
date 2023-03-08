#include <stdio.h>

int searchInsert(int A[], int n, int target) {
    int l, r, m;
    l = 0;
    r = n - 1;
    while (l <= r) {
        m = (l + r) / 2;
        if (A[m] == target) {
            return m;
        }
        else if (A[m] < target) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return l;
}
