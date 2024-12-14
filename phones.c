#include<stdio.h>


struct Phone
{// Telefon ma`lumotlarini qabul qiluvchi Phone nomli struct yaratdik
    char name[50];
    char brand[50];
    int price;
    int ram;
    char color[50];
};

int main(){
    int n, price; //telefonlanini soni uchun o`zgaruvchi yaratdik
    printf("Telefonlar nonini kiriting:");
    scanf("%d", &n);// Tlelefonlar soniga qiymat bn ta`minladik
    struct Phone phones[n];

    for (int i = 0; i < n; i++)
    // Barcha telefonlarni e`lon qilish uchun quyidagi for loop idan foydalanamiz
    {
        printf("%d - telefon: \n%d - phone nomini kiriting: ",i + 1, i + 1);
        scanf("%s", phones[i].name);

        printf("%d - phone brandini kiriting: ", i + 1);
        scanf("%s", phones[i].brand);

        printf("%d - phone narxini kiriting: ", i + 1);
        scanf("%d", &phones[i].price);

        printf("%d - phone ram ini kiriting: ", i + 1);
        scanf("%d", &phones[i].ram);

        printf("%d - phone rangini kiriting: ", i + 1);
        scanf("%s", phones[i].color);
    }

    printf("Qanday narhdan yuqori bolgan telefonlarni hohoysiz?\n Shu erga kiriting: ");
    scanf("%d", &price);

    printf("\nNarxi $%d dan yuqori telefonlar: \n", price);
    printf("Name         | Brand    | Price   | RAM    | Color\n");
    for (int i = 0; i < n; i++)
    // Barcha telefonlarni shart orqali chiqarish uchun quyidagi for loop idan foydalanamiz
    {
        if(price < phones[i].price){
            printf("%13s", phones[i].name);

            printf("| %9s", phones[i].brand);

            printf("| %8d", phones[i].price);

            printf("| %7d", phones[i].ram);

            printf("| %s\n", phones[i].color);
        }
    }
}
