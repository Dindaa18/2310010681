#include "Daftar.h"

// Konstruktor
Daftar::Daftar(int id, const QString &NIS, const QString &nama, const QString &tempatLahir, const QDate &tanggalLahir,
               const QString &jenisKelamin, const QString &agama, const QString &telpon, const QString &alamat,
               const QString &email, const QString &uploadFile, const QString &foto, const QString &status)
    : id(id), NIS(NIS), nama(nama), tempatLahir(tempatLahir), tanggalLahir(tanggalLahir), jenisKelamin(jenisKelamin),
    agama(agama), telpon(telpon), alamat(alamat), email(email), uploadFile(uploadFile), foto(foto), status(status) {}

// Setter
void Daftar::setId(int newId) {
    id = newId;
}

void Daftar::setNIS(const QString &newNIS) {
    NIS = newNIS;
}

void Daftar::setNama(const QString &newNama) {
    nama = newNama;
}

void Daftar::setTempatLahir(const QString &newTempatLahir) {
    tempatLahir = newTempatLahir;
}

void Daftar::setTanggalLahir(const QDate &newTanggalLahir) {
    tanggalLahir = newTanggalLahir;
}

void Daftar::setJenisKelamin(const QString &newJenisKelamin) {
    jenisKelamin = newJenisKelamin;
}

void Daftar::setAgama(const QString &newAgama) {
    agama = newAgama;
}

void Daftar::setTelpon(const QString &newTelpon) {
    telpon = newTelpon;
}

void Daftar::setAlamat(const QString &newAlamat) {
    alamat = newAlamat;
}

void Daftar::setEmail(const QString &newEmail) {
    email = newEmail;
}

void Daftar::setUploadFile(const QString &newUploadFile) {
    uploadFile = newUploadFile;
}

void Daftar::setFoto(const QString &newFoto) {
    foto = newFoto;
}

void Daftar::setStatus(const QString &newStatus) {
    status = newStatus;
}

// Getter
int Daftar::getId() const {
    return id;
}

QString Daftar::getNIS() const {
    return NIS;
}

QString Daftar::getNama() const {
    return nama;
}

QString Daftar::getTempatLahir() const {
    return tempatLahir;
}

QDate Daftar::getTanggalLahir() const {
    return tanggalLahir;
}

QString Daftar::getJenisKelamin() const {
    return jenisKelamin;
}

QString Daftar::getAgama() const {
    return agama;
}

QString Daftar::getTelpon() const {
    return telpon;
}

QString Daftar::getAlamat() const {
    return alamat;
}

QString Daftar::getEmail() const {
    return email;
}

QString Daftar::getUploadFile() const {
    return uploadFile;
}

QString Daftar::getFoto() const {
    return foto;
}

QString Daftar::getStatus() const {
    return status;
}
