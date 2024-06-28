#ifndef USER_H
#define USER_H

#include <QString>

class User {
private:
    int id;
    QString nama;
    QString username;
    QString password;
    QString level;

public:
    // Konstruktor
    User(int id, const QString &nama, const QString &username, const QString &password, const QString &level);

    // Setter
    void setId(int id);
    void setNama(const QString &nama);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setLevel(const QString &level);

    // Getter
    int getId() const;
    QString getNama() const;
    QString getUsername() const;
    QString getPassword() const;
    QString getLevel() const;
};

#endif // USER_H
