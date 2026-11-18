// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 29

// ~SMenuEntryBlock @ 1427ba6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuEntryBlock::~SMenuEntryBlock(SMenuEntryBlock *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->MenuAnchor).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->_padding_);
  return;
}

// BuildMenuBarWidget @ 1427d4950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMenuEntryBlock::BuildMenuBarWidget
          (SMenuEntryBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FMenuEntryBuildParams *param_1)

{
  SMultiBoxWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  int iVar11;
  TSharedRef<SWidget,1> *pTVar12;
  FString *pFVar13;
  FButtonStyle *pFVar14;
  FArguments *this_00;
  FName FVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget_const_,1> *pTVar17;
  ulong64 uVar18;
  FName FVar19;
  FArguments *pFVar20;
  FTextBlockStyle *pFVar21;
  TSharedRef<STextBlock,1> *pTVar22;
  TSharedRef<SButton,1> *pTVar23;
  TSharedRef<SBorder,1> *pTVar24;
  TSharedRef<SMenuAnchor,1> *pTVar25;
  wchar_t *pwVar26;
  SMultiBoxWidget *pSVar27;
  SMultiBoxWidget *pSVar28;
  TStatId *pTVar29;
  TStatId *pTVar30;
  TReferenceControllerBase<1> *pTVar31;
  undefined4 local_res8 [2];
  TReferenceControllerBase<1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_14d8 [8];
  FName local_14d0;
  FString local_14c8;
  FLLMScope local_14b8;
  FLLMScope local_14b4;
  FLLMScope local_14b0;
  FLLMScope local_14ac;
  FName local_14a8;
  FName local_14a0;
  FString local_1498;
  undefined4 local_1488;
  undefined1 local_1484;
  undefined1 local_1480 [8];
  ForAnyElementType FStack_1478;
  ulonglong local_1470;
  FName local_1468;
  FString local_1460;
  FText local_1450;
  bool local_1440;
  undefined1 local_1438 [8];
  ForAnyElementType FStack_1430;
  int local_1428;
  FString local_1418;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined1 local_13f8;
  undefined1 local_13f0 [8];
  ForAnyElementType FStack_13e8;
  ulonglong local_13e0;
  undefined1 local_13d8 [24];
  undefined1 local_13c0 [8];
  ForAnyElementType FStack_13b8;
  int local_13b0;
  SButton *local_13a8;
  TReferenceControllerBase<1> *pTStack_13a0;
  SBorder *local_1398;
  TReferenceControllerBase<1> *pTStack_1390;
  TSharedRef<STextBlock,1> local_1388;
  STextBlock *local_1378;
  TReferenceControllerBase<1> *pTStack_1370;
  undefined1 local_1368 [4];
  undefined1 local_1364 [4];
  FName local_1360;
  FName local_1358;
  FName local_1350;
  FMemScope local_1348;
  SMenuAnchor *local_1340;
  FSharedReferencer<1> FStack_1338;
  FMemScope local_1330;
  FName local_1328;
  FMemScope local_1320;
  FName local_1318;
  FMemScope local_1310;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_1308;
  FDestructionSentinel local_12f0;
  FDestructionSentinel local_12d8;
  FDestructionSentinel local_12c0;
  FDestructionSentinel local_12a8;
  FDestructionSentinel local_1290;
  FDelegateAllocation *local_1278;
  FDestructionSentinel local_1270;
  FDelegateAllocation *local_1258;
  TSharedRef<SWidget_const_,1> local_1250;
  code *local_1238;
  longlong lStack_1230;
  TSharedRef<SWidget_const_,1> local_1228;
  FString local_1218;
  code *local_1208;
  longlong lStack_1200;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_11f8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_11e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_11c8;
  code *local_11a8;
  longlong lStack_11a0;
  TSharedRef<SMenuAnchor,1> local_1198;
  code *local_1188;
  longlong lStack_1180;
  TSharedRef<SBorder,1> local_1178;
  TSharedRef<SButton,1> local_1168;
  FString local_1158;
  FArguments local_1148;
  FArguments local_ec8;
  FArguments local_ae8;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427d4973;
  pTVar30 = (TStatId *)0x0;
  local_res8[0] = 0;
  local_res10 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if ((((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerMultiBoxWidget.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                          ,0xfd,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar12;
  }
  FVar15 = (FName)param_1->StyleSet;
  local_14a0 = param_1->StyleName;
  local_1340 = (SMenuAnchor *)0x0;
  FStack_1338.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_14a8 = FVar15;
  ::FString::FString(&local_1498,".Button");
  pFVar13 = ::FName::ToString(&local_14a0,&local_1158);
  ::FString::ConcatFF(&local_14c8,pFVar13,&local_1498);
  pwVar26 = L"";
  if (local_14c8.Data.ArrayNum != 0) {
    pwVar26 = (wchar_t *)local_14c8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_14d0,pwVar26);
  if (local_14c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14c8.Data.AllocatorInstance.Data);
  }
  if (local_1158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1158.Data.AllocatorInstance.Data);
  }
  if (local_1498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1498.Data.AllocatorInstance.Data);
  }
  pFVar14 = (FButtonStyle *)
            (**(code **)((longlong)*(ISlateStyle *)FVar15 + 0xa0))
                      (FVar15,FButtonStyle::TypeName,local_14d0,0,1);
  if (pFVar14 == (FButtonStyle *)0x0) {
    pFVar14 = FButtonStyle::GetDefault();
  }
  this->MenuBarButtonStyle = pFVar14;
  this_00 = SMenuAnchor::FArguments::FArguments(&local_1148);
  local_1484 = 1;
  local_1488 = 0;
  local_1470 = 0;
  local_1480 = (undefined1  [8])0x0;
  FStack_1478.Data = (FScriptContainerElement *)0x0;
  (this_00->_Placement).Value = MenuPlacement_BelowAnchor;
  (this_00->_Placement).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_Placement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1480);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1480,
             (FWriteAccessScope *)&local_12f0);
  if (((int)local_1470 != 0) && (FStack_1478.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1478.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1478,0,0,0x10);
    local_1470 = local_1470 & 0xffffffff00000000;
  }
  if (local_12f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f0.Accessor,&local_12f0);
  }
  if (FStack_1478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1480);
  local_1498.Data.ArrayNum = 0;
  local_1498.Data.AllocatorInstance.Data = (FScriptContainerElement *)MakeNewMenuWidget;
  lStack_1180 = (ulonglong)(uint)local_1498.Data.ArrayMax << 0x20;
  local_1188 = MakeNewMenuWidget;
  local_14a0 = (FName)SMenuAnchor::FArguments::OnGetMenuContent<SMenuEntryBlock>
                                (this_00,this,(pmf_bb1420e0 *)&local_1188);
  FVar15 = (FName)SBorder::FArguments::FArguments(&local_ec8);
  *(bool *)((longlong)FVar15 + 0x2a8) = true;
  local_14d0 = FVar15;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar15 + 0x2b0),
             (FWriteAccessScope *)&local_1290);
  local_1278 = (FDelegateAllocation *)((longlong)FVar15 + 0x2b8);
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,local_1278);
  pTVar31 = local_res10;
  if (puVar16 != (undefined8 *)0x0) {
    local_14c8.Data.ArrayMax = local_1388.SharedReferenceCount.ReferenceController._4_4_;
    local_14c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)GetMenuBarButtonBorder;
    local_14c8.Data.ArrayNum = 0;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1250);
    pTVar31 = (pTVar17->SharedReferenceCount).ReferenceController;
    pTVar29 = &pTVar17->Object[-1].StatID;
    if (pTVar17->Object == (SWidget *)0x0) {
      pTVar29 = pTVar30;
    }
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSMenuEntryBlock___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pTVar29;
    puVar16[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar30 = (TStatId *)0x3;
    puVar16[5] = local_14c8.Data.AllocatorInstance.Data;
    puVar16[6] = CONCAT44(local_14c8.Data.ArrayMax,local_14c8.Data.ArrayNum);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (((ulonglong)pTVar30 & 2) != 0) {
    pTVar30 = (TStatId *)(ulonglong)((uint)pTVar30 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (((ulonglong)pTVar30 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1250.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar10 = false;
  if (local_1290.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1290.Accessor,&local_1290);
  }
  local_1468 = (FName)SBorder::FArguments::Padding((FArguments *)local_14d0,0.0);
  FVar19 = (FName)SButton::FArguments::FArguments(&local_ae8);
  local_14d0 = FVar19;
  ::FName::FName(&local_1360,"NoBorder");
  FVar15 = local_14a8;
  pFVar14 = (FButtonStyle *)
            (**(code **)((longlong)*(ISlateStyle *)local_14a8 + 0xa0))
                      (local_14a8,FButtonStyle::TypeName,local_1360,0,1);
  if (pFVar14 == (FButtonStyle *)0x0) {
    pFVar14 = FButtonStyle::GetDefault();
  }
  *(FButtonStyle **)((longlong)FVar19 + 0x208) = pFVar14;
  *(Type *)((longlong)FVar19 + 0x400) = MouseDown;
  local_13d8._0_8_ = (param_1->ToolTip).Value.TextData.Reference;
  if ((ITextData *)local_13d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_13d8._0_8_ + 8))(local_13d8._0_8_,local_1368);
  }
  local_13d8._8_4_ = (param_1->ToolTip).Value.Flags;
  local_13d8[0x10] = (param_1->ToolTip).bIsSet;
  local_13c0 = (undefined1  [8])0x0;
  FStack_13b8.Data = (FScriptContainerElement *)0x0;
  local_13b0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_13c0,
             &(param_1->ToolTip).Getter);
  local_1498.Data.ArrayNum = 0;
  local_1498.Data.AllocatorInstance.Data = (FScriptContainerElement *)GetFilteredToolTipText;
  lStack_1230 = (ulonglong)(uint)local_1498.Data.ArrayMax << 0x20;
  local_1238 = GetFilteredToolTipText;
  *(undefined1 *)((longlong)FVar19 + 0x10) = 1;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SMenuEntryBlock,TAttribute<FText>_&>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)FVar19 + 0x18),this,(pmf_f12da25b *)&local_1238,
             (TAttribute<FText> *)local_13d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13c0,
             (FWriteAccessScope *)&local_12d8);
  if ((local_13b0 != 0) && (FStack_13b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13b8,0,0,0x10);
    local_13b0 = 0;
  }
  if (local_12d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d8.Accessor,&local_12d8);
  }
  if (FStack_13b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13c0);
  if ((ITextData *)local_13d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_13d8._0_8_ + 0x10))();
  }
  puVar16 = (undefined8 *)
            (**(code **)((longlong)*(ISlateStyle *)FVar15 + 0x48))
                      (FVar15,param_1->StyleName,".MenuBar.Padding",&FStyleDefaults::DefaultMargin,0
                      );
  local_1408 = *puVar16;
  uStack_1400 = puVar16[1];
  local_13f8 = 1;
  local_13e0 = 0;
  local_13f0 = (undefined1  [8])0x0;
  FStack_13e8.Data = (FScriptContainerElement *)0x0;
  (((TAttribute<FMargin> *)((longlong)FVar19 + 0x220))->Value).Left = (float)(int)local_1408;
  (((TAttribute<FMargin> *)((longlong)FVar19 + 0x220))->Value).Top =
       (float)(int)((ulonglong)local_1408 >> 0x20);
  *(undefined8 *)((longlong)FVar19 + 0x228) = uStack_1400;
  *(bool *)((longlong)FVar19 + 0x230) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar19 + 0x238),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13f0,
             (FWriteAccessScope *)&local_12c0);
  if (((int)local_13e0 != 0) && (FStack_13e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13e8,0,0,0x10);
    local_13e0 = local_13e0 & 0xffffffff00000000;
  }
  if (local_12c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12c0.Accessor,&local_12c0);
  }
  if (FStack_13e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13f0);
  *(bool *)((longlong)FVar19 + 0x4b4) = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar19 + 0x4b8),
             (FWriteAccessScope *)&local_1270);
  local_1258 = (FDelegateAllocation *)((longlong)FVar19 + 0x4c0);
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,local_1258);
  pTVar31 = local_res10;
  if (puVar16 != (undefined8 *)0x0) {
    local_14c8.Data.ArrayMax = local_1388.SharedReferenceCount.ReferenceController._4_4_;
    local_14c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)GetMenuBarForegroundColor;
    local_14c8.Data.ArrayNum = 0;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1228);
    pTVar31 = (pTVar17->SharedReferenceCount).ReferenceController;
    pTVar30 = &pTVar17->Object[-1].StatID;
    if (pTVar17->Object == (SWidget *)0x0) {
      pTVar30 = (TStatId *)0x0;
    }
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar10 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSMenuEntryBlock___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pTVar30;
    puVar16[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar16[5] = local_14c8.Data.AllocatorInstance.Data;
    puVar16[6] = CONCAT44(local_14c8.Data.ArrayMax,local_14c8.Data.ArrayNum);
    FVar19 = local_14d0;
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1228.SharedReferenceCount.ReferenceController);
  }
  if (local_1270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1270.Accessor,&local_1270);
  }
  *(EVerticalAlignment *)((longlong)FVar19 + 0x21c) = VAlign_Center;
  pFVar20 = STextBlock::FArguments::FArguments(&local_5a8);
  local_1358 = param_1->StyleName;
  ::FString::FString(&local_1418,".Label");
  pFVar13 = ::FName::ToString(&local_1358,&local_1218);
  ::FString::ConcatFF(&local_1460,pFVar13,&local_1418);
  pwVar26 = L"";
  if (local_1460.Data.ArrayNum != 0) {
    pwVar26 = (wchar_t *)local_1460.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_1318,pwVar26);
  if (local_1460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1460.Data.AllocatorInstance.Data);
  }
  if (local_1218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1218.Data.AllocatorInstance.Data);
  }
  if (local_1418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1418.Data.AllocatorInstance.Data);
  }
  pFVar21 = (FTextBlockStyle *)
            (**(code **)((longlong)*(ISlateStyle *)local_14a8 + 0xa0))
                      (local_14a8,FTextBlockStyle::TypeName,local_1318,0,1);
  if (pFVar21 == (FTextBlockStyle *)0x0) {
    pFVar21 = FTextBlockStyle::GetDefault();
  }
  pFVar20->_TextStyle = pFVar21;
  local_1450.TextData.Reference = (param_1->Label).Value.TextData.Reference;
  if (local_1450.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1450.TextData.Reference + 8))
              (local_1450.TextData.Reference,local_1364);
  }
  local_1450.Flags = (param_1->Label).Value.Flags;
  local_1440 = (param_1->Label).bIsSet;
  pSVar27 = (SMultiBoxWidget *)0x0;
  local_1438 = (undefined1  [8])0x0;
  FStack_1430.Data = (FScriptContainerElement *)0x0;
  local_1428 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1438,
             &(param_1->Label).Getter);
  FText::operator=(&(pFVar20->_Text).Value,&local_1450);
  (pFVar20->_Text).bIsSet = local_1440;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1438);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1438,
             (FWriteAccessScope *)&local_12a8);
  if ((local_1428 != 0) && (FStack_1430.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1430.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1430,0,0,0x10);
    local_1428 = 0;
  }
  if (local_12a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12a8.Accessor,&local_12a8);
  }
  if (FStack_1430.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1430.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1438);
  if (local_1450.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1450.TextData.Reference + 0x10))();
  }
  pSVar1 = (SMultiBoxWidget *)this->_padding_;
  local_1460.Data.AllocatorInstance.Data = (FScriptContainerElement *)SMultiBoxWidget::GetSearchText
  ;
  local_1460.Data.ArrayMax = local_1388.SharedReferenceCount.ReferenceController._4_4_;
  local_1460.Data.ArrayNum = 0;
  pSVar28 = pSVar1;
  if (pSVar1 != (SMultiBoxWidget *)0x0) {
    iVar8 = (int)pSVar1->_padding_;
    do {
      pSVar28 = pSVar27;
      if (iVar8 == 0) goto LAB_1427d5255;
      LOCK();
      iVar11 = (int)pSVar1->_padding_;
      bVar10 = iVar8 == iVar11;
      if (bVar10) {
        *(int *)&pSVar1->_padding_ = iVar8 + 1;
        iVar11 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar11;
    } while (!bVar10);
    pSVar27 = (SMultiBoxWidget *)this->_padding_;
    pSVar28 = pSVar1;
  }
LAB_1427d5255:
  lStack_1200 = (ulonglong)local_1388.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_1208 = SMultiBoxWidget::GetSearchText;
  TAttribute<FText>::Bind<SMultiBoxWidget>
            (&pFVar20->_HighlightText,pSVar27,(pmf_35343c35 *)&local_1208);
  FLLMScope::FLLMScope(&local_14b8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1320,&local_14a8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_11c8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x11e,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_1320);
  FLLMScope::~FLLMScope(&local_14b8);
  pTVar22 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11c8,&local_1388,pFVar20);
  FVar15 = local_14d0;
  pTVar31 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_1378 = pTVar22->Object;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = ((FSharedReferencer<1> *)((longlong)local_14d0 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_14d0 + 0x1f8))->Widget).Object = (SWidget *)local_1378;
  ((FSharedReferencer<1> *)((longlong)local_14d0 + 0x200))->ReferenceController = pTVar31;
  pTStack_1370 = pTVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_1418.Data.ArrayNum = 0;
  local_1418.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnMenuItemButtonClicked;
  lStack_11a0 = (ulonglong)(uint)local_1418.Data.ArrayMax << 0x20;
  local_11a8 = OnMenuItemButtonClicked;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SMenuEntryBlock>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)FVar15 + 0x2e0),this,(pmf_f4a74f51 *)&local_11a8);
  FLLMScope::FLLMScope(&local_14b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1328 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1330,&local_1328,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_11e0,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x111,local_res18);
  FMemScope::~FMemScope(&local_1330);
  FLLMScope::~FLLMScope(&local_14b4);
  pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11e0,&local_1168,(FArguments *)FVar15);
  FVar15 = local_1468;
  pTVar2 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_13a8 = pTVar23->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = ((FSharedReferencer<1> *)((longlong)local_1468 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_1468 + 0x1f8))->Widget).Object = (SWidget *)local_13a8;
  ((FSharedReferencer<1> *)((longlong)local_1468 + 0x200))->ReferenceController = pTVar2;
  pTStack_13a0 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(&local_14b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1348,&local_1468,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_11f8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x10c,local_res20);
  FMemScope::~FMemScope(&local_1348);
  FLLMScope::~FLLMScope(&local_14b0);
  pTVar24 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11f8,&local_1178,(FArguments *)FVar15);
  pTVar3 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_1398 = pTVar24->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = ((FSharedReferencer<1> *)((longlong)local_14a0 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_14a0 + 0x1f8))->Widget).Object = (SWidget *)local_1398;
  ((FSharedReferencer<1> *)((longlong)local_14a0 + 0x200))->ReferenceController = pTVar3;
  pTStack_1390 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(&local_14ac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1350 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1310,&local_1350,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            (&local_1308,"SMenuAnchor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x107,local_14d8);
  FMemScope::~FMemScope(&local_1310);
  FLLMScope::~FLLMScope(&local_14ac);
  FVar9.ReferenceController = local_1308._Widget.SharedReferenceCount.ReferenceController;
  if (local_1308._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1308._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1308._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1340 = local_1308._Widget.Object;
  FStack_1338.ReferenceController = local_1308._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar25 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1308,&local_1198,(FArguments *)local_14a0);
  local_res10->_padding_ = (longlong)pTVar25->Object;
  pTVar4 = (pTVar25->SharedReferenceCount).ReferenceController;
  ((FSharedReferencer<1> *)&local_res10->SharedReferenceCount)->ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1308._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1388.SharedReferenceCount.ReferenceController._4_4_,
                      local_1388.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar28);
  STextBlock::FArguments::~FArguments(&local_5a8);
  SButton::FArguments::~FArguments(&local_ae8);
  SBorder::FArguments::~FArguments(&local_ec8);
  SMenuAnchor::FArguments::~FArguments(&local_1148);
  (this->MenuAnchor).Object = local_1308._Widget.Object;
  SharedPointerInternals::FWeakReferencer<1>::operator=
            (&(this->MenuAnchor).WeakReferenceCount,&FStack_1338);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return (TSharedRef<SWidget,1> *)local_res10;
}

// BuildMenuEntryWidget @ 1427d5730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001427d7305) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMenuEntryBlock::BuildMenuEntryWidget
          (SMenuEntryBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FMenuEntryBuildParams *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FMenuEntryBlock *pFVar3;
  ISlateStyle *pIVar4;
  UObject *pUVar5;
  SBox *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  STextBlock *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *pcVar11;
  EVisibility EVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  atomic<int> aVar21;
  SHorizontalBox *pSVar22;
  bool bVar23;
  char cVar24;
  byte bVar25;
  atomic<int> aVar26;
  FUICommandInfo *pFVar27;
  FSlateIcon *pFVar28;
  TSharedRef<SWidget,1> *pTVar29;
  FSlateBrush *pFVar30;
  FArguments *pFVar31;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar32;
  TSharedRef<SImage,1> *pTVar33;
  bool *pbVar34;
  FArguments *this_00;
  FText *pFVar35;
  TAttribute<FText> *pTVar36;
  SColorBlock *pSVar37;
  SColorBlock *pSVar38;
  FMultiBox *this_01;
  FString *pFVar39;
  FSlotArguments *pFVar40;
  FArguments *pFVar41;
  FArguments *pFVar42;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar43;
  TSharedRef<SBox,1> *pTVar44;
  FArguments *pFVar45;
  FArguments *pFVar46;
  FName FVar47;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar48;
  TSharedRef<STextBlock,1> *pTVar49;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SHorizontalBox,1> *pTVar50;
  FSlot *pFVar51;
  FSlot *pFVar52;
  FArguments *pFVar53;
  FCheckBoxStyle *pFVar54;
  FArguments *pFVar55;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SCheckBox,1> *pTVar56;
  TSharedRef<SLinkedBox,1> *pTVar57;
  FArguments *pFVar58;
  FButtonStyle *pFVar59;
  undefined8 *puVar60;
  SMenuEntryButton *pSVar61;
  SMenuEntryButton *pSVar62;
  longlong lVar63;
  FSlotArguments *pFVar64;
  TReferenceControllerBase<1> *pTVar65;
  IToolTip *pIVar66;
  SCheckBox *pSVar67;
  ForAnyElementType FVar68;
  FSharedReferencer<1> FVar69;
  FSharedReferencer<1> FVar70;
  EUserInterfaceActionType EVar71;
  bool bVar72;
  float fVar73;
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_3a08;
  T0RequiredArgs local_3a07;
  T0RequiredArgs local_3a06;
  T0RequiredArgs local_3a05;
  T0RequiredArgs local_3a04;
  T0RequiredArgs local_3a03;
  T0RequiredArgs local_3a02;
  T0RequiredArgs local_3a01;
  T0RequiredArgs local_3a00;
  T0RequiredArgs local_39ff [3];
  uint local_39fc;
  FArguments *local_39f8;
  undefined4 uStack_39f0;
  uint uStack_39ec;
  FName local_39e8;
  ISlateStyle *local_39e0;
  SHorizontalBox *local_39d8;
  undefined4 uStack_39d0;
  undefined4 uStack_39cc;
  FLLMScope local_39c8;
  FLLMScope local_39c4;
  FLLMScope local_39c0;
  FLLMScope local_39bc;
  FLLMScope local_39b8 [2];
  TReferenceControllerBase<1> *local_39b0;
  SLinkedBox *local_39a8;
  FSharedReferencer<1> local_39a0;
  SHorizontalBox *local_3998;
  FSharedReferencer<1> local_3990;
  Type local_3988;
  FSlot *local_3980;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_3978;
  TSlateDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs> local_3960;
  undefined8 local_3948;
  undefined8 uStack_3940;
  undefined4 local_3938;
  undefined1 local_3934;
  undefined1 local_3930 [8];
  ForAnyElementType FStack_3928;
  ulonglong local_3920;
  TSharedPtr<FMultiBox_const_,1> local_3918;
  SWidget *local_3908;
  TReferenceControllerBase<1> *pTStack_3900;
  SMultiBoxWidget *local_38f8;
  FSharedReferencer<1> local_38f0;
  SWidget *local_38e8;
  TReferenceControllerBase<1> *pTStack_38e0;
  undefined8 local_38d8;
  undefined8 uStack_38d0;
  undefined1 local_38c8;
  undefined1 local_38c0 [8];
  ForAnyElementType FStack_38b8;
  ulonglong local_38b0;
  FName local_38a8;
  undefined4 uStack_38a0;
  uint uStack_389c;
  TSharedRef<FLinkedBoxManager,1> local_3898;
  FName local_3888;
  FName local_3880;
  FMemScope local_3878;
  FName local_3870;
  T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&> local_3868;
  FMemScope local_3860;
  FSlot *local_3858;
  FName local_3850;
  FName local_3848;
  FName local_3840;
  FMemScope local_3838;
  TReferenceControllerBase<1> *local_3830;
  FMemScope local_3828;
  undefined4 local_3820 [2];
  FString local_3818;
  undefined8 local_3808;
  FSharedReferencer<1> local_3800;
  undefined8 local_37f8;
  FSharedReferencer<1> local_37f0;
  FString local_37e8;
  longlong local_37d8;
  TReferenceControllerBase<1> *local_37d0;
  undefined4 local_37c8 [2];
  undefined4 local_37c0 [2];
  FName local_37b8;
  FMemScope local_37b0;
  FLinearColor_u_0 local_37a8;
  undefined1 local_3798;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3790;
  TAttribute<float> local_3778;
  TAttribute<EVisibility> local_3758;
  TAttribute<EVisibility> local_3738;
  TAttribute<FOptionalSize> local_3718;
  TAttribute<FOptionalSize> local_36f8;
  TAttribute<FOptionalSize> local_36d8;
  TAttribute<FOptionalSize> local_36b8;
  TAttribute<EVisibility> local_3698;
  TAttribute<EVisibility> local_3678;
  undefined8 local_3658;
  undefined8 uStack_3650;
  undefined1 local_3648;
  undefined1 local_3640 [8];
  void *pvStack_3638;
  undefined8 local_3630;
  undefined8 local_3628;
  undefined8 uStack_3620;
  undefined4 local_3618;
  undefined8 local_3614;
  undefined8 uStack_360c;
  undefined4 local_3604;
  undefined8 local_3600;
  undefined8 uStack_35f8;
  undefined4 local_35f0;
  undefined8 local_35ec;
  undefined8 uStack_35e4;
  undefined4 local_35dc;
  SWidget *local_35d8;
  undefined8 uStack_35d0;
  FString local_35c8;
  SCheckBox *local_35b8;
  TReferenceControllerBase<1> *local_35b0;
  TSharedPtr<SWidget,1> local_35a8;
  TSharedRef<SWidget,1> local_3598;
  TSharedRef<SWidget,1> local_3588;
  undefined8 local_3578;
  TReferenceControllerBase<1> *pTStack_3570;
  TSharedRef<SWidget,1> local_3568;
  FString local_3558;
  SCheckBox *local_3548;
  TReferenceControllerBase<1> *local_3540;
  TVector2<double>_u_0 local_3538;
  undefined1 local_3528;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3520;
  TAttribute<TSharedPtr<IToolTip,1>_> local_3508;
  TAttribute<FSlateBrush_const_*> local_34d8;
  FDestructionSentinel local_34b0;
  FDestructionSentinel local_3498;
  FLinearColor_u_0 local_3480;
  undefined4 local_3470;
  undefined1 local_346c;
  undefined8 local_3468;
  undefined8 uStack_3460;
  undefined8 local_3458;
  FLinearColor_u_0 local_3450;
  undefined4 local_3440;
  undefined1 local_343c;
  undefined8 local_3438;
  undefined8 uStack_3430;
  undefined8 local_3428;
  FLinearColor_u_0 local_3420;
  undefined4 local_3410;
  undefined1 local_340c;
  undefined8 local_3408;
  undefined8 uStack_3400;
  undefined8 local_33f8;
  TAttribute<FMargin> local_33f0;
  TAttribute<FMargin> local_33c0;
  TAttribute<FMargin> local_3390;
  TAttribute<FMargin> local_3360;
  SWidget *local_3330;
  TReferenceControllerBase<1> *pTStack_3328;
  code *local_3318 [2];
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3308;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_32f0;
  TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
  local_32d8;
  TSharedRef<SHorizontalBox,1> local_32c0;
  TSharedRef<SBox,1> local_32b0;
  TSharedRef<STextBlock,1> local_32a0;
  TSharedRef<STextBlock,1> local_3290;
  TSharedRef<SBox,1> local_3280;
  TSharedRef<SBox,1> local_3270;
  code *local_3258;
  longlong lStack_3250;
  code *local_3248;
  longlong lStack_3240;
  code *local_3238;
  longlong lStack_3230;
  SWidget *local_3228;
  TReferenceControllerBase<1> *pTStack_3220;
  TSharedRef<SHorizontalBox,1> local_3218;
  TSharedRef<SLinkedBox,1> local_3208;
  TSharedRef<SCheckBox,1> local_31f8;
  TSharedRef<SImage,1> local_31e8;
  FString local_31d8;
  code *local_31c8;
  longlong lStack_31c0;
  undefined1 local_31b8 [8];
  undefined1 local_31b0 [8];
  undefined1 local_31a8 [8];
  undefined1 local_31a0 [8];
  TSharedRef<SImage,1> local_3198;
  FText local_3188;
  FString local_3178;
  FLinearColor_u_0 local_3168;
  undefined4 local_3158;
  undefined1 local_3154;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_3150;
  FSlateIcon local_3138;
  FSlateIcon local_3118;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_30f8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_30e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_30c8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_30b0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_3098;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3080;
  FReadAccessScope local_3068;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3050;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3038;
  undefined8 *local_3020;
  SHorizontalBox *local_3018;
  FSharedReferencer<1> local_3010 [3];
  undefined1 local_2ff8;
  undefined1 local_2ff0 [40];
  FSlotArgumentsMixin local_2fc8;
  undefined8 *local_2f38 [2];
  TReferenceControllerBase<1> *local_2f28;
  undefined8 local_2f20;
  undefined8 uStack_2f18;
  undefined1 local_2f10;
  undefined1 local_2f08 [40];
  FSlotArgumentsMixin local_2ee0;
  FSlateIcon local_2e50;
  TAttribute<FText> local_2e30;
  TAttribute<FText> local_2e00;
  TAttribute<FText> local_2dd0;
  undefined1 local_2da0 [552];
  undefined1 local_2b78 [24];
  FArguments local_2b60;
  FArguments local_2958;
  FSlotArguments local_2750;
  FSlotArguments local_2668;
  FSlotArguments local_2580;
  FArguments local_2498;
  FArguments local_21f0;
  FArguments local_1f48;
  FArguments local_1c08;
  FArguments local_18c8;
  FArguments local_1588;
  FArguments local_1248;
  FArguments local_ee8;
  FArguments local_b08;
  FArguments local_5b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427d5758;
  local_res18[0] = 0;
  local_3830 = (param_1->MenuEntryBlock).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->MenuEntryBlock).Object;
  if (local_3830 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3830->SharedReferenceCount = (atomic<int>)((int)local_3830->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3918.Object = (param_1->MultiBox).Object;
  local_3918.SharedReferenceCount.ReferenceController =
       (param_1->MultiBox).SharedReferenceCount.ReferenceController;
  if (local_3918.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3918.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3918.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->UICommand).Object == (FUICommandInfo *)0x0) {
    pFVar28 = FSlateIcon::FSlateIcon(&local_2e50);
  }
  else {
    pFVar27 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&param_1->UICommand);
    pFVar28 = &local_3138;
    local_3138.StyleSetName = (pFVar27->Icon).StyleSetName;
    local_3138.StyleName = (pFVar27->Icon).StyleName;
    local_3138.SmallStyleName = (pFVar27->Icon).SmallStyleName;
    local_3138.StatusOverlayStyleName = (pFVar27->Icon).StatusOverlayStyleName;
  }
  local_3118.StyleSetName = pFVar28->StyleSetName;
  local_3118.StyleName = pFVar28->StyleName;
  local_3118.SmallStyleName = pFVar28->SmallStyleName;
  local_3118.StatusOverlayStyleName = pFVar28->StatusOverlayStyleName;
  if ((pFVar3 == (FMenuEntryBlock *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  pFVar28 = &pFVar3->IconOverride;
  if ((pFVar28->StyleSetName == (FName)0x0) || ((pFVar3->IconOverride).StyleName == (FName)0x0)) {
    pFVar28 = &local_3118;
  }
  else if ((pFVar3 == (FMenuEntryBlock *)0x0) &&
          (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  if ((((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerMultiBoxWidget.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                          ,0x1e5,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  pIVar4 = param_1->StyleSet;
  local_39e0 = pIVar4;
  if ((local_3918.Object == (FMultiBox *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  FVar70.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar37 = (SColorBlock *)SNullWidget::NullWidget.Object;
  local_39b0 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  local_3988 = -(uint)((local_3918.Object)->bShouldCloseWindowAfterMenuSelection != false) & MouseUp
  ;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar69.ReferenceController = FVar70.ReferenceController;
  if ((pFVar28->StyleSetName != (FName)0x0) && (pFVar28->StyleName != (FName)0x0)) {
    pFVar30 = FSlateIcon::GetIcon(pFVar28);
    if (pFVar30->ResourceName == (FName)0x0) {
      pUVar5 = (pFVar30->ResourceObject).field0_0x0.DebugPtr;
      lVar63 = 0;
      if (pUVar5 != (UObject *)0x0) {
        lVar63 = *(longlong *)&pUVar5->field_0x18;
      }
      if (lVar63 == 0) goto LAB_1427d5a7a;
    }
    pFVar31 = SImage::FArguments::FArguments(&local_2498);
    local_3618 = CONCAT22(local_3618._2_2_,3);
    local_3470 = local_3618;
    local_3628 = ___xmm_3f8000003f800000000000003f800000;
    uStack_3620 = _UNK_15090c6d8;
    local_346c = 1;
    local_3480._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_3480._8_8_ = _UNK_15090c6d8;
    local_3458 = 0;
    local_3468 = 0;
    uStack_3460 = 0;
    pFVar31 = SImage::FArguments::ColorAndOpacity
                        (pFVar31,(TAttribute<FSlateColor> *)&local_3480._s_0);
    local_34d8.bIsSet = true;
    local_34d8.Getter._16_8_ = 0;
    local_34d8.Getter._0_8_ = 0;
    local_34d8.Getter._8_8_ = 0;
    local_34d8.Value = pFVar30;
    pFVar31 = SImage::FArguments::Image(pFVar31,&local_34d8);
    pTVar32 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3050,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x1f8,(T0RequiredArgs *)local_res18);
    pTVar33 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar32,&local_3198,pFVar31);
    FVar69.ReferenceController = (pTVar33->SharedReferenceCount).ReferenceController;
    pSVar37 = (SColorBlock *)pTVar33->Object;
    if (FVar69.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar69.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar69.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_39b0 = FVar69.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3198.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3050._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_2498);
  }
LAB_1427d5a7a:
  fVar73 = (float)(**(code **)((longlong)*pIVar4 + 0x28))
                            (pIVar4,param_1->StyleName,".MenuIconSize",__real_41800000,0);
  FVar70.ReferenceController = FVar69.ReferenceController;
  if (((*(char *)((longlong)&this->_padding_ + 4) != '\0') &&
      (pSVar37 == (SColorBlock *)SNullWidget::NullWidget.Object)) &&
     (pbVar34 = TAttribute<bool>::Get(&FMultiBoxSettings::DisplayMultiboxHooks), *pbVar34 != false))
  {
    this_00 = SColorBlock::FArguments::FArguments(&local_1248);
    local_3798 = 1;
    local_3790._0_8_ = 0;
    local_3790._8_8_ = 0;
    local_37a8._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Magenta.field0_0x0._s_0.R];
    local_37a8._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Magenta.field0_0x0._s_0.G];
    local_37a8._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Magenta.field0_0x0._s_0.B];
    local_3790._16_8_ = 0;
    local_37a8._s_0.A = (float)FColorList::Magenta.field0_0x0._3_1_ * __real_3b808081;
    (this_00->_Color).Value.field0_0x0._s_0.R = local_37a8._s_0.R;
    (this_00->_Color).Value.field0_0x0._s_0.G = local_37a8._s_0.G;
    (this_00->_Color).Value.field0_0x0._s_0.B = local_37a8._s_0.B;
    (this_00->_Color).Value.field0_0x0._s_0.A = local_37a8._s_0.A;
    (this_00->_Color).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_Color).Getter,&local_3790);
    TAttribute<FLinearColor>::~TAttribute<FLinearColor>
              ((TAttribute<FLinearColor> *)&local_37a8._s_0);
    local_3528 = 1;
    local_3538._s_0.X = (double)fVar73;
    local_3520._16_8_ = 0;
    local_3520._0_8_ = 0;
    local_3520._8_8_ = 0;
    (this_00->_Size).Value.field0_0x0._s_0.X = local_3538._s_0.X;
    (this_00->_Size).Value.field0_0x0._s_0.Y = local_3538._s_0.X;
    (this_00->_Size).bIsSet = true;
    local_3538._s_0.Y = local_3538._s_0.X;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_Size).Getter,&local_3520);
    TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
              ((TAttribute<UE::Math::TVector2<double>_> *)&local_3538._s_0);
    pFVar35 = FText::AsLocalizable_Advanced_LocText
                        (&local_3188,L"SMenuEntryBlock",L"MissingIconInMenu",
                         L"This menu entry is missing an icon and should be fixed (consistency within each section is required, either every entry in the section has an icon or no entries have an icon)"
                        );
    pTVar36 = TAttribute<FText>::TAttribute<FText>(&local_2e30,pFVar35);
    TAttribute<FText>::operator=((TAttribute<FText> *)this_00,pTVar36);
    TAttribute<FText>::~TAttribute<FText>(pTVar36);
    FLLMScope::FLLMScope(&local_39c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_37b8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_37b0,&local_37b8,true);
    TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
              (&local_3978,"SColorBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
               ,0x205,local_res20);
    FMemScope::~FMemScope(&local_37b0);
    FLLMScope::~FLLMScope(&local_39c8);
    pSVar37 = TSharedPtr<SColorBlock,1>::operator->(&local_3978._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar37,(FSlateBaseNamedArgs *)this_00);
    pSVar37 = local_3978._Widget.Object;
    SColorBlock::Construct(local_3978._Widget.Object,this_00);
    pSVar38 = TSharedPtr<SColorBlock,1>::operator->(&local_3978._Widget);
    SWidget::CacheVolatility((SWidget *)pSVar38);
    pSVar38 = TSharedPtr<SColorBlock,1>::operator->(&local_3978._Widget);
    pbVar1 = (byte *)((longlong)&pSVar38->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_3978._Widget.Object == (SColorBlock *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar23)) {
      pcVar11 = (code *)swi(3);
      pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
      return pTVar29;
    }
    FVar70.ReferenceController = local_3978._Widget.SharedReferenceCount.ReferenceController;
    local_3978._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_3978._Widget.Object = (SColorBlock *)0x0;
    if ((pSVar37 == (SColorBlock *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar23)) {
      pcVar11 = (code *)swi(3);
      pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
      return pTVar29;
    }
    if (FVar70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_39b0 = FVar70.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar69.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_3188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3188.TextData.Reference + 0x10))();
    }
    SColorBlock::FArguments::~FArguments(&local_1248);
  }
  if ((pFVar3 == (FMenuEntryBlock *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  EVar71 = pFVar3->UserInterfaceActionType;
  if ((param_1->UICommand).Object != (FUICommandInfo *)0x0) {
    pFVar27 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&param_1->UICommand);
    EVar71 = pFVar27->UserInterfaceType;
  }
  local_39fc = (uint)(byte)EVisibility::Collapsed.Value.Value;
  EVar12.Value.Value = EVisibility::Visible.Value.Value;
  if (2 < (byte)(EVar71 - ToggleButton)) {
    EVar12.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  if ((((pFVar3->EntryWidget).Object == (SWidget *)0x0) || (EVar71 != Button)) &&
     (EVar71 != CollapsedButton)) {
    this_01 = TSharedPtr<FMultiBox_const_,1>::operator->(&local_3918);
    bVar23 = FMultiBox::IsInEditMode(this_01);
    if (bVar23) {
      EVar12 = EVisibility::Collapsed;
    }
    local_39fc = (uint)(byte)EVar12.Value.Value;
  }
  local_3604 = CONCAT22(local_3604._2_2_,4);
  local_3938 = local_3604;
  local_3934 = 1;
  local_3888 = param_1->StyleName;
  local_3614 = ___xmm_3f8000003f800000000000003f800000;
  uStack_360c = _UNK_15090c6d8;
  local_3920 = 0;
  local_3948 = ___xmm_3f8000003f800000000000003f800000;
  uStack_3940 = _UNK_15090c6d8;
  local_3930 = (undefined1  [8])0x0;
  FStack_3928.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_3558,".CheckBox");
  pFVar39 = ::FName::ToString(&local_3888,&local_3178);
  ::FString::ConcatFF(&local_3818,pFVar39,&local_3558);
  FVar68.Data = (FScriptContainerElement *)L"";
  if (local_3818.Data.ArrayNum != 0) {
    FVar68.Data = local_3818.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_39e8,(wchar_t *)FVar68.Data);
  if (local_3818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3818.Data.AllocatorInstance.Data);
  }
  if (local_3178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3178.Data.AllocatorInstance.Data);
  }
  if (local_3558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3558.Data.AllocatorInstance.Data);
  }
  FVar47 = pFVar3->CheckBoxStyle;
  if (pFVar3->CheckBoxStyle == (FName)0x0) {
    if (EVar71 == Check) {
      FVar47 = (FName)local_31b8;
    }
    else {
      FVar47 = local_39e8;
      if (EVar71 != RadioButton) goto LAB_1427d5f96;
      FVar47 = (FName)local_31b0;
    }
    FVar47 = ISlateStyle::Join(FVar47,(char *)param_1->StyleName);
    FVar47 = *(FName *)FVar47;
  }
LAB_1427d5f96:
  local_39e8 = FVar47;
  local_3990.ReferenceController = (pFVar3->EntryWidget).SharedReferenceCount.ReferenceController;
  local_3998 = (SHorizontalBox *)(pFVar3->EntryWidget).Object;
  if (local_3990.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3990.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3990.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_3998 == (SHorizontalBox *)0x0) {
    local_39d8 = (SHorizontalBox *)SHorizontalBox::FArguments::FArguments(&local_2b60);
    pFVar40 = SHorizontalBox::Slot(&local_2580);
    pFVar40 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar40);
    local_33f0.bIsSet = true;
    local_33f0.Value.Left = ___xmm_0000000040c000000000000040000000;
    local_33f0.Value.Top = _UNK_1509579a4;
    local_33f0.Value.Right = _UNK_1509579a8;
    local_33f0.Value.Bottom = _UNK_1509579ac;
    local_33f0.Getter._16_8_ = 0;
    local_33f0.Getter._0_8_ = 0;
    local_33f0.Getter._8_8_ = 0;
    local_39f8 = (FArguments *)
                 TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar40->field_0x18,&local_33f0);
    pFVar41 = SBox::FArguments::FArguments(&local_18c8);
    local_3678.bIsSet = true;
    local_3678.Value = EVisibility::Collapsed;
    if (pSVar37 != (SColorBlock *)SNullWidget::NullWidget.Object) {
      local_3678.Value = EVisibility::Visible;
    }
    local_3678.Getter._0_8_ = 0;
    local_3678.Getter._8_8_ = 0;
    local_3678.Getter._16_8_ = 0;
    pFVar41 = TSlateBaseNamedArgs<SBox>::Visibility
                        ((TSlateBaseNamedArgs<SBox> *)pFVar41,&local_3678);
    local_36f8.bIsSet = true;
    local_36f8.Getter._16_8_ = 0;
    local_36f8.Value.Size = fVar73 + __real_40000000;
    local_36f8.Getter._0_8_ = 0;
    local_36f8.Getter._8_8_ = 0;
    pFVar41 = SBox::FArguments::WidthOverride(pFVar41,&local_36f8);
    local_36d8.bIsSet = true;
    local_36d8.Getter._16_8_ = 0;
    local_36d8.Getter._0_8_ = 0;
    local_36d8.Getter._8_8_ = 0;
    local_36d8.Value.Size = fVar73;
    pFVar41 = SBox::FArguments::HeightOverride(pFVar41,&local_36d8);
    pFVar41->_HAlign = HAlign_Center;
    pFVar41->_VAlign = VAlign_Center;
    pFVar42 = SBox::FArguments::FArguments(&local_1c08);
    local_36b8.bIsSet = true;
    local_36b8.Getter._16_8_ = 0;
    local_36b8.Getter._0_8_ = 0;
    local_36b8.Getter._8_8_ = 0;
    local_36b8.Value.Size = fVar73;
    pFVar42 = SBox::FArguments::WidthOverride(pFVar42,&local_36b8);
    local_3718.Getter._16_8_ = 0;
    local_3718.bIsSet = true;
    local_3718.Getter._0_8_ = 0;
    local_3718.Getter._8_8_ = 0;
    local_3718.Value.Size = fVar73;
    pFVar42 = SBox::FArguments::HeightOverride(pFVar42,&local_3718);
    if (FVar70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3330 = (pFVar42->_Content).Widget.Object;
    pTStack_3328 = (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar42->_Content).Widget.Object = (SWidget *)pSVar37;
    (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController = FVar70.ReferenceController
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3328);
    pTVar43 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_30b0,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x251,&local_3a08);
    pTVar44 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar43,&local_3270,pFVar42);
    pTVar65 = (pTVar44->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar44->Object;
    if (pTVar65 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar65->SharedReferenceCount = (atomic<int>)((int)pTVar65->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar65->SharedReferenceCount = (atomic<int>)((int)pTVar65->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38e8 = (pFVar41->_Content).Widget.Object;
    pTStack_38e0 = (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar41->_Content).Widget.Object = (SWidget *)pSVar6;
    (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar65;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_38e0);
    FLLMScope::FLLMScope(&local_39c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3880 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3878,&local_3880,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_3308,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
               ,0x24a,&local_3a07);
    FMemScope::~FMemScope(&local_3878);
    FLLMScope::~FLLMScope(&local_39c4);
    pTVar44 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_3308,&local_3280,pFVar41);
    local_3598.Object = (SWidget *)pTVar44->Object;
    local_3980 = (FSlot *)(pTVar44->SharedReferenceCount).ReferenceController;
    if (local_3980 != (FSlot *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_3980)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3980)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_3598.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3980;
    pFVar40 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_39f8,&local_3598);
    pFVar45 = SHorizontalBox::FArguments::operator+((FArguments *)local_39d8,pFVar40);
    pFVar40 = SHorizontalBox::Slot(&local_2668);
    local_3778.Value = 1.0;
    local_3778.bIsSet = true;
    local_3778.Getter._0_8_ = 0;
    local_3778.Getter._8_8_ = 0;
    local_3778.Getter._16_8_ = 0;
    pFVar40 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar40,&local_3778);
    local_33c0.bIsSet = true;
    local_33c0.Value.Left = ___xmm_0000000040c000000000000040000000;
    local_33c0.Value.Top = _UNK_1509579a4;
    local_33c0.Value.Right = _UNK_1509579a8;
    local_33c0.Value.Bottom = _UNK_1509579ac;
    local_33c0.Getter._16_8_ = 0;
    local_33c0.Getter._0_8_ = 0;
    local_33c0.Getter._8_8_ = 0;
    pFVar40 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar40->field_0x18,&local_33c0);
    if (local_3820 != (undefined4 *)&pFVar40->field_0x50) {
      *(undefined4 *)&pFVar40->field_0x50 = 2;
      pFVar40->field_0x54 = 1;
    }
    pFVar64 = (FSlotArguments *)0x0;
    if (pFVar40 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar64 = pFVar40;
    }
    pFVar46 = STextBlock::FArguments::FArguments(&local_5b0);
    FVar47 = ISlateStyle::Join((FName)local_31a8,(char *)param_1->StyleName);
    pFVar46 = STextBlock::FArguments::TextStyle(pFVar46,local_39e0,(FName *)FVar47,(char *)0x0);
    pTVar36 = TAttribute<FText>::TAttribute<FText>(&local_2e00,&param_1->Label);
    pFVar46 = STextBlock::FArguments::Text(pFVar46,pTVar36);
    uStack_39cc = uStack_35d0._4_4_;
    local_39d8 = (SHorizontalBox *)SMultiBoxWidget::GetSearchText;
    uStack_39d0 = 0;
    local_38f8 = (SMultiBoxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
              (&local_38f0,(FWeakReferencer<1> *)&this->_padding_);
    if (local_38f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_38f8 = (SMultiBoxWidget *)this->_padding_;
    }
    local_3318[1]._4_4_ = uStack_39cc;
    local_3318[1]._0_4_ = uStack_39d0;
    local_3318[0] = (code *)local_39d8;
    TAttribute<FText>::Bind<SMultiBoxWidget>
              (&pFVar46->_HighlightText,local_38f8,(pmf_35343c35 *)local_3318);
    pTVar48 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_30c8,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x25e,&local_3a06);
    pTVar49 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar48,&local_3290,pFVar46);
    pTVar7 = (pTVar49->SharedReferenceCount).ReferenceController;
    local_3588.Object = (SWidget *)pTVar49->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3588.SharedReferenceCount.ReferenceController = pTVar7;
    pFVar40 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar64,&local_3588);
    local_39f8 = SHorizontalBox::FArguments::operator+(pFVar45,pFVar40);
    pFVar40 = SHorizontalBox::Slot(&local_2750);
    pFVar40 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar40);
    local_3390.bIsSet = true;
    local_3390.Getter._16_8_ = 0;
    local_3390.Value.Left = ___xmm_00000000000000000000000041c80000;
    local_3390.Value.Top = _UNK_150957964;
    local_3390.Value.Right = _UNK_150957968;
    local_3390.Value.Bottom = _UNK_15095796c;
    local_3390.Getter._0_8_ = 0;
    local_3390.Getter._8_8_ = 0;
    pFVar40 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar40->field_0x18,&local_3390);
    if (local_37c8 != (undefined4 *)&pFVar40->field_0x50) {
      *(undefined4 *)&pFVar40->field_0x50 = 2;
      pFVar40->field_0x54 = 1;
    }
    pFVar64 = (FSlotArguments *)0x0;
    if (pFVar40 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar64 = pFVar40;
    }
    puVar2 = &pFVar64->field_0x48;
    if (local_37c0 != (undefined4 *)puVar2) {
      *(undefined4 *)puVar2 = 3;
      pFVar64->field_0x4c = 1;
    }
    local_39d8 = (SHorizontalBox *)(FSlotArguments *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      local_39d8 = (SHorizontalBox *)pFVar64;
    }
    pFVar41 = SBox::FArguments::FArguments(&local_1f48);
    pFVar35 = TAttribute<FText>::Get(&param_1->InputBinding);
    bVar23 = FText::IsEmpty(pFVar35);
    local_3738.Value = EVisibility::Visible;
    if (bVar23) {
      local_3738.Value = EVisibility::Collapsed;
    }
    local_3738.bIsSet = true;
    local_3738.Getter._16_8_ = 0;
    local_3738.Getter._0_8_ = 0;
    local_3738.Getter._8_8_ = 0;
    pFVar41 = TSlateBaseNamedArgs<SBox>::Visibility
                        ((TSlateBaseNamedArgs<SBox> *)pFVar41,&local_3738);
    local_3360.bIsSet = true;
    local_3360.Getter._16_8_ = 0;
    local_3360.Value.Left = ___xmm_00000000408000000000000041800000;
    local_3360.Value.Top = _UNK_150957984;
    local_3360.Value.Right = _UNK_150957988;
    local_3360.Value.Bottom = _UNK_15095798c;
    local_3360.Getter._0_8_ = 0;
    local_3360.Getter._8_8_ = 0;
    pFVar41 = SBox::FArguments::Padding(pFVar41,&local_3360);
    pFVar46 = STextBlock::FArguments::FArguments(&local_b08);
    FVar47 = ISlateStyle::Join((FName)local_31a0,(char *)param_1->StyleName);
    pFVar46 = STextBlock::FArguments::TextStyle(pFVar46,local_39e0,(FName *)FVar47,(char *)0x0);
    local_35f0 = CONCAT22(local_35f0._2_2_,3);
    local_3440 = local_35f0;
    local_3428 = 0;
    local_3600 = ___xmm_3f8000003f800000000000003f800000;
    uStack_35f8 = _UNK_15090c6d8;
    local_343c = 1;
    local_3450._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_3450._8_8_ = _UNK_15090c6d8;
    local_3438 = 0;
    uStack_3430 = 0;
    pFVar46 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar46,(TAttribute<FSlateColor> *)&local_3450._s_0);
    pTVar36 = TAttribute<FText>::TAttribute<FText>(&local_2dd0,&param_1->InputBinding);
    pFVar46 = STextBlock::FArguments::Text(pFVar46,pTVar36);
    pTVar48 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_30e0,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x26d,&local_3a05);
    pTVar49 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar48,&local_32a0,pFVar46);
    pTVar8 = (pTVar49->SharedReferenceCount).ReferenceController;
    pSVar9 = pTVar49->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3908 = (pFVar41->_Content).Widget.Object;
    pTStack_3900 = (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar41->_Content).Widget.Object = (SWidget *)pSVar9;
    (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3900);
    pTVar43 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_30f8,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x269,&local_3a04);
    pTVar44 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar43,&local_32b0,pFVar41);
    pTVar10 = (pTVar44->SharedReferenceCount).ReferenceController;
    local_3568.Object = (SWidget *)pTVar44->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3568.SharedReferenceCount.ReferenceController = pTVar10;
    pFVar40 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_39d8,&local_3568);
    pFVar45 = SHorizontalBox::FArguments::operator+(local_39f8,pFVar40);
    this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_3038,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x244,&local_3a03);
    pTVar50 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,&local_32c0,pFVar45);
    local_3800.ReferenceController = (pTVar50->SharedReferenceCount).ReferenceController;
    local_3998 = pTVar50->Object;
    if (local_3800.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3800.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3800.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3808 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3990,&local_3800);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3800.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32c0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3038._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30f8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30e0._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_b08);
    SBox::FArguments::~FArguments(&local_1f48);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2750);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3290.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30c8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38f0.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_5b0);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2668);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3980);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3280.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3308._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar65);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3270.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30b0._Widget.SharedReferenceCount.ReferenceController);
    SBox::FArguments::~FArguments(&local_1c08);
    SBox::FArguments::~FArguments(&local_18c8);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2580);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_2b60._Slots.AllocatorInstance.Data,local_2b60._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_2b60._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_2b60._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2b60);
  }
  pFVar52 = (FSlot *)0x0;
  local_39d8 = (SHorizontalBox *)SHorizontalBox::FArguments::FArguments(&local_2958);
  pFVar51 = ::operator_new(0x58);
  if (pFVar51 != (FSlot *)0x0) {
    *(undefined8 *)pFVar51 = 0;
    *(undefined8 *)&pFVar51->field_0x8 = 0;
    *(undefined8 *)&pFVar51->field_0x10 = 0;
    *(undefined8 *)&pFVar51->field_0x18 = 0;
    *(undefined8 *)&pFVar51->field_0x20 = 0;
    *(undefined8 *)&pFVar51->field_0x28 = 0;
    *(undefined8 *)&pFVar51->field_0x30 = 0;
    *(undefined8 *)&pFVar51->field_0x38 = 0;
    *(undefined8 *)&pFVar51->field_0x40 = 0;
    *(undefined8 *)&pFVar51->field_0x48 = 0;
    *(undefined8 *)&pFVar51->field_0x50 = 0;
    pFVar52 = SHorizontalBox::FSlot::FSlot(pFVar51);
  }
  local_3980 = pFVar52;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2f38,(FSlot *)&local_3980);
  local_38c8 = 1;
  local_38b0 = 0;
  local_38d8 = ___xmm_00000000410000000000000040000000;
  uStack_38d0 = _UNK_1509579b8;
  local_2f10 = 1;
  local_38c0 = (undefined1  [8])0x0;
  FStack_38b8.Data = (FScriptContainerElement *)0x0;
  local_2f20 = ___xmm_00000000410000000000000040000000;
  uStack_2f18 = _UNK_1509579b8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f08,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38c0,
             (FWriteAccessScope *)&local_34b0);
  if (((int)local_38b0 != 0) && (FStack_38b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38b8,0,0,0x10);
    local_38b0 = local_38b0 & 0xffffffff00000000;
  }
  if (local_34b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_34b0.Accessor,&local_34b0);
  }
  if (FStack_38b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38c0);
  pFVar40 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_2f38);
  pFVar53 = SLinkedBox::FArguments::FArguments(&local_1588);
  if (EVar71 == Check) {
    pFVar31 = SImage::FArguments::FArguments(&local_21f0);
    local_3758.Value.Value.Value = SUB41(local_39fc,0);
    local_3758.bIsSet = true;
    local_3758.Getter._0_8_ = 0;
    local_3758.Getter._8_8_ = 0;
    local_3758.Getter._16_8_ = 0;
    pFVar31 = TSlateBaseNamedArgs<SImage>::Visibility
                        ((TSlateBaseNamedArgs<SImage> *)pFVar31,&local_3758);
    local_35dc = CONCAT22(local_35dc._2_2_,2);
    local_3410 = local_35dc;
    local_35ec = ___xmm_3f8000003f800000000000003f800000;
    uStack_35e4 = _UNK_15090c6d8;
    local_340c = 1;
    local_3420._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_3420._8_8_ = _UNK_15090c6d8;
    local_33f8 = 0;
    local_3408 = 0;
    uStack_3400 = 0;
    pFVar31 = SImage::FArguments::ColorAndOpacity
                        (pFVar31,(TAttribute<FSlateColor> *)&local_3420._s_0);
    pFVar54 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                        (local_39e0,local_39e8,(char *)0x0,(FCheckBoxStyle *)0x0);
    local_39f8 = (FArguments *)GetCheckBoxImageBrushFromStyle;
    uStack_39f0 = 0;
    lStack_3250 = (ulonglong)uStack_39ec << 0x20;
    local_3258 = GetCheckBoxImageBrushFromStyle;
    pFVar31 = SImage::FArguments::Image<SMenuEntryBlock,FCheckBoxStyle_const_*>
                        (pFVar31,this,(pmf_bc4ac88c *)&local_3258,pFVar54);
    pTVar32 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3080,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x280,&local_3a02);
    pTVar33 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar32,&local_31e8,pFVar31);
    pTVar65 = (pTVar33->SharedReferenceCount).ReferenceController;
    pSVar67 = (SCheckBox *)pTVar33->Object;
    if (pTVar65 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar65->SharedReferenceCount = (atomic<int>)((int)pTVar65->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar20 = true;
    bVar19 = true;
    bVar18 = true;
    bVar17 = false;
    bVar16 = false;
    bVar15 = false;
    bVar23 = true;
    local_35b8 = pSVar67;
    local_35b0 = pTVar65;
  }
  else {
    pFVar55 = SCheckBox::FArguments::FArguments(&local_ee8);
    local_3698.Value.Value.Value = SUB41(local_39fc,0);
    local_3698.bIsSet = true;
    local_3698.Getter._0_8_ = 0;
    local_3698.Getter._8_8_ = 0;
    local_3698.Getter._16_8_ = 0;
    pFVar55 = TSlateBaseNamedArgs<SCheckBox>::Visibility
                        ((TSlateBaseNamedArgs<SCheckBox> *)pFVar55,&local_3698);
    local_3158 = local_3938;
    local_3154 = local_3934;
    local_3168._0_8_ = local_3948;
    local_3168._8_8_ = uStack_3940;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_3150,
               (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_3930);
    pFVar55 = SCheckBox::FArguments::ForegroundColor
                        (pFVar55,(TAttribute<FSlateColor> *)&local_3168._s_0);
    local_39f8 = (FArguments *)IsChecked;
    uStack_39f0 = 0;
    lStack_3240 = (ulonglong)uStack_39ec << 0x20;
    local_3248 = IsChecked;
    pFVar55 = SCheckBox::FArguments::IsChecked<SMenuEntryBlock>
                        (pFVar55,this,(pmf_94171326 *)&local_3248);
    pFVar55 = SCheckBox::FArguments::Style(pFVar55,local_39e0,&local_39e8,(char *)0x0);
    uStack_39f0 = 0;
    local_39f8 = (FArguments *)OnCheckStateChanged;
    lStack_3230 = (ulonglong)uStack_39ec << 0x20;
    local_3238 = OnCheckStateChanged;
    pFVar55 = SCheckBox::FArguments::OnCheckStateChanged<SMenuEntryBlock>
                        (pFVar55,this,(pmf_04d84020 *)&local_3238);
    this_03 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_3098,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x284,&local_3a01);
    pTVar56 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_31f8,pFVar55);
    pTVar65 = (pTVar56->SharedReferenceCount).ReferenceController;
    pSVar67 = pTVar56->Object;
    if (pTVar65 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar65->SharedReferenceCount = (atomic<int>)((int)pTVar65->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar20 = false;
    bVar19 = false;
    bVar18 = false;
    bVar17 = true;
    bVar16 = true;
    bVar15 = true;
    bVar23 = false;
    local_3548 = pSVar67;
    local_3540 = pTVar65;
  }
  lVar63 = 0;
  if (pTVar65 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar65->SharedReferenceCount = (atomic<int>)((int)pTVar65->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3228 = (pFVar53->_Content).Widget.Object;
  pTStack_3220 = (pFVar53->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar53->_Content).Widget.Object = (SWidget *)pSVar67;
  (pFVar53->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar65;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3220);
  pTVar65 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar65 == (TReferenceControllerBase<1> *)0x0) {
LAB_1427d6e64:
    bVar72 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar72) {
      pcVar11 = (code *)swi(3);
      pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
      return pTVar29;
    }
  }
  else {
    aVar21 = pTVar65->SharedReferenceCount;
    do {
      if (aVar21 == (atomic<int>)0x0) {
        pTVar65 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427d6e64;
      }
      LOCK();
      aVar26 = pTVar65->SharedReferenceCount;
      bVar72 = aVar21 == aVar26;
      if (bVar72) {
        pTVar65->SharedReferenceCount = (atomic<int>)((int)aVar21 + 1);
        aVar26 = aVar21;
      }
      UNLOCK();
      aVar21 = aVar26;
    } while (!bVar72);
    lVar63 = this->_padding_;
    if (lVar63 == 0) goto LAB_1427d6e64;
  }
  if ((*(longlong *)(lVar63 + 0x558) == 0) &&
     (bVar72 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar72)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  local_3898.Object = *(FLinkedBoxManager **)(lVar63 + 0x558);
  local_3898.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(lVar63 + 0x560);
  if (local_3898.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3898.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_3898.Object == (FLinkedBoxManager *)0x0) &&
     (bVar72 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar72)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  local_3868.Arg0 = &local_3898;
  FLLMScope::FLLMScope(&local_39c0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3870 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3860,&local_3870,true);
  TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>::
  TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
            (&local_32d8,"SLinkedBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x27c,&local_3868);
  FMemScope::~FMemScope(&local_3860);
  FLLMScope::~FLLMScope(&local_39c0);
  pTVar57 = TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
            ::operator<<=(&local_32d8,&local_3208,pFVar53);
  pTVar7 = (pTVar57->SharedReferenceCount).ReferenceController;
  local_39a8 = pTVar57->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_39a0.ReferenceController = pTVar7;
  if ((SLinkedBox **)&pFVar40->field_0x8 != &local_39a8) {
    *(SLinkedBox **)&pFVar40->field_0x8 = local_39a8;
    local_39a8 = (SLinkedBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_39a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39a0.ReferenceController);
  pFVar45 = SHorizontalBox::FArguments::operator+((FArguments *)local_39d8,pFVar40);
  pFVar51 = ::operator_new(0x58);
  local_3858 = (FSlot *)0x0;
  if (pFVar51 != (FSlot *)0x0) {
    *(undefined8 *)pFVar51 = 0;
    *(undefined8 *)&pFVar51->field_0x8 = 0;
    *(undefined8 *)&pFVar51->field_0x10 = 0;
    *(undefined8 *)&pFVar51->field_0x18 = 0;
    *(undefined8 *)&pFVar51->field_0x20 = 0;
    *(undefined8 *)&pFVar51->field_0x28 = 0;
    *(undefined8 *)&pFVar51->field_0x30 = 0;
    *(undefined8 *)&pFVar51->field_0x38 = 0;
    *(undefined8 *)&pFVar51->field_0x40 = 0;
    *(undefined8 *)&pFVar51->field_0x48 = 0;
    *(undefined8 *)&pFVar51->field_0x50 = 0;
    local_3858 = SHorizontalBox::FSlot::FSlot(pFVar51);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_3020,(FSlot *)&local_3858);
  local_3648 = 1;
  local_3630 = 0;
  local_3658 = ___xmm_00000000000000000000000040000000;
  uStack_3650 = _UNK_15094b718;
  local_2ff8 = 1;
  local_3640 = (undefined1  [8])0x0;
  pvStack_3638 = (void *)0x0;
  local_3010[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_00000000000000000000000040000000;
  local_3010[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_15094b718;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ff0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3640);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3640);
  if (pvStack_3638 != (void *)0x0) {
    FMemory::Free(pvStack_3638);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3640);
  pSVar22 = local_3998;
  if ((local_3998 == (SHorizontalBox *)0x0) &&
     (bVar72 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar72)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  FVar70.ReferenceController = local_3990.ReferenceController;
  if (local_3990.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3990.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3990.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar22 == (SHorizontalBox *)0x0) &&
     (bVar72 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar72)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  local_37f0.ReferenceController = FVar70.ReferenceController;
  if (FVar70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3018 = pSVar22;
  local_37f8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_3010,&local_37f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37f0.ReferenceController);
  pFVar45 = SHorizontalBox::FArguments::operator+(pFVar45,(FSlotArguments *)&local_3020);
  FLLMScope::FLLMScope(&local_39bc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3850 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3828,&local_3850,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_32f0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x277,&local_3a00);
  FMemScope::~FMemScope(&local_3828);
  FLLMScope::~FLLMScope(&local_39bc);
  pTVar50 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_32f0,&local_3218,pFVar45);
  pTVar8 = (pTVar50->SharedReferenceCount).ReferenceController;
  local_39d8 = pTVar50->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3218.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar70.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2fc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ff0);
  if ((void *)local_2ff0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ff0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ff0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3010[0].ReferenceController);
  if (local_3020 != (undefined8 *)0x0) {
    (**(code **)*local_3020)(local_3020,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3208.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3898.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar65);
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31f8.SharedReferenceCount.ReferenceController);
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3098._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar17) {
    SCheckBox::FArguments::~FArguments(&local_ee8);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_35b0);
  }
  if (bVar19) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31e8.SharedReferenceCount.ReferenceController);
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3080._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar23) {
    SImage::FArguments::~FArguments(&local_21f0);
  }
  SLinkedBox::FArguments::~FArguments(&local_1588);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2ee0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f08);
  if ((void *)local_2f08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f28);
  if (local_2f38[0] != (undefined8 *)0x0) {
    (**(code **)*local_2f38[0])(local_2f38[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2958._Slots.AllocatorInstance.Data,local_2958._Slots.ArrayNum);
  if ((FSlotArguments *)local_2958._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2958._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2958);
  pFVar58 = SMenuEntryButton::FArguments::FArguments((FArguments *)local_2da0);
  local_3848 = param_1->StyleName;
  ::FString::FString(&local_35c8,".Button");
  pFVar39 = ::FName::ToString(&local_3848,&local_31d8);
  ::FString::ConcatFF(&local_37e8,pFVar39,&local_35c8);
  FVar68.Data = (FScriptContainerElement *)L"";
  if (local_37e8.Data.ArrayNum != 0) {
    FVar68.Data = local_37e8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_3840,(wchar_t *)FVar68.Data);
  if (local_37e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_37e8.Data.AllocatorInstance.Data);
  }
  if (local_31d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_31d8.Data.AllocatorInstance.Data);
  }
  if (local_35c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_35c8.Data.AllocatorInstance.Data);
  }
  pIVar4 = local_39e0;
  pFVar59 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                      (local_39e0,local_3840,(char *)0x0,(FButtonStyle *)0x0);
  pFVar58->_ButtonStyle = pFVar59;
  pFVar58->_ClickMethod = local_3988;
  puVar60 = (undefined8 *)
            (**(code **)((longlong)*pIVar4 + 0x48))
                      (pIVar4,param_1->StyleName,".Block.Padding",&FStyleDefaults::DefaultMargin,0);
  uVar13 = *puVar60;
  uVar14 = puVar60[1];
  (pFVar58->_ContentPadding).Left = (float)(int)uVar13;
  (pFVar58->_ContentPadding).Top = (float)(int)((ulonglong)uVar13 >> 0x20);
  (pFVar58->_ContentPadding).Right = (float)(int)uVar14;
  (pFVar58->_ContentPadding).Bottom = (float)(int)((ulonglong)uVar14 >> 0x20);
  local_3578 = 0;
  pTStack_3570 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::ToolTipConstructor,&local_3068);
  pIVar66 = (IToolTip *)0x0;
  if (FMultiBoxSettings::ToolTipConstructor._16_4_ != 0) {
    pIVar66 = (IToolTip *)FMultiBoxSettings::ToolTipConstructor._8_8_;
  }
  (**(code **)((longlong)*pIVar66 + 0x60))
            (pIVar66,&local_37d8,&param_1->ToolTip,&local_3578,&param_1->UICommand,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3068);
  local_3508.Value.Object = (IToolTip *)(local_37d8 + 0x2a8);
  if (local_37d8 == 0) {
    local_3508.Value.Object = (IToolTip *)0x0;
  }
  local_3508.Value.SharedReferenceCount.ReferenceController = local_37d0;
  if (local_37d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_37d0->SharedReferenceCount = (atomic<int>)((int)local_37d0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3508.bIsSet = true;
  local_3508.Getter._16_8_ = 0;
  local_3508.Getter._0_8_ = 0;
  local_3508.Getter._8_8_ = 0;
  TAttribute<TSharedPtr<IToolTip,1>_>::operator=
            ((TAttribute<TSharedPtr<IToolTip,1>_> *)&pFVar58->_padding_,&local_3508);
  TAttribute<TSharedPtr<IToolTip,1>_>::~TAttribute<TSharedPtr<IToolTip,1>_>(&local_3508);
  local_38a8 = (FName)OnMenuItemButtonClicked;
  uStack_38a0 = 0;
  lStack_31c0 = (ulonglong)uStack_389c << 0x20;
  local_31c8 = OnMenuItemButtonClicked;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SMenuEntryBlock>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar58->_OnClicked,this,(pmf_f4a74f51 *)&local_31c8);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_35d8 = (pFVar58->_Content).Widget.Object;
  uStack_35d0 = (pFVar58->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar58->_Content).Widget.Object = (SWidget *)local_39d8;
  (pFVar58->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_35d0);
  FLLMScope::FLLMScope(local_39b8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_38a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3838,&local_38a8,true);
  TSlateDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuEntryButton,RequiredArgs::T0RequiredArgs>
            (&local_3960,"SMenuEntryButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x293,local_39ff);
  FMemScope::~FMemScope(&local_3838);
  FLLMScope::~FLLMScope(local_39b8);
  pSVar61 = TSharedPtr<SMenuEntryButton,1>::operator->(&local_3960._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar61,(FSlateBaseNamedArgs *)pFVar58);
  pSVar61 = local_3960._Widget.Object;
  SMenuEntryButton::Construct(local_3960._Widget.Object,pFVar58);
  pSVar62 = TSharedPtr<SMenuEntryButton,1>::operator->(&local_3960._Widget);
  if ((pSVar62->_padding_ & 0x10) == 0) {
    cVar24 = (**(code **)(pSVar62->_padding_ + 0x228))(pSVar62);
    bVar25 = 0;
    if (cVar24 == '\0') goto LAB_1427d774c;
  }
  bVar25 = 0x20;
LAB_1427d774c:
  *(byte *)&pSVar62->_padding_ = (byte)pSVar62->_padding_ & 0xdf;
  *(byte *)&pSVar62->_padding_ = (byte)pSVar62->_padding_ | bVar25;
  pSVar62 = TSharedPtr<SMenuEntryButton,1>::operator->(&local_3960._Widget);
  pbVar1 = (byte *)((longlong)&pSVar62->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3960._Widget.Object == (SMenuEntryButton *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  FVar70.ReferenceController = local_3960._Widget.SharedReferenceCount.ReferenceController;
  local_3960._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3960._Widget.Object = (SMenuEntryButton *)0x0;
  if ((pSVar61 == (SMenuEntryButton *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar11)();
    return pTVar29;
  }
  local_35a8.Object = (SWidget *)pSVar61;
  local_35a8.SharedReferenceCount.ReferenceController = FVar70.ReferenceController;
  if (FVar70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_37d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3570);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b78);
  if ((void *)local_2b78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2b78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2da0._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2da0);
  TSharedPtr<SWidget,1>::ToSharedRef(&local_35a8,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3990.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3930,
             (FWriteAccessScope *)&local_3498);
  if (((int)local_3920 != 0) && (FStack_3928.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3928.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3928,0,0,0x10);
    local_3920 = local_3920 & 0xffffffff00000000;
  }
  if (local_3498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3498.Accessor,&local_3498);
  }
  if (FStack_3928.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3928.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3930);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_39b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3918.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3830);
  return __return_storage_ptr__;
}

// BuildMultiBlockWidget @ 1427dc110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMenuEntryBlock::BuildMultiBlockWidget(SMenuEntryBlock *this,ISlateStyle *param_1,FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMenuEntryBlock *pFVar2;
  ITextData *pIVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  atomic<int> aVar9;
  undefined8 uVar10;
  FMultiBox *pFVar11;
  FSharedReferencer<1> FVar12;
  char cVar13;
  bool bVar14;
  atomic<int> aVar15;
  TSharedRef<FMultiBox_const_,1> *pTVar16;
  UObject *pUVar17;
  FText *pFVar18;
  TAttribute<FText> *pTVar19;
  FMultiBlock *pFVar20;
  undefined8 *puVar21;
  TSharedRef<SWidget,1> *pTVar22;
  TSharedRef<FTagMetaData,1> *pTVar23;
  TAttribute<bool> *pTVar24;
  TSharedRef<SWidget_const_,1> *pTVar25;
  ulong64 uVar26;
  SMultiBoxWidget *pSVar27;
  SMultiBoxWidget *pSVar28;
  SMultiBoxWidget *pSVar29;
  TRefCountPtr<ITextData> TVar30;
  TStatId *pTVar31;
  bool bVar32;
  TReferenceControllerBase<1> *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSharedPtr<SWidget,1> local_5c8;
  undefined1 local_5b8 [72];
  undefined1 local_570 [8];
  ForAnyElementType FStack_568;
  ulonglong local_560;
  undefined1 local_558 [24];
  undefined1 local_540 [8];
  ForAnyElementType FStack_538;
  ulonglong local_530;
  FText local_528;
  bool local_518;
  undefined1 local_510 [8];
  ForAnyElementType FStack_508;
  ulonglong local_500;
  ISlateStyle *local_4f8;
  FName local_4f0;
  FText local_4e8;
  FMultiBox *local_4d8;
  SMultiBoxWidget *local_4d0;
  FSharedReferencer<1> local_4c8;
  FText local_4c0;
  undefined1 local_4b0;
  undefined1 local_4a8 [8];
  ForAnyElementType FStack_4a0;
  ulonglong local_498;
  FText local_490;
  undefined1 local_480;
  undefined1 local_478 [8];
  ForAnyElementType FStack_470;
  ulonglong local_468;
  FText local_460;
  undefined1 local_450;
  undefined1 local_448 [8];
  ForAnyElementType FStack_440;
  ulonglong local_438;
  TReferenceControllerBase<1> *local_430;
  code *local_428;
  ulonglong uStack_420;
  undefined1 local_418 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_400;
  ForAnyElementType FStack_3f8;
  ulonglong local_3f0;
  SMultiBoxWidget *local_3e8;
  FSharedReferencer<1> local_3e0;
  FText local_3d8;
  undefined1 local_3c8;
  undefined1 local_3c0 [8];
  void *pvStack_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [8];
  FName local_3a0;
  undefined8 local_398;
  FSharedReferencer<1> local_390;
  TSharedRef<SWidget,1> local_388;
  TReferenceControllerBase<1> *local_378;
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_360;
  FDelegateAllocation FStack_358;
  TSharedRef<SWidget,1> local_348;
  TSharedPtr<SWidget,1> local_338;
  undefined1 local_328 [24];
  undefined1 local_310 [24];
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [24];
  FDestructionSentinel local_2c8;
  FDestructionSentinel local_2b0;
  FDestructionSentinel local_298;
  FDestructionSentinel local_280;
  FDestructionSentinel local_268;
  FDestructionSentinel local_250;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  TSharedRef<FMultiBox_const_,1> local_200;
  undefined1 local_1f0 [8];
  TReferenceControllerBase<1> *local_1e8;
  undefined1 local_1e0 [8];
  TReferenceControllerBase<1> *local_1d8;
  FText local_1d0;
  FText local_1c0;
  FMenuEntryBlock *local_1b0;
  TReferenceControllerBase<1> *pTStack_1a8;
  FText local_1a0;
  code *local_188;
  TReferenceControllerBase<1> *pTStack_180;
  code *local_178;
  TReferenceControllerBase<1> *pTStack_170;
  TSharedRef<FTagMetaData,1> local_168;
  TSharedRef<SWidget,1> local_158;
  FText local_148;
  TSharedRef<SWidget,1> local_138;
  TSharedRef<SWidget,1> local_128;
  TSharedRef<SWidget_const_,1> local_118;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FMultiBox *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  FText local_c8;
  TAttribute<bool> local_b8;
  TAttribute<bool> local_98;
  TAttribute<FText> local_78;
  
  local_5b8._16_8_ = (FMenuEntryBlock *)0x0;
  local_5b8._24_8_ = (TReferenceControllerBase<1> *)0x0;
  local_5b8._0_8_ = (FMultiBox *)0x0;
  local_5b8._8_8_ = (TReferenceControllerBase<1> *)0x0;
  local_5b8._32_8_ = (FUICommandInfo *)0x0;
  local_5b8._40_8_ = (TReferenceControllerBase<1> *)0x0;
  FText::FText((FText *)(local_5b8 + 0x30));
  local_5b8[0x40] = false;
  local_560 = 0;
  local_570 = (undefined1  [8])0x0;
  FStack_568.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_558);
  local_558[0x10] = false;
  local_530 = 0;
  local_540 = (undefined1  [8])0x0;
  FStack_538.Data = (FScriptContainerElement *)0x0;
  FText::FText(&local_528);
  pSVar27 = (SMultiBoxWidget *)this->_padding_;
  local_500 = 0;
  local_518 = false;
  local_4f0.ComparisonIndex.Value = 0;
  local_4f0.Number = 0;
  local_510 = (undefined1  [8])0x0;
  FStack_508.Data = (FScriptContainerElement *)0x0;
  pSVar28 = pSVar27;
  pSVar29 = (SMultiBoxWidget *)0x0;
  if (pSVar27 == (SMultiBoxWidget *)0x0) {
LAB_1427dc1e7:
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar27 = pSVar28;
    if (bVar32) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar9 = *(atomic<int> *)&pSVar27->_padding_;
    do {
      pSVar28 = (SMultiBoxWidget *)0x0;
      pSVar29 = (SMultiBoxWidget *)0x0;
      if (aVar9 == (atomic<int>)0x0) goto LAB_1427dc1e7;
      LOCK();
      aVar15 = *(atomic<int> *)&pSVar27->_padding_;
      bVar32 = aVar9 == aVar15;
      if (bVar32) {
        *(atomic<int> *)&pSVar27->_padding_ = (atomic<int>)((int)aVar9 + 1);
        aVar15 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar15;
    } while (!bVar32);
    pSVar29 = (SMultiBoxWidget *)this->_padding_;
    pSVar28 = pSVar27;
    if (pSVar29 == (SMultiBoxWidget *)0x0) goto LAB_1427dc1e7;
  }
  pTVar16 = SMultiBoxWidget::GetMultiBox(pSVar29,&local_200);
  local_4d8 = pTVar16->Object;
  local_430 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (local_430 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_430->SharedReferenceCount = (atomic<int>)((int)local_430->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_200.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar27);
  if ((this->_padding_ == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar2 = (FMenuEntryBlock *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FMenuEntryBlock *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  uVar10 = local_5b8._8_8_;
  local_d8 = (FMultiBox *)local_5b8._0_8_;
  if (local_430 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_430->SharedReferenceCount = (atomic<int>)((int)local_430->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5b8._0_8_ = local_4d8;
  pTStack_d0 = (TReferenceControllerBase<1> *)local_5b8._8_8_;
  local_5b8._8_8_ = local_430;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uVar10);
  uVar10 = local_5b8._24_8_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b0 = (FMenuEntryBlock *)local_5b8._16_8_;
  pTStack_1a8 = (TReferenceControllerBase<1> *)local_5b8._24_8_;
  local_5b8._16_8_ = pFVar2;
  local_5b8._24_8_ = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uVar10);
  if (((FMenuEntryBlock *)local_5b8._16_8_ == (FMenuEntryBlock *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_390.ReferenceController = *(TReferenceControllerBase<1> **)(local_5b8._16_8_ + 0x88);
  local_5b8._32_8_ = *(longlong *)(local_5b8._16_8_ + 0x80);
  if (local_390.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_390.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_390.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar27 = (SMultiBoxWidget *)0x0;
  local_398 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_5b8 + 0x28),&local_390);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_390.ReferenceController);
  local_4f0 = *param_2;
  local_4f8 = param_1;
  if ((pFVar2 == (FMenuEntryBlock *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = local_5b8._48_8_;
  if ((pFVar2->LabelOverride).bIsSet == false) {
    if ((FUICommandInfo *)local_5b8._32_8_ == (FUICommandInfo *)0x0) {
      pFVar18 = FText::GetEmpty();
    }
    else {
      if (((FUICommandInfo *)local_5b8._32_8_ == (FUICommandInfo *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar18 = (FText *)(local_5b8._32_8_ + 0x10);
    }
    local_4c0.TextData.Reference = (pFVar18->TextData).Reference;
    if (local_4c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4c0.TextData.Reference + 8))
                (local_4c0.TextData.Reference,local_res20);
    }
    local_4c0.Flags = pFVar18->Flags;
    local_4b0 = 1;
    local_498 = 0;
    local_4a8 = (undefined1  [8])0x0;
    FStack_4a0.Data = (FScriptContainerElement *)0x0;
    FText::operator=((FText *)(local_5b8 + 0x30),&local_4c0);
    local_5b8[0x40] = (bool)local_4b0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_570,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
               (FWriteAccessScope *)&local_280);
    if (((int)local_498 != 0) && (FStack_4a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_4a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4a0,0,0,0x10);
      local_498 = local_498 & 0xffffffff00000000;
    }
    if (local_280.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
    }
    if (FStack_4a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_4a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4a8);
    if (local_4c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4c0.TextData.Reference + 0x10))();
    }
  }
  else {
    pIVar3 = (pFVar2->LabelOverride).Value.TextData.Reference;
    if ((ITextData *)local_5b8._48_8_ != pIVar3) {
      local_5b8._48_8_ = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
      }
      if ((ITextData *)uVar10 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar10 + 0x10))(uVar10);
      }
    }
    local_5b8._56_4_ = (pFVar2->LabelOverride).Value.Flags;
    local_5b8[0x40] = (pFVar2->LabelOverride).bIsSet;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_570,
               &(pFVar2->LabelOverride).Getter);
  }
  pFVar11 = local_4d8;
  if ((local_4d8 == (FMultiBox *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar17 = FWeakObjectPtr::Get(&(pFVar11->WeakToolMenu).WeakPtr);
  if ((pUVar17 == (UObject *)0x0) ||
     (cVar13 = (**(code **)(*(longlong *)pUVar17 + 0x2b0))(pUVar17), cVar13 == '\0')) {
    local_res10 = (TReferenceControllerBase<1> *)((ulonglong)param_1 & 0xffffffffffffff00);
  }
  else {
    local_res10 = (TReferenceControllerBase<1> *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_570,&local_108);
    if ((((int)local_560 == 0) || (FStack_568.Data == (FScriptContainerElement *)0x0)) ||
       (cVar13 = (**(code **)(*(longlong *)FStack_568.Data + 0x38))(), cVar13 == '\0')) {
      bVar32 = false;
    }
    else {
      bVar32 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    if (bVar32) {
      pFVar18 = TAttribute<FText>::Get((TAttribute<FText> *)(local_5b8 + 0x30));
      TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_328,pFVar18);
      FText::operator=((FText *)(local_5b8 + 0x30),(FText *)local_328);
      local_5b8[0x40] = local_328[0x10];
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_570,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
      if ((void *)local_310._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_310._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_310);
      if ((ITextData *)local_328._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_328._0_8_ + 0x10))();
      }
    }
  }
  local_378 = (pFVar2->EntryWidget).SharedReferenceCount.ReferenceController;
  pSVar4 = (pFVar2->EntryWidget).Object;
  if (local_378 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_378->SharedReferenceCount = (atomic<int>)((int)local_378->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SWidget *)0x0) {
    pSVar29 = (SMultiBoxWidget *)this->_padding_;
    pSVar28 = pSVar29;
    if (pSVar29 == (SMultiBoxWidget *)0x0) {
LAB_1427dc9f5:
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar29 = pSVar28;
      if (bVar32) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      aVar9 = *(atomic<int> *)&pSVar29->_padding_;
      do {
        pSVar28 = pSVar27;
        if (aVar9 == (atomic<int>)0x0) goto LAB_1427dc9f5;
        LOCK();
        aVar15 = *(atomic<int> *)&pSVar29->_padding_;
        bVar32 = aVar9 == aVar15;
        if (bVar32) {
          *(atomic<int> *)&pSVar29->_padding_ = (atomic<int>)((int)aVar9 + 1);
          aVar15 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar15;
      } while (!bVar32);
      pSVar27 = (SMultiBoxWidget *)this->_padding_;
      pSVar28 = pSVar29;
      if (pSVar27 == (SMultiBoxWidget *)0x0) goto LAB_1427dc9f5;
    }
    pFVar20 = TSharedPtr<FMultiBlock_const_,1>::operator->
                        ((TSharedPtr<FMultiBlock_const_,1> *)&this->_padding_);
    bVar32 = pFVar20->bSearchable;
    pFVar18 = TAttribute<FText>::Get((TAttribute<FText> *)(local_5b8 + 0x30));
    pFVar18 = FText::FText(&local_1a0,pFVar18);
    puVar21 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_1e0);
    local_5c8.Object = (SWidget *)*puVar21;
    local_5c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
    if (local_5c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SMultiBoxWidget::AddElement(pSVar27,&local_5c8,pFVar18,bVar32);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d8);
    local_388.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar29;
  }
  else {
    if (local_378 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_378->SharedReferenceCount = (atomic<int>)((int)local_378->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_348.Object = pSVar4;
    local_348.SharedReferenceCount.ReferenceController = local_378;
    FindTextBlockWidget(this,&local_388,&local_348);
    FVar12.ReferenceController = local_388.SharedReferenceCount.ReferenceController;
    if (local_388.Object != SNullWidget::NullWidget.Object) {
      if ((SMultiBoxWidget *)local_388.SharedReferenceCount.ReferenceController !=
          (SMultiBoxWidget *)0x0) {
        LOCK();
        (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::FText((FText *)local_418);
      local_418[0x10] = false;
      local_3f0 = 0;
      local_428 = SMultiBoxWidget::GetSearchText;
      local_400.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_3f8.Data = (FScriptContainerElement *)0x0;
      uStack_420 = (ulonglong)pTStack_1a8 & 0xffffffff00000000;
      local_3e8 = (SMultiBoxWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
                (&local_3e0,(FWeakReferencer<1> *)&this->_padding_);
      if (local_3e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_3e8 = (SMultiBoxWidget *)this->_padding_;
      }
      TAttribute<FText>::Bind<SMultiBoxWidget>
                ((TAttribute<FText> *)local_418,local_3e8,(pmf_35343c35 *)&local_428);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3e0.ReferenceController);
      pTVar19 = TAttribute<FText>::TAttribute<FText>(&local_78,(TAttribute<FText> *)local_418);
      STextBlock::SetHighlightText((STextBlock *)local_388.Object,pTVar19);
      local_4d0 = (SMultiBoxWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
                (&local_4c8,(FWeakReferencer<1> *)&this->_padding_);
      if (local_4c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_4d0 = (SMultiBoxWidget *)this->_padding_;
      }
      pSVar27 = local_4d0;
      if ((local_4d0 == (SMultiBoxWidget *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar20 = TSharedPtr<FMultiBlock_const_,1>::operator->
                          ((TSharedPtr<FMultiBlock_const_,1> *)&this->_padding_);
      bVar32 = pFVar20->bSearchable;
      pFVar18 = STextBlock::GetText((STextBlock *)local_388.Object);
      pFVar18 = FText::FText(&local_c8,pFVar18);
      puVar21 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_1f0);
      local_338.Object = (SWidget *)*puVar21;
      local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1]
      ;
      if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SMultiBoxWidget::AddElement(pSVar27,&local_338,pFVar18,bVar32);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4c8.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_400,(FWriteAccessScope *)&local_2c8);
      if (((int)local_3f0 != 0) && (FStack_3f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_3f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f8,0,0,0x10);
        local_3f0 = local_3f0 & 0xffffffff00000000;
      }
      if (local_2c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
      }
      if (FStack_3f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_3f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_400.AccessDetector);
      if ((ITextData *)local_418._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_418._0_8_ + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.SharedReferenceCount.ReferenceController);
  if ((pFVar2->ToolTipOverride).bIsSet == false) {
    if ((FUICommandInfo *)local_5b8._32_8_ == (FUICommandInfo *)0x0) {
      pFVar18 = FText::GetEmpty();
    }
    else {
      if (((FUICommandInfo *)local_5b8._32_8_ == (FUICommandInfo *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar18 = (FText *)(local_5b8._32_8_ + 0x20);
    }
    FText::FText(&local_460,pFVar18);
    local_450 = 1;
    local_438 = 0;
    local_448 = (undefined1  [8])0x0;
    FStack_440.Data = (FScriptContainerElement *)0x0;
    FText::operator=((FText *)local_558,&local_460);
    local_558[0x10] = (bool)local_450;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_540,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_448);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_448,
               (FWriteAccessScope *)&local_2b0);
    if (((int)local_438 != 0) && (FStack_440.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_440.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_440,0,0,0x10);
      local_438 = local_438 & 0xffffffff00000000;
    }
    if (local_2b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
    }
    if (FStack_440.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_440.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_448);
    if (local_460.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
    }
  }
  else {
    TAttribute<FText>::operator=((TAttribute<FText> *)local_558,&pFVar2->ToolTipOverride);
  }
  if ((pFVar2->InputBindingOverride).bIsSet == false) {
    if ((FUICommandInfo *)local_5b8._32_8_ == (FUICommandInfo *)0x0) {
      pFVar18 = FText::GetEmpty();
      TVar30.Reference = (pFVar18->TextData).Reference;
      local_4e8.TextData.Reference = TVar30.Reference;
      if (TVar30.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar30.Reference + 8))(TVar30.Reference,local_370);
      }
      bVar8 = false;
      bVar7 = false;
      bVar32 = true;
      local_4e8.Flags = pFVar18->Flags;
      pFVar18 = &local_4e8;
    }
    else {
      if (((FUICommandInfo *)local_5b8._32_8_ == (FUICommandInfo *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar18 = FUICommandInfo::GetInputText((FUICommandInfo *)local_5b8._32_8_,&local_148);
      pFVar18 = FText::ToUpper(pFVar18,&local_1c0);
      bVar8 = true;
      bVar7 = true;
      bVar32 = false;
      TVar30.Reference = local_4e8.TextData.Reference;
    }
    local_490.TextData.Reference = (pFVar18->TextData).Reference;
    if (local_490.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_490.TextData.Reference + 8))
                (local_490.TextData.Reference,local_3a8);
    }
    local_490.Flags = pFVar18->Flags;
    local_480 = 1;
    local_468 = 0;
    local_478 = (undefined1  [8])0x0;
    FStack_470.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&local_528,&local_490);
    local_518 = (bool)local_480;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_510,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
               (FWriteAccessScope *)&local_298);
    if (((int)local_468 != 0) && (FStack_470.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_470.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_470,0,0,0x10);
      local_468 = local_468 & 0xffffffff00000000;
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    if (FStack_470.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_470.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_478);
    if (local_490.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_490.TextData.Reference + 0x10))();
    }
    if ((bVar32) && (TVar30.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*TVar30.Reference + 0x10))(TVar30.Reference);
    }
    if ((bVar7) && (local_1c0.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
    }
    if (bVar8) goto LAB_1427dced8;
  }
  else {
    pFVar18 = TAttribute<FText>::Get(&pFVar2->InputBindingOverride);
    pFVar18 = FText::ToUpper(pFVar18,&local_1d0);
    FText::FText(&local_3d8,pFVar18);
    local_3c8 = 1;
    local_3b0 = 0;
    local_3c0 = (undefined1  [8])0x0;
    pvStack_3b8 = (void *)0x0;
    FText::operator=(&local_528,&local_3d8);
    local_518 = (bool)local_3c8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_510,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
    if (pvStack_3b8 != (void *)0x0) {
      FMemory::Free(pvStack_3b8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3c0);
    local_148.TextData.Reference = local_1d0.TextData.Reference;
    if (local_3d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
      local_148.TextData.Reference = local_1d0.TextData.Reference;
    }
LAB_1427dced8:
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
  }
  bVar8 = false;
  bVar7 = false;
  bVar32 = false;
  if ((char)local_res10 != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_540,&local_f0);
    if ((((int)local_530 == 0) || (FStack_538.Data == (FScriptContainerElement *)0x0)) ||
       (cVar13 = (**(code **)(*(longlong *)FStack_538.Data + 0x38))(), cVar13 == '\0')) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    if (bVar14) {
      pFVar18 = TAttribute<FText>::Get((TAttribute<FText> *)local_558);
      TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_2f8,pFVar18);
      FText::operator=((FText *)local_558,(FText *)local_2f8);
      local_558[0x10] = local_2f8[0x10];
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_540,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
      if ((void *)local_2e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2e0);
      if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
      }
    }
  }
  pFVar11 = local_4d8;
  if ((local_4d8 == (FMultiBox *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pFVar11->Type == Menu) {
    if (pFVar2->bIsSubMenu == false) {
      pTVar22 = BuildMenuEntryWidget(this,&local_138,(FMenuEntryBuildParams *)local_5b8);
      FSlotBase::AttachWidget((FSlotBase *)&this->_padding_,pTVar22);
      local_128.SharedReferenceCount.ReferenceController =
           local_138.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar22 = BuildSubMenuWidget(this,&local_128,(FMenuEntryBuildParams *)local_5b8);
      FSlotBase::AttachWidget((FSlotBase *)&this->_padding_,pTVar22);
    }
  }
  else {
    if (pFVar11->Type != MenuBar) {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1800109154115781681>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                          ,0x431,"MultiBox->GetType() == EMultiBoxType::MenuBar");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_1427dd0db;
    }
    if ((pFVar2->bIsSubMenu != false) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!MenuEntryBlock->bIsSubMenu",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                            ,0x434,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar22 = BuildMenuBarWidget(this,&local_158,(FMenuEntryBuildParams *)local_5b8);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,pTVar22);
    local_128.SharedReferenceCount.ReferenceController =
         local_158.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
LAB_1427dd0db:
  if ((char)local_res10 == '\0') {
    local_3a0 = *(FName *)((longlong)&pFVar2->_padding_ + 4);
    if (local_3a0 != (FName)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
      pSVar4 = (SWidget *)this->_padding_;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar23 = MakeShared<FTagMetaData,1,FName_&>(&local_168,&local_3a0);
      SWidget::AddMetadata<FTagMetaData>(pSVar4,pTVar23);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    local_5c8.Object = (SWidget *)IsEnabled;
    local_5c8.SharedReferenceCount.ReferenceController =
         local_5c8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_188 = IsEnabled;
    pTStack_180 = local_5c8.SharedReferenceCount.ReferenceController;
    pTVar24 = TAttribute<bool>::TAttribute<bool><SMenuEntryBlock>
                        (&local_98,this,(pmf_c190d8e3 *)&local_188);
    SWidget::SetEnabled((SWidget *)&this->_padding_,pTVar24);
    local_368[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_368[1] = true;
    FStack_358.DelegateSize = 0;
    local_360.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_358.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_360,(FWriteAccessScope *)&local_220);
    local_208 = &FStack_358;
    puVar21 = UE::Core::Private::DelegateAllocate(0x38,&FStack_358);
    if (puVar21 != (undefined8 *)0x0) {
      local_4e8._12_4_ = local_1a0._12_4_;
      local_4e8.TextData.Reference = (ITextData *)GetVisibility;
      local_4e8.Flags = 0;
      pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_118);
      pTVar31 = &pTVar25->Object[-1].StatID;
      if (pTVar25->Object == (SWidget *)0x0) {
        pTVar31 = (TStatId *)0x0;
      }
      local_res10 = (pTVar25->SharedReferenceCount).ReferenceController;
      if (local_res10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res10->SharedReferenceCount =
             (atomic<int>)((int)local_res10->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_res10->SharedReferenceCount =
             (atomic<int>)((int)local_res10->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = true;
      bVar7 = true;
      bVar32 = true;
      *puVar21 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar21[2] = uVar26;
      *puVar21 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSMenuEntryBlock___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar21[3] = pTVar31;
      puVar21[4] = local_res10;
      if (local_res10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res10->WeakReferenceCount = (atomic<int>)((int)local_res10->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar21[5] = local_4e8.TextData.Reference;
      puVar21[6] = CONCAT44(local_4e8._12_4_,local_4e8.Flags);
    }
    if (bVar32) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res10);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res10);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
    }
    if (local_220.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
    }
    SCompoundWidget::SetVisibility
              ((SCompoundWidget *)&this->_padding_,(TAttribute<EVisibility> *)local_368);
  }
  else {
    local_5c8.Object = (SWidget *)IsEnabledDuringEditMode;
    local_5c8.SharedReferenceCount.ReferenceController =
         local_5c8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_178 = IsEnabledDuringEditMode;
    pTStack_170 = local_5c8.SharedReferenceCount.ReferenceController;
    pTVar24 = TAttribute<bool>::TAttribute<bool><SMenuEntryBlock>
                        (&local_b8,this,(pmf_c190d8e3 *)&local_178);
    SWidget::SetEnabled((SWidget *)&this->_padding_,pTVar24);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_430);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_510,
             (FWriteAccessScope *)&local_268);
  if (((int)local_500 != 0) && (FStack_508.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_508.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_508,0,0,0x10);
    local_500 = local_500 & 0xffffffff00000000;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  if (FStack_508.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_508.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_510);
  if (local_528.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_540,
             (FWriteAccessScope *)&local_250);
  if (((int)local_530 != 0) && (FStack_538.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_538.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_538,0,0,0x10);
    local_530 = local_530 & 0xffffffff00000000;
  }
  if (local_250.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
  }
  if (FStack_538.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_538.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_540);
  if ((ITextData *)local_558._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_558._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_570,
             (FWriteAccessScope *)&local_238);
  if (((int)local_560 != 0) && (FStack_568.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_568.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_568,0,0,0x10);
    local_560 = local_560 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_568.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_568.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_570);
  if ((ITextData *)local_5b8._48_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_5b8._48_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5b8._40_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5b8._24_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5b8._8_8_);
  return;
}

// BuildSubMenuWidget @ 1427ea070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001427eb10d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMenuEntryBlock::BuildSubMenuWidget
          (SMenuEntryBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FMenuEntryBuildParams *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  FMenuEntryBlock *pFVar3;
  FMultiBox *pFVar4;
  ISlateStyle *this_00;
  UObject *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  STextBlock *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SImage *pSVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  SHorizontalBox *pSVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined4 uVar25;
  SMultiBoxWidget *this_01;
  FSharedReferencer<1> FVar26;
  bool bVar27;
  bool bVar28;
  FUICommandInfo *pFVar29;
  FSlateIcon *pFVar30;
  TSharedRef<SWidget,1> *pTVar31;
  FArguments *pFVar32;
  FSlateColor *pFVar33;
  TAttribute<FSlateColor> *pTVar34;
  TAttribute<FSlateBrush_const_*> *pTVar35;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar36;
  TSharedRef<SImage,1> *pTVar37;
  FString *pFVar38;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *pTVar39;
  FArguments *pFVar40;
  FSlotArguments *pFVar41;
  FArguments *pFVar42;
  FArguments *pFVar43;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar44;
  TSharedRef<SBox,1> *pTVar45;
  FMargin *pFVar46;
  TAttribute<FMargin> *pTVar47;
  FArguments *pFVar48;
  FName FVar49;
  TAttribute<FText> *pTVar50;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<STextBlock,1> *pTVar51;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar52;
  TSharedRef<SHorizontalBox,1> *pTVar53;
  FArguments *pFVar54;
  TAttribute<EVisibility> *pTVar55;
  FCheckBoxStyle *pFVar56;
  FArguments *pFVar57;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SCheckBox,1> *pTVar58;
  TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_> *this_04;
  TSharedRef<SLinkedBox,1> *pTVar59;
  FArguments *pFVar60;
  FArguments *pFVar61;
  FButtonStyle *pFVar62;
  undefined8 *puVar63;
  TSharedRef<SWidget_const_,1> *pTVar64;
  ulong64 uVar65;
  FSlot *pFVar66;
  FSizeParam *pFVar67;
  FText *this_05;
  FSlotArguments *pFVar68;
  SSubMenuButton *pSVar69;
  SSubMenuButton *pSVar70;
  TSharedRef<SMenuAnchor,1> *pTVar71;
  longlong lVar72;
  longlong *plVar73;
  FSlotArguments *pFVar74;
  ForAnyElementType FVar75;
  FSharedReferencer<1> FVar76;
  SMenuEntryBlock *pSVar77;
  EVisibility EVar78;
  SWidget *pSVar79;
  EUserInterfaceActionType EVar80;
  TStatId *pTVar81;
  float fVar82;
  FStaticCastTag local_res8;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *local_res18;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_45b0;
  T0RequiredArgs local_45af;
  T0RequiredArgs local_45ae;
  T0RequiredArgs local_45ad;
  T0RequiredArgs local_45ac;
  T0RequiredArgs local_45ab;
  T0RequiredArgs local_45aa;
  T0RequiredArgs local_45a9;
  T0RequiredArgs local_45a8;
  T0RequiredArgs local_45a7;
  T0RequiredArgs local_45a6;
  T0RequiredArgs local_45a5;
  T0RequiredArgs local_45a4;
  T0RequiredArgs local_45a3 [11];
  FArguments *local_4598;
  undefined4 uStack_4590;
  uint uStack_458c;
  FSlotArguments *local_4588;
  undefined4 uStack_4580;
  uint uStack_457c;
  FName local_4578;
  undefined4 uStack_4570;
  float fStack_456c;
  FLLMScope local_4568;
  FLLMScope local_4564;
  FLLMScope local_4560;
  FLLMScope local_455c;
  FLLMScope local_4558;
  FLLMScope local_4554;
  FName local_4550;
  uchar local_4548;
  undefined1 local_4547;
  undefined1 local_4540 [8];
  ForAnyElementType FStack_4538;
  ulonglong local_4530;
  SWidget *local_4528;
  TReferenceControllerBase<1> *pTStack_4520;
  SHorizontalBox *local_4518;
  SBox *local_4510;
  FSharedReferencer<1> local_4508;
  SMultiBoxWidget *local_4500;
  FSharedReferencer<1> local_44f8;
  TSlateDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs> local_44f0;
  SHorizontalBox *local_44d8;
  FSharedReferencer<1> local_44d0;
  SWidget *local_44c8;
  TReferenceControllerBase<1> *pTStack_44c0;
  SWidget *local_44b8;
  TReferenceControllerBase<1> *pTStack_44b0;
  SWidget *local_44a8;
  TReferenceControllerBase<1> *pTStack_44a0;
  longlong *local_4498;
  FSharedReferencer<1> local_4490;
  undefined1 local_4488;
  undefined1 local_4480 [8];
  void *pvStack_4478;
  undefined8 local_4470;
  undefined8 local_4468;
  undefined8 uStack_4460;
  undefined1 local_4458;
  undefined1 local_4450 [8];
  ForAnyElementType FStack_4448;
  ulonglong local_4440;
  undefined8 local_4438;
  undefined8 uStack_4430;
  undefined1 local_4428;
  undefined1 local_4420 [8];
  ForAnyElementType FStack_4418;
  ulonglong local_4410;
  undefined8 local_4408;
  FSharedReferencer<1> local_4400;
  TSharedPtr<SMenuAnchor,1> local_43f8;
  TSharedPtr<SWidget,1> local_43e8;
  FMemScope local_43d8;
  FSlotArguments *local_43d0;
  ISlateStyle *local_43c8;
  FName local_43c0;
  FMemScope local_43b8;
  FName local_43b0;
  FMemScope local_43a8;
  FName local_43a0;
  FMemScope local_4398;
  FMemScope local_4390;
  TReferenceControllerBase<1> *local_4388;
  TReferenceControllerBase<1> *local_4380;
  FString local_4378;
  undefined4 local_4368 [2];
  undefined4 local_4360 [2];
  FSlateBrush *local_4358;
  FName local_4350;
  T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&> local_4348;
  FName local_4340;
  FName local_4338;
  FSlot *local_4330;
  FString local_4328;
  TSharedRef<SWidget,1> local_4318;
  FString local_4308;
  longlong local_42f8;
  TReferenceControllerBase<1> *local_42f0;
  FName local_42e8;
  FName local_42e0;
  FName local_42d8;
  FMemScope local_42d0;
  FName local_42c8;
  FLinearColor_u_0 local_42c0;
  undefined4 local_42b0;
  undefined1 local_42ac;
  undefined1 local_42a8 [8];
  void *pvStack_42a0;
  undefined8 local_4298;
  TAttribute<FOptionalSize> local_4290;
  TAttribute<EVisibility> local_4270;
  TAttribute<float> local_4250;
  TAttribute<FOptionalSize> local_4230;
  TAttribute<FOptionalSize> local_4210;
  TAttribute<EVisibility> local_41f0;
  TAttribute<EMenuPlacement> local_41d0;
  TAttribute<FOptionalSize> local_41b0;
  TAttribute<float> local_4190;
  undefined8 local_4170;
  undefined8 uStack_4168;
  undefined4 local_4160;
  undefined8 local_415c;
  undefined8 uStack_4154;
  undefined4 local_414c;
  undefined8 local_4148;
  undefined8 uStack_4140;
  undefined4 local_4138;
  TSharedPtr<SMultiBoxWidget,1> local_4130;
  TSharedRef<SWidget,1> local_4120;
  TSharedRef<SWidget,1> local_4110;
  undefined8 local_4100;
  TReferenceControllerBase<1> *pTStack_40f8;
  FString local_40f0;
  TSharedRef<SWidget,1> local_40e0;
  TSharedPtr<SWidget,1> local_40d0;
  TSharedRef<SWidget,1> local_40c0;
  FString local_40b0;
  TSharedRef<SWidget,1> local_4098;
  FString local_4088;
  TSharedRef<SWidget,1> local_4078;
  TAttribute<FSlateBrush_const_*> local_4068;
  FDestructionSentinel local_4040;
  FDestructionSentinel local_4028;
  FDestructionSentinel local_4010;
  FLinearColor_u_0 local_3ff8;
  undefined4 local_3fe8;
  undefined1 local_3fe4;
  undefined8 local_3fe0;
  undefined8 uStack_3fd8;
  undefined8 local_3fd0;
  FLinearColor_u_0 local_3fc8;
  undefined4 local_3fb8;
  undefined1 local_3fb4;
  undefined8 local_3fb0;
  undefined8 uStack_3fa8;
  undefined8 local_3fa0;
  FDestructionSentinel local_3f98;
  undefined1 *local_3f80;
  TAttribute<FMargin> local_3f78;
  TAttribute<FMargin> local_3f48;
  TAttribute<FMargin> local_3f18;
  TAttribute<FMargin> local_3ee8;
  TSharedRef<SBox,1> local_3eb8;
  TSharedRef<SImage,1> local_3ea8;
  TSharedRef<SBox,1> local_3e98;
  TSharedRef<STextBlock,1> local_3e88;
  FMargin local_3e78;
  undefined1 local_3e68 [8];
  undefined1 local_3e60 [8];
  undefined1 local_3e58 [8];
  TSharedRef<SImage,1> local_3e50;
  FString local_3e40;
  code *local_3e28;
  longlong lStack_3e20;
  SWidget *local_3e18;
  TReferenceControllerBase<1> *pTStack_3e10;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3e08;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3df0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3dd8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3dc0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3da8;
  code *local_3d88 [2];
  TSharedRef<SHorizontalBox,1> local_3d78;
  TSharedRef<STextBlock,1> local_3d68;
  TSharedRef<SBox,1> local_3d58;
  TSharedRef<SBox,1> local_3d48;
  code *local_3d38;
  longlong lStack_3d30;
  code *local_3d28;
  longlong lStack_3d20;
  code *local_3d18;
  longlong lStack_3d10;
  TSharedRef<SHorizontalBox,1> local_3d08;
  TSharedRef<SWidget,1> local_3cf8;
  TSharedRef<SLinkedBox,1> local_3ce8;
  TSharedRef<FLinkedBoxManager,1> local_3cd8;
  TSharedRef<SCheckBox,1> local_3cc8;
  TSharedRef<SImage,1> local_3cb8;
  code *local_3ca8;
  longlong lStack_3ca0;
  FString local_3c98;
  TSharedRef<SWidget_const_,1> local_3c88;
  FString local_3c78;
  code *local_3c68;
  longlong lStack_3c60;
  SWidget *local_3c58;
  TReferenceControllerBase<1> *pTStack_3c50;
  TSharedRef<SMenuAnchor,1> local_3c48;
  TSharedRef<SHorizontalBox,1> local_3c38;
  undefined1 local_3c28 [16];
  undefined1 local_3c18 [32];
  undefined1 local_3bf8 [24];
  FSlateIcon local_3be0;
  FSlateIcon local_3bc0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3ba0;
  TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
  local_3b88;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_3b70;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3b58;
  FReadAccessScope local_3b40;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_3b28;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3b10;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_3af8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3ae0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3ac8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3ab0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3a98;
  undefined1 local_3a80 [16];
  FSharedReferencer<1> local_3a70 [3];
  undefined1 local_3a58;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3a50;
  undefined4 local_3a38;
  undefined1 local_3a34;
  undefined4 local_3a30;
  undefined1 local_3a2c;
  TOptional<FSizeParam> local_3a28;
  FSlateColor local_3998;
  FSlateColor local_3984;
  TAttribute<FSlateColor> local_3970;
  FSlateIcon local_3940;
  TAttribute<EVisibility> local_3920;
  TAttribute<FSlateBrush_const_*> local_3900;
  TAttribute<FText> local_38d8;
  TAttribute<FSlateColor> local_38a8;
  TAttribute<FSlateColor> local_3878;
  TAttribute<FText> local_3848;
  TAttribute<FSlateColor> local_3818;
  TAttribute<FMargin> local_37e8;
  undefined1 local_37b8 [552];
  undefined1 local_3590 [32];
  FSharedReferencer<1> local_3570;
  undefined1 local_3560 [48];
  FSlotArguments local_3530;
  FSlotArguments local_3448;
  FArguments local_3360;
  FArguments local_3158;
  FSlotArguments local_2f50;
  FSlotArguments local_2e68;
  FSlotArguments local_2d80;
  FSlotArguments local_2c98;
  FArguments local_2bb0;
  FArguments local_29a8;
  FArguments local_2728;
  FArguments local_2480;
  FArguments local_21d8;
  FArguments local_1f30;
  FArguments local_1bf0;
  FArguments local_18b0;
  FArguments local_1570;
  FArguments local_1230;
  FArguments local_ef0;
  FArguments local_b10;
  FArguments local_5b8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427ea098;
  local_res18 = (TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *)
                ((ulonglong)local_res18 & 0xffffffff00000000);
  local_4380 = (param_1->MenuEntryBlock).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->MenuEntryBlock).Object;
  if (local_4380 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_4380->SharedReferenceCount = (atomic<int>)((int)local_4380->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4388 = (param_1->MultiBox).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->MultiBox).Object;
  if (local_4388 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_4388->SharedReferenceCount = (atomic<int>)((int)local_4388->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->UICommand).Object == (FUICommandInfo *)0x0) {
    pFVar30 = FSlateIcon::FSlateIcon(&local_3940);
  }
  else {
    pFVar29 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&param_1->UICommand);
    pFVar30 = &local_3be0;
    local_3be0.StyleSetName = (pFVar29->Icon).StyleSetName;
    local_3be0.StyleName = (pFVar29->Icon).StyleName;
    local_3be0.SmallStyleName = (pFVar29->Icon).SmallStyleName;
    local_3be0.StatusOverlayStyleName = (pFVar29->Icon).StatusOverlayStyleName;
  }
  local_3bc0.StyleSetName = pFVar30->StyleSetName;
  local_3bc0.StyleName = pFVar30->StyleName;
  local_3bc0.SmallStyleName = pFVar30->SmallStyleName;
  local_3bc0.StatusOverlayStyleName = pFVar30->StatusOverlayStyleName;
  if ((pFVar3 == (FMenuEntryBlock *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar27)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  pFVar30 = &pFVar3->IconOverride;
  if ((pFVar30->StyleSetName == (FName)0x0) || ((pFVar3->IconOverride).StyleName == (FName)0x0)) {
    pFVar30 = &local_3bc0;
  }
  else if ((pFVar3 == (FMenuEntryBlock *)0x0) &&
          (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar27)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  if ((((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerMultiBoxWidget.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                          ,0x312,L""), bVar27)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  this_00 = param_1->StyleSet;
  local_43c8 = this_00;
  if ((pFVar4 == (FMultiBox *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar27)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  FVar76.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar79 = SNullWidget::NullWidget.Object;
  local_4528 = SNullWidget::NullWidget.Object;
  pTStack_4520 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar30->StyleSetName != (FName)0x0) && (pFVar30->StyleName != (FName)0x0)) {
    local_4358 = FSlateIcon::GetIcon(pFVar30);
    if (local_4358->ResourceName == (FName)0x0) {
      pUVar5 = (local_4358->ResourceObject).field0_0x0.DebugPtr;
      lVar72 = 0;
      if (pUVar5 != (UObject *)0x0) {
        lVar72 = *(longlong *)&pUVar5->field_0x18;
      }
      if (lVar72 == 0) goto LAB_1427ea386;
    }
    pFVar32 = SImage::FArguments::FArguments(&local_2728);
    pFVar33 = FSlateColor::UseSubduedForeground(&local_3998);
    pTVar34 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_3818,pFVar33);
    pFVar32 = SImage::FArguments::ColorAndOpacity(pFVar32,pTVar34);
    pTVar35 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
                        (&local_3900,&local_4358);
    pFVar32 = SImage::FArguments::Image(pFVar32,pTVar35);
    pTVar36 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3b10,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x326,local_res20);
    pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar36,&local_3e50,pFVar32);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_4098,pTVar37);
    FVar76.ReferenceController = local_4098.SharedReferenceCount.ReferenceController;
    pSVar79 = local_4098.Object;
    pTVar6 = pTStack_4520;
    local_4098.Object = local_4528;
    local_4098.SharedReferenceCount.ReferenceController = pTStack_4520;
    local_4528 = pSVar79;
    pTStack_4520 = FVar76.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e50.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3b10._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_2728);
  }
LAB_1427ea386:
  if ((pFVar3 == (FMenuEntryBlock *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar27)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  EVar80 = pFVar3->UserInterfaceActionType;
  if ((param_1->UICommand).Object != (FUICommandInfo *)0x0) {
    pFVar29 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&param_1->UICommand);
    EVar80 = pFVar29->UserInterfaceType;
  }
  local_4160 = CONCAT22(local_4160._2_2_,2);
  EVar78.Value.Value = EVisibility::Visible.Value.Value;
  if (2 < (byte)(EVar80 - ToggleButton)) {
    EVar78.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  local_42ac = 1;
  local_42b0 = local_4160;
  local_4298 = 0;
  local_4350 = param_1->StyleName;
  local_res18 = (TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *)
                CONCAT71(local_res18._1_7_,EVar78.Value.Value);
  local_4170 = ___xmm_3f8000003f800000000000003f800000;
  uStack_4168 = _UNK_15090c6d8;
  local_42c0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_42c0._8_8_ = _UNK_15090c6d8;
  local_42a8 = (undefined1  [8])0x0;
  pvStack_42a0 = (void *)0x0;
  ::FString::FString(&local_4088,".CheckBox");
  pFVar38 = ::FName::ToString(&local_4350,&local_3e40);
  ::FString::ConcatFF(&local_4328,pFVar38,&local_4088);
  FVar75.Data = (FScriptContainerElement *)L"";
  if (local_4328.Data.ArrayNum != 0) {
    FVar75.Data = local_4328.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_4550,(wchar_t *)FVar75.Data);
  if (local_4328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4328.Data.AllocatorInstance.Data);
  }
  if (local_3e40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e40.Data.AllocatorInstance.Data);
  }
  if (local_4088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4088.Data.AllocatorInstance.Data);
  }
  if (EVar80 == Check) {
    local_4550 = ISlateStyle::Join((FName)local_3e68,(char *)param_1->StyleName);
    local_4550 = *(FName *)local_4550;
  }
  else if (EVar80 == RadioButton) {
    local_4550 = ISlateStyle::Join((FName)local_3e60,(char *)param_1->StyleName);
    local_4550 = *(FName *)local_4550;
    local_4588 = (FSlotArguments *)TintOnHover;
    uStack_4580 = 0;
    lStack_3e20 = (ulonglong)uStack_457c << 0x20;
    local_3e28 = TintOnHover;
    pTVar39 = TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateRaw<SMenuEntryBlock>(&local_3af8,this,(pmf_09282437 *)&local_3e28);
    pTVar34 = TAttribute<FSlateColor>::Create(&local_3970,pTVar39);
    TAttribute<FSlateColor>::operator=((TAttribute<FSlateColor> *)&local_42c0._s_0,pTVar34);
    TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&local_3970);
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>(&local_3af8);
  }
  fVar82 = (float)(**(code **)((longlong)*this_00 + 0x28))
                            (this_00,param_1->StyleName,".MenuIconSize",__real_41800000,0);
  local_43e8.SharedReferenceCount.ReferenceController =
       (pFVar3->EntryWidget).SharedReferenceCount.ReferenceController;
  local_43e8.Object = (pFVar3->EntryWidget).Object;
  if (local_43e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_43e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_43e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_43e8.Object == (SWidget *)0x0) {
    pFVar40 = SHorizontalBox::FArguments::FArguments(&local_2bb0);
    pFVar41 = SHorizontalBox::Slot(&local_2e68);
    pFVar41 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar41);
    local_3f78.bIsSet = true;
    local_3f78.Getter._16_8_ = 0;
    local_3f78.Value.Left = ___xmm_0000000040c000000000000040000000;
    local_3f78.Value.Top = _UNK_1509579a4;
    local_3f78.Value.Right = _UNK_1509579a8;
    local_3f78.Value.Bottom = _UNK_1509579ac;
    local_3f78.Getter._0_8_ = 0;
    local_3f78.Getter._8_8_ = 0;
    local_4588 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar41->field_0x18,&local_3f78);
    pFVar42 = SBox::FArguments::FArguments(&local_1bf0);
    local_41f0.bIsSet = true;
    local_41f0.Value = EVisibility::Collapsed;
    if (pSVar79 != SNullWidget::NullWidget.Object) {
      local_41f0.Value = EVisibility::Visible;
    }
    local_41f0.Getter._0_8_ = 0;
    local_41f0.Getter._8_8_ = 0;
    local_41f0.Getter._16_8_ = 0;
    pFVar42 = TSlateBaseNamedArgs<SBox>::Visibility
                        ((TSlateBaseNamedArgs<SBox> *)pFVar42,&local_41f0);
    local_41b0.bIsSet = true;
    local_41b0.Getter._16_8_ = 0;
    local_41b0.Value.Size = fVar82 + __real_40000000;
    local_41b0.Getter._0_8_ = 0;
    local_41b0.Getter._8_8_ = 0;
    pFVar42 = SBox::FArguments::WidthOverride(pFVar42,&local_41b0);
    local_4210.bIsSet = true;
    local_4210.Getter._16_8_ = 0;
    local_4210.Getter._0_8_ = 0;
    local_4210.Getter._8_8_ = 0;
    local_4210.Value.Size = fVar82;
    pFVar42 = SBox::FArguments::HeightOverride(pFVar42,&local_4210);
    pFVar42->_HAlign = HAlign_Center;
    pFVar42->_VAlign = VAlign_Center;
    pFVar43 = SBox::FArguments::FArguments(&local_1f30);
    local_4290.bIsSet = true;
    local_4290.Getter._16_8_ = 0;
    local_4290.Getter._0_8_ = 0;
    local_4290.Getter._8_8_ = 0;
    local_4290.Value.Size = fVar82;
    pFVar43 = SBox::FArguments::WidthOverride(pFVar43,&local_4290);
    local_4230.Getter._16_8_ = 0;
    local_4230.bIsSet = true;
    local_4230.Getter._0_8_ = 0;
    local_4230.Getter._8_8_ = 0;
    local_4230.Value.Size = fVar82;
    pFVar43 = SBox::FArguments::HeightOverride(pFVar43,&local_4230);
    if (FVar76.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar76.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar76.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3e18 = (pFVar43->_Content).Widget.Object;
    pTStack_3e10 = (pFVar43->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar43->_Content).Widget.Object = pSVar79;
    (pFVar43->_Content).Widget.SharedReferenceCount.ReferenceController = pTStack_4520;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3e10);
    pTVar44 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_3a98,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x35a,local_45a3);
    pTVar45 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar44,&local_3d48,pFVar43);
    local_4078.Object = (SWidget *)pTVar45->Object;
    local_4598 = (FArguments *)(pTVar45->SharedReferenceCount).ReferenceController;
    if (local_4598 != (FArguments *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_4598)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)local_4598)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_4078.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4598;
    pFVar42 = SBox::FArguments::operator[](pFVar42,&local_4078);
    pTVar44 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_3ab0,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x353,&local_45b0);
    pTVar45 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar44,&local_3d58,pFVar42);
    pTVar6 = (pTVar45->SharedReferenceCount).ReferenceController;
    local_40e0.Object = (SWidget *)pTVar45->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40e0.SharedReferenceCount.ReferenceController = pTVar6;
    pFVar41 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_4588,&local_40e0);
    pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar41);
    pFVar41 = SHorizontalBox::Slot(&local_2f50);
    local_4250.Value = 1.0;
    local_4250.Getter._16_8_ = 0;
    local_4250.bIsSet = true;
    local_4250.Getter._0_8_ = 0;
    local_4250.Getter._8_8_ = 0;
    pFVar41 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar41,&local_4250);
    pFVar46 = FMargin::FMargin(&local_3e78,__real_4000000000000000,0.0,__real_4018000000000000,0.0);
    pTVar47 = TAttribute<FMargin>::TAttribute<FMargin>(&local_37e8,pFVar46);
    pFVar41 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->field_0x18,pTVar47);
    pFVar41 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->field_0x48,VAlign_Center);
    pFVar48 = STextBlock::FArguments::FArguments(&local_b10);
    FVar49 = ISlateStyle::Join((FName)local_3e58,(char *)param_1->StyleName);
    pFVar48 = STextBlock::FArguments::TextStyle(pFVar48,this_00,(FName *)FVar49,(char *)0x0);
    pTVar50 = TAttribute<FText>::TAttribute<FText>(&local_38d8,&param_1->Label);
    pFVar48 = STextBlock::FArguments::Text(pFVar48,pTVar50);
    local_4588 = (FSlotArguments *)SMultiBoxWidget::GetSearchText;
    uStack_4580 = 0;
    TSharedPtr<SMultiBoxWidget,1>::TSharedPtr<SMultiBoxWidget,1><SMultiBoxWidget>
              (&local_4130,(TWeakPtr<SMultiBoxWidget,1> *)&this->_padding_);
    local_3d88[1]._4_4_ = uStack_457c;
    local_3d88[1]._0_4_ = uStack_4580;
    local_3d88[0] = (code *)local_4588;
    pFVar48 = STextBlock::FArguments::HighlightText<SMultiBoxWidget>
                        (pFVar48,local_4130.Object,(pmf_35343c35 *)local_3d88);
    this_02 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_3ac8,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x367,&local_45af);
    pTVar51 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,&local_3d68,pFVar48);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_40c0,pTVar51);
    pFVar41 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar41,&local_40c0);
    pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar41);
    pTVar52 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_3ae0,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x34d,&local_45ae);
    pTVar53 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar52,&local_3d78,pFVar40);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SHorizontalBox>(&local_40d0,pTVar53);
    TSharedPtr<SWidget,1>::operator=(&local_43e8,&local_40d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3ae0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40c0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3ac8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4130.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_b10);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2f50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3ab0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_4598);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a98._Widget.SharedReferenceCount.ReferenceController);
    SBox::FArguments::~FArguments(&local_1f30);
    SBox::FArguments::~FArguments(&local_1bf0);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2e68);
    TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2bb0._Slots);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2bb0);
    EVar78.Value.Value = local_res18._0_1_;
  }
  pFVar40 = SHorizontalBox::FArguments::FArguments(&local_3360);
  pFVar41 = SHorizontalBox::Slot(&local_2c98);
  local_3f48.bIsSet = true;
  local_3f48.Getter._16_8_ = 0;
  local_3f48.Value.Left = ___xmm_00000000410000000000000040000000;
  local_3f48.Value.Top = _UNK_1509579b4;
  local_3f48.Value.Right = _UNK_1509579b8;
  local_3f48.Value.Bottom = _UNK_1509579bc;
  local_3f48.Getter._0_8_ = 0;
  local_3f48.Getter._8_8_ = 0;
  pFVar41 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar41->field_0x18,&local_3f48);
  local_4588 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar41);
  pFVar54 = SLinkedBox::FArguments::FArguments(&local_18b0);
  if (EVar80 == Check) {
    pFVar32 = SImage::FArguments::FArguments(&local_2480);
    pTVar55 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                        (&local_3920,(EVisibility *)&local_res18);
    pFVar32 = TSlateBaseNamedArgs<SImage>::Visibility
                        ((TSlateBaseNamedArgs<SImage> *)pFVar32,pTVar55);
    pFVar33 = FSlateColor::UseForeground(&local_3984);
    pTVar34 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_38a8,pFVar33);
    pFVar32 = SImage::FArguments::ColorAndOpacity(pFVar32,pTVar34);
    pFVar56 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                        (this_00,local_4550,(char *)0x0,(FCheckBoxStyle *)0x0);
    local_4598 = (FArguments *)GetCheckBoxImageBrushFromStyle;
    uStack_4590 = 0;
    lStack_3d30 = (ulonglong)uStack_458c << 0x20;
    local_3d38 = GetCheckBoxImageBrushFromStyle;
    pFVar32 = SImage::FArguments::Image<SMenuEntryBlock,FCheckBoxStyle_const_*>
                        (pFVar32,this,(pmf_bc4ac88c *)&local_3d38,pFVar56);
    pTVar36 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3b58,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x379,&local_45ad);
    pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar36,&local_3cb8,pFVar32);
    local_res8 = SUB81(this,0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_4110,pTVar37,local_res8);
    pTVar31 = &local_4110;
    bVar24 = true;
    bVar23 = true;
    bVar22 = true;
    bVar21 = false;
    bVar18 = false;
    bVar17 = false;
    bVar27 = true;
  }
  else {
    pFVar57 = SCheckBox::FArguments::FArguments(&local_ef0);
    pTVar34 = TAttribute<FSlateColor>::TAttribute<FSlateColor>
                        (&local_3878,(TAttribute<FSlateColor> *)&local_42c0._s_0);
    pFVar57 = SCheckBox::FArguments::ForegroundColor(pFVar57,pTVar34);
    local_4270.bIsSet = true;
    local_4270.Getter._16_8_ = 0;
    local_4270.Getter._0_8_ = 0;
    local_4270.Getter._8_8_ = 0;
    local_4270.Value.Value.Value = EVar78.Value.Value;
    pFVar57 = TSlateBaseNamedArgs<SCheckBox>::Visibility
                        ((TSlateBaseNamedArgs<SCheckBox> *)pFVar57,&local_4270);
    local_4598 = (FArguments *)IsChecked;
    uStack_4590 = 0;
    lStack_3d20 = (ulonglong)uStack_458c << 0x20;
    local_3d28 = IsChecked;
    pFVar57 = SCheckBox::FArguments::IsChecked<SMenuEntryBlock>
                        (pFVar57,this,(pmf_94171326 *)&local_3d28);
    pFVar57 = SCheckBox::FArguments::Style(pFVar57,this_00,&local_4550,(char *)0x0);
    local_4598 = (FArguments *)OnCheckStateChanged;
    uStack_4590 = 0;
    lStack_3d10 = (ulonglong)uStack_458c << 0x20;
    local_3d18 = OnCheckStateChanged;
    pFVar57 = SCheckBox::FArguments::OnCheckStateChanged<SMenuEntryBlock>
                        (pFVar57,this,(pmf_04d84020 *)&local_3d18);
    this_03 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_3b70,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x37d,&local_45ac);
    pTVar58 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_3cc8,pFVar57);
    local_4318.Object = (SWidget *)pTVar58->Object;
    local_4318.SharedReferenceCount.ReferenceController =
         (pTVar58->SharedReferenceCount).ReferenceController;
    if (local_4318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar31 = &local_4318;
    bVar24 = false;
    bVar23 = false;
    bVar22 = false;
    bVar21 = true;
    bVar18 = true;
    bVar17 = true;
    bVar27 = false;
  }
  pFVar54 = SLinkedBox::FArguments::operator[](pFVar54,pTVar31);
  local_4500 = (SMultiBoxWidget *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
            (&local_44f8,(FWeakReferencer<1> *)&this->_padding_);
  if (local_44f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    local_4500 = (SMultiBoxWidget *)this->_padding_;
  }
  this_01 = local_4500;
  if ((local_4500 == (SMultiBoxWidget *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar28)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  local_4348.Arg0 = SMultiBoxWidget::GetLinkedBoxManager(this_01,&local_3cd8);
  this_04 = MakeTDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
                      (&local_3b88,"SLinkedBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                       ,0x375,&local_4348);
  pTVar59 = TSlateDecl<SLinkedBox,RequiredArgs::T1RequiredArgs<TSharedRef<FLinkedBoxManager,1>_&&>_>
            ::operator<<=(this_04,&local_3ce8,pFVar54);
  pTVar6 = (pTVar59->SharedReferenceCount).ReferenceController;
  local_4120.Object = (SWidget *)pTVar59->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4120.SharedReferenceCount.ReferenceController = pTVar6;
  pFVar41 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4588,&local_4120);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar41);
  pFVar41 = SHorizontalBox::Slot(&local_2d80);
  local_3f18.bIsSet = true;
  local_3f18.Value.Left = ___xmm_00000000000000000000000040000000;
  local_3f18.Value.Top = _UNK_15094b714;
  local_3f18.Value.Right = _UNK_15094b718;
  local_3f18.Value.Bottom = _UNK_15094b71c;
  local_3f18.Getter._16_8_ = 0;
  local_3f18.Getter._0_8_ = 0;
  local_3f18.Getter._8_8_ = 0;
  pFVar41 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar41->field_0x18,&local_3f18);
  pTVar31 = TSharedPtr<SWidget,1>::ToSharedRef(&local_43e8,&local_3cf8);
  pFVar41 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar41,pTVar31);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar41);
  pTVar52 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3ba0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                       ,0x370,&local_45ab);
  pTVar53 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar52,&local_3d08,pFVar40);
  local_4518 = pTVar53->Object;
  local_4588 = (FSlotArguments *)(pTVar53->SharedReferenceCount).ReferenceController;
  if (local_4588 != (FSlotArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4588)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_4588)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ba0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cf8.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2d80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ce8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b88._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44f8.ReferenceController);
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3cc8.SharedReferenceCount.ReferenceController);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3b70._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar21) {
    SCheckBox::FArguments::~FArguments(&local_ef0);
  }
  if (bVar22) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4110.SharedReferenceCount.ReferenceController);
  }
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3cb8.SharedReferenceCount.ReferenceController);
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3b58._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar27) {
    SImage::FArguments::~FArguments(&local_2480);
  }
  bVar18 = false;
  bVar17 = false;
  bVar27 = false;
  SLinkedBox::FArguments::~FArguments(&local_18b0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2c98);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3360._Slots.AllocatorInstance.Data,local_3360._Slots.ArrayNum);
  if ((FSlotArguments *)local_3360._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3360._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3360);
  local_43f8.Object = (SMenuAnchor *)0x0;
  local_43f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar60 = SMenuAnchor::FArguments::FArguments(&local_29a8);
  local_41d0.Value = MenuPlacement_MenuRight;
  local_41d0.bIsSet = true;
  local_41d0.Getter._0_8_ = 0;
  local_41d0.Getter._8_8_ = 0;
  local_41d0.Getter._16_8_ = 0;
  pFVar60 = SMenuAnchor::FArguments::Placement(pFVar60,&local_41d0);
  local_4578 = (FName)MakeNewMenuWidget;
  uStack_4570 = 0;
  lStack_3ca0 = (ulonglong)(uint)fStack_456c << 0x20;
  local_3ca8 = MakeNewMenuWidget;
  local_4598 = SMenuAnchor::FArguments::OnGetMenuContent<SMenuEntryBlock>
                         (pFVar60,this,(pmf_bb1420e0 *)&local_3ca8);
  pFVar61 = SSubMenuButton::FArguments::FArguments((FArguments *)local_37b8);
  local_4100 = 0;
  pTStack_40f8 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::ToolTipConstructor,&local_3b40);
  plVar73 = (longlong *)0x0;
  if (FMultiBoxSettings::ToolTipConstructor._16_4_ != 0) {
    plVar73 = (longlong *)FMultiBoxSettings::ToolTipConstructor._8_8_;
  }
  (**(code **)(*plVar73 + 0x60))
            (plVar73,&local_42f8,&param_1->ToolTip,&local_4100,&param_1->UICommand,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3b40);
  local_4498 = (longlong *)(local_42f8 + 0x2a8);
  if (local_42f8 == 0) {
    local_4498 = (longlong *)0x0;
  }
  local_4490.ReferenceController = local_42f0;
  if (local_42f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_42f0->SharedReferenceCount = (atomic<int>)((int)local_42f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4488 = 1;
  local_4470 = 0;
  local_4480 = (undefined1  [8])0x0;
  pvStack_4478 = (void *)0x0;
  if ((longlong **)&pFVar61->_padding_ != &local_4498) {
    pFVar61->_padding_ = (longlong)local_4498;
    local_4498 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar61->_padding_,&local_4490);
  }
  *(undefined1 *)&pFVar61->_padding_ = local_4488;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar61->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4480);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4480);
  if (pvStack_4478 != (void *)0x0) {
    FMemory::Free(pvStack_4478);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4480);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4490.ReferenceController);
  local_4340 = param_1->StyleName;
  ::FString::FString(&local_40b0,".Button");
  pFVar38 = ::FName::ToString(&local_4340,&local_3c98);
  ::FString::ConcatFF(&local_4378,pFVar38,&local_40b0);
  FVar75.Data = (FScriptContainerElement *)L"";
  if (local_4378.Data.ArrayNum != 0) {
    FVar75.Data = local_4378.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_4338,(wchar_t *)FVar75.Data);
  if (local_4378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4378.Data.AllocatorInstance.Data);
  }
  if (local_3c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c98.Data.AllocatorInstance.Data);
  }
  if (local_40b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40b0.Data.AllocatorInstance.Data);
  }
  pFVar62 = (FButtonStyle *)
            (**(code **)((longlong)*this_00 + 0xa0))(this_00,FButtonStyle::TypeName,local_4338,0,1);
  if (pFVar62 == (FButtonStyle *)0x0) {
    pFVar62 = FButtonStyle::GetDefault();
  }
  pFVar61->_ButtonStyle = pFVar62;
  puVar63 = (undefined8 *)
            (**(code **)((longlong)*this_00 + 0x48))
                      (this_00,param_1->StyleName,".Block.Padding",&FStyleDefaults::DefaultMargin,0)
  ;
  uVar19 = *puVar63;
  uVar20 = puVar63[1];
  (pFVar61->_ContentPadding).Left = (float)(int)uVar19;
  (pFVar61->_ContentPadding).Top = (float)(int)((ulonglong)uVar19 >> 0x20);
  (pFVar61->_ContentPadding).Right = (float)(int)uVar20;
  (pFVar61->_ContentPadding).Bottom = (float)(int)((ulonglong)uVar20 >> 0x20);
  (pFVar61->_ShouldAppearHovered).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar61->_ShouldAppearHovered).Getter,(FWriteAccessScope *)&local_3f98);
  local_3f80 = &(pFVar61->_ShouldAppearHovered).Getter.field_0x8;
  puVar63 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3f80);
  pSVar77 = this;
  if (puVar63 != (undefined8 *)0x0) {
    fStack_456c = local_3e78.Bottom;
    local_4578 = (FName)ShouldSubMenuAppearHovered;
    uStack_4570 = 0;
    pTVar64 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3c88);
    pTVar81 = &pTVar64->Object[-1].StatID;
    if (pTVar64->Object == (SWidget *)0x0) {
      pTVar81 = (TStatId *)0x0;
    }
    pSVar77 = (SMenuEntryBlock *)(pTVar64->SharedReferenceCount).ReferenceController;
    if (pSVar77 != (SMenuEntryBlock *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar77->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar77->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar77->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar77->_padding_ + 1);
      UNLOCK();
    }
    bVar18 = true;
    bVar17 = true;
    bVar27 = true;
    *puVar63 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar65 = FDelegateHandle::GenerateNewID();
    puVar63[2] = uVar65;
    *puVar63 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSMenuEntryBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar63[3] = pTVar81;
    puVar63[4] = pSVar77;
    if (pSVar77 != (SMenuEntryBlock *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar77->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar77->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar63 + 5) = local_4578;
    puVar63[6] = CONCAT44(fStack_456c,uStack_4570);
  }
  if (bVar27) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar77);
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar77);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c88.SharedReferenceCount.ReferenceController);
  }
  if (local_3f98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f98.Accessor,&local_3f98);
  }
  pFVar40 = SHorizontalBox::FArguments::FArguments(&local_3158);
  pFVar66 = ::operator_new(0x58);
  if (pFVar66 == (FSlot *)0x0) {
    local_4330 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar66 = 0;
    *(undefined8 *)&pFVar66->field_0x8 = 0;
    *(undefined8 *)&pFVar66->field_0x10 = 0;
    *(undefined8 *)&pFVar66->field_0x18 = 0;
    *(undefined8 *)&pFVar66->field_0x20 = 0;
    *(undefined8 *)&pFVar66->field_0x28 = 0;
    *(undefined8 *)&pFVar66->field_0x30 = 0;
    *(undefined8 *)&pFVar66->field_0x38 = 0;
    *(undefined8 *)&pFVar66->field_0x40 = 0;
    *(undefined8 *)&pFVar66->field_0x48 = 0;
    *(undefined8 *)&pFVar66->field_0x50 = 0;
    local_4330 = SHorizontalBox::FSlot::FSlot(pFVar66);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_3448,(FSlot *)&local_4330);
  local_4190.Value = 1.0;
  local_4190.Getter._16_8_ = 0;
  local_4190.bIsSet = true;
  local_4190.Getter._0_8_ = 0;
  local_4190.Getter._8_8_ = 0;
  pFVar41 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_3448,&local_4190);
  local_44d8 = local_4518;
  local_44d0.ReferenceController = (TReferenceControllerBase<1> *)local_4588;
  if (local_4588 != (FSlotArguments *)0x0) {
    LOCK();
    *(atomic<int> *)&local_4588->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&local_4588->field_0x8 + 1);
    UNLOCK();
  }
  if ((SHorizontalBox **)&pFVar41->field_0x8 != &local_44d8) {
    *(SHorizontalBox **)&pFVar41->field_0x8 = local_4518;
    local_44d8 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar41->field_0x10,&local_44d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44d0.ReferenceController);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar41);
  pFVar66 = ::operator_new(0x58);
  if (pFVar66 == (FSlot *)0x0) {
    local_4518 = (SHorizontalBox *)0x0;
  }
  else {
    *(undefined8 *)pFVar66 = 0;
    *(undefined8 *)&pFVar66->field_0x8 = 0;
    *(undefined8 *)&pFVar66->field_0x10 = 0;
    *(undefined8 *)&pFVar66->field_0x18 = 0;
    *(undefined8 *)&pFVar66->field_0x20 = 0;
    *(undefined8 *)&pFVar66->field_0x28 = 0;
    *(undefined8 *)&pFVar66->field_0x30 = 0;
    *(undefined8 *)&pFVar66->field_0x38 = 0;
    *(undefined8 *)&pFVar66->field_0x40 = 0;
    *(undefined8 *)&pFVar66->field_0x48 = 0;
    *(undefined8 *)&pFVar66->field_0x50 = 0;
    local_4518 = (SHorizontalBox *)SHorizontalBox::FSlot::FSlot(pFVar66);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3a80,(FSlot *)&local_4518);
  pFVar67 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3c28);
  TOptional<FSizeParam>::operator=(&local_3a28,pFVar67);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3bf8);
  if ((void *)local_3bf8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3bf8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3bf8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c18);
  if ((void *)local_3c18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3c18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c18);
  local_4428 = 1;
  local_4410 = 0;
  local_4438 = ___xmm_00000000000000000000000041c80000;
  uStack_4430 = _UNK_150957968;
  local_3a58 = 1;
  local_4420 = (undefined1  [8])0x0;
  FStack_4418.Data = (FScriptContainerElement *)0x0;
  local_3a70[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_00000000000000000000000041c80000;
  local_3a70[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_150957968;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_3a50,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_4420);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4420,
             (FWriteAccessScope *)&local_4040);
  if (((int)local_4410 != 0) && (FStack_4418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4418,0,0,0x10);
    local_4410 = local_4410 & 0xffffffff00000000;
  }
  if (local_4040.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4040.Accessor,&local_4040);
  }
  if (FStack_4418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4420);
  local_3a30 = 2;
  local_3a2c = 1;
  local_3a38 = 3;
  local_3a34 = 1;
  pFVar42 = SBox::FArguments::FArguments(&local_1230);
  this_05 = TAttribute<FText>::Get(&param_1->InputBinding);
  bVar27 = FText::IsEmpty(this_05);
  local_4548 = (uchar)EVisibility::Visible;
  if (bVar27) {
    local_4548 = (uchar)EVisibility::Collapsed;
  }
  local_4547 = 1;
  local_4530 = 0;
  local_4540 = (undefined1  [8])0x0;
  FStack_4538.Data = (FScriptContainerElement *)0x0;
  *(uchar *)&pFVar42->_padding_ = local_4548;
  *(undefined1 *)((longlong)&pFVar42->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar42->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4540);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4540,
             (FWriteAccessScope *)&local_4010);
  if (((int)local_4530 != 0) && (FStack_4538.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4538.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4538,0,0,0x10);
    local_4530 = local_4530 & 0xffffffff00000000;
  }
  if (local_4010.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4010.Accessor,&local_4010);
  }
  if (FStack_4538.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4538.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4540);
  uVar19 = _UNK_150957988;
  local_4458 = 1;
  local_4440 = 0;
  local_4468 = ___xmm_00000000408000000000000041800000;
  uStack_4460 = _UNK_150957988;
  local_4450 = (undefined1  [8])0x0;
  FStack_4448.Data = (FScriptContainerElement *)0x0;
  uVar25 = _UNK_150957984;
  (pFVar42->_Padding).Value.Left = (float)___xmm_00000000408000000000000041800000;
  uVar20 = _UNK_150957988;
  (pFVar42->_Padding).Value.Top = (float)uVar25;
  _UNK_150957988 = (undefined4)uVar19;
  _UNK_15095798c = SUB84(uVar19,4);
  uVar25 = _UNK_15095798c;
  (pFVar42->_Padding).Value.Right = (float)_UNK_150957988;
  _UNK_150957988 = uVar20;
  (pFVar42->_Padding).Value.Bottom = (float)uVar25;
  (pFVar42->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar42->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4450);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4450,
             (FWriteAccessScope *)&local_4028);
  if (((int)local_4440 != 0) && (FStack_4448.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4448.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4448,0,0,0x10);
    local_4440 = local_4440 & 0xffffffff00000000;
  }
  if (local_4028.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4028.Accessor,&local_4028);
  }
  if (FStack_4448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4450);
  pFVar48 = STextBlock::FArguments::FArguments(&local_5b8);
  local_42e8 = param_1->StyleName;
  ::FString::FString(&local_40f0,".Keybinding");
  pFVar38 = ::FName::ToString(&local_42e8,&local_3c78);
  ::FString::ConcatFF(&local_4308,pFVar38,&local_40f0);
  FVar75.Data = (FScriptContainerElement *)L"";
  if (local_4308.Data.ArrayNum != 0) {
    FVar75.Data = local_4308.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_42e0,(wchar_t *)FVar75.Data);
  if (local_4308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4308.Data.AllocatorInstance.Data);
  }
  if (local_3c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c78.Data.AllocatorInstance.Data);
  }
  if (local_40f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40f0.Data.AllocatorInstance.Data);
  }
  pFVar48 = STextBlock::FArguments::TextStyle(pFVar48,this_00,&local_42e0,(char *)0x0);
  local_414c = CONCAT22(local_414c._2_2_,3);
  local_3fe8 = local_414c;
  local_3fd0 = 0;
  local_415c = ___xmm_3f8000003f800000000000003f800000;
  uStack_4154 = _UNK_15090c6d8;
  local_3fe4 = 1;
  local_3ff8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_3ff8._8_8_ = _UNK_15090c6d8;
  local_3fe0 = 0;
  uStack_3fd8 = 0;
  pFVar48 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar48,(TAttribute<FSlateColor> *)&local_3ff8._s_0);
  pTVar50 = TAttribute<FText>::TAttribute<FText>(&local_3848,&param_1->InputBinding);
  pFVar48 = STextBlock::FArguments::Text(pFVar48,pTVar50);
  FLLMScope::FLLMScope(&local_4568,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_42d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_42d0,&local_42d8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3da8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x3ac,&local_45aa);
  FMemScope::~FMemScope(&local_42d0);
  FLLMScope::~FLLMScope(&local_4568);
  pTVar51 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3da8,&local_3e88,pFVar48);
  pTVar6 = (pTVar51->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar51->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_44c8 = (pFVar42->_Content).Widget.Object;
  pTStack_44c0 = (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar42->_Content).Widget.Object = (SWidget *)pSVar7;
  (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_44c0);
  FLLMScope::FLLMScope(&local_4564,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_42c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_43d8,&local_42c8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3dc0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x3a8,&local_45a9);
  FMemScope::~FMemScope(&local_43d8);
  FLLMScope::~FLLMScope(&local_4564);
  pTVar45 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3dc0,&local_3e98,pFVar42);
  pTVar8 = (pTVar45->SharedReferenceCount).ReferenceController;
  local_3a80._8_8_ = pTVar45->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar41 = (FSlotArguments *)0x0;
  local_4408 = 0;
  local_4400.ReferenceController = pTVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_3a80 + 0x10),&local_4400);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4400.ReferenceController);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,(FSlotArguments *)local_3a80);
  pFVar66 = ::operator_new(0x58);
  local_43d0 = pFVar41;
  if (pFVar66 != (FSlot *)0x0) {
    *(undefined8 *)pFVar66 = 0;
    *(undefined8 *)&pFVar66->field_0x8 = 0;
    *(undefined8 *)&pFVar66->field_0x10 = 0;
    *(undefined8 *)&pFVar66->field_0x18 = 0;
    *(undefined8 *)&pFVar66->field_0x20 = 0;
    *(undefined8 *)&pFVar66->field_0x28 = 0;
    *(undefined8 *)&pFVar66->field_0x30 = 0;
    *(undefined8 *)&pFVar66->field_0x38 = 0;
    *(undefined8 *)&pFVar66->field_0x40 = 0;
    *(undefined8 *)&pFVar66->field_0x48 = 0;
    *(undefined8 *)&pFVar66->field_0x50 = 0;
    local_43d0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar66);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_3530,(FSlot *)&local_43d0);
  pFVar68 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_3530);
  if (local_4368 != (undefined4 *)&pFVar68->field_0x50) {
    *(undefined4 *)&pFVar68->field_0x50 = 2;
    pFVar68->field_0x54 = 1;
  }
  pFVar74 = pFVar41;
  if (pFVar68 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar74 = pFVar68;
  }
  puVar1 = &pFVar74->field_0x48;
  if (local_4360 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 3;
    pFVar74->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar41 = pFVar74;
  }
  pFVar42 = SBox::FArguments::FArguments(&local_1570);
  local_3ee8.bIsSet = true;
  local_3ee8.Getter._16_8_ = 0;
  local_3ee8.Value.Left = ___xmm_00000000000000000000000040e00000;
  local_3ee8.Value.Top = _UNK_150957944;
  local_3ee8.Value.Right = _UNK_150957948;
  local_3ee8.Value.Bottom = _UNK_15095794c;
  local_3ee8.Getter._0_8_ = 0;
  local_3ee8.Getter._8_8_ = 0;
  pFVar42 = SBox::FArguments::Padding(pFVar42,&local_3ee8);
  pFVar32 = SImage::FArguments::FArguments(&local_21d8);
  local_4138 = CONCAT22(local_4138._2_2_,2);
  local_3fb8 = local_4138;
  local_4148 = ___xmm_3f8000003f800000000000003f800000;
  uStack_4140 = _UNK_15090c6d8;
  local_3fb4 = 1;
  local_3fc8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_3fc8._8_8_ = _UNK_15090c6d8;
  local_3fa0 = 0;
  local_3fb0 = 0;
  uStack_3fa8 = 0;
  pFVar32 = SImage::FArguments::ColorAndOpacity(pFVar32,(TAttribute<FSlateColor> *)&local_3fc8._s_0)
  ;
  local_4068.Value =
       (FSlateBrush *)(**(code **)((longlong)*local_43c8 + 0x50))(local_43c8,param_1->StyleName);
  local_4068.bIsSet = true;
  local_4068.Getter._16_8_ = 0;
  local_4068.Getter._0_8_ = 0;
  local_4068.Getter._8_8_ = 0;
  pFVar32 = SImage::FArguments::Image(pFVar32,&local_4068);
  FLLMScope::FLLMScope(&local_4560,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_43c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_43b8,&local_43c0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3dd8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x3ba,&local_45a8);
  FMemScope::~FMemScope(&local_43b8);
  FLLMScope::~FLLMScope(&local_4560);
  pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3dd8,&local_3ea8,pFVar32);
  pTVar9 = (pTVar37->SharedReferenceCount).ReferenceController;
  pSVar10 = pTVar37->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_44b8 = (pFVar42->_Content).Widget.Object;
  pTStack_44b0 = (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar42->_Content).Widget.Object = (SWidget *)pSVar10;
  (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_44b0);
  FLLMScope::FLLMScope(&local_455c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_43b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_43a8,&local_43b0,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3df0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x3b7,&local_45a7);
  FMemScope::~FMemScope(&local_43a8);
  FLLMScope::~FLLMScope(&local_455c);
  pTVar45 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3df0,&local_3eb8,pFVar42);
  pTVar11 = (pTVar45->SharedReferenceCount).ReferenceController;
  local_4510 = pTVar45->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4508.ReferenceController = pTVar11;
  if ((SBox **)&pFVar41->field_0x8 != &local_4510) {
    *(SBox **)&pFVar41->field_0x8 = local_4510;
    local_4510 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar41->field_0x10,&local_4508);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4508.ReferenceController);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar41);
  FLLMScope::FLLMScope(&local_4558,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_43a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4398,&local_43a0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3e08,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x39c,&local_45a6);
  FMemScope::~FMemScope(&local_4398);
  FLLMScope::~FLLMScope(&local_4558);
  pTVar53 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3e08,&local_3c38,pFVar40);
  pTVar12 = (pTVar53->SharedReferenceCount).ReferenceController;
  pSVar13 = pTVar53->Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_44a8 = (pFVar61->_Content).Widget.Object;
  pTStack_44a0 = (pFVar61->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar61->_Content).Widget.Object = (SWidget *)pSVar13;
  (pFVar61->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_44a0);
  local_4578 = (FName)OnMenuItemButtonClicked;
  uStack_4570 = 0;
  lStack_3c60 = (ulonglong)(uint)fStack_456c << 0x20;
  local_3c68 = OnMenuItemButtonClicked;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SMenuEntryBlock>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar61->_OnClicked,this,(pmf_f4a74f51 *)&local_3c68);
  FLLMScope::FLLMScope(&local_4554,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4578 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4390,&local_4578,true);
  TSlateDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSubMenuButton,RequiredArgs::T0RequiredArgs>
            (&local_44f0,"SSubMenuButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0x393,&local_45a5);
  FMemScope::~FMemScope(&local_4390);
  FLLMScope::~FLLMScope(&local_4554);
  pSVar69 = TSharedPtr<SSubMenuButton,1>::operator->(&local_44f0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar69,(FSlateBaseNamedArgs *)pFVar61);
  pSVar69 = local_44f0._Widget.Object;
  SSubMenuButton::Construct(local_44f0._Widget.Object,pFVar61);
  pSVar70 = TSharedPtr<SSubMenuButton,1>::operator->(&local_44f0._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar70);
  pSVar70 = TSharedPtr<SSubMenuButton,1>::operator->(&local_44f0._Widget);
  pbVar2 = (byte *)((longlong)&pSVar70->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_44f0._Widget.Object == (SSubMenuButton *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar27)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  FVar76.ReferenceController = local_44f0._Widget.SharedReferenceCount.ReferenceController;
  local_44f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_44f0._Widget.Object = (SSubMenuButton *)0x0;
  if ((pSVar69 == (SSubMenuButton *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar27)) {
    pcVar16 = (code *)swi(3);
    pTVar31 = (TSharedRef<SWidget,1> *)(*pcVar16)();
    return pTVar31;
  }
  if (FVar76.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar76.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar76.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar76.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar76.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3c58 = (local_4598->_Content).Widget.Object;
  pTStack_3c50 = (local_4598->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4598->_Content).Widget.Object = (SWidget *)pSVar69;
  (local_4598->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar76.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3c50);
  local_res18 = MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
                          (&local_3b28,"SMenuAnchor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                           ,0x38d,&local_45a4);
  FVar26.ReferenceController = local_43f8.SharedReferenceCount.ReferenceController;
  pTVar14 = (local_res18->_Widget).SharedReferenceCount.ReferenceController;
  local_43f8.Object = (local_res18->_Widget).Object;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_43f8.SharedReferenceCount.ReferenceController = pTVar14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  pTVar71 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::operator<<=
                      (local_res18,&local_3c48,local_4598);
  __return_storage_ptr__->Object = (SWidget *)pTVar71->Object;
  pTVar15 = (pTVar71->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar76.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar76.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3eb8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3df0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ea8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3dd8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_21d8);
  SBox::FArguments::~FArguments(&local_1570);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3530);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3dc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3da8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5b8);
  SBox::FArguments::~FArguments(&local_1230);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_3a80);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3448);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3158._Slots.AllocatorInstance.Data,local_3158._Slots.ArrayNum);
  if ((FSlotArguments *)local_3158._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3158._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_42f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3560);
  if ((void *)local_3560._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3560._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3560);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3570.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3590);
  if ((void *)local_3590._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3590._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3590);
  TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)(local_37b8 + 0x1f8));
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_37b8);
  SMenuAnchor::FArguments::~FArguments(&local_29a8);
  TWeakPtr<SMenuAnchor,1>::operator=<SMenuAnchor>(&this->MenuAnchor,&local_43f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4588);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43e8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_42a8);
  if (pvStack_42a0 != (void *)0x0) {
    FMemory::Free(pvStack_42a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_42a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4520);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4388);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4380);
  return __return_storage_ptr__;
}

// CancelPendingSubMenu @ 1427eca30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuEntryBlock::CancelPendingSubMenu(SMenuEntryBlock *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  pTVar4 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427eca60;
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
    local_18.Object = (this->ActiveTimerHandle).Object;
    if (local_18.Object != (FActiveTimerHandle *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_18.SharedReferenceCount.ReferenceController = pTVar4;
      if ((local_18.Object == (FActiveTimerHandle *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SWidget::UnRegisterActiveTimer((SWidget *)&this->_padding_,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1427eca60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Construct @ 1427eed40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuEntryBlock::Construct(SMenuEntryBlock *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  FLinearColor_u_0 local_88;
  undefined1 local_78;
  undefined1 local_74;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  this->MenuBarButtonStyle = (FButtonStyle *)0x0;
  this->CheckedImage = (FSlateBrush *)0x0;
  this->UncheckedImage = (FSlateBrush *)0x0;
  local_a8 = InvertOnHover;
  uStack_a0 = 0;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_28);
  local_10 = &local_c0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = local_a8;
    puVar3[5] = CONCAT44(uStack_9c,uStack_a0);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVSMenuEntryBlock____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (puVar3[4] == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  local_88._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_88._8_8_ = _UNK_15090c6d8;
  local_78 = 0;
  local_74 = 1;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_a8);
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FStack_68.Data = (FScriptContainerElement *)local_c0.DelegateAllocator;
  local_60 = local_c0.DelegateSize;
  local_c0.DelegateSize = 0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
               (FDestructionSentinel *)&local_a8);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,(TAttribute<FSlateColor> *)&local_88._s_0
           ,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)&local_58);
  if ((local_60 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_68.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_68.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_40);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// FindTextBlockWidget @ 142809c90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMenuEntryBlock::FindTextBlockWidget
          (SMenuEntryBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> FVar3;
  int iVar4;
  FName *pFVar5;
  FName FVar6;
  longlong *plVar7;
  TSharedRef<SWidget,1> *pTVar8;
  int iVar9;
  FName local_res18 [2];
  TSharedRef<SWidget,1> local_48;
  undefined1 local_38 [16];
  
  pFVar5 = ::FName::FName(local_res18,L"STextBlock");
  FVar6 = SWidget::GetType(param_1->Object);
  if (*(FName *)FVar6 == *pFVar5) {
    __return_storage_ptr__->Object = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return __return_storage_ptr__;
  }
  plVar7 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x180))();
  iVar4 = (**(code **)*plVar7)(plVar7);
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      pTVar8 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar7 + 0x10))(plVar7,local_38,iVar9);
      FindTextBlockWidget(this,&local_48,pTVar8);
      if (local_48.Object != SNullWidget::NullWidget.Object) {
        __return_storage_ptr__->Object = local_48.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_48.SharedReferenceCount.ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        goto LAB_142809d91;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
LAB_142809d91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetCheckBoxImageBrushFromStyle @ 14280e0a0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall
SMenuEntryBlock::GetCheckBoxImageBrushFromStyle(SMenuEntryBlock *this,FCheckBoxStyle *param_1)

{
  ECheckBoxState EVar1;
  
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    EVar1 = IsChecked(this);
    if (EVar1 == Unchecked) {
      return &param_1->UncheckedImage;
    }
    if (EVar1 != Checked) {
      return &param_1->UndeterminedImage;
    }
    return &param_1->CheckedImage;
  }
  EVar1 = IsChecked(this);
  if (EVar1 == Unchecked) {
    return &param_1->UncheckedHoveredImage;
  }
  if (EVar1 != Checked) {
    return &param_1->UndeterminedHoveredImage;
  }
  return &param_1->CheckedHoveredImage;
}

// GetFilteredToolTipText @ 14280fe40

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SMenuEntryBlock::GetFilteredToolTipText
          (SMenuEntryBlock *this,FText *__return_storage_ptr__,TAttribute<FText> *param_1)

{
  SMenuAnchor *pSVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FText *pFVar5;
  TSharedPtr<SMenuAnchor_const_,1> *pTVar6;
  ITextData *pIVar7;
  undefined1 *puVar8;
  SMenuOwner *this_00;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TSharedPtr<SMenuAnchor_const_,1> local_28;
  
  pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (SMenuOwner *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_14280fe80:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar10)();
      return pFVar5;
    }
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14280fe80;
      }
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    this_00 = (SMenuOwner *)this->_padding_;
    if (this_00 == (SMenuOwner *)0x0) goto LAB_14280fe80;
  }
  pTVar6 = SMenuOwner::GetOpenMenu(this_00,&local_28);
  pSVar1 = pTVar6->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (pSVar1 == (SMenuAnchor *)0x0) {
    pFVar5 = TAttribute<FText>::Get(param_1);
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar7 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar7;
    if (pIVar7 == (ITextData *)0x0) goto LAB_14280ff32;
    pcVar10 = *(code **)((longlong)*pIVar7 + 8);
    puVar8 = local_res20;
  }
  else {
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar7 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar7;
    if (pIVar7 == (ITextData *)0x0) goto LAB_14280ff32;
    pcVar10 = *(code **)((longlong)*pIVar7 + 8);
    puVar8 = local_res8;
  }
  (*pcVar10)(pIVar7,puVar8);
LAB_14280ff32:
  __return_storage_ptr__->Flags = pFVar5->Flags;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar7 = (param_1->Value).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetMenuBarButtonBorder @ 1428110b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SMenuEntryBlock::GetMenuBarButtonBorder(SMenuEntryBlock *this)

{
  SMenuAnchor *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateBrush *pFVar4;
  bool bVar5;
  
  pTVar3 = (this->MenuAnchor).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1428110e0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = (this->MenuAnchor).Object;
    if ((this_00 != (SMenuAnchor *)0x0) && (bVar5 = SMenuAnchor::IsOpen(this_00), bVar5)) {
      pFVar4 = &this->MenuBarButtonStyle->Pressed;
      goto LAB_1428110f8;
    }
  }
LAB_1428110e0:
  pFVar4 = &this->MenuBarButtonStyle->Hovered;
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    pFVar4 = &this->MenuBarButtonStyle->Normal;
  }
LAB_1428110f8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return pFVar4;
}

// GetMenuBarForegroundColor @ 142811140

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SMenuEntryBlock::GetMenuBarForegroundColor
          (SMenuEntryBlock *this,FSlateColor *__return_storage_ptr__)

{
  FButtonStyle *pFVar1;
  SMenuAnchor *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  undefined4 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pTVar5 = (this->MenuAnchor).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142811180;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->MenuAnchor).Object;
    if ((this_00 != (SMenuAnchor *)0x0) && (bVar6 = SMenuAnchor::IsOpen(this_00), bVar6)) {
      pFVar1 = this->MenuBarButtonStyle;
      fVar7 = (pFVar1->PressedForeground).SpecifiedColor.field0_0x0._s_0.R;
      fVar8 = (pFVar1->PressedForeground).SpecifiedColor.field0_0x0._s_0.G;
      fVar9 = (pFVar1->PressedForeground).SpecifiedColor.field0_0x0._s_0.B;
      fVar10 = (pFVar1->PressedForeground).SpecifiedColor.field0_0x0._s_0.A;
      uVar4._0_1_ = (pFVar1->PressedForeground).ColorUseRule;
      uVar4._1_1_ = (pFVar1->PressedForeground).ColorTableId;
      uVar4._2_2_ = *(undefined2 *)&(pFVar1->PressedForeground).field_0x12;
      goto LAB_1428111d4;
    }
  }
LAB_142811180:
  pFVar1 = this->MenuBarButtonStyle;
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    fVar7 = (pFVar1->NormalForeground).SpecifiedColor.field0_0x0._s_0.R;
    fVar8 = (pFVar1->NormalForeground).SpecifiedColor.field0_0x0._s_0.G;
    fVar9 = (pFVar1->NormalForeground).SpecifiedColor.field0_0x0._s_0.B;
    fVar10 = (pFVar1->NormalForeground).SpecifiedColor.field0_0x0._s_0.A;
    uVar4._0_1_ = (pFVar1->NormalForeground).ColorUseRule;
    uVar4._1_1_ = (pFVar1->NormalForeground).ColorTableId;
    uVar4._2_2_ = *(undefined2 *)&(pFVar1->NormalForeground).field_0x12;
  }
  else {
    fVar7 = (pFVar1->HoveredForeground).SpecifiedColor.field0_0x0._s_0.R;
    fVar8 = (pFVar1->HoveredForeground).SpecifiedColor.field0_0x0._s_0.G;
    fVar9 = (pFVar1->HoveredForeground).SpecifiedColor.field0_0x0._s_0.B;
    fVar10 = (pFVar1->HoveredForeground).SpecifiedColor.field0_0x0._s_0.A;
    uVar4._0_1_ = (pFVar1->HoveredForeground).ColorUseRule;
    uVar4._1_1_ = (pFVar1->HoveredForeground).ColorTableId;
    uVar4._2_2_ = *(undefined2 *)&(pFVar1->HoveredForeground).field_0x12;
  }
LAB_1428111d4:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar7;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar8;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar9;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar10;
  __return_storage_ptr__->ColorUseRule = (char)uVar4;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar4 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar4 >> 0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// GetVisibility @ 142816790

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SMenuEntryBlock::GetVisibility(SMenuEntryBlock *this)

{
  char cVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar4;
  FUICommandInfo *pFVar5;
  code *pcVar6;
  bool bVar7;
  TEnumAsByte<EVisibility::Private> TVar8;
  EVisibility *pEVar9;
  TSharedRef<FUICommandInfo_const_,1> *in_RDX;
  undefined1 local_a0 [8];
  ForAnyElementType FStack_98;
  int local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  ForAnyElementType FStack_78;
  int local_70;
  TSharedPtr<FUICommandInfo_const_,1> local_68;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  TSharedRef<FUICommandInfo_const_,1> local_28;
  
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      TVar8.Value = (*pcVar6)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar8.Value;
    }
  }
  cVar1 = *(char *)(this->_padding_ + 0xc1);
  local_a0 = (undefined1  [8])0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_a0,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->_padding_ + 200));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_58);
  if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  if (cVar1 != '\0') {
    if (this->_padding_ == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        TVar8.Value = (*pcVar6)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar8.Value;
      }
    }
    lVar2 = this->_padding_;
    local_88[0] = *(TEnumAsByte<EVisibility::Private> *)(lVar2 + 0xc0);
    local_88[1] = *(undefined1 *)(lVar2 + 0xc1);
    local_80 = (undefined1  [8])0x0;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_80,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar2 + 200));
    pEVar9 = TAttribute<EVisibility>::Get((TAttribute<EVisibility> *)local_88);
    TVar8.Value = (pEVar9->Value).Value;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
               (FWriteAccessScope *)&local_40);
    if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
    if ((TEnumAsByte<EVisibility::Private>)TVar8.Value != EVisibility::Visible.Value.Value) {
      *(uchar *)&in_RDX->Object = TVar8.Value;
      goto LAB_142816ab8;
    }
  }
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      TVar8.Value = (*pcVar6)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar8.Value;
    }
  }
  pTVar3 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  this_00 = *(FUICommandList **)(this->_padding_ + 0x90);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      TVar8.Value = (*pcVar6)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar8.Value;
    }
  }
  pTVar4 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  pFVar5 = *(FUICommandInfo **)(this->_padding_ + 0x80);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = pFVar5;
  local_68.SharedReferenceCount.ReferenceController = pTVar4;
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      TVar8.Value = (*pcVar6)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar8.Value;
    }
  }
  if ((this_00 == (FUICommandList *)0x0) || (pFVar5 == (FUICommandInfo *)0x0)) {
    FUIAction::IsVisible((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef(&local_68,&local_28);
    FUICommandList::GetVisibility(this_00,in_RDX);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_142816ab8:
  return (EVisibility)SUB81(in_RDX,0);
}

// InvertOnHover @ 14281cd30

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SMenuEntryBlock::InvertOnHover(SMenuEntryBlock *this,FSlateColor *__return_storage_ptr__)

{
  FLinearColor FVar1;
  bool bVar2;
  
  bVar2 = ShouldSubMenuAppearHovered(this);
  FVar1 = FLinearColor::Black;
  if (bVar2) {
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_UseStyle;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// IsChecked @ 14281cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall SMenuEntryBlock::IsChecked(SMenuEntryBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  ECheckBoxState EVar6;
  TSharedRef<FUICommandInfo_const_,1> local_18;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  this_00 = *(FUICommandList **)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  pFVar3 = *(FUICommandInfo **)(this->_padding_ + 0x80);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  if ((this_00 == (FUICommandList *)0x0) || (pFVar3 == (FUICommandInfo *)0x0)) {
    EVar6 = FUIAction::GetCheckState((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar3;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    if (pFVar3 == (FUICommandInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
    }
    EVar6 = FUICommandList::GetCheckState(this_00,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return EVar6;
}

// IsEnabled @ 14281d4b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuEntryBlock::IsEnabled(SMenuEntryBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedRef<FUICommandInfo_const_,1> local_18;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  this_00 = *(FUICommandList **)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  pFVar3 = *(FUICommandInfo **)(this->_padding_ + 0x80);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this_00 == (FUICommandList *)0x0) || (pFVar3 == (FUICommandInfo *)0x0)) {
    bVar5 = FUIAction::CanExecute((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar3;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    if (pFVar3 == (FUICommandInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    bVar5 = FUICommandList::CanExecuteAction(this_00,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// IsEnabledDuringEditMode @ 14281d970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall SMenuEntryBlock::IsEnabledDuringEditMode(SMenuEntryBlock *this)

{
  longlong *this_00;
  undefined8 *puVar1;
  ECustomizedToolMenuVisibility EVar2;
  FName FVar3;
  FCustomizedToolMenu *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  atomic<int> aVar10;
  UObject *pUVar11;
  FMultiBlock *pFVar12;
  FCustomizedToolMenuSection *pFVar13;
  FCustomizedToolMenuEntry *pFVar14;
  FName *pFVar15;
  int iVar16;
  undefined8 *puVar17;
  TReferenceControllerBase<1> *pTVar18;
  SMultiBoxWidget *this_01;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7 [7];
  FName local_2a0;
  TSharedRef<FMultiBox_const_,1> local_298;
  void *local_288 [2];
  void *local_278;
  undefined8 *local_268;
  int local_260;
  undefined8 *local_258;
  undefined8 local_250;
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  local_238;
  TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  local_1e8;
  ForAnyElementType local_198;
  FNamePermissionList local_188;
  undefined1 local_98 [32];
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_58;
  undefined4 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  this_00 = &this->_padding_;
  if ((*this_00 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  FVar3 = *(FName *)(*this_00 + 0xa0);
  if ((((FVar3 == (FName)0x0) || (this->_padding_ == 0)) || (this->_padding_ == 0)) ||
     (*(int *)(this->_padding_ + 8) < 1)) {
    return false;
  }
  pTVar18 = (TReferenceControllerBase<1> *)this->_padding_;
  this_01 = (SMultiBoxWidget *)0x0;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_14281da54:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  else {
    aVar6 = pTVar18->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14281da54;
      }
      LOCK();
      aVar10 = pTVar18->SharedReferenceCount;
      bVar8 = aVar6 == aVar10;
      if (bVar8) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar10 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar10;
    } while (!bVar8);
    this_01 = (SMultiBoxWidget *)this->_padding_;
    if (this_01 == (SMultiBoxWidget *)0x0) goto LAB_14281da54;
  }
  SMultiBoxWidget::GetMultiBox(this_01,&local_298);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  pUVar11 = FWeakObjectPtr::Get(&((local_298.Object)->WeakToolMenu).WeakPtr);
  if (pUVar11 == (UObject *)0x0) goto LAB_14281dd58;
  (**(code **)(*(longlong *)pUVar11 + 0x2e0))(pUVar11,local_288);
  if (0 < local_260) {
    FToolMenuProfile::FToolMenuProfile((FToolMenuProfile *)local_240);
    iVar16 = local_260;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    puVar1 = local_268 + local_260;
    local_58 = (void *)0x0;
    local_70 = ___xmm_00000000ffffffff0000008000000000;
    uStack_68 = _UNK_150631d98;
    local_50 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    puVar17 = local_268;
    while( true ) {
      if (local_260 != iVar16) {
        `TCheckedPointerIterator<FCustomizedToolMenu_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2a8);
      }
      if (puVar17 == puVar1) break;
      pFVar4 = (FCustomizedToolMenu *)*puVar17;
      UE::ToolMenuCustomization::Private::HandleToolMenuProfile
                ((FToolMenuProfile *)local_240,(FToolMenuProfile *)pFVar4);
      UE::ToolMenuCustomization::Private::HandleToolMenuCustomization
                ((FCustomizedToolMenu *)local_240,pFVar4);
      puVar17 = puVar17 + 1;
    }
    iVar16 = (int)local_250;
    puVar1 = local_258 + iVar16;
    puVar17 = local_258;
    while( true ) {
      if ((int)local_250 != iVar16) {
        `TCheckedPointerIterator<FCustomizedToolMenu_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2a7);
      }
      if (puVar17 == puVar1) break;
      pFVar4 = (FCustomizedToolMenu *)*puVar17;
      UE::ToolMenuCustomization::Private::HandleToolMenuProfile
                ((FToolMenuProfile *)local_240,(FToolMenuProfile *)pFVar4);
      UE::ToolMenuCustomization::Private::HandleToolMenuCustomization
                ((FCustomizedToolMenu *)local_240,pFVar4);
      puVar17 = puVar17 + 1;
    }
    pFVar12 = TSharedPtr<FMultiBlock_const_,1>::operator->
                        ((TSharedPtr<FMultiBlock_const_,1> *)this_00);
    if (pFVar12->Type == Heading) {
      pFVar13 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                ::Find(&local_1e8,FVar3);
      if (pFVar13 != (FCustomizedToolMenuSection *)0x0) {
        EVar2 = pFVar13->Visibility;
        goto joined_r0x00014281ddfb;
      }
    }
    else {
      pFVar14 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                ::Find(&local_238,FVar3);
      if ((pFVar14 != (FCustomizedToolMenuEntry *)0x0) && (pFVar14->Visibility == Hidden))
      goto LAB_14281de01;
      FCustomizedToolMenu::GetEntrySectionName((FCustomizedToolMenu *)local_240,(FName)&local_2a0);
      if (local_2a0 == (FName)0x0) {
        pFVar15 = (FName *)(**(code **)(*(longlong *)pUVar11 + 0x2b8))(pUVar11,local_248,FVar3);
        local_2a0 = *pFVar15;
        if (local_2a0 == (FName)0x0) goto LAB_14281dc00;
      }
      pFVar13 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                ::Find(&local_1e8,local_2a0);
      if (pFVar13 != (FCustomizedToolMenuSection *)0x0) {
        EVar2 = pFVar13->Visibility;
joined_r0x00014281ddfb:
        if (EVar2 == Hidden) {
LAB_14281de01:
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data);
          }
          local_50 = 0;
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,0,local_98._8_4_);
          iVar16 = SUB84(local_98._8_8_,4);
          local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
          if (iVar16 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
          }
          uVar7 = local_70._4_4_;
          uStack_68 = 0xffffffff;
          local_70 = (ulonglong)local_70._4_4_ << 0x20;
          if (0x80 < uVar7) {
            local_70 = 0x8000000000;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
          }
          if (local_78 != (void *)0x0) {
            FMemory::Free(local_78);
          }
          if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98._0_8_);
          }
          FNamePermissionList::~FNamePermissionList(&local_188);
          if (local_198.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data);
          }
          local_1e8.Pairs.HashSize = 0;
          if (local_1e8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_1e8.Pairs.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_1e8);
          local_238.Pairs.HashSize = 0;
          if (local_238.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_238.Pairs.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_238);
          if (local_258 != (undefined8 *)0x0) {
            FMemory::Free(local_258);
          }
          if (local_268 != (undefined8 *)0x0) {
            FMemory::Free(local_268);
          }
          if (local_278 != (void *)0x0) {
            FMemory::Free(local_278);
          }
          if (local_288[0] != (void *)0x0) {
            FMemory::Free(local_288[0]);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_298.SharedReferenceCount.ReferenceController);
          return false;
        }
      }
    }
LAB_14281dc00:
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,0,local_98._8_4_);
    iVar16 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar16 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    uVar7 = local_70._4_4_;
    uStack_68 = 0xffffffff;
    local_70 = (ulonglong)local_70._4_4_ << 0x20;
    if (0x80 < uVar7) {
      local_70 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    FNamePermissionList::~FNamePermissionList(&local_188);
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
    local_1e8.Pairs.HashSize = 0;
    if (local_1e8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1e8);
    local_238.Pairs.HashSize = 0;
    if (local_238.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_238.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_238);
  }
  if (local_258 != (undefined8 *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_268 != (undefined8 *)0x0) {
    FMemory::Free(local_268);
  }
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  if (local_288[0] != (void *)0x0) {
    FMemory::Free(local_288[0]);
  }
LAB_14281dd58:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  return true;
}

// MakeNewMenuWidget @ 142820580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMenuEntryBlock::MakeNewMenuWidget
          (SMenuEntryBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FString *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  ForAnyElementType FVar15;
  SMultiBoxWidget *this_00;
  FName FVar16;
  SMultiBoxWidget *pSVar17;
  SMultiBoxWidget *pSVar18;
  SMultiBoxWidget *pSVar19;
  FName local_res18;
  FName local_res20;
  undefined1 local_678 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_670;
  ForAnyElementType FStack_668;
  ulonglong local_660;
  undefined8 local_658;
  ISlateStyle *local_650;
  undefined1 local_648 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_630;
  ForAnyElementType FStack_628;
  ulonglong local_620;
  undefined1 local_618 [80];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5c8;
  ForAnyElementType FStack_5c0;
  ulonglong local_5b8;
  float local_5b0;
  bool local_5ac;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5a8;
  ForAnyElementType FStack_5a0;
  ulonglong local_598;
  FOptionalSize local_590;
  bool local_58c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_588;
  ForAnyElementType FStack_580;
  ulonglong local_578;
  FOptionalSize local_570;
  bool local_56c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_568;
  ForAnyElementType FStack_560;
  ulonglong local_558;
  FName local_550;
  FName local_548;
  FString local_540;
  undefined1 local_530 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_508;
  ForAnyElementType FStack_500;
  ulonglong local_4f8;
  FString local_4f0;
  TSharedPtr<FExtender,1> local_4e0;
  TSharedPtr<FUICommandList_const_,1> local_4d0;
  FDestructionSentinel local_4c0;
  FDestructionSentinel local_4a8;
  FDestructionSentinel local_490;
  FDestructionSentinel local_478;
  FDestructionSentinel local_460;
  FDestructionSentinel local_448;
  FDestructionSentinel local_430;
  TSharedRef<FMultiBox_const_,1> local_418;
  FString local_408;
  FString local_3f8;
  TSharedPtr<FExtender,1> local_3e8;
  TSharedPtr<FUICommandList_const_,1> local_3d8;
  TSharedRef<SWidget,1> local_3c8;
  FText local_3b8;
  FReadAccessScope local_3a8;
  FReadAccessScope local_390;
  FReadAccessScope local_378;
  FReadAccessScope local_360;
  FMenuBuilder local_348;
  FMenuBuilder local_1c0;
  
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar3 = this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar3 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerMultiBoxWidget.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x61e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  pSVar18 = (SMultiBoxWidget *)this->_padding_;
  pSVar19 = (SMultiBoxWidget *)0x0;
  this_00 = pSVar19;
  pSVar17 = pSVar18;
  if (pSVar18 == (SMultiBoxWidget *)0x0) {
LAB_1428206a5:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar18 = pSVar17;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  else {
    iVar5 = (int)pSVar18->_padding_;
    do {
      this_00 = (SMultiBoxWidget *)0x0;
      pSVar17 = pSVar19;
      if (iVar5 == 0) goto LAB_1428206a5;
      LOCK();
      iVar10 = (int)pSVar18->_padding_;
      bVar7 = iVar5 == iVar10;
      if (bVar7) {
        *(int *)&pSVar18->_padding_ = iVar5 + 1;
        iVar10 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar10;
    } while (!bVar7);
    this_00 = (SMultiBoxWidget *)this->_padding_;
    pSVar17 = pSVar18;
    if (this_00 == (SMultiBoxWidget *)0x0) goto LAB_1428206a5;
  }
  if (((this_00->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  local_650 = ((this_00->MultiBox).Object)->StyleSet;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x278),&local_390);
  if ((*(int *)(lVar3 + 0x288) != 0) && (*(longlong **)(lVar3 + 0x280) != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x280) + 0x38))();
    bVar7 = true;
    if (cVar8 != '\0') goto LAB_14282074a;
  }
  bVar7 = false;
LAB_14282074a:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_390);
  if (bVar7) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    FVar16 = local_res20;
    if (*(longlong *)(lVar3 + 0xa0) != 0) {
      if ((this_00 == (SMultiBoxWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar11;
      }
      SMultiBoxWidget::GetMultiBox(this_00,&local_418);
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_418.SharedReferenceCount.ReferenceController);
      FVar16 = local_res20;
      if (local_res18 != (FName)0x0) {
        local_550 = *(FName *)(lVar3 + 0xa0);
        pFVar12 = ::FName::ToString(&local_550,&local_3f8);
        pFVar13 = ::FName::ToString(&local_res18,&local_408);
        ::FString::ConcatFC(&local_4f0,pFVar13,L".");
        ::FString::ConcatFF(&local_540,&local_4f0,pFVar12);
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_540.Data.ArrayNum != 0) {
          FVar15.Data = local_540.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_548,(wchar_t *)FVar15.Data);
        if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_540.Data.AllocatorInstance.Data);
        }
        if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
        }
        if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.Data.AllocatorInstance.Data);
        }
        FVar16 = local_548;
        if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
        }
      }
    }
    local_4e0.Object = *(FExtender **)(lVar3 + 0x2c0);
    bVar7 = *(bool *)(lVar3 + 0x2b9);
    local_4e0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar3 + 0x2c8);
    if (local_4e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this->_padding_ == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
    local_4d0.Object = *(FUICommandList **)(this->_padding_ + 0x90);
    local_4d0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
    if (local_4d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuBuilder::FMenuBuilder
              (&local_348,*(bool *)(lVar3 + 0x2d0),&local_4d0,&local_4e0,false,local_650,true,FVar16
               ,bVar7);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x278),&local_378)
    ;
    if (*(int *)(lVar3 + 0x288) != 0) {
      pSVar19 = *(SMultiBoxWidget **)(lVar3 + 0x280);
    }
    (**(code **)(pSVar19->_padding_ + 0x60))(pSVar19,&local_348);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_378);
    (**(code **)(local_348._padding_ + 0x20))(&local_348,__return_storage_ptr__,0,1000);
    FMenuBuilder::~FMenuBuilder(&local_348);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x290),&local_3a8)
    ;
    if (((*(int *)(lVar3 + 0x2a0) == 0) || (*(longlong **)(lVar3 + 0x298) == (longlong *)0x0)) ||
       (cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x298) + 0x38))(), cVar8 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_3a8);
      if (*(longlong *)(lVar3 + 0x2a8) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                           ,0x651,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
          return pTVar11;
        }
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
      }
      else {
        local_658 = 0;
        local_3e8.Object = (FExtender *)0x0;
        local_3e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_3d8.Object = (FUICommandList *)0x0;
        local_3d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FMenuBuilder::FMenuBuilder
                  (&local_1c0,*(bool *)(lVar3 + 0x2d0),&local_3d8,&local_3e8,false,local_650,true,
                   (FName)0x0,true);
        local_678[0] = (TEnumAsByte<EVisibility::Private>)0x19;
        local_678[1] = false;
        local_660 = 0;
        local_670.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_668.Data = (FScriptContainerElement *)0x0;
        FSlateIcon::FSlateIcon((FSlateIcon *)local_530);
        local_530[0x20] = false;
        local_4f8 = 0;
        local_508.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_500.Data = (FScriptContainerElement *)0x0;
        pFVar14 = FText::FText(&local_3b8);
        FText::FText((FText *)local_648,pFVar14);
        local_648[0x10] = true;
        local_620 = 0;
        local_630.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_628.Data = (FScriptContainerElement *)0x0;
        memset(local_618,0,200);
        local_5b8 = 0;
        local_598 = 0;
        local_578 = 0;
        local_558 = 0;
        local_590.Size = FOptionalSize::Unspecified;
        local_570.Size = FOptionalSize::Unspecified;
        local_618._72_4_ = 0.0;
        local_618[0x4c] = false;
        local_5c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_5c0.Data = (FScriptContainerElement *)0x0;
        local_5b0 = 0.0;
        local_5ac = false;
        local_5a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_5a0.Data = (FScriptContainerElement *)0x0;
        local_58c = false;
        local_588.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_580.Data = (FScriptContainerElement *)0x0;
        local_56c = false;
        local_568.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_560.Data = (FScriptContainerElement *)0x0;
        pFVar14 = FText::GetEmpty();
        pTVar11 = TSharedPtr<SWidget,1>::ToSharedRef
                            ((TSharedPtr<SWidget,1> *)(lVar3 + 0x2a8),&local_3c8);
        FMenuBuilder::AddWidget
                  (&local_1c0,pTVar11,pFVar14,(FMenuEntryStyleParams *)local_618,true,
                   (TAttribute<FText> *)local_648,(TAttribute<FSlateIcon> *)local_530,
                   (TAttribute<EVisibility> *)local_678);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c8.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_568,(FWriteAccessScope *)&local_4c0);
        if (((int)local_558 != 0) && (FStack_560.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_560.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_560,0,0,0x10)
          ;
          local_558 = local_558 & 0xffffffff00000000;
        }
        if (local_4c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
        }
        if (FStack_560.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_560.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_568.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_588,(FWriteAccessScope *)&local_4a8);
        if (((int)local_578 != 0) && (FStack_580.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_580.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_580,0,0,0x10)
          ;
          local_578 = local_578 & 0xffffffff00000000;
        }
        if (local_4a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
        }
        if (FStack_580.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_580.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_588.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5a8,(FWriteAccessScope *)&local_490);
        if (((int)local_598 != 0) && (FStack_5a0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_5a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5a0,0,0,0x10)
          ;
          local_598 = local_598 & 0xffffffff00000000;
        }
        if (local_490.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_490.Accessor,&local_490);
        }
        if (FStack_5a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_5a0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5a8.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5c8,(FWriteAccessScope *)&local_478);
        if (((int)local_5b8 != 0) && (FStack_5c0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_5c0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5c0,0,0,0x10)
          ;
          local_5b8 = local_5b8 & 0xffffffff00000000;
        }
        if (local_478.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
        }
        if (FStack_5c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_5c0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5c8.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_630,(FWriteAccessScope *)&local_460);
        if (((int)local_620 != 0) && (FStack_628.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_628.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_628,0,0,0x10)
          ;
          local_620 = local_620 & 0xffffffff00000000;
        }
        if (local_460.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
        }
        if (FStack_628.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_628.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_630.AccessDetector);
        if ((ITextData *)local_648._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_648._0_8_ + 0x10))();
        }
        if (local_3b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_508,(FWriteAccessScope *)&local_448);
        if (((int)local_4f8 != 0) && (FStack_500.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_500.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_500,0,0,0x10)
          ;
          local_4f8 = local_4f8 & 0xffffffff00000000;
        }
        if (local_448.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
        }
        if (FStack_500.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_500.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_508.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_670,(FWriteAccessScope *)&local_430);
        if (((int)local_660 != 0) && (FStack_668.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_668.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_668,0,0,0x10)
          ;
          local_660 = local_660 & 0xffffffff00000000;
        }
        if (local_430.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
        }
        if (FStack_668.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_668.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_670.AccessDetector);
        (**(code **)(local_1c0._padding_ + 0x20))(&local_1c0,__return_storage_ptr__,0,1000);
        FMenuBuilder::~FMenuBuilder(&local_1c0);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_3a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x290),
                 &local_360);
      if (*(int *)(lVar3 + 0x2a0) != 0) {
        pSVar19 = *(SMultiBoxWidget **)(lVar3 + 0x298);
      }
      (**(code **)(pSVar19->_padding_ + 0x60))(pSVar19,__return_storage_ptr__);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_360);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// OnCheckStateChanged @ 142824290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuEntryBlock::OnCheckStateChanged(SMenuEntryBlock *this,ECheckBoxState param_1)

{
  OnClicked(this,true);
  return;
}

// OnClicked @ 1428248d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMenuEntryBlock::OnClicked(SMenuEntryBlock *this,bool param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  SMenuAnchor *this_00;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  EVisibility EVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  atomic<int> aVar12;
  FSlateApplication *pFVar13;
  TSharedRef<SWidget,1> *pTVar14;
  TSharedRef<FUICommandInfo_const_,1> *pTVar15;
  TSharedRef<SWindow,1> *pTVar16;
  SMultiBoxWidget *pSVar17;
  TReferenceControllerBase<1> *pTVar18;
  ForElementType<FArrangedWidget> FVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined1 auStack_278 [32];
  TReferenceControllerBase<1> *local_258;
  TReferenceControllerBase<1> *local_250;
  TSharedPtr<SMultiBoxWidget,1> local_248;
  TSharedPtr<SMultiBoxWidget,1> local_238;
  TSharedPtr<FUICommandInfo_const_,1> local_228;
  TSharedRef<SMenuAnchor,1> local_218;
  TSharedRef<SWidget_const_,1> local_208;
  TSharedRef<FMultiBox_const_,1> local_1f8;
  TSharedRef<SWidget,1> local_1e8;
  TSharedRef<SWidget,1> local_1d8;
  FReadAccessScope local_1c8;
  TSharedRef<FUICommandInfo_const_,1> local_1b0;
  TSharedRef<SWindow,1> local_1a0;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_278;
  bVar10 = false;
  local_258 = (TReferenceControllerBase<1> *)((ulonglong)local_258 & 0xffffffff00000000);
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar18 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar1 = this->_padding_;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_250 = pTVar18;
  if ((lVar1 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar2 = *(longlong **)(this->_padding_ + 0x90);
  local_258 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  if (local_258 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_258->SharedReferenceCount = (atomic<int>)((int)local_258->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar18 = (TReferenceControllerBase<1> *)this->_padding_;
  pSVar17 = (SMultiBoxWidget *)0x0;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_142824a16:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    aVar6 = pTVar18->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142824a16;
      }
      LOCK();
      aVar12 = pTVar18->SharedReferenceCount;
      bVar9 = aVar6 == aVar12;
      if (bVar9) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar12 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar12;
    } while (!bVar9);
    pSVar17 = (SMultiBoxWidget *)this->_padding_;
    if (pSVar17 == (SMultiBoxWidget *)0x0) goto LAB_142824a16;
  }
  SMultiBoxWidget::GetMultiBox(pSVar17,&local_1f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  if (((local_1f8.Object)->bShouldCloseWindowAfterMenuSelection == false) ||
     ((*(char *)(lVar1 + 0x2b8) != '\0' &&
      (bVar9 = FUIAction::IsBound((FUIAction *)(lVar1 + 0x18)), !bVar9)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((!param_1) && (bVar9)) {
    if (*(char *)(lVar1 + 700) == '\0') {
      pFVar13 = FSlateApplication::Get();
      FSlateApplication::DismissAllMenus(pFVar13);
    }
    else {
      pFVar13 = FSlateApplication::Get();
      pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1e8);
      FSlateApplication::DismissMenuByWidget(pFVar13,pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
  }
  pTVar18 = local_250;
  if (plVar2 == (longlong *)0x0) {
LAB_142824b3c:
    bVar5 = false;
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar18 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
    lVar3 = *(longlong *)(this->_padding_ + 0x80);
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    if (lVar3 == 0) goto LAB_142824b3c;
    bVar5 = true;
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  if (bVar5) {
    if ((plVar2 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = *(code **)(*plVar2 + 0x18);
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_228.Object = *(FUICommandInfo **)(this->_padding_ + 0x80);
    local_228.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
    if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar15 = TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef(&local_228,&local_1b0);
    (*pcVar4)(plVar2,pTVar15);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
  }
  else {
    FUIAction::Execute((FUIAction *)(lVar1 + 0x18));
  }
  if (bVar9) goto LAB_142824c98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x278),&local_1c8);
  if (((*(int *)(lVar1 + 0x288) == 0) || (*(longlong **)(lVar1 + 0x280) == (longlong *)0x0)) ||
     (cVar11 = (**(code **)(**(longlong **)(lVar1 + 0x280) + 0x38))(), cVar11 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c8);
    bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x290));
    if ((!bVar10) && (*(longlong *)(lVar1 + 0x2a8) == 0)) goto LAB_142824c98;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c8);
  }
  pTVar18 = (this->MenuAnchor).WeakReferenceCount.ReferenceController;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar18->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142824c90;
      }
      LOCK();
      aVar12 = pTVar18->SharedReferenceCount;
      bVar10 = aVar6 == aVar12;
      if (bVar10) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar12 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar12;
    } while (!bVar10);
    this_00 = (this->MenuAnchor).Object;
    if ((this_00 != (SMenuAnchor *)0x0) &&
       (bVar10 = SMenuAnchor::ShouldOpenDueToClick(this_00), bVar10)) {
      FWidgetPath::FWidgetPath(&local_190);
      pFVar13 = FSlateApplication::Get();
      EVar7 = EVisibility::Visible;
      pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this_00->_padding_,&local_1d8);
      local_208.Object = pTVar14->Object;
      local_208.SharedReferenceCount.ReferenceController =
           (pTVar14->SharedReferenceCount).ReferenceController;
      if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::GeneratePathToWidgetUnchecked(pFVar13,&local_208,&local_190,EVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
      bVar10 = FWidgetPath::IsValid(&local_190);
      if (bVar10) {
        pFVar13 = FSlateApplication::Get();
        pTVar16 = FWidgetPath::GetWindow(&local_190,&local_1a0);
        bVar10 = FSlateApplication::IsWindowInDestroyQueue(pFVar13,pTVar16);
        if (!bVar10) {
          local_238.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)this->_padding_;
          pTVar22 = (TReferenceControllerBase<1> *)0x0;
          local_238.Object = (SMultiBoxWidget *)0x0;
          if (local_238.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            aVar6 = (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            do {
              if (aVar6 == (atomic<int>)0x0) {
                local_238.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                goto LAB_142824dda;
              }
              LOCK();
              aVar12 = (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              bVar10 = aVar6 == aVar12;
              if (bVar10) {
                (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar6 + 1);
                aVar12 = aVar6;
              }
              UNLOCK();
              aVar6 = aVar12;
            } while (!bVar10);
            local_238.Object = (SMultiBoxWidget *)this->_padding_;
          }
LAB_142824dda:
          FVar8.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
          pSVar17 = TSharedPtr<SMultiBoxWidget,1>::operator->(&local_238);
          SMenuOwner::CloseSummonedMenus((SMenuOwner *)pSVar17);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          (**(code **)(this_00->_padding_ + 0x250))(this_00,1,1,0);
          local_248.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)this->_padding_;
          local_248.Object = (SMultiBoxWidget *)0x0;
          if (local_248.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            aVar6 = (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            do {
              if (aVar6 == (atomic<int>)0x0) {
                local_248.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                goto LAB_142824e4a;
              }
              LOCK();
              aVar12 = (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              bVar10 = aVar6 == aVar12;
              if (bVar10) {
                (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar6 + 1);
                aVar12 = aVar6;
              }
              UNLOCK();
              aVar6 = aVar12;
            } while (!bVar10);
            local_248.Object = (SMultiBoxWidget *)this->_padding_;
          }
LAB_142824e4a:
          FVar8.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
          pSVar17 = TSharedPtr<SMultiBoxWidget,1>::operator->(&local_248);
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
          local_218.Object = this_00;
          local_218.SharedReferenceCount.ReferenceController = pTVar18;
          if ((this_00 == (SMenuAnchor *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          SMenuOwner::SetSummonedMenu((SMenuOwner *)pSVar17,&local_218);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          pTVar21 = (TReferenceControllerBase<1> *)this->_padding_;
          pTVar20 = pTVar21;
          if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
LAB_142824ed7:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            pTVar21 = pTVar20;
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            aVar6 = pTVar21->SharedReferenceCount;
            do {
              pTVar20 = pTVar22;
              if (aVar6 == (atomic<int>)0x0) goto LAB_142824ed7;
              LOCK();
              aVar12 = pTVar21->SharedReferenceCount;
              bVar10 = aVar6 == aVar12;
              if (bVar10) {
                pTVar21->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
                aVar12 = aVar6;
              }
              UNLOCK();
              aVar6 = aVar12;
            } while (!bVar10);
            pTVar22 = (TReferenceControllerBase<1> *)this->_padding_;
            pTVar20 = pTVar21;
            if (pTVar22 == (TReferenceControllerBase<1> *)0x0) goto LAB_142824ed7;
          }
          pTVar22[0x53]._padding_ = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar21);
        }
      }
      if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar19 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
      if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar19 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar19,local_190.Widgets.Array.ArrayNum)
      ;
      if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
  }
LAB_142824c90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
LAB_142824c98:
  CancelPendingSubMenu(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_258);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_250);
  return;
}

// OnGetCheckImage @ 142827330

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SMenuEntryBlock::OnGetCheckImage(SMenuEntryBlock *this)

{
  ECheckBoxState EVar1;
  
  EVar1 = IsChecked(this);
  if (EVar1 == Checked) {
    return this->CheckedImage;
  }
  return this->UncheckedImage;
}

// OnKeyDown @ 142827fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMenuEntryBlock::OnKeyDown
          (SMenuEntryBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uStackX_c;
  FReply local_d8;
  
  SWidget::OnKeyDown((SWidget *)this,&local_d8,param_1,param_2);
  FReply::~FReply(&local_d8);
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = false;
  if (FVar2 == EKeys::Up.KeyName) {
    pTVar5 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142828065:
    bVar3 = true;
    bVar4 = true;
    if (!bVar6) goto LAB_142828072;
  }
  else {
    pTVar5 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (FVar2 == EKeys::Down.KeyName) goto LAB_142828065;
    bVar4 = false;
  }
  bVar3 = bVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_142828072:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = FVar2 == EKeys::Up.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SMultiBoxWidget::FocusNextWidget(__return_storage_ptr__,bVar6 + Next);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMenuItemButtonClicked @ 1428288f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMenuEntryBlock::OnMenuItemButtonClicked(SMenuEntryBlock *this,FReply *__return_storage_ptr__)

{
  OnClicked(this,false);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 142829e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMenuEntryBlock::OnMouseEnter(SMenuEntryBlock *this,FGeometry *param_1,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  SMenuAnchor *pSVar3;
  code *pcVar4;
  double dVar5;
  atomic<int> aVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  atomic<int> aVar11;
  int iVar12;
  TSharedPtr<SMenuAnchor_const_,1> *pTVar13;
  FReadAccessScope *this_00;
  SMenuAnchor *pSVar14;
  SMenuAnchor *pSVar15;
  SMenuOwner *this_01;
  bool bVar16;
  double dVar17;
  TReferenceControllerBase<1> *local_res20;
  TSharedPtr<SMenuAnchor_const_,1> local_d8;
  LARGE_INTEGER local_c8;
  longlong local_c0;
  TReferenceControllerBase<1> *local_b8;
  TSharedRef<SMenuAnchor,1> local_b0;
  TVector2<double>_u_0 local_a0;
  TSharedPtr<SMenuAnchor_const_,1> local_90;
  FReadAccessScope local_80;
  FReadAccessScope local_68 [2];
  
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar2 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c0 = lVar2;
  local_b8 = pTVar1;
  if ((lVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_res20 = (TReferenceControllerBase<1> *)this->_padding_;
  this_01 = (SMenuOwner *)0x0;
  if (local_res20 == (TReferenceControllerBase<1> *)0x0) {
LAB_142829f18:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PinnedOwnerMultiBoxWidget.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                       ,0x554,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    aVar6 = local_res20->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        local_res20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142829f18;
      }
      LOCK();
      aVar11 = local_res20->SharedReferenceCount;
      bVar8 = aVar6 == aVar11;
      if (bVar8) {
        local_res20->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar11 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar11;
    } while (!bVar8);
    this_01 = (SMenuOwner *)this->_padding_;
    if (this_01 == (SMenuOwner *)0x0) goto LAB_142829f18;
  }
  SMenuOwner::GetOpenMenu(this_01,&local_d8);
  if (local_d8.Object == (SMenuAnchor *)0x0) {
LAB_142829fcc:
    bVar8 = false;
  }
  else {
    if ((local_d8.Object == (SMenuAnchor *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = SMenuAnchor::IsOpen(local_d8.Object);
    if (!bVar8) goto LAB_142829fcc;
    bVar8 = true;
  }
  QueryPerformanceCounter(&local_c8);
  dVar5 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((this_01 == (SMenuOwner *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar17 = (double)this_01[1]._padding_ + __real_3fe0000000000000;
  bVar9 = false;
  if (bVar8) {
    if ((local_d8.Object == (SMenuAnchor *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SMenuAnchor::GetMenuPosition(local_d8.Object,(TVector2<double> *)&local_a0._s_0);
    bVar9 = (double)*(float *)&param_2->ScreenSpacePosition < local_a0._s_0.X ==
            (0.0 < *(float *)&param_2->CursorDelta || *(float *)&param_2->CursorDelta == 0.0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x278),&local_80);
  if (((*(int *)(lVar2 + 0x288) == 0) || (*(longlong **)(lVar2 + 0x280) == (longlong *)0x0)) ||
     (cVar10 = (**(code **)(**(longlong **)(lVar2 + 0x280) + 0x38))(), cVar10 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x290),local_68);
    if (((*(int *)(lVar2 + 0x2a0) != 0) && (*(longlong **)(lVar2 + 0x298) != (longlong *)0x0)) &&
       (cVar10 = (**(code **)(**(longlong **)(lVar2 + 0x298) + 0x38))(), cVar10 != '\0')) {
      this_00 = local_68;
      goto LAB_14282a0e7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_68);
    if (*(longlong *)(lVar2 + 0x2a8) == 0) {
      if (bVar8) {
        if ((!bVar9) || (dVar5 <= dVar17)) {
          RequestSubMenuToggle((SMenuEntryBlock *)&this[-1].MenuBarButtonStyle,false,false);
        }
        else {
          RequestSubMenuToggle((SMenuEntryBlock *)&this[-1].MenuBarButtonStyle,false,true);
        }
      }
      goto LAB_14282a2c6;
    }
  }
  else {
    this_00 = &local_80;
LAB_14282a0e7:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
  }
  pSVar15 = (this->MenuAnchor).Object;
  pSVar14 = (SMenuAnchor *)0x0;
  if (pSVar15 != (SMenuAnchor *)0x0) {
    iVar7 = (int)pSVar15->_padding_;
    do {
      if (iVar7 == 0) {
        pSVar15 = (SMenuAnchor *)0x0;
        goto LAB_14282a115;
      }
      LOCK();
      iVar12 = (int)pSVar15->_padding_;
      bVar16 = iVar7 == iVar12;
      if (bVar16) {
        *(int *)&pSVar15->_padding_ = iVar7 + 1;
        iVar12 = iVar7;
      }
      UNLOCK();
      iVar7 = iVar12;
    } while (!bVar16);
    pSVar14 = (SMenuAnchor *)this->UncheckedImage;
  }
LAB_14282a115:
  if (*(char *)(local_c0 + 0x2b8) == '\0') {
    if (((bVar8) && (local_d8.Object != pSVar14)) &&
       (SMenuOwner::CloseSummonedMenus(this_01), pSVar14 != (SMenuAnchor *)0x0)) {
      (**(code **)(pSVar14->_padding_ + 0x250))(pSVar14,1,1,0);
      if (pSVar15 != (SMenuAnchor *)0x0) {
        LOCK();
        *(int *)&pSVar15->_padding_ = (int)pSVar15->_padding_ + 1;
        UNLOCK();
      }
      local_b0.Object = pSVar14;
      local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar15;
      if ((pSVar14 == (SMenuAnchor *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SMenuOwner::SetSummonedMenu(this_01,&local_b0);
      this_01[1]._padding_ = 0;
    }
  }
  else if (*(char *)(local_c0 + 0x2ba) == '\0') {
    pTVar13 = SMenuOwner::GetOpenMenu(this_01,&local_90);
    pSVar3 = pTVar13->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    if (pSVar3 != pSVar14) {
      if (((!bVar8) || (!bVar9)) || (dVar5 <= dVar17)) {
        RequestSubMenuToggle((SMenuEntryBlock *)&this[-1].MenuBarButtonStyle,true,false);
      }
      else {
        RequestSubMenuToggle((SMenuEntryBlock *)&this[-1].MenuBarButtonStyle,true,true);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar15);
LAB_14282a2c6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  return;
}

// OnMouseLeave @ 14282a520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuEntryBlock::OnMouseLeave(SMenuEntryBlock *this,FPointerEvent *param_1)

{
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  CancelPendingSubMenu((SMenuEntryBlock *)&this[-1].MenuBarButtonStyle);
  return;
}

// RequestSubMenuToggle @ 142832c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMenuEntryBlock::RequestSubMenuToggle(SMenuEntryBlock *this,bool param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  uint uVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<FActiveTimerHandle,1> *pTVar9;
  TStatId *pTVar10;
  TStatId *pTVar11;
  float fVar12;
  TReferenceControllerBase<1> *local_res8;
  TSharedRef<SWidget,1> local_98;
  TSharedRef<FActiveTimerHandle,1> local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  pTVar10 = (TStatId *)0x0;
  fVar12 = __real_3f000000;
  if (!param_2) {
    fVar12 = 0.0;
  }
  if ((((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar3 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    local_78 = (undefined1  [8])0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_70);
    uVar5 = local_88.SharedReferenceCount.ReferenceController._4_4_;
    if (puVar6 != (undefined8 *)0x0) {
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
      pTVar11 = &pTVar7->Object[-1].StatID;
      if (pTVar7->Object == (SWidget *)0x0) {
        pTVar11 = pTVar10;
      }
      local_res8 = (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      *(bool *)(puVar6 + 1) = param_1;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar8;
      *puVar6 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSMenuEntryBlock___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      puVar6[3] = pTVar11;
      puVar6[4] = local_res8;
      if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res8->WeakReferenceCount = (atomic<int>)((int)local_res8->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar10 = (TStatId *)0x7;
      puVar6[5] = UpdateSubMenuState;
      puVar6[6] = (ulonglong)uVar5 << 0x20;
    }
    if (((ulonglong)pTVar10 & 4) != 0) {
      pTVar10 = (TStatId *)(ulonglong)((uint)pTVar10 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res8);
    }
    if (((ulonglong)pTVar10 & 2) != 0) {
      pTVar10 = (TStatId *)(ulonglong)((uint)pTVar10 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res8);
    }
    if (((ulonglong)pTVar10 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    pTVar9 = SWidget::RegisterActiveTimer
                       ((SWidget *)&this->_padding_,&local_88,fVar12,
                        (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                         *)local_78);
    (this->ActiveTimerHandle).Object = pTVar9->Object;
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
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
      (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                        local_88.SharedReferenceCount.ReferenceController._0_4_));
  }
  return;
}

// ShouldSubMenuAppearHovered @ 142835e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuEntryBlock::ShouldSubMenuAppearHovered(SMenuEntryBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  SMenuAnchor *pSVar6;
  SMenuAnchor *pSVar7;
  SMenuAnchor *pSVar8;
  SMenuAnchor *pSVar9;
  bool bVar10;
  uint uStackX_c;
  
  pSVar9 = (SMenuAnchor *)0x0;
  if ((((this->MenuAnchor).Object == (SMenuAnchor *)0x0) ||
      (pTVar1 = (this->MenuAnchor).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pSVar8 = (SMenuAnchor *)((ulonglong)uStackX_c << 0x20);
    pSVar6 = pSVar9;
LAB_142835f2b:
    pSVar7 = (SMenuAnchor *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pSVar8 = (SMenuAnchor *)(this->MenuAnchor).WeakReferenceCount.ReferenceController;
    pSVar7 = pSVar8;
    pSVar6 = pSVar9;
    if (pSVar8 == (SMenuAnchor *)0x0) {
LAB_142835e75:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar8 = pSVar7;
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pSVar8->_padding_;
      do {
        pSVar7 = pSVar9;
        pSVar6 = (SMenuAnchor *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142835e75;
        LOCK();
        aVar5 = *(atomic<int> *)&pSVar8->_padding_;
        bVar10 = aVar3 == aVar5;
        if (bVar10) {
          *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar10);
      pSVar6 = (this->MenuAnchor).Object;
      pSVar7 = pSVar8;
      if (pSVar6 == (SMenuAnchor *)0x0) goto LAB_142835e75;
    }
    bVar10 = SMenuAnchor::IsOpen(pSVar6);
    pSVar6 = (SMenuAnchor *)&DAT_00000001;
    if (!bVar10) goto LAB_142835f2b;
    pSVar7 = (SMenuAnchor *)this->_padding_;
    pSVar6 = pSVar7;
    if (pSVar7 == (SMenuAnchor *)0x0) {
LAB_142835ed1:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar7 = pSVar6;
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pSVar7->_padding_;
      do {
        pSVar6 = pSVar9;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142835ed1;
        LOCK();
        aVar5 = *(atomic<int> *)&pSVar7->_padding_;
        bVar10 = aVar3 == aVar5;
        if (bVar10) {
          *(atomic<int> *)&pSVar7->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar10);
      pSVar9 = (SMenuAnchor *)this->_padding_;
      pSVar6 = pSVar7;
      if (pSVar9 == (SMenuAnchor *)0x0) goto LAB_142835ed1;
    }
    pSVar6 = (SMenuAnchor *)&DAT_00000003;
    if (*(char *)((longlong)&pSVar9->_padding_ + 3) == '\0') {
      bVar10 = true;
      goto LAB_142835f33;
    }
  }
  bVar10 = false;
LAB_142835f33:
  if (((ulonglong)pSVar6 & 2) != 0) {
    pSVar6 = (SMenuAnchor *)(ulonglong)((uint)pSVar6 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar7);
  }
  if (((ulonglong)pSVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar8);
  }
  return bVar10;
}

// TintOnHover @ 142837290

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SMenuEntryBlock::TintOnHover(SMenuEntryBlock *this,FSlateColor *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  FSlateColor *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
    __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
    __return_storage_ptr__->ColorTableId = Black;
    return __return_storage_ptr__;
  }
  if ((((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerMultiBoxWidget.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                         ,0x684,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSlateColor *)(*pcVar2)();
    return pFVar6;
  }
  pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar8 = 0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142837324;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    lVar8 = this->_padding_;
    if (lVar8 != 0) goto LAB_14283734a;
  }
LAB_142837324:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSlateColor *)(*pcVar2)();
    return pFVar6;
  }
LAB_14283734a:
  if ((*(longlong *)(lVar8 + 0x2b8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSlateColor *)(*pcVar2)();
    return pFVar6;
  }
  plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x2b8) + 0x60);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&SelectionColorName,"SelectionColor");
    _Init_thread_footer(&::_TSS0);
  }
  (**(code **)(*plVar1 + 0x40))
            (plVar1,__return_storage_ptr__,SelectionColorName,0,&FStyleDefaults::DefaultSlateColor,0
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// UpdateSubMenuState @ 14283a860

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SMenuEntryBlock::UpdateSubMenuState(SMenuEntryBlock *this,double param_1,float param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EActiveTimerReturnType EVar6;
  char cVar7;
  int iVar8;
  TSharedPtr<SMenuAnchor_const_,1> *pTVar9;
  SMenuAnchor *this_00;
  SMenuAnchor *pSVar10;
  SMenuAnchor *pSVar11;
  SMenuAnchor *pSVar12;
  SMenuAnchor *pSVar13;
  TSharedRef<SMenuAnchor,1> local_78;
  TSharedPtr<SMenuAnchor_const_,1> local_68;
  FReadAccessScope local_58 [2];
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar2 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pSVar12 = (SMenuAnchor *)this->_padding_;
  pSVar13 = (SMenuAnchor *)0x0;
  this_00 = pSVar13;
  pSVar11 = pSVar12;
  if (pSVar12 != (SMenuAnchor *)0x0) {
    iVar4 = (int)pSVar12->_padding_;
    do {
      this_00 = (SMenuAnchor *)0x0;
      pSVar11 = pSVar13;
      if (iVar4 == 0) goto LAB_14283a952;
      LOCK();
      iVar8 = (int)pSVar12->_padding_;
      bVar5 = iVar4 == iVar8;
      if (bVar5) {
        *(int *)&pSVar12->_padding_ = iVar4 + 1;
        iVar8 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar8;
    } while (!bVar5);
    this_00 = (SMenuAnchor *)this->_padding_;
    pSVar11 = pSVar12;
    if (this_00 != (SMenuAnchor *)0x0) goto LAB_14283a978;
  }
LAB_14283a952:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("PinnedOwnerMultiBoxWidget.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                     ,0x5eb,L"");
  pSVar12 = pSVar11;
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
LAB_14283a978:
  if (param_3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x278),local_58);
    if (((*(int *)(lVar2 + 0x288) == 0) || (*(longlong **)(lVar2 + 0x280) == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)(lVar2 + 0x280) + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_58);
      bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x290));
      if (((!bVar5) && (*(longlong *)(lVar2 + 0x2a8) == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MenuEntryBlock->EntryBuilder.IsBound() || MenuEntryBlock->MenuBuilder.IsBound() || MenuEntryBlock->EntryWidget.IsValid()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
                             ,0x5f1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_58);
    }
    pSVar11 = (SMenuAnchor *)(this->MenuAnchor).WeakReferenceCount.ReferenceController;
    pSVar10 = pSVar11;
    if (pSVar11 != (SMenuAnchor *)0x0) {
      iVar4 = (int)pSVar11->_padding_;
      do {
        pSVar10 = pSVar13;
        if (iVar4 == 0) goto LAB_14283aa45;
        LOCK();
        iVar8 = (int)pSVar11->_padding_;
        bVar5 = iVar4 == iVar8;
        if (bVar5) {
          *(int *)&pSVar11->_padding_ = iVar4 + 1;
          iVar8 = iVar4;
        }
        UNLOCK();
        iVar4 = iVar8;
      } while (!bVar5);
      pSVar13 = (this->MenuAnchor).Object;
      pSVar10 = pSVar11;
    }
LAB_14283aa45:
    if ((this_00 == (SMenuAnchor *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    pTVar9 = SMenuOwner::GetOpenMenu((SMenuOwner *)this_00,&local_68);
    pSVar11 = pTVar9->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (pSVar11 != pSVar13) {
      if ((this_00 == (SMenuAnchor *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      SMenuOwner::CloseSummonedMenus((SMenuOwner *)this_00);
      if (pSVar13 != (SMenuAnchor *)0x0) {
        (**(code **)(pSVar13->_padding_ + 0x250))(pSVar13,1,1,0);
      }
      if ((this_00 == (SMenuAnchor *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      if ((pSVar13 == (SMenuAnchor *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      if (pSVar10 != (SMenuAnchor *)0x0) {
        LOCK();
        *(int *)&pSVar10->_padding_ = (int)pSVar10->_padding_ + 1;
        UNLOCK();
      }
      local_78.Object = pSVar13;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar10;
      if ((pSVar13 == (SMenuAnchor *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      SMenuOwner::SetSummonedMenu((SMenuOwner *)this_00,&local_78);
      if ((this_00 == (SMenuAnchor *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        EVar6 = (*pcVar3)();
        return EVar6;
      }
      this_00[1]._padding_ = (longlong)(param_1 - (double)param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
  }
  else {
    if ((this_00 == (SMenuAnchor *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    SMenuOwner::CloseSummonedMenus((SMenuOwner *)this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return Stop;
}

