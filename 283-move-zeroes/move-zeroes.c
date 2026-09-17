void moveZeroes(int* nums, int numsSize) {
int j=-1;
int temp;
for(int i=0;i<numsSize;i++){
    if(nums[i]==0){
        j=i;
        break;
    }
}

if(j==-1) return ;
for(int i=j+1;i<numsSize;i++){
    if(nums[i]!=0){
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        j++;
    }
}
}
