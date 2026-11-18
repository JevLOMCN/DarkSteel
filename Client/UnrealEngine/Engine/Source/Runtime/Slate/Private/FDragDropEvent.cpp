// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// GetOperationAs<FDockingDragOperation> @ 1426f1270

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDockingDragOperation,1> * __thiscall
FDragDropEvent::GetOperationAs<FDockingDragOperation>
          (FDragDropEvent *this,TSharedPtr<FDockingDragOperation,1> *__return_storage_ptr__)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  FString *pFVar5;
  
  pFVar1 = (this->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FDockingDragOperation::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar4 != '\0') {
      __return_storage_ptr__->Object = (FDockingDragOperation *)(this->Content).Object;
      pTVar3 = (this->Content).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FDockingDragOperation *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetOperationAs<FUICommandDragDropOp> @ 1427a2c90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FUICommandDragDropOp,1> * __thiscall
FDragDropEvent::GetOperationAs<FUICommandDragDropOp>
          (FDragDropEvent *this,TSharedPtr<FUICommandDragDropOp,1> *__return_storage_ptr__)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  FString *pFVar5;
  
  pFVar1 = (this->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FUICommandDragDropOp::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar4 != '\0') {
      __return_storage_ptr__->Object = (FUICommandDragDropOp *)(this->Content).Object;
      pTVar3 = (this->Content).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FUICommandDragDropOp *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetOperationAs<FExternalDragOperation> @ 142840980

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FExternalDragOperation,1> * __thiscall
FDragDropEvent::GetOperationAs<FExternalDragOperation>
          (FDragDropEvent *this,TSharedPtr<FExternalDragOperation,1> *__return_storage_ptr__)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  FString *pFVar5;
  
  pFVar1 = (this->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FExternalDragOperation::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar4 != '\0') {
      __return_storage_ptr__->Object = (FExternalDragOperation *)(this->Content).Object;
      pTVar3 = (this->Content).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FExternalDragOperation *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

