#pragma once
#include "Notifications.h"
class GestionnaireNotifications
{
private:
	Notifications** notifications;
	int compteur;
public:
	GestionnaireNotifications();
	void ajouterNotification(Notifications* notification);
	void envoyerNotifications();
	~GestionnaireNotifications();
};

