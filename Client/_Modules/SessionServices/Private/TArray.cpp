// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 3

// AddUniqueImpl<FMessageAddress_const_&> @ 148cea300

int __thiscall
TArray<FMessageAddress,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMessageAddress_const_&>
          (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *this,FMessageAddress *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    uVar3 = *(undefined8 *)&(param_1->UniqueId).C;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->UniqueId;
    *(undefined8 *)(pFVar1 + 8) = uVar3;
  }
  return iVar5;
}

// Find @ 148cf1da0

int __thiscall
TArray<FMessageAddress,TSizedDefaultAllocator<32>_>::Find
          (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *this,FMessageAddress *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if ((((param_1->UniqueId).D == *(uint *)(pFVar2 + 0xc) &&
           (param_1->UniqueId).C == *(uint *)(pFVar2 + 8)) &&
          (param_1->UniqueId).B == *(uint *)(pFVar2 + 4)) &&
          (param_1->UniqueId).A == *(uint *)pFVar2) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// Remove @ 148cf66d0

int __thiscall
TArray<FMessageAddress,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *this,FMessageAddress *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar10 = 0;
  bVar3 = ((*(uint *)(pFVar1 + 0xc) != (param_1->UniqueId).D ||
           *(uint *)(pFVar1 + 8) != (param_1->UniqueId).C) ||
          *(uint *)(pFVar1 + 4) != (param_1->UniqueId).B) ||
          (param_1->UniqueId).A != *(uint *)pFVar1;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar5) {
      pFVar6 = pFVar1 + (lVar7 * 4 + 2) * 4;
      do {
        if (bVar3 != ((((param_1->UniqueId).A != *(uint *)(pFVar6 + -8) ||
                       (param_1->UniqueId).B != *(uint *)(pFVar6 + -4)) ||
                      (param_1->UniqueId).D != *(uint *)(pFVar6 + 4)) ||
                     (param_1->UniqueId).C != *(uint *)pFVar6)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
        pFVar6 = pFVar6 + 0x10;
      } while (lVar7 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar10 != iVar8) {
        memmove(pFVar1 + (longlong)iVar10 * 0x10,pFVar1 + (longlong)iVar8 * 0x10,
                (longlong)(iVar9 - iVar8) << 4);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar8 = iVar9;
    if (lVar5 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar4 - iVar10;
    }
  } while( true );
}

