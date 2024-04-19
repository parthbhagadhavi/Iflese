#include<stdio.h>
#include<conio.h>
main()
{
int tem;
clrscr();
printf("enter the temprature \n ");
scanf("%d",&tem);
printf("temprature is %d\n",tem);


if(tem>=30){

printf("hot");
}

else if(tem>=10&&tem<=30){

printf("Moderate");
}
else if(tem<=10){
printf("cold");
}
getch();
}