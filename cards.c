#include<stdio.h>

struct Card{
    //Card yaratuvchi Card nomli struct yatatdik
    char card_holder_name[50]; 
    char card_number[50]; 
    int expiry_year; 
    int cvv;
};

int main(){
    struct Card cards[5] = {
        {"John Doe", "1234 5678 9012 3456", 2029, 123},
        {"Jane Smith", "2345 6789 0123 4567", 2029, 456},
        {"Ali Karimov", "3456 7890 1234 5678", 2025, 789},
        {"Sara Lee", "4567 8901 2345 6789", 2030, 234},
        {"Tom Brown", "5678 9012 3456 7890", 2023, 345}
        };
    printf("Amal qilayotgan kartalar:\nCard Holder Name |          Card Number| Expiry Year| CVV\n");
    for (int i = 0; i < 5; i++)
    {
        if (2025 <= cards[i].expiry_year)
        {
            printf("%17s", cards[i].card_holder_name);
            printf("| %20s", cards[i].card_number);
            printf("| %11d", cards[i].expiry_year);
            printf("| %d\n", cards[i].cvv);
        }
        

}
}