// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// IsA @ 1420ff3a0

bool __thiscall FObjectPtr::IsA(FObjectPtr *this,UClass *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((((this->field0_0x0).Handle != (UObject *)0x0) &&
      (lVar2 = *(longlong *)&((this->field0_0x0).Handle)->field_0x10, lVar2 != 0)) &&
     (param_1 != (UClass *)0x0)) {
    iVar1 = (int)param_1->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &param_1->_padding_)) {
      return true;
    }
  }
  return false;
}

// GetPathName @ 14213df70

FString * __thiscall FObjectPtr::GetPathName(FObjectPtr *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = (this->field0_0x0).Handle == (UObject *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"None");
  }
  else {
    pFVar1 = UE::CoreUObject::Private::GetPathName
                       (&local_18,(this->field0_0x0).Handle,(UObject *)0x0);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator= @ 1421b70b0

FObjectPtr * __thiscall FObjectPtr::operator=(FObjectPtr *this,FObjectPtr *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).Handle != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((param_1->field0_0x0).Handle);
  }
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

