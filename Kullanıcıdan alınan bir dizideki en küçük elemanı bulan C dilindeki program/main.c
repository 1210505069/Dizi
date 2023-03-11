#include <stdio.h>
#include <stdlib.h>

int enkefonk(int dizi[], int boyut)
{
    int enke = dizi[0]; // enke, en kucuk eleman ilk eleman olarak atanir
    int i = 1;
    for (i; i < boyut; i++)
	{
        if (dizi[i] < enke) 
		{
            enke = dizi[i]; // enk guncellenir
        }
    }
    return enke; // en kucuk elemani dondurur
}

int main(int argc, char *argv[])
{
    int islemdizi[100];
    int boyut;
    
    printf("Dizi boyutunu girin: ");
    scanf("%d", &boyut);
    
    printf("Dizinin elemanlarini girin: ");
    int j = 0;
    for (j; j < boyut; j++) 
	{
        scanf("%d", &islemdizi[j]);
    }
    
    int enke = enkefonk(islemdizi, boyut); // en kucuk eleman bulur
    printf("En kucuk eleman: %d", enke);// en kucuk eleman yazdirilir
    
    return 0;
}

