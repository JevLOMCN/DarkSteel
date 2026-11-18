// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// FPathFollowingResult @ 146f930d0

FPathFollowingResult * __thiscall
FPathFollowingResult::FPathFollowingResult(FPathFollowingResult *this,ushort param_1)

{
  uchar uVar1;
  
  this->Flags = param_1;
  if (((param_1 & 1) != 0) && ((param_1 & 0xe) == 0)) {
    (this->Code).Value = '\0';
    return this;
  }
  if (((param_1 & 2) != 0) && ((param_1 & 0xd) == 0)) {
    (this->Code).Value = '\x01';
    return this;
  }
  if (((param_1 & 4) != 0) && ((param_1 & 0xb) == 0)) {
    (this->Code).Value = '\x02';
    return this;
  }
  if (((param_1 & 8) == 0) || (uVar1 = '\x03', (param_1 & 7) != 0)) {
    uVar1 = '\x05';
  }
  (this->Code).Value = uVar1;
  return this;
}

// FPathFollowingResult @ 146f93130

FPathFollowingResult * __thiscall
FPathFollowingResult::FPathFollowingResult(FPathFollowingResult *this,Type param_1,ushort param_2)

{
  (this->Code).Value = (uchar)param_1;
  this->Flags = param_2 | CodeLookup[(int)param_1];
  return this;
}

// ToString @ 146fd9630

FString * __thiscall
FPathFollowingResult::ToString(FPathFollowingResult *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  bool bVar2;
  FString local_38;
  FString local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton == (UEnum *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_AIModule();
      Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult,(UObject *)pUVar1,
                         L"EPathFollowingResult");
    }
    ResultEnum = Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton;
    _Init_thread_footer(&::_TSS0);
  }
  FPathFollowingResultFlags::ToString(&local_28,this->Flags);
  bVar2 = ResultEnum != (UEnum *)0x0;
  if (bVar2) {
    UEnum::GetNameStringByValue(ResultEnum,&local_38,(ulonglong)(this->Code).Value);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s[%s]");
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

