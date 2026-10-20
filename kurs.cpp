#include "kurs.h"

void Kurs::dodajModul(const Modul& modul) {
    moduly_.push_back(modul);
}

void Kurs::zmienStatus(StatusKursu nowy_status) {
    status_ = nowy_status;
}

void Kurs::dodajUczestnika(Kursant* k) {
    if (k != nullptr) {
        uczestnicy_.push_back(k);
    }
}