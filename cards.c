#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAXPILE 52

//enum for suits
typedef enum{SPADES, CLUBS, HEARTS, DIAMONDS} Suit;
//enum for ranks
typedef enum{ACE = 1, TWO, THREE, FOUR, FIVE, SIX,
    SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING} Rank;

//struct for a card
typedef struct{
    Suit suit;
    Rank rank;
} Card;

//struct for a deck
typedef struct{
    Card draw_pile[MAXPILE];
    Card discard_pile[MAXPILE];
} Deck;

void print_card(Card* card);
Card* random_card();

int main(){
    Card* my_card = random_card();
    print_card(my_card);
    return 0;
}

void print_card(Card* card){
    char suit[][10] = {"Spades", "Clubs", "Hearts", "Diamonds"};
    char rank[][8] = {"Ace", "Two", "Three", "Four", "Five", "Six",
    "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    printf("Suit: %s\n", suit[card->suit]);
    printf("Rank: %s\n", rank[card->rank - 1]);
}

Card* random_card(){
    Card* card;
    srand(time(NULL));
    card->suit = rand() % 4;
    card->rank = 1 + rand() % 13;
    return card;
}