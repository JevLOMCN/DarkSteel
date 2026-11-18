// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// TBlockSparseSymmetricLinearSystem<float,3> @ 143bdd1a0

TBlockSparseSymmetricLinearSystem<float,3> * __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::TBlockSparseSymmetricLinearSystem<float,3>
          (TBlockSparseSymmetricLinearSystem<float,3> *this,
          TBlockSparseSymmetricLinearSystem<float,3> *param_1)

{
  (this->Pimpl).Ptr = (param_1->Pimpl).Ptr;
  (param_1->Pimpl).Ptr = (FPimpl *)0x0;
  return this;
}

// TBlockSparseSymmetricLinearSystem<float,3> @ 143bdd1c0

TBlockSparseSymmetricLinearSystem<float,3> * __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::TBlockSparseSymmetricLinearSystem<float,3>
          (TBlockSparseSymmetricLinearSystem<float,3> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = ::operator_new(0x70);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = UE::Core::Private::PimplPtr::
              DeleterFunc<Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl>;
    puVar1[1] = 0;
    Eigen::SparseMatrix<float,1,int>::SparseMatrix<float,1,int>
              ((SparseMatrix<float,1,int> *)(puVar1 + 2));
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puVar2 = puVar1;
  }
  (this->Pimpl).Ptr = (FPimpl *)(puVar2 + 2);
  return this;
}

// TBlockSparseSymmetricLinearSystem<double,3> @ 143bdd240

TBlockSparseSymmetricLinearSystem<double,3> * __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::TBlockSparseSymmetricLinearSystem<double,3>
          (TBlockSparseSymmetricLinearSystem<double,3> *this,
          TBlockSparseSymmetricLinearSystem<double,3> *param_1)

{
  (this->Pimpl).Ptr = (param_1->Pimpl).Ptr;
  (param_1->Pimpl).Ptr = (FPimpl *)0x0;
  return this;
}

// TBlockSparseSymmetricLinearSystem<double,3> @ 143bdd260

TBlockSparseSymmetricLinearSystem<double,3> * __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::TBlockSparseSymmetricLinearSystem<double,3>
          (TBlockSparseSymmetricLinearSystem<double,3> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = ::operator_new(0x70);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = UE::Core::Private::PimplPtr::
              DeleterFunc<Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl>;
    puVar1[1] = 0;
    Eigen::SparseMatrix<double,1,int>::SparseMatrix<double,1,int>
              ((SparseMatrix<double,1,int> *)(puVar1 + 2));
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puVar2 = puVar1;
  }
  (this->Pimpl).Ptr = (FPimpl *)(puVar2 + 2);
  return this;
}

// operator= @ 143be3eb0

TBlockSparseSymmetricLinearSystem<float,3> * __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::operator=
          (TBlockSparseSymmetricLinearSystem<float,3> *this,
          TBlockSparseSymmetricLinearSystem<float,3> *param_1)

{
  FPimpl *pFVar1;
  
  if (param_1 != this) {
    pFVar1 = (this->Pimpl).Ptr;
    (this->Pimpl).Ptr = (param_1->Pimpl).Ptr;
    (param_1->Pimpl).Ptr = (FPimpl *)0x0;
    if (pFVar1 != (FPimpl *)0x0) {
      (**(code **)&pFVar1[-1].MatrixBuilderTriplets.ArrayNum)
                (&pFVar1[-1].MatrixBuilderTriplets.ArrayNum);
    }
  }
  return this;
}

// operator= @ 143be3ef0

TBlockSparseSymmetricLinearSystem<double,3> * __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::operator=
          (TBlockSparseSymmetricLinearSystem<double,3> *this,
          TBlockSparseSymmetricLinearSystem<double,3> *param_1)

{
  FPimpl *pFVar1;
  
  if (param_1 != this) {
    pFVar1 = (this->Pimpl).Ptr;
    (this->Pimpl).Ptr = (param_1->Pimpl).Ptr;
    (param_1->Pimpl).Ptr = (FPimpl *)0x0;
    if (pFVar1 != (FPimpl *)0x0) {
      (**(code **)&pFVar1[-1].MatrixBuilderTriplets.ArrayNum)
                (&pFVar1[-1].MatrixBuilderTriplets.ArrayNum);
    }
  }
  return this;
}

// AddMatrixEntry @ 143becb00

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::AddMatrixEntry
          (TBlockSparseSymmetricLinearSystem<float,3> *this,int param_1,int param_2,
          PMatrix<float,3,3> *param_3)

{
  FPimpl::AddMatrixEntry((this->Pimpl).Ptr,param_1,param_2,param_3);
  return;
}

// AddMatrixEntry @ 143becb10

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::AddMatrixEntry
          (TBlockSparseSymmetricLinearSystem<double,3> *this,int param_1,int param_2,
          PMatrix<double,3,3> *param_3)

{
  FPimpl::AddMatrixEntry((this->Pimpl).Ptr,param_1,param_2,param_3);
  return;
}

// FinalizeSystem @ 143c03340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FinalizeSystem
          (TBlockSparseSymmetricLinearSystem<float,3> *this)

{
  FPimpl *pFVar1;
  bool bVar2;
  Triplet<float,int> *local_res8;
  Triplet<float,int> *local_res10;
  
  pFVar1 = (this->Pimpl).Ptr;
  TArray<Eigen::Triplet<float,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar1->MatrixBuilderTriplets,(int)pFVar1->TripletBuilderNum,No);
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::BuildMatrix(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId111,"ChaosBlockSparseLinearSystem_BuildMatrix",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x6f);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::BuildMatrix(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId111);
  }
  local_res10 = (Triplet<float,int> *)(pFVar1->MatrixBuilderTriplets).AllocatorInstance.Data;
  local_res8 = local_res10 + (pFVar1->MatrixBuilderTriplets).ArrayNum;
  Eigen::internal::
  set_from_triplets<Eigen::Triplet<float,int>_*,Eigen::SparseMatrix<float,1,int>,Eigen::internal::scalar_sum_op<float,float>_>
            (&local_res10,&local_res8,&pFVar1->AMatrix,local_res8._0_1_);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinalizeSystem @ 143c03400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FinalizeSystem
          (TBlockSparseSymmetricLinearSystem<double,3> *this)

{
  FPimpl *pFVar1;
  bool bVar2;
  Triplet<double,int> *local_res8;
  Triplet<double,int> *local_res10;
  
  pFVar1 = (this->Pimpl).Ptr;
  TArray<Eigen::Triplet<double,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar1->MatrixBuilderTriplets,(int)pFVar1->TripletBuilderNum,No);
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::BuildMatrix(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId111,"ChaosBlockSparseLinearSystem_BuildMatrix",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x6f);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::BuildMatrix(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId111);
  }
  local_res10 = (Triplet<double,int> *)(pFVar1->MatrixBuilderTriplets).AllocatorInstance.Data;
  local_res8 = local_res10 + (pFVar1->MatrixBuilderTriplets).ArrayNum;
  Eigen::internal::
  set_from_triplets<Eigen::Triplet<double,int>_*,Eigen::SparseMatrix<double,1,int>,Eigen::internal::scalar_sum_op<double,double>_>
            (&local_res10,&local_res8,&pFVar1->AMatrix,local_res8._0_1_);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReserveForParallelAdd @ 143c12140

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::ReserveForParallelAdd
          (TBlockSparseSymmetricLinearSystem<float,3> *this,int param_1,int param_2)

{
  FPimpl *pFVar1;
  
  pFVar1 = (this->Pimpl).Ptr;
  TArray<Eigen::Triplet<float,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar1->MatrixBuilderTriplets,
             (int)pFVar1->TripletBuilderNum + (param_1 + param_2 * 2) * 9,Default);
  return;
}

// ReserveForParallelAdd @ 143c12170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::ReserveForParallelAdd
          (TBlockSparseSymmetricLinearSystem<double,3> *this,int param_1,int param_2)

{
  FPimpl *pFVar1;
  
  pFVar1 = (this->Pimpl).Ptr;
  TArray<Eigen::Triplet<double,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar1->MatrixBuilderTriplets,
             (int)pFVar1->TripletBuilderNum + (param_1 + param_2 * 2) * 9,Default);
  return;
}

// Reset @ 143c121e0

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::Reset
          (TBlockSparseSymmetricLinearSystem<float,3> *this,int param_1)

{
  FPimpl *this_00;
  
  this_00 = (this->Pimpl).Ptr;
  LOCK();
  this_00->TripletBuilderNum = (atomic<int>)0x0;
  UNLOCK();
  (this_00->MatrixBuilderTriplets).ArrayNum = 0;
  if ((this_00->MatrixBuilderTriplets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this_00->MatrixBuilderTriplets).AllocatorInstance,0,
               &(this_00->MatrixBuilderTriplets).ArrayMax);
  }
  Eigen::SparseMatrix<float,1,int>::resize
            (&this_00->AMatrix,(longlong)(param_1 * 3),(longlong)(param_1 * 3));
  return;
}

// Reset @ 143c12250

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::Reset
          (TBlockSparseSymmetricLinearSystem<double,3> *this,int param_1)

{
  FPimpl *this_00;
  
  this_00 = (this->Pimpl).Ptr;
  LOCK();
  this_00->TripletBuilderNum = (atomic<int>)0x0;
  UNLOCK();
  (this_00->MatrixBuilderTriplets).ArrayNum = 0;
  if ((this_00->MatrixBuilderTriplets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this_00->MatrixBuilderTriplets).AllocatorInstance,0,
               &(this_00->MatrixBuilderTriplets).ArrayMax);
  }
  Eigen::SparseMatrix<double,1,int>::resize
            (&this_00->AMatrix,(longlong)(param_1 * 3),(longlong)(param_1 * 3));
  return;
}

// Solve @ 143c1a740

bool __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::Solve
          (TBlockSparseSymmetricLinearSystem<float,3> *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<float,3>,int> *param_2,int param_3,float param_4,bool param_5,
          int *param_6,float *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (PreconditionerType == 0) {
    bVar2 = FPimpl::Solve<Eigen::DiagonalPreconditioner<float>_>
                      ((this->Pimpl).Ptr,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return bVar2;
  }
  if (PreconditionerType != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                       ,0xc2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  bVar2 = FPimpl::Solve<Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>
                    ((this->Pimpl).Ptr,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar2;
}

// Solve @ 143c1a7c0

bool __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::Solve
          (TBlockSparseSymmetricLinearSystem<double,3> *this,
          TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<double,3>,int> *param_2,int param_3,double param_4,bool param_5,
          int *param_6,double *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (PreconditionerType == 0) {
    bVar2 = FPimpl::Solve<Eigen::DiagonalPreconditioner<double>_>
                      ((this->Pimpl).Ptr,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return bVar2;
  }
  if (PreconditionerType != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                       ,0xc2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  bVar2 = FPimpl::Solve<Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>
                    ((this->Pimpl).Ptr,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar2;
}

