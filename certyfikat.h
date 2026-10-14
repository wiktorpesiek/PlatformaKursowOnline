#pragma once
#include <string>

class Certyfikat {
private:
    std::string numer_;
    std::string data_wydania_;
    int id_kursanta_;
    int id_kursu_;

public:
    Certyfikat(const std::string& numer, const std::string& data_wydania, int id_kursanta, int id_kursu)
        : numer_(numer), data_wydania_(data_wydania), id_kursanta_(id_kursanta), id_kursu_(id_kursu) {}

    const std::string& pobierzNumer() const { return numer_; }
    const std::string& pobierzDateWydania() const { return data_wydania_; }
    int pobierzIdKursanta() const { return id_kursanta_; }
    int pobierzIdKursu() const { return id_kursu_; }
};