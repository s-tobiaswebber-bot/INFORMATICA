//#include "StdAfx.h"
#include "ApplicationModel.h"

	ApplicationModel::ApplicationModel():
	mValue(0),Model()
	{
		articoli[0] = "Mela"
		articoli[1] = "Pera"
		articoli[2] = "Arancia"
		articoli[3] = "Cocco"
		articoli[4] = "Kiwi"
		articoli[5] = "Banana"
		articoli[6] = "Anguria"
		articoli[7] = "Ananas"
		articoli[8] = "Fanta"
		articoli[9] = "Te alla pesca"
		articoli[10] = "Te al limone"
	
	}

	//quando cambia lo stato dell'applicazione, il View va aggiornato
	void ApplicationModel::loadValue(int value)
	{
		mValue=value;
		notify();//""quando cambia lo stato dell'applicazione"", il View e il Controller vanno aggiornati!!!
				 //per invocare update() del View e del Controller
	}

	//semplice funzione che restituisce il valore
	int ApplicationModel::getValue()
	{
		return mValue;
	}
