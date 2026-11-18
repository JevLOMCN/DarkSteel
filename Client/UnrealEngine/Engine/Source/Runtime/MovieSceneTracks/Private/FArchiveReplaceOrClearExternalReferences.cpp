// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// operator<< @ 1466229b0

FArchive * __thiscall
FArchiveReplaceOrClearExternalReferences<UObject>::operator<<
          (FArchiveReplaceOrClearExternalReferences<UObject> *this,UObject **param_1)

{
  UObjectBaseUtility *this_00;
  UPackage *pUVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObjectBaseUtility *local_res8;
  
  local_res8 = (UObjectBaseUtility *)*param_1;
  FArchiveReplaceObjectRef<UObject>::operator<<
            ((FArchiveReplaceObjectRef<UObject> *)this,(UObject **)&local_res8);
  if ((((local_res8 != (UObjectBaseUtility *)0x0) &&
       (pUVar1 = UObjectBaseUtility::GetPackage(local_res8), pUVar1 != (UPackage *)0x0)) &&
      (pUVar1 != (UPackage *)*param_1)) && (this->DestPackage != pUVar1)) {
    this_00 = (UObjectBaseUtility *)this->_padding_;
    pUVar2 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)*param_1);
    pUVar3 = UObjectBaseUtility::GetOutermostObject(this_00);
    if ((pUVar2 != pUVar3) && ((*(uint *)&(*param_1)->field_0x8 & 1) == 0)) {
      *param_1 = (UObject *)0x0;
      return (FArchive *)this;
    }
  }
  *param_1 = (UObject *)local_res8;
  return (FArchive *)this;
}

