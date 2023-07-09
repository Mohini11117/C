#include<stdio.h>
int main(){
   /* printf("%d\n",8^8);
    int p,q,r;
    printf("Enter a number");
    scanf("\n%d",&p);
    scanf("\n%d ",&q);
    scanf("\n%d",&r);
    printf("\nAverage is %d",(p+q+r)/3);
    
    int num;
    printf("\nenter a number");
    scanf("%d",&num);
    if(num%2==0)
    printf("nnumber is even");
    else
    printf("number is odd");

     
    int day;
    printf("enter a day(1-7)");
    scanf("%d",&day);
    switch(day){
        case 1:printf("sunday\n");
        break;
        case 2:printf("monday\n");
        break;
        case 3:printf("tuesday\n");
        break;
        case 4:printf("wednday\n");
        break;
        case 5:printf("thursday\n");
        break;
        default:printf("enter correct choice");
         


     
}
        int age=18;
        age>=18?printf("\nadult"):printf("child");
        int marks;
        printf("Enter a marks");

        scanf("%d",&marks);
        if(marks>30)
		{
		printf("student is pass");
    
    }
       else
       printf("student is fail");
       int x=2;
       if(x=1)
       printf("x is equal to 1");
       else
	   printf("x is equal not to 1");
	   char ch;
	   printf("Enter a charachter: ");
	   scanf("%c",&ch);
	   if(ch>='A'&& ch<='Z')
	   printf("Upper case");
	   else if(ch>='a' && ch<='z')
	   printf("Lower case");
	   else
	   printf("another char");*/
	   int a,r,s,t;//a=153 1+125+27
	    
	   for (a=100;a<=999;a++){
	   	
	   	r=a%10;//=3
	   s=(a/10)%10;
	   t=a/100;
	   if(a==r*r*r+s*s*s+t*t*t)
	   printf("%d\n",a);
	   //else
	   //printf("No");
	   }
	    
	   //
	   
	   
    return 0;


}

