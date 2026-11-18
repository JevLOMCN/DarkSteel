// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// operator<< @ 141f69e60

FArchive * __thiscall
UE::StructUtils::FArchiveCityHash64::operator<<(FArchiveCityHash64 *this,UObject **param_1)

{
  ulong64 uVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  uVar1 = this->Hash;
  if ((UObjectBaseUtility *)*param_1 == (UObjectBaseUtility *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*param_1,&local_18,(UObject *)0x0);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  uVar1 = CityHash64WithSeed((char *)FVar2.Data,local_18.Data.ArrayMax * 2,uVar1);
  this->Hash = uVar1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 141f69ef0

FArchive * __thiscall
UE::StructUtils::FArchiveCityHash64::operator<<(FArchiveCityHash64 *this,FName *param_1)

{
  FString *pFVar1;
  ulong64 uVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  uVar2 = this->Hash;
  pFVar1 = ::FName::ToString(param_1,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  uVar2 = CityHash64WithSeed((char *)pwVar3,(pFVar1->Data).ArrayMax * 2,uVar2);
  this->Hash = uVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// GetArchiveName @ 141f808d0

FString * __thiscall
UE::StructUtils::FArchiveCityHash64::GetArchiveName
          (FArchiveCityHash64 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveCityHash64");
  return __return_storage_ptr__;
}

// Serialize @ 141f9ad70

void __thiscall
UE::StructUtils::FArchiveCityHash64::Serialize
          (FArchiveCityHash64 *this,void *param_1,long64 param_2)

{
  ulong64 uVar1;
  uint uVar2;
  
  for (; 0 < param_2; param_2 = param_2 - (int)uVar2) {
    uVar2 = 0x7fffffff;
    if ((ulonglong)param_2 < 0x7fffffff) {
      uVar2 = (uint)param_2;
    }
    uVar1 = CityHash64WithSeed(param_1,uVar2,this->Hash);
    this->Hash = uVar1;
    param_1 = (void *)((longlong)param_1 + (longlong)(int)uVar2);
  }
  return;
}

