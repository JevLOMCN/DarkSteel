// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149410ca0

UScriptStruct * __cdecl FNiagaraStatelessExpressionFloatSubtract::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionFloatSubtract");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.OuterSingleton;
}

// FNiagaraStatelessExpressionFloatSubtract @ 149426fc0

FNiagaraStatelessExpressionFloatSubtract * __thiscall
FNiagaraStatelessExpressionFloatSubtract::FNiagaraStatelessExpressionFloatSubtract
          (FNiagaraStatelessExpressionFloatSubtract *this)

{
  this->_padding_ = (longlong)&___7FNiagaraStatelessExpressionFloatSubtract__6B_;
  FInstancedStruct::FInstancedStruct(&this->A);
  FInstancedStruct::FInstancedStruct(&this->B);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionFloatConstant>(&this->A);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionFloatConstant>(&this->B);
  return this;
}

// ~FNiagaraStatelessExpressionFloatSubtract @ 14942be30

void __thiscall
FNiagaraStatelessExpressionFloatSubtract::~FNiagaraStatelessExpressionFloatSubtract
          (FNiagaraStatelessExpressionFloatSubtract *this)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  return;
}

// BuildInternal @ 1494380e0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionFloatSubtract::BuildInternal
          (FNiagaraStatelessExpressionFloatSubtract *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_48 = &___7FNiagaraStatelessExpressionFloatSubtract__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionFloatConstant>
            ((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionFloatConstant>
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
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract,
                         (UObject *)pUVar3,L"NiagaraStatelessExpressionFloatSubtract");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.
             OuterSingleton,(uchar *)&local_48);
  FInstancedStruct::Reset((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_40.ObjectPtr);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 1494423e0

float __thiscall
FNiagaraStatelessExpressionFloatSubtract::EvaluateInternal
          (FNiagaraStatelessExpressionFloatSubtract *this,FEvaluateContext *param_1)

{
  FNiagaraStatelessExpressionFloat *pFVar1;
  float fVar2;
  float fVar3;
  
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionFloat>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  fVar2 = (float)(**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,param_1);
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionFloat>
                     ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
  fVar3 = (float)(**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,param_1);
  return fVar2 - fVar3;
}

// IsConstant @ 1494538b0

bool __thiscall
FNiagaraStatelessExpressionFloatSubtract::IsConstant(FNiagaraStatelessExpressionFloatSubtract *this)

{
  char cVar1;
  FNiagaraStatelessExpressionFloat *pFVar2;
  
  pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionFloat>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  if (cVar1 != '\0') {
    pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionFloat>
                       ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
    cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

