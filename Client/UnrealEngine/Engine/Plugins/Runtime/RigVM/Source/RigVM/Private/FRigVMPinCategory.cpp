// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 4

// StaticStruct @ 14a0acc00

UScriptStruct * __cdecl FRigVMPinCategory::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMPinCategory.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMPinCategory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMPinCategory,(UObject *)pUVar1,
                         L"RigVMPinCategory");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMPinCategory.OuterSingleton;
}

// GetDefaultCategoryName @ 14a0e3750

FString * __cdecl FRigVMPinCategory::GetDefaultCategoryName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&DefaultCategoryName,L"Default");
      atexit(`FRigVMPinCategory::GetDefaultCategoryName'::__l2::
             _dynamic_atexit_destructor_for__DefaultCategoryName__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultCategoryName;
    }
  }
  return &DefaultCategoryName;
}

// GetName @ 14a0e8290

FString * __thiscall
FRigVMPinCategory::GetName(FRigVMPinCategory *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = RigVMStringUtils::SplitNodePathAtEnd(&this->Path,&local_18,__return_storage_ptr__);
  if (!bVar1) {
    ::FString::operator=(__return_storage_ptr__,&this->Path);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsDefaultCategory @ 14a0f8fd0

bool __thiscall FRigVMPinCategory::IsDefaultCategory(FRigVMPinCategory *this)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&DefaultCategoryName,L"Default");
      atexit(`FRigVMPinCategory::GetDefaultCategoryName'::__l2::
             _dynamic_atexit_destructor_for__DefaultCategoryName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = (this->Path).Data.ArrayNum;
  if (iVar1 != DefaultCategoryName.Data.ArrayNum) {
    return iVar1 + DefaultCategoryName.Data.ArrayNum == 1;
  }
  if (1 < iVar1) {
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Path).Data.AllocatorInstance.Data,
                       (wchar_t *)DefaultCategoryName.Data.AllocatorInstance.Data);
    return iVar1 == 0;
  }
  return true;
}

