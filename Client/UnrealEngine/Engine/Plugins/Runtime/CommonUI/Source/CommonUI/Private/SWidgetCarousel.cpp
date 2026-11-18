// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// ~SWidgetCarousel<UPanelSlot_*> @ 14a7b0640

void __thiscall
SWidgetCarousel<UPanelSlot_*>::~SWidgetCarousel<UPanelSlot_*>(SWidgetCarousel<UPanelSlot_*> *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetDisplayBox).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPageChanged);
  pvVar1 = *(void **)&(this->OnPageChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPageChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget);
  pvVar1 = *(void **)&(this->OnGenerateWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateWidget);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RightCarouselWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CenterCarouselWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LeftCarouselWidget).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14a7c4e80

void __thiscall
SWidgetCarousel<UPanelSlot_*>::Construct(SWidgetCarousel<UPanelSlot_*> *this,FArguments *param_1)

{
  TSharedPtr<FCarouselDisplayItem,1> *this_00;
  TSharedPtr<FCarouselDisplayItem,1> *this_01;
  TSharedPtr<FCarouselDisplayItem,1> *this_02;
  int iVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  SHorizontalBox *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  float fVar7;
  bool bVar8;
  float *pfVar9;
  FCarouselDisplayItem *pFVar10;
  FArguments *pFVar11;
  TSharedRef<SHorizontalBox,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  TRawPtrProxy<FCarouselDisplayItem> local_res18;
  TRawPtrProxy<FCarouselDisplayItem> local_res20;
  undefined1 local_318 [8];
  ForAnyElementType local_310;
  int local_308;
  SHorizontalBox *local_300;
  TReferenceControllerBase<1> *pTStack_2f8;
  TRawPtrProxy<FCarouselDisplayItem> local_2f0;
  FName local_2e8;
  FMemScope local_2e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2d8;
  FDestructionSentinel local_2c0;
  SHorizontalBox *local_2a8;
  TReferenceControllerBase<1> *pTStack_2a0;
  TSharedRef<SHorizontalBox,1> local_298;
  FReadAccessScope local_288;
  FReadAccessScope local_270;
  FArguments local_258;
  
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_318 = (undefined1  [8])0x0;
    local_310.Data = (FScriptContainerElement *)0x0;
    local_308 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_288);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar2 != (longlong *)0x0))
    {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_318);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_288);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_318);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_318,
               (FWriteAccessScope *)&local_2c0);
    if ((local_308 != 0) && (local_310.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_310.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_310,0,0,0x10);
      local_308 = 0;
    }
    if (local_2c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
    }
    if (local_310.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_318);
  }
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnPageChanged,&param_1->_OnPageChanged);
  this->ItemsSource = param_1->_WidgetItemsSource;
  this->WidgetIndex = 0;
  pfVar9 = TAttribute<float>::Get(&param_1->_MoveSpeed);
  this->MoveSpeed = *pfVar9;
  pfVar9 = TAttribute<float>::Get(&param_1->_SlideValueLeftLimit);
  this->SlideValueLeftLimit = *pfVar9;
  pfVar9 = TAttribute<float>::Get(&param_1->_SlideValueRightLimit);
  this->SlideValueRightLimit = *pfVar9;
  pfVar9 = TAttribute<float>::Get(&param_1->_PeakValueLeftLimit);
  this->PeakValueLeftLimit = *pfVar9;
  pfVar9 = TAttribute<float>::Get(&param_1->_PeakValueRightLimit);
  this->PeakValueRightLimit = *pfVar9;
  pfVar9 = TAttribute<float>::Get(&param_1->_FadeRate);
  this->FadeRate = *pfVar9;
  pFVar10 = ::operator_new(0xd0);
  if (pFVar10 == (FCarouselDisplayItem *)0x0) {
    local_res18.Object = (FCarouselDisplayItem *)0x0;
  }
  else {
    local_res18.Object = FCarouselDisplayItem::FCarouselDisplayItem(pFVar10);
    if ((((local_res18.Object != (FCarouselDisplayItem *)0x0) &&
         ((local_res18.Object)->_padding_ != 0)) && ((local_res18.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res18.Object)->_padding_ + 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  this_00 = &this->LeftCarouselWidget;
  TSharedPtr<FCarouselDisplayItem,1>::operator=<FCarouselDisplayItem>(this_00,&local_res18);
  pFVar10 = ::operator_new(0xd0);
  if (pFVar10 == (FCarouselDisplayItem *)0x0) {
    local_res20.Object = (FCarouselDisplayItem *)0x0;
  }
  else {
    local_res20.Object = FCarouselDisplayItem::FCarouselDisplayItem(pFVar10);
    if (((local_res20.Object != (FCarouselDisplayItem *)0x0) &&
        ((local_res20.Object)->_padding_ != 0)) &&
       (((local_res20.Object)->_padding_ != 0 && (0 < *(int *)((local_res20.Object)->_padding_ + 8))
        ))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  this_01 = &this->CenterCarouselWidget;
  TSharedPtr<FCarouselDisplayItem,1>::operator=<FCarouselDisplayItem>(this_01,&local_res20);
  pFVar10 = ::operator_new(0xd0);
  if (pFVar10 == (FCarouselDisplayItem *)0x0) {
    local_2f0.Object = (FCarouselDisplayItem *)0x0;
  }
  else {
    local_2f0.Object = FCarouselDisplayItem::FCarouselDisplayItem(pFVar10);
    if (((local_2f0.Object != (FCarouselDisplayItem *)0x0) && ((local_2f0.Object)->_padding_ != 0))
       && (((local_2f0.Object)->_padding_ != 0 && (0 < *(int *)((local_2f0.Object)->_padding_ + 8)))
          )) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  this_02 = &this->RightCarouselWidget;
  TSharedPtr<FCarouselDisplayItem,1>::operator=<FCarouselDisplayItem>(this_02,&local_2f0);
  if (this_01->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar7 = __real_3f800000;
  FCarouselDisplayItem::SetOpacity(this_01->Object,__real_3f800000);
  if (this_01->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_01->Object->SlideValue = 0.0;
  if (this_01->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_01->Object->MoveSpeed = this->MoveSpeed;
  if (this_01->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_01->Object->FadeRate = this->FadeRate;
  if (this_00->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FCarouselDisplayItem::SetOpacity(this_00->Object,fVar7);
  if (this_00->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00->Object->SlideValue = this->SlideValueLeftLimit;
  if (this_00->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00->Object->MoveSpeed = this->MoveSpeed;
  if (this_00->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00->Object->FadeRate = this->FadeRate;
  if (this_02->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FCarouselDisplayItem::SetOpacity(this_02->Object,fVar7);
  if (this_02->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_02->Object->SlideValue = this->SlideValueRightLimit;
  if (this_02->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_02->Object->MoveSpeed = this->MoveSpeed;
  if (this_02->Object == (FCarouselDisplayItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_02->Object->FadeRate = this->FadeRate;
  pFVar11 = SHorizontalBox::FArguments::FArguments(&local_258);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e0,&local_2e8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2d8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h"
             ,0x1f9,local_res8);
  FMemScope::~FMemScope(&local_2e0);
  FLLMScope::~FLLMScope(local_res10);
  if (local_2d8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2a8 = (this->WidgetDisplayBox).Object;
  pTStack_2a0 = (this->WidgetDisplayBox).SharedReferenceCount.ReferenceController;
  (this->WidgetDisplayBox).Object = local_2d8._Widget.Object;
  (this->WidgetDisplayBox).SharedReferenceCount.ReferenceController =
       local_2d8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a0);
  pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2d8,&local_298,pFVar11);
  plVar2 = &this->_padding_;
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar12->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar2);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar2);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar4;
  this->_padding_ = (longlong)pTVar3;
  local_300 = pSVar4;
  pTStack_2f8 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  GenerateCurrentWidgets(this);
  iVar1 = this->WidgetIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPageChanged,
             &local_270);
  if ((*(int *)&(this->OnPageChanged).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnPageChanged).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_270);
  return;
}

// GenerateCurrentWidgets @ 14a7df340

void __thiscall
SWidgetCarousel<UPanelSlot_*>::GenerateCurrentWidgets(SWidgetCarousel<UPanelSlot_*> *this)

{
  TDelegate<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy> *this_00;
  TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 uVar2;
  FCarouselDisplayItem *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  EVisibility EVar10;
  int iVar11;
  TSharedRef<SWidget,1> *pTVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  SWidget *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TSharedRef<SWidget,1> local_b8;
  TSharedRef<SWidget,1> local_a8;
  TSharedRef<SWidget,1> local_98;
  TSharedRef<SWidget,1> local_88;
  TSharedRef<SWidget,1> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  pTVar1 = this->ItemsSource;
  iVar14 = pTVar1->ArrayNum;
  if (0 < iVar14) {
    iVar11 = this->WidgetIndex;
    if (iVar14 <= iVar11) {
      iVar11 = iVar11 % iVar14;
      this->WidgetIndex = iVar11;
      iVar14 = pTVar1->ArrayNum;
    }
    uVar13 = iVar11 - 1;
    plVar9 = (longlong *)0x0;
    this_00 = &this->OnGenerateWidget;
    uVar15 = 0;
    if (((int)uVar13 < 0) && (uVar13 = iVar14 - 1, (int)uVar13 < 0)) {
      uVar13 = 0;
    }
    uVar7 = uVar15;
    if ((int)uVar13 < iVar14) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
    plVar8 = plVar9;
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar8 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_a8,uVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    uVar7 = this->WidgetIndex + 1;
    uVar13 = 0;
    if ((int)uVar7 < this->ItemsSource->ArrayNum) {
      uVar13 = uVar7;
    }
    uVar7 = uVar15;
    if ((int)uVar13 < pTVar1->ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
    plVar8 = plVar9;
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar8 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_b8,uVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    uVar13 = this->WidgetIndex;
    uVar7 = 0;
    if ((int)uVar13 < pTVar1->ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar9 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_c8,uVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if ((local_a8.Object != local_c8) && (local_b8.Object != local_a8.Object)) {
      uVar15 = 1;
    }
    bVar5 = local_b8.Object == local_c8;
    if (((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->LeftCarouselWidget).Object;
    pTVar12 = &local_a8;
    if (uVar15 == 0) {
      pTVar12 = &SNullWidget::NullWidget;
    }
    local_98.Object = pTVar12->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FCarouselDisplayItem::SetWidgetContent(pFVar3,&local_98);
    if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->RightCarouselWidget).Object;
    pTVar12 = &local_b8;
    if (bVar5) {
      pTVar12 = &SNullWidget::NullWidget;
    }
    local_88.Object = pTVar12->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FCarouselDisplayItem::SetWidgetContent(pFVar3,&local_88);
    if (((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->CenterCarouselWidget).Object;
    local_78.Object = local_c8;
    local_78.SharedReferenceCount.ReferenceController = pTStack_c0;
    if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
      UNLOCK();
    }
    FCarouselDisplayItem::SetWidgetContent(pFVar3,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  pFVar3 = (this->LeftCarouselWidget).Object;
  if (pTVar1->ArrayNum == 1) {
    if ((pFVar3 == (FCarouselDisplayItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FCarouselDisplayItem::SetVisibility((this->LeftCarouselWidget).Object,EVisibility::Collapsed);
    EVar10 = EVisibility::Collapsed;
    if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), EVar10 = EVisibility::Collapsed, bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((pFVar3 == (FCarouselDisplayItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FCarouselDisplayItem::SetVisibility((this->LeftCarouselWidget).Object,EVisibility::Visible);
    EVar10 = EVisibility::Visible;
    if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), EVar10 = EVisibility::Visible, bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FCarouselDisplayItem::SetVisibility((this->RightCarouselWidget).Object,EVar10);
  SetSliderLimits(this);
  GenerateWidgets(this);
  return;
}

// GenerateWidgets @ 14a7df810

void __thiscall SWidgetCarousel<UPanelSlot_*>::GenerateWidgets(SWidgetCarousel<UPanelSlot_*> *this)

{
  SHorizontalBox *pSVar1;
  FCarouselDisplayItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SFxWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  FSlot *this_00;
  FArguments *pFVar10;
  FSlotArguments *pFVar11;
  TSharedRef<SOverlay,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FSlot *local_res18;
  FName local_res20;
  SFxWidget *local_4e8;
  FSharedReferencer<1> local_4e0;
  SFxWidget *local_4d8;
  FSharedReferencer<1> local_4d0;
  SFxWidget *local_4c8;
  FSharedReferencer<1> local_4c0;
  undefined8 local_4b8;
  FSharedReferencer<1> local_4b0;
  FMemScope local_4a8;
  TSharedRef<SOverlay,1> local_4a0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_490;
  undefined1 local_478 [56];
  void *local_440;
  undefined1 local_418 [56];
  void *local_3e0;
  undefined1 local_3b8 [56];
  void *local_380;
  undefined1 local_358 [16];
  SOverlay *local_348;
  FSharedReferencer<1> local_340 [27];
  TPanelChildren<SBoxPanel::FSlot> *local_268;
  int local_260;
  FArguments local_258;
  
  if (((this->WidgetDisplayBox).Object == (SHorizontalBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SBoxPanel::ClearChildren((SBoxPanel *)(this->WidgetDisplayBox).Object);
  if (((this->WidgetDisplayBox).Object == (SHorizontalBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pSVar1 = (this->WidgetDisplayBox).Object;
  this_00 = ::operator_new(0x58);
  local_res18 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_res18 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_358 + 8),(FSlot *)&local_res18);
  local_260 = -1;
  local_358._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_268 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  pFVar10 = SOverlay::FArguments::FArguments(&local_258);
  pFVar11 = SOverlay::Slot((FSlotArguments *)local_3b8,0);
  if (((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = (this->LeftCarouselWidget).Object;
  pTVar3 = (pFVar2->FXWidget).SharedReferenceCount.ReferenceController;
  pSVar4 = (pFVar2->FXWidget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SFxWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4e8 = pSVar4;
  local_4e0.ReferenceController = pTVar3;
  if ((SFxWidget **)&pFVar11->_padding_ != &local_4e8) {
    pFVar11->_padding_ = (longlong)pSVar4;
    local_4e8 = (SFxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar11->_padding_,&local_4e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e0.ReferenceController);
  pFVar10 = SOverlay::FArguments::operator+(pFVar10,pFVar11);
  pFVar11 = SOverlay::Slot((FSlotArguments *)local_418,0);
  if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = (this->RightCarouselWidget).Object;
  pTVar5 = (pFVar2->FXWidget).SharedReferenceCount.ReferenceController;
  pSVar4 = (pFVar2->FXWidget).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SFxWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4d8 = pSVar4;
  local_4d0.ReferenceController = pTVar5;
  if ((SFxWidget **)&pFVar11->_padding_ != &local_4d8) {
    pFVar11->_padding_ = (longlong)pSVar4;
    local_4d8 = (SFxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar11->_padding_,&local_4d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d0.ReferenceController);
  pFVar10 = SOverlay::FArguments::operator+(pFVar10,pFVar11);
  pFVar11 = SOverlay::Slot((FSlotArguments *)local_478,0);
  if (((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = (this->CenterCarouselWidget).Object;
  pTVar6 = (pFVar2->FXWidget).SharedReferenceCount.ReferenceController;
  pSVar4 = (pFVar2->FXWidget).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SFxWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4c8 = pSVar4;
  local_4c0.ReferenceController = pTVar6;
  if ((SFxWidget **)&pFVar11->_padding_ != &local_4c8) {
    pFVar11->_padding_ = (longlong)pSVar4;
    local_4c8 = (SFxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar11->_padding_,&local_4c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c0.ReferenceController);
  pFVar10 = SOverlay::FArguments::operator+(pFVar10,pFVar11);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4a8,&local_res20,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_490,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h"
             ,0x298,local_res8);
  FMemScope::~FMemScope(&local_4a8);
  FLLMScope::~FLLMScope(local_res10);
  pTVar12 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_490,&local_4a0,pFVar10);
  pTVar7 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_348 = pTVar12->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4b8 = 0;
  local_4b0.ReferenceController = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_340,&local_4b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_490._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_478 + 0x30));
  if (local_440 != (void *)0x0) {
    FMemory::Free(local_440);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_478 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_478._16_8_);
  if ((undefined8 *)local_478._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_478._0_8_)(local_478._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_418 + 0x30));
  if (local_3e0 != (void *)0x0) {
    FMemory::Free(local_3e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_418 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_418._16_8_);
  if ((undefined8 *)local_418._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_418._0_8_)(local_418._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3b8 + 0x30));
  if (local_380 != (void *)0x0) {
    FMemory::Free(local_380);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_3b8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3b8._16_8_);
  if ((undefined8 *)local_3b8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_3b8._0_8_)(local_3b8._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_358);
  return;
}

// IsInTransition @ 14a7f5b30

bool __thiscall SWidgetCarousel<UPanelSlot_*>::IsInTransition(SWidgetCarousel<UPanelSlot_*> *this)

{
  FCarouselDisplayItem *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->CenterCarouselWidget).Object;
  if ((pFVar1->bTransition == false) && (pFVar1->bFade == false)) {
    if ((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->LeftCarouselWidget).Object;
    if ((pFVar1->bTransition == false) && (pFVar1->bFade == false)) {
      if ((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pFVar1 = (this->RightCarouselWidget).Object;
      if ((pFVar1->bTransition == false) && (pFVar1->bFade == false)) {
        return false;
      }
    }
  }
  return true;
}

// RegisteredTick @ 14a8107d0

EActiveTimerReturnType __thiscall
SWidgetCarousel<UPanelSlot_*>::RegisteredTick
          (SWidgetCarousel<UPanelSlot_*> *this,double param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  EActiveTimerReturnType EVar3;
  
  if ((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  FCarouselDisplayItem::Tick((this->LeftCarouselWidget).Object,param_2);
  if ((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  FCarouselDisplayItem::Tick((this->CenterCarouselWidget).Object,param_2);
  if ((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  FCarouselDisplayItem::Tick((this->RightCarouselWidget).Object,param_2);
  bVar2 = IsInTransition(this);
  return bVar2;
}

// SetSliderLimits @ 14a81b630

void __thiscall SWidgetCarousel<UPanelSlot_*>::SetSliderLimits(SWidgetCarousel<UPanelSlot_*> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->LeftCarouselWidget).Object)->SlideValueLeftLimit = this->SlideValueLeftLimit;
  if ((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->LeftCarouselWidget).Object)->SlideValueRightLimit = this->SlideValueRightLimit;
  if ((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->LeftCarouselWidget).Object)->PeakValueLeftLimit =
       this->PeakValueLeftLimit + this->SlideValueLeftLimit;
  if ((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->LeftCarouselWidget).Object)->PeakValueRightLimit =
       this->SlideValueLeftLimit + this->PeakValueRightLimit;
  if ((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->LeftCarouselWidget).Object)->OptimalSlideValue = this->SlideValueLeftLimit;
  if ((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->RightCarouselWidget).Object)->SlideValueLeftLimit = this->SlideValueLeftLimit;
  if ((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->RightCarouselWidget).Object)->SlideValueRightLimit = this->SlideValueRightLimit;
  if ((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->RightCarouselWidget).Object)->PeakValueLeftLimit =
       this->PeakValueLeftLimit + this->SlideValueRightLimit;
  if ((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->RightCarouselWidget).Object)->PeakValueRightLimit =
       this->SlideValueRightLimit + this->PeakValueRightLimit;
  if ((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->RightCarouselWidget).Object)->OptimalSlideValue = this->SlideValueRightLimit;
  if ((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->CenterCarouselWidget).Object)->SlideValueLeftLimit = this->SlideValueLeftLimit;
  if ((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->CenterCarouselWidget).Object)->SlideValueRightLimit = this->SlideValueRightLimit;
  if ((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->CenterCarouselWidget).Object)->PeakValueLeftLimit = this->PeakValueLeftLimit;
  if ((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->CenterCarouselWidget).Object)->PeakValueRightLimit = this->PeakValueRightLimit;
  if ((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) {
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
  ((this->CenterCarouselWidget).Object)->OptimalSlideValue = 0.0;
  return;
}

// SwapBuffer @ 14a81ecd0

/* WARNING: Removing unreachable block (ram,0x00014a81f261) */
/* WARNING: Removing unreachable block (ram,0x00014a81f6dd) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetCarousel<UPanelSlot_*>::SwapBuffer
          (SWidgetCarousel<UPanelSlot_*> *this,Type param_1,int param_2)

{
  SWidget *pSVar1;
  TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> *pTVar2;
  SFxWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FCarouselDisplayItem *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  FSharedReferencer<1> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  TSharedRef<SWidget,1> *pTVar15;
  ulong64 uVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  FCarouselDisplayItem *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  float fVar24;
  uint uStackX_c;
  SWidget *local_298;
  TReferenceControllerBase<1> *pTStack_290;
  TSharedRef<SWidget,1> local_288;
  TSharedRef<SWidget,1> local_278;
  TSharedRef<SWidget,1> local_268;
  undefined1 local_258 [8];
  FDelegateAllocation local_250;
  SWidget *local_238;
  TReferenceControllerBase<1> *pTStack_230;
  SWidget *local_228;
  TReferenceControllerBase<1> *pTStack_220;
  TSharedRef<SWidget,1> local_218;
  SWidget *local_208;
  TReferenceControllerBase<1> *pTStack_200;
  SWidget *local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  SWidget *local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  SWidget *local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  TSharedRef<SWidget,1> local_1c8;
  TSharedRef<SWidget,1> local_1b8;
  TSharedRef<SWidget,1> local_1a8;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  TSharedRef<SWidget,1> local_178;
  TSharedRef<FActiveTimerHandle,1> local_168;
  FCarouselDisplayItem *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  TSharedRef<SWidget,1> local_148;
  FCarouselDisplayItem *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  TSharedRef<SWidget,1> local_128;
  FCarouselDisplayItem *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FCarouselDisplayItem *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  TSharedRef<SWidget,1> local_f8;
  FCarouselDisplayItem *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  FCarouselDisplayItem *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68 [2];
  
  bVar12 = false;
  bVar8 = false;
  bVar11 = false;
  local_258 = (undefined1  [8])0x0;
  local_250.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_250.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
             (FWriteAccessScope *)&local_198);
  local_180 = &local_250;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,&local_250);
  if (puVar14 == (undefined8 *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_268.Object = (SWidget *)RegisteredTick;
    local_268.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_1a8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_178);
    pTVar23 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar15->Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SWidgetCarousel_PEAVUPanelSlot_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar14[3] = pSVar1;
    puVar14[4] = pTVar23;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar8 = true;
    bVar11 = true;
    puVar14[5] = local_268.Object;
    puVar14[6] = local_268.SharedReferenceCount.ReferenceController;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  SWidget::RegisterActiveTimer
            ((SWidget *)this,&local_168,0.0,
             (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *)
             local_258);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  pTVar2 = this->ItemsSource;
  if (((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar3 = (((this->LeftCarouselWidget).Object)->FXWidget).Object;
  if (((pSVar3 == (SFxWidget *)0x0) ||
      (plVar17 = (longlong *)(**(code **)(pSVar3->_padding_ + 0x180))(), plVar17 == (longlong *)0x0)
      ) || (iVar13 = (**(code **)*plVar17)(plVar17), iVar13 < 1)) {
    local_278.Object = SNullWidget::NullWidget.Object;
    local_278.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)(*plVar17 + 0x10))(plVar17,&local_278);
  }
  if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar3 = (((this->RightCarouselWidget).Object)->FXWidget).Object;
  if (((pSVar3 == (SFxWidget *)0x0) ||
      (plVar17 = (longlong *)(**(code **)(pSVar3->_padding_ + 0x180))(), plVar17 == (longlong *)0x0)
      ) || (iVar13 = (**(code **)*plVar17)(plVar17), iVar13 < 1)) {
    local_288.Object = SNullWidget::NullWidget.Object;
    local_288.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)(*plVar17 + 0x10))(plVar17,&local_288);
  }
  if (((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar3 = (((this->CenterCarouselWidget).Object)->FXWidget).Object;
  if (((pSVar3 == (SFxWidget *)0x0) ||
      (plVar17 = (longlong *)(**(code **)(pSVar3->_padding_ + 0x180))(), plVar17 == (longlong *)0x0)
      ) || (iVar13 = (**(code **)*plVar17)(plVar17), iVar13 < 1)) {
    local_298 = SNullWidget::NullWidget.Object;
    pTStack_290 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)(*plVar17 + 0x10))(plVar17,&local_298);
  }
  if (0 < pTVar2->ArrayNum) {
    if (param_1 == Carousel_Left) {
      iVar13 = this->WidgetIndex + -1;
      if ((iVar13 < 0) && (iVar13 = this->ItemsSource->ArrayNum + -1, iVar13 < 0)) {
        iVar13 = 0;
      }
      this->WidgetIndex = iVar13;
      pTVar23 = (this->RightCarouselWidget).SharedReferenceCount.ReferenceController;
      pFVar22 = (this->RightCarouselWidget).Object;
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->CenterCarouselWidget).SharedReferenceCount.ReferenceController;
      pFVar5 = (this->CenterCarouselWidget).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_158 = (this->RightCarouselWidget).Object;
      pTStack_150 = (this->RightCarouselWidget).SharedReferenceCount.ReferenceController;
      (this->RightCarouselWidget).Object = pFVar5;
      (this->RightCarouselWidget).SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_150);
      if (local_298 == SNullWidget::NullWidget.Object) {
        bVar8 = true;
        bVar11 = false;
        uVar18 = this->WidgetIndex + 1;
        uVar20 = 0;
        if ((int)uVar18 < this->ItemsSource->ArrayNum) {
          uVar20 = uVar18;
        }
        uVar18 = 0;
        if ((int)uVar20 < pTVar2->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar15 = TDelegate<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
                  ::Execute(&this->OnGenerateWidget,&local_148,
                            *(UPanelSlot **)
                             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 8));
      }
      else {
        bVar8 = false;
        bVar11 = true;
        local_268.Object = local_298;
        local_268.SharedReferenceCount.ReferenceController = pTStack_290;
        if (pTStack_290 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_290->SharedReferenceCount =
               (atomic<int>)((int)pTStack_290->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar15 = &local_268;
      }
      pSVar1 = pTVar15->Object;
      pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
      pTVar15->Object = local_288.Object;
      (pTVar15->SharedReferenceCount).ReferenceController =
           local_288.SharedReferenceCount.ReferenceController;
      local_288.Object = pSVar1;
      local_288.SharedReferenceCount.ReferenceController = pTVar4;
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_268.SharedReferenceCount.ReferenceController);
      }
      if (bVar8) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
      }
      pTVar4 = (this->LeftCarouselWidget).SharedReferenceCount.ReferenceController;
      pFVar5 = (this->LeftCarouselWidget).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_138 = (this->CenterCarouselWidget).Object;
      pTStack_130 = (this->CenterCarouselWidget).SharedReferenceCount.ReferenceController;
      (this->CenterCarouselWidget).Object = pFVar5;
      (this->CenterCarouselWidget).SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_130);
      pTVar4 = pTStack_290;
      pSVar1 = local_298;
      if (local_278.Object == SNullWidget::NullWidget.Object) {
        uVar20 = this->WidgetIndex;
        uVar18 = 0;
        if ((int)uVar20 < pTVar2->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar15 = TDelegate<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
                  ::Execute(&this->OnGenerateWidget,&local_128,
                            *(UPanelSlot **)
                             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 8));
        bVar11 = true;
        pSVar1 = pTVar15->Object;
        pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
        pTVar15->Object = local_298;
        (pTVar15->SharedReferenceCount).ReferenceController = pTStack_290;
        local_298 = pSVar1;
        pTStack_290 = pTVar4;
      }
      else {
        if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_298 = local_278.Object;
        pTStack_290 = local_278.SharedReferenceCount.ReferenceController;
        local_238 = pSVar1;
        pTStack_230 = pTVar4;
        bVar11 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
      }
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118 = (this->LeftCarouselWidget).Object;
      pTStack_110 = (this->LeftCarouselWidget).SharedReferenceCount.ReferenceController;
      (this->LeftCarouselWidget).Object = pFVar22;
      (this->LeftCarouselWidget).SharedReferenceCount.ReferenceController = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_110);
      uVar20 = this->WidgetIndex - 1;
      if (((int)uVar20 < 0) && (uVar20 = this->ItemsSource->ArrayNum - 1, (int)uVar20 < 0)) {
        uVar20 = 0;
      }
      plVar17 = (longlong *)0x0;
      uVar18 = 0;
      if ((int)uVar20 < pTVar2->ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar6 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
                 &local_c8);
      if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
        plVar17 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
      }
      (**(code **)(*plVar17 + 0x60))(plVar17,&local_228,uVar6);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c8);
      pTVar4 = pTStack_220;
      pSVar1 = local_228;
      FVar9.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
      local_228 = local_278.Object;
      pTStack_220 = local_278.SharedReferenceCount.ReferenceController;
      local_278.Object = pSVar1;
      local_278.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      if (((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar22 = (this->LeftCarouselWidget).Object;
      if (((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar24 = ((this->CenterCarouselWidget).Object)->SlideValue + this->SlideValueLeftLimit;
      pFVar22->bTransition = false;
      pFVar22->bPeak = false;
    }
    else {
      iVar19 = this->WidgetIndex + 1;
      iVar13 = 0;
      if (iVar19 < this->ItemsSource->ArrayNum) {
        iVar13 = iVar19;
      }
      this->WidgetIndex = iVar13;
      pTVar23 = (this->LeftCarouselWidget).SharedReferenceCount.ReferenceController;
      pFVar22 = (this->LeftCarouselWidget).Object;
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->CenterCarouselWidget).SharedReferenceCount.ReferenceController;
      pFVar5 = (this->CenterCarouselWidget).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = (this->LeftCarouselWidget).Object;
      pTStack_100 = (this->LeftCarouselWidget).SharedReferenceCount.ReferenceController;
      (this->LeftCarouselWidget).Object = pFVar5;
      (this->LeftCarouselWidget).SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_100);
      if (local_298 == SNullWidget::NullWidget.Object) {
        bVar8 = true;
        bVar11 = false;
        uVar20 = this->WidgetIndex - 1;
        if ((int)uVar20 < 0) {
          uVar20 = this->ItemsSource->ArrayNum - 1;
          if ((int)uVar20 < 0) {
            uVar20 = 0;
          }
        }
        uVar18 = 0;
        if ((int)uVar20 < pTVar2->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar15 = TDelegate<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
                  ::Execute(&this->OnGenerateWidget,&local_f8,
                            *(UPanelSlot **)
                             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 8));
      }
      else {
        bVar8 = false;
        bVar11 = true;
        local_218.Object = local_298;
        local_218.SharedReferenceCount.ReferenceController = pTStack_290;
        if (pTStack_290 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_290->SharedReferenceCount =
               (atomic<int>)((int)pTStack_290->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar15 = &local_218;
      }
      pSVar1 = pTVar15->Object;
      pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
      pTVar15->Object = local_278.Object;
      (pTVar15->SharedReferenceCount).ReferenceController =
           local_278.SharedReferenceCount.ReferenceController;
      local_278.Object = pSVar1;
      local_278.SharedReferenceCount.ReferenceController = pTVar4;
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_218.SharedReferenceCount.ReferenceController);
      }
      if (bVar8) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      pTVar4 = (this->RightCarouselWidget).SharedReferenceCount.ReferenceController;
      pFVar5 = (this->RightCarouselWidget).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8 = (this->CenterCarouselWidget).Object;
      pTStack_e0 = (this->CenterCarouselWidget).SharedReferenceCount.ReferenceController;
      (this->CenterCarouselWidget).Object = pFVar5;
      (this->CenterCarouselWidget).SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e0);
      pTVar4 = pTStack_290;
      if (local_288.Object == SNullWidget::NullWidget.Object) {
        uVar20 = this->WidgetIndex;
        uVar18 = 0;
        if ((int)uVar20 < pTVar2->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar6 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget
                   ,&local_b0);
        if (*(int *)&(this->OnGenerateWidget).field_0x10 == 0) {
          plVar17 = (longlong *)0x0;
        }
        else {
          plVar17 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
        }
        (**(code **)(*plVar17 + 0x60))(plVar17,&local_1f8,uVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b0);
        pTVar10 = pTStack_1f0;
        pSVar1 = local_1f8;
        pTVar4 = pTStack_290;
        pTStack_1f0 = pTStack_290;
        local_1f8 = local_298;
        pTStack_290 = pTVar10;
        local_298 = pSVar1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      else {
        if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_208 = local_298;
        pTStack_200 = pTStack_290;
        local_298 = local_288.Object;
        pTStack_290 = local_288.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8 = (this->RightCarouselWidget).Object;
      pTStack_d0 = (this->RightCarouselWidget).SharedReferenceCount.ReferenceController;
      (this->RightCarouselWidget).Object = pFVar22;
      (this->RightCarouselWidget).SharedReferenceCount.ReferenceController = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d0);
      plVar17 = (longlong *)0x0;
      uVar18 = this->WidgetIndex + 1;
      uVar20 = 0;
      if ((int)uVar18 < this->ItemsSource->ArrayNum) {
        uVar20 = uVar18;
      }
      uVar18 = 0;
      if ((int)uVar20 < pTVar2->ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar6 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
                 &local_98);
      if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
        plVar17 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
      }
      (**(code **)(*plVar17 + 0x60))(plVar17,&local_1e8,uVar6);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      pTVar4 = pTStack_1e0;
      pSVar1 = local_1e8;
      FVar9.ReferenceController = local_288.SharedReferenceCount.ReferenceController;
      local_1e8 = local_288.Object;
      pTStack_1e0 = local_288.SharedReferenceCount.ReferenceController;
      local_288.Object = pSVar1;
      local_288.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar22 = (this->RightCarouselWidget).Object;
      if (((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar24 = this->SlideValueRightLimit + ((this->CenterCarouselWidget).Object)->SlideValue;
      pFVar22->bTransition = false;
      pFVar22->bPeak = false;
    }
    pFVar22->SlideValue = fVar24;
    pFVar22->DesiredSlideValue = fVar24;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  plVar17 = (longlong *)0x0;
  uVar20 = 0;
  if ((-1 < param_2) && (param_2 < pTVar2->ArrayNum)) {
    this->WidgetIndex = param_2;
    uVar18 = uVar20;
    if (param_2 < pTVar2->ArrayNum) {
      uVar18 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar6 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)param_2 * 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               &local_80);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar17 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar17 + 0x60))(plVar17,&local_1d8,uVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    pTVar4 = pTStack_1d0;
    pSVar1 = local_1d8;
    pTVar23 = pTStack_290;
    local_1d8 = local_298;
    pTStack_1d0 = pTStack_290;
    local_298 = pSVar1;
    pTStack_290 = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  uVar18 = uVar20;
  if ((local_278.Object != local_298) &&
     ((param_1 != Carousel_Left || (local_288.Object != local_278.Object)))) {
    uVar18 = 1;
  }
  if ((local_288.Object == local_298) ||
     ((uVar21 = 1, param_1 != Carousel_Left && (local_288.Object == local_278.Object)))) {
    uVar21 = uVar20;
  }
  if (((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (this->LeftCarouselWidget).Object;
  pTVar15 = &local_278;
  if (uVar18 == 0) {
    pTVar15 = &SNullWidget::NullWidget;
  }
  local_1c8.Object = pTVar15->Object;
  local_1c8.SharedReferenceCount.ReferenceController =
       (pTVar15->SharedReferenceCount).ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCarouselDisplayItem::SetWidgetContent(pFVar22,&local_1c8);
  if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (this->RightCarouselWidget).Object;
  pTVar15 = &local_288;
  if (uVar21 == 0) {
    pTVar15 = &SNullWidget::NullWidget;
  }
  local_1b8.Object = pTVar15->Object;
  local_1b8.SharedReferenceCount.ReferenceController =
       (pTVar15->SharedReferenceCount).ReferenceController;
  if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCarouselDisplayItem::SetWidgetContent(pFVar22,&local_1b8);
  if (((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (this->CenterCarouselWidget).Object;
  local_1a8.Object = local_298;
  local_1a8.SharedReferenceCount.ReferenceController = pTStack_290;
  if (pTStack_290 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_290->SharedReferenceCount = (atomic<int>)((int)pTStack_290->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCarouselDisplayItem::SetWidgetContent(pFVar22,&local_1a8);
  SetSliderLimits(this);
  GenerateWidgets(this);
  if (((this->CenterCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (this->CenterCarouselWidget).Object;
  pFVar22->bTransition = true;
  pFVar22->bPeak = false;
  pFVar22->bFade = pFVar22->FadeRate != 0.0;
  pFVar22->DesiredSlideValue = pFVar22->OptimalSlideValue;
  pFVar22->DesiredOpacityValue = 1.0;
  if (((this->RightCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (this->RightCarouselWidget).Object;
  pFVar22->bTransition = true;
  pFVar22->bPeak = false;
  pFVar22->bFade = pFVar22->FadeRate != 0.0;
  pFVar22->DesiredSlideValue = pFVar22->OptimalSlideValue;
  pFVar22->DesiredOpacityValue = 1.0;
  if (((this->LeftCarouselWidget).Object == (FCarouselDisplayItem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (this->LeftCarouselWidget).Object;
  pFVar22->bTransition = true;
  pFVar22->bPeak = false;
  pFVar22->bFade = pFVar22->FadeRate != 0.0;
  pFVar22->DesiredSlideValue = pFVar22->OptimalSlideValue;
  pFVar22->DesiredOpacityValue = 1.0;
  iVar13 = this->WidgetIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPageChanged,local_68
            );
  if ((*(int *)&(this->OnPageChanged).field_0x10 != 0) &&
     (plVar17 = *(longlong **)&(this->OnPageChanged).field_0x8, plVar17 != (longlong *)0x0)) {
    (**(code **)(*plVar17 + 0x68))(plVar17,iVar13);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  return;
}

