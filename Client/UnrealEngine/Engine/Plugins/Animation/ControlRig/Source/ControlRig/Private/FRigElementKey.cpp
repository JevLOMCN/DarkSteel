// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// ToString @ 14a29c3c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall FRigElementKey::ToString(FRigElementKey *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  switch(this->Type) {
  case Bone:
    pFVar1 = ::FName::ToString(&this->Name,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"Bone(%s)";
    }
    else {
      pwVar2 = L"Bone(%s)";
    }
    break;
  case Null:
    pFVar1 = ::FName::ToString(&this->Name,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"Null(%s)";
    }
    else {
      pwVar2 = L"Null(%s)";
    }
    break;
  default:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  case Control:
    pFVar1 = ::FName::ToString(&this->Name,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"Control(%s)";
    }
    else {
      pwVar2 = L"Control(%s)";
    }
    break;
  case Curve:
    pFVar1 = ::FName::ToString(&this->Name,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"Curve(%s)";
    }
    else {
      pwVar2 = L"Curve(%s)";
    }
    break;
  case Reference:
    pFVar1 = ::FName::ToString(&this->Name,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"Reference(%s)";
    }
    else {
      pwVar2 = L"Reference(%s)";
    }
    break;
  case Connector:
    pFVar1 = ::FName::ToString(&this->Name,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"Connector(%s)";
    }
    else {
      pwVar2 = L"Connector(%s)";
    }
    break;
  case Last:
    ::FName::ToString(&this->Name,&local_18);
    pwVar2 = L"Socket(%s)";
  }
  ::FString::PrintfImpl(__return_storage_ptr__,pwVar2);
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// StaticStruct @ 14a2c9780

UScriptStruct * __cdecl FRigElementKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigElementKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigElementKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKey,(UObject *)pUVar1,L"RigElementKey"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FRigElementKey.OuterSingleton;
}

// ConvertToModuleNameFormat @ 14a2f7630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigElementKey::ConvertToModuleNameFormat
          (FRigElementKey *this,FRigElementKey *__return_storage_ptr__,
          TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
          *param_1)

{
  undefined3 uVar1;
  FNameEntryId FVar2;
  
  uVar1 = *(undefined3 *)&this->field_0x1;
  FVar2.Value = (this->Name).ComparisonIndex.Value;
  __return_storage_ptr__->Type = this->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar1;
  (__return_storage_ptr__->Name).ComparisonIndex = (FNameEntryId)FVar2.Value;
  (__return_storage_ptr__->Name).Number = (this->Name).Number;
  ConvertToModuleNameFormatInline(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConvertToModuleNameFormatInline @ 14a2f76c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigElementKey::ConvertToModuleNameFormatInline
          (FRigElementKey *this,
          TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
          *param_1)

{
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_58;
  FRigHierarchyModulePath local_48;
  
  pFVar2 = ::FName::ToString(&this->Name,&local_58);
  ::FString::FString(&local_48.ModulePath,pFVar2);
  local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
  local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_48._44_8_ = 0xffffffffffffffff;
  local_48.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
  local_48.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value = (FNameEntryId)0xffffffff
  ;
  local_48.CachedElementFName.field0_0x0.TypedValue.Number = 0;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar1 = FRigHierarchyModulePath::ConvertToModuleNameFormatInline(&local_48,param_1);
  if (bVar1) {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_48.ModulePath.Data.ArrayNum != 0) {
      FVar3.Data = local_48.ModulePath.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    this->Name = local_res8;
  }
  if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ModulePath.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsValid @ 14a328ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigElementKey::IsValid(FRigElementKey *this)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->Name).ComparisonIndex.Value);
  if (((bVar1) && (this->Name != (FName)0x0)) && (this->Type != None)) {
    return true;
  }
  return false;
}

// Load @ 14a32c010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigElementKey::Load(FRigElementKey *this,FArchive *param_1)

{
  long64 lVar1;
  UPackage *pUVar2;
  FName local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar2,
                           L"ERigElementType");
      }
      ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
  lVar1 = UEnum::GetValueByName(ElementTypeEnum,local_res8,None);
  this->Type = (ERigElementType)lVar1;
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  return;
}

// Save @ 14a345410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigElementKey::Save(FRigElementKey *this,FArchive *param_1)

{
  UPackage *pUVar1;
  undefined1 local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar1,
                           L"ERigElementType");
      }
      ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
  }
  UEnum::GetNameByValue(ElementTypeEnum,(long64)local_res8);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res8);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  return;
}

// Serialize @ 14a349280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigElementKey::Serialize(FRigElementKey *this,FArchive *param_1)

{
  long64 lVar1;
  UPackage *pUVar2;
  FName local_res10 [3];
  
  if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar2,
                           L"ERigElementType");
      }
      ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res10);
    lVar1 = UEnum::GetValueByName(ElementTypeEnum,local_res10[0],None);
    this->Type = (ERigElementType)lVar1;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar2,
                           L"ERigElementType");
      }
      ElementTypeEnum = Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
    UEnum::GetNameByValue(ElementTypeEnum,(long64)local_res10);
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res10);
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  return;
}

// ToPythonString @ 14a359b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigElementKey::ToPythonString(FRigElementKey *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

