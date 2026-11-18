// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 2

// Acquire @ 14a842a10

int __thiscall FWN_UniqueIndexAllocator::Acquire(FWN_UniqueIndexAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  TryResize(this);
  if ((this->FreedIndices).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (this->FreedIndices).ArrayNum;
  iVar4 = iVar3 + -1;
  iVar3 = *(int *)((this->FreedIndices).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
  (this->FreedIndices).ArrayNum = iVar4;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->FreedIndices).AllocatorInstance,iVar4,&(this->FreedIndices).ArrayMax);
  return iVar3;
}

// Release @ 14a852640

void __thiscall FWN_UniqueIndexAllocator::Release(FWN_UniqueIndexAllocator *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  if ((param_1 < this->BaseIndex) || (this->NumIndices <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<668991184131063845>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Public\\WN_UniqueIndexAllocator.h"
                       ,0x25,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->FreedIndices).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     (((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->FreedIndices).ArrayMax * 4
      && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)))) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->FreedIndices).ArrayNum;
  piVar1 = &(this->FreedIndices).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->FreedIndices).AllocatorInstance,piVar1);
  }
  (this->FreedIndices).ArrayNum = iVar5 + 1;
  *(int *)((this->FreedIndices).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

