// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// operator() @ 142d69cf0

FSlateBrush * __thiscall `SWarningOrErrorBox::Construct'::__l2::<lambda_1>::operator()(void *this)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName local_res8;
  FName local_res10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)this + 0x2e0));
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

// operator() @ 142d6adc0

FSlateBrush * __thiscall `SWarningOrErrorBox::Construct'::__l2::<lambda_2>::operator()(void *this)

{
  EMessageStyle *pEVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  code *pcVar6;
  FName local_res8;
  FName local_res10;
  
  pEVar1 = TAttribute<enum_EMessageStyle>::Get((void *)(*(longlong *)this + 0x2e0));
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

// Construct @ 142d8d8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SWarningOrErrorBox::Construct(SWarningOrErrorBox *this,FArguments *param_1)

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
  FSlot *pFVar13;
  FName FVar14;
  FArguments *pFVar15;
  TSharedRef<SImage,1> *pTVar16;
  FName FVar17;
  FArguments *pFVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  FArguments *pFVar20;
  FName FVar21;
  FSizeParam *pFVar22;
  FSlotArguments *pFVar23;
  TSharedRef<SHorizontalBox,1> *pTVar24;
  undefined ***pppuVar25;
  undefined1 auStackY_1438 [32];
  FDestructionSentinel local_1408;
  FName local_13f0;
  FSharedReferencer<1> FStack_13e8;
  FName local_13e0;
  T0RequiredArgs local_13d8;
  T0RequiredArgs local_13d7;
  T0RequiredArgs local_13d6 [6];
  FMemScope local_13d0;
  undefined1 local_13c8;
  undefined1 local_13c7;
  undefined1 local_13c0 [8];
  ForAnyElementType FStack_13b8;
  ulonglong local_13b0;
  FName local_13a8;
  SImage *local_13a0;
  FSharedReferencer<1> local_1398;
  FDestructionSentinel local_1390;
  undefined1 *local_1378;
  undefined8 local_1370;
  undefined8 uStack_1368;
  undefined4 local_1360;
  undefined1 local_135c;
  undefined1 local_1358 [8];
  ForAnyElementType FStack_1350;
  ulonglong local_1348;
  undefined8 local_1340;
  undefined8 uStack_1338;
  bool local_1330;
  undefined3 uStack_132f;
  undefined1 local_132c;
  undefined1 local_1328 [8];
  ForAnyElementType FStack_1320;
  ulonglong local_1318;
  FText local_1310;
  bool local_1300;
  undefined1 local_12f8 [8];
  ForAnyElementType FStack_12f0;
  int local_12e8;
  undefined8 local_12e0;
  undefined8 uStack_12d8;
  undefined4 local_12d0;
  undefined1 local_12cc;
  undefined1 local_12c8 [8];
  ForAnyElementType FStack_12c0;
  ulonglong local_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined1 local_12a0;
  undefined1 local_1298 [8];
  ForAnyElementType FStack_1290;
  ulonglong local_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined1 local_1270;
  undefined1 local_1268 [8];
  ForAnyElementType FStack_1260;
  ulonglong local_1258;
  double local_1250;
  double dStack_1248;
  undefined1 local_1240;
  undefined1 local_1238;
  undefined1 local_1230 [8];
  ForAnyElementType FStack_1228;
  ulonglong local_1220;
  SWarningOrErrorBox *local_1218;
  FName local_1210;
  FName local_1208;
  TSharedRef<SHorizontalBox,1> local_1200;
  TSharedRef<STextBlock,1> local_11f0;
  TSharedRef<SImage,1> local_11e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_11d0;
  undefined1 local_11b8 [16];
  undefined1 local_11a8 [32];
  undefined1 local_1188 [24];
  undefined1 local_1170 [48];
  undefined1 local_1140 [24];
  undefined4 local_1128;
  undefined1 local_1124;
  undefined4 local_1120;
  undefined1 local_111c;
  FSlotArgumentsMixin local_1118;
  undefined8 *local_1088;
  STextBlock *local_1080;
  FSharedReferencer<1> local_1078 [4];
  undefined1 local_1058 [32];
  undefined4 local_1038;
  undefined1 local_1034;
  FSlotArgumentsMixin local_1030;
  undefined8 *local_fa0 [2];
  TReferenceControllerBase<1> *local_f90;
  undefined1 local_f70 [24];
  undefined4 local_f58;
  undefined1 local_f54;
  undefined4 local_f50;
  undefined1 local_f4c;
  FSlotArgumentsMixin local_f48;
  undefined1 local_eb8 [20];
  undefined1 local_ea4 [20];
  FArguments local_e90;
  FArguments local_c88;
  FArguments local_9e0;
  FArguments local_600;
  code *local_a8;
  undefined **local_98;
  SWarningOrErrorBox *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  SWarningOrErrorBox *local_60;
  undefined ***local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142d8d8d2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1438;
  local_1218 = this;
  TAttribute<enum_EMessageStyle>::operator=(&this->MessageStyle,&param_1->_MessageStyle);
  pFVar9 = SBorder::FArguments::FArguments(&local_9e0);
  local_12b0._0_4_ = (param_1->_Padding).Left;
  local_12b0._4_4_ = (param_1->_Padding).Top;
  uStack_12a8._0_4_ = (param_1->_Padding).Right;
  uStack_12a8._4_4_ = (param_1->_Padding).Bottom;
  local_12a0 = 1;
  FVar21.ComparisonIndex.Value = 0;
  FVar21.Number = 0;
  local_1288 = 0;
  local_1298 = (undefined1  [8])0x0;
  FStack_1290.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_Padding).Value.Left = (float)(undefined4)local_12b0;
  (pFVar9->_Padding).Value.Top = (float)local_12b0._4_4_;
  (pFVar9->_Padding).Value.Right = (float)(undefined4)uStack_12a8;
  (pFVar9->_Padding).Value.Bottom = (float)uStack_12a8._4_4_;
  (pFVar9->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1298);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1298,
             (FWriteAccessScope *)&local_1408);
  if (((int)local_1288 != 0) && (FStack_1290.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1290.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1290,0,0,0x10);
    local_1288 = local_1288 & 0xffffffff00000000;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_1290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1290.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1298);
  pIVar10 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x40);
  ::FName::FName(&local_1210,"Colors.White");
  puVar11 = (undefined8 *)(*pcVar1)(pIVar10,local_eb8);
  local_1370 = *puVar11;
  uStack_1368 = puVar11[1];
  local_1360 = *(undefined4 *)(puVar11 + 2);
  local_135c = 1;
  local_1348 = 0;
  local_1358 = (undefined1  [8])0x0;
  FStack_1350.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar9->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_1370;
  *(undefined8 *)((longlong)&(pFVar9->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_1368;
  (pFVar9->_ForegroundColor).Value.ColorUseRule = (char)local_1360;
  (pFVar9->_ForegroundColor).Value.ColorTableId = (char)((uint)local_1360 >> 8);
  *(short *)&(pFVar9->_ForegroundColor).Value.field_0x12 = (short)((uint)local_1360 >> 0x10);
  (pFVar9->_ForegroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1358,
             (FWriteAccessScope *)&local_1408);
  if (((int)local_1348 != 0) && (FStack_1350.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1350.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1350,0,0,0x10);
    local_1348 = local_1348 & 0xffffffff00000000;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_1350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1350.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1358);
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SWarningOrErrorBox::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (pFVar9->_BorderImage).bIsSet = true;
  local_60 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_BorderImage).Getter,(FWriteAccessScope *)&local_1390);
  local_1378 = &(pFVar9->_BorderImage).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1378);
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
      pppuVar25 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar25 = local_50;
      }
      (*(code *)**pppuVar25)();
    }
  }
  if (local_1390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1390.Accessor,&local_1390);
  }
  local_13f0 = (FName)SHorizontalBox::FArguments::FArguments(&local_e90);
  pFVar13 = ::operator_new(0x58);
  local_13e0 = FVar21;
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
    local_13e0 = (FName)SHorizontalBox::FSlot::FSlot(pFVar13);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_fa0,(FSlot *)&local_13e0);
  local_f58 = 1;
  local_f54 = 1;
  local_f50 = 2;
  local_f4c = 1;
  FVar14 = (FName)SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_fa0);
  uVar6 = _UNK_1509eceb8;
  local_1270 = 1;
  local_1280 = ___xmm_00000000418000000000000000000000;
  uStack_1278 = _UNK_1509eceb8;
  local_1258 = 0;
  local_1268 = (undefined1  [8])0x0;
  FStack_1260.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)FVar14 + 0x18) = ___xmm_00000000418000000000000000000000;
  *(undefined8 *)((longlong)FVar14 + 0x20) = uVar6;
  *(undefined1 *)((longlong)FVar14 + 0x28) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar14 + 0x30),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1268);
  FVar17 = FVar21;
  if ((undefined8 *)((longlong)FVar14 + 0x18) != (undefined8 *)0x0) {
    FVar17 = FVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1268,
             (FWriteAccessScope *)&local_1408);
  if (((int)local_1258 != 0) && (FStack_1260.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1260,0,0,0x10);
    local_1258 = local_1258 & 0xffffffff00000000;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_1260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1268);
  pFVar15 = SImage::FArguments::FArguments(&local_c88);
  local_1250 = (param_1->_IconSize).field0_0x0._s_0.X;
  dStack_1248 = (param_1->_IconSize).field0_0x0._s_0.Y;
  local_1240 = 1;
  local_1238 = 1;
  local_1220 = 0;
  local_1230 = (undefined1  [8])0x0;
  FStack_1228.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_1250 !=
      &pFVar15->_DesiredSizeOverride) {
    (pFVar15->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X = local_1250;
    (pFVar15->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dStack_1248;
    (pFVar15->_DesiredSizeOverride).Value.bIsSet = true;
  }
  (pFVar15->_DesiredSizeOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_DesiredSizeOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1230);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1230,
             (FWriteAccessScope *)&local_1408);
  if (((int)local_1220 != 0) && (FStack_1228.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1228.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1228,0,0,0x10);
    local_1220 = local_1220 & 0xffffffff00000000;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_1228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1228.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1230);
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::`2'::<lambda_2>,0,0>::_vftable_
  ;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`SWarningOrErrorBox::Construct'::__l2::<lambda_2>,FSlateBrush_const_*>
             ::Call;
  (pFVar15->_Image).bIsSet = true;
  local_90 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Image).Getter,
             (FWriteAccessScope *)&local_1390);
  local_1378 = &(pFVar15->_Image).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1378);
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
      pppuVar25 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar25 = local_80;
      }
      (*(code *)**pppuVar25)();
    }
  }
  if (local_1390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1390.Accessor,&local_1390);
  }
  uVar8 = local_1408._18_2_;
  uVar6 = _UNK_15090c6d8;
  local_132c = 1;
  local_1340 = ___xmm_3f8000003f800000000000003f800000;
  uStack_1338 = _UNK_15090c6d8;
  local_1408._16_2_ = 2;
  uVar7 = local_1408._16_4_;
  local_1408.bDestroyed = SUB21(2,0);
  local_1408._17_3_ = SUB43(uVar7,1);
  local_1330 = local_1408.bDestroyed;
  uStack_132f = local_1408._17_3_;
  local_1318 = 0;
  local_1328 = (undefined1  [8])0x0;
  FStack_1320.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar15->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar15->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar6;
  local_1408.bDestroyed = SUB21(2,0);
  local_1408._17_1_ = SUB21(2 >> 8,0);
  (pFVar15->_ColorAndOpacity).Value.ColorUseRule = local_1408.bDestroyed;
  (pFVar15->_ColorAndOpacity).Value.ColorTableId = local_1408._17_1_;
  *(undefined2 *)&(pFVar15->_ColorAndOpacity).Value.field_0x12 = uVar8;
  (pFVar15->_ColorAndOpacity).bIsSet = true;
  local_1408._16_4_ = uVar7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1328);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1328,
             (FWriteAccessScope *)&local_1408);
  if (((int)local_1318 != 0) && (FStack_1320.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1320.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1320,0,0,0x10);
    local_1318 = local_1318 & 0xffffffff00000000;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_1320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1320.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1328);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_13e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_13a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13d0,&local_13a8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_1390,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWarningOrErrorBox.cpp"
             ,0x18,&local_13d8);
  FMemScope::~FMemScope(&local_13d0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_13e0);
  pTVar16 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_1390,&local_11e0,
                       pFVar15);
  pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_13a0 = pTVar16->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1398.ReferenceController = pTVar2;
  if ((SImage **)((longlong)FVar17 + 8) != &local_13a0) {
    *(SImage **)((longlong)FVar17 + 8) = local_13a0;
    local_13a0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar17 + 0x10),&local_1398);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1398.ReferenceController);
  local_13a8 = (FName)SHorizontalBox::FArguments::operator+
                                ((FArguments *)local_13f0,(FSlotArguments *)FVar17);
  pFVar13 = ::operator_new(0x58);
  FVar17 = FVar21;
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
    FVar17 = (FName)SHorizontalBox::FSlot::FSlot(pFVar13);
  }
  local_13f0 = FVar17;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1088,(FSlot *)&local_13f0);
  local_1038 = 2;
  local_1034 = 1;
  pFVar18 = STextBlock::FArguments::FArguments(&local_600);
  local_1310.TextData.Reference = (param_1->_Message).Value.TextData.Reference;
  if (local_1310.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1310.TextData.Reference + 8))
              (local_1310.TextData.Reference,&local_13e0);
  }
  local_1310.Flags = (param_1->_Message).Value.Flags;
  local_1300 = (param_1->_Message).bIsSet;
  local_12f8 = (undefined1  [8])0x0;
  FStack_12f0.Data = (FScriptContainerElement *)0x0;
  local_12e8 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_12f8,
             &(param_1->_Message).Getter);
  FText::operator=(&(pFVar18->_Text).Value,&local_1310);
  (pFVar18->_Text).bIsSet = local_1300;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_12f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_12f8,
             (FWriteAccessScope *)&local_1408);
  if ((local_12e8 != 0) && (FStack_12f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_12f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_12f0,0,0,0x10);
    local_12e8 = 0;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_12f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_12f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12f8);
  if (local_1310.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1310.TextData.Reference + 0x10))();
  }
  pIVar10 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x40);
  ::FName::FName(&local_1208,"Colors.White");
  puVar11 = (undefined8 *)(*pcVar1)(pIVar10,local_ea4);
  local_12e0 = *puVar11;
  uStack_12d8 = puVar11[1];
  local_12d0 = *(undefined4 *)(puVar11 + 2);
  local_12cc = 1;
  local_12b8 = 0;
  local_12c8 = (undefined1  [8])0x0;
  FStack_12c0.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar18->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_12e0;
  *(undefined8 *)((longlong)&(pFVar18->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_12d8;
  (pFVar18->_ColorAndOpacity).Value.ColorUseRule = (char)local_12d0;
  (pFVar18->_ColorAndOpacity).Value.ColorTableId = (char)((uint)local_12d0 >> 8);
  *(short *)&(pFVar18->_ColorAndOpacity).Value.field_0x12 = (short)((uint)local_12d0 >> 0x10);
  (pFVar18->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_12c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_12c8,
             (FWriteAccessScope *)&local_1408);
  if (((int)local_12b8 != 0) && (FStack_12c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_12c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_12c0,0,0,0x10);
    local_12b8 = local_12b8 & 0xffffffff00000000;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_12c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_12c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12c8);
  local_13c8 = param_1->_AutoWrapText;
  local_13c7 = 1;
  local_13b0 = 0;
  local_13c0 = (undefined1  [8])0x0;
  FStack_13b8.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_AutoWrapText).Value = (bool)local_13c8;
  (pFVar18->_AutoWrapText).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13c0,
             (FWriteAccessScope *)&local_1408);
  if (((int)local_13b0 != 0) && (FStack_13b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13b8,0,0,0x10);
    local_13b0 = local_13b0 & 0xffffffff00000000;
  }
  if (local_1408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1408.Accessor,&local_1408);
  }
  if (FStack_13b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13c0);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_13e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_13f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13d0,&local_13f0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_11d0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWarningOrErrorBox.cpp"
             ,0x20,&local_13d7);
  FMemScope::~FMemScope(&local_13d0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_13e0);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11d0,&local_11f0,pFVar18);
  pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1080 = pTVar19->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_13f0.ComparisonIndex.Value = 0;
  local_13f0.Number = 0;
  FStack_13e8.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1078,&FStack_13e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13e8.ReferenceController);
  pFVar20 = SHorizontalBox::FArguments::operator+
                      ((FArguments *)local_13a8,(FSlotArguments *)&local_1088);
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
    FVar21 = (FName)SHorizontalBox::FSlot::FSlot(pFVar13);
  }
  local_13f0 = FVar21;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1170,(FSlot *)&local_13f0);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_11b8);
  TOptional<FSizeParam>::operator=(&local_1118._SizeParam,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1188);
  if ((void *)local_1188._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1188._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1188);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a8);
  if ((void *)local_11a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a8);
  local_1120 = 2;
  local_111c = 1;
  local_1128 = 3;
  local_1124 = 1;
  pFVar23 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_1170,&(param_1->_Content).Widget);
  pFVar20 = SHorizontalBox::FArguments::operator+(pFVar20,pFVar23);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_13e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_13f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13d0,&local_13f0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_1408,"SHorizontalBox"
             ,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SWarningOrErrorBox.cpp"
             ,0x11,local_13d6);
  FMemScope::~FMemScope(&local_13d0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_13e0);
  pTVar24 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_1408,
                       &local_1200,pFVar20);
  pTVar4 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_13f0 = (FName)pTVar24->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = (SWidget *)local_13f0;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  FStack_13e8.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SBorder::Construct((SBorder *)local_1218,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1408.Accessor);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1118);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1140);
  if ((void *)local_1140._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1140._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1170._16_8_);
  if ((FSlot *)local_1170._0_8_ != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_1170._0_8_)(local_1170._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11d0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_600);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1030);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1058);
  if ((void *)local_1058._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1058._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1058);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1078[0].ReferenceController);
  if (local_1088 != (undefined8 *)0x0) {
    (**(code **)*local_1088)(local_1088,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1390.Accessor);
  if (local_a8 != (code *)0x0) {
    pppuVar25 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar25 = local_80;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  SImage::FArguments::~FArguments(&local_c88);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_f48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f70);
  if ((void *)local_f70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f90);
  if (local_fa0[0] != (undefined8 *)0x0) {
    (**(code **)*local_fa0[0])(local_fa0[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_e90._Slots.AllocatorInstance.Data,local_e90._Slots.ArrayNum);
  if ((FSlotArguments *)local_e90._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e90._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e90);
  if (local_78 != (code *)0x0) {
    pppuVar25 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar25 = local_50;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  SBorder::FArguments::~FArguments(&local_9e0);
  return;
}

