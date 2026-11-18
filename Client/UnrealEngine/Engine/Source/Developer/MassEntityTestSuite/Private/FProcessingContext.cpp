// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FProcessingContext @ 1470f4d70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FProcessingContext * __thiscall
UE::Mass::FProcessingContext::FProcessingContext
          (FProcessingContext *this,FMassEntityManager *param_1,float param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FMassEntityManager,1> *pTVar2;
  TSharedRef<FMassEntityManager,1> local_28 [2];
  
  pTVar2 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,local_28);
  (this->EntityManager).Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->DeltaSeconds = param_2;
  FInstancedStruct::FInstancedStruct(&this->AuxData);
  (this->CommandBuffer).Object = (FMassCommandBuffer *)0x0;
  (this->CommandBuffer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ExecutionContextPtr = (FMassExecutionContext *)0x0;
  this->bFlushCommandBuffer = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return this;
}

// FProcessingContext @ 1470f4e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FProcessingContext * __thiscall
UE::Mass::FProcessingContext::FProcessingContext
          (FProcessingContext *this,TSharedPtr<FMassEntityManager,1> *param_1,float param_2,
          bool param_3)

{
  FMassEntityManager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FProcessingContext *pFVar5;
  
  if (param_1->Object == (FMassEntityManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FProcessingContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FMassEntityManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FProcessingContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  (this->EntityManager).Object = pFVar1;
  (this->EntityManager).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->DeltaSeconds = param_2;
  FInstancedStruct::FInstancedStruct(&this->AuxData);
  this->bFlushCommandBuffer = param_3;
  (this->CommandBuffer).Object = (FMassCommandBuffer *)0x0;
  (this->CommandBuffer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ExecutionContextPtr = (FMassExecutionContext *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

