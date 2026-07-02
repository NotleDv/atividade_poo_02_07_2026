#include "alerta.hpp"
#include <stdexcept>
#include <iostream>

alerta::alerta(const std::string& origem, int severidade)
    : origem_(origem), severidade_(severidade) {
    if (severidade_ < 1 || severidade_ > 3) {
        throw std::invalid_argument("severidade deve estar entre 1 e 3");
    }
}

void alerta::exibir() const {
    std::cout << "[" << tipo()        // chama o virtual tipo()
               << "] " << origem_ << ": "
               << formatar()          // chama o virtual formatar()
               << "\n";
}

std::string alerta::origem() const {
    return origem_;
}

int alerta::severidade() const {
    return severidade_;
}
