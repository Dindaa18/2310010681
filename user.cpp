#include "User.h"

// Konstruktor
User::User(int id, const QString &nama, const QString &username, const QString &password, const QString &level)
    : id(id), nama(nama), username(username), password(password), level(level) {}

// Setter
void User::setId(int newId) {
    id = newId;
}

void User::setNama(const QString &newNama) {
    nama = newNama;
}

void User::setUsername(const QString &newUsername) {
    username = newUsername;
}

void User::setPassword(const QString &newPassword) {
    password = newPassword;
}

void User::setLevel(const QString &newLevel) {
    level = newLevel;
}

// Getter
int User::getId() const {
    return id;
}

QString User::getNama() const {
    return nama;
}

QString User::getUsername() const {
    return username;
}

QString User::getPassword() const {
    return password;
}

QString User::getLevel() const {
    return level;
}
