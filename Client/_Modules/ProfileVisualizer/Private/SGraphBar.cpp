// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 10

// ~SGraphBar @ 148d58a20

void __thiscall SGraphBar::~SGraphBar(SGraphBar *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeometryChanged);
  pvVar1 = *(void **)&(this->OnGeometryChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGeometryChanged);
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(this->Events).AllocatorInstance.Data,
             (this->Events).ArrayNum);
  pFVar2 = (this->Events).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ComputeDesiredSize @ 148d5de00

TVector2<double> * __thiscall
SGraphBar::ComputeDesiredSize
          (SGraphBar *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 8.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 16.0;
  return __return_storage_ptr__;
}

// Construct @ 148d662f0

void __thiscall SGraphBar::Construct(SGraphBar *this,FArguments *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FStyle *pFVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FName *pFVar6;
  FSlateBrush *pFVar7;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  int local_68;
  FDestructionSentinel local_60;
  FReadAccessScope local_48;
  
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGeometryChanged != &this->OnGeometryChanged) {
    local_78 = (undefined1  [8])0x0;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnGeometryChanged,&local_48);
    if ((*(int *)&(param_1->_OnGeometryChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnGeometryChanged).field_0x8, plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeometryChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    if ((local_68 != 0) && (local_70.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_70.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
      local_68 = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
  }
  FVar4.ReferenceController =
       FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController;
  pFVar3 = FProfileVisualizerStyle::StyleInstance.Object;
  if (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcVar2 = *(code **)(*(longlong *)pFVar3 + 0x50);
  pFVar6 = ::FName::FName(&local_res8,"ProfileVisualizer.Background");
  pFVar7 = (FSlateBrush *)(*pcVar2)(pFVar3,*pFVar6,0,0);
  this->BackgroundImage = pFVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  FVar4 = FProfileVisualizerStyle::StyleInstance.SharedReferenceCount;
  pFVar3 = FProfileVisualizerStyle::StyleInstance.Object;
  if (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcVar2 = *(code **)(*(longlong *)pFVar3 + 0x50);
  pFVar6 = ::FName::FName(&local_res10,"ProfileVisualizer.Mono");
  pFVar7 = (FSlateBrush *)(*pcVar2)(pFVar3,*pFVar6,0,0);
  this->FillImage = pFVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  FVar4 = FProfileVisualizerStyle::StyleInstance.SharedReferenceCount;
  pFVar3 = FProfileVisualizerStyle::StyleInstance.Object;
  if (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcVar2 = *(code **)(*(longlong *)pFVar3 + 0x50);
  pFVar6 = ::FName::FName(local_res18,"ProfileVisualizer.Selected");
  pFVar7 = (FSlateBrush *)(*pcVar2)(pFVar3,*pFVar6,0,0);
  this->SelectedImage = pFVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  this->LastHoveredEvent = -1;
  this->TotalTime = 1.0;
  this->Zoom = 1.0;
  this->Offset = 0.0;
  this->StartTime = 0.0;
  return;
}

// OnMouseButtonDown @ 148d86fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SGraphBar::OnMouseButtonDown
          (SGraphBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FVisualizerEvent *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  uint uVar10;
  TTransform2<float> *pTVar11;
  FReply *pFVar12;
  uint uVar13;
  FVisualizerEvent *pFVar14;
  FVisualizerEvent *pFVar15;
  longlong lVar16;
  FVisualizerEvent *pFVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float local_c8;
  float fStack_c4;
  TSharedPtr<FVisualizerEvent,1> local_b8;
  FReadAccessScope local_a8;
  TTransform2<float> local_90 [3];
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar18 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar18) {
    pTVar11 = Inverse<TTransform2<float>_>(local_90,&param_1->AccumulatedRenderTransform);
    dVar8 = __real_4008000000000000;
    dVar7 = __real_3ff0000000000000;
    pFVar14 = (FVisualizerEvent *)0x0;
    pFVar17 = (FVisualizerEvent *)0x0;
    uVar13 = 0;
    fStack_c4 = SUB84(param_2->ScreenSpacePosition,4);
    local_c8 = SUB84(param_2->ScreenSpacePosition,0);
    fVar22 = fStack_c4 * (pTVar11->M).M[1][0] + local_c8 * (pTVar11->M).M[0][0] +
             (pTVar11->Trans).field0_0x0._s_0.X;
    pFVar15 = pFVar14;
    if (0 < (this->Events).ArrayNum) {
      do {
        uVar10 = 0;
        if ((int)uVar13 < (this->Events).ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FReply *)(*pcVar6)();
          return pFVar12;
        }
        pFVar3 = (this->Events).AllocatorInstance.Data;
        pFVar4 = *(FVisualizerEvent **)
                  (pFVar3 + (longlong)&((atomic<int> *)&pFVar14->Duration)->field_0x0);
        pFVar15 = *(FVisualizerEvent **)((longlong)&pFVar14->Start + (longlong)pFVar3);
        if (pFVar4 != (FVisualizerEvent *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar4->Duration =
               (atomic<int>)((int)*(atomic<int> *)&pFVar4->Duration + 1);
          UNLOCK();
        }
        dVar20 = dVar7 / this->TotalTime;
        dVar19 = (pFVar15->Start - this->StartTime) * dVar20;
        local_c8 = SUB84(param_1->Size,0);
        dVar21 = dVar19 * (double)this->Zoom + (double)this->Offset;
        dVar19 = (dVar20 * *(double *)&pFVar15->Duration + dVar19) * (double)this->Zoom +
                 (double)this->Offset;
        if (dVar7 <= dVar21) {
          dVar21 = dVar7;
        }
        if (dVar7 <= dVar19) {
          dVar19 = dVar7;
        }
        if (dVar21 <= 0.0) {
          dVar21 = 0.0;
        }
        if (dVar19 <= 0.0) {
          dVar19 = 0.0;
        }
        if (0.0 < dVar19) {
          dVar19 = (dVar19 - dVar21) * (double)local_c8;
          if (dVar19 <= dVar8) {
            dVar19 = dVar8;
          }
          if (dVar21 < dVar7) {
            if (((float)((double)local_c8 * dVar21) <= fVar22) &&
               (fVar22 < (float)dVar19 + (float)((double)local_c8 * dVar21))) {
              if (pFVar4 != (FVisualizerEvent *)0x0) {
                LOCK();
                *(atomic<int> *)&pFVar4->Duration =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar4->Duration + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              pFVar15->IsSelected = true;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar4);
              pFVar17 = pFVar4;
              break;
            }
            pFVar15->IsSelected = false;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar4);
        uVar13 = uVar13 + 1;
        pFVar14 = (FVisualizerEvent *)&pFVar14->DurationMs;
        pFVar15 = pFVar17;
      } while ((int)uVar13 < (this->Events).ArrayNum);
    }
    uVar13 = uVar13 + 1;
    if ((int)uVar13 < (this->Events).ArrayNum) {
      lVar16 = (longlong)(int)uVar13 << 4;
      do {
        uVar10 = 0;
        if ((int)uVar13 < (this->Events).ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FReply *)(*pcVar6)();
          return pFVar12;
        }
        pFVar3 = (this->Events).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar16) == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FReply *)(*pcVar6)();
          return pFVar12;
        }
        pFVar3 = pFVar3 + lVar16;
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 0x10;
        *(undefined1 *)(*(longlong *)pFVar3 + 0x30) = 0;
      } while ((int)uVar13 < (this->Events).ArrayNum);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged,
               &local_a8);
    if (((*(int *)&(this->OnSelectionChanged).field_0x10 == 0) ||
        (plVar5 = *(longlong **)&(this->OnSelectionChanged).field_0x8, plVar5 == (longlong *)0x0))
       || (cVar9 = (**(code **)(*plVar5 + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      if (pFVar17 != (FVisualizerEvent *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar17->Duration =
             (atomic<int>)((int)*(atomic<int> *)&pFVar17->Duration + 1);
        UNLOCK();
      }
      local_b8.Object = pFVar15;
      local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
      TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->OnSelectionChanged,&local_b8,OnMouseClick);
    }
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar17);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 148d87e60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SGraphBar::OnMouseMove
          (SGraphBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TTransform2<float> *pTVar8;
  FReply *pFVar9;
  FText *pFVar10;
  uint uVar11;
  longlong lVar12;
  float local_98;
  float fStack_94;
  FText local_80;
  TTransform2<float> local_70 [2];
  
  pTVar8 = Inverse<TTransform2<float>_>(local_70,&param_1->AccumulatedRenderTransform);
  uVar11 = 0;
  fStack_94 = SUB84(param_2->ScreenSpacePosition,4);
  local_80.TextData.Reference = *(ITextData **)&param_1->Size;
  local_98 = SUB84(param_2->ScreenSpacePosition,0);
  uVar7 = 0xffffffff;
  if (0 < (this->Events).ArrayNum) {
    lVar12 = 0;
    dVar5 = (double)(((fStack_94 * (pTVar8->M).M[1][0] + local_98 * (pTVar8->M).M[0][0] +
                      (pTVar8->Trans).field0_0x0._s_0.X) / local_80.TextData.Reference._0_4_ -
                     this->Offset) / this->Zoom);
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->Events).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar4)();
        return pFVar9;
      }
      pFVar1 = (this->Events).AllocatorInstance.Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar12 + 8);
      pdVar3 = *(double **)(pFVar1 + lVar12);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pdVar3 == (double *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar4)();
        return pFVar9;
      }
      if ((*pdVar3 <= dVar5) && (dVar5 < *pdVar3 + pdVar3[1])) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        uVar7 = uVar11;
        break;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
      uVar7 = 0xffffffff;
    } while ((int)uVar11 < (this->Events).ArrayNum);
  }
  if (uVar7 != this->LastHoveredEvent) {
    if (uVar7 == 0xffffffff) {
      pFVar10 = FText::GetEmpty();
      SWidget::SetToolTipText((SWidget *)this,pFVar10);
    }
    else {
      uVar11 = 0;
      if ((int)uVar7 < (this->Events).ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar4)();
        return pFVar9;
      }
      pFVar1 = (this->Events).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x10) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar4)();
        return pFVar9;
      }
      pFVar10 = FText::FromString(&local_80,
                                  (FString *)
                                  (*(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x10) + 0x20));
      SWidget::SetToolTipText((SWidget *)this,pFVar10);
      if ((FDeprecateSlateVector2D)local_80.TextData.Reference != (FDeprecateSlateVector2D)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
    }
    this->LastHoveredEvent = uVar7;
  }
  SWidget::OnMouseMove((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPaint @ 148d88530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SGraphBar::OnPaint(SGraphBar *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                  FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  FStyle *pFVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  FSlateBrush **ppFVar16;
  FLinearColor_u_0 *pFVar17;
  ESlateDrawEffect EVar18;
  longlong lVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined1 auStackY_1d8 [32];
  float local_1a8;
  undefined4 uStack_1a4;
  FLinearColor_u_0 local_178;
  TVector2<float>_u_0_s_0 local_164;
  FName local_158;
  undefined1 local_150 [8];
  FLinearColor_u_0 local_148;
  FLinearColor_u_0 local_138 [2];
  ulonglong local_118;
  TVector2<float>_u_0 local_110;
  float local_108;
  undefined8 local_104;
  undefined8 local_fc;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined8 local_e4;
  byte local_dc;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  FDeprecateSlateVector2D local_c4;
  float local_bc [2];
  float afStack_b4 [2];
  TVector2<float>_u_0 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((!param_7) || (bVar10 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar10 = false;
  }
  local_148._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
  local_148._8_8_ = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
  EVar18 = DisabledEffect;
  if (bVar10) {
    EVar18 = None;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    SelectedBarColor = FLinearColor::White;
    _Init_thread_footer(&::_TSS0);
  }
  FVar9.ReferenceController =
       FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController;
  pFVar8 = FProfileVisualizerStyle::StyleInstance.Object;
  if (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar8 == (FStyle *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    iVar11 = (*pcVar4)();
    return iVar11;
  }
  pcVar4 = *(code **)(*(longlong *)pFVar8 + 0x30);
  pFVar13 = ::FName::FName(&local_158,"ProfileVisualizer.ProgressBar.BorderPadding");
  (*pcVar4)(pFVar8,local_150,*pFVar13,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  local_d8 = (param_2->AbsolutePosition).field0_0x0;
  local_d0 = param_2->Scale;
  local_ac = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_c4 = param_2->Size;
  uVar20 = param_5 + 1;
  local_bc = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_b4 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_a4 = param_2->bHasRenderTransform * '\x02' | local_a4 & 0xfc;
  local_cc = 0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_d8._s_0,this->BackgroundImage,EVar18,
             (FLinearColor *)&local_148._s_0);
  dVar7 = __real_4008000000000000;
  fVar6 = __real_3b808081;
  dVar5 = __real_3ff0000000000000;
  uVar15 = 0;
  if (0 < (this->Events).ArrayNum) {
    lVar19 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar15 < (this->Events).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        iVar11 = (*pcVar4)();
        return iVar11;
      }
      pFVar1 = (this->Events).AllocatorInstance.Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar19 + 8);
      pdVar3 = *(double **)(pFVar1 + lVar19);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      dVar22 = dVar5 / this->TotalTime;
      dVar21 = (*pdVar3 - this->StartTime) * dVar22;
      local_1a8 = SUB84(param_2->Size,0);
      dVar23 = dVar21 * (double)this->Zoom + (double)this->Offset;
      dVar21 = (dVar22 * pdVar3[1] + dVar21) * (double)this->Zoom + (double)this->Offset;
      if (dVar5 <= dVar23) {
        dVar23 = dVar5;
      }
      if (dVar5 <= dVar21) {
        dVar21 = dVar5;
      }
      if (dVar23 <= 0.0) {
        dVar23 = 0.0;
      }
      if (dVar21 <= 0.0) {
        dVar21 = 0.0;
      }
      fVar24 = (float)((double)local_1a8 * dVar23);
      if (0.0 < dVar21) {
        dVar21 = (dVar21 - dVar23) * (double)local_1a8;
        if (dVar21 <= dVar7) {
          dVar21 = dVar7;
        }
        if (dVar23 < dVar5) {
          if (*(char *)(pdVar3 + 6) == '\0') {
            pFVar17 = &local_178;
            uVar14 = (ulonglong)*(uint *)((longlong)pdVar3 + 0x34) % 0x1e;
            local_178._s_0.R =
                 FLinearColor::sRGBToLinearTable[ColorPalette[uVar14].field0_0x0._s_0.R];
            local_178._s_0.G =
                 FLinearColor::sRGBToLinearTable[ColorPalette[uVar14].field0_0x0._s_0.G];
            local_178._s_0.B =
                 FLinearColor::sRGBToLinearTable[ColorPalette[uVar14].field0_0x0._s_0.B];
            local_178._s_0.A = (float)ColorPalette[uVar14].field0_0x0._s_0.A * fVar6;
          }
          else {
            pFVar17 = local_138;
            local_138[0] = SelectedBarColor.field0_0x0;
          }
          ppFVar16 = &this->SelectedImage;
          if (*(char *)(pdVar3 + 6) == '\0') {
            ppFVar16 = &this->FillImage;
          }
          local_108 = param_2->Scale;
          local_164 = (param_2->AbsolutePosition).field0_0x0._s_0;
          local_ec = (param_2->AccumulatedRenderTransform).M.M[1][0];
          local_f0 = (param_2->AccumulatedRenderTransform).M.M[0][1];
          local_e8 = (param_2->AccumulatedRenderTransform).M.M[1][1];
          local_f4 = (param_2->AccumulatedRenderTransform).M.M[0][0];
          uStack_1a4 = SUB84(param_2->Size,4);
          local_118 = (ulonglong)(uint)fVar24;
          local_104 = 0;
          local_110._s_0.Y = local_108 * 0.0 + local_164.Y;
          local_110._s_0.X = fVar24 * local_108 + local_164.X;
          local_fc = CONCAT44(uStack_1a4,(float)dVar21);
          local_e4 = CONCAT44(local_e8 * 0.0 + fVar24 * local_f0 +
                              (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y,
                              local_ec * 0.0 + fVar24 * local_f4 +
                              (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
          local_dc = param_2->bHasRenderTransform * '\x02' | local_dc & 0xfc;
          FSlateDrawElement::MakeBox
                    (param_4,uVar20,(FPaintGeometry *)&local_110._s_0,*ppFVar16,EVar18,
                     (FLinearColor *)&pFVar17->_s_0);
          uVar20 = uVar20 + 1;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + 0x10;
    } while ((int)uVar15 < (this->Events).ArrayNum);
  }
  return uVar20 - 1;
}

// SetEvents @ 148d91270

void __thiscall
SGraphBar::SetEvents
          (SGraphBar *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1,double param_2
          ,double param_3)

{
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Events,param_1);
  this->StartTime = param_2;
  this->TotalTime = param_3;
  return;
}

// SetOffset @ 148d913d0

void __thiscall SGraphBar::SetOffset(SGraphBar *this,float param_1)

{
  this->Offset = param_1;
  return;
}

// SetZoom @ 148d91890

void __thiscall SGraphBar::SetZoom(SGraphBar *this,float param_1)

{
  if (param_1 <= __real_3f800000) {
    param_1 = __real_3f800000;
  }
  this->Zoom = param_1;
  return;
}

// Tick @ 148d927a0

void __thiscall SGraphBar::Tick(SGraphBar *this,FGeometry *param_1,double param_2,float param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  FDeprecateSlateVector2D FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  FReadAccessScope local_a8;
  FDeprecateSlateVector2D local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeometryChanged,
             &local_a8);
  if (((*(int *)&(this->OnGeometryChanged).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnGeometryChanged).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(*plVar2 + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    if (((((*(float *)&(this->LastGeometry).Size != *(float *)&param_1->Size) ||
          (*(float *)&(this->LastGeometry).Size.field_0x4 != *(float *)&(param_1->Size).field_0x4))
         || (((this->LastGeometry).AbsolutePosition.field0_0x0._s_0.X !=
              (param_1->AbsolutePosition).field0_0x0._s_0.X ||
             (((this->LastGeometry).AbsolutePosition.field0_0x0._s_0.Y !=
               (param_1->AbsolutePosition).field0_0x0._s_0.Y ||
              ((this->LastGeometry).Position.field0_0x0._s_0.X !=
               (param_1->Position).field0_0x0._s_0.X)))))) ||
        ((this->LastGeometry).Position.field0_0x0._s_0.Y != (param_1->Position).field0_0x0._s_0.Y))
       || ((this->LastGeometry).Scale != param_1->Scale)) {
      FVar3 = param_1->Size;
      uVar4 = *(undefined8 *)&param_1->Scale;
      uVar5 = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
      uVar6 = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
      uVar7 = *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
      uVar8 = *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
      uVar1 = *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
      ;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeometryChanged,
                 &local_a8);
      if ((*(int *)&(this->OnGeometryChanged).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&(this->OnGeometryChanged).field_0x8, plVar2 != (longlong *)0x0)) {
        local_88 = FVar3;
        uStack_80 = uVar4;
        local_78 = uVar5;
        uStack_70 = uVar6;
        local_68 = uVar7;
        uStack_60 = uVar8;
        local_58 = uVar1;
        (**(code **)(*plVar2 + 0x68))(plVar2,&local_88);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      FGeometry::operator=(&this->LastGeometry,param_1);
    }
  }
  return;
}

