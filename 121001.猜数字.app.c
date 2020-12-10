#include<stdio.h>
#include<string.h>
void main() {
	 char name[]="666";
	 char player[]="王二狗";
	 int  a,b;
	 printf("想玩游戏吗？请输入您的名字。友情提示：该软件由王二狗赞助~~\n");
	 scanf("%s",&name);
	 if( strcmp(name,player) == 0){
	 printf("欢迎您，王二狗先生\n");
	 printf("      此游戏为猜数字小游戏         \n");
	 printf("      您一共有10次机会         \n");
	 for(a=0;a<10;a++){
	 scanf("%d",&b);
	 if(b<10&&b>=1){printf("亲爱的王二狗先生，您输入的数值太小了\n");
	 }
	 else if(b>10&&b<=20){printf("亲爱的王二狗先生，您输入的数值太大了\n");
	 }
	 else if(b==10){printf("哇！王二狗先生，你好棒啊~~\n");
	 }
	 else printf("请猜1~20的数值\n");
	 }
	 }
	 else printf("非王二狗不能玩此游戏\n");
}
