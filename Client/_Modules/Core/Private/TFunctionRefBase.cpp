// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// operator() @ 141483be0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
           *this)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  TFunctionStorage<0> *pTVar3;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar3 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar3 = pTVar1;
  }
  pvVar2 = (void *)(**(code **)(*(longlong *)pTVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000141483c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pvVar2);
  return;
}

// operator() @ 1417401f0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(void)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(void)>
           *this)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  TFunctionStorage<1> *pTVar3;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar3 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar3 = pTVar1;
  }
  pvVar2 = (void *)(**(code **)(*(longlong *)pTVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014174022d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pvVar2);
  return;
}

// operator() @ 1417aee40

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
             *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
            FExpressionNode *param_1,void *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_TValueOrError<FExpressionNode,FExpressionError>_void_ptr_FExpressionNode_ptr_void_ptr_ptr
  *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  void *local_res20;
  
  local_res20 = param_2;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(__return_storage_ptr__,pvVar3,param_1,&local_res20);
  return __return_storage_ptr__;
}

// operator() @ 1418c3f10

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>
             *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
            FExpressionNode *param_1,FShortCircuitTestContext *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_TValueOrError<FExpressionNode,FExpressionError>_void_ptr_FExpressionNode_ptr_FShortCircuitTestContext_ptr_ptr
  *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  FShortCircuitTestContext *local_res20;
  
  local_res20 = param_2;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(__return_storage_ptr__,pvVar3,param_1,&local_res20);
  return __return_storage_ptr__;
}

// operator() @ 141921bf0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
             *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
            FExpressionNode *param_1,ITextFilterExpressionContext *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_TValueOrError<FExpressionNode,FExpressionError>_void_ptr_FExpressionNode_ptr_ITextFilterExpressionContext_ptr_ptr
  *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  ITextFilterExpressionContext *local_res20;
  
  local_res20 = param_2;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(__return_storage_ptr__,pvVar3,param_1,&local_res20);
  return __return_storage_ptr__;
}

