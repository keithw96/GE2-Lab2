#include "InputHandler.h"

InputHandler::InputHandler()
{
	doCmd = new DoCommand;
	undoCmd = new UndoCommand;
	redoCmd = new RedoCommand;
}

void InputHandler::handleInput()
{

	if (GetKeyState(VK_BACK) & 0x8000 ) undoCmd->execute();
	else if (GetKeyState(VK_TAB) & 0x8000) redoCmd->execute();
	else if (GetKeyState(VK_SPACE) & 0x8000) doCmd->execute();

}