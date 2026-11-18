// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149413640

UScriptStruct * __cdecl FNiagaraStatelessExpressionColorAdd::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorAdd,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionColorAdd");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.OuterSingleton;
}

// FNiagaraStatelessExpressionColorAdd @ 149426d20

FNiagaraStatelessExpressionColorAdd * __thiscall
FNiagaraStatelessExpressionColorAdd::FNiagaraStatelessExpressionColorAdd
          (FNiagaraStatelessExpressionColorAdd *this)

{
  this->_padding_ = (longlong)&___7FNiagaraStatelessExpressionColorAdd__6B_;
  FInstancedStruct::FInstancedStruct(&this->A);
  FInstancedStruct::FInstancedStruct(&this->B);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionColorConstant>(&this->A);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionColorConstant>(&this->B);
  return this;
}

// ~FNiagaraStatelessExpressionColorAdd @ 14942bca0

void __thiscall
FNiagaraStatelessExpressionColorAdd::~FNiagaraStatelessExpressionColorAdd
          (FNiagaraStatelessExpressionColorAdd *this)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  return;
}

// BuildInternal @ 1494371a0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionColorAdd::BuildInternal
          (FNiagaraStatelessExpressionColorAdd *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_48 = &___7FNiagaraStatelessExpressionColorAdd__6B_;
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
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorAdd,
                         (UObject *)pUVar3,L"NiagaraStatelessExpressionColorAdd");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.OuterSingleton,
             (uchar *)&local_48);
  FInstancedStruct::Reset((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_40.ObjectPtr);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 149441da0

FLinearColor * __thiscall
FNiagaraStatelessExpressionColorAdd::EvaluateInternal
          (FNiagaraStatelessExpressionColorAdd *this,FLinearColor *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  FNiagaraStatelessExpressionColor *pFVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionColor>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_28,param_1);
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionColor>
                     ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_18,param_1);
  (__return_storage_ptr__->field0_0x0)._s_0.R = local_28 + local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.G = local_24 + local_14;
  (__return_storage_ptr__->field0_0x0)._s_0.B = local_20 + local_10;
  (__return_storage_ptr__->field0_0x0)._s_0.A = local_1c + local_c;
  return __return_storage_ptr__;
}

// IsConstant @ 1494535d0

bool __thiscall
FNiagaraStatelessExpressionColorAdd::IsConstant(FNiagaraStatelessExpressionColorAdd *this)

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

