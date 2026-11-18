// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// operator() @ 147b3efc0

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&)>
             *this,FTypedElementHandle *param_1,FWorldSelectionElementArgs *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_FTypedElementHandle_ptr_FWorldSelectionElementArgs_ptr
  *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000147b3f01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*UNRECOVERED_JUMPTABLE)(pvVar3,param_1,param_2);
  return bVar2;
}

// operator() @ 147bc4780

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
             *this,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *param_1,FString *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_ptr_FString_ptr
  *p_Var2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TFunctionStorage<0> *pTVar5;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  (*p_Var2)(pvVar4,param_1,param_2);
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 147d806a0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName,FName)>::
operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName,FName)>
           *this,FName param_1,FName param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FName_ptr_FName_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  FName local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,&local_res10,local_res18);
  return;
}

// operator() @ 147e59740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(AActor_*)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(AActor_*)>
           *this,AActor *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_int_void_ptr_AActor_ptr_ptr *p_Var2;
  int iVar3;
  void *pvVar4;
  TFunctionStorage<0> *pTVar5;
  AActor *local_res10 [3];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  iVar3 = (*p_Var2)(pvVar4,local_res10);
  return iVar3;
}

// operator() @ 147f6c620

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UMaterialInstance_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UMaterialInstance_*)>
             *this,UMaterialInstance *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_UMaterialInstance_ptr_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  UMaterialInstance *local_res10 [3];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,local_res10);
  return;
}

// operator() @ 14825d900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UPrimitiveComponent_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UPrimitiveComponent_*)>
             *this,UPrimitiveComponent *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_UPrimitiveComponent_ptr_ptr *p_Var2;
  bool bVar3;
  void *pvVar4;
  TFunctionStorage<0> *pTVar5;
  UPrimitiveComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  bVar3 = (*p_Var2)(pvVar4,local_res10);
  return bVar3;
}

// operator() @ 1482e2eb0

FNetworkPhysicsData * __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
             *this,int param_1)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_FNetworkPhysicsData_ptr_void_ptr_int_ptr *p_Var2;
  void *pvVar3;
  FNetworkPhysicsData *pFVar4;
  TFunctionStorage<1> *pTVar5;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  pFVar4 = (*p_Var2)(pvVar3,local_res10);
  return pFVar4;
}

// operator() @ 14869fc60

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USoundNode_*)>::
operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USoundNode_*)>
           *this,USoundNode *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_USoundNode_ptr_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  USoundNode *local_res10 [3];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,local_res10);
  return;
}

// operator() @ 148783ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,enum_ELODStreamingCallbackResult)>
::operator()(void *this,UPrimitiveComponent *param_1,UStreamableRenderAsset *param_2,
            ELODStreamingCallbackResult param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  UPrimitiveComponent *local_res10;
  UStreamableRenderAsset *local_res18;
  ELODStreamingCallbackResult local_res20 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_res10,&local_res18,local_res20);
  return;
}

