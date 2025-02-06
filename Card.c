#include "Card.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_card(Card* card){
    char suit[][10] = {"Spades", "Clubs", "Hearts", "Diamonds", "Null"};
    char rank[][8] = {"Ace", "Two", "Three", "Four", "Five", "Six",
    "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Null"};

    printf("Suit: %s\n", suit[card->suit]);
    printf("Rank: %s\n", rank[card->rank - 1]);
}

Card* random_card(void){
    Card* card = (Card*)malloc(sizeof(Card));
    srand(time(NULL));
    card->suit = rand() % 4;
    card->rank = 1 + rand() % 13;
    return card;
}

void destroy_card(Card* card){
    free(card);
}