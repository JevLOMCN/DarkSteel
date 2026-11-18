// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// operator<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> @ 1471ba130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> * __thiscall
TKeyInitializer<FMassEntityHandle_const_&>::
operator<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>
          (TKeyInitializer<FMassEntityHandle_const_&> *this,
          TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>
          *__return_storage_ptr__)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28 [4];
  
  local_28[2] = __security_cookie.value ^ (ulonglong)auStack_58;
  puVar4 = local_28 + 2;
  lVar3 = 2;
  iVar2 = this->Key->SerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = this->Key->Index;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  do {
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  return __return_storage_ptr__;
}

