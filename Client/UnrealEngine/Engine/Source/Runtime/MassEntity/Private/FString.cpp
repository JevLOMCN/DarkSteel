// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// Append<FString_const_&,wchar_t> @ 1471bee10

FString * __thiscall FString::Append<FString_const_&,wchar_t>(FString *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  AppendChars(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar2);
  return this;
}

