// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 17

// TSharedPtr<FAutomationTestExcludeOptions,1><FAutomationTestExcludeOptions> @ 148c4e590

TSharedPtr<FAutomationTestExcludeOptions,1> * __thiscall
TSharedPtr<FAutomationTestExcludeOptions,1>::
TSharedPtr<FAutomationTestExcludeOptions,1><FAutomationTestExcludeOptions>
          (TSharedPtr<FAutomationTestExcludeOptions,1> *this,
          TRawPtrProxy<FAutomationTestExcludeOptions> *param_1)

{
  FAutomationTestExcludeOptions *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFAutomationTestExcludeOptions__U__DefaultDeleter_UFAutomationTestExcludeOptions___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1><TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_> @ 148c4e6a0

TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> * __thiscall
TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1>::
TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1><TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>
          (TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> *this,
          TRawPtrProxy<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pTVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TFilterCollection_AEBV__TSharedPtr_VIAutomationReport___00____U__DefaultDeleter_V__TFilterCollection_AEBV__TSharedPtr_VIAutomationReport___00_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pTVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pTVar4 = param_1->Object;
  if ((pTVar4 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) &&
     (((plVar1 = &pTVar4->_padding_, pTVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4->_padding_ = (longlong)pTVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_> @ 148c4e780

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerFindWorkersResponse__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerFindWorkersResponse__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_> @ 148c4e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerImageComparisonResults__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerImageComparisonResults__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_> @ 148c4e860

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerPong__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerPong__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_> @ 148c4e8d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerRequestNextNetworkCommand__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerRequestNextNetworkCommand__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_> @ 148c4e940

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerRequestTestsReplyComplete__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerRequestTestsReplyComplete__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_> @ 148c4e9b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerRunTestsReply__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerRunTestsReply__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_> @ 148c4ea20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerScreenImage__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerScreenImage__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_> @ 148c4ea90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerTelemetryData__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerTelemetryData__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_> @ 148c4eb00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerTestDataRequest__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerTestDataRequest__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_> @ 148c4eb70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerWorkerOffline__VFAutomationControllerManager____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerWorkerOffline__VFAutomationControllerManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FAutomationControllerManager> @ 148c4ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IAutomationControllerManager,1> * __thiscall
TSharedPtr<IAutomationControllerManager,1>::operator=<FAutomationControllerManager>
          (TSharedPtr<IAutomationControllerManager,1> *this,
          TRawPtrProxy<FAutomationControllerManager> *param_1)

{
  FAutomationControllerManager *pFVar1;
  TSharedPtr<IAutomationControllerManager,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (IAutomationControllerManager *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAutomationControllerManager__U__DefaultDeleter_VFAutomationControllerManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (IAutomationControllerManager *)pFVar1;
    local_18.Object = (IAutomationControllerManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FAutomationReport> @ 148c4ec70

TSharedPtr<IAutomationReport,1> * __thiscall
TSharedPtr<IAutomationReport,1>::operator=<FAutomationReport>
          (TSharedPtr<IAutomationReport,1> *this,TRawPtrProxy<FAutomationReport> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FAutomationReport *pFVar4;
  FAutomationReport *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<IAutomationReport,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = (IAutomationReport *)pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAutomationReport__U__DefaultDeleter_VFAutomationReport___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FAutomationReport *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = (IAutomationReport *)pFVar4;
    local_18.Object = (IAutomationReport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator-> @ 148c547a0

IAutomationControllerManager * __thiscall
TSharedPtr<IAutomationControllerManager,1>::operator->
          (TSharedPtr<IAutomationControllerManager,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAutomationControllerManager *pIVar3;
  
  if (this->Object != (IAutomationControllerManager *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAutomationControllerManager *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 148c547f0

IAutomationReport * __thiscall
TSharedPtr<IAutomationReport,1>::operator->(TSharedPtr<IAutomationReport,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAutomationReport *pIVar3;
  
  if (this->Object != (IAutomationReport *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAutomationReport *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// ToSharedRef @ 148c6e810

TSharedRef<IAutomationControllerManager,1> * __thiscall
TSharedPtr<IAutomationControllerManager,1>::ToSharedRef
          (TSharedPtr<IAutomationControllerManager,1> *this,
          TSharedRef<IAutomationControllerManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<IAutomationControllerManager,1> *pTVar4;
  
  if (this->Object == (IAutomationControllerManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<IAutomationControllerManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (IAutomationControllerManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<IAutomationControllerManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

