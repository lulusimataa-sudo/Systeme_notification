// Systeme_notification.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Notifications.h"
#include "NotificationSMS.h"
#include "NotificationEmail.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"
#include <iostream>

int main()
{
	NotificationEmail email("Nila@gmail.com", "Vol", "Votre vol est confirme.");
	NotificationSMS sms("Mals", "Orange", "Vous avez renouvele votre abonnement.");
	NotificationPush push("Nana", "Nilapp", "Vous etes la meilleure grande soeur.");
	Notifications* notifications[3] = { &email, &sms, &push };
	for (int i = 0; i < 3; i++)
	{
		notifications[i]->envoyer();
		//notifications[i]->afficher();
		cout <<"_________________" << endl;
	}

	GestionnaireNotifications gestionnaire;

	gestionnaire.ajouterNotification(&email);
	gestionnaire.ajouterNotification(&sms);
	gestionnaire.ajouterNotification(&push);
	cout << "Envoi des notifications via le gestionnaire:" << endl;
	gestionnaire.envoyerNotifications();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
