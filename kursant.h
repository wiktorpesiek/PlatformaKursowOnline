#pragma once
#include "uzytkownik.h"
#include <string>

class Kursant : public Uzytkownik {
public:
    Kursant(int id, const std::string& email) 
        : Uzytkownik(id, email) {}

    void zaloguj() override;
};