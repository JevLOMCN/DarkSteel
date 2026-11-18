// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// operator=<FString_&,wchar_t> @ 144594280

FString * __thiscall FString::operator=<FString_&,wchar_t>(FString *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  AssignRange(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar2);
  return this;
}

