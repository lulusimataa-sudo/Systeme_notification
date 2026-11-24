#include "Notifications.h"

Notifications::Notifications(string destinaire, string message)
{
	this->destinaire = destinaire;
	this->message = message;
}

void Notifications::afficher() const
{
	cout << "Destinaire: " << this->destinaire << endl;
	cout << "Message: " << this->message << endl;
}

Notifications::~Notifications()
{
	cout << "Destruction de l'objet Notifications" << endl;
}
