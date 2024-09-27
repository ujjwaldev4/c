#include<stdio.h>
#include<math.h>
int main()
 {
 	float p,r,t,ci;
 	printf("enter principle,time and rate");
 	scanf("%f%f%f",&p,&r,&t);
 	float amt=p*((pow((1+r/100),t)));
 	ci=amt-p;
 	printf(" %f",ci);
 return 0;
 }
