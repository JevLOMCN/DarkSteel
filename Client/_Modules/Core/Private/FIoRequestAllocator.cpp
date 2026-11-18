// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// AllocRequest @ 1417b3bd0

FIoRequestImpl * __thiscall
FIoRequestAllocator::AllocRequest
          (FIoRequestAllocator *this,FIoChunkId *param_1,FIoReadOptions *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FElement *this_00;
  FElement *pFVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  FBlock *pFVar7;
  FElement **ppFVar8;
  longlong lVar9;
  FBlock *pFVar10;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  lpCriticalSection = &(this->BlockAllocator).CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar10 = (FBlock *)0x0;
  if ((this->BlockAllocator).NextFree == (FElement *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_FIoRequestImpl*___ptr64___cdecl_TBlockAllocator<FIoRequestImpl,4096>::Alloc(void)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_FIoRequestImpl*___ptr64___cdecl_TBlockAllocator<FIoRequestImpl,4096>::Alloc(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_class_FIoRequestImpl*___ptr64___cdecl_TBlockAllocator<FIoRequestImpl,4096>::Alloc(void)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_FIoRequestImpl*___ptr64___cdecl_TBlockAllocator<FIoRequestImpl,4096>::Alloc(void)___ptr64'
                      ::__l5::LLMScope_Name214,L"FileSystem/IODispatcher");
      _Init_thread_footer(&`public:_class_FIoRequestImpl*___ptr64___cdecl_TBlockAllocator<FIoRequestImpl,4096>::Alloc(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res8,
               `public:_class_FIoRequestImpl*___ptr64___cdecl_TBlockAllocator<FIoRequestImpl,4096>::Alloc(void)___ptr64'
               ::__l5::LLMScope_Name214,false,None,Default,true);
    FMemScope::FMemScope
              (&local_res20,
               &`public:_class_FIoRequestImpl*___ptr64___cdecl_TBlockAllocator<FIoRequestImpl,4096>::Alloc(void)___ptr64'
                ::__l5::LLMScope_Name214,true);
    pFVar7 = ::operator_new(0xf0010);
    if (pFVar7 != (FBlock *)0x0) {
      pFVar7->Next = (FBlock *)0x0;
      pFVar10 = pFVar7;
    }
    ppFVar8 = &pFVar10->Elements[2].Next;
    lVar9 = 0x400;
    do {
      ppFVar8[-0x3c] = (this->BlockAllocator).NextFree;
      ppFVar8[-0x1e] = (FElement *)(ppFVar8 + -0x58);
      *ppFVar8 = (FElement *)(ppFVar8 + -0x3a);
      ppFVar8[0x1e] = (FElement *)(ppFVar8 + -0x1c);
      (this->BlockAllocator).NextFree = (FElement *)(ppFVar8 + 2);
      ppFVar8 = ppFVar8 + 0x78;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    pFVar10->Next = (this->BlockAllocator).Blocks;
    (this->BlockAllocator).Blocks = pFVar10;
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
  }
  this_00 = (this->BlockAllocator).NextFree;
  pFVar2 = this_00->Next;
  piVar1 = &(this->BlockAllocator).NumElements;
  *piVar1 = *piVar1 + 1;
  (this->BlockAllocator).NextFree = pFVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x28) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x30) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x48) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x58) = 0;
  *(undefined4 *)((longlong)(this_00->Buffer).Pad + 0x60) = 0;
  *(undefined4 *)((longlong)(this_00->Buffer).Pad + 0x68) = 0;
  *(FIoRequestAllocator **)((longlong)(this_00->Buffer).Pad + 0x70) = this;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x78) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x80) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x88) = 0;
  *(undefined1 *)((longlong)(this_00->Buffer).Pad + 0x98) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0xa0) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 200) = 0;
  *(undefined4 *)((longlong)(this_00->Buffer).Pad + 0xd0) = 0;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0xd4) = 1;
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)this_00);
  LOCK();
  this->RefCount = (TAtomic<int>)((int)this->RefCount + 1);
  UNLOCK();
  pvVar3 = param_2->TargetVa;
  uVar4 = *(undefined8 *)&param_2->Flags;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x38) = *(undefined8 *)param_1->Id;
  uVar5 = param_2->RequestedOffset;
  uVar6 = param_2->RequestedSize;
  *(undefined4 *)((longlong)(this_00->Buffer).Pad + 0x40) = *(undefined4 *)(param_1->Id + 8);
  *(ulong64 *)((longlong)(this_00->Buffer).Pad + 0x48) = uVar5;
  *(ulong64 *)((longlong)(this_00->Buffer).Pad + 0x50) = uVar6;
  *(void **)((longlong)(this_00->Buffer).Pad + 0x58) = pvVar3;
  *(undefined8 *)((longlong)(this_00->Buffer).Pad + 0x60) = uVar4;
  return (FIoRequestImpl *)this_00;
}

// ReleaseRef @ 1417f4b40

void __thiscall FIoRequestAllocator::ReleaseRef(FIoRequestAllocator *this)

{
  TAtomic<int> TVar1;
  FBlock *pFVar2;
  FBlock *pFVar3;
  
  LOCK();
  TVar1 = this->RefCount;
  this->RefCount = (TAtomic<int>)((int)this->RefCount + -1);
  UNLOCK();
  if ((TVar1 == (TAtomic<int>)0x1) && (this != (FIoRequestAllocator *)0x0)) {
    pFVar3 = (this->BlockAllocator).Blocks;
    while (pFVar3 != (FBlock *)0x0) {
      pFVar2 = pFVar3->Next;
      ::operator_delete(pFVar3,0xf0010);
      pFVar3 = pFVar2;
    }
    (this->BlockAllocator).Blocks = (FBlock *)0x0;
    (this->BlockAllocator).NextFree = (FElement *)0x0;
    (this->BlockAllocator).NumElements = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)&(this->BlockAllocator).CriticalSection);
    ::operator_delete(this,0x48);
  }
  return;
}

