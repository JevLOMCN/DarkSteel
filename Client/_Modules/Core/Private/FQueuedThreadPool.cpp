// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FQueuedThreadPool @ 1416d6540

FQueuedThreadPool * __thiscall FQueuedThreadPool::FQueuedThreadPool(FQueuedThreadPool *this)

{
  *this = (FQueuedThreadPool)&___7FQueuedThreadPool__6B_;
  return this;
}

// ~FQueuedThreadPool @ 1416d8fb0

void __thiscall FQueuedThreadPool::~FQueuedThreadPool(FQueuedThreadPool *this)

{
  *this = (FQueuedThreadPool)&___7FQueuedThreadPool__6B_;
  return;
}

// Allocate @ 1416dfe70

FQueuedThreadPool * __cdecl FQueuedThreadPool::Allocate(void)

{
  FQueuedThreadPool *pFVar1;
  
  pFVar1 = ::operator_new(0xb8);
  if (pFVar1 != (FQueuedThreadPool *)0x0) {
    *pFVar1 = (FQueuedThreadPool)&___7FQueuedThreadPoolBase__6B_;
    *(undefined4 *)(pFVar1 + 1) = 0;
    pFVar1[0xe] = (FQueuedThreadPool)0x0;
    *(undefined4 *)(pFVar1 + 0xf) = 0;
    *(undefined8 *)&pFVar1[0xf].field_0x4 = 6;
    pFVar1[0x11] = (FQueuedThreadPool)0x0;
    pFVar1[0x12] = (FQueuedThreadPool)0x0;
    pFVar1[0x13] = (FQueuedThreadPool)0x0;
    pFVar1[0x14] = (FQueuedThreadPool)0x0;
    pFVar1[0x15] = (FQueuedThreadPool)0x0;
    *(undefined1 *)(pFVar1 + 0x16) = 0;
    return pFVar1;
  }
  return (FQueuedThreadPool *)0x0;
}

// CreateForkable @ 1416e81a0

bool __thiscall
FQueuedThreadPool::CreateForkable
          (FQueuedThreadPool *this,uint param_1,uint param_2,EThreadPriority param_3,
          wchar_t *param_4)

{
  return false;
}

