// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 28

// ~SPanelDrawerArea @ 142702430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Slate::Private::SPanelDrawerArea::~SPanelDrawerArea(SPanelDrawerArea *this)

{
  void *pvVar1;
  FSlateThrottleManager *this_00;
  
  this->_padding_ = (longlong)&___7SPanelDrawerArea_Private_Slate_UE__6B_;
  this_00 = FSlateThrottleManager::Get();
  FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->AnimationThrottle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExternalStateChange);
  pvVar1 = *(void **)&(this->OnExternalStateChange).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalStateChange);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OpenCloseTimer).SharedReferenceCount.ReferenceController);
  FCurveSequence::~FCurveSequence(&this->OpenCloseAnimation);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PanelDrawerData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PanelDrawerContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AreaContent).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ClosePanel @ 142713db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::ClosePanel(SPanelDrawerArea *this,bool param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FGlobalTabmanager,1> *pTVar8;
  FPanelDrawerData *pFVar9;
  SDockTab *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedPtr<FTabManager,1> local_78;
  TSharedPtr<FTabManager,1> local_68;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> local_48;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  if (this->bIsOpen == false) {
    return;
  }
  pFVar9 = (this->PanelDrawerData).Object;
  local_88 = (SDockTab *)0x0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  if (pFVar9 != (FPanelDrawerData *)0x0) {
    local_88 = (pFVar9->HostedTab).Object;
    pTStack_80 = (pFVar9->HostedTab).SharedReferenceCount.ReferenceController;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if ((param_2) && (pFVar9 = (this->PanelDrawerData).Object, pFVar9 != (FPanelDrawerData *)0x0)) {
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      pFVar9 = (FPanelDrawerData *)&DAT_00000010;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPanelDrawerData_Private_Slate_UE___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = (longlong)pFVar9->Size;
      *(SDockTab **)&pTVar7[1].SharedReferenceCount = (pFVar9->HostedTab).Object;
      pTVar1 = (pFVar9->HostedTab).SharedReferenceCount.ReferenceController;
      pTVar7[2]._padding_ = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9 = (FPanelDrawerData *)(pTVar7 + 1);
      if ((pFVar9 == (FPanelDrawerData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pFVar9->HostedTab != (TSharedPtr<SDockTab,1> *)&local_58) {
      (pFVar9->HostedTab).Object = (SDockTab *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar9->HostedTab).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar9;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    SetPanelDrawerData(this,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (param_1) {
    PlayAnimation(this,false);
  }
  else {
    SetupClosedLayout(this);
  }
  if (this->bIsOpen == false) goto LAB_142714137;
  pFVar9 = (this->PanelDrawerData).Object;
  if ((pFVar9 != (FPanelDrawerData *)0x0) && ((pFVar9->HostedTab).Object != (SDockTab *)0x0)) {
    SDockTab::GetTabManagerPtr((pFVar9->HostedTab).Object,&local_78);
    if (local_78.Object != (FTabManager *)0x0) {
      if ((local_78.Object == (FTabManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FTabManager::RequestSavePersistentLayout(local_78.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  this->bIsOpen = false;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnExternalStateChange);
  pTVar5 = CVarNoAnimationOnTabForegroundedEvent.Ref;
  bVar6 = IsInParallelGameThread();
  if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pTVar5->ShadowedValue[0] == false) && (!param_2)) || (local_88 == (SDockTab *)0x0))
  goto LAB_142714137;
  pTVar8 = FGlobalTabmanager::Get();
  pTVar7 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar8->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_88 == (SDockTab *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SDockTab::GetTabManagerPtr(local_88,&local_68);
  if ((FGlobalTabmanager *)local_68.Object == (FGlobalTabmanager *)0x0) {
LAB_1427140aa:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1427140d4:
    local_38 = 0;
    pTStack_30 = (TReferenceControllerBase<1> *)0x0;
    (**(code **)(**(longlong **)((FGlobalTabmanager *)local_68.Object)->_padding_ + 0x20))
              (*(longlong **)((FGlobalTabmanager *)local_68.Object)->_padding_,&local_38,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  }
  else if ((FGlobalTabmanager *)local_68.Object != pFVar2) {
    if ((FGlobalTabmanager *)local_68.Object == (FGlobalTabmanager *)0x0) goto LAB_1427140aa;
    goto LAB_1427140d4;
  }
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  plVar3 = *(longlong **)pFVar2->_padding_;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_28,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_142714137:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  return;
}

// Construct @ 14271b5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::Construct
          (SPanelDrawerArea *this,FArguments *param_1,TSharedRef<SWidget,1> *param_2)

{
  FCurveSequence *pFVar1;
  SWidget *local_88;
  FSharedReferencer<1> local_80;
  FCurveSequence local_78;
  
  local_88 = param_2->Object;
  local_80.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->AreaContent != (TSharedPtr<SWidget,1> *)&local_88) {
    (this->AreaContent).Object = local_88;
    local_88 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AreaContent).SharedReferenceCount,&local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  pFVar1 = FCurveSequence::FCurveSequence(&local_78,0.0,__real_3e19999a,QuadOut);
  FCurveSequence::operator=(&this->OpenCloseAnimation,pFVar1);
  FCurveSequence::~FCurveSequence(&local_78);
  SetupClosedLayout(this);
  return;
}

// GetAnimatedDrawerPanelVisibility @ 14273a6a0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
UE::Slate::Private::SPanelDrawerArea::GetAnimatedDrawerPanelVisibility(SPanelDrawerArea *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Visible.Value.Value;
  if (this->AnimatedSlideWidth <= __real_40a00000 && __real_40a00000 != this->AnimatedSlideWidth) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetAnimatedSpacerVisibility @ 14273a6d0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
UE::Slate::Private::SPanelDrawerArea::GetAnimatedSpacerVisibility(SPanelDrawerArea *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Visible.Value.Value;
  if (__real_40a00000 < this->AnimatedSlideWidth || __real_40a00000 == this->AnimatedSlideWidth) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetAnimatedWidthOverrideForPanelDrawer @ 14273a700

/* WARNING: Enum "Type": Some values do not have unique names */

FOptionalSize __thiscall
UE::Slate::Private::SPanelDrawerArea::GetAnimatedWidthOverrideForPanelDrawer(SPanelDrawerArea *this)

{
  float *in_RDX;
  float fVar1;
  
  fVar1 = this->AnimatedSlideWidth - __real_40a00000;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *in_RDX = fVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// GetAnimatedWidthOverrideForSpacer @ 14273a730

/* WARNING: Enum "Type": Some values do not have unique names */

FOptionalSize __thiscall
UE::Slate::Private::SPanelDrawerArea::GetAnimatedWidthOverrideForSpacer(SPanelDrawerArea *this)

{
  float *in_RDX;
  float fVar1;
  
  fVar1 = this->AnimatedSlideWidth;
  if (__real_40a00000 <= this->AnimatedSlideWidth) {
    fVar1 = __real_40a00000;
  }
  *in_RDX = fVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// GetHostedPanelDrawerData @ 14273ed70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> * __thiscall
UE::Slate::Private::SPanelDrawerArea::GetHostedPanelDrawerData
          (SPanelDrawerArea *this,
          TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (this->bIsOpen == false) {
    __return_storage_ptr__->Object = (FPanelDrawerData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (this->PanelDrawerData).Object;
    pTVar1 = (this->PanelDrawerData).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetHostedTab @ 14273edb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
UE::Slate::Private::SPanelDrawerArea::GetHostedTab
          (SPanelDrawerArea *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  FPanelDrawerData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = (this->PanelDrawerData).Object;
  if (pFVar1 == (FPanelDrawerData *)0x0) {
    __return_storage_ptr__->Object = (SDockTab *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (pFVar1->HostedTab).Object;
    pTVar2 = (pFVar1->HostedTab).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetMainContentCoefficient @ 14273f8c0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UE::Slate::Private::SPanelDrawerArea::GetMainContentCoefficient(SPanelDrawerArea *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->PanelDrawerData).Object != (FPanelDrawerData *)0x0) {
    return (((this->PanelDrawerData).Object)->Size).MainContentCoefficient;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (((this->PanelDrawerData).Object)->Size).MainContentCoefficient;
}

// GetOnExternalStateChanged @ 142741ed0

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UE::Slate::Private::SPanelDrawerArea::GetOnExternalStateChanged(SPanelDrawerArea *this)

{
  return &this->OnExternalStateChange;
}

// GetPanelDrawerCoefficient @ 1427421a0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UE::Slate::Private::SPanelDrawerArea::GetPanelDrawerCoefficient(SPanelDrawerArea *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->PanelDrawerData).Object != (FPanelDrawerData *)0x0) {
    return (((this->PanelDrawerData).Object)->Size).PanelDrawerCoefficient;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (((this->PanelDrawerData).Object)->Size).PanelDrawerCoefficient;
}

// IsHostingTab @ 14274d150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Slate::Private::SPanelDrawerArea::IsHostingTab
          (SPanelDrawerArea *this,TSharedPtr<SDockTab,1> *param_1)

{
  FPanelDrawerData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *pSVar3;
  SDockTab *pSVar4;
  
  pFVar1 = (this->PanelDrawerData).Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pFVar1 != (FPanelDrawerData *)0x0) {
    pSVar3 = (pFVar1->HostedTab).Object;
    pSVar4 = param_1->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return pSVar4 == pSVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return false;
}

// IsOpen @ 14274d350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::Slate::Private::SPanelDrawerArea::IsOpen(SPanelDrawerArea *this)

{
  return this->bIsOpen;
}

// MakePanelDrawerContent @ 142755fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UE::Slate::Private::SPanelDrawerArea::MakePanelDrawerContent
          (SPanelDrawerArea *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FPanelDrawerData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FArguments *pFVar8;
  FSlot *pFVar9;
  FSlotArguments *pFVar10;
  FArguments *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TSharedRef<UE::Slate::Private::STabPanelDrawer,1> *pTVar13;
  FSlot *pFVar14;
  TSharedRef<SVerticalBox,1> *pTVar15;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  STabPanelDrawer *local_708;
  FSharedReferencer<1> local_700;
  undefined4 local_6f8;
  undefined1 local_6f4;
  undefined1 local_6f0 [8];
  void *pvStack_6e8;
  undefined8 local_6e0;
  TSharedRef<SDockTab,1> local_6d8;
  FSlot *local_6c8;
  FName local_6c0;
  T1RequiredArgs<TSharedRef<SDockTab,1>_&&> local_6b8;
  FMemScope local_6b0;
  FSlot *local_6a8;
  FName local_6a0;
  FMemScope local_698;
  TAttribute<float> local_690;
  TSharedRef<SVerticalBox,1> local_670;
  TSharedRef<SWidget,1> local_660;
  TSharedRef<UE::Slate::Private::STabPanelDrawer,1> local_650;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_640;
  TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
  local_628;
  undefined8 *local_610 [2];
  TReferenceControllerBase<1> *local_600;
  undefined1 local_5e0 [24];
  undefined4 local_5c8;
  undefined1 local_5c4;
  FSlotArgumentsMixin local_5b8;
  undefined8 *local_528 [2];
  TReferenceControllerBase<1> *local_518;
  undefined1 local_4f8 [40];
  FSlotArgumentsMixin local_4d0;
  FArguments local_440;
  FSlateBaseNamedArgs local_238;
  
  pFVar2 = (this->PanelDrawerData).Object;
  if ((pFVar2 == (FPanelDrawerData *)0x0) || ((pFVar2->HostedTab).Object == (SDockTab *)0x0)) {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    return __return_storage_ptr__;
  }
  pFVar8 = SVerticalBox::FArguments::FArguments(&local_440);
  pFVar9 = ::operator_new(0x58);
  pFVar14 = (FSlot *)0x0;
  local_6c8 = pFVar14;
  if (pFVar9 != (FSlot *)0x0) {
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)&pFVar9->field_0x8 = 0;
    *(undefined8 *)&pFVar9->field_0x10 = 0;
    *(undefined8 *)&pFVar9->field_0x18 = 0;
    *(undefined8 *)&pFVar9->field_0x20 = 0;
    *(undefined8 *)&pFVar9->field_0x28 = 0;
    *(undefined8 *)&pFVar9->field_0x30 = 0;
    *(undefined8 *)&pFVar9->field_0x38 = 0;
    *(undefined8 *)&pFVar9->field_0x40 = 0;
    *(undefined8 *)&pFVar9->field_0x48 = 0;
    *(undefined8 *)&pFVar9->field_0x50 = 0;
    local_6c8 = SVerticalBox::FSlot::FSlot(pFVar9);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_610,(FSlot *)&local_6c8);
  local_5c8 = 0;
  local_5c4 = 1;
  pFVar10 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_610);
  local_6f4 = 1;
  local_6f8 = __real_41d80000;
  local_6e0 = 0;
  local_6f0 = (undefined1  [8])0x0;
  pvStack_6e8 = (void *)0x0;
  *(undefined4 *)&pFVar10->field_0xa8 = __real_41d80000;
  pFVar10->field_0xac = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->field_0xb0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  if (pvStack_6e8 != (void *)0x0) {
    FMemory::Free(pvStack_6e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6f0);
  pFVar11 = STabPanelDrawer::FArguments::FArguments((FArguments *)&local_238);
  if (((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar12;
  }
  pFVar2 = (this->PanelDrawerData).Object;
  if (((pFVar2->HostedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar12;
  }
  local_6d8.Object = (pFVar2->HostedTab).Object;
  local_6d8.SharedReferenceCount.ReferenceController =
       (pFVar2->HostedTab).SharedReferenceCount.ReferenceController;
  if (local_6d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_6d8.Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar12;
  }
  local_6b8.Arg0 = &local_6d8;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6b0,&local_6c0,true);
  TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
  ::
  TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
            (&local_628,"UE::Slate::Private::STabPanelDrawer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0x1bf,&local_6b8);
  FMemScope::~FMemScope(&local_6b0);
  FLLMScope::~FLLMScope(local_res18);
  pTVar13 = TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
            ::operator<<=(&local_628,&local_650,pFVar11);
  pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
  local_708 = pTVar13->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_700.ReferenceController = pTVar3;
  if ((STabPanelDrawer **)&pFVar10->field_0x8 != &local_708) {
    *(STabPanelDrawer **)&pFVar10->field_0x8 = local_708;
    local_708 = (STabPanelDrawer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_700);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_700.ReferenceController);
  pFVar8 = SVerticalBox::FArguments::operator+(pFVar8,pFVar10);
  pFVar9 = ::operator_new(0x58);
  if (pFVar9 != (FSlot *)0x0) {
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)&pFVar9->field_0x8 = 0;
    *(undefined8 *)&pFVar9->field_0x10 = 0;
    *(undefined8 *)&pFVar9->field_0x18 = 0;
    *(undefined8 *)&pFVar9->field_0x20 = 0;
    *(undefined8 *)&pFVar9->field_0x28 = 0;
    *(undefined8 *)&pFVar9->field_0x30 = 0;
    *(undefined8 *)&pFVar9->field_0x38 = 0;
    *(undefined8 *)&pFVar9->field_0x40 = 0;
    *(undefined8 *)&pFVar9->field_0x48 = 0;
    *(undefined8 *)&pFVar9->field_0x50 = 0;
    pFVar14 = SVerticalBox::FSlot::FSlot(pFVar9);
  }
  local_6a8 = pFVar14;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_528,(FSlot *)&local_6a8);
  local_690.Value = 1.0;
  local_690.Getter._16_8_ = 0;
  local_690.bIsSet = true;
  local_690.Getter._0_8_ = 0;
  local_690.Getter._8_8_ = 0;
  pFVar10 = SVerticalBox::FSlot::FSlotArguments::FillHeight((FSlotArguments *)local_528,&local_690);
  if (((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar12;
  }
  pFVar2 = (this->PanelDrawerData).Object;
  if (((pFVar2->HostedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar12;
  }
  pTVar12 = SDockTab::GetContent((pFVar2->HostedTab).Object,&local_660);
  pFVar10 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar10,pTVar12);
  pFVar8 = SVerticalBox::FArguments::operator+(pFVar8,pFVar10);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_698,&local_6a0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_640,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0x1b9,local_res8);
  FMemScope::~FMemScope(&local_698);
  FLLMScope::~FLLMScope(local_res20);
  pTVar15 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_640,&local_670,pFVar8);
  __return_storage_ptr__->Object = (SWidget *)pTVar15->Object;
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_670.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_640._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_4d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f8);
  if ((void *)local_4f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_518);
  if (local_528[0] != (undefined8 *)0x0) {
    (**(code **)*local_528[0])(local_528[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_650.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_628._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d8.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_238);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e0);
  if ((void *)local_5e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_600);
  if (local_610[0] != (undefined8 *)0x0) {
    (**(code **)*local_610[0])(local_610[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_440._Slots.AllocatorInstance.Data,local_440._Slots.ArrayNum);
  if ((FSlotArguments *)local_440._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_440._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_440);
  return __return_storage_ptr__;
}

// OnFocusChanging @ 142763f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::OnFocusChanging
          (SPanelDrawerArea *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,FFocusEvent *param_3
          )

{
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *this_00;
  SWidget *pSVar1;
  FGlobalTabmanager *this_01;
  bool bVar2;
  TSharedRef<FGlobalTabmanager,1> *pTVar3;
  FPanelDrawerData *pFVar4;
  SDockTab *this_02;
  
  pSVar1 = (this->PanelDrawerContent).Object;
  if (pSVar1 != (SWidget *)0x0) {
    this_00 = &this->PanelDrawerData;
    if ((((this_00->Object != (FPanelDrawerData *)0x0) &&
         ((this_00->Object->HostedTab).Object != (SDockTab *)0x0)) && (this->bIsOpen != false)) &&
       (bVar2 = FWidgetPath::ContainsWidget(param_2,pSVar1), bVar2)) {
      pTVar3 = FGlobalTabmanager::Get();
      this_01 = pTVar3->Object;
      pFVar4 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
      FGlobalTabmanager::SetActiveTab(this_01,&pFVar4->HostedTab);
      pFVar4 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
      this_02 = TSharedPtr<SDockTab,1>::operator->(&pFVar4->HostedTab);
      SDockTab::ActivateInParent(this_02,SetDirectly);
    }
  }
  return;
}

// OnMainContentSlotResized @ 142765da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::OnMainContentSlotResized(SPanelDrawerArea *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) {
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
  (((this->PanelDrawerData).Object)->Size).MainContentCoefficient = param_1;
  RequestSaveLayout(this);
  return;
}

// OnPanelDrawerSlotResized @ 14276a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::OnPanelDrawerSlotResized(SPanelDrawerArea *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) {
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
  (((this->PanelDrawerData).Object)->Size).PanelDrawerCoefficient = param_1;
  RequestSaveLayout(this);
  return;
}

// OpenPanel @ 14276dd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::OpenPanel
          (SPanelDrawerArea *this,bool param_1,
          TSharedRef<UE::Slate::Private::FPanelDrawerData,1> *param_2)

{
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *this_00;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGlobalTabmanager *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FPanelDrawerData *pFVar10;
  TSharedRef<FGlobalTabmanager,1> *pTVar11;
  SDockTab *this_01;
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> local_88;
  SWidget *local_78;
  FSharedReferencer<1> local_70;
  TSharedPtr<FTabManager,1> local_68;
  undefined8 local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedRef<SWidget,1> local_38;
  FReadAccessScope local_28;
  
  local_88.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_88.Object = param_2->Object;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->PanelDrawerData;
  if (this_00 != &local_88) {
    this_00->Object = local_88.Object;
    local_88.Object = (FPanelDrawerData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PanelDrawerData).SharedReferenceCount,&local_88.SharedReferenceCount);
  }
  FVar7.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
  pTVar9 = MakePanelDrawerContent(this,&local_38);
  local_70.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_78 = pTVar9->Object;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PanelDrawerContent != (TSharedPtr<SWidget,1> *)&local_78) {
    (this->PanelDrawerContent).Object = local_78;
    local_78 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PanelDrawerContent).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  if (param_1) {
    PlayAnimation(this,true);
  }
  else {
    SetupOpenedLayout(this);
  }
  if (this->bIsOpen != false) {
    return;
  }
  this->bIsOpen = true;
  RequestSaveLayout(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnExternalStateChange,
             &local_28);
  if ((*(int *)&(this->OnExternalStateChange).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnExternalStateChange).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pTVar6 = CVarNoAnimationOnTabForegroundedEvent.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar6->ShadowedValue[0] != false) {
    return;
  }
  if (this_00->Object == (FPanelDrawerData *)0x0) {
    return;
  }
  pFVar10 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
  if ((pFVar10->HostedTab).Object == (SDockTab *)0x0) {
    return;
  }
  pTVar11 = FGlobalTabmanager::Get();
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
  this_01 = TSharedPtr<SDockTab,1>::operator->(&pFVar10->HostedTab);
  SDockTab::GetTabManagerPtr(this_01,&local_68);
  if ((FGlobalTabmanager *)local_68.Object == (FGlobalTabmanager *)0x0) {
LAB_14276def9:
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
  else {
    if ((FGlobalTabmanager *)local_68.Object == pFVar3) goto LAB_14276df54;
    if ((FGlobalTabmanager *)local_68.Object == (FGlobalTabmanager *)0x0) goto LAB_14276def9;
  }
  puVar4 = (undefined8 *)((FGlobalTabmanager *)local_68.Object)->_padding_;
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  pFVar10 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
  (**(code **)(*(longlong *)*puVar4 + 0x20))((longlong *)*puVar4,&pFVar10->HostedTab,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
LAB_14276df54:
  puVar4 = (undefined8 *)pFVar3->_padding_;
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  pFVar10 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
  plVar1 = (longlong *)*puVar4;
  (**(code **)(*plVar1 + 0x20))(plVar1,&pFVar10->HostedTab,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// PlayAnimation @ 142772ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::PlayAnimation(SPanelDrawerArea *this,bool param_1)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FThrottleRequest FVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  undefined8 *puVar8;
  ulong64 uVar9;
  TSharedRef<FActiveTimerHandle,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  float fVar12;
  uint uStackX_c;
  FActiveTimerHandle *local_b8;
  FSharedReferencer<1> local_b0;
  TSharedRef<SWidget,1> local_a8;
  TSharedRef<SWidget,1> local_98;
  TSharedRef<FActiveTimerHandle,1> local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
  if (bVar5) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_a8);
    FCurveSequence::PlayRelative(&this->OpenCloseAnimation,pTVar7,param_1);
    pTVar11 = (TReferenceControllerBase<1> *)
              CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                       local_a8.SharedReferenceCount.ReferenceController._0_4_);
  }
  else {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_a8);
    if (param_1) {
      FCurveSequence::Play(&this->OpenCloseAnimation,pTVar7,false,0.0,false);
    }
    else {
      FCurveSequence::PlayReverse(&this->OpenCloseAnimation,pTVar7,false,0.0,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                        local_a8.SharedReferenceCount.ReferenceController._0_4_));
    fVar12 = FCurveSequence::GetLerp(&this->OpenCloseAnimation);
    this->AnimatedSlideWidth = (this->DesiredOpenWidth + __real_40a00000) * fVar12;
    SetupAnimationLayout(this);
    this_00 = FSlateThrottleManager::Get();
    FVar6 = FSlateThrottleManager::EnterResponsiveMode(this_00);
    local_78 = (undefined1  [8])0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    (this->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar6.Index);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar8 = Core::Private::DelegateAllocate(0x38,&local_70);
    if (puVar8 == (undefined8 *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      local_a8.SharedReferenceCount.ReferenceController._4_4_ =
           local_88.SharedReferenceCount.ReferenceController._4_4_;
      local_a8.Object = (SWidget *)UpdateAnimation;
      local_a8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
      pTVar11 = (pTVar7->SharedReferenceCount).ReferenceController;
      pSVar1 = pTVar7->Object;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSPanelDrawerArea_Private_Slate_UE___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[3] = pSVar1;
      puVar8[4] = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      puVar8[5] = local_a8.Object;
      puVar8[6] = CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                           local_a8.SharedReferenceCount.ReferenceController._0_4_);
    }
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    pTVar10 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_88,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_78);
    local_b0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar10->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->OpenCloseTimer != (TSharedPtr<FActiveTimerHandle,1> *)&local_b8) {
      (this->OpenCloseTimer).Object = local_b8;
      local_b8 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OpenCloseTimer).SharedReferenceCount,&local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    pTVar11 = (TReferenceControllerBase<1> *)
              CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                       local_88.SharedReferenceCount.ReferenceController._0_4_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// RequestSaveLayout @ 14277dae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Slate::Private::SPanelDrawerArea::RequestSaveLayout(SPanelDrawerArea *this)

{
  FPanelDrawerData *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FTabManager,1> local_18;
  
  pFVar1 = (this->PanelDrawerData).Object;
  if ((pFVar1 != (FPanelDrawerData *)0x0) && ((pFVar1->HostedTab).Object != (SDockTab *)0x0)) {
    SDockTab::GetTabManagerPtr((pFVar1->HostedTab).Object,&local_18);
    if (local_18.Object != (FTabManager *)0x0) {
      if ((local_18.Object == (FTabManager *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FTabManager::RequestSavePersistentLayout(local_18.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetPanelDrawerData @ 142785b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::SetPanelDrawerData
          (SPanelDrawerArea *this,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *param_1)

{
  TSharedRef<SWidget,1> *pTVar1;
  SWidget *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<SWidget,1> local_18;
  
  if (&this->PanelDrawerData != param_1) {
    (this->PanelDrawerData).Object = param_1->Object;
    param_1->Object = (FPanelDrawerData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PanelDrawerData).SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  pTVar1 = MakePanelDrawerContent(this,&local_18);
  local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  local_28 = pTVar1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PanelDrawerContent != (TSharedPtr<SWidget,1> *)&local_28) {
    (this->PanelDrawerContent).Object = local_28;
    local_28 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PanelDrawerContent).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetupAnimationLayout @ 142787e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Slate::Private::SPanelDrawerArea::SetupAnimationLayout(SPanelDrawerArea *this)

{
  int *piVar1;
  byte *pbVar2;
  TArray<SConstraintCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  FSlotArguments *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SSplitter *pSVar9;
  code *pcVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  SConstraintCanvas *pSVar14;
  FSharedReferencer<1> FVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  byte bVar19;
  int iVar20;
  FSlotArguments *pFVar21;
  FPanelDrawerData *pFVar22;
  FArguments *pFVar23;
  FSlot *pFVar24;
  FSlot *pFVar25;
  FSlotArguments *pFVar26;
  FArguments *pFVar27;
  TSharedRef<SBox,1> *pTVar28;
  FSizeParam *pFVar29;
  TSharedRef<SHorizontalBox,1> *pTVar30;
  FArguments *pFVar31;
  FSlotArguments *pFVar32;
  FArguments *pFVar33;
  TSharedRef<SSplitter,1> *pTVar34;
  longlong *this_00;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1898;
  T0RequiredArgs local_1897 [3];
  FLLMScope local_1894;
  FLLMScope local_1890;
  FLLMScope local_188c;
  FLLMScope local_1888;
  FLLMScope local_1884;
  FLLMScope local_1880 [2];
  FArguments *local_1878;
  SBox *local_1870;
  FSharedReferencer<1> local_1868 [2];
  TReferenceControllerBase<1> *local_1858;
  undefined4 uStack_1850;
  uint uStack_184c;
  code *local_1848;
  undefined8 uStack_1840;
  SBox *local_1838;
  FSharedReferencer<1> local_1830;
  SHorizontalBox *local_1828;
  FSharedReferencer<1> local_1820;
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs> local_1818;
  SWidget *local_1800;
  FSharedReferencer<1> local_17f8;
  float local_17f0;
  undefined1 local_17ec;
  undefined1 local_17e8 [8];
  void *pvStack_17e0;
  undefined8 local_17d8;
  float local_17d0;
  undefined1 local_17cc;
  undefined1 local_17c8 [8];
  void *pvStack_17c0;
  undefined8 local_17b8;
  undefined4 local_17b0;
  undefined1 local_17ac;
  undefined1 local_17a8 [8];
  void *pvStack_17a0;
  undefined8 local_1798;
  undefined8 local_1790;
  FSharedReferencer<1> local_1788;
  undefined8 local_1780;
  float fStack_1778;
  undefined4 uStack_1774;
  undefined1 local_1770;
  undefined1 local_1768 [8];
  void *pvStack_1760;
  undefined8 local_1758;
  SSplitter *local_1750;
  TReferenceControllerBase<1> *pTStack_1748;
  FName local_1740;
  FMemScope local_1738;
  FMemScope local_1730;
  TReferenceControllerBase<1> *local_1728;
  TReferenceControllerBase<1> *local_1720;
  FName local_1718;
  FMemScope local_1710;
  FName local_1708;
  FSlot *local_1700;
  FMemScope local_16f8;
  FMemScope local_16f0;
  FName local_16e8;
  FMemScope local_16e0;
  FName local_16d8;
  FSlot *local_16d0;
  FName local_16c8;
  TReferenceControllerBase<1> *local_16c0;
  undefined8 uStack_16b8;
  undefined8 local_16b0;
  undefined8 uStack_16a8;
  undefined8 local_16a0;
  undefined1 local_1698;
  undefined1 local_1690 [8];
  void *pvStack_1688;
  undefined8 local_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined1 local_1668;
  undefined1 local_1660 [8];
  void *pvStack_1658;
  undefined8 local_1650;
  undefined8 local_1648;
  undefined8 uStack_1640;
  undefined1 local_1638;
  undefined1 local_1630 [8];
  void *pvStack_1628;
  undefined8 local_1620;
  TAttribute<float> local_1618;
  TSharedRef<SBox,1> local_15f8;
  SWidget *local_15e8;
  TReferenceControllerBase<1> *pTStack_15e0;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_15d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_15c0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_15a8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1590;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1578;
  code *local_1558;
  longlong lStack_1550;
  code *local_1548;
  longlong lStack_1540;
  code *local_1538;
  undefined4 uStack_1530;
  uint uStack_152c;
  SWidget *local_1528;
  TReferenceControllerBase<1> *pTStack_1520;
  TSharedRef<SSplitter,1> local_1518;
  TSharedRef<SBox,1> local_1508;
  TSharedRef<SHorizontalBox,1> local_14f8;
  TSharedRef<SBox,1> local_14e8;
  undefined1 local_14d8 [16];
  undefined1 local_14c8 [32];
  undefined1 local_14a8 [24];
  undefined8 *local_1490;
  SBox *local_1488;
  FSharedReferencer<1> local_1480 [4];
  undefined1 local_1460 [40];
  FSlotArgumentsMixin local_1438;
  undefined8 *local_13a8 [2];
  TReferenceControllerBase<1> *local_1398;
  undefined1 local_1378 [40];
  FSlotArgumentsMixin local_1350;
  FSlotArguments local_12c0;
  FSlotArguments local_1228;
  FArguments local_1190;
  FArguments local_f88;
  FSlotArguments local_d80;
  FArguments local_ca0;
  FArguments local_a10;
  FArguments local_6d0;
  FArguments local_390;
  undefined8 uStack_48;
  
  uStack_48 = 0x142787e7f;
  local_1878 = SSplitter::FArguments::FArguments(&local_ca0);
  pFVar25 = (FSlot *)0x0;
  local_1878->_Orientation = Orient_Horizontal;
  pFVar21 = SSplitter::Slot(&local_1228);
  local_17d0 = __real_3f800000;
  if (this->bIsOpen == false) {
    pFVar22 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(&this->PanelDrawerData)
    ;
    local_17d0 = (pFVar22->Size).MainContentCoefficient;
  }
  local_17cc = 1;
  local_17b8 = 0;
  local_17c8 = (undefined1  [8])0x0;
  pvStack_17c0 = (void *)0x0;
  (pFVar21->_Value).Value = local_17d0;
  (pFVar21->_Value).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_17c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17c8);
  if (pvStack_17c0 != (void *)0x0) {
    FMemory::Free(pvStack_17c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17c8);
  pFVar23 = SHorizontalBox::FArguments::FArguments(&local_f88);
  pFVar24 = ::operator_new(0x58);
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    pFVar25 = SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  local_1700 = pFVar25;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_13a8,(FSlot *)&local_1700);
  local_1618.Value = 1.0;
  local_1618.Getter._16_8_ = 0;
  local_1618.bIsSet = true;
  local_1618.Getter._0_8_ = 0;
  local_1618.Getter._8_8_ = 0;
  pFVar26 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_13a8,&local_1618);
  pFVar27 = SBox::FArguments::FArguments(&local_390);
  pFVar27->_HAlign = HAlign_Fill;
  pFVar27->_VAlign = VAlign_Fill;
  *(undefined1 *)((longlong)&pFVar27->_padding_ + 2) = 1;
  if (((this->AreaContent).Object == (SWidget *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar4 = (this->AreaContent).SharedReferenceCount.ReferenceController;
  pSVar5 = (this->AreaContent).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1720 = pTVar4;
  if ((pSVar5 == (SWidget *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_15e8 = (pFVar27->_Content).Widget.Object;
  pTStack_15e0 = (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar27->_Content).Widget.Object = pSVar5;
  (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_15e0);
  FLLMScope::FLLMScope(&local_1894,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1740 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1738,&local_1740,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1578,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0xa8,local_res8);
  FMemScope::~FMemScope(&local_1738);
  FLLMScope::~FLLMScope(&local_1894);
  pTVar28 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1578,&local_15f8,pFVar27);
  local_1870 = pTVar28->Object;
  local_1868[0].ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_1868[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1868[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1868[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_1868[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1868[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = (FSlot *)0x0;
  local_1728 = local_1868[0].ReferenceController;
  if ((SBox **)&pFVar26->field_0x8 != &local_1870) {
    *(SBox **)&pFVar26->field_0x8 = local_1870;
    local_1870 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->field_0x10,local_1868);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1868[0].ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(pFVar23,pFVar26);
  pFVar24 = ::operator_new(0x58);
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    pFVar25 = SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  local_16d0 = pFVar25;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1490,(FSlot *)&local_16d0);
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_14d8);
  TOptional<FSizeParam>::operator=(&local_1438._SizeParam,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14a8);
  if ((void *)local_14a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_14a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14c8);
  if ((void *)local_14c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_14c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14c8);
  pFVar27 = SBox::FArguments::FArguments(&local_6d0);
  uStack_1850 = 0;
  local_1858 = (TReferenceControllerBase<1> *)GetAnimatedWidthOverrideForSpacer;
  lStack_1550 = (ulonglong)uStack_184c << 0x20;
  local_1558 = GetAnimatedWidthOverrideForSpacer;
  pFVar27->_HAlign = HAlign_Right;
  pFVar27->_VAlign = VAlign_Fill;
  pFVar27 = SBox::FArguments::WidthOverride<UE::Slate::Private::SPanelDrawerArea>
                      (pFVar27,this,(pmf_4a455474 *)&local_1558);
  uStack_1850 = 0;
  local_1858 = (TReferenceControllerBase<1> *)GetAnimatedSpacerVisibility;
  lStack_1540 = (ulonglong)uStack_184c << 0x20;
  local_1548 = GetAnimatedSpacerVisibility;
  pFVar27 = TSlateBaseNamedArgs<SBox>::Visibility<UE::Slate::Private::SPanelDrawerArea>
                      ((TSlateBaseNamedArgs<SBox> *)pFVar27,this,(pmf_a3f8a404 *)&local_1548);
  FLLMScope::FLLMScope(&local_1890,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_16e0,&local_16d8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1590,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0xb4,local_res10);
  FMemScope::~FMemScope(&local_16e0);
  FLLMScope::~FLLMScope(&local_1890);
  pTVar28 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1590,&local_14e8,pFVar27);
  local_1488 = pTVar28->Object;
  local_1858 = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_1858 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1858->SharedReferenceCount = (atomic<int>)((int)local_1858->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_1858->SharedReferenceCount = (atomic<int>)((int)local_1858->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1790 = 0;
  local_1788.ReferenceController = local_1858;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1480,&local_1788);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1788.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(pFVar23,(FSlotArguments *)&local_1490);
  FLLMScope::FLLMScope(&local_188c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_16f0,&local_16e8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_15a8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0xa3,local_res18);
  FMemScope::~FMemScope(&local_16f0);
  FLLMScope::~FLLMScope(&local_188c);
  pTVar30 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_15a8,&local_14f8,pFVar23);
  local_1828 = pTVar30->Object;
  local_1820.ReferenceController = (pTVar30->SharedReferenceCount).ReferenceController;
  if (local_1820.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1820.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1820.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_1820.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1820.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_16c0 = local_1820.ReferenceController;
  if ((SHorizontalBox **)&pFVar21->_padding_ != &local_1828) {
    pFVar21->_padding_ = (longlong)local_1828;
    local_1828 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar21->_padding_,&local_1820);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1820.ReferenceController);
  local_1878 = SSplitter::FArguments::operator+(local_1878,pFVar21);
  pFVar21 = SSplitter::Slot(&local_12c0);
  local_17f0 = 0.0;
  if (this->bIsOpen == false) {
    pFVar22 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(&this->PanelDrawerData)
    ;
    local_17f0 = (pFVar22->Size).PanelDrawerCoefficient;
  }
  local_17ec = 1;
  local_17d8 = 0;
  local_17e8 = (undefined1  [8])0x0;
  pvStack_17e0 = (void *)0x0;
  (pFVar21->_Value).Value = local_17f0;
  (pFVar21->_Value).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_17e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17e8);
  if (pvStack_17e0 != (void *)0x0) {
    FMemory::Free(pvStack_17e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17e8);
  local_17ac = 1;
  local_17b0 = 0;
  local_1798 = 0;
  local_17a8 = (undefined1  [8])0x0;
  pvStack_17a0 = (void *)0x0;
  (pFVar21->_SizeRule).Value = SizeToContent;
  (pFVar21->_SizeRule).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_SizeRule).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_17a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17a8);
  if (pvStack_17a0 != (void *)0x0) {
    FMemory::Free(pvStack_17a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17a8);
  pFVar27 = SBox::FArguments::FArguments(&local_a10);
  uStack_1840._0_4_ = 0;
  local_1848 = GetAnimatedWidthOverrideForPanelDrawer;
  local_1538 = GetAnimatedWidthOverrideForPanelDrawer;
  uStack_1530 = 0;
  uStack_152c = uStack_1840._4_4_;
  pFVar27->_HAlign = HAlign_Left;
  pFVar27->_VAlign = VAlign_Fill;
  pFVar27 = SBox::FArguments::WidthOverride<UE::Slate::Private::SPanelDrawerArea>
                      (pFVar27,this,(pmf_4a455474 *)&local_1538);
  uStack_1840 = (ulonglong)uStack_1840._4_4_ << 0x20;
  local_1848 = GetAnimatedDrawerPanelVisibility;
  pFVar27 = TSlateBaseNamedArgs<SBox>::Visibility<UE::Slate::Private::SPanelDrawerArea>
                      ((TSlateBaseNamedArgs<SBox> *)pFVar27,this,(pmf_a3f8a404 *)&local_1848);
  uVar13 = _UNK_15076b998;
  local_1668 = 1;
  local_1650 = 0;
  local_1678 = ___xmm_40000000000000000000000000000000;
  uStack_1670 = _UNK_15076b998;
  local_1660 = (undefined1  [8])0x0;
  pvStack_1658 = (void *)0x0;
  uVar12 = _UNK_15076b994;
  (pFVar27->_Padding).Value.Left = (float)___xmm_40000000000000000000000000000000;
  uVar16 = _UNK_15076b998;
  (pFVar27->_Padding).Value.Top = (float)uVar12;
  _UNK_15076b998 = (undefined4)uVar13;
  _UNK_15076b99c = SUB84(uVar13,4);
  uVar12 = _UNK_15076b99c;
  (pFVar27->_Padding).Value.Right = (float)_UNK_15076b998;
  _UNK_15076b998 = uVar16;
  (pFVar27->_Padding).Value.Bottom = (float)uVar12;
  (pFVar27->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1660);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1660);
  if (pvStack_1658 != (void *)0x0) {
    FMemory::Free(pvStack_1658);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1660);
  *(undefined1 *)((longlong)&pFVar27->_padding_ + 2) = 1;
  pFVar31 = SConstraintCanvas::FArguments::FArguments(&local_1190);
  pFVar32 = SConstraintCanvas::Slot(&local_d80);
  local_1698 = 1;
  uStack_16a8 = 0;
  local_16a0 = 0x3ff0000000000000;
  uStack_16b8 = 0;
  local_16b0 = 0;
  local_1680 = 0;
  local_1690 = (undefined1  [8])0x0;
  pvStack_1688 = (void *)0x0;
  (pFVar32->_Anchors).Value.Minimum.field0_0x0._s_0.X = 0.0;
  (pFVar32->_Anchors).Value.Minimum.field0_0x0._s_0.Y = 0.0;
  (pFVar32->_Anchors).Value.Maximum.field0_0x0._s_0.X = 0.0;
  (pFVar32->_Anchors).Value.Maximum.field0_0x0._s_0.Y = 1.0;
  (pFVar32->_Anchors).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Anchors).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1690);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1690);
  if (pvStack_1688 != (void *)0x0) {
    FMemory::Free(pvStack_1688);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1690);
  fStack_1778 = this->DesiredOpenWidth;
  local_1770 = 1;
  local_1768 = (undefined1  [8])0x0;
  pvStack_1760 = (void *)0x0;
  local_1758 = 0;
  local_1780 = 0;
  uStack_1774 = 0;
  (pFVar32->_Offset).Value.Left = 0.0;
  (pFVar32->_Offset).Value.Top = 0.0;
  (pFVar32->_Offset).Value.Right = fStack_1778;
  (pFVar32->_Offset).Value.Bottom = 0.0;
  (pFVar32->_Offset).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Offset).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1768);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1768);
  if (pvStack_1760 != (void *)0x0) {
    FMemory::Free(pvStack_1760);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1768);
  local_1638 = 1;
  local_1620 = 0;
  local_1648 = 0;
  uStack_1640 = 0;
  local_1630 = (undefined1  [8])0x0;
  pvStack_1628 = (void *)0x0;
  (pFVar32->_Alignment).Value.field0_0x0._s_0.X = 0.0;
  (pFVar32->_Alignment).Value.field0_0x0._s_0.Y = 0.0;
  (pFVar32->_Alignment).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Alignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1630);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1630);
  if (pvStack_1628 != (void *)0x0) {
    FMemory::Free(pvStack_1628);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1630);
  if (((this->PanelDrawerContent).Object == (SWidget *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar4 = (this->PanelDrawerContent).SharedReferenceCount.ReferenceController;
  pSVar5 = (this->PanelDrawerContent).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar5 == (SWidget *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1800 = pSVar5;
  local_17f8.ReferenceController = pTVar4;
  if ((SWidget **)&pFVar32->_padding_ != &local_1800) {
    pFVar32->_padding_ = (longlong)pSVar5;
    local_1800 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar32->_padding_,&local_17f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17f8.ReferenceController);
  pTVar3 = &pFVar31->_Slots;
  pFVar6 = (FSlotArguments *)(pTVar3->AllocatorInstance).Data;
  if (((pFVar6 <= pFVar32) && (pFVar32 < pFVar6 + (pFVar31->_Slots).ArrayMax)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar20 = (pFVar31->_Slots).ArrayNum;
  piVar1 = &(pFVar31->_Slots).ArrayMax;
  if (iVar20 == *piVar1) {
    iVar20 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e0,&pTVar3->AllocatorInstance,piVar1);
  }
  (pFVar31->_Slots).ArrayNum = iVar20 + 1;
  SConstraintCanvas::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar3->AllocatorInstance).Data + (longlong)iVar20 * 0xe0),pFVar32)
  ;
  FLLMScope::FLLMScope(&local_1888,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1708 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1710,&local_1708,true);
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>
            (&local_1818,"SConstraintCanvas",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,199,local_res20);
  FMemScope::~FMemScope(&local_1710);
  FLLMScope::~FLLMScope(&local_1888);
  pSVar14 = local_1818._Widget.Object;
  if ((local_1818._Widget.Object == (SConstraintCanvas *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1818._Widget.Object,(FSlateBaseNamedArgs *)pFVar31);
  SConstraintCanvas::Construct(local_1818._Widget.Object,pFVar31);
  if ((local_1818._Widget.Object == (SConstraintCanvas *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((local_1818._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar18 = (**(code **)((local_1818._Widget.Object)->_padding_ + 0x228))
                       (local_1818._Widget.Object);
    bVar19 = 0;
    if (cVar18 == '\0') goto LAB_142788ab9;
  }
  bVar19 = 0x20;
LAB_142788ab9:
  *(byte *)&(local_1818._Widget.Object)->_padding_ =
       (byte)(local_1818._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1818._Widget.Object)->_padding_ =
       (byte)(local_1818._Widget.Object)->_padding_ | bVar19;
  if ((local_1818._Widget.Object == (SConstraintCanvas *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_1818._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1818._Widget.Object == (SConstraintCanvas *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar15.ReferenceController = local_1818._Widget.SharedReferenceCount.ReferenceController;
  local_1818._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1818._Widget.Object = (SConstraintCanvas *)0x0;
  if ((pSVar14 == (SConstraintCanvas *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1528 = (pFVar27->_Content).Widget.Object;
  pTStack_1520 = (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar27->_Content).Widget.Object = (SWidget *)pSVar14;
  (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1520);
  FLLMScope::FLLMScope(&local_1884,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1718 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1730,&local_1718,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_15c0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0xbf,&local_1898);
  FMemScope::~FMemScope(&local_1730);
  FLLMScope::~FLLMScope(&local_1884);
  pTVar28 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_15c0,&local_1508,pFVar27);
  pTVar7 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_1838 = pTVar28->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1830.ReferenceController = pTVar7;
  if ((SBox **)&pFVar21->_padding_ != &local_1838) {
    pFVar21->_padding_ = (longlong)local_1838;
    local_1838 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar21->_padding_,&local_1830);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1830.ReferenceController);
  pFVar33 = SSplitter::FArguments::operator+(local_1878,pFVar21);
  FLLMScope::FLLMScope(local_1880,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_16f8,&local_16c8,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_15d8,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0x9e,local_1897);
  FMemScope::~FMemScope(&local_16f8);
  FLLMScope::~FLLMScope(local_1880);
  pTVar34 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_15d8,&local_1518,pFVar33);
  this_00 = &this->_padding_;
  pTVar8 = (pTVar34->SharedReferenceCount).ReferenceController;
  pSVar9 = pTVar34->Object;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar9;
  this->_padding_ = (longlong)pTVar8;
  local_1750 = pSVar9;
  pTStack_1748 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1518.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1508.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1818._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SConstraintCanvas::FSlot::FSlotArguments::~FSlotArguments(&local_d80);
  DestructItems<SConstraintCanvas::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1190._Slots.AllocatorInstance.Data,local_1190._Slots.ArrayNum);
  if ((FSlotArguments *)local_1190._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1190._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1190);
  SBox::FArguments::~FArguments(&local_a10);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_12c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_16c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1858);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1590._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_6d0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1438);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1460);
  if ((void *)local_1460._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1460._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1460);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1480[0].ReferenceController);
  if (local_1490 != (undefined8 *)0x0) {
    (**(code **)*local_1490)(local_1490,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1728);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1578._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1720);
  SBox::FArguments::~FArguments(&local_390);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1350);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1378);
  if ((void *)local_1378._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1378._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1378);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1398);
  if (local_13a8[0] != (undefined8 *)0x0) {
    (**(code **)*local_13a8[0])(local_13a8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_f88._Slots.AllocatorInstance.Data,local_f88._Slots.ArrayNum);
  if ((FSlotArguments *)local_f88._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_f88._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_f88);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_1228);
  SSplitter::FArguments::~FArguments(&local_ca0);
  return;
}

// SetupClosedLayout @ 142788fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Slate::Private::SPanelDrawerArea::SetupClosedLayout(SPanelDrawerArea *this)

{
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  FPanelDrawerData *pFVar4;
  FGlobalTabmanager *pFVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  TSharedRef<FGlobalTabmanager,1> *pTVar11;
  SDockTab *this_00;
  FArguments *pFVar12;
  FSlot *pFVar13;
  FSlotArguments *pFVar14;
  FArguments *pFVar15;
  TSharedRef<UE::Slate::Private::STabPanelDrawer,1> *pTVar16;
  FSlot *pFVar17;
  TSharedRef<SWidget,1> *pTVar18;
  TSharedRef<SVerticalBox,1> *pTVar19;
  FSharedReferencer<1> FVar20;
  SVerticalBox *pSVar21;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FSlot *local_res20;
  STabPanelDrawer *local_758;
  FSharedReferencer<1> local_750;
  SVerticalBox *local_748;
  FSharedReferencer<1> local_740;
  undefined4 local_738;
  undefined1 local_734;
  undefined1 local_730 [8];
  void *pvStack_728;
  undefined8 local_720;
  TSharedPtr<FTabManager,1> local_718;
  TSharedRef<SDockTab,1> local_708;
  FName local_6f8;
  T1RequiredArgs<TSharedRef<SDockTab,1>_&&> local_6f0;
  FMemScope local_6e8;
  FSlot *local_6e0;
  FName local_6d8;
  FMemScope local_6d0;
  longlong local_6c8;
  FSharedReferencer<1> FStack_6c0;
  TAttribute<float> local_6b8;
  undefined8 local_698;
  TReferenceControllerBase<1> *pTStack_690;
  undefined8 local_688;
  TReferenceControllerBase<1> *pTStack_680;
  longlong local_678;
  TReferenceControllerBase<1> *pTStack_670;
  TSharedRef<SVerticalBox,1> local_668;
  TSharedRef<SWidget,1> local_658;
  TSharedRef<UE::Slate::Private::STabPanelDrawer,1> local_648;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_638;
  TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
  local_620;
  undefined8 *local_608 [2];
  TReferenceControllerBase<1> *local_5f8;
  undefined1 local_5d8 [24];
  undefined4 local_5c0;
  undefined1 local_5bc;
  FSlotArgumentsMixin local_5b0;
  undefined8 *local_520 [2];
  TReferenceControllerBase<1> *local_510;
  undefined1 local_4f0 [40];
  FSlotArgumentsMixin local_4c8;
  FArguments local_438;
  FSlateBaseNamedArgs local_230;
  
  if (((this->AreaContent).Object == (SWidget *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar2 = (this->AreaContent).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->AreaContent).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_678 = this->_padding_;
  pTStack_670 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_670);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar9 = CVarNoAnimationOnTabForegroundedEvent.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((pTVar9->ShadowedValue[0] != false) ||
      (pFVar4 = (this->PanelDrawerData).Object, pFVar4 == (FPanelDrawerData *)0x0)) ||
     ((pFVar4->HostedTab).Object == (SDockTab *)0x0)) goto LAB_1427892a0;
  pTVar11 = FGlobalTabmanager::Get();
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = TSharedPtr<SDockTab,1>::operator->(&((this->PanelDrawerData).Object)->HostedTab);
  SDockTab::GetTabManagerPtr(this_00,&local_718);
  if ((FGlobalTabmanager *)local_718.Object == (FGlobalTabmanager *)0x0) {
LAB_1427891a3:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_1427891ce:
    puVar6 = (undefined8 *)((FGlobalTabmanager *)local_718.Object)->_padding_;
    if (((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_698 = 0;
    pTStack_690 = (TReferenceControllerBase<1> *)0x0;
    (**(code **)(*(longlong *)*puVar6 + 0x20))
              ((longlong *)*puVar6,&local_698,&((this->PanelDrawerData).Object)->HostedTab);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_690)
    ;
  }
  else if ((FGlobalTabmanager *)local_718.Object != pFVar5) {
    if ((FGlobalTabmanager *)local_718.Object == (FGlobalTabmanager *)0x0) goto LAB_1427891a3;
    goto LAB_1427891ce;
  }
  puVar6 = (undefined8 *)pFVar5->_padding_;
  if (((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_688 = 0;
  pTStack_680 = (TReferenceControllerBase<1> *)0x0;
  plVar7 = (longlong *)*puVar6;
  (**(code **)(*plVar7 + 0x20))(plVar7,&local_688);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_680);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_718.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_1427892a0:
  pTVar1 = &this->PanelDrawerData;
  pFVar17 = (FSlot *)0x0;
  local_6c8 = 0;
  FStack_6c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_6c8) {
    pTVar1->Object = (FPanelDrawerData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PanelDrawerData).SharedReferenceCount,&FStack_6c0);
  }
  FVar20.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar21 = (SVerticalBox *)SNullWidget::NullWidget.Object;
  if ((pTVar1->Object == (FPanelDrawerData *)0x0) ||
     ((pTVar1->Object->HostedTab).Object == (SDockTab *)0x0)) {
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
    pFVar12 = SVerticalBox::FArguments::FArguments(&local_438);
    pFVar13 = ::operator_new(0x58);
    local_res20 = pFVar17;
    if (pFVar13 != (FSlot *)0x0) {
      *(undefined8 *)pFVar13 = 0;
      *(undefined8 *)&pFVar13->field_0x8 = 0;
      *(undefined8 *)&pFVar13->field_0x10 = 0;
      *(undefined8 *)&pFVar13->field_0x18 = 0;
      *(undefined8 *)&pFVar13->field_0x20 = 0;
      *(undefined8 *)&pFVar13->field_0x28 = 0;
      *(undefined8 *)&pFVar13->field_0x30 = 0;
      *(undefined8 *)&pFVar13->field_0x38 = 0;
      *(undefined8 *)&pFVar13->field_0x40 = 0;
      *(undefined8 *)&pFVar13->field_0x48 = 0;
      *(undefined8 *)&pFVar13->field_0x50 = 0;
      local_res20 = SVerticalBox::FSlot::FSlot(pFVar13);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_608,(FSlot *)&local_res20);
    local_5c0 = 0;
    local_5bc = 1;
    pFVar14 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_608);
    local_734 = 1;
    local_738 = __real_41d80000;
    local_720 = 0;
    local_730 = (undefined1  [8])0x0;
    pvStack_728 = (void *)0x0;
    *(undefined4 *)&pFVar14->field_0xa8 = __real_41d80000;
    pFVar14->field_0xac = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->field_0xb0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
    if (pvStack_728 != (void *)0x0) {
      FMemory::Free(pvStack_728);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_730);
    pFVar15 = STabPanelDrawer::FArguments::FArguments((FArguments *)&local_230);
    if (((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (this->PanelDrawerData).Object;
    if (((pFVar4->HostedTab).Object == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_708.Object = (pFVar4->HostedTab).Object;
    local_708.SharedReferenceCount.ReferenceController =
         (pFVar4->HostedTab).SharedReferenceCount.ReferenceController;
    if (local_708.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_708.Object == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_6f0.Arg0 = &local_708;
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_6f8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_6e8,&local_6f8,true);
    TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
    ::
    TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
              (&local_620,"UE::Slate::Private::STabPanelDrawer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
               ,0x1bf,&local_6f0);
    FMemScope::~FMemScope(&local_6e8);
    FLLMScope::~FLLMScope(local_res10);
    pTVar16 = TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
              ::operator<<=(&local_620,&local_648,pFVar15);
    pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
    local_758 = pTVar16->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_750.ReferenceController = pTVar2;
    if ((STabPanelDrawer **)&pFVar14->field_0x8 != &local_758) {
      *(STabPanelDrawer **)&pFVar14->field_0x8 = local_758;
      local_758 = (STabPanelDrawer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar14->field_0x10,&local_750);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_750.ReferenceController);
    pFVar12 = SVerticalBox::FArguments::operator+(pFVar12,pFVar14);
    pFVar13 = ::operator_new(0x58);
    if (pFVar13 != (FSlot *)0x0) {
      *(undefined8 *)pFVar13 = 0;
      *(undefined8 *)&pFVar13->field_0x8 = 0;
      *(undefined8 *)&pFVar13->field_0x10 = 0;
      *(undefined8 *)&pFVar13->field_0x18 = 0;
      *(undefined8 *)&pFVar13->field_0x20 = 0;
      *(undefined8 *)&pFVar13->field_0x28 = 0;
      *(undefined8 *)&pFVar13->field_0x30 = 0;
      *(undefined8 *)&pFVar13->field_0x38 = 0;
      *(undefined8 *)&pFVar13->field_0x40 = 0;
      *(undefined8 *)&pFVar13->field_0x48 = 0;
      *(undefined8 *)&pFVar13->field_0x50 = 0;
      pFVar17 = SVerticalBox::FSlot::FSlot(pFVar13);
    }
    local_6e0 = pFVar17;
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_520,(FSlot *)&local_6e0);
    local_6b8.Value = 1.0;
    local_6b8.Getter._16_8_ = 0;
    local_6b8.bIsSet = true;
    local_6b8.Getter._0_8_ = 0;
    local_6b8.Getter._8_8_ = 0;
    pFVar14 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                        ((FSlotArguments *)local_520,&local_6b8);
    if (((this->PanelDrawerData).Object == (FPanelDrawerData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (this->PanelDrawerData).Object;
    if (((pFVar4->HostedTab).Object == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar18 = SDockTab::GetContent((pFVar4->HostedTab).Object,&local_658);
    pFVar14 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar14,pTVar18);
    pFVar12 = SVerticalBox::FArguments::operator+(pFVar12,pFVar14);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_6d8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_6d0,&local_6d8,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_638,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
               ,0x1b9,local_res8);
    FMemScope::~FMemScope(&local_6d0);
    FLLMScope::~FLLMScope(local_res18);
    pTVar19 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_638,&local_668,pFVar12);
    FVar20.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar21 = pTVar19->Object;
    if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_668.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_638._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_658.SharedReferenceCount.ReferenceController);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_4c8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f0);
    if ((void *)local_4f0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4f0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_510);
    if (local_520[0] != (undefined8 *)0x0) {
      (**(code **)*local_520[0])(local_520[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_648.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_620._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_708.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_230);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_5b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d8);
    if ((void *)local_5d8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_5d8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5f8);
    if (local_608[0] != (undefined8 *)0x0) {
      (**(code **)*local_608[0])(local_608[0],1);
    }
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_438._Slots.AllocatorInstance.Data,local_438._Slots.ArrayNum);
    if ((FSlotArguments *)local_438._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_438._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_438);
  }
  if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_748 = pSVar21;
  local_740.ReferenceController = FVar20.ReferenceController;
  if (&this->PanelDrawerContent != (TSharedPtr<SWidget,1> *)&local_748) {
    (this->PanelDrawerContent).Object = (SWidget *)pSVar21;
    local_748 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PanelDrawerContent).SharedReferenceCount,&local_740);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_740.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_6c0.ReferenceController);
  return;
}

// SetupOpenedLayout @ 1427898e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Slate::Private::SPanelDrawerArea::SetupOpenedLayout(SPanelDrawerArea *this)

{
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FGlobalTabmanager *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined4 uVar11;
  TConsoleVariableData<bool> *pTVar12;
  undefined8 uVar13;
  bool bVar14;
  FArguments *pFVar15;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  TSharedRef<SBox,1> *pTVar18;
  TSharedRef<SSplitter,1> *pTVar19;
  TSharedRef<FGlobalTabmanager,1> *pTVar20;
  FPanelDrawerData *pFVar21;
  SDockTab *this_01;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  TSharedPtr<FTabManager,1> local_c58;
  FLLMScope local_c48;
  FLLMScope local_c44;
  SSplitter *local_c40;
  SBox *local_c38;
  FSharedReferencer<1> local_c30;
  SBox *local_c28;
  FSharedReferencer<1> local_c20;
  code *local_c18;
  undefined8 uStack_c10;
  longlong local_c08;
  TReferenceControllerBase<1> *pTStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined1 local_be8;
  undefined1 local_be0 [8];
  ForAnyElementType FStack_bd8;
  ulonglong local_bd0;
  FName local_bc8;
  FMemScope local_bc0;
  FName local_bb8;
  FMemScope local_bb0;
  FName local_ba8;
  FMemScope local_ba0;
  undefined8 local_b98;
  TReferenceControllerBase<1> *pTStack_b90;
  undefined8 local_b88;
  TReferenceControllerBase<1> *pTStack_b80;
  FDestructionSentinel local_b78;
  SWidget *local_b60;
  TReferenceControllerBase<1> *pTStack_b58;
  code *local_b48;
  undefined4 uStack_b40;
  uint uStack_b3c;
  SWidget *local_b38;
  TReferenceControllerBase<1> *pTStack_b30;
  TSharedRef<SSplitter,1> local_b28;
  TSharedRef<SBox,1> local_b18;
  TSharedRef<SBox,1> local_b08;
  code *local_af8;
  longlong lStack_af0;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_ae8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ad0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ab8;
  code *local_a98;
  longlong lStack_a90;
  FSlotArguments local_a88;
  FSlotArguments local_9f0;
  FArguments local_958;
  FArguments local_6c8;
  FArguments local_388;
  
  pFVar15 = SSplitter::FArguments::FArguments(&local_958);
  pFVar15->_Orientation = Orient_Horizontal;
  pFVar16 = SSplitter::Slot(&local_9f0);
  local_c58.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_c58.Object = (FTabManager *)OnMainContentSlotResized;
  lStack_af0 = (ulonglong)local_c58.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_af8 = OnMainContentSlotResized;
  pFVar16 = SSplitter::FSlot::FSlotArguments::OnSlotResized<UE::Slate::Private::SPanelDrawerArea>
                      (pFVar16,this,(pmf_27a9554c *)&local_af8);
  local_c58.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_c58.Object = (FTabManager *)GetMainContentCoefficient;
  lStack_a90 = (ulonglong)local_c58.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_a98 = GetMainContentCoefficient;
  pFVar16 = SSplitter::FSlot::FSlotArguments::Value<UE::Slate::Private::SPanelDrawerArea>
                      (pFVar16,this,(pmf_8774c200 *)&local_a98);
  pFVar17 = SBox::FArguments::FArguments(&local_388);
  pFVar17->_HAlign = HAlign_Fill;
  pFVar17->_VAlign = VAlign_Fill;
  *(undefined1 *)((longlong)&pFVar17->_padding_ + 2) = 1;
  if (((this->AreaContent).Object == (SWidget *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar1 = (this->AreaContent).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->AreaContent).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SWidget *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b60 = (pFVar17->_Content).Widget.Object;
  pTStack_b58 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = pSVar2;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b58);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_bc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_bc0,&local_bc8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_ab8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0xf9,local_res8);
  FMemScope::~FMemScope(&local_bc0);
  FLLMScope::~FLLMScope(local_res20);
  pTVar18 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ab8,&local_b08,pFVar17);
  pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_c38 = pTVar18->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c30.ReferenceController = pTVar3;
  if ((SBox **)&pFVar16->_padding_ != &local_c38) {
    pFVar16->_padding_ = (longlong)local_c38;
    local_c38 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar16->_padding_,&local_c30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c30.ReferenceController);
  local_c40 = (SSplitter *)SSplitter::FArguments::operator+(pFVar15,pFVar16);
  pFVar16 = SSplitter::Slot(&local_a88);
  uStack_c10._0_4_ = 0;
  local_c18 = OnPanelDrawerSlotResized;
  local_b48 = OnPanelDrawerSlotResized;
  uStack_b40 = 0;
  uStack_b3c = uStack_c10._4_4_;
  pFVar16 = SSplitter::FSlot::FSlotArguments::OnSlotResized<UE::Slate::Private::SPanelDrawerArea>
                      (pFVar16,this,(pmf_27a9554c *)&local_b48);
  uStack_c10 = (ulonglong)uStack_c10._4_4_ << 0x20;
  local_c18 = GetPanelDrawerCoefficient;
  pFVar16 = SSplitter::FSlot::FSlotArguments::Value<UE::Slate::Private::SPanelDrawerArea>
                      (pFVar16,this,(pmf_8774c200 *)&local_c18);
  pFVar17 = SBox::FArguments::FArguments(&local_6c8);
  uStack_bf0 = _UNK_15076b998;
  local_bf8 = ___xmm_40000000000000000000000000000000;
  pFVar17->_HAlign = HAlign_Fill;
  uVar13 = ___xmm_40000000000000000000000000000000;
  pFVar17->_VAlign = VAlign_Fill;
  local_be8 = 1;
  local_bd0 = 0;
  local_be0 = (undefined1  [8])0x0;
  FStack_bd8.Data = (FScriptContainerElement *)0x0;
  ___xmm_40000000000000000000000000000000 = (undefined4)local_bf8;
  _UNK_15076b994 = SUB84(local_bf8,4);
  uVar11 = _UNK_15076b994;
  (pFVar17->_Padding).Value.Left = (float)___xmm_40000000000000000000000000000000;
  ___xmm_40000000000000000000000000000000 = uVar13;
  uVar13 = _UNK_15076b998;
  (pFVar17->_Padding).Value.Top = (float)uVar11;
  _UNK_15076b998 = (undefined4)uStack_bf0;
  _UNK_15076b99c = SUB84(uStack_bf0,4);
  uVar11 = _UNK_15076b99c;
  (pFVar17->_Padding).Value.Right = (float)_UNK_15076b998;
  _UNK_15076b998 = uVar13;
  (pFVar17->_Padding).Value.Bottom = (float)uVar11;
  (pFVar17->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_be0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_be0,
             (FWriteAccessScope *)&local_b78);
  if (((int)local_bd0 != 0) && (FStack_bd8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_bd8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_bd8,0,0,0x10);
    local_bd0 = local_bd0 & 0xffffffff00000000;
  }
  if (local_b78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b78.Accessor,&local_b78);
  }
  if (FStack_bd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_bd8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_be0);
  *(undefined1 *)((longlong)&pFVar17->_padding_ + 2) = 1;
  if (((this->PanelDrawerContent).Object == (SWidget *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar4 = (this->PanelDrawerContent).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->PanelDrawerContent).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SWidget *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b38 = (pFVar17->_Content).Widget.Object;
  pTStack_b30 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = pSVar2;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b30);
  FLLMScope::FLLMScope(&local_c48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_bb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_bb0,&local_bb8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_ad0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0x106,local_res10);
  FMemScope::~FMemScope(&local_bb0);
  FLLMScope::~FLLMScope(&local_c48);
  pTVar18 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ad0,&local_b18,pFVar17);
  pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_c28 = pTVar18->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c20.ReferenceController = pTVar5;
  if ((SBox **)&pFVar16->_padding_ != &local_c28) {
    pFVar16->_padding_ = (longlong)local_c28;
    local_c28 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar16->_padding_,&local_c20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c20.ReferenceController);
  pFVar15 = SSplitter::FArguments::operator+((FArguments *)local_c40,pFVar16);
  FLLMScope::FLLMScope(&local_c44,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ba8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ba0,&local_ba8,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_ae8,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SPanelDrawerArea.cpp"
             ,0xf2,local_res18);
  FMemScope::~FMemScope(&local_ba0);
  FLLMScope::~FLLMScope(&local_c44);
  pTVar19 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ae8,&local_b28,pFVar15);
  plVar9 = &this->_padding_;
  local_c40 = pTVar19->Object;
  pTVar6 = (pTVar19->SharedReferenceCount).ReferenceController;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar9);
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar9);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c08 = this->_padding_;
  pTStack_c00 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_c40;
  this->_padding_ = (longlong)pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c00);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ad0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SBox::FArguments::~FArguments(&local_6c8);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_a88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SBox::FArguments::~FArguments(&local_388);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_9f0);
  SSplitter::FArguments::~FArguments(&local_958);
  pTVar12 = CVarNoAnimationOnTabForegroundedEvent.Ref;
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pTVar12->ShadowedValue[0] == false) {
    return;
  }
  this_00 = &this->PanelDrawerData;
  if (this_00->Object == (FPanelDrawerData *)0x0) {
    return;
  }
  if ((this_00->Object->HostedTab).Object == (SDockTab *)0x0) {
    return;
  }
  pTVar20 = FGlobalTabmanager::Get();
  pTVar1 = (pTVar20->SharedReferenceCount).ReferenceController;
  pFVar7 = pTVar20->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar21 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
  this_01 = TSharedPtr<SDockTab,1>::operator->(&pFVar21->HostedTab);
  SDockTab::GetTabManagerPtr(this_01,&local_c58);
  if ((FGlobalTabmanager *)local_c58.Object == (FGlobalTabmanager *)0x0) {
LAB_14278a048:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    if ((FGlobalTabmanager *)local_c58.Object == pFVar7) goto LAB_14278a0a4;
    if ((FGlobalTabmanager *)local_c58.Object == (FGlobalTabmanager *)0x0) goto LAB_14278a048;
  }
  puVar8 = ((local_c58.Object)->PrivateApi).Object;
  local_b98 = 0;
  pTStack_b90 = (TReferenceControllerBase<1> *)0x0;
  pFVar21 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
  (**(code **)(*(longlong *)*puVar8 + 0x20))((longlong *)*puVar8,&pFVar21->HostedTab,&local_b98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b90);
LAB_14278a0a4:
  puVar8 = (undefined8 *)pFVar7->_padding_;
  local_b88 = 0;
  pTStack_b80 = (TReferenceControllerBase<1> *)0x0;
  pFVar21 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00);
  plVar9 = (longlong *)*puVar8;
  (**(code **)(*plVar9 + 0x20))(plVar9,&pFVar21->HostedTab,&local_b88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_c58.SharedReferenceCount.ReferenceController._4_4_,
                      local_c58.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Tick @ 14278cc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::Tick
          (SPanelDrawerArea *this,FGeometry *param_1,double param_2,float param_3)

{
  FPanelDrawerData *pFVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  
  fVar2 = __real_40a00000;
  pFVar1 = (this->PanelDrawerData).Object;
  if (pFVar1 != (FPanelDrawerData *)0x0) {
    fVar4 = (pFVar1->Size).PanelDrawerCoefficient;
    fVar5 = fVar4 + (pFVar1->Size).MainContentCoefficient;
    local_res8 = SUB84(param_1->Size,0);
    if (fVar5 == 0.0) {
      fVar5 = (local_res8 - __real_40a00000) * __real_3f000000;
    }
    else {
      fVar5 = ((local_res8 - __real_40a00000) * fVar4) / fVar5;
    }
    this->DesiredOpenWidth = fVar5;
    bVar3 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
    if (bVar3) {
      fVar4 = FCurveSequence::GetLerp(&this->OpenCloseAnimation);
      this->AnimatedSlideWidth = (this->DesiredOpenWidth + fVar2) * fVar4;
    }
  }
  return;
}

// UpdateAnimatedSlideWidth @ 1427909b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::SPanelDrawerArea::UpdateAnimatedSlideWidth(SPanelDrawerArea *this)

{
  float fVar1;
  
  fVar1 = FCurveSequence::GetLerp(&this->OpenCloseAnimation);
  this->AnimatedSlideWidth = (this->DesiredOpenWidth + __real_40a00000) * fVar1;
  return;
}

// UpdateAnimation @ 1427909f0

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
UE::Slate::Private::SPanelDrawerArea::UpdateAnimation
          (SPanelDrawerArea *this,double param_1,float param_2)

{
  bool bVar1;
  FSlateThrottleManager *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar1 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
  if (!bVar1) {
    if (this->bIsOpen == false) {
      SetupClosedLayout(this);
    }
    else {
      SetupOpenedLayout(this);
    }
    this_00 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->AnimationThrottle);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->OpenCloseTimer != (TSharedPtr<FActiveTimerHandle,1> *)&local_18) {
      (this->OpenCloseTimer).Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OpenCloseTimer).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return Stop;
  }
  return Continue;
}

