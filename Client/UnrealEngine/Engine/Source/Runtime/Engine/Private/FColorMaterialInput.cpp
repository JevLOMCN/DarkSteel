// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DefaultValueChanged @ 147f73a40

void __thiscall FColorMaterialInput::DefaultValueChanged(FColorMaterialInput *this,FString *param_1)

{
  return;
}

// GetDefaultValue @ 147f79730

FString * __thiscall
FColorMaterialInput::GetDefaultValue(FColorMaterialInput *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Serialize @ 147f85e70

bool __thiscall FColorMaterialInput::Serialize(FColorMaterialInput *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  uint local_res10 [2];
  FExpressionInput local_58;
  uint local_30;
  uint local_2c;
  
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar7 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     0xaa < iVar7)) {
    bVar6 = SerializeExpressionInput(param_1,(FExpressionInput *)this);
    if (!bVar6) {
      return false;
    }
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    bVar6 = (bool)(this->field_0x28 & 1);
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res10[0] = (uint)bVar6;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) == 0) goto LAB_147f860e4;
    }
    else {
      uVar2 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    bVar6 = uVar2 != 0;
LAB_147f860e4:
    puVar8 = &this->field_0x28;
    *(uint *)puVar8 = *(uint *)puVar8 & 0xfffffffe;
    *(uint *)puVar8 = *(uint *)puVar8 | (uint)bVar6;
    ::operator<<(param_1,(FLinearColor *)&this->field_0x2c);
    return true;
  }
  local_30 = local_30 & 0xfffffffe;
  local_58.OutputIndex = 0;
  local_58.InputName.ComparisonIndex.Value = 0;
  local_58.InputName.Number = 0;
  local_58.Mask = 0;
  local_58.MaskR = 0;
  local_58.MaskG = 0;
  local_58.MaskB = 0;
  local_58.MaskA = 0;
  local_58.Expression = (UMaterialExpression *)0x0;
  local_2c = 0;
  bVar6 = SerializeExpressionInput(param_1,&local_58);
  if (!bVar6) {
    return false;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  bVar6 = (bool)((byte)local_30 & 1);
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = (uint)bVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f85f4f;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  bVar6 = uVar2 != 0;
LAB_147f85f4f:
  local_30 = local_30 & 0xfffffffe | (uint)bVar6;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  fVar5 = __real_3b808081;
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 & 0xfffffffe;
  *(UMaterialExpression **)this = local_58.Expression;
  *(int *)&this->field_0x8 = local_58.OutputIndex;
  *(ulonglong *)&this->field_0xc =
       CONCAT44(local_58.InputName.Number,local_58.InputName.ComparisonIndex.Value);
  *(int *)&this->field_0x14 = local_58.Mask;
  *(int *)&this->field_0x18 = local_58.MaskR;
  *(int *)&this->field_0x1c = local_58.MaskG;
  *(int *)&this->field_0x20 = local_58.MaskB;
  *(int *)&this->field_0x24 = local_58.MaskA;
  *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 | local_30 & 1;
  *(float *)&this->field_0x2c = (float)(local_2c >> 0x10 & 0xff) * fVar5;
  *(float *)&this->field_0x30 = (float)(local_2c >> 8 & 0xff) * fVar5;
  *(float *)&this->field_0x34 = (float)(local_2c & 0xff) * fVar5;
  *(float *)&this->field_0x38 = (float)(local_2c >> 0x18) * fVar5;
  return true;
}

