#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0) return 0;
   int pos=1;
   for(int i=1;i<numsSize;i++){
   	if(nums[i]!=nums[i-1]){
   		nums[pos++]=nums[i];
	   }
   }
   return pos;
}

int main(){
	int nums[]={1,1,2};
	int n=sizeof(nums)/sizeof(nums[0]);
	int k =removeDuplicates(nums, n);
	printf("%d, nums=[%d,%d]\n",k,nums[0],nums[1]);
	return 0;
}
