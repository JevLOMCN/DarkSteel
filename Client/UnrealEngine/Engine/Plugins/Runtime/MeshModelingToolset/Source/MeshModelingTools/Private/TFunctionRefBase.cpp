// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// operator() @ 14ccd5a10

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&)>
             *this,UObject *param_1,int *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
            TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr_UObject_ptr_ptr_int_ptr_TArray<int,TSizedDefaultAllocator<32>_>_ptr_TArray<float,TSizedDefaultAllocator<32>_>_ptr
  *p_Var2;
  void *pvVar3;
  TFunctionStorage<1> *pTVar4;
  UObject *local_res10;
  
  local_res10 = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,&local_res10,param_2,param_3,param_4);
  return;
}

// operator() @ 14ccd5a90

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&)>
             *this,UObject *param_1,int *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
            TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr_UObject_ptr_ptr_int_ptr_TArray<int,TSizedDefaultAllocator<32>_>_ptr_TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_ptr
  *p_Var2;
  void *pvVar3;
  TFunctionStorage<1> *pTVar4;
  UObject *local_res10;
  
  local_res10 = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,&local_res10,param_2,param_3,param_4);
  return;
}

// operator() @ 14ccd5b10

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(int)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(int)>
           *this,int param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_int_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  int local_res10 [6];
  
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

// operator() @ 14cd56f40

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
             *this,FText *param_1,
            TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
            param_2,FGroupTopologySelection *param_3)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr_FText_ptr_TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>_ptr_FGroupTopologySelection_ptr
  *p_Var2;
  FDynamicMeshChange *this_00;
  void *pvVar3;
  TFunctionStorage<1> *pTVar4;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,param_1,
            (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
             *)param_2.Ptr,param_3);
  this_00 = (FDynamicMeshChange *)((param_2.Ptr)->OldVertices).AllocatorInstance.Data;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  return;
}

