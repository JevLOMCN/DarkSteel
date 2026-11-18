// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// ~FDraggableBoxUIDragOperation @ 142d669e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ToolWidgets::DraggableBoxDetail::FDraggableBoxUIDragOperation::~FDraggableBoxUIDragOperation
          (FDraggableBoxUIDragOperation *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->DraggableBoxWeak).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  return;
}

// OnDragged @ 142dbdcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ToolWidgets::DraggableBoxDetail::FDraggableBoxUIDragOperation::OnDragged
          (FDraggableBoxUIDragOperation *this,FDragDropEvent *param_1)

{
  SDraggableBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->DraggableBoxWeak).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dbdcf0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->DraggableBoxWeak).Object;
    if (this_00 != (SDraggableBox *)0x0) {
      SDraggableBox::OnDragUpdate(this_00,(FPointerEvent *)param_1,&this->DragInfo,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_142dbdcf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// OnDrop @ 142dbe4c0

void __thiscall
UE::ToolWidgets::DraggableBoxDetail::FDraggableBoxUIDragOperation::OnDrop
          (FDraggableBoxUIDragOperation *this,bool param_1,FPointerEvent *param_2)

{
  SDraggableBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->DraggableBoxWeak).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dbe4f0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->DraggableBoxWeak).Object;
    if (this_00 != (SDraggableBox *)0x0) {
      SDraggableBox::OnDragUpdate(this_00,param_2,&this->DragInfo,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_142dbe4f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

