// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ContainsOffset @ 141ee3fc0

bool __thiscall FArchiveDiffMap::ContainsOffset(FArchiveDiffMap *this,long64 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&this->field_0x8;
  plVar2 = *(longlong **)this;
  plVar3 = plVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&this->field_0x8 != iVar1) {
      `TCheckedPointerIterator<FArchiveDiffInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar2 == plVar3) break;
    if ((*plVar2 <= param_1) && (param_1 < *plVar2 + plVar2[1])) {
      return true;
    }
    plVar2 = plVar2 + 2;
  }
  return false;
}

