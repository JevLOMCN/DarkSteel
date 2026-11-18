// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// LeftChopInline @ 142c07470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::LeftChopInline(FString *this,int param_1,EAllowShrinking param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 - param_1 < iVar2) {
    iVar2 = iVar2 - param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  RemoveAt(this,iVar1,param_1,param_2);
  return;
}

