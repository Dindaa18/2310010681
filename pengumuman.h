#ifndef PENGUMUMAN_H
#define PENGUMUMAN_H

#include <QString>
#include <QDate>

class Pengumuman {
private:
    int idPengumuman;
    QString judul;
    QString isi;
    QDate tanggal;

public:
    // Konstruktor
    Pengumuman(int id, const QString &judul, const QString &isi, const QDate &tanggal);

    // Setter
    void setIdPengumuman(int id);
    void setJudul(const QString &judul);
    void setIsi(const QString &isi);
    void setTanggal(const QDate &tanggal);

    // Getter
    int getIdPengumuman() const;
    QString getJudul() const;
    QString getIsi() const;
    QDate getTanggal() const;
};

#endif // PENGUMUMAN_H
