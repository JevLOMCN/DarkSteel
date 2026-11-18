// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// ~SSearchBox @ 1427baa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchBox::~SSearchBox(SSearchBox *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsSearching).Getter);
  pvVar3 = *(void **)&(this->bIsSearching).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsSearching).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SearchResultData).Getter);
  pvVar3 = *(void **)&(this->SearchResultData).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SearchResultData).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InactiveFont).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveFont).CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DelayChangeNotificationsWhileTypingSeconds).Getter);
  pvVar3 = *(void **)&(this->DelayChangeNotificationsWhileTypingSeconds).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->DelayChangeNotificationsWhileTypingSeconds).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->DelayChangeNotificationsWhileTyping).Getter);
  pvVar3 = *(void **)&(this->DelayChangeNotificationsWhileTyping).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DelayChangeNotificationsWhileTyping).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommittedDelegate);
  pvVar3 = *(void **)&(this->OnTextCommittedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommittedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate);
  pvVar3 = *(void **)&(this->OnTextChangedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSearchDelegate);
  pvVar3 = *(void **)&(this->OnSearchDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSearchDelegate);
  pTVar4 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
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
  SEditableTextBox::~SEditableTextBox((SEditableTextBox *)this);
  return;
}

// Construct @ 142903da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014290487f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchBox::Construct(SSearchBox *this,FArguments *param_1)

{
  TDelegate<TOptional<SSearchBox::FSearchResultData>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_00;
  TDelegate<TOptional<SSearchBox::FSearchResultData>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_01;
  byte *pbVar1;
  longlong *plVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSearchBoxStyle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  FSharedReferencer<1> FVar12;
  undefined4 uVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget_const_,1> *pTVar19;
  ulong64 uVar20;
  FText *pFVar21;
  TSharedRef<SWidget,1> *pTVar22;
  SHorizontalBox *pSVar23;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar24;
  FArguments *pFVar25;
  FArguments *this_02;
  SCircularThrobber *pSVar26;
  SCircularThrobber *pSVar27;
  FSlotArguments *pFVar28;
  FMemScope FVar29;
  undefined4 *puVar30;
  FArguments *pFVar31;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<STextBlock,1> *pTVar32;
  TAttribute<FMargin> *pTVar33;
  FArguments *pFVar34;
  ISlateStyle *pIVar35;
  FMargin *pFVar36;
  FSlateColor *pFVar37;
  TAttribute<FSlateColor> *pTVar38;
  FArguments *pFVar39;
  TAttribute<FSlateBrush_const_*> *pTVar40;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> *pTVar41;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar42;
  TSharedRef<SImage,1> *pTVar43;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar44;
  TSharedRef<SButton,1> *pTVar45;
  undefined1 *puVar46;
  FArguments *pFVar47;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SSpacer,1> *pTVar48;
  FArguments *pFVar49;
  FMemScope FVar50;
  FSlotArguments *this_05;
  SWidget *pSVar51;
  int iVar52;
  int iVar53;
  FSlotArguments *pFVar54;
  SWidget *local_res8;
  FSlotArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_3e68;
  T0RequiredArgs local_3e67;
  T0RequiredArgs local_3e66;
  T0RequiredArgs local_3e65;
  T0RequiredArgs local_3e64;
  T0RequiredArgs local_3e63 [3];
  FArguments *local_3e60;
  undefined4 uStack_3e58;
  undefined4 uStack_3e54;
  FLLMScope local_3e50;
  FLLMScope local_3e4c;
  undefined1 local_3e48 [8];
  ForAnyElementType local_3e40;
  int local_3e38;
  undefined1 local_3e30 [8];
  ForAnyElementType local_3e28;
  int local_3e20;
  TSharedRef<SWidget,1> local_3e18;
  TSharedRef<SWidget,1> local_3e08;
  FName local_3df8;
  undefined4 uStack_3df0;
  uint uStack_3dec;
  undefined2 local_3de8;
  undefined1 local_3de0 [8];
  ForAnyElementType FStack_3dd8;
  ulonglong local_3dd0;
  undefined2 local_3dc8;
  undefined1 local_3dc0 [8];
  ForAnyElementType FStack_3db8;
  ulonglong local_3db0;
  float local_3da8;
  bool local_3da4;
  undefined1 local_3da0 [8];
  ForAnyElementType FStack_3d98;
  int local_3d90;
  bool local_3d88;
  bool local_3d87;
  undefined1 local_3d80 [8];
  ForAnyElementType FStack_3d78;
  int local_3d70;
  FMemScope local_3d68;
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> local_3d60;
  FText local_3d48;
  bool local_3d38;
  undefined1 local_3d30 [8];
  ForAnyElementType FStack_3d28;
  ulonglong local_3d20;
  FText local_3d18;
  bool local_3d08;
  undefined1 local_3d00 [8];
  ForAnyElementType FStack_3cf8;
  int local_3cf0;
  FName local_3ce8;
  undefined4 uStack_3ce0;
  undefined4 uStack_3cdc;
  FMemScope local_3cd8;
  undefined4 uStack_3cd0;
  float fStack_3ccc;
  TSharedRef<SWidget,1> local_3cc8;
  TSharedRef<SWidget,1> local_3cb8;
  TSharedRef<SWidget,1> local_3ca8;
  TSharedRef<SSpacer,1> local_3c98;
  longlong local_3c88;
  longlong lStack_3c80;
  undefined1 local_3c78;
  undefined1 local_3c70 [8];
  ForAnyElementType FStack_3c68;
  ulonglong local_3c60;
  SImage *local_3c58;
  TReferenceControllerBase<1> *pTStack_3c50;
  undefined8 local_3c48;
  undefined8 uStack_3c40;
  undefined4 local_3c38;
  undefined1 local_3c34;
  undefined1 local_3c30 [8];
  void *pvStack_3c28;
  undefined8 local_3c20;
  undefined1 local_3c18 [4];
  undefined1 local_3c14 [4];
  undefined4 local_3c10 [2];
  undefined4 local_3c08 [2];
  FName local_3c00;
  FName local_3bf8;
  FSlateBrush *local_3bf0;
  FName local_3be8;
  undefined4 local_3be0 [2];
  undefined4 local_3bd8 [2];
  undefined4 local_3bd0 [2];
  undefined4 local_3bc8 [2];
  undefined4 local_3bc0 [2];
  undefined4 local_3bb8 [2];
  FSlateBrush *local_3bb0;
  TAttribute<FText> local_3ba8;
  undefined8 local_3b78;
  undefined8 uStack_3b70;
  undefined4 local_3b68;
  TSharedRef<SWidget,1> local_3b60;
  TSharedRef<SWidget,1> local_3b50;
  TSharedRef<SWidget,1> local_3b40;
  TSharedRef<SWidget,1> local_3b30;
  TAttribute<FSlateBrush_const_*> local_3b20;
  TAttribute<FSlateBrush_const_*> local_3af8;
  FDestructionSentinel local_3ad0;
  FDestructionSentinel local_3ab8;
  FDestructionSentinel local_3aa0;
  FDestructionSentinel local_3a88;
  FDestructionSentinel local_3a70;
  FDestructionSentinel local_3a58;
  FDestructionSentinel local_3a40;
  FDestructionSentinel local_3a28;
  FDestructionSentinel local_3a10;
  FLinearColor_u_0 local_39f8;
  undefined4 local_39e8;
  undefined1 local_39e4;
  undefined8 local_39e0;
  undefined8 uStack_39d8;
  undefined8 local_39d0;
  FLinearColor_u_0 local_39c8;
  undefined4 local_39b8;
  undefined1 local_39b4;
  undefined8 local_39b0;
  undefined8 uStack_39a8;
  undefined8 local_39a0;
  FLinearColor_u_0 local_3998;
  undefined4 local_3988;
  undefined1 local_3984;
  undefined8 local_3980;
  undefined8 uStack_3978;
  undefined8 local_3970;
  FDestructionSentinel local_3968;
  undefined1 *local_3950;
  FDestructionSentinel local_3948;
  undefined1 *local_3930;
  FDestructionSentinel local_3928;
  undefined1 *local_3910;
  FDestructionSentinel local_3908;
  undefined1 *local_38f0;
  FDestructionSentinel local_38e8;
  undefined1 *local_38d0;
  undefined4 local_38b8;
  undefined4 local_38a4;
  undefined4 local_3890;
  TAttribute<FMargin> local_3888;
  TAttribute<FMargin> local_3858;
  TAttribute<FMargin> local_3828;
  TVector2<double>_u_0 local_37f8;
  undefined1 local_37e8;
  undefined8 local_37e0;
  undefined8 uStack_37d8;
  undefined8 local_37d0;
  TVector2<double>_u_0 local_37c8;
  char local_37b8;
  undefined1 local_37b0;
  undefined8 local_37a8;
  undefined8 uStack_37a0;
  undefined8 local_3798;
  TVector2<double>_u_0 local_3790;
  char local_3780;
  undefined1 local_3778;
  undefined8 local_3770;
  undefined8 uStack_3768;
  undefined8 local_3760;
  code *local_3758;
  longlong lStack_3750;
  FText local_3748;
  FMargin local_3738;
  code *local_3728;
  TReferenceControllerBase<1> *pTStack_3720;
  TSharedRef<SWidget_const_,1> local_3718;
  TSharedRef<STextBlock,1> local_3708;
  code *local_36f8;
  TReferenceControllerBase<1> *pTStack_36f0;
  code *local_36e8;
  TReferenceControllerBase<1> *pTStack_36e0;
  TSharedRef<SButton,1> local_36d8;
  TSharedRef<SImage,1> local_36c8;
  code *local_36b8;
  longlong lStack_36b0;
  code *local_36a8;
  longlong lStack_36a0;
  TSharedRef<SButton,1> local_3698;
  TSharedRef<SImage,1> local_3688;
  code *local_3678;
  longlong lStack_3670;
  TSharedRef<SImage,1> local_3668;
  TSharedRef<SWidget,1> local_3658;
  TSharedRef<SButton,1> local_3648;
  TSharedRef<SImage,1> local_3638;
  FMargin local_3628;
  code *local_3618;
  TReferenceControllerBase<1> *pTStack_3610;
  TSharedRef<SWidget_const_,1> local_3608;
  TSharedRef<SWidget,1> local_35f8;
  TSharedRef<SWidget,1> local_35e8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_35d8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_35c0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_35a8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3590;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3578;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_3560;
  FReadAccessScope local_3548;
  FReadAccessScope local_3530;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3518;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3500;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_34e8;
  FMargin local_34d0;
  FSlateColor local_34c0;
  FSlateColor local_34ac;
  FSlateColor local_3498;
  FSlateColor local_3484;
  TAttribute<FSlateBrush_const_*> local_3470;
  TAttribute<FSlateBrush_const_*> local_3448;
  TAttribute<FSlateColor> local_3420;
  TAttribute<FSlateColor> local_33f0;
  TAttribute<FMargin> local_33c0;
  TAttribute<FMargin> local_3390;
  TAttribute<FSlateColor> local_3360;
  TAttribute<FSlateColor> local_3330;
  TAttribute<FMargin> local_3300;
  TAttribute<FMargin> local_32d0;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> local_32a0;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> local_3268;
  undefined1 local_3230 [256];
  undefined1 local_3130 [528];
  undefined1 local_2f20 [24];
  undefined1 local_2f08 [552];
  undefined1 local_2ce0 [24];
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2cc8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2bc8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2ac8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_29c8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_28c8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_27c8;
  FArguments local_26c8;
  FArguments local_2420;
  FArguments local_2178;
  FArguments local_1ed0;
  FArguments local_1c28;
  FArguments local_16e8;
  FArguments local_11a8;
  FArguments local_c68;
  FArguments local_710;
  undefined8 uStack_48;
  
  uStack_48 = 0x142903dbf;
  bVar11 = false;
  bVar10 = false;
  bVar8 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_Style == (FSearchBoxStyle *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                          ,0xd,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (&param_1->_SearchResultData != &this->SearchResultData) {
    if ((param_1->_SearchResultData).Value.bIsSet == false) {
      if ((this->SearchResultData).Value.bIsSet != false) {
        (this->SearchResultData).Value.bIsSet = false;
      }
    }
    else {
      (this->SearchResultData).Value.TypedValue = (param_1->_SearchResultData).Value.TypedValue;
      (this->SearchResultData).Value.bIsSet = true;
    }
  }
  this_00 = &(param_1->_SearchResultData).Getter;
  this_01 = &(this->SearchResultData).Getter;
  (this->SearchResultData).bIsSet = (param_1->_SearchResultData).bIsSet;
  if (this_00 != this_01) {
    local_3e48 = (undefined1  [8])0x0;
    local_3e40.Data = (FScriptContainerElement *)0x0;
    local_3e38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_3548);
    if ((*(int *)&(param_1->_SearchResultData).Getter.field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_SearchResultData).Getter.field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_3e48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3548);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e48,
               (FWriteAccessScope *)&local_3a28);
    if ((local_3e38 != 0) && (local_3e40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_3e40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3e40,0,0,0x10);
      local_3e38 = 0;
    }
    if (local_3a28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a28.Accessor,&local_3a28);
    }
    if (local_3e40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3e48);
  }
  (this->bIsSearching).Value = (param_1->_IsSearching).Value;
  (this->bIsSearching).bIsSet = (param_1->_IsSearching).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsSearching).Getter,&(param_1->_IsSearching).Getter);
  if (&param_1->_OnSearch != &this->OnSearchDelegate) {
    local_3e30 = (undefined1  [8])0x0;
    local_3e28.Data = (FScriptContainerElement *)0x0;
    local_3e20 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnSearch,
               &local_3530);
    if ((*(int *)&(param_1->_OnSearch).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnSearch).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_3e30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3530);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSearchDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e30,
               (FWriteAccessScope *)&local_3a10);
    if ((local_3e20 != 0) && (local_3e28.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_3e28.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3e28,0,0,0x10);
      local_3e20 = 0;
    }
    if (local_3a10.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a10.Accessor,&local_3a10);
    }
    if (local_3e28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e28.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3e30);
  }
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChangedDelegate,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnTextCommittedDelegate,&param_1->_OnTextCommitted);
  (this->DelayChangeNotificationsWhileTyping).Value =
       (param_1->_DelayChangeNotificationsWhileTyping).Value;
  (this->DelayChangeNotificationsWhileTyping).bIsSet =
       (param_1->_DelayChangeNotificationsWhileTyping).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DelayChangeNotificationsWhileTyping).Getter,
             &(param_1->_DelayChangeNotificationsWhileTyping).Getter);
  (this->DelayChangeNotificationsWhileTypingSeconds).Value =
       (param_1->_DelayChangeNotificationsWhileTypingSeconds).Value;
  (this->DelayChangeNotificationsWhileTypingSeconds).bIsSet =
       (param_1->_DelayChangeNotificationsWhileTypingSeconds).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DelayChangeNotificationsWhileTypingSeconds).Getter,
             &(param_1->_DelayChangeNotificationsWhileTypingSeconds).Getter);
  FSlateFontInfo::operator=(&this->InactiveFont,&(param_1->_Style->TextBoxStyle).TextStyle.Font);
  FSlateFontInfo::operator=(&this->ActiveFont,&param_1->_Style->ActiveFontInfo);
  pFVar17 = SEditableTextBox::FArguments::FArguments(&local_710);
  pFVar17->_Style = &param_1->_Style->TextBoxStyle;
  (pFVar17->_Font).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Font).Getter,
             (FWriteAccessScope *)&local_38e8);
  local_38d0 = &(pFVar17->_Font).Getter.field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_38d0);
  pSVar51 = local_res8;
  if (puVar18 != (undefined8 *)0x0) {
    uStack_3e54 = local_3c98.SharedReferenceCount.ReferenceController._4_4_;
    local_3e60 = (FArguments *)GetWidgetFont;
    uStack_3e58 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3608);
    pSVar51 = (SWidget *)(pTVar19->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar19->Object;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar51->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar51->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSearchBox___00__A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar3;
    puVar18[4] = pSVar51;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar51->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar51->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar8 = true;
    puVar18[5] = local_3e60;
    puVar18[6] = CONCAT44(uStack_3e54,uStack_3e58);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar51);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar51);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3608.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar8 = false;
  if (local_38e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38e8.Accessor,&local_38e8);
  }
  pFVar21 = TAttribute<FText>::Get(&param_1->_InitialText);
  local_3d48.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_3d48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d48.TextData.Reference + 8))
              (local_3d48.TextData.Reference,local_3c18);
  }
  local_3d48.Flags = pFVar21->Flags;
  local_3d38 = true;
  local_3d20 = 0;
  local_3d30 = (undefined1  [8])0x0;
  FStack_3d28.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar17->_Text).Value,&local_3d48);
  (pFVar17->_Text).bIsSet = local_3d38;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d30,
             (FWriteAccessScope *)&local_3a40);
  if (((int)local_3d20 != 0) && (FStack_3d28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3d28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d28,0,0,0x10);
    local_3d20 = local_3d20 & 0xffffffff00000000;
  }
  if (local_3a40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a40.Accessor,&local_3a40);
  }
  if (FStack_3d28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d30);
  if (local_3d48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d48.TextData.Reference + 0x10))();
  }
  local_3d18.TextData.Reference = (param_1->_HintText).Value.TextData.Reference;
  if (local_3d18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d18.TextData.Reference + 8))
              (local_3d18.TextData.Reference,local_3c14);
  }
  local_3d18.Flags = (param_1->_HintText).Value.Flags;
  local_3d08 = (param_1->_HintText).bIsSet;
  local_3d00 = (undefined1  [8])0x0;
  FStack_3cf8.Data = (FScriptContainerElement *)0x0;
  local_3cf0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d00,
             &(param_1->_HintText).Getter);
  FText::operator=(&(pFVar17->_HintText).Value,&local_3d18);
  (pFVar17->_HintText).bIsSet = local_3d08;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d00,
             (FWriteAccessScope *)&local_3a58);
  if ((local_3cf0 != 0) && (FStack_3cf8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3cf8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3cf8,0,0,0x10);
    local_3cf0 = 0;
  }
  if (local_3a58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a58.Accessor,&local_3a58);
  }
  if (FStack_3cf8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3cf8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d00);
  if (local_3d18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d18.TextData.Reference + 0x10))();
  }
  local_3d88 = (param_1->_SelectAllTextWhenFocused).Value;
  local_3d87 = (param_1->_SelectAllTextWhenFocused).bIsSet;
  local_3d80 = (undefined1  [8])0x0;
  FStack_3d78.Data = (FScriptContainerElement *)0x0;
  local_3d70 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d80,
             &(param_1->_SelectAllTextWhenFocused).Getter);
  (pFVar17->_SelectAllTextWhenFocused).Value = local_3d88;
  (pFVar17->_SelectAllTextWhenFocused).bIsSet = local_3d87;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar17->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d80,
             (FWriteAccessScope *)&local_3ab8);
  if ((local_3d70 != 0) && (FStack_3d78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3d78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d78,0,0,0x10);
    local_3d70 = 0;
  }
  if (local_3ab8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3ab8.Accessor,&local_3ab8);
  }
  if (FStack_3d78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d80);
  local_3de8 = 0x101;
  local_3dd0 = 0;
  local_3de0 = (undefined1  [8])0x0;
  FStack_3dd8.Data = (FScriptContainerElement *)0x0;
  (pFVar17->_RevertTextOnEscape).Value = true;
  (pFVar17->_RevertTextOnEscape).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3de0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3de0,
             (FWriteAccessScope *)&local_3ad0);
  if (((int)local_3dd0 != 0) && (FStack_3dd8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3dd8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3dd8,0,0,0x10);
    local_3dd0 = local_3dd0 & 0xffffffff00000000;
  }
  if (local_3ad0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3ad0.Accessor,&local_3ad0);
  }
  if (FStack_3dd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3dd8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3de0);
  local_3dc8 = 0x100;
  local_3db0 = 0;
  local_3dc0 = (undefined1  [8])0x0;
  FStack_3db8.Data = (FScriptContainerElement *)0x0;
  (pFVar17->_ClearKeyboardFocusOnCommit).Value = false;
  (pFVar17->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar17->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3dc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3dc0,
             (FWriteAccessScope *)&local_3aa0);
  if (((int)local_3db0 != 0) && (FStack_3db8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3db8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3db8,0,0,0x10);
    local_3db0 = local_3db0 & 0xffffffff00000000;
  }
  if (local_3aa0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3aa0.Accessor,&local_3aa0);
  }
  if (FStack_3db8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3db8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3dc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnTextChanged,
             (FWriteAccessScope *)&local_3968);
  local_3950 = &(pFVar17->_OnTextChanged).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3950);
  pSVar51 = local_res8;
  if (puVar18 != (undefined8 *)0x0) {
    uStack_3e54 = local_3c98.SharedReferenceCount.ReferenceController._4_4_;
    local_3e60 = (FArguments *)HandleTextChanged;
    uStack_3e58 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_35f8);
    pSVar51 = (SWidget *)(pTVar22->SharedReferenceCount).ReferenceController;
    local_3df8 = (FName)pTVar22->Object;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar51->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar51->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar11 = true;
    bVar10 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchBox___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar18 + 3) = local_3df8;
    puVar18[4] = pSVar51;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar51->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar51->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar18[5] = local_3e60;
    puVar18[6] = CONCAT44(uStack_3e54,uStack_3e58);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar51);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar51);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35f8.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar8 = false;
  if (local_3968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3968.Accessor,&local_3968);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnTextCommitted,
             (FWriteAccessScope *)&local_3948);
  local_3930 = &(pFVar17->_OnTextCommitted).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3930);
  pSVar51 = local_res8;
  if (puVar18 != (undefined8 *)0x0) {
    uStack_3e54 = local_3c98.SharedReferenceCount.ReferenceController._4_4_;
    local_3e60 = (FArguments *)HandleTextCommitted;
    uStack_3e58 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_35e8);
    pSVar51 = (SWidget *)(pTVar22->SharedReferenceCount).ReferenceController;
    local_3df8 = (FName)pTVar22->Object;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar51->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar51->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar10 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchBox___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar18 + 3) = local_3df8;
    puVar18[4] = pSVar51;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar51->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar51->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar18[5] = local_3e60;
    puVar18[6] = CONCAT44(uStack_3e54,uStack_3e58);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar51);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35e8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar8 = false;
  if (local_3948.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3948.Accessor,&local_3948);
  }
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar17->_OnVerifyTextChanged,&param_1->_OnVerifyTextChanged);
  local_3da8 = (param_1->_MinDesiredWidth).Value;
  local_3da4 = (param_1->_MinDesiredWidth).bIsSet;
  pFVar31 = (FArguments *)0x0;
  iVar52 = 0;
  local_3da0 = (undefined1  [8])0x0;
  FStack_3d98.Data = (FScriptContainerElement *)0x0;
  local_3d90 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_3da0,
             &(param_1->_MinDesiredWidth).Getter);
  (pFVar17->_MinDesiredWidth).Value = local_3da8;
  (pFVar17->_MinDesiredWidth).bIsSet = local_3da4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3da0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3da0,
             (FWriteAccessScope *)&local_3a88);
  if ((local_3d90 != 0) && (FStack_3d98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3d98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d98,0,0,0x10);
    local_3d90 = 0;
  }
  if (local_3a88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a88.Accessor,&local_3a88);
  }
  if (FStack_3d98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3da0);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar17->_OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  SEditableTextBox::Construct((SEditableTextBox *)this,pFVar17);
  SEditableTextBox::FArguments::~FArguments(&local_710);
  if (param_1->_Style->bLeftAlignSearchResultButtons == false) {
    pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                        ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
    iVar52 = *(int *)&pSVar23->field_0x240;
  }
  pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                      ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
  iVar53 = iVar52 + 1;
  pFVar24 = SHorizontalBox::InsertSlot(pSVar23,&local_2cc8,iVar52);
  pFVar25 = (FArguments *)
            SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)&pFVar24->_padding_);
  lStack_3c80 = _UNK_15076aed8;
  local_3c88 = ___xmm_00000000400000000000000000000000;
  local_3c78 = 1;
  *(undefined1 *)&pFVar25->_padding_ = 1;
  local_3c60 = 0;
  local_3c70 = (undefined1  [8])0x0;
  FStack_3c68.Data = (FScriptContainerElement *)0x0;
  pFVar25->_padding_ = local_3c88;
  pFVar25->_padding_ = lStack_3c80;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar25->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c70,
             (FWriteAccessScope *)&local_3a70);
  if (((int)local_3c60 != 0) && (FStack_3c68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c68,0,0,0x10);
    local_3c60 = local_3c60 & 0xffffffff00000000;
  }
  if (local_3a70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a70.Accessor,&local_3a70);
  }
  if (FStack_3c68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c70);
  pFVar49 = pFVar31;
  if (&pFVar25->_padding_ != (longlong *)0x0) {
    pFVar49 = pFVar25;
  }
  plVar2 = &pFVar49->_padding_;
  if ((longlong *)local_3be0 != plVar2) {
    *(undefined4 *)plVar2 = 2;
    *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
  }
  pFVar25 = pFVar31;
  if (plVar2 != (longlong *)0x0) {
    pFVar25 = pFVar49;
  }
  if ((longlong *)local_3c10 != &pFVar25->_padding_) {
    *(undefined4 *)&pFVar25->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar25->_padding_ + 4) = 1;
  }
  local_3e60 = pFVar31;
  if (pFVar25 != (FArguments *)0xffffffffffffffb8) {
    local_3e60 = pFVar25;
  }
  this_02 = SCircularThrobber::FArguments::FArguments((FArguments *)local_2f08);
  uStack_3df0 = 0;
  this_02->_Radius = 9.0;
  local_3df8 = (FName)GetIsSearchingThrobberVisibility;
  lStack_3750 = (ulonglong)uStack_3dec << 0x20;
  local_3758 = GetIsSearchingThrobberVisibility;
  TAttribute<EVisibility>::Bind<SSearchBox>
            ((TAttribute<EVisibility> *)&this_02->_padding_,this,(pmf_b801044b *)&local_3758);
  pFVar21 = FText::AsLocalizable_Advanced_LocText
                      (&local_3748,L"SearchBox",L"Searching",L"Searching...");
  FText::FText(&local_3ba8.Value,pFVar21);
  local_3ba8.bIsSet = true;
  local_3ba8.Getter._16_8_ = 0;
  local_3ba8.Getter._0_8_ = 0;
  local_3ba8.Getter._8_8_ = 0;
  FText::operator=((FText *)this_02,&local_3ba8.Value);
  *(bool *)&this_02->_padding_ = local_3ba8.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3ba8.Getter);
  TAttribute<FText>::~TAttribute<FText>(&local_3ba8);
  uStack_3b70 = _UNK_15090c6d8;
  local_3b78 = ___xmm_3f8000003f800000000000003f800000;
  local_3c34 = 1;
  local_3c48 = ___xmm_3f8000003f800000000000003f800000;
  uStack_3c40 = _UNK_15090c6d8;
  local_3b68 = CONCAT22(local_3b68._2_2_,2);
  uVar13 = local_3b68;
  local_3c38 = local_3b68;
  local_3c20 = 0;
  local_3c30 = (undefined1  [8])0x0;
  pvStack_3c28 = (void *)0x0;
  *(undefined8 *)&(this_02->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(this_02->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_3b70;
  local_3b68._0_1_ = (undefined1)2;
  local_3b68._1_1_ = (undefined1)(2 >> 8);
  (this_02->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_3b68;
  (this_02->_ColorAndOpacity).Value.ColorTableId = local_3b68._1_1_;
  *(undefined2 *)&(this_02->_ColorAndOpacity).Value.field_0x12 = local_3b68._2_2_;
  (this_02->_ColorAndOpacity).bIsSet = true;
  local_3b68 = uVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c30);
  if (pvStack_3c28 != (void *)0x0) {
    FMemory::Free(pvStack_3c28);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c30);
  FLLMScope::FLLMScope(&local_3e50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3df8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3d68,&local_3df8,true);
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>
            (&local_3d60,"SCircularThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
             ,0x33,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_3d68);
  FLLMScope::~FLLMScope(&local_3e50);
  pSVar26 = TSharedPtr<SCircularThrobber,1>::operator->(&local_3d60._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar26,(FSlateBaseNamedArgs *)this_02);
  pSVar26 = local_3d60._Widget.Object;
  SCircularThrobber::Construct(local_3d60._Widget.Object,this_02);
  pSVar27 = TSharedPtr<SCircularThrobber,1>::operator->(&local_3d60._Widget);
  if ((pSVar27->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)(pSVar27->_padding_ + 0x228))(pSVar27);
    bVar16 = 0;
    if (cVar15 == '\0') goto LAB_142904d89;
  }
  bVar16 = 0x20;
LAB_142904d89:
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ & 0xdf;
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ | bVar16;
  pSVar27 = TSharedPtr<SCircularThrobber,1>::operator->(&local_3d60._Widget);
  pbVar1 = (byte *)((longlong)&pSVar27->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3d60._Widget.Object == (SCircularThrobber *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar12.ReferenceController = local_3d60._Widget.SharedReferenceCount.ReferenceController;
  local_3d60._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3d60._Widget.Object = (SCircularThrobber *)0x0;
  if ((pSVar26 == (SCircularThrobber *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_3cc8.Object = (SWidget *)pSVar26;
  local_3cc8.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_3e60,&local_3cc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_3748.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3748.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ce0);
  if ((void *)local_2ce0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ce0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ce0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2f08);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2cc8);
  bVar14 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSearchDelegate);
  if (bVar14) {
    dVar9 = __real_4000000000000000;
    if (param_1->_Style->bLeftAlignSearchResultButtons != false) {
      dVar9 = __real_4014000000000000;
    }
    FMargin::FMargin(&local_3738,dVar9,0.0,__real_4000000000000000,0.0);
    pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                        ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
    pFVar24 = SHorizontalBox::InsertSlot(pSVar23,&local_2bc8,iVar53);
    pFVar28 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar24->_padding_);
    FVar50.Inner.bActive = false;
    FVar50._1_3_ = 0;
    FVar50.PrevTag = 0;
    local_3888.bIsSet = true;
    local_3888.Value.Left = local_3738.Left;
    local_3888.Value.Top = local_3738.Top;
    local_3888.Value.Right = local_3738.Right;
    local_3888.Value.Bottom = local_3738.Bottom;
    local_3888.Getter._16_8_ = 0;
    local_3888.Getter._0_8_ = 0;
    local_3888.Getter._8_8_ = 0;
    FVar29 = (FMemScope)
             TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                       ((FSlotArgumentsMixin *)&pFVar28->field_0x18,&local_3888);
    puVar30 = (undefined4 *)((longlong)FVar29 + 0x48);
    if (local_3c08 != puVar30) {
      *puVar30 = 2;
      *(undefined1 *)((longlong)FVar29 + 0x4c) = 1;
    }
    if (puVar30 == (undefined4 *)0x0) {
      FVar29.Inner.bActive = false;
      FVar29._1_3_ = 0;
      FVar29.PrevTag = 0;
    }
    if (local_3bb8 != (undefined4 *)((longlong)FVar29 + 0x50)) {
      *(undefined4 *)((longlong)FVar29 + 0x50) = 2;
      *(undefined1 *)((longlong)FVar29 + 0x54) = 1;
    }
    local_3d68 = FVar50;
    if (FVar29 != (FMemScope)0xffffffffffffffb8) {
      local_3d68 = FVar29;
    }
    pFVar31 = STextBlock::FArguments::FArguments(&local_c68);
    local_3cc8.SharedReferenceCount.ReferenceController =
         local_3cc8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_3cc8.Object = (SWidget *)GetSearchResultDataVisibility;
    local_3728 = GetSearchResultDataVisibility;
    pTStack_3720 = local_3cc8.SharedReferenceCount.ReferenceController;
    local_3e60 = pFVar31;
    TAttribute<EVisibility>::Bind<SSearchBox>
              ((TAttribute<EVisibility> *)&pFVar31->_padding_,this,(pmf_b801044b *)&local_3728);
    (pFVar31->_Text).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_Text).Getter,
               (FWriteAccessScope *)&local_3928);
    local_3910 = &(pFVar31->_Text).Getter.field_0x8;
    puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3910);
    pSVar51 = local_res8;
    if (puVar18 != (undefined8 *)0x0) {
      uStack_3cdc = local_3c98.SharedReferenceCount.ReferenceController._4_4_;
      local_3ce8 = (FName)GetSearchResultText;
      uStack_3ce0 = 0;
      pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3718);
      pSVar51 = (SWidget *)(pTVar19->SharedReferenceCount).ReferenceController;
      local_res8 = pTVar19->Object;
      if (pSVar51 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar51->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar51->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar51->_padding_ + 1);
        UNLOCK();
      }
      bVar8 = true;
      bVar11 = true;
      bVar10 = true;
      *puVar18 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar20 = FDelegateHandle::GenerateNewID();
      puVar18[2] = uVar20;
      *puVar18 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSSearchBox___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar18[3] = local_res8;
      puVar18[4] = pSVar51;
      if (pSVar51 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar51->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar51->_padding_)[1] + 1);
        UNLOCK();
      }
      *(FName *)(puVar18 + 5) = local_3ce8;
      puVar18[6] = CONCAT44(uStack_3cdc,uStack_3ce0);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar51);
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar51);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3718.SharedReferenceCount.ReferenceController);
    }
    if (local_3928.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3928.Accessor,&local_3928);
    }
    local_38b8 = CONCAT22(local_38b8._2_2_,3);
    local_39e8 = local_38b8;
    local_39d0 = 0;
    local_39f8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_39f8._8_8_ = _UNK_15090c6d8;
    local_39e4 = 1;
    local_39e0 = 0;
    uStack_39d8 = 0;
    pFVar31 = STextBlock::FArguments::ColorAndOpacity
                        (local_3e60,(TAttribute<FSlateColor> *)&local_39f8._s_0);
    this_03 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_3518,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                         ,0x46,(T0RequiredArgs *)&local_res10);
    pTVar32 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_3708,pFVar31);
    pTVar4 = (pTVar32->SharedReferenceCount).ReferenceController;
    local_3e08.Object = (SWidget *)pTVar32->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3e08.SharedReferenceCount.ReferenceController = pTVar4;
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_3d68,&local_3e08);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3708.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3518._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_c68);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2bc8);
    pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                        ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
    pFVar24 = SHorizontalBox::InsertSlot(pSVar23,&local_2ac8,iVar52 + 2);
    pFVar28 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar24->_padding_);
    pTVar33 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_3300,&param_1->_Style->ImagePadding);
    pFVar28 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar28->field_0x18,pTVar33);
    pFVar28 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar28->field_0x48,HAlign_Center);
    pFVar28 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar28->field_0x48,VAlign_Fill);
    pFVar34 = SButton::FArguments::FArguments(&local_1c28);
    ::FName::FName(&local_3be8,"NoBorder");
    pIVar35 = FAppStyle::Get();
    pFVar34 = SButton::FArguments::ButtonStyle(pFVar34,pIVar35,&local_3be8,(char *)0x0);
    pFVar36 = FMargin::FMargin(&local_34d0,__real_40a00000,0.0);
    pTVar33 = TAttribute<FMargin>::TAttribute<FMargin>(&local_32d0,pFVar36);
    pFVar34 = SButton::FArguments::ContentPadding(pFVar34,pTVar33);
    local_3e08.SharedReferenceCount.ReferenceController =
         local_3e08.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_3e08.Object = (SWidget *)OnClickedSearch;
    local_36f8 = OnClickedSearch;
    pTStack_36f0 = local_3e08.SharedReferenceCount.ReferenceController;
    pFVar34->_HAlign = HAlign_Center;
    pFVar34->_VAlign = VAlign_Center;
    pFVar34 = SButton::FArguments::OnClicked<SSearchBox,enum_SSearchBox::SearchDirection>
                        (pFVar34,this,(pmf_cf99e240 *)&local_36f8,Previous);
    pFVar37 = FSlateColor::UseForeground(&local_3484);
    pTVar38 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_3420,pFVar37);
    pFVar34 = SButton::FArguments::ForegroundColor(pFVar34,pTVar38);
    pFVar34->_IsFocusable = false;
    local_3e08.SharedReferenceCount.ReferenceController =
         local_3e08.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_3e08.Object = (SWidget *)GetSearchResultNavigationButtonVisibility;
    local_36e8 = GetSearchResultNavigationButtonVisibility;
    pTStack_36e0 = local_3e08.SharedReferenceCount.ReferenceController;
    pFVar34 = TSlateBaseNamedArgs<SButton>::Visibility<SSearchBox>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar34,this,(pmf_b801044b *)&local_36e8);
    pFVar39 = SImage::FArguments::FArguments(&local_26c8);
    local_3bf0 = &param_1->_Style->UpArrowImage;
    pTVar40 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_3470,&local_3bf0);
    pFVar39 = SImage::FArguments::Image(pFVar39,pTVar40);
    pFVar37 = FSlateColor::UseForeground(&local_3498);
    pTVar38 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_33f0,pFVar37);
    pFVar39 = SImage::FArguments::ColorAndOpacity(pFVar39,pTVar38);
    pTVar41 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::
              TAttribute<TOptional<UE::Math::TVector2<double>_>_><TOptional<UE::Math::TVector2<double>_>_>
                        (&local_32a0,&param_1->_Style->ImageSizeOverride);
    pFVar39 = SImage::FArguments::DesiredSizeOverride(pFVar39,pTVar41);
    pTVar42 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_34e8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                         ,0x5d,local_res18);
    pTVar43 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar42,&local_36c8,pFVar39);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_3e18,pTVar43);
    pFVar34 = SButton::FArguments::operator[](pFVar34,&local_3e18);
    pTVar44 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_3500,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                         ,0x53,local_res20);
    pTVar45 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar44,&local_36d8,pFVar34);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3b40,pTVar45);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar28,&local_3b40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3b40.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_36d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3500._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3e18.SharedReferenceCount.ReferenceController._4_4_,
                        local_3e18.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_36c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_34e8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_26c8);
    SButton::FArguments::~FArguments(&local_1c28);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2ac8);
    pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                        ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
    iVar53 = iVar52 + 4;
    pFVar24 = SHorizontalBox::InsertSlot(pSVar23,&local_29c8,iVar52 + 3);
    pFVar28 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar24->_padding_);
    pTVar33 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_33c0,&param_1->_Style->ImagePadding);
    pFVar28 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar28->field_0x18,pTVar33);
    pFVar28 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar28->field_0x48,HAlign_Center);
    pFVar28 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar28->field_0x48,VAlign_Fill);
    pFVar34 = SButton::FArguments::FArguments(&local_16e8);
    ::FName::FName(&local_3bf8,"NoBorder");
    pIVar35 = FAppStyle::Get();
    pFVar34 = SButton::FArguments::ButtonStyle(pFVar34,pIVar35,&local_3bf8,(char *)0x0);
    pFVar36 = FMargin::FMargin(&local_3628,__real_40a00000,0.0);
    pTVar33 = TAttribute<FMargin>::TAttribute<FMargin>(&local_3390,pFVar36);
    pFVar34 = SButton::FArguments::ContentPadding(pFVar34,pTVar33);
    local_3e18.Object = (SWidget *)OnClickedSearch;
    local_3e18.SharedReferenceCount.ReferenceController._0_4_ = 0;
    lStack_36b0 = (ulonglong)local_3e18.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_36b8 = OnClickedSearch;
    pFVar34->_HAlign = HAlign_Center;
    pFVar34->_VAlign = VAlign_Center;
    pFVar34 = SButton::FArguments::OnClicked<SSearchBox,enum_SSearchBox::SearchDirection>
                        (pFVar34,this,(pmf_cf99e240 *)&local_36b8,Next);
    pFVar37 = FSlateColor::UseForeground(&local_34ac);
    pTVar38 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_3360,pFVar37);
    pFVar34 = SButton::FArguments::ForegroundColor(pFVar34,pTVar38);
    local_3e18.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_3e18.Object = (SWidget *)GetSearchResultNavigationButtonVisibility;
    lStack_36a0 = (ulonglong)local_3e18.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_36a8 = GetSearchResultNavigationButtonVisibility;
    pFVar34->_IsFocusable = false;
    pFVar34 = TSlateBaseNamedArgs<SButton>::Visibility<SSearchBox>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar34,this,(pmf_b801044b *)&local_36a8);
    pFVar39 = SImage::FArguments::FArguments(&local_2420);
    local_3bb0 = &param_1->_Style->DownArrowImage;
    pTVar40 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_3448,&local_3bb0);
    pFVar39 = SImage::FArguments::Image(pFVar39,pTVar40);
    pFVar37 = FSlateColor::UseForeground(&local_34c0);
    pTVar38 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_3330,pFVar37);
    pFVar39 = SImage::FArguments::ColorAndOpacity(pFVar39,pTVar38);
    pTVar41 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::
              TAttribute<TOptional<UE::Math::TVector2<double>_>_><TOptional<UE::Math::TVector2<double>_>_>
                        (&local_3268,&param_1->_Style->ImageSizeOverride);
    pFVar39 = SImage::FArguments::DesiredSizeOverride(pFVar39,pTVar41);
    pTVar42 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_35a8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                         ,0x74,&local_3e68);
    pTVar43 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar42,&local_3688,pFVar39);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_3cb8,pTVar43);
    pFVar34 = SButton::FArguments::operator[](pFVar34,&local_3cb8);
    pTVar44 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_35c0,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                         ,0x6a,&local_3e67);
    pTVar45 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar44,&local_3698,pFVar34);
    pTVar4 = (pTVar45->SharedReferenceCount).ReferenceController;
    local_3b50.Object = (SWidget *)pTVar45->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3b50.SharedReferenceCount.ReferenceController = pTVar4;
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar28,&local_3b50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3698.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35c0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3cb8.SharedReferenceCount.ReferenceController._4_4_,
                        local_3cb8.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3688.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35a8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_2420);
    SButton::FArguments::~FArguments(&local_16e8);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_29c8);
  }
  bVar11 = false;
  bVar10 = false;
  bVar8 = false;
  if (param_1->_Style->bLeftAlignGlassImageAndClearButton == false) {
    pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                        ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
    iVar52 = *(int *)&pSVar23->field_0x240;
  }
  else {
    iVar52 = 0;
  }
  if (param_1->_Style->bLeftAlignSearchResultButtons ==
      param_1->_Style->bLeftAlignGlassImageAndClearButton) {
    iVar52 = iVar53;
  }
  pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                      ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
  pFVar24 = SHorizontalBox::InsertSlot(pSVar23,&local_28c8,iVar52);
  pFVar28 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)&pFVar24->_padding_);
  pFVar54 = (FSlotArguments *)0x0;
  pFVar5 = param_1->_Style;
  local_3858.Value.Left = (pFVar5->ImagePadding).Left;
  local_3858.Value.Top = (pFVar5->ImagePadding).Top;
  local_3858.Value.Right = (pFVar5->ImagePadding).Right;
  local_3858.Value.Bottom = (pFVar5->ImagePadding).Bottom;
  local_3858.bIsSet = true;
  local_3858.Getter._16_8_ = 0;
  local_3858.Getter._0_8_ = 0;
  local_3858.Getter._8_8_ = 0;
  pFVar28 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar28->field_0x18,&local_3858);
  puVar46 = &pFVar28->field_0x48;
  if (local_3bc0 != (undefined4 *)puVar46) {
    *(undefined4 *)puVar46 = 2;
    pFVar28->field_0x4c = 1;
  }
  if (puVar46 == (undefined1 *)0x0) {
    pFVar28 = pFVar54;
  }
  if (local_3bc8 != (undefined4 *)&pFVar28->field_0x50) {
    *(undefined4 *)&pFVar28->field_0x50 = 2;
    pFVar28->field_0x54 = 1;
  }
  this_05 = pFVar54;
  if (pFVar28 != (FSlotArguments *)0xffffffffffffffb8) {
    this_05 = pFVar28;
  }
  pFVar39 = SImage::FArguments::FArguments(&local_2178);
  local_3cb8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_3cb8.Object = (SWidget *)GetSearchGlassVisibility;
  lStack_3670 = (ulonglong)local_3cb8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_3678 = GetSearchGlassVisibility;
  TAttribute<EVisibility>::Bind<SSearchBox>
            ((TAttribute<EVisibility> *)&pFVar39->_padding_,this,(pmf_b801044b *)&local_3678);
  local_3b20.Value = &param_1->_Style->GlassImage;
  local_3b20.bIsSet = true;
  local_3b20.Getter._16_8_ = 0;
  local_3b20.Getter._0_8_ = 0;
  local_3b20.Getter._8_8_ = 0;
  pFVar39 = SImage::FArguments::Image(pFVar39,&local_3b20);
  local_3890 = CONCAT22(local_3890._2_2_,2);
  local_39b8 = local_3890;
  local_39c8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_39c8._8_8_ = _UNK_15090c6d8;
  local_39b4 = 1;
  local_39b0 = 0;
  uStack_39a8 = 0;
  local_39a0 = 0;
  pFVar39 = SImage::FArguments::ColorAndOpacity(pFVar39,(TAttribute<FSlateColor> *)&local_39c8._s_0)
  ;
  pFVar5 = param_1->_Style;
  local_37b8 = (pFVar5->ImageSizeOverride).bIsSet;
  if ((bool)local_37b8 != false) {
    local_37c8._s_0.X = (pFVar5->ImageSizeOverride).TypedValue.field0_0x0._s_0.X;
    local_37c8._s_0.Y = (pFVar5->ImageSizeOverride).TypedValue.field0_0x0._s_0.Y;
  }
  local_37b0 = 1;
  local_3798 = 0;
  local_37a8 = 0;
  uStack_37a0 = 0;
  pFVar39 = SImage::FArguments::DesiredSizeOverride
                      (pFVar39,(TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)
                               &local_37c8._s_0);
  FLLMScope::FLLMScope(&local_3e4c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3ce8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3cd8,&local_3ce8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_35d8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
             ,0x8d,&local_3e66);
  FMemScope::~FMemScope(&local_3cd8);
  FLLMScope::~FLLMScope(&local_3e4c);
  pTVar43 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_35d8,&local_3668,pFVar39);
  pTVar4 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_3ca8.Object = (SWidget *)pTVar43->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3ca8.SharedReferenceCount.ReferenceController = pTVar4;
  TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)this_05,&local_3ca8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3668.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35d8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2178);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_28c8);
  pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                      ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
  pFVar24 = SHorizontalBox::InsertSlot(pSVar23,&local_27c8,iVar52 + 1);
  pFVar28 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)&pFVar24->_padding_);
  puVar46 = &pFVar28->field_0x48;
  if (local_3bd0 != (undefined4 *)puVar46) {
    *(undefined4 *)puVar46 = 2;
    pFVar28->field_0x4c = 1;
  }
  if (puVar46 == (undefined1 *)0x0) {
    pFVar28 = pFVar54;
  }
  if (local_3bd8 != (undefined4 *)&pFVar28->field_0x50) {
    *(undefined4 *)&pFVar28->field_0x50 = 2;
    pFVar28->field_0x54 = 1;
  }
  local_res10 = pFVar54;
  if (pFVar28 != (FSlotArguments *)0xffffffffffffffb8) {
    local_res10 = pFVar28;
  }
  pFVar34 = SButton::FArguments::FArguments(&local_11a8);
  local_3ca8.SharedReferenceCount.ReferenceController =
       local_3ca8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3ca8.Object = (SWidget *)GetXVisibility;
  local_3618 = GetXVisibility;
  pTStack_3610 = local_3ca8.SharedReferenceCount.ReferenceController;
  TAttribute<EVisibility>::Bind<SSearchBox>
            ((TAttribute<EVisibility> *)&pFVar34->_padding_,this,(pmf_b801044b *)&local_3618);
  ::FName::FName(&local_3c00,"ThinHoverOnlyButton");
  pIVar35 = FAppStyle::Get();
  pFVar34 = SButton::FArguments::ButtonStyle(pFVar34,pIVar35,&local_3c00,(char *)0x0);
  pFVar5 = param_1->_Style;
  local_3828.Value.Left = (pFVar5->ImagePadding).Left;
  local_3828.Value.Top = (pFVar5->ImagePadding).Top;
  local_3828.Value.Right = (pFVar5->ImagePadding).Right;
  local_3828.Value.Bottom = (pFVar5->ImagePadding).Bottom;
  local_3828.bIsSet = true;
  local_3828.Getter._16_8_ = 0;
  local_3828.Getter._0_8_ = 0;
  local_3828.Getter._8_8_ = 0;
  pFVar34 = SButton::FArguments::ContentPadding(pFVar34,&local_3828);
  pFVar34->_HAlign = HAlign_Center;
  pFVar34->_VAlign = VAlign_Center;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar34->_OnClicked,
             (FWriteAccessScope *)&local_3908);
  local_38f0 = &(pFVar34->_OnClicked).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_38f0);
  pSVar51 = local_res8;
  if (puVar18 != (undefined8 *)0x0) {
    fStack_3ccc = local_3628.Bottom;
    local_3cd8 = (FMemScope)OnClearSearch;
    uStack_3cd0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3658);
    pSVar51 = (SWidget *)(pTVar22->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar22->Object;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar51->_padding_ = (int)pSVar51->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar51->_padding_ = (int)pSVar51->_padding_ + 1;
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar8 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchBox___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = local_res8;
    puVar18[4] = pSVar51;
    if (pSVar51 != (SWidget *)0x0) {
      LOCK();
      puVar46 = (undefined1 *)((longlong)&pSVar51->_padding_ + 4);
      *(int *)puVar46 = *(int *)puVar46 + 1;
      UNLOCK();
    }
    *(FMemScope *)(puVar18 + 5) = local_3cd8;
    puVar18[6] = CONCAT44(fStack_3ccc,uStack_3cd0);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar51);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar51);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3658.SharedReferenceCount.ReferenceController);
  }
  if (local_3908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3908.Accessor,&local_3908);
  }
  pFVar34 = TSlateBaseNamedArgs<SButton>::AddMetaData<FTagMetaData,wchar_t_const_*>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar34,L"SearchClearButton");
  pFVar34->_IsFocusable = true;
  pFVar39 = SImage::FArguments::FArguments(&local_1ed0);
  local_3af8.Value = &param_1->_Style->ClearImage;
  local_3af8.bIsSet = true;
  local_3af8.Getter._0_8_ = 0;
  local_3af8.Getter._8_8_ = 0;
  local_3af8.Getter._16_8_ = 0;
  pFVar39 = SImage::FArguments::Image(pFVar39,&local_3af8);
  local_38a4 = CONCAT22(local_38a4._2_2_,2);
  local_3988 = local_38a4;
  local_3998._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_3998._8_8_ = _UNK_15090c6d8;
  local_3984 = 1;
  local_3980 = 0;
  uStack_3978 = 0;
  local_3970 = 0;
  pFVar39 = SImage::FArguments::ColorAndOpacity(pFVar39,(TAttribute<FSlateColor> *)&local_3998._s_0)
  ;
  pFVar5 = param_1->_Style;
  local_3780 = (pFVar5->ImageSizeOverride).bIsSet;
  if ((bool)local_3780 != false) {
    local_3790._s_0.X = (pFVar5->ImageSizeOverride).TypedValue.field0_0x0._s_0.X;
    local_3790._s_0.Y = (pFVar5->ImageSizeOverride).TypedValue.field0_0x0._s_0.Y;
  }
  local_3778 = 1;
  local_3760 = 0;
  local_3770 = 0;
  uStack_3768 = 0;
  pFVar39 = SImage::FArguments::DesiredSizeOverride
                      (pFVar39,(TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)
                               &local_3790._s_0);
  pTVar42 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_3578,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                       ,0xa6,&local_3e65);
  pTVar43 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_3638,pFVar39);
  pTVar4 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_3c58 = pTVar43->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar34->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar34->_Content).Widget.Object = (SWidget *)local_3c58;
  (pFVar34->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  pTStack_3c50 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar44 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3590,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                       ,0x9a,&local_3e64);
  pTVar45 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar44,&local_3648,pFVar34);
  pTVar6 = (pTVar45->SharedReferenceCount).ReferenceController;
  local_3b60.Object = (SWidget *)pTVar45->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b60.SharedReferenceCount.ReferenceController = pTVar6;
  TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_res10,&local_3b60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3648.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3590._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3638.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3578._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1ed0);
  SButton::FArguments::~FArguments(&local_11a8);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_27c8);
  pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->
                      ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
  SHorizontalBox::InsertSlot
            (pSVar23,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_3230,-1);
  pFVar28 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_3230 + 8));
  pFVar47 = SSpacer::FArguments::FArguments((FArguments *)local_3130);
  local_37e8 = 1;
  local_37d0 = 0;
  local_37f8._s_0.X = ___xmm_0000000000000000401c000000000000;
  local_37f8._s_0.Y = _UNK_150971c18;
  local_37e0 = 0;
  uStack_37d8 = 0;
  pFVar47 = SSpacer::FArguments::Size
                      (pFVar47,(TAttribute<UE::Math::TVector2<double>_> *)&local_37f8._s_0);
  this_04 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_3560,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSearchBox.cpp"
                       ,0xb2,local_3e63);
  pTVar48 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_3c98,pFVar47);
  pTVar4 = (pTVar48->SharedReferenceCount).ReferenceController;
  local_3b30.Object = (SWidget *)pTVar48->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b30.SharedReferenceCount.ReferenceController = pTVar4;
  TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)pFVar28,&local_3b30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_3c98.SharedReferenceCount.ReferenceController._4_4_,
                      local_3c98.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3560._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f20);
  if ((void *)local_2f20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f20);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_3130);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_3230);
  return;
}

// GetIsSearchingThrobberVisibility @ 142941590

EVisibility __thiscall SSearchBox::GetIsSearchingThrobberVisibility(SSearchBox *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get(&this->bIsSearching);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSearchGlassVisibility @ 142947a40

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SSearchBox::GetSearchGlassVisibility(SSearchBox *this)

{
  code *pcVar1;
  EVisibility EVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  FText *this_00;
  uchar *in_RDX;
  FText local_18;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar4.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  this_00 = SEditableText::GetText((SEditableText *)this->_padding_,&local_18);
  bVar3 = FText::IsEmpty(this_00);
  EVar2 = EVisibility::Collapsed;
  if (bVar3) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSearchResultDataVisibility @ 142947ae0

EVisibility __thiscall SSearchBox::GetSearchResultDataVisibility(SSearchBox *this)

{
  TOptional<SSearchBox::FSearchResultData> *pTVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  pTVar1 = TAttribute<TOptional<SSearchBox::FSearchResultData>_>::Get(&this->SearchResultData);
  EVar2 = EVisibility::Collapsed;
  if (pTVar1->bIsSet != false) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSearchResultNavigationButtonVisibility @ 142947b20

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SSearchBox::GetSearchResultNavigationButtonVisibility(SSearchBox *this)

{
  longlong *plVar1;
  char cVar2;
  TOptional<SSearchBox::FSearchResultData> *pTVar3;
  EVisibility EVar4;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->SearchResultData).Getter,&local_28);
  if ((*(int *)&(this->SearchResultData).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->SearchResultData).Getter.field_0x8, plVar1 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar3 = TAttribute<TOptional<SSearchBox::FSearchResultData>_>::Get(&this->SearchResultData);
      EVar4 = EVisibility::Collapsed;
      if (pTVar3->bIsSet != false) {
        EVar4 = EVisibility::Visible;
      }
      in_RDX->Value = (uchar)EVar4.Value.Value;
      return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
  return (EVisibility)(uchar)in_RDX;
}

// GetSearchResultText @ 142947be0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall SSearchBox::GetSearchResultText(SSearchBox *this,FText *__return_storage_ptr__)

{
  FSearchResultData FVar1;
  TOptional<SSearchBox::FSearchResultData> *pTVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  longlong local_20;
  longlong *local_18;
  undefined4 local_10;
  
  pTVar2 = TAttribute<TOptional<SSearchBox::FSearchResultData>_>::Get(&this->SearchResultData);
  if (pTVar2->bIsSet == false) {
    FText::FText(__return_storage_ptr__);
  }
  else {
    FVar1 = pTVar2->TypedValue;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"SearchBox",L"SearchResultFormat",L"{0} / {1}");
    pFVar4 = FTextFormat::FTextFormat(&local_58,pFVar3,Default);
    local_88.ArrayNum = 2;
    local_48.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)FVar1.CurrentSearchResultIndex;
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_28 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20 = (longlong)FVar1.NumSearchResults;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_88.AllocatorInstance.Data,&local_48,2);
    local_78.TextFormatData.Object = (pFVar4->TextFormatData).Object;
    local_78.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar4->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_78.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(__return_storage_ptr__,&local_78,&local_88);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FFormatArgumentValue *)local_88.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->TextFormatData).SharedReferenceCount.ReferenceController);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetSelection @ 142948b90

/* WARNING: Enum "Type": Some values do not have unique names */

FTextSelection * __thiscall
SSearchBox::GetSelection(SSearchBox *this,FTextSelection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FTextSelection *pFVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTextSelection *)(*pcVar1)();
      return pFVar3;
    }
  }
  SEditableText::GetSelection((SEditableText *)this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWidgetFont @ 14294c620

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall
SSearchBox::GetWidgetFont(SSearchBox *this,FSlateFontInfo *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateFontInfo *pFVar3;
  FText *this_00;
  longlong lVar4;
  FText local_18;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateFontInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = SEditableText::GetText((SEditableText *)this->_padding_,&local_18);
  bVar2 = FText::IsEmpty(this_00);
  lVar4 = 0x618;
  if (!bVar2) {
    lVar4 = 0x5b8;
  }
  FSlateFontInfo::FSlateFontInfo
            (__return_storage_ptr__,(FSlateFontInfo *)((longlong)&this->_padding_ + lVar4));
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetXVisibility @ 14294c890

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SSearchBox::GetXVisibility(SSearchBox *this)

{
  code *pcVar1;
  EVisibility EVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  FText *this_00;
  uchar *in_RDX;
  FText local_18;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar4.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  this_00 = SEditableText::GetText((SEditableText *)this->_padding_,&local_18);
  bVar3 = FText::IsEmpty(this_00);
  EVar2 = EVisibility::Visible;
  if (bVar3) {
    EVar2 = EVisibility::Collapsed;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return (EVisibility)SUB81(in_RDX,0);
}

// HandleTextChanged @ 14294e3b0

void __thiscall SSearchBox::HandleTextChanged(SSearchBox *this,FText *param_1)

{
  SWidget *pSVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  FText *pFVar6;
  char cVar7;
  atomic<int> aVar8;
  bool *pbVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget,1> *pTVar11;
  ulong64 uVar12;
  float *pfVar13;
  TSharedRef<FActiveTimerHandle,1> *pTVar14;
  FActiveTimerHandle *pFVar15;
  FActiveTimerHandle *pFVar16;
  FActiveTimerHandle *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FText *local_res10;
  TSharedRef<FActiveTimerHandle,1> local_b8;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  TSharedRef<FActiveTimerHandle,1> local_90;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  TSharedRef<SWidget,1> local_60;
  FReadAccessScope local_50;
  
  pFVar15 = (FActiveTimerHandle *)0x0;
  local_res8 = 0;
  local_res10 = param_1;
  if ((((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar18 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar18 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar18->SharedReferenceCount < 1))
  goto LAB_14294e49f;
  local_b8.SharedReferenceCount.ReferenceController =
       (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  pFVar16 = pFVar15;
  pFVar17 = (FActiveTimerHandle *)local_b8.SharedReferenceCount.ReferenceController;
  if ((FActiveTimerHandle *)local_b8.SharedReferenceCount.ReferenceController ==
      (FActiveTimerHandle *)0x0) {
LAB_14294e426:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    aVar5 = *(atomic<int> *)
             &((FActiveTimerHandle *)local_b8.SharedReferenceCount.ReferenceController)->
              TimerFunction;
    do {
      pFVar16 = (FActiveTimerHandle *)0x0;
      pFVar17 = pFVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14294e426;
      LOCK();
      aVar8 = *(atomic<int> *)
               &((FActiveTimerHandle *)local_b8.SharedReferenceCount.ReferenceController)->
                TimerFunction;
      bVar19 = aVar5 == aVar8;
      if (bVar19) {
        *(int *)&((FActiveTimerHandle *)local_b8.SharedReferenceCount.ReferenceController)->
                 TimerFunction = (int)aVar5 + 1;
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar19);
    pFVar16 = (this->ActiveTimerHandle).Object;
    pFVar17 = (FActiveTimerHandle *)local_b8.SharedReferenceCount.ReferenceController;
    if (pFVar16 == (FActiveTimerHandle *)0x0) goto LAB_14294e426;
  }
  local_b8.Object = pFVar16;
  if ((pFVar16 == (FActiveTimerHandle *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::UnRegisterActiveTimer((SWidget *)this,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14294e49f:
  pFVar6 = local_res10;
  pbVar9 = TAttribute<bool>::Get(&this->DelayChangeNotificationsWhileTyping);
  if ((*pbVar9 != false) && (cVar7 = (**(code **)(this->_padding_ + 0x1a0))(this), cVar7 != '\0')) {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_80);
    local_68 = &local_a0;
    puVar10 = UE::Core::Private::DelegateAllocate(0x40,&local_a0);
    if (puVar10 == (undefined8 *)0x0) {
      pTVar18 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      local_b8.Object = (FActiveTimerHandle *)TriggerOnTextChanged;
      local_b8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_90.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_60);
      pFVar6 = local_res10;
      pTVar18 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar1 = pTVar11->Object;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy__VFText____6B_
      ;
      puVar10[1] = 0;
      pIVar2 = (local_res10->TextData).Reference;
      puVar10[1] = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
      }
      *(uint *)(puVar10 + 2) = pFVar6->Flags;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar10[3] = uVar12;
      *puVar10 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSSearchBox___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy__VFText____6B_
      ;
      puVar10[4] = pSVar1;
      puVar10[5] = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar15 = (FActiveTimerHandle *)&DAT_00000007;
      puVar10[6] = local_b8.Object;
      puVar10[7] = local_b8.SharedReferenceCount.ReferenceController;
    }
    if (((ulonglong)pFVar15 & 4) != 0) {
      pFVar15 = (FActiveTimerHandle *)(ulonglong)((uint)pFVar15 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (((ulonglong)pFVar15 & 2) != 0) {
      pFVar15 = (FActiveTimerHandle *)(ulonglong)((uint)pFVar15 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (((ulonglong)pFVar15 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    pfVar13 = TAttribute<float>::Get(&this->DelayChangeNotificationsWhileTypingSeconds);
    pTVar14 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_90,*pfVar13,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_a8);
    TWeakPtr<FActiveTimerHandle,1>::operator=<FActiveTimerHandle>(&this->ActiveTimerHandle,pTVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_90.SharedReferenceCount.ReferenceController._4_4_,
                        local_90.SharedReferenceCount.ReferenceController._0_4_));
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate,
             &local_50);
  if ((*(int *)&(this->OnTextChangedDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnTextChangedDelegate).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,pFVar6);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  return;
}

// HandleTextCommitted @ 14294e6b0

void __thiscall SSearchBox::HandleTextCommitted(SSearchBox *this,FText *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FActiveTimerHandle *pFVar6;
  FActiveTimerHandle *pFVar7;
  bool bVar8;
  TSharedRef<FActiveTimerHandle,1> local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar1 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_14294e7dd;
  local_48.SharedReferenceCount.ReferenceController =
       (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  pFVar7 = (FActiveTimerHandle *)0x0;
  pFVar6 = (FActiveTimerHandle *)local_48.SharedReferenceCount.ReferenceController;
  if ((FActiveTimerHandle *)local_48.SharedReferenceCount.ReferenceController ==
      (FActiveTimerHandle *)0x0) {
LAB_14294e726:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar4 = *(atomic<int> *)
             &((FActiveTimerHandle *)local_48.SharedReferenceCount.ReferenceController)->
              TimerFunction;
    do {
      pFVar6 = pFVar7;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14294e726;
      LOCK();
      aVar5 = *(atomic<int> *)
               &((FActiveTimerHandle *)local_48.SharedReferenceCount.ReferenceController)->
                TimerFunction;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        *(int *)&((FActiveTimerHandle *)local_48.SharedReferenceCount.ReferenceController)->
                 TimerFunction = (int)aVar4 + 1;
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    pFVar7 = (this->ActiveTimerHandle).Object;
    pFVar6 = (FActiveTimerHandle *)local_48.SharedReferenceCount.ReferenceController;
    if (pFVar7 == (FActiveTimerHandle *)0x0) goto LAB_14294e726;
  }
  local_48.Object = pFVar7;
  if ((pFVar7 == (FActiveTimerHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SWidget::UnRegisterActiveTimer((SWidget *)this,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate,
             &local_38);
  if ((*(int *)&(this->OnTextChangedDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnTextChangedDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
LAB_14294e7dd:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnTextCommittedDelegate,&local_20);
  if ((*(int *)&(this->OnTextCommittedDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnTextCommittedDelegate).field_0x8, plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

// OnClearSearch @ 1429616e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SSearchBox::OnClearSearch(SSearchBox *this,FReply *__return_storage_ptr__)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FReply *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_118 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  TSharedRef<SWidget,1> local_e8;
  FDestructionSentinel local_d8;
  FReply local_c0;
  
  pFVar5 = FText::GetEmpty();
  local_118._0_8_ = (pFVar5->TextData).Reference;
  if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 8))(local_118._0_8_,local_res8);
  }
  local_118._8_4_ = pFVar5->Flags;
  local_118[0x10] = true;
  local_f0 = 0;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_f8.Data = (FScriptContainerElement *)0x0;
  SEditableTextBox::SetText((SEditableTextBox *)this,(TAttribute<FText> *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_d8);
  if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 0x10))();
  }
  FReply::FReply(&local_c0,true);
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar3)();
      return pFVar6;
    }
  }
  pSVar1 = (SWidget *)this->_padding_;
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8.Object = pSVar1;
  local_e8.SharedReferenceCount.ReferenceController = pTVar2;
  pFVar6 = FReply::SetUserFocus(&local_c0,&local_e8,SetDirectly,false);
  FReply::FReply(__return_storage_ptr__,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// OnClickedSearch @ 1429619b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSearchBox::OnClickedSearch(SSearchBox *this,FReply *__return_storage_ptr__,SearchDirection param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSearchDelegate,
             &local_28);
  if ((*(int *)&(this->OnSearchDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnSearchDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// SelectText @ 14298dc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSearchBox::SelectText(SSearchBox *this,FTextLocation *param_1,FTextLocation *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
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
  SEditableText::SelectText((SEditableText *)this->_padding_,param_1,param_2);
  return;
}

// TriggerOnTextChanged @ 1429ac5f0

EActiveTimerReturnType __thiscall
SSearchBox::TriggerOnTextChanged(SSearchBox *this,double param_1,float param_2,FText *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  ITextData *pIVar5;
  undefined8 local_38 [2];
  FReadAccessScope local_28;
  
  if (&this->ActiveTimerHandle != (TWeakPtr<FActiveTimerHandle,1> *)local_38) {
    pTVar3 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
    (this->ActiveTimerHandle).Object = (FActiveTimerHandle *)0x0;
    (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate,
             &local_28);
  if ((*(int *)&(this->OnTextChangedDelegate).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnTextChangedDelegate).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pIVar5 = (param_3->TextData).Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  return Stop;
}

