#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string destinaire, string operateur, string message) : Notifications(destinaire, message)
{
	this->opereteur = operateur;
}

void NotificationSMS::afficher() const
{
	Notifications::afficher();
	cout << "Operateur: " << this->opereteur << endl;	
}

void NotificationSMS::envoyer()
{
	cout << "Envoi du SMS a " << this->destinaire << endl;
	this->afficher();
}

NotificationSMS::~NotificationSMS()
{
	cout << "Destruction de l'objet NotificationSMS" << endl;
}
