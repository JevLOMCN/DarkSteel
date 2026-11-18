// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// operator() @ 1496417c0

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceState_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceState_const_&)>
             *this,FInputDeviceState *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_FInputDeviceState_ptr *UNRECOVERED_JUMPTABLE;
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
                    /* WARNING: Could not recover jumptable at 0x00014964180d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*UNRECOVERED_JUMPTABLE)(pvVar3,param_1);
  return bVar2;
}

// operator() @ 14968c0b0

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceRay_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceRay_const_&)>
             *this,FInputDeviceRay *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_FInputDeviceRay_ptr *UNRECOVERED_JUMPTABLE;
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
                    /* WARNING: Could not recover jumptable at 0x00014968c0fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*UNRECOVERED_JUMPTABLE)(pvVar3,param_1);
  return bVar2;
}

// operator() @ 14968c110

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&)>
             *this,ISceneViewInterface *param_1,TTransform<double> *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_ISceneViewInterface_ptr_TTransform<double>_ptr *UNRECOVERED_JUMPTABLE;
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
                    /* WARNING: Could not recover jumptable at 0x00014968c16d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*UNRECOVERED_JUMPTABLE)(pvVar3,param_1,param_2);
  return bVar2;
}

