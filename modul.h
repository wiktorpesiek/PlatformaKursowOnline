#pragma once
#include "lekcja.h"
#include <string>
#include <vector>

class Modul {
private:
    int id_;
    std::string nazwa_modulu_;
    std::vector<Lekcja> lekcje_;

public:
    Modul(int id, const std::string& nazwa_modulu)
        : id_(id), nazwa_modulu_(nazwa_modulu) {}

    int pobierzId() const { return id_; }
    const std::string& pobierzNazwe() const { return nazwa_modulu_; }
    void dodajLekcje(const Lekcja& lekcja);
    bool sprawdzUkonczenieLekcji() const;
    const std::vector<Lekcja>& pobierzLekcje() const { return lekcje_; }
};