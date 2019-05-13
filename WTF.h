#pragma once
#include <fstream>
#include "Container.h"
#include <iostream>

class WTF
{
private:
	List *ring;
public:
		WTF();
		WTF(List &ring);
		bool Write();
	};
