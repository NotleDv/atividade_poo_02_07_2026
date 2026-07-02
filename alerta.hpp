#ifndef ALERTA_HPP
#define ALERTA_HPP

#include <string>

// Interface pura: sem estado, apenas contrato.
class formatavel {
public:
    virtual std::string formatar() const = 0;
    virtual ~formatavel() = default;
};

// Classe abstrata: possui estado + Template Method.
class alerta : public formatavel {
private:
    std::string origem_;
    int severidade_;

public:
    alerta(const std::string& origem, int severidade);

    void exibir() const;

    virtual std::string tipo() const = 0;
    // formatar() continua puro aqui (herdado de formatavel, não implementado).

    std::string origem() const;
    int severidade() const;

    virtual ~alerta() = default;
};

#endif // ALERTA_HPP
