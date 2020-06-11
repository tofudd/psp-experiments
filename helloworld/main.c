#include <pspkernel.h>
#include <pspdebug.h>
#include <pspdisplay.h>
#include <pspkerneltypes.h>
#include <pspctrl.h>

#include "../common/callback.h"

#define VERS 1
#define REVS 0

PSP_MODULE_INFO("Hello World", PSP_MODULE_USER, VERS, REVS);
PSP_MAIN_THREAD_ATTR(PSP_THREAD_ATTR_USER);
PSP_HEAP_SIZE_MAX();

#define printf pspDebugScreenPrintf

int main()
{
	pspDebugScreenInit();
	setupExitCallback();
	while (isRunning())
	{

		pspDebugScreenSetXY(0, 0);
		pspDebugScreenSetTextColor(0x43ff00);

		printf("\n");
		printf("tofu 2020")
		printf("\n");

		sceDisplayWaitVblankStart();
	}
	sceKernelExitGame();
	return 0;
}