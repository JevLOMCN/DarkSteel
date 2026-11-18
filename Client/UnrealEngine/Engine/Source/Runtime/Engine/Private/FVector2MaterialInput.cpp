// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FVector2MaterialInput @ 147ef0430

FVector2MaterialInput * __thiscall
FVector2MaterialInput::FVector2MaterialInput(FVector2MaterialInput *this)

{
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 & 0xfffffffe;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)this = 0;
  return this;
}

// DefaultValueChanged @ 147f73a60

void __thiscall
FVector2MaterialInput::DefaultValueChanged(FVector2MaterialInput *this,FString *param_1)

{
  return;
}

// GetDefaultValue @ 147f79770

FString * __thiscall
FVector2MaterialInput::GetDefaultValue(FVector2MaterialInput *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Serialize @ 147f86c50

bool __thiscall FVector2MaterialInput::Serialize(FVector2MaterialInput *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  bool bVar4;
  uint local_res18 [4];
  
  bVar4 = SerializeExpressionInput(param_1,(FExpressionInput *)this);
  if (!bVar4) {
    return false;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  bVar4 = (bool)(this->field_0x28 & 1);
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] = (uint)bVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res18[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f86ce7;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  bVar4 = uVar2 != 0;
LAB_147f86ce7:
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 & 0xfffffffe;
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 | (uint)bVar4;
  UE::Math::operator<<(param_1,(TVector2<float> *)&this->field_0x2c);
  return true;
}

