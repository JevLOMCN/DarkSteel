// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 147672860

UScriptStruct * __cdecl FBPVariableDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBPVariableDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBPVariableDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBPVariableDescription,(UObject *)pUVar1,
                         L"BPVariableDescription");
  }
  return Z_Registration_Info_UScriptStruct_FBPVariableDescription.OuterSingleton;
}

// FBPVariableDescription @ 147686c60

FBPVariableDescription * __thiscall
FBPVariableDescription::FBPVariableDescription(FBPVariableDescription *this)

{
  undefined1 *puVar1;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar2;
  undefined8 local_res8;
  
  (this->VarName).ComparisonIndex = 0;
  (this->VarName).Number = 0;
  (this->VarGuid).A = 0;
  (this->VarGuid).B = 0;
  (this->VarGuid).C = 0;
  (this->VarGuid).D = 0;
  (this->VarType).PinCategory.ComparisonIndex = 0;
  (this->VarType).PinCategory.Number = 0;
  (this->VarType).PinSubCategory.ComparisonIndex = 0;
  (this->VarType).PinSubCategory.Number = 0;
  pTVar2 = &(this->VarType).PinSubCategoryObject;
  local_res8 = 0;
  pTVar2->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&pTVar2->WeakPtr,(FObjectPtr)&local_res8);
  pTVar2 = &(this->VarType).PinValueType.TerminalSubCategoryObject;
  (this->VarType).PinSubCategoryMemberReference.MemberParent.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->VarType).PinSubCategoryMemberReference.MemberName.ComparisonIndex = 0;
  (this->VarType).PinSubCategoryMemberReference.MemberName.Number = 0;
  (this->VarType).PinSubCategoryMemberReference.MemberGuid.A = 0;
  (this->VarType).PinSubCategoryMemberReference.MemberGuid.B = 0;
  (this->VarType).PinSubCategoryMemberReference.MemberGuid.C = 0;
  (this->VarType).PinSubCategoryMemberReference.MemberGuid.D = 0;
  (this->VarType).PinValueType.TerminalCategory.ComparisonIndex = 0;
  (this->VarType).PinValueType.TerminalCategory.Number = 0;
  (this->VarType).PinValueType.TerminalSubCategory.ComparisonIndex = 0;
  (this->VarType).PinValueType.TerminalSubCategory.Number = 0;
  pTVar2->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar2->WeakPtr,(FObjectPtr)&local_res8);
  (this->VarType).PinValueType.bTerminalIsConst = false;
  (this->VarType).PinValueType.bTerminalIsWeakPointer = false;
  (this->VarType).PinValueType.bTerminalIsUObjectWrapper = false;
  (this->VarType).bIsArray_DEPRECATED = '\0';
  (this->VarType).bSerializeAsSinglePrecisionFloat = '\0';
  (this->VarType).bIsUObjectWrapper = '\0';
  (this->VarType).bIsWeakPointer = '\0';
  (this->VarType).bIsConst = '\0';
  (this->VarType).bIsReference = '\0';
  (this->VarType).ContainerType = None;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  FText::FText(&this->Category);
  this->PropertyFlags = 1;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  (this->ReplicationCondition).Value = '\0';
  (this->MetaDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaDataArray).ArrayNum = 0;
  (this->MetaDataArray).ArrayMax = 0;
  (this->DefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).Data.ArrayNum = 0;
  (this->DefaultValue).Data.ArrayMax = 0;
  return this;
}

// ~FBPVariableDescription @ 14768a140

void __thiscall FBPVariableDescription::~FBPVariableDescription(FBPVariableDescription *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = (this->DefaultValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBPVariableMetaDataEntry,int>
            ((FBPVariableMetaDataEntry *)(this->MetaDataArray).AllocatorInstance.Data,
             (this->MetaDataArray).ArrayNum);
  pFVar1 = (this->MetaDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Category).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FindMetaDataEntryIndexForKey @ 1476a8fd0

int __thiscall
FBPVariableDescription::FindMetaDataEntryIndexForKey(FBPVariableDescription *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->MetaDataArray).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->MetaDataArray).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->MetaDataArray).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((int)uVar6 < (this->MetaDataArray).ArrayNum);
  }
  return -1;
}

// GetMetaData @ 1476b2460

FString * __thiscall FBPVariableDescription::GetMetaData(FBPVariableDescription *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  
  uVar3 = FindMetaDataEntryIndexForKey(this,param_1);
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntryIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Blueprint.cpp"
                       ,0xa3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->MetaDataArray).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FString *)((this->MetaDataArray).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8)
  ;
}

// HasMetaData @ 1476b7350

bool __thiscall FBPVariableDescription::HasMetaData(FBPVariableDescription *this,FName param_1)

{
  int iVar1;
  
  iVar1 = FindMetaDataEntryIndexForKey(this,param_1);
  return iVar1 != -1;
}

// RemoveMetaData @ 1476c2ea0

void __thiscall FBPVariableDescription::RemoveMetaData(FBPVariableDescription *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FindMetaDataEntryIndexForKey(this,param_1);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->MetaDataArray).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<FBPVariableMetaDataEntry,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this->MetaDataArray,uVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->MetaDataArray).AllocatorInstance,(this->MetaDataArray).ArrayNum,
               &(this->MetaDataArray).ArrayMax);
  }
  return;
}

// SetMetaData @ 1476c8760

void __thiscall
FBPVariableDescription::SetMetaData(FBPVariableDescription *this,FName param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TArray<FBPVariableMetaDataEntry,TSizedDefaultAllocator<32>_> *pTVar12;
  
  uVar8 = FindMetaDataEntryIndexForKey(this,param_1);
  pTVar12 = &this->MetaDataArray;
  if (uVar8 == 0xffffffff) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    piVar1 = &(this->MetaDataArray).ArrayMax;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (param_2->Data).ArrayMax;
    iVar4 = (param_2->Data).ArrayNum;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    iVar10 = (this->MetaDataArray).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar12->AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar10;
    (this->MetaDataArray).ArrayNum = iVar10 + 1;
    pFVar5 = (pTVar12->AllocatorInstance).Data;
    *(FName *)(pFVar5 + lVar11 * 0x18) = param_1;
    *(FScriptContainerElement **)(pFVar5 + lVar11 * 0x18 + 8) = pFVar2;
    *(int *)(pFVar5 + lVar11 * 0x18 + 0x10) = iVar4;
    *(int *)(pFVar5 + lVar11 * 0x18 + 0x14) = iVar3;
  }
  else {
    uVar9 = 0;
    if ((int)uVar8 < (this->MetaDataArray).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (pTVar12->AllocatorInstance).Data + ((longlong)(int)uVar8 * 3 + 1) * 8;
    if (pFVar2 != (FScriptContainerElement *)param_2) {
      if (*(void **)&pFVar2->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar2->field_0x0);
      }
      *(FScriptContainerElement **)&pFVar2->field_0x0 = (param_2->Data).AllocatorInstance.Data;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + 8) = (param_2->Data).ArrayNum;
      *(int *)(pFVar2 + 0xc) = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
    }
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

