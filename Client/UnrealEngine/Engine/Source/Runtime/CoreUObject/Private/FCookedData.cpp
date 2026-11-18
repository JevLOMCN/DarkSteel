// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ReferenceEquals @ 141f41f50

bool __thiscall
UE::DerivedData::Private::FCookedData::ReferenceEquals(FCookedData *this,FCookedData *param_1)

{
  if ((((this->ChunkOffset == param_1->ChunkOffset) && (this->ChunkSize == param_1->ChunkSize)) &&
      (*(longlong *)this->ChunkId == *(longlong *)param_1->ChunkId)) &&
     (*(int *)(this->ChunkId + 8) == *(int *)(param_1->ChunkId + 8))) {
    return true;
  }
  return false;
}

// ReferenceHash @ 141f41fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall UE::DerivedData::Private::FCookedData::ReferenceHash(FCookedData *this)

{
  FXxHash64 FVar1;
  undefined1 auStack_2f8 [56];
  TMemoryView<void_const_> local_2c0 [4];
  FXxHash64Builder local_280;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FXxHash64Builder::Reset(&local_280);
  FXxHash64Builder::Update(&local_280,this,8);
  FXxHash64Builder::Update(&local_280,&this->ChunkSize,8);
  local_2c0[0].Data = this->ChunkId;
  local_2c0[0].Size = 0xc;
  FXxHash64Builder::Update(&local_280,local_2c0);
  FVar1 = FXxHash64Builder::Finalize(&local_280);
  return *(uint *)FVar1.Hash;
}

// Serialize @ 141f444b0

void __thiscall
UE::DerivedData::Private::FCookedData::Serialize(FCookedData *this,FArchive *param_1)

{
  EDerivedDataFlags *pEVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  EDerivedDataFlags *pEVar4;
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->ChunkOffset);
    }
  }
  else {
    this->ChunkOffset = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &this->ChunkSize;
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
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this->ChunkId,0xc);
  pEVar1 = &this->Flags;
  pEVar4 = (EDerivedDataFlags *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar4 + 1 <= (EDerivedDataFlags *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pEVar1 = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141f445c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
  return;
}

