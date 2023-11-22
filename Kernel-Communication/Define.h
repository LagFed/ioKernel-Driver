#ifndef _DEFINES_H
#define _DEFINES_H

#include <ntifs.h>

constexpr ULONG PROCESS_ID_CODE = CTL_CODE(FILE_DEVICE_UNKNOWN, 0x1337, METHOD_BUFFERED, FILE_SPECIAL_ACCESS);

typedef struct _PROCESS_ID_REQUEST
{
  ULONG process_id;
  wchar_t process_name[260];
  PROCESS_ID_REQUEST, * PROCESS_ID_REQUEST; // This may cause some issues, will fix if it causes any BSOD during snapshot collection
}

extern "C" // I know this is going to annoy some developers
NTKERNELAPI
// Will finish code for structure later.
