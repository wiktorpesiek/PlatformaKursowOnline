#pragma once
#include "modul.h"
#include "kursant.h"
#include "statusy.h"
#include <string>
#include <vector>

class Kurs {
private:
    int id_;
    std::string nazwa_kursu_;
    StatusKursu status_;
    int id_autora_;
    std::vector<Modul> moduly_;        
    std::vector<Kursant*> uczestnicy_; 

public:
    Kurs(int id, const std::string& nazwa_kursu, int id_autora, StatusKursu status = StatusKursu::Roboczy)
        : id_(id), nazwa_kursu_(nazwa_kursu), id_autora_(id_autora), status_(status) {}

    int pobierzId() const { return id_; }
    int pobierzIdAutora() const { return id_autora_; }
    StatusKursu pobierzStatus() const { return status_; }
    const std::string& pobierzNazwe() const { return nazwa_kursu_; }

    void dodajModul(const Modul& modul);
    void zmienStatus(StatusKursu nowy_status);
    void dodajUczestnika(Kursant* k);
    const std::vector<Modul>& pobierzModuly() const { return moduly_; }
};