#include<stdio.h>

 struct Stadium{
    char name[20];
    char capacity[50];

 };
struct Team{
    char team_name[20];
    char coach[20];
    int players_count;
    int founded_year;
    struct Stadium stadium;
};
 
int main(){
    struct Stadium atsdium1 = {"Dinoma", 150};
    struct Stadium atsdium2 = {"Spartak", 50};
    struct Stadium atsdium3 = {"Paxtakor", 250};

    struct Team teams[5] = {
        {"Paxtakor", "Jumanazar", 18, 1999, atsdium2},
        {"Real", "Kando", 12, 1996, atsdium1},
        {"Tezkorlar", "Olimjon", 24, 2020, atsdium3},
        {"Omadsizlar", "Axmatboy", 12, 2005, atsdium2},
    };
    printf("Eng eski jamoa:\n    Team Name|      Coach|  Players Count|  Founded Year| Stadium Name\n");
    int min = teams[0].founded_year;
    for (int  i = 0; i < 4; i++)
    {
        if (min > teams[i].founded_year)
        {
            printf("%13s", teams[i].team_name);
            printf("| %10s", teams[i].coach);
            printf("| %14d", teams[i].players_count);
            printf("| %13d", teams[i].founded_year);
            printf("| %s\n", teams[i].stadium.name);
        }
        
    }
}