// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 5

// ~SDraggableBox @ 142d672d0

void __thiscall UE::ToolWidgets::SDraggableBox::~SDraggableBox(SDraggableBox *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserDraggedToNewPositionDelegate)
  ;
  pvVar3 = *(void **)&(this->OnUserDraggedToNewPositionDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserDraggedToNewPositionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsDraggableAttr).Getter);
  pvVar3 = *(void **)&(this->IsDraggableAttr).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsDraggableAttr).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InnerWidget).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->DraggableOverlayWeak).WeakReferenceCount.ReferenceController;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 142d7f590

void __thiscall
UE::ToolWidgets::SDraggableBox::Construct
          (SDraggableBox *this,FArguments *param_1,
          TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  (this->DraggableOverlayWeak).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->DraggableOverlayWeak).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->DraggableOverlayWeak).WeakReferenceCount.ReferenceController;
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
    (this->DraggableOverlayWeak).WeakReferenceCount.ReferenceController = pTVar3;
  }
  local_10.ReferenceController = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController
  ;
  local_18 = (param_1->_Content).Widget.Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->InnerWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->InnerWidget).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InnerWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  (this->IsDraggableAttr).Value = (param_1->_IsDraggable).Value;
  (this->IsDraggableAttr).bIsSet = (param_1->_IsDraggable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->IsDraggableAttr).Getter,&(param_1->_IsDraggable).Getter);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnUserDraggedToNewPositionDelegate,&param_1->_OnUserDraggedToNewPosition);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// OnDragDetected @ 142dbcfb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ToolWidgets::SDraggableBox::OnDragDetected
          (SDraggableBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  int *piVar1;
  int iVar2;
  EHorizontalAlignment EVar3;
  SDraggableBoxOverlay *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  longlong *plVar7;
  code *pcVar8;
  longlong lVar9;
  atomic<int> aVar10;
  atomic<int> aVar11;
  bool *pbVar12;
  TSharedRef<SWidget,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FReply *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  atomic<int> *paVar17;
  FDragDropOperation *pFVar18;
  bool bVar19;
  float fVar20;
  undefined8 uStack_f0;
  FDeprecateSlateVector2D local_e8;
  TSharedRef<SWidget,1> local_e0;
  FReply local_d0;
  
  pTVar16 = (this->DraggableOverlayWeak).WeakReferenceCount.ReferenceController;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    aVar10 = pTVar16->SharedReferenceCount;
    do {
      if (aVar10 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dbcff1;
      }
      LOCK();
      aVar11 = pTVar16->SharedReferenceCount;
      bVar19 = aVar10 == aVar11;
      if (bVar19) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
        aVar11 = aVar10;
      }
      UNLOCK();
      aVar10 = aVar11;
    } while (!bVar19);
    pSVar4 = (this->DraggableOverlayWeak).Object;
    if ((pSVar4 != (SDraggableBoxOverlay *)0x0) &&
       (pbVar12 = TAttribute<bool>::Get(&this->IsDraggableAttr), *pbVar12 != false)) {
      EVar3 = pSVar4->HorizontalAlignment;
      lVar9 = *(longlong *)&pSVar4->HorizontalAlignment;
      uStack_f0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if ((pSVar4->Container).Object != (SBox *)0x0) {
        if (EVar3 == HAlign_Left) {
          uStack_f0._0_4_ = (pSVar4->Padding).Left;
LAB_142dbd091:
          uStack_f0._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        }
        else if (EVar3 == HAlign_Right) {
          uStack_f0._0_4_ = (pSVar4->Padding).Right;
          goto LAB_142dbd091;
        }
        if (pSVar4->VerticalAlignment == VAlign_Top) {
          fVar20 = (pSVar4->Padding).Top;
        }
        else {
          if (pSVar4->VerticalAlignment != VAlign_Bottom) goto LAB_142dbd0b9;
          fVar20 = (pSVar4->Padding).Bottom;
        }
        uStack_f0._4_4_ = fVar20;
      }
LAB_142dbd0b9:
      local_e8 = param_2->ScreenSpacePosition;
      pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e0);
      pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
      pSVar6 = pTVar13->Object;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        paVar17 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar17 = &pTVar5->SharedReferenceCount;
        LOCK();
        *paVar17 = (atomic<int>)((int)*paVar17 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      pTVar14 = ::operator_new(0x78);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        pFVar18 = (FDragDropOperation *)&DAT_00000010;
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
LAB_142dbd1be:
        if (((*(longlong *)&pFVar18->_padding_ == 0) || (pFVar18->_padding_ == 0)) ||
           (*(int *)(pFVar18->_padding_ + 8) < 1)) {
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(FDragDropOperation **)&pFVar18->_padding_ = pFVar18;
          if (pTVar14 != (TReferenceControllerBase<1> *)pFVar18->_padding_) {
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar7 = (longlong *)pFVar18->_padding_;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
            pFVar18->_padding_ = (longlong)pTVar14;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
      }
      else {
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFDraggableBoxUIDragOperation_DraggableBoxDetail_ToolWidgets_UE___00_SharedPointerInternals__6B_
        ;
        if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
          FDragDropOperation::FDragDropOperation((FDragDropOperation *)(pTVar14 + 1));
          pTVar14[1]._padding_ =
               (longlong)&___7FDraggableBoxUIDragOperation_DraggableBoxDetail_ToolWidgets_UE__6B_;
          pTVar14[5]._padding_ = (longlong)pSVar6;
          pTVar14[5].SharedReferenceCount = (atomic<int>)0x0;
          pTVar14[5].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          LOCK();
          *paVar17 = (atomic<int>)((int)*paVar17 + 1);
          UNLOCK();
          FDragDropOperation::FDragDropOperation((FDragDropOperation *)(pTVar14 + 1));
          pTVar14[1]._padding_ =
               (longlong)&___7FDraggableBoxUIDragOperation_DraggableBoxDetail_ToolWidgets_UE__6B_;
          pTVar14[5]._padding_ = (longlong)pSVar6;
          *(TReferenceControllerBase<1> **)&pTVar14[5].SharedReferenceCount = pTVar5;
          LOCK();
          pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar14[6]._padding_ = lVar9;
        *(TVector2<float>_u_0 *)&pTVar14[6].SharedReferenceCount = uStack_f0;
        pTVar14[7]._padding_ = (longlong)local_e8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        pFVar18 = (FDragDropOperation *)(pTVar14 + 1);
        if (pFVar18 != (FDragDropOperation *)0x0) goto LAB_142dbd1be;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar19) {
          pcVar8 = (code *)swi(3);
          pFVar15 = (FReply *)(*pcVar8)();
          return pFVar15;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      FReply::FReply(&local_d0,true);
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      uStack_f0 = (TVector2<float>_u_0)pTVar14;
      local_d0.DragDropContent.Object = pFVar18;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_d0.DragDropContent.SharedReferenceCount,(FSharedReferencer<1> *)&uStack_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)uStack_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      FReply::FReply(__return_storage_ptr__,&local_d0);
      FReply::~FReply(&local_d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      goto LAB_142dbcffb;
    }
  }
LAB_142dbcff1:
  FReply::FReply(__return_storage_ptr__,false);
LAB_142dbcffb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return __return_storage_ptr__;
}

// OnDragUpdate @ 142dbdaa0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::ToolWidgets::SDraggableBox::OnDragUpdate
          (SDraggableBox *this,FPointerEvent *param_1,FDragInfo *param_2,bool param_3)

{
  EHorizontalAlignment EVar1;
  EVerticalAlignment EVar2;
  SDraggableBoxOverlay *this_00;
  SBox *pSVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  bool *pbVar6;
  FGeometry *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  
  pTVar8 = (this->DraggableOverlayWeak).WeakReferenceCount.ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142dbdaf0;
  aVar4 = pTVar8->SharedReferenceCount;
  do {
    if (aVar4 == (atomic<int>)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_142dbdaf0;
    }
    LOCK();
    aVar5 = pTVar8->SharedReferenceCount;
    bVar9 = aVar4 == aVar5;
    if (bVar9) {
      pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar5 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar5;
  } while (!bVar9);
  this_00 = (this->DraggableOverlayWeak).Object;
  if ((this_00 == (SDraggableBoxOverlay *)0x0) ||
     (pbVar6 = TAttribute<bool>::Get(&this->IsDraggableAttr), *pbVar6 == false)) goto LAB_142dbdaf0;
  pFVar7 = SWidget::GetTickSpaceGeometry((SWidget *)this_00);
  EVar1 = param_2->OriginalHorizontalAlignment;
  local_res8._0_4_ = SUB84(pFVar7->Size,0);
  local_res8._4_4_ = SUB84(pFVar7->Size,4);
  fVar11 = (float)local_res8._4_4_ /
           ((float)(undefined4)local_res8 * (pFVar7->AccumulatedRenderTransform).M.M[0][1] +
           (float)local_res8._4_4_ * (pFVar7->AccumulatedRenderTransform).M.M[1][1]);
  fVar10 = (float)(undefined4)local_res8 /
           ((float)local_res8._4_4_ * (pFVar7->AccumulatedRenderTransform).M.M[1][0] +
           (float)(undefined4)local_res8 * (pFVar7->AccumulatedRenderTransform).M.M[0][0]);
  local_res8 = (param_2->OriginalAlignmentOffset).field0_0x0._s_0;
  fVar10 = (*(float *)&param_1->ScreenSpacePosition -
           (param_2->OriginalMousePosition).field0_0x0._s_0.X) * fVar10;
  fVar11 = (*(float *)&(param_1->ScreenSpacePosition).field_0x4 -
           (param_2->OriginalMousePosition).field0_0x0._s_0.Y) * fVar11;
  if (EVar1 == HAlign_Left) {
    fVar10 = (float)(undefined4)local_res8 + fVar10;
LAB_142dbdc28:
    local_res8._0_4_ = fVar10;
  }
  else if (EVar1 == HAlign_Right) {
    fVar10 = (float)(undefined4)local_res8 - fVar10;
    goto LAB_142dbdc28;
  }
  if (param_2->OriginalVerticalAlignment == VAlign_Top) {
    fVar11 = (float)local_res8._4_4_ + fVar11;
LAB_142dbdc52:
    local_res8._4_4_ = fVar11;
  }
  else if (param_2->OriginalVerticalAlignment == VAlign_Bottom) {
    fVar11 = (float)local_res8._4_4_ - fVar11;
    goto LAB_142dbdc52;
  }
  pSVar3 = (this_00->Container).Object;
  this_00->HorizontalAlignment = EVar1;
  if (pSVar3 != (SBox *)0x0) {
    SBox::SetHAlign(pSVar3,EVar1);
  }
  pSVar3 = (this_00->Container).Object;
  EVar2 = param_2->OriginalVerticalAlignment;
  this_00->VerticalAlignment = EVar2;
  if (pSVar3 != (SBox *)0x0) {
    SBox::SetVAlign(pSVar3,EVar2);
  }
  SDraggableBoxOverlay::SetBoxAlignmentOffset(this_00,(TVector2<float> *)&local_res8,true);
  if (param_3) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnUserDraggedToNewPositionDelegate);
  }
LAB_142dbdaf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// OnMouseButtonDown @ 142dc26f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ToolWidgets::SDraggableBox::OnMouseButtonDown
          (SDraggableBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FReply *pFVar4;
  TSharedRef<SWidget,1> local_e8;
  FKey local_d8;
  FReply local_c0;
  
  FReply::FReply(&local_c0,true);
  local_d8.KeyName = EKeys::LeftMouseButton.KeyName;
  local_d8.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
  local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8.Object = pSVar2;
  local_e8.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar4 = FReply::DetectDrag(&local_c0,&local_e8,&local_d8);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

