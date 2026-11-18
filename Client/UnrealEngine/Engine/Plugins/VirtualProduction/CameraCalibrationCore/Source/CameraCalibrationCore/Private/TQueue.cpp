// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// Dequeue @ 14d6c00e0

bool __thiscall
TQueue<TSharedPtr<FDerivedDistortionDataJob,1>,1>::Dequeue
          (TQueue<TSharedPtr<FDerivedDistortionDataJob,1>,1> *this,
          TSharedPtr<FDerivedDistortionDataJob,1> *param_1)

{
  TSharedPtr<FDerivedDistortionDataJob,1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TSharedPtr<FDerivedDistortionDataJob,1> local_18;
  
  pTVar2 = this->Tail->NextNode;
  if (pTVar2 == (TNode *)0x0) {
    return false;
  }
  pTVar1 = &pTVar2->Item;
  if (param_1 != pTVar1) {
    param_1->Object = pTVar1->Object;
    pTVar1->Object = (FDerivedDistortionDataJob *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&(pTVar2->Item).SharedReferenceCount);
  }
  pTVar3 = this->Tail;
  this->Tail = pTVar2;
  local_18.Object = (FDerivedDistortionDataJob *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_18) {
    pTVar1->Object = (FDerivedDistortionDataJob *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pTVar2->Item).SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pTVar3 != (TNode *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
  }
  return true;
}

// Empty @ 14d6c1290

void __thiscall
TQueue<TSharedPtr<FDerivedDistortionDataJob,1>,1>::Empty
          (TQueue<TSharedPtr<FDerivedDistortionDataJob,1>,1> *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  while (pTVar1 = this->Tail->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = this->Tail;
    this->Tail = pTVar1;
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pTVar1->Item != (TSharedPtr<FDerivedDistortionDataJob,1> *)&local_18) {
      (pTVar1->Item).Object = (FDerivedDistortionDataJob *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar1->Item).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    if (pTVar2 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar2->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar2,0x18);
    }
  }
  return;
}

