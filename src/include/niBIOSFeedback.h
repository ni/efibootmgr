#ifndef NIBIOSFEEDBACK_H
#define NIBIOSFEEDBACK_H

#include <string.h>
#include "efi.h"

#define SET_EFIVAR_FAIL 0
#define SET_EFIVAR_SUCCESS 1

//Define EFI variable name
#define NIBIOSVAR "NIUEFIConsoleOut"

//Define EFI GUID
#define NIBIOSGUID  \
EFI_GUID ( 0x5EAB87DB, 0x1326, 0x4901, 0x90, 0x85, 0x8C, 0x02, 0xB8, 0x02, 0xF8, 0x78 )

//Define flag names
#define CONSOLE_OUT "BootFirmwareConsoleOutEnable"

typedef struct {
	uint8_t ConsoleOutEnable;// 0 or 1
                               // read this value to determine the current state of this feature (0 = Console Output disabled on this boot; 1 = Console Output enabled on this boot)
                               // write to byte and reboot in order to change the setting (write 0 and reboot = request to disable Console Output on next boot; write 1 and reboot = request to enable Console Output on next boot)
} NIBIOSConsoleOut;

#endif /*NIBIOSFEEDBACK_H*/
