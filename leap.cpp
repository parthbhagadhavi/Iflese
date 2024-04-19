#include<stdio.h>
main()
{
	int a;
	printf("enter the year:-\n");
	scanf("%d",&a);
	printf("year is %d\n",a);
	
	if(a%4==0 && a%100!=0 || a%400==0){
		
printf("leap year %d\n",a);		
		
	}else{
		printf("not leap year%d",a);
	}
	
}