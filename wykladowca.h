#pragma once
#include "uzytkownik.h"
#include <string>

class Wykladowca : public Uzytkownik {
private:
    std::string tytul_naukowy_;

public:
    Wykladowca(int id, const std::string& email, const std::string& tytul_naukowy)
        : Uzytkownik(id, email), tytul_naukowy_(tytul_naukowy) {}

    const std::string& pobierzTytulNaukowy() const { return tytul_naukowy_; }
    void zaloguj() override;
};