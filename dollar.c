#include<stdio.h>

int main(int argc, char const *argv[])
{
    float dollars, GBP, JPY, fee;
    printf("Please input the total amount of US Dollars:");
    scanf("%f",&dollars);
    fee=dollars*10.0/100.0;
    printf("Fee is %.2f\n",fee);
    dollars=dollars-fee;
    dollars=dollars/2;
    GBP=dollars*0.79;
    printf("%.2f GBP\n",GBP);
    JPY=dollars*127.65;
    printf("%.0f JPY\n",JPY);

    return 0;
}
