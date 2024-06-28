#ifndef PEMBAYARAN_H
#define PEMBAYARAN_H

#include <QString>
#include <QDate>

class Pembayaran {
private:
    int idPembayaran;
    QString NIS;
    QDate tanggalPembayaran;
    QString status;

public:
    // Konstruktor
    Pembayaran(int id, const QString &NIS, const QDate &tanggalPembayaran, const QString &status);

    // Setter
    void setIdPembayaran(int id);
    void setNIS(const QString &NIS);
    void setTanggalPembayaran(const QDate &tanggal);
    void setStatus(const QString &status);

    // Getter
    int getIdPembayaran() const;
    QString getNIS() const;
    QDate getTanggalPembayaran() const;
    QString getStatus() const;
};

#endif // PEMBAYARAN_H
