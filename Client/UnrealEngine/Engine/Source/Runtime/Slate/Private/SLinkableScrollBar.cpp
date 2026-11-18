// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// operator() @ 1428c73c0

void __thiscall
`SLinkableScrollBar::SetState'::__l8::<lambda_1>::operator()
          (void *this,TSharedPtr<SScrollBar,1> *param_1,FInvertiblePiecewiseLinearFunction *param_2,
          ELinkId param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  SScrollBar *pSVar4;
  SScrollBar *pSVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 == LeftLink) {
    fVar6 = FInvertiblePiecewiseLinearFunction::SolveForX(param_2,**(float **)this);
  }
  else {
    fVar6 = __real_bf800000;
    if (param_3 == RightLink) {
      fVar6 = FInvertiblePiecewiseLinearFunction::SolveForY(param_2,**(float **)this);
    }
  }
  if (**(float **)((longlong)this + 0x10) < **(float **)((longlong)this + 8)) {
    if ((param_1->Object == (SScrollBar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar7 = SScrollBar::DistanceFromBottom(param_1->Object);
    if ((float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3c23d70a)
    goto LAB_1428c7504;
  }
  if ((fVar6 <= __real_3f800000) && (0.0 <= fVar6)) {
    pSVar4 = TSharedPtr<SScrollBar,1>::operator->(param_1);
    pcVar2 = *(code **)(pSVar4->_padding_ + 0x250);
    pSVar5 = TSharedPtr<SScrollBar,1>::operator->(param_1);
    if (((pSVar5->Track).Object == (SScrollBarTrack *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*pcVar2)(pSVar4,fVar6,((pSVar5->Track).Object)->ThumbSizeFraction,1);
  }
LAB_1428c7504:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar1 = (param_2->SubFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LinkScrollBars @ 142958840

void __cdecl
SLinkableScrollBar::LinkScrollBars
          (TSharedRef<SLinkableScrollBar,1> *param_1,TSharedRef<SLinkableScrollBar,1> *param_2,
          TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SLinkableScrollBar *pSVar3;
  SLinkableScrollBar *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  pSVar3 = param_2->Object;
  pTVar9 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  pSVar4 = param_1->Object;
  if (&pSVar4->LinkedScrollBarRight == (TWeakPtr<SLinkableScrollBar,1> *)local_28) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar8 = pTVar9->_padding_;
        goto LAB_1429588c4;
      }
    }
  }
  else {
    pTVar5 = (pSVar4->LinkedScrollBarRight).WeakReferenceCount.ReferenceController;
    (pSVar4->LinkedScrollBarRight).Object = pSVar3;
    (pSVar4->LinkedScrollBarRight).WeakReferenceCount.ReferenceController = pTVar9;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar8 = pTVar5->_padding_;
        pTVar9 = pTVar5;
LAB_1429588c4:
        (**(code **)(lVar8 + 8))(pTVar9,1);
      }
    }
  }
  TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::operator=
            (&param_1->Object->ScrollSyncRateRight,param_3);
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  pSVar4 = param_2->Object;
  if (&pSVar4->LinkedScrollBarLeft == (TWeakPtr<SLinkableScrollBar,1> *)local_18) {
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_142958952;
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<int>)0x1) goto LAB_142958952;
    lVar8 = pTVar9->_padding_;
  }
  else {
    pTVar5 = (pSVar4->LinkedScrollBarLeft).WeakReferenceCount.ReferenceController;
    (pSVar4->LinkedScrollBarLeft).Object = pSVar3;
    (pSVar4->LinkedScrollBarLeft).WeakReferenceCount.ReferenceController = pTVar9;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) goto LAB_142958952;
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<int>)0x1) goto LAB_142958952;
    lVar8 = pTVar5->_padding_;
    pTVar9 = pTVar5;
  }
  (**(code **)(lVar8 + 8))(pTVar9,1);
LAB_142958952:
  TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::operator=
            (&param_2->Object->ScrollSyncRateLeft,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_3->Getter);
  pvVar6 = *(void **)&(param_3->Getter).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_3->Getter);
  pFVar7 = (param_3->Value).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// SetState @ 142999c70

void __thiscall
SLinkableScrollBar::SetState(SLinkableScrollBar *this,float param_1,float param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  float fVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  atomic<int> aVar7;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar8;
  FInvertiblePiecewiseLinearFunction *pFVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  float local_res10 [2];
  float local_b8 [2];
  TSharedPtr<SScrollBar,1> local_b0;
  TSharedPtr<SScrollBar,1> local_a0;
  FInvertiblePiecewiseLinearFunction local_90;
  FInvertiblePiecewiseLinearFunction local_80;
  float *local_70;
  float *local_68;
  float *local_60;
  
  if (((((this->LinkedScrollBarRight).Object == (SLinkableScrollBar *)0x0) ||
       (pTVar1 = (this->LinkedScrollBarRight).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) ||
     ((this->ScrollSyncRateRight).bIsSet == false)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((((this->LinkedScrollBarLeft).Object == (SLinkableScrollBar *)0x0) ||
      (pTVar1 = (this->LinkedScrollBarLeft).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) ||
     (((int)pTVar1->SharedReferenceCount < 1 || ((this->ScrollSyncRateLeft).bIsSet == false)))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  local_res10[0] = param_1;
  if ((bVar11) || (bVar10)) {
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar4 = __real_3f800000;
    local_b8[0] = *(float *)(this->_padding_ + 0x248);
    if (__real_3f800000 <= local_b8[0]) {
      local_b8[0] = __real_3f800000;
    }
    if (local_b8[0] <= 0.0) {
      local_b8[0] = 0.0;
    }
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar13 = fVar4 - (*(float *)(this->_padding_ + 0x24c) + *(float *)(this->_padding_ + 0x248));
    if (fVar4 <= fVar13) {
      fVar13 = fVar4;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    SScrollBar::SetState((SScrollBar *)this,local_res10[0],param_2,param_3);
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res8[0] = *(float *)(this->_padding_ + 0x248);
    if (fVar4 <= local_res8[0]) {
      local_res8[0] = fVar4;
    }
    if (local_res8[0] <= 0.0) {
      local_res8[0] = 0.0;
    }
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (__real_38d1b717 <
        (float)((uint)(local_res8[0] - local_b8[0]) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar12 = fVar4 - (*(float *)(this->_padding_ + 0x24c) + *(float *)(this->_padding_ + 0x248));
      if (fVar4 <= fVar12) {
        fVar12 = fVar4;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (__real_38d1b717 <
          (float)((uint)(fVar12 - fVar13) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        local_70 = local_res10;
        local_68 = local_res8;
        local_60 = local_b8;
        if (bVar10) {
          pTVar8 = TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::Get
                             (&this->ScrollSyncRateLeft);
          pFVar9 = FInvertiblePiecewiseLinearFunction::FInvertiblePiecewiseLinearFunction
                             (&local_90,pTVar8);
          local_b0.SharedReferenceCount.ReferenceController =
               (this->LinkedScrollBarLeft).WeakReferenceCount.ReferenceController;
          if (local_b0.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            local_b0.Object = (SScrollBar *)0x0;
          }
          else {
            aVar3 = (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            do {
              if (aVar3 == (atomic<int>)0x0) {
                local_b0.Object = (SScrollBar *)0x0;
                local_b0.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                goto LAB_142999f44;
              }
              LOCK();
              aVar7 = (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              bVar10 = aVar3 == aVar7;
              if (bVar10) {
                (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar3 + 1);
                aVar7 = aVar3;
              }
              UNLOCK();
              aVar3 = aVar7;
            } while (!bVar10);
            local_b0.Object = (SScrollBar *)(this->LinkedScrollBarLeft).Object;
            LOCK();
            (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
LAB_142999f44:
          FVar5.ReferenceController = local_b0.SharedReferenceCount.ReferenceController;
          `SLinkableScrollBar::SetState'::__l8::<lambda_1>::operator()
                    (&local_70,&local_b0,pFVar9,LeftLink);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
        }
        if (bVar11) {
          pTVar8 = TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::Get
                             (&this->ScrollSyncRateRight);
          pFVar9 = FInvertiblePiecewiseLinearFunction::FInvertiblePiecewiseLinearFunction
                             (&local_80,pTVar8);
          local_a0.SharedReferenceCount.ReferenceController =
               (this->LinkedScrollBarRight).WeakReferenceCount.ReferenceController;
          if (local_a0.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            local_a0.Object = (SScrollBar *)0x0;
          }
          else {
            aVar3 = (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            do {
              if (aVar3 == (atomic<int>)0x0) {
                local_a0.Object = (SScrollBar *)0x0;
                local_a0.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                goto LAB_142999fc4;
              }
              LOCK();
              aVar7 = (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              bVar11 = aVar3 == aVar7;
              if (bVar11) {
                (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar3 + 1);
                aVar7 = aVar3;
              }
              UNLOCK();
              aVar3 = aVar7;
            } while (!bVar11);
            local_a0.Object = (SScrollBar *)(this->LinkedScrollBarRight).Object;
            LOCK();
            (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
LAB_142999fc4:
          FVar5.ReferenceController = local_a0.SharedReferenceCount.ReferenceController;
          `SLinkableScrollBar::SetState'::__l8::<lambda_1>::operator()
                    (&local_70,&local_a0,pFVar9,RightLink);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
        }
      }
    }
  }
  else {
    SScrollBar::SetState((SScrollBar *)this,param_1,param_2,param_3);
  }
  return;
}

