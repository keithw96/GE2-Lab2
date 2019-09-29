#pragma once

#include "Command.h"

class RedoCommand : public Command
{
public:

	virtual void execute() { redo(); }

private:

	void redo() { std::cout << "Redo" << std::endl; }

};