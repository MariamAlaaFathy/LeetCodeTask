#include <stdio.h>

int* twoSum(int nums[], int size, int target){
	int i, j;
	int indices[2];
	
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                indices[0] = i;
                indices[1] = j;
                return  indices;
            }
        }
    }
    return indices;
}
