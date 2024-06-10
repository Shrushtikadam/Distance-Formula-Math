#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    double x1.y1; /*For storing x-y coordinates of point A*/
    double x2.y2; /*For storing x-y coordinates of point B*/
    double x3.y3; /*For storing x-y coordinates of point C*/

    double a; /*For storing length of side BC*/
    double b; /*For storing lenght of side CA*/
    double c; /*For storing lenght of side AB*/

    double A; /*For storing measure of angle A in radians*/
    double B; /*For storing measure of angle B in radiance*/
    double C; /*For storing measure of angle C in radians*/

    printf("Enter x coordiante of vertex A:");
    scanf("%lf", &x1);

    printf("Enter y coordinates of vertex B:");
    scanf("%lf", &y1);

    printf("Enter x coordinates of vertex B:");
    scanf("%lf", &x2);

    printf("Enter y coordinates of vertex C:");
    scanf("%lf", &y2);

    printf("Enter y coordinates of vertex C:");
    scanf("%lf", &x3);
    
    printf("Enter y coordinates of vertex C:");
    scanf("%lf", &y3);
    
    /* a= length of (BC)*/
    a=sqrt(pow(x2-x3,2)+ pow(y2-y3,2));

    /*b= length of (CA) */
    b=sqrt(pow(x3-x1,2)+ pow(y3-y1,2));
    
    /* c= length of (AB)*/
    c= sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    if((a+b) <=c || (b+c) <= a||(c+a) <=b);


    {
        puts("Sum of any two sides of a traingle  is greater than its third side");
        puts("Therefore, A,B, and Care collinear points that can form a triangle);

    }


}