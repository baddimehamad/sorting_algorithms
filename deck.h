#ifndef DECK_H
#define DECK_H

/**
 * enum kind_e
 * @SPADE: spade kind
 * @HEART: heart kind
 * @CLUB: club kind
 * @DIAMOND: diamond kind
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s
 *
 * @value: Value
 * @kind: Value
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s
 *
 * @card: Pointer
 * @prev: Pointer
 * @next: Pointer
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
#endif
