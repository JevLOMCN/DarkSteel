// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDormantObjectReplicator @ 1480141e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDormantObjectReplicator * __thiscall
UE::Net::Private::FDormantObjectReplicator::FDormantObjectReplicator
          (FDormantObjectReplicator *this,FObjectKey param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDormantObjectReplicator *pFVar4;
  
  this->ObjectKey = param_1;
  pTVar3 = ::operator_new(0x100);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->Replicator).Object = (FObjectReplicator *)0x10;
    (this->Replicator).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFObjectReplicator___00_SharedPointerInternals__6B_;
    FObjectReplicator::FObjectReplicator((FObjectReplicator *)(pTVar3 + 1));
    (this->Replicator).SharedReferenceCount.ReferenceController = pTVar3;
    (this->Replicator).Object = (FObjectReplicator *)(pTVar3 + 1);
    if ((FObjectReplicator *)(pTVar3 + 1) == (FObjectReplicator *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDormantObjectReplicator *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return this;
}

// FDormantObjectReplicator @ 148014290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDormantObjectReplicator * __thiscall
UE::Net::Private::FDormantObjectReplicator::FDormantObjectReplicator
          (FDormantObjectReplicator *this,FObjectKey param_1,
          TSharedRef<FObjectReplicator,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->ObjectKey = param_1;
  (this->Replicator).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Replicator).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

