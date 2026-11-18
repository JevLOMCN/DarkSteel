// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149417120

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec3Divide::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Divide,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec3Divide");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.OuterSingleton;
}

// FNiagaraStatelessExpressionVec3Divide @ 149427200

FNiagaraStatelessExpressionVec3Divide * __thiscall
FNiagaraStatelessExpressionVec3Divide::FNiagaraStatelessExpressionVec3Divide
          (FNiagaraStatelessExpressionVec3Divide *this)

{
  this->_padding_ = (longlong)&___7FNiagaraStatelessExpressionVec3Divide__6B_;
  FInstancedStruct::FInstancedStruct(&this->A);
  FInstancedStruct::FInstancedStruct(&this->B);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec3Constant>(&this->A);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec3Constant>(&this->B);
  return this;
}

// ~FNiagaraStatelessExpressionVec3Divide @ 14942bf90

void __thiscall
FNiagaraStatelessExpressionVec3Divide::~FNiagaraStatelessExpressionVec3Divide
          (FNiagaraStatelessExpressionVec3Divide *this)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  return;
}

// BuildInternal @ 149438ea0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec3Divide::BuildInternal
          (FNiagaraStatelessExpressionVec3Divide *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_48 = &___7FNiagaraStatelessExpressionVec3Divide__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec3Constant>
            ((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec3Constant>
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
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Divide,
                         (UObject *)pUVar3,L"NiagaraStatelessExpressionVec3Divide");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.OuterSingleton,
             (uchar *)&local_48);
  FInstancedStruct::Reset((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_40.ObjectPtr);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 1494429a0

TVector<float> * __thiscall
FNiagaraStatelessExpressionVec3Divide::EvaluateInternal
          (FNiagaraStatelessExpressionVec3Divide *this,TVector<float> *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  FNiagaraStatelessExpressionVec3 *pFVar1;
  float fVar2;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec3>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_18,param_1);
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec3>
                     ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_28,param_1);
  fVar2 = 0.0;
  if ((float)((uint)local_20 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    local_10 = 0.0;
  }
  else {
    local_10 = local_10 / local_20;
  }
  if ((float)((uint)local_24 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    local_14 = 0.0;
  }
  else {
    local_14 = local_14 / local_24;
  }
  if (__real_322bcc77 < (float)((uint)local_28 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = local_18 / local_28;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_14;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_10;
  return __return_storage_ptr__;
}

// IsConstant @ 149453b30

bool __thiscall
FNiagaraStatelessExpressionVec3Divide::IsConstant(FNiagaraStatelessExpressionVec3Divide *this)

{
  char cVar1;
  FNiagaraStatelessExpressionVec3 *pFVar2;
  
  pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec3>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  if (cVar1 != '\0') {
    pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec3>
                       ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
    cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

