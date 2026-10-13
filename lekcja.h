#pragma once
#include <string>

class Lekcja {
private:
    int id_;
    std::string temat_;
    std::string tresc_video_;

public:
    Lekcja(int id, const std::string& temat, const std::string& tresc_video)
        : id_(id), temat_(temat), tresc_video_(tresc_video) {}

    int pobierzId() const { return id_; }
    const std::string& pobierzTemat() const { return temat_; }
    void odtworzMaterialy();
};