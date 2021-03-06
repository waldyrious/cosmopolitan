#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_IPC_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_IPC_H_
#include "libc/runtime/symbolic.h"

#define IPC_CREAT SYMBOLIC(IPC_CREAT)
#define IPC_EXCL SYMBOLIC(IPC_EXCL)
#define IPC_INFO SYMBOLIC(IPC_INFO)
#define IPC_NOWAIT SYMBOLIC(IPC_NOWAIT)
#define IPC_PRIVATE SYMBOLIC(IPC_PRIVATE)
#define IPC_RMID SYMBOLIC(IPC_RMID)
#define IPC_SET SYMBOLIC(IPC_SET)
#define IPC_STAT SYMBOLIC(IPC_STAT)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long IPC_CREAT;
extern const long IPC_EXCL;
extern const long IPC_INFO;
extern const long IPC_NOWAIT;
extern const long IPC_PRIVATE;
extern const long IPC_RMID;
extern const long IPC_SET;
extern const long IPC_STAT;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_IPC_H_ */
