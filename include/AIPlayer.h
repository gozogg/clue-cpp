#pragma once

#include "DeductionEngine.h"
#include "Player.h"

class AIPlayer : public Player {
public:
    explicit AIPlayer(std::string name);

    DeductionEngine& getNotebook();
    const DeductionEngine& getNotebook() const;

    // TODO: choose suggestions and accusations from notebook deductions

private:
    DeductionEngine notebook_;
};
