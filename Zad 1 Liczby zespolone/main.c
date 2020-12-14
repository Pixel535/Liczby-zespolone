#include <stdio.h>
#include <stdlib.h>

struct zespolone
{
     double re;
     double im;
};


int main()
{
    struct zespolone zespolonex;
    zespolonex.re;
    zespolonex.im;

    struct zespolone zespoloney;
    zespoloney.re;
    zespoloney.im;


    printf("Podaj liczbe zespolona x:\n");
    printf("Re: ");
    scanf("%lf", &zespolonex.re);

    printf("Im: ");
    scanf("%lf", &zespolonex.im);



    printf("Podaj liczbe zespolona y:\n");
    printf("Re: ");
    scanf("%lf", &zespoloney.re);

    printf("Im: ");
    scanf("%lf", &zespoloney.im);

    dodaj(zespolonex.re, zespoloney.re, zespolonex.im, zespoloney.im);

    return 0;
}



void dodaj(double rex, double rey, double imx, double imy)
{


    printf("Wynik: \n");
    printf("Re: %lf\n", rex + rey);
    printf("Im: %lf", imx + imy);

}
