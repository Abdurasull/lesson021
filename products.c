#include<stdio.h>
#include<string.h>

struct Grocery
{//Mevalarni Yaratadigan Grocery nomli struct
  char name[50];
  char category[50];
  float price;
  int quantity;
};

int main()
     {
        int n;
        printf("Maxsulotlar sonini kiriting:");
        scanf("%d", &n);
        struct Grocery Grocery[n];
        for (int i = 0; i < n; i++)
        {//maxsulotlarni for loop orqali qiymat berib omborga qo`shamiz
            printf("%d - maxsulot: \n%d - maxsulotni nomini kiriting: ", i + 1, i + 1);
            scanf("%s", Grocery[i].name);

            printf("%d - maxsulotni Katigoriyasini kiriting: ", i + 1);
            scanf("%s", Grocery[i].category);

            printf("%d - maxsulotni narxini kiriting: ", i + 1);
            scanf("%f", &Grocery[i].price);

            printf("%d - maxsulotni sonini kiriting: ", i + 1);
            scanf("%d", &Grocery[i].quantity);
        }
        printf("Sut mahsulotlari:\nName      | Category  | Price | Quantity\n");
        for (int i = 0; i < n; i++)
        {//Ombordagi maxsulotlotlarni faqat suyuq turidagilarini chiqarish
            if (!strcmp(Grocery[i].category, "Dairy"))
            {
                printf("%10s", Grocery[i].name);

                printf("| %10s", Grocery[i].category);

                printf("| %6.1f", Grocery[i].price);

                printf("| %d", Grocery[i].quantity);
            }
            
        }
        
        return 0;
     }