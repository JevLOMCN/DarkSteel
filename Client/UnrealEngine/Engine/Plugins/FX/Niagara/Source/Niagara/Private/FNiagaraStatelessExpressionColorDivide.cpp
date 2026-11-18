// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149413ac0

UScriptStruct * __cdecl FNiagaraStatelessExpressionColorDivide::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorDivide,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionColorDivide");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.OuterSingleton;
}

// FNiagaraStatelessExpressionColorDivide @ 149426d80

FNiagaraStatelessExpressionColorDivide * __thiscall
FNiagaraStatelessExpressionColorDivide::FNiagaraStatelessExpressionColorDivide
          (FNiagaraStatelessExpressionColorDivide *this)

{
  this->_padding_ = (longlong)&___7FNiagaraStatelessExpressionColorDivide__6B_;
  FInstancedStruct::FInstancedStruct(&this->A);
  FInstancedStruct::FInstancedStruct(&this->B);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionColorConstant>(&this->A);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionColorConstant>(&this->B);
  return this;
}

// ~FNiagaraStatelessExpressionColorDivide @ 14942bcf0

void __thiscall
FNiagaraStatelessExpressionColorDivide::~FNiagaraStatelessExpressionColorDivide
          (FNiagaraStatelessExpressionColorDivide *this)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  return;
}

// BuildInternal @ 149437490

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionColorDivide::BuildInternal
          (FNiagaraStatelessExpressionColorDivide *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  FNiagaraStatelessExpression *pFVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar2;
  UPackage *pUVar3;
  FInstancedStruct local_58;
  undefined **local_48;
  TObjectPtr<UScriptStruct_const_>_u_0 local_40;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  TObjectPtr<UScriptStruct_const_>_u_0 local_30;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  
  local_48 = &___7FNiagaraStatelessExpressionColorDivide__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionColorConstant>
            ((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionColorConstant>
            ((FInstancedStruct *)&local_30.ObjectPtr);
  pFVar1 = FInstancedStruct::Get<FNiagaraStatelessExpression>(&this->A);
  pTVar2 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&local_58,param_1);
  if (&local_40 != pTVar2) {
    FInstancedStruct::Reset((FInstancedStruct *)&local_40.ObjectPtr);
    local_38 = pTVar2[1];
    local_40.DebugPtr = pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_40.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_40.DebugPtr);
    }
    pTVar2->DebugPtr = (UScriptStruct *)0x0;
    pTVar2[1].DebugPtr = (UScriptStruct *)0x0;
  }
  FInstancedStruct::Reset(&local_58);
  pFVar1 = FInstancedStruct::Get<FNiagaraStatelessExpression>(&this->B);
  pTVar2 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&local_58,param_1);
  if (&local_30 != pTVar2) {
    FInstancedStruct::Reset((FInstancedStruct *)&local_30.ObjectPtr);
    local_28 = pTVar2[1];
    local_30.DebugPtr = pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_30.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_30.DebugPtr);
    }
    pTVar2->DebugPtr = (UScriptStruct *)0x0;
    pTVar2[1].DebugPtr = (UScriptStruct *)0x0;
  }
  FInstancedStruct::Reset(&local_58);
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorDivide,
                         (UObject *)pUVar3,L"NiagaraStatelessExpressionColorDivide");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.OuterSingleton
             ,(uchar *)&local_48);
  FInstancedStruct::Reset((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_40.ObjectPtr);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 149441f00

FLinearColor * __thiscall
FNiagaraStatelessExpressionColorDivide::EvaluateInternal
          (FNiagaraStatelessExpressionColorDivide *this,FLinearColor *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  FNiagaraStatelessExpressionColor *pFVar1;
  float fVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionColor>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_28,param_1);
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionColor>
                     ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_38,param_1);
  fVar2 = 0.0;
  if ((float)((uint)local_2c & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    local_1c = 0.0;
  }
  else {
    local_1c = local_1c / local_2c;
  }
  if ((float)((uint)local_30 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    local_20 = 0.0;
  }
  else {
    local_20 = local_20 / local_30;
  }
  if ((float)((uint)local_34 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    local_24 = 0.0;
  }
  else {
    local_24 = local_24 / local_34;
  }
  if (__real_322bcc77 < (float)((uint)local_38 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = local_28 / local_38;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.G = local_24;
  (__return_storage_ptr__->field0_0x0)._s_0.B = local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.A = local_1c;
  return __return_storage_ptr__;
}

// IsConstant @ 149453650

bool __thiscall
FNiagaraStatelessExpressionColorDivide::IsConstant(FNiagaraStatelessExpressionColorDivide *this)

{
  char cVar1;
  FNiagaraStatelessExpressionColor *pFVar2;
  
  pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionColor>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  if (cVar1 != '\0') {
    pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionColor>
                       ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
    cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

