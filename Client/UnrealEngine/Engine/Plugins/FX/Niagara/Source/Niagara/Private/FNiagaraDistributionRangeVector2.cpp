// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149415ac0

UScriptStruct * __cdecl FNiagaraDistributionRangeVector2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2,
                         (UObject *)pUVar1,L"NiagaraDistributionRangeVector2");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector2.OuterSingleton;
}

// FNiagaraDistributionRangeVector2 @ 149426630

FNiagaraDistributionRangeVector2 * __thiscall
FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
          (FNiagaraDistributionRangeVector2 *this,TVector2<float> *param_1)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeVector2__6B_;
  (this->Min).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->Max).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined1 *)&this->_padding_ = 4;
  (this->Min).field0_0x0 = param_1->field0_0x0;
  (this->Max).field0_0x0 = param_1->field0_0x0;
  return this;
}

// FNiagaraDistributionRangeVector2 @ 1494266d0

FNiagaraDistributionRangeVector2 * __thiscall
FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
          (FNiagaraDistributionRangeVector2 *this)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeVector2__6B_;
  (this->Min).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->Max).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return this;
}

// CalculateRange @ 14943d250

FNiagaraStatelessRange<UE::Math::TVector2<float>_> * __thiscall
FNiagaraDistributionRangeVector2::CalculateRange
          (FNiagaraDistributionRangeVector2 *this,
          FNiagaraStatelessRange<UE::Math::TVector2<float>_> *__return_storage_ptr__,
          TVector2<float> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = this->_padding_;
  __return_storage_ptr__->ParameterOffset = -1;
  (__return_storage_ptr__->Min).field0_0x0 = (this->Min).field0_0x0;
  lVar2 = 0x28;
  if ((char)lVar1 != '\x03') {
    lVar2 = 0x30;
  }
  (__return_storage_ptr__->Max).field0_0x0 =
       *(TVector2<float>_u_0 *)((longlong)&this->_padding_ + lVar2);
  return __return_storage_ptr__;
}

// InitConstant @ 149451540

void __thiscall
FNiagaraDistributionRangeVector2::InitConstant
          (FNiagaraDistributionRangeVector2 *this,TVector2<float> *param_1)

{
  *(undefined1 *)&this->_padding_ = 4;
  (this->Min).field0_0x0 = param_1->field0_0x0;
  (this->Max).field0_0x0 = param_1->field0_0x0;
  return;
}

// SerializeFromMismatchedTag @ 149464c80

bool __thiscall
FNiagaraDistributionRangeVector2::SerializeFromMismatchedTag
          (FNiagaraDistributionRangeVector2 *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  FArchive *pFVar1;
  int *piVar2;
  uint *puVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  FPropertyTypeName local_res10;
  uint uStackX_14;
  uint local_res20 [2];
  FNiagaraDistributionBase local_48;
  TVector2<float>_u_0 local_20;
  TVector2<float>_u_0 local_18;
  
  local_res10.Index = (param_1->TypeName).Index;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  local_res20[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res20[0];
  bVar5 = UE::FPropertyTypeName::IsStruct(&local_res10,FVar4);
  if (bVar5) {
    pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
    piVar2 = (int *)**(undefined8 **)&pFVar1->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar1->field_0x8)[1] < piVar2 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)&local_res10);
      }
    }
    else {
      local_res10.Index = *piVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar3 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&uStackX_14,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&uStackX_14);
      }
    }
    else {
      uStackX_14 = *puVar3;
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
    local_48.Mode = NonUniformConstant;
    local_48._padding_ = (longlong)&___7FNiagaraDistributionRangeVector2__6B_;
    local_20._s_0.Y = (float)uStackX_14;
    local_20._s_0.X = (float)local_res10.Index;
    local_18 = local_20;
    FNiagaraDistributionBase::operator=((FNiagaraDistributionBase *)this,&local_48);
    (this->Min).field0_0x0 = local_20;
    (this->Max).field0_0x0 = local_18;
    FInstancedStruct::Reset(&local_48.ParameterExpression);
    return true;
  }
  return false;
}

