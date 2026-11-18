// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// operator< @ 14d42d4c0

bool __thiscall
TraceServices::FThreadProvider::FThreadInfoInternal::operator<
          (FThreadInfoInternal *this,FThreadInfoInternal *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = this->PrioritySortOrder;
  if ((-1 < iVar1) && (iVar2 = param_1->PrioritySortOrder, -1 < iVar2)) {
    bVar3 = this->GroupSortOrder < param_1->GroupSortOrder;
    if (this->GroupSortOrder == param_1->GroupSortOrder) {
      if (iVar1 != iVar2) goto LAB_14d42d4ed;
      bVar3 = this->FallbackSortOrder < param_1->FallbackSortOrder;
    }
    return bVar3;
  }
  iVar2 = param_1->PrioritySortOrder;
LAB_14d42d4ed:
  return iVar1 < iVar2;
}

