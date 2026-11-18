// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 142525240

UScriptStruct * __cdecl FSlateSound::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlateSound.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSlateSound.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlateSound,(UObject *)pUVar1,L"SlateSound");
  }
  return Z_Registration_Info_UScriptStruct_FSlateSound.OuterSingleton;
}

// FSlateSound @ 1425460e0

FSlateSound * __thiscall FSlateSound::FSlateSound(FSlateSound *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (param_1->ResourceObject).field0_0x0.DebugPtr;
  (this->ResourceObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->LegacyResourceName_DEPRECATED = param_1->LegacyResourceName_DEPRECATED;
  (this->LegacyResourceObject_DEPRECATED).WeakPtr =
       (param_1->LegacyResourceObject_DEPRECATED).WeakPtr;
  return this;
}

// FSlateSound @ 142546130

FSlateSound * __thiscall FSlateSound::FSlateSound(FSlateSound *this)

{
  (this->ResourceObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->LegacyResourceName_DEPRECATED).ComparisonIndex = 0;
  (this->LegacyResourceName_DEPRECATED).Number = 0;
  (this->LegacyResourceObject_DEPRECATED).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// operator= @ 14254e020

FSlateSound * __thiscall FSlateSound::operator=(FSlateSound *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ResourceObject).field0_0x0 = (param_1->ResourceObject).field0_0x0;
  this->LegacyResourceName_DEPRECATED = param_1->LegacyResourceName_DEPRECATED;
  (this->LegacyResourceObject_DEPRECATED).WeakPtr =
       (param_1->LegacyResourceObject_DEPRECATED).WeakPtr;
  return this;
}

// FromName_DEPRECATED @ 14257e3c0

FSlateSound * __cdecl
FSlateSound::FromName_DEPRECATED(FSlateSound *__return_storage_ptr__,FName *param_1)

{
  (__return_storage_ptr__->ResourceObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->LegacyResourceName_DEPRECATED).ComparisonIndex = 0;
  (__return_storage_ptr__->LegacyResourceName_DEPRECATED).Number = 0;
  (__return_storage_ptr__->LegacyResourceObject_DEPRECATED).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->LegacyResourceName_DEPRECATED = *param_1;
  return __return_storage_ptr__;
}

// GetResourceObject @ 142582fb0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall FSlateSound::GetResourceObject(FSlateSound *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FString *pFVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *local_res8;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  FString local_28;
  
  if (this->LegacyResourceName_DEPRECATED == (FName)0x0) {
    return (this->ResourceObject).field0_0x0.DebugPtr;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->LegacyResourceObject_DEPRECATED).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    return pUVar3;
  }
  bVar1 = IsInGameThread();
  if (!bVar1) {
    if ((byte)LogSlate._0_1_ < 3) {
      return (UObject *)0x0;
    }
    ::FName::ToString(&this->LegacyResourceName_DEPRECATED,(FString *)&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (local_48.DataPtr == (wchar_t *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free(local_48.DataPtr);
    return (UObject *)0x0;
  }
  pFVar4 = ::FName::ToString(&this->LegacyResourceName_DEPRECATED,&local_38);
  local_58.Size = 0;
  if ((pFVar4->Data).ArrayNum == 0) {
    local_58.DataPtr = L"";
LAB_142583092:
    sVar5 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar5;
  }
  else {
    local_58.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_142583092;
  }
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  local_48.DataPtr = local_58.DataPtr;
  local_48.Size = local_58.Size;
  local_48._12_4_ = local_58._12_4_;
  pUVar3 = StaticFindObject(pUVar6,(UObject *)0x0,&local_48,None);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((this->ResourceObject).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_14258316e;
  local_58.Size = 0;
  local_58._12_4_ = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  pFVar4 = ::FName::ToString(&this->LegacyResourceName_DEPRECATED,&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    local_48.DataPtr = L"";
LAB_14258310d:
    sVar5 = wcslen(local_48.DataPtr);
    iVar2 = (int)sVar5;
  }
  else {
    local_48.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    iVar2 = 0;
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14258310d;
  }
  local_48.Size = iVar2;
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  pUVar3 = StaticLoadObject(pUVar6,(UObject *)0x0,&local_48,&local_58,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14258316e:
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=
            (&(this->LegacyResourceObject_DEPRECATED).WeakPtr,(FObjectPtr)&local_res8);
  return pUVar3;
}

// SerializeFromMismatchedTag @ 14258ffb0

bool __thiscall
FSlateSound::SerializeFromMismatchedTag
          (FSlateSound *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  FName local_res10;
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res10);
    (this->ResourceObject).field0_0x0.DebugPtr = (UObject *)0x0;
    this->LegacyResourceName_DEPRECATED = local_res10;
    (this->LegacyResourceObject_DEPRECATED).WeakPtr = (FWeakObjectPtr)0x0;
    return true;
  }
  return false;
}

// StripLegacyData_DEPRECATED @ 1425a8e00

void __thiscall FSlateSound::StripLegacyData_DEPRECATED(FSlateSound *this)

{
  (this->LegacyResourceName_DEPRECATED).ComparisonIndex = 0;
  (this->LegacyResourceName_DEPRECATED).Number = 0;
  (this->LegacyResourceObject_DEPRECATED).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

