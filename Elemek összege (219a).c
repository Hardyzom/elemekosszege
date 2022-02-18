#include <stdio.h>

int main()
{
    int szam;
    int osszeg = 0;
    do{
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        if(szam!=0){
            osszeg+=szam;
        }
    }
    while(szam!=0);
    printf("\n");
    printf("Elemek osszege: %d\n",osszeg);
    return 0;
}