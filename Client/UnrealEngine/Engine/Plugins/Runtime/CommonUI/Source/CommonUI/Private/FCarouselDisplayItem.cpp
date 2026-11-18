// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// FCarouselDisplayItem @ 14a7a9cb0

FCarouselDisplayItem * __thiscall
FCarouselDisplayItem::FCarouselDisplayItem(FCarouselDisplayItem *this)

{
  TSharedPtr<SFxWidget,1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SFxWidget,1> *pTVar3;
  FCurveSequence *pFVar4;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_400 [8];
  ForAnyElementType FStack_3f8;
  ulonglong local_3f0;
  SFxWidget *local_3e8;
  FSharedReferencer<1> local_3e0;
  FDestructionSentinel local_3d8;
  TSharedRef<SFxWidget,1> local_3c0;
  FCurveSequence local_3b0;
  FArguments local_340;
  
  this->SlideValueLeftLimit = -1.0;
  pTVar1 = &this->FXWidget;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->OpacityValue = 0.0;
  this->SlideValue = 0.0;
  this->DesiredOpacityValue = 0.0;
  this->DesiredSlideValue = 0.0;
  this->bTransition = false;
  this->bPeak = false;
  this->bFade = false;
  this->SlideValueRightLimit = 1.0;
  this->PeakValueLeftLimit = -0.05;
  this->PeakValueRightLimit = 0.05;
  this->OptimalSlideValue = 0.0;
  this->MoveSpeed = 5.0;
  this->PeakSpeed = 0.2;
  this->PeakDistance = 0.05;
  this->FadeRate = 2.0;
  pTVar1->Object = (SFxWidget *)0x0;
  (this->FXWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FCurveSequence::FCurveSequence(&this->SlideInCurve);
  (this->Visibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  pFVar2 = SFxWidget::FArguments::FArguments(&local_340);
  local_3f0 = 0;
  local_400 = (undefined1  [8])0x0;
  FStack_3f8.Data = (FScriptContainerElement *)0x0;
  (pFVar2->_IgnoreClipping).Value = false;
  (pFVar2->_IgnoreClipping).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_IgnoreClipping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_400);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_400,
             (FWriteAccessScope *)&local_3d8);
  if (((int)local_3f0 != 0) && (FStack_3f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f8,0,0,0x10);
    local_3f0 = local_3f0 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_3f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_400);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *)&local_3d8,"SFxWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h"
             ,0x3c,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar3 = TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *)&local_3d8,&local_3c0,
                      pFVar2);
  local_3e0.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  local_3e8 = pTVar3->Object;
  if (local_3e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<SFxWidget,1> *)&local_3e8) {
    pTVar1->Object = local_3e8;
    local_3e8 = (SFxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FXWidget).SharedReferenceCount,&local_3e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3d8.Accessor);
  SFxWidget::FArguments::~FArguments(&local_340);
  pFVar4 = FCurveSequence::FCurveSequence(&local_3b0);
  FCurveSequence::operator=(&this->SlideInCurve,pFVar4);
  FCurveSequence::~FCurveSequence(&local_3b0);
  FCurveSequence::AddCurve
            (&this->SlideInCurve,(FCurveHandle *)&local_3c0,__real_3dcccccd,__real_3f000000,Linear);
  return this;
}

// BlendWidget @ 14a7c2520

bool __thiscall
FCarouselDisplayItem::BlendWidget
          (FCarouselDisplayItem *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  FCurveSequence *this_00;
  SFxWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  TSharedRef<SWidget,1> local_48 [3];
  
  fVar6 = *param_1 * *param_3;
  fVar7 = *param_4 - *param_2;
  if (this->bPeak != false) {
    this_00 = &this->SlideInCurve;
    if (this->PeakDistance + __real_38d1b717 <
        (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      FCurveSequence::JumpToEnd(this_00);
      if ((this->FXWidget).Object == (SFxWidget *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pSVar1 = (this->FXWidget).Object;
      pTVar2 = (this->FXWidget).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pSVar1 == (SFxWidget *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48[0].Object = (SWidget *)pSVar1;
      local_48[0].SharedReferenceCount.ReferenceController = pTVar2;
      FCurveSequence::PlayReverse(this_00,local_48,false,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48[0].SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    fVar6 = FCurveSequence::GetLerp(this_00);
    if (fVar6 <= __real_3dcccccd) {
      fVar6 = __real_3dcccccd;
    }
    fVar6 = fVar6 * *param_3 * *param_1;
  }
  if ((float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *param_4 = *param_2;
    return false;
  }
  if (0.0 < fVar7) {
    fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
  }
  *param_4 = fVar6 + *param_4;
  return true;
}

// GetSlide @ 14a7e86e0

TVector2<double> * __thiscall
FCarouselDisplayItem::GetSlide(FCarouselDisplayItem *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = this->SlideValue;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
  return __return_storage_ptr__;
}

// SetOpacity @ 14a81a6e0

void __thiscall FCarouselDisplayItem::SetOpacity(FCarouselDisplayItem *this,float param_1)

{
  SFxWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->OpacityValue = param_1;
  if ((this->FXWidget).Object == (SFxWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_40._s_0.A = this->OpacityValue;
  pSVar1 = (this->FXWidget).Object;
  local_40._s_0.R = 1.0;
  local_40._s_0.G = 1.0;
  local_40._s_0.B = 1.0;
  local_30 = 1;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FLinearColor> *)&local_40._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetVisibility @ 14a81d020

void __thiscall FCarouselDisplayItem::SetVisibility(FCarouselDisplayItem *this,EVisibility param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<EVisibility> local_28;
  
  (this->Visibility).Value.Value = (uchar)param_1.Value.Value;
  if ((this->FXWidget).Object == (SFxWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.Getter._16_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  local_28.Value.Value.Value = param_1.Value.Value;
  SCompoundWidget::SetVisibility((SCompoundWidget *)(this->FXWidget).Object,&local_28);
  return;
}

// SetWidgetContent @ 14a81d0f0

void __thiscall
FCarouselDisplayItem::SetWidgetContent(FCarouselDisplayItem *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SFxWidget,1> *pTVar5;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_380 [8];
  ForAnyElementType FStack_378;
  ulonglong local_370;
  SFxWidget *local_368;
  FSharedReferencer<1> local_360;
  FDestructionSentinel local_358;
  TSharedRef<SFxWidget,1> local_340;
  FArguments local_330;
  
  pFVar4 = SFxWidget::FArguments::FArguments(&local_330);
  local_370 = 0;
  local_380 = (undefined1  [8])0x0;
  FStack_378.Data = (FScriptContainerElement *)0x0;
  (pFVar4->_IgnoreClipping).Value = false;
  (pFVar4->_IgnoreClipping).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_IgnoreClipping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_380);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_380,
             (FWriteAccessScope *)&local_358);
  if (((int)local_370 != 0) && (FStack_378.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_378.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_378,0,0,0x10);
    local_370 = local_370 & 0xffffffff00000000;
  }
  if (local_358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
  }
  if (FStack_378.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_378.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_380);
  (pFVar4->_VisualOffset).bIsSet = true;
  TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<FCarouselDisplayItem>
            ((TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
              *)&(pFVar4->_VisualOffset).Getter,this,(pmf_fa83f212)0x14a7e86e0);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *)&local_358,"SFxWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h"
             ,0xbd,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar5 = TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *)&local_358,&local_340,
                      pFVar4);
  local_360.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
  local_368 = pTVar5->Object;
  if (local_360.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_360.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_360.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->FXWidget != (TSharedPtr<SFxWidget,1> *)&local_368) {
    (this->FXWidget).Object = local_368;
    local_368 = (SFxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FXWidget).SharedReferenceCount,&local_360);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_340.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_358.Accessor);
  SFxWidget::FArguments::~FArguments(&local_330);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Tick @ 14a820d70

void __thiscall FCarouselDisplayItem::Tick(FCarouselDisplayItem *this,float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SFxWidget *pSVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10 [2];
  TSharedRef<SWidget,1> local_98;
  TSharedRef<SWidget,1> local_88 [7];
  
  fVar6 = __real_3dcccccd;
  uVar5 = __xmm_80000000800000008000000080000000;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_38d1b717;
  local_res10[0] = param_1;
  if (this->bTransition == false) {
    if (this->bPeak != false) {
      fVar10 = this->SlideValue - this->DesiredSlideValue;
      bVar7 = true;
      if (this->PeakDistance + __real_38d1b717 <
          (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        FCurveSequence::JumpToEnd(&this->SlideInCurve);
        if ((this->FXWidget).Object == (SFxWidget *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pTVar1 = (this->FXWidget).SharedReferenceCount.ReferenceController;
        pSVar2 = (this->FXWidget).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pSVar2 == (SFxWidget *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.Object = (SWidget *)pSVar2;
        local_98.SharedReferenceCount.ReferenceController = pTVar1;
        FCurveSequence::PlayReverse(&this->SlideInCurve,&local_98,false,0.0,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      fVar11 = FCurveSequence::GetLerp(&this->SlideInCurve);
      if (fVar11 <= fVar6) {
        fVar11 = fVar6;
      }
      fVar11 = fVar11 * this->PeakSpeed * local_res10[0];
      if ((float)((uint)fVar11 & uVar4) <= (float)((uint)fVar10 & uVar4)) {
        if (0.0 < fVar10) {
          fVar11 = (float)((uint)fVar11 ^ uVar5);
        }
        this->SlideValue = fVar11 + this->SlideValue;
      }
      else {
        bVar7 = false;
        this->SlideValue = this->DesiredSlideValue;
      }
      this->bPeak = bVar7;
    }
  }
  else {
    bVar7 = BlendWidget(this,local_res10,&this->DesiredSlideValue,&this->MoveSpeed,&this->SlideValue
                       );
    this->bTransition = bVar7;
  }
  if (this->bFade != false) {
    fVar10 = local_res10[0] * this->FadeRate;
    fVar11 = this->OpacityValue - this->DesiredOpacityValue;
    bVar7 = true;
    if (this->bPeak != false) {
      if (this->PeakDistance + fVar9 < (float)((uint)fVar11 & uVar4)) {
        FCurveSequence::JumpToEnd(&this->SlideInCurve);
        if ((this->FXWidget).Object == (SFxWidget *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pTVar1 = (this->FXWidget).SharedReferenceCount.ReferenceController;
        pSVar2 = (this->FXWidget).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pSVar2 == (SFxWidget *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88[0].Object = (SWidget *)pSVar2;
        local_88[0].SharedReferenceCount.ReferenceController = pTVar1;
        FCurveSequence::PlayReverse(&this->SlideInCurve,local_88,false,0.0,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88[0].SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      fVar9 = FCurveSequence::GetLerp(&this->SlideInCurve);
      if (fVar9 <= fVar6) {
        fVar9 = fVar6;
      }
      fVar10 = fVar9 * this->FadeRate * local_res10[0];
    }
    if ((float)((uint)fVar10 & uVar4) <= (float)((uint)fVar11 & uVar4)) {
      if (0.0 < fVar11) {
        fVar10 = (float)((uint)fVar10 ^ uVar5);
      }
      this->OpacityValue = fVar10 + this->OpacityValue;
    }
    else {
      bVar7 = false;
      this->OpacityValue = this->DesiredOpacityValue;
    }
    this->bFade = bVar7;
    SetOpacity(this,this->OpacityValue);
  }
  return;
}

