// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 10

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>_> @ 148bfd7e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerFindWorkers__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerFindWorkers__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>_> @ 148bfd850

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerImageComparisonResults__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerImageComparisonResults__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>_> @ 148bfd8c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerNextNetworkCommandReply__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerNextNetworkCommandReply__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>_> @ 148bfd930

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>_> *param_1)

{
  TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerPing__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerPing__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>_> @ 148bfd9a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerRequestTests__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerRequestTests__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>_> @ 148bfda10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerRunTests__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerRunTests__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>_> @ 148bfda80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerStartTestSession__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerStartTestSession__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>_> @ 148bfdaf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerStopTestSession__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerStopTestSession__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>_> @ 148bfdb60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerStopTests__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerStopTests__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>_> @ 148bfdbd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>_>
          *param_1)

{
  TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFAutomationWorkerTestDataResponse__VFAutomationWorkerModule____U__DefaultDeleter_V__TRawMessageHandler_UFAutomationWorkerTestDataResponse__VFAutomationWorkerModule_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

