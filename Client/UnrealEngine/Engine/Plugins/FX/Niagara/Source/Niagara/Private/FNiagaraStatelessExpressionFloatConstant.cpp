// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149410a90

UScriptStruct * __cdecl FNiagaraStatelessExpressionFloatConstant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatConstant,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionFloatConstant");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton;
}

// ~FNiagaraStatelessExpressionFloatConstant @ 14942bdc0

void __thiscall
FNiagaraStatelessExpressionFloatConstant::~FNiagaraStatelessExpressionFloatConstant
          (FNiagaraStatelessExpressionFloatConstant *this)

{
  return;
}

// EvaluateInternal @ 1494422c0

float __thiscall
FNiagaraStatelessExpressionFloatConstant::EvaluateInternal
          (FNiagaraStatelessExpressionFloatConstant *this,FEvaluateContext *param_1)

{
  return this->A;
}

// IsConstant @ 1494537e0

bool __thiscall
FNiagaraStatelessExpressionFloatConstant::IsConstant(FNiagaraStatelessExpressionFloatConstant *this)

{
  return true;
}

