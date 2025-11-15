#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int pos=0;
    for(int i=0;i<numsSize;i++){
    	if(nums[i]!=0) {
    		nums[pos++]=nums[i];
		}
	}
	while(pos<numsSize){
		nums[pos++]=0;
	}
	
}
int main(){
	int nums[]={0,1,0,3,12};
	moveZeroes(nums, 5);
	for(int i=0;i<5;i++){
	printf("%d ", nums[i]);
	}
	return 0;
}
