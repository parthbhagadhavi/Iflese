#include<stdio.h>
main()
{
	int s;
	printf("enter the degree\n");
	scanf("%d",&s);
	printf("degree is %d\n",s);
	
	if(s>=0&&s<=90){
		
		printf("first quadrant");
	}
	else if(s>=91&&s<=180){
		
		printf("second quadrant");
	}
	else if(s>=181&&s<=270){
		
		printf("third quadrant");
	}
	else if(s>=271&&s<=360){
		printf("fourth quadrant");
	}
	
	
}