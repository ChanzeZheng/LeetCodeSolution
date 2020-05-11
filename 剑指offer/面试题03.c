int findRepeatNumber(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++) {
        while(nums[i]!=i) {
            int m = nums[nums[i]];
            if(nums[i]==m) {
                return nums[i];
            }
            else{
                nums[nums[i]] = nums[i];
                nums[i] = m;
            }
        }
    }
    return 0;
}
