// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 14

// FConsoleSlateDebuggerUpdate @ 14242bab0

FConsoleSlateDebuggerUpdate * __thiscall
FConsoleSlateDebuggerUpdate::FConsoleSlateDebuggerUpdate(FConsoleSlateDebuggerUpdate *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FColor_u_0 local_res8 [2];
  int local_res10 [2];
  undefined1 local_338 [8];
  FDelegateAllocation local_330;
  undefined1 local_320 [8];
  FDelegateAllocation local_318;
  undefined1 local_308 [8];
  FDelegateAllocation local_300;
  undefined1 local_2f0 [8];
  FDelegateAllocation local_2e8;
  undefined1 local_2d8 [8];
  FDelegateAllocation local_2d0;
  undefined1 local_2c0 [8];
  FDelegateAllocation local_2b8;
  undefined1 local_2a8 [8];
  FDelegateAllocation local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FDestructionSentinel local_1d0;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  this->WidgetUpdateFlagsFilter = AnyUpdate;
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerUpdate__6B_;
  this->bEnabled = false;
  this->bEnabledCVarValue = false;
  this->bDisplayWidgetsNameList = false;
  this->bUseWidgetPathAsName = false;
  this->bDisplayUpdateFromPaint = false;
  fVar3 = __real_3b808081;
  this->bShowLegend = false;
  this->bShowQuad = false;
  this->bDebugGameWindowOnly = true;
  (this->DrawVolatilePaintColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.R];
  (this->DrawVolatilePaintColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.G];
  (this->DrawVolatilePaintColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.B];
  (this->DrawVolatilePaintColor).field0_0x0._s_0.A = (float)FColorList::Red.field0_0x0._3_1_ * fVar3
  ;
  (this->DrawRepaintColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.R];
  (this->DrawRepaintColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.G];
  (this->DrawRepaintColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.B];
  (this->DrawRepaintColor).field0_0x0._s_0.A = (float)FColorList::Yellow.field0_0x0._3_1_ * fVar3;
  (this->DrawTickColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.R];
  (this->DrawTickColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.G];
  (this->DrawTickColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.B];
  (this->DrawTickColor).field0_0x0._s_0.A = (float)FColorList::Blue.field0_0x0._3_1_ * fVar3;
  (this->DrawActiveTimerColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.R];
  (this->DrawActiveTimerColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.G];
  (this->DrawActiveTimerColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.B];
  (this->DrawActiveTimerColor).field0_0x0._s_0.A = (float)FColorList::Green.field0_0x0._3_1_ * fVar3
  ;
  (this->DrawWidgetNameColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.R];
  (this->DrawWidgetNameColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.G];
  (this->DrawWidgetNameColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.B];
  uVar5 = (uint)FColorList::Red.field0_0x0._s_0.A;
  this->MaxNumberOfWidgetInList = 0x14;
  this->InvalidationRootIdFilter = -1;
  (this->DrawWidgetNameColor).field0_0x0._s_0.A = (float)uVar5 * fVar3;
  this->CacheDuration = 2.0;
  ::FName::FName(&this->PIEWindowTag,"PIEWindow");
  local_2d8 = (undefined1  [8])0x0;
  local_2d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
             (FWriteAccessScope *)&local_128);
  local_110 = &local_2d0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_2d0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = StartDebugging;
    puVar6[3] = this;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StartCommand,L"SlateDebugger.Update.Start",
             L"Start the update widget debug tool. It shows when widgets are updated.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2d8,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
             (FWriteAccessScope *)&local_1d0);
  if ((local_2d0.DelegateSize != 0) &&
     (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2d0,0,0,0x10);
    local_2d0.DelegateSize = 0;
  }
  if (local_1d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
  }
  if (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d8);
  local_320 = (undefined1  [8])0x0;
  local_318.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_318.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_320,
             (FWriteAccessScope *)&local_108);
  local_f0 = &local_318;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_318);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = StopDebugging;
    puVar6[3] = this;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StopCommand,L"SlateDebugger.Update.Stop",L"Stop the update widget debug tool.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_320,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_320,
             (FWriteAccessScope *)&local_1b8);
  if ((local_318.DelegateSize != 0) &&
     (local_318.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_318.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_318,0,0,0x10);
    local_318.DelegateSize = 0;
  }
  if (local_1b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
  }
  if (local_318.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_318.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_320);
  local_308 = (undefined1  [8])0x0;
  local_300.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_300.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_308,
             (FWriteAccessScope *)&local_e8);
  local_d0 = &local_300;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_300);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = HandleEnabled;
    puVar6[3] = this;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnabledRefCVar,L"SlateDebugger.Update.Enable",&this->bEnabledCVarValue,
             L"Start/Stop the painted widget debug tool. It shows when widgets are updated.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_308,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_308,
             (FWriteAccessScope *)&local_1a0);
  if ((local_300.DelegateSize != 0) &&
     (local_300.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_300.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_300,0,0,0x10);
    local_300.DelegateSize = 0;
  }
  if (local_1a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
  }
  if (local_300.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_300.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_308);
  local_2f0 = (undefined1  [8])0x0;
  local_2e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)&local_c8);
  local_b0 = &local_2e8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_2e8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = ToggleDisplayLegend;
    puVar6[3] = this;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ToggleLegendCommand,L"SlateDebugger.Update.ToggleLegend",
             L"Option to display the color legend.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2f0,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)&local_188);
  if ((local_2e8.DelegateSize != 0) &&
     (local_2e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2e8,0,0,0x10);
    local_2e8.DelegateSize = 0;
  }
  if (local_188.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
  }
  if (local_2e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  local_338 = (undefined1  [8])0x0;
  local_330.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_330.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_330;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_330);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = ToogleDisplayWidgetNameList;
    puVar6[3] = this;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ToogleWidgetsNameListCommand,L"SlateDebugger.Update.ToggleWidgetNameList",
             L"Option to display the name of the widgets that have been updated.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_338,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_170);
  if ((local_330.DelegateSize != 0) &&
     (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_330.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_330,0,0,0x10);
    local_330.DelegateSize = 0;
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  if (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_330.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_338);
  local_2c0 = (undefined1  [8])0x0;
  local_2b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
             (FWriteAccessScope *)&local_88);
  local_70 = &local_2b8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_2b8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = ToogleDisplayUpdateFromPaint;
    puVar6[3] = this;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ToogleDisplayUpdateFromPaintCommand,
             L"SlateDebugger.Update.ToggleUpdateFromPaint",
             L"Option to also display the widgets that do not have an update flag but are updated as a side effect of an other widget."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c0,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
             (FWriteAccessScope *)&local_158);
  if ((local_2b8.DelegateSize != 0) &&
     (local_2b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2b8,0,0,0x10);
    local_2b8.DelegateSize = 0;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (local_2b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c0);
  local_2a8 = (undefined1  [8])0x0;
  local_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_2a0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_2a0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = HandleSetWidgetUpdateFlagsFilter;
    puVar6[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->SetWidgetUpdateFlagsFilterCommand,
             L"SlateDebugger.Update.SetWidgetUpdateFlagsFilter",
             L"Enable or Disable specific Widget Update Flags filters. Usage: SetWidgetUpdateFlagsFilter [None] [Tick] [ActiveTimer] [Repaint] [VolatilePaint] [Any]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_2a8,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_140);
  if ((local_2a0.DelegateSize != 0) &&
     (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2a0,0,0,0x10);
    local_2a0.DelegateSize = 0;
  }
  if (local_140.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
  }
  if (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->InvalidationRootFilterRefCVar,
             L"SlateDebugger.Update.SetInvalidationRootIdFilter",&this->InvalidationRootIdFilter,
             L"Option to show only the widgets that are part of an invalidation root.",0);
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->OnlyGameWindow,L"SlateDebugger.Update.OnlyGameWindow",
             &this->bDebugGameWindowOnly,L"Option to only the debug the game window",0);
  *(undefined8 *)&this->UpdatedWidgets = 0;
  pwVar9 = L"";
  *(undefined8 *)&(this->UpdatedWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedWidgets).field_0x20 = 0;
  pwVar8 = L"";
  *(undefined4 *)&(this->UpdatedWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->UpdatedWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x48 = 0;
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_200,pwVar8);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Update",L"bDisplayWidgetsNameList",
             &this->bDisplayWidgetsNameList,&local_200);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1f0,pwVar8);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Update",L"bUseWidgetPathAsName",&this->bUseWidgetPathAsName,
             &local_1f0);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1e0,pwVar8);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Update",L"bDisplayUpdateFromPaint",
             &this->bDisplayUpdateFromPaint,&local_1e0);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_290,pwVar8);
  FConfigCacheIni::GetBool(GConfig,L"SlateDebugger.Update",L"bShowQuad",&this->bShowQuad,&local_290)
  ;
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  pwVar8 = L"";
  local_res10[0] = 0;
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_280,pwVar8);
  bVar4 = FConfigCacheIni::GetInt
                    (GConfig,L"SlateDebugger.Update",L"WidgetUpdateFlagsFilter",local_res10,
                     &local_280);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    this->WidgetUpdateFlagsFilter = (EWidgetUpdateFlags)local_res10[0];
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_270,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Update",L"DrawVolatilePaintColor",
                     (FColor *)&local_res8[0]._s_0,&local_270);
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawVolatilePaintColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawVolatilePaintColor).field0_0x0._s_0.G = fVar1;
    (this->DrawVolatilePaintColor).field0_0x0._s_0.B = fVar2;
    (this->DrawVolatilePaintColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_260,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Update",L"DrawRepaintColor",
                     (FColor *)&local_res8[0]._s_0,&local_260);
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawRepaintColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawRepaintColor).field0_0x0._s_0.G = fVar1;
    (this->DrawRepaintColor).field0_0x0._s_0.B = fVar2;
    (this->DrawRepaintColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_250,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Update",L"DrawTickColor",(FColor *)&local_res8[0]._s_0,
                     &local_250);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawTickColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawTickColor).field0_0x0._s_0.G = fVar1;
    (this->DrawTickColor).field0_0x0._s_0.B = fVar2;
    (this->DrawTickColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_240,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Update",L"DrawActiveTimerColor",
                     (FColor *)&local_res8[0]._s_0,&local_240);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawActiveTimerColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawActiveTimerColor).field0_0x0._s_0.G = fVar1;
    (this->DrawActiveTimerColor).field0_0x0._s_0.B = fVar2;
    (this->DrawActiveTimerColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_230,pwVar8);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Update",L"DrawWidgetNameColor",
                     (FColor *)&local_res8[0]._s_0,&local_230);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetNameColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetNameColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetNameColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetNameColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar8 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_220,pwVar8);
  FConfigCacheIni::GetInt
            (GConfig,L"SlateDebugger.Update",L"MaxNumberOfWidgetInList",
             &this->MaxNumberOfWidgetInList,&local_220);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar9 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_210,pwVar9);
  FConfigCacheIni::GetFloat
            (GConfig,L"SlateDebugger.Update",L"CacheDuration",&this->CacheDuration,&local_210);
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FConsoleSlateDebuggerUpdate @ 14242eb90

void __thiscall
FConsoleSlateDebuggerUpdate::~FConsoleSlateDebuggerUpdate(FConsoleSlateDebuggerUpdate *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerUpdate__6B_;
  StopDebugging(this);
  *(undefined4 *)&(this->UpdatedWidgets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UpdatedWidgets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UpdatedWidgets);
  *(undefined ***)&(this->OnlyGameWindow).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->OnlyGameWindow);
  *(undefined ***)&(this->InvalidationRootFilterRefCVar).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->InvalidationRootFilterRefCVar);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->SetWidgetUpdateFlagsFilterCommand);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->ToogleDisplayUpdateFromPaintCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ToogleWidgetsNameListCommand)
  ;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ToggleLegendCommand);
  *(undefined ***)&(this->EnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnabledRefCVar);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StopCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StartCommand);
  return;
}

// operator() @ 14242fd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,TVector2<float> *param_2,FLinearColor *param_3)

{
  float fVar1;
  byte bVar2;
  FSlateFontInfo *pFVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStackY_108 [32];
  float local_c8;
  float fStack_c4;
  TTransform2<float> local_b0;
  TTransform2<float> local_98;
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar3 = *(FSlateFontInfo **)((longlong)this + 0x18);
  local_b0.Trans.field0_0x0 =
       (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_2->field0_0x0)._s_0;
  lVar4 = *(longlong *)((longlong)this + 0x10);
  fVar1 = *(float *)(lVar4 + 8);
  local_c8 = local_b0.Trans.field0_0x0._0_4_;
  bVar2 = *(byte *)(lVar4 + 0x34);
  fStack_c4 = local_b0.Trans.field0_0x0._4_4_;
  local_b0.M.M[0][1] = (float)*(undefined8 *)(lVar4 + 0xc);
  local_b0.M.M[1][0] = (float)((ulonglong)*(undefined8 *)(lVar4 + 0xc) >> 0x20);
  fVar5 = fVar1 * local_c8 + local_b0.M.M[0][1];
  fVar6 = fVar1 * fStack_c4 + local_b0.M.M[1][0];
  local_b0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_b0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_b0.M.M[1][0] = (float)_UNK_15076b188;
  local_b0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_98,&local_b0,(TTransform2<float> *)(lVar4 + 0x1c));
  local_80._s_0.Y = fVar6;
  local_80._s_0.X = fVar5;
  local_6c = 0x3f8000003f800000;
  local_4c = (bVar2 & 1) * '\x02' | local_4c & 0xfc;
  local_74 = 0;
  local_64[0] = local_98.M.M[0][0];
  local_64[1] = local_98.M.M[0][1];
  afStack_5c[0] = local_98.M.M[1][0];
  afStack_5c[1] = local_98.M.M[1][1];
  local_54 = local_98.Trans.field0_0x0;
  local_78 = fVar1;
  FSlateDrawElement::MakeText
            (*(FSlateWindowElementList **)this,**(uint **)((longlong)this + 8),
             (FPaintGeometry *)&local_80._s_0,param_1,pFVar3,None,param_3);
  return;
}

// HandleEnabled @ 142440100

void __thiscall
FConsoleSlateDebuggerUpdate::HandleEnabled
          (FConsoleSlateDebuggerUpdate *this,IConsoleVariable *param_1)

{
  undefined1 *puVar1;
  TMap<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (this->bEnabledCVarValue == false) {
    StopDebugging(this);
    return;
  }
  if (this->bEnabled != false) {
    this->bEnabledCVarValue = this->bEnabled;
    return;
  }
  this_00 = &this->UpdatedWidgets;
  this->bEnabled = true;
  bVar3 = 1 < *(int *)&(this->UpdatedWidgets).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->UpdatedWidgets).field_0x8);
  puVar1 = &(this->UpdatedWidgets).field_0xc;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->UpdatedWidgets).field_0x34 = 0;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->UpdatedWidgets).field_0x2c;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->UpdatedWidgets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->UpdatedWidgets).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->UpdatedWidgets).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerUpdate>
            ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::PaintDebugElements,(FConsoleSlateDebuggerUpdate *)&stack0x00000008
             ,(pmf_636b54c0)this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerUpdate>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::WidgetUpdatedEvent,(FConsoleSlateDebuggerUpdate *)&stack0x00000008
             ,(pmf_0701aed5)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FConsoleSlateDebuggerUpdate>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(FConsoleSlateDebuggerUpdate *)&stack0x00000008,
             (pmf_807c9924)this);
  this->bEnabledCVarValue = this->bEnabled;
  return;
}

// HandleEndFrame @ 142440410

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FConsoleSlateDebuggerUpdate::HandleEndFrame(FConsoleSlateDebuggerUpdate *this)

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  FSlateApplicationBase *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  double dVar7;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  pFVar4 = FSlateApplicationBase::Get();
  dVar7 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
  dVar7 = dVar7 - (double)this->CacheDuration;
  TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
              *)&this->UpdatedWidgets);
  local_20 = '\0';
  cStack_1f = '\0';
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  stack0xffffffffffffffb8 = local_88._16_16_;
  uVar5 = local_88._24_8_ >> 0x20;
  uVar6 = local_88._28_4_;
  local_28 = (TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
              *)&this->UpdatedWidgets;
  if ((int)uVar6 < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      pdVar1 = (double *)(*local_58 + 0x38 + (longlong)(int)uVar5 * 0x48);
      if (*pdVar1 <= dVar7 && dVar7 != *pdVar1) {
        TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,uVar6);
        local_20 = '\x01';
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar5 = (ulonglong)uStack_3c;
      uVar6 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar6 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_28->HashSize < iVar3)) || (iVar3 < local_28->HashSize)) {
        local_28->HashSize = iVar3;
        TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// HandlePaintDebugInfo @ 142442f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo
          (FConsoleSlateDebuggerUpdate *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateWindowElementList *param_3,int *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  TVector2<float>_u_0 TVar7;
  float fVar8;
  float _X;
  float fVar9;
  float fVar10;
  float fVar11;
  float afVar12 [2];
  float afVar13 [2];
  float afVar14 [2];
  float afVar15 [2];
  TMap<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>_>
  *pTVar16;
  bool bVar17;
  uint uVar18;
  SWindow *pSVar19;
  FName *pFVar20;
  ISlateStyle *pIVar21;
  FSlateApplicationBase *pFVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  undefined1 *puVar26;
  uint *puVar27;
  int iVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_398 [32];
  undefined1 local_368 [4];
  TVector2<float>_u_0 local_364;
  TVector2<float>_u_0 local_35c;
  TVector2<float>_u_0 local_354;
  TVector2<float>_u_0 local_34c;
  longlong local_340;
  uint *local_338;
  FSlateWindowElementList *local_330;
  TVector2<float>_u_0 local_328;
  TVector2<float>_u_0 local_320;
  FLinearColor_u_0 local_318;
  FLinearColor_u_0 local_308;
  FLinearColor_u_0 local_2f8;
  FSlateWindowElementList *local_2e8;
  int *local_2e0;
  FGeometry *local_2d8;
  undefined1 *local_2d0;
  TMap<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>_>
  *local_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  undefined1 *local_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  int local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  int local_298;
  FSlateBrush *local_290;
  undefined8 local_288;
  TMap<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>_>
  *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  TTransform2<float> local_200;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  TVector2<float>_u_0 local_1d4;
  TTransform2<float> local_1cc;
  undefined1 local_1b0 [8];
  FName local_1a8;
  FName local_1a0;
  TTransform2<float> local_198;
  undefined1 local_178 [16];
  undefined4 local_168;
  TReferenceControllerBase<1> *local_140;
  TVector2<float>_u_0 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_338 = (uint *)param_4;
  *param_4 = *param_4 + 1;
  local_330 = param_3;
  pSVar19 = FSlateWindowElementList::GetPaintWindow(param_3);
  if (((this->bDebugGameWindowOnly == false) || (pSVar19->Type == GameWindow)) ||
     (pFVar20 = (FName *)(**(code **)(pSVar19->_padding_ + 0x1f0))(pSVar19,local_1b0),
     *pFVar20 == this->PIEWindowTag)) {
    pSVar19 = FSlateWindowElementList::GetPaintWindow(param_3);
    iVar28 = 0;
    if (pSVar19 == (SWindow *)0x0) {
      local_340 = 0;
    }
    else {
      local_340 = pSVar19->_padding_;
    }
    pIVar21 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar21 + 0x50);
    pFVar20 = ::FName::FName(&local_1a8,L"FocusRectangle");
    local_290 = (FSlateBrush *)(*pcVar5)(pIVar21,*pFVar20,0,0);
    pIVar21 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar21 + 0x88);
    pFVar20 = ::FName::FName(&local_1a0,"SmallFont");
    (*pcVar5)(pIVar21,local_178,*pFVar20,0);
    uVar18 = 1;
    fVar37 = this->CacheDuration;
    if (this->CacheDuration <= __real_3c23d70a) {
      fVar37 = __real_3c23d70a;
    }
    local_168 = 1;
    this->CacheDuration = fVar37;
    pFVar22 = FSlateApplicationBase::Get();
    local_288 = (**(code **)(*(longlong *)pFVar22 + 0x60))(pFVar22);
    local_2d0 = local_178;
    uVar30 = (undefined4)local_288;
    uVar31 = (undefined4)((ulonglong)local_288 >> 0x20);
    local_2e0 = param_4;
    fVar37 = __real_42400000;
    local_2e8 = param_3;
    local_2d8 = param_2;
    if (this->bShowLegend != false) {
      local_354._s_0.X = 10.0;
      local_354._s_0.Y = 10.0;
      ::FString::FString(&local_250,L"Repaint");
      `FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                (&local_2e8,&local_250,(TVector2<float> *)&local_354._s_0,&this->DrawRepaintColor);
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      local_34c._s_0.X = 10.0;
      local_34c._s_0.Y = 22.0;
      ::FString::FString(&local_240,L"Volatile Paint");
      `FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                (&local_2e8,&local_240,(TVector2<float> *)&local_34c._s_0,
                 &this->DrawVolatilePaintColor);
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      local_364._s_0.X = 10.0;
      local_364._s_0.Y = 34.0;
      ::FString::FString(&local_230,L"Tick");
      `FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                (&local_2e8,&local_230,(TVector2<float> *)&local_364._s_0,&this->DrawTickColor);
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      local_35c = (TVector2<float>_u_0)0x4238000041200000;
      ::FString::FString(&local_220,L"Active Timer");
      `FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                (&local_2e8,&local_220,(TVector2<float> *)&local_35c._s_0,
                 &this->DrawActiveTimerColor);
      fVar37 = __real_42c00000;
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
        fVar37 = __real_42c00000;
      }
    }
    puVar1 = &(this->UpdatedWidgets).field_0x10;
    iStack_2c0 = 0;
    iVar4 = *(int *)&(this->UpdatedWidgets).field_0x28;
    local_2c8 = &this->UpdatedWidgets;
    iStack_2ac = iStack_2c0;
    local_2a8 = iStack_2c0;
    if (iVar4 != 0) {
      puVar27 = *(uint **)&(this->UpdatedWidgets).field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)puVar1;
      }
      uVar25 = *puVar27;
      local_2a8 = iVar28;
      iStack_2c0 = iVar28;
      while (uVar25 == 0) {
        lVar23 = (longlong)iStack_2c0;
        local_2a8 = local_2a8 + 0x20;
        iStack_2c0 = iStack_2c0 + 1;
        iStack_2ac = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2c0) goto LAB_14244329d;
        uVar25 = puVar27[lVar23 + 1];
      }
      uVar18 = -uVar25 & uVar25;
      uVar2 = (ulonglong)uVar18 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_298 = (int)lVar23;
      iStack_2ac = local_2a8 + -1 + local_298;
      if (iVar4 < iStack_2ac) {
        iStack_2ac = iVar4;
      }
    }
LAB_14244329d:
    uVar25 = *(uint *)&(this->UpdatedWidgets).field_0x28;
    iStack_2a0 = *(int *)&(this->UpdatedWidgets).field_0x8 -
                 *(int *)&(this->UpdatedWidgets).field_0x34;
    uVar29 = uVar25 & 0xffffffe0;
    TStack_278._padding_ = CONCAT44(uVar18,iStack_2c0);
    uStack_2b0 = 0xffffffff;
    TStack_278.CurrentBitIndex = iStack_2ac;
    TStack_278.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar25 >> 5;
    TStack_278._28_4_ = iStack_2ac;
    TStack_278.BaseBitIndex = local_2a8;
    uStack_258 = CONCAT44(uStack_29c,iStack_2a0);
    uStack_2bc = uVar18;
    local_2b8 = puVar1;
    iStack_2a4 = iStack_2ac;
    local_280 = local_2c8;
    TStack_278.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar25 < 0) || (iVar4 < (int)uVar25)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    afVar14 = _UNK_15076b188;
    afVar12 = ___xmm_3f80000000000000000000003f800000;
    fVar11 = __real_c1200000;
    fVar10 = __real_3f4ccccd;
    fVar9 = __real_41400000;
    _X = __real_40000000;
    fVar8 = __real_3f800000;
    uVar18 = *(uint *)&(this->UpdatedWidgets).field_0x28;
    if (uVar25 != uVar18) {
      puVar26 = *(undefined1 **)&(this->UpdatedWidgets).field_0x20;
      if (puVar26 == (undefined1 *)0x0) {
        puVar26 = puVar1;
      }
      uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar24 * 4);
      while (uVar25 == 0) {
        lVar23 = (longlong)iVar24;
        uVar29 = uVar29 + 0x20;
        iVar24 = iVar24 + 1;
        uVar25 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_1424433e0;
        uVar25 = *(uint *)(puVar26 + lVar23 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar25 = (int)lVar23 + -1 + uVar29;
      if ((int)uVar18 < (int)uVar25) {
        uVar25 = uVar18;
      }
    }
LAB_1424433e0:
    while( true ) {
      pTVar16 = local_280;
      if (*(int *)&local_280->field_0x8 - *(int *)&local_280->field_0x34 != (int)uStack_258) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_368);
      }
      afVar15 = _UNK_15076b188;
      afVar13 = ___xmm_3f80000000000000000000003f800000;
      lVar23 = (longlong)TStack_278.CurrentBitIndex;
      if (((TStack_278.CurrentBitIndex == uVar25) &&
          (TStack_278.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar16 == &this->UpdatedWidgets)) break;
      lVar6 = *(longlong *)pTVar16;
      if (*(longlong *)(lVar6 + 8 + lVar23 * 0x48) == local_340) {
        local_1e8 = *(undefined8 *)(lVar6 + 0x18 + lVar23 * 0x48);
        TVar7 = (TVector2<float>_u_0)
                *(TVector2<float>_u_0 *)
                 &((TVector2<float>_u_0 *)(lVar6 + 0x10 + lVar23 * 0x48))->_s_0;
        local_200.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
        ___xmm_3f80000000000000000000003f800000 = afVar12[0];
        _UNK_15076b184 = afVar12[1];
        local_200.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_200.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar14[0];
        _UNK_15076b18c = afVar14[1];
        local_200.M.M[1][0] = _UNK_15076b188;
        local_200.M.M[1][1] = _UNK_15076b18c;
        local_1e0 = 0x3f800000;
        local_1d8 = 0;
        local_1d4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        ___xmm_3f80000000000000000000003f800000 = afVar12[0];
        _UNK_15076b184 = afVar12[1];
        local_198.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_198.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar14[0];
        _UNK_15076b18c = afVar14[1];
        local_198.M.M[1][0] = _UNK_15076b188;
        local_198.M.M[1][1] = _UNK_15076b18c;
        fVar36 = (float)((double)CONCAT44(uVar31,uVar30) - *(double *)(lVar6 + 0x38 + lVar23 * 0x48)
                        ) / this->CacheDuration;
        if (fVar8 <= fVar36) {
          fVar36 = fVar8;
        }
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        ___xmm_3f80000000000000000000003f800000 = afVar13;
        _UNK_15076b188 = afVar15;
        local_198.Trans.field0_0x0 = TVar7;
        Concatenate<TTransform2<float>_>(&local_1cc,&local_198,&local_200);
        fVar33 = (this->DrawVolatilePaintColor).field0_0x0._s_0.R;
        fVar34 = (this->DrawVolatilePaintColor).field0_0x0._s_0.G;
        fVar35 = (this->DrawVolatilePaintColor).field0_0x0._s_0.B;
        local_318._s_0.A = (this->DrawVolatilePaintColor).field0_0x0._s_0.A;
        local_e4 = local_e4 & 0xfc;
        local_35c._s_0.X = TVar7._s_0.X;
        local_35c._s_0.Y = TVar7._s_0.Y;
        local_364._s_0.X = local_35c._s_0.X;
        local_110 = 0x3f800000;
        local_364._s_0.Y = local_35c._s_0.Y;
        local_104 = local_1e8;
        bVar3 = *(byte *)(lVar6 + 0x30 + lVar23 * 0x48);
        local_108 = 0;
        local_ec = local_1cc.Trans.field0_0x0;
        local_fc[0] = local_1cc.M.M[0][0];
        local_fc[1] = local_1cc.M.M[0][1];
        afStack_f4[0] = local_1cc.M.M[1][0];
        afStack_f4[1] = local_1cc.M.M[1][1];
        if ((bVar3 & 0x10) == 0) {
          if ((bVar3 & 0x40) == 0) {
            if ((bVar3 & 4) == 0) {
              if ((bVar3 & 8) != 0) {
                fVar33 = (this->DrawActiveTimerColor).field0_0x0._s_0.R;
                fVar34 = (this->DrawActiveTimerColor).field0_0x0._s_0.G;
                fVar35 = (this->DrawActiveTimerColor).field0_0x0._s_0.B;
                local_318._s_0.A = (this->DrawActiveTimerColor).field0_0x0._s_0.A;
              }
            }
            else {
              fVar33 = (this->DrawTickColor).field0_0x0._s_0.R;
              fVar34 = (this->DrawTickColor).field0_0x0._s_0.G;
              fVar35 = (this->DrawTickColor).field0_0x0._s_0.B;
              local_318._s_0.A = (this->DrawTickColor).field0_0x0._s_0.A;
            }
          }
        }
        else {
          fVar33 = (this->DrawRepaintColor).field0_0x0._s_0.R;
          fVar34 = (this->DrawRepaintColor).field0_0x0._s_0.G;
          fVar35 = (this->DrawRepaintColor).field0_0x0._s_0.B;
          local_318._s_0.A = (this->DrawRepaintColor).field0_0x0._s_0.A;
        }
        fVar32 = fVar8;
        local_35c = TVar7;
        local_318._s_0.R = fVar33;
        local_318._s_0.G = fVar34;
        local_318._s_0.B = fVar35;
        local_118 = TVar7;
        if (fVar36 != fVar8) {
          fVar36 = powf(_X,fVar36 * fVar11);
          fVar32 = fVar8 - fVar36;
        }
        local_2f8._s_0.A = fVar8 - fVar32 * fVar10;
        local_2f8._s_0.R = fVar33;
        local_2f8._s_0.G = fVar34;
        local_2f8._s_0.B = fVar35;
        if (this->bShowQuad != false) {
          local_308._s_0.R = fVar33;
          local_308._s_0.G = fVar34;
          local_308._s_0.B = fVar35;
          local_308._s_0.A = local_2f8._s_0.A;
          FSlateDrawElement::MakeDebugQuad
                    (local_330,*local_338,(FPaintGeometry *)&local_118._s_0,
                     (FLinearColor *)&local_308._s_0);
        }
        FSlateDrawElement::MakeBox
                  (local_330,*local_338,(FPaintGeometry *)&local_118._s_0,local_290,None,
                   (FLinearColor *)&local_2f8._s_0);
        if ((this->bDisplayWidgetsNameList != false) && (iVar28 < this->MaxNumberOfWidgetInList)) {
          local_328._s_0.X = 0.0;
          local_328._s_0.Y = (float)iVar28 * fVar9 + fVar37;
          `FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                    (&local_2e8,(FString *)(lVar6 + 0x20 + lVar23 * 0x48),
                     (TVector2<float> *)&local_328._s_0,(FLinearColor *)&local_318._s_0);
        }
        uVar30 = (undefined4)local_288;
        uVar31 = (undefined4)((ulonglong)local_288 >> 0x20);
        iVar28 = iVar28 + 1;
      }
      TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
    }
    if ((this->bDisplayWidgetsNameList != false) && (this->MaxNumberOfWidgetInList < iVar28)) {
      ::FString::PrintfImpl(&local_210,L"   %d more updates");
      local_320._s_0.X = 0.0;
      local_320._s_0.Y = (float)iVar28 * fVar9 + fVar37;
      `FConsoleSlateDebuggerUpdate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                (&local_2e8,&local_210,(TVector2<float> *)&local_320._s_0,&FLinearColor::White);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  }
  return;
}

// HandleSetWidgetUpdateFlagsFilter @ 142443d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142443f08) */
/* WARNING: Removing unreachable block (ram,0x000142443ea1) */
/* WARNING: Removing unreachable block (ram,0x000142443f6b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerUpdate::HandleSetWidgetUpdateFlagsFilter
          (FConsoleSlateDebuggerUpdate *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  EWidgetUpdateFlags EVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    local_158.Base = local_138;
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    local_158.CurPos = local_138;
    local_158.End = (wchar_t *)local_38;
    pvVar4 = FGenericPlatformString::Memcpy(local_138,L"Current Widget Update Flags set: ",0x42);
    local_158.CurPos = (wchar_t *)((longlong)pvVar4 + 0x42);
    if ((this->WidgetUpdateFlagsFilter & NeedsTick) != None) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_158,L"|",1);
      if (local_158.End < local_158.CurPos + 4) {
        TStringBuilderBase<wchar_t>::Extend(&local_158,4);
      }
      pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,L"Tick",8);
      local_158.CurPos = (wchar_t *)((longlong)pvVar4 + 8);
      if ((this->WidgetUpdateFlagsFilter & NeedsTick) != None) {
        if (local_158.End < (wchar_t *)((longlong)pvVar4 + 0x1eU)) {
          TStringBuilderBase<wchar_t>::Extend(&local_158,0xb);
        }
        pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,L"ActiveTimer",0x16);
        local_158.CurPos = (wchar_t *)((longlong)pvVar4 + 0x16);
        if ((this->WidgetUpdateFlagsFilter & NeedsTick) != None) {
          if (local_158.End < (wchar_t *)((longlong)pvVar4 + 0x24U)) {
            TStringBuilderBase<wchar_t>::Extend(&local_158,7);
          }
          pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,L"Repaint",0xe);
          local_158.CurPos = (wchar_t *)((longlong)pvVar4 + 0xe);
          if ((this->WidgetUpdateFlagsFilter & NeedsTick) != None) {
            if (local_158.End < (wchar_t *)((longlong)pvVar4 + 0x28U)) {
              TStringBuilderBase<wchar_t>::Extend(&local_158,0xd);
            }
            pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,L"VolatilePaint",0x1a);
            local_158.CurPos = (wchar_t *)((longlong)pvVar4 + 0x1a);
          }
        }
      }
    }
    if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    pFVar6 = (param_1->AllocatorInstance).Data;
    EVar7 = None;
    bVar2 = false;
    pFVar8 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_168);
      }
      if (pFVar6 == pFVar8) break;
      if (*(int *)(pFVar6 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar6;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Tick");
      if (iVar3 == 0) {
        EVar7 = EVar7 | NeedsTick;
        bVar2 = true;
        pFVar6 = pFVar6 + 0x10;
      }
      else {
        if (*(int *)(pFVar6 + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)pFVar6;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"ActiveTimer");
        if (iVar3 == 0) {
          EVar7 = EVar7 | NeedsActiveTimerUpdate;
          bVar2 = true;
          pFVar6 = pFVar6 + 0x10;
        }
        else {
          if (*(int *)(pFVar6 + 8) == 0) {
            pwVar5 = L"";
          }
          else {
            pwVar5 = *(wchar_t **)pFVar6;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Repaint");
          if (iVar3 == 0) {
            EVar7 = EVar7 | NeedsRepaint;
            bVar2 = true;
            pFVar6 = pFVar6 + 0x10;
          }
          else {
            if (*(int *)(pFVar6 + 8) == 0) {
              pwVar5 = L"";
            }
            else {
              pwVar5 = *(wchar_t **)pFVar6;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"VolatilePaint");
            if (iVar3 == 0) {
              EVar7 = EVar7 | NeedsVolatilePaint;
              bVar2 = true;
              pFVar6 = pFVar6 + 0x10;
            }
            else {
              if (*(int *)(pFVar6 + 8) == 0) {
                pwVar5 = L"";
              }
              else {
                pwVar5 = *(wchar_t **)pFVar6;
              }
              iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Any");
              if (iVar3 == 0) {
                EVar7 = AnyUpdate;
                bVar2 = true;
                pFVar6 = pFVar6 + 0x10;
              }
              else {
                if (*(int *)(pFVar6 + 8) == 0) {
                  pwVar5 = L"";
                }
                else {
                  pwVar5 = *(wchar_t **)pFVar6;
                }
                iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"None");
                if (iVar3 == 0) {
                  EVar7 = None;
                  bVar2 = true;
                  pFVar6 = pFVar6 + 0x10;
                }
                else {
                  bVar2 = false;
                  if (2 < (byte)LogSlateDebugger._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
                  }
                  pFVar6 = pFVar6 + 0x10;
                }
              }
            }
          }
        }
      }
    }
    if (bVar2) {
      this->WidgetUpdateFlagsFilter = EVar7;
      SaveConfig(this);
    }
    else if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
  }
  return;
}

// HandleWidgetUpdate @ 142444640

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerUpdate::HandleWidgetUpdate
          (FConsoleSlateDebuggerUpdate *this,FSlateDebuggingWidgetUpdatedEventArgs *param_1)

{
  longlong lVar1;
  EWidgetUpdateFlags EVar2;
  SWidget *pSVar3;
  FDeprecateSlateVector2D FVar4;
  char cVar5;
  EWidgetUpdateFlags EVar6;
  int iVar7;
  FSlateApplicationBase *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 local_res10 [8];
  FWidgetInfo *local_res18;
  FWidgetInfo **local_68;
  FWidgetInfo *local_60;
  undefined8 local_58;
  FWidgetInfo local_50;
  
  pSVar3 = param_1->Widget;
  if (pSVar3 != (SWidget *)0x0) {
    local_res18 = (FWidgetInfo *)pSVar3->UniqueIdentifier;
    EVar2 = param_1->UpdateFlags;
    cVar5 = (**(code **)(pSVar3->_padding_ + 0x210))();
    EVar6 = EVar2 & ~NeedsVolatilePaint;
    if (cVar5 == '\0') {
      EVar6 = EVar2;
    }
    if ((param_1->bFromPaint != false) && (this->bDisplayUpdateFromPaint != false)) {
      EVar6 = EVar6 | NeedsRepaint;
    }
    if (((this->WidgetUpdateFlagsFilter & EVar6) != None) &&
       ((this->InvalidationRootIdFilter < 0 ||
        (pSVar3 = param_1->Widget,
        local_58._0_2_ = (pSVar3->FastPathProxyHandle).WidgetIndex.ArrayIndex,
        local_58._2_2_ = (pSVar3->FastPathProxyHandle).WidgetIndex.ElementIndex,
        local_58._4_4_ = (pSVar3->FastPathProxyHandle).WidgetSortOrder,
        (pSVar3->FastPathProxyHandle).InvalidationRootHandle.UniqueId ==
        this->InvalidationRootIdFilter)))) {
      if (*(int *)&(this->UpdatedWidgets).field_0x8 != *(int *)&(this->UpdatedWidgets).field_0x34) {
        puVar10 = *(undefined1 **)&(this->UpdatedWidgets).field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->UpdatedWidgets).field_0x38;
        }
        iVar7 = *(int *)(puVar10 +
                        ((longlong)&local_res18->WindowId + ((ulonglong)local_res18 >> 0x20) * 0x17
                        & (ulonglong)(*(int *)&(this->UpdatedWidgets).field_0x48 - 1)) * 4);
        if (iVar7 != -1) {
          do {
            lVar1 = *(longlong *)&this->UpdatedWidgets + (longlong)iVar7 * 0x48;
            if (*(FWidgetInfo **)(*(longlong *)&this->UpdatedWidgets + (longlong)iVar7 * 0x48) ==
                local_res18) {
              lVar9 = lVar1 + 8;
              if (lVar1 == 0) {
                lVar9 = 0;
              }
              if (lVar9 != 0) {
                pSVar3 = param_1->Widget;
                *(EWidgetUpdateFlags *)(lVar9 + 0x28) = param_1->UpdateFlags;
                pFVar8 = FSlateApplicationBase::Get();
                uVar11 = (**(code **)(*(longlong *)pFVar8 + 0x60))(pFVar8);
                *(undefined8 *)(lVar9 + 0x30) = uVar11;
                local_res10._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
                local_res10._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
                fVar12 = (float)local_res10._4_4_ *
                         (pSVar3->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M
                         [1][0];
                local_res10._4_4_ =
                     (float)local_res10._4_4_ *
                     *(float *)((longlong)
                                ((pSVar3->PersistentState).AllottedGeometry.
                                 AccumulatedRenderTransform.M.M + 1) + 4) +
                     (float)local_res10._0_4_ *
                     *(float *)((longlong)
                                (pSVar3->PersistentState).AllottedGeometry.
                                AccumulatedRenderTransform.M.M[0] + 4) +
                     (pSVar3->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                     field0_0x0._s_0.Y;
                local_res10._0_4_ =
                     fVar12 + (float)local_res10._0_4_ *
                              (pSVar3->PersistentState).AllottedGeometry.AccumulatedRenderTransform.
                              M.M[0][0] +
                     (pSVar3->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                     field0_0x0._s_0.X;
                *(undefined1 (*) [8])(lVar9 + 8) = local_res10;
                FVar4 = (pSVar3->PersistentState).AllottedGeometry.Size;
                local_res10._4_4_ = FVar4._4_4_;
                local_res10._0_4_ = FVar4._0_4_;
                fVar12 = (float)local_res10._4_4_ *
                         (pSVar3->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M
                         [1][0];
                local_res10._4_4_ =
                     (float)local_res10._0_4_ *
                     *(float *)((longlong)
                                (pSVar3->PersistentState).AllottedGeometry.
                                AccumulatedRenderTransform.M.M[0] + 4) +
                     (float)local_res10._4_4_ *
                     *(float *)((longlong)
                                ((pSVar3->PersistentState).AllottedGeometry.
                                 AccumulatedRenderTransform.M.M + 1) + 4);
                local_res10._0_4_ =
                     fVar12 + (float)local_res10._0_4_ *
                              (pSVar3->PersistentState).AllottedGeometry.AccumulatedRenderTransform.
                              M.M[0][0];
                *(undefined1 (*) [8])(lVar9 + 0x10) = local_res10;
                return;
              }
              break;
            }
            iVar7 = *(int *)(lVar1 + 0x40);
          } while (iVar7 != -1);
        }
      }
      local_68 = &local_res18;
      local_60 = FWidgetInfo::FWidgetInfo(&local_50,param_1->Widget,param_1->UpdateFlags);
      TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,FConsoleSlateDebuggerUpdate::FWidgetInfo_&&>_>
                ((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
                  *)&this->UpdatedWidgets,
                 (TPairInitializer<unsigned___int64_const_&,FConsoleSlateDebuggerUpdate::FWidgetInfo_&&>
                  *)local_res10,(bool *)&local_68);
      if (local_50.WidgetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.WidgetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SaveConfig @ 142451c80

void __thiscall FConsoleSlateDebuggerUpdate::SaveConfig(FConsoleSlateDebuggerUpdate *this)

{
  EWidgetUpdateFlags EVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FColor local_res8;
  FColor local_res10;
  FString local_28;
  
  pwVar3 = L"";
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Update",L"bDisplayWidgetsNameList",
             this->bDisplayWidgetsNameList,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Update",L"bUseWidgetPathAsName",this->bUseWidgetPathAsName,
             &local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Update",L"bDisplayUpdateFromPaint",
             this->bDisplayUpdateFromPaint,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar1 = this->WidgetUpdateFlagsFilter;
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetInt
            (GConfig,L"SlateDebugger.Update",L"WidgetUpdateFlagsFilter",(uint)EVar1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawVolatilePaintColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Update",L"DrawVolatilePaintColor",local_res8,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawRepaintColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Update",L"DrawRepaintColor",local_res10,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawTickColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetColor(GConfig,L"SlateDebugger.Update",L"DrawTickColor",local_res10,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawActiveTimerColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Update",L"DrawActiveTimerColor",local_res10,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetNameColor);
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Update",L"DrawWidgetNameColor",local_res10,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar2);
  FConfigCacheIni::SetInt
            (GConfig,L"SlateDebugger.Update",L"MaxNumberOfWidgetInList",
             this->MaxNumberOfWidgetInList,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar3);
  FConfigCacheIni::SetFloat
            (GConfig,L"SlateDebugger.Update",L"CacheDuration",this->CacheDuration,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// StartDebugging @ 1424527f0

void __thiscall FConsoleSlateDebuggerUpdate::StartDebugging(FConsoleSlateDebuggerUpdate *this)

{
  undefined1 *puVar1;
  TMap<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (this->bEnabled != false) {
    this->bEnabledCVarValue = this->bEnabled;
    return;
  }
  this_00 = &this->UpdatedWidgets;
  this->bEnabled = true;
  bVar3 = 1 < *(int *)&(this->UpdatedWidgets).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->UpdatedWidgets).field_0x8);
  puVar1 = &(this->UpdatedWidgets).field_0xc;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->UpdatedWidgets).field_0x34 = 0;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->UpdatedWidgets).field_0x2c;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->UpdatedWidgets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->UpdatedWidgets).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->UpdatedWidgets).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerUpdate>
            ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::PaintDebugElements,(FConsoleSlateDebuggerUpdate *)&stack0x00000008
             ,(pmf_636b54c0)this);
  TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerUpdate>
            ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::WidgetUpdatedEvent,(FConsoleSlateDebuggerUpdate *)&stack0x00000008
             ,(pmf_0701aed5)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FConsoleSlateDebuggerUpdate>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(FConsoleSlateDebuggerUpdate *)&stack0x00000008,
             (pmf_807c9924)this);
  this->bEnabledCVarValue = this->bEnabled;
  return;
}

// StopDebugging @ 142452e40

void __thiscall FConsoleSlateDebuggerUpdate::StopDebugging(FConsoleSlateDebuggerUpdate *this)

{
  undefined1 *puVar1;
  TMap<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (this->bEnabled == false) {
    this->bEnabledCVarValue = false;
    return;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,this)
  ;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::WidgetUpdatedEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  this_00 = &this->UpdatedWidgets;
  bVar3 = 1 < *(int *)&(this->UpdatedWidgets).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->UpdatedWidgets).field_0x8);
  puVar1 = &(this->UpdatedWidgets).field_0xc;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->UpdatedWidgets).field_0x34 = 0;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->UpdatedWidgets).field_0x2c;
  *(undefined4 *)&(this->UpdatedWidgets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->UpdatedWidgets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->UpdatedWidgets).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->UpdatedWidgets).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FConsoleSlateDebuggerUpdate::FWidgetInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->bEnabled = false;
  this->bEnabledCVarValue = false;
  return;
}

// ToggleDisplayLegend @ 142454a10

void __thiscall FConsoleSlateDebuggerUpdate::ToggleDisplayLegend(FConsoleSlateDebuggerUpdate *this)

{
  this->bShowLegend = this->bShowLegend == false;
  SaveConfig(this);
  return;
}

// ToogleDisplayUpdateFromPaint @ 142454aa0

void __thiscall
FConsoleSlateDebuggerUpdate::ToogleDisplayUpdateFromPaint(FConsoleSlateDebuggerUpdate *this)

{
  this->bDisplayUpdateFromPaint = this->bDisplayUpdateFromPaint == false;
  SaveConfig(this);
  return;
}

// ToogleDisplayWidgetNameList @ 142454ac0

void __thiscall
FConsoleSlateDebuggerUpdate::ToogleDisplayWidgetNameList(FConsoleSlateDebuggerUpdate *this)

{
  this->bDisplayWidgetsNameList = this->bDisplayWidgetsNameList == false;
  SaveConfig(this);
  return;
}

