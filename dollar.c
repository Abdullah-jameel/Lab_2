#include<stdio.h>

int main(int argc, char const *argv[])
{
    int dollars, GBP, JPY, fee;
    printf("Please input the total amount of US Dollars:");
    scanf("%i",&dollars);
    fee=dollars*10.0/100.0;
    printf("Fee is %i\n",fee);
    dollars=dollars-fee;
    dollars=dollars/2;
    GBP=dollars*0.79;
    printf("%i GBP\n",GBP);
    JPY=dollars*127.65;
    printf("%i JPY\n",JPY);

    return 0;
}
