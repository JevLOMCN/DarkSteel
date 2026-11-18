// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// operator() @ 142d69b60

FSlateBrush * __thiscall
`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_1>::operator()(void *this)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName local_res8;
  FName local_res10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)this + 0x300));
  if (*pEVar1 == Warning) {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "RoundedWarning";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &local_res8;
  }
  else {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "RoundedError";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &local_res10;
  }
  pFVar3 = ::FName::FName(pFVar3,pcVar5);
  pFVar4 = (FSlateBrush *)(*pcVar6)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// operator() @ 142d6ad40

FSlateBrush * __thiscall
`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_2>::operator()(void *this)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName local_res8;
  FName local_res10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)this + 0x300));
  if (*pEVar1 == Warning) {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "Icons.WarningWithColor";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &local_res8;
  }
  else {
    pIVar2 = FAppStyle::Get();
    pcVar5 = "Icons.ErrorWithColor";
    pcVar6 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = &local_res10;
  }
  pFVar3 = ::FName::FName(pFVar3,pcVar5);
  pFVar4 = (FSlateBrush *)(*pcVar6)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// Construct @ 142d848f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SRichTextWarningOrErrorBox::Construct(SRichTextWarningOrErrorBox *this,FArguments *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  FArguments *pFVar9;
  ISlateStyle *pIVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FArguments *pFVar13;
  FSlot *pFVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SImage,1> *pTVar17;
  FArguments *pFVar18;
  TSharedRef<SRichTextBlock,1> *pTVar19;
  FName FVar20;
  FSizeParam *pFVar21;
  TSharedRef<SHorizontalBox,1> *pTVar22;
  undefined ***pppuVar23;
  FSlotArguments *pFVar24;
  undefined1 auStackY_1298 [32];
  FDestructionSentinel local_1268;
  FSlotArguments *local_1250;
  T0RequiredArgs local_1248;
  T0RequiredArgs local_1247;
  T0RequiredArgs local_1246 [6];
  FName local_1240;
  undefined2 local_1238;
  undefined1 local_1230 [8];
  ForAnyElementType FStack_1228;
  ulonglong local_1220;
  SImage *local_1218;
  FSharedReferencer<1> local_1210;
  FDestructionSentinel local_1208;
  undefined1 *local_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined4 local_11d8;
  undefined1 local_11d4;
  undefined1 local_11d0 [8];
  ForAnyElementType FStack_11c8;
  ulonglong local_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  bool local_11a8;
  undefined3 uStack_11a7;
  undefined1 local_11a4;
  undefined1 local_11a0 [8];
  ForAnyElementType FStack_1198;
  ulonglong local_1190;
  FText local_1188;
  bool local_1178;
  undefined1 local_1170 [8];
  ForAnyElementType FStack_1168;
  int local_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined1 local_1148;
  undefined1 local_1140 [8];
  ForAnyElementType FStack_1138;
  ulonglong local_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined1 local_1118;
  undefined1 local_1110 [8];
  ForAnyElementType FStack_1108;
  ulonglong local_1100;
  double local_10f8;
  double dStack_10f0;
  undefined1 local_10e8;
  undefined1 local_10e0;
  undefined1 local_10d8 [8];
  ForAnyElementType FStack_10d0;
  ulonglong local_10c8;
  SRichTextWarningOrErrorBox *local_10c0;
  FName local_10b8;
  TSharedRef<SHorizontalBox,1> local_10b0;
  TSharedRef<SRichTextBlock,1> local_10a0;
  TSharedRef<SImage,1> local_1090;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1080;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_1068;
  undefined1 local_1050 [16];
  undefined1 local_1040 [32];
  undefined1 local_1020 [24];
  undefined8 *local_1008;
  SWidget *local_1000;
  FSharedReferencer<1> local_ff8 [4];
  undefined1 local_fd8 [24];
  undefined4 local_fc0;
  undefined1 local_fbc;
  undefined4 local_fb8;
  undefined1 local_fb4;
  FSlotArgumentsMixin local_fb0;
  undefined8 *local_f20;
  SRichTextBlock *local_f18;
  FSharedReferencer<1> local_f10 [4];
  undefined1 local_ef0 [32];
  undefined4 local_ed0;
  undefined1 local_ecc;
  FSlotArgumentsMixin local_ec8;
  undefined8 *local_e38 [2];
  TReferenceControllerBase<1> *local_e28;
  undefined1 local_e08 [24];
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  FSlotArgumentsMixin local_de0;
  undefined1 local_d50 [24];
  FArguments local_d38;
  FArguments local_b30;
  FArguments local_888;
  FArguments local_4a8;
  code *local_a8;
  undefined **local_98;
  SRichTextWarningOrErrorBox *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  SRichTextWarningOrErrorBox *local_60;
  undefined ***local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142d84912;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1298;
  local_10c0 = this;
  TAttribute<enum_EMessageStyle>::operator=(&this->MessageStyle,&param_1->_MessageStyle);
  pFVar9 = SBorder::FArguments::FArguments(&local_888);
  local_1158._0_4_ = (param_1->_Padding).Left;
  local_1158._4_4_ = (param_1->_Padding).Top;
  uStack_1150._0_4_ = (param_1->_Padding).Right;
  uStack_1150._4_4_ = (param_1->_Padding).Bottom;
  local_1148 = 1;
  local_1130 = 0;
  local_1140 = (undefined1  [8])0x0;
  FStack_1138.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_Padding).Value.Left = (float)(undefined4)local_1158;
  (pFVar9->_Padding).Value.Top = (float)local_1158._4_4_;
  (pFVar9->_Padding).Value.Right = (float)(undefined4)uStack_1150;
  (pFVar9->_Padding).Value.Bottom = (float)uStack_1150._4_4_;
  (pFVar9->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1140);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1140,
             (FWriteAccessScope *)&local_1268);
  if (((int)local_1130 != 0) && (FStack_1138.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1138.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1138,0,0,0x10);
    local_1130 = local_1130 & 0xffffffff00000000;
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  if (FStack_1138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1138.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1140);
  pIVar10 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x40);
  ::FName::FName(&local_10b8,"Colors.White");
  puVar11 = (undefined8 *)(*pcVar1)(pIVar10,local_d50);
  local_11e8 = *puVar11;
  uStack_11e0 = puVar11[1];
  local_11d8 = *(undefined4 *)(puVar11 + 2);
  local_11d4 = 1;
  local_11c0 = 0;
  local_11d0 = (undefined1  [8])0x0;
  FStack_11c8.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar9->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_11e8;
  *(undefined8 *)((longlong)&(pFVar9->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_11e0;
  (pFVar9->_ForegroundColor).Value.ColorUseRule = (char)local_11d8;
  (pFVar9->_ForegroundColor).Value.ColorTableId = (char)((uint)local_11d8 >> 8);
  *(short *)&(pFVar9->_ForegroundColor).Value.field_0x12 = (short)((uint)local_11d8 >> 0x10);
  (pFVar9->_ForegroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11d0,
             (FWriteAccessScope *)&local_1268);
  if (((int)local_11c0 != 0) && (FStack_11c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_11c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_11c8,0,0,0x10);
    local_11c0 = local_11c0 & 0xffffffff00000000;
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  if (FStack_11c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_11c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11d0);
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (pFVar9->_BorderImage).bIsSet = true;
  local_60 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_BorderImage).Getter,(FWriteAccessScope *)&local_1208);
  local_11f0 = &(pFVar9->_BorderImage).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_11f0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
    ;
    puVar11[4] = local_78;
    puVar11[9] = 0;
    if (local_78 != (code *)0x0) {
      pppuVar23 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar23 = local_50;
      }
      (*(code *)**pppuVar23)();
    }
  }
  if (local_1208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1208.Accessor,&local_1208);
  }
  pFVar13 = SHorizontalBox::FArguments::FArguments(&local_d38);
  pFVar14 = ::operator_new(0x58);
  local_1250 = (FSlotArguments *)0x0;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_1250 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar14);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_e38,(FSlot *)&local_1250);
  local_df0 = 1;
  local_dec = 1;
  local_de8 = 1;
  local_de4 = 1;
  pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_e38);
  uVar6 = _UNK_1509eceb8;
  local_1118 = 1;
  local_1128 = ___xmm_00000000418000000000000000000000;
  uStack_1120 = _UNK_1509eceb8;
  local_1100 = 0;
  local_1110 = (undefined1  [8])0x0;
  FStack_1108.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar15->field_0x18 = ___xmm_00000000418000000000000000000000;
  *(undefined8 *)&pFVar15->field_0x20 = uVar6;
  pFVar15->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1110);
  pFVar24 = (FSlotArguments *)0x0;
  if (&pFVar15->field_0x18 != (undefined1 *)0x0) {
    pFVar24 = pFVar15;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1110,
             (FWriteAccessScope *)&local_1268);
  if (((int)local_1100 != 0) && (FStack_1108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1108,0,0,0x10);
    local_1100 = local_1100 & 0xffffffff00000000;
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  if (FStack_1108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1110);
  pFVar16 = SImage::FArguments::FArguments(&local_b30);
  local_10f8 = (param_1->_IconSize).field0_0x0._s_0.X;
  dStack_10f0 = (param_1->_IconSize).field0_0x0._s_0.Y;
  local_10e8 = 1;
  local_10e0 = 1;
  local_10c8 = 0;
  local_10d8 = (undefined1  [8])0x0;
  FStack_10d0.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_10f8 !=
      &pFVar16->_DesiredSizeOverride) {
    (pFVar16->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X = local_10f8;
    (pFVar16->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dStack_10f0;
    (pFVar16->_DesiredSizeOverride).Value.bIsSet = true;
  }
  (pFVar16->_DesiredSizeOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_DesiredSizeOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_10d8,
             (FWriteAccessScope *)&local_1268);
  if (((int)local_10c8 != 0) && (FStack_10d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10d0,0,0,0x10);
    local_10c8 = local_10c8 & 0xffffffff00000000;
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  if (FStack_10d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10d8);
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_2>,FSlateBrush_const_*>
             ::Call;
  (pFVar16->_Image).bIsSet = true;
  local_90 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (FWriteAccessScope *)&local_1208);
  local_11f0 = &(pFVar16->_Image).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_11f0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
    ;
    puVar11[4] = local_a8;
    puVar11[9] = 0;
    if (local_a8 != (code *)0x0) {
      pppuVar23 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar23 = local_80;
      }
      (*(code *)**pppuVar23)();
    }
  }
  if (local_1208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1208.Accessor,&local_1208);
  }
  uVar8 = local_1268._18_2_;
  uVar6 = _UNK_15090c6d8;
  local_11a4 = 1;
  local_11b8 = ___xmm_3f8000003f800000000000003f800000;
  uStack_11b0 = _UNK_15090c6d8;
  local_1268._16_2_ = 2;
  uVar7 = local_1268._16_4_;
  local_1268.bDestroyed = SUB21(2,0);
  local_1268._17_3_ = SUB43(uVar7,1);
  local_11a8 = local_1268.bDestroyed;
  uStack_11a7 = local_1268._17_3_;
  local_1190 = 0;
  local_11a0 = (undefined1  [8])0x0;
  FStack_1198.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar16->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar16->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar6;
  local_1268.bDestroyed = SUB21(2,0);
  local_1268._17_1_ = SUB21(2 >> 8,0);
  (pFVar16->_ColorAndOpacity).Value.ColorUseRule = local_1268.bDestroyed;
  (pFVar16->_ColorAndOpacity).Value.ColorTableId = local_1268._17_1_;
  *(undefined2 *)&(pFVar16->_ColorAndOpacity).Value.field_0x12 = uVar8;
  (pFVar16->_ColorAndOpacity).bIsSet = true;
  local_1268._16_4_ = uVar7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11a0,
             (FWriteAccessScope *)&local_1268);
  if (((int)local_1190 != 0) && (FStack_1198.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1198.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1198,0,0,0x10);
    local_1190 = local_1190 & 0xffffffff00000000;
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  if (FStack_1198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1198.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a0);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_1250,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1240 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1268,&local_1240,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_1208,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SRichTextWarningOrErrorBox.cpp"
             ,0x18,&local_1248);
  FMemScope::~FMemScope((FMemScope *)&local_1268);
  FLLMScope::~FLLMScope((FLLMScope *)&local_1250);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_1208,&local_1090,
                       pFVar16);
  pTVar2 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_1218 = pTVar17->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1210.ReferenceController = pTVar2;
  if ((SImage **)&pFVar24->field_0x8 != &local_1218) {
    *(SImage **)&pFVar24->field_0x8 = local_1218;
    local_1218 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->field_0x10,&local_1210);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1210.ReferenceController);
  pFVar13 = SHorizontalBox::FArguments::operator+(pFVar13,pFVar24);
  pFVar14 = ::operator_new(0x58);
  if (pFVar14 == (FSlot *)0x0) {
    local_1268.AccessType = 0;
    local_1268._4_4_ = 0;
  }
  else {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_1268._0_8_ = SHorizontalBox::FSlot::FSlot(pFVar14);
  }
  FVar20.ComparisonIndex.Value = 0;
  FVar20.Number = 0;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_f20,(FSlot *)&local_1268);
  local_ed0 = 2;
  local_ecc = 1;
  pFVar18 = SRichTextBlock::FArguments::FArguments(&local_4a8);
  pIVar10 = FAppStyle::Get();
  pFVar18->_DecoratorStyleSet = pIVar10;
  local_1188.TextData.Reference = (param_1->_Message).Value.TextData.Reference;
  if (local_1188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1188.TextData.Reference + 8))
              (local_1188.TextData.Reference,&local_1250);
  }
  local_1188.Flags = (param_1->_Message).Value.Flags;
  local_1178 = (param_1->_Message).bIsSet;
  local_1170 = (undefined1  [8])0x0;
  FStack_1168.Data = (FScriptContainerElement *)0x0;
  local_1160 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1170,
             &(param_1->_Message).Getter);
  FText::operator=(&(pFVar18->_Text).Value,&local_1188);
  (pFVar18->_Text).bIsSet = local_1178;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1170,
             (FWriteAccessScope *)&local_1268);
  if ((local_1160 != 0) && (FStack_1168.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1168.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1168,0,0,0x10);
    local_1160 = 0;
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  if (FStack_1168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1168.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1170);
  if (local_1188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1188.TextData.Reference + 0x10))();
  }
  local_1238 = 0x101;
  local_1220 = 0;
  local_1230 = (undefined1  [8])0x0;
  FStack_1228.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_AutoWrapText).Value = true;
  (pFVar18->_AutoWrapText).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1230);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1230,
             (FWriteAccessScope *)&local_1268);
  if (((int)local_1220 != 0) && (FStack_1228.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1228.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1228,0,0,0x10);
    local_1220 = local_1220 & 0xffffffff00000000;
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  if (FStack_1228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1228.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1230);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_1250,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1268.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_1268._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_1240,(FName *)&local_1268,true);
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1068,"SRichTextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SRichTextWarningOrErrorBox.cpp"
             ,0x20,&local_1247);
  FMemScope::~FMemScope((FMemScope *)&local_1240);
  FLLMScope::~FLLMScope((FLLMScope *)&local_1250);
  pTVar19 = TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1068,&local_10a0,pFVar18);
  pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_f18 = pTVar19->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1268.AccessType = 0;
  local_1268._4_4_ = 0;
  local_1268.Accessor = (FMRSWRecursiveAccessDetector *)pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (local_f10,(FSharedReferencer<1> *)&local_1268.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1268.Accessor);
  pFVar13 = SHorizontalBox::FArguments::operator+(pFVar13,(FSlotArguments *)&local_f20);
  pFVar14 = ::operator_new(0x58);
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    FVar20 = (FName)SHorizontalBox::FSlot::FSlot(pFVar14);
  }
  local_1268._0_8_ = FVar20;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1008,(FSlot *)&local_1268);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1050);
  TOptional<FSizeParam>::operator=(&local_fb0._SizeParam,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1020);
  if ((void *)local_1020._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1020._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1020);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1040);
  if ((void *)local_1040._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1040._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1040);
  local_1268.Accessor =
       (FMRSWRecursiveAccessDetector *)
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_1000 = (param_1->_Content).Widget.Object;
  local_fb8 = 2;
  local_fb4 = 1;
  local_fc0 = 3;
  local_fbc = 1;
  if ((TReferenceControllerBase<1> *)local_1268.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_1268.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_1268.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1268.AccessType = 0;
  local_1268._4_4_ = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (local_ff8,(FSharedReferencer<1> *)&local_1268.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1268.Accessor);
  pFVar13 = SHorizontalBox::FArguments::operator+(pFVar13,(FSlotArguments *)&local_1008);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_1250,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1268.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_1268._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_1240,(FName *)&local_1268,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1080,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SRichTextWarningOrErrorBox.cpp"
             ,0x11,local_1246);
  FMemScope::~FMemScope((FMemScope *)&local_1240);
  FLLMScope::~FLLMScope((FLLMScope *)&local_1250);
  pTVar22 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1080,&local_10b0,pFVar13);
  pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_1268._0_8_ = pTVar22->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = (SWidget *)local_1268._0_8_;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  local_1268.Accessor = (FMRSWRecursiveAccessDetector *)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SBorder::Construct((SBorder *)local_10c0,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1080._Widget.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_fb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fd8);
  if ((void *)local_fd8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_fd8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fd8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ff8[0].ReferenceController);
  if (local_1008 != (undefined8 *)0x0) {
    (**(code **)*local_1008)(local_1008,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1068._Widget.SharedReferenceCount.ReferenceController);
  SRichTextBlock::FArguments::~FArguments(&local_4a8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_ec8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ef0);
  if ((void *)local_ef0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ef0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ef0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f10[0].ReferenceController);
  if (local_f20 != (undefined8 *)0x0) {
    (**(code **)*local_f20)(local_f20,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1090.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1208.Accessor);
  if (local_a8 != (code *)0x0) {
    pppuVar23 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar23 = local_80;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  SImage::FArguments::~FArguments(&local_b30);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_de0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e08);
  if ((void *)local_e08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e28);
  if (local_e38[0] != (undefined8 *)0x0) {
    (**(code **)*local_e38[0])(local_e38[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_d38._Slots.AllocatorInstance.Data,local_d38._Slots.ArrayNum);
  if ((FSlotArguments *)local_d38._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_d38._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d38);
  if (local_78 != (code *)0x0) {
    pppuVar23 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar23 = local_50;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  SBorder::FArguments::~FArguments(&local_888);
  return;
}

