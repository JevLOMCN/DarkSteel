// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetFilename @ 14846c360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FStreamableTextureScopedDebugInfo::GetFilename
          (FStreamableTextureScopedDebugInfo *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StreamableTextureResource.cpp"
             ,0x66,Yes);
  FWindowsPlatformProcess::BaseDir();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s../../Development/Src/Engine/%s");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetFunctionName @ 14846c530

FString * __thiscall
FStreamableTextureScopedDebugInfo::GetFunctionName
          (FStreamableTextureScopedDebugInfo *this,FString *__return_storage_ptr__)

{
  FString local_28;
  
  ::FName::ToString(&this->Resource->TextureName,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%ux%ux%u %s, %u mips, LODGroup=%u)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLineNumber @ 14846ca90

int __thiscall
FStreamableTextureScopedDebugInfo::GetLineNumber(FStreamableTextureScopedDebugInfo *this)

{
  return 0x73;
}

