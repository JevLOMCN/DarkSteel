// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetOperationAs<FDragAndDropVerticalBoxOp> @ 1425b6590

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDragAndDropVerticalBoxOp,1> * __thiscall
FDragDropEvent::GetOperationAs<FDragAndDropVerticalBoxOp>
          (FDragDropEvent *this,TSharedPtr<FDragAndDropVerticalBoxOp,1> *__return_storage_ptr__)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  FString *pFVar5;
  
  pFVar1 = (this->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FDragAndDropVerticalBoxOp::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar4 != '\0') {
      __return_storage_ptr__->Object = (FDragAndDropVerticalBoxOp *)(this->Content).Object;
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
  __return_storage_ptr__->Object = (FDragAndDropVerticalBoxOp *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

