#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getData(char chain[100]);
void condition(char chaine[100], int a, int b, int c, int d);

int main()
{
    int a, b, c,  d;
    char chaine[100];
    getData(chaine);
    condition(chaine , a, b, c, d);

    return 0;
}

void getData(char chaine[100])
{
    do
        {
            printf("Entrer l'addrress IP: ");
            scanf("%s", chaine);

        }while(!strstr(chaine, "."));

    printf("\n");

}
void condition(char chaine[100], int a, int b, int c, int d)
{
    
    int x=128, y=192, z=224, w=240, e=255;

    sscanf(chaine, "%d.%d.%d.%d", &a, &b, &c, &d);

    if (a<x && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de A\n");
        }
    else if(a>=x && a<y && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de B\n");
        }
    else if(a>=y && a<z && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de C\n");
        }
    else if(a>=z && a<w && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de D\n");
        }
    else if(a>=w && a<e && b<e && c<e && d<e)
        {
            printf("L'address IP est au Classe de E\n");
        }
    else if (a>e || b>e || c>e || d>e)
        {
            printf("ERREUR Address IP est invalide : %d.%d.%d.%d\n\n",a, b, c, d);
        }
}