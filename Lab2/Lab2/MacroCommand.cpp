#include "MacroCommand.h"

MacroCommand::MacroCommand()
{

}

MacroCommand::~MacroCommand()
{

}

void MacroCommand::execute()
{
	std::list<Command*>::iterator i;

	for (i = commands->begin(); i != commands->end(); i++)
	{
		Command* c = *i;
		c->execute();
	}
}

void MacroCommand::add(Command* c)
{
	commands->push_back(c);
}

void MacroCommand::remove(Command* c)
{
	commands->remove(c);
}
