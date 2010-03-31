#ifndef __COMMON_H
#define __COMMON_H

#define DEFAULT_WRITE_BUFF_SIZE (1024 * 4)
#define DEFAULT_READ_BUFF_SIZE (1024 * 12)
#define DEFAULT_COMMAND_BUFF_SIZE 64
#define MAX_BUFF_SIZE (1024 * 1024 * 4)
#define MAX_CONNECTIONS 1024

#ifndef MIN
#define MIN(a,b) ((a)>(b)?(b):(a))
#endif

#define DEFAULT_IP_PORT 6379

#ifndef NDEBUG
#define DEBUG(args) (printf("DEBUG: "), printf args)
#else
#define DEBUG(args)
#endif

#define SETERROR(args) (snprintf(g_module->error, MAX_ERROR_SIZE, args))

#define CR '\r'
#define LF '\n'
#define CRLF '\r\n'

typedef char Byte;

#include "alloc.h"

typedef struct _Command Command;
typedef struct _Reply Reply;

#endif
