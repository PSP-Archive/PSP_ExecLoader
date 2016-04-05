#include <pspkernel.h>
#include <pspdebug.h>
#include <string.h>
#include <stdio.h>
#include <psploadexec.h>

/* Define the module info section */
PSP_MODULE_INFO("bootloader", 0, 1, 1);

/* Define the main thread's attribute value (optional) */
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

PSP_HEAP_SIZE_KB(8*1024); // Can be adjusted

#define APP "ms0:/PSP/GAME/BOOT/BOOT.elf"

void LoadExecELF(char *filename)
{	
     struct SceKernelLoadExecParam param;
    
     memset(&param, 0, sizeof(param));
    
     param.size = sizeof(param);
     param.args = strlen(filename)+1;
     param.argp = filename;
     param.key = "game";
    
     printf("Starting: %s in %s mode\n", filename, param.key);
    
    sceKernelLoadExec(filename, &param);
}

int main(int argc, char *argv[])
{
    LoadExecELF(APP);

	return 0;
}
