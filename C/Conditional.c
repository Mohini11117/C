#include <stdio.h>
int main(){
    int day;
    printf("enter a day(1-7)");
    scanf("d",&day);
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
    return 0;
}