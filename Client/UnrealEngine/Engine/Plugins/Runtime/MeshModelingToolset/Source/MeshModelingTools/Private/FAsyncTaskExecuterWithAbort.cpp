// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// ~FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> @ 14cc20ab0

void __thiscall
UE::Geometry::FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask>::
~FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask>
          (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this)

{
  atomic<int> *paVar1;
  
  this->_padding_ =
       (longlong)&___7__FAsyncTaskExecuterWithAbort_VFConstrainedMeshDeformerTask___Geometry_UE__6B_
  ;
  paVar1 = (this->TaskCounter).Object;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TaskCounter).SharedReferenceCount.ReferenceController);
  FConstrainedMeshDeformerTask::~FConstrainedMeshDeformerTask
            ((FConstrainedMeshDeformerTask *)&this->_padding_);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  return;
}

// CancelAndDelete @ 14cc47c90

void __thiscall
UE::Geometry::
FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
CancelAndDelete(FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                *this)

{
  FQueuedThreadPool *pFVar1;
  FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
  *this_00;
  
  this->bAbort = true;
  this_00 = ::operator_new(0x40);
  if (this_00 ==
      (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
       *)0x0) {
    this_00 = (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
               *)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__FAutoDeleteAsyncTask_V__TDeleterTask_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE____6B_
    ;
    (this_00->Task).Task =
         (FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)this;
  }
  pFVar1 = GThreadPool;
  FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_);
  if (pFVar1 != (FQueuedThreadPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cc47cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,this_00,3);
    return;
  }
  FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
  ::DoWork(this_00);
  return;
}

// CancelAndDelete @ 14cc47d20

void __thiscall
UE::Geometry::FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask>::CancelAndDelete
          (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this)

{
  FQueuedThreadPool *pFVar1;
  FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *this_00;
  
  this->bAbort = true;
  this_00 = ::operator_new(0x40);
  if (this_00 ==
      (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *)0x0) {
    this_00 = (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *)0x0
    ;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__FAutoDeleteAsyncTask_V__TDeleterTask_VFConstrainedMeshDeformerTask___Geometry_UE____6B_
    ;
    (this_00->Task).Task = (FAsyncTask<FConstrainedMeshDeformerTask> *)this;
  }
  pFVar1 = GThreadPool;
  FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_);
  if (pFVar1 != (FQueuedThreadPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cc47d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,this_00,3);
    return;
  }
  FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_>::DoWork(this_00);
  return;
}

