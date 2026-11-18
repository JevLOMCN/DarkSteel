// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 1

// operator<FName,FAttributesSetEntry>_TTuple<FName,FAttributesSetEntry> @ 143637e10

TTuple<FName,FAttributesSetEntry> * __thiscall
TPairInitializer<FName_const_&,FAttributesSetEntry_const_&>::
operator<FName,FAttributesSetEntry>_TTuple<FName,FAttributesSetEntry>
          (TPairInitializer<FName_const_&,FAttributesSetEntry_const_&> *this,
          TTuple<FName,FAttributesSetEntry> *__return_storage_ptr__)

{
  FAttributesSetEntry *pFVar1;
  FMeshAttributeArraySetBase *pFVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined8 local_res10;
  
  pFVar1 = this->Value;
  uVar3 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  pFVar2 = (pFVar1->Ptr).Ptr;
  if (pFVar2 == (FMeshAttributeArraySetBase *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    local_res10 = 0;
    local_res8 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 8))(pFVar2,&local_res8);
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = *puVar4;
    *puVar4 = 0;
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return __return_storage_ptr__;
}

