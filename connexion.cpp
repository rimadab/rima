#include "connexion.h"
Connexion::Connexion(){
                      }
bool Connexion::ouvrirConnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
                           db.setDatabaseName("Source_Projet2A");
                           db.setUserName("rima1");//inserer nom de l'utilisateur
                           db.setPassword("rima123");//inserer mot de passe de cet utilisateur

if (db.open())
    test=true;
return  test;
}
void Connexion::fermerConnexion()
{db.close();}
