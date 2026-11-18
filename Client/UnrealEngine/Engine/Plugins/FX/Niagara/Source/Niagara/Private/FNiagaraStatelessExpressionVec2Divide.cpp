// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149413260

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec2Divide::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Divide,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec2Divide");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.OuterSingleton;
}

// FNiagaraStatelessExpressionVec2Divide @ 149427080

FNiagaraStatelessExpressionVec2Divide * __thiscall
FNiagaraStatelessExpressionVec2Divide::FNiagaraStatelessExpressionVec2Divide
          (FNiagaraStatelessExpressionVec2Divide *this)

{
  this->_padding_ = (longlong)&___7FNiagaraStatelessExpressionVec2Divide__6B_;
  FInstancedStruct::FInstancedStruct(&this->A);
  FInstancedStruct::FInstancedStruct(&this->B);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec2Constant>(&this->A);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec2Constant>(&this->B);
  return this;
}

// ~FNiagaraStatelessExpressionVec2Divide @ 14942beb0

void __thiscall
FNiagaraStatelessExpressionVec2Divide::~FNiagaraStatelessExpressionVec2Divide
          (FNiagaraStatelessExpressionVec2Divide *this)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  return;
}

// BuildInternal @ 1494385f0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec2Divide::BuildInternal
          (FNiagaraStatelessExpressionVec2Divide *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_48 = &___7FNiagaraStatelessExpressionVec2Divide__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec2Constant>
            ((FInstancedStruct *)&local_40.ObjectPtr);
  FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec2Constant>
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
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Divide,
                         (UObject *)pUVar3,L"NiagaraStatelessExpressionVec2Divide");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.OuterSingleton,
             (uchar *)&local_48);
  FInstancedStruct::Reset((FInstancedStruct *)&local_30.ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_40.ObjectPtr);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 1494425e0

TVector2<float> __thiscall
FNiagaraStatelessExpressionVec2Divide::EvaluateInternal
          (FNiagaraStatelessExpressionVec2Divide *this,FEvaluateContext *param_1)

{
  FNiagaraStatelessExpressionVec2 *pFVar1;
  float fVar2;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec2>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_res10);
  pFVar1 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec2>
                     ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
  (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,&local_res8);
  fVar2 = 0.0;
  if ((float)((uint)local_resc & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    local_res14 = 0.0;
  }
  else {
    local_res14 = local_res14 / local_resc;
  }
  if (__real_322bcc77 < (float)((uint)local_res8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = local_res10 / local_res8;
  }
  *(float *)&param_1->ParameterStore = fVar2;
  *(float *)((longlong)&param_1->ParameterStore + 4) = local_res14;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// IsConstant @ 149453990

bool __thiscall
FNiagaraStatelessExpressionVec2Divide::IsConstant(FNiagaraStatelessExpressionVec2Divide *this)

{
  char cVar1;
  FNiagaraStatelessExpressionVec2 *pFVar2;
  
  pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec2>
                     ((this->A).ScriptStruct.field0_0x0.DebugPtr,(this->A).StructMemory);
  cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  if (cVar1 != '\0') {
    pFVar2 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpressionVec2>
                       ((this->B).ScriptStruct.field0_0x0.DebugPtr,(this->B).StructMemory);
    cVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

