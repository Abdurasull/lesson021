#include<stdio.h>

struct Author {
    //Kitobni Authori uchun struct yaratildi
    char name[50];
    int birth_year;
};

struct Book
{
    //Kitob yaratish uchun struct yaratildi
    char title[50];
    float price;
    int published_year;
    struct Author Author;
};

int main(){

    struct Author author01 = {"Alex Black", 1990};
    struct Author author02 = {"Mary White", 1985};
    struct Author author03 = {"John Green", 1975};

    struct Book books[10] = {
        {"Book A", 25.0, 2021, author01},
        {"Book B", 30.0, 2023, author02},
        {"Book C", 15.0, 1997, author03},
        {"Book D", 20.0, 1880, author02},
        {"Book E", 35.0, 1994, author02},
        {"Book F", 40.0, 1995, author01},
        {"Book G", 10.0, 1790, author02},
        {"Book H", 50.0, 1890, author01},
        {"Book I", 45.0, 1990, author02},
        {"Book J", 60.0, 1890, author03}
        };

    printf("XXI asr kitoblari:\n     Title|  Price| Published Year|  Author Name| Author Birth Year\n");
    printf("------------------------------------------------------------------\n");
    for (int i = 0; i < 10; i++)
    {//21 asr kitoblarini chiqarish un for loop dan foydalandik
        if (books[i].published_year >=2000)
        {
            printf("%10s", books[i].title);
            printf("| %6.1f", books[i].price);
            printf("| %14d", books[i].published_year);
            printf("| %12s", books[i].Author.name);
            printf("| %d\n", books[i].Author.birth_year);
        }
        
    }
    

    return 0;
}
