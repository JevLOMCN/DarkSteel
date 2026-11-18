// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 2

// operator= @ 14df743c0

TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *this,
          TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FFBIKLinkData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FFBIKLinkData,int>((FFBIKLinkData *)(this->AllocatorInstance).Data,this->ArrayNum)
    ;
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FFBIKLinkData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FFBIKLinkData,FFBIKLinkData,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Insert @ 14df80f60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this,FRigElementKey *param_1,
          int param_2)

{
  longlong lVar1;
  FRigElementKey *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar2 = (FRigElementKey *)(this->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  lVar1 = (longlong)param_2 * 0xc;
  pFVar6 = (this->AllocatorInstance).Data + lVar1;
  memmove(pFVar6 + 0xc,pFVar6,(longlong)(iVar5 - param_2) * 0xc);
  pFVar6 = (this->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar1) = *(undefined8 *)param_1;
  *(uint *)(pFVar6 + lVar1 + 8) = (param_1->Name).Number;
  return param_2;
}

