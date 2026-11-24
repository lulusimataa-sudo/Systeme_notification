#include "NotificationPush.h"

NotificationPush::NotificationPush(string destinaire, string application, string message) : Notifications(destinaire, message)
{
	this->application = application;
}

void NotificationPush::afficher() const
{
	Notifications::afficher();
	cout << "Application: " << this->application << endl;
}

void NotificationPush::envoyer()
{
	cout << "Envoi de la notification push a" << this->destinaire << endl;
	this->afficher();
}

NotificationPush::~NotificationPush()
{
	cout << "Destruction de l'objet NotificationPush" << endl;	
}

