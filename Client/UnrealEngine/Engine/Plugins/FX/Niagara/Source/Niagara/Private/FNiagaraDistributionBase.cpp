// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FNiagaraDistributionBase @ 1493d0e60

void __thiscall FNiagaraDistributionBase::~FNiagaraDistributionBase(FNiagaraDistributionBase *this)

{
  FInstancedStruct::Reset(&this->ParameterExpression);
  return;
}

// StaticStruct @ 1494156a0

UScriptStruct * __cdecl FNiagaraDistributionBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionBase,(UObject *)pUVar1,
                         L"NiagaraDistributionBase");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionBase.OuterSingleton;
}

// operator= @ 14942d060

FNiagaraDistributionBase * __thiscall
FNiagaraDistributionBase::operator=
          (FNiagaraDistributionBase *this,FNiagaraDistributionBase *param_1)

{
  byte bVar1;
  
  this->Mode = param_1->Mode;
  bVar1 = (this->InterpolationMode ^ param_1->InterpolationMode) & 1 ^ this->field_0x9;
  this->field_0x9 = bVar1;
  this->field_0x9 = (bVar1 ^ param_1->field_0x9) & 2 ^ bVar1;
  this->LookupValueMode = param_1->LookupValueMode;
  (this->ParameterBinding).Name = (param_1->ParameterBinding).Name;
  (this->ParameterBinding).TypeDefHandle.RegisteredTypeIndex =
       (param_1->ParameterBinding).TypeDefHandle.RegisteredTypeIndex;
  if (&this->ParameterExpression != &param_1->ParameterExpression) {
    FInstancedStruct::InitializeAs
              (&this->ParameterExpression,
               (param_1->ParameterExpression).ScriptStruct.field0_0x0.DebugPtr,
               (param_1->ParameterExpression).StructMemory);
  }
  return this;
}

