#include<stdio.h>

void input_two_string(char *a, char *b)
{
	printf("enter the value of the first strings:");
	fgets(a,30,stdin);
	printf("enter the value of the second strings:");
	fgets(b,30,stdin);
}
int compute(char *a, char *b)
{
	int j, l,flen,slen,el,sel;
	int i=0;
	for(i=0;i<30;i++)
	{
		int el=a[i];
		int sel=b[i];
		if(el>sel)
		{
			return 1;
		
		} 
		else if(sel==el)
		{
			i++;
		}
		else
		{
		 return 0;	
		}
	}
	for(j=0;a[j]!='\0';j++)
	{
		flen=j;
	}
	for(l=0;b[l]!='\0';l++)
	{
		slen=l;
	}
	if(flen>slen)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void output(char *a, char *b, int result)
{
	if(result==1)
	{
		printf( "%sis greater than the word\n%s",a,b);
	}
	else if(result==0)
	{
		printf("%sis greater than the word\n%s",b,a);
	}

}
int main()
{
	int r;
	char farr[30];
	char sarr[30];
	input_two_string(farr,sarr);
	r=compute(farr,sarr);
	output(farr,sarr,r);
  return 0;
}