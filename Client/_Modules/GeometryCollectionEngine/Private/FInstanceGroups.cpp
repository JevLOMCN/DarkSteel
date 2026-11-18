// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// AddGroup @ 1463a92e0

int __thiscall FInstanceGroups::AddGroup(FInstanceGroups *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int local_38;
  int iStack_34;
  
  uVar9 = 0;
  if (0 < (this->FreeList).ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->FreeList).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      uVar6 = *(uint *)((this->FreeList).AllocatorInstance.Data + lVar11);
      uVar8 = 0;
      if ((int)uVar6 < (this->GroupRanges).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1 ==
          *(int *)((this->GroupRanges).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4)) {
        this->TotalFreeInstanceCount = this->TotalFreeInstanceCount - param_1;
        uVar8 = 0;
        if ((int)uVar9 < (this->FreeList).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar2 = (this->FreeList).ArrayNum;
        pFVar3 = (this->FreeList).AllocatorInstance.Data;
        iVar7 = iVar2 + ~uVar9;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar9 * 4,pFVar3 + (longlong)(iVar2 - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        piVar1 = &(this->FreeList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        return uVar6;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar9 < (this->FreeList).ArrayNum);
  }
  local_38 = this->TotalInstanceCount;
  this->TotalInstanceCount = local_38 + param_1;
  pFVar3 = (this->GroupRanges).AllocatorInstance.Data;
  iStack_34 = param_1;
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->GroupRanges).ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = (this->GroupRanges).ArrayNum;
  piVar1 = &(this->GroupRanges).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->GroupRanges).AllocatorInstance,piVar1);
    (this->GroupRanges).ArrayNum = iVar7;
  }
  pFVar3 = (this->GroupRanges).AllocatorInstance.Data;
  (this->GroupRanges).ArrayNum = iVar7 + 1;
  *(ulonglong *)(pFVar3 + (longlong)iVar7 * 8) = CONCAT44(iStack_34,local_38);
  return iVar7;
}

