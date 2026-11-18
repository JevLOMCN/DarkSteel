// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FOptimusCDIPinDefinition @ 14e150390

FOptimusCDIPinDefinition * __thiscall
FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
          (FOptimusCDIPinDefinition *this,FName param_1,FString *param_2,FName param_3,
          FString *param_4,bool param_5,FName param_6)

{
  TArray<FOptimusCDIPinDefinition::FDimensionInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FDimensionInfo local_38;
  
  this->PinName = param_1;
  ::FString::FString(&this->DataFunctionName,param_2);
  pTVar1 = &this->DataDimensions;
  local_38.CountFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.CountFunctionName.Data.ArrayNum = (param_4->Data).ArrayNum;
  lVar3 = (longlong)local_38.CountFunctionName.Data.ArrayNum;
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  local_38.ContextName = param_3;
  if (local_38.CountFunctionName.Data.ArrayNum == 0) {
    local_38.CountFunctionName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.CountFunctionName.Data.ArrayNum,0,
               (ForAnyElementType *)&local_38.CountFunctionName,
               local_38.CountFunctionName.Data.ArrayNum,&local_38.CountFunctionName.Data.ArrayMax);
    memcpy(local_38.CountFunctionName.Data.AllocatorInstance.Data,pFVar2,lVar3 * 2);
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DataDimensions).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,0,&pTVar1->AllocatorInstance,1,&(this->DataDimensions).ArrayMax);
  ConstructItems<FOptimusCDIPinDefinition::FDimensionInfo,FOptimusCDIPinDefinition::FDimensionInfo,int>
            ((pTVar1->AllocatorInstance).Data,&local_38,1);
  if (local_38.CountFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CountFunctionName.Data.AllocatorInstance.Data);
  }
  this->bMutable = param_5;
  this->DisplayName = param_6;
  this->DomainMultiplier = 1;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// FOptimusCDIPinDefinition @ 14e1504f0

FOptimusCDIPinDefinition * __thiscall
FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
          (FOptimusCDIPinDefinition *this,FName param_1,FString *param_2,FName param_3,int param_4,
          FString *param_5,bool param_6,FName param_7)

{
  TArray<FOptimusCDIPinDefinition::FDimensionInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FDimensionInfo local_38;
  
  this->PinName = param_1;
  ::FString::FString(&this->DataFunctionName,param_2);
  pTVar1 = &this->DataDimensions;
  local_38.CountFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.CountFunctionName.Data.ArrayNum = (param_5->Data).ArrayNum;
  lVar3 = (longlong)local_38.CountFunctionName.Data.ArrayNum;
  pFVar2 = (param_5->Data).AllocatorInstance.Data;
  local_38.ContextName = param_3;
  if (local_38.CountFunctionName.Data.ArrayNum == 0) {
    local_38.CountFunctionName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.CountFunctionName.Data.ArrayNum,0,
               (ForAnyElementType *)&local_38.CountFunctionName,
               local_38.CountFunctionName.Data.ArrayNum,&local_38.CountFunctionName.Data.ArrayMax);
    memcpy(local_38.CountFunctionName.Data.AllocatorInstance.Data,pFVar2,lVar3 * 2);
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DataDimensions).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,0,&pTVar1->AllocatorInstance,1,&(this->DataDimensions).ArrayMax);
  ConstructItems<FOptimusCDIPinDefinition::FDimensionInfo,FOptimusCDIPinDefinition::FDimensionInfo,int>
            ((pTVar1->AllocatorInstance).Data,&local_38,1);
  if (local_38.CountFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CountFunctionName.Data.AllocatorInstance.Data);
  }
  if (param_4 < 1) {
    param_4 = 1;
  }
  this->DomainMultiplier = param_4;
  this->bMutable = param_6;
  this->DisplayName = param_7;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_5->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// FOptimusCDIPinDefinition @ 14e150650

FOptimusCDIPinDefinition * __thiscall
FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
          (FOptimusCDIPinDefinition *this,FName param_1,FString *param_2,
          initializer_list<FOptimusCDIPinDefinition::FDimensionInfo> *param_3,bool param_4,
          FName param_5)

{
  FDimensionInfo *pFVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FOptimusCDIPinDefinition *pFVar7;
  FDimensionInfo *pFVar8;
  FName local_38;
  FString local_30;
  
  this->PinName = param_1;
  ::FString::FString(&this->DataFunctionName,param_2);
  pFVar1 = param_3->_Last;
  pFVar8 = param_3->_First;
  (this->DataDimensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataDimensions).ArrayNum = 0;
  (this->DataDimensions).ArrayMax = 0;
  this->bMutable = param_4;
  this->DisplayName = param_5;
  this->DomainMultiplier = 1;
  while( true ) {
    if (pFVar8 == pFVar1) {
      pFVar3 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return this;
    }
    local_38 = pFVar8->ContextName;
    ::FString::FString(&local_30,&pFVar8->CountFunctionName);
    pFVar2 = (FName *)(this->DataDimensions).AllocatorInstance.Data;
    if (((pFVar2 <= &local_38) &&
        (&local_38 < pFVar2 + (longlong)(this->DataDimensions).ArrayMax * 3)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = (this->DataDimensions).ArrayNum;
    if (iVar6 == (this->DataDimensions).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->DataDimensions).AllocatorInstance,
                         &(this->DataDimensions).ArrayMax);
    }
    (this->DataDimensions).ArrayNum = iVar6 + 1;
    pFVar2 = (FName *)((this->DataDimensions).AllocatorInstance.Data + (longlong)iVar6 * 0x18);
    *pFVar2 = local_38;
    ::FString::FString((FString *)(pFVar2 + 1),&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 1;
  }
  pcVar4 = (code *)swi(3);
  pFVar7 = (FOptimusCDIPinDefinition *)(*pcVar4)();
  return pFVar7;
}

