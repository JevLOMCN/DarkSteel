// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// operator<< @ 14158cc50

FArchive * __thiscall FMemoryArchive::operator<<(FMemoryArchive *this,UObject **param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryArchive.h"
                     ,0x38,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchive *)(*pcVar1)();
    return pFVar3;
  }
  return (FArchive *)this;
}

// operator<< @ 14158cc90

FArchive * __thiscall FMemoryArchive::operator<<(FMemoryArchive *this,FName *param_1)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FString local_18;
  
  if ((this->_padding_ & 1) == 0) {
    ::FName::ToString(param_1,&local_18);
    ::operator<<((FArchive *)this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::operator<<((FArchive *)this,&local_18);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
    *param_1 = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return (FArchive *)this;
    }
  }
  return (FArchive *)this;
}

// GetArchiveName @ 1415c4f40

FString * __thiscall
FMemoryArchive::GetArchiveName(FMemoryArchive *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xf,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xf,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Memcpy
            ((__return_storage_ptr__->Data).AllocatorInstance.Data,L"FMemoryArchive",0x1e);
  return __return_storage_ptr__;
}

// Seek @ 1415f0e20

void __thiscall FMemoryArchive::Seek(FMemoryArchive *this,long64 param_1)

{
  this->Offset = param_1;
  return;
}

// Tell @ 1415f7f50

long64 __thiscall FMemoryArchive::Tell(FMemoryArchive *this)

{
  return this->Offset;
}

