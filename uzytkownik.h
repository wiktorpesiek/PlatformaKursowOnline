#pragma once
#include <string>

class Uzytkownik {
private:
    int id_;
    std::string email_;

public:
    Uzytkownik(int id, const std::string& email) 
        : id_(id), email_(email) {}
    virtual ~Uzytkownik() = default;

    int pobierzId() const { return id_; }
    const std::string& pobierzEmail() const { return email_; }

    virtual void zaloguj() = 0;
};