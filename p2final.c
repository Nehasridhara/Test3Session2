#include<stdio.h>
struct _fraction
{
int num,den;
}

typedef struct_fraction Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("enter one fraction(num den):\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  float a=(float)f1.num/f1.den;
  float b=(float)f2.num/f2.den;
  float c=(float)f3.num/f3.den;

  if(a<b && a<c)
  {
    return f1;
  }
  else if(b<c) 
  {
    return f2;
  }
  else
  {
    return f3;
  }
}

void output( Fraction smallest)
{
  printf("the smallest fraction is %d/%d",smallest.num,smallest.den)
}

int main()
{
  Fraction f1=input_fraction();
  Fraction f2=input_fraction();
  Fraction f3=input_fraction();
  Fraction small=smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,small);
  return 0;
}