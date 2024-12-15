#include<stdio.h>

struct Student{
    char first_name[50];
    char last_name[50];
}; 

struct Subject{
    char name[50];
};

struct Score{
    float score;
    struct Subject subject;
    struct Student student; 
};
int main(){//fanlarni e`lon qilib oldik
    struct Subject subject1 = {"math"};
    struct Subject subject2 = {"Physics"};
    struct Subject subject3 = {"biology"};

    //Talabalarni e`lon qilib oldik
    struct Student pupil1 = {"Abdurasul", "Salimov"};
    struct Student pupil2 = {"Asror", "Qurbonnazarov"};
    struct Student pupil3 = {"Abulaziz", "Aktamov"};
    struct Student pupil4 = {"Samariddin", "Ulashov"};

    //olingan ballarni e`lon qilib oldik
    struct Score balls[5] = {
        {95.1, subject1, pupil1},
        {70.0, subject2, pupil2},
        {80.1, subject3, pupil3},
        {60.1, subject1, pupil4},
        {79.1, subject3, pupil4},
    };
    float S = 0; //O`rtacha ball qiymatini hisoblab olish un Boshlangich qiymat
    for (int i = 0; i < 5; i++)
    {
        S += balls[i].score;
    }
    //O`rtacha qiymatni topib oldik
    S = S / 5;
    
    printf("O'rtacha bahodan yuqori ball to'plagan talabalar:\nFirst Name |  Last Name| Subject Name| Score\n");
    printf("-----------------------------------------------\n");
    //o`rtacha baldan yuqorisini tekshirib chiqarish un for loop
    for (int i = 0; i < 5; i++)
    {
        if (S < balls[i].score)
        {
            printf("%11s", balls[i].student.first_name);
            printf("| %10s", balls[i].student.last_name);
            printf("| %12s", balls[i].subject.name);
            printf("| %.1f\n", balls[i].score);
        }
        
    }
}