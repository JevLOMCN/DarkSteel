// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 12

// ~SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> @ 142e0d3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::
~SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowLeadingDelimiter).Getter);
  pvVar1 = *(void **)&(this->ShowLeadingDelimiter).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShowLeadingDelimiter).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetCrumbButtonContentCallback);
  pvVar1 = *(void **)&(this->GetCrumbButtonContentCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetCrumbButtonContentCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetCrumbMenuContentCallback);
  pvVar1 = *(void **)&(this->GetCrumbMenuContentCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetCrumbMenuContentCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HasCrumbMenuContentCallback);
  pvVar1 = *(void **)&(this->HasCrumbMenuContentCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HasCrumbMenuContentCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCrumbClicked);
  pvVar1 = *(void **)&(this->OnCrumbClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCrumbClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCrumbPopped);
  pvVar1 = *(void **)&(this->OnCrumbPopped).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCrumbPopped);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCrumbPushed);
  pvVar1 = *(void **)&(this->OnCrumbPushed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCrumbPushed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DelimiterImage).Getter);
  pvVar1 = *(void **)&(this->DelimiterImage).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DelimiterImage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ButtonContentPadding).Getter);
  pvVar1 = *(void **)&(this->ButtonContentPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ButtonContentPadding).Getter);
  DestructItems<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FCrumbItem,int>
            ((FCrumbItem *)(this->CrumbList).AllocatorInstance.Data,(this->CrumbList).ArrayNum);
  pFVar2 = (this->CrumbList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AddLeadingDelimiter @ 142e2aac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::AddLeadingDelimiter
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FScopedWidgetSlotArguments *pFVar5;
  FArguments *pFVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TSharedRef<SImage,1> *pTVar10;
  FScopedWidgetSlotArguments *pFVar11;
  FScopedWidgetSlotArguments *pFVar12;
  FMemScope FVar13;
  undefined1 auStackY_518 [32];
  T0RequiredArgs local_4e8 [4];
  undefined4 local_4e4;
  SImage *local_4e0;
  FSharedReferencer<1> local_4d8;
  FSlateBrush *local_4d0;
  bool local_4c8;
  undefined1 local_4c0 [8];
  ForAnyElementType FStack_4b8;
  int local_4b0;
  FName local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  FMemScope local_498;
  undefined4 local_490 [2];
  TSharedRef<SImage,1> local_488;
  FDestructionSentinel local_478;
  FDestructionSentinel local_460;
  longlong *local_448;
  TSharedRef<SWidget_const_,1> local_440;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_430;
  FArguments local_418;
  FScopedWidgetSlotArguments local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pFVar11 = (FScopedWidgetSlotArguments *)0x0;
  local_4e4 = 0;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = SScrollBox::AddSlot((SScrollBox *)this->_padding_,&local_168);
  if ((longlong *)local_490 != &pFVar5->_padding_) {
    *(undefined4 *)&pFVar5->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar5->_padding_ + 4) = 1;
  }
  pFVar12 = pFVar11;
  if (pFVar5 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar12 = pFVar5;
  }
  pFVar6 = SImage::FArguments::FArguments(&local_418);
  local_4d0 = (this->DelimiterImage).Value;
  local_4c8 = (this->DelimiterImage).bIsSet;
  local_4c0 = (undefined1  [8])0x0;
  FStack_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0 = 0;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_4c0,
             &(this->DelimiterImage).Getter);
  (pFVar6->_Image).Value = local_4d0;
  (pFVar6->_Image).bIsSet = local_4c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c0,
             (FWriteAccessScope *)&local_478);
  if ((local_4b0 != 0) && (FStack_4b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4b8,0,0,0x10);
    local_4b0 = 0;
  }
  if (local_478.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
  }
  if (FStack_4b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c0);
  *(undefined1 *)((longlong)&pFVar6->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_460);
  local_448 = &pFVar6->_padding_;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_448);
  FVar13 = local_498;
  if (puVar7 != (undefined8 *)0x0) {
    uStack_49c = local_488.SharedReferenceCount.ReferenceController._4_4_;
    local_4a8 = (FName)GetLeadingDelimiterVisibility;
    uStack_4a0 = 0;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_440);
    FVar13 = (FMemScope)(pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (FVar13 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar13 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar13 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar13 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar13 + 8) + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SBreadcrumbTrail_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    *(FMemScope *)(puVar7 + 4) = FVar13;
    if (FVar13 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar13 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar13 + 0xc) + 1);
      UNLOCK();
    }
    pFVar11 = (FScopedWidgetSlotArguments *)&DAT_00000007;
    *(FName *)(puVar7 + 5) = local_4a8;
    puVar7[6] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (((ulonglong)pFVar11 & 4) != 0) {
    pFVar11 = (FScopedWidgetSlotArguments *)(ulonglong)((uint)pFVar11 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar13);
  }
  if (((ulonglong)pFVar11 & 2) != 0) {
    pFVar11 = (FScopedWidgetSlotArguments *)(ulonglong)((uint)pFVar11 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar13);
  }
  if (((ulonglong)pFVar11 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_440.SharedReferenceCount.ReferenceController);
  }
  if (local_460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_4e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_498,&local_4a8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_430,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0x1b6,local_4e8);
  FMemScope::~FMemScope(&local_498);
  FLLMScope::~FLLMScope((FLLMScope *)&local_4e4);
  pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_430,&local_488,pFVar6);
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_4e0 = pTVar10->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4d8.ReferenceController = pTVar2;
  if ((SImage **)&pFVar12->_padding_ != &local_4e0) {
    pFVar12->_padding_ = (longlong)local_4e0;
    local_4e0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_4d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_488.SharedReferenceCount.ReferenceController._4_4_,
                      local_488.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_430._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_418);
  TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_168);
  return;
}

// ClearCrumbs @ 142e31850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::ClearCrumbs
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FWidgetReflectorNodeBase,1> local_18;
  
  if (param_1) {
    if (0 < (this->CrumbList).ArrayNum) {
      do {
        PopCrumb(this,&local_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      } while (0 < (this->CrumbList).ArrayNum);
      return;
    }
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SScrollBox::ClearChildren((SScrollBox *)this->_padding_);
    DestructItems<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FCrumbItem,int>
              ((FCrumbItem *)(this->CrumbList).AllocatorInstance.Data,(this->CrumbList).ArrayNum);
    piVar1 = &(this->CrumbList).ArrayMax;
    (this->CrumbList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&(this->CrumbList).AllocatorInstance,0,piVar1);
    }
    AddLeadingDelimiter(this);
  }
  return;
}

// Construct @ 142e31cb0

void __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::Construct
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,FArguments *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  SScrollBox *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FArguments *pFVar8;
  TSharedRef<SScrollBox,1> *pTVar9;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_348 [8];
  ForAnyElementType local_340;
  int local_338;
  SScrollBox *local_330;
  FSharedReferencer<1> local_328;
  bool local_320;
  SScrollBox *local_318;
  TReferenceControllerBase<1> *pTStack_310;
  FArguments local_308;
  
  this->ButtonStyle = param_1->_ButtonStyle;
  this->TextStyle = param_1->_TextStyle;
  fVar5 = (param_1->_ButtonContentPadding).Value.Top;
  fVar6 = (param_1->_ButtonContentPadding).Value.Right;
  fVar7 = (param_1->_ButtonContentPadding).Value.Bottom;
  (this->ButtonContentPadding).Value.Left = (param_1->_ButtonContentPadding).Value.Left;
  (this->ButtonContentPadding).Value.Top = fVar5;
  (this->ButtonContentPadding).Value.Right = fVar6;
  (this->ButtonContentPadding).Value.Bottom = fVar7;
  (this->ButtonContentPadding).bIsSet = (param_1->_ButtonContentPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ButtonContentPadding).Getter,&(param_1->_ButtonContentPadding).Getter);
  (this->DelimiterImage).Value = (param_1->_DelimiterImage).Value;
  (this->DelimiterImage).bIsSet = (param_1->_DelimiterImage).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DelimiterImage).Getter,&(param_1->_DelimiterImage).Getter);
  (this->ShowLeadingDelimiter).Value = (param_1->_ShowLeadingDelimiter).Value;
  (this->ShowLeadingDelimiter).bIsSet = (param_1->_ShowLeadingDelimiter).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ShowLeadingDelimiter).Getter,&(param_1->_ShowLeadingDelimiter).Getter);
  TDelegate<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnCrumbPushed,&param_1->_OnCrumbPushed);
  TDelegate<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnCrumbPopped,&param_1->_OnCrumbPopped);
  TDelegate<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnCrumbClicked,&param_1->_OnCrumbClicked);
  this->bHasStaticBreadcrumbs = param_1->_PersistentBreadcrumbs;
  if (&param_1->_HasCrumbMenuContent != &this->HasCrumbMenuContentCallback) {
    local_348 = (undefined1  [8])0x0;
    local_340.Data = (FScriptContainerElement *)0x0;
    local_338 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_HasCrumbMenuContent,(FReadAccessScope *)&local_330);
    if ((*(int *)&(param_1->_HasCrumbMenuContent).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_HasCrumbMenuContent).field_0x8, plVar1 != (longlong *)0x0
       )) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_348);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_330);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HasCrumbMenuContentCallback,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_348);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
               (FWriteAccessScope *)&local_330);
    if ((local_338 != 0) &&
       ((TReferenceControllerBase<1> *)local_340.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_340.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_340,0,0,0x10);
      local_338 = 0;
    }
    if (local_320 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_328.ReferenceController,
                 (FDestructionSentinel *)&local_330);
    }
    if ((TReferenceControllerBase<1> *)local_340.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_340.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_348);
  }
  if (&param_1->_GetCrumbMenuContent != &this->GetCrumbMenuContentCallback) {
    local_348 = (undefined1  [8])0x0;
    local_340.Data = (FScriptContainerElement *)0x0;
    local_338 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_GetCrumbMenuContent,(FReadAccessScope *)&local_330);
    if ((*(int *)&(param_1->_GetCrumbMenuContent).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_GetCrumbMenuContent).field_0x8, plVar1 != (longlong *)0x0
       )) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_348);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_330);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetCrumbMenuContentCallback,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_348);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
               (FWriteAccessScope *)&local_330);
    if ((local_338 != 0) &&
       ((TReferenceControllerBase<1> *)local_340.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_340.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_340,0,0,0x10);
      local_338 = 0;
    }
    if (local_320 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_328.ReferenceController,
                 (FDestructionSentinel *)&local_330);
    }
    if ((TReferenceControllerBase<1> *)local_340.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_340.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_348);
  }
  if (&param_1->_GetCrumbButtonContent != &this->GetCrumbButtonContentCallback) {
    local_348 = (undefined1  [8])0x0;
    local_340.Data = (FScriptContainerElement *)0x0;
    local_338 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_GetCrumbButtonContent,(FReadAccessScope *)&local_330);
    if ((*(int *)&(param_1->_GetCrumbButtonContent).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_GetCrumbButtonContent).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_348);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_330);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetCrumbButtonContentCallback,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_348);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
               (FWriteAccessScope *)&local_330);
    if ((local_338 != 0) &&
       ((TReferenceControllerBase<1> *)local_340.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_340.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_340,0,0,0x10);
      local_338 = 0;
    }
    if (local_320 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_328.ReferenceController,
                 (FDestructionSentinel *)&local_330);
    }
    if ((TReferenceControllerBase<1> *)local_340.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_340.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_348);
  }
  this->NextValidCrumbID = 0;
  pFVar8 = SScrollBox::FArguments::FArguments(&local_308);
  pFVar8->_Orientation = Orient_Horizontal;
  (pFVar8->_ScrollBarVisibility).Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *)&local_330,"SScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0x93,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if (local_328.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_328.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_328.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_330;
  this->_padding_ = (longlong)local_328.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar9 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *)&local_330,
                      (TSharedRef<SScrollBox,1> *)local_348,pFVar8);
  plVar1 = &this->_padding_;
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar9->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar2;
  local_318 = pSVar3;
  pTStack_310 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_340.Data);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.ReferenceController);
  SScrollBox::FArguments::~FArguments(&local_308);
  AddLeadingDelimiter(this);
  return;
}

// CrumbButtonClicked @ 142e6e180

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::CrumbButtonClicked
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          FReply *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FReply *pFVar6;
  uint uVar7;
  FReadAccessScope *this_00;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  TSharedRef<FWidgetReflectorNodeBase,1> local_58;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  iVar1 = (this->CrumbList).ArrayNum;
  uVar8 = 0;
  uVar9 = 0;
  if (this->bHasStaticBreadcrumbs == false) {
    uVar11 = uVar8;
    if (0 < iVar1) {
LAB_142e6e2e0:
      uVar10 = (uint)uVar11;
      uVar7 = uVar9;
      if ((int)uVar10 < (this->CrumbList).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FReply *)(*pcVar4)();
        return pFVar6;
      }
      if (*(int *)((this->CrumbList).AllocatorInstance.Data + uVar8) != param_1)
      goto code_r0x000142e6e339;
      if (uVar10 != 0xffffffff) {
        iVar1 = (this->CrumbList).ArrayNum;
        while ((int)uVar10 < iVar1 + -1) {
          PopCrumb(this,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          iVar1 = (this->CrumbList).ArrayNum;
        }
        iVar1 = (this->CrumbList).ArrayNum;
        uVar7 = iVar1 - 1;
        if ((int)uVar7 < iVar1) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar4)();
          return pFVar6;
        }
        iVar1 = (this->CrumbList).ArrayNum;
        pFVar2 = (this->CrumbList).AllocatorInstance.Data;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCrumbClicked,
                   &local_30);
        if ((*(int *)&(this->OnCrumbClicked).field_0x10 != 0) &&
           (plVar3 = *(longlong **)&(this->OnCrumbClicked).field_0x8, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x68))(plVar3,pFVar2 + (longlong)(iVar1 + -1) * 0x58 + 0x48);
        }
        this_00 = &local_30;
        goto LAB_142e6e41b;
      }
    }
  }
  else {
    uVar11 = uVar8;
    if (0 < iVar1) {
      do {
        uVar10 = (uint)uVar8;
        uVar7 = uVar9;
        if ((int)uVar10 < (this->CrumbList).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar4)();
          return pFVar6;
        }
        if (*(int *)((this->CrumbList).AllocatorInstance.Data + uVar11) == param_1) {
          if ((int)uVar10 < (this->CrumbList).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FReply *)(*pcVar4)();
            return pFVar6;
          }
          pFVar2 = (this->CrumbList).AllocatorInstance.Data;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCrumbClicked
                     ,&local_48);
          if ((*(int *)&(this->OnCrumbClicked).field_0x10 != 0) &&
             (plVar3 = *(longlong **)&(this->OnCrumbClicked).field_0x8, plVar3 != (longlong *)0x0))
          {
            (**(code **)(*plVar3 + 0x68))(plVar3,pFVar2 + (longlong)(int)uVar10 * 0x58 + 0x48);
          }
          this_00 = &local_48;
LAB_142e6e41b:
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(this_00);
          break;
        }
        uVar8 = (ulonglong)(uVar10 + 1);
        uVar11 = uVar11 + 0x58;
      } while ((int)(uVar10 + 1) < (this->CrumbList).ArrayNum);
    }
  }
LAB_142e6e420:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
code_r0x000142e6e339:
  uVar8 = uVar8 + 0x58;
  uVar11 = (ulonglong)(uVar10 + 1);
  if ((this->CrumbList).ArrayNum <= (int)(uVar10 + 1)) goto LAB_142e6e420;
  goto LAB_142e6e2e0;
}

// GetCrumbDelimiterVisibility @ 142e9a820

EVisibility __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetCrumbDelimiterVisibility
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  uint uVar7;
  
  iVar1 = (this->CrumbList).ArrayNum;
  if (0 < iVar1) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Value = (*pcVar2)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
      }
    }
    if (*(int *)((this->CrumbList).AllocatorInstance.Data +
                (longlong)(this->CrumbList).ArrayNum * 0x58 + -0x58) == in_R8D) {
      bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &this->HasCrumbMenuContentCallback);
      if (bVar3) {
        iVar1 = (this->CrumbList).ArrayNum;
        uVar7 = iVar1 - 1;
        uVar6 = 0;
        if ((int)uVar7 < iVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            TVar4.Value = (*pcVar2)();
            return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value
            ;
          }
        }
        bVar3 = TDelegate<bool___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
                ::Execute(&this->HasCrumbMenuContentCallback,
                          (TSharedRef<FWidgetReflectorNodeBase,1> *)
                          ((this->CrumbList).AllocatorInstance.Data +
                          (longlong)((this->CrumbList).ArrayNum + -1) * 0x58 + 0x48));
        EVar5 = EVisibility::Collapsed;
        if (!bVar3) goto LAB_142e9a953;
      }
    }
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_142e9a953:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

// GetCrumbMenuContent @ 142e9a980

TSharedRef<SWidget,1> * __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetCrumbMenuContent
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  TSharedRef<SWidget,1> *pTVar8;
  longlong *plVar9;
  FSharedReferencer<1> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  SWidget *local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> local_a0;
  SWidget *local_98;
  TReferenceControllerBase<1> *local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetCrumbMenuContentCallback,&local_70);
  if (((*(int *)&(this->GetCrumbMenuContentCallback).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(this->GetCrumbMenuContentCallback).field_0x8,
      plVar9 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar9 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  uVar12 = 0;
  local_b8 = (SWidget *)0x0;
  FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (0 < (this->CrumbList).ArrayNum) {
    lVar11 = 0;
    do {
      uVar13 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < (this->CrumbList).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar8;
      }
      if (*(int *)((this->CrumbList).AllocatorInstance.Data + lVar11) == param_1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->HasCrumbMenuContentCallback,&local_88);
        if (((*(int *)&(this->HasCrumbMenuContentCallback).field_0x10 == 0) ||
            (plVar9 = *(longlong **)&(this->HasCrumbMenuContentCallback).field_0x8,
            plVar9 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar9 + 0x38))(), cVar5 == '\0'))
        {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_88);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_88);
          uVar7 = 0;
          if ((int)uVar12 < (this->CrumbList).ArrayNum) {
            uVar7 = uVar13;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar3)();
            return pTVar8;
          }
          pFVar2 = (this->CrumbList).AllocatorInstance.Data;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->HasCrumbMenuContentCallback,&local_58);
          if (*(int *)&(this->HasCrumbMenuContentCallback).field_0x10 == 0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = *(longlong **)&(this->HasCrumbMenuContentCallback).field_0x8;
          }
          cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,pFVar2 + (longlong)(int)uVar12 * 0x58 + 0x48)
          ;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          if (cVar5 == '\0') {
            __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
            FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
            FVar10.ReferenceController = FStack_b0.ReferenceController;
            if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
              *paVar1 = (atomic<int>)((int)*paVar1 + 1);
              UNLOCK();
            }
            goto LAB_142e9ab72;
          }
        }
        uVar7 = 0;
        if ((int)uVar12 < (this->CrumbList).ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar3)();
          return pTVar8;
        }
        pFVar2 = (this->CrumbList).AllocatorInstance.Data;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->GetCrumbMenuContentCallback,&local_40);
        if (*(int *)&(this->GetCrumbMenuContentCallback).field_0x10 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)&(this->GetCrumbMenuContentCallback).field_0x8;
        }
        (**(code **)(*plVar9 + 0x60))(plVar9,&local_98,pFVar2 + (longlong)(int)uVar12 * 0x58 + 0x48)
        ;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
        local_a0.ReferenceController = local_90;
        if (local_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8 = local_98;
        local_a8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&local_a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        break;
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x58;
    } while ((int)uVar12 < (this->CrumbList).ArrayNum);
    if (local_b8 != (SWidget *)0x0) goto LAB_142e9aca2;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x408,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar8;
  }
LAB_142e9aca2:
  FVar10.ReferenceController = FStack_b0.ReferenceController;
  __return_storage_ptr__->Object = local_b8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FStack_b0.ReferenceController
  ;
  if (FStack_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (SWidget *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar8;
  }
LAB_142e9ab72:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// GetDelimiterVisibility @ 142e9b530

EVisibility __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetDelimiterVisibility
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  iVar1 = (this->CrumbList).ArrayNum;
  if (0 < iVar1) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Value = (*pcVar2)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
      }
    }
    EVar5.Value.Value = EVisibility::Collapsed.Value.Value;
    if (*(int *)((this->CrumbList).AllocatorInstance.Data +
                (longlong)(this->CrumbList).ArrayNum * 0x58 + -0x58) == in_R8D) goto LAB_142e9b5c8;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_142e9b5c8:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

// GetLeadingDelimiterVisibility @ 142ea0030

EVisibility __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetLeadingDelimiterVisibility
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get(&this->ShowLeadingDelimiter);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnCrumbDelimiterClicked @ 142ec67b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::OnCrumbDelimiterClicked
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          FReply *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  FReply *pFVar6;
  uint uVar7;
  longlong lVar8;
  FReadAccessScope local_e8;
  FReply local_d0;
  
  FReply::FReply(__return_storage_ptr__,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetCrumbMenuContentCallback,&local_e8);
  if (((*(int *)&(this->GetCrumbMenuContentCallback).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->GetCrumbMenuContentCallback).field_0x8,
      plVar1 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar1 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    uVar7 = 0;
    if (0 < (this->CrumbList).ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->CrumbList).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar2)();
          return pFVar6;
        }
        if (*(int *)((this->CrumbList).AllocatorInstance.Data + lVar8) == param_1) {
          uVar5 = 0;
          if ((int)uVar7 < (this->CrumbList).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FReply *)(*pcVar2)();
            return pFVar6;
          }
          plVar1 = *(longlong **)
                    ((this->CrumbList).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x58 + 0x18);
          (**(code **)(*plVar1 + 0x250))(plVar1,1,1,0);
          FReply::FReply(&local_d0,true);
          FReply::operator=(__return_storage_ptr__,&local_d0);
          FReply::~FReply(&local_d0);
          return __return_storage_ptr__;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x58;
      } while ((int)uVar7 < (this->CrumbList).ArrayNum);
    }
  }
  return __return_storage_ptr__;
}

// PopCrumb @ 142ee4a70

TSharedRef<FWidgetReflectorNodeBase,1> * __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::PopCrumb
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<FWidgetReflectorNodeBase,1> *__return_storage_ptr__)

{
  int *piVar1;
  TArray<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FCrumbItem,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  SScrollBox *pSVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  FWidgetReflectorNodeBase *local_70;
  TReferenceControllerBase<1> *local_68;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FReadAccessScope local_38;
  
  if ((this->CrumbList).ArrayNum < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("HasCrumbs()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                        ,0xfa,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar11)();
      return pTVar14;
    }
  }
  pTVar2 = &this->CrumbList;
  if ((this->CrumbList).ArrayNum < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar11)();
      return pTVar14;
    }
  }
  iVar13 = (this->CrumbList).ArrayNum;
  pFVar15 = (pTVar2->AllocatorInstance).Data;
  pTVar3 = *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar13 * 0x58 + -0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar13 * 0x58 + -0x38);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar5 = *(SWidget **)(pFVar15 + (longlong)iVar13 * 0x58 + -0x30);
  pTVar6 = *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar13 * 0x58 + -0x28);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar7 = *(SWidget **)(pFVar15 + (longlong)iVar13 * 0x58 + -0x20);
  pTVar8 = *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar13 * 0x58 + -0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = *(FWidgetReflectorNodeBase **)(pFVar15 + (longlong)iVar13 * 0x58 + -0x10);
  local_68 = *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar13 * 0x58 + -8);
  if (local_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar13 = (this->CrumbList).ArrayNum;
  pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x58;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar15 + -8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar15 + -0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar15 + -0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar15 + -0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar15 + -0x48));
  iVar13 = (this->CrumbList).ArrayNum - iVar13;
  if (iVar13 != 0) {
    memmove(pFVar15 + -0x58,pFVar15,(longlong)iVar13 * 0x58);
  }
  piVar1 = &(this->CrumbList).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,&pTVar2->AllocatorInstance,(this->CrumbList).ArrayNum,
             &(this->CrumbList).ArrayMax);
  if (this->_padding_ == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar11)();
      return pTVar14;
    }
  }
  pSVar9 = (SScrollBox *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pSVar5;
  local_58.SharedReferenceCount.ReferenceController = pTVar6;
  SScrollBox::RemoveSlot(pSVar9,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (this->_padding_ == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar11)();
      return pTVar14;
    }
  }
  pSVar9 = (SScrollBox *)this->_padding_;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pSVar7;
  local_48.SharedReferenceCount.ReferenceController = pTVar8;
  SScrollBox::RemoveSlot(pSVar9,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCrumbPopped,
             &local_38);
  if ((*(int *)&(this->OnCrumbPopped).field_0x10 != 0) &&
     (plVar10 = *(longlong **)&(this->OnCrumbPopped).field_0x8, plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x68))(plVar10,&local_70);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  __return_storage_ptr__->Object = local_70;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_68;
  if (local_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// PushCrumb @ 142ef15a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::PushCrumb
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TAttribute<FText> *param_1,TSharedRef<FWidgetReflectorNodeBase,1> *param_2)

{
  byte *pbVar1;
  int *piVar2;
  longlong *plVar3;
  FTextBlockStyle *pFVar4;
  SImage *pSVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  bool bVar10;
  FSharedReferencer<1> FVar11;
  SMenuAnchor *pSVar12;
  TReferenceControllerBase<1> *pTVar13;
  FSharedReferencer<1> FVar14;
  char cVar15;
  bool bVar16;
  byte bVar17;
  bool bVar18;
  int iVar19;
  FScopedWidgetSlotArguments *pFVar20;
  FSlotArguments *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SButton,1> *pTVar23;
  FArguments *pFVar24;
  TSharedRef<SVerticalBox,1> *pTVar25;
  FArguments *pFVar26;
  TAttribute<FSlateBrush_const_*> *pTVar27;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar28;
  TSharedRef<SImage,1> *pTVar29;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar30;
  SScrollBox *pSVar31;
  FName FVar32;
  undefined8 *puVar33;
  TSharedRef<SWidget,1> *pTVar34;
  ulong64 uVar35;
  SMenuAnchor *pSVar36;
  longlong *plVar37;
  SWidget *pSVar38;
  TReferenceControllerBase<1> *pTVar39;
  TReferenceControllerBase<1> *pTVar40;
  FSharedReferencer<1> FVar41;
  undefined1 auStackY_25c8 [32];
  SButton *local_2588;
  ulonglong uStack_2570;
  T0RequiredArgs local_2568;
  T0RequiredArgs local_2567;
  T0RequiredArgs local_2566;
  T0RequiredArgs local_2565;
  T0RequiredArgs local_2564;
  T0RequiredArgs local_2563;
  T0RequiredArgs local_2562;
  T0RequiredArgs local_2561;
  SVerticalBox *local_2560;
  FLLMScope local_2558;
  FLLMScope local_2554;
  FLLMScope local_2550;
  FLLMScope local_254c;
  SButton *local_2548;
  SButton *local_2540;
  FSharedReferencer<1> local_2538;
  FName local_2530;
  SVerticalBox *local_2528;
  FSharedReferencer<1> local_2520;
  SVerticalBox *local_2518;
  FSharedReferencer<1> local_2510;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_2508;
  SWidget *local_24f0;
  TReferenceControllerBase<1> *pTStack_24e8;
  TSharedRef<FWidgetReflectorNodeBase,1> *local_24e0;
  SWidget *local_24d8;
  TReferenceControllerBase<1> *pTStack_24d0;
  TReferenceControllerBase<1> *local_24c8;
  undefined1 local_24c0 [4];
  FName local_24bc;
  FMemScope local_24b0;
  FScopedWidgetSlotArguments *local_24a8;
  TReferenceControllerBase<1> *local_24a0;
  FSlotArguments *local_2498;
  SWidget *local_2490;
  FMemScope local_2488;
  FName local_2480;
  FMemScope local_2478;
  FArguments *local_2470;
  SWidget *local_2468;
  TReferenceControllerBase<1> *local_2460;
  FName local_2458;
  FMemScope local_2450;
  undefined8 local_2448;
  undefined8 uStack_2440;
  bool local_2438;
  undefined1 local_2430 [8];
  void *pvStack_2428;
  undefined4 local_2420;
  TAttribute<float> local_2418;
  TAttribute<float> local_23f8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_23d8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_23c0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_23a8;
  undefined8 local_2390;
  undefined8 uStack_2388;
  undefined4 local_2380;
  undefined8 local_237c;
  undefined8 uStack_2374;
  undefined4 local_236c;
  SWidget *local_2368;
  TReferenceControllerBase<1> *local_2360;
  TSharedRef<SWidget,1> local_2358;
  TSharedRef<FWidgetReflectorNodeBase,1> local_2348;
  TSharedRef<SVerticalBox,1> local_2338;
  TSharedRef<SVerticalBox,1> local_2328;
  TSharedRef<SMenuAnchor,1> local_2318;
  TSharedRef<SButton,1> local_2308;
  TSharedRef<SVerticalBox,1> local_22f8;
  FLinearColor_u_0 local_22e8;
  undefined4 local_22d8;
  undefined1 local_22d4;
  undefined8 local_22d0;
  undefined8 uStack_22c8;
  undefined8 local_22c0;
  FLinearColor_u_0 local_22b8;
  undefined4 local_22a8;
  undefined1 local_22a4;
  undefined8 local_22a0;
  undefined8 uStack_2298;
  undefined8 local_2290;
  FDestructionSentinel local_2288;
  FDelegateAllocation *local_2270;
  TAttribute<FMargin> local_2268;
  TAttribute<FMargin> local_2238;
  TSharedRef<SImage,1> local_2208;
  TSharedRef<SWidget,1> local_21f8;
  SWidget *local_21e8;
  TReferenceControllerBase<1> *pTStack_21e0;
  code *local_21d8;
  longlong lStack_21d0;
  TSharedRef<SVerticalBox,1> local_21c8;
  TSharedRef<SButton,1> local_21b8;
  code *local_21a8;
  longlong lStack_21a0;
  code *local_2198;
  longlong lStack_2190;
  TSharedRef<SButton,1> local_2188;
  FReadAccessScope local_2178;
  TSharedRef<SImage,1> local_2160;
  code *local_2148;
  longlong lStack_2140;
  TSharedRef<SButton,1> local_2138;
  TAttribute<FText> local_2128;
  FReadAccessScope local_20f8;
  FReadAccessScope local_20e0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_20c8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_20b0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2098;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2080;
  undefined8 *local_2068 [2];
  TReferenceControllerBase<1> *local_2058;
  undefined1 local_2038 [40];
  FSlotArgumentsMixin local_2010;
  undefined8 *local_1f80 [2];
  TReferenceControllerBase<1> *local_1f70;
  undefined1 local_1f50 [40];
  FSlotArgumentsMixin local_1f28;
  TAttribute<FSlateBrush_const_*> local_1e98;
  TAttribute<FSlateBrush_const_*> local_1e70;
  undefined1 local_1e48 [552];
  undefined1 local_1c20 [24];
  undefined1 local_1c08 [32];
  undefined1 local_1be8 [32];
  FArguments local_1bc8;
  FArguments local_19c0;
  FArguments local_17b8;
  FArguments local_1510;
  FArguments local_1268;
  FArguments local_d28;
  FArguments local_7e8;
  FScopedWidgetSlotArguments local_2a8;
  FScopedWidgetSlotArguments local_178;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142ef15c2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_25c8;
  plVar37 = (longlong *)0x0;
  local_24e0 = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetCrumbButtonContentCallback,&local_2178);
  if (((*(int *)&(this->GetCrumbButtonContentCallback).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->GetCrumbButtonContentCallback).field_0x8,
      plVar3 == (longlong *)0x0)) || (cVar15 = (**(code **)(*plVar3 + 0x38))(), cVar15 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2178);
    FVar41 = SNullWidget::NullWidget.SharedReferenceCount;
    pSVar38 = SNullWidget::NullWidget.Object;
    local_2360 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    local_2368 = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = false;
    bVar18 = true;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2178);
    pFVar4 = this->TextStyle;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->GetCrumbButtonContentCallback,&local_20f8);
    if (*(int *)&(this->GetCrumbButtonContentCallback).field_0x10 != 0) {
      plVar37 = *(longlong **)&(this->GetCrumbButtonContentCallback).field_0x8;
    }
    (**(code **)(*plVar37 + 0x60))(plVar37,&local_2468,param_2,pFVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20f8);
    bVar8 = true;
    bVar18 = false;
    pSVar38 = local_2468;
    FVar41.ReferenceController = local_2460;
  }
  if (FVar41.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar41.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar41.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2360);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2460);
  }
  bVar10 = false;
  bVar8 = false;
  bVar18 = false;
  if ((this->_padding_ == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar20 = SScrollBox::AddSlot((SScrollBox *)this->_padding_,&local_2a8);
  local_2560 = (SVerticalBox *)SVerticalBox::FArguments::FArguments(&local_1bc8);
  pFVar21 = SVerticalBox::Slot((FSlotArguments *)local_2068);
  local_2418.Value = 1.0;
  local_2418.bIsSet = true;
  local_2418.Getter._16_8_ = 0;
  local_2418.Getter._0_8_ = 0;
  local_2418.Getter._8_8_ = 0;
  pFVar21 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar21,&local_2418);
  pFVar22 = SButton::FArguments::FArguments(&local_1268);
  pFVar22->_ButtonStyle = this->ButtonStyle;
  local_2448._0_4_ = (this->ButtonContentPadding).Value.Left;
  local_2448._4_4_ = (this->ButtonContentPadding).Value.Top;
  uStack_2440._0_4_ = (this->ButtonContentPadding).Value.Right;
  uStack_2440._4_4_ = (this->ButtonContentPadding).Value.Bottom;
  local_2438 = (this->ButtonContentPadding).bIsSet;
  local_2420 = 0;
  local_2430 = (undefined1  [8])0x0;
  pvStack_2428 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2430,
             &(this->ButtonContentPadding).Getter);
  (pFVar22->_ContentPadding).Value.Left = (float)(undefined4)local_2448;
  (pFVar22->_ContentPadding).Value.Top = (float)local_2448._4_4_;
  (pFVar22->_ContentPadding).Value.Right = (float)(undefined4)uStack_2440;
  (pFVar22->_ContentPadding).Value.Bottom = (float)uStack_2440._4_4_;
  (pFVar22->_ContentPadding).bIsSet = local_2438;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2430);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2430);
  if (pvStack_2428 != (void *)0x0) {
    FMemory::Free(pvStack_2428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2430);
  pFVar22->_TextStyle = this->TextStyle;
  local_2128.Value.TextData.Reference = (param_1->Value).TextData.Reference;
  if (local_2128.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2128.Value.TextData.Reference + 8))
              (local_2128.Value.TextData.Reference,local_24c0);
  }
  local_2128.Value.Flags = (param_1->Value).Flags;
  local_2128.bIsSet = param_1->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_2128.Getter,&param_1->Getter);
  pFVar22 = SButton::FArguments::Text(pFVar22,&local_2128);
  uVar9 = uStack_2570 >> 0x20;
  uStack_2570 = uVar9 << 0x20;
  local_21d8 = CrumbButtonClicked;
  lStack_21d0 = uStack_2570;
  pFVar22 = SButton::FArguments::
            OnClicked<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,int>
                      (pFVar22,this,(pmf_5fec2014 *)&local_21d8,this->NextValidCrumbID);
  if (FVar41.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar41.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar41.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_21e8 = (pFVar22->_Content).Widget.Object;
  pTStack_21e0 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar22->_Content).Widget.Object = pSVar38;
  (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = FVar41.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_21e0);
  FLLMScope::FLLMScope(&local_2558,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2458 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2478,&local_2458,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_23c0,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xb0,&local_2563);
  FMemScope::~FMemScope(&local_2478);
  FLLMScope::~FLLMScope(&local_2558);
  local_24c8 = local_23c0._Widget.SharedReferenceCount.ReferenceController;
  if (local_23c0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23c0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_23c0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2548 = local_23c0._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23c0,&local_21b8,pFVar22);
  pTVar40 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_2540 = pTVar23->Object;
  if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2538.ReferenceController = pTVar40;
  if ((SButton **)&pFVar21->field_0x8 != &local_2540) {
    *(SButton **)&pFVar21->field_0x8 = local_2540;
    local_2540 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar21->field_0x10,&local_2538);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2538.ReferenceController);
  pFVar24 = SVerticalBox::FArguments::operator+((FArguments *)local_2560,pFVar21);
  FLLMScope::FLLMScope(&local_2554,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2480 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2488,&local_2480,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_23d8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xaa,&local_2568);
  FMemScope::~FMemScope(&local_2488);
  FLLMScope::~FLLMScope(&local_2554);
  local_24a0 = local_23d8._Widget.SharedReferenceCount.ReferenceController;
  if (local_23d8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_23d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2560 = local_23d8._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23d8,&local_21c8,pFVar24);
  pTVar39 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_2518 = pTVar25->Object;
  if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2510.ReferenceController = pTVar39;
  if ((SVerticalBox **)&pFVar20->_padding_ != &local_2518) {
    pFVar20->_padding_ = (longlong)local_2518;
    local_2518 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->_padding_,&local_2510);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2510.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c0._Widget.SharedReferenceCount.ReferenceController);
  SButton::FArguments::~FArguments(&local_1268);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2010);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2038);
  if ((void *)local_2038._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2038._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2038);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2058);
  if (local_2068[0] != (undefined8 *)0x0) {
    (**(code **)*local_2068[0])(local_2068[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1bc8._Slots.AllocatorInstance.Data,local_1bc8._Slots.ArrayNum);
  if ((FSlotArguments *)local_1bc8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1bc8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1bc8);
  TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_2a8);
  FVar11 = SNullWidget::NullWidget.SharedReferenceCount;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetCrumbMenuContentCallback,&local_20e0);
  if (((*(int *)&(this->GetCrumbMenuContentCallback).field_0x10 == 0) ||
      (plVar37 = *(longlong **)&(this->GetCrumbMenuContentCallback).field_0x8,
      plVar37 == (longlong *)0x0)) || (cVar15 = (**(code **)(*plVar37 + 0x38))(), cVar15 == '\0')) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20e0);
  if (bVar16) {
    pFVar22 = SButton::FArguments::FArguments(&local_d28);
    uStack_2570 = uVar9 << 0x20;
    pFVar22->_VAlign = VAlign_Center;
    pFVar22->_ButtonStyle = this->ButtonStyle;
    local_21a8 = GetCrumbDelimiterVisibility;
    lStack_21a0 = uStack_2570;
    pFVar22 = TSlateBaseNamedArgs<SButton>::
              Visibility<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,int>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar22,this,(pmf_94478fcf *)&local_21a8,
                         this->NextValidCrumbID);
    uStack_2570 = uVar9 << 0x20;
    local_2198 = OnCrumbDelimiterClicked;
    lStack_2190 = uStack_2570;
    pFVar22 = SButton::FArguments::
              OnClicked<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,int>
                        (pFVar22,this,(pmf_5fec2014 *)&local_2198,this->NextValidCrumbID);
    local_2268.bIsSet = true;
    local_2268.Getter._16_8_ = 0;
    local_2268.Value.Left = ___xmm_00000000404000000000000040400000;
    local_2268.Value.Top = _UNK_150978bd4;
    local_2268.Value.Right = _UNK_150978bd8;
    local_2268.Value.Bottom = _UNK_150978bdc;
    local_2268.Getter._0_8_ = 0;
    local_2268.Getter._8_8_ = 0;
    pFVar22 = SButton::FArguments::ContentPadding(pFVar22,&local_2268);
    pFVar26 = SImage::FArguments::FArguments(&local_17b8);
    pTVar27 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_1e98,&this->DelimiterImage);
    pFVar26 = SImage::FArguments::Image(pFVar26,pTVar27);
    local_2380 = CONCAT22(local_2380._2_2_,2);
    local_22d8 = local_2380;
    local_2390 = ___xmm_3f8000003f800000000000003f800000;
    uStack_2388 = _UNK_15090c6d8;
    local_22d4 = 1;
    local_22e8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_22e8._8_8_ = _UNK_15090c6d8;
    local_22c0 = 0;
    local_22d0 = 0;
    uStack_22c8 = 0;
    pFVar26 = SImage::FArguments::ColorAndOpacity
                        (pFVar26,(TAttribute<FSlateColor> *)&local_22e8._s_0);
    pTVar28 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_20b0,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,200,&local_2567);
    pTVar29 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar28,&local_2160,pFVar26);
    pTVar40 = (pTVar29->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar29->Object;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_24d8 = (pFVar22->_Content).Widget.Object;
    pTStack_24d0 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar22->_Content).Widget.Object = (SWidget *)pSVar5;
    (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar40;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_24d0);
    pTVar30 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_20c8,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,0xc1,&local_2566);
    pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar30,&local_2188,pFVar22);
    pTVar39 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_2588 = pTVar23->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2188.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20c8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2160.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20b0._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_17b8);
    pFVar22 = &local_d28;
  }
  else {
    pFVar22 = SButton::FArguments::FArguments(&local_7e8);
    uStack_2570 = uVar9 << 0x20;
    pFVar22->_VAlign = VAlign_Center;
    pFVar22->_ButtonStyle = this->ButtonStyle;
    local_2148 = GetDelimiterVisibility;
    lStack_2140 = uStack_2570;
    pFVar22 = TSlateBaseNamedArgs<SButton>::
              Visibility<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,int>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar22,this,(pmf_94478fcf *)&local_2148,
                         this->NextValidCrumbID);
    local_2238.bIsSet = true;
    local_2238.Getter._16_8_ = 0;
    local_2238.Value.Left = ___xmm_00000000404000000000000040400000;
    local_2238.Value.Top = _UNK_150978bd4;
    local_2238.Value.Right = _UNK_150978bd8;
    local_2238.Value.Bottom = _UNK_150978bdc;
    local_2238.Getter._0_8_ = 0;
    local_2238.Getter._8_8_ = 0;
    pFVar22 = SButton::FArguments::ContentPadding(pFVar22,&local_2238);
    pFVar26 = SImage::FArguments::FArguments(&local_1510);
    pTVar27 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_1e70,&this->DelimiterImage);
    pFVar26 = SImage::FArguments::Image(pFVar26,pTVar27);
    local_236c = CONCAT22(local_236c._2_2_,2);
    local_22a8 = local_236c;
    local_237c = ___xmm_3f8000003f800000000000003f800000;
    uStack_2374 = _UNK_15090c6d8;
    local_22a4 = 1;
    local_22b8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_22b8._8_8_ = _UNK_15090c6d8;
    local_2290 = 0;
    local_22a0 = 0;
    uStack_2298 = 0;
    pFVar26 = SImage::FArguments::ColorAndOpacity
                        (pFVar26,(TAttribute<FSlateColor> *)&local_22b8._s_0);
    pTVar28 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_2080,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,0xd5,&local_2565);
    pTVar29 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar28,&local_2208,pFVar26);
    pTVar40 = (pTVar29->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar29->Object;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_24f0 = (pFVar22->_Content).Widget.Object;
    pTStack_24e8 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar22->_Content).Widget.Object = (SWidget *)pSVar5;
    (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar40;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_24e8);
    pTVar30 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_2098,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,0xcf,&local_2564);
    pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar30,&local_2138,pFVar22);
    pTVar39 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_2588 = pTVar23->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2138.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2098._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2208.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2080._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1510);
    pFVar22 = &local_7e8;
  }
  SButton::FArguments::~FArguments(pFVar22);
  pSVar31 = TSharedPtr<SScrollBox,1>::operator->((TSharedPtr<SScrollBox,1> *)&this->_padding_);
  local_24a8 = SScrollBox::AddSlot(pSVar31,&local_178);
  local_2470 = SVerticalBox::FArguments::FArguments(&local_19c0);
  pFVar21 = SVerticalBox::Slot((FSlotArguments *)local_1f80);
  local_23f8.Value = 1.0;
  local_23f8.bIsSet = true;
  local_23f8.Getter._0_8_ = 0;
  local_23f8.Getter._8_8_ = 0;
  local_23f8.Getter._16_8_ = 0;
  local_2498 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar21,&local_23f8);
  FVar32 = (FName)SMenuAnchor::FArguments::FArguments((FArguments *)local_1e48);
  iVar19 = this->NextValidCrumbID;
  local_2530 = FVar32;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar32 + 0x228),
             (FWriteAccessScope *)&local_2288);
  local_2270 = (FDelegateAllocation *)((longlong)FVar32 + 0x230);
  puVar33 = UE::Core::Private::DelegateAllocate(0x38,local_2270);
  pTVar40 = local_24c8;
  if (puVar33 != (undefined8 *)0x0) {
    uStack_2570 = (ulonglong)local_22f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar34 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_21f8);
    pTVar40 = (pTVar34->SharedReferenceCount).ReferenceController;
    local_2490 = pTVar34->Object;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar8 = true;
    bVar18 = true;
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar33 + 1) = iVar19;
    uVar35 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar35;
    *puVar33 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SBreadcrumbTrail_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar33[3] = local_2490;
    puVar33[4] = pTVar40;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->WeakReferenceCount = (atomic<int>)((int)pTVar40->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar33[5] = GetCrumbMenuContent;
    puVar33[6] = uStack_2570;
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21f8.SharedReferenceCount.ReferenceController);
  }
  if (local_2288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2288.Accessor,&local_2288);
  }
  FVar32 = local_2530;
  if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar40 = ((FSharedReferencer<1> *)((longlong)local_2530 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_2530 + 0x1f8))->Widget).Object = (SWidget *)local_2588;
  ((FSharedReferencer<1> *)((longlong)local_2530 + 0x200))->ReferenceController = pTVar39;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  FLLMScope::FLLMScope(&local_2550,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2530 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2450,&local_2530,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            (&local_2508,"SMenuAnchor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xe2,&local_2561);
  FMemScope::~FMemScope(&local_2450);
  FLLMScope::~FLLMScope(&local_2550);
  FVar11.ReferenceController = local_2508._Widget.SharedReferenceCount.ReferenceController;
  pSVar12 = local_2508._Widget.Object;
  if (local_2508._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2508._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2508._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pSVar36 = TSharedPtr<SMenuAnchor,1>::operator->(&local_2508._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar36,(FSlateBaseNamedArgs *)FVar32);
  SMenuAnchor::Construct(local_2508._Widget.Object,(FArguments *)FVar32);
  pSVar36 = TSharedPtr<SMenuAnchor,1>::operator->(&local_2508._Widget);
  if ((pSVar36->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)(pSVar36->_padding_ + 0x228))(pSVar36);
    bVar17 = 0;
    if (cVar15 == '\0') goto LAB_142ef23f4;
  }
  bVar17 = 0x20;
LAB_142ef23f4:
  *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ & 0xdf;
  *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ | bVar17;
  pSVar36 = TSharedPtr<SMenuAnchor,1>::operator->(&local_2508._Widget);
  pbVar1 = (byte *)((longlong)&pSVar36->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2508._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2508._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2508._Widget.Object = (SMenuAnchor *)0x0;
  if ((pSVar12 == (SMenuAnchor *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2358.Object = (SWidget *)pSVar12;
  local_2358.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar21 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2498,&local_2358);
  pFVar24 = SVerticalBox::FArguments::operator+(local_2470,pFVar21);
  FLLMScope::FLLMScope(&local_254c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_24bc = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_24b0,&local_24bc,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_23a8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xdd,&local_2562);
  FMemScope::~FMemScope(&local_24b0);
  FLLMScope::~FLLMScope(&local_254c);
  FVar14.ReferenceController = local_23a8._Widget.SharedReferenceCount.ReferenceController;
  if (local_23a8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_23a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23a8,&local_22f8,pFVar24);
  pTVar40 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_2528 = pTVar25->Object;
  if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2520.ReferenceController = pTVar40;
  if ((SVerticalBox **)&local_24a8->_padding_ != &local_2528) {
    local_24a8->_padding_ = (longlong)local_2528;
    local_2528 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_24a8->_padding_,&local_2520);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2520.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_22f8.SharedReferenceCount.ReferenceController._4_4_,
                      local_22f8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2508._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1be8);
  if ((void *)local_1be8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1be8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1be8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c08);
  if ((void *)local_1c08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c20);
  if ((void *)local_1c20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1e48._544_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1e48._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1e48);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1f28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f50);
  if ((void *)local_1f50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1f50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f70);
  if (local_1f80[0] != (undefined8 *)0x0) {
    (**(code **)*local_1f80[0])(local_1f80[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_19c0._Slots.AllocatorInstance.Data,local_19c0._Slots.ArrayNum);
  if ((FSlotArguments *)local_19c0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_19c0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_19c0);
  TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_178);
  if ((local_23a8._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_23a8._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_2560 == (SVerticalBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar40 = local_24a0;
  if (local_24a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_24a0->SharedReferenceCount = (atomic<int>)((int)local_24a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_2560 == (SVerticalBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pSVar12 == (SMenuAnchor *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar12 == (SMenuAnchor *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_2548 == (SButton *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar13 = local_24c8;
  if (local_24c8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_24c8->SharedReferenceCount = (atomic<int>)((int)local_24c8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_2548 == (SButton *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar19 = (this->CrumbList).ArrayNum;
  piVar2 = &(this->CrumbList).ArrayMax;
  if (iVar19 == *piVar2) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,&(this->CrumbList).AllocatorInstance,piVar2);
  }
  (this->CrumbList).ArrayNum = iVar19 + 1;
  pFVar6 = (this->CrumbList).AllocatorInstance.Data;
  local_2348.Object = local_24e0->Object;
  local_2348.SharedReferenceCount.ReferenceController =
       (local_24e0->SharedReferenceCount).ReferenceController;
  if (local_2348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2338.Object = local_23a8._Widget.Object;
  local_2338.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2328.Object = local_2560;
  local_2328.SharedReferenceCount.ReferenceController = pTVar40;
  if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2318.Object = pSVar12;
  local_2318.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2308.Object = local_2548;
  local_2308.SharedReferenceCount.ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCrumbItem::FCrumbItem
            ((FCrumbItem *)(pFVar6 + (longlong)iVar19 * 0x58),this->NextValidCrumbID,&local_2308,
             &local_2318,&local_2328,&local_2338,&local_2348);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  this->NextValidCrumbID = (this->NextValidCrumbID + 1) % 0x7ffffffe;
  TDelegate<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound(&this->OnCrumbPushed,local_24e0);
  pSVar31 = TSharedPtr<SScrollBox,1>::operator->((TSharedPtr<SScrollBox,1> *)&this->_padding_);
  SScrollBox::ScrollToEnd(pSVar31);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar41.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

