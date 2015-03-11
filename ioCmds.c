#include <stdio.h>

int32_t ioCmd( char Command)
{
	switch(Command)
	{
	case 0:
		printf("help");
		break;
	case 1:
		printf("go away");
		break;
	default:
		printf("oh no!!");
	}
}

int32_t parseCmd( char *Cmd)
{
	switch(Cmd)
	{
	}
}
