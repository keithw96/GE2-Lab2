#pragma once

#include <iostream>
#include <Windows.h>

class Command
{
public: 

	virtual ~Command() {}
	virtual void execute() = 0;
};

