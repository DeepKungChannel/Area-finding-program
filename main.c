#include <stdio.h>

// Declare variable
char options;



void get_option(){
    printf("a. Finding a area of rectangle\n");
    printf("b. Finding a area of circle\n");
    printf("c. Finding a area of triangle\n");
    printf("Select your option: ");
    scanf("%c", &options);
}  

double area_rectangle(){
    printf("Enter the length of rectangle: ");
    double length;
    scanf("%lf", &length);
    printf("Enter the width of rectangle: ");
    double width;
    scanf("%lf", &width);
    return length * width;
}

double area_circle(){
    printf("Enter the radius of circle: ");
    double radius;
    scanf("%lf", &radius);
    double pi= 22.0/7.0;
    return pi * radius * radius;
}

double area_triangle(){
    printf("Enter the base of triangle: ");
    double base;
    scanf("%lf", &base);
    printf("Enter the height of triangle: ");
    double height;
    scanf("%lf", &height);
    return (base * height) / 2;
}

int main(){
    printf("\n\n");
    get_option();
    if (options == 'a'){
        printf("--------------------------------\n");
        double result = area_rectangle();
        printf("Result = %.15lf\n", result);
    }
    else if (options == 'b'){
        printf("--------------------------------\n");
        double result = area_circle();
        printf("Result = %.15lf\n", result);
    }
    else if (options == 'c'){
        printf("--------------------------------\n");
        double result = area_triangle();
        printf("Result = %.15lf\n", result);
    }
    else{
        printf("Invalid option\n");
    }


    return 0;
}