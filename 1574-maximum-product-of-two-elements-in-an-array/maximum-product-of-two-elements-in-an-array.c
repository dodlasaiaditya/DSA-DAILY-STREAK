int maxProduct(int* nums, int numsSize) {
   for(int i=0;i<numsSize;i++){
    for(int j=0;j<numsSize-i-1;j++){
    if(nums[j]>nums[j+1]){
            int temp =nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
    }
   }
   int left = nums[numsSize-1];
   int right = nums[numsSize-2];
   int result =(left-1)*(right-1);
 return result; 
}