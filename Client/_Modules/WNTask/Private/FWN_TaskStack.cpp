// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 2

// Pop @ 14a6ae9e0

void __thiscall FWN_TaskStack::Pop(FWN_TaskStack *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->Stack).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->Stack).ArrayNum;
  uVar1 = iVar3 - 1;
  _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
  iVar3 = ~uVar1 + iVar3;
  if (iVar3 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar3 << 3);
  }
  piVar2 = &(this->Stack).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax);
  return;
}

// Push @ 14a6b0f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskStack::Push(FWN_TaskStack *this,FWN_Task *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FWN_Task *local_res10 [3];
  
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Stack).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Stack).AllocatorInstance,piVar1);
  }
  (this->Stack).ArrayNum = iVar5 + 1;
  *(FWN_Task **)((this->Stack).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

