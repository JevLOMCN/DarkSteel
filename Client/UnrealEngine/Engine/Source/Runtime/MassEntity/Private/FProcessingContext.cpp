// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// ~FProcessingContext @ 1471e06b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FProcessingContext::~FProcessingContext(FProcessingContext *this)

{
  FMassExecutionContext *pFVar1;
  FMassCommandBuffer *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMassCommandBuffer *pFVar4;
  FMassEntityManager *this_00;
  code *pcVar5;
  bool bVar6;
  
  pFVar1 = this->ExecutionContextPtr;
  if (pFVar1 != (FMassExecutionContext *)0x0) {
    pFVar2 = (pFVar1->DeferredCommandBuffer).Object;
    pTVar3 = (pFVar1->DeferredCommandBuffer).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar2 == (FMassCommandBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionContextPtr->GetSharedDeferredCommandBuffer()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                         ,0xd,
                         L"A valid execution context without a valid command buffer is unexpected");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar3 = (this->ExecutionContextPtr->DeferredCommandBuffer).SharedReferenceCount.
             ReferenceController;
    pFVar2 = (this->ExecutionContextPtr->DeferredCommandBuffer).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4 = (this->CommandBuffer).Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar2 != pFVar4) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionContextPtr->GetSharedDeferredCommandBuffer() == CommandBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                         ,0x10,
                         L"Hosted Execution Context\'s command buffer is not the same as FProcessingContext\'s command buffer. This is not supposed to happen. Make sure FProcessingContext.CommandBuffer never gets assigned after FMassExecutionContext\'s creation"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->CommandBuffer).Object == (FMassCommandBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (((this->CommandBuffer).Object)->bIsFlushing != false) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6613007514118127634>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                         ,0x12,"!CommandBuffer->IsFlushing()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = (this->EntityManager).Object;
    if (this->bFlushCommandBuffer == false) {
      FMassEntityManager::AppendCommands(this_00,&this->CommandBuffer);
    }
    else {
      FMassEntityManager::FlushCommands(this_00,&this->CommandBuffer);
    }
    FMassExecutionContext::~FMassExecutionContext(this->ExecutionContextPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandBuffer).SharedReferenceCount.ReferenceController);
  FInstancedStruct::Reset(&this->AuxData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntityManager).SharedReferenceCount.ReferenceController);
  return;
}

// GetExecutionContext @ 1472216f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassExecutionContext * __thiscall
UE::Mass::FProcessingContext::GetExecutionContext(FProcessingContext *this)

{
  FMassCommandBuffer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  DWORD DVar4;
  FMassExecutionContext *pFVar5;
  FInstancedStruct *this_00;
  TRawPtrProxy<FMassCommandBuffer> local_res8;
  
  if (this->ExecutionContextPtr != (FMassExecutionContext *)0x0) {
    return this->ExecutionContextPtr;
  }
  pFVar5 = FMassExecutionContext::FMassExecutionContext
                     ((FMassExecutionContext *)this->ExecutionContextBuffer,
                      (this->EntityManager).Object,this->DeltaSeconds,true);
  pFVar1 = (this->CommandBuffer).Object;
  this->ExecutionContextPtr = pFVar5;
  if (pFVar1 == (FMassCommandBuffer *)0x0) {
    local_res8.Object = ::operator_new(0x60);
    if (local_res8.Object != (FMassCommandBuffer *)0x0) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_res8.Object,4000);
      *(undefined4 *)&((local_res8.Object)->PendingBatchCommandsDetector).field_0x0 = 0;
      ((local_res8.Object)->CommandInstances).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      ((local_res8.Object)->CommandInstances).ArrayNum = 0;
      ((local_res8.Object)->CommandInstances).ArrayMax = 0;
      ((local_res8.Object)->AppendedCommandInstances).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      ((local_res8.Object)->AppendedCommandInstances).ArrayNum = 0;
      ((local_res8.Object)->AppendedCommandInstances).ArrayMax = 0;
      (local_res8.Object)->ActiveCommandsCounter = 0;
      (local_res8.Object)->bIsFlushing = false;
      DVar4 = GetCurrentThreadId();
      (local_res8.Object)->OwnerThreadId = DVar4;
    }
    TSharedPtr<FMassCommandBuffer,1>::operator=<FMassCommandBuffer>
              (&this->CommandBuffer,&local_res8);
  }
  pTVar2 = (this->CommandBuffer).SharedReferenceCount.ReferenceController;
  pFVar5 = this->ExecutionContextPtr;
  pFVar1 = (this->CommandBuffer).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar5->DeferredCommandBuffer).SharedReferenceCount.ReferenceController;
  (pFVar5->DeferredCommandBuffer).Object = pFVar1;
  (pFVar5->DeferredCommandBuffer).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->ExecutionContextPtr->bFlushDeferredCommands = false;
  this_00 = &this->ExecutionContextPtr->AuxData;
  if (this_00 != &this->AuxData) {
    FInstancedStruct::InitializeAs
              (this_00,(this->AuxData).ScriptStruct.field0_0x0.DebugPtr,(this->AuxData).StructMemory
              );
  }
  this->ExecutionContextPtr->ExecutionType = Processor;
  return this->ExecutionContextPtr;
}

