#pragma once
#include "Command.h"

class UndoCommand : public Command
{
public:

	virtual void execute() { undo(); }

private:

	void undo() { std::cout << "Undo" << std::endl; }
};