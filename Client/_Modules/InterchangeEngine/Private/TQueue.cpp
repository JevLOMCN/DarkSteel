// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// Enqueue @ 14e4eb330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TQueue<UInterchangeManager::FQueuedTaskData,1>::Enqueue
          (TQueue<UInterchangeManager::FQueuedTaskData,1> *this,FQueuedTaskData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).AsyncHelper.Object = (param_1->AsyncHelper).Object;
    pTVar1 = (param_1->AsyncHelper).SharedReferenceCount.ReferenceController;
    (pTVar3->Item).AsyncHelper.SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    (pTVar3->Item).TranslatorClass = param_1->TranslatorClass;
    pTVar2 = this->Head;
    this->Head = pTVar3;
    pTVar2->NextNode = pTVar3;
    return true;
  }
  return false;
}

