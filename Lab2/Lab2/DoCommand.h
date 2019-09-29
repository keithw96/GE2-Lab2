#pragma once

#include "Command.h"

class DoCommand : public Command
{
public:

	virtual void execute() { doComm(); }

private:

	void doComm() { std::cout << "Do" << std::endl; };

};