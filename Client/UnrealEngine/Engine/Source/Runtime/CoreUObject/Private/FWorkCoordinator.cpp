// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ~FWorkCoordinator @ 1420139c0

void __thiscall UE::GC::FWorkCoordinator::~FWorkCoordinator(FWorkCoordinator *this)

{
  code *pcVar1;
  bool bVar2;
  FStealableContext *pFVar3;
  FStealableContext *pFVar4;
  
  if ((this->NumUsedContexts != (atomic<int>)(this->Contexts).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumUsedContexts == Contexts.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1b52,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = (this->Contexts).DataPtr;
  pFVar4 = pFVar3 + (this->Contexts).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      FMemory::Free((this->Contexts).DataPtr);
      return;
    }
    if ((pFVar3->_padding_ != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Context.load(std::memory_order_relaxed) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x1b55,L""), bVar2)) break;
    pFVar3 = pFVar3 + 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SpinUntilAllStopped @ 14208f570

void __thiscall UE::GC::FWorkCoordinator::SpinUntilAllStopped(FWorkCoordinator *this)

{
  if ((int)this->NumStopped < (this->Contexts).ArrayNum) {
    do {
    } while ((int)this->NumStopped < (this->Contexts).ArrayNum);
  }
  return;
}

// TryStartWorking @ 142091ec0

FWorkerContext * __thiscall
UE::GC::FWorkCoordinator::TryStartWorking(FWorkCoordinator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWorkerContext *pFVar4;
  FStealableContext *pFVar5;
  
  uVar3 = 0;
  if (param_1 < (this->Contexts).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWorkerContext *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (this->Contexts).DataPtr + param_1;
  LOCK();
  pFVar4 = (FWorkerContext *)pFVar5->_padding_;
  pFVar5->_padding_ = 0;
  UNLOCK();
  if (pFVar4 != (FWorkerContext *)0x0) {
    LOCK();
    this->NumUsedContexts = (atomic<int>)((int)this->NumUsedContexts + 1);
    UNLOCK();
    return pFVar4;
  }
  return (FWorkerContext *)0x0;
}

