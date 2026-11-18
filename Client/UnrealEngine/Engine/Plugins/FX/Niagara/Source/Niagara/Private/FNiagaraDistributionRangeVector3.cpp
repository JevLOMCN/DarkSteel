// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149415cd0

UScriptStruct * __cdecl FNiagaraDistributionRangeVector3::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector3.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector3.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3,
                         (UObject *)pUVar1,L"NiagaraDistributionRangeVector3");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector3.OuterSingleton;
}

// FNiagaraDistributionRangeVector3 @ 149426750

FNiagaraDistributionRangeVector3 * __thiscall
FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
          (FNiagaraDistributionRangeVector3 *this,TVector<float> *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar2;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeVector3__6B_;
  *(undefined8 *)&(this->Min).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Min).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Max).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Max).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 4;
  *(undefined8 *)&(this->Min).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Min).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->Max).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Max).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return this;
}

// FNiagaraDistributionRangeVector3 @ 149426810

FNiagaraDistributionRangeVector3 * __thiscall
FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
          (FNiagaraDistributionRangeVector3 *this)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar2;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeVector3__6B_;
  *(undefined8 *)&(this->Min).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Min).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Max).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Max).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// CalculateRange @ 14943d290

FNiagaraStatelessRange<UE::Math::TVector<float>_> * __thiscall
FNiagaraDistributionRangeVector3::CalculateRange
          (FNiagaraDistributionRangeVector3 *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *__return_storage_ptr__,
          TVector<float> *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  __return_storage_ptr__->ParameterOffset = -1;
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = *(undefined8 *)&(this->Min).field0_0x0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (this->Min).field0_0x0._s_0.Z;
  if ((char)lVar1 == '\x03') {
    *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 =
         *(undefined8 *)&(this->Min).field0_0x0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (this->Min).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = *(undefined8 *)&(this->Max).field0_0x0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (this->Max).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// InitConstant @ 149451560

void __thiscall
FNiagaraDistributionRangeVector3::InitConstant
          (FNiagaraDistributionRangeVector3 *this,TVector<float> *param_1)

{
  *(undefined1 *)&this->_padding_ = 4;
  *(undefined8 *)&(this->Min).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Min).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->Max).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Max).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SerializeFromMismatchedTag @ 149464e10

bool __thiscall
FNiagaraDistributionRangeVector3::SerializeFromMismatchedTag
          (FNiagaraDistributionRangeVector3 *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  FArchive *pFVar1;
  uint *puVar2;
  float *pfVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  FPropertyTypeName local_res10 [2];
  uint local_res20 [2];
  uint local_58;
  uint uStack_54;
  float local_50 [2];
  FNiagaraDistributionBase local_48;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  local_res20[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res20[0];
  bVar5 = UE::FPropertyTypeName::IsStruct(local_res10,FVar4);
  if (bVar5) {
    pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_58,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&local_58);
      }
    }
    else {
      local_58 = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&uStack_54,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&uStack_54);
      }
    }
    else {
      uStack_54 = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
    pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
    if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_50,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)local_50);
      }
    }
    else {
      local_50[0] = *pfVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    local_48.AddressMode = '\0';
    local_48.InterpolationMode = '\0';
    local_48._padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
    local_48.Mode = UniformConstant;
    local_48.LookupValueMode = '\0';
    local_48.ParameterBinding.Name.ComparisonIndex.Value = 0;
    local_48.ParameterBinding.Name.Number = 0;
    local_48.ParameterBinding.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_48.ParameterBinding.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    FInstancedStruct::FInstancedStruct(&local_48.ParameterExpression);
    local_20 = CONCAT44(uStack_54,local_58);
    local_48._padding_ = (longlong)&___7FNiagaraDistributionRangeVector3__6B_;
    local_18 = local_50[0];
    local_c = local_50[0];
    local_48.Mode = NonUniformConstant;
    local_14 = local_20;
    FNiagaraDistributionBase::operator=((FNiagaraDistributionBase *)this,&local_48);
    *(undefined8 *)&(this->Min).field0_0x0 = local_20;
    (this->Min).field0_0x0._s_0.Z = local_18;
    *(undefined8 *)&(this->Max).field0_0x0 = local_14;
    (this->Max).field0_0x0._s_0.Z = local_c;
    FInstancedStruct::Reset(&local_48.ParameterExpression);
    return true;
  }
  return false;
}

