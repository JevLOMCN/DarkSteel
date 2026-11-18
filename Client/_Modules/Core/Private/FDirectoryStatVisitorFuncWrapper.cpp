// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Visit @ 1416692b0

bool __thiscall
FDirectoryStatVisitorFuncWrapper::Visit
          (FDirectoryStatVisitorFuncWrapper *this,wchar_t *param_1,FFileStatData *param_2)

{
  undefined1 uVar1;
  wchar_t *local_res8 [4];
  
  local_res8[0] = param_1;
  uVar1 = (**(code **)&this->VisitorFunc)(*(undefined8 *)&(this->VisitorFunc).field_0x8,local_res8);
  return (bool)uVar1;
}

