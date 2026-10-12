#include <stdio.h>
int main(){
    int id,quantity;
    float price,total;
    printf("enter product ID:");
    scanf("%d",&id);
    printf("enter quantity:");
    scanf("%d",&quantity);
    printf("enter price");
    scanf("%f",&price);

    total=quantity*price;
    printf("\nPRODUCT ID:%d",id);
    printf("\n QUANTITY:%d",quantity);
    printf("\nPRICE:%.2f",price);
    printf("\nTOTAL VALUE:%.2f",total);

    if(quantity<10)
    printf("\n---STOCK IS LOW.---");
    else
    printf("\n---STOCK IS AVAILABLE.---");
    return 0;
}