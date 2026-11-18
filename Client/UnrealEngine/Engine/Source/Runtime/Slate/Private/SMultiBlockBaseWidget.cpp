// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// SMultiBlockBaseWidget @ 1427b5aa0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

SMultiBlockBaseWidget * __thiscall
SMultiBlockBaseWidget::SMultiBlockBaseWidget(SMultiBlockBaseWidget *this)

{
  this->_padding_ = (longlong)&___7IMultiBlockBaseWidget__6B_;
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IMultiBlockBaseWidget__;
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  (this->OwnerMultiBoxWidget).Object = (SMultiBoxWidget *)0x0;
  (this->OwnerMultiBoxWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MultiBlock).Object = (FMultiBlock *)0x0;
  (this->MultiBlock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OptionsBlockWidget).Object = (SWidget *)0x0;
  (this->OptionsBlockWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// AsWidget @ 1427d3760

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMultiBlockBaseWidget::AsWidget
          (SMultiBlockBaseWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsWidget @ 1427d3790

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget_const_,1> * __thiscall
SMultiBlockBaseWidget::AsWidget
          (SMultiBlockBaseWidget *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__)

{
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMultiBlockLocation @ 142811200

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

Type __thiscall SMultiBlockBaseWidget::GetMultiBlockLocation(SMultiBlockBaseWidget *this)

{
  return this->Location;
}

// GetMultiBlockLocation @ 142811210

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

Type __thiscall SMultiBlockBaseWidget::GetMultiBlockLocation(SMultiBlockBaseWidget *this)

{
  return this->Location;
}

// IsInEditMode @ 14281e160

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall SMultiBlockBaseWidget::IsInEditMode(SMultiBlockBaseWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  char cVar5;
  atomic<int> aVar6;
  TSharedRef<FMultiBox_const_,1> *pTVar7;
  UObject *pUVar8;
  SMultiBoxWidget *pSVar9;
  SMultiBoxWidget *pSVar10;
  SMultiBoxWidget *this_00;
  bool bVar11;
  TSharedRef<FMultiBox_const_,1> local_18;
  
  if ((((this->OwnerMultiBoxWidget).Object == (SMultiBoxWidget *)0x0) ||
      (pTVar1 = (this->OwnerMultiBoxWidget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    return false;
  }
  pSVar10 = (SMultiBoxWidget *)(this->OwnerMultiBoxWidget).WeakReferenceCount.ReferenceController;
  this_00 = (SMultiBoxWidget *)0x0;
  pSVar9 = pSVar10;
  if (pSVar10 != (SMultiBoxWidget *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar10->_padding_;
    do {
      pSVar9 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14281e1c1;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar10->_padding_;
      bVar11 = aVar3 == aVar6;
      if (bVar11) {
        *(atomic<int> *)&pSVar10->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar11);
    this_00 = (this->OwnerMultiBoxWidget).Object;
    pSVar9 = pSVar10;
    if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_14281e1e7;
  }
LAB_14281e1c1:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar10 = pSVar9;
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14281e1e7:
  pTVar7 = SMultiBoxWidget::GetMultiBox(this_00,&local_18);
  pUVar8 = FWeakObjectPtr::Get(&(pTVar7->Object->WeakToolMenu).WeakPtr);
  if ((pUVar8 == (UObject *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)pUVar8 + 0x2b0))(pUVar8), cVar5 == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar10);
  return bVar11;
}

// OnDragEnter @ 142825fc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiBlockBaseWidget::OnDragEnter
          (SMultiBlockBaseWidget *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDropPreviewBlock *pFVar4;
  FUICommandDragDropOp *pFVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  FString *pFVar9;
  TSharedRef<FMultiBlock_const_,1> *pTVar10;
  UObject *pUVar11;
  atomic<int> *paVar12;
  SMultiBoxWidget *pSVar13;
  SMultiBoxWidget *pSVar14;
  SMultiBoxWidget *this_00;
  bool bVar15;
  TVector2<double>_u_0 local_68;
  TSharedPtr<FUICommandDragDropOp,1> local_58;
  TSharedRef<FMultiBlock_const_,1> local_48;
  TSharedRef<FMultiBlock_const_,1> local_38;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142826216:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar9 = FUICommandDragDropOp::GetTypeId();
  cVar7 = (*pcVar2)(pFVar1,pFVar9);
  if (cVar7 == '\0') goto LAB_142826216;
  pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
  pFVar1 = (param_2->Content).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pFVar1 == (FDragDropOperation *)0x0) {
    return;
  }
  pSVar14 = (this->OwnerMultiBoxWidget).Object;
  this_00 = (SMultiBoxWidget *)0x0;
  pSVar13 = pSVar14;
  if (pSVar14 != (SMultiBoxWidget *)0x0) {
    iVar6 = (int)pSVar14->_padding_;
    do {
      pSVar13 = this_00;
      if (iVar6 == 0) goto LAB_142826065;
      LOCK();
      iVar8 = (int)pSVar14->_padding_;
      bVar15 = iVar6 == iVar8;
      if (bVar15) {
        *(int *)&pSVar14->_padding_ = iVar6 + 1;
        iVar8 = iVar6;
      }
      UNLOCK();
      iVar6 = iVar8;
    } while (!bVar15);
    this_00 = (SMultiBoxWidget *)this->_padding_;
    pSVar13 = pSVar14;
    if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_14282608b;
  }
LAB_142826065:
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar14 = pSVar13;
  if (bVar15) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14282608b:
  pTVar10 = TSharedPtr<FMultiBlock_const_,1>::ToSharedRef
                      ((TSharedPtr<FMultiBlock_const_,1> *)
                       &(this->OwnerMultiBoxWidget).WeakReferenceCount,&local_38);
  pFVar4 = (this_00->DragPreview).PreviewBlock.Object;
  if ((pFVar4 == (FDropPreviewBlock *)0x0) || (pFVar4 != (FDropPreviewBlock *)pTVar10->Object)) {
    if (((this_00->MultiBox).Object == (FMultiBox *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar11 = FWeakObjectPtr::Get(&(((this_00->MultiBox).Object)->WeakToolMenu).WeakPtr);
    if ((pUVar11 != (UObject *)0x0) &&
       (cVar7 = (**(code **)(*(longlong *)pUVar11 + 0x2b0))(pUVar11), cVar7 != '\0')) {
      pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar5 = (FUICommandDragDropOp *)(param_2->Content).Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        paVar12 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar12 = &pTVar3->SharedReferenceCount;
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_68._s_0.X = (double)*(float *)&param_2->_padding_;
      local_68._s_0.Y = (double)*(float *)((longlong)&param_2->_padding_ + 4);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      local_48.Object = pTVar10->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar5;
      local_58.SharedReferenceCount.ReferenceController = pTVar3;
      SMultiBoxWidget::UpdateDropAreaPreviewBlock
                (this_00,&local_48,&local_58,param_1,(TVector2<double> *)&local_68._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar10->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  return;
}

// OnDragOver @ 142826650

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiBlockBaseWidget::OnDragOver
          (SMultiBlockBaseWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDropPreviewBlock *pFVar4;
  FUICommandDragDropOp *pFVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  FReply *pFVar9;
  TSharedRef<FMultiBlock_const_,1> *pTVar10;
  UObject *pUVar11;
  atomic<int> *paVar12;
  SMultiBoxWidget *pSVar13;
  SMultiBoxWidget *pSVar14;
  SMultiBoxWidget *this_00;
  bool bVar15;
  TVector2<double>_u_0 local_78;
  TSharedPtr<FUICommandDragDropOp,1> local_68;
  TSharedRef<FMultiBlock_const_,1> local_58;
  TSharedRef<FMultiBlock_const_,1> local_48;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FUICommandDragDropOp::GetTypeId();
    cVar7 = (*pcVar2)();
    if (cVar7 != '\0') {
      pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar1 != (FDragDropOperation *)0x0) {
        pSVar14 = (this->OwnerMultiBoxWidget).Object;
        this_00 = (SMultiBoxWidget *)0x0;
        pSVar13 = pSVar14;
        if (pSVar14 != (SMultiBoxWidget *)0x0) {
          iVar6 = (int)pSVar14->_padding_;
          do {
            pSVar13 = this_00;
            if (iVar6 == 0) goto LAB_1428266f5;
            LOCK();
            iVar8 = (int)pSVar14->_padding_;
            bVar15 = iVar6 == iVar8;
            if (bVar15) {
              *(int *)&pSVar14->_padding_ = iVar6 + 1;
              iVar8 = iVar6;
            }
            UNLOCK();
            iVar6 = iVar8;
          } while (!bVar15);
          this_00 = (SMultiBoxWidget *)this->_padding_;
          pSVar13 = pSVar14;
          if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_14282671b;
        }
LAB_1428266f5:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pSVar14 = pSVar13;
        if (bVar15) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar2)();
          return pFVar9;
        }
LAB_14282671b:
        pTVar10 = TSharedPtr<FMultiBlock_const_,1>::ToSharedRef
                            ((TSharedPtr<FMultiBlock_const_,1> *)
                             &(this->OwnerMultiBoxWidget).WeakReferenceCount,&local_48);
        pFVar4 = (this_00->DragPreview).PreviewBlock.Object;
        if ((pFVar4 == (FDropPreviewBlock *)0x0) || (pFVar4 != (FDropPreviewBlock *)pTVar10->Object)
           ) {
          if (((this_00->MultiBox).Object == (FMultiBox *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar2)();
            return pFVar9;
          }
          pUVar11 = FWeakObjectPtr::Get(&(((this_00->MultiBox).Object)->WeakToolMenu).WeakPtr);
          if ((pUVar11 != (UObject *)0x0) &&
             (cVar7 = (**(code **)(*(longlong *)pUVar11 + 0x2b0))(pUVar11), cVar7 != '\0')) {
            pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
            pFVar5 = (FUICommandDragDropOp *)(param_2->Content).Object;
            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
              paVar12 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar12 = &pTVar3->SharedReferenceCount;
              LOCK();
              *paVar12 = (atomic<int>)((int)*paVar12 + 1);
              UNLOCK();
              LOCK();
              *paVar12 = (atomic<int>)((int)*paVar12 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            local_78._s_0.X = (double)*(float *)&param_2->_padding_;
            local_78._s_0.Y = (double)*(float *)((longlong)&param_2->_padding_ + 4);
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar12 = (atomic<int>)((int)*paVar12 + 1);
              UNLOCK();
            }
            local_58.Object = pTVar10->Object;
            local_58.SharedReferenceCount.ReferenceController =
                 (pTVar10->SharedReferenceCount).ReferenceController;
            if (local_58.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_68.Object = pFVar5;
            local_68.SharedReferenceCount.ReferenceController = pTVar3;
            SMultiBoxWidget::UpdateDropAreaPreviewBlock
                      (this_00,&local_58,&local_68,param_1,(TVector2<double> *)&local_78._s_0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar10->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar14);
        FReply::FReply(__return_storage_ptr__,true);
        return __return_storage_ptr__;
      }
      goto LAB_1428268a9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_1428268a9:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDrop @ 142826ad0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiBlockBaseWidget::OnDrop
          (SMultiBlockBaseWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  FReply *pFVar7;
  SMultiBoxWidget *pSVar8;
  SMultiBoxWidget *pSVar9;
  SMultiBoxWidget *this_00;
  bool bVar10;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142826bae:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FUICommandDragDropOp::GetTypeId();
    cVar5 = (*pcVar2)();
    if (cVar5 == '\0') goto LAB_142826bae;
    pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar1 != (FDragDropOperation *)0x0) {
      pSVar9 = (this->OwnerMultiBoxWidget).Object;
      this_00 = (SMultiBoxWidget *)0x0;
      pSVar8 = pSVar9;
      if (pSVar9 == (SMultiBoxWidget *)0x0) {
LAB_142826b66:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pSVar9 = pSVar8;
        if (bVar10) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
      }
      else {
        iVar4 = (int)pSVar9->_padding_;
        do {
          pSVar8 = this_00;
          if (iVar4 == 0) goto LAB_142826b66;
          LOCK();
          iVar6 = (int)pSVar9->_padding_;
          bVar10 = iVar4 == iVar6;
          if (bVar10) {
            *(int *)&pSVar9->_padding_ = iVar4 + 1;
            iVar6 = iVar4;
          }
          UNLOCK();
          iVar4 = iVar6;
        } while (!bVar10);
        this_00 = (SMultiBoxWidget *)this->_padding_;
        pSVar8 = pSVar9;
        if (this_00 == (SMultiBoxWidget *)0x0) goto LAB_142826b66;
      }
      SMultiBoxWidget::OnCustomCommandDropped(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar9);
      bVar10 = true;
      goto LAB_142826bb7;
    }
  }
  bVar10 = false;
LAB_142826bb7:
  FReply::FReply(__return_storage_ptr__,bVar10);
  return __return_storage_ptr__;
}

// SetMultiBlock @ 142835130

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBlockBaseWidget::SetMultiBlock
          (SMultiBlockBaseWidget *this,TSharedRef<FMultiBlock_const_,1> *param_1)

{
  FMultiBlock *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MultiBlock != (TSharedPtr<FMultiBlock_const_,1> *)&local_18) {
    (this->MultiBlock).Object = local_18;
    local_18 = (FMultiBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MultiBlock).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMultiBlockLocation @ 1428351a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBlockBaseWidget::SetMultiBlockLocation(SMultiBlockBaseWidget *this,Type param_1,bool param_2)

{
  this->Location = param_1;
  this->bSectionContainsIcons = param_2;
  return;
}

// SetOptionsBlockWidget @ 1428355e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBlockBaseWidget::SetOptionsBlockWidget
          (SMultiBlockBaseWidget *this,TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->OptionsBlockWidget).SharedReferenceCount.ReferenceController;
  (this->OptionsBlockWidget).Object = pSVar1;
  (this->OptionsBlockWidget).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetOwnerMultiBoxWidget @ 142835640

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBlockBaseWidget::SetOwnerMultiBoxWidget
          (SMultiBlockBaseWidget *this,TSharedRef<SMultiBoxWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->OwnerMultiBoxWidget).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->OwnerMultiBoxWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->OwnerMultiBoxWidget).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->OwnerMultiBoxWidget).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

