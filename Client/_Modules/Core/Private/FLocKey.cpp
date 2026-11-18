// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FLocKey @ 141be4b90

FLocKey * __thiscall FLocKey::FLocKey(FLocKey *this,FString *param_1)

{
  uint uVar1;
  
  ::FString::FString(&this->Str,param_1);
  if ((this->Str).Data.ArrayNum != 0) {
    uVar1 = FCrc::StrCrc32<wchar_t>((wchar_t *)(this->Str).Data.AllocatorInstance.Data,0);
    this->Hash = uVar1;
    return this;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(L"",0);
  this->Hash = uVar1;
  return this;
}

