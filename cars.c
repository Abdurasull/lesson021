#include<stdio.h>

struct Car{//Car nomli struct yaratdik
  char model[50];
  char brand[50];
  int price;
  int year;
};
int main(){
    int n; //mashinalar sonini kiritish uchun o`zgaruvchi yaratdik
    printf("Mashinalar sonini kiriting: ");
    scanf("%d", &n);

    struct Car cars[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d-mashina: \n%d-mashina modelini kiriting: ",i+1, i+1 );
        scanf("%s", cars[i].model);

        printf("%d-mashina brandini kiriting: ", i + 1);
        scanf("%s", cars[i].brand);

        printf("%d-mashina narxini kiriting: ", i + 1);
        scanf("%d", &cars[i].price);

        printf("%d-mashina yilini kiriting: ", i + 1);
        scanf("%d", &cars[i].year);
    }
    int max = cars[0].price;
    printf("Eng qimmat mashina:\nModel       | Brand     | Price   | Year");
    for (int i = 0; i < n; i++)
    {
        if (max <= cars[i].price )
        {
            printf("\n%12s", cars[i].model);

            printf("| %10s", cars[i].brand);

            printf("| %8d", &cars[i].price);

            printf("| %d", cars[i].year);
        }
        
    }
}