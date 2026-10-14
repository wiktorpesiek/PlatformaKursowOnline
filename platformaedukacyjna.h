#pragma once
#include "kurs.h"
#include "uzytkownik.h"
#include "kursant.h"
#include "postep.h"
#include "certyfikat.h"
#include <vector>
#include <memory>

class PlatformaEdukacyjna {
private:
    std::vector<Kurs> lista_kursow_;
    std::vector<std::unique_ptr<Uzytkownik>> uzytkownicy_; 
    std::vector<Postep> postepy_;
    std::vector<Certyfikat> certyfikaty_;

public:
    PlatformaEdukacyjna() = default;

    void dodajUzytkownika(std::unique_ptr<Uzytkownik> u);
    Kurs utworzKurs(const std::string& nazwa, int id_wykladowcy);
    std::vector<Kurs> wyszukajKursy(const std::string& fraza) const;
    bool zapiszKursantaNaKurs(Kursant* kursant, Kurs* kurs);
    Certyfikat generujCertyfikat(Kursant* kursant, Kurs* kurs);
};