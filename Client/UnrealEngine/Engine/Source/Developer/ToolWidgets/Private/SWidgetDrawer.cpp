// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 18

// ~SWidgetDrawer @ 142d67990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetDrawer::~SWidgetDrawer(SWidgetDrawer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7SWidgetDrawer__6B_;
  CloseDrawerImmediately(this,(FName)0x0);
  pTVar3 = (this->OpenedDrawer).WindowWithOverlayContent.WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OpenedDrawer).DrawerOverlay.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DrawerBox).SharedReferenceCount.ReferenceController);
  DestructItems<FOpenDrawerData,int>
            ((FOpenDrawerData *)(this->DismissingDrawers).AllocatorInstance.Data,
             (this->DismissingDrawers).ArrayNum);
  pFVar4 = (this->DismissingDrawers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->DrawerIdToContentWidget).field_0x48 = 0;
  pvVar5 = *(void **)&(this->DrawerIdToContentWidget).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DrawerIdToContentWidget);
  DestructItems<FWidgetDrawerConfig,int>
            ((FWidgetDrawerConfig *)(this->RegisteredDrawers).AllocatorInstance.Data,
             (this->RegisteredDrawers).ArrayNum);
  pFVar4 = (this->RegisteredDrawers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142d6a840

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>::operator()(void *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142d6a875;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = *(SWidget **)this;
    if ((pSVar1 != (SWidget *)0x0) &&
       (FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes
                  (pSVar1,AllowInvalidationIfConstructed),
       (TEnumAsByte<EVisibility::Private>)*(uchar *)&pSVar1->VisibilityAttribute ==
       EVisibility::Collapsed.Value.Value)) {
      in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (EVisibility)(uchar)in_RDX;
    }
  }
LAB_142d6a875:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  in_RDX->Value = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
}

// CloseDrawerImmediately @ 142d755d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetDrawer::CloseDrawerImmediately(SWidgetDrawer *this,FName param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<FOpenDrawerData,TSizedDefaultAllocator<32>_> *this_00;
  FOpenDrawerData *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  FOpenDrawerData *pFVar8;
  bool bVar9;
  uint uVar10;
  FSharedReferencer<1> FVar11;
  FOpenDrawerData *pFVar12;
  undefined1 local_res10 [8];
  FOpenDrawerData local_68;
  FOpenDrawerData local_40;
  
  this_00 = &this->DismissingDrawers;
  iVar5 = (this->DismissingDrawers).ArrayNum;
  pFVar12 = (FOpenDrawerData *)(this_00->AllocatorInstance).Data;
  pFVar3 = pFVar12 + iVar5;
  pFVar8 = pFVar12;
  if (param_1 == (FName)0x0) {
    while( true ) {
      if ((this->DismissingDrawers).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FOpenDrawerData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar12 == pFVar3) break;
      CloseDrawerImmediatelyInternal(this,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
    DestructItems<FOpenDrawerData,int>
              ((FOpenDrawerData *)(this_00->AllocatorInstance).Data,
               (this->DismissingDrawers).ArrayNum);
    piVar1 = &(this->DismissingDrawers).ArrayMax;
    (this->DismissingDrawers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
    CloseDrawerImmediatelyInternal(this,&this->OpenedDrawer);
    local_68.DrawerId.ComparisonIndex.Value = 0;
    local_68.DrawerId.Number = 0;
    local_68.DrawerOverlay.Object = (SDrawerOverlay *)0x0;
    local_68.DrawerOverlay.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_68.WindowWithOverlayContent.Object = (SWindow *)0x0;
    local_68.WindowWithOverlayContent.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FOpenDrawerData::operator=(&this->OpenedDrawer,&local_68);
    FVar11.ReferenceController = local_68.DrawerOverlay.SharedReferenceCount.ReferenceController;
    if (local_68.WindowWithOverlayContent.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_68.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_68.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_68.WindowWithOverlayContent.WeakReferenceCount.ReferenceController,1);
        FVar11.ReferenceController = local_68.DrawerOverlay.SharedReferenceCount.ReferenceController
        ;
      }
    }
  }
  else {
    for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 1) {
      if (pFVar8->DrawerId == param_1) {
        uVar7 = (uint)(((longlong)pFVar8 - (longlong)pFVar12) / 0x28);
        if (uVar7 != 0xffffffff) {
          uVar10 = 0;
          if ((int)uVar7 < iVar5) {
            uVar10 = ~uVar7 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          CloseDrawerImmediatelyInternal
                    (this,(FOpenDrawerData *)
                          ((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x28));
          uVar10 = 0;
          if ((int)uVar7 < (this->DismissingDrawers).ArrayNum) {
            uVar10 = ~uVar7 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FOpenDrawerData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar7);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&this_00->AllocatorInstance,(this->DismissingDrawers).ArrayNum,
                     &(this->DismissingDrawers).ArrayMax);
          return;
        }
        break;
      }
    }
    if ((this->OpenedDrawer).DrawerId != param_1) {
      return;
    }
    CloseDrawerImmediatelyInternal(this,&this->OpenedDrawer);
    local_40.DrawerOverlay.Object = (SDrawerOverlay *)0x0;
    local_40.DrawerOverlay.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_40.DrawerId.ComparisonIndex.Value = 0;
    local_40.DrawerId.Number = 0;
    local_40.WindowWithOverlayContent.Object = (SWindow *)0x0;
    local_40.WindowWithOverlayContent.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FOpenDrawerData::operator=(&this->OpenedDrawer,&local_40);
    FVar11.ReferenceController = local_40.DrawerOverlay.SharedReferenceCount.ReferenceController;
    if (local_40.WindowWithOverlayContent.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_40.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_40.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_40.WindowWithOverlayContent.WeakReferenceCount.ReferenceController,1);
        FVar11.ReferenceController = local_40.DrawerOverlay.SharedReferenceCount.ReferenceController
        ;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  return;
}

// CloseDrawerImmediatelyInternal @ 142d75890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetDrawer::CloseDrawerImmediatelyInternal(SWidgetDrawer *this,FOpenDrawerData *param_1)

{
  SDrawerOverlay *pSVar1;
  SWindow *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<SWidget,1> local_18;
  
  if (param_1->DrawerId != (FName)0x0) {
    if (((param_1->DrawerOverlay).Object == (SDrawerOverlay *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar6 = (param_1->DrawerOverlay).SharedReferenceCount.ReferenceController;
    pSVar1 = (param_1->DrawerOverlay).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar1 == (SDrawerOverlay *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = (SWidget *)pSVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTVar6 = (param_1->WindowWithOverlayContent).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142d75956;
        }
        LOCK();
        aVar5 = pTVar6->SharedReferenceCount;
        bVar4 = aVar3 == aVar5;
        if (bVar4) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar4);
      this_00 = (param_1->WindowWithOverlayContent).Object;
      if (this_00 != (SWindow *)0x0) {
        SWindow::RemoveOverlaySlot(this_00,&local_18);
      }
    }
LAB_142d75956:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Construct @ 142d8e8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetDrawer::Construct(SWidgetDrawer *this,FArguments *param_1,FName param_2)

{
  FGlobalTabmanager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMemScope FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateApplication *pFVar5;
  TSharedRef<FGlobalTabmanager,1> *pTVar6;
  FArguments *pFVar7;
  TSharedRef<SHorizontalBox,1> *pTVar8;
  longlong *this_00;
  undefined1 local_res8 [24];
  FName local_res20;
  undefined1 local_278 [16];
  undefined1 local_268 [8];
  ForAnyElementType local_260;
  int local_258;
  SHorizontalBox *local_250;
  FSharedReferencer<1> local_248;
  bool local_240;
  FArguments local_238;
  
  this->DrawerName = param_2;
  local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
  local_278._0_8_ = OnGlobalFocusChanging;
  pFVar5 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddSP<SWidgetDrawer>
            ((TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar5->FocusChangingDelegate,(SWidgetDrawer *)local_res8,(pmf_60f79a92 *)this);
  pTVar6 = FGlobalTabmanager::Get();
  local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
  pFVar1 = pTVar6->Object;
  local_278._0_8_ = OnActiveTabChanged;
  TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
  ::CreateSP<SWidgetDrawer>
            ((TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
              *)local_268,this,(pmf_e1c093c2 *)local_278);
  FGlobalTabmanager::OnActiveTabChanged_Subscribe
            (pFVar1,(TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
                     *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
             (FWriteAccessScope *)&local_250);
  if ((local_258 != 0) &&
     ((TReferenceControllerBase<1> *)local_260.Data != (TReferenceControllerBase<1> *)0x0)) {
    (*(code *)**(undefined8 **)local_260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_260,0,0,0x10);
    local_258 = 0;
  }
  if (local_240 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_248.ReferenceController,
               (FDestructionSentinel *)&local_250);
  }
  if ((TReferenceControllerBase<1> *)local_260.Data != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_268);
  pTVar6 = FGlobalTabmanager::Get();
  local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
  pFVar1 = pTVar6->Object;
  local_278._0_8_ = OnActiveTabChanged;
  TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
  ::CreateSP<SWidgetDrawer>
            ((TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
              *)local_268,this,(pmf_e1c093c2 *)local_278);
  FGlobalTabmanager::OnTabForegrounded_Subscribe
            (pFVar1,(TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
                     *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
             (FWriteAccessScope *)&local_250);
  if ((local_258 != 0) &&
     ((TReferenceControllerBase<1> *)local_260.Data != (TReferenceControllerBase<1> *)0x0)) {
    (*(code *)**(undefined8 **)local_260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_260,0,0,0x10);
    local_258 = 0;
  }
  if (local_240 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_248.ReferenceController,
               (FDestructionSentinel *)&local_250);
  }
  if ((TReferenceControllerBase<1> *)local_260.Data != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_268);
  pFVar7 = SHorizontalBox::FArguments::FArguments(&local_238);
  FLLMScope::FLLMScope
            ((FLLMScope *)(local_res8 + 0x10),LLMTagDeclaration_UI_Slate.UniqueName,false,None,
             Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)local_278,&local_res20,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_250,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
             ,0x161,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope((FMemScope *)local_278);
  FLLMScope::~FLLMScope((FLLMScope *)(local_res8 + 0x10));
  if (local_248.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_248.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (this->DrawerBox).SharedReferenceCount.ReferenceController;
  (this->DrawerBox).Object = local_250;
  (this->DrawerBox).SharedReferenceCount.ReferenceController = local_248.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar8 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_250,
                      (TSharedRef<SHorizontalBox,1> *)local_268,pFVar7);
  this_00 = &this->_padding_;
  pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
  FVar3 = (FMemScope)pTVar8->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)FVar3;
  this->_padding_ = (longlong)pTVar2;
  local_278._0_8_ = FVar3;
  local_278._8_8_ = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_260.Data);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_238._Slots.AllocatorInstance.Data,local_238._Slots.ArrayNum);
  if ((FSlotArguments *)local_238._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_238._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
  return;
}

// DismissDrawer @ 142d9e9e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWidgetDrawer::DismissDrawer(SWidgetDrawer *this,TSharedPtr<SWidget,1> *param_1)

{
  int *piVar1;
  TSharedPtr<SDrawerOverlay,1> *pTVar2;
  TWeakPtr<SWindow,1> *pTVar3;
  atomic<int> *paVar4;
  FOpenDrawerData *pFVar5;
  TSharedPtr<FActiveTimerHandle,1> *pTVar6;
  atomic<int> aVar7;
  SDrawerOverlay *this_00;
  FScriptContainerElement *pFVar8;
  SWindow *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  FName FVar11;
  code *pcVar12;
  bool bVar13;
  undefined1 uVar14;
  FThrottleRequest FVar15;
  int iVar16;
  FSlateThrottleManager *this_01;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar17;
  TSharedRef<FActiveTimerHandle,1> *pTVar18;
  longlong lVar19;
  FName *pFVar20;
  FName *pFVar21;
  TArray<FOpenDrawerData,TSizedDefaultAllocator<32>_> *pTVar22;
  FName *pFVar23;
  FActiveTimerHandle *local_b8;
  FSharedReferencer<1> local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  TSharedRef<FActiveTimerHandle,1> local_98;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70 [2];
  FReadAccessScope local_60;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_48;
  
  pFVar5 = &this->OpenedDrawer;
  if (pFVar5->DrawerId == (FName)0x0) {
    return false;
  }
  pFVar20 = (FName *)(this->RegisteredDrawers).AllocatorInstance.Data;
  pFVar23 = pFVar20 + (longlong)(this->RegisteredDrawers).ArrayNum * 0x13;
  for (; (pFVar21 = (FName *)0x0, pFVar20 != pFVar23 &&
         (pFVar21 = pFVar20, *pFVar20 != pFVar5->DrawerId)); pFVar20 = pFVar20 + 0x13) {
  }
  if (((this->OpenedDrawer).DrawerOverlay.Object == (SDrawerOverlay *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  this_00 = (this->OpenedDrawer).DrawerOverlay.Object;
  bVar13 = FCurveSequence::IsForward(&this_00->DrawerEasingCurve);
  if (bVar13) {
    FCurveSequence::Reverse(&this_00->DrawerEasingCurve);
  }
  pTVar6 = &this_00->DrawerOpenCloseTimer;
  if (pTVar6->Object == (FActiveTimerHandle *)0x0) {
    this_01 = FSlateThrottleManager::Get();
    FVar15 = FSlateThrottleManager::EnterResponsiveMode(this_01);
    uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
    (this_00->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar15.Index);
    local_a8 = SDrawerOverlay::UpdateDrawerAnimation;
    pTVar17 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
              ::CreateSP<SDrawerOverlay>(&local_48,this_00,(pmf_75a3d9d7 *)&local_a8);
    pTVar18 = SWidget::RegisterActiveTimer((SWidget *)this_00,&local_98,0.0,pTVar17);
    local_b0.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar18->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar6 != (TSharedPtr<FActiveTimerHandle,1> *)&local_b8) {
      pTVar6->Object = local_b8;
      local_b8 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this_00->DrawerOpenCloseTimer).SharedReferenceCount,&local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  pTVar22 = &this->DismissingDrawers;
  pFVar8 = (pTVar22->AllocatorInstance).Data;
  if (((pFVar8 <= pFVar5) && (pFVar5 < pFVar8 + (longlong)(this->DismissingDrawers).ArrayMax * 0x28)
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  iVar16 = (this->DismissingDrawers).ArrayNum;
  piVar1 = &(this->DismissingDrawers).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar22->AllocatorInstance,piVar1);
  }
  local_88 = 0;
  (this->DismissingDrawers).ArrayNum = iVar16 + 1;
  pTVar2 = &(this->OpenedDrawer).DrawerOverlay;
  pFVar8 = (pTVar22->AllocatorInstance).Data;
  pTVar3 = &(this->OpenedDrawer).WindowWithOverlayContent;
  lVar19 = (longlong)iVar16;
  *(FName *)(pFVar8 + lVar19 * 0x28) = pFVar5->DrawerId;
  *(SDrawerOverlay **)(pFVar8 + lVar19 * 0x28 + 8) = pTVar2->Object;
  *(TReferenceControllerBase<1> **)(pFVar8 + lVar19 * 0x28 + 0x10) =
       (this->OpenedDrawer).DrawerOverlay.SharedReferenceCount.ReferenceController;
  pSVar9 = pTVar3->Object;
  (this->OpenedDrawer).DrawerOverlay.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2->Object = (SDrawerOverlay *)0x0;
  *(SWindow **)(pFVar8 + lVar19 * 0x28 + 0x18) = pSVar9;
  *(TReferenceControllerBase<1> **)(pFVar8 + lVar19 * 0x28 + 0x20) =
       (this->OpenedDrawer).WindowWithOverlayContent.WeakReferenceCount.ReferenceController;
  (this->OpenedDrawer).WindowWithOverlayContent.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3->Object = (SWindow *)0x0;
  (pFVar5->DrawerId).ComparisonIndex = 0;
  (pFVar5->DrawerId).Number = 0;
  if (pTVar2 != (TSharedPtr<SDrawerOverlay,1> *)local_80) {
    pTVar2->Object = (SDrawerOverlay *)0x0;
    pTVar10 = (this->OpenedDrawer).DrawerOverlay.SharedReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      (this->OpenedDrawer).DrawerOverlay.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      LOCK();
      paVar4 = &pTVar10->SharedReferenceCount;
      aVar7 = *paVar4;
      *paVar4 = (atomic<int>)((int)*paVar4 + -1);
      UNLOCK();
      if (aVar7 == (atomic<int>)0x1) {
        (**(code **)pTVar10->_padding_)();
        LOCK();
        paVar4 = &pTVar10->WeakReferenceCount;
        aVar7 = *paVar4;
        *paVar4 = (atomic<int>)((int)*paVar4 + -1);
        UNLOCK();
        if (aVar7 == (atomic<int>)0x1) {
          (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
        }
      }
    }
  }
  if (pTVar3 != (TWeakPtr<SWindow,1> *)local_70) {
    pTVar10 = (this->OpenedDrawer).WindowWithOverlayContent.WeakReferenceCount.ReferenceController;
    pTVar3->Object = (SWindow *)0x0;
    (this->OpenedDrawer).WindowWithOverlayContent.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar4 = &pTVar10->WeakReferenceCount;
      aVar7 = *paVar4;
      *paVar4 = (atomic<int>)((int)*paVar4 + -1);
      UNLOCK();
      if (aVar7 == (atomic<int>)0x1) {
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar21 + 7),&local_60);
  if ((pFVar21[9].ComparisonIndex.Value != 0) && (FVar11 = pFVar21[8], FVar11 != (FName)0x0)) {
    (**(code **)(*(longlong *)FVar11 + 0x68))(FVar11,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  return true;
}

// GetSerializableName @ 142db1aa0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
SWidgetDrawer::GetSerializableName(SWidgetDrawer *this,FString *__return_storage_ptr__)

{
  ::FName::GetPlainNameString(&this->DrawerName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsAnyOtherDrawerOpened @ 142db54e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWidgetDrawer::IsAnyOtherDrawerOpened(SWidgetDrawer *this,FName param_1)

{
  FName FVar1;
  
  FVar1 = (this->OpenedDrawer).DrawerId;
  if ((FVar1 != (FName)0x0) && (FVar1 != param_1)) {
    return true;
  }
  return false;
}

// IsDrawerOpened @ 142db5720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWidgetDrawer::IsDrawerOpened(SWidgetDrawer *this,FName param_1)

{
  return (this->OpenedDrawer).DrawerId == param_1;
}

// MakeStatusBarDrawerButton @ 142db9780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWidgetDrawer::MakeStatusBarDrawerButton
          (SWidgetDrawer *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FWidgetDrawerConfig *param_1)

{
  FWeakReferencer<1> *pFVar1;
  TSharedPtr<SWidget,1> *this_00;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  ISlateStyle *pIVar20;
  FName *pFVar21;
  FArguments *pFVar22;
  FArguments *pFVar23;
  FName FVar24;
  FButtonStyle *pFVar25;
  undefined8 *puVar26;
  TSharedRef<SWidget,1> *pTVar27;
  ulong64 uVar28;
  FArguments *pFVar29;
  FSlot *pFVar30;
  FSlotArguments *pFVar31;
  FArguments *pFVar32;
  TSharedRef<SImage,1> *pTVar33;
  FName FVar34;
  FArguments *pFVar35;
  FTextBlockStyle *pFVar36;
  TSharedRef<STextBlock,1> *pTVar37;
  TSharedRef<SHorizontalBox,1> *pTVar38;
  TSharedRef<SButton,1> *pTVar39;
  TSharedRef<SBorder,1> *pTVar40;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  FName FVar41;
  FWidgetDrawerConfig *pFVar42;
  FWidgetDrawerConfig *local_res18;
  FName local_res20;
  FName local_18d8;
  FDestructionSentinel local_18d0;
  FDestructionSentinel local_18b8;
  T0RequiredArgs local_18a0;
  T0RequiredArgs local_189f;
  T0RequiredArgs local_189e;
  T0RequiredArgs local_189d [5];
  undefined1 local_1898 [8];
  FDelegateAllocation local_1890;
  FDestructionSentinel local_1880;
  undefined1 local_1868 [16];
  ForAnyElementType FStack_1858;
  FDelegateAllocation *local_1850;
  undefined1 local_1848 [16];
  undefined1 local_1838 [8];
  ForAnyElementType FStack_1830;
  ulonglong local_1828;
  STextBlock *local_1820;
  FSharedReferencer<1> local_1818;
  SHorizontalBox *local_1810;
  FSharedReferencer<1> local_1808;
  FName local_1800;
  FArguments *local_17f8;
  SImage *local_17f0;
  FSharedReferencer<1> local_17e8;
  undefined1 local_17e0 [24];
  undefined1 local_17c8 [8];
  ForAnyElementType FStack_17c0;
  ulonglong local_17b8;
  FArguments *local_17b0;
  undefined1 local_17a8;
  undefined1 local_17a0 [8];
  ForAnyElementType FStack_1798;
  ulonglong local_1790;
  FText local_1788;
  undefined1 local_1778;
  undefined1 local_1770 [8];
  ForAnyElementType FStack_1768;
  ulonglong local_1760;
  FText local_1758;
  bool local_1748;
  undefined1 local_1740 [8];
  ForAnyElementType FStack_1738;
  ulonglong local_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  bool local_1718;
  undefined3 uStack_1717;
  undefined1 local_1714;
  undefined1 local_1710 [8];
  ForAnyElementType FStack_1708;
  ulonglong local_1700;
  TSharedRef<SImage,1> local_16f8;
  FDestructionSentinel local_16e8;
  FDelegateAllocation *local_16d0;
  TSharedRef<SWidget,1> local_16c8;
  FDestructionSentinel local_16b8;
  TSharedRef<SHorizontalBox,1> local_16a0;
  TSharedRef<STextBlock,1> local_1690;
  undefined4 local_1680 [2];
  undefined4 local_1678 [2];
  undefined1 local_1670 [8];
  TDelegateBase<FNotThreadSafeDelegateMode> local_1668;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1650;
  FName local_1638;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1630;
  undefined8 *local_1618 [2];
  TReferenceControllerBase<1> *local_1608;
  undefined1 local_1600 [24];
  undefined1 local_15e8 [32];
  undefined4 local_15c8;
  undefined1 local_15c4;
  FSlotArgumentsMixin local_15c0;
  undefined8 *local_1530 [2];
  TReferenceControllerBase<1> *local_1520;
  undefined1 local_1500 [32];
  undefined4 local_14e0;
  undefined1 local_14dc;
  FSlotArgumentsMixin local_14d8;
  undefined1 local_1448 [232];
  FArguments local_1360;
  FArguments local_1158;
  FArguments local_d78;
  FArguments local_ad0;
  FArguments local_590;
  
  local_590._OnDoubleClicked._16_8_ = 0x142db97ac;
  local_res20.ComparisonIndex.Value = 0;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  FVar34 = param_1->UniqueId;
  local_res18 = param_1;
  pIVar20 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar20 + 0x50);
  pFVar21 = ::FName::FName(&local_res20,"Brushes.Panel");
  pFVar22 = (FArguments *)(*pcVar4)(pIVar20,*pFVar21);
  local_17f8 = pFVar22;
  pFVar23 = SBorder::FArguments::FArguments(&local_1158);
  uVar15 = _UNK_150925078;
  local_17e0[0x10] = true;
  local_17b8 = 0;
  local_17e0._0_4_ = ___xmm_00000000400000000000000040000000;
  local_17e0._4_4_ = _UNK_150925074;
  local_17e0._8_4_ = _UNK_150925078;
  local_17e0._12_4_ = _UNK_15092507c;
  local_17c8 = (undefined1  [8])0x0;
  FStack_17c0.Data = (FScriptContainerElement *)0x0;
  fVar16 = _UNK_150925074;
  (pFVar23->_Padding).Value.Left = ___xmm_00000000400000000000000040000000;
  uVar19 = _UNK_150925078;
  (pFVar23->_Padding).Value.Top = fVar16;
  _UNK_150925078 = (float)uVar15;
  _UNK_15092507c = SUB84(uVar15,4);
  fVar16 = _UNK_15092507c;
  (pFVar23->_Padding).Value.Right = _UNK_150925078;
  _UNK_150925078 = uVar19;
  (pFVar23->_Padding).Value.Bottom = fVar16;
  (pFVar23->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_17c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_17c8,
             (FWriteAccessScope *)&local_18b8);
  if (((int)local_17b8 != 0) && (FStack_17c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_17c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_17c0,0,0,0x10);
    local_17b8 = local_17b8 & 0xffffffff00000000;
  }
  if (local_18b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18b8.Accessor,&local_18b8);
  }
  if (FStack_17c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_17c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17c8);
  local_17a8 = 1;
  local_1790 = 0;
  local_17a0 = (undefined1  [8])0x0;
  FStack_1798.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_BorderImage).Value = (FSlateBrush *)pFVar22;
  (pFVar23->_BorderImage).bIsSet = true;
  local_17b0 = pFVar22;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_17a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_17a0,
             (FWriteAccessScope *)&local_18b8);
  if (((int)local_1790 != 0) && (FStack_1798.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1798.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1798,0,0,0x10);
    local_1790 = local_1790 & 0xffffffff00000000;
  }
  if (local_18b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18b8.Accessor,&local_18b8);
  }
  if (FStack_1798.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1798.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17a0);
  local_1868[0] = EVisibility::SelfHitTestInvisible.Value.Value;
  local_1868[1] = 1;
  local_1850 = (FDelegateAllocation *)0x0;
  local_1868._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
  FStack_1858.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar23->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar23->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar23->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1868 + 8));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_1868 + 8),
             (FWriteAccessScope *)&local_18b8);
  if (((int)local_1850 != 0) && (FStack_1858.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1858.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1858,0,0,0x10);
    local_1850 = (FDelegateAllocation *)((ulonglong)local_1850 & 0xffffffff00000000);
  }
  if (local_18b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18b8.Accessor,&local_18b8);
  }
  if (FStack_1858.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1858.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1868 + 8));
  pFVar23->_VAlign = VAlign_Center;
  FVar24 = (FName)SButton::FArguments::FArguments(&local_ad0);
  *(bool *)((longlong)FVar24 + 0x4d0) = false;
  local_18b8._0_8_ = FVar24;
  pIVar20 = FAppStyle::Get();
  pFVar21 = ::FName::FName(&local_1638,"StatusBar.StatusBarButton");
  pFVar25 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar20 + 0xa0))(pIVar20,FButtonStyle::TypeName,*pFVar21,0,1);
  if (pFVar25 == (FButtonStyle *)0x0) {
    pFVar25 = FButtonStyle::GetDefault();
  }
  *(FButtonStyle **)((longlong)FVar24 + 0x208) = pFVar25;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar24 + 0x2e0),
             (FWriteAccessScope *)&local_16e8);
  local_16d0 = (FDelegateAllocation *)((longlong)FVar24 + 0x2e8);
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,local_16d0);
  pFVar42 = local_res18;
  if (puVar26 != (undefined8 *)0x0) {
    local_18d0._0_8_ = OnDrawerButtonClicked;
    local_18d0.Accessor =
         (FMRSWRecursiveAccessDetector *)
         ((ulonglong)local_16f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_1880);
    pFVar42 = (FWidgetDrawerConfig *)(pTVar27->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar27->Object;
    if (pFVar42 != (FWidgetDrawerConfig *)0x0) {
      LOCK();
      *(int *)&pFVar42->GetDrawerContentDelegate =
           (int)*(atomic<int> *)&pFVar42->GetDrawerContentDelegate + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar42->GetDrawerContentDelegate =
           (int)*(atomic<int> *)&pFVar42->GetDrawerContentDelegate + 1;
      UNLOCK();
    }
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    *(FName *)(puVar26 + 1) = FVar34;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetDrawer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar26[3] = pSVar5;
    puVar26[4] = pFVar42;
    if (pFVar42 != (FWidgetDrawerConfig *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)&(pFVar42->GetDrawerContentDelegate).field_0x4;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar13 = true;
    bVar12 = true;
    ((FName *)(puVar26 + 5))->ComparisonIndex = (FNameEntryId)local_18d0.AccessType;
    ((FName *)(puVar26 + 5))->Number = local_18d0._4_4_;
    puVar26[6] = local_18d0.Accessor;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar42);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar42);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1880.Accessor);
  }
  if (local_16e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_16e8.Accessor,&local_16e8);
  }
  pFVar42 = local_res18;
  local_1788.TextData.Reference = (local_res18->ToolTipText).TextData.Reference;
  if (local_1788.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1788.TextData.Reference + 8))
              (local_1788.TextData.Reference,&local_18d8);
  }
  local_1788.Flags = (pFVar42->ToolTipText).Flags;
  local_1778 = 1;
  FVar34.ComparisonIndex.Value = 0;
  FVar34.Number = 0;
  local_1760 = 0;
  local_1770 = (undefined1  [8])0x0;
  FStack_1768.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)FVar24,&local_1788);
  *(undefined1 *)((longlong)FVar24 + 0x10) = local_1778;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar24 + 0x18),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1770);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1770,
             (FWriteAccessScope *)&local_18d0);
  if (((int)local_1760 != 0) && (FStack_1768.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1768.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1768,0,0,0x10);
    local_1760 = local_1760 & 0xffffffff00000000;
  }
  if (local_18d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18d0.Accessor,&local_18d0);
  }
  if (FStack_1768.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1768.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1770);
  if (local_1788.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1788.TextData.Reference + 0x10))();
  }
  pFVar29 = SHorizontalBox::FArguments::FArguments(&local_1360);
  pFVar30 = ::operator_new(0x58);
  local_18d8 = FVar34;
  if (pFVar30 != (FSlot *)0x0) {
    *(undefined8 *)pFVar30 = 0;
    *(undefined8 *)&pFVar30->field_0x8 = 0;
    *(undefined8 *)&pFVar30->field_0x10 = 0;
    *(undefined8 *)&pFVar30->field_0x18 = 0;
    *(undefined8 *)&pFVar30->field_0x20 = 0;
    *(undefined8 *)&pFVar30->field_0x28 = 0;
    *(undefined8 *)&pFVar30->field_0x30 = 0;
    *(undefined8 *)&pFVar30->field_0x38 = 0;
    *(undefined8 *)&pFVar30->field_0x40 = 0;
    *(undefined8 *)&pFVar30->field_0x48 = 0;
    *(undefined8 *)&pFVar30->field_0x50 = 0;
    local_18d8 = (FName)SHorizontalBox::FSlot::FSlot(pFVar30);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1448,(FSlot *)&local_18d8);
  FVar24 = (FName)TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                            ((FSlotArgumentsMixin *)(local_1448 + 0x18),__real_40000000);
  pFVar1 = (FWeakReferencer<1> *)((longlong)FVar24 + 0x48);
  if ((FWeakReferencer<1> *)local_1680 != pFVar1) {
    *(undefined4 *)&pFVar1->ReferenceController = 1;
    *(undefined1 *)((longlong)FVar24 + 0x4c) = 1;
  }
  FVar41 = FVar34;
  if (pFVar1 != (FWeakReferencer<1> *)0x0) {
    FVar41 = FVar24;
  }
  if ((TOptional<FSlateClippingState> *)local_1678 !=
      (TOptional<FSlateClippingState> *)((longlong)FVar41 + 0x50)) {
    *(undefined4 *)&((TOptional<FSlateClippingState> *)((longlong)FVar41 + 0x50))->TypedValue = 2;
    *(undefined1 *)((longlong)FVar41 + 0x54) = 1;
  }
  FVar24 = FVar34;
  if (FVar41 != (FName)0xffffffffffffffb8) {
    FVar24 = FVar41;
  }
  pFVar31 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)FVar24);
  pFVar32 = SImage::FArguments::FArguments(&local_d78);
  uVar18 = local_18d0._18_2_;
  uVar15 = _UNK_15090c6d8;
  local_1714 = 1;
  local_18d0._16_2_ = 2;
  uVar17 = local_18d0._16_4_;
  local_18d0.bDestroyed = SUB21(2,0);
  local_18d0._17_3_ = SUB43(uVar17,1);
  local_1718 = local_18d0.bDestroyed;
  uStack_1717 = local_18d0._17_3_;
  local_1700 = 0;
  local_1728 = ___xmm_3f8000003f800000000000003f800000;
  uStack_1720 = _UNK_15090c6d8;
  local_1710 = (undefined1  [8])0x0;
  FStack_1708.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar32->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar32->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar15;
  local_18d0.bDestroyed = SUB21(2,0);
  local_18d0._17_1_ = SUB21(2 >> 8,0);
  (pFVar32->_ColorAndOpacity).Value.ColorUseRule = local_18d0.bDestroyed;
  (pFVar32->_ColorAndOpacity).Value.ColorTableId = local_18d0._17_1_;
  *(undefined2 *)&(pFVar32->_ColorAndOpacity).Value.field_0x12 = uVar18;
  (pFVar32->_ColorAndOpacity).bIsSet = true;
  local_18d0._16_4_ = uVar17;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1710);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1710,
             (FWriteAccessScope *)&local_18d0);
  if (((int)local_1700 != 0) && (FStack_1708.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1708.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1708,0,0,0x10);
    local_1700 = local_1700 & 0xffffffff00000000;
  }
  if (local_18d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18d0.Accessor,&local_18d0);
  }
  if (FStack_1708.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1708.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1710);
  local_1848._0_8_ = pFVar42->Icon;
  local_1848[8] = true;
  local_1828 = 0;
  local_1838 = (undefined1  [8])0x0;
  FStack_1830.Data = (FScriptContainerElement *)0x0;
  (pFVar32->_Image).Value = (FSlateBrush *)local_1848._0_8_;
  (pFVar32->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1838);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1838,
             (FWriteAccessScope *)&local_18d0);
  if (((int)local_1828 != 0) && (FStack_1830.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1830.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1830,0,0,0x10);
    local_1828 = local_1828 & 0xffffffff00000000;
  }
  if (local_18d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18d0.Accessor,&local_18d0);
  }
  if (FStack_1830.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1830.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1838);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_18d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1800 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1880,&local_1800,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_16e8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
             ,0x1cd,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_1880);
  FLLMScope::~FLLMScope((FLLMScope *)&local_18d8);
  pTVar33 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_16e8,&local_16f8,
                       pFVar32);
  pTVar6 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_17f0 = pTVar33->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_17e8.ReferenceController = pTVar6;
  if ((SImage **)&pFVar31->field_0x8 != &local_17f0) {
    *(SImage **)&pFVar31->field_0x8 = local_17f0;
    local_17f0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_17e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17e8.ReferenceController);
  local_18d0._0_8_ = SHorizontalBox::FArguments::operator+(pFVar29,pFVar31);
  pFVar30 = ::operator_new(0x58);
  if (pFVar30 != (FSlot *)0x0) {
    *(undefined8 *)pFVar30 = 0;
    *(undefined8 *)&pFVar30->field_0x8 = 0;
    *(undefined8 *)&pFVar30->field_0x10 = 0;
    *(undefined8 *)&pFVar30->field_0x18 = 0;
    *(undefined8 *)&pFVar30->field_0x20 = 0;
    *(undefined8 *)&pFVar30->field_0x28 = 0;
    *(undefined8 *)&pFVar30->field_0x30 = 0;
    *(undefined8 *)&pFVar30->field_0x38 = 0;
    *(undefined8 *)&pFVar30->field_0x40 = 0;
    *(undefined8 *)&pFVar30->field_0x48 = 0;
    *(undefined8 *)&pFVar30->field_0x50 = 0;
    FVar34 = (FName)SHorizontalBox::FSlot::FSlot(pFVar30);
  }
  local_1880._0_8_ = FVar34;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1618,(FSlot *)&local_1880);
  local_15c8 = 2;
  local_15c4 = 1;
  pFVar31 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_1600,__real_40000000);
  pFVar35 = STextBlock::FArguments::FArguments(&local_590);
  pIVar20 = FAppStyle::Get();
  pFVar21 = ::FName::FName((FName *)&local_16c8,"NormalText");
  pFVar36 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar20 + 0xa0))(pIVar20,FTextBlockStyle::TypeName,*pFVar21,0,1)
  ;
  if (pFVar36 == (FTextBlockStyle *)0x0) {
    pFVar36 = FTextBlockStyle::GetDefault();
  }
  pFVar35->_TextStyle = pFVar36;
  local_1758.TextData.Reference = (pFVar42->ButtonText).TextData.Reference;
  if (local_1758.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1758.TextData.Reference + 8))
              (local_1758.TextData.Reference,&local_18d8);
  }
  local_1758.Flags = (pFVar42->ButtonText).Flags;
  local_1748 = true;
  local_1730 = 0;
  local_1740 = (undefined1  [8])0x0;
  FStack_1738.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar35->_Text).Value,&local_1758);
  (pFVar35->_Text).bIsSet = local_1748;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1740);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1740,
             (FWriteAccessScope *)&local_1880);
  if (((int)local_1730 != 0) && (FStack_1738.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1738.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1738,0,0,0x10);
    local_1730 = local_1730 & 0xffffffff00000000;
  }
  if (local_1880.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1880.Accessor,&local_1880);
  }
  if (FStack_1738.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1738.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1740);
  if (local_1758.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1758.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_18d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1880.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_1880._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_1800,(FName *)&local_1880,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1650,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
             ,0x1d5,&local_18a0);
  FMemScope::~FMemScope((FMemScope *)&local_1800);
  FLLMScope::~FLLMScope((FLLMScope *)&local_18d8);
  pTVar37 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1650,&local_1690,pFVar35);
  pTVar7 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_1820 = pTVar37->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1818.ReferenceController = pTVar7;
  if ((STextBlock **)&pFVar31->field_0x8 != &local_1820) {
    *(STextBlock **)&pFVar31->field_0x8 = local_1820;
    local_1820 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_1818);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1818.ReferenceController);
  pFVar29 = SHorizontalBox::FArguments::operator+((FArguments *)local_18d0._0_8_,pFVar31);
  pFVar30 = ::operator_new(0x58);
  FVar24.ComparisonIndex.Value = 0;
  FVar24.Number = 0;
  if (pFVar30 != (FSlot *)0x0) {
    *(undefined8 *)pFVar30 = 0;
    *(undefined8 *)&pFVar30->field_0x8 = 0;
    *(undefined8 *)&pFVar30->field_0x10 = 0;
    *(undefined8 *)&pFVar30->field_0x18 = 0;
    *(undefined8 *)&pFVar30->field_0x20 = 0;
    *(undefined8 *)&pFVar30->field_0x28 = 0;
    *(undefined8 *)&pFVar30->field_0x30 = 0;
    *(undefined8 *)&pFVar30->field_0x38 = 0;
    *(undefined8 *)&pFVar30->field_0x40 = 0;
    *(undefined8 *)&pFVar30->field_0x48 = 0;
    *(undefined8 *)&pFVar30->field_0x50 = 0;
    FVar24 = (FName)SHorizontalBox::FSlot::FSlot(pFVar30);
  }
  local_18d0._0_8_ = FVar24;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1530,(FSlot *)&local_18d0);
  local_14e0 = 2;
  local_14dc = 1;
  pFVar31 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_1530);
  local_1810 = (pFVar42->CustomButtonWidgets).Object;
  pTVar8 = (pFVar42->CustomButtonWidgets).SharedReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1808.ReferenceController = pTVar8;
  if ((SHorizontalBox **)&pFVar31->field_0x8 != &local_1810) {
    *(SHorizontalBox **)&pFVar31->field_0x8 = local_1810;
    local_1810 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_1808);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1808.ReferenceController);
  pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar31);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_18d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_18d0.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_18d0._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_1880,(FName *)&local_18d0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)local_1670,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
             ,0x1c6,&local_189f);
  FMemScope::~FMemScope((FMemScope *)&local_1880);
  FLLMScope::~FLLMScope((FLLMScope *)&local_18d8);
  pTVar38 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)local_1670,
                       &local_16a0,pFVar29);
  uVar15 = local_18b8._0_8_;
  pTVar9 = (pTVar38->SharedReferenceCount).ReferenceController;
  local_18d0._0_8_ = pTVar38->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = *(TReferenceControllerBase<1> **)
             &((TAlwaysValidWidget *)(local_18b8._0_8_ + 0x200))->Widget;
  (((TAlwaysValidWidget *)(local_18b8._0_8_ + 0x1f8))->Widget).Object = local_18d0._0_8_;
  *(TReferenceControllerBase<1> **)&((TAlwaysValidWidget *)(local_18b8._0_8_ + 0x200))->Widget =
       pTVar9;
  local_18d0.Accessor = (FMRSWRecursiveAccessDetector *)pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_18d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_18b8.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_18b8._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_18d0,(FName *)&local_18b8,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1630,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
             ,0x1c0,&local_189e);
  FMemScope::~FMemScope((FMemScope *)&local_18d0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_18d8);
  pTVar39 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1630,(TSharedRef<SButton,1> *)local_1898,(FArguments *)uVar15);
  pTVar10 = (pTVar39->SharedReferenceCount).ReferenceController;
  local_18b8._0_8_ = pTVar39->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar23->_Content).Widget.Object = (SWidget *)local_18b8._0_8_;
  (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar10;
  local_18b8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_18d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_18b8.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_18b8._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_18d0,(FName *)&local_18b8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_1880,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
             ,0x1ba,local_189d);
  FMemScope::~FMemScope((FMemScope *)&local_18d0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_18d8);
  pTVar40 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_1880,
                       (TSharedRef<SBorder,1> *)&local_16b8,pFVar23);
  pTVar11 = (pTVar40->SharedReferenceCount).ReferenceController;
  FVar34 = (FName)pTVar40->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18b8._0_8_ = FVar34;
  local_18b8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_16b8.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1880.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1890.DelegateAllocator);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1630._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1668._0_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_14d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1500);
  if ((void *)local_1500._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1500._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1500);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1520);
  if (local_1530[0] != (undefined8 *)0x0) {
    (**(code **)*local_1530[0])(local_1530[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1690.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1650._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_590);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_15c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15e8);
  if ((void *)local_15e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_15e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1608);
  if (local_1618[0] != (undefined8 *)0x0) {
    (**(code **)*local_1618[0])(local_1618[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_16f8.SharedReferenceCount.ReferenceController._4_4_,
                      local_16f8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_16e8.Accessor);
  SImage::FArguments::~FArguments(&local_d78);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1448);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1360._Slots.AllocatorInstance.Data,local_1360._Slots.ArrayNum);
  if ((FSlotArguments *)local_1360._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1360._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1360);
  SButton::FArguments::~FArguments(&local_ad0);
  SBorder::FArguments::~FArguments(&local_1158);
  pSVar5 = (local_res18->CustomWidget).Object;
  this_00 = &local_res18->CustomWidget;
  if (pSVar5 == (SWidget *)0x0) {
    __return_storage_ptr__->Object = (SWidget *)FVar34;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    pTVar6 = (local_res18->CustomWidget).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar29 = SHorizontalBox::FArguments::FArguments(&local_1360);
    pFVar31 = SHorizontalBox::Slot((FSlotArguments *)local_1618);
    pFVar31 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar31);
    pFVar31 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar31,(TSharedRef<SWidget,1> *)&local_18b8);
    pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar31);
    pFVar31 = SHorizontalBox::Slot((FSlotArguments *)local_1448);
    local_18b8._0_8_ =
         TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                   ((FSlotArgumentsMixin *)&pFVar31->field_0x18,__real_40000000,0.0,0.0,0.0);
    pFVar22 = SBorder::FArguments::FArguments(&local_1158);
    local_17e0[0x10] = true;
    local_17e0._0_4_ = ___xmm_00000000400000000000000040000000;
    local_17e0._4_4_ = _UNK_150925074;
    local_17e0._8_4_ = _UNK_150925078;
    local_17e0._12_4_ = _UNK_15092507c;
    local_17b8 = 0;
    local_17c8 = (undefined1  [8])0x0;
    FStack_17c0.Data = (FScriptContainerElement *)0x0;
    pFVar22 = SBorder::FArguments::Padding(pFVar22,(TAttribute<FMargin> *)local_17e0);
    local_1848._0_8_ = local_17f8;
    local_1848[8] = true;
    local_1838 = (undefined1  [8])0x0;
    FStack_1830.Data = (FScriptContainerElement *)0x0;
    local_1828 = 0;
    local_17f8 = SBorder::FArguments::BorderImage
                           (pFVar22,(TAttribute<FSlateBrush_const_*> *)local_1848);
    local_1898 = (undefined1  [8])0x0;
    local_1890.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1890.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1898,
               (FWriteAccessScope *)local_1868);
    local_1850 = &local_1890;
    puVar26 = UE::Core::Private::DelegateAllocate(0x28,&local_1890);
    if (puVar26 != (undefined8 *)0x0) {
      *puVar26 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar26[2] = uVar28;
      *puVar26 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::`5'::<lambda_1>_>
                  ::_vftable_;
      puVar26[3] = pSVar5;
      puVar26[4] = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
    if (FStack_1858.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1868._8_8_,(FDestructionSentinel *)local_1868
                );
    }
    local_1670[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_1670[1] = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1668,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1898);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1898,
               (FWriteAccessScope *)&local_16b8);
    if ((local_1890.DelegateSize != 0) &&
       (local_1890.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)*(longlong *)local_1890.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1890,0,0,0x10);
      local_1890.DelegateSize = 0;
    }
    if (local_16b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_16b8.Accessor,&local_16b8);
    }
    if (local_1890.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1890.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1898);
    pFVar22 = TSlateBaseNamedArgs<SBorder>::Visibility
                        ((TSlateBaseNamedArgs<SBorder> *)local_17f8,
                         (TAttribute<EVisibility> *)local_1670);
    pFVar22->_VAlign = VAlign_Center;
    pTVar27 = TSharedPtr<SWidget,1>::ToSharedRef(this_00,(TSharedRef<SWidget,1> *)&local_16a0);
    TSharedRef<SWidget,1>::operator=(&(pFVar22->_Content).Widget,pTVar27);
    this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_1650,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
                         ,0x1fc,(T0RequiredArgs *)&local_res18);
    pTVar40 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,(TSharedRef<SBorder,1> *)&local_1690,pFVar22);
    pTVar7 = (pTVar40->SharedReferenceCount).ReferenceController;
    local_16c8.Object = (SWidget *)pTVar40->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_16c8.SharedReferenceCount.ReferenceController = pTVar7;
    pFVar31 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_18b8._0_8_,&local_16c8);
    pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar31);
    this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_16e8,
                         "SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
                         ,499,(T0RequiredArgs *)&local_res20);
    pTVar38 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,(TSharedRef<SHorizontalBox,1> *)&local_16f8,pFVar29);
    __return_storage_ptr__->Object = (SWidget *)pTVar38->Object;
    pTVar8 = (pTVar38->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_16f8.SharedReferenceCount.ReferenceController._4_4_,
                        local_16f8.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_16e8.Accessor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1690.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1650._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16a0.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_1158);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1448);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1618);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_1360._Slots.AllocatorInstance.Data,local_1360._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1360._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1360._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1360);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// OnActiveTabChanged @ 142dbbc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetDrawer::OnActiveTabChanged
          (SWidgetDrawer *this,TSharedPtr<SDockTab,1> *param_1,TSharedPtr<SDockTab,1> *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ETabRole EVar4;
  SDockTab *pSVar5;
  TSharedPtr<FTabManager,1> *pTVar6;
  TSharedPtr<FTabManager,1> *pTVar7;
  TSharedPtr<FTabManager,1> local_38;
  TSharedPtr<FTabManager,1> local_28;
  
  bVar2 = false;
  bVar1 = false;
  if (param_2->Object == (SDockTab *)0x0) goto LAB_142dbbcbd;
  EVar4 = SDockTab::GetTabRole(param_2->Object);
  if (EVar4 != MajorTab) {
    if (param_1->Object == (SDockTab *)0x0) {
LAB_142dbbc79:
      bVar3 = false;
    }
    else {
      pSVar5 = TSharedPtr<SDockTab,1>::operator->(param_2);
      pTVar6 = SDockTab::GetTabManagerPtr(pSVar5,&local_28);
      pSVar5 = TSharedPtr<SDockTab,1>::operator->(param_1);
      pTVar7 = SDockTab::GetTabManagerPtr(pSVar5,&local_38);
      bVar2 = true;
      bVar1 = true;
      if (pTVar7->Object == pTVar6->Object) goto LAB_142dbbc79;
      bVar3 = true;
    }
    if (bVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    if (!bVar3) goto LAB_142dbbcbd;
  }
  CloseDrawerImmediately(this,(FName)0x0);
LAB_142dbbcbd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnDrawerButtonClicked @ 142dbdd30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidgetDrawer::OnDrawerButtonClicked
          (SWidgetDrawer *this,FReply *__return_storage_ptr__,FName param_1)

{
  TSharedPtr<SWidget,1> local_18;
  
  if ((this->OpenedDrawer).DrawerId != param_1) {
    OpenDrawer(this,param_1);
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  local_18.Object = (SWidget *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  DismissDrawer(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnDrawerHeightChanged @ 142dbdda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetDrawer::OnDrawerHeightChanged(SWidgetDrawer *this,float param_1)

{
  float fVar1;
  SWindow *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDeprecateSlateVector2D FVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  float fVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [3];
  
  pTVar6 = (this->OpenedDrawer).WindowWithOverlayContent.WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dbdde5;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->OpenedDrawer).WindowWithOverlayContent.Object;
    if (this_00 != (SWindow *)0x0) {
      fVar9 = SWindow::GetDPIScaleFactor(this_00);
      FVar4 = SWindow::GetSizeInScreen(this_00);
      fVar1 = *(float *)((longlong)FVar4 + 4);
      pFVar5 = ::FName::ToString(&(this->OpenedDrawer).DrawerId,local_38);
      ::FName::GetPlainNameString(&this->DrawerName,&local_48);
      ::FString::ConcatFC(&local_58,&local_48,L".");
      ::FString::ConcatFF(&local_68,&local_58,pFVar5);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar7.Data = local_68.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::SetFloat
                (GConfig,L"DrawerSizes",(wchar_t *)FVar7.Data,(fVar9 * param_1) / fVar1,
                 &GEditorSettingsIni);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
LAB_142dbdde5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// OnGlobalFocusChanging @ 142dbf520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetDrawer::OnGlobalFocusChanging
          (SWidgetDrawer *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,
          TSharedPtr<SWidget,1> *param_3,FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  code *pcVar1;
  EVisibility EVar2;
  FSharedReferencer<1> FVar3;
  SDrawerOverlay *pSVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FSlateApplication *pFVar8;
  TSharedPtr<SWindow,1> *pTVar9;
  ForElementType<FArrangedWidget> FVar10;
  undefined1 auStack_218 [32];
  TSharedPtr<SWidget,1> local_1f8;
  SDrawerOverlay *local_1e8;
  FSharedReferencer<1> FStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  FSharedReferencer<1> local_1c8;
  TSharedRef<SWidget_const_,1> local_1c0;
  TSharedPtr<SWindow,1> local_1b0;
  TSharedRef<SWidget,1> local_1a0;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_218;
  bVar6 = false;
  local_1d8 = 0;
  if (bIsRentrant) {
    return;
  }
  bIsRentrant = true;
  TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1a0);
  local_1e8 = (SDrawerOverlay *)0x0;
  FStack_1e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->OpenedDrawer).DrawerId != (FName)0x0) {
    local_1c8.ReferenceController =
         (this->OpenedDrawer).DrawerOverlay.SharedReferenceCount.ReferenceController;
    local_1e8 = (this->OpenedDrawer).DrawerOverlay.Object;
    if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1e0,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.ReferenceController);
  }
  pSVar4 = local_1e8;
  bVar7 = false;
  bVar5 = FWidgetPath::ContainsWidget(param_4,(SWidget *)local_1e8);
  if (((bVar5) || (bVar5 = FWidgetPath::ContainsWidget(param_4,(SWidget *)this), bVar5)) ||
     (bVar5 = false, (param_4->Widgets).Array.ArrayNum == 0)) {
    bVar5 = true;
  }
  if ((GIsSlowTask != false) || (bVar5)) {
LAB_142dbf645:
    bVar5 = false;
  }
  else {
    pFVar8 = FSlateApplication::Get();
    bVar6 = true;
    pTVar9 = FSlateApplication::GetActiveModalWindow(pFVar8,&local_1b0);
    if ((pTVar9->Object != (SWindow *)0x0) || (pSVar4 == (SDrawerOverlay *)0x0)) goto LAB_142dbf645;
    bVar5 = true;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
  }
  if (!bVar5) goto LAB_142dbf7b8;
  pFVar8 = FSlateApplication::Get();
  FSlateApplication::GetMenuHostWidget(pFVar8,&local_1f8);
  if (local_1f8.Object == (SWidget *)0x0) {
    if (param_1->Cause == WindowActivate) goto LAB_142dbf79e;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
  }
  else {
    FWidgetPath::FWidgetPath(&local_190);
    pFVar8 = FSlateApplication::Get();
    EVar2 = EVisibility::Visible;
    if ((local_1f8.Object == (SWidget *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar3.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
    if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_1f8.Object == (SWidget *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_1c0.Object = local_1f8.Object;
    local_1c0.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar3.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::GeneratePathToWidgetUnchecked(pFVar8,&local_1c0,&local_190,EVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    bVar7 = FWidgetPath::ContainsWidget(&local_190,(SWidget *)pSVar4);
    bVar7 = !bVar7;
    if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_190.Widgets.Array.ArrayNum);
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
    }
LAB_142dbf79e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    if (!bVar7) goto LAB_142dbf7b8;
  }
  DismissDrawer(this,param_5);
LAB_142dbf7b8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  bIsRentrant = false;
  return;
}

// OpenDrawer @ 142dcaee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetDrawer::OpenDrawer(SWidgetDrawer *this,FName param_1)

{
  longlong *this_00;
  byte *pbVar1;
  atomic<int> *paVar2;
  TSharedPtr<FActiveTimerHandle,1> *pTVar3;
  atomic<int> aVar4;
  code *pcVar5;
  SWidget *pSVar6;
  FName FVar7;
  bool bVar8;
  bool bVar9;
  SWindow *this_01;
  SWindow *this_02;
  SDrawerOverlay *this_03;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  FThrottleRequest FVar15;
  TSharedRef<SWidget,1> *pTVar16;
  FSlateApplication *pFVar17;
  FDeprecateSlateVector2D FVar18;
  FString *pFVar19;
  FGeometry *pFVar20;
  FMargin *pFVar21;
  FScopedWidgetSlotArguments *pFVar22;
  FArguments *pFVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  FSlateThrottleManager *this_04;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar26;
  TSharedRef<FActiveTimerHandle,1> *pTVar27;
  FName FVar28;
  FName *pFVar29;
  FName *pFVar30;
  ForAnyElementType FVar31;
  TReferenceControllerBase<1> *pTVar32;
  FScopedWidgetSlotArguments *pFVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_638 [32];
  T0RequiredArgs local_608 [4];
  float local_604;
  SWindow *local_600;
  TReferenceControllerBase<1> *local_5f8;
  FLLMScope local_5f0 [2];
  undefined8 local_5e8;
  SDrawerOverlay *local_5e0;
  FSharedReferencer<1> local_5d8;
  TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> local_5d0;
  FOpenDrawerData local_5b8;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  float fStack_584;
  undefined1 local_580;
  undefined1 local_578 [8];
  ForAnyElementType FStack_570;
  ulonglong local_568;
  FName local_560;
  undefined4 uStack_558;
  float fStack_554;
  FString local_548;
  FActiveTimerHandle *local_538;
  FSharedReferencer<1> local_530;
  undefined4 local_528 [4];
  longlong *local_518;
  FMemScope local_510;
  SWidgetDrawer *local_508;
  SWidget *local_500;
  TReferenceControllerBase<1> *local_4f8;
  TReferenceControllerBase<1> *local_4f0;
  FString local_4e8;
  SWidget *local_4d8;
  TReferenceControllerBase<1> *local_4d0;
  TSharedPtr<SWidget,1> local_4c8;
  SWidget *local_4b8;
  TReferenceControllerBase<1> *local_4b0;
  FString local_4a8;
  FDestructionSentinel local_498;
  FDestructionSentinel local_480;
  undefined1 *local_468;
  FDestructionSentinel local_460;
  undefined1 *local_448;
  FString local_440;
  TSharedRef<SWidget,1> local_430;
  SWidget *local_420;
  TReferenceControllerBase<1> *pTStack_418;
  TSharedRef<SWidget,1> local_410;
  code *local_3f8;
  longlong lStack_3f0;
  TSharedRef<FActiveTimerHandle,1> local_3e8;
  FMargin local_3d8;
  TSharedRef<SWidget,1> local_3c0;
  TSharedRef<SWidget,1> local_3b0;
  FReadAccessScope local_3a0;
  SDrawerOverlay *local_388;
  TReferenceControllerBase<1> *pTStack_380;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_378;
  undefined1 local_360 [536];
  undefined1 local_148 [24];
  undefined1 local_130 [40];
  FScopedWidgetSlotArguments local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_604 = 0.0;
  bVar9 = false;
  bVar8 = false;
  bVar12 = false;
  if ((this->OpenedDrawer).DrawerId != param_1) {
    pFVar30 = (FName *)(this->DismissingDrawers).AllocatorInstance.Data;
    for (pFVar29 = pFVar30; pFVar29 != pFVar30 + (longlong)(this->DismissingDrawers).ArrayNum * 5;
        pFVar29 = pFVar29 + 5) {
      if (*pFVar29 == param_1) {
        if ((int)(((longlong)pFVar29 - (longlong)pFVar30) / 0x28) != -1) {
          return;
        }
        break;
      }
    }
    local_4c8.Object = (SWidget *)0x0;
    local_4c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_508 = this;
    DismissDrawer(this,&local_4c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c8.SharedReferenceCount.ReferenceController);
    pFVar30 = (FName *)(this->RegisteredDrawers).AllocatorInstance.Data;
    pFVar29 = pFVar30 + (longlong)(this->RegisteredDrawers).ArrayNum * 0x13;
    for (; pFVar30 != pFVar29; pFVar30 = pFVar30 + 0x13) {
      if (*pFVar30 == param_1) {
        this_00 = &this->_padding_;
        local_518 = this_00;
        pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)this_00,&local_3c0);
        local_500 = pTVar16->Object;
        local_4f8 = (pTVar16->SharedReferenceCount).ReferenceController;
        if (local_4f8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_4f8->SharedReferenceCount = (atomic<int>)((int)local_4f8->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c0.SharedReferenceCount.ReferenceController);
        pFVar17 = FSlateApplication::Get();
        pcVar5 = *(code **)(*(longlong *)pFVar17 + 0x28);
        pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)this_00,&local_3b0);
        local_4b8 = pTVar16->Object;
        local_4b0 = (pTVar16->SharedReferenceCount).ReferenceController;
        if (local_4b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_4b0->SharedReferenceCount = (atomic<int>)((int)local_4b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar5)(pFVar17,&local_600,&local_4b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3b0.SharedReferenceCount.ReferenceController);
        if ((local_600 == (SWindow *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18 = SWindow::GetSizeInScreen(local_600);
        fVar37 = *(float *)((longlong)FVar18 + 4) * __real_3f666666;
        local_604 = 0.33;
        pFVar19 = ::FName::ToString(pFVar30,&local_440);
        ::FName::GetPlainNameString(&this->DrawerName,&local_548);
        ::FString::ConcatFC(&local_4a8,&local_548,L".");
        ::FString::ConcatFF(&local_4e8,&local_4a8,pFVar19);
        FVar31.Data = (FScriptContainerElement *)L"";
        if (local_4e8.Data.ArrayNum != 0) {
          FVar31.Data = local_4e8.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::GetFloat
                  (GConfig,L"DrawerSizes",(wchar_t *)FVar31.Data,&local_604,&GEditorSettingsIni);
        if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
        }
        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
        }
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
        if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data.AllocatorInstance.Data);
        }
        if ((local_600 == (SWindow *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_01 = local_600;
        if ((local_600 == (SWindow *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_02 = local_600;
        FVar18 = SWindow::GetSizeInScreen(this_01);
        fVar36 = local_604 * *(float *)((longlong)FVar18 + 4);
        fVar34 = SWindow::GetDPIScaleFactor(this_02);
        pFVar20 = SWidget::GetTickSpaceGeometry((SWidget *)this);
        if ((local_600 == (SWindow *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_5e8 = pFVar20->Size;
        pFVar21 = SWindow::GetWindowBorderSize(local_600,&local_3d8,false);
        local_5b8.DrawerOverlay.Object = (SDrawerOverlay *)0x0;
        local_5b8.DrawerOverlay.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        fVar35 = local_5e8._4_4_ + pFVar21->Bottom;
        local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if ((local_600 == (SWindow *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar22 = SWindow::AddOverlaySlot(local_600,&local_108,-1);
        if ((longlong *)local_528 != &pFVar22->_padding_) {
          *(undefined4 *)&pFVar22->_padding_ = 3;
          *(undefined1 *)((longlong)&pFVar22->_padding_ + 4) = 1;
        }
        local_580 = 1;
        pFVar33 = (FScopedWidgetSlotArguments *)0x0;
        if (pFVar22 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
          pFVar33 = pFVar22;
        }
        local_578 = (undefined1  [8])0x0;
        FStack_570.Data = (FScriptContainerElement *)0x0;
        local_568 = 0;
        local_590 = 0x41200000;
        uStack_58c = 0x41a00000;
        uStack_588 = 0x41200000;
        *(undefined4 *)&pFVar33->_padding_ = 0x41200000;
        *(undefined4 *)((longlong)&pFVar33->_padding_ + 4) = 0x41a00000;
        *(undefined4 *)&pFVar33->_padding_ = 0x41200000;
        *(float *)((longlong)&pFVar33->_padding_ + 4) = fVar35;
        *(undefined1 *)&pFVar33->_padding_ = 1;
        fStack_584 = fVar35;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar33->_padding_,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_578);
        local_5e8 = (FDeprecateSlateVector2D)pFVar33;
        if (&pFVar33->_padding_ == (longlong *)0x0) {
          local_5e8 = (FDeprecateSlateVector2D)(FScopedWidgetSlotArguments *)0x0;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_578,
                   (FWriteAccessScope *)&local_498);
        if (((int)local_568 != 0) && (FStack_570.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_570.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_570,0,0,0x10)
          ;
          local_568 = local_568 & 0xffffffff00000000;
        }
        if (local_498.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
        }
        if (FStack_570.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_570.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_578);
        pFVar23 = SDrawerOverlay::FArguments::FArguments((FArguments *)local_360);
        pFVar23->_MinDrawerHeight = fVar35;
        pFVar23->_TargetDrawerHeight = fVar36 / fVar34;
        pFVar23->_MaxDrawerHeight = fVar37;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar23->_OnDismissComplete,(FWriteAccessScope *)&local_480);
        local_468 = &(pFVar23->_OnDismissComplete).field_0x8;
        puVar24 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_468);
        if (puVar24 != (undefined8 *)0x0) {
          *puVar24 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar25 = FDelegateHandle::GenerateNewID();
          puVar24[2] = uVar25;
          *puVar24 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::`8'::<lambda_1>_>
                      ::_vftable_;
          *(FName *)(puVar24 + 3) = param_1;
          puVar24[4] = this;
        }
        if (local_480.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_480.Accessor,&local_480);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar23->_OnTargetHeightChanged,(FWriteAccessScope *)&local_460);
        local_448 = &(pFVar23->_OnTargetHeightChanged).field_0x8;
        puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_448);
        pTVar32 = local_4f0;
        if (puVar24 != (undefined8 *)0x0) {
          fStack_554 = local_3d8.Bottom;
          local_560 = (FName)OnDrawerHeightChanged;
          uStack_558 = 0;
          pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)local_518,&local_430);
          pTVar32 = (pTVar16->SharedReferenceCount).ReferenceController;
          pSVar6 = pTVar16->Object;
          if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
            UNLOCK();
          }
          *puVar24 = &
                     ___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar25 = FDelegateHandle::GenerateNewID();
          puVar24[2] = uVar25;
          *puVar24 = &
                     ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetDrawer___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar24[3] = pSVar6;
          puVar24[4] = pTVar32;
          if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
            UNLOCK();
          }
          bVar9 = true;
          bVar8 = true;
          bVar12 = true;
          *(FName *)(puVar24 + 5) = local_560;
          puVar24[6] = CONCAT44(fStack_554,uStack_558);
        }
        if (bVar12) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar32);
        }
        if (bVar8) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar32);
        }
        if (bVar9) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_430.SharedReferenceCount.ReferenceController);
        }
        if (local_460.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar30 + 1),
                   &local_3a0);
        if (pFVar30[3].ComparisonIndex.Value == 0) {
          FVar28.ComparisonIndex.Value = 0;
          FVar28.Number = 0;
        }
        else {
          FVar28 = pFVar30[2];
        }
        (**(code **)(*(longlong *)FVar28 + 0x60))(FVar28,&local_4d8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_3a0);
        if (local_4d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_4d0->SharedReferenceCount = (atomic<int>)((int)local_4d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_420 = (pFVar23->_Content).Widget.Object;
        pTStack_418 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
        (pFVar23->_Content).Widget.Object = local_4d8;
        (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = local_4d0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_418);
        FLLMScope::FLLMScope
                  (local_5f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_560 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_510,&local_560,true);
        TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs>
                  (&local_5d0,"SDrawerOverlay",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWidgetDrawer.cpp"
                   ,0x286,local_608);
        FMemScope::~FMemScope(&local_510);
        FLLMScope::~FLLMScope(local_5f0);
        FVar10.ReferenceController =
             local_5b8.DrawerOverlay.SharedReferenceCount.ReferenceController;
        this_03 = local_5d0._Widget.Object;
        if (local_5d0._Widget.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_5d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_5d0._Widget.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_388 = local_5b8.DrawerOverlay.Object;
        pTStack_380 = local_5b8.DrawerOverlay.SharedReferenceCount.ReferenceController;
        local_5b8.DrawerOverlay.Object = local_5d0._Widget.Object;
        local_5b8.DrawerOverlay.SharedReferenceCount.ReferenceController =
             local_5d0._Widget.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
        if ((local_5d0._Widget.Object == (SDrawerOverlay *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SWidget::SWidgetConstruct
                  ((SWidget *)local_5d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar23);
        SDrawerOverlay::Construct(local_5d0._Widget.Object,pFVar23);
        if ((local_5d0._Widget.Object == (SDrawerOverlay *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((local_5d0._Widget.Object)->_padding_ & 0x10) == 0) {
          cVar13 = (**(code **)((local_5d0._Widget.Object)->_padding_ + 0x228))
                             (local_5d0._Widget.Object);
          bVar14 = 0;
          if (cVar13 == '\0') goto LAB_142dcb754;
        }
        bVar14 = 0x20;
LAB_142dcb754:
        *(byte *)&(local_5d0._Widget.Object)->_padding_ =
             (byte)(local_5d0._Widget.Object)->_padding_ & 0xdf;
        *(byte *)&(local_5d0._Widget.Object)->_padding_ =
             (byte)(local_5d0._Widget.Object)->_padding_ | bVar14;
        if ((local_5d0._Widget.Object == (SDrawerOverlay *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pbVar1 = (byte *)((longlong)&(local_5d0._Widget.Object)->_padding_ + 1);
        *pbVar1 = *pbVar1 | 4;
        if ((local_5d0._Widget.Object == (SDrawerOverlay *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar10.ReferenceController = local_5d0._Widget.SharedReferenceCount.ReferenceController;
        local_5d0._Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_5d0._Widget.Object = (SDrawerOverlay *)0x0;
        if ((this_03 == (SDrawerOverlay *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_5e0 = this_03;
        local_5d8.ReferenceController = FVar10.ReferenceController;
        if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          (FVar10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((SDrawerOverlay **)&((FScopedWidgetSlotArguments *)local_5e8)->_padding_ != &local_5e0)
        {
          ((FScopedWidgetSlotArguments *)local_5e8)->_padding_ = (longlong)this_03;
          local_5e0 = (SDrawerOverlay *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&((FScopedWidgetSlotArguments *)local_5e8)->_padding_,
                     &local_5d8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5d8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4d0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
        if ((void *)local_130._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_130._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_130);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
        if ((void *)local_148._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_148._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_148);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_360._512_8_);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_360);
        TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::
        ~FScopedWidgetSlotArguments(&local_108);
        pTVar32 = local_5f8;
        local_5b8.WindowWithOverlayContent.Object = local_600;
        if (local_5f8 != local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)
        {
          if (local_5f8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_5f8->WeakReferenceCount = (atomic<int>)((int)local_5f8->WeakReferenceCount + 1);
            UNLOCK();
          }
          if (local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar4 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)((local_5b8.WindowWithOverlayContent.WeakReferenceCount.
                           ReferenceController)->_padding_ + 8))
                        (local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController,1
                        );
            }
          }
          local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController = pTVar32;
        }
        local_5b8.DrawerId = param_1;
        if ((this_03 == (SDrawerOverlay *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar12 = FCurveSequence::IsPlaying(&this_03->DrawerEasingCurve);
        if (bVar12) {
          fVar37 = FCurveSequence::GetSequenceTime(&this_03->DrawerEasingCurve);
        }
        else {
          fVar37 = 0.0;
        }
        pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this_03->_padding_,&local_410);
        FCurveSequence::Play(&this_03->DrawerEasingCurve,pTVar16,false,fVar37,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_410.SharedReferenceCount.ReferenceController);
        pTVar3 = &this_03->DrawerOpenCloseTimer;
        if (pTVar3->Object == (FActiveTimerHandle *)0x0) {
          this_04 = FSlateThrottleManager::Get();
          FVar15 = FSlateThrottleManager::EnterResponsiveMode(this_04);
          local_548.Data.ArrayNum = 0;
          local_548.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)SDrawerOverlay::UpdateDrawerAnimation;
          lStack_3f0 = (ulonglong)(uint)local_548.Data.ArrayMax << 0x20;
          (this_03->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar15.Index);
          local_3f8 = SDrawerOverlay::UpdateDrawerAnimation;
          pTVar26 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                    ::CreateSP<SDrawerOverlay>(&local_378,this_03,(pmf_75a3d9d7 *)&local_3f8);
          pTVar27 = SWidget::RegisterActiveTimer((SWidget *)this_03,&local_3e8,0.0,pTVar26);
          local_530.ReferenceController = (pTVar27->SharedReferenceCount).ReferenceController;
          local_538 = pTVar27->Object;
          if (local_530.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_530.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_530.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar3 != (TSharedPtr<FActiveTimerHandle,1> *)&local_538) {
            pTVar3->Object = local_538;
            local_538 = (FActiveTimerHandle *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this_03->DrawerOpenCloseTimer).SharedReferenceCount,&local_530);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_530.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3e8.SharedReferenceCount.ReferenceController);
        }
        FOpenDrawerData::operator=(&local_508->OpenedDrawer,&local_5b8);
        FVar7.ComparisonIndex.Value = (uint)local_500[1].PersistentState.CullingBounds.Left;
        FVar7.Number = (uint)local_500[1].PersistentState.CullingBounds.Top;
        TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  ((TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy> *)(pFVar30 + 4),FVar7)
        ;
        if (local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &(local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)->
                    WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController)
                         ->_padding_ + 8))
                      (local_5b8.WindowWithOverlayContent.WeakReferenceCount.ReferenceController,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5b8.DrawerOverlay.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4f8);
        return;
      }
    }
  }
  return;
}

// RegisterDrawer @ 142dd2c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetDrawer::RegisterDrawer(SWidgetDrawer *this,FWidgetDrawerConfig *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  SHorizontalBox *pSVar4;
  code *pcVar5;
  bool bVar6;
  FSlot *this_00;
  FSlotArguments *pFVar7;
  FSlot *local_res20;
  undefined1 local_1b0 [8];
  ForAnyElementType FStack_1a8;
  ulonglong local_1a0;
  SWidget *local_198;
  FSharedReferencer<1> FStack_190;
  TSharedRef<SWidget,1> local_188;
  FWidgetDrawerConfig *local_178;
  SWidget **local_170;
  SWidget *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  FDestructionSentinel local_158;
  undefined **local_140;
  undefined8 *local_138 [2];
  TReferenceControllerBase<1> *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined1 local_108 [40];
  FSlotArgumentsMixin local_e0;
  TPanelChildren<SBoxPanel::FSlot> *local_50;
  int local_48;
  
  iVar3 = (this->RegisteredDrawers).ArrayNum;
  TArray<FWidgetDrawerConfig,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FWidgetDrawerConfig_const_&>(&this->RegisteredDrawers,param_1);
  if (iVar3 < (this->RegisteredDrawers).ArrayNum) {
    MakeStatusBarDrawerButton(this,&local_188,param_1);
    local_168 = local_188.Object;
    pTStack_160 = local_188.SharedReferenceCount.ReferenceController;
    if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_188.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_188.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_170 = &local_168;
    local_178 = param_1;
    TSet<TTuple<FName,TWeakPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TWeakPtr<SWidget,1>_&&>_>
              ((TSet<TTuple<FName,TWeakPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SWidget,1>,0>,FDefaultSetAllocator>
                *)&this->DrawerIdToContentWidget,
               (TPairInitializer<FName_const_&,TWeakPtr<SWidget,1>_&&> *)&stack0x00000008,
               (bool *)&local_178);
    if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTStack_160->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTStack_160->_padding_ + 8))(pTStack_160,1);
      }
    }
    if (((this->DrawerBox).Object == (SHorizontalBox *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar4 = (this->DrawerBox).Object;
    this_00 = ::operator_new(0x58);
    local_res20 = (FSlot *)0x0;
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
      local_res20 = SHorizontalBox::FSlot::FSlot(this_00);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_138,(FSlot *)&local_res20);
    local_50 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar4->field_0x218;
    local_140 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    local_1a0 = 0;
    local_1b0 = (undefined1  [8])0x0;
    FStack_1a8.Data = (FScriptContainerElement *)0x0;
    local_110 = 1;
    local_120 = ___xmm_000000003f800000000000003f800000;
    uStack_118 = _UNK_15076ae28;
    local_48 = param_2;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b0,
               (FWriteAccessScope *)&local_158);
    if (((int)local_1a0 != 0) && (FStack_1a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a8,0,0,0x10);
      local_1a0 = local_1a0 & 0xffffffff00000000;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b0);
    pFVar7 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_138);
    local_198 = local_188.Object;
    FStack_190.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
    if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar7->field_0x8 != &local_198) {
      *(SWidget **)&pFVar7->field_0x8 = local_188.Object;
      local_198 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar7->field_0x10,&FStack_190);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_190.ReferenceController);
    local_140 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    if (local_138[0] != (undefined8 *)0x0) {
      if (local_48 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_50,(FSlotArguments *)local_138);
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_50,(FSlotArguments *)local_138,local_48);
      }
    }
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
    if ((void *)local_108._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
    if (local_138[0] != (undefined8 *)0x0) {
      (**(code **)*local_138[0])(local_138[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SupportsKeyboardFocus @ 142dda670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWidgetDrawer::SupportsKeyboardFocus(SWidgetDrawer *this)

{
  return false;
}

// UnregisterDrawer @ 142ddbf40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetDrawer::UnregisterDrawer(SWidgetDrawer *this,FName param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName *pFVar3;
  SBoxPanel *this_00;
  code *pcVar4;
  SWidget *pSVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  atomic<int> aVar8;
  FArguments *pFVar9;
  FName FVar10;
  longlong lVar11;
  FName *pFVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FWeakReferencer<1> FVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  TWeakPtr<SWidget,1> local_378;
  FName local_368;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_360;
  ForAnyElementType FStack_358;
  int local_350;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_348;
  ForAnyElementType FStack_340;
  int local_338;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  ForAnyElementType FStack_328;
  int local_320;
  undefined8 local_318;
  TReferenceControllerBase<1> *pTStack_310;
  FText local_308;
  FText local_2f8;
  undefined8 local_2e8;
  TSharedRef<SHorizontalBox,1> local_2e0;
  TSharedRef<SWidget,1> local_2d0;
  FName local_2c0;
  FMemScope local_2b8;
  FDestructionSentinel local_2b0;
  FDestructionSentinel local_298;
  FDestructionSentinel local_280;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_268;
  FArguments local_250;
  
  if ((this->OpenedDrawer).DrawerId == param_1) {
    CloseDrawerImmediately(this,param_1);
  }
  uVar14 = 0;
  local_350 = 0;
  local_360.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_358.Data = (FScriptContainerElement *)0x0;
  local_338 = 0;
  local_348.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_340.Data = (FScriptContainerElement *)0x0;
  local_320 = 0;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_318 = 0;
  pTStack_310 = (TReferenceControllerBase<1> *)0x0;
  local_368 = param_1;
  FText::FText(&local_308);
  FText::FText(&local_2f8);
  local_2e8 = 0;
  pFVar9 = SHorizontalBox::FArguments::FArguments(&local_250);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2b8,&local_2c0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_268,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Public\\WidgetDrawerConfig.h"
             ,0x1d,local_res18);
  FMemScope::~FMemScope(&local_2b8);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_268,&local_2e0,pFVar9)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_250._Slots.AllocatorInstance.Data,local_250._Slots.ArrayNum);
  if ((FSlotArguments *)local_250._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_250._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  pFVar3 = (FName *)(this->RegisteredDrawers).AllocatorInstance.Data;
  if (((pFVar3 <= &local_368) &&
      (&local_368 < pFVar3 + (longlong)(this->RegisteredDrawers).ArrayMax * 0x13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = (this->RegisteredDrawers).ArrayNum;
  lVar11 = (longlong)iVar13;
  if (iVar13 != 0) {
    pFVar3 = (FName *)(this->RegisteredDrawers).AllocatorInstance.Data;
    bVar7 = *pFVar3 != local_368;
    FVar10 = local_368;
    uVar15 = uVar14;
    uVar18 = uVar14;
    do {
      iVar13 = (int)uVar14;
      uVar15 = uVar15 + 1;
      uVar14 = (ulonglong)(iVar13 + 1);
      if ((longlong)uVar15 < lVar11) {
        pFVar12 = pFVar3 + uVar15 * 0x13;
        do {
          if (bVar7 != (*pFVar12 != FVar10)) break;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + 1;
          pFVar12 = pFVar12 + 0x13;
        } while ((longlong)uVar15 < lVar11);
      }
      iVar19 = (int)uVar14 - iVar13;
      if (bVar7 == false) {
        DestructItems<FWidgetDrawerConfig,int>
                  ((FWidgetDrawerConfig *)(pFVar3 + (longlong)iVar13 * 0x13),iVar19);
        FVar10 = local_368;
      }
      else {
        iVar17 = (int)uVar18;
        if (iVar17 != iVar13) {
          memmove(pFVar3 + (longlong)iVar17 * 0x13,pFVar3 + (longlong)iVar13 * 0x13,
                  (longlong)iVar19 * 0x98);
          FVar10 = local_368;
        }
        uVar18 = (ulonglong)(uint)(iVar17 + iVar19);
      }
      bVar7 = (bool)(bVar7 ^ 1);
    } while ((longlong)uVar15 < lVar11);
    (this->RegisteredDrawers).ArrayNum = (int)uVar18;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.SharedReferenceCount.ReferenceController);
  if (local_2f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
  }
  if (local_308.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_310);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)&local_2b0);
  if ((local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = 0;
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_348,(FWriteAccessScope *)&local_298);
  if ((local_338 != 0) && (FStack_340.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_340.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_340,0,0,0x10);
    local_338 = 0;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (FStack_340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_340.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_348.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_360,(FWriteAccessScope *)&local_280);
  if ((local_350 != 0) && (FStack_358.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_358.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_358,0,0,0x10);
    local_350 = 0;
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  if (FStack_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_358.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_360.AccessDetector);
  local_378.Object = (SWidget *)0x0;
  local_378.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TMap<FName,TWeakPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SWidget,1>,0>_>
  ::RemoveAndCopyValue(&this->DrawerIdToContentWidget,param_1,&local_378);
  FVar6.ReferenceController = local_378.WeakReferenceCount.ReferenceController;
  pSVar5 = local_378.Object;
  FVar16.ReferenceController = FVar6.ReferenceController;
  if (local_378.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_378.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar16.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142ddc3e1;
      LOCK();
      aVar8 = (local_378.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (local_378.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar7);
    FVar16.ReferenceController = FVar6.ReferenceController;
    if (local_378.Object != (SWidget *)0x0) {
      if (((this->DrawerBox).Object == (SHorizontalBox *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (SBoxPanel *)(this->DrawerBox).Object;
      local_2d0.Object = pSVar5;
      local_2d0.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      if ((pSVar5 == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SBoxPanel::RemoveSlot(this_00,&local_2d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d0.SharedReferenceCount.ReferenceController);
    }
  }
LAB_142ddc3e1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  return;
}

