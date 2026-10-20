#include "modul.h"

void Modul::dodajLekcje(const Lekcja& lekcja) {
    lekcje_.push_back(lekcja);
}

bool Modul::sprawdzUkonczenieLekcji() const {
    if (lekcje_.empty()) {
        return false;
    }
    return true; 
}