// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 149415e20

UScriptStruct * __cdecl FNiagaraDistributionRangeRotator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeRotator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeRotator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeRotator,
                         (UObject *)pUVar1,L"NiagaraDistributionRangeRotator");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeRotator.OuterSingleton;
}

// FNiagaraDistributionRangeRotator @ 149426570

FNiagaraDistributionRangeRotator * __thiscall
FNiagaraDistributionRangeRotator::FNiagaraDistributionRangeRotator
          (FNiagaraDistributionRangeRotator *this)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar3;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeRotator__6B_;
  fVar2 = UE::Math::TRotator<float>::ZeroRotator.Yaw;
  (this->Min).Pitch = UE::Math::TRotator<float>::ZeroRotator.Pitch;
  (this->Min).Yaw = fVar2;
  (this->Min).Roll = UE::Math::TRotator<float>::ZeroRotator.Roll;
  fVar2 = UE::Math::TRotator<float>::ZeroRotator.Yaw;
  (this->Max).Pitch = UE::Math::TRotator<float>::ZeroRotator.Pitch;
  (this->Max).Yaw = fVar2;
  (this->Max).Roll = UE::Math::TRotator<float>::ZeroRotator.Roll;
  *(undefined1 *)&this->_padding_ = 4;
  fVar2 = UE::Math::TRotator<float>::ZeroRotator.Yaw;
  (this->Min).Pitch = UE::Math::TRotator<float>::ZeroRotator.Pitch;
  (this->Min).Yaw = fVar2;
  (this->Min).Roll = UE::Math::TRotator<float>::ZeroRotator.Roll;
  fVar2 = UE::Math::TRotator<float>::ZeroRotator.Yaw;
  (this->Max).Pitch = UE::Math::TRotator<float>::ZeroRotator.Pitch;
  (this->Max).Yaw = fVar2;
  (this->Max).Roll = UE::Math::TRotator<float>::ZeroRotator.Roll;
  return this;
}

// CalculateRange @ 14943d200

FNiagaraStatelessRange<UE::Math::TRotator<float>_> * __thiscall
FNiagaraDistributionRangeRotator::CalculateRange
          (FNiagaraDistributionRangeRotator *this,
          FNiagaraStatelessRange<UE::Math::TRotator<float>_> *__return_storage_ptr__,
          TRotator<float> *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = this->_padding_;
  __return_storage_ptr__->ParameterOffset = -1;
  fVar2 = (this->Min).Yaw;
  (__return_storage_ptr__->Min).Pitch = (this->Min).Pitch;
  (__return_storage_ptr__->Min).Yaw = fVar2;
  (__return_storage_ptr__->Min).Roll = (this->Min).Roll;
  if ((char)lVar1 == '\x03') {
    fVar2 = (this->Min).Yaw;
    (__return_storage_ptr__->Max).Pitch = (this->Min).Pitch;
    (__return_storage_ptr__->Max).Yaw = fVar2;
    (__return_storage_ptr__->Max).Roll = (this->Min).Roll;
    return __return_storage_ptr__;
  }
  fVar2 = (this->Max).Yaw;
  (__return_storage_ptr__->Max).Pitch = (this->Max).Pitch;
  (__return_storage_ptr__->Max).Yaw = fVar2;
  (__return_storage_ptr__->Max).Roll = (this->Max).Roll;
  return __return_storage_ptr__;
}

// InitConstant @ 149451510

void __thiscall
FNiagaraDistributionRangeRotator::InitConstant
          (FNiagaraDistributionRangeRotator *this,TRotator<float> *param_1)

{
  float fVar1;
  
  *(undefined1 *)&this->_padding_ = 4;
  fVar1 = param_1->Yaw;
  (this->Min).Pitch = param_1->Pitch;
  (this->Min).Yaw = fVar1;
  (this->Min).Roll = param_1->Roll;
  fVar1 = param_1->Yaw;
  (this->Max).Pitch = param_1->Pitch;
  (this->Max).Yaw = fVar1;
  (this->Max).Roll = param_1->Roll;
  return;
}

// SerializeFromMismatchedTag @ 149464a90

bool __thiscall
FNiagaraDistributionRangeRotator::SerializeFromMismatchedTag
          (FNiagaraDistributionRangeRotator *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  uint *puVar1;
  float *pfVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  FArchive *this_00;
  FSlotBase local_res10 [2];
  uint local_res20 [2];
  uint local_68;
  uint uStack_64;
  float local_60 [2];
  FNiagaraDistributionBase local_58;
  undefined8 local_30;
  float local_28;
  undefined8 local_24;
  float local_1c;
  
  local_res10[0].StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  local_res20[1] = 0;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = local_res20[0];
  bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)local_res10,FVar3);
  if (bVar4) {
    local_res10[0].StructuredArchive = (FStructuredArchive *)param_2;
    this_00 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
    puVar1 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar1 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_68,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,&local_68);
      }
    }
    else {
      local_68 = *puVar1;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    puVar1 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar1 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&uStack_64,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,&uStack_64);
      }
    }
    else {
      uStack_64 = *puVar1;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    pfVar2 = (float *)**(undefined8 **)&this_00->field_0x8;
    if ((float *)(*(undefined8 **)&this_00->field_0x8)[1] < pfVar2 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_60,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(uint *)local_60);
      }
    }
    else {
      local_60[0] = *pfVar2;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    local_58.AddressMode = '\0';
    local_58.InterpolationMode = '\0';
    local_58._padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
    local_58.Mode = UniformConstant;
    local_58.LookupValueMode = '\0';
    local_58.ParameterBinding.Name.ComparisonIndex.Value = 0;
    local_58.ParameterBinding.Name.Number = 0;
    local_58.ParameterBinding.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_58.ParameterBinding.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    FInstancedStruct::FInstancedStruct(&local_58.ParameterExpression);
    local_30 = CONCAT44(uStack_64,local_68);
    local_58._padding_ = (longlong)&___7FNiagaraDistributionRangeRotator__6B_;
    local_28 = local_60[0];
    local_1c = local_60[0];
    local_58.Mode = NonUniformConstant;
    local_24 = local_30;
    FNiagaraDistributionBase::operator=((FNiagaraDistributionBase *)this,&local_58);
    (this->Min).Pitch = (float)(undefined4)local_30;
    (this->Min).Yaw = (float)local_30._4_4_;
    (this->Min).Roll = local_28;
    (this->Max).Pitch = (float)(undefined4)local_24;
    (this->Max).Yaw = (float)local_24._4_4_;
    (this->Max).Roll = local_1c;
    FInstancedStruct::Reset(&local_58.ParameterExpression);
    return true;
  }
  return false;
}

