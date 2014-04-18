#include <os.h>
#include <nspireio2.h>
 
int main(void) {
    nio_console csl;
    lcd_ingray();
    clrscr();
	
    // 53 columns, 29 rows. 0px offset for x/y.
    // Background color 0 (black), foreground color 15 (white)
    nio_InitConsole(&csl, 53, 29, 0, 0, 0, 15);
    nio_DrawConsole(&csl);
    nio_printf(&csl, "nCLI\n");
	nio_printf(&csl, "ordelore8x\n");
	nio_printf(&csl, "This software is distibuted with NO WARRANTY\n");
	nio_printf(&csl, "Use at your own risk!\n");
	nio_printf(&csl, "moo\n");
    nio_printf(&csl, "type 'help' for help\n");
	nio_printf(&csl, "This is in no way coded similar to Linux\n");
	nio_printf(&csl, "\n");
	
	while(1)
	{
		char text[100];
		nio_printf(&csl, ">");
		
		if(!nio_gets(text)) {
		continue;
		}
	if (!strcmp(text, "help")) {
		nio_printf(&csl, "'exit': quit\n");
		nio_printf(&csl, "Find the other commands!\n");
	}
	if (!strcmp(text, "exit")) {
		nio_CleanUp(&csl);
		return 0;
    }
	if (!strcmp(text, "make me a sandwich")) {
		nio_printf(&csl, "NO! Make one yourself\n");
	;}
	if (!strcmp(text, "sudo make me a sandwich")) {
		nio_printf(&csl, "ok\n");
	}
	if (!strcmp(text, "cemetech")) {
		nio_printf(&csl, "Leading the Way to the Future\n");
	}
	if (!strcmp(text, "omnimaga")) {
		nio_printf(&csl, "Lobsters\n");
	}
	if (!strcmp(text, "cake")) {
		nio_printf(&csl, "Lies, all Lies\n");
	}
	return 0;
}
}