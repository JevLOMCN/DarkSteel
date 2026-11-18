// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// operator() @ 1445aff50

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UE::IoStore::FOnDemandDefragResult)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UE::IoStore::FOnDemandDefragResult)>
             *this,FOnDemandDefragResult *param_1)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr_FOnDemandDefragResult_ptr *p_Var2;
  IErrorDetails *pIVar3;
  void *pvVar4;
  TFunctionStorage<1> *pTVar5;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  (*p_Var2)(pvVar4,param_1);
  if ((param_1->Error).bIsSet != false) {
    (param_1->Error).TypedValue.ErrorCode = 0;
    (param_1->Error).TypedValue.ModuleId = 0;
    pIVar3 = (param_1->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar3 != (IErrorDetails *)0x0) {
      (param_1->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    pIVar3 = (param_1->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar3 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
  }
  return;
}

// operator() @ 1445affe0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UE::IoStore::FOnDemandPurgeResult)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UE::IoStore::FOnDemandPurgeResult)>
             *this,FOnDemandPurgeResult *param_1)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr_FOnDemandPurgeResult_ptr *p_Var2;
  IErrorDetails *pIVar3;
  void *pvVar4;
  TFunctionStorage<1> *pTVar5;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  (*p_Var2)(pvVar4,param_1);
  if ((param_1->Error).bIsSet != false) {
    (param_1->Error).TypedValue.ErrorCode = 0;
    (param_1->Error).TypedValue.ModuleId = 0;
    pIVar3 = (param_1->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar3 != (IErrorDetails *)0x0) {
      (param_1->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    pIVar3 = (param_1->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar3 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
  }
  return;
}

