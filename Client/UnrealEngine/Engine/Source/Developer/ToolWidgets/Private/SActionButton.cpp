// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 5

// ~SActionButton @ 142d67260

void __thiscall SActionButton::~SActionButton(SActionButton *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ActionButtonType).Getter);
  pvVar1 = *(void **)&(this->ActionButtonType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ActionButtonType).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Button).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboButton).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 142d78cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142d79623) */
/* WARNING: Removing unreachable block (ram,0x000142d7963f) */
/* WARNING: Removing unreachable block (ram,0x000142d79644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SActionButton::Construct(SActionButton *this,FArguments *param_1)

{
  byte *pbVar1;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TAttribute<EActionButtonType> *this_01;
  EActionButtonType EVar2;
  bool bVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  void *pvVar7;
  SButton *pSVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  SComboButton *pSVar18;
  FSharedReferencer<1> FVar19;
  bool bVar20;
  char cVar21;
  byte bVar22;
  EActionButtonType *pEVar23;
  FToolWidgetsStyle *this_02;
  FActionButtonStyle *pFVar24;
  FButtonStyle *pFVar25;
  FComboButtonStyle *pFVar26;
  FTextBlockStyle *pFVar27;
  FSlateBrush *pFVar28;
  FSlateColor *pFVar29;
  undefined8 *puVar30;
  TSharedRef<SWidget_const_,1> *pTVar31;
  ulong64 uVar32;
  FMargin *pFVar33;
  FArguments *pFVar34;
  TAttribute<FText> *pTVar35;
  FArguments *pFVar36;
  TAttribute<FMargin> *pTVar37;
  TSharedRef<SButton,1> *pTVar38;
  longlong lVar39;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_03;
  longlong *plVar40;
  FMRSWRecursiveAccessDetector *this_04;
  TAttribute<FSlateBrush_const_*> *pTVar41;
  FName FVar42;
  FName FVar43;
  FName *pFVar44;
  FMemScope FVar45;
  FSlateBrush **ppFVar46;
  FActionButtonStyle **ppFVar47;
  bool bVar48;
  undefined1 auStackY_1058 [32];
  EActionButtonType local_1027 [6];
  FName local_1021;
  EHorizontalAlignment local_1018;
  T0RequiredArgs local_1014;
  T0RequiredArgs local_1013 [3];
  FLLMScope local_1010;
  FLLMScope local_100c;
  undefined1 local_1008 [8];
  FDelegateAllocation local_1000;
  undefined1 local_ff0 [16];
  undefined1 local_fe0 [16];
  int local_fd0;
  FName local_fc8;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_fc0;
  EActionButtonType local_fa8;
  undefined1 local_fa7;
  undefined1 local_fa0 [8];
  ForAnyElementType FStack_f98;
  ulonglong local_f90;
  EActionButtonType local_f88;
  undefined1 local_f87;
  undefined1 local_f80 [8];
  ForAnyElementType FStack_f78;
  ulonglong local_f70;
  TSharedRef<SWidget,1> local_f68;
  undefined8 local_f58;
  FMemScope local_f50;
  SWidget *local_f48;
  TReferenceControllerBase<1> *pTStack_f40;
  FMargin local_f38;
  undefined1 local_f28;
  undefined1 local_f20 [8];
  ForAnyElementType FStack_f18;
  ulonglong local_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined4 local_ef8;
  undefined1 local_ef4 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_ef0;
  ForAnyElementType FStack_ee8;
  ulonglong local_ee0;
  undefined1 local_ed8;
  undefined1 local_ed7;
  undefined1 local_ed0 [8];
  void *pvStack_ec8;
  undefined4 local_ec0;
  SButton *local_eb8;
  TReferenceControllerBase<1> *pTStack_eb0;
  FName local_ea8;
  SWidget *local_ea0;
  TReferenceControllerBase<1> *pTStack_e98;
  undefined1 local_e90 [8];
  FMemScope local_e88;
  FName local_e80;
  FName local_e78;
  FName local_e70;
  FName local_e68;
  FName local_e60;
  FName local_e58;
  FName local_e50;
  FName local_e48;
  FName local_e40;
  FName local_e38;
  FName local_e30;
  undefined1 local_e28 [16];
  undefined1 local_e18 [8];
  void *pvStack_e10;
  undefined8 local_e08;
  undefined1 local_e00 [16];
  undefined1 local_df0 [8];
  void *pvStack_de8;
  undefined8 local_de0;
  FName local_dd8;
  FName local_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined1 local_db8;
  undefined1 local_db0 [8];
  void *pvStack_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined4 local_d88;
  undefined1 local_d84 [4];
  undefined1 local_d80 [8];
  void *pvStack_d78;
  undefined8 local_d70;
  undefined1 local_d68 [24];
  undefined1 local_d50 [8];
  void *pvStack_d48;
  undefined4 local_d40;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_d38;
  TSharedRef<SButton,1> local_d20;
  initializer_list<TPairInitializer<EActionButtonType_const_&,FName_const_&>_> local_d08;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  bool local_ce8;
  undefined1 local_ce0 [24];
  initializer_list<TPairInitializer<FName_const_&,EActionButtonType_const_&>_> local_cc8;
  TAttribute<bool> local_cb8;
  FSlateBrush *local_c98;
  char local_c90 [8];
  undefined1 local_c88 [24];
  FSlateBrush *local_c70;
  undefined1 local_c68;
  undefined1 local_c60 [24];
  FDestructionSentinel local_c48;
  FDestructionSentinel local_c30;
  FDestructionSentinel local_c18;
  FDestructionSentinel local_c00;
  FDestructionSentinel local_be8;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined4 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8 [24];
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined1 local_b90;
  undefined1 local_b8c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_b88;
  FLinearColor_u_0 local_b70;
  undefined4 local_b60;
  undefined1 local_b5c;
  undefined1 local_b58 [24];
  FDestructionSentinel local_b40;
  FDelegateAllocation *local_b28;
  TSharedRef<SWidget_const_,1> local_b20;
  longlong local_b10;
  TReferenceControllerBase<1> *pTStack_b08;
  SWidget *local_b00;
  TReferenceControllerBase<1> *pTStack_af8;
  SComboButton *local_af0;
  TReferenceControllerBase<1> *pTStack_ae8;
  SButton *local_ae0;
  TReferenceControllerBase<1> *pTStack_ad8;
  FReadAccessScope local_ad0;
  FReadAccessScope local_ab8;
  FReadAccessScope local_aa0;
  FReadAccessScope local_a88;
  TAttribute<FMargin> local_a70;
  TAttribute<FText> local_a40;
  TAttribute<FText> local_a10;
  TAttribute<FMargin> local_9e0;
  TAttribute<FMargin> local_9b0;
  FArguments local_980;
  FArguments local_648;
  TPairInitializer<EActionButtonType_const_&,FName_const_&> local_108;
  EActionButtonType *local_f8;
  FName *local_f0;
  EActionButtonType *local_e8;
  FName *local_e0;
  EActionButtonType *local_d8;
  FName *local_d0;
  EActionButtonType *local_c8;
  FName *local_c0;
  EActionButtonType *local_b8;
  FName *local_b0;
  TPairInitializer<FName_const_&,EActionButtonType_const_&> local_a8;
  FName *local_98;
  undefined1 *local_90;
  FName *local_88;
  undefined1 *local_80;
  FName *local_78;
  undefined1 *local_70;
  FName *local_68;
  uint *local_60;
  FName *local_58;
  undefined1 *local_50;
  TPairInitializer<FName_const_&,EActionButtonType_const_&> local_48;
  
  local_48.Key = (FName *)(__security_cookie.value ^ (ulonglong)auStackY_1058);
  FVar42.ComparisonIndex.Value = 0;
  FVar42.Number = 0;
  local_1018 = 0;
  if ((param_1->_ActionButtonType).bIsSet == false) {
    local_fa8 = Default;
  }
  else {
    pEVar23 = TAttribute<enum_EActionButtonType>::Get(&param_1->_ActionButtonType);
    local_fa8 = *pEVar23;
  }
  this_01 = &this->ActionButtonType;
  this_01->Value = local_fa8;
  local_fa7 = 1;
  local_f90 = 0;
  local_fa0 = (undefined1  [8])0x0;
  FStack_f98.Data = (FScriptContainerElement *)0x0;
  (this->ActionButtonType).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ActionButtonType).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fa0,
             (FWriteAccessScope *)&local_c30);
  if (((int)local_f90 != 0) && (FStack_f98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f98,0,0,0x10);
    local_f90 = local_f90 & 0xffffffff00000000;
  }
  if (local_c30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c30.Accessor,&local_c30);
  }
  if (FStack_f98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fa0);
  pFVar24 = param_1->_ActionButtonStyle;
  if (pFVar24 == (FActionButtonStyle *)0x0) {
    pEVar23 = TAttribute<enum_EActionButtonType>::Get(this_01);
    EVar2 = *pEVar23;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      local_1027[0] = Default;
      ::FName::FName(&local_e78,L"ActionButton");
      local_108.Key = local_1027;
      local_1027[1] = 1;
      local_108.Value = &local_e78;
      ::FName::FName(&local_e68,L"SimpleComboButton");
      local_f8 = local_1027 + 1;
      local_1027[2] = 2;
      local_f0 = &local_e68;
      ::FName::FName(&local_e60,L"PrimaryButton");
      local_e8 = local_1027 + 2;
      local_1027[3] = 3;
      local_e0 = &local_e60;
      ::FName::FName(&local_e58,L"PositiveActionButton");
      local_d8 = local_1027 + 3;
      local_1027[4] = 4;
      local_d0 = &local_e58;
      ::FName::FName(&local_dd0,L"NegativeActionButton.Warning");
      local_c8 = local_1027 + 4;
      local_1027[5] = 5;
      local_c0 = &local_dd0;
      ::FName::FName(&local_e50,L"NegativeActionButton.Error");
      local_b8 = local_1027 + 5;
      local_b0 = &local_e50;
      local_d08._First = &local_108;
      local_d08._Last = (TPairInitializer<EActionButtonType_const_&,FName_const_&> *)&local_a8;
      TMap<enum_EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>_>
      ::
      TMap<enum_EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>_>
                (&`class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
                  ::__l2::Lookup,&local_d08);
      atexit(`UE::ToolWidgets::Private::ActionButtonTypeToStyleName'::__l2::
             _dynamic_atexit_destructor_for__Lookup__);
      _Init_thread_footer(&`class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (`class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
        ::__l2::Lookup._8_4_ !=
        `class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
        ::__l2::Lookup._52_4_) {
      lVar39 = 0x155061a28;
      if (`class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
          ::__l2::Lookup._64_8_ != 0) {
        lVar39 = `class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
                 ::__l2::Lookup._64_8_;
      }
      iVar4 = *(int *)(lVar39 + ((ulonglong)
                                 (`class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
                                  ::__l2::Lookup._72_4_ - 1) & (ulonglong)EVar2) * 4);
      while (iVar4 != -1) {
        lVar39 = `class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
                 ::__l2::Lookup._0_8_ + (longlong)iVar4 * 0x14;
        if (*(EActionButtonType *)
             (`class_FName___cdecl_UE::ToolWidgets::Private::ActionButtonTypeToStyleName(EActionButtonType)'
              ::__l2::Lookup._0_8_ + (longlong)iVar4 * 0x14) == EVar2) {
          FVar43 = (FName)(lVar39 + 4);
          if (lVar39 == 0) {
            FVar43 = FVar42;
          }
          if (FVar43 != (FName)0x0) {
            FVar42 = *(FName *)FVar43;
            goto LAB_142d78e8f;
          }
          break;
        }
        iVar4 = *(int *)(lVar39 + 0xc);
      }
    }
    local_f58 = 0;
LAB_142d78e8f:
    if ((FVar42 == (FName)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StyleName != NAME_None",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SActionButton.cpp"
                            ,0x2b,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_02 = UE::ToolWidgets::FToolWidgetsStyle::Get();
    pFVar24 = ISlateStyle::GetWidgetStyle<FActionButtonStyle>
                        ((ISlateStyle *)this_02,FVar42,(char *)0x0,(FActionButtonStyle *)0x0);
    this->ActionButtonStyle = pFVar24;
  }
  else {
    this->ActionButtonStyle = pFVar24;
    if ((param_1->_ActionButtonType).bIsSet == false) {
      local_ea8 = pFVar24->ActionButtonType;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'
                               ::__l2::_thread_safe_static_guard_0__),
         `enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&local_e48,L"Default");
        local_a8.Key = &local_e48;
        local_1021.ComparisonIndex.Value._0_1_ = 0;
        local_a8.Value = (EActionButtonType *)&local_1021;
        ::FName::FName(&local_e40,L"Simple");
        local_98 = &local_e40;
        local_1021.ComparisonIndex.Value._1_1_ = 1;
        local_90 = (undefined1 *)((longlong)&local_1021.ComparisonIndex.Value + 1);
        ::FName::FName(&local_e38,L"Primary");
        local_88 = &local_e38;
        local_1021.ComparisonIndex.Value._2_1_ = 2;
        local_80 = (undefined1 *)((longlong)&local_1021.ComparisonIndex.Value + 2);
        ::FName::FName(&local_e30,L"Positive");
        local_78 = &local_e30;
        local_1021.ComparisonIndex.Value._3_1_ = 3;
        local_70 = (undefined1 *)((longlong)&local_1021.ComparisonIndex.Value + 3);
        ::FName::FName(&local_dd8,L"Warning");
        local_68 = &local_dd8;
        local_1021.Number._0_1_ = 4;
        local_60 = &local_1021.Number;
        ::FName::FName(&local_e70,L"Error");
        local_58 = &local_e70;
        local_1021.Number._1_1_ = 5;
        local_50 = (undefined1 *)((longlong)&local_1021.Number + 1);
        local_cc8._First = &local_a8;
        local_cc8._Last = &local_48;
        TMap<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
        ::
        TMap<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
                  (&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'::
                    __l2::Lookup,&local_cc8);
        atexit(`UE::ToolWidgets::Private::NameToEnum'::__l2::
               _dynamic_atexit_destructor_for__Lookup__);
        _Init_thread_footer(&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pEVar23 = TMapBase<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
                ::Find(&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'
                        ::__l2::Lookup,&local_ea8);
      local_f88 = Default;
      if (pEVar23 != (EActionButtonType *)0x0) {
        local_f88 = *pEVar23;
      }
      local_f87 = 1;
      local_f70 = 0;
      local_f80 = (undefined1  [8])0x0;
      FStack_f78.Data = (FScriptContainerElement *)0x0;
      this_01->Value = local_f88;
      (this->ActionButtonType).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ActionButtonType).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f80);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f80,
                 (FWriteAccessScope *)&local_c18);
      if (((int)local_f70 != 0) && (FStack_f78.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_f78.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f78,0,0,0x10);
        local_f70 = local_f70 & 0xffffffff00000000;
      }
      if (local_c18.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c18.Accessor,&local_c18);
      }
      if (FStack_f78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_f78.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_f80);
    }
  }
  ppFVar47 = &this->ActionButtonStyle;
  pFVar25 = param_1->_ButtonStyle;
  if (pFVar25 == (FButtonStyle *)0x0) {
    pFVar25 = &(*ppFVar47)->ButtonStyle;
  }
  this->ButtonStyle = pFVar25;
  pFVar25 = param_1->_IconButtonStyle;
  if (pFVar25 == (FButtonStyle *)0x0) {
    lVar39 = 0xd30;
    if (((*ppFVar47)->IconButtonStyle).bIsSet == false) {
      lVar39 = 0x10;
    }
    pFVar25 = (FButtonStyle *)((longlong)&(*ppFVar47)->_padding_ + lVar39);
  }
  pFVar44 = (FName *)&this->IconButtonStyle;
  *pFVar44 = (FName)pFVar25;
  pFVar26 = param_1->_ComboButtonStyle;
  if (pFVar26 == (FComboButtonStyle *)0x0) {
    pFVar26 = &(*ppFVar47)->ComboButtonStyle;
  }
  this->ComboButtonStyle = pFVar26;
  pFVar27 = param_1->_TextBlockStyle;
  if (pFVar27 == (FTextBlockStyle *)0x0) {
    pFVar27 = &(*ppFVar47)->TextBlockStyle;
  }
  this->TextBlockStyle = pFVar27;
  if ((param_1->_HorizontalContentAlignment).bIsSet == false) {
    local_1018 = (EHorizontalAlignment)((*ppFVar47)->HorizontalContentAlignment).Value;
  }
  else {
    local_1018 = (param_1->_HorizontalContentAlignment).TypedValue;
  }
  if ((param_1->_HasDownArrow).bIsSet == false) {
    bVar20 = (*ppFVar47)->bHasDownArrow;
  }
  else {
    bVar20 = (param_1->_HasDownArrow).TypedValue;
  }
  pTVar41 = &param_1->_Icon;
  bVar3 = (param_1->_Icon).bIsSet;
  if (bVar3 == false) {
    bVar48 = ((*ppFVar47)->IconBrush).bIsSet == false;
    if (bVar48) {
      local_c70 = (FSlateBrush *)0x0;
      pTVar41 = (TAttribute<FSlateBrush_const_*> *)local_e28;
      local_e28._0_8_ = (FSlateBrush *)0x0;
      local_e08 = 0;
      local_e28[8] = false;
      local_e18 = (undefined1  [8])0x0;
      pvStack_e10 = (void *)0x0;
    }
    else {
      local_c70 = TOptional<FSlateBrush>::GetValue(&(*ppFVar47)->IconBrush);
      local_e00._0_8_ = local_c70;
      local_de0 = 0;
      pTVar41 = (TAttribute<FSlateBrush_const_*> *)local_e00;
      local_e00[8] = true;
      local_df0 = (undefined1  [8])0x0;
      pvStack_de8 = (void *)0x0;
    }
    bVar13 = !bVar48;
    bVar11 = true;
    bVar10 = false;
    ppFVar46 = &local_c70;
    local_c68 = pTVar41->bIsSet;
    this_03 = (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_c60;
  }
  else {
    local_c98 = pTVar41->Value;
    ppFVar46 = &local_c98;
    bVar13 = false;
    bVar48 = false;
    bVar11 = false;
    bVar10 = true;
    this_03 = (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
              (local_c90 + 8);
    local_c90[0] = bVar3;
  }
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>(this_03,&pTVar41->Getter);
  local_ff0._0_8_ = *ppFVar46;
  local_ff0[8] = *(char *)(ppFVar46 + 1);
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_fe0,
             (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
             (ppFVar46 + 2));
  if (bVar11) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c60);
    if ((void *)local_c60._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c60._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c60);
  }
  if (bVar48) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e18);
    if (pvStack_e10 != (void *)0x0) {
      FMemory::Free(pvStack_e10);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e18);
  }
  if (bVar13) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_df0);
    if (pvStack_de8 != (void *)0x0) {
      FMemory::Free(pvStack_de8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_df0);
  }
  if (bVar10) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_c90 + 8));
    if ((void *)local_c88._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c88._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_c90 + 8));
  }
  bVar14 = false;
  bVar13 = false;
  bVar11 = false;
  bVar10 = false;
  bVar48 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fe0,&local_ad0);
  if (((local_fd0 == 0) || ((longlong *)local_fe0._8_8_ == (longlong *)0x0)) ||
     (cVar21 = (**(code **)(*(longlong *)local_fe0._8_8_ + 0x38))(), cVar21 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_ad0);
    if ((bool)local_ff0[8] != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fe0,&local_ab8);
      if (((local_fd0 == 0) || ((longlong *)local_fe0._8_8_ == (longlong *)0x0)) ||
         (cVar21 = (**(code **)(*(longlong *)local_fe0._8_8_ + 0x38))(), cVar21 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_ab8);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_ab8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fe0,&local_a88);
        plVar40 = (longlong *)0x0;
        if (local_fd0 != 0) {
          plVar40 = (longlong *)local_fe0._8_8_;
        }
        pFVar28 = (FSlateBrush *)(**(code **)(*plVar40 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_a88);
        local_ff0._0_8_ = pFVar28;
      }
      if ((FSlateBrush *)local_ff0._0_8_ != (FSlateBrush *)0x0) goto LAB_142d79356;
    }
    pFVar44 = (FName *)&this->ButtonStyle;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_ad0);
  }
LAB_142d79356:
  FVar42 = *pFVar44;
  local_fc8 = FVar42;
  if ((param_1->_IconColorAndOpacity).bIsSet == false) {
    if (((*ppFVar47)->IconColorAndOpacity).bIsSet == false) {
      local_1008 = (undefined1  [8])0x0;
      local_1000.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1000.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1008,
                 (FWriteAccessScope *)&local_b40);
      local_b28 = &local_1000;
      puVar30 = UE::Core::Private::DelegateAllocate(0x38,&local_1000);
      FVar45 = local_f50;
      if (puVar30 != (undefined8 *)0x0) {
        local_f48 = (SWidget *)_vcall__584__flat______;
        pTStack_f40 = (TReferenceControllerBase<1> *)
                      ((ulonglong)local_d20.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
        pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_b20);
        FVar45 = (FMemScope)(pTVar31->SharedReferenceCount).ReferenceController;
        local_ea0 = pTVar31->Object;
        if (FVar45 != (FMemScope)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar45 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar45 + 8) + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)((longlong)FVar45 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar45 + 8) + 1);
          UNLOCK();
        }
        bVar11 = true;
        bVar10 = true;
        bVar48 = true;
        *puVar30 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar32 = FDelegateHandle::GenerateNewID();
        puVar30[2] = uVar32;
        *puVar30 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSActionButton___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar30[3] = local_ea0;
        *(FMemScope *)(puVar30 + 4) = FVar45;
        if (FVar45 != (FMemScope)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar45 + 0xc) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar45 + 0xc) + 1);
          UNLOCK();
        }
        puVar30[5] = local_f48;
        puVar30[6] = pTStack_f40;
      }
      if (bVar48) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar45);
      }
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar45);
      }
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b20.SharedReferenceCount.ReferenceController);
      }
      bVar14 = false;
      bVar13 = true;
      if (local_b40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b40.Accessor,&local_b40);
      }
      local_b90 = 0;
      local_ba0 = ___xmm_3f8000003f800000000000003f800000;
      uStack_b98 = _UNK_15090c6d8;
      local_b8c = 1;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_b88,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1008);
      puVar30 = &local_ba0;
      FVar42 = local_fc8;
    }
    else {
      bVar14 = true;
      pFVar29 = TOptional<FSlateColor>::GetValue(&(*ppFVar47)->IconColorAndOpacity);
      puVar30 = &local_d98;
      local_d98 = *(undefined8 *)&(pFVar29->SpecifiedColor).field0_0x0;
      uStack_d90 = *(undefined8 *)((longlong)&(pFVar29->SpecifiedColor).field0_0x0 + 8);
      local_d88._0_1_ = pFVar29->ColorUseRule;
      local_d88._1_1_ = pFVar29->ColorTableId;
      local_d88._2_2_ = *(undefined2 *)&pFVar29->field_0x12;
      local_d70 = 0;
      local_d84[0] = 1;
      local_d80 = (undefined1  [8])0x0;
      pvStack_d78 = (void *)0x0;
    }
    bVar48 = false;
    local_bd0 = *puVar30;
    uStack_bc8 = puVar30[1];
    local_bc0 = *(undefined4 *)(puVar30 + 2);
    bVar3 = true;
    local_bbc = *(undefined1 *)((longlong)puVar30 + 0x14);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bb8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar30 + 3));
    puVar30 = &local_bd0;
  }
  else {
    bVar48 = true;
    pFVar29 = TAttribute<FSlateColor>::Get(&param_1->_IconColorAndOpacity);
    puVar30 = &local_f08;
    local_f08 = *(undefined8 *)&(pFVar29->SpecifiedColor).field0_0x0;
    uStack_f00 = *(undefined8 *)((longlong)&(pFVar29->SpecifiedColor).field0_0x0 + 8);
    local_ef8._0_1_ = pFVar29->ColorUseRule;
    local_ef8._1_1_ = pFVar29->ColorTableId;
    local_ef8._2_2_ = *(undefined2 *)&pFVar29->field_0x12;
    local_ee0 = 0;
    local_ef4[0] = 1;
    local_ef0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_ee8.Data = (FScriptContainerElement *)0x0;
  }
  local_b60 = *(undefined4 *)(puVar30 + 2);
  local_b70._0_8_ = *puVar30;
  local_b70._8_8_ = puVar30[1];
  local_b5c = *(undefined1 *)((longlong)puVar30 + 0x14);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b58,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar30 + 3));
  if (bVar3) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bb8);
    if ((void *)local_bb8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_bb8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_bb8);
  }
  if (bVar13) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1008,
               (FWriteAccessScope *)&local_c00);
    if ((local_1000.DelegateSize != 0) &&
       (local_1000.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1000.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1000,0,0,0x10);
      local_1000.DelegateSize = 0;
    }
    if (local_c00.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c00.Accessor,&local_c00);
    }
    if (local_1000.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1000.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1008);
  }
  if (bVar14) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d80);
    if (pvStack_d78 != (void *)0x0) {
      FMemory::Free(pvStack_d78);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d80);
  }
  if (bVar48) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_ef0,(FWriteAccessScope *)&local_c48);
    if (((int)local_ee0 != 0) && (FStack_ee8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_ee8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ee8,0,0,0x10);
      local_ee0 = local_ee0 & 0xffffffff00000000;
    }
    if (local_c48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c48.Accessor,&local_c48);
    }
    if (FStack_ee8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_ee8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_ef0.AccessDetector);
  }
  local_d68._0_8_ = (param_1->_Text).Value.TextData.Reference;
  if ((ITextData *)local_d68._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d68._0_8_ + 8))(local_d68._0_8_,local_e90);
  }
  local_d68._8_4_ = (param_1->_Text).Value.Flags;
  local_d68[0x10] = (param_1->_Text).bIsSet;
  local_d50 = (undefined1  [8])0x0;
  pvStack_d48 = (void *)0x0;
  local_d40 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d50,
             &(param_1->_Text).Getter);
  UE::ToolWidgets::Private::ActionButton::MakeButtonContent
            (&local_f68,(TAttribute<FSlateBrush_const_*> *)local_ff0,
             (TAttribute<FSlateColor> *)&local_b70._s_0,(TAttribute<FText> *)local_d68,
             this->TextBlockStyle);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnClicked,
             &local_aa0);
  if ((*(int *)&(param_1->_OnClicked).field_0x10 == 0) ||
     (plVar40 = *(longlong **)&(param_1->_OnClicked).field_0x8, plVar40 == (longlong *)0x0)) {
LAB_142d7983b:
    bVar3 = false;
  }
  else {
    cVar21 = (**(code **)(*plVar40 + 0x38))();
    bVar3 = true;
    if (cVar21 == '\0') goto LAB_142d7983b;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_aa0);
  bVar48 = (param_1->_ButtonContentPadding).bIsSet;
  if (bVar3) {
    if (bVar48 == false) {
      if ((this->ActionButtonStyle->ButtonContentPadding).bIsSet == false) {
        pFVar33 = &DefaultButtonContentPadding;
      }
      else {
        pFVar33 = TOptional<FMargin>::GetValue(&this->ActionButtonStyle->ButtonContentPadding);
      }
    }
    else {
      pFVar33 = TAttribute<FMargin>::Get(&param_1->_ButtonContentPadding);
    }
    local_dc8._0_4_ = pFVar33->Left;
    local_dc8._4_4_ = pFVar33->Top;
    uStack_dc0._0_4_ = pFVar33->Right;
    uStack_dc0._4_4_ = pFVar33->Bottom;
    local_db8 = 1;
    local_da0 = 0;
    local_db0 = (undefined1  [8])0x0;
    pvStack_da8 = (void *)0x0;
    pFVar36 = SButton::FArguments::FArguments(&local_648);
    local_ce8 = (bool)local_db8;
    local_cf8 = local_dc8;
    uStack_cf0 = uStack_dc0;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_ce0,
               (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_db0);
    (pFVar36->_ContentPadding).Value.Left = (float)(undefined4)local_cf8;
    (pFVar36->_ContentPadding).Value.Top = (float)local_cf8._4_4_;
    (pFVar36->_ContentPadding).Value.Right = (float)(undefined4)uStack_cf0;
    (pFVar36->_ContentPadding).Value.Bottom = (float)uStack_cf0._4_4_;
    (pFVar36->_ContentPadding).bIsSet = local_ce8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_ContentPadding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ce0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ce0);
    if ((void *)local_ce0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_ce0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ce0);
    pFVar36->_ButtonStyle = (FButtonStyle *)FVar42;
    local_cb8.Value = SUB81(param_1->_padding_,0);
    local_cb8.bIsSet = *(bool *)((longlong)&param_1->_padding_ + 1);
    local_cb8.Getter._0_8_ = 0;
    local_cb8.Getter._8_8_ = 0;
    local_cb8.Getter._16_4_ = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_cb8.Getter,
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
    pFVar36 = TSlateBaseNamedArgs<SButton>::IsEnabled
                        ((TSlateBaseNamedArgs<SButton> *)pFVar36,&local_cb8);
    pTVar35 = TAttribute<FText>::TAttribute<FText>(&local_a10,(TAttribute<FText> *)param_1);
    pFVar36 = TSlateBaseNamedArgs<SButton>::ToolTipText
                        ((TSlateBaseNamedArgs<SButton> *)pFVar36,pTVar35);
    pFVar36->_HAlign = local_1018;
    pFVar36->_VAlign = VAlign_Center;
    pTVar37 = UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride
                        (&local_9e0,(TAttribute<FSlateBrush_const_*> *)local_ff0,
                         (FMargin *)((longlong)FVar42 + 800),
                         &this->ActionButtonStyle->IconNormalPadding);
    fVar15 = (pTVar37->Value).Top;
    fVar16 = (pTVar37->Value).Right;
    fVar17 = (pTVar37->Value).Bottom;
    this_00 = &pTVar37->Getter;
    (pFVar36->_NormalPaddingOverride).Value.Left = (pTVar37->Value).Left;
    (pFVar36->_NormalPaddingOverride).Value.Top = fVar15;
    (pFVar36->_NormalPaddingOverride).Value.Right = fVar16;
    (pFVar36->_NormalPaddingOverride).Value.Bottom = fVar17;
    (pFVar36->_NormalPaddingOverride).bIsSet = pTVar37->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar36->_NormalPaddingOverride).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    pvVar7 = *(void **)&(pTVar37->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    pTVar37 = UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride
                        (&local_9b0,(TAttribute<FSlateBrush_const_*> *)local_ff0,
                         (FMargin *)((longlong)FVar42 + 0x330),
                         &this->ActionButtonStyle->IconPressedPadding);
    pFVar36 = SButton::FArguments::PressedPaddingOverride(pFVar36,pTVar37);
    TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
              (&pFVar36->_OnClicked,&param_1->_OnClicked);
    if (local_f68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b00 = (pFVar36->_Content).Widget.Object;
    pTStack_af8 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar36->_Content).Widget.Object = local_f68.Object;
    (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController =
         local_f68.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_af8)
    ;
    FLLMScope::FLLMScope(&local_100c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_e80 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_f50,&local_e80,true);
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
              (&local_d38,"SButton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SActionButton.cpp"
               ,0x8e,local_1013);
    FMemScope::~FMemScope(&local_f50);
    FLLMScope::~FLLMScope(&local_100c);
    if (local_d38._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_ae0 = (this->Button).Object;
    pTStack_ad8 = (this->Button).SharedReferenceCount.ReferenceController;
    (this->Button).Object = local_d38._Widget.Object;
    (this->Button).SharedReferenceCount.ReferenceController =
         local_d38._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_ad8)
    ;
    pTVar38 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_d38,&local_d20,pFVar36);
    plVar40 = &this->_padding_;
    pTVar5 = (pTVar38->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar38->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar40);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar40);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar8;
    this->_padding_ = (longlong)pTVar5;
    local_eb8 = pSVar8;
    pTStack_eb0 = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_d20.SharedReferenceCount.ReferenceController._4_4_,
                        local_d20.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d38._Widget.SharedReferenceCount.ReferenceController);
    SButton::FArguments::~FArguments(&local_648);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_db0);
    if (pvStack_da8 != (void *)0x0) {
      FMemory::Free(pvStack_da8);
    }
    this_04 = (FMRSWRecursiveAccessDetector *)local_db0;
    goto LAB_142d7a142;
  }
  if (bVar48 == false) {
    pFVar24 = *ppFVar47;
    if ((pFVar24->ComboButtonContentPadding).bIsSet == false) {
      pFVar33 = &(pFVar24->ComboButtonStyle).ContentPadding;
    }
    else {
      pFVar33 = TOptional<FMargin>::GetValue(&pFVar24->ComboButtonContentPadding);
    }
  }
  else {
    pFVar33 = TAttribute<FMargin>::Get(&param_1->_ButtonContentPadding);
  }
  local_f38.Left = pFVar33->Left;
  local_f38.Top = pFVar33->Top;
  local_f38.Right = pFVar33->Right;
  local_f38.Bottom = pFVar33->Bottom;
  local_f28 = 1;
  local_f10 = 0;
  local_f20 = (undefined1  [8])0x0;
  FStack_f18.Data = (FScriptContainerElement *)0x0;
  pFVar34 = SComboButton::FArguments::FArguments(&local_980);
  pFVar34->_HasDownArrow = bVar20;
  local_a70.bIsSet = (bool)local_f28;
  local_a70.Value.Left = local_f38.Left;
  local_a70.Value.Top = local_f38.Top;
  local_a70.Value.Right = local_f38.Right;
  local_a70.Value.Bottom = local_f38.Bottom;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_a70.Getter,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_f20);
  pFVar34 = SComboButton::FArguments::ContentPadding(pFVar34,&local_a70);
  pFVar34->_ButtonStyle = (FButtonStyle *)FVar42;
  pFVar34->_ComboButtonStyle = this->ComboButtonStyle;
  local_ed8 = (undefined1)param_1->_padding_;
  local_ed7 = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  local_ed0 = (undefined1  [8])0x0;
  pvStack_ec8 = (void *)0x0;
  local_ec0 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_ed0,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  *(undefined1 *)&pFVar34->_padding_ = local_ed8;
  *(undefined1 *)((longlong)&pFVar34->_padding_ + 1) = local_ed7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar34->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ed0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ed0);
  if (pvStack_ec8 != (void *)0x0) {
    FMemory::Free(pvStack_ec8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ed0);
  pTVar35 = TAttribute<FText>::TAttribute<FText>(&local_a40,(TAttribute<FText> *)param_1);
  pFVar34 = TSlateBaseNamedArgs<SComboButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SComboButton> *)pFVar34,pTVar35);
  pFVar34->_HAlign = local_1018;
  pFVar34->_VAlign = VAlign_Center;
  if (local_f68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f48 = (pFVar34->_ButtonContent).Widget.Object;
  pTStack_f40 = (pFVar34->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar34->_ButtonContent).Widget.Object = local_f68.Object;
  (pFVar34->_ButtonContent).Widget.SharedReferenceCount.ReferenceController =
       local_f68.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f40);
  pTVar5 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_MenuContent).Widget.Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ea0 = (pFVar34->_MenuContent).Widget.Object;
  pTStack_e98 = (pFVar34->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar34->_MenuContent).Widget.Object = pSVar6;
  (pFVar34->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e98);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar34->_OnGetMenuContent,&param_1->_OnGetMenuContent);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&pFVar34->_OnMenuOpenChanged,&param_1->_OnMenuOpenChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar34->_OnComboBoxOpened,&param_1->_OnComboBoxOpened);
  FLLMScope::FLLMScope(&local_1010,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_fc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e88,&local_fc8,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_fc0,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SActionButton.cpp"
             ,0x6f,&local_1014);
  FMemScope::~FMemScope(&local_e88);
  FLLMScope::~FLLMScope(&local_1010);
  if (local_fc0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_fc0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_fc0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_af0 = (this->ComboButton).Object;
  pTStack_ae8 = (this->ComboButton).SharedReferenceCount.ReferenceController;
  (this->ComboButton).Object = local_fc0._Widget.Object;
  (this->ComboButton).SharedReferenceCount.ReferenceController =
       local_fc0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_ae8);
  pSVar18 = local_fc0._Widget.Object;
  if ((local_fc0._Widget.Object == (SComboButton *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_fc0._Widget.Object,(FSlateBaseNamedArgs *)pFVar34);
  SComboButton::Construct(local_fc0._Widget.Object,pFVar34);
  if ((local_fc0._Widget.Object == (SComboButton *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((local_fc0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar21 = (**(code **)((local_fc0._Widget.Object)->_padding_ + 0x228))(local_fc0._Widget.Object);
    bVar22 = 0;
    if (cVar21 != '\0') goto LAB_142d79bc6;
  }
  else {
LAB_142d79bc6:
    bVar22 = 0x20;
  }
  *(byte *)&(local_fc0._Widget.Object)->_padding_ =
       (byte)(local_fc0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_fc0._Widget.Object)->_padding_ =
       (byte)(local_fc0._Widget.Object)->_padding_ | bVar22;
  if ((local_fc0._Widget.Object == (SComboButton *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_fc0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_fc0._Widget.Object == (SComboButton *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar19.ReferenceController = local_fc0._Widget.SharedReferenceCount.ReferenceController;
  local_fc0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_fc0._Widget.Object = (SComboButton *)0x0;
  if ((pSVar18 == (SComboButton *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar40 = &this->_padding_;
  if (FVar19.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar40);
  }
  else {
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar40);
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b10 = this->_padding_;
  pTStack_b08 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar18;
  this->_padding_ = (longlong)FVar19.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b08);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0._Widget.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_980);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f20,
             (FWriteAccessScope *)&local_be8);
  if (((int)local_f10 != 0) && (FStack_f18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f18,0,0,0x10);
    local_f10 = local_f10 & 0xffffffff00000000;
  }
  if (local_be8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_be8.Accessor,&local_be8);
  }
  if (FStack_f18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f18.Data);
  }
  this_04 = (FMRSWRecursiveAccessDetector *)local_f20;
LAB_142d7a142:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_04);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d50);
  if (pvStack_d48 != (void *)0x0) {
    FMemory::Free(pvStack_d48);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d50);
  if ((ITextData *)local_d68._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d68._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b58);
  if ((void *)local_b58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fe0);
  if ((longlong *)local_fe0._8_8_ != (longlong *)0x0) {
    FMemory::Free((void *)local_fe0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fe0);
  return;
}

// GetIconColorAndOpacity @ 142dacb10

FSlateColor * __thiscall
SActionButton::GetIconColorAndOpacity(SActionButton *this,FSlateColor *__return_storage_ptr__)

{
  EStyleColor EVar1;
  undefined2 uVar2;
  EActionButtonType *pEVar3;
  EActionButtonType EVar4;
  
  if ((this->ActionButtonType).bIsSet == false) {
    EVar4 = Default;
  }
  else {
    pEVar3 = TAttribute<enum_EActionButtonType>::Get(&this->ActionButtonType);
    EVar4 = *pEVar3;
  }
  if ((EVar4 != Default) && (EVar4 != Simple)) {
    if (EVar4 == Positive) {
      (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FStyleColors::AccentGreen.SpecifiedColor.field0_0x0;
      EVar1 = FStyleColors::AccentGreen.ColorTableId;
      uVar2 = FStyleColors::AccentGreen._18_2_;
      __return_storage_ptr__->ColorUseRule = FStyleColors::AccentGreen.ColorUseRule;
      __return_storage_ptr__->ColorTableId = EVar1;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar2;
      return __return_storage_ptr__;
    }
    if (EVar4 == Warning) {
      (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FStyleColors::Warning.SpecifiedColor.field0_0x0;
      EVar1 = FStyleColors::Warning.ColorTableId;
      uVar2 = FStyleColors::Warning._18_2_;
      __return_storage_ptr__->ColorUseRule = FStyleColors::Warning.ColorUseRule;
      __return_storage_ptr__->ColorTableId = EVar1;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar2;
      return __return_storage_ptr__;
    }
    if (EVar4 == Error) {
      (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FStyleColors::Error.SpecifiedColor.field0_0x0;
      EVar1 = FStyleColors::Error.ColorTableId;
      uVar2 = FStyleColors::Error._18_2_;
      __return_storage_ptr__->ColorUseRule = FStyleColors::Error.ColorUseRule;
      __return_storage_ptr__->ColorTableId = EVar1;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar2;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// SetIsMenuOpen @ 142dd9130

void __thiscall SActionButton::SetIsMenuOpen(SActionButton *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComboButton.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SActionButton.cpp"
                       ,0xa7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x000142dd91c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x250))((longlong *)this->_padding_,param_1,param_2,0)
  ;
  return;
}

// SetMenuContentWidgetToFocus @ 142dd9360

void __thiscall
SActionButton::SetMenuContentWidgetToFocus(SActionButton *this,TWeakPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SComboButton *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TWeakPtr<SWidget,1> local_18;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComboButton.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SActionButton.cpp"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (SComboButton *)this->_padding_;
  local_18.WeakReferenceCount.ReferenceController =
       (param_1->WeakReferenceCount).ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus(this_00,&local_18);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
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
  return;
}

