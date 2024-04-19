#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter your age : \n");
scanf("%d",&a);
printf("age is %d\n",a);


if(a>=18){
printf("You are eligible to vote");
}
else{
printf("you are not eligible to vote ");
}



getch();

}
    