#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize);
int main() {
    int numsSize,i;
    scanf("%d",&numsSize);
    
    int nums[numsSize];
    for(i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    int returnSize;                 
    int* result = sortedSquares(nums,numsSize,&returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* res = malloc(numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++){
        res[i]=nums[i]*nums[i];
    }
    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-i-1;j++){
            if(res[j]>res[j+1]){
                int temp=res[j];
                res[j]=res[j+1];
                res[j+1]=temp;
		    }
	    }
    }
    *returnSize=numsSize;
    return res;
}
