// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// operator() @ 14c6fc640

EVertexControl __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_UE::Geometry::FMeshRefinerBase::EVertexControl___cdecl(int)>
::operator()(void *this,int param_1)

{
  code *pcVar1;
  EVertexControl EVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  EVar2 = (*pcVar1)(uVar3,local_res10);
  return EVar2;
}

// operator() @ 14c7d5590

int __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(void)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(void)>
           *this)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_int_void_ptr *UNRECOVERED_JUMPTABLE;
  int iVar2;
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
                    /* WARNING: Could not recover jumptable at 0x00014c7d55cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*UNRECOVERED_JUMPTABLE)(pvVar3);
  return iVar2;
}

// operator() @ 14c8b4bb0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Eigen::Matrix<double,-1,1,0,-1,1>_const_&,Eigen::Matrix<double,-1,1,0,-1,1>_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Eigen::Matrix<double,_1,1,0,_1,1>_const_&,Eigen::Matrix<double,_1,1,0,_1,1>_&)>
             *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_Matrix<double,_1,1,0,_1,1>_ptr_Matrix<double,_1,1,0,_1,1>_ptr
  *UNRECOVERED_JUMPTABLE;
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
                    /* WARNING: Could not recover jumptable at 0x00014c8b4c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pvVar2,param_1,param_2);
  return;
}

