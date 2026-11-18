// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// IsValid @ 14e6f4ea0

bool __thiscall
UInterchangeSkeletalMeshFactory::FImportAssetObjectData::IsValid(FImportAssetObjectData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LodDatas).ArrayNum;
  if (0 < iVar1) {
    pFVar2 = (this->LodDatas).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
    while( true ) {
      if ((this->LodDatas).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UInterchangeSkeletalMeshFactory::FImportAssetObjectLODData_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) {
        return true;
      }
      if (*(int *)pFVar2 == -1) break;
      pFVar2 = pFVar2 + 0x40;
    }
  }
  return false;
}

