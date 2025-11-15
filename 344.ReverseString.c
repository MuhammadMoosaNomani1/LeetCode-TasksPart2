#include<stdio.h>
#include<string.h>
void reverseString(char* s, int sSize) {
	int i=0, j=sSize-1;
    while(i<j){
    	char temp=s[i];
    	s[i]=s[j];
    	s[j]=temp;
		i++, j--;
	}
	
}
int main(){
	char s[]={'H','e','l','l','o','\0'};
	printf("%s",s);
	int len= strlen(s);
      reverseString(s,len);
	printf("\nReversed string is %s",s);
	return 0;
}
