#include "InputHandler.h"


int main()
{
	bool run = true;
	InputHandler* inputHandler = new InputHandler();

	while (run)
	{
		inputHandler->handleInput();
	}


	return 0;
}