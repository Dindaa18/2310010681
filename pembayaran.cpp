#include "Pembayaran.h"

// Konstruktor
Pembayaran::Pembayaran(int id, const QString &NIS, const QDate &tanggalPembayaran, const QString &status)
    : idPembayaran(id), NIS(NIS), tanggalPembayaran(tanggalPembayaran), status(status) {}

// Setter
void Pembayaran::setIdPembayaran(int id) {
    idPembayaran = id;
}

void Pembayaran::setNIS(const QString &newNIS) {
    NIS = newNIS;
}

void Pembayaran::setTanggalPembayaran(const QDate &newTanggal) {
    tanggalPembayaran = newTanggal;
}

void Pembayaran::setStatus(const QString &newStatus) {
    status = newStatus;
}

// Getter
int Pembayaran::getIdPembayaran() const {
    return idPembayaran;
}

QString Pembayaran::getNIS() const {
    return NIS;
}

QDate Pembayaran::getTanggalPembayaran() const {
    return tanggalPembayaran;
}

QString Pembayaran::getStatus() const {
    return status;
}
