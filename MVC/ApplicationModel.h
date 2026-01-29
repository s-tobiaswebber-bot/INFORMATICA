
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"
#include <string>

class ApplicationModel : public MVC::Model { 
	int mValue;
	string articoli[11];

public:
	ApplicationModel();
	void loadValue(int value);
	int getValue();

	
};

#endif

