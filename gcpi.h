#ifndef GCPI_H
#define GCPI_H

#include "post.h"

#include <QMainWindow>
#include <iostream>
#include <map>
#include <string>

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class Gcpi; }
QT_END_NAMESPACE

class Gcpi : public QMainWindow
{
    Q_OBJECT

private:
    Ui::Gcpi *ui;

    map<int, Post> listeAPoster;
    map<int, Post> listePoster;
    map<int, Post> listeEnAttente;

public:
    Gcpi(QWidget *parent = nullptr);
    ~Gcpi();

    void ajouterPostAPoster(Post _post);
    bool verifierNumeroPost(Post _post);

    const map<int, Post> getListeAPoster();
    const map<int, Post> getListePoster();
    const map<int, Post> getListeEnAttente();

    void setListeAPoster(map<int, Post> _listeAPoster);
    void setListePoster(map<int, Post> _listePoster);
    void setListeEnAttente(map<int, Post> _listeEnAttente);
};
#endif // GCPI_H
