#ifndef DAFTAR_H
#define DAFTAR_H

#include <QString>
#include <QDate>

class Daftar {
private:
    int id;
    QString NIS;
    QString nama;
    QString tempatLahir;
    QDate tanggalLahir;
    QString jenisKelamin;
    QString agama;
    QString telpon;
    QString alamat;
    QString email;
    QString uploadFile;
    QString foto;
    QString status;

public:
    // Konstruktor
    Daftar(int id, const QString &NIS, const QString &nama, const QString &tempatLahir, const QDate &tanggalLahir,
           const QString &jenisKelamin, const QString &agama, const QString &telpon, const QString &alamat,
           const QString &email, const QString &uploadFile, const QString &foto, const QString &status);

    // Setter
    void setId(int id);
    void setNIS(const QString &NIS);
    void setNama(const QString &nama);
    void setTempatLahir(const QString &tempatLahir);
    void setTanggalLahir(const QDate &tanggalLahir);
    void setJenisKelamin(const QString &jenisKelamin);
    void setAgama(const QString &agama);
    void setTelpon(const QString &telpon);
    void setAlamat(const QString &alamat);
    void setEmail(const QString &email);
    void setUploadFile(const QString &uploadFile);
    void setFoto(const QString &foto);
    void setStatus(const QString &status);

    // Getter
    int getId() const;
    QString getNIS() const;
    QString getNama() const;
    QString getTempatLahir() const;
    QDate getTanggalLahir() const;
    QString getJenisKelamin() const;
    QString getAgama() const;
    QString getTelpon() const;
    QString getAlamat() const;
    QString getEmail() const;
    QString getUploadFile() const;
    QString getFoto() const;
    QString getStatus() const;
};

#endif // DAFTAR_H
