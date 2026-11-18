// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ReferenceEquals @ 141f41f80

bool __thiscall UE::FDerivedData::ReferenceEquals(FDerivedData *this,FDerivedData *param_1)

{
  if (((((this->CookedData).ChunkOffset == (param_1->CookedData).ChunkOffset) &&
       ((this->CookedData).ChunkSize == (param_1->CookedData).ChunkSize)) &&
      (*(longlong *)(this->CookedData).ChunkId == *(longlong *)(param_1->CookedData).ChunkId)) &&
     (*(int *)((this->CookedData).ChunkId + 8) == *(int *)((param_1->CookedData).ChunkId + 8))) {
    return true;
  }
  return false;
}

// ReferenceHash @ 141f42060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall UE::FDerivedData::ReferenceHash(FDerivedData *this)

{
  FXxHash64 FVar1;
  undefined1 auStack_2f8 [56];
  TMemoryView<void_const_> local_2c0 [4];
  FXxHash64Builder local_280;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FXxHash64Builder::Reset(&local_280);
  FXxHash64Builder::Update(&local_280,this,8);
  FXxHash64Builder::Update(&local_280,&(this->CookedData).ChunkSize,8);
  local_2c0[0].Data = (this->CookedData).ChunkId;
  local_2c0[0].Size = 0xc;
  FXxHash64Builder::Update(&local_280,local_2c0);
  FVar1 = FXxHash64Builder::Finalize(&local_280);
  return *(uint *)FVar1.Hash;
}

// Serialize @ 141f445f0

void __thiscall UE::FDerivedData::Serialize(FDerivedData *this,FArchive *param_1,UObject *param_2)

{
  EDerivedDataFlags *pEVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  EDerivedDataFlags *pEVar4;
  
  if (((param_1->field_0x29 & 1) != 0) && ((param_1->field_0x2b & 9) == 0)) {
    puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
    if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
      }
    }
    else {
      (this->CookedData).ChunkOffset = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    puVar2 = &(this->CookedData).ChunkSize;
    puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
    if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(this->CookedData).ChunkId,0xc);
    pEVar1 = &(this->CookedData).Flags;
    pEVar4 = (EDerivedDataFlags *)**(undefined8 **)&param_1->field_0x8;
    if (pEVar4 + 1 <= (EDerivedDataFlags *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *pEVar1 = *pEVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141f44716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
  }
  return;
}

