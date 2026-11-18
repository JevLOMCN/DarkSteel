// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DefaultValueChanged @ 147f73a70

void __thiscall
FVectorMaterialInput::DefaultValueChanged(FVectorMaterialInput *this,FString *param_1)

{
  return;
}

// GetDefaultValue @ 147f79790

FString * __thiscall
FVectorMaterialInput::GetDefaultValue(FVectorMaterialInput *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Serialize @ 147f86d30

bool __thiscall FVectorMaterialInput::Serialize(FVectorMaterialInput *this,FArchive *param_1)

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
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f86dc7;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  bVar4 = uVar2 != 0;
LAB_147f86dc7:
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 & 0xfffffffe;
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 | (uint)bVar4;
  UE::Math::operator<<(param_1,(TVector<float> *)&this->field_0x2c);
  return true;
}

