int maxOperations(int* nums, int numsSize) {
    int count=1;
    int tsum=nums[0]+nums[1];
    for (int i=2;i+1<numsSize;i+=2){
        if(nums[i]+nums[i+1]==tsum){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
