#include<stdio.h>

float input()
{
	float n;
    printf("for what number do you want square root :");
	scanf("%f",&n);
	return n;
}

float my_sqrt(float n)
{
	float x,t=0,l;
	x=n/2;
	if(n==0||n==1)
	{
		return n;
	}
	for(l=0;l<x;l++)
	{
	 t=(x+n/x)/2;
	 x=t;
	}
	return t;
}

void output(float n, float c)
{
	printf("the square root of %.1f is:%.2f",n,c);
}

int main()
{
	float v,c;
	v=input();
	c=my_sqrt(v); 
	output(v,c);
	return 0;	
}