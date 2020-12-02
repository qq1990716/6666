#include<stdio.h>
void main(){
	char i;
	scanf("%c",&i);
	switch(i){
	case 'a':printf("左");break;
	case 'w':printf("上");break;
	case 'd':printf("右");break;
	case 's':printf("下");break;
	default:printf("请输入AWDS");break;
	}
}
