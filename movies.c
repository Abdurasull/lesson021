#include<stdio.h>
#include<string.h>

struct Genre{
    //film janirlarini yaratish uchun struct
    char name[50];
    char description[50];
};
struct Movie
{
    //film yaratish uchun struct
    char name[20];
    float rating;
    int release_year;
    struct Genre genre;
};
int main(){
    struct Genre genre1 = {"Action", "Action-packed thriller"};
    struct Genre genre2 = {"Trailer", "High-octane adventure"};
    struct Genre genre3 = {"Action", "High - octane adventure"};

    struct Movie movies[4] =
        {
            {"Don", 10.0, 2018, genre1},
            {"Ludi_X", 8.0, 2010, genre2},
            {"Pulat", 9.0, 2005, genre3},
            {"Bahubadi", 7.0, 2015, genre1},
        };


    printf("Action janridagi kinolar:\n      Name|  Rating| Release Year|Genre Name| Genre Description\n");
    printf("----------------------------------------------------------------\n");
    for (int i = 0; i < 4; i++)
    {
        if (!strcmp(movies[i].genre.name, "Action"))
        {//faqat actionlarini chiqarish uchun shart
            printf("%10s", movies[i].name);
            printf("| %7.1f", movies[i].rating);
            printf("| %12d", movies[i].release_year);
            printf("|%10s", movies[i].genre.name);
            printf("|%s\n", movies[i].genre.description);
                                        }
        
    }
    

    return 0;
}