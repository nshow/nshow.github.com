#include <stdio.h>
#include <unistd.h>
#include "main.h"

int main(void)
{
	init_screen();//   建立FRAMEBUFFER
	mouse_doing();

	return 0;
}
