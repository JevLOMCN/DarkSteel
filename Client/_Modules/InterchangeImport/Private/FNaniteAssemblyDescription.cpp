// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// FNaniteAssemblyDescription @ 14e68ff20

FNaniteAssemblyDescription * __thiscall
UE::Interchange::FNaniteAssemblyDescription::FNaniteAssemblyDescription
          (FNaniteAssemblyDescription *this,FNaniteAssemblyDescription *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Interchange::FNaniteAssemblyDescription::FBoneInfluence,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  
  piVar1 = &(this->Transforms).ArrayMax;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Transforms).ArrayNum;
  pFVar6 = (param_1->Transforms).AllocatorInstance.Data;
  (this->Transforms).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->Transforms).AllocatorInstance.Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  pTVar2 = &this->PartIndices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PartIndices).ArrayMax;
  iVar5 = (param_1->PartIndices).ArrayNum;
  pFVar6 = (param_1->PartIndices).AllocatorInstance.Data;
  (this->PartIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->PartUids;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PartUids).ArrayMax;
  iVar5 = (param_1->PartUids).ArrayNum;
  pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(param_1->PartUids).AllocatorInstance.Data
  ;
  (this->PartUids).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar7,iVar5);
  }
  pTVar4 = &this->BoneInfluences;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BoneInfluences).ArrayMax;
  iVar5 = (param_1->BoneInfluences).ArrayNum;
  pFVar6 = (param_1->BoneInfluences).AllocatorInstance.Data;
  (this->BoneInfluences).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar2 = &this->NumInfluencesPerInstance;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NumInfluencesPerInstance).ArrayMax;
  iVar5 = (param_1->NumInfluencesPerInstance).ArrayNum;
  pFVar6 = (param_1->NumInfluencesPerInstance).AllocatorInstance.Data;
  (this->NumInfluencesPerInstance).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  return this;
}

// ~FNaniteAssemblyDescription @ 14e691b50

void __thiscall
UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
          (FNaniteAssemblyDescription *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NumInfluencesPerInstance).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneInfluences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(this->PartUids).AllocatorInstance.Data,
             (this->PartUids).ArrayNum);
  pFVar1 = (this->PartUids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PartIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// IsValid @ 14e6f4f10

bool __thiscall
UE::Interchange::FNaniteAssemblyDescription::IsValid
          (FNaniteAssemblyDescription *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = (this->Transforms).ArrayNum;
  if (((iVar1 == 0) || (iVar2 = (this->PartIndices).ArrayNum, iVar2 == 0)) || (iVar1 != iVar2)) {
    if (param_1 == (FString *)0x0) {
      return false;
    }
    ::FString::PrintfImpl
              (&local_38,
               L"Transforms and part-indices arrays are either empty or different lengths (%d vs %d)"
              );
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
    if (param_1 != &local_38) {
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar4.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    if ((this->BoneInfluences).ArrayNum == 0) {
      return true;
    }
    iVar2 = (this->NumInfluencesPerInstance).ArrayNum;
    if (iVar2 == iVar1) {
      pFVar5 = (this->NumInfluencesPerInstance).AllocatorInstance.Data;
      pFVar3 = pFVar5 + (longlong)iVar2 * 4;
      pFVar6 = (FScriptContainerElement *)0x0;
      while( true ) {
        if ((this->NumInfluencesPerInstance).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar5 == pFVar3) break;
        pFVar6 = (FScriptContainerElement *)(ulonglong)(uint)((int)pFVar6 + *(int *)pFVar5);
        pFVar5 = pFVar5 + 4;
      }
      if ((int)pFVar6 == (this->BoneInfluences).ArrayNum) {
        return true;
      }
      if (param_1 == (FString *)0x0) {
        return false;
      }
      ::FString::PrintfImpl
                (&local_48,
                 L"Bone influences array length (%d) does not match influences-per-instance total (%d)"
                );
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
      if (param_1 != &local_48) {
        pFVar3 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
        (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar4.Data = (FScriptContainerElement *)0x0;
      }
    }
    else {
      if (param_1 == (FString *)0x0) {
        return false;
      }
      ::FString::PrintfImpl
                (&local_58,
                 L"Transforms and influences-per-instance arrays are different lengths (%d vs %d)");
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
      if (param_1 != &local_58) {
        pFVar3 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        (param_1->Data).ArrayNum = local_58.Data.ArrayNum;
        (param_1->Data).ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar4.Data = (FScriptContainerElement *)0x0;
      }
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return false;
}

