#ifndef CARD_H
#define CARD_H


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

Card* random_card();
void print_card(Card* card);
void destroy_card(Card* card);

#endif