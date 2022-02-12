#include <stdio.h>

typedef struct complex
{
  float real;
  float imag;
}complex;

int get_n()
{
  int n;
  printf("Enter no of complex number to be added\n");
  scanf("%d",&n);
  return n;
}

complex input_complex()
{
  complex a;
  printf("Enter complex number\n");
  scanf("%f%f",&a.real,&a.imag);
  return a;
}

void input_n_complex(int n,complex c[n])
{
  int i;
  for(i=0;i<n;i++)
  c[i]=input_complex();
}

complex add(complex a,complex b)
{
  complex temp;
  temp.real = a.real + b.real;
  temp.imag = a.imag + b.imag;
  return (temp);
}

complex add_n_complex(int n,complex c[n])
{
  complex result;
  result.real=0;
  result.imag=0;
  for(int i=0;i<n;i++)
  {
   result=add(result,c[i]);
  }
  return result;
}

void output(int n,complex c[n],complex result)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%.1f+%.1fi + ",c[i].real, c[i].imag);
  }
  printf("%.1f+%.1fi",c[n-1].real, c[n-1].imag);
  printf(" is %.1f+%.1fi",result.real, result.imag);
}

int main()
{
  int n;
  complex c[n], result;
  n=get_n();
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}