// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 12

// ~SBreadcrumbTrail<int> @ 142f37560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SBreadcrumbTrail<int>::~SBreadcrumbTrail<int>(SBreadcrumbTrail<int> *this)

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
  TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
            (&this->GetCrumbButtonContentCallback);
  TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy>
            (&this->GetCrumbMenuContentCallback);
  TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>
            (&this->HasCrumbMenuContentCallback);
  TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>(&this->OnCrumbClicked);
  TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>(&this->OnCrumbPopped);
  TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>(&this->OnCrumbPushed);
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
  DestructItems<SBreadcrumbTrail<int>::FCrumbItem,int>
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

// AddLeadingDelimiter @ 142f57f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SBreadcrumbTrail<int>::AddLeadingDelimiter(SBreadcrumbTrail<int> *this)

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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SBreadcrumbTrail_H___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// Construct @ 142f5c850

void __thiscall SBreadcrumbTrail<int>::Construct(SBreadcrumbTrail<int> *this,FArguments *param_1)

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
  FSharedReferencer<1> local_340;
  undefined4 local_338;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_330;
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
  TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnCrumbPushed,&param_1->_OnCrumbPushed);
  TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnCrumbPopped,&param_1->_OnCrumbPopped);
  TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnCrumbClicked,&param_1->_OnCrumbClicked);
  this->bHasStaticBreadcrumbs = param_1->_PersistentBreadcrumbs;
  if (&param_1->_HasCrumbMenuContent != &this->HasCrumbMenuContentCallback) {
    local_348 = (undefined1  [8])0x0;
    local_340.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    ~TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy> *)local_348);
  }
  if (&param_1->_GetCrumbMenuContent != &this->GetCrumbMenuContentCallback) {
    local_348 = (undefined1  [8])0x0;
    local_340.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    ~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy> *)
               local_348);
  }
  if (&param_1->_GetCrumbButtonContent != &this->GetCrumbButtonContentCallback) {
    local_348 = (undefined1  [8])0x0;
    local_340.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
    ::
    ~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
                *)local_348);
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
            (&local_330,"SScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0x93,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if (local_330._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_330._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_330._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_330._Widget.Object;
  this->_padding_ = (longlong)local_330._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar9 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_330,(TSharedRef<SScrollBox,1> *)local_348,pFVar8);
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
            (local_340.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330._Widget.SharedReferenceCount.ReferenceController);
  SScrollBox::FArguments::~FArguments(&local_308);
  AddLeadingDelimiter(this);
  return;
}

// CrumbButtonClicked @ 142fb58f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBreadcrumbTrail<int>::CrumbButtonClicked
          (SBreadcrumbTrail<int> *this,FReply *__return_storage_ptr__,int param_1)

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
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  iVar1 = (this->CrumbList).ArrayNum;
  uVar8 = 0;
  uVar9 = 0;
  if (this->bHasStaticBreadcrumbs == false) {
    uVar11 = uVar8;
    if (0 < iVar1) {
LAB_142fb5a50:
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
      goto code_r0x000142fb5aa9;
      if (uVar10 != 0xffffffff) {
        iVar1 = (this->CrumbList).ArrayNum;
        while ((int)uVar10 < iVar1 + -1) {
          PopCrumb(this);
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
          (**(code **)(*plVar3 + 0x68))(plVar3,pFVar2 + (longlong)(iVar1 + -1) * 0x50 + 0x48);
        }
        this_00 = &local_30;
        goto LAB_142fb5b80;
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
            (**(code **)(*plVar3 + 0x68))(plVar3,pFVar2 + (longlong)(int)uVar10 * 0x50 + 0x48);
          }
          this_00 = &local_48;
LAB_142fb5b80:
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(this_00);
          break;
        }
        uVar8 = (ulonglong)(uVar10 + 1);
        uVar11 = uVar11 + 0x50;
      } while ((int)(uVar10 + 1) < (this->CrumbList).ArrayNum);
    }
  }
LAB_142fb5b85:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
code_r0x000142fb5aa9:
  uVar8 = uVar8 + 0x50;
  uVar11 = (ulonglong)(uVar10 + 1);
  if ((this->CrumbList).ArrayNum <= (int)(uVar10 + 1)) goto LAB_142fb5b85;
  goto LAB_142fb5a50;
}

// GetCrumbDelimiterVisibility @ 142fd1af0

EVisibility __thiscall
SBreadcrumbTrail<int>::GetCrumbDelimiterVisibility(SBreadcrumbTrail<int> *this,int param_1)

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
                (longlong)(this->CrumbList).ArrayNum * 0x50 + -0x50) == in_R8D) {
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
        bVar3 = TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>::Execute
                          (&this->HasCrumbMenuContentCallback,
                           (int *)((this->CrumbList).AllocatorInstance.Data +
                                  (longlong)((this->CrumbList).ArrayNum + -1) * 0x50 + 0x48));
        EVar5 = EVisibility::Collapsed;
        if (!bVar3) goto LAB_142fd1c2a;
      }
    }
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_142fd1c2a:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

// GetCrumbMenuContent @ 142fd1c50

TSharedRef<SWidget,1> * __thiscall
SBreadcrumbTrail<int>::GetCrumbMenuContent
          (SBreadcrumbTrail<int> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

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
          cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x48)
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
            goto LAB_142fd1e55;
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
        (**(code **)(*plVar9 + 0x60))(plVar9,&local_98,pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x48)
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
      lVar11 = lVar11 + 0x50;
    } while ((int)uVar12 < (this->CrumbList).ArrayNum);
    if (local_b8 != (SWidget *)0x0) goto LAB_142fd1f8b;
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
LAB_142fd1f8b:
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
LAB_142fd1e55:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// GetDelimiterVisibility @ 142fd24d0

EVisibility __thiscall
SBreadcrumbTrail<int>::GetDelimiterVisibility(SBreadcrumbTrail<int> *this,int param_1)

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
                (longlong)(this->CrumbList).ArrayNum * 0x50 + -0x50) == in_R8D) goto LAB_142fd256b;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_142fd256b:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

// GetLeadingDelimiterVisibility @ 142fd3760

EVisibility __thiscall
SBreadcrumbTrail<int>::GetLeadingDelimiterVisibility(SBreadcrumbTrail<int> *this)

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

// OnCrumbDelimiterClicked @ 142fee560

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBreadcrumbTrail<int>::OnCrumbDelimiterClicked
          (SBreadcrumbTrail<int> *this,FReply *__return_storage_ptr__,int param_1)

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
                    ((this->CrumbList).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x50 + 0x18);
          (**(code **)(*plVar1 + 0x250))(plVar1,1,1,0);
          FReply::FReply(&local_d0,true);
          FReply::operator=(__return_storage_ptr__,&local_d0);
          FReply::~FReply(&local_d0);
          return __return_storage_ptr__;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x50;
      } while ((int)uVar7 < (this->CrumbList).ArrayNum);
    }
  }
  return __return_storage_ptr__;
}

// PopCrumb @ 142ffbb10

int __thiscall SBreadcrumbTrail<int>::PopCrumb(SBreadcrumbTrail<int> *this)

{
  int *piVar1;
  TArray<SBreadcrumbTrail<int>::FCrumbItem,TSizedDefaultAllocator<32>_> *pTVar2;
  SScrollBox *pSVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TSharedRef<SWidget,1> local_98;
  TSharedRef<SWidget,1> local_88;
  undefined4 local_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *local_68;
  undefined8 local_60;
  TReferenceControllerBase<1> *local_58;
  SWidget *local_50;
  TReferenceControllerBase<1> *local_48;
  SWidget *local_40;
  TReferenceControllerBase<1> *local_38;
  int local_30 [2];
  FReadAccessScope local_28;
  
  if ((this->CrumbList).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasCrumbs()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                       ,0xfa,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  pTVar2 = &this->CrumbList;
  if ((this->CrumbList).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->CrumbList).ArrayNum;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  local_78 = *(undefined4 *)(pFVar9 + (longlong)iVar7 * 0x50 + -0x50);
  local_70 = *(undefined8 *)(pFVar9 + (longlong)iVar7 * 0x50 + -0x48);
  local_68 = *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar7 * 0x50 + -0x40);
  if (local_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(undefined8 *)(pFVar9 + (longlong)iVar7 * 0x50 + -0x38);
  local_58 = *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar7 * 0x50 + -0x30);
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = *(SWidget **)(pFVar9 + (longlong)iVar7 * 0x50 + -0x28);
  local_48 = *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar7 * 0x50 + -0x20);
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = *(SWidget **)(pFVar9 + (longlong)iVar7 * 0x50 + -0x18);
  local_38 = *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar7 * 0x50 + -0x10);
  if (local_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar8 = (this->CrumbList).ArrayNum;
  local_30[0] = *(int *)(pFVar9 + (longlong)iVar7 * 0x50 + -8);
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x50;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar9 + -0x10));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar9 + -0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar9 + -0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar9 + -0x40));
  iVar8 = (this->CrumbList).ArrayNum - iVar8;
  if (iVar8 != 0) {
    memmove(pFVar9 + -0x50,pFVar9,(longlong)iVar8 * 0x50);
  }
  piVar1 = &(this->CrumbList).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,&pTVar2->AllocatorInstance,(this->CrumbList).ArrayNum,
             &(this->CrumbList).ArrayMax);
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  pSVar3 = (SScrollBox *)this->_padding_;
  local_98.Object = local_50;
  local_98.SharedReferenceCount.ReferenceController = local_48;
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  SScrollBox::RemoveSlot(pSVar3,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  pSVar3 = (SScrollBox *)this->_padding_;
  local_88.Object = local_40;
  local_88.SharedReferenceCount.ReferenceController = local_38;
  if (local_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  SScrollBox::RemoveSlot(pSVar3,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCrumbPopped,
             &local_28);
  if ((*(int *)&(this->OnCrumbPopped).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnCrumbPopped).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  iVar7 = local_30[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  return iVar7;
}

// PushCrumb @ 143001c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SBreadcrumbTrail<int>::PushCrumb
          (SBreadcrumbTrail<int> *this,TAttribute<FText> *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FTextBlockStyle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SImage *pSVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FSharedReferencer<1> FVar10;
  SButton *pSVar11;
  FSharedReferencer<1> FVar12;
  FSharedReferencer<1> FVar13;
  FSharedReferencer<1> FVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FScopedWidgetSlotArguments *pFVar19;
  FArguments *pFVar20;
  FSlotArguments *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SButton,1> *pTVar23;
  TSharedRef<SVerticalBox,1> *pTVar24;
  FArguments *pFVar25;
  TAttribute<FSlateBrush_const_*> *pTVar26;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar27;
  TSharedRef<SImage,1> *pTVar28;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar29;
  SScrollBox *pSVar30;
  FArguments *pFVar31;
  undefined8 *puVar32;
  TSharedRef<SWidget,1> *pTVar33;
  ulong64 uVar34;
  TSharedRef<SMenuAnchor,1> *pTVar35;
  longlong lVar36;
  longlong *plVar37;
  FSharedReferencer<1> FVar38;
  TReferenceControllerBase<1> *pTVar39;
  SWidget *pSVar40;
  undefined1 auStackY_25a8 [32];
  T0RequiredArgs local_2568;
  T0RequiredArgs local_2567;
  T0RequiredArgs local_2566;
  T0RequiredArgs local_2565;
  T0RequiredArgs local_2564;
  T0RequiredArgs local_2563;
  T0RequiredArgs local_2562;
  T0RequiredArgs local_2561;
  SButton *local_2560;
  FScopedWidgetSlotArguments *local_2558;
  undefined4 uStack_2550;
  uint uStack_254c;
  SButton *local_2548;
  FArguments *local_2540;
  FLLMScope local_2538;
  FLLMScope local_2534;
  FLLMScope local_2530;
  FLLMScope local_252c;
  SVerticalBox *local_2528;
  SVerticalBox *local_2520;
  FSharedReferencer<1> local_2518;
  SButton *local_2510;
  FSharedReferencer<1> local_2508;
  SVerticalBox *local_2500;
  FSharedReferencer<1> local_24f8;
  FName local_24f0;
  undefined4 uStack_24e8;
  undefined4 uStack_24e4;
  int *local_24e0;
  SWidget *local_24d8;
  TReferenceControllerBase<1> *pTStack_24d0;
  SWidget *local_24c8;
  TReferenceControllerBase<1> *pTStack_24c0;
  TSharedRef<SBreadcrumbTrail<int>,1> local_24b8;
  FName local_24a8;
  FMemScope local_24a0;
  FMemScope local_2498;
  FMemScope local_2490;
  FName local_2488;
  undefined1 local_2480 [4];
  FName local_247c;
  FMemScope local_2470;
  FSlotArguments *local_2468;
  SWidget *local_2460;
  TReferenceControllerBase<1> *local_2458;
  TSharedPtr<SBreadcrumbTrail<int>,1> local_2448;
  undefined8 local_2438;
  undefined8 uStack_2430;
  bool local_2428;
  undefined1 local_2420 [8];
  void *pvStack_2418;
  undefined4 local_2410;
  TAttribute<float> local_2408;
  TAttribute<float> local_23e8;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_23c8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_23b0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2398;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2380;
  undefined8 local_2368;
  undefined8 uStack_2360;
  undefined4 local_2358;
  undefined8 local_2354;
  undefined8 uStack_234c;
  undefined4 local_2344;
  TSharedRef<SWidget,1> local_2340;
  SWidget *local_2330;
  TReferenceControllerBase<1> *local_2328;
  TSharedRef<SMenuAnchor,1> local_2320;
  FLinearColor_u_0 local_2310;
  undefined4 local_2300;
  undefined1 local_22fc;
  undefined8 local_22f8;
  undefined8 uStack_22f0;
  undefined8 local_22e8;
  FLinearColor_u_0 local_22e0;
  undefined4 local_22d0;
  undefined1 local_22cc;
  undefined8 local_22c8;
  undefined8 uStack_22c0;
  undefined8 local_22b8;
  FDestructionSentinel local_22b0;
  undefined1 *local_2298;
  TAttribute<FMargin> local_2290;
  TAttribute<FMargin> local_2260;
  TSharedRef<SImage,1> local_2230;
  code *local_2218;
  longlong lStack_2210;
  TSharedRef<SButton,1> local_2208;
  TSharedRef<SImage,1> local_21f8;
  TSharedRef<SWidget,1> local_21e8;
  TSharedRef<SVerticalBox,1> local_21d8;
  TSharedRef<SButton,1> local_21c8;
  code *local_21b8;
  longlong lStack_21b0;
  code *local_21a8;
  longlong lStack_21a0;
  TSharedRef<SButton,1> local_2198;
  TSharedRef<SVerticalBox,1> local_2188;
  SWidget *local_2178;
  TReferenceControllerBase<1> *pTStack_2170;
  FReadAccessScope local_2168;
  code *local_2148;
  longlong lStack_2140;
  SWidget *local_2138;
  TReferenceControllerBase<1> *pTStack_2130;
  TAttribute<FText> local_2128;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_20f8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_20e0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_20c8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_20b0;
  FReadAccessScope local_2098;
  FReadAccessScope local_2080;
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
  FArguments local_1e48;
  FArguments local_1c40;
  FArguments local_1a38;
  FArguments local_17b8;
  FArguments local_1510;
  FArguments local_1268;
  FArguments local_d28;
  FArguments local_7e8;
  FScopedWidgetSlotArguments local_2a8;
  FScopedWidgetSlotArguments local_178;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143001c22;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_25a8;
  plVar37 = (longlong *)0x0;
  local_24e0 = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetCrumbButtonContentCallback,&local_2168);
  if (((*(int *)&(this->GetCrumbButtonContentCallback).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->GetCrumbButtonContentCallback).field_0x8,
      plVar2 == (longlong *)0x0)) || (cVar15 = (**(code **)(*plVar2 + 0x38))(), cVar15 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2168);
    FVar38 = SNullWidget::NullWidget.SharedReferenceCount;
    pSVar40 = SNullWidget::NullWidget.Object;
    local_2328 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    local_2330 = SNullWidget::NullWidget.Object;
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
    bVar17 = true;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2168);
    pFVar3 = this->TextStyle;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->GetCrumbButtonContentCallback,&local_2080);
    if (*(int *)&(this->GetCrumbButtonContentCallback).field_0x10 != 0) {
      plVar37 = *(longlong **)&(this->GetCrumbButtonContentCallback).field_0x8;
    }
    (**(code **)(*plVar37 + 0x60))(plVar37,&local_2460,param_2,pFVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2080);
    bVar8 = true;
    bVar17 = false;
    FVar38.ReferenceController = local_2458;
    pSVar40 = local_2460;
  }
  if (FVar38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar38.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar38.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2328);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2458);
  }
  bVar9 = false;
  bVar8 = false;
  bVar17 = false;
  if ((this->_padding_ == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar19 = SScrollBox::AddSlot((SScrollBox *)this->_padding_,&local_2a8);
  pFVar20 = SVerticalBox::FArguments::FArguments(&local_1e48);
  pFVar21 = SVerticalBox::Slot((FSlotArguments *)local_2068);
  local_23e8.Value = 1.0;
  local_23e8.bIsSet = true;
  local_23e8.Getter._16_8_ = 0;
  local_23e8.Getter._0_8_ = 0;
  local_23e8.Getter._8_8_ = 0;
  local_2560 = (SButton *)SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar21,&local_23e8);
  pFVar22 = SButton::FArguments::FArguments(&local_1268);
  pFVar22->_ButtonStyle = this->ButtonStyle;
  local_2438._0_4_ = (this->ButtonContentPadding).Value.Left;
  local_2438._4_4_ = (this->ButtonContentPadding).Value.Top;
  uStack_2430._0_4_ = (this->ButtonContentPadding).Value.Right;
  uStack_2430._4_4_ = (this->ButtonContentPadding).Value.Bottom;
  local_2428 = (this->ButtonContentPadding).bIsSet;
  local_2410 = 0;
  local_2420 = (undefined1  [8])0x0;
  pvStack_2418 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2420,
             &(this->ButtonContentPadding).Getter);
  (pFVar22->_ContentPadding).Value.Left = (float)(undefined4)local_2438;
  (pFVar22->_ContentPadding).Value.Top = (float)local_2438._4_4_;
  (pFVar22->_ContentPadding).Value.Right = (float)(undefined4)uStack_2430;
  (pFVar22->_ContentPadding).Value.Bottom = (float)uStack_2430._4_4_;
  (pFVar22->_ContentPadding).bIsSet = local_2428;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2420);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2420);
  if (pvStack_2418 != (void *)0x0) {
    FMemory::Free(pvStack_2418);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2420);
  pFVar22->_TextStyle = this->TextStyle;
  local_2128.Value.TextData.Reference = (param_1->Value).TextData.Reference;
  if (local_2128.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2128.Value.TextData.Reference + 8))
              (local_2128.Value.TextData.Reference,local_2480);
  }
  local_2128.Value.Flags = (param_1->Value).Flags;
  local_2128.bIsSet = param_1->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_2128.Getter,&param_1->Getter);
  pFVar22 = SButton::FArguments::Text(pFVar22,&local_2128);
  local_2558 = (FScopedWidgetSlotArguments *)CrumbButtonClicked;
  uStack_2550 = 0;
  lStack_2140 = (ulonglong)uStack_254c << 0x20;
  local_2148 = CrumbButtonClicked;
  pFVar22 = SButton::FArguments::OnClicked<SBreadcrumbTrail<int>,int>
                      (pFVar22,this,(pmf_466cf3ab *)&local_2148,this->NextValidCrumbID);
  if (FVar38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar38.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar38.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2178 = (pFVar22->_Content).Widget.Object;
  pTStack_2170 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar22->_Content).Widget.Object = pSVar40;
  (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = FVar38.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2170);
  FLLMScope::FLLMScope(&local_2538,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2488 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2490,&local_2488,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2398,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xb0,&local_2568);
  FMemScope::~FMemScope(&local_2490);
  FLLMScope::~FLLMScope(&local_2538);
  FVar13.ReferenceController = local_2398._Widget.SharedReferenceCount.ReferenceController;
  if (local_2398._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2398._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2398._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2548 = local_2398._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2398,&local_2198,pFVar22);
  pSVar11 = local_2560;
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_2510 = pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2508.ReferenceController = pTVar4;
  if ((SButton **)&local_2560->_padding_ != &local_2510) {
    local_2560->_padding_ = (longlong)local_2510;
    local_2510 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2560->_padding_,&local_2508);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2508.ReferenceController);
  pFVar20 = SVerticalBox::FArguments::operator+(pFVar20,(FSlotArguments *)pSVar11);
  FLLMScope::FLLMScope(&local_2534,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_24a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_24a0,&local_24a8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2380,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xaa,&local_2567);
  FMemScope::~FMemScope(&local_24a0);
  FLLMScope::~FLLMScope(&local_2534);
  FVar14.ReferenceController = local_2380._Widget.SharedReferenceCount.ReferenceController;
  if (local_2380._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2380._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2380._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2528 = local_2380._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar24 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2380,&local_2188,pFVar20);
  pTVar39 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_2520 = pTVar24->Object;
  if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2518.ReferenceController = pTVar39;
  if ((SVerticalBox **)&pFVar19->_padding_ != &local_2520) {
    pFVar19->_padding_ = (longlong)local_2520;
    local_2520 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar19->_padding_,&local_2518);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2518.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2380._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2398._Widget.SharedReferenceCount.ReferenceController);
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
            ((FSlotArguments *)local_1e48._Slots.AllocatorInstance.Data,local_1e48._Slots.ArrayNum);
  if ((FSlotArguments *)local_1e48._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1e48._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1e48);
  TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_2a8);
  FVar10 = SNullWidget::NullWidget.SharedReferenceCount;
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
             &this->GetCrumbMenuContentCallback,&local_2098);
  if (((*(int *)&(this->GetCrumbMenuContentCallback).field_0x10 == 0) ||
      (plVar37 = *(longlong **)&(this->GetCrumbMenuContentCallback).field_0x8,
      plVar37 == (longlong *)0x0)) || (cVar15 = (**(code **)(*plVar37 + 0x38))(), cVar15 == '\0')) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_2098);
  if (bVar16) {
    pFVar22 = SButton::FArguments::FArguments(&local_d28);
    uStack_2550 = 0;
    pFVar22->_VAlign = VAlign_Center;
    pFVar22->_ButtonStyle = this->ButtonStyle;
    local_2558 = (FScopedWidgetSlotArguments *)GetCrumbDelimiterVisibility;
    lStack_21a0 = (ulonglong)uStack_254c << 0x20;
    local_21a8 = GetCrumbDelimiterVisibility;
    pFVar22 = TSlateBaseNamedArgs<SButton>::Visibility<SBreadcrumbTrail<int>,int>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar22,this,(pmf_88e4e818 *)&local_21a8,
                         this->NextValidCrumbID);
    local_2558 = (FScopedWidgetSlotArguments *)OnCrumbDelimiterClicked;
    uStack_2550 = 0;
    lStack_21b0 = (ulonglong)uStack_254c << 0x20;
    local_21b8 = OnCrumbDelimiterClicked;
    pFVar22 = SButton::FArguments::OnClicked<SBreadcrumbTrail<int>,int>
                        (pFVar22,this,(pmf_466cf3ab *)&local_21b8,this->NextValidCrumbID);
    local_2260.bIsSet = true;
    local_2260.Getter._16_8_ = 0;
    local_2260.Value.Left = ___xmm_00000000404000000000000040400000;
    local_2260.Value.Top = _UNK_150978bd4;
    local_2260.Value.Right = _UNK_150978bd8;
    local_2260.Value.Bottom = _UNK_150978bdc;
    local_2260.Getter._0_8_ = 0;
    local_2260.Getter._8_8_ = 0;
    pFVar22 = SButton::FArguments::ContentPadding(pFVar22,&local_2260);
    pFVar25 = SImage::FArguments::FArguments(&local_17b8);
    pTVar26 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_1e98,&this->DelimiterImage);
    pFVar25 = SImage::FArguments::Image(pFVar25,pTVar26);
    local_2344 = CONCAT22(local_2344._2_2_,2);
    local_22d0 = local_2344;
    local_22b8 = 0;
    local_2354 = ___xmm_3f8000003f800000000000003f800000;
    uStack_234c = _UNK_15090c6d8;
    local_22cc = 1;
    local_22e0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_22e0._8_8_ = _UNK_15090c6d8;
    local_22c8 = 0;
    uStack_22c0 = 0;
    pFVar25 = SImage::FArguments::ColorAndOpacity
                        (pFVar25,(TAttribute<FSlateColor> *)&local_22e0._s_0);
    pTVar27 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_20b0,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,200,&local_2566);
    pTVar28 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar27,&local_2230,pFVar25);
    pTVar4 = (pTVar28->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar28->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_24d8 = (pFVar22->_Content).Widget.Object;
    pTStack_24d0 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar22->_Content).Widget.Object = (SWidget *)pSVar5;
    (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_24d0);
    pTVar29 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_20c8,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,0xc1,&local_2565);
    pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar29,&local_21c8,pFVar22);
    pTVar39 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_2560 = pTVar23->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20c8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2230.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20b0._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_17b8);
    pFVar22 = &local_d28;
  }
  else {
    pFVar22 = SButton::FArguments::FArguments(&local_7e8);
    uStack_2550 = 0;
    pFVar22->_VAlign = VAlign_Center;
    pFVar22->_ButtonStyle = this->ButtonStyle;
    local_2558 = (FScopedWidgetSlotArguments *)GetDelimiterVisibility;
    lStack_2210 = (ulonglong)uStack_254c << 0x20;
    local_2218 = GetDelimiterVisibility;
    pFVar22 = TSlateBaseNamedArgs<SButton>::Visibility<SBreadcrumbTrail<int>,int>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar22,this,(pmf_88e4e818 *)&local_2218,
                         this->NextValidCrumbID);
    local_2290.bIsSet = true;
    local_2290.Getter._16_8_ = 0;
    local_2290.Value.Left = ___xmm_00000000404000000000000040400000;
    local_2290.Value.Top = _UNK_150978bd4;
    local_2290.Value.Right = _UNK_150978bd8;
    local_2290.Value.Bottom = _UNK_150978bdc;
    local_2290.Getter._0_8_ = 0;
    local_2290.Getter._8_8_ = 0;
    pFVar22 = SButton::FArguments::ContentPadding(pFVar22,&local_2290);
    pFVar25 = SImage::FArguments::FArguments(&local_1510);
    pTVar26 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_1e70,&this->DelimiterImage);
    pFVar25 = SImage::FArguments::Image(pFVar25,pTVar26);
    local_2358 = CONCAT22(local_2358._2_2_,2);
    local_2300 = local_2358;
    local_22e8 = 0;
    local_2368 = ___xmm_3f8000003f800000000000003f800000;
    uStack_2360 = _UNK_15090c6d8;
    local_22fc = 1;
    local_2310._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_2310._8_8_ = _UNK_15090c6d8;
    local_22f8 = 0;
    uStack_22f0 = 0;
    pFVar25 = SImage::FArguments::ColorAndOpacity
                        (pFVar25,(TAttribute<FSlateColor> *)&local_2310._s_0);
    pTVar27 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_20f8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,0xd5,&local_2564);
    pTVar28 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar27,&local_21f8,pFVar25);
    pTVar4 = (pTVar28->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar28->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_24c8 = (pFVar22->_Content).Widget.Object;
    pTStack_24c0 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar22->_Content).Widget.Object = (SWidget *)pSVar5;
    (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_24c0);
    pTVar29 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_20e0,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                         ,0xcf,&local_2563);
    pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar29,&local_2208,pFVar22);
    pTVar39 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_2560 = pTVar23->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2208.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20e0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20f8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1510);
    pFVar22 = &local_7e8;
  }
  SButton::FArguments::~FArguments(pFVar22);
  pSVar30 = TSharedPtr<SScrollBox,1>::operator->((TSharedPtr<SScrollBox,1> *)&this->_padding_);
  local_2558 = SScrollBox::AddSlot(pSVar30,&local_178);
  local_2540 = SVerticalBox::FArguments::FArguments(&local_1c40);
  pFVar21 = SVerticalBox::Slot((FSlotArguments *)local_1f80);
  local_2408.Value = 1.0;
  local_2408.Getter._16_8_ = 0;
  local_2408.bIsSet = true;
  local_2408.Getter._0_8_ = 0;
  local_2408.Getter._8_8_ = 0;
  local_2468 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar21,&local_2408);
  pFVar31 = SMenuAnchor::FArguments::FArguments(&local_1a38);
  iVar18 = this->NextValidCrumbID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnGetMenuContent,
             (FWriteAccessScope *)&local_22b0);
  local_2298 = &(pFVar31->_OnGetMenuContent).field_0x8;
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2298);
  if (puVar32 != (undefined8 *)0x0) {
    uStack_24e4 = local_2320.SharedReferenceCount.ReferenceController._4_4_;
    local_24f0 = (FName)GetCrumbMenuContent;
    uStack_24e8 = 0;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_21e8);
    local_24b8.Object = (SBreadcrumbTrail<int> *)pTVar33->Object;
    local_24b8.SharedReferenceCount.ReferenceController =
         (pTVar33->SharedReferenceCount).ReferenceController;
    if (local_24b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_24b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_24b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_24b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_24b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar17 = true;
    *puVar32 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar32 + 1) = iVar18;
    local_2448.Object = local_24b8.Object;
    local_2448.SharedReferenceCount.ReferenceController =
         local_24b8.SharedReferenceCount.ReferenceController;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SBreadcrumbTrail_H___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar32[3] = local_2448.Object;
    puVar32[4] = local_2448.SharedReferenceCount.ReferenceController;
    if (local_2448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2448.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_2448.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar32 + 5) = local_24f0;
    puVar32[6] = CONCAT44(uStack_24e4,uStack_24e8);
  }
  if (bVar17) {
    TSharedPtr<SBreadcrumbTrail<int>,1>::~TSharedPtr<SBreadcrumbTrail<int>,1>(&local_2448);
  }
  if (bVar8) {
    TSharedRef<SBreadcrumbTrail<int>,1>::~TSharedRef<SBreadcrumbTrail<int>,1>(&local_24b8);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21e8.SharedReferenceCount.ReferenceController);
  }
  if (local_22b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22b0.Accessor,&local_22b0);
  }
  if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2138 = (pFVar31->_Content).Widget.Object;
  pTStack_2130 = (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar31->_Content).Widget.Object = (SWidget *)local_2560;
  (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar39;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2130);
  FLLMScope::FLLMScope(&local_2530,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_247c = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2470,&local_247c,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            (&local_23c8,"SMenuAnchor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xe2,&local_2562);
  FMemScope::~FMemScope(&local_2470);
  FLLMScope::~FLLMScope(&local_2530);
  FVar10.ReferenceController = local_23c8._Widget.SharedReferenceCount.ReferenceController;
  if (local_23c8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_23c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar35 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23c8,&local_2320,pFVar31);
  local_2340.Object = (SWidget *)pTVar35->Object;
  local_2560 = (SButton *)(pTVar35->SharedReferenceCount).ReferenceController;
  if (local_2560 != (SButton *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_2560)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_2560)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2340.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_2560;
  pFVar21 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2468,&local_2340);
  local_2540 = SVerticalBox::FArguments::operator+(local_2540,pFVar21);
  FLLMScope::FLLMScope(&local_252c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_24f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2498,&local_24f0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_23b0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
             ,0xdd,&local_2561);
  FMemScope::~FMemScope(&local_2498);
  FLLMScope::~FLLMScope(&local_252c);
  FVar12.ReferenceController = local_23b0._Widget.SharedReferenceCount.ReferenceController;
  if (local_23b0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_23b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar24 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23b0,&local_21d8,local_2540);
  local_2500 = pTVar24->Object;
  local_2540 = (FArguments *)(pTVar24->SharedReferenceCount).ReferenceController;
  if (local_2540 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_2540)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_2540)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_2540)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_2540)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24f8.ReferenceController = (TReferenceControllerBase<1> *)local_2540;
  if ((SVerticalBox **)&local_2558->_padding_ != &local_2500) {
    local_2558->_padding_ = (longlong)local_2500;
    local_2500 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2558->_padding_,&local_24f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2540);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2560);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2320.SharedReferenceCount.ReferenceController._4_4_,
                      local_2320.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c8._Widget.SharedReferenceCount.ReferenceController);
  SMenuAnchor::FArguments::~FArguments(&local_1a38);
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
            ((FSlotArguments *)local_1c40._Slots.AllocatorInstance.Data,local_1c40._Slots.ArrayNum);
  if ((FSlotArguments *)local_1c40._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1c40._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1c40);
  TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_178);
  if ((local_23b0._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_23b0._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_2528 == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
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
  if ((local_2528 == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_23c8._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_23c8._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_2548 == (SButton *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_2548 == (SButton *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar18 = (this->CrumbList).ArrayNum;
  piVar1 = &(this->CrumbList).ArrayMax;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&(this->CrumbList).AllocatorInstance,piVar1);
  }
  (this->CrumbList).ArrayNum = iVar18 + 1;
  pFVar6 = (this->CrumbList).AllocatorInstance.Data;
  lVar36 = (longlong)iVar18;
  iVar18 = *local_24e0;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar13.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    *(int *)(pFVar6 + lVar36 * 0x50) = this->NextValidCrumbID;
    *(SButton **)(pFVar6 + lVar36 * 0x50 + 8) = local_2548;
    *(undefined8 *)(pFVar6 + lVar36 * 0x50 + 0x10) = 0;
  }
  else {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    *(int *)(pFVar6 + lVar36 * 0x50) = this->NextValidCrumbID;
    *(SButton **)(pFVar6 + lVar36 * 0x50 + 8) = local_2548;
    *(TReferenceControllerBase<1> **)(pFVar6 + lVar36 * 0x50 + 0x10) = FVar13.ReferenceController;
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(SMenuAnchor **)(pFVar6 + lVar36 * 0x50 + 0x18) = local_23c8._Widget.Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar36 * 0x50 + 0x20) = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(SVerticalBox **)(pFVar6 + lVar36 * 0x50 + 0x28) = local_2528;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar36 * 0x50 + 0x30) = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(SVerticalBox **)(pFVar6 + lVar36 * 0x50 + 0x38) = local_23b0._Widget.Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar36 * 0x50 + 0x40) = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)(pFVar6 + lVar36 * 0x50 + 0x48) = iVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  this->NextValidCrumbID = (this->NextValidCrumbID + 1) % 0x7ffffffe;
  TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnCrumbPushed,local_24e0);
  pSVar30 = TSharedPtr<SScrollBox,1>::operator->((TSharedPtr<SScrollBox,1> *)&this->_padding_);
  SScrollBox::ScrollToEnd(pSVar30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar38.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  return;
}

// PeekCrumb @ 14303c7a0

int __thiscall SBreadcrumbTrail<int>::PeekCrumb(SBreadcrumbTrail<int> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->CrumbList).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasCrumbs()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                       ,0x10c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (this->CrumbList).ArrayNum;
  uVar5 = iVar3 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar3) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->CrumbList).AllocatorInstance.Data +
                 (longlong)(this->CrumbList).ArrayNum * 0x50 + -8);
}

