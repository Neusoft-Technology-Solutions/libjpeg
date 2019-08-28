// this is mainly 1:1 copied from jconfig.vc:
#define HAVE_PROTOTYPES
#define HAVE_UNSIGNED_CHAR
#define HAVE_UNSIGNED_SHORT
#undef  CHAR_IS_UNSIGNED
#define HAVE_STDDEF_H
#define HAVE_STDLIB_H
#undef  NEED_BSD_STRINGS
#undef  NEED_SYS_TYPES_H
#undef  NEED_FAR_POINTERS
#undef  NEED_SHORT_EXTERNAL_NAMES
#undef  INCOMPLETE_TYPES_BROKEN


// ugly workaround for boolean declarations:
#define HAVE_BOOLEAN
#ifdef _MSC_VER
   #ifndef __RPCNDR_H__ // don't clash with rpcndr.h
      typedef unsigned char boolean;
   #endif
#else
   typedef unsigned char boolean;
#endif
#ifndef FALSE
   #define FALSE 0
#endif
#ifndef TRUE
   #define TRUE 1
#endif
