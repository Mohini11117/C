#include<stdio.h>
int main(){
     int side1, side2;
    printf("Enter side1 value\n");
    scanf(" %d",&side1);
    printf("Enter side2 value\n");
    scanf(" %d",&side2 );
    int Area = side1* side1; 
    printf("Area of Square is %d",Area);

    
    printf("\n***********Area Of Rectangle**********\n");
    printf("Area of Rectangle is %d",side1*side2);


    printf("\n***********Area Of Circle**********\n");
    float radius;
    printf("Enter a Radius Of Circle: ");
    scanf("%f",&radius);

    printf("Area of Circle is %f",3.14*radius*radius);



    return 0; 
}