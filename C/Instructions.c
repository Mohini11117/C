#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    a=2,b=4;
    int c=pow(a,b);
    printf("power of %d to the %d is: %d\n",a,b,c);
    printf("%d",8%3);
    int f=3;
    float d=4.5;
    printf("\nOutput of opeartion is: %f",f+d);
    printf("\n**********Type Conversion**********\n");
    int p=(int)1.99999;
    printf("%d", p);
    printf("\n");
    printf("\n*********Arthmetic Instructions********");
    printf("\n%d",5*2-2*3);
    printf("\n%d",5*(2/2)*3);
    printf("\n%d",5+2/2*3);
    printf("\n*********operators********");
    printf("\n%d",4>3);
    printf("\n%d",4<3);
    int s,t;
    s=4;t=5;
    s+=t;
    printf("\n%d\n",s);
    printf("**************Problems************\n");
    
    printf("%d",8^8);
    
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num%2==0)
    printf("\nnumber is even");
    else
    printf("number is odd");

    

    return 0;
}