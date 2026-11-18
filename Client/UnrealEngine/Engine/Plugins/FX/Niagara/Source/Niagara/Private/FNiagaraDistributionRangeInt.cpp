// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 1494157f0

UScriptStruct * __cdecl FNiagaraDistributionRangeInt::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt,(UObject *)pUVar1,
                         L"NiagaraDistributionRangeInt");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeInt.OuterSingleton;
}

// CalculateRange @ 14943d1c0

FNiagaraStatelessRange<int> * __thiscall
FNiagaraDistributionRangeInt::CalculateRange
          (FNiagaraDistributionRangeInt *this,FNiagaraStatelessRange<int> *__return_storage_ptr__,
          int param_1)

{
  ENiagaraDistributionMode EVar1;
  longlong lVar2;
  
  EVar1 = this->Mode;
  __return_storage_ptr__->ParameterOffset = -1;
  __return_storage_ptr__->Min = this->Min;
  lVar2 = 0x20;
  if (EVar1 != UniformConstant) {
    lVar2 = 0x24;
  }
  __return_storage_ptr__->Max = *(int *)(&this->Mode + lVar2);
  return __return_storage_ptr__;
}

// InitConstant @ 149451500

void __thiscall
FNiagaraDistributionRangeInt::InitConstant(FNiagaraDistributionRangeInt *this,int param_1)

{
  this->Mode = UniformConstant;
  this->Min = param_1;
  this->Max = param_1;
  return;
}

