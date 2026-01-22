//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>
ApplicationView::ApplicationView(ApplicationModel *m):
	View(m)
{}

//overriding della funzione MVC::View::draw()
void ApplicationView::draw()
{
	system("cls");
	std::cout << std::endl;

/*	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << "  ID VIEW:"<< this << std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
*/
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << " |                   MINIMARKET                  |" <<std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << " | ARTICOLO: |";std::cout << "\t\t|" << " PREZZO IN EURO: |"<<std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Pera-------------------------------------------- " << std::endl;
	std::cout << "   Arancia-------------------------------------------- " << std::endl;
	std::cout << "   Cocco-------------------------------------------- " << std::endl;
	std::cout << "   Kiwi-------------------------------------------- " << std::endl;
	std::cout << "   Banana-------------------------------------------- " << std::endl;
	std::cout << "   -------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;
	std::cout << "   Mela-------------------------------------------- " << std::endl;


}

//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

