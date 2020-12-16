#include<stdio.h>
int function(int a){
	if(a<=0){
	return 0;
	}
    return a+function(a-1);
}
void main(){
    int c;
	scanf("%d",&c);
	printf("%d",function(c));
}
