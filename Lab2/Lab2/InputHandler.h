#pragma once

#include "DoCommand.h"
#include "RedoCommand.h"
#include "UndoCommand.h"

class InputHandler
{
public:
	InputHandler();
	void handleInput();

private:
	Command* doCmd;
	Command* undoCmd;
	Command* redoCmd;
};

