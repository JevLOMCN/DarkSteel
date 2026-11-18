// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 33

// ~SWidgetEventLog @ 142e14f10

void __thiscall SWidgetEventLog::~SWidgetEventLog(SWidgetEventLog *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<unsigned_int> FVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->_padding_ = (longlong)&___7SWidgetEventLog__6B_;
  RemoveListeners(this);
  FVar3 = (this->CursorEnabled).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->NavigationEnabled).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->InputEnabled).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->FocusEnabled).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWidgetTokenActivated);
  pvVar4 = *(void **)&(this->OnWidgetTokenActivated).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetTokenActivated);
  pTVar5 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142e19030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(void *this,EWidgetEventType param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *pUVar4;
  long64 lVar5;
  TBitArray<FDefaultBitArrayAllocator> *_Dst;
  bool *pbVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  TBitArray<FDefaultBitArrayAllocator> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pUVar4 = SWidgetEventLog::GetEnum(*(SWidgetEventLog **)this,param_1);
  lVar5 = UEnum::GetMaxEnumValue(pUVar4);
  if ((0xfe < lVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetEnum(EventType)->GetMaxEnumValue() < (int64)TNumericLimits<uint8>::Max()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                         ,0x79,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = SWidgetEventLog::GetEnum(*(SWidgetEventLog **)this,param_1);
  lVar5 = UEnum::GetMaxEnumValue(pUVar4);
  local_38.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38.MaxBits = 0x80;
  local_38.NumBits = (int)lVar5;
  uVar8 = (int)lVar5 + 0x1f;
  uVar9 = uVar8 >> 5;
  if (uVar8 >> 5 != 0) {
    if (4 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_38.AllocatorInstance,0,uVar9,4);
      local_38.MaxBits = uVar9 << 5;
    }
    FVar7 = (ForElementType<unsigned_int>)&local_38;
    if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_38.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar7,0,(ulonglong)uVar9 << 2);
    uVar8 = local_38.NumBits & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    if (uVar8 != 0) {
      FVar7 = (ForElementType<unsigned_int>)&local_38;
      if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_38.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar7 +
                       (longlong)((int)(local_38.NumBits + (local_38.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar8 & 0x1f);
    }
  }
  _Dst = SWidgetEventLog::GetBitField(*(SWidgetEventLog **)this,param_1);
  if (_Dst != &local_38) {
    if (local_38.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      memmove(_Dst,&local_38,0x10);
    }
    FVar7 = (_Dst->AllocatorInstance).SecondaryData;
    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    (_Dst->AllocatorInstance).SecondaryData = local_38.AllocatorInstance.SecondaryData;
    local_38.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    _Dst->NumBits = local_38.NumBits;
    _Dst->MaxBits = local_38.MaxBits;
    local_38.NumBits = 0;
    local_38.MaxBits = 0;
  }
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
  }
  pbVar6 = SWidgetEventLog::GetCategoryFlag(*(SWidgetEventLog **)this,param_1);
  *pbVar6 = false;
  return;
}

// Construct @ 142e44ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142e45f8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetEventLog::Construct
          (SWidgetEventLog *this,FArguments *param_1,TSharedPtr<SWidget_const_,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  SWidget *pSVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  FName *pFVar14;
  FModuleManager *this_00;
  IModuleInterface *pIVar15;
  FText *pFVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget_const_,1> *pTVar19;
  ulong64 uVar20;
  TSharedRef<SWidget,1> *pTVar21;
  FArguments *pFVar22;
  FArguments *pFVar23;
  TSharedRef<STextBlock,1> *pTVar24;
  TSharedRef<SBox,1> *pTVar25;
  TSharedRef<SCheckBox,1> *pTVar26;
  FName FVar27;
  FSlateIcon *pFVar28;
  FUIAction *pFVar29;
  FArguments *pFVar30;
  FSlotArguments *pFVar31;
  FArguments *pFVar32;
  ISlateStyle *pIVar33;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBorder,1> *pTVar34;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar35;
  TReferenceControllerBase<1> *pTVar36;
  FName local_res8;
  longlong local_res10;
  TReferenceControllerBase<1> *local_res18;
  FName local_res20;
  TSharedPtr<FUICommandList_const_,1> local_11d8;
  FLLMScope local_11c8 [2];
  FDestructionSentinel local_11c0;
  undefined1 local_11a8 [8];
  FSharedReferencer<1> FStack_11a0;
  undefined8 local_1198;
  code *local_1188;
  undefined8 uStack_1180;
  bool local_1178;
  undefined1 local_1168 [8];
  FDelegateAllocation local_1160;
  TSharedRef<SWidget_const_,1> local_1150;
  undefined1 local_1140 [8];
  FSharedReferencer<1> local_1138;
  T0RequiredArgs *pTStack_1130;
  undefined1 *local_1128;
  undefined1 local_1120 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1118;
  ForAnyElementType FStack_1110;
  ulonglong local_1108;
  undefined1 local_1100 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_10f8;
  ForAnyElementType FStack_10f0;
  ulonglong local_10e8;
  undefined1 local_10e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_10d8;
  ForAnyElementType FStack_10d0;
  ulonglong local_10c8;
  undefined1 local_10c0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_10b8;
  ForAnyElementType FStack_10b0;
  ulonglong local_10a8;
  int local_10a0;
  bool local_109c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1098;
  ForAnyElementType FStack_1090;
  ulonglong local_1088;
  undefined1 local_1080 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1078;
  ForAnyElementType FStack_1070;
  ulonglong local_1068;
  bool local_105f;
  bool local_105d;
  bool local_1058;
  undefined1 local_1050 [8];
  ForAnyElementType FStack_1048;
  ulonglong local_1040;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_1038;
  FName local_1020;
  undefined4 uStack_1018;
  undefined4 uStack_1014;
  undefined1 local_1010 [8];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> local_1008;
  FLinearColor_u_0 local_ff0;
  undefined4 local_fe0;
  undefined1 local_fdc;
  undefined1 local_fd8 [8];
  void *pvStack_fd0;
  undefined8 local_fc8;
  TSharedRef<SBorder,1> local_fc0;
  TSharedRef<STextBlock,1> local_fb0;
  undefined1 local_fa0 [24];
  undefined1 local_f88 [8];
  void *pvStack_f80;
  undefined8 local_f78;
  FTextBuilder local_f70;
  FDestructionSentinel local_f58;
  FDelegateAllocation *local_f40;
  undefined1 local_f38 [16];
  FName local_f28;
  FName FStack_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined1 local_f08 [8];
  TReferenceControllerBase<1> *local_f00;
  undefined1 local_ef8 [40];
  undefined1 local_ed0 [8];
  void *pvStack_ec8;
  undefined8 local_ec0;
  TAttribute<FText> local_eb8;
  FName local_e88;
  undefined1 local_e80 [304];
  undefined1 local_d50 [40];
  FUIAction local_d28;
  undefined1 local_cc0 [512];
  float local_ac0;
  FArguments local_980;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e45013;
  bVar10 = false;
  bVar9 = false;
  bVar7 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  (this->ReflectorWidget).Object = param_2->Object;
  pTVar36 = (param_2->SharedReferenceCount).ReferenceController;
  local_res18 = (TReferenceControllerBase<1> *)param_2;
  if (pTVar36 != (this->ReflectorWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
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
    (this->ReflectorWidget).WeakReferenceCount.ReferenceController = pTVar36;
  }
  TDelegate<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnWidgetTokenActivated,&param_1->_OnWidgetTokenActivated);
  this->bFilterWidgetReflectorEvent = false;
  pFVar14 = ::FName::FName(&local_e88,L"MessageLog");
  FVar4 = *pFVar14;
  this_00 = FModuleManager::Get();
  pIVar15 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  cVar13 = (**(code **)((longlong)*pIVar15 + 0x50))(pIVar15,&NAME_WidgetEvents);
  if (cVar13 == '\0') {
    local_11d8.Object = (FUICommandList *)0x1400010001;
    local_11d8.SharedReferenceCount.ReferenceController._0_2_ = 0x101;
    pcVar5 = *(code **)((longlong)*pIVar15 + 0x40);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_11a8,L"WidgetEventLog",L"WidgetEventLog",L"Widget Events");
    (*pcVar5)(pIVar15,&NAME_WidgetEvents,pFVar16,&local_11d8);
    if (local_11a8 != (undefined1  [8])0x0) {
      (**(code **)((longlong)*(ITextData *)local_11a8 + 0x10))();
    }
  }
  (**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,local_f08,&NAME_WidgetEvents);
  local_11a8 = (undefined1  [8])0x0;
  FStack_11a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_11d8.Object = (FUICommandList *)0x0;
  local_11d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSlimHorizontalToolBarBuilder::FSlimHorizontalToolBarBuilder
            ((FSlimHorizontalToolBarBuilder *)local_e80,&local_11d8,FMultiBoxCustomization::None,
             (TSharedPtr<FExtender,1> *)local_11a8,false);
  memset(local_1120,0,200);
  local_10a0 = 0;
  local_1108 = 0;
  local_10e8 = 0;
  local_10c8 = 0;
  local_10a8 = 0;
  local_1088 = 0;
  local_1068 = 0;
  local_1040 = 0;
  local_1118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1110.Data = (FScriptContainerElement *)0x0;
  local_1100[0] = false;
  local_1100[1] = false;
  local_10f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_10f0.Data = (FScriptContainerElement *)0x0;
  local_10e0[0] = false;
  local_10e0[1] = false;
  local_10d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_10d0.Data = (FScriptContainerElement *)0x0;
  local_10c0[0] = false;
  local_10c0[1] = false;
  local_10b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_10b0.Data = (FScriptContainerElement *)0x0;
  local_109c = false;
  local_1098.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1090.Data = (FScriptContainerElement *)0x0;
  local_1080[0] = Preferred;
  local_1080[1] = false;
  local_1078.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1070.Data = (FScriptContainerElement *)0x0;
  local_105f = false;
  local_105d = false;
  local_1058 = false;
  local_1050 = (undefined1  [8])0x0;
  FStack_1048.Data = (FScriptContainerElement *)0x0;
  pFVar14 = ::FName::FName(&local_res8,"Log");
  FToolBarBuilder::BeginSection
            ((FToolBarBuilder *)local_e80,*pFVar14,true,
             (TAttribute<FMenuEntryResizeParams> *)local_1120);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1050,
             (FWriteAccessScope *)&local_11c0);
  if (((int)local_1040 != 0) && (FStack_1048.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1048.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1048,0,0,0x10);
    local_1040 = local_1040 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_1048.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1048.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1050);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1078,(FWriteAccessScope *)&local_11c0);
  if (((int)local_1068 != 0) && (FStack_1070.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1070.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1070,0,0,0x10);
    local_1068 = local_1068 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_1070.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1070.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1078.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1098,(FWriteAccessScope *)&local_11c0);
  if (((int)local_1088 != 0) && (FStack_1090.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1090.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1090,0,0,0x10);
    local_1088 = local_1088 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_1090.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1090.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1098.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_10b8,(FWriteAccessScope *)&local_11c0);
  if (((int)local_10a8 != 0) && (FStack_10b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10b0,0,0,0x10);
    local_10a8 = local_10a8 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_10b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_10b8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_10d8,(FWriteAccessScope *)&local_11c0);
  if (((int)local_10c8 != 0) && (FStack_10d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10d0,0,0,0x10);
    local_10c8 = local_10c8 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_10d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_10d8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_10f8,(FWriteAccessScope *)&local_11c0);
  if (((int)local_10e8 != 0) && (FStack_10f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10f0,0,0,0x10);
    local_10e8 = local_10e8 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_10f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_10f8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1118,(FWriteAccessScope *)&local_11c0);
  if (((int)local_1108 != 0) && (FStack_1110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1110,0,0,0x10);
    local_1108 = local_1108 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_1110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1118.AccessDetector);
  local_1010._0_2_ = 0x19;
  local_1008._16_8_ = 0;
  local_1008._0_8_ = 0;
  local_1008._8_8_ = 0;
  local_11c0.bDestroyed = false;
  local_11c0._17_7_ = 0;
  local_11c0.AccessType = Reader;
  local_11c0._4_4_ = 0;
  local_11c0.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_1020.ComparisonIndex.Value = 0;
  local_1020.Number = 0;
  pFVar17 = SCheckBox::FArguments::FArguments(&local_980);
  local_1038._RequiredArgs = (T0RequiredArgs *)CONCAT62(local_1038._RequiredArgs._2_6_,2);
  local_fe0 = local_1038._RequiredArgs._0_4_;
  local_ff0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_ff0._8_8_ = _UNK_15090c6d8;
  local_fdc = 1;
  local_fd8 = (undefined1  [8])0x0;
  pvStack_fd0 = (void *)0x0;
  local_fc8 = 0;
  pFVar17 = SCheckBox::FArguments::ForegroundColor
                      (pFVar17,(TAttribute<FSlateColor> *)&local_ff0._s_0);
  (pFVar17->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_IsChecked).Getter
             ,(FWriteAccessScope *)local_1140);
  local_1128 = &(pFVar17->_IsChecked).Getter.field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1128);
  pTVar36 = local_res18;
  if (puVar18 != (undefined8 *)0x0) {
    local_11d8.Object = (FUICommandList *)HandleFilterWidgetReflectorEventIsChecked;
    local_11d8.SharedReferenceCount.ReferenceController = uStack_1180 & 0xffffffff00000000;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1150);
    pTVar36 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar19->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetEventLog___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar6;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar7 = true;
    puVar18[5] = local_11d8.Object;
    puVar18[6] = local_11d8.SharedReferenceCount.ReferenceController;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1150.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar7 = false;
  if (pTStack_1130._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1138.ReferenceController,
               (FDestructionSentinel *)local_1140);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar17->_OnCheckStateChanged,(FWriteAccessScope *)local_1140);
  local_1128 = &(pFVar17->_OnCheckStateChanged).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1128);
  pTVar36 = local_res18;
  if (puVar18 != (undefined8 *)0x0) {
    local_11d8.Object = (FUICommandList *)HandleFilterWidgetReflectorEventStateChanged;
    local_11d8.SharedReferenceCount.ReferenceController = uStack_1180 & 0xffffffff00000000;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_1038);
    pTVar36 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_1150.Object = pTVar21->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetEventLog___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = local_1150.Object;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_11d8.Object;
    puVar18[6] = local_11d8.SharedReferenceCount.ReferenceController;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1038._Widget.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar7 = false;
  if (pTStack_1130._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1138.ReferenceController,
               (FDestructionSentinel *)local_1140);
  }
  pFVar22 = SBox::FArguments::FArguments((FArguments *)local_cc0);
  uVar11 = _UNK_150925358;
  local_fa0._0_8_ = ___xmm_40000000408000004000000040800000;
  pFVar22->_VAlign = VAlign_Center;
  pFVar22->_HAlign = HAlign_Center;
  uVar12 = _UNK_150925358;
  _UNK_150925358 = (float)uVar11;
  _UNK_15092535c = SUB84(uVar11,4);
  local_fa0._8_4_ = _UNK_150925358;
  local_fa0._12_4_ = _UNK_15092535c;
  local_fa0[0x10] = true;
  local_f88 = (undefined1  [8])0x0;
  pvStack_f80 = (void *)0x0;
  local_f78 = 0;
  _UNK_150925358 = uVar12;
  pFVar22 = SBox::FArguments::Padding(pFVar22,(TAttribute<FMargin> *)local_fa0);
  pFVar23 = STextBlock::FArguments::FArguments(&local_5a0);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_1188,L"WidgetEventLog",L"FilterWidgetReflectorEvent",
                       L"Hide events originated from the Widget Reflector");
  FText::FText((FText *)local_f38,pFVar16);
  local_f28.ComparisonIndex.Value._0_1_ = true;
  local_f10 = 0;
  FStack_f20.ComparisonIndex.Value = 0;
  FStack_f20.Number = 0;
  uStack_f18 = 0;
  pFVar23 = STextBlock::FArguments::Text(pFVar23,(TAttribute<FText> *)local_f38);
  FLLMScope::FLLMScope(local_11c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1150.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_11d8,(FName *)&local_1150,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)local_1140,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
             ,0x3c,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_11d8);
  FLLMScope::~FLLMScope(local_11c8);
  pTVar24 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)local_1140,&local_fb0,
                       pFVar23);
  pTVar36 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_11d8.Object = (FUICommandList *)pTVar24->Object;
  if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar22->_Content).Widget.Object = (SWidget *)local_11d8.Object;
  (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar36;
  local_11d8.SharedReferenceCount.ReferenceController = pTVar36;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_11c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_11d8.Object = (FUICommandList *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1150,(FName *)&local_11d8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_f58,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
             ,0x37,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_1150);
  FLLMScope::~FLLMScope(local_11c8);
  pTVar25 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_f58,
                       (TSharedRef<SBox,1> *)&local_fc0,pFVar22);
  pTVar3 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_11d8.Object = (FUICommandList *)pTVar25->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)local_11d8.Object;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  local_11d8.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FLLMScope::FLLMScope(local_11c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_11d8.Object = (FUICommandList *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1150,(FName *)&local_11d8,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_1038,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
             ,0x32,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_1150);
  FLLMScope::~FLLMScope(local_11c8);
  pTVar26 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1038,(TSharedRef<SCheckBox,1> *)local_1168,pFVar17);
  local_11a8 = (undefined1  [8])pTVar26->Object;
  FStack_11a0.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
  if (FStack_11a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_11a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_11a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FToolBarBuilder::AddWidget
            ((FToolBarBuilder *)local_e80,(TSharedRef<SWidget,1> *)local_11a8,local_1020,true,
             HAlign_Fill,
             (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)&local_11c0,
             (TAttribute<EVisibility> *)local_1010);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1160.DelegateAllocator);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1038._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f58.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1138.ReferenceController);
  if ((ITextData *)local_1188 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1188 + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a0);
  SBox::FArguments::~FArguments((FArguments *)local_cc0);
  SCheckBox::FArguments::~FArguments(&local_980);
  local_f70.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f70.Lines.ArrayNum = 0;
  local_f70.Lines.ArrayMax = 0;
  local_f70.IndentCount = 0;
  memset(local_1120,0,200);
  local_10a0 = 0;
  local_1108 = 0;
  local_10e8 = 0;
  local_10c8 = 0;
  local_10a8 = 0;
  local_1088 = 0;
  local_1068 = 0;
  local_1040 = 0;
  local_1008._16_8_ = 0;
  local_1118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1110.Data = (FScriptContainerElement *)0x0;
  local_1100[0] = false;
  local_1100[1] = false;
  local_10f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_10f0.Data = (FScriptContainerElement *)0x0;
  local_10e0[0] = false;
  local_10e0[1] = false;
  local_10d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_10d0.Data = (FScriptContainerElement *)0x0;
  local_10c0[0] = false;
  local_10c0[1] = false;
  local_10b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_10b0.Data = (FScriptContainerElement *)0x0;
  local_109c = false;
  local_1098.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1090.Data = (FScriptContainerElement *)0x0;
  local_1080[0] = Preferred;
  local_1080[1] = false;
  local_1078.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1070.Data = (FScriptContainerElement *)0x0;
  local_105f = false;
  local_105d = false;
  local_1058 = false;
  local_1050 = (undefined1  [8])0x0;
  FStack_1048.Data = (FScriptContainerElement *)0x0;
  local_1010._0_4_ = MenuPlacement_BelowAnchor;
  local_1010[4] = false;
  local_1008._0_8_ = 0;
  local_1008._8_8_ = 0;
  FText::FText(&local_eb8.Value);
  local_eb8.bIsSet = false;
  local_eb8.Getter._16_8_ = 0;
  local_1128 = (undefined1 *)0x0;
  local_eb8.Getter._0_8_ = 0;
  local_eb8.Getter._8_8_ = 0;
  local_1140._0_2_ = 0x19;
  local_1138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTStack_1130 = (T0RequiredArgs *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = 0;
  pFVar14 = ::FName::FName((FName *)&local_11d8,"Icon.Filter");
  FVar4 = *pFVar14;
  FVar27 = FWidgetReflectorStyle::GetStyleSetName();
  pFVar28 = FSlateIcon::FSlateIcon
                      ((FSlateIcon *)local_f38,*(FName *)FVar27,FVar4,(FName)0x0,(FName)0x0);
  local_ef8._0_8_ = pFVar28->StyleSetName;
  local_ef8._8_8_ = pFVar28->StyleName;
  local_ef8._16_8_ = pFVar28->SmallStyleName;
  local_ef8._24_8_ = pFVar28->StatusOverlayStyleName;
  local_ef8[0x20] = true;
  local_ec0 = 0;
  local_ed0 = (undefined1  [8])0x0;
  pvStack_ec8 = (void *)0x0;
  pFVar16 = FTextBuilder::ToText(&local_f70,(FText *)&local_fc0);
  FText::FText((FText *)&local_ff0._s_0,pFVar16);
  local_fe0 = CONCAT31(local_fe0._1_3_,1);
  local_fc8 = 0;
  local_fd8 = (undefined1  [8])0x0;
  pvStack_fd0 = (void *)0x0;
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_fb0,L"WidgetEventLog",L"CategoryComboButtonText",L"Filters");
  FText::FText((FText *)local_fa0,pFVar16);
  local_fa0[0x10] = true;
  local_f78 = 0;
  local_1168 = (undefined1  [8])0x0;
  local_f88 = (undefined1  [8])0x0;
  pvStack_f80 = (void *)0x0;
  local_1160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1160.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1168,
             (FWriteAccessScope *)&local_f58);
  local_f40 = &local_1160;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,&local_1160);
  pTVar36 = local_res18;
  if (puVar18 != (undefined8 *)0x0) {
    uStack_1014 = uStack_1180._4_4_;
    local_1020 = (FName)OnGenerateCategoriesMenu;
    uStack_1018 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_1188);
    pTVar36 = (pTVar21->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar21->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar9 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetEventLog___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar6;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar18 + 5) = local_1020;
    puVar18[6] = CONCAT44(uStack_1014,uStack_1018);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1180)
    ;
  }
  if (local_f58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f58.Accessor,&local_f58);
  }
  local_11c0.bDestroyed = false;
  local_11c0._17_7_ = 0;
  local_11c0.AccessType = Reader;
  local_11c0._4_4_ = 0;
  local_11c0.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_1038._RequiredArgs = (T0RequiredArgs *)0x0;
  local_1038._Widget.Object = (SCheckBox *)0x0;
  local_1038._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1198 = 0;
  local_11a8 = (undefined1  [8])0x0;
  FStack_11a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar29 = FUIAction::FUIAction
                      (&local_d28,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_11a8,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1038,
                       (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                       &local_11c0,RepeatDisabled);
  FToolBarBuilder::AddComboButton
            ((FToolBarBuilder *)local_e80,pFVar29,
             (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)local_1168
             ,(TAttribute<FText> *)local_fa0,(TAttribute<FText> *)&local_ff0._s_0,
             (TAttribute<FSlateIcon> *)local_ef8,false,local_res20,
             (TAttribute<EVisibility> *)local_1140,&local_eb8,
             (TAttribute<EMenuPlacement> *)local_1010,Button,
             (TAttribute<FMenuEntryResizeParams> *)local_1120);
  FUIAction::~FUIAction(&local_d28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1168,
             (FWriteAccessScope *)&local_1188);
  if ((local_1160.DelegateSize != 0) &&
     (local_1160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(longlong *)local_1160.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1160,0,0,0x10);
    local_1160.DelegateSize = 0;
  }
  if (local_1178 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_1180,(FDestructionSentinel *)&local_1188);
  }
  if (local_1160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1160.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1168);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f88);
  if (pvStack_f80 != (void *)0x0) {
    FMemory::Free(pvStack_f80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f88);
  if ((ITextData *)local_fa0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_fa0._0_8_ + 0x10))();
  }
  if (local_fb0.Object != (STextBlock *)0x0) {
    (**(code **)((local_fb0.Object)->_padding_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fd8);
  if (pvStack_fd0 != (void *)0x0) {
    FMemory::Free(pvStack_fd0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fd8);
  if ((longlong *)local_ff0._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_ff0._0_8_ + 0x10))();
  }
  if (local_fc0.Object != (SBorder *)0x0) {
    (**(code **)((local_fc0.Object)->_padding_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ed0);
  if (pvStack_ec8 != (void *)0x0) {
    FMemory::Free(pvStack_ec8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ed0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1050);
  if (FStack_1048.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1048.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1050);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_1120);
  DestructItems<FText,int>((FText *)local_f70.Lines.AllocatorInstance.Data,local_f70.Lines.ArrayNum)
  ;
  if ((FText *)local_f70.Lines.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_f70.Lines.AllocatorInstance.Data);
  }
  FToolBarBuilder::EndSection((FToolBarBuilder *)local_e80);
  pFVar30 = SVerticalBox::FArguments::FArguments((FArguments *)local_cc0);
  pFVar31 = SVerticalBox::Slot((FSlotArguments *)&local_980);
  pFVar31 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar31);
  pFVar32 = SBorder::FArguments::FArguments((FArguments *)&local_5a0);
  pIVar33 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar33 + 0x50);
  pFVar14 = ::FName::FName(&local_res20,"ToolPanel.GroupBorder");
  local_f38._0_8_ = (*pcVar5)(pIVar33,*pFVar14,0,0);
  local_f38[8] = true;
  uStack_f18 = 0;
  local_f28.ComparisonIndex.Value = 0;
  local_f28.Number = 0;
  FStack_f20.ComparisonIndex.Value = 0;
  FStack_f20.Number = 0;
  pFVar32 = SBorder::FArguments::BorderImage(pFVar32,(TAttribute<FSlateBrush_const_*> *)local_f38);
  pFVar32 = SBorder::FArguments::Padding(pFVar32,__real_40800000);
  pTVar21 = FMultiBoxBuilder::MakeWidget
                      ((FMultiBoxBuilder *)local_e80,(TSharedRef<SWidget,1> *)local_1168,
                       (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                        *)0x0);
  pFVar32 = SBorder::FArguments::operator[](pFVar32,pTVar21);
  this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_f58,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                       ,0x5c,(T0RequiredArgs *)&local_res8);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_fc0,pFVar32);
  pTVar36 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_11a8 = (undefined1  [8])pTVar34->Object;
  if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
    UNLOCK();
  }
  FStack_11a0.ReferenceController = pTVar36;
  pFVar31 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar31,(TSharedRef<SWidget,1> *)local_11a8);
  pFVar30 = SVerticalBox::FArguments::operator+(pFVar30,pFVar31);
  pFVar31 = SVerticalBox::Slot((FSlotArguments *)local_1120);
  pTVar21 = (TSharedRef<SWidget,1> *)
            (**(code **)((longlong)*pIVar15 + 0x70))(pIVar15,&local_fb0,local_f08);
  pFVar31 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar31,pTVar21);
  pFVar30 = SVerticalBox::FArguments::operator+(pFVar30,pFVar31);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)local_1140,
                       "SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                       ,0x57,(T0RequiredArgs *)&local_res10);
  pTVar35 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,(TSharedRef<SVerticalBox,1> *)&local_1188,pFVar30);
  pTVar3 = (pTVar35->SharedReferenceCount).ReferenceController;
  local_11a8 = (undefined1  [8])pTVar35->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FStack_11a0.ReferenceController = pTVar3;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,(TSharedRef<SWidget,1> *)local_11a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1180);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1138.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fb0.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1120);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f58.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1160.DelegateAllocator);
  SBorder::FArguments::~FArguments((FArguments *)&local_5a0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)&local_980);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_cc0._504_8_,(int)local_ac0);
  if ((FSlotArguments *)local_cc0._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_cc0._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_cc0);
  local_res8 = (FName)this;
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(&local_res8,Focus);
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(&local_res8,Input);
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(&local_res8,Navigation);
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(&local_res8,Cursor);
  this->bIsWarningEnabled = false;
  this->bIsCaptureStateEnabled = false;
  RemoveListeners(this);
  local_11a8 = (undefined1  [8])HandleWarning;
  FStack_11a0.ReferenceController = FStack_11a0.ReferenceController & 0xffffffff00000000;
  local_1188 = HandleWarning;
  uStack_1180 = FStack_11a0.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::Warning,(SWidgetEventLog *)&local_res8,(pmf_0d7c134e *)this);
  FStack_11a0.ReferenceController = FStack_11a0.ReferenceController & 0xffffffff00000000;
  local_11a8 = (undefined1  [8])HandleInputEvent;
  local_1188 = HandleInputEvent;
  uStack_1180 = FStack_11a0.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::InputEvent,(SWidgetEventLog *)&local_res8,(pmf_c29ded3c *)this);
  FStack_11a0.ReferenceController = FStack_11a0.ReferenceController & 0xffffffff00000000;
  local_11a8 = (undefined1  [8])HandleFocusEvent;
  local_1188 = HandleFocusEvent;
  uStack_1180 = FStack_11a0.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::FocusEvent,(SWidgetEventLog *)&local_res8,(pmf_c191f84a *)this);
  FStack_11a0.ReferenceController = FStack_11a0.ReferenceController & 0xffffffff00000000;
  local_11a8 = (undefined1  [8])HandleAttemptNavigationEvent;
  local_1188 = HandleAttemptNavigationEvent;
  uStack_1180 = FStack_11a0.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::AttemptNavigationEvent,(SWidgetEventLog *)&local_res8,
             (pmf_eec378e8 *)this);
  FStack_11a0.ReferenceController = FStack_11a0.ReferenceController & 0xffffffff00000000;
  local_11a8 = (undefined1  [8])HandleCaptureStateChangeEvent;
  local_1188 = HandleCaptureStateChangeEvent;
  uStack_1180 = FStack_11a0.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::MouseCaptureEvent,(SWidgetEventLog *)&local_res8,
             (pmf_fb78f675 *)this);
  FStack_11a0.ReferenceController = FStack_11a0.ReferenceController & 0xffffffff00000000;
  local_11a8 = (undefined1  [8])HandleCursorChangedEvent;
  local_1188 = HandleCursorChangedEvent;
  uStack_1180 = FStack_11a0.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::CursorChangedEvent,(SWidgetEventLog *)&local_res8,
             (pmf_6a6d5d44 *)this);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d50);
  if ((void *)local_d50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d50);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)(local_e80 + 0x60));
  local_e80._0_8_ = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_e80._40_8_,local_e80._48_4_);
  if ((TSharedPtr<FExtender,1> *)local_e80._40_8_ != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free((void *)local_e80._40_8_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)local_e80._24_8_,local_e80._32_4_);
  if ((TSharedPtr<FUICommandList_const_,1> *)local_e80._24_8_ !=
      (TSharedPtr<FUICommandList_const_,1> *)0x0) {
    FMemory::Free((void *)local_e80._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)&local_res18->SharedReferenceCount)->ReferenceController);
  return;
}

// EnabledAllFromSubCategory @ 142e73a50

void __thiscall
SWidgetEventLog::EnabledAllFromSubCategory(SWidgetEventLog *this,EWidgetEventType param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  ForElementType<unsigned_int> this_00;
  bool *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<unsigned_int> _Dst;
  
  this_00 = (ForElementType<unsigned_int>)GetBitField(this,param_1);
  pbVar4 = GetCategoryFlag(this,param_1);
  bVar2 = *pbVar4;
  *pbVar4 = bVar2 == false;
  uVar6 = *(int *)((longlong)this_00 + 0x18) + 0x1f;
  uVar7 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (*(int *)((longlong)this_00 + 0x1c) + 0x1fU >> 5 < uVar7) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this_00,0,uVar7,4);
      *(uint *)((longlong)this_00 + 0x1c) = uVar7 << 5;
    }
    _Dst = this_00;
    if (*(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      _Dst = *(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10);
    }
    if (uVar7 < 9) {
      for (uVar5 = (ulonglong)uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)_Dst = -(uint)(bVar2 == false);
        _Dst = (ForElementType<unsigned_int>)((longlong)_Dst + 4);
      }
    }
    else {
      iVar3 = 0;
      if (bVar2 == false) {
        iVar3 = 0xff;
      }
      memset((void *)_Dst,iVar3,(ulonglong)uVar7 << 2);
    }
    uVar7 = *(int *)((longlong)this_00 + 0x18) >> 0x1f & 0x1f;
    uVar6 = *(int *)((longlong)this_00 + 0x18) + uVar7;
    iVar3 = (uVar6 & 0x1f) - uVar7;
    if (iVar3 != 0) {
      if (*(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        this_00 = *(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10);
      }
      puVar1 = (uint *)((longlong)this_00 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  return;
}

// EnabledCategory @ 142e73b60

void __thiscall SWidgetEventLog::EnabledCategory(SWidgetEventLog *this,EWidgetEventType param_1)

{
  bool *pbVar1;
  
  pbVar1 = GetCategoryFlag(this,param_1);
  *pbVar1 = *pbVar1 == false;
  return;
}

// EnabledSubCategory @ 142e73b80

void __thiscall
SWidgetEventLog::EnabledSubCategory(SWidgetEventLog *this,EWidgetEventType param_1,uchar param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  bool *pbVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  int iVar9;
  ForElementType<unsigned_int> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  FVar5 = (ForElementType<unsigned_int>)GetBitField(this,param_1);
  pbVar6 = GetCategoryFlag(this,param_1);
  if ((*(int *)((longlong)FVar5 + 0x18) <= (int)(uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7 = FVar5;
  if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) != (ForElementType<unsigned_int>)0x0
     ) {
    FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
  }
  uVar12 = 1 << (param_2 & 0x1f);
  lVar1 = (ulonglong)(param_2 >> 5) * 4;
  uVar8 = *(uint *)(lVar1 + (longlong)FVar7);
  if ((*(int *)((longlong)FVar5 + 0x18) <= (int)(uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7 = FVar5;
  if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) != (ForElementType<unsigned_int>)0x0
     ) {
    FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
  }
  if ((uVar8 & uVar12) == 0) {
    uVar12 = *(uint *)(lVar1 + (longlong)FVar7) | uVar12;
  }
  else {
    uVar12 = *(uint *)(lVar1 + (longlong)FVar7) & ~uVar12;
  }
  *(uint *)((longlong)FVar7 + lVar1) = uVar12;
  if ((*(int *)((longlong)FVar5 + 0x18) <= (int)(uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
  FVar10 = FVar5;
  if (FVar7 != (ForElementType<unsigned_int>)0x0) {
    FVar10 = FVar7;
  }
  if ((*(uint *)((longlong)FVar10 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    *pbVar6 = false;
  }
  else {
    FVar10 = FVar5;
    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar7;
    }
    uVar11 = 0;
    uVar8 = *(int *)((longlong)FVar5 + 0x18) + 0x1f;
    FVar7 = FVar10;
    if (uVar8 >> 5 == 0) {
LAB_142e73d0a:
      iVar9 = -1;
LAB_142e73d0f:
      *pbVar6 = iVar9 == -1;
    }
    else {
      do {
        if (*(int *)FVar7 != -1) {
          uVar8 = ~*(uint *)((longlong)FVar10 + uVar11 * 4);
          iVar2 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
            }
          }
          iVar9 = 0x20;
          if (uVar8 != 0) {
            iVar9 = iVar2;
          }
          iVar9 = iVar9 + (int)uVar11 * 0x20;
          if (*(int *)((longlong)FVar5 + 0x18) <= iVar9) goto LAB_142e73d0a;
          goto LAB_142e73d0f;
        }
        uVar12 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
        FVar7 = (ForElementType<unsigned_int>)((longlong)FVar7 + 4);
      } while ((int)uVar12 < (int)(uVar8 >> 5));
      *pbVar6 = true;
    }
  }
  return;
}

// GenerateList @ 142e8ba20

void __thiscall SWidgetEventLog::GenerateList(SWidgetEventLog *this)

{
  SWidgetEventLog *local_res8 [4];
  
  local_res8[0] = this;
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(local_res8,Focus);
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(local_res8,Input);
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(local_res8,Navigation);
  `SWidgetEventLog::GenerateList'::__l2::<lambda_1>::operator()(local_res8,Cursor);
  this->bIsWarningEnabled = false;
  this->bIsCaptureStateEnabled = false;
  return;
}

// GetBitField @ 142e97c60

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SWidgetEventLog::GetBitField(SWidgetEventLog *this,EWidgetEventType param_1)

{
  code *pcVar1;
  bool bVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  
  if (param_1 != Focus) {
    if (param_1 == Input) {
      return &this->InputEnabled;
    }
    if (param_1 == Navigation) {
      return &this->NavigationEnabled;
    }
    if (param_1 == Cursor) {
      return &this->CursorEnabled;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                       ,0x21d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->FocusEnabled;
}

// GetBitField @ 142e97c70

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SWidgetEventLog::GetBitField(SWidgetEventLog *this,EWidgetEventType param_1)

{
  code *pcVar1;
  bool bVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  
  if (param_1 != Focus) {
    if (param_1 == Input) {
      return &this->InputEnabled;
    }
    if (param_1 == Navigation) {
      return &this->NavigationEnabled;
    }
    if (param_1 == Cursor) {
      return &this->CursorEnabled;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                       ,0x21d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->FocusEnabled;
}

// GetCategoryFlag @ 142e9a2b0

bool * __thiscall SWidgetEventLog::GetCategoryFlag(SWidgetEventLog *this,EWidgetEventType param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  switch(param_1) {
  case Warning:
    return &this->bIsWarningEnabled;
  case Focus:
    goto switchD_142e9a2e2_caseD_1;
  case Input:
    return &this->bIsAllInputEnabled;
  case Navigation:
    return &this->bIsAllNavigationEnabled;
  case Capture:
    return &this->bIsCaptureStateEnabled;
  case Cursor:
    return &this->bIsAllCursorEnabled;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                       ,0x231,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
switchD_142e9a2e2_caseD_1:
    return &this->bIsAllFocusEnabled;
  }
}

// GetCategoryFlag @ 142e9a2c0

bool * __thiscall SWidgetEventLog::GetCategoryFlag(SWidgetEventLog *this,EWidgetEventType param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  switch(param_1) {
  case Warning:
    return &this->bIsWarningEnabled;
  case Focus:
    goto switchD_142e9a2e2_caseD_1;
  case Input:
    return &this->bIsAllInputEnabled;
  case Navigation:
    return &this->bIsAllNavigationEnabled;
  case Capture:
    return &this->bIsCaptureStateEnabled;
  case Cursor:
    return &this->bIsAllCursorEnabled;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                       ,0x231,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
switchD_142e9a2e2_caseD_1:
    return &this->bIsAllFocusEnabled;
  }
}

// GetEnabledAllFromSubCategoryCheckState @ 142e9cd40

ECheckBoxState __thiscall
SWidgetEventLog::GetEnabledAllFromSubCategoryCheckState
          (SWidgetEventLog *this,EWidgetEventType param_1)

{
  bool *pbVar1;
  
  pbVar1 = GetCategoryFlag(this,param_1);
  return *pbVar1 != false;
}

// GetEnabledCheckState @ 142e9cd60

ECheckBoxState __thiscall
SWidgetEventLog::GetEnabledCheckState(SWidgetEventLog *this,EWidgetEventType param_1)

{
  bool *pbVar1;
  
  pbVar1 = GetCategoryFlag(this,param_1);
  return *pbVar1 != false;
}

// GetEnabledSubCategoryCheckState @ 142e9cd80

ECheckBoxState __thiscall
SWidgetEventLog::GetEnabledSubCategoryCheckState
          (SWidgetEventLog *this,EWidgetEventType param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  ECheckBoxState EVar3;
  ForElementType<unsigned_int> FVar4;
  
  FVar4 = (ForElementType<unsigned_int>)GetBitField(this,param_1);
  if (*(int *)((longlong)FVar4 + 0x18) <= (int)(uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) != (ForElementType<unsigned_int>)0x0
     ) {
    FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
  }
  return (*(uint *)((longlong)FVar4 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0;
}

// GetEnum @ 142e9ce00

UEnum * __thiscall SWidgetEventLog::GetEnum(SWidgetEventLog *this,EWidgetEventType param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *pUVar3;
  
  if (param_1 == Focus) {
    pUVar3 = StaticEnum<enum_ESlateDebuggingFocusEvent>();
    return pUVar3;
  }
  if (param_1 == Input) {
    pUVar3 = StaticEnum<enum_ESlateDebuggingInputEvent>();
    return pUVar3;
  }
  if (param_1 == Navigation) {
    pUVar3 = StaticEnum<enum_EUINavigation>();
    return pUVar3;
  }
  if (param_1 != Cursor) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetEventLog.cpp"
                       ,0x243,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UEnum *)(*pcVar1)();
      return pUVar3;
    }
    return (UEnum *)0x0;
  }
  pUVar3 = StaticEnum<enum_EMouseCursor::Type>();
  return pUVar3;
}

// HandleAttemptNavigationEvent @ 142ead910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetEventLog::HandleAttemptNavigationEvent
          (SWidgetEventLog *this,FSlateDebuggingNavigationEventArgs *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EUINavigation EVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FText *pFVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FText *pFVar10;
  TSharedRef<FActionToken,1> *pTVar11;
  ForElementType<unsigned_int> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  int local_108;
  FText local_f8;
  TSharedRef<IMessageToken,1> local_e8;
  TWeakPtr<SWidget_const_,1> local_d8;
  TSharedRef<FTokenizedMessage,1> local_c8;
  FDestructionSentinel local_b8;
  code *local_98;
  longlong lStack_90;
  TSharedRef<FTokenizedMessage,1> local_88;
  TSharedRef<FActionToken,1> local_78;
  FText local_68;
  FText local_58;
  FMessageLog local_48;
  
  bVar7 = false;
  EVar3 = param_1->NavigationEvent->NavigationType;
  if (((this->NavigationEnabled).NumBits <= (int)(uint)EVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar12 = (this->NavigationEnabled).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&this->NavigationEnabled;
  }
  if ((*(uint *)((longlong)FVar12 + (ulonglong)(EVar3 >> 5) * 4) >> (EVar3 & 0x1f) & 1) == 0) {
    return;
  }
  if (this->bFilterWidgetReflectorEvent == false) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar13 = (param_1->DestinationWidget->SharedReferenceCount).ReferenceController;
    pSVar4 = param_1->DestinationWidget->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = IsInsideWidgetReflector(this,pSVar4);
    bVar7 = true;
    if (bVar6) {
      bVar6 = true;
      goto LAB_142ead9d9;
    }
  }
  bVar6 = false;
LAB_142ead9d9:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (!bVar6) {
    if ((this->bFilterWidgetReflectorEvent != false) &&
       (bVar7 = IsInsideWidgetReflector(this,param_1->NavigationSource), bVar7)) {
      return;
    }
    FMessageLog::FMessageLog(&local_48,&NAME_WidgetEvents);
    FMessageLog::SuppressLoggingToOutputLog(&local_48,true);
    pFVar8 = FSlateDebuggingNavigationEventArgs::ToText(param_1,&local_f8);
    FMessageLog::Info(&local_48,&local_c8,pFVar8);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    pSVar4 = param_1->DestinationWidget->Object;
    if (pSVar4 != (SWidget *)0x0) {
      pTVar13 = (param_1->DestinationWidget->SharedReferenceCount).ReferenceController;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_f8.TextData.Reference = (ITextData *)SelectWidget;
      local_f8.Flags = 0;
      lStack_90 = (ulonglong)(uint)local_f8._12_4_ << 0x20;
      local_98 = SelectWidget;
      local_d8.Object = pSVar4;
      local_d8.WeakReferenceCount.ReferenceController = pTVar13;
      pTVar9 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SWidgetEventLog,TWeakPtr<SWidget_const_,1>_&>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_118,this
                          ,(pmf_35f56414 *)&local_98,&local_d8);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"WidgetEventLog",L"SelectWidgetTooltip",
                          L"Click to select the widget in the visualizer");
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"WidgetEventLog",L"SelectWidget",L"Widget");
      pTVar11 = FActionToken::Create(&local_78,pFVar10,pFVar8,pTVar9,false);
      local_e8.Object = (IMessageToken *)pTVar11->Object;
      local_e8.SharedReferenceCount.ReferenceController =
           (pTVar11->SharedReferenceCount).ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(local_c8.Object,&local_88,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                 (FWriteAccessScope *)&local_b8);
      if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_110.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
        local_108 = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_110.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_118);
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar13->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_48);
  }
  return;
}

// HandleCaptureStateChangeEvent @ 142eae9c0

void __thiscall
SWidgetEventLog::HandleCaptureStateChangeEvent
          (SWidgetEventLog *this,FSlateDebuggingMouseCaptureEventArgs *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FText *pFVar6;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  FText *pFVar8;
  TSharedRef<FActionToken,1> *pTVar9;
  TSharedRef<IMessageToken,1> local_e8;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  TWeakPtr<SWidget_const_,1> local_c0;
  FDestructionSentinel local_a8;
  TSharedRef<FTokenizedMessage,1> local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  TSharedRef<FActionToken,1> local_68;
  FText local_58;
  FText local_48;
  FMessageLog local_38;
  
  if ((this->bIsCaptureStateEnabled != false) &&
     ((this->bFilterWidgetReflectorEvent == false ||
      (bVar5 = IsInsideWidgetReflector(this,param_1->CaptureWidget->Object), !bVar5)))) {
    FMessageLog::FMessageLog(&local_38,&NAME_WidgetEvents);
    FMessageLog::SuppressLoggingToOutputLog(&local_38,true);
    pFVar6 = FSlateDebuggingMouseCaptureEventArgs::ToText(param_1,(FText *)&local_c0);
    FMessageLog::Info(&local_38,&local_88,pFVar6);
    if (local_c0.Object != (SWidget *)0x0) {
      (**(code **)((local_c0.Object)->_padding_ + 0x10))();
    }
    pSVar3 = param_1->CaptureWidget->Object;
    if (pSVar3 != (SWidget *)0x0) {
      pTVar4 = (param_1->CaptureWidget->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = (IMessageToken *)SelectWidget;
      local_e8.SharedReferenceCount.ReferenceController =
           local_e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_a8._0_8_ = SelectWidget;
      local_a8.Accessor =
           (FMRSWRecursiveAccessDetector *)local_e8.SharedReferenceCount.ReferenceController;
      local_c0.Object = pSVar3;
      local_c0.WeakReferenceCount.ReferenceController = pTVar4;
      pTVar7 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SWidgetEventLog,TWeakPtr<SWidget_const_,1>_&>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8,this,
                          (pmf_35f56414 *)&local_a8,&local_c0);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"WidgetEventLog",L"SelectWidgetTooltip",
                          L"Click to select the widget in the visualizer");
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"WidgetEventLog",L"SelectWidget",L"Widget");
      pTVar9 = FActionToken::Create(&local_68,pFVar8,pFVar6,pTVar7,false);
      local_e8.Object = (IMessageToken *)pTVar9->Object;
      local_e8.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(local_88.Object,&local_78,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)&local_a8);
      if ((local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_d0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
        local_c8 = 0;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_d8);
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
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// HandleCursorChangedEvent @ 142eaec50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetEventLog::HandleCursorChangedEvent
          (SWidgetEventLog *this,FSlateDebuggingCursorQueryEventArgs *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FText *pFVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FText *pFVar10;
  TSharedRef<FActionToken,1> *pTVar11;
  ForElementType<unsigned_int> FVar12;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  int local_f8;
  FText local_e8;
  TSharedRef<IMessageToken,1> local_d8;
  TWeakPtr<SWidget_const_,1> local_c8;
  TSharedRef<FTokenizedMessage,1> local_b8;
  FDestructionSentinel local_a8;
  code *local_88;
  longlong lStack_80;
  TSharedRef<FTokenizedMessage,1> local_78;
  TSharedRef<FActionToken,1> local_68;
  FText local_58;
  FText local_48;
  FMessageLog local_38;
  
  uVar3 = (undefined1)param_1->Reply->MouseCursor;
  if (((this->CursorEnabled).NumBits <= (int)(uint)(byte)uVar3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar12 = (this->CursorEnabled).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&this->CursorEnabled;
  }
  if ((*(uint *)((longlong)FVar12 + (ulonglong)((byte)uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)
  {
    if ((this->bFilterWidgetReflectorEvent != false) &&
       (bVar7 = IsInsideWidgetReflector(this,param_1->WidgetOverridingCursor->Object), bVar7)) {
      return;
    }
    FMessageLog::FMessageLog(&local_38,&NAME_WidgetEvents);
    FMessageLog::SuppressLoggingToOutputLog(&local_38,true);
    pFVar8 = FSlateDebuggingCursorQueryEventArgs::ToText(param_1,&local_e8);
    FMessageLog::Info(&local_38,&local_b8,pFVar8);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    pSVar4 = param_1->WidgetOverridingCursor->Object;
    if (pSVar4 != (SWidget *)0x0) {
      pTVar5 = (param_1->WidgetOverridingCursor->SharedReferenceCount).ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_e8.TextData.Reference = (ITextData *)SelectWidget;
      local_e8.Flags = 0;
      lStack_80 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
      local_88 = SelectWidget;
      local_c8.Object = pSVar4;
      local_c8.WeakReferenceCount.ReferenceController = pTVar5;
      pTVar9 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SWidgetEventLog,TWeakPtr<SWidget_const_,1>_&>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_108,this
                          ,(pmf_35f56414 *)&local_88,&local_c8);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"WidgetEventLog",L"SelectWidgetTooltip",
                          L"Click to select the widget in the visualizer");
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"WidgetEventLog",L"SelectWidget",L"Widget");
      pTVar11 = FActionToken::Create(&local_68,pFVar10,pFVar8,pTVar9,false);
      local_d8.Object = (IMessageToken *)pTVar11->Object;
      local_d8.SharedReferenceCount.ReferenceController =
           (pTVar11->SharedReferenceCount).ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(local_b8.Object,&local_78,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                 (FWriteAccessScope *)&local_a8);
      if ((local_f8 != 0) && (local_100.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_100.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_100,0,0,0x10);
        local_f8 = 0;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_108);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// HandleFilterWidgetReflectorEventIsChecked @ 142eaf260

ECheckBoxState __thiscall
SWidgetEventLog::HandleFilterWidgetReflectorEventIsChecked(SWidgetEventLog *this)

{
  return this->bFilterWidgetReflectorEvent != false;
}

// HandleFilterWidgetReflectorEventStateChanged @ 142eaf280

void __thiscall
SWidgetEventLog::HandleFilterWidgetReflectorEventStateChanged
          (SWidgetEventLog *this,ECheckBoxState param_1)

{
  this->bFilterWidgetReflectorEvent = param_1 == Checked;
  return;
}

// HandleFocusEvent @ 142eafc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetEventLog::HandleFocusEvent(SWidgetEventLog *this,FSlateDebuggingFocusEventArgs *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ESlateDebuggingFocusEvent EVar3;
  FWeakWidgetPath *this_00;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  FText *pFVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FText *pFVar10;
  TSharedRef<FActionToken,1> *pTVar11;
  ForElementType<unsigned_int> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  int local_108;
  FText local_f8;
  TSharedRef<IMessageToken,1> local_e8;
  TWeakPtr<SWidget_const_,1> local_d8;
  TSharedRef<FTokenizedMessage,1> local_c8;
  FDestructionSentinel local_b8;
  code *local_98;
  longlong lStack_90;
  TSharedRef<FTokenizedMessage,1> local_88;
  TSharedRef<FActionToken,1> local_78;
  FText local_68;
  FText local_58;
  FMessageLog local_48;
  
  EVar3 = param_1->FocusEventType;
  if (((this->FocusEnabled).NumBits <= (int)(uint)EVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar12 = (this->FocusEnabled).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&this->FocusEnabled;
  }
  if ((*(uint *)((longlong)FVar12 + (ulonglong)(EVar3 >> 5) * 4) >> (EVar3 & 0x1f) & 1) == 0) {
    return;
  }
  if (this->bFilterWidgetReflectorEvent == false) goto LAB_142eafd2a;
  pTVar13 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
  this_00 = param_1->OldFocusedWidgetPath;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_142eafd04:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  else {
    aVar2 = pTVar13->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eafd04;
      }
      LOCK();
      aVar7 = pTVar13->SharedReferenceCount;
      bVar6 = aVar2 == aVar7;
      if (bVar6) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar6);
    pSVar4 = (this->ReflectorWidget).Object;
    if (pSVar4 == (SWidget *)0x0) goto LAB_142eafd04;
    bVar6 = FWeakWidgetPath::ContainsWidget(this_00,pSVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    if (bVar6) {
      return;
    }
  }
  if ((this->bFilterWidgetReflectorEvent != false) &&
     (bVar6 = IsInsideWidgetReflector(this,param_1->NewFocusedWidgetPath), bVar6)) {
    return;
  }
LAB_142eafd2a:
  FMessageLog::FMessageLog(&local_48,&NAME_WidgetEvents);
  FMessageLog::SuppressLoggingToOutputLog(&local_48,true);
  pFVar8 = FSlateDebuggingFocusEventArgs::ToText(param_1,&local_f8);
  FMessageLog::Info(&local_48,&local_c8,pFVar8);
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  pSVar4 = param_1->NewFocusedWidget->Object;
  if (pSVar4 != (SWidget *)0x0) {
    pTVar13 = (param_1->NewFocusedWidget->SharedReferenceCount).ReferenceController;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_f8.TextData.Reference = (ITextData *)SelectWidget;
    local_f8.Flags = 0;
    lStack_90 = (ulonglong)(uint)local_f8._12_4_ << 0x20;
    local_98 = SelectWidget;
    local_d8.Object = pSVar4;
    local_d8.WeakReferenceCount.ReferenceController = pTVar13;
    pTVar9 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<SWidgetEventLog,TWeakPtr<SWidget_const_,1>_&>
                       ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_118,this,
                        (pmf_35f56414 *)&local_98,&local_d8);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"WidgetEventLog",L"SelectWidgetTooltip",
                        L"Click to select the widget in the visualizer");
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_68,L"WidgetEventLog",L"SelectWidget",L"Widget");
    pTVar11 = FActionToken::Create(&local_78,pFVar10,pFVar8,pTVar9,false);
    local_e8.Object = (IMessageToken *)pTVar11->Object;
    local_e8.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(local_c8.Object,&local_88,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_b8);
    if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
      local_108 = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_118);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar13->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  FMessageLog::~FMessageLog(&local_48);
  return;
}

// HandleInputEvent @ 142eb08b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetEventLog::HandleInputEvent(SWidgetEventLog *this,FSlateDebuggingInputEventArgs *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ESlateDebuggingInputEvent EVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  FText *pFVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FText *pFVar10;
  TSharedRef<FActionToken,1> *pTVar11;
  ForElementType<unsigned_int> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uStackX_c;
  undefined1 local_128 [8];
  ForAnyElementType local_120;
  int local_118;
  FText local_108;
  TSharedRef<IMessageToken,1> local_f8;
  TWeakPtr<SWidget_const_,1> local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  FDestructionSentinel local_c8;
  code *local_a8;
  longlong lStack_a0;
  TSharedRef<FTokenizedMessage,1> local_98;
  TSharedRef<FActionToken,1> local_88;
  FText local_78;
  FText local_68;
  FMessageLog local_58;
  
  EVar3 = param_1->InputEventType;
  bVar14 = false;
  if (((this->InputEnabled).NumBits <= (int)(uint)EVar3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar12 = (this->InputEnabled).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&this->InputEnabled;
  }
  if ((*(uint *)((longlong)FVar12 + (ulonglong)(EVar3 >> 5) * 4) >>
       (EVar3 & (TouchGesture|MouseWheel)) & 1) == 0) {
    return;
  }
  if (this->bFilterWidgetReflectorEvent == false) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = param_1->HandlerWidget;
    pTVar13 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar4->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar7 = IsInsideWidgetReflector(this,pSVar5);
    if (bVar7) {
      bVar7 = true;
      goto LAB_142eb0975;
    }
  }
  bVar7 = false;
LAB_142eb0975:
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (!bVar7) {
    FMessageLog::FMessageLog(&local_58,&NAME_WidgetEvents);
    FMessageLog::SuppressLoggingToOutputLog(&local_58,true);
    pFVar8 = FSlateDebuggingInputEventArgs::ToText(param_1,&local_108);
    FMessageLog::Info(&local_58,&local_d8,pFVar8);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    pTVar4 = param_1->HandlerWidget;
    pSVar5 = pTVar4->Object;
    if (pSVar5 != (SWidget *)0x0) {
      pTVar13 = (pTVar4->SharedReferenceCount).ReferenceController;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_108.TextData.Reference = (ITextData *)SelectWidget;
      local_108.Flags = 0;
      lStack_a0 = (ulonglong)(uint)local_108._12_4_ << 0x20;
      local_a8 = SelectWidget;
      local_e8.Object = pSVar5;
      local_e8.WeakReferenceCount.ReferenceController = pTVar13;
      pTVar9 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SWidgetEventLog,TWeakPtr<SWidget_const_,1>_&>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_128,this
                          ,(pmf_35f56414 *)&local_a8,&local_e8);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"WidgetEventLog",L"SelectWidgetTooltip",
                          L"Click to select the widget in the visualizer");
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"WidgetEventLog",L"SelectWidget",L"Widget");
      pTVar11 = FActionToken::Create(&local_88,pFVar10,pFVar8,pTVar9,false);
      local_f8.Object = (IMessageToken *)pTVar11->Object;
      local_f8.SharedReferenceCount.ReferenceController =
           (pTVar11->SharedReferenceCount).ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(local_d8.Object,&local_98,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
                 (FWriteAccessScope *)&local_c8);
      if ((local_118 != 0) && (local_120.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_120.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_120,0,0,0x10);
        local_118 = 0;
      }
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
      }
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_128);
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar13->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_58);
  }
  return;
}

// HandleWarning @ 142eb6900

void __thiscall
SWidgetEventLog::HandleWarning(SWidgetEventLog *this,FSlateDebuggingWarningEventArgs *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  bool bVar4;
  FText *pFVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  FText *pFVar7;
  TSharedRef<FActionToken,1> *pTVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<IMessageToken,1> local_108;
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  int local_e8;
  TWeakPtr<SWidget_const_,1> local_e0;
  code *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  bool local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  TSharedRef<FActionToken,1> local_88;
  FText local_78;
  FText local_68;
  FMessageLog local_58;
  
  bVar9 = false;
  if (this->bIsWarningEnabled == false) {
    return;
  }
  if (this->bFilterWidgetReflectorEvent == false) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar10 = (param_1->OptionalContextWidget->SharedReferenceCount).ReferenceController;
    pSVar3 = param_1->OptionalContextWidget->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar4 = IsInsideWidgetReflector(this,pSVar3);
    if (bVar4) {
      bVar4 = true;
      goto LAB_142eb6970;
    }
  }
  bVar4 = false;
LAB_142eb6970:
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (!bVar4) {
    FMessageLog::FMessageLog(&local_58,&NAME_WidgetEvents);
    FMessageLog::SuppressLoggingToOutputLog(&local_58,true);
    pFVar5 = FSlateDebuggingWarningEventArgs::ToText(param_1,(FText *)&local_e0);
    FMessageLog::Warning(&local_58,&local_a8,pFVar5);
    if (local_e0.Object != (SWidget *)0x0) {
      (**(code **)((local_e0.Object)->_padding_ + 0x10))();
    }
    pSVar3 = param_1->OptionalContextWidget->Object;
    if (pSVar3 != (SWidget *)0x0) {
      pTVar10 = (param_1->OptionalContextWidget->SharedReferenceCount).ReferenceController;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_108.Object = (IMessageToken *)SelectWidget;
      local_108.SharedReferenceCount.ReferenceController =
           local_108.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_c8 = SelectWidget;
      pTStack_c0 = local_108.SharedReferenceCount.ReferenceController;
      local_e0.Object = pSVar3;
      local_e0.WeakReferenceCount.ReferenceController = pTVar10;
      pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SWidgetEventLog,TWeakPtr<SWidget_const_,1>_&>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,this,
                          (pmf_35f56414 *)&local_c8,&local_e0);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"WidgetEventLog",L"SelectWidgetTooltip",
                          L"Click to select the widget in the visualizer");
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"WidgetEventLog",L"SelectWidget",L"Widget");
      pTVar8 = FActionToken::Create(&local_88,pFVar7,pFVar5,pTVar6,false);
      local_108.Object = (IMessageToken *)pTVar8->Object;
      local_108.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(local_a8.Object,&local_98,&local_108);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
                 (FWriteAccessScope *)&local_c8);
      if ((local_e8 != 0) && (local_f0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_f0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f0,0,0,0x10);
        local_e8 = 0;
      }
      if (local_b8 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)pTStack_c0,(FDestructionSentinel *)&local_c8);
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_f8);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar10->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_58);
  }
  return;
}

// IsInsideWidgetReflector @ 142ebb670

bool __thiscall
SWidgetEventLog::IsInsideWidgetReflector
          (SWidgetEventLog *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  bool bVar1;
  
  bVar1 = IsInsideWidgetReflector(this,param_1->Object);
  return bVar1;
}

// IsInsideWidgetReflector @ 142ebb680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SWidgetEventLog::IsInsideWidgetReflector(SWidgetEventLog *this,FWeakWidgetPath *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebb6b0;
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
    pSVar1 = (this->ReflectorWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = FWeakWidgetPath::ContainsWidget(param_1,pSVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return bVar5;
    }
  }
LAB_142ebb6b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// IsInsideWidgetReflector @ 142ebb700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWidgetEventLog::IsInsideWidgetReflector(SWidgetEventLog *this,FWidgetPath *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebb730;
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
    pSVar1 = (this->ReflectorWidget).Object;
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = FWidgetPath::ContainsWidget(param_1,pSVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return bVar5;
    }
  }
LAB_142ebb730:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// IsInsideWidgetReflector @ 142ebb780

bool __thiscall SWidgetEventLog::IsInsideWidgetReflector(SWidgetEventLog *this,SWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  SWidget *pSVar5;
  SWidget *pSVar6;
  bool bVar7;
  bool bVar8;
  
  bVar8 = false;
  pTVar1 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
  pSVar6 = (SWidget *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      bVar7 = false;
      if (aVar2 == (atomic<int>)0x0) {
LAB_142ebb7be:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return bVar7;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    pSVar6 = (this->ReflectorWidget).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((pSVar6 != (SWidget *)0x0) && (bVar7 = false, param_1 != (SWidget *)0x0)) {
    while ((bVar8 = bVar7, cVar3 = (**(code **)(param_1->_padding_ + 0x208))(), cVar3 == '\0' &&
           (bVar8 = param_1 == pSVar6, !bVar8))) {
      pSVar5 = (SWidget *)0x0;
      pTVar1 = (param_1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar1->SharedReferenceCount;
        do {
          bVar7 = bVar8;
          if (aVar2 == (atomic<int>)0x0) goto LAB_142ebb7be;
          LOCK();
          aVar4 = pTVar1->SharedReferenceCount;
          bVar7 = aVar2 == aVar4;
          if (bVar7) {
            pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar4 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar4;
        } while (!bVar7);
        pSVar5 = (param_1->ParentWidgetPtr).Object;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      param_1 = pSVar5;
      bVar7 = bVar8;
      if (pSVar5 == (SWidget *)0x0) {
        return false;
      }
    }
  }
  return bVar8;
}

// IsInsideWidgetReflector @ 142ebb860

bool __thiscall
SWidgetEventLog::IsInsideWidgetReflector
          (SWidgetEventLog *this,TSharedRef<SWidget_const_,1> *param_1)

{
  bool bVar1;
  
  bVar1 = IsInsideWidgetReflector(this,param_1->Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// OnGenerateCategoriesMenu @ 142ec9b80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWidgetEventLog::OnGenerateCategoriesMenu
          (SWidgetEventLog *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  ISlateStyle *pIVar1;
  FSlateIcon *pFVar2;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar3;
  FText *pFVar4;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  FUIAction *pFVar7;
  ulonglong local_res10 [3];
  undefined1 local_3d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3d0;
  ForAnyElementType FStack_3c8;
  ulonglong local_3c0;
  FDestructionSentinel local_3b8;
  TSharedPtr<FExtender,1> local_398;
  undefined1 local_388 [16];
  bool local_378;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_370;
  ForAnyElementType FStack_368;
  ulonglong local_360;
  undefined1 local_358 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_340;
  ForAnyElementType FStack_338;
  ulonglong local_330;
  code *local_328;
  TReferenceControllerBase<1> *pTStack_320;
  bool local_318;
  undefined1 local_308 [24];
  undefined1 local_2f0 [8];
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  code *local_2d8;
  TReferenceControllerBase<1> *pTStack_2d0;
  bool local_2c8;
  undefined1 local_2b8 [16];
  FName FStack_2a8;
  FName local_2a0;
  FText local_298;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  FMenuBuilder local_228;
  FUIAction local_a0;
  
  local_res10[0] = 0;
  pIVar1 = FAppStyle::Get();
  local_res10[1] = 0;
  local_398.Object = (FExtender *)0x0;
  local_398.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2d8 = (code *)0x0;
  pTStack_2d0 = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_228,Menu,false,
             (TSharedPtr<FUICommandList_const_,1> *)&local_2d8,false,&local_398,pIVar1,(FName)0x0,
             (FName)0x0);
  local_228.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_228.CurrentSectionExtensionHook.Number = 0;
  local_228._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_228.CurrentSectionHeadingText);
  local_228.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_228.CurrentSectionVisibility.bIsSet = false;
  local_228.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_228.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_228.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_228.CurrentSectionResizeParams,0,200);
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_228.CurrentSectionResizeParams.bIsSet = false;
  local_228.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_228.bSectionNeedsToBeApplied = false;
  local_228.bSearchable = true;
  local_228.bRecursivelySearchable = true;
  local_228.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_228);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_3d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3d8[1] = false;
  local_3c0 = 0;
  local_res10[1] = 0;
  local_3d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  local_res10[2] = 0;
  pFVar2 = FSlateIcon::FSlateIcon((FSlateIcon *)local_2b8);
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_398.Object = (FExtender *)OnGenerateCategoriesSubMenu;
  local_2d8 = OnGenerateCategoriesSubMenu;
  pTStack_2d0 = local_398.SharedReferenceCount.ReferenceController;
  local_res10[0] = CONCAT44(local_res10[0]._4_4_,1);
  pTVar3 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      &local_3b8,this,(pmf_849c92d4 *)&local_2d8,(EWidgetEventType *)local_res10);
  pFVar4 = FText::FText((FText *)&local_328);
  FText::FText((FText *)local_388,pFVar4);
  local_378 = true;
  local_360 = 0;
  local_370.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"WidgetEventLog",L"FocusSubMenu",L"Focus");
  FText::FText((FText *)local_358,pFVar4);
  local_358[0x10] = true;
  local_330 = 0;
  local_340.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_338.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (&local_228,(TAttribute<FText> *)local_358,(TAttribute<FText> *)local_388,pTVar3,false,
             pFVar2,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_340,(FWriteAccessScope *)&local_2d8);
  if (((int)local_330 != 0) && (FStack_338.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_338.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_338,0,0,0x10);
    local_330 = local_330 & 0xffffffff00000000;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (FStack_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_338.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_340.AccessDetector);
  if ((FName)local_358._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_358._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_370,(FWriteAccessScope *)&local_2d8);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
  if ((ITextData *)local_388._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_388._0_8_ + 0x10))();
  }
  if (local_328 != (code *)0x0) {
    (**(code **)(*(longlong *)local_328 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_3b8,
             (FWriteAccessScope *)&local_2d8);
  if ((local_3b8._16_4_ != 0) && (&(local_3b8.Accessor)->State != (atomic<unsigned___int64> *)0x0))
  {
    (**(code **)(local_3b8.Accessor)->State)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3b8.Accessor,0,0,0x10);
    local_3b8._16_8_ = (ulonglong)(uint)local_3b8._20_4_ << 0x20;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (&(local_3b8.Accessor)->State != (atomic<unsigned___int64> *)0x0) {
    FMemory::Free(local_3b8.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3d0,(FWriteAccessScope *)&local_2d8);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d0.AccessDetector);
  local_3d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3d8[1] = false;
  local_3c0 = 0;
  local_3d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  local_res10[1] = 0;
  local_res10[2] = 0;
  pFVar2 = FSlateIcon::FSlateIcon((FSlateIcon *)local_2b8);
  local_398.Object = (FExtender *)OnGenerateCategoriesSubMenu;
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_328 = OnGenerateCategoriesSubMenu;
  pTStack_320 = local_398.SharedReferenceCount.ReferenceController;
  local_res10[0] = CONCAT44(local_res10[0]._4_4_,2);
  pTVar3 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      &local_3b8,this,(pmf_849c92d4 *)&local_328,(EWidgetEventType *)local_res10);
  pFVar4 = FText::FText((FText *)&local_2d8);
  FText::FText((FText *)local_388,pFVar4);
  local_378 = true;
  local_360 = 0;
  local_370.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"WidgetEventLog",L"InputSubMenu",L"Input");
  FText::FText((FText *)local_358,pFVar4);
  local_358[0x10] = true;
  local_330 = 0;
  local_340.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_338.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (&local_228,(TAttribute<FText> *)local_358,(TAttribute<FText> *)local_388,pTVar3,false,
             pFVar2,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_340,(FWriteAccessScope *)&local_328);
  if (((int)local_330 != 0) && (FStack_338.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_338.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_338,0,0,0x10);
    local_330 = local_330 & 0xffffffff00000000;
  }
  if (local_318 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_320,(FDestructionSentinel *)&local_328);
  }
  if (FStack_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_338.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_340.AccessDetector);
  if ((FName)local_358._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_358._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_370,(FWriteAccessScope *)&local_328);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_318 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_320,(FDestructionSentinel *)&local_328);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
  if ((ITextData *)local_388._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_388._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_2d8 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2d8 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_3b8,
             (FWriteAccessScope *)&local_328);
  if ((local_3b8._16_4_ != 0) && (local_3b8.Accessor != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)(local_3b8.Accessor)->State)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3b8.Accessor,0,0,0x10);
    local_3b8._16_8_ = local_3b8._16_8_ & 0xffffffff00000000;
  }
  if (local_318 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_320,(FDestructionSentinel *)&local_328);
  }
  if (local_3b8.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free(local_3b8.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3d0,(FWriteAccessScope *)&local_328);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_318 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_320,(FDestructionSentinel *)&local_328);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d0.AccessDetector);
  local_3d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3d8[1] = false;
  local_3c0 = 0;
  local_3d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  local_res10[1] = 0;
  local_res10[2] = 0;
  pFVar2 = FSlateIcon::FSlateIcon((FSlateIcon *)local_2b8);
  local_398.Object = (FExtender *)OnGenerateCategoriesSubMenu;
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_328 = OnGenerateCategoriesSubMenu;
  pTStack_320 = local_398.SharedReferenceCount.ReferenceController;
  local_res10[0] = CONCAT44(local_res10[0]._4_4_,3);
  pTVar3 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      local_388,this,(pmf_849c92d4 *)&local_328,(EWidgetEventType *)local_res10);
  pFVar4 = FText::FText((FText *)&local_2d8);
  FText::FText((FText *)local_308,pFVar4);
  local_308[0x10] = true;
  local_2e0 = 0;
  local_2f0 = (undefined1  [8])0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"WidgetEventLog",L"NavigationSubMenu",L"Navigation");
  FText::FText((FText *)local_358,pFVar4);
  local_358[0x10] = true;
  local_330 = 0;
  local_340.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_338.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (&local_228,(TAttribute<FText> *)local_358,(TAttribute<FText> *)local_308,pTVar3,false,
             pFVar2,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_340,(FWriteAccessScope *)&local_3b8);
  if (((int)local_330 != 0) && (FStack_338.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_338.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_338,0,0,0x10);
    local_330 = local_330 & 0xffffffff00000000;
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  if (FStack_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_338.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_340.AccessDetector);
  if ((FName)local_358._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_358._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)&local_3b8);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_2d8 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2d8 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_388);
  if ((FMRSWRecursiveAccessDetector *)local_388._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_388._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_388);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3d0,(FWriteAccessScope *)&local_3b8);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d0.AccessDetector);
  local_3d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3d8[1] = false;
  local_3c0 = 0;
  local_3d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  local_res10[1] = 0;
  local_res10[2] = 0;
  pFVar2 = FSlateIcon::FSlateIcon((FSlateIcon *)local_2b8);
  local_398.Object = (FExtender *)OnGenerateCategoriesSubMenu;
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_328 = OnGenerateCategoriesSubMenu;
  pTStack_320 = local_398.SharedReferenceCount.ReferenceController;
  local_res10[0] = CONCAT44(local_res10[0]._4_4_,5);
  pTVar3 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      &local_3b8,this,(pmf_849c92d4 *)&local_328,(EWidgetEventType *)local_res10);
  pFVar4 = FText::FText((FText *)&local_2d8);
  FText::FText((FText *)local_358,pFVar4);
  local_358[0x10] = true;
  local_330 = 0;
  local_340.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_338.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"WidgetEventLog",L"CursorSubMenu",L"Cursor");
  FText::FText((FText *)local_308,pFVar4);
  local_308[0x10] = true;
  local_2e0 = 0;
  local_2f0 = (undefined1  [8])0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (&local_228,(TAttribute<FText> *)local_308,(TAttribute<FText> *)local_358,pTVar3,false,
             pFVar2,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_3d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)local_388);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_340,(FWriteAccessScope *)local_388);
  if (((int)local_330 != 0) && (FStack_338.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_338.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_338,0,0,0x10);
    local_330 = local_330 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_338.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_340.AccessDetector);
  if ((FName)local_358._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_358._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_2d8 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2d8 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3b8);
  if (local_3b8.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free(local_3b8.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3d0,(FWriteAccessScope *)local_388);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d0.AccessDetector);
  local_2b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2b8[1] = false;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  local_2b8._8_4_ = 0;
  local_2b8._12_4_ = 0;
  FStack_2a8.ComparisonIndex.Value = 0;
  FStack_2a8.Number = 0;
  FText::FText((FText *)local_258);
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_258[0x10] = false;
  local_398.Object = (FExtender *)GetEnabledCheckState;
  local_328 = GetEnabledCheckState;
  pTStack_320 = local_398.SharedReferenceCount.ReferenceController;
  local_230 = 0;
  local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_238.Data = (FScriptContainerElement *)0x0;
  local_res10[1] = 0;
  local_res10[2] = 0;
  local_res10[0] = local_res10[0] & 0xffffffff00000000;
  pTVar5 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                      &local_2d8,this,(pmf_17847acd *)&local_328,(EWidgetEventType *)local_res10);
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_398.Object = (FExtender *)EnabledCategory;
  local_328 = EnabledCategory;
  pTStack_320 = local_398.SharedReferenceCount.ReferenceController;
  local_3b8.bDestroyed = false;
  local_3b8._17_7_ = 0;
  local_3b8.AccessType = Reader;
  local_3b8._4_4_ = 0;
  local_3b8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_res10[0] = local_res10[0] & 0xffffffff00000000;
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d8,this,
                      (pmf_914f3c40 *)&local_328,(EWidgetEventType *)local_res10);
  pFVar7 = FUIAction::FUIAction
                     (&local_a0,pTVar6,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_3b8,pTVar5,
                      RepeatDisabled);
  pFVar2 = FSlateIcon::FSlateIcon((FSlateIcon *)local_358);
  pFVar4 = FText::GetEmpty();
  FText::FText((FText *)local_288,pFVar4);
  local_288[0x10] = true;
  local_260 = 0;
  local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"WidgetEventLog",L"WarningMenu",L"Warning");
  FText::FText((FText *)local_308,pFVar4);
  local_308[0x10] = true;
  local_2e0 = 0;
  local_2f0 = (undefined1  [8])0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_228,(TAttribute<FText> *)local_308,
             (TAttribute<FText> *)local_288,pFVar2,pFVar7,(FName)0x0,ToggleButton,(FName)0x0,
             (TAttribute<FText> *)local_258,(TAttribute<EVisibility> *)local_2b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)local_388);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)local_388);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
  if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction(&local_a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)local_388);
  if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_238.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
    local_230 = local_230 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_238.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
  if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_2b8 + 8),
             (FWriteAccessScope *)local_388);
  if ((local_2a0.ComparisonIndex.Value != 0) && (FStack_2a8 != (FName)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a8)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_2a8,0,0,0x10);
    local_2a0 = (FName)((ulonglong)local_2a0 & 0xffffffff00000000);
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_2a8 != (FName)0x0) {
    FMemory::Free((void *)FStack_2a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_2b8 + 8));
  local_2b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2b8[1] = false;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  local_2b8._8_4_ = 0;
  local_2b8._12_4_ = 0;
  FStack_2a8.ComparisonIndex.Value = 0;
  FStack_2a8.Number = 0;
  FText::FText((FText *)local_308);
  local_398.Object = (FExtender *)GetEnabledCheckState;
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2e0 = 0;
  local_308[0x10] = false;
  local_2f0 = (undefined1  [8])0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_res10[1] = 0;
  local_res10[2] = 0;
  local_res10[0]._0_4_ = Capture;
  local_328 = GetEnabledCheckState;
  pTStack_320 = local_398.SharedReferenceCount.ReferenceController;
  pTVar5 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                      local_3d8,this,(pmf_17847acd *)&local_328,(EWidgetEventType *)local_res10);
  local_398.Object = (FExtender *)EnabledCategory;
  local_398.SharedReferenceCount.ReferenceController =
       local_398.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_328 = EnabledCategory;
  pTStack_320 = local_398.SharedReferenceCount.ReferenceController;
  local_3b8.bDestroyed = false;
  local_3b8._17_7_ = 0;
  local_3b8.AccessType = Reader;
  local_3b8._4_4_ = 0;
  local_3b8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_res10[0] = CONCAT44(local_res10[0]._4_4_,4);
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SWidgetEventLog,enum_SWidgetEventLog::EWidgetEventType>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_2d8,this,
                      (pmf_914f3c40 *)&local_328,(EWidgetEventType *)local_res10);
  pFVar7 = FUIAction::FUIAction
                     (&local_a0,pTVar6,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_3b8,pTVar5,
                      RepeatDisabled);
  pFVar2 = FSlateIcon::FSlateIcon((FSlateIcon *)local_358);
  pFVar4 = FText::GetEmpty();
  FText::FText((FText *)local_288,pFVar4);
  local_288[0x10] = true;
  local_260 = 0;
  local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"WidgetEventLog",L"CaptureMenu",L"Mouse Capture");
  FText::FText((FText *)local_258,pFVar4);
  local_258[0x10] = true;
  local_230 = 0;
  local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_238.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_228,(TAttribute<FText> *)local_258,
             (TAttribute<FText> *)local_288,pFVar2,pFVar7,(FName)0x0,ToggleButton,(FName)0x0,
             (TAttribute<FText> *)local_308,(TAttribute<EVisibility> *)local_2b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)local_388);
  if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_238.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
    local_230 = local_230 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_238.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
  if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)local_388);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_388._8_8_,(FDestructionSentinel *)local_388);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
  if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction(&local_a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_2b8 + 8));
  if (FStack_2a8 != (FName)0x0) {
    FMemory::Free((void *)FStack_2a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_2b8 + 8));
  FMenuBuilder::MakeWidget
            (&local_228,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_228);
  return __return_storage_ptr__;
}

// OnGenerateCategoriesSubMenu @ 142ecb090

/* WARNING: Removing unreachable block (ram,0x000142ecb1fe) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SWidgetEventLog::OnGenerateCategoriesSubMenu
          (SWidgetEventLog *this,FMenuBuilder *param_1,EWidgetEventType param_2)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget_const_,1> *pTVar11;
  ulong64 uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FUIAction *pFVar14;
  FSlateIcon *pFVar15;
  FText *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *local_res20;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  ForAnyElementType FStack_298;
  FDelegateAllocation *local_290;
  FName local_288;
  FName local_280;
  FDestructionSentinel local_278;
  undefined1 local_260 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_248;
  ForAnyElementType FStack_240;
  ulonglong local_238;
  SWidget *local_230;
  undefined1 local_228 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType FStack_208;
  ulonglong local_200;
  code *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  void *pvStack_1d8;
  FDelegateAllocation *local_1d0;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  TSharedRef<SWidget_const_,1> local_1b0;
  undefined1 local_1a0 [8];
  FDelegateAllocation local_198;
  TReferenceControllerBase<1> *local_188;
  UEnum *local_180;
  FText local_178;
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  undefined1 local_150 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  ForAnyElementType FStack_130;
  ulonglong local_128;
  undefined1 local_120 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  ForAnyElementType FStack_100;
  ulonglong local_f8;
  TReferenceControllerBase<1> *local_f0;
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [16];
  FNameEntryId local_d0;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  TSharedRef<SWidget_const_,1> local_58;
  
  bVar3 = false;
  bVar2 = false;
  local_res20 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 & 0xffffffff00000000);
  GetBitField(this,param_2);
  local_180 = GetEnum(this,param_2);
  local_2a8._0_2_ = 0x19;
  local_290 = (FDelegateAllocation *)0x0;
  local_2a0 = (undefined1  [8])0x0;
  FStack_298.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_228);
  local_228[0x10] = false;
  local_200 = 0;
  local_280.ComparisonIndex.Value = 0;
  local_280.Number = 0;
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  local_1c8 = (undefined1  [8])0x0;
  local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
             (FWriteAccessScope *)local_1e8);
  local_1d0 = &local_1c0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&local_1c0);
  pTVar17 = local_res20;
  if (puVar10 != (undefined8 *)0x0) {
    uStack_1ec = local_1c0.DelegateAllocator._4_4_;
    local_1f8 = GetEnabledAllFromSubCategoryCheckState;
    uStack_1f0 = 0;
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1b0);
    pTVar17 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar11->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4EWidgetEventType_SWidgetEventLog____6B_
    ;
    *(EWidgetEventType *)(puVar10 + 1) = param_2;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetEventLog___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4EWidgetEventType_1___6B_
    ;
    puVar10[3] = pSVar1;
    puVar10[4] = pTVar17;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    bVar2 = true;
    puVar10[5] = local_1f8;
    puVar10[6] = CONCAT44(uStack_1ec,uStack_1f0);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_1b0.SharedReferenceCount.ReferenceController._4_4_,
                        local_1b0.SharedReferenceCount.ReferenceController._0_4_));
  }
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if (pvStack_1d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1e0,(FDestructionSentinel *)local_1e8);
  }
  local_198._8_8_ = 0;
  local_1a0 = (undefined1  [8])0x0;
  local_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_168 = (undefined1  [8])0x0;
  local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)local_1e8);
  local_1d0 = &local_160;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&local_160);
  pTVar17 = local_res20;
  if (puVar10 != (undefined8 *)0x0) {
    uStack_1ec = local_1c0.DelegateAllocator._4_4_;
    local_1f8 = EnabledAllFromSubCategory;
    uStack_1f0 = 0;
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_1b0);
    pTVar17 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar13->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = true;
    bVar4 = true;
    bVar3 = true;
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EWidgetEventType_SWidgetEventLog____6B_
    ;
    *(EWidgetEventType *)(puVar10 + 1) = param_2;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetEventLog___00__A6AXXZUFDefaultDelegateUserPolicy__W4EWidgetEventType_1___6B_
    ;
    puVar10[3] = pSVar1;
    puVar10[4] = pTVar17;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar10[5] = local_1f8;
    puVar10[6] = CONCAT44(uStack_1ec,uStack_1f0);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_1b0.SharedReferenceCount.ReferenceController._4_4_,
                        local_1b0.SharedReferenceCount.ReferenceController._0_4_));
  }
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if (pvStack_1d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1e0,(FDestructionSentinel *)local_1e8);
  }
  pFVar14 = FUIAction::FUIAction
                      ((FUIAction *)local_c0,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_168,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a0,
                       (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_1c8,RepeatDisabled);
  pFVar15 = FSlateIcon::FSlateIcon((FSlateIcon *)local_e0);
  pFVar16 = FText::GetEmpty();
  local_260._0_8_ = (pFVar16->TextData).Reference;
  if ((ITextData *)local_260._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_260._0_8_ + 8))(local_260._0_8_,&local_res20);
  }
  local_260._8_4_ = pFVar16->Flags;
  local_260[0x10] = true;
  local_238 = 0;
  local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_240.Data = (FScriptContainerElement *)0x0;
  pFVar16 = FText::AsLocalizable_Advanced_LocText(&local_178,L"WidgetEventLog",L"AllSubMenu",L"All")
  ;
  FText::FText((FText *)local_150,pFVar16);
  local_150[0x10] = true;
  local_128 = 0;
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_130.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_150,
             (TAttribute<FText> *)local_260,pFVar15,pFVar14,local_288,ToggleButton,local_280,
             (TAttribute<FText> *)local_228,(TAttribute<EVisibility> *)local_2a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_278);
  if (((int)local_128 != 0) && (FStack_130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_130,0,0,0x10);
    local_128 = local_128 & 0xffffffff00000000;
  }
  if (local_278.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
  }
  if (FStack_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if ((FName)local_150._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_150._0_8_ + 0x10))();
  }
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_248,(FWriteAccessScope *)&local_278);
  if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_240.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
    local_238 = local_238 & 0xffffffff00000000;
  }
  if (local_278.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
  }
  if (FStack_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_240.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
  if ((ITextData *)local_260._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_260._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_210,(FWriteAccessScope *)&local_278);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_278.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  if ((ITextData *)local_228._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_228._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a0);
  if (FStack_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a0);
  local_2a8._0_2_ = 0x19;
  local_290 = (FDelegateAllocation *)0x0;
  local_res20 = (TReferenceControllerBase<1> *)0x0;
  local_2a0 = (undefined1  [8])0x0;
  FStack_298.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddMenuSeparator(param_1,(FName)0x0,(TAttribute<EVisibility> *)local_2a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a0,
             (FWriteAccessScope *)&local_278);
  if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_298.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
    local_290 = (FDelegateAllocation *)((ulonglong)local_290 & 0xffffffff00000000);
  }
  if (local_278.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
  }
  if (FStack_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a0);
  local_1f8 = (code *)UEnum::GetMaxEnumValue(local_180);
  local_res20 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 & 0xffffffffffffff00);
  if ((char)local_1f8 != '\0') {
    uVar9 = local_1c0.DelegateAllocator._4_4_;
    local_288 = (FName)0x0;
    local_280.ComparisonIndex.Value = 0;
    local_280.Number = 0;
    do {
      local_1e8._0_2_ = 0x19;
      local_1d0 = (FDelegateAllocation *)0x0;
      local_1e0 = (undefined1  [8])0x0;
      pvStack_1d8 = (void *)0x0;
      FText::FText((FText *)local_120);
      local_120[0x10] = false;
      local_f8 = 0;
      local_e0._0_4_ = 0;
      local_e0._4_4_ = 0;
      local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_100.Data = (FScriptContainerElement *)0x0;
      local_e0._8_4_ = 0;
      local_e0._12_4_ = 0;
      local_d0.Value = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
                 (FWriteAccessScope *)local_2a8);
      local_290 = (FDelegateAllocation *)(local_e0 + 8);
      puVar10 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_e0 + 8));
      if (puVar10 != (undefined8 *)0x0) {
        local_178.Flags = 0;
        local_178.TextData.Reference = (ITextData *)GetEnabledSubCategoryCheckState;
        local_178._12_4_ = uVar9;
        pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_58);
        local_230 = pTVar11->Object;
        pTVar17 = (pTVar11->SharedReferenceCount).ReferenceController;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar6 = true;
        bVar7 = true;
        bVar2 = true;
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4EWidgetEventType_SWidgetEventLog__E__6B_
        ;
        *(EWidgetEventType *)(puVar10 + 1) = param_2;
        *(char *)((longlong)puVar10 + 0xc) = (char)local_res20;
        local_288 = (FName)pTVar17;
        local_f0 = pTVar17;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar12;
        *puVar10 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetEventLog___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4EWidgetEventType_1_E__6B_
        ;
        puVar10[3] = local_230;
        puVar10[4] = pTVar17;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar10[5] = local_178.TextData.Reference;
        puVar10[6] = CONCAT44(local_178._12_4_,local_178.Flags);
      }
      if (bVar6) {
        bVar6 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_288);
      }
      if (bVar7) {
        bVar7 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0);
      }
      if (bVar2) {
        bVar2 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      if (FStack_298.Data._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2a0,(FDestructionSentinel *)local_2a8);
      }
      local_278.bDestroyed = false;
      local_278._17_7_ = 0;
      local_278.AccessType = Reader;
      local_278._4_4_ = 0;
      local_278.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      local_1a0 = (undefined1  [8])0x0;
      local_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
                 (FWriteAccessScope *)local_2a8);
      local_290 = &local_198;
      puVar10 = UE::Core::Private::DelegateAllocate(0x38,&local_198);
      if (puVar10 != (undefined8 *)0x0) {
        local_1b0.SharedReferenceCount.ReferenceController._0_4_ = 0;
        local_1b0.Object = (SWidget *)EnabledSubCategory;
        local_1b0.SharedReferenceCount.ReferenceController._4_4_ = uVar9;
        pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                             (TSharedRef<SWidget,1> *)local_168);
        local_230 = pTVar13->Object;
        pTVar17 = (pTVar13->SharedReferenceCount).ReferenceController;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar3 = true;
        bVar5 = true;
        bVar4 = true;
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EWidgetEventType_SWidgetEventLog__E__6B_
        ;
        *(EWidgetEventType *)(puVar10 + 1) = param_2;
        *(char *)((longlong)puVar10 + 0xc) = (char)local_res20;
        local_188 = pTVar17;
        local_e8 = pTVar17;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar12;
        *puVar10 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetEventLog___00__A6AXXZUFDefaultDelegateUserPolicy__W4EWidgetEventType_1_E__6B_
        ;
        puVar10[3] = local_230;
        puVar10[4] = pTVar17;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar10[5] = local_1b0.Object;
        puVar10[6] = CONCAT44(local_1b0.SharedReferenceCount.ReferenceController._4_4_,
                              local_1b0.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (bVar3) {
        bVar3 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188);
      }
      if (bVar4) {
        bVar4 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8);
      }
      if (bVar5) {
        bVar5 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_160.DelegateAllocator);
      }
      if (FStack_298.Data._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2a0,(FDestructionSentinel *)local_2a8);
      }
      pFVar14 = FUIAction::FUIAction
                          ((FUIAction *)local_c0,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a0,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_278,
                           (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                           local_e0,RepeatDisabled);
      local_230 = (SWidget *)FSlateIcon::FSlateIcon((FSlateIcon *)local_150);
      pFVar16 = FText::GetEmpty();
      local_260._0_8_ = (pFVar16->TextData).Reference;
      if ((ITextData *)local_260._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_260._0_8_ + 8))(local_260._0_8_,&local_280);
      }
      local_260._8_4_ = pFVar16->Flags;
      cVar8 = (char)local_res20;
      local_260[0x10] = true;
      local_238 = 0;
      local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_240.Data = (FScriptContainerElement *)0x0;
      pFVar16 = (FText *)(**(code **)(local_180->_padding_ + 0x2c0))
                                   (local_180,local_1c8,(ulonglong)local_res20 & 0xff);
      FText::FText((FText *)local_228,pFVar16);
      local_228[0x10] = true;
      local_200 = 0;
      local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_208.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_228,
                 (TAttribute<FText> *)local_260,(FSlateIcon *)local_230,pFVar14,(FName)0x0,
                 ToggleButton,(FName)0x0,(TAttribute<FText> *)local_120,
                 (TAttribute<EVisibility> *)local_1e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_210,(FWriteAccessScope *)local_2a8);
      if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_208.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
        local_200 = local_200 & 0xffffffff00000000;
      }
      if (FStack_298.Data._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2a0,(FDestructionSentinel *)local_2a8);
      }
      if (FStack_208.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_208.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
      if ((ITextData *)local_228._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_228._0_8_ + 0x10))();
      }
      if ((atomic<unsigned___int64>)local_1c8 != (atomic<unsigned___int64>)0x0) {
        (**(code **)(*(longlong *)local_1c8 + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_248,(FWriteAccessScope *)local_2a8);
      if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_240.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
        local_238 = local_238 & 0xffffffff00000000;
      }
      if (FStack_298.Data._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2a0,(FDestructionSentinel *)local_2a8);
      }
      if (FStack_240.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_240.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
      if ((ITextData *)local_260._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_260._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
      if ((void *)local_78._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_78._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_78);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
      if ((void *)local_90._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_90._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_90);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
      if ((void *)local_a8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
      if ((void *)local_c0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_108,(FWriteAccessScope *)local_2a8);
      if (((int)local_f8 != 0) && (FStack_100.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_100.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_100,0,0,0x10);
        local_f8 = local_f8 & 0xffffffff00000000;
      }
      if (FStack_298.Data._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2a0,(FDestructionSentinel *)local_2a8);
      }
      if (FStack_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
      if ((ITextData *)local_120._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_120._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e0);
      if (pvStack_1d8 != (void *)0x0) {
        FMemory::Free(pvStack_1d8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1e0);
      local_res20 = (TReferenceControllerBase<1> *)CONCAT71(local_res20._1_7_,cVar8 + 1U);
    } while ((byte)(cVar8 + 1U) < (byte)local_1f8);
  }
  return;
}

// RemoveListeners @ 142ef9890

void __thiscall SWidgetEventLog::RemoveListeners(SWidgetEventLog *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::Warning,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::InputEvent,this
            );
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::FocusEvent,this
            );
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::AttemptNavigationEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::MouseCaptureEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::CursorChangedEvent,this);
  return;
}

// SelectWidget @ 142f03360

void __thiscall
SWidgetEventLog::SelectWidget(SWidgetEventLog *this,TWeakPtr<SWidget_const_,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedPtr<SWidget_const_,1> local_18;
  
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142f03390;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar3 = param_1->Object;
    if (pSVar3 != (SWidget *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = pSVar3;
      local_18.SharedReferenceCount.ReferenceController = pTVar5;
      TDelegate<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->OnWidgetTokenActivated,&local_18);
    }
  }
LAB_142f03390:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

// UpdateListeners @ 142f133a0

void __thiscall SWidgetEventLog::UpdateListeners(SWidgetEventLog *this)

{
  RemoveListeners(this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::Warning,(SWidgetEventLog *)&stack0x00000010,(pmf_0d7c134e *)this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::InputEvent,(SWidgetEventLog *)&stack0x00000010,
             (pmf_c29ded3c *)this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::FocusEvent,(SWidgetEventLog *)&stack0x00000010,
             (pmf_c191f84a *)this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::AttemptNavigationEvent,(SWidgetEventLog *)&stack0x00000010,
             (pmf_eec378e8 *)this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::MouseCaptureEvent,(SWidgetEventLog *)&stack0x00000010,
             (pmf_fb78f675 *)this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<SWidgetEventLog>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::CursorChangedEvent,(SWidgetEventLog *)&stack0x00000010,
             (pmf_6a6d5d44 *)this);
  return;
}

