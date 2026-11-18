// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// GetData<FTestTypedElementData> @ 142c8e6a0

/* WARNING: Enum "Type": Some values do not have unique names */

FTestTypedElementData * __thiscall
FTypedElementHandle::GetData<FTestTypedElementData>(FTypedElementHandle *this,bool param_1)

{
  FTestTypedElementData *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)this->DataPtr;
  if (local_res8 == (FName)0x0) {
    if (!param_1) {
      FFrame::KismetExecutionMessage(L"Element handle data is null!",Error,(FName)0x0);
      return (FTestTypedElementData *)0x0;
    }
  }
  else {
    if (*(uchar *)((longlong)local_res8 + 0xb) == FTestTypedElementData::Private_RegisteredTypeId) {
                    /* WARNING: Could not recover jumptable at 0x000142c8e7ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar1 = (FTestTypedElementData *)(**(code **)(*(longlong *)local_res8 + 0x10))();
      return pFVar1;
    }
    if (!param_1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'
                        ::__l2::TypeName,"FTestTypedElementData");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_res8 = `public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'
                   ::__l2::TypeName;
      ::FName::ToString(&local_res8,&local_18);
      ::FString::PrintfImpl
                (&local_28,L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar2.Data = local_28.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Error,(FName)0x0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return (FTestTypedElementData *)0x0;
}

