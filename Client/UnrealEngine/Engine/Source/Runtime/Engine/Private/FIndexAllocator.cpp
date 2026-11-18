// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Allocate @ 14862e350

int __thiscall FSkeletalMeshUpdateChannel::FIndexAllocator::Allocate(FIndexAllocator *this)

{
  atomic<unsigned_char> aVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if ((this == (FIndexAllocator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  LOCK();
  bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  iVar5 = (this->FreeList).ArrayNum;
  if (iVar5 == 0) {
    iVar5 = this->Max;
    this->Max = iVar5 + 1;
  }
  else {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar2 = (this->FreeList).ArrayNum;
    iVar5 = *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
    (this->FreeList).ArrayNum = iVar2 + -1;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return iVar5;
}

// Free @ 1486415d0

void __thiscall FSkeletalMeshUpdateChannel::FIndexAllocator::Free(FIndexAllocator *this,int param_1)

{
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if ((this == (FIndexAllocator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar3 = (this->FreeList).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->FreeList).ArrayMax * 4))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->FreeList).AllocatorInstance,piVar1);
  }
  (this->FreeList).ArrayNum = iVar6 + 1;
  *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  if (this != (FIndexAllocator *)0x0) {
    LOCK();
    aVar2 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
  }
  return;
}

