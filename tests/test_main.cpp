#include "Card.h"
#include "Player.h"

#include <cassert>
#include <iostream>

int main() {
    Card card("Professor Plum", CardType::Character);

    assert(card.getName() == "Professor Plum");
    assert(card.getType() == CardType::Character);

    Player player("Grace");
    player.addCard(card);

    assert(player.hasCard("Professor Plum"));
    assert(!player.hasCard("Miss Scarlet"));

    std::cout << "All tests passed.\n";
    return 0;
}
