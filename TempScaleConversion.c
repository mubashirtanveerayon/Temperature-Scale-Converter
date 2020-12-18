#include <stdio.h>
#include <string.h>
float celtokel(float a)
{
    float r;
    r = a + 273.15;
    return r;
}
float celtofahr(float a)
{
    float r;
    r = (9*a/5) + 32;
    return r;
}
float keltocel(float a)
{
    float r = a - 273.15;
    return r;
}
float fahrtocel(float a)
{
    float r = 5*(a - 32)/9;
    return r;
}
float fahrtokel(float a)
{
    float t,r;
    t = 5*(a - 32)/9;
    r = celtokel(t);
    return r;
}
float keltofahr(float a)
{
    float t,r;
    t = a - 273.15;
    r = celtofahr(t);
    return r;
}
int main()
{
    float a,r;
    int x;
    printf("1.Celsius to Kelvin\n2.Kelvin to Celsius\n3.Celsius to Fahrenheit\n4.Fahrenheit to Celsius\n5.Fahrenheit to Kelvin\n6.Kelvin to Fahrenheit\n");
    printf("Enter the corresponding number of operation you want to execute:");
    scanf("%d",&x);
    if(x==1)
        {
            printf("Waiting for input...\n");
            scanf("%f",&a);
            r = celtokel(a);
            printf("Celsius to Kelvin:%.2f",r);
        }
    else if(x==2)
        {
            printf("Waiting for input...\n");
            scanf("%f",&a);
            r = keltocel(a);
            printf("Kelvin to Celsius:%.2f",r);
        }
    else if(x==3)
        {
            printf("Waiting for input...\n");
            scanf("%f",&a);
            r = celtofahr(a);
            printf("Celsius to Fahrenheit:%.2f",r);
        }
    else if(x==4)
        {
            printf("Waiting for input...\n");
            scanf("%f",&a);
            r = fahrtocel(a);
            printf("Fahrenheit to Celsius:%.2f",r);
        }
    else if(x==5)
        {
            printf("Waiting for input...\n");
            scanf("%f",&a);
            r = fahrtokel(a);
            printf("Fahrenheit to Kelvin:%.2f",r);
        }
    else if(x==6)
        {
            printf("Waiting for input...\n");
            scanf("%f",&a);
            r = keltofahr(a);
            printf("Kelvin to Fahrenheit:%.2f",r);
        }
    else
        printf("Wrong input");
    return 0;
}

