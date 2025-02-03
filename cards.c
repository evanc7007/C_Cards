#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "Card.h"
#include "Deck.h"

int main(){
    Card* my_card = random_card();
    print_card(my_card);
    destroy_card(my_card);
    Deck* my_deck = make_deck();
    print_card(&my_deck->discard_pile[51]);
    destroy_deck(my_deck);

    return 0;
}