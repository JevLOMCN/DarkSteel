// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FNameAsStringProxyArchive @ 141988090

void __thiscall
FNameAsStringProxyArchive::~FNameAsStringProxyArchive(FNameAsStringProxyArchive *this)

{
  *(undefined ***)this = &___7FNameAsStringProxyArchive__6B_;
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  return;
}

// operator<< @ 141988810

FArchive * __thiscall
FNameAsStringProxyArchive::operator<<(FNameAsStringProxyArchive *this,FName *param_1)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FString local_18;
  
  if ((this->field_0x28 & 1) == 0) {
    ::FName::ToString(param_1,&local_18);
    ::operator<<(*(FArchive **)&this->field_0x90,&local_18);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::operator<<(*(FArchive **)&this->field_0x90,&local_18);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
    *param_1 = *pFVar1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

