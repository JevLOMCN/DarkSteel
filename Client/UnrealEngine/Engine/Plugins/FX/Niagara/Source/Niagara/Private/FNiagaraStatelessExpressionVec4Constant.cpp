// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 14940b860

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec4Constant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Constant,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec4Constant");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton;
}

// ~FNiagaraStatelessExpressionVec4Constant @ 14942c060

void __thiscall
FNiagaraStatelessExpressionVec4Constant::~FNiagaraStatelessExpressionVec4Constant
          (FNiagaraStatelessExpressionVec4Constant *this)

{
  return;
}

// EvaluateInternal @ 149442d50

TVector4<float> * __thiscall
FNiagaraStatelessExpressionVec4Constant::EvaluateInternal
          (FNiagaraStatelessExpressionVec4Constant *this,TVector4<float> *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->A).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->A).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// IsConstant @ 149453cc0

bool __thiscall
FNiagaraStatelessExpressionVec4Constant::IsConstant(FNiagaraStatelessExpressionVec4Constant *this)

{
  return true;
}

