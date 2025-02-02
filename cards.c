#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "Card.h"

int main(){
    Card* my_card = random_card();
    print_card(my_card);
    destroy_card(my_card);
    return 0;
}