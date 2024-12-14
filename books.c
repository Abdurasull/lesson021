#include<stdio.h>

struct User { //User nomli struct yaraddik
    char lastname[50];  
    char firsname[50];
    char addres[100]; 
    int birthyear;
    char phonnumber[20];
};

int main(){
    int n;
    printf("Userlar sonini kiriting: ");
    scanf("%d", &n);
    struct User users[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d-User ismini kiriting:", i + 1 );
        scanf("%s", users[i].firsname);

        printf("%d-User familiyasini kiriting:", i + 1);
        scanf("%s", users[i].lastname);

        printf("%d-User manzilini kiriting:", i + 1);
        scanf("%s", users[i].addres);

        printf("%d-User tugilgan yilini kiriting:", i + 1);
        scanf("%d", &users[i].birthyear);

        printf("%d-User tel nomirini kiriting:", i + 1);
        scanf("%s", users[i].phonnumber);
    }

    printf("Foydalanuvchilar Jadvali\n");
    printf("First Name | Last Name | Birth Year | Location | Phone\n");
    printf("----------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%11s", users[i].firsname);

        printf("| %10s", users[i].lastname);

        printf("| %11d", users[i].birthyear);

        printf("| %9s", users[i].addres);

        printf("| %s\n", users[i].phonnumber);
    }
}