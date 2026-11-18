// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// operator() @ 142b52f90

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,bool___cdecl(FDependsNode_const_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,bool___cdecl(FDependsNode_const_*)>
             *this,FDependsNode *param_1)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_bool_void_ptr_FDependsNode_ptr_ptr *p_Var2;
  bool bVar3;
  void *pvVar4;
  TFunctionStorage<1> *pTVar5;
  FDependsNode *local_res10 [3];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  bVar3 = (*p_Var2)(pvVar4,local_res10);
  return bVar3;
}

// operator() @ 142b52fe0

FSoftObjectPath * __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,FSoftObjectPath_&___cdecl(FPackageIndex)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,FSoftObjectPath_&___cdecl(FPackageIndex)>
             *this,FPackageIndex param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_FSoftObjectPath_ptr_void_ptr_FPackageIndex_ptr *p_Var2;
  void *pvVar3;
  FSoftObjectPath *pFVar4;
  TFunctionStorage<0> *pTVar5;
  FPackageIndex local_res10 [6];
  
  local_res10[0].Index = param_1.Index;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  pFVar4 = (*p_Var2)(pvVar3,local_res10);
  return pFVar4;
}

// operator() @ 142b826f0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
::operator()(void *this,ELoadResult param_1,FAssetRegistryState *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ELoadResult local_res10 [8];
  
  local_res10[0] = param_1;
  CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res10,param_2);
  return;
}

