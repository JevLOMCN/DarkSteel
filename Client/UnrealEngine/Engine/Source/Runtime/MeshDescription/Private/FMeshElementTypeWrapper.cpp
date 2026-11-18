// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 1

// FMeshElementTypeWrapper @ 143657630

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshElementTypeWrapper * __thiscall
FMeshElementTypeWrapper::FMeshElementTypeWrapper(FMeshElementTypeWrapper *this,int param_1)

{
  ForElementType<FMeshElementContainer> FVar1;
  code *pcVar2;
  bool bVar3;
  FMeshElementTypeWrapper *pFVar4;
  TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FMeshElementTypeWrapper local_18 [2];
  
  (this->Ptr).Ptr = (FMeshElementChannels *)0x0;
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementContainer.h"
                         ,0x1b2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMeshElementTypeWrapper *)(*pcVar2)();
    return pFVar4;
  }
  pTVar5 = ::operator_new(0x90);
  if (pTVar5 == (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar5 = (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)0x0;
  }
  else {
    (pTVar5->AllocatorInstance).SecondaryData = (ForElementType<FMeshElementContainer>)0x0;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 1;
    TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (pTVar5,param_1,Default);
  }
  if (this == local_18) {
    if (pTVar5 == (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      return this;
    }
    pTVar6 = *(TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               **)&(pTVar5->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar6 == (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar6 = pTVar5;
    }
    DestructItems<FMeshElementContainer,int>((FMeshElementContainer *)pTVar6,pTVar5->ArrayNum);
    FVar1 = (pTVar5->AllocatorInstance).SecondaryData;
    pTVar6 = pTVar5;
    if (FVar1 != (ForElementType<FMeshElementContainer>)0x0) {
      FMemory::Free((void *)FVar1);
    }
  }
  else {
    pTVar6 = &((this->Ptr).Ptr)->Channels;
    (this->Ptr).Ptr = (FMeshElementChannels *)pTVar5;
    if (pTVar6 == (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      return this;
    }
    pTVar5 = *(TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               **)&(pTVar6->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar5 == (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar5 = pTVar6;
    }
    DestructItems<FMeshElementContainer,int>((FMeshElementContainer *)pTVar5,pTVar6->ArrayNum);
    FVar1 = (pTVar6->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FMeshElementContainer>)0x0) {
      FMemory::Free((void *)FVar1);
    }
  }
  ::operator_delete(pTVar6,0x90);
  return this;
}

