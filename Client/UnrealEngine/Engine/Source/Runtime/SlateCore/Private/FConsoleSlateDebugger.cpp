// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 27

// FConsoleSlateDebugger @ 142426d20

FConsoleSlateDebugger * __thiscall
FConsoleSlateDebugger::FConsoleSlateDebugger(FConsoleSlateDebugger *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FText *pFVar9;
  FString *pFVar10;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar11;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar12;
  FConsoleSlateDebugger *pFVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  wchar_t *pwVar16;
  undefined1 local_5c8 [8];
  FDelegateAllocation local_5c0;
  undefined1 local_5b0 [8];
  FDelegateAllocation local_5a8;
  undefined1 local_598 [8];
  FDelegateAllocation local_590;
  undefined1 local_580 [8];
  FDelegateAllocation local_578;
  undefined1 local_568 [8];
  FDelegateAllocation local_560;
  undefined1 local_550 [8];
  FDelegateAllocation local_548;
  undefined1 local_538 [8];
  FDelegateAllocation local_530;
  undefined1 local_520 [8];
  FDelegateAllocation local_518;
  undefined1 local_508 [8];
  FDelegateAllocation local_500;
  undefined1 local_4f0 [8];
  FDelegateAllocation local_4e8;
  undefined1 local_4d8 [8];
  FDelegateAllocation local_4d0;
  undefined1 local_4c0 [8];
  FDelegateAllocation local_4b8;
  undefined1 local_4a8 [8];
  ForAnyElementType local_4a0;
  int local_498;
  undefined1 local_490 [24];
  undefined1 local_478 [24];
  undefined1 local_460 [24];
  undefined1 local_448 [24];
  undefined1 local_430 [24];
  FDestructionSentinel local_418;
  FDestructionSentinel local_400;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDestructionSentinel local_3b8;
  FDestructionSentinel local_3a0;
  FDestructionSentinel local_388;
  FDestructionSentinel local_370;
  FDestructionSentinel local_358;
  FDestructionSentinel local_340;
  FDestructionSentinel local_328;
  FDestructionSentinel local_310;
  FDestructionSentinel local_2f8;
  FDestructionSentinel local_2e0;
  FDelegateAllocation *local_2c8;
  FDestructionSentinel local_2c0;
  FDelegateAllocation *local_2a8;
  FDestructionSentinel local_2a0;
  FDelegateAllocation *local_288;
  FDestructionSentinel local_280;
  FDelegateAllocation *local_268;
  FDestructionSentinel local_260;
  FDelegateAllocation *local_248;
  FDestructionSentinel local_240;
  FDelegateAllocation *local_228;
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  FDestructionSentinel local_200;
  FDelegateAllocation *local_1e8;
  FDestructionSentinel local_1e0;
  FDelegateAllocation *local_1c8;
  FDestructionSentinel local_1c0;
  FDelegateAllocation *local_1a8;
  FDestructionSentinel local_1a0;
  FDelegateAllocation *local_188;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  FText local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  
  pTVar1 = &this->EnabledInputEvents;
  this->bEnabled = false;
  this->bLogWarning = true;
  this->bLogInputEvent = true;
  this->bLogFocusEvent = true;
  this->bLogAttemptNavigationEvent = true;
  this->bLogExecuteNavigationEvent = true;
  this->bLogCaptureStateChangeEvent = true;
  this->bLogCursorChangeEvent = true;
  this->_padding_ = (longlong)&___7FConsoleSlateDebugger__6B_;
  this->ProcessInputCounter = 0;
  this->RouteInputCounter = 0;
  this->bCaptureStack = false;
  this->bInputRoutingModeEnabled = false;
  (this->EnabledInputEvents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->EnabledInputEvents).NumBits = 0x1a;
  (this->EnabledInputEvents).MaxBits = 0x80;
  (pTVar1->AllocatorInstance).InlineData[0] = '\0';
  (pTVar1->AllocatorInstance).InlineData[1] = '\0';
  (pTVar1->AllocatorInstance).InlineData[2] = '\0';
  (pTVar1->AllocatorInstance).InlineData[3] = '\0';
  iVar6 = (this->EnabledInputEvents).NumBits;
  uVar15 = iVar6 >> 0x1f & 0x1f;
  uVar5 = iVar6 + uVar15;
  iVar6 = (uVar5 & 0x1f) - uVar15;
  if (iVar6 != 0) {
    puVar2 = (pTVar1->AllocatorInstance).InlineData + (longlong)((int)uVar5 >> 5) * 4;
    *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
  }
  (this->EnabledFocusEvents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->EnabledFocusEvents).NumBits = 3;
  (this->EnabledFocusEvents).MaxBits = 0x80;
  (this->EnabledFocusEvents).AllocatorInstance.InlineData[0] = '\0';
  (this->EnabledFocusEvents).AllocatorInstance.InlineData[1] = '\0';
  (this->EnabledFocusEvents).AllocatorInstance.InlineData[2] = '\0';
  (this->EnabledFocusEvents).AllocatorInstance.InlineData[3] = '\0';
  iVar6 = (this->EnabledFocusEvents).NumBits;
  uVar15 = iVar6 >> 0x1f & 0x1f;
  uVar5 = iVar6 + uVar15;
  iVar6 = (uVar5 & 0x1f) - uVar15;
  if (iVar6 != 0) {
    puVar2 = (this->EnabledFocusEvents).AllocatorInstance.InlineData +
             (longlong)((int)uVar5 >> 5) * 4;
    *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
  }
  local_5c8 = (undefined1  [8])0x0;
  local_5c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_2c0);
  local_2a8 = &local_5c0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_5c0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = StartDebugging;
    puVar7[3] = this;
  }
  if (local_2c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"ConsoleSlateDebugger",L"StartDebugger",L"Starts the debugger.");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StartDebuggingCommand,L"SlateDebugger.Event.Start",pwVar16,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_5c8,0);
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_2f8);
  if ((local_5c0.DelegateSize != 0) &&
     (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5c0,0,0,0x10);
    local_5c0.DelegateSize = 0;
  }
  if (local_2f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
  }
  if (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c8);
  local_5b0 = (undefined1  [8])0x0;
  local_5a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b0,
             (FWriteAccessScope *)&local_2a0);
  local_288 = &local_5a8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_5a8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = StopDebugging;
    puVar7[3] = this;
  }
  if (local_2a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_110,L"ConsoleSlateDebugger",L"StopDebugger",L"Stops the debugger.");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StopDebuggingCommand,L"SlateDebugger.Event.Stop",pwVar16,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_5b0,0);
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b0,
             (FWriteAccessScope *)&local_310);
  if ((local_5a8.DelegateSize != 0) &&
     (local_5a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5a8,0,0,0x10);
    local_5a8.DelegateSize = 0;
  }
  if (local_310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
  }
  if (local_5a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b0);
  local_598 = (undefined1  [8])0x0;
  local_590.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_590.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_598,
             (FWriteAccessScope *)&local_280);
  local_268 = &local_590;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_590);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = StartDebugging;
    puVar7[3] = this;
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_120,L"ConsoleSlateDebugger",L"StartDebuggerAlias",
                      L"Alias to \'SlateDebugger.Event.Start\'.");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StartDebuggingCommandAlias,L"SlateDebugger.Start",pwVar16,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_598,0);
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_598,
             (FWriteAccessScope *)&local_328);
  if ((local_590.DelegateSize != 0) &&
     (local_590.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_590.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_590,0,0,0x10);
    local_590.DelegateSize = 0;
  }
  if (local_328.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
  }
  if (local_590.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_590.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_598);
  local_580 = (undefined1  [8])0x0;
  local_578.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_578.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
             (FWriteAccessScope *)&local_260);
  local_248 = &local_578;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_578);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = StopDebugging;
    puVar7[3] = this;
  }
  if (local_260.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_130,L"ConsoleSlateDebugger",L"StopDebuggerAlias",
                      L"Alias to \'SlateDebugger.Event.Stop\'.");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StopDebuggingCommandAlias,L"SlateDebugger.Stop",pwVar16,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_580,0);
  if (local_130.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
             (FWriteAccessScope *)&local_340);
  if ((local_578.DelegateSize != 0) &&
     (local_578.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_578.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_578,0,0,0x10);
    local_578.DelegateSize = 0;
  }
  if (local_340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
  }
  if (local_578.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_578.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_580);
  local_568 = (undefined1  [8])0x0;
  local_560.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_560.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_2e0);
  local_2c8 = &local_560;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_560);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = OnLogVariablesChanged;
    puVar7[3] = this;
  }
  if (local_2e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_140,L"ConsoleSlateDebugger",L"LogWarning",L"Log warning events");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableLogWarning,L"SlateDebugger.Event.LogWarning",&this->bLogWarning,pwVar16,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_568,0);
  if (local_140.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_358);
  if ((local_560.DelegateSize != 0) &&
     (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_560.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_560,0,0,0x10);
    local_560.DelegateSize = 0;
  }
  if (local_358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
  }
  if (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_560.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_568);
  local_550 = (undefined1  [8])0x0;
  local_548.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_548.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_550,
             (FWriteAccessScope *)&local_240);
  local_228 = &local_548;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_548);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = OnLogVariablesChanged;
    puVar7[3] = this;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_150,L"ConsoleSlateDebugger",L"LogInputEvent",L"Log input events");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableLogInputEvent,L"SlateDebugger.Event.LogInputEvent",&this->bLogInputEvent,
             pwVar16,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
                     local_550,0);
  if (local_150.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_550,
             (FWriteAccessScope *)&local_370);
  if ((local_548.DelegateSize != 0) &&
     (local_548.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_548.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_548,0,0,0x10);
    local_548.DelegateSize = 0;
  }
  if (local_370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_370.Accessor,&local_370);
  }
  if (local_548.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_548.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_550);
  local_538 = (undefined1  [8])0x0;
  local_530.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_530.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_538,
             (FWriteAccessScope *)&local_220);
  local_208 = &local_530;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_530);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = OnLogVariablesChanged;
    puVar7[3] = this;
  }
  if (local_220.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_160,L"ConsoleSlateDebugger",L"LogFocusEvent",L"Log focus events");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableLogFocusEvent,L"SlateDebugger.Event.LogFocusEvent",&this->bLogFocusEvent,
             pwVar16,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
                     local_538,0);
  if (local_160.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_538,
             (FWriteAccessScope *)&local_388);
  if ((local_530.DelegateSize != 0) &&
     (local_530.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_530.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_530,0,0,0x10);
    local_530.DelegateSize = 0;
  }
  if (local_388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_388.Accessor,&local_388);
  }
  if (local_530.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_530.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_538);
  local_520 = (undefined1  [8])0x0;
  local_518.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_518.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_520,
             (FWriteAccessScope *)&local_200);
  local_1e8 = &local_518;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_518);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = OnLogVariablesChanged;
    puVar7[3] = this;
  }
  if (local_200.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_b0,L"ConsoleSlateDebugger",L"LogAttemptNavigationEvent",
                      L"Log attempt navigation events");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableLogAttemptNavigationEvent,L"SlateDebugger.Event.LogAttemptNavigationEvent"
             ,&this->bLogAttemptNavigationEvent,pwVar16,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_520,0);
  if (local_b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_520,
             (FWriteAccessScope *)&local_3a0);
  if ((local_518.DelegateSize != 0) &&
     (local_518.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_518.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_518,0,0,0x10);
    local_518.DelegateSize = 0;
  }
  if (local_3a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a0.Accessor,&local_3a0);
  }
  if (local_518.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_518.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_520);
  local_508 = (undefined1  [8])0x0;
  local_500.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_500.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_508,
             (FWriteAccessScope *)&local_1e0);
  local_1c8 = &local_500;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_500);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    puVar7[4] = OnLogVariablesChanged;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = this;
  }
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"ConsoleSlateDebugger",L"LogExecuteNavigationEvent",
                      L"Log execute navigation events");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableLogExecuteNavigationEvent,L"SlateDebugger.Event.LogExecuteNavigationEvent"
             ,&this->bLogExecuteNavigationEvent,pwVar16,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_508,0);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_508,
             (FWriteAccessScope *)&local_3b8);
  if ((local_500.DelegateSize != 0) &&
     (local_500.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_500.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_500,0,0,0x10);
    local_500.DelegateSize = 0;
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  if (local_500.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_500.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_508);
  local_4f0 = (undefined1  [8])0x0;
  local_4e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4f0,
             (FWriteAccessScope *)&local_1c0);
  local_1a8 = &local_4e8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_4e8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    puVar7[4] = OnLogVariablesChanged;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = this;
  }
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"ConsoleSlateDebugger",L"LogCaptureStateChangeEvent",
                      L"Log cursor state change events");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableLogCaptureStateChangeEvent,
             L"SlateDebugger.Event.LogCaptureStateChangeEvent",&this->bLogCaptureStateChangeEvent,
             pwVar16,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
                     local_4f0,0);
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4f0,
             (FWriteAccessScope *)&local_3d0);
  if ((local_4e8.DelegateSize != 0) &&
     (local_4e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4e8,0,0,0x10);
    local_4e8.DelegateSize = 0;
  }
  if (local_3d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
  }
  if (local_4e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4f0);
  local_4d8 = (undefined1  [8])0x0;
  local_4d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d8,
             (FWriteAccessScope *)&local_1a0);
  local_188 = &local_4d0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_4d0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    puVar7[4] = OnLogVariablesChanged;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = this;
  }
  if (local_1a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_60,L"ConsoleSlateDebugger",L"LogCursorChangeEvent",
                      L"Log cursor change events");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableLogCursorChangeEvent,L"SlateDebugger.Event.LogCursorChangeEvent",
             &this->bLogCursorChangeEvent,pwVar16,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_4d8,0);
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d8,
             (FWriteAccessScope *)&local_3e8);
  if ((local_4d0.DelegateSize != 0) &&
     (local_4d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4d0,0,0,0x10);
    local_4d0.DelegateSize = 0;
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  if (local_4d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d8);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_70,L"ConsoleSlateDebugger",L"CaptureStack",
                      L"Should we capture the stack when there are events?");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->CaptureStackVariable,L"SlateDebugger.Event.CaptureStack",&this->bCaptureStack,
             pwVar16,0);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  local_4c0 = (undefined1  [8])0x0;
  local_4b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c0,
             (FWriteAccessScope *)&local_180);
  local_168 = &local_4b8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_4b8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    puVar7[4] = OnLogVariablesChanged;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = this;
  }
  if (local_180.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_80,L"ConsoleSlateDebugger",L"InputRoutingModeEnabled",
                      L"Should we output the route that an input event took?");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableInputRoutingMode,L"SlateDebugger.Event.InputRoutingModeEnabled",
             &this->bInputRoutingModeEnabled,pwVar16,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_4c0,0);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c0,
             (FWriteAccessScope *)&local_400);
  if ((local_4b8.DelegateSize != 0) &&
     (local_4b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4b8,0,0,0x10);
    local_4b8.DelegateSize = 0;
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  if (local_4b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c0);
  pTVar11 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::CreateRaw<FConsoleSlateDebugger>
                      ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                        *)local_4a8,this,(pmf_ac5ac24c)0x142452440);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_90,L"ConsoleSlateDebugger",L"SetInputFilter",
                      L"Enable or Disable specific input filters");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->SetInputFilterCommand,L"SlateDebugger.Event.SetInputFilter",pwVar16,pTVar11,0);
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
             (FWriteAccessScope *)&local_418);
  if ((local_498 != 0) && (local_4a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_4a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_4a0,0,0,0x10);
    local_498 = 0;
  }
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
  }
  if (local_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a8);
  pTVar12 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FConsoleSlateDebugger>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_430,this,
                       (pmf_70cddb1b)0x1424367a0);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_a0,L"ConsoleSlateDebugger",L"DisableAllInputFilters",
                      L"Disable all input filters");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ClearInputFiltersCommand,L"SlateDebugger.Event.DisableAllInputFilters",pwVar16,
             pTVar12,0);
  if (local_a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  if ((void *)local_430._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_430._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_430);
  pTVar12 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FConsoleSlateDebugger>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_448,this,
                       (pmf_70cddb1b)0x14243b730);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_c0,L"ConsoleSlateDebugger",L"EnableAllInputFilters",
                      L"Enable all input filters");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->EnableInputFiltersCommand,L"SlateDebugger.Event.EnableAllInputFilters",pwVar16,
             pTVar12,0);
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_448);
  if ((void *)local_448._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_448._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_448);
  pTVar11 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::CreateRaw<FConsoleSlateDebugger>
                      ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                        *)local_460,this,(pmf_ac5ac24c)0x1424523e0);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_d0,L"ConsoleSlateDebugger",L"SetFocusFilter",
                      L"Enable or Disable specific focus filters");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->SetFocusFilterCommand,L"SlateDebugger.Event.SetFocusFilter",pwVar16,pTVar11,0);
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_460);
  if ((void *)local_460._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_460._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_460);
  pTVar12 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FConsoleSlateDebugger>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_478,this,
                       (pmf_70cddb1b)0x1424366e0);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_e0,L"ConsoleSlateDebugger",L"DisableAllFocusFilters",
                      L"Disable all focus filters");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ClearFocusFiltersCommand,L"SlateDebugger.Event.DisableAllFocusFilters",pwVar16,
             pTVar12,0);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  if ((void *)local_478._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_478._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  pTVar12 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FConsoleSlateDebugger>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_490,this,
                       (pmf_70cddb1b)0x14243b660);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_f0,L"ConsoleSlateDebugger",L"EnableAllFocusFilters",
                      L"Enable all focus filters");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->EnableFocusFiltersCommand,L"SlateDebugger.Event.EnableAllFocusFilters",pwVar16,
             pTVar12,0);
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  if ((void *)local_490._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_490._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_490);
  if (((this->EnabledInputEvents).NumBits < 5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x10;
  if (((this->EnabledInputEvents).NumBits < 6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x20;
  if (((this->EnabledInputEvents).NumBits < 7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x40;
  if (((this->EnabledInputEvents).NumBits < 8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x80;
  if (((this->EnabledInputEvents).NumBits < 9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x100;
  if (((this->EnabledInputEvents).NumBits < 10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x200;
  if (((this->EnabledInputEvents).NumBits < 0xe) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x2000;
  if (((this->EnabledInputEvents).NumBits < 0xf) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x4000;
  if (((this->EnabledInputEvents).NumBits < 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x8000;
  if (((this->EnabledInputEvents).NumBits < 0x11) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x10000;
  if (((this->EnabledInputEvents).NumBits < 0x12) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x20000;
  if (((this->EnabledInputEvents).NumBits < 0x13) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x40000;
  if (((this->EnabledInputEvents).NumBits < 0x15) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x100000;
  if (((this->EnabledInputEvents).NumBits < 0x16) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x200000;
  if (((this->EnabledInputEvents).NumBits < 0x19) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 0x1000000;
  if (((this->EnabledFocusEvents).NumBits < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FConsoleSlateDebugger *)(*pcVar3)();
    return pFVar13;
  }
  FVar14 = (this->EnabledFocusEvents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)&this->EnabledFocusEvents;
  }
  *(uint *)FVar14 = *(uint *)FVar14 | 1;
  return this;
}

// ~FConsoleSlateDebugger @ 14242e590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FConsoleSlateDebugger::~FConsoleSlateDebugger(FConsoleSlateDebugger *this)

{
  ForElementType<unsigned_int> FVar1;
  FConsoleSlateDebugger *local_res8;
  
  this->_padding_ = (longlong)&___7FConsoleSlateDebugger__6B_;
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
  local_res8 = this;
  TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&FSlateDebugging::RoutingEvents,(IWidgetInputRoutingEvent **)&local_res8,Default);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableFocusFiltersCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ClearFocusFiltersCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->SetFocusFilterCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableInputFiltersCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ClearInputFiltersCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->SetInputFilterCommand);
  *(undefined ***)&(this->EnableInputRoutingMode).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableInputRoutingMode);
  *(undefined ***)&(this->CaptureStackVariable).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->CaptureStackVariable);
  *(undefined ***)&(this->EnableLogCursorChangeEvent).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableLogCursorChangeEvent);
  *(undefined ***)&(this->EnableLogCaptureStateChangeEvent).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->EnableLogCaptureStateChangeEvent);
  *(undefined ***)&(this->EnableLogExecuteNavigationEvent).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->EnableLogExecuteNavigationEvent);
  *(undefined ***)&(this->EnableLogAttemptNavigationEvent).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->EnableLogAttemptNavigationEvent);
  *(undefined ***)&(this->EnableLogFocusEvent).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableLogFocusEvent);
  *(undefined ***)&(this->EnableLogInputEvent).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableLogInputEvent);
  *(undefined ***)&(this->EnableLogWarning).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableLogWarning);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StopDebuggingCommandAlias);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StartDebuggingCommandAlias);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StopDebuggingCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StartDebuggingCommand);
  FVar1 = (this->EnabledFocusEvents).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// ClearFocusFilters @ 1424366e0

void __thiscall FConsoleSlateDebugger::ClearFocusFilters(FConsoleSlateDebugger *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  
  iVar3 = (this->EnabledFocusEvents).NumBits;
  this_00 = &this->EnabledFocusEvents;
  (this->EnabledFocusEvents).NumBits = iVar3;
  uVar2 = iVar3 + 0x1f;
  uVar5 = uVar2 >> 5;
  if (uVar2 >> 5 != 0) {
    if ((this->EnabledFocusEvents).MaxBits + 0x1fU >> 5 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar5,4);
      (this->EnabledFocusEvents).MaxBits = uVar5 << 5;
    }
    FVar4 = (this->EnabledFocusEvents).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar4,0,(ulonglong)uVar5 << 2);
    iVar3 = (this->EnabledFocusEvents).NumBits;
    uVar5 = iVar3 >> 0x1f & 0x1f;
    uVar2 = iVar3 + uVar5;
    iVar3 = (uVar2 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      FVar4 = (this->EnabledFocusEvents).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar4 + (longlong)((int)uVar2 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  return;
}

// ClearInputFilters @ 1424367a0

void __thiscall FConsoleSlateDebugger::ClearInputFilters(FConsoleSlateDebugger *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  
  iVar3 = (this->EnabledInputEvents).NumBits;
  this_00 = &this->EnabledInputEvents;
  (this->EnabledInputEvents).NumBits = iVar3;
  uVar2 = iVar3 + 0x1f;
  uVar5 = uVar2 >> 5;
  if (uVar2 >> 5 != 0) {
    if ((this->EnabledInputEvents).MaxBits + 0x1fU >> 5 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar5,4);
      (this->EnabledInputEvents).MaxBits = uVar5 << 5;
    }
    FVar4 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar4,0,(ulonglong)uVar5 << 2);
    iVar3 = (this->EnabledInputEvents).NumBits;
    uVar5 = iVar3 >> 0x1f & 0x1f;
    uVar2 = iVar3 + uVar5;
    iVar3 = (uVar2 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      FVar4 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar4 + (longlong)((int)uVar2 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  return;
}

// EnableFocusFilters @ 14243b660

void __thiscall FConsoleSlateDebugger::EnableFocusFilters(FConsoleSlateDebugger *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  
  iVar3 = (this->EnabledFocusEvents).NumBits;
  this_00 = &this->EnabledFocusEvents;
  (this->EnabledFocusEvents).NumBits = iVar3;
  uVar2 = iVar3 + 0x1f;
  uVar5 = uVar2 >> 5;
  if (uVar2 >> 5 != 0) {
    if ((this->EnabledFocusEvents).MaxBits + 0x1fU >> 5 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar5,4);
      (this->EnabledFocusEvents).MaxBits = uVar5 << 5;
    }
    FVar4 = (this->EnabledFocusEvents).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    if (uVar5 < 9) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0xff;
    }
    memset((void *)FVar4,iVar3,(ulonglong)uVar5 << 2);
    iVar3 = (this->EnabledFocusEvents).NumBits;
    uVar5 = iVar3 >> 0x1f & 0x1f;
    uVar2 = iVar3 + uVar5;
    iVar3 = (uVar2 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      FVar4 = (this->EnabledFocusEvents).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar4 + (longlong)((int)uVar2 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  return;
}

// EnableInputFilters @ 14243b730

void __thiscall FConsoleSlateDebugger::EnableInputFilters(FConsoleSlateDebugger *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  
  iVar3 = (this->EnabledInputEvents).NumBits;
  this_00 = &this->EnabledInputEvents;
  (this->EnabledInputEvents).NumBits = iVar3;
  uVar2 = iVar3 + 0x1f;
  uVar5 = uVar2 >> 5;
  if (uVar2 >> 5 != 0) {
    if ((this->EnabledInputEvents).MaxBits + 0x1fU >> 5 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar5,4);
      (this->EnabledInputEvents).MaxBits = uVar5 << 5;
    }
    FVar4 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    if (uVar5 < 9) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0xff;
    }
    memset((void *)FVar4,iVar3,(ulonglong)uVar5 << 2);
    iVar3 = (this->EnabledInputEvents).NumBits;
    uVar5 = iVar3 >> 0x1f & 0x1f;
    uVar2 = iVar3 + uVar5;
    iVar3 = (uVar2 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      FVar4 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar4 + (longlong)((int)uVar2 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  return;
}

// OnAttemptNavigationEvent @ 142447af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnAttemptNavigationEvent
          (FConsoleSlateDebugger *this,FSlateDebuggingNavigationEventArgs *param_1)

{
  FText *this_00;
  FText local_18;
  
  if (4 < (byte)LogSlateDebugger._0_1_) {
    this_00 = FSlateDebuggingNavigationEventArgs::ToText(param_1,&local_18);
    FText::ToString(this_00);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  OptionallyDumpCallStack(this);
  return;
}

// OnCaptureStateChangeEvent @ 142447b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnCaptureStateChangeEvent
          (FConsoleSlateDebugger *this,FSlateDebuggingMouseCaptureEventArgs *param_1)

{
  FText *this_00;
  FText local_18;
  
  if (4 < (byte)LogSlateDebugger._0_1_) {
    this_00 = FSlateDebuggingMouseCaptureEventArgs::ToText(param_1,&local_18);
    FText::ToString(this_00);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  OptionallyDumpCallStack(this);
  return;
}

// OnCursorChangeEvent @ 142447bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnCursorChangeEvent
          (FConsoleSlateDebugger *this,FSlateDebuggingCursorQueryEventArgs *param_1)

{
  FText *this_00;
  FText local_18;
  
  if (4 < (byte)LogSlateDebugger._0_1_) {
    this_00 = FSlateDebuggingCursorQueryEventArgs::ToText(param_1,&local_18);
    FText::ToString(this_00);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  OptionallyDumpCallStack(this);
  return;
}

// OnExecuteNavigationEvent @ 142447c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnExecuteNavigationEvent
          (FConsoleSlateDebugger *this,FSlateDebuggingExecuteNavigationEventArgs *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *_Str;
  undefined1 auStack_178 [32];
  longlong lStack_158;
  longlong lStack_150;
  TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> TStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (this->bCaptureStack != false) {
    PrintScriptCallstack();
    FWindowsPlatformStackWalk::GetStack(&TStack_148,7,5,(void *)0x0);
    uVar6 = 0;
    iVar5 = TStack_148.ArrayNum;
    if (0 < TStack_148.ArrayNum) {
      do {
        if (4 < (byte)LogSlateDebugger._0_1_) {
          uVar3 = 0;
          if ((int)uVar6 < iVar5) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if (uVar3 == 0) {
            lStack_150 = (longlong)iVar5;
            lStack_158 = (longlong)(int)uVar6;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          TStack_138._padding_ = 0;
          _Str = TStack_148.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18 + 0x400;
          if (_Str == (FScriptContainerElement *)0x0) {
            TStack_138.Ptr = (wchar_t *)0x0;
            TStack_138.StringLength = 0;
          }
          else {
            sVar4 = strlen((char *)_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_138,(char *)_Str,(int)sVar4,Yes);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
          iVar5 = TStack_148.ArrayNum;
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
            iVar5 = TStack_148.ArrayNum;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    if (TStack_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_148.AllocatorInstance.Data);
    }
  }
  return;
}

// OnFocusEvent @ 142447c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnFocusEvent
          (FConsoleSlateDebugger *this,FSlateDebuggingFocusEventArgs *param_1)

{
  ESlateDebuggingFocusEvent EVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  ForElementType<unsigned_int> FVar4;
  FText local_18;
  
  EVar1 = param_1->FocusEventType;
  if (((this->EnabledFocusEvents).NumBits <= (int)(uint)EVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar4 = (this->EnabledFocusEvents).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->EnabledFocusEvents;
  }
  if ((*(uint *)((longlong)FVar4 + (ulonglong)(EVar1 >> 5) * 4) >> (EVar1 & 0x1f) & 1) != 0) {
    if (4 < (byte)LogSlateDebugger._0_1_) {
      this_00 = FSlateDebuggingFocusEventArgs::ToText(param_1,&local_18);
      FText::ToString(this_00);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    OptionallyDumpCallStack(this);
  }
  return;
}

// OnInputEvent @ 142447d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnInputEvent
          (FConsoleSlateDebugger *this,FSlateDebuggingInputEventArgs *param_1)

{
  ESlateDebuggingInputEvent EVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  ForElementType<unsigned_int> FVar4;
  FText local_18;
  
  EVar1 = param_1->InputEventType;
  if (((this->EnabledInputEvents).NumBits <= (int)(uint)EVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar4 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->EnabledInputEvents;
  }
  if ((*(uint *)((longlong)FVar4 + (ulonglong)(EVar1 >> 5) * 4) >>
       (EVar1 & (TouchGesture|MouseWheel)) & 1) != 0) {
    if (4 < (byte)LogSlateDebugger._0_1_) {
      this_00 = FSlateDebuggingInputEventArgs::ToText(param_1,&local_18);
      FText::ToString(this_00);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    OptionallyDumpCallStack(this);
  }
  return;
}

// OnInputEvent @ 142447e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnInputEvent
          (FConsoleSlateDebugger *this,ESlateDebuggingInputEvent param_1,FReply *param_2,
          TSharedPtr<SWidget,1> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  UPackage *pUVar6;
  FText *this_00;
  FString *pFVar7;
  ForElementType<unsigned_int> FVar8;
  ulong64 uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_118 [32];
  FText local_f8;
  FString local_e8;
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((this->EnabledInputEvents).NumBits <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar8 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->EnabledInputEvents;
  }
  if ((*(uint *)((longlong)FVar8 + (ulonglong)(param_1 >> 5) * 4) >>
       (param_1 & (TouchGesture|MouseWheel)) & 1) != 0) {
    local_d8.Base = local_b8;
    uVar12 = this->RouteInputCounter + this->ProcessInputCounter;
    local_d8.CurPos = local_b8;
    local_d8.End = (wchar_t *)local_38;
    local_d8.bIsDynamic = false;
    local_d8.bIsExternal = false;
    if (0 < (int)uVar12) {
      uVar11 = (ulonglong)uVar12;
      do {
        if (local_d8.End < local_d8.CurPos + 4) {
          TStringBuilderBase<wchar_t>::Extend(&local_d8,4);
        }
        pvVar5 = FGenericPlatformString::Memcpy(local_d8.CurPos,L"    ",8);
        local_d8.CurPos = (wchar_t *)((longlong)pvVar5 + 8);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (local_d8.End < local_d8.CurPos + 9) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,9);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_d8.CurPos,L" Event - ",0x12);
    local_d8.CurPos = (wchar_t *)((longlong)pvVar5 + 0x12);
    if ((char)param_2->_padding_ != '\0') {
      if (local_d8.End < (wchar_t *)((longlong)pvVar5 + 0x2c)) {
        TStringBuilderBase<wchar_t>::Extend(&local_d8,0xd);
      }
      pvVar5 = FGenericPlatformString::Memcpy(local_d8.CurPos,L" (Handled) - ",0x1a);
      local_d8.CurPos = (wchar_t *)((longlong)pvVar5 + 0x1a);
    }
    if (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_SlateCore();
      Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent,(UObject *)pUVar6,
                         L"ESlateDebuggingInputEvent");
    }
    this_00 = UEnum::GetDisplayNameTextByValue
                        (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton,
                         &local_f8,(ulonglong)param_1);
    pFVar7 = FText::ToString(this_00);
    iVar1 = (pFVar7->Data).ArrayNum;
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    uVar9 = (ulong64)iVar10;
    if (local_d8.End < local_d8.CurPos + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,uVar9);
    }
    if (iVar10 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_d8.CurPos,pFVar2,uVar9 * 2);
      local_d8.CurPos = (wchar_t *)((longlong)pvVar5 + uVar9 * 2);
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))(local_f8.TextData.Reference);
    }
    if (local_d8.End < local_d8.CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,3);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_d8.CurPos,L" - ",6);
    local_d8.CurPos = (wchar_t *)((longlong)pvVar5 + 6);
    pFVar7 = FReflectionMetaData::GetWidgetDebugInfo(&local_e8,param_3->Object);
    iVar1 = (pFVar7->Data).ArrayNum;
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    uVar9 = (ulong64)iVar10;
    if (local_d8.End < local_d8.CurPos + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,uVar9);
    }
    if (iVar10 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_d8.CurPos,pFVar2,uVar9 * 2);
      local_d8.CurPos = (wchar_t *)((longlong)pvVar5 + uVar9 * 2);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogSlateDebugger._0_1_) {
      if (local_d8.End < local_d8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
      }
      *local_d8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  }
  return;
}

// OnInputProcessed @ 1424481a0

void __thiscall
FConsoleSlateDebugger::OnInputProcessed
          (FConsoleSlateDebugger *this,ESlateDebuggingInputEvent param_1)

{
  int iVar1;
  
  iVar1 = this->ProcessInputCounter + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  this->ProcessInputCounter = iVar1;
  return;
}

// OnInputRouted @ 1424481c0

void __thiscall
FConsoleSlateDebugger::OnInputRouted(FConsoleSlateDebugger *this,ESlateDebuggingInputEvent param_1)

{
  int iVar1;
  
  iVar1 = this->RouteInputCounter + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  this->RouteInputCounter = iVar1;
  return;
}

// OnLogVariablesChanged @ 1424481e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnLogVariablesChanged(FConsoleSlateDebugger *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FConsoleSlateDebugger *apFStackX_8 [4];
  FConsoleSlateDebugger *pFStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [24];
  
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
  apFStackX_8[0] = this;
  if ((this == (FConsoleSlateDebugger *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\SlateDebugging.cpp"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&FSlateDebugging::RoutingEvents,(IWidgetInputRoutingEvent **)apFStackX_8,Default);
  if (this->bEnabled != false) {
    if (this->bLogWarning != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::Warning,(FConsoleSlateDebugger *)(apFStackX_8 + 1),
                 (pmf_445a1c27)this);
    }
    if (this->bLogInputEvent != false) {
      if (this->bInputRoutingModeEnabled == false) {
        TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
        ::AddRaw<FConsoleSlateDebugger>
                  ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
                    *)&FSlateDebugging::InputEvent,(FConsoleSlateDebugger *)(apFStackX_8 + 2),
                   (pmf_c23a39f9)this);
      }
      else {
        pFStack_38 = this;
        if (((FSlateDebugging::RoutingEvents.AllocatorInstance.Data <=
              (FScriptContainerElement *)&pFStack_38) &&
            ((FScriptContainerElement *)&pFStack_38 <
             FSlateDebugging::RoutingEvents.AllocatorInstance.Data +
             (longlong)FSlateDebugging::RoutingEvents.ArrayMax * 8)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (FSlateDebugging::RoutingEvents.ArrayNum == FSlateDebugging::RoutingEvents.ArrayMax) {
          FSlateDebugging::RoutingEvents.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&FSlateDebugging::RoutingEvents.AllocatorInstance,
                          &FSlateDebugging::RoutingEvents.ArrayMax);
        }
        lVar3 = (longlong)FSlateDebugging::RoutingEvents.ArrayNum;
        FSlateDebugging::RoutingEvents.ArrayNum = FSlateDebugging::RoutingEvents.ArrayNum + 1;
        *(FConsoleSlateDebugger **)
         (FSlateDebugging::RoutingEvents.AllocatorInstance.Data + lVar3 * 8) = pFStack_38;
      }
    }
    if (this->bLogFocusEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::FocusEvent,(FConsoleSlateDebugger *)(apFStackX_8 + 3),
                 (pmf_c231952b)this);
    }
    if (this->bLogAttemptNavigationEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::AttemptNavigationEvent,(FConsoleSlateDebugger *)auStack_30,
                 (pmf_7fcdc461)this);
    }
    if (this->bLogExecuteNavigationEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::ExecuteNavigationEvent,
                 (FConsoleSlateDebugger *)(auStack_30 + 8),(pmf_7037b8fa)this);
    }
    if (this->bLogCaptureStateChangeEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::MouseCaptureEvent,(FConsoleSlateDebugger *)auStack_20,
                 (pmf_3f7f5eb4)this);
    }
    if (this->bLogCursorChangeEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::CursorChangedEvent,(FConsoleSlateDebugger *)(auStack_20 + 8),
                 (pmf_98bd0071)this);
    }
  }
  return;
}

// OnPreProcessInput @ 1424481f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnPreProcessInput
          (FConsoleSlateDebugger *this,ESlateDebuggingInputEvent param_1,wchar_t *param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  size_t sVar4;
  ForElementType<unsigned_int> FVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->EnabledInputEvents).NumBits <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar5 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->EnabledInputEvents;
  }
  if ((*(uint *)((longlong)FVar5 + (ulonglong)(param_1 >> 5) * 4) >>
       (param_1 & (TouchGesture|MouseWheel)) & 1) != 0) {
    local_c8.Base = local_a8;
    uVar10 = this->RouteInputCounter + this->ProcessInputCounter;
    local_c8.CurPos = local_a8;
    local_c8.End = (wchar_t *)local_28;
    local_c8.bIsDynamic = false;
    local_c8.bIsExternal = false;
    if (0 < (int)uVar10) {
      uVar7 = (ulonglong)uVar10;
      do {
        if (local_c8.End < local_c8.CurPos + 4) {
          TStringBuilderBase<wchar_t>::Extend(&local_c8,4);
        }
        pvVar3 = FGenericPlatformString::Memcpy(local_c8.CurPos,L"    ",8);
        local_c8.CurPos = (wchar_t *)((longlong)pvVar3 + 8);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (local_c8.End < local_c8.CurPos + 0x12) {
      TStringBuilderBase<wchar_t>::Extend(&local_c8,0x12);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_c8.CurPos,L" InputProcessor - ",0x24);
    pwVar8 = (wchar_t *)((longlong)pvVar3 + 0x24);
    if (param_3) {
      local_c8.CurPos = pwVar8;
      if (local_c8.End < (wchar_t *)((longlong)pvVar3 + 0x3e)) {
        TStringBuilderBase<wchar_t>::Extend(&local_c8,0xd);
      }
      pvVar3 = FGenericPlatformString::Memcpy(local_c8.CurPos,L" (Handled) - ",0x1a);
      pwVar8 = (wchar_t *)((longlong)pvVar3 + 0x1a);
    }
    iVar9 = 0;
    local_c8.CurPos = pwVar8;
    if (param_2 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_2);
      iVar9 = (int)sVar4;
    }
    uVar6 = (ulong64)iVar9;
    if (local_c8.End < pwVar8 + uVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar6);
      pwVar8 = local_c8.CurPos;
    }
    if (iVar9 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(pwVar8,param_2,uVar6 * 2);
      pwVar8 = (wchar_t *)((longlong)pvVar3 + uVar6 * 2);
      local_c8.CurPos = pwVar8;
    }
    if (4 < (byte)LogSlateDebugger._0_1_) {
      if (local_c8.End < pwVar8 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
        pwVar8 = local_c8.CurPos;
      }
      *pwVar8 = L'\0';
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  }
  return;
}

// OnProcessInput @ 142448430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnProcessInput
          (FConsoleSlateDebugger *this,ESlateDebuggingInputEvent param_1,FInputEvent *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  UPackage *pUVar6;
  FText *pFVar7;
  FString *pFVar8;
  ForElementType<unsigned_int> FVar9;
  ulong64 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_128 [32];
  FText local_108;
  longlong *local_f8 [2];
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->EnabledInputEvents).NumBits <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar9 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->EnabledInputEvents;
  }
  if ((*(uint *)((longlong)FVar9 + (ulonglong)(param_1 >> 5) * 4) >>
       (param_1 & (TouchGesture|MouseWheel)) & 1) != 0) {
    local_e8.Base = local_c8;
    uVar13 = this->RouteInputCounter + this->ProcessInputCounter;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    if (0 < (int)uVar13) {
      uVar12 = (ulonglong)uVar13;
      do {
        if (local_e8.End < local_e8.CurPos + 4) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,4);
        }
        pvVar5 = FGenericPlatformString::Memcpy(local_e8.CurPos,L"    ",8);
        local_e8.CurPos = (wchar_t *)((longlong)pvVar5 + 8);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (local_e8.End < local_e8.CurPos + 0xb) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,0xb);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_e8.CurPos,L" Process - ",0x16);
    local_e8.CurPos = (wchar_t *)((longlong)pvVar5 + 0x16);
    if (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_SlateCore();
      Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent,(UObject *)pUVar6,
                         L"ESlateDebuggingInputEvent");
    }
    pFVar7 = UEnum::GetDisplayNameTextByValue
                       (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton,
                        &local_108,(ulonglong)param_1);
    pFVar8 = FText::ToString(pFVar7);
    iVar1 = (pFVar8->Data).ArrayNum;
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    uVar10 = (ulong64)iVar11;
    if (local_e8.End < local_e8.CurPos + uVar10) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,uVar10);
    }
    if (iVar11 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_e8.CurPos,pFVar2,uVar10 * 2);
      local_e8.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))(local_108.TextData.Reference);
    }
    if (local_e8.End < local_e8.CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,3);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_e8.CurPos,L" - ",6);
    local_e8.CurPos = (wchar_t *)((longlong)pvVar5 + 6);
    pFVar7 = (FText *)(**(code **)(param_2->_padding_ + 8))(param_2,local_f8);
    pFVar8 = FText::ToString(pFVar7);
    iVar1 = (pFVar8->Data).ArrayNum;
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    uVar10 = (ulong64)iVar11;
    if (local_e8.End < local_e8.CurPos + uVar10) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,uVar10);
    }
    if (iVar11 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_e8.CurPos,pFVar2,uVar10 * 2);
      local_e8.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))(local_f8[0]);
    }
    if (4 < (byte)LogSlateDebugger._0_1_) {
      if (local_e8.End < local_e8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
      }
      *local_e8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    OptionallyDumpCallStack(this);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  this->ProcessInputCounter = this->ProcessInputCounter + 1;
  return;
}

// OnRouteInput @ 142448770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnRouteInput
          (FConsoleSlateDebugger *this,ESlateDebuggingInputEvent param_1,FName *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  UPackage *pUVar7;
  FText *this_00;
  FString *pFVar8;
  wchar_t *pwVar9;
  ForElementType<unsigned_int> FVar10;
  ulong64 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_128 [32];
  FText local_108;
  FString local_f8;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->EnabledInputEvents).NumBits <= (int)(uint)param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar10 = (this->EnabledInputEvents).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<unsigned_int>)0x0) {
    FVar10 = (ForElementType<unsigned_int>)&this->EnabledInputEvents;
  }
  if ((*(uint *)((longlong)FVar10 + (ulonglong)(param_1 >> 5) * 4) >>
       (param_1 & (TouchGesture|MouseWheel)) & 1) != 0) {
    local_e8.Base = local_c8;
    uVar14 = this->RouteInputCounter + this->ProcessInputCounter;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    if (0 < (int)uVar14) {
      uVar13 = (ulonglong)uVar14;
      do {
        if (local_e8.End < local_e8.CurPos + 4) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,4);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_e8.CurPos,L"    ",8);
        local_e8.CurPos = (wchar_t *)((longlong)pvVar6 + 8);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (local_e8.End < local_e8.CurPos + 9) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,9);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_e8.CurPos,L" Route - ",0x12);
    local_e8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x12);
    if (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton == (UEnum *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_SlateCore();
      Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent,(UObject *)pUVar7,
                         L"ESlateDebuggingInputEvent");
    }
    this_00 = UEnum::GetDisplayNameTextByValue
                        (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton,
                         &local_108,(ulonglong)param_1);
    pFVar8 = FText::ToString(this_00);
    iVar2 = (pFVar8->Data).ArrayNum;
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    iVar12 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar12 = 0;
    }
    uVar11 = (ulong64)iVar12;
    if (local_e8.End < local_e8.CurPos + uVar11) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,uVar11);
    }
    if (iVar12 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_e8.CurPos,pFVar3,uVar11 * 2);
      local_e8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar11 * 2);
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))(local_108.TextData.Reference);
    }
    if (local_e8.End < local_e8.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,2);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_e8.CurPos,L" (",4);
    local_e8.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
    pFVar8 = ::FName::ToString(param_2,&local_f8);
    iVar2 = (pFVar8->Data).ArrayNum;
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    iVar12 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar12 = 0;
    }
    uVar11 = (ulong64)iVar12;
    if (local_e8.End < local_e8.CurPos + uVar11) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,uVar11);
    }
    if (iVar12 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_e8.CurPos,pFVar3,uVar11 * 2);
      local_e8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar11 * 2);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.End < local_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
    }
    *local_e8.CurPos = L')';
    pwVar9 = local_e8.CurPos + 1;
    if (4 < (byte)LogSlateDebugger._0_1_) {
      pwVar1 = local_e8.CurPos + 2;
      local_e8.CurPos = pwVar9;
      if (local_e8.End < pwVar1) {
        TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
      }
      *local_e8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
      pwVar9 = local_e8.CurPos;
    }
    local_e8.CurPos = pwVar9;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  this->RouteInputCounter = this->RouteInputCounter + 1;
  return;
}

// OnWarning @ 142448ac0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebugger::OnWarning
          (FConsoleSlateDebugger *this,FSlateDebuggingWarningEventArgs *param_1)

{
  FText *pFVar1;
  FString *pFVar2;
  FTextFormat *pFVar3;
  undefined1 local_res18 [16];
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (2 < (byte)LogSlateDebugger._0_1_) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&InputEventFormat,L"SlateDebugger",L"WarningEventFormat",L"{0} (Widget: {1})");
      atexit(`FSlateDebuggingWarningEventArgs::ToText'::__l2::
             _dynamic_atexit_destructor_for__InputEventFormat__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar2 = FReflectionMetaData::GetWidgetDebugInfo
                       ((FString *)&local_38,param_1->OptionalContextWidget->Object);
    FText::FromString(&local_58,pFVar2);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    local_48.TextData.Reference = local_58.TextData.Reference;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 8))
                (local_58.TextData.Reference,local_res18);
    }
    pFVar1 = param_1->Warning;
    local_48.Flags = local_58.Flags;
    local_38.TextData.Reference = (pFVar1->TextData).Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res18);
    }
    local_38.Flags = pFVar1->Flags;
    pFVar3 = FTextFormat::FTextFormat(&local_18,&InputEventFormat,Default);
    FText::Format<FText,FText>(&local_28,pFVar3,&local_38,&local_48);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    FText::ToString(&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  OptionallyDumpCallStack(this);
  return;
}

// OptionallyDumpCallStack @ 142448cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConsoleSlateDebugger::OptionallyDumpCallStack(FConsoleSlateDebugger *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *_Str;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (this->bCaptureStack != false) {
    PrintScriptCallstack();
    FWindowsPlatformStackWalk::GetStack(&local_148,7,5,(void *)0x0);
    uVar6 = 0;
    iVar5 = local_148.ArrayNum;
    if (0 < local_148.ArrayNum) {
      do {
        if (4 < (byte)LogSlateDebugger._0_1_) {
          uVar3 = 0;
          if ((int)uVar6 < iVar5) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if (uVar3 == 0) {
            local_150 = (longlong)iVar5;
            local_158 = (longlong)(int)uVar6;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          local_138._padding_ = 0;
          _Str = local_148.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18 + 0x400;
          if (_Str == (FScriptContainerElement *)0x0) {
            local_138.Ptr = (wchar_t *)0x0;
            local_138.StringLength = 0;
          }
          else {
            sVar4 = strlen((char *)_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,(char *)_Str,(int)sVar4,Yes);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
          iVar5 = local_148.ArrayNum;
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
            iVar5 = local_148.ArrayNum;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveListeners @ 14244f0c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FConsoleSlateDebugger::RemoveListeners(FConsoleSlateDebugger *this)

{
  code *pcVar1;
  bool bVar2;
  FConsoleSlateDebugger *local_res8 [4];
  
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
  local_res8[0] = this;
  if (this == (FConsoleSlateDebugger *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\SlateDebugging.cpp"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&FSlateDebugging::RoutingEvents,(IWidgetInputRoutingEvent **)local_res8,Default);
  return;
}

// SetFocusFilter @ 1424523e0

void __thiscall
FConsoleSlateDebugger::SetFocusFilter
          (FConsoleSlateDebugger *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingFocusEvent,(UObject *)pUVar1,
                       L"ESlateDebuggingFocusEvent");
  }
  SlateDebuggerUtils::SetEventFilter
            (param_1,Z_Registration_Info_UEnum_ESlateDebuggingFocusEvent.OuterSingleton,
             &this->EnabledFocusEvents);
  return;
}

// SetInputFilter @ 142452440

void __thiscall
FConsoleSlateDebugger::SetInputFilter
          (FConsoleSlateDebugger *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingInputEvent,(UObject *)pUVar1,
                       L"ESlateDebuggingInputEvent");
  }
  SlateDebuggerUtils::SetEventFilter
            (param_1,Z_Registration_Info_UEnum_ESlateDebuggingInputEvent.OuterSingleton,
             &this->EnabledInputEvents);
  return;
}

// StartDebugging @ 1424524c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConsoleSlateDebugger::StartDebugging(FConsoleSlateDebugger *this)

{
  if (4 < (byte)LogSlateDebugger._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
  }
  this->bEnabled = true;
  UpdateListeners(this);
  return;
}

// StopDebugging @ 142452ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FConsoleSlateDebugger::StopDebugging(FConsoleSlateDebugger *this)

{
  FConsoleSlateDebugger *local_res8 [4];
  
  if (4 < (byte)LogSlateDebugger._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
  }
  this->bEnabled = false;
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
  local_res8[0] = this;
  TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&FSlateDebugging::RoutingEvents,(IWidgetInputRoutingEvent **)local_res8,Default);
  return;
}

// UpdateListeners @ 142456040

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FConsoleSlateDebugger::UpdateListeners(FConsoleSlateDebugger *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FConsoleSlateDebugger *local_res8 [4];
  FConsoleSlateDebugger *local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
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
  local_res8[0] = this;
  if ((this == (FConsoleSlateDebugger *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\SlateDebugging.cpp"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&FSlateDebugging::RoutingEvents,(IWidgetInputRoutingEvent **)local_res8,Default);
  if (this->bEnabled != false) {
    if (this->bLogWarning != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::Warning,(FConsoleSlateDebugger *)(local_res8 + 1),
                 (pmf_445a1c27)this);
    }
    if (this->bLogInputEvent != false) {
      if (this->bInputRoutingModeEnabled == false) {
        TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
        ::AddRaw<FConsoleSlateDebugger>
                  ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
                    *)&FSlateDebugging::InputEvent,(FConsoleSlateDebugger *)(local_res8 + 2),
                   (pmf_c23a39f9)this);
      }
      else {
        local_38 = this;
        if (((FSlateDebugging::RoutingEvents.AllocatorInstance.Data <=
              (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             FSlateDebugging::RoutingEvents.AllocatorInstance.Data +
             (longlong)FSlateDebugging::RoutingEvents.ArrayMax * 8)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (FSlateDebugging::RoutingEvents.ArrayNum == FSlateDebugging::RoutingEvents.ArrayMax) {
          FSlateDebugging::RoutingEvents.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&FSlateDebugging::RoutingEvents.AllocatorInstance,
                          &FSlateDebugging::RoutingEvents.ArrayMax);
        }
        lVar3 = (longlong)FSlateDebugging::RoutingEvents.ArrayNum;
        FSlateDebugging::RoutingEvents.ArrayNum = FSlateDebugging::RoutingEvents.ArrayNum + 1;
        *(FConsoleSlateDebugger **)
         (FSlateDebugging::RoutingEvents.AllocatorInstance.Data + lVar3 * 8) = local_38;
      }
    }
    if (this->bLogFocusEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::FocusEvent,(FConsoleSlateDebugger *)(local_res8 + 3),
                 (pmf_c231952b)this);
    }
    if (this->bLogAttemptNavigationEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::AttemptNavigationEvent,(FConsoleSlateDebugger *)local_30,
                 (pmf_7fcdc461)this);
    }
    if (this->bLogExecuteNavigationEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::ExecuteNavigationEvent,(FConsoleSlateDebugger *)(local_30 + 8)
                 ,(pmf_7037b8fa)this);
    }
    if (this->bLogCaptureStateChangeEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::MouseCaptureEvent,(FConsoleSlateDebugger *)local_20,
                 (pmf_3f7f5eb4)this);
    }
    if (this->bLogCursorChangeEvent != false) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebugger>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::CursorChangedEvent,(FConsoleSlateDebugger *)(local_20 + 8),
                 (pmf_98bd0071)this);
    }
  }
  return;
}

