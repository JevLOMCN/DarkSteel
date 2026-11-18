// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// FNiagaraDistributionRangeFloat @ 1493cc050

FNiagaraDistributionRangeFloat * __thiscall
FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
          (FNiagaraDistributionRangeFloat *this,float param_1)

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
  this->Min = 0.0;
  this->Max = 0.0;
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeFloat__6B_;
  InitConstant(this,param_1);
  return this;
}

// operator= @ 1493d2280

FNiagaraDistributionRangeFloat * __thiscall
FNiagaraDistributionRangeFloat::operator=
          (FNiagaraDistributionRangeFloat *this,FNiagaraDistributionRangeFloat *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  bVar1 = (bVar1 ^ *(byte *)((longlong)&param_1->_padding_ + 1)) & 1 ^
          *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1;
  *(byte *)((longlong)&this->_padding_ + 1) =
       (bVar1 ^ *(byte *)((longlong)&param_1->_padding_ + 1)) & 2 ^ bVar1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  if (&this->_padding_ != &param_1->_padding_) {
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)&this->_padding_,(UScriptStruct *)param_1->_padding_,
               (uchar *)param_1->_padding_);
  }
  this->Min = param_1->Min;
  this->Max = param_1->Max;
  return this;
}

// StaticStruct @ 149415990

UScriptStruct * __cdecl FNiagaraDistributionRangeFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat,(UObject *)pUVar1,
                         L"NiagaraDistributionRangeFloat");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeFloat.OuterSingleton;
}

// FNiagaraDistributionRangeFloat @ 149426450

FNiagaraDistributionRangeFloat * __thiscall
FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
          (FNiagaraDistributionRangeFloat *this,FNiagaraDistributionRangeFloat *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  bVar1 = (bVar1 ^ *(byte *)((longlong)&param_1->_padding_ + 1)) & 1 ^
          *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1;
  *(byte *)((longlong)&this->_padding_ + 1) =
       (bVar1 ^ *(byte *)((longlong)&param_1->_padding_ + 1)) & 2 ^ bVar1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this->_padding_ = 0;
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&this->_padding_,(UScriptStruct *)param_1->_padding_,
             (uchar *)param_1->_padding_);
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeFloat__6B_;
  this->Min = param_1->Min;
  this->Max = param_1->Max;
  return this;
}

// FNiagaraDistributionRangeFloat @ 1494264f0

FNiagaraDistributionRangeFloat * __thiscall
FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(FNiagaraDistributionRangeFloat *this)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeFloat__6B_;
  this->Min = 0.0;
  this->Max = 0.0;
  return this;
}

// CalculateRange @ 14943d180

FNiagaraStatelessRange<float> * __thiscall
FNiagaraDistributionRangeFloat::CalculateRange
          (FNiagaraDistributionRangeFloat *this,
          FNiagaraStatelessRange<float> *__return_storage_ptr__,float param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = this->_padding_;
  __return_storage_ptr__->ParameterOffset = -1;
  __return_storage_ptr__->Min = this->Min;
  lVar2 = 0x28;
  if ((char)lVar1 != '\x03') {
    lVar2 = 0x2c;
  }
  __return_storage_ptr__->Max = *(float *)((longlong)&this->_padding_ + lVar2);
  return __return_storage_ptr__;
}

// InitConstant @ 1494514e0

void __thiscall
FNiagaraDistributionRangeFloat::InitConstant(FNiagaraDistributionRangeFloat *this,float param_1)

{
  this->Min = param_1;
  this->Max = param_1;
  *(undefined1 *)&this->_padding_ = 3;
  return;
}

// InitRange @ 1494520a0

void __thiscall
FNiagaraDistributionRangeFloat::InitRange
          (FNiagaraDistributionRangeFloat *this,float param_1,float param_2)

{
  this->Min = param_1;
  this->Max = param_2;
  *(undefined1 *)&this->_padding_ = 5;
  return;
}

// SerializeFromMismatchedTag @ 149464940

bool __thiscall
FNiagaraDistributionRangeFloat::SerializeFromMismatchedTag
          (FNiagaraDistributionRangeFloat *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2
          )

{
  FName FVar1;
  FArchive *this_00;
  float *pfVar2;
  float fVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  float local_res10 [2];
  FNiagaraDistributionBase local_48;
  float local_20;
  float local_1c;
  
  FVar1 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar1 == FVar5) {
    this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
    pfVar2 = (float *)**(undefined8 **)&this_00->field_0x8;
    if ((float *)(*(undefined8 **)&this_00->field_0x8)[1] < pfVar2 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *pfVar2;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    fVar3 = local_res10[0];
    local_48.AddressMode = '\0';
    local_48.InterpolationMode = '\0';
    local_48._padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
    local_48.Mode = UniformConstant;
    local_48.ParameterBinding.Name.ComparisonIndex.Value = 0;
    local_48.ParameterBinding.Name.Number = 0;
    local_48.LookupValueMode = '\0';
    local_48.ParameterBinding.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_48.ParameterBinding.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
    FInstancedStruct::FInstancedStruct(&local_48.ParameterExpression);
    local_20 = fVar3;
    local_48._padding_ = (longlong)&___7FNiagaraDistributionRangeFloat__6B_;
    local_1c = fVar3;
    local_48.Mode = UniformConstant;
    FNiagaraDistributionBase::operator=((FNiagaraDistributionBase *)this,&local_48);
    this->Min = local_20;
    this->Max = local_1c;
    FInstancedStruct::Reset(&local_48.ParameterExpression);
    return true;
  }
  return false;
}

