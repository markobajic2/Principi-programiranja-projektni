#include <stdio.h>

int unesi(){
    int broj;
    printf("Unesite broj\n");
    scanf("%d", &broj);
    return broj;
}

int faktorijel(int n){
    int rezultat=1;
    for(int i=1;i<=n;i++)
        rezultat*=i;
    return rezultat;
}

void prikaziFaktorijele(int n)
{
    int rezultat=1;
    for(int i=1;i<=n;i++)
    {
        rezultat*=i;
        printf("%d! = %d\n", i, rezultat);
    }
}

int main() {
    printf("************************************\n");
    printf("    IZRACUNAVANJE FAKTORIJELA       \n");
    printf("************************************\n");
    printf("1. Unos broja\n");
    printf("2. Izračunaj faktorijel\n");
    printf("3. Prikazi faktorijel za sve brojeve od 1 do unesenog broja\n");
    printf("0. Izlaz\n");
    printf("************************************\n");

    int a,f;
    int x=-1;
    do{
    printf("Unesite opciju:\n");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
        {
            x = unesi();
            printf("Unijeli ste broj %d\n", x);
            break;
        }
        case 2:
        {
            if(x==-1)
            {
                printf("Prvo unesite broj!\n");
                break;
            }
            f = faktorijel(x);
            printf("Faktorijel broja %d je %d\n", x, f);
            break;
        }
        case 3:
        {
            if(x==-1)
            {
                printf("Prvo unesite broj!\n");
                break;
            }
           prikaziFaktorijele(x);
           break;
        }
        default:
            printf("Pogresan unos!\n");
            break;
    }
    }while(a=!0);

    return 0;
}
