#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Solution.h"

#include <cassert>
#include <iostream>

int main() {
    Card card("Professor Plum", CardType::Character);

    assert(card.getName() == "Professor Plum");
    assert(card.getType() == CardType::Character);

    Card plum = makeCard(Character::ProfessorPlum);
    assert(plum.getName() == "Professor Plum");
    assert(plum.getType() == CardType::Character);

    Player player("Grace");
    player.addCard(card);

    assert(player.hasCard("Professor Plum"));
    assert(!player.hasCard("Miss Scarlet"));

    Deck deck;
    assert(deck.size() == 21);

    Solution envelope(
        makeCard(Character::ProfessorPlum),
        makeCard(Weapon::Rope),
        makeCard(RoomName::Study)
    );

    Suggestion correct{
        makeCard(Character::ProfessorPlum),
        makeCard(Weapon::Rope),
        makeCard(RoomName::Study)
    };
    Suggestion wrong{
        makeCard(Character::MissScarlet),
        makeCard(Weapon::Rope),
        makeCard(RoomName::Study)
    };

    assert(envelope.matches(correct));
    assert(!envelope.matches(wrong));

    std::cout << "All tests passed.\n";
    return 0;
}
