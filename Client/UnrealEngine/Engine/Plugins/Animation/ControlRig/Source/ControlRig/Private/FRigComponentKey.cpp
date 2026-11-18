// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a2b8c60

UScriptStruct * __cdecl FRigComponentKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigComponentKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigComponentKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigComponentKey,(UObject *)pUVar1,
                         L"RigComponentKey");
  }
  return Z_Registration_Info_UScriptStruct_FRigComponentKey.OuterSingleton;
}

// ConvertToModuleNameFormat @ 14a2f7600

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigComponentKey * __thiscall
FRigComponentKey::ConvertToModuleNameFormat
          (FRigComponentKey *this,FRigComponentKey *__return_storage_ptr__,
          TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
          *param_1)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  
  uVar2 = *(undefined3 *)&(this->ElementKey).field_0x1;
  FVar3.Value = (this->ElementKey).Name.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(this->ElementKey).Name.Number;
  (__return_storage_ptr__->ElementKey).Type = (this->ElementKey).Type;
  *(undefined3 *)&(__return_storage_ptr__->ElementKey).field_0x1 = uVar2;
  (__return_storage_ptr__->ElementKey).Name.ComparisonIndex = (FNameEntryId)FVar3.Value;
  *(undefined8 *)&(__return_storage_ptr__->ElementKey).Name.Number = uVar1;
  (__return_storage_ptr__->Name).Number = (this->Name).Number;
  FRigElementKey::ConvertToModuleNameFormatInline(&__return_storage_ptr__->ElementKey,param_1);
  return __return_storage_ptr__;
}

// ConvertToModuleNameFormatInline @ 14a2f76b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigComponentKey::ConvertToModuleNameFormatInline
          (FRigComponentKey *this,
          TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
          *param_1)

{
  FName *this_00;
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  FName FStackX_8;
  FString FStack_58;
  FRigHierarchyModulePath FStack_48;
  
  this_00 = &(this->ElementKey).Name;
  pFVar2 = ::FName::ToString(this_00,&FStack_58);
  ::FString::FString(&FStack_48.ModulePath,pFVar2);
  FStack_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  FStack_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  FStack_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
  FStack_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  FStack_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  FStack_48._44_8_ = 0xffffffffffffffff;
  FStack_48.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
  FStack_48.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
       (FNameEntryId)0xffffffff;
  FStack_48.CachedElementFName.field0_0x0.TypedValue.Number = 0;
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  bVar1 = FRigHierarchyModulePath::ConvertToModuleNameFormatInline(&FStack_48,param_1);
  if (bVar1) {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (FStack_48.ModulePath.Data.ArrayNum != 0) {
      FVar3.Data = FStack_48.ModulePath.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&FStackX_8,(wchar_t *)FVar3.Data);
    *this_00 = FStackX_8;
  }
  if ((FStack_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (FStack_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)FStack_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((FStack_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (FStack_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)FStack_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (FStack_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.ModulePath.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsValid @ 14a328e40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigComponentKey::IsValid(FRigComponentKey *this)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->Name).ComparisonIndex.Value);
  if ((bVar1) && (this->Name != (FName)0x0)) {
    bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->ElementKey).Name.ComparisonIndex.Value);
    if ((bVar1) && (((this->ElementKey).Name != (FName)0x0 && ((this->ElementKey).Type != None)))) {
      return true;
    }
  }
  return false;
}

// Load @ 14a32aaa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigComponentKey::Load(FRigComponentKey *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  ::operator<<(param_1,&this->ElementKey);
  return;
}

// Save @ 14a3448e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigComponentKey::Save(FRigComponentKey *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  ::operator<<(param_1,&this->ElementKey);
  return;
}

// Serialize @ 14a3491f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigComponentKey::Serialize(FRigComponentKey *this,FArchive *param_1)

{
  if ((((param_1->field_0x28 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) ||
     ((param_1->field_0x28 & 1) != 0)) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
    ::operator<<(param_1,&this->ElementKey);
  }
  return;
}

// ToPythonString @ 14a359b00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigComponentKey::ToPythonString(FRigComponentKey *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ToString @ 14a359b70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigComponentKey::ToString(FRigComponentKey *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  FRigElementKey::ToString(&this->ElementKey,&local_18);
  ::FName::ToString(&this->Name,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Component(%s,%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

