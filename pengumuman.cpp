#include "Pengumuman.h"

// Konstruktor
Pengumuman::Pengumuman(int id, const QString &judul, const QString &isi, const QDate &tanggal)
    : idPengumuman(id), judul(judul), isi(isi), tanggal(tanggal) {}

// Setter
void Pengumuman::setIdPengumuman(int id) {
    idPengumuman = id;
}

void Pengumuman::setJudul(const QString &newJudul) {
    judul = newJudul;
}

void Pengumuman::setIsi(const QString &newIsi) {
    isi = newIsi;
}

void Pengumuman::setTanggal(const QDate &newTanggal) {
    tanggal = newTanggal;
}

// Getter
int Pengumuman::getIdPengumuman() const {
    return idPengumuman;
}

QString Pengumuman::getJudul() const {
    return judul;
}

QString Pengumuman::getIsi() const {
    return isi;
}

QDate Pengumuman::getTanggal() const {
    return tanggal;
}
