// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// FAsyncTask<FConstrainedMeshDeformerTask><enum_ELaplacianWeightScheme_const_&> @ 14cc05830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FConstrainedMeshDeformerTask> * __thiscall
FAsyncTask<FConstrainedMeshDeformerTask>::
FAsyncTask<FConstrainedMeshDeformerTask><enum_ELaplacianWeightScheme_const_&>
          (FAsyncTask<FConstrainedMeshDeformerTask> *this,ELaplacianWeightScheme *param_1)

{
  ELaplacianWeightScheme EVar1;
  void *pvVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  ulonglong uVar5;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFConstrainedMeshDeformerTask____6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  EVar1 = *param_1;
  (this->Task).SubsetPositionBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).SubsetPositionBuffer.ArrayNum = 0;
  (this->Task).SubsetPositionBuffer.ArrayMax = 0;
  (this->Task).SubsetConstraintBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).SubsetConstraintBuffer.ArrayNum = 0;
  (this->Task).SubsetConstraintBuffer.ArrayMax = 0;
  (this->Task).WeightAttenuationCurve._padding_ = 0;
  (this->Task).WeightAttenuationCurve._padding_ = 0;
  (this->Task).WeightAttenuationCurve._padding_ = 0;
  (this->Task)._padding_ = (longlong)&___7FConstrainedMeshDeformerTask__6B_;
  (this->Task).LaplacianWeightScheme = EVar1;
  *(undefined4 *)&(this->Task).WeightAttenuationCurve._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Task).WeightAttenuationCurve._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Task).WeightAttenuationCurve._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Task).WeightAttenuationCurve._padding_ + 4) = 0;
  (this->Task).WeightAttenuationCurve._padding_ = 0;
  *(undefined4 *)&(this->Task).WeightAttenuationCurve._padding_ = 0;
  (this->Task).WeightAttenuationCurve._padding_ = 0;
  (this->Task).WeightAttenuationCurve._padding_ = 0;
  *(undefined4 *)&(this->Task).WeightAttenuationCurve._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Task).WeightAttenuationCurve._padding_ + 4) = 0x404;
  (this->Task).WeightAttenuationCurve._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->Task).WeightAttenuationCurve.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).WeightAttenuationCurve.Keys.ArrayNum = 0;
  (this->Task).WeightAttenuationCurve.Keys.ArrayMax = 0;
  (this->Task).bIsNewTransaction = true;
  (this->Task).bAttenuateWeights = false;
  (this->Task).bAbortSource = (bool *)0x0;
  (this->Task).SrcMeshMaxVertexID = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&(this->Task).SubsetMesh);
  pvVar2 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  (this->Task).SubsetVertexIDToSrcVertexIDMap.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Task).SubsetVertexIDToSrcVertexIDMap.ArrayNum = 0;
  (this->Task).SubsetVertexIDToSrcVertexIDMap.ArrayMax = 0;
  (this->Task).ConstrainedDeformer.Ptr = (IConstrainedMeshSolver *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x9d4c) <
      `public:_struct_TStatId___cdecl_FConstrainedMeshDeformerTask::GetStatId(void)const___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FConstrainedMeshDeformerTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FConstrainedMeshDeformerTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FConstrainedMeshDeformerTask::GetStatId'::__l2::FStat_FConstrainedMeshDeformerTask>
      ::
      FThreadSafeStaticStat<_FConstrainedMeshDeformerTask::GetStatId_::__l2::FStat_FConstrainedMeshDeformerTask>
                (&`public:_struct_TStatId___cdecl_FConstrainedMeshDeformerTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FConstrainedMeshDeformerTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FConstrainedMeshDeformerTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar4 = _StatPtr_FConstrainedMeshDeformerTask;
  if (_StatPtr_FConstrainedMeshDeformerTask == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"FConstrainedMeshDeformerTask");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FConstrainedMeshDeformerTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FConstrainedMeshDeformerTask,*pFVar3,
                        L"FConstrainedMeshDeformerTask","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// DoTaskWork @ 14cc534a0

void __thiscall
FAsyncTask<FConstrainedMeshDeformerTask>::DoTaskWork(FAsyncTask<FConstrainedMeshDeformerTask> *this)

{
  FConstrainedMeshDeformerTask::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 14cc654d0

void __thiscall
FAsyncTask<FConstrainedMeshDeformerTask>::MarkAsCanceled
          (FAsyncTask<FConstrainedMeshDeformerTask> *this)

{
  return;
}

// TryAbandonTask @ 14cc82cc0

bool __thiscall
FAsyncTask<FConstrainedMeshDeformerTask>::TryAbandonTask
          (FAsyncTask<FConstrainedMeshDeformerTask> *this)

{
  return false;
}

