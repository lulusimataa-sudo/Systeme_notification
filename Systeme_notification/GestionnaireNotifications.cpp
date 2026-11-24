#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications() : compteur(0)
{
	notifications = new Notifications * [100];
}

void GestionnaireNotifications::ajouterNotification(Notifications* notification)
{
	if (compteur < 100&& notification != nullptr)
	{
		notifications[compteur] = notification;
		compteur++;
	}
	else
	{
		std::cout << "Ajou impossible." << std::endl;
	}
}

void GestionnaireNotifications::envoyerNotifications()
{
	for (int i = 0; i < compteur; i++)
	{
		notifications[i]->envoyer();
		std::cout << "_________________" << std::endl;
	}
}

GestionnaireNotifications::~GestionnaireNotifications()
{
	delete[] notifications;
}


