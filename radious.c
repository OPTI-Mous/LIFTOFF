#include<stdio.h>

int main()
{
  float radius, area, circumference, diameter;
 
  printf(" Please Enter the radius of a circle : ");
  scanf("%f",&radius);
 
  diameter = 2 * radius;
  circumference = 2 * 3.141 * radius;
  area = 3.141 * radius * radius; 
 
  printf(" Diameter Of a Circle = %f", diameter);
  printf(" Circumference Of a Circle = %f", circumference);
  printf(" Area Of a Circle = %f", area);

  return 0;
}