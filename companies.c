#include<stdio.h>
#include<string.h>

struct Company
{//Companiya uvhun struct
    char name[50];
    char location[50];
};

struct Product
{//Maxsulot uchun struct
    char name[50];
    float price;
    int quantity;
    struct Company company;
};  
int main()
{
    struct Company compony1 = {"Company1", "USA"};
    struct Company compony2 = {"Company2","Germany" };

    struct Product products[4] =
        {
            {"Product1", 24.0, 100, compony1},
            {"Product2", 50.0, 200, compony2},
            {"Product3", 80.0, 150, compony1},
            {"Product3", 50.0, 200, compony1},
            };

    printf("AQShda ishlab chiqarilgan mahsulotlar:\n         Name|  Price|  Quantity|  Company Name| Company Location\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < 4; i++)
    {
        if (!strcmp(products[i].company.location, "USA"))
        {
            printf("%13s", products[i].name);
            printf("| %6.1f", products[i].price);
            printf("| %9d", products[i].quantity);
            printf("| %13s", products[i].company.name);
            printf("| %13s\n", products[i].company.location);
        }
    }
    
    return 0;
}