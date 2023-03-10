#pragma once


typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;

typedef char i8;
typedef short i16;
typedef long i32;
typedef long long i64;

#if _WIN64
typedef u64 usize;
#elif _WIN32
typedef u32 usize;
#else
#error Windows Required
#endif

typedef wchar_t wchar;

typedef char* str;
typedef wchar_t* wcs;
typedef const char* cstr;
typedef const wchar_t* cwcs;
