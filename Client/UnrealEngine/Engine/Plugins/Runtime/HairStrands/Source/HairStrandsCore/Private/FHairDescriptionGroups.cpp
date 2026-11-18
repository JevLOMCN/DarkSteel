// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// IsValid @ 14dfd0720

bool __thiscall FHairDescriptionGroups::IsValid(FHairDescriptionGroups *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HairGroups).ArrayNum;
  pFVar2 = (this->HairGroups).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x318;
  while( true ) {
    if ((this->HairGroups).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairDescriptionGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 0x10) == 0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x318;
  }
  return 0 < (this->HairGroups).ArrayNum;
}

