#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"
void print_hand(deck_t * hand){
  size_t i;
  for(i=0; i< hand -> n_cards; i++){
    print_card(*(hand->cards[i]));
    printf(" ");
  }
}

int deck_contains(deck_t * d, card_t c) {
  size_t i;
  for(i=0; i< d->n_cards; i++){
    if(d->cards[i]->suit==c.suit && d->cards[i]->value==c.value)
      return 1;
  }
  return 0;
}

void shuffle(deck_t * d){
  size_t i,k;
  card_t temp;
  for(i=0; i< d->n_cards; i++){
    k= random()% (d->n_cards);
    temp = *(d -> cards[i]);
    *(d->cards[i])= *(d->cards[k]);
    *(d->cards[k])= temp;
       }
}

void assert_full_deck(deck_t * d) {
  card_t c;
  int r;
  for(c.suit=SPADES ;c.suit<=CLUBS ;c.suit++){
    for(c.value= 2 ;c.value<= VALUE_ACE ;c.value++){
      r=deck_contains(d, c);
      if(r==0)
        printf("ErrorR");
    }
  }
 }
