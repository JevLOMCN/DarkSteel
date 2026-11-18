// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149415d60

UScriptStruct * __cdecl FNiagaraDistributionRangeColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor,(UObject *)pUVar1,
                         L"NiagaraDistributionRangeColor");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeColor.OuterSingleton;
}

// FNiagaraDistributionRangeColor @ 1494263d0

FNiagaraDistributionRangeColor * __thiscall
FNiagaraDistributionRangeColor::FNiagaraDistributionRangeColor(FNiagaraDistributionRangeColor *this)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionRangeColor__6B_;
  (this->Min).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->Max).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

// CalculateRange @ 14943d140

FNiagaraStatelessRange<FLinearColor> * __thiscall
FNiagaraDistributionRangeColor::CalculateRange
          (FNiagaraDistributionRangeColor *this,
          FNiagaraStatelessRange<FLinearColor> *__return_storage_ptr__,FLinearColor *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  __return_storage_ptr__->ParameterOffset = -1;
  uVar1 = *(undefined8 *)((longlong)&(this->Min).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = *(undefined8 *)&(this->Min).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar1;
  if ((char)lVar2 == '\x03') {
    uVar1 = *(undefined8 *)((longlong)&(this->Min).field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 =
         *(undefined8 *)&(this->Min).field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  uVar1 = *(undefined8 *)((longlong)&(this->Max).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = *(undefined8 *)&(this->Max).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// InitConstant @ 1494514c0

void __thiscall
FNiagaraDistributionRangeColor::InitConstant
          (FNiagaraDistributionRangeColor *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)&this->_padding_ = 4;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Min).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Min).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Max).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Max).field0_0x0 + 8) = uVar1;
  return;
}

