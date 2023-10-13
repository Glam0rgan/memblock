<<<<<<< HEAD
enum procstate { UNUSED, EMBRYO, SLEEPING, RUNNING, ZOMBIE};

=======
>>>>>>> 5eb3e1ade6684f4766a9bb2e9dd54ff24fee2b23
struct proc{
  u64 size;
  u64* pgdir;
  u8* kstack;
  enum procstate state;
  volatile int pid;
  struct proc *parent;
  struct trapframe* tf;
  struct context* context;
  int killed;
  char name[16];
<<<<<<< HEAD
};
=======
}
>>>>>>> 5eb3e1ade6684f4766a9bb2e9dd54ff24fee2b23
