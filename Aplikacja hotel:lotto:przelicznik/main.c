//
//  main.c
//  xx
//
//  Created by Piotr on 12/01/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void hotel_1(void);
int przelicznik_cen(int x, int y);
void hotel_2(void);
void hotel_3(void);
int wybor_hotelu(void);
void wybor_programu(void);
int najmniejsza(void);
int lotto(void);
int zamiana_na_tony(void);

// Definicja struktury Osoba
struct Osoba {
    char imie[20];
    char nazwisko[20];
    int wiek;};
//FUNKCJA GŁÓWNA
int main(void)
{
   //STRUKTURA
       struct Osoba pierwszaOsoba;

       
       printf("Podaj imie: ");
       scanf("%s", pierwszaOsoba.imie);

       printf("Podaj nazwisko: ");
       scanf("%s", pierwszaOsoba.nazwisko);

       printf("Podaj wiek: ");
       scanf("%d", &pierwszaOsoba.wiek);

       printf("\nInformacje o osobie:\n");
       printf("Imie: %s\n", pierwszaOsoba.imie);
       printf("Nazwisko: %s\n", pierwszaOsoba.nazwisko);
       printf("Wiek: %d\n", pierwszaOsoba.wiek);
    
    wybor_programu();
    
    return 0;
}
//FUNKCJA ZNAJDUJĄCA NAJMNIEJSZĄ LICZBĘ
int najmniejsza(void)
{
    int x; int y; int z;
    printf("Podaj 3 liczby oddzielone przecinkiem:");
    scanf("%d,%d,%d",&x,&y,&z);
    
    int minimum = x;
    if(y<minimum)
    {
        minimum = y;
    }
    if(z<minimum)
    {
        minimum = z;
    }
    printf("Najmniejsza z podanych liczb to %d\n",minimum);
    
    return minimum;
}
//FUNKCJA LOSOWANIE LOTTO
int lotto(void)
{
    srand((unsigned int)time(NULL));
    int losowa = rand()%100+1;
    int strzal;
    
    printf("Witaj w losowaniu lotto!\n");
    
    
    for(int i=0;i<5;i++)
    {
        printf("Zgadnij wylosowana liczbe z zakresu 1-100 (masz 5 prob) :");
        scanf("%d",&strzal);
        
        if(strzal<losowa)
        {
            if(i<4)
            {
                printf("To za malo, to byla twoja %d proba\n",i+1);
            }
        }
        if(strzal>losowa)
        {
            if(i<4)
            {
                printf("To za duzo, to byla twoja %d proba\n",i+1);
            }
        }
        if(strzal==losowa)
        {
            printf("Zgadles \n");
            break;
        }
        if(i==4)
        {
            printf("BRAK POZOSTALYCH PROB, PRZEGRYWASZ\n");
        }
    }
    
    
    return 0;
}
//FUNKCJA PRZELICZNIK NA KG
int zamiana_na_tony(void)
{
    int x;
    printf("Podaj liczbe ton jaka chcesz zamienic na kg:");
    scanf("%d",&x);
    int tona = 1000;
    int wynik = (tona*x);
    printf("Wynik to %d kg\n", wynik);
    
    return 0;
    
}
//FUNKCJA WYBIERAJĄCA PROGRAM
void wybor_programu(void)
{
    int program;
    printf("Oto lista dostepnych programow\n1.Przelicznik kg na tony\n2.Losowanie lotto\n3.Znajdowanie najmniejszej z 3 liczb\n 4.Hotele\n");
    
    printf("Podaj numer programu, ktory chcesz uruchomic:");
    scanf("%d",&program);
    
    if(program == 1)
    {
        zamiana_na_tony();
    }
    if(program == 2)
    {
        lotto();
    }
    if(program == 3)
    {
        najmniejsza();
    }
    if(program == 4)
    {
        wybor_hotelu();
    }
    
   

}


//APLIKACJA HOTEL MOJA


//FUNKCJA WYBIERAJACA HOTEL
int wybor_hotelu(void)
{
    int numer;
   
    printf("Witaj w MENU, oto lista hoteli ktore masz do wyboru");
    printf("\n1.Hotel 1\n2.Hotel 2\n3.Hotel 3\n");
    printf("Podaj numer hotelu, ktory chcesz wybrac:");
    scanf("%d",&numer);
    {
        if(numer==1)
    {
        hotel_1();
    }
        if(numer==2)
        {
            hotel_2();
        }
        if(numer==3)
        {
            hotel_3();
        }
        
    }
   
    return 0;
    
}

//FUNKCJA HOTEL 1
void hotel_1(void)
{
        char imie[20];
        char nazwisko[20];
        int wiek;
    int liczba;
    int cena = 299;
    int potwierdzenie;
    printf("Witaj w hotelu Cristal!\n");
 
    printf("\nPodaj imie:");
    scanf("%s",imie);
    
    printf("\nPodaj nazwisko:");
    scanf("%s",nazwisko);
    
    printf("\nPodaj wiek:");
    scanf("%d",&wiek);
    
    printf("\nOto twoje dane\n");
    
    printf("Imie %s\n",imie);
    printf("Nazwisko %s\n",nazwisko);
    printf("Wiek %d\n",wiek);
    
    printf("Podaj liczbe dob hotelowych, ktore chcesz wykupic:");
    scanf("%d",&liczba);
    int wynik = przelicznik_cen(cena,liczba);
    printf("Podana liczba dob hotelowych bedzie rownoznaczna z cena %d zl\n",wynik);
    printf("Potwierdz rezerwacje wpisujac 1 jesli potwierdzasz lub 0 jesli rezygnujesz:");
    scanf("%d",&potwierdzenie);
    if(potwierdzenie == 1)
    {
        printf("Dziekujemy, do zobaczenia!\n");
        printf("Kwota do zaplaty wyniesie %d",wynik);
    }
    if(potwierdzenie == 0)
    {
        printf("Nie to nie\n");
    }
   
    
    
    
    
}

//FUNKCJA HOTEL 2
void hotel_2(void)
{
        char imie[20];
        char nazwisko[20];
    int odpowiedz;
        int wiek;
    int liczba;
    int cena = 699;
    int potwierdzenie;
    printf("Witaj w ULTRA PREMIUM HOTELU 2!\n");
 
    printf("\nPodaj imie:");
    scanf("%s",imie);
    
    printf("\nPodaj nazwisko:");
    scanf("%s",nazwisko);
    
    printf("\nPodaj wiek:");
    scanf("%d",&wiek);
    
    
    
    if(wiek<18)
    {
        printf("\nNie mozesz zarezerwowac nocki, automaty są od 18stki!!!\n");
    }
    if(wiek>17)
    {
      
        
        printf("\nZweryfikowales swoj wiek, bedziesz mogl korzystac z automatów\n");
        
        printf("\nOto twoje dane\n");
        
        printf("Imie %s\n",imie);
        printf("Nazwisko %s\n",nazwisko);
        printf("Wiek %d\n",wiek);
        
        printf("\nPodaj liczbe dob hotelowych, ktore chcesz wykupic:");
        
        scanf("%d",&liczba);
        
        printf("\nCzy chcesz aby zaserwowano wieczorem szampana? Odpowiedz '1' jesli tak lub '2' jesli nie':");
        
        scanf("%d",&odpowiedz);
        
        if(odpowiedz == 1)
        {
            printf("Znakmoity wybor!\n");
        }
        if(odpowiedz == 2)
        {
            printf(":((\n");
        }
        int wynik = przelicznik_cen(cena,liczba);
        printf("Podana liczba dob hotelowych bedzie rownoznaczna z cena %d zl\n",wynik);
        printf("Potwierdz rezerwacje wpisujac 1 jesli potwierdzasz lub 0 jesli rezygnujesz:");
        scanf("%d",&potwierdzenie);
        {
            if(potwierdzenie == 1)
            {
                printf("Dziekujemy, do zobaczenia!\n");
                printf("Kwota do zaplaty wyniesie %d\n",wynik);
            }
            if(potwierdzenie == 0)
            {
                printf("Może następnym razem!\n");
            }
        }
        
    }
    
    
    
}
//FUNKCJA HOTEL 3
void hotel_3(void)
{
        char imie[20];
        char nazwisko[20];
        int wiek;
    int liczba;
    int cena = 599;
    int potwierdzenie;
    int odpowiedz;
    int wynik;
    printf("Witaj w hotelu 3!\n");
 
    printf("\nPodaj imie:");
    scanf("%s",imie);
    
    printf("\nPodaj nazwisko:");
    scanf("%s",nazwisko);
    
    printf("\nPodaj wiek:");
    scanf("%d",&wiek);
    
    printf("\nOto twoje dane\n");
    
    printf("Imie %s\n",imie);
    printf("Nazwisko %s\n",nazwisko);
    printf("Wiek %d\n",wiek);
    
    printf("Podaj liczbe dob hotelowych, ktore chcesz wykupic:");
    scanf("%d",&liczba);
    printf("Czy chcesz wykupic wyżywienie? Wpisz 1 jesli chcesz lub 0 jesli nie:");
    scanf("%d",&odpowiedz);
    if(odpowiedz == 1)
    {
        printf("Znakomity wybor, koszt wyżywienia wyniesie dodatkowe 199zl dziennie\n");
        wynik = przelicznik_cen(cena,liczba)+(199*liczba);
        printf("Podana liczba dob hotelowych wlacznie z ewentualnym wyżywieniem bedzie rownoznaczna z cena %d zl\n",wynik);
        printf("Potwierdz rezerwacje wpisujac 1 jesli potwierdzasz lub 0 jesli rezygnujesz:");
        scanf("%d",&potwierdzenie);
        if(potwierdzenie == 1)
        {
            printf("Dziekujemy, do zobaczenia!\n");
            printf("Kwota do zaplaty wyniesie %d\n",wynik);
        }
        if(potwierdzenie == 0)
        {
            printf("Do widzenia\n");
        }
    }
    if(odpowiedz == 0)
    {
        printf("Z kości na ości?\n");
        wynik = przelicznik_cen(cena,liczba);
        printf("Podana liczba dob hotelowych bez wyżywienia bedzie rownoznaczna z cena %d zl\n",wynik);
        printf("Potwierdz rezerwacje wpisujac 1 jesli potwierdzasz lub 0 jesli rezygnujesz:");
        scanf("%d",&potwierdzenie);
        if(potwierdzenie == 1)
        {
            printf("Dziekujemy, do zobaczenia!\n");
            printf("Kwota do zaplaty wyniesie %d\n",wynik);
        }
        if(potwierdzenie == 0)
        {
            printf("Do widzenia\n");
        }
    }
    
    
    
    
    
    
}

//FUNKCJA PRZELICZNIK CEN
int przelicznik_cen(int x, int y)
{
    int suma = x*y;
    return suma;
}

