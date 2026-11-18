// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// operator() @ 143beb8e0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
             *this,FSolverParticles *param_1,float param_2,int param_3)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FSolverParticles_ptr_float_ptr_int_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  float local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,param_1,local_res18,local_res20);
  return;
}

// operator() @ 143beb950

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
             *this,FSolverParticles *param_1,float param_2,float param_3,int param_4)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FSolverParticles_ptr_float_ptr_float_ptr_int_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  float local_res18 [2];
  float local_res20 [2];
  
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,param_1,local_res18,local_res20,&param_4);
  return;
}

// operator() @ 143c8c050

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*)>
             *this,TGeometryParticleHandleImp<double,3,1> *param_1,
            TGeometryParticleHandleImp<double,3,1> *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_TGeometryParticleHandleImp<double,3,1>_ptr_ptr_TGeometryParticleHandleImp<double,3,1>_ptr_ptr
  *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *local_res10;
  TGeometryParticleHandleImp<double,3,1> *local_res18 [2];
  
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

// operator() @ 143d33e30

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
             *this,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_TParticleView<Chaos::TPBDRigidParticles<double,3>_>_ptr
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
                    /* WARNING: Could not recover jumptable at 0x000143d33e7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pvVar2,param_1);
  return;
}

// operator() @ 143d33e90

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>
           *this,double param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_double_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  double local_res10 [3];
  
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

// operator() @ 144020850

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(int)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(int)>
           *this,int param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_int_ptr *p_Var2;
  bool bVar3;
  void *pvVar4;
  TFunctionStorage<0> *pTVar5;
  int local_res10 [6];
  
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

