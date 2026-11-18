// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149412d50

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec2Constant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Constant,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec2Constant");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton;
}

// ~FNiagaraStatelessExpressionVec2Constant @ 14942bea0

void __thiscall
FNiagaraStatelessExpressionVec2Constant::~FNiagaraStatelessExpressionVec2Constant
          (FNiagaraStatelessExpressionVec2Constant *this)

{
  return;
}

// EvaluateInternal @ 1494425c0

TVector2<float> __thiscall
FNiagaraStatelessExpressionVec2Constant::EvaluateInternal
          (FNiagaraStatelessExpressionVec2Constant *this,FEvaluateContext *param_1)

{
  param_1->ParameterStore = (FNiagaraParameterStore *)(this->A).field0_0x0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// IsConstant @ 149453980

bool __thiscall
FNiagaraStatelessExpressionVec2Constant::IsConstant(FNiagaraStatelessExpressionVec2Constant *this)

{
  return true;
}

