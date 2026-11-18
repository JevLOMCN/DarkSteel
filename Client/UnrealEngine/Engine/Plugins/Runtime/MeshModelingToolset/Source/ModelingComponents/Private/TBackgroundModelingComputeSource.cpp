// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory> @ 14cac7310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
* __thiscall
UE::Geometry::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
          (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
           *this,IDynamicMeshOperatorFactory *param_1)

{
  TSharedPtr<std::atomic<int>,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this->OperatorSource = param_1;
  pTVar1 = &this->ActiveTaskCount;
  this->ActiveBackgroundTask =
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0;
  this->AccumTime = 0.0;
  this->LastStartTime = 0.0;
  this->LastEndTime = 0.0;
  this->LastInvalidateTime = 0.0;
  this->CancelActiveOpDelaySeconds = 0.5;
  this->bWaitingForActiveTasksToFinish = false;
  this->TaskState = NotActive;
  this->MaxActiveTaskCount = 5;
  pTVar1->Object = (atomic<int> *)0x0;
  (this->ActiveTaskCount).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_20.ReferenceController = ::operator_new(0x18);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6 = FStack_20.ReferenceController + 1;
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_U__atomic_H_std___00_SharedPointerInternals__6B_;
    *(undefined4 *)&FStack_20.ReferenceController[1]._padding_ = 0;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = FStack_20.ReferenceController;
    local_28 = pTVar6;
  }
  if (pTVar1 != (TSharedPtr<std::atomic<int>,1> *)&local_28) {
    pTVar1->Object = (atomic<int> *)pTVar6;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveTaskCount).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

// CancelActiveCompute @ 14caf2c60

void __thiscall
UE::Geometry::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
::CancelActiveCompute
          (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
           *this)

{
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar1;
  FQueuedThreadPool *pFVar2;
  FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
  *this_00;
  
  pFVar1 = this->ActiveBackgroundTask;
  if (pFVar1 != (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                 *)0x0) {
    pFVar1->bAbort = true;
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
           (FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)pFVar1;
    }
    pFVar2 = GThreadPool;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_);
    if (pFVar2 == (FQueuedThreadPool *)0x0) {
      FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
      ::DoWork(this_00);
    }
    else {
      (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2,this_00,3);
    }
    this->ActiveBackgroundTask =
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0;
    this->TaskState = NotActive;
    return;
  }
  this->TaskState = NotActive;
  return;
}

// CheckStatus @ 14caf3cc0

FStatus * __thiscall
UE::Geometry::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
::CheckStatus(TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
              *this,FStatus *__return_storage_ptr__)

{
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar1;
  char *pcVar2;
  EBackgroundComputeTaskStatus EVar3;
  double dVar4;
  
  EVar3 = NotComputing;
  __return_storage_ptr__->TaskStatus = NotComputing;
  __return_storage_ptr__->ElapsedTime = -1.0;
  if (this->bWaitingForActiveTasksToFinish == false) {
    pFVar1 = this->ActiveBackgroundTask;
    if (pFVar1 == (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                   *)0x0) {
      dVar4 = this->AccumTime - this->LastInvalidateTime;
      goto LAB_14caf3d6d;
    }
    if (((FThreadSafeCounter *)&pFVar1->field_0x38)->Counter != 0) goto LAB_14caf3d5e;
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar1,false);
    pFVar1 = this->ActiveBackgroundTask;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar1);
    pcVar2 = *(char **)&pFVar1->field_0x70;
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      if (this->TaskState == ComputingResult) {
        this->LastEndTime = this->AccumTime;
      }
      dVar4 = this->LastEndTime;
      EVar3 = (EBackgroundComputeTaskStatus)(this->TaskState == WaitingToCancel);
    }
    else {
      dVar4 = this->LastInvalidateTime;
      EVar3 = Aborted;
    }
  }
  else {
LAB_14caf3d5e:
    dVar4 = this->AccumTime;
    EVar3 = InProgress;
  }
  dVar4 = dVar4 - this->LastStartTime;
LAB_14caf3d6d:
  __return_storage_ptr__->TaskStatus = EVar3;
  __return_storage_ptr__->ElapsedTime = dVar4;
  return __return_storage_ptr__;
}

// ExtractResult @ 14cb06ae0

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall
UE::Geometry::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
::ExtractResult(TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                *this)

{
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar4;
  FDynamicMeshOperator *in_RDX;
  
  pFVar1 = this->ActiveBackgroundTask;
  if ((pFVar1 == (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                  *)0x0) || (((FThreadSafeCounter *)&pFVar1->field_0x38)->Counter != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveBackgroundTask != nullptr && ActiveBackgroundTask->IsDone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\BackgroundModelingComputeSource.h"
                       ,0x171,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (FDynamicMeshOperator *)(*pcVar2)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar4.Ptr;
    }
  }
  else {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar1,false);
  }
  pFVar1 = this->ActiveBackgroundTask;
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar1);
  in_RDX->_padding_ = *(longlong *)&pFVar1->field_0x130;
  *(undefined8 *)&pFVar1->field_0x130 = 0;
  pFVar1 = this->ActiveBackgroundTask;
  if (pFVar1 != (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                 *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
  }
  this->ActiveBackgroundTask =
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0;
  if (this->TaskState != WaitingToCancel) {
    this->TaskState = NotActive;
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )in_RDX;
  }
  StartNewCompute(this);
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// NotifyActiveComputeInvalidated @ 14cb239b0

void __thiscall
UE::Geometry::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
::NotifyActiveComputeInvalidated
          (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
           *this)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *this_00;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TStackX_8;
  
  if (this->TaskState == ComputingResult) {
    this->LastInvalidateTime = this->AccumTime;
    this->TaskState = WaitingToCancel;
    return;
  }
  if (this->TaskState != NotActive) {
    return;
  }
  if (this->ActiveBackgroundTask !=
      (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveBackgroundTask == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\BackgroundModelingComputeSource.h"
                       ,0x11f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ActiveTaskCount).Object == (atomic<int> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  paVar1 = (this->ActiveTaskCount).Object;
  LOCK();
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  (**(code **)((longlong)*this->OperatorSource + 8))();
  this_00 = ::operator_new(0x160);
  if (this_00 ==
      (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
       *)0x0) {
    this_00 = (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
               *)0x0;
  }
  else {
    FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
    FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_><TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>_>
              ((FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)
               this_00,&TStackX_8);
    *(undefined ***)this_00 =
         &
         ___7__FAsyncTaskExecuterWithAbort_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE__6B_
    ;
    (this_00->TaskCounter).Object = (atomic<int> *)0x0;
    (this_00->TaskCounter).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this_00->bAbort = false;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
    *(bool **)&this_00->field_0x70 = &this_00->bAbort;
  }
  this->ActiveBackgroundTask = this_00;
  pTVar2 = (this->ActiveTaskCount).SharedReferenceCount.ReferenceController;
  paVar1 = (this->ActiveTaskCount).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->TaskCounter).SharedReferenceCount.ReferenceController;
  (this_00->TaskCounter).Object = paVar1;
  (this_00->TaskCounter).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)this->ActiveBackgroundTask,false,GThreadPool,Normal,None,-1,
             (wchar_t *)0x0);
  this->LastStartTime = this->AccumTime;
  this->TaskState = ComputingResult;
  if (TStackX_8.Ptr != (FDynamicMeshOperator *)0x0) {
    (**(code **)(TStackX_8.Ptr)->_padding_)(TStackX_8.Ptr,1);
  }
  return;
}

// StartNewCompute @ 14cb3e8c0

void __thiscall
UE::Geometry::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
::StartNewCompute(TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                  *this)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *this_00;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  local_res8;
  
  if (this->ActiveBackgroundTask !=
      (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveBackgroundTask == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\BackgroundModelingComputeSource.h"
                       ,0x11f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ActiveTaskCount).Object == (atomic<int> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  paVar1 = (this->ActiveTaskCount).Object;
  LOCK();
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  (**(code **)((longlong)*this->OperatorSource + 8))();
  this_00 = ::operator_new(0x160);
  if (this_00 ==
      (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
       *)0x0) {
    this_00 = (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
               *)0x0;
  }
  else {
    FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
    FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_><TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>_>
              ((FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)
               this_00,&local_res8);
    *(undefined ***)this_00 =
         &
         ___7__FAsyncTaskExecuterWithAbort_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE__6B_
    ;
    (this_00->TaskCounter).Object = (atomic<int> *)0x0;
    (this_00->TaskCounter).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this_00->bAbort = false;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
    *(bool **)&this_00->field_0x70 = &this_00->bAbort;
  }
  this->ActiveBackgroundTask = this_00;
  pTVar2 = (this->ActiveTaskCount).SharedReferenceCount.ReferenceController;
  paVar1 = (this->ActiveTaskCount).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->TaskCounter).SharedReferenceCount.ReferenceController;
  (this_00->TaskCounter).Object = paVar1;
  (this_00->TaskCounter).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)this->ActiveBackgroundTask,false,GThreadPool,Normal,None,-1,
             (wchar_t *)0x0);
  this->LastStartTime = this->AccumTime;
  this->TaskState = ComputingResult;
  if (local_res8.Ptr != (FDynamicMeshOperator *)0x0) {
    (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
  }
  return;
}

// Tick @ 14cb40950

void __thiscall
UE::Geometry::
TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
::Tick(TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
       *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = (double)param_1 + this->AccumTime;
  this->AccumTime = dVar3;
  if ((this->TaskState == WaitingToCancel) &&
     (dVar3 = dVar3 - this->LastInvalidateTime,
     this->CancelActiveOpDelaySeconds <= dVar3 && dVar3 != this->CancelActiveOpDelaySeconds)) {
    CancelActiveCompute(this);
    if ((this->ActiveTaskCount).Object == (atomic<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((int)*(this->ActiveTaskCount).Object < this->MaxActiveTaskCount) {
      this->bWaitingForActiveTasksToFinish = false;
      StartNewCompute(this);
      return;
    }
    this->bWaitingForActiveTasksToFinish = true;
    this->TaskState = WaitingToCancel;
  }
  return;
}

