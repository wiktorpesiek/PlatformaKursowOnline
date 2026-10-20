#include "postep.h"
#include <algorithm> 

void Postep::oznaczLekcjeJakoUkonczona(int id_lekcji) {
    if (!czyLekcjaUkonczona(id_lekcji)) {
        ukonczone_lekcje_.push_back(id_lekcji);
        if (status_ == StatusPostepu::Nierozpoczety) {
            status_ = StatusPostepu::WTrakcie;
        }
    }
}

bool Postep::czyLekcjaUkonczona(int id_lekcji) const {
    return std::find(ukonczone_lekcje_.begin(), ukonczone_lekcje_.end(), id_lekcji) != ukonczone_lekcje_.end();
}

bool Postep::czyModulDostepny(const Modul& modul) const {
    if (modul.pobierzLekcje().empty()) {
        return false; 
    }
    
    for (const auto& lekcja : modul.pobierzLekcje()) {
        if (!czyLekcjaUkonczona(lekcja.pobierzId())) {
            return false;
        }
    }
    return true;
}

int Postep::obliczProcentUkonczenia() {
    procent_ukonczenia_ = ukonczone_lekcje_.size() * 10; 
    
    if(procent_ukonczenia_ >= 100) {
        procent_ukonczenia_ = 100;
        status_ = StatusPostepu::Ukonczony;
    }
    return procent_ukonczenia_;
}