TARGET = BOOT
OBJS = main.o

INCDIR = 
CFLAGS = -O2 -G0 -Wall
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

LIBDIR =
LDFLAGS =

PSP_EBOOT_TITLE = PSP Bootloader for 1.0.0b
EXTRA_TARGETS = EBOOT.PBP

PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak
