#include <stdio.h>

int main() {
    char card_name[3];
    int val = 0;
    puts("Enter the card name:");
    scanf("%2s", card_name);
    if( card_name[0] == 'K'){
        val = 10;
    }
    else if( card_name[0] == 'Q'){
        val = 10;
    }
    else if( card_name[0] == 'J'){
        val = 10;
    }
    else if( card_name[0] == 'A'){
        val = 11;
    }
    else 
        val = atoi(card_name);
    
    if (val>2 && val<7){
        puts("count gone up");
    }
    else if (val == 10){
        puts("count gone down");
    }
   
    return 0;
}