#include <stdio.h>

int input()
{
  int a;
  printf("Enter numbers:");
  scanf ("%d",&a);
  return a;
}

int cmp(int a,int b,int c)
{
  int large;
  
   if (a>=b && a>=c)
       large =a;

       if (b>=c)
           large = b;

          if (c>=a && c>=b)
              large = c;
    return large;
}

int output(int a,int  b,int c,int largest)
{
  printf ("The largest number out of %d,%d,%d is %d",a,b,c,largest);
  return 0;
}

int main()
{
  int a = input();
   int b = input();
    int c = input(); 

     int largestnumber = cmp(a,b,c);
     
     printf ("largest number =%d\n",largestnumber);
     
     output(a,b,c,largestnumber);
    
     return 0;
} 