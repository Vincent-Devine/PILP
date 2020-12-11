#include "post.h"

using namespace std;

Post::Post():description("")
{
}

const string Post::getNomPost()
{
    return nomPost;
}

const string Post::getStylePost()
{
    return stylePost;
}

const string Post::getDescription()
{
    return description;
}

const string Post::getImage()
{
    return image;
}

void Post::setNomPost(string _nomPost)
{
    nomPost = _nomPost;
}

void Post::setStylePost(string _stylePost)
{
    stylePost = _stylePost;

    if(stylePost == "livre")
    {

    }
}

void Post::setDescription(string _description)
{
    description = _description;
}

void Post::setImage(string _image)
{
    image = _image;
}

//Livre
const string Post::getNomSerie()
{
    return nomSerie;
}

int Post::getNumeroTome()
{
    return numeroTome;
}

void Post::setNomSerie(string _nomSerie)
{
    nomSerie = _nomSerie;
}

void Post::setNumeroTome(int _numeroTome)
{
    numeroTome = _numeroTome;
}
