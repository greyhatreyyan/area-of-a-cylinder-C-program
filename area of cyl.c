#include<stdio.h>
int main(){
    const float  PI=3.14;
    float r, h, a;
    printf("enter value of radius: ");
    scanf("%f",&r);
    printf("enter value of height: ");
    scanf("%f",&h);
    a=(2*PI*r*h)+(2*PI*r*r);
    printf("a= %.2f cm^2 \n",a);
    return 0;

}
