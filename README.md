# PSP_ExecLoader

Warning: You need kernel mode to run this, All firmwares reject any application running from the memory stick using sceLoadExec. I might just add the pspSdk routines to disintergrate that check. :P

Just for fun, Sample code using sceKernelLoadExec on v1.0.0b (1.00 bogus), because "getcwd" doesn't work for some reason, as the firmware (VSH) doesn't pass the correct arguments.

Basically just using sceKernelLoadExec with some params to give the executable's init a current working directory, which also allows a broader range of compatibility of homebrew on the firmware.

Note: This ONLY works when the firmware allows all modules to load (using pspSdk utilities, which I'm not sure if it works on newer firmwares...), along with the NoDeviceChecks disabled.

Note 2: sceKernelLoadExecVSHMs* do not work with the firmware due to some system linking errors.
