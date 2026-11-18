// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DefaultValueChanged @ 147f73a50

void __thiscall
FScalarMaterialInput::DefaultValueChanged(FScalarMaterialInput *this,FString *param_1)

{
  return;
}

// GetDefaultValue @ 147f79750

FString * __thiscall
FScalarMaterialInput::GetDefaultValue(FScalarMaterialInput *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Serialize @ 147f86af0

bool __thiscall FScalarMaterialInput::Serialize(FScalarMaterialInput *this,FArchive *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint local_res18 [4];
  
  bVar6 = SerializeExpressionInput(param_1,(FExpressionInput *)this);
  if (!bVar6) {
    return false;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar6 = (bool)(this->field_0x28 & 1);
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] = (uint)bVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_res18[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f86b87;
  }
  else {
    uVar3 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar6 = uVar3 != 0;
LAB_147f86b87:
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 & 0xfffffffe;
  puVar2 = &this->field_0x2c;
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 | (uint)bVar6;
  puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar5 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) != 0) {
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar2);
    return true;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
  return true;
}

