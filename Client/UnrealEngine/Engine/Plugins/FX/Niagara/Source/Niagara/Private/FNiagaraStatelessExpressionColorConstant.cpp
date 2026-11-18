// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149413500

UScriptStruct * __cdecl FNiagaraStatelessExpressionColorConstant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorConstant,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionColorConstant");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton;
}

// ~FNiagaraStatelessExpressionColorConstant @ 14942bce0

void __thiscall
FNiagaraStatelessExpressionColorConstant::~FNiagaraStatelessExpressionColorConstant
          (FNiagaraStatelessExpressionColorConstant *this)

{
  return;
}

// EvaluateInternal @ 149441ee0

FLinearColor * __thiscall
FNiagaraStatelessExpressionColorConstant::EvaluateInternal
          (FNiagaraStatelessExpressionColorConstant *this,FLinearColor *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->A).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->A).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// IsConstant @ 149453640

bool __thiscall
FNiagaraStatelessExpressionColorConstant::IsConstant(FNiagaraStatelessExpressionColorConstant *this)

{
  return true;
}

