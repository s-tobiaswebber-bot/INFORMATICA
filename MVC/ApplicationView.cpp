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
	std::cout << "  [1] Mela---------------------------------------------1$ " << std::endl;
	std::cout << "  [2] Pera---------------------------------------------1$ " << std::endl;
	std::cout << "  [3] Arancia------------------------------------------1$ " << std::endl;
	std::cout << "  [4] Cocco--------------------------------------------2$ " << std::endl;
	std::cout << "  [5] Kiwi---------------------------------------------1$ " << std::endl;
	std::cout << "  [6] Banana-------------------------------------------1$ " << std::endl;
	std::cout << "  [7] Anguria------------------------------------------5$ " << std::endl;
	std::cout << "  [8] Coca Cola----------------------------------------2$ " << std::endl;
	std::cout << "  [9] Fanta--------------------------------------------2$ " << std::endl;
	std::cout << "  [10] Te alla pesca-----------------------------------2$ " << std::endl;
	std::cout << "  [11] Te alla pesca-----------------------------------2$ " << std::endl;
	std::cout << "  [12] Succo-------------------------------------------1$ " << std::endl;
	std::cout << "  [13] Yougurt-----------------------------------------2$ " << std::endl;
	std::cout << "  [14] Gocciole----------------------------------------3$ " << std::endl;
	std::cout << "  [15] Cereali-----------------------------------------3$ " << std::endl;
	std::cout << "  [16] Barretta di cioccolato--------------------------3$ " << std::endl;

}



int ApplicationView::getScelta(){
	int scelta;
	std::cout << " | INSERIRE il comando scelto: ";
	std::cin >> scelta;
	return scelta;
}

//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

