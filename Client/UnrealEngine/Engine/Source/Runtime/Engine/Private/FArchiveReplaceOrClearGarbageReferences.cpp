// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator<< @ 1489bbf80

FArchive * __thiscall
FArchiveReplaceOrClearGarbageReferences<UObject>::operator<<
          (FArchiveReplaceOrClearGarbageReferences<UObject> *this,UObject **param_1)

{
  UObject *local_res8;
  
  local_res8 = *param_1;
  FArchiveReplaceObjectRef<UObject>::operator<<
            ((FArchiveReplaceObjectRef<UObject> *)this,&local_res8);
  if ((local_res8 != (UObject *)0x0) && ((*(uint *)&local_res8->field_0x8 >> 0x1e & 1) != 0)) {
    *param_1 = (UObject *)0x0;
    return (FArchive *)this;
  }
  *param_1 = local_res8;
  return (FArchive *)this;
}

