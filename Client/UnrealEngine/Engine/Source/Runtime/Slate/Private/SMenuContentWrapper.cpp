// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// ~SMenuContentWrapper @ 1426ab9f0

void __thiscall
MenuStackInternal::SMenuContentWrapper::~SMenuContentWrapper(SMenuContentWrapper *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMenuLostFocus);
  pvVar1 = *(void **)&(this->OnMenuLostFocus).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMenuLostFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownDelegate);
  pvVar1 = *(void **)&(this->OnKeyDownDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeyDownDelegate);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 1426b3910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
MenuStackInternal::SMenuContentWrapper::Construct(SMenuContentWrapper *this,FArguments *param_1)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  byte *pbVar1;
  SWidget *pSVar2;
  longlong *plVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SOverlay *pSVar8;
  FSharedReferencer<1> FVar9;
  FMemScope FVar10;
  SBox *pSVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  ISlateAttributeGetter *pIVar16;
  FSlotArguments *pFVar17;
  FArguments *pFVar18;
  ISlateStyle *pIVar19;
  FName *pFVar20;
  TSharedRef<SImage,1> *pTVar21;
  FArguments *pFVar22;
  undefined8 *puVar23;
  TSharedRef<SBorder,1> *pTVar24;
  FArguments *pFVar25;
  TSharedRef<SOverlay,1> *pTVar26;
  FArguments *pFVar27;
  FArguments *local_res8;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1aa8;
  T0RequiredArgs local_1aa7;
  T0RequiredArgs local_1aa6 [2];
  FLLMScope local_1aa4;
  FLLMScope local_1aa0;
  FLLMScope local_1a9c;
  FLLMScope local_1a98;
  FLLMScope local_1a94;
  FLLMScope local_1a90;
  FLLMScope local_1a8c;
  undefined1 local_1a88 [8];
  ForAnyElementType local_1a80;
  int local_1a78;
  undefined1 local_1a70 [8];
  ForAnyElementType local_1a68;
  int local_1a60;
  SOverlay *local_1a58;
  FSharedReferencer<1> local_1a50;
  SBorder *local_1a48;
  FSharedReferencer<1> local_1a40;
  FName local_1a38;
  FMemScope local_1a30;
  FName local_1a28;
  SImage *local_1a20;
  FSharedReferencer<1> local_1a18;
  SImage *local_1a10;
  FSharedReferencer<1> local_1a08;
  SBorder *local_1a00;
  FSharedReferencer<1> local_19f8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_19f0;
  float local_19d8;
  undefined1 local_19d4;
  undefined1 local_19d0 [8];
  void *pvStack_19c8;
  undefined8 local_19c0;
  float local_19b8;
  undefined1 local_19b4;
  undefined1 local_19b0 [8];
  void *pvStack_19a8;
  undefined8 local_19a0;
  TAttribute<EVisibility> local_1998;
  FMemScope local_1978;
  FMemScope local_1970;
  FSlotArguments *local_1968;
  FArguments *local_1960;
  FName local_1958;
  FMemScope local_1950;
  FName local_1948;
  FMemScope local_1940;
  FName local_1938;
  FMemScope local_1930;
  FName local_1928;
  FMemScope local_1920;
  undefined8 local_1918;
  FSharedReferencer<1> local_1910;
  FName local_1908;
  undefined8 local_1900;
  FSharedReferencer<1> local_18f8;
  TAttribute<FSlateBrush_const_*> local_18f0;
  TAttribute<FSlateBrush_const_*> local_18c8;
  TAttribute<FSlateBrush_const_*> local_18a0;
  TAttribute<FSlateBrush_const_*> local_1878;
  FDestructionSentinel local_1850;
  FDestructionSentinel local_1838;
  FLinearColor_u_0 local_1820;
  undefined4 local_1810;
  undefined1 local_180c;
  undefined8 local_1808;
  undefined8 uStack_1800;
  undefined8 local_17f8;
  FLinearColor_u_0 local_17f0;
  undefined4 local_17e0;
  undefined1 local_17dc;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  TSharedRef<SImage,1> local_17c0;
  TSharedRef<SOverlay,1> local_17b0;
  TSharedRef<SBorder,1> local_17a0;
  SWidget *local_1790;
  TReferenceControllerBase<1> *pTStack_1788;
  longlong local_1780;
  TReferenceControllerBase<1> *pTStack_1778;
  TSharedRef<SBorder,1> local_1770;
  TSharedRef<SOverlay,1> local_1760;
  TSharedRef<SImage,1> local_1750;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1740;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1728;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1710;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_16f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_16e0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_16c8;
  SWidget *local_16b0;
  TReferenceControllerBase<1> *pTStack_16a8;
  FName local_16a0;
  FName local_1698;
  FName local_1690;
  FName local_1688;
  FReadAccessScope local_1680;
  FReadAccessScope local_1668;
  undefined1 local_1650 [56];
  void *local_1618;
  undefined1 local_15f0 [56];
  void *local_15b8;
  undefined1 local_1590 [56];
  void *local_1558;
  undefined1 local_1530 [56];
  void *local_14f8;
  undefined1 local_14d0 [20];
  undefined1 local_14bc [20];
  FArguments local_14a8;
  FArguments local_12a0;
  FArguments local_1098;
  FArguments local_df0;
  FArguments local_b48;
  FArguments local_808;
  FArguments local_428;
  
  pSVar2 = (param_1->_MenuContent).Widget.Object;
  this_00 = &pSVar2->VisibilityAttribute;
  pIVar16 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedFindGetter
                      ((FSlateAttributeImpl *)this_00,pSVar2,Member);
  if (pIVar16 == (ISlateAttributeGetter *)0x0) {
    local_1998.Getter._16_8_ = 0;
    local_1998.bIsSet = true;
    local_1998.Value.Value.Value =
         (TEnumAsByte<EVisibility::Private>)(uchar)*(TEnumAsByte<EVisibility::Private> *)this_00;
    local_1998.Getter._0_8_ = 0;
    local_1998.Getter._8_8_ = 0;
  }
  else {
    local_1998.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
    local_1998.bIsSet = true;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_1998.Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(pIVar16 + 1));
  }
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_1998);
  if (&param_1->_OnKeyDown != &this->OnKeyDownDelegate) {
    local_1a70 = (undefined1  [8])0x0;
    local_1a68.Data = (FScriptContainerElement *)0x0;
    local_1a60 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnKeyDown,
               &local_1680);
    if ((*(int *)&(param_1->_OnKeyDown).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnKeyDown).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1a70);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1680);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a70,
               (FWriteAccessScope *)&local_1850);
    if ((local_1a60 != 0) && (local_1a68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1a68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a68,0,0,0x10);
      local_1a60 = 0;
    }
    if (local_1850.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1850.Accessor,&local_1850);
    }
    if (local_1a68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a70);
  }
  if (&param_1->_OnMenuLostFocus != &this->OnMenuLostFocus) {
    local_1a88 = (undefined1  [8])0x0;
    local_1a80.Data = (FScriptContainerElement *)0x0;
    local_1a78 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnMenuLostFocus,
               &local_1668);
    if ((*(int *)&(param_1->_OnMenuLostFocus).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnMenuLostFocus).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1a88);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1668);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMenuLostFocus,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a88,
               (FWriteAccessScope *)&local_1838);
    if ((local_1a78 != 0) && (local_1a80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1a80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a80,0,0,0x10);
      local_1a78 = 0;
    }
    if (local_1838.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1838.Accessor,&local_1838);
    }
    if (local_1a80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a80.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a88);
  }
  local_1a50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->_bShowBackground == false) {
    local_res8 = SOverlay::FArguments::FArguments(&local_12a0);
    pFVar17 = SOverlay::Slot((FSlotArguments *)local_1530,0);
    pFVar22 = SBorder::FArguments::FArguments(&local_428);
    pFVar22 = SBorder::FArguments::Padding(pFVar22,0.0);
    local_18f0.Value = FStyleDefaults::GetNoBrush();
    local_18f0.bIsSet = true;
    local_18f0.Getter._16_8_ = 0;
    local_18f0.Getter._0_8_ = 0;
    local_18f0.Getter._8_8_ = 0;
    pFVar22 = SBorder::FArguments::BorderImage(pFVar22,&local_18f0);
    pIVar19 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar19 + 0x40);
    pFVar20 = ::FName::FName(&local_16a0,"DefaultForeground");
    puVar23 = (undefined8 *)
              (*pcVar4)(pIVar19,local_14d0,*pFVar20,0,&FStyleDefaults::DefaultSlateColor,0);
    local_17f0._0_8_ = *puVar23;
    local_17f0._8_8_ = puVar23[1];
    local_17e0 = *(undefined4 *)(puVar23 + 2);
    local_17c8 = 0;
    local_17dc = 1;
    local_17d8 = 0;
    uStack_17d0 = 0;
    pFVar22 = SBorder::FArguments::ForegroundColor
                        (pFVar22,(TAttribute<FSlateColor> *)&local_17f0._s_0);
    pFVar22 = SBorder::FArguments::operator[](pFVar22,&(param_1->_MenuContent).Widget);
    FLLMScope::FLLMScope(&local_1a94,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1948 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1940,&local_1948,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_16e0,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
               ,0x90,&local_1aa8);
    FMemScope::~FMemScope(&local_1940);
    FLLMScope::~FLLMScope(&local_1a94);
    pTVar24 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_16e0,&local_17a0,pFVar22);
    pTVar5 = (pTVar24->SharedReferenceCount).ReferenceController;
    local_1a48 = pTVar24->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a40.ReferenceController = pTVar5;
    if ((SBorder **)&pFVar17->_padding_ != &local_1a48) {
      pFVar17->_padding_ = (longlong)local_1a48;
      local_1a48 = (SBorder *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar17->_padding_,&local_1a40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a40.ReferenceController);
    pFVar25 = SOverlay::FArguments::operator+(local_res8,pFVar17);
    FLLMScope::FLLMScope(&local_1a90,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1938 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1930,&local_1938,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_16f8,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
               ,0x8d,&local_1aa7);
    FMemScope::~FMemScope(&local_1930);
    FLLMScope::~FLLMScope(&local_1a90);
    pTVar26 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_16f8,&local_17b0,pFVar25);
    local_1910.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
    local_1a58 = pTVar26->Object;
    if (local_1910.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1910.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1910.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1918 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1a50,&local_1910);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1910.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16f8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16e0._Widget.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_428);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1530 + 0x30));
    if (local_14f8 != (void *)0x0) {
      FMemory::Free(local_14f8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_1530 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1530._16_8_);
    if ((undefined8 *)local_1530._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_1530._0_8_)(local_1530._0_8_,1);
    }
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_12a0._Slots.AllocatorInstance.Data,local_12a0._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_12a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_12a0._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_12a0);
  }
  else {
    local_1a38 = (FName)SOverlay::FArguments::FArguments(&local_14a8);
    pFVar17 = SOverlay::Slot((FSlotArguments *)local_1590,0);
    pFVar18 = SImage::FArguments::FArguments(&local_df0);
    pIVar19 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar19 + 0x50);
    pFVar20 = ::FName::FName(&local_1690,"Menu.Background");
    local_1878.Value = (FSlateBrush *)(*pcVar4)(pIVar19,*pFVar20);
    local_1878.bIsSet = true;
    local_1878.Getter._16_8_ = 0;
    local_1878.Getter._0_8_ = 0;
    local_1878.Getter._8_8_ = 0;
    pFVar18 = SImage::FArguments::Image(pFVar18,&local_1878);
    FLLMScope::FLLMScope(&local_1aa4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1908 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1978,&local_1908,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_1710,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
               ,0x78,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope(&local_1978);
    FLLMScope::~FLLMScope(&local_1aa4);
    pTVar21 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1710,&local_17c0,pFVar18);
    pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_1a20 = pTVar21->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a18.ReferenceController = pTVar5;
    if ((SImage **)&pFVar17->_padding_ != &local_1a20) {
      pFVar17->_padding_ = (longlong)local_1a20;
      local_1a20 = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar17->_padding_,&local_1a18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a18.ReferenceController);
    local_1a28 = (FName)SOverlay::FArguments::operator+((FArguments *)local_1a38,pFVar17);
    local_1a30 = (FMemScope)SOverlay::Slot((FSlotArguments *)local_15f0,0);
    pFVar18 = SImage::FArguments::FArguments(&local_1098);
    pIVar19 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar19 + 0x58);
    FStyleDefaults::GetNoBrush();
    pFVar20 = ::FName::FName(&local_1688,"Menu.Outline");
    local_18a0.Value = (FSlateBrush *)(*pcVar4)(pIVar19,*pFVar20);
    local_18a0.bIsSet = true;
    local_18a0.Getter._16_8_ = 0;
    local_18a0.Getter._0_8_ = 0;
    local_18a0.Getter._8_8_ = 0;
    pFVar18 = SImage::FArguments::Image(pFVar18,&local_18a0);
    FLLMScope::FLLMScope(&local_1aa0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1a38 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1970,&local_1a38,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_16c8,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
               ,0x7d,local_res10);
    FMemScope::~FMemScope(&local_1970);
    FLLMScope::~FLLMScope(&local_1aa0);
    pTVar21 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_16c8,&local_1750,pFVar18);
    FVar10 = local_1a30;
    pTVar6 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_1a10 = pTVar21->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a08.ReferenceController = pTVar6;
    if ((SImage **)((longlong)local_1a30 + 8) != &local_1a10) {
      *(SImage **)((longlong)local_1a30 + 8) = local_1a10;
      local_1a10 = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)local_1a30 + 0x10),&local_1a08);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a08.ReferenceController);
    local_1960 = SOverlay::FArguments::operator+((FArguments *)local_1a28,(FSlotArguments *)FVar10);
    local_1968 = SOverlay::Slot((FSlotArguments *)local_1650,0);
    pFVar22 = SBorder::FArguments::FArguments(&local_808);
    pFVar22 = SBorder::FArguments::Padding(pFVar22,0.0);
    local_18c8.Value = FStyleDefaults::GetNoBrush();
    local_18c8.bIsSet = true;
    local_18c8.Getter._16_8_ = 0;
    local_18c8.Getter._0_8_ = 0;
    local_18c8.Getter._8_8_ = 0;
    pFVar22 = SBorder::FArguments::BorderImage(pFVar22,&local_18c8);
    pIVar19 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar19 + 0x40);
    pFVar20 = ::FName::FName(&local_1698,"DefaultForeground");
    puVar23 = (undefined8 *)
              (*pcVar4)(pIVar19,local_14bc,*pFVar20,0,&FStyleDefaults::DefaultSlateColor,0);
    local_1820._0_8_ = *puVar23;
    local_1820._8_8_ = puVar23[1];
    local_1810 = *(undefined4 *)(puVar23 + 2);
    local_17f8 = 0;
    local_180c = 1;
    local_1808 = 0;
    uStack_1800 = 0;
    pFVar22 = SBorder::FArguments::ForegroundColor
                        (pFVar22,(TAttribute<FSlateColor> *)&local_1820._s_0);
    pTVar7 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
    pSVar2 = (param_1->_MenuContent).Widget.Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_16b0 = (pFVar22->_Content).Widget.Object;
    pTStack_16a8 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar22->_Content).Widget.Object = pSVar2;
    (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_16a8);
    FLLMScope::FLLMScope(&local_1a9c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1a28 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1a30,&local_1a28,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_1728,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
               ,0x82,local_res18);
    FMemScope::~FMemScope(&local_1a30);
    FLLMScope::~FLLMScope(&local_1a9c);
    pTVar24 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1728,&local_1770,pFVar22);
    pFVar17 = local_1968;
    pTVar7 = (pTVar24->SharedReferenceCount).ReferenceController;
    local_1a00 = pTVar24->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_19f8.ReferenceController = pTVar7;
    if ((SBorder **)&local_1968->_padding_ != &local_1a00) {
      local_1968->_padding_ = (longlong)local_1a00;
      local_1a00 = (SBorder *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&local_1968->_padding_,&local_19f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_19f8.ReferenceController);
    pFVar25 = SOverlay::FArguments::operator+(local_1960,pFVar17);
    FLLMScope::FLLMScope(&local_1a98,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1958 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1950,&local_1958,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_1740,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
               ,0x75,local_res20);
    FMemScope::~FMemScope(&local_1950);
    FLLMScope::~FLLMScope(&local_1a98);
    pTVar26 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1740,&local_1760,pFVar25);
    local_18f8.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
    local_1a58 = pTVar26->Object;
    if (local_18f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18f8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_18f8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1900 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1a50,&local_18f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18f8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1760.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1740._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1770.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1728._Widget.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_808);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1650 + 0x30));
    if (local_1618 != (void *)0x0) {
      FMemory::Free(local_1618);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_1650 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1650._16_8_);
    if ((undefined8 *)local_1650._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_1650._0_8_)(local_1650._0_8_,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1750.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16c8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1098);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_15f0 + 0x30));
    if (local_15b8 != (void *)0x0) {
      FMemory::Free(local_15b8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_15f0 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_15f0._16_8_);
    if ((undefined8 *)local_15f0._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_15f0._0_8_)(local_15f0._0_8_,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17c0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1710._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_df0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1590 + 0x30));
    if (local_1558 != (void *)0x0) {
      FMemory::Free(local_1558);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_1590 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1590._16_8_);
    if ((undefined8 *)local_1590._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_1590._0_8_)(local_1590._0_8_,1);
    }
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_14a8._Slots.AllocatorInstance.Data,local_14a8._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_14a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_14a8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_14a8);
  }
  pFVar27 = SBox::FArguments::FArguments(&local_b48);
  local_19d8 = (param_1->_OptionalMinMenuWidth).Size;
  local_19d4 = 1;
  local_19c0 = 0;
  local_19d0 = (undefined1  [8])0x0;
  pvStack_19c8 = (void *)0x0;
  (pFVar27->_MinDesiredWidth).Value.Size = local_19d8;
  (pFVar27->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_19d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_19d0);
  if (pvStack_19c8 != (void *)0x0) {
    FMemory::Free(pvStack_19c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19d0);
  local_19b8 = (param_1->_OptionalMinMenuHeight).Size;
  local_19b4 = 1;
  local_19a0 = 0;
  local_19b0 = (undefined1  [8])0x0;
  pvStack_19a8 = (void *)0x0;
  (pFVar27->_MaxDesiredHeight).Value.Size = local_19b8;
  (pFVar27->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_19b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_19b0);
  if (pvStack_19a8 != (void *)0x0) {
    FMemory::Free(pvStack_19a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19b0);
  pSVar8 = local_1a58;
  if (local_1a58 == (SOverlay *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar9.ReferenceController = local_1a50.ReferenceController;
  if (local_1a50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1a50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar8 == (SOverlay *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1790 = (pFVar27->_Content).Widget.Object;
  pTStack_1788 = (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar27->_Content).Widget.Object = (SWidget *)pSVar8;
  (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1788);
  FLLMScope::FLLMScope(&local_1a8c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1928 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1920,&local_1928,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_19f0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
             ,0x9c,local_1aa6);
  FMemScope::~FMemScope(&local_1920);
  FLLMScope::~FLLMScope(&local_1a8c);
  pSVar11 = local_19f0._Widget.Object;
  if (local_19f0._Widget.Object == (SBox *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_19f0._Widget.Object,(FSlateBaseNamedArgs *)pFVar27);
  SBox::Construct(local_19f0._Widget.Object,pFVar27);
  if (local_19f0._Widget.Object == (SBox *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((local_19f0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)((local_19f0._Widget.Object)->_padding_ + 0x228))
                       (local_19f0._Widget.Object);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_1426b4986;
  }
  bVar15 = 0x20;
LAB_1426b4986:
  *(byte *)&(local_19f0._Widget.Object)->_padding_ =
       (byte)(local_19f0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_19f0._Widget.Object)->_padding_ =
       (byte)(local_19f0._Widget.Object)->_padding_ | bVar15;
  if (local_19f0._Widget.Object == (SBox *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_19f0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_19f0._Widget.Object == (SBox *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar12.ReferenceController = local_19f0._Widget.SharedReferenceCount.ReferenceController;
  local_19f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_19f0._Widget.Object = (SBox *)0x0;
  if (pSVar11 == (SBox *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = &this->_padding_;
  if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar3);
  }
  else {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar3);
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1780 = this->_padding_;
  pTStack_1778 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar11;
  this->_padding_ = (longlong)FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1778);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SBox::FArguments::~FArguments(&local_b48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a50.ReferenceController);
  return;
}

// OnFocusChanging @ 1426c6600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
MenuStackInternal::SMenuContentWrapper::OnFocusChanging
          (SMenuContentWrapper *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,
          FFocusEvent *param_3)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMenuLostFocus,
             &local_28);
  if (((*(int *)&(this->OnMenuLostFocus).field_0x10 != 0) &&
      (plVar3 = *(longlong **)&(this->OnMenuLostFocus).field_0x8, plVar3 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar2 = FWeakWidgetPath::ContainsWidget(param_1,(SWidget *)this);
    if (!bVar2) {
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMenuLostFocus,
               &local_28);
    if (*(int *)&(this->OnMenuLostFocus).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->OnMenuLostFocus).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnKeyDown @ 1426c68c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
MenuStackInternal::SMenuContentWrapper::OnKeyDown
          (SMenuContentWrapper *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  FName local_38;
  FKeyDetails *local_30;
  TReferenceControllerBase<1> *local_28;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownDelegate,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->OnKeyDownDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnKeyDownDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      local_38 = (param_2->Key).KeyName;
      local_30 = (param_2->Key).KeyDetails.Object;
      local_28 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownDelegate,
                 &local_20);
      if (*(int *)&(this->OnKeyDownDelegate).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnKeyDownDelegate).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SupportsKeyboardFocus @ 1426dfb20

bool __thiscall
MenuStackInternal::SMenuContentWrapper::SupportsKeyboardFocus(SMenuContentWrapper *this)

{
  return true;
}

