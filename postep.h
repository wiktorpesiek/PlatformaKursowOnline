#pragma once
#include "kursant.h"
#include "kurs.h"
#include "modul.h"
#include "statusy.h"
#include <vector>

class Postep {
private:
    int procent_ukonczenia_;
    StatusPostepu status_;
    std::vector<int> ukonczone_lekcje_; 
    Kursant* kursant_;
    Kurs* kurs_;

public:
    Postep(Kursant* kursant, Kurs* kurs)
        : procent_ukonczenia_(0), status_(StatusPostepu::Nierozpoczety), kursant_(kursant), kurs_(kurs) {}

    void oznaczLekcjeJakoUkonczona(int id_lekcji);
    bool czyLekcjaUkonczona(int id_lekcji) const;
    bool czyModulDostepny(const Modul& modul) const;
    int obliczProcentUkonczenia();
    
    StatusPostepu pobierzStatus() const { return status_; }
    Kursant* pobierzKursanta() const { return kursant_; }
    Kurs* pobierzKurs() const { return kurs_; }
};