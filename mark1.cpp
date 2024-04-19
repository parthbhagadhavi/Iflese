#include<stdio.h>

main()
{
	int x;
printf("enter the value of a\n");
scanf("%d",&x);
printf("value of a %d\n",x);

if(x>=90&&x<=99){
	
	printf(" grade= a");
	
}
else if(x>=80&&x<=89){
	printf("grade=b");
		
}	
	
	
	else if(x>=70&&x<=79){
	printf("grade=c");
		
}	
	
else if(x>=60&&x<=69){
	printf("grade=d");
		
}	else{
	
	printf("f");
}

}