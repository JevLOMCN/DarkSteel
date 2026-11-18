// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149416b40

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec3Constant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Constant,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec3Constant");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton;
}

// ~FNiagaraStatelessExpressionVec3Constant @ 14942bf80

void __thiscall
FNiagaraStatelessExpressionVec3Constant::~FNiagaraStatelessExpressionVec3Constant
          (FNiagaraStatelessExpressionVec3Constant *this)

{
  return;
}

// EvaluateInternal @ 149442980

TVector<float> * __thiscall
FNiagaraStatelessExpressionVec3Constant::EvaluateInternal
          (FNiagaraStatelessExpressionVec3Constant *this,TVector<float> *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  float fVar1;
  
  fVar1 = (this->A).field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->A).field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// IsConstant @ 149453b20

bool __thiscall
FNiagaraStatelessExpressionVec3Constant::IsConstant(FNiagaraStatelessExpressionVec3Constant *this)

{
  return true;
}

