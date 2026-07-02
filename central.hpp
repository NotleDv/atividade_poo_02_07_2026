#ifndef CENTRAL_HPP
#define CENTRAL_HPP

#include <vector>
#include <memory>
#include "alerta.hpp"

class central {
private:
    std::vector<std::unique_ptr<alerta>> alertas_;

public:
    void registrar(std::unique_ptr<alerta> a);
    void exibir_todos() const;
    int total() const noexcept;
};

#endif // CENTRAL_HPP
