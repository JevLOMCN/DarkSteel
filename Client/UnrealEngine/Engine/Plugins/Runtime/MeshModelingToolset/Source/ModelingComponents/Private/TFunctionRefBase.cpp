// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// operator() @ 14cadfec0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&)>
             *this,FPrimitiveRenderData *param_1,
            TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,
            TTransform<double> *param_5,TVector<double> *param_6,TVector<double> *param_7,
            FColor *param_8)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FPrimitiveRenderData_ptr_TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_ptr_int_ptr_int_ptr_TTransform<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FColor_ptr
  *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  int local_res20 [2];
  
  local_res20[0] = param_3;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,param_1,param_2,local_res20,&param_4,param_5,param_6,param_7,param_8);
  return;
}

// operator() @ 14cb70850

TMeshAABBTree3<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
             *this)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_ptr_void_ptr *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  TFunctionStorage<0> *pTVar4;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar2 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014cb7088d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (*UNRECOVERED_JUMPTABLE)(pvVar2);
  return pTVar3;
}

