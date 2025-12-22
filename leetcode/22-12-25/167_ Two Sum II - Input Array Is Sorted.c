int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int l=0;
    int r=numbersSize-1;
    int* res = malloc(2 * sizeof(int));
    *returnSize = 2;
    while(l<r){
        int sum=numbers[l]+numbers[r];
        if(sum==target){
            res[0]=l+1;
            res[1]=r+1;
            return res;
        }
        else if(sum<target){
            l++;
        }
        else{
            r--;
        }
    }
    
    return 0;
}
