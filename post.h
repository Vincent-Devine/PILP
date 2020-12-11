#ifndef POST_H
#define POST_H

#include <string>

using namespace std;

class Post
{
    private:
        string nomPost;
        string stylePost;
        string description;
        string image;

        //Livre
        string nomSerie;
        int numeroTome;

    public:
        Post();

        const string getNomPost();
        const string getStylePost();
        const string getDescription();
        const string getImage();

        void setNomPost(string _nomPost);
        void setStylePost(string _stylePost);
        void setDescription(string _description);
        void setImage(string _image);

        //Livre
        const string getNomSerie();
        int getNumeroTome();
        void setNomSerie(string _nomSerie);
        void setNumeroTome(int _numeroTome);
};

#endif // POST_H
