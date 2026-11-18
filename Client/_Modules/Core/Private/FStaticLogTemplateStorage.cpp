// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Allocate @ 1417b3e10

void * __thiscall
UE::Logging::Private::FStaticLogTemplateStorage::Allocate
          (FStaticLogTemplateStorage *this,int param_1)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  FBlock *pFVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  bool bVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::Logging::Private::GetStaticLogTemplateAllocator'::__l2::
           _dynamic_atexit_destructor_for__Allocator__);
    _Init_thread_footer(&::_TSS0);
  }
  LOCK();
  bVar7 = Allocator.Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    Allocator.Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&Allocator.Mutex);
  }
  if ((Allocator.Tail == (FBlock *)0x0) || ((Allocator.Tail)->Size < param_1 + Allocator.TailOffset)
     ) {
    uVar4 = param_1 + 0x100fU & 0xfffff000;
    pFVar3 = FMemory::Malloc((longlong)(int)uVar4,8);
    pFVar3->Previous = Allocator.Tail;
    Allocator.TailOffset = 0x10;
    pFVar3->Size = uVar4;
    Allocator.Tail = pFVar3;
  }
  lVar5 = (longlong)Allocator.TailOffset;
  Allocator.TailOffset = (param_1 + 7U & 0xfffffff8) + Allocator.TailOffset;
  pvVar6 = (void *)((longlong)&(Allocator.Tail)->Previous + lVar5);
  LOCK();
  aVar2 = Allocator.Mutex.State + -1;
  UNLOCK();
  bVar1 = (byte)Allocator.Mutex.State & 2;
  Allocator.Mutex.State = aVar2;
  if (bVar1 != 0) {
    FMutex::WakeWaitingThread(&Allocator.Mutex);
  }
  this->Data = pvVar6;
  return pvVar6;
}

