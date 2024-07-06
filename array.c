//array program using switch case
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//initialization 
int I,j,a[20];
int b[2][2];
int c[2][2];
int e,max=0,min=0,sum=0;
int t[22][63];
//taking input of a[I]
main()
{
for (I=0;I<2;I++)
{
printf("Enter a number [%d]\n",I+1);
scanf("%d",&a[I]);
}
printf("enter your choice");
scanf("%d",&e);
//using this d.m so that it can't ask me output of 2d arrays
if(e>4){
//taking input of b
for (I=0;I<2;I++){
for(j=0;j<2;j++){
printf("Enter a number of b[%d]\n",I+1);
scanf("%d",&b[I][j]);
}
}
//taking input of c
for (I=0;I<2;I++){
for(j=0;j<2;j++){
printf("Enter a number of c[%d]\n",I+1);
scanf("%d",&c[I][j]);
}
}
}
//choice
/*
printf("enter your choice");
scanf("%d",&e);*/
switch (e)
{
case 1: //print number 
for (I=0;I<2;I++)
{
printf("The numbers stored in array are %d\n",a[I]);
}
break;
case 2://sum of array

for (I=0;I<2;I++)
{
sum=sum+a[I];
}
printf("sum is %d \n",sum);
break;
case 3: //maximum numbers
max=a[0];
for (I=0;I<2;I++)
{
if(max<a[I])
max=a[I];
}
printf("sum is %d \n",max);
break;
case 4: //minimum number
min=a[0];
for (I=0;I<2;I++)
{
if(min>a[I])
min=a[I];
}
printf("sum is %d \n",min);
break;

case 5 : //addition

for (I=0;I<2;I++){
for(j=0;j<2;j++){
printf("The sum of numbers is %d \n",b[I][j]+c[I][j]);

}

}
printf("\n\n");
break;

case 6 : //subtraction 
for (I=0;I<2;I++){
for(j=0;j<2;j++){
printf("The subtraction of numbers is %d \n",b[I][j]-c[I][j]);

}

}
printf("\n\n");
break;

case 7://transpose 
for (I=0;I<2;I++){
for(j=0;j<2;j++){
printf("The transpose  of  matrix b is %d \n",b[j][I]);

}

}
printf("\n\n");
break;
case 8 : //exit
exit(0);
break;

default:

printf("wrong output please try again!!");

}
return 0;
}
