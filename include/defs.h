<<<<<<< HEAD
struct list_head;
struct proc;

// console.c
void            cprintf(char* fmt, ...);
void            panic(char* s);

// memblock.c

void            memblock_init(void);
u64             memblock_alloc(u64 size, u64 align);

// proc.c
//void            test(void);

// string.c
int             memcmp(const void*, const void*, u32);
void*           memmove(void*, const void*, u32);
void*           memset(void*, int, u32);
char*           safestrcpy(char*, const char*, int);
int             strlen(const char*);
int             strncmp(const char*, const char*, u32);
char*           strncpy(char*, const char*, int);

=======



// console.c

void panic(char* s);

// memblock.c

void memblock_init(void);

// proc.c
void test(void);
>>>>>>> 5eb3e1ade6684f4766a9bb2e9dd54ff24fee2b23
