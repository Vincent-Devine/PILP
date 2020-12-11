#include "gcpi.h"
#include "ui_gcpi.h"

Gcpi::Gcpi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gcpi)
{
    ui->setupUi(this);
}

Gcpi::~Gcpi()
{
    delete ui;
}

void Gcpi::ajouterPostAPoster(Post _post)
{
    listeAPoster[listeAPoster.size()] = _post;
}

bool Gcpi::verifierNumeroPost(Post _post)
{
    for(int i = 0; i < listeAPoster.size(); i++)
    {
        if(listeAPoster.at(i).getNomSerie() == _post.getNomSerie())
        {
            if(listeAPoster.at(i).getNumeroTome() > _post.getNumeroTome())
            {
                listeAPoster[listeAPoster.size()] = listeAPoster.at(i);
                listeAPoster.erase(i);
                retur
            }
        }
    }

    return false;
}

const map<int, Post> Gcpi::getListeAPoster()
{
    return listeAPoster;
}

const map<int, Post> Gcpi::getListePoster()
{
    return listePoster;
}

const map<int, Post> Gcpi::getListeEnAttente()
{
    return listeEnAttente;
}

void Gcpi::setListeAPoster(map<int, Post> _listeAPoster)
{
    listeAPoster = _listeAPoster;
}

void Gcpi::setListePoster(map<int, Post> _listePoster)
{
    listePoster = _listePoster;
}

void Gcpi::setListeEnAttente(map<int, Post> _listeEnAttente)
{
    listeEnAttente = _listeEnAttente;
}
