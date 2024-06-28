#include <QCoreApplication>
#include <QDebug>
#include "Pengumuman.h"
#include "User.h"
#include "Pembayaran.h"
#include "Daftar.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Membuat objek Pengumuman dan mengisi data
    Pengumuman pengumuman(1, "Pengumuman Penting", "Batas untuk pendaftaran sampai tanggal 1 Juli 2024", QDate::currentDate());
    qDebug() << "Pengumuman ID:" << pengumuman.getIdPengumuman();
    qDebug() << "Judul:" << pengumuman.getJudul();
    qDebug() << "Isi:" << pengumuman.getIsi();
    qDebug() << "Tanggal:" << pengumuman.getTanggal();

    // Membuat objek User dan mengisi data
    User user(1, "Dinda Muslimah", "dinda", "dindin18", "admin");
    qDebug() << "\nUser ID:" << user.getId();
    qDebug() << "Nama:" << user.getNama();
    qDebug() << "Username:" << user.getUsername();
    qDebug() << "Password:" << user.getPassword();
    qDebug() << "Level:" << user.getLevel();

    // Membuat objek Pembayaran dan mengisi data
    Pembayaran pembayaran(1, "12345", QDate::currentDate(), "Lunas");
    qDebug() << "\nPembayaran ID:" << pembayaran.getIdPembayaran();
    qDebug() << "NIS:" << pembayaran.getNIS();
    qDebug() << "Tanggal Pembayaran:" << pembayaran.getTanggalPembayaran();
    qDebug() << "Status:" << pembayaran.getStatus();

    // Membuat objek Daftar dan mengisi data
    Daftar daftar(1, "12345", "Reviana Elita", "Hulu Sungai Selatan", QDate(2002, 6, 5), "Perempuan", "Islam", "08123456789",
                  "Jl. BrigJend H. Hasan Basry No.38", "revianavivi@gmail.com", "filevivi.pdf", "pasfotovivi.jpg", "Diterima");
    qDebug() << "\nDaftar ID:" << daftar.getId();
    qDebug() << "NIS:" << daftar.getNIS();
    qDebug() << "Nama:" << daftar.getNama();
    qDebug() << "Tempat Lahir:" << daftar.getTempatLahir();
    qDebug() << "Tanggal Lahir:" << daftar.getTanggalLahir();
    qDebug() << "Jenis Kelamin:" << daftar.getJenisKelamin();
    qDebug() << "Agama:" << daftar.getAgama();
    qDebug() << "Telpon:" << daftar.getTelpon();
    qDebug() << "Alamat:" << daftar.getAlamat();
    qDebug() << "Email:" << daftar.getEmail();
    qDebug() << "Upload File:" << daftar.getUploadFile();
    qDebug() << "Foto:" << daftar.getFoto();
    qDebug() << "Status:" << daftar.getStatus();

    return a.exec();
}
