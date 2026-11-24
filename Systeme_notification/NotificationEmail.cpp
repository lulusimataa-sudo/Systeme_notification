#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string destinaire, string Objet, string message) : Notifications(destinaire, message)
{
	this->Objet = Objet;
}

void NotificationEmail::afficher() const
{
	Notifications::afficher();
	cout << "Objet: " << this->Objet << endl;
}

void NotificationEmail::envoyer()
{
	cout << "Envoi de l'email a " << this->destinaire << endl;
	this->afficher();
}

NotificationEmail::~NotificationEmail()
{
	cout << "Destruction de l'objet NotificationEmail" << endl;
}


