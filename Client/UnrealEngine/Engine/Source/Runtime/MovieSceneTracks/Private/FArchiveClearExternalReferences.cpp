// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// operator<< @ 146622a70

FArchive * __thiscall
UE::MovieSceneTracks::FArchiveClearExternalReferences::operator<<
          (FArchiveClearExternalReferences *this,UObject **param_1)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObjectBaseUtility *pUVar4;
  UObjectBaseUtility *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObjectBaseUtility *)*param_1;
  local_res10 = (UObject *)local_res8;
  FArchiveReplaceObjectRef<UObject>::operator<<
            ((FArchiveReplaceObjectRef<UObject> *)this,(UObject **)&local_res8);
  pUVar4 = local_res8;
  if ((((local_res8 != (UObjectBaseUtility *)0x0) &&
       (pUVar1 = UObjectBaseUtility::GetPackage(local_res8), pUVar4 = local_res8,
       pUVar1 != (UPackage *)0x0)) && (pUVar1 != (UPackage *)*param_1)) &&
     ((UPackage *)this->_padding_ != pUVar1)) {
    pUVar4 = (UObjectBaseUtility *)this->_padding_;
    pUVar2 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)*param_1);
    pUVar3 = UObjectBaseUtility::GetOutermostObject(pUVar4);
    pUVar4 = local_res8;
    if ((pUVar2 != pUVar3) && ((*(uint *)&(*param_1)->field_0x8 & 1) == 0)) {
      pUVar4 = (UObjectBaseUtility *)(UObject *)0x0;
    }
  }
  *param_1 = (UObject *)pUVar4;
  if ((local_res10 != (UObject *)0x0) && (pUVar4 == (UObjectBaseUtility *)0x0)) {
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
              (&this->RemovedObjects,&local_res10);
  }
  return (FArchive *)this;
}

