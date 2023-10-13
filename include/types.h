<<<<<<< HEAD
typedef char i8;
typedef short i16;
typedef int i32;
typedef long long i64;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
=======
#include<stdbool.h>
#include<stdint.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
>>>>>>> 5eb3e1ade6684f4766a9bb2e9dd54ff24fee2b23

typedef float f32;
typedef double f64;

<<<<<<< HEAD
typedef u8 byte;

typedef u64 uintp;

typedef u64 pde_t;

#define min(x,y) ({ \
	typeof(x) _x = (x);	\
	typeof(y) _y = (y);	\
	(void) (&_x == &_y);	\
	_x < _y ? _x : _y; })

#define max(x,y) ({ \
	typeof(x) _x = (x);	\
	typeof(y) _y = (y);	\
	(void) (&_x == &_y);	\
	_x > _y ? _x : _y; })
=======
typedef uint8_t byte;
typedef uint16_t word;
typedef uint32_t dword;
typedef uint64_t qword;

typedef u32 pde_t;

struct list_head{
  struct list_head *next, *prev;
};
>>>>>>> 5eb3e1ade6684f4766a9bb2e9dd54ff24fee2b23
