// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 18

// FConsoleSlateDebuggerInvalidate @ 142428ba0

FConsoleSlateDebuggerInvalidate * __thiscall
FConsoleSlateDebuggerInvalidate::FConsoleSlateDebuggerInvalidate
          (FConsoleSlateDebuggerInvalidate *this)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this->bEnabled = false;
  this->bEnabledCVarValue = false;
  this->bShowWidgetList = true;
  this->bUseWidgetPathAsName = false;
  this->bShowLegend = false;
  this->bLogInvalidatedWidget = false;
  this->bUsePerformanceThreshold = false;
  this->InvalidateWidgetReasonFilter =
       Prepass|AttributeRegistration|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|Layout
  ;
  this->InvalidateRootReasonFilter = 0xff;
  fVar1 = __real_3b808081;
  (this->DrawRootRootColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.R];
  (this->DrawRootRootColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.G];
  (this->DrawRootRootColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Red.field0_0x0._s_0.B];
  (this->DrawRootRootColor).field0_0x0._s_0.A = (float)FColorList::Red.field0_0x0._3_1_ * fVar1;
  (this->DrawRootChildOrderColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.R];
  (this->DrawRootChildOrderColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.G];
  (this->DrawRootChildOrderColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Blue.field0_0x0._s_0.B];
  (this->DrawRootChildOrderColor).field0_0x0._s_0.A =
       (float)FColorList::Blue.field0_0x0._3_1_ * fVar1;
  (this->DrawRootScreenPositionColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.R];
  (this->DrawRootScreenPositionColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.G];
  (this->DrawRootScreenPositionColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.B];
  (this->DrawRootScreenPositionColor).field0_0x0._s_0.A =
       (float)FColorList::Green.field0_0x0._3_1_ * fVar1;
  (this->DrawWidgetPrepassColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.R];
  (this->DrawWidgetPrepassColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.G];
  (this->DrawWidgetPrepassColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.B];
  (this->DrawWidgetPrepassColor).field0_0x0._s_0.A =
       (float)FColorList::Orange.field0_0x0._3_1_ * fVar1;
  (this->DrawWidgetLayoutColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Magenta.field0_0x0._s_0.R];
  (this->DrawWidgetLayoutColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Magenta.field0_0x0._s_0.G];
  (this->DrawWidgetLayoutColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Magenta.field0_0x0._s_0.B];
  (this->DrawWidgetLayoutColor).field0_0x0._s_0.A =
       (float)FColorList::Magenta.field0_0x0._3_1_ * fVar1;
  (this->DrawWidgetPaintColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.R];
  (this->DrawWidgetPaintColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.G];
  (this->DrawWidgetPaintColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Yellow.field0_0x0._s_0.B];
  (this->DrawWidgetPaintColor).field0_0x0._s_0.A =
       (float)FColorList::Yellow.field0_0x0._3_1_ * fVar1;
  (this->DrawWidgetVolatilityColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Grey.field0_0x0._s_0.R];
  (this->DrawWidgetVolatilityColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Grey.field0_0x0._s_0.G];
  (this->DrawWidgetVolatilityColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Grey.field0_0x0._s_0.B];
  (this->DrawWidgetVolatilityColor).field0_0x0._s_0.A =
       (float)FColorList::Grey.field0_0x0._3_1_ * fVar1;
  (this->DrawWidgetChildOrderColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Cyan.field0_0x0._s_0.R];
  (this->DrawWidgetChildOrderColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Cyan.field0_0x0._s_0.G];
  (this->DrawWidgetChildOrderColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Cyan.field0_0x0._s_0.B];
  (this->DrawWidgetChildOrderColor).field0_0x0._s_0.A =
       (float)FColorList::Cyan.field0_0x0._3_1_ * fVar1;
  (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Black.field0_0x0._s_0.R];
  (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Black.field0_0x0._s_0.G];
  (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Black.field0_0x0._s_0.B];
  (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.A =
       (float)FColorList::Black.field0_0x0._3_1_ * fVar1;
  (this->DrawWidgetVisibilityColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::White.field0_0x0._s_0.R];
  (this->DrawWidgetVisibilityColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::White.field0_0x0._s_0.G];
  (this->DrawWidgetVisibilityColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::White.field0_0x0._s_0.B];
  uVar2 = (uint)FColorList::White.field0_0x0._s_0.A;
  this->MaxNumberOfWidgetInList = 0x14;
  this->CacheDuration = 2.0;
  this->ThresholdPerformanceMs = 1.5;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  (this->DrawWidgetVisibilityColor).field0_0x0._s_0.A = (float)uVar2 * fVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = StartDebugging;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StartCommand,L"SlateDebugger.Invalidate.Start",
             L"Start the Invalidation widget debug tool. It shows widgets that are invalidated.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = StopDebugging;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StopCommand,L"SlateDebugger.Invalidate.Stop",
             L"Stop the Invalidation widget debug tool.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = HandleEnabled;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnabledRefCVar,L"SlateDebugger.Invalidate.Enabled",&this->bEnabledCVarValue,
             L"Start/Stop the Invalidation widget debug tool. It shows widgets that are invalidated."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = HandledConfigChanged;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->ShowLegendRefCVar,L"SlateDebugger.Invalidate.bShowLegend",&this->bShowLegend,
             L"Option to display the color legend.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = HandledConfigChanged;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->ShowWidgetsNameListRefCVar,L"SlateDebugger.Invalidate.bShowWidgetList",
             &this->bShowWidgetList,L"Option to display the names of invalidated widgets.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = HandledConfigChanged;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->LogInvalidatedWidgetRefCVar,L"SlateDebugger.Invalidate.bLogInvalidatedWidget",
             &this->bLogInvalidatedWidget,L"Option to log the invalidated widget to the console.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    puVar3[4] = HandledConfigChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->UsePerformanceThresholdRefCVar,
             L"SlateDebugger.Invalidate.bUsePerformanceThreshold",&this->bUsePerformanceThreshold,
             L"Only display the invalidated widgets and/or log them if the performance are worst than the threshold (in millisecond)."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    puVar3[4] = HandledConfigChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->ThresholdPerformanceRefCVar,L"SlateDebugger.Invalidate.ThresholdPerformanceMS",
             &this->ThresholdPerformanceMs,
             L"For bUsePerformanceThreshold, threshold in milliseconds to reach before logging and/or displaying the invalidated widgets."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = HandleSetInvalidateWidgetReasonFilter;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->SetInvalidateWidgetReasonFilterCommand,
             L"SlateDebugger.Invalidate.SetInvalidateWidgetReasonFilter",
             L"Enable Invalidate Widget Reason filters. Usage: SetInvalidateWidgetReasonFilter None|Layout|Paint|Volatility|ChildOrder|RenderTransform|Visibility|Any"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = HandleSetInvalidateRootReasonFilter;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->SetInvalidateRootReasonFilterCommand,
             L"SlateDebugger.Invalidate.SetInvalidateRootReasonFilter",
             L"Enable Invalidate Root Reason filters. Usage: SetInvalidateRootReasonFilter None|ChildOrder|Root|ScreenPosition|Any"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  this->LastPerformanceThresholdFrameCount = 0;
  this->LastPerformanceThresholdSeconds = 0.0;
  (this->InvalidationInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidationInfos).ArrayNum = 0;
  (this->InvalidationInfos).ArrayMax = 0;
  (this->FrameInvalidationInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameInvalidationInfos).ArrayNum = 0;
  (this->FrameInvalidationInfos).ArrayMax = 0;
  (this->FrameRootHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameRootHandles).ArrayNum = 0;
  (this->FrameRootHandles).ArrayMax = 0;
  LoadConfig(this);
  return this;
}

// ~FConsoleSlateDebuggerInvalidate @ 14242e7c0

void __thiscall
FConsoleSlateDebuggerInvalidate::~FConsoleSlateDebuggerInvalidate
          (FConsoleSlateDebuggerInvalidate *this)

{
  FScriptContainerElement *pFVar1;
  
  StopDebugging(this);
  pFVar1 = (this->FrameRootHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
            ((FInvalidationInfo *)(this->FrameInvalidationInfos).AllocatorInstance.Data,
             (this->FrameInvalidationInfos).ArrayNum);
  pFVar1 = (this->FrameInvalidationInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
            ((FInvalidationInfo *)(this->InvalidationInfos).AllocatorInstance.Data,
             (this->InvalidationInfos).ArrayNum);
  pFVar1 = (this->InvalidationInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->SetInvalidateRootReasonFilterCommand);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->SetInvalidateWidgetReasonFilterCommand);
  *(undefined ***)&(this->ThresholdPerformanceRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ThresholdPerformanceRefCVar);
  *(undefined ***)&(this->UsePerformanceThresholdRefCVar).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->UsePerformanceThresholdRefCVar);
  *(undefined ***)&(this->LogInvalidatedWidgetRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->LogInvalidatedWidgetRefCVar);
  *(undefined ***)&(this->ShowWidgetsNameListRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ShowWidgetsNameListRefCVar);
  *(undefined ***)&(this->ShowLegendRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ShowLegendRefCVar);
  *(undefined ***)&(this->EnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnabledRefCVar);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StopCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StartCommand);
  return;
}

// operator() @ 14242f8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FLinearColor *param_2)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  FSlateFontInfo *pFVar4;
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
  lVar3 = *(longlong *)((longlong)this + 0x10);
  pFVar4 = *(FSlateFontInfo **)((longlong)this + 0x20);
  local_b0.Trans.field0_0x0 =
       (TVector2<float>_u_0)
       *(TVector2<float>_u_0 *)&(*(TVector2<float>_u_0 **)((longlong)this + 0x18))->_s_0;
  fVar1 = *(float *)(lVar3 + 8);
  bVar2 = *(byte *)(lVar3 + 0x34);
  local_c8 = local_b0.Trans.field0_0x0._0_4_;
  local_b0.M.M[0][1] = (float)*(undefined8 *)(lVar3 + 0xc);
  local_b0.M.M[1][0] = (float)((ulonglong)*(undefined8 *)(lVar3 + 0xc) >> 0x20);
  fStack_c4 = local_b0.Trans.field0_0x0._4_4_;
  fVar5 = fVar1 * local_c8 + local_b0.M.M[0][1];
  fVar6 = fVar1 * fStack_c4 + local_b0.M.M[1][0];
  local_b0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_b0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_b0.M.M[1][0] = (float)_UNK_15076b188;
  local_b0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_98,&local_b0,(TTransform2<float> *)(lVar3 + 0x1c));
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
             (FPaintGeometry *)&local_80._s_0,param_1,pFVar4,None,param_2);
  *(float *)(*(longlong *)((longlong)this + 0x18) + 4) =
       *(float *)(*(longlong *)((longlong)this + 0x18) + 4) + __real_41400000;
  return;
}

// CleanFrameList @ 142435eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerInvalidate::CleanFrameList(FConsoleSlateDebuggerInvalidate *this)

{
  int *piVar1;
  TArray<FSlateInvalidationRootHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  SWidget *pSVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  ulong64 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  FSlateApplicationBase *pFVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStackY_1108 [32];
  FString local_10b8;
  FString local_10a8;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  double local_1078;
  uchar local_1068 [2];
  ulong64 local_1066;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1108;
  bVar12 = false;
  bVar11 = false;
  if (this->bUsePerformanceThreshold != false) {
    bVar9 = true;
    uVar22 = (this->FrameRootHandles).ArrayNum - 1;
    dVar8 = (double)this->ThresholdPerformanceMs * __real_3f50624dd2f1a9fc;
    if (-1 < (int)uVar22) {
      pTVar2 = &this->FrameRootHandles;
      lVar21 = (longlong)(int)uVar22 << 4;
      do {
        uVar20 = ~uVar22 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar22 < (this->FrameRootHandles).ArrayNum) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        uVar16 = *(uint *)(pFVar4 + lVar21 + 8);
        lVar10 = *(longlong *)(pFVar4 + lVar21);
        if ((uVar16 != 0xffffffff) &&
           (GSlateInvalidationRootListInstance.InvalidationRoots._8_4_ !=
            GSlateInvalidationRootListInstance.InvalidationRoots._52_4_)) {
          lVar19 = 0x154ba6198;
          if (GSlateInvalidationRootListInstance.InvalidationRoots._64_8_ != 0) {
            lVar19 = GSlateInvalidationRootListInstance.InvalidationRoots._64_8_;
          }
          iVar15 = *(int *)(lVar19 + (ulonglong)
                                     (GSlateInvalidationRootListInstance.InvalidationRoots._72_4_ -
                                      1 & uVar16) * 4);
          while (iVar15 != -1) {
            lVar19 = GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ +
                     (longlong)iVar15 * 0x18;
            if (*(uint *)(GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ +
                         (longlong)iVar15 * 0x18) == uVar16) {
              plVar17 = (longlong *)(lVar19 + 8);
              if (lVar19 == 0) {
                plVar17 = (longlong *)0x0;
              }
              if ((plVar17 != (longlong *)0x0) && (*plVar17 != 0)) {
                local_1098 = *(undefined8 *)(lVar10 + 0x88);
                uStack_1090 = *(undefined8 *)(lVar10 + 0x90);
                local_1088 = *(undefined8 *)(lVar10 + 0x98);
                uStack_1080 = *(undefined8 *)(lVar10 + 0xa0);
                local_1078 = *(double *)(lVar10 + 0xa8);
                if (local_1078 < dVar8) {
                  uVar16 = 0;
                  if ((int)uVar22 < (this->FrameRootHandles).ArrayNum) {
                    uVar16 = uVar20;
                  }
                  if ((uVar16 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  goto LAB_142436099;
                }
                if (bVar9) {
                  if (4 < (byte)LogSlateDebugger._0_1_) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
                  }
                  if ((-1 < SlateChannel->Enabled) && (-1 < BookmarkChannel->Enabled)) {
                    if (__BookmarkPoint560 == false) {
                      FMiscTrace::OutputBookmarkSpec
                                (&__BookmarkPoint560,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerInvalidate.cpp"
                                 ,0x230,L"Slate Performance Threshold %llu");
                      __BookmarkPoint560 = true;
                    }
                    uVar13 = GFrameCounter;
                    uVar16 = CallstackTrace_GetCurrentId();
                    local_1068[0] = '\x01';
                    local_1068[1] = 'H';
                    local_1066 = uVar13;
                    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint560,uVar16,10,local_1068);
                  }
                  this->LastPerformanceThresholdFrameCount = GFrameCounter;
                  pFVar18 = FSlateApplicationBase::Get();
                  dVar7 = (double)(**(code **)(*(longlong *)pFVar18 + 0x60))(pFVar18);
                  this->LastPerformanceThresholdSeconds = dVar7;
                }
                if (((this->bLogInvalidatedWidget != false) &&
                    (pSVar5 = *(SWidget **)(lVar10 + 0x50), pSVar5 != (SWidget *)0x0)) &&
                   (local_1078 = *(double *)(lVar10 + 0xa8), 4 < (byte)LogSlateDebugger._0_1_)) {
                  if (this->bUseWidgetPathAsName == false) {
                    bVar11 = true;
                    FReflectionMetaData::GetWidgetDebugInfo(&local_10b8,pSVar5);
                  }
                  else {
                    bVar12 = true;
                    FReflectionMetaData::GetWidgetPath(&local_10a8,pSVar5,true,false);
                  }
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
                  if ((bVar11) &&
                     (bVar11 = false,
                     local_10b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_10b8.Data.AllocatorInstance.Data);
                  }
                  if ((bVar12) &&
                     (bVar12 = false,
                     local_10a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_10a8.Data.AllocatorInstance.Data);
                  }
                }
                bVar9 = false;
                goto LAB_1424360eb;
              }
              break;
            }
            iVar15 = *(int *)(lVar19 + 0x10);
          }
        }
        uVar16 = 0;
        if ((int)uVar22 < (this->FrameRootHandles).ArrayNum) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_142436099:
        iVar3 = (this->FrameRootHandles).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar15 = ~uVar22 + iVar3;
        if (1 < iVar15) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          memmove(pFVar4 + lVar21,pFVar4 + (longlong)(iVar3 - iVar15) * 0x10,(longlong)iVar15 << 4);
        }
        piVar1 = &(this->FrameRootHandles).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar2->AllocatorInstance,(this->FrameRootHandles).ArrayNum,
                   &(this->FrameRootHandles).ArrayMax);
LAB_1424360eb:
        lVar21 = lVar21 + -0x10;
        uVar22 = uVar22 - 1;
      } while (-1 < (int)uVar22);
    }
  }
  return;
}

// GetColor @ 14243e8f0

FLinearColor * __thiscall
FConsoleSlateDebuggerInvalidate::GetColor
          (FConsoleSlateDebuggerInvalidate *this,FInvalidationInfo *param_1)

{
  EInvalidateWidgetReason EVar1;
  ESlateDebuggingInvalidateRootReason EVar2;
  code *pcVar3;
  bool bVar4;
  FLinearColor *pFVar5;
  
  EVar2 = param_1->InvalidationRootReason;
  if ((EVar2 & Root) != None) {
    return &this->DrawRootRootColor;
  }
  if ((EVar2 & ChildOrder) != None) {
    return &this->DrawRootChildOrderColor;
  }
  if ((EVar2 & ScreenPosition) != None) {
    return &this->DrawRootScreenPositionColor;
  }
  EVar1 = param_1->WidgetReason;
  if ((EVar1 & ChildOrder) != None) {
    return &this->DrawWidgetChildOrderColor;
  }
  if ((char)EVar1 < '\0') {
    return &this->DrawWidgetPrepassColor;
  }
  if ((EVar1 & Layout) != None) {
    return &this->DrawWidgetLayoutColor;
  }
  if ((EVar1 & RenderTransform) != None) {
    return &this->DrawWidgetRenderTransformColor;
  }
  if ((EVar1 & Visibility) != None) {
    return &this->DrawWidgetVisibilityColor;
  }
  if ((EVar1 & Volatility) != None) {
    return &this->DrawWidgetVolatilityColor;
  }
  if ((EVar1 & Paint) != None) {
    return &this->DrawWidgetPaintColor;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerInvalidate.cpp"
                     ,0x16b,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FLinearColor *)(*pcVar3)();
    return pFVar5;
  }
  return &FLinearColor::Black;
}

// GetInvalidationPriority @ 14243ee90

int __thiscall
FConsoleSlateDebuggerInvalidate::GetInvalidationPriority
          (FConsoleSlateDebuggerInvalidate *this,EInvalidateWidgetReason param_1,
          ESlateDebuggingInvalidateRootReason param_2)

{
  EInvalidateWidgetReason EVar1;
  ESlateDebuggingInvalidateRootReason EVar2;
  
  EVar2 = param_2 & this->InvalidateRootReasonFilter;
  if ((EVar2 & Root) != None) {
    return 100;
  }
  if ((EVar2 & ChildOrder) != None) {
    return 0x50;
  }
  if ((EVar2 & ScreenPosition) != None) {
    return 0x32;
  }
  EVar1 = this->InvalidateWidgetReasonFilter & param_1;
  if ((EVar1 & ChildOrder) != None) {
    return 0x2d;
  }
  if ((char)EVar1 < '\0') {
    return 0x28;
  }
  if ((EVar1 & Layout) != None) {
    return 0x23;
  }
  if ((EVar1 & (Visibility|RenderTransform)) != None) {
    return 0x1e;
  }
  if ((EVar1 & Volatility) != None) {
    return 0x19;
  }
  return ((uint)param_1 - (uint)param_1) - (uint)((EVar1 & Paint) != None) & 0x14;
}

// HandleEnabled @ 1424400a0

void __thiscall
FConsoleSlateDebuggerInvalidate::HandleEnabled
          (FConsoleSlateDebuggerInvalidate *this,IConsoleVariable *param_1)

{
  int *piVar1;
  
  if (this->bEnabledCVarValue == false) {
    StopDebugging(this);
    return;
  }
  if (this->bEnabled == false) {
    this->bEnabled = true;
    DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
              ((FInvalidationInfo *)(this->InvalidationInfos).AllocatorInstance.Data,
               (this->InvalidationInfos).ArrayNum);
    piVar1 = &(this->InvalidationInfos).ArrayMax;
    (this->InvalidationInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,0,&(this->InvalidationInfos).AllocatorInstance,0,piVar1);
    }
    DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
              ((FInvalidationInfo *)(this->FrameInvalidationInfos).AllocatorInstance.Data,
               (this->FrameInvalidationInfos).ArrayNum);
    piVar1 = &(this->FrameInvalidationInfos).ArrayMax;
    (this->FrameInvalidationInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,0,&(this->FrameInvalidationInfos).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->FrameRootHandles).ArrayMax;
    (this->FrameRootHandles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->FrameRootHandles).AllocatorInstance,0,piVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerInvalidate>
              ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::PaintDebugElements,
               (FConsoleSlateDebuggerInvalidate *)&stack0x00000008,(pmf_39de65f2)this);
    TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerInvalidate>
              ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::WidgetInvalidateEvent,
               (FConsoleSlateDebuggerInvalidate *)&stack0x00000008,(pmf_5df08f3f)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FConsoleSlateDebuggerInvalidate>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrame,(FConsoleSlateDebuggerInvalidate *)&stack0x00000008,
               (pmf_ffc87156)this);
    this->bEnabledCVarValue = this->bEnabled;
    return;
  }
  this->bEnabledCVarValue = this->bEnabled;
  return;
}

// HandleEndFrame @ 142440120

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerInvalidate::HandleEndFrame(FConsoleSlateDebuggerInvalidate *this)

{
  TArray<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  FSlateApplicationBase *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  pFVar6 = FSlateApplicationBase::Get();
  dVar3 = (double)(**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
  uVar7 = (this->InvalidationInfos).ArrayNum - 1;
  dVar3 = dVar3 - (double)this->CacheDuration;
  if (-1 < (int)uVar7) {
    this_00 = &this->InvalidationInfos;
    lVar8 = (longlong)(int)uVar7 * 0xa8;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->InvalidationInfos).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this_00->AllocatorInstance).Data + lVar8 + 0x98;
      if (*(double *)pFVar1 <= dVar3 && dVar3 != *(double *)pFVar1) {
        uVar5 = 0;
        if ((int)uVar7 < (this->InvalidationInfos).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_00,uVar7);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa8,8,&this_00->AllocatorInstance,(this->InvalidationInfos).ArrayNum,
                   &(this->InvalidationInfos).ArrayMax);
      }
      lVar8 = lVar8 + -0xa8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  if (this->LastPerformanceThresholdSeconds <= dVar3 &&
      dVar3 != this->LastPerformanceThresholdSeconds) {
    this->LastPerformanceThresholdFrameCount = 0;
  }
  CleanFrameList(this);
  ProcessFrameList(this);
  return;
}

// HandlePaintDebugInfo @ 142440a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo
          (FConsoleSlateDebuggerInvalidate *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateWindowElementList *param_3,int *param_4)

{
  ForElementType<unsigned___int64> FVar1;
  float fVar2;
  undefined1 uVar3;
  code *pcVar4;
  TVector2<float>_u_0 TVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float afVar10 [2];
  float afVar11 [2];
  float afVar12 [2];
  float afVar13 [2];
  TVector2<float>_u_0_s_0 TVar14;
  FGeometry *pFVar15;
  TVector2<float>_u_0_s_0 *pTVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  SWindow *pSVar21;
  ISlateStyle *pIVar22;
  FName *pFVar23;
  FSlateApplicationBase *pFVar24;
  ForElementType<unsigned___int64> FVar25;
  ForElementType<unsigned___int64> FVar26;
  ForElementType<unsigned___int64> FVar27;
  longlong lVar28;
  uint uVar29;
  ForElementType<unsigned___int64> FVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_7b8 [32];
  TVector2<float>_u_0_s_0 local_768;
  float local_760;
  float fStack_75c;
  TVector2<float>_u_0_s_0 local_758;
  undefined8 local_750;
  TVector2<float>_u_0 local_748;
  longlong local_740;
  FSlateWindowElementList *local_738;
  uint *local_730;
  FGeometry *local_728;
  TVector2<float>_u_0_s_0 *local_720;
  FSlateFontInfo *local_718;
  FGeometry *local_710;
  longlong local_708;
  uchar local_700 [24];
  undefined1 local_6e8 [16];
  FSlateBrush *local_6d8;
  FSlateBrush *local_6d0;
  longlong local_6c8;
  uchar local_6c0 [4];
  float fStack_6bc;
  float local_6b8;
  TVector2<float>_u_0 local_6b4;
  TTransform2<float> local_6ac;
  byte local_694;
  longlong local_690;
  uchar local_688 [4];
  float fStack_684;
  float local_680;
  TVector2<float>_u_0 local_67c;
  TTransform2<float> local_674;
  byte local_65c;
  TVector2<float>_u_0_s_0 local_654;
  TVector2<float>_u_0_s_0 local_648;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  TTransform2<float> local_570;
  TTransform2<float> local_558;
  FName local_540;
  FLinearColor_u_0 local_538;
  TTransform2<float> local_528;
  TTransform2<float> local_510;
  TTransform2<float> local_4f8;
  TTransform2<float> local_4e0;
  TTransform2<float> local_4c8;
  TTransform2<float> local_4b0;
  FName local_498;
  FName local_490;
  FName local_488 [2];
  FSlateFontInfo local_478;
  FSlateFontInfo local_418;
  TVector2<float>_u_0 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  longlong local_3a4;
  float local_39c [2];
  float afStack_394 [2];
  TVector2<float>_u_0 local_38c;
  byte local_384;
  TVector2<float>_u_0 local_380;
  undefined8 local_378;
  undefined4 local_370;
  longlong local_36c;
  float local_364 [2];
  float afStack_35c [2];
  TVector2<float>_u_0 local_354;
  byte local_34c;
  TVector2<float>_u_0 local_348;
  float local_340;
  undefined8 local_33c;
  undefined8 local_334;
  float local_32c [2];
  float afStack_324 [2];
  TVector2<float>_u_0 local_31c;
  byte local_314;
  TVector2<float>_u_0 local_310;
  float local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  float local_2f4 [2];
  float afStack_2ec [2];
  TVector2<float>_u_0 local_2e4;
  byte local_2dc;
  ForElementType<unsigned___int64> local_2d8;
  int local_1d0;
  int local_1cc;
  ForElementType<unsigned___int64> local_1c8;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  *param_4 = *param_4 + 1;
  local_758 = (TVector2<float>_u_0_s_0)param_3;
  local_710 = param_2;
  pSVar21 = FSlateWindowElementList::GetPaintWindow(param_3);
  if (pSVar21 == (SWindow *)0x0) {
    local_708 = 0;
  }
  else {
    local_708 = pSVar21->_padding_;
  }
  pIVar22 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar22 + 0x88);
  pFVar23 = ::FName::FName(&local_540,"SmallFont");
  (*pcVar4)(pIVar22,&local_478,*pFVar23,0);
  pIVar22 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar22 + 0x50);
  pFVar23 = ::FName::FName(local_488,"WhiteBrush");
  local_6d8 = (FSlateBrush *)(*pcVar4)(pIVar22,*pFVar23,0,0);
  pIVar22 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar22 + 0x50);
  pFVar23 = ::FName::FName(&local_490,"Checkerboard");
  local_6d0 = (FSlateBrush *)(*pcVar4)(pIVar22,*pFVar23,0,0);
  fVar32 = this->CacheDuration;
  if (this->CacheDuration <= __real_3c23d70a) {
    fVar32 = __real_3c23d70a;
  }
  local_478.OutlineSettings.OutlineSize = 1;
  this->CacheDuration = fVar32;
  pFVar24 = FSlateApplicationBase::Get();
  dVar7 = (double)(**(code **)(*(longlong *)pFVar24 + 0x60))(pFVar24);
  afVar12 = _UNK_15076b188;
  afVar10 = ___xmm_3f80000000000000000000003f800000;
  fVar9 = __real_c1200000;
  fVar8 = __real_3f4ccccd;
  fVar2 = __real_40000000;
  fVar32 = __real_3f800000;
  FVar27 = (ForElementType<unsigned___int64>)0x0;
  local_720 = &local_768;
  uVar29 = 0;
  local_718 = &local_478;
  local_768.X = 16.0;
  local_768.Y = 64.0;
  local_738 = param_3;
  local_730 = (uint *)param_4;
  local_728 = param_2;
  local_2d8.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_1d0 = 0;
  local_1cc = 0x20;
  local_1c8.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_c0 = 0;
  local_bc = 0x20;
  if (0 < (this->InvalidationInfos).ArrayNum) {
    lVar31 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar29 < (this->InvalidationInfos).ArrayNum) {
        uVar18 = ~uVar29 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar27 = local_2d8.SecondaryData, bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar30 = (ForElementType<unsigned___int64>)
               ((longlong)(this->InvalidationInfos).AllocatorInstance.Data + lVar31);
      if (*(longlong *)((longlong)FVar30 + 0x30) == local_708) {
        FVar25 = (ForElementType<unsigned___int64>)&local_2d8;
        if (FVar27 != (ForElementType<unsigned___int64>)0x0) {
          FVar25 = FVar27;
        }
        FVar26 = (ForElementType<unsigned___int64>)((longlong)FVar25 + (longlong)local_1d0 * 8);
        if (FVar25 != FVar26) {
          do {
            if (*(longlong *)FVar25 == *(longlong *)FVar30) goto LAB_1424412e1;
            FVar25 = (ForElementType<unsigned___int64>)((longlong)FVar25 + 8);
          } while (FVar25 != FVar26);
        }
        FVar25 = (ForElementType<unsigned___int64>)((longlong)FVar30 + 8);
        if (*(longlong *)((longlong)FVar30 + 8) != 0) {
          FVar26 = (ForElementType<unsigned___int64>)&local_2d8;
          if (FVar27 != (ForElementType<unsigned___int64>)0x0) {
            FVar26 = FVar27;
          }
          FVar1 = (ForElementType<unsigned___int64>)((longlong)FVar26 + (longlong)local_1d0 * 8);
          for (; FVar26 != FVar1; FVar26 = (ForElementType<unsigned___int64>)((longlong)FVar26 + 8))
          {
            if (*(longlong *)FVar26 == *(longlong *)((longlong)FVar30 + 8)) goto LAB_1424412e1;
          }
        }
        FVar26 = (ForElementType<unsigned___int64>)&local_2d8;
        if (FVar27 != (ForElementType<unsigned___int64>)0x0) {
          FVar26 = FVar27;
        }
        if ((ulonglong)FVar26 <= (ulonglong)FVar30) {
          FVar26 = (ForElementType<unsigned___int64>)&local_2d8;
          if (FVar27 != (ForElementType<unsigned___int64>)0x0) {
            FVar26 = FVar27;
          }
          if (((ulonglong)FVar30 < (ulonglong)((longlong)FVar26 + (longlong)local_1cc * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), FVar27 = local_2d8.SecondaryData, bVar17)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_1d0 == local_1cc) {
          local_1d0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                                (0x808,&local_2d8,&local_1cc);
          FVar27 = local_2d8.SecondaryData;
        }
        lVar28 = (longlong)local_1d0;
        FVar26 = (ForElementType<unsigned___int64>)&local_2d8;
        if (FVar27 != (ForElementType<unsigned___int64>)0x0) {
          FVar26 = FVar27;
        }
        local_1d0 = local_1d0 + 1;
        *(longlong *)((longlong)FVar26 + lVar28 * 8) = *(longlong *)FVar30;
        if (*(longlong *)FVar25 != 0) {
          FVar27 = (ForElementType<unsigned___int64>)&local_2d8;
          if (local_2d8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
            FVar27 = local_2d8.SecondaryData;
          }
          if ((ulonglong)FVar27 <= (ulonglong)FVar25) {
            FVar27 = (ForElementType<unsigned___int64>)&local_2d8;
            if (local_2d8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
              FVar27 = local_2d8.SecondaryData;
            }
            if (((ulonglong)FVar25 < (ulonglong)((longlong)FVar27 + (longlong)local_1cc * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (local_1d0 == local_1cc) {
            local_1d0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                                  (0x808,&local_2d8,&local_1cc);
          }
          lVar28 = (longlong)local_1d0;
          FVar27 = (ForElementType<unsigned___int64>)&local_2d8;
          if (local_2d8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
            FVar27 = local_2d8.SecondaryData;
          }
          local_1d0 = local_1d0 + 1;
          *(longlong *)((longlong)FVar27 + lVar28 * 8) = *(longlong *)FVar25;
        }
        fVar33 = (float)(dVar7 - *(double *)((longlong)FVar30 + 0x98)) / this->CacheDuration;
        if (fVar32 <= fVar33) {
          fVar33 = fVar32;
        }
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        fVar34 = fVar32;
        if (fVar33 != fVar32) {
          fVar33 = powf(fVar2,fVar33 * fVar9);
          fVar34 = fVar32 - fVar33;
        }
        afVar13 = _UNK_15076b188;
        afVar11 = ___xmm_3f80000000000000000000003f800000;
        local_6e8._0_8_ = *(undefined8 *)((longlong)FVar30 + 0x84);
        local_570.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
        local_688[0] = '\0';
        local_688[1] = '\0';
        local_688[2] = 0x80;
        local_688[3] = '?';
        fStack_684 = 0.0;
        ___xmm_3f80000000000000000000003f800000 = afVar10[0];
        _UNK_15076b184 = afVar10[1];
        local_570.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_570.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar12[0];
        _UNK_15076b18c = afVar12[1];
        local_570.M.M[1][0] = _UNK_15076b188;
        local_570.M.M[1][1] = _UNK_15076b18c;
        local_680 = 0.0;
        ___xmm_3f80000000000000000000003f800000 = afVar10[0];
        _UNK_15076b184 = afVar10[1];
        local_528.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_528.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar12[0];
        _UNK_15076b18c = afVar12[1];
        local_528.M.M[1][0] = _UNK_15076b188;
        local_528.M.M[1][1] = _UNK_15076b18c;
        local_6e8._8_4_ = (undefined4)*(undefined8 *)((longlong)FVar30 + 0x8c);
        local_6e8._12_4_ = fVar32 - fVar34 * fVar8;
        local_690 = *(longlong *)((longlong)FVar30 + 0x60);
        TVar5 = (TVector2<float>_u_0)
                *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)FVar30 + 0x58))->_s_0;
        local_67c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        ___xmm_3f80000000000000000000003f800000 = afVar11;
        _UNK_15076b188 = afVar13;
        local_528.Trans.field0_0x0 = TVar5;
        Concatenate<TTransform2<float>_>(&local_674,&local_528,&local_570);
        TVar14 = local_758;
        local_65c = local_65c & 0xfe;
        local_34c = local_34c & 0xfc;
        local_750._4_4_ = TVar5._s_0.Y;
        fStack_684 = TVar5._s_0.X;
        local_688[0] = '\0';
        local_688[1] = '\0';
        local_688[2] = 0x80;
        local_688[3] = '?';
        local_680 = local_750._4_4_;
        local_36c = local_690;
        local_378 = 0x3f800000;
        local_370 = 0;
        local_364[0] = local_674.M.M[0][0];
        local_364[1] = local_674.M.M[0][1];
        afStack_35c[0] = local_674.M.M[1][0];
        afStack_35c[1] = local_674.M.M[1][1];
        local_354 = local_674.Trans.field0_0x0;
        local_750 = TVar5;
        local_748 = TVar5;
        local_67c = TVar5;
        local_380 = TVar5;
        FSlateDrawElement::MakeBox
                  ((FSlateWindowElementList *)local_758,*param_4,(FPaintGeometry *)&local_380._s_0,
                   local_6d8,None,(FLinearColor *)local_6e8);
        afVar13 = _UNK_15076b188;
        afVar11 = ___xmm_3f80000000000000000000003f800000;
        if (*(FScriptContainerElement *)((longlong)FVar30 + 0xa0) != (FScriptContainerElement)0x0) {
          local_6c8 = *(longlong *)((longlong)FVar30 + 0x70);
          TVar5 = (TVector2<float>_u_0)
                  *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)FVar30 + 0x68))->_s_0;
          local_6b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ___xmm_3f80000000000000000000003f800000 = afVar10[0];
          _UNK_15076b184 = afVar10[1];
          local_558.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
          local_558.M.M[0][1] = _UNK_15076b184;
          _UNK_15076b188 = afVar12[0];
          _UNK_15076b18c = afVar12[1];
          local_558.M.M[1][0] = _UNK_15076b188;
          local_558.M.M[1][1] = _UNK_15076b18c;
          local_558.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
          local_6c0[0] = '\0';
          local_6c0[1] = '\0';
          local_6c0[2] = 0x80;
          local_6c0[3] = '?';
          fStack_6bc = 0.0;
          local_6b8 = 0.0;
          ___xmm_3f80000000000000000000003f800000 = afVar10[0];
          _UNK_15076b184 = afVar10[1];
          local_510.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
          local_510.M.M[0][1] = _UNK_15076b184;
          _UNK_15076b188 = afVar12[0];
          _UNK_15076b18c = afVar12[1];
          local_510.M.M[1][0] = _UNK_15076b188;
          local_510.M.M[1][1] = _UNK_15076b18c;
          ___xmm_3f80000000000000000000003f800000 = afVar11;
          _UNK_15076b188 = afVar13;
          local_510.Trans.field0_0x0 = TVar5;
          Concatenate<TTransform2<float>_>(&local_6ac,&local_510,&local_558);
          local_694 = local_694 & 0xfe;
          local_384 = local_384 & 0xfc;
          local_750._0_4_ = TVar5._s_0.X;
          local_750._4_4_ = TVar5._s_0.Y;
          local_760 = (float)local_750;
          local_6c0[0] = '\0';
          local_6c0[1] = '\0';
          local_6c0[2] = 0x80;
          local_6c0[3] = '?';
          fStack_75c = local_750._4_4_;
          local_39c[0] = local_6ac.M.M[0][0];
          local_39c[1] = local_6ac.M.M[0][1];
          afStack_394[0] = local_6ac.M.M[1][0];
          afStack_394[1] = local_6ac.M.M[1][1];
          fStack_6bc = (float)local_750;
          local_6b8 = local_750._4_4_;
          local_538._0_8_ = local_6e8._0_8_;
          local_538._8_8_ = local_6e8._8_8_;
          local_3b0 = 0x3f800000;
          local_3a8 = 0;
          local_3a4 = local_6c8;
          local_38c = local_6ac.Trans.field0_0x0;
          local_750 = TVar5;
          local_6b4 = TVar5;
          local_3b8 = TVar5;
          FSlateDrawElement::MakeDebugQuad
                    ((FSlateWindowElementList *)TVar14,*param_4,(FPaintGeometry *)&local_3b8._s_0,
                     (FLinearColor *)&local_538._s_0);
          FSlateDrawElement::MakeBox
                    ((FSlateWindowElementList *)TVar14,*param_4,(FPaintGeometry *)&local_3b8._s_0,
                     local_6d0,None,(FLinearColor *)local_6e8);
        }
        FVar27 = local_2d8.SecondaryData;
        if (this->bShowWidgetList != false) {
          local_740 = (longlong)(int)uVar29;
          FVar27 = (ForElementType<unsigned___int64>)&local_1c8;
          if (local_1c8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
            FVar27 = local_1c8.SecondaryData;
          }
          if ((ulonglong)FVar27 <= &local_740) {
            FVar27 = (ForElementType<unsigned___int64>)&local_1c8;
            if (local_1c8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
              FVar27 = local_1c8.SecondaryData;
            }
            if ((&local_740 < (longlong *)((longlong)FVar27 + (longlong)local_bc * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar19 = local_c0;
          if (local_c0 == local_bc) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                               (0x808,&local_1c8,&local_bc);
          }
          local_c0 = iVar19 + 1;
          FVar27 = (ForElementType<unsigned___int64>)&local_1c8;
          if (local_1c8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
            FVar27 = local_1c8.SecondaryData;
          }
          *(longlong *)((longlong)FVar27 + (longlong)iVar19 * 8) = local_740;
          FVar27 = local_2d8.SecondaryData;
        }
      }
LAB_1424412e1:
      uVar29 = uVar29 + 1;
      lVar31 = lVar31 + 0xa8;
      param_3 = (FSlateWindowElementList *)local_758;
    } while ((int)uVar29 < (this->InvalidationInfos).ArrayNum);
  }
  fVar32 = __real_41a00000;
  if (this->bShowLegend != false) {
    ::FString::FString(&local_630,L"Invalidation Root - Root");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_630,&this->DrawRootRootColor);
    if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_630.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_620,L"Invalidation Root - Child Order");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_620,&this->DrawRootChildOrderColor);
    if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_610,L"Invalidation Root - Screen Position");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_610,&this->DrawRootScreenPositionColor);
    if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_600,L"Widget - Layout");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_600,&this->DrawWidgetLayoutColor);
    if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_5f0,L"Widget - Prepass");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_5f0,&this->DrawWidgetPrepassColor);
    if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_5e0,L"Widget - Paint");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_5e0,&this->DrawWidgetPaintColor);
    if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_5d0,L"Widget - Volatility");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_5d0,&this->DrawWidgetVolatilityColor);
    if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_5c0,L"Widget - Child Order");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_5c0,&this->DrawWidgetChildOrderColor);
    if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_5b0,L"Widget - Render Transform");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_5b0,&this->DrawWidgetRenderTransformColor);
    if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_5a0,L"Widget - Visibility");
    `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
              (&local_738,&local_5a0,&this->DrawWidgetVisibilityColor);
    if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
    }
    local_768.Y = local_768.Y + fVar32;
    FVar27 = local_2d8.SecondaryData;
  }
  pFVar15 = local_728;
  if (this->LastPerformanceThresholdFrameCount != 0) {
    pIVar22 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar22 + 0x88);
    pFVar23 = ::FName::FName(&local_498,"NormalFont");
    (*pcVar4)(pIVar22,&local_418,*pFVar23,0);
    ::FString::PrintfImpl(&local_590,L"Slate Performance Threshold Reached: %llu");
    afVar13 = _UNK_15076b188;
    afVar11 = ___xmm_3f80000000000000000000003f800000;
    local_700[0] = '\0';
    local_700[1] = '\0';
    local_700[2] = 0x80;
    local_700[3] = '?';
    local_700[4] = '\0';
    local_700[5] = '\0';
    local_700[6] = 0x80;
    local_700[7] = '?';
    ___xmm_3f80000000000000000000003f800000 = afVar10[0];
    _UNK_15076b184 = afVar10[1];
    local_4f8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_4f8.M.M[0][1] = _UNK_15076b184;
    _UNK_15076b188 = afVar12[0];
    _UNK_15076b18c = afVar12[1];
    local_4f8.M.M[1][0] = _UNK_15076b188;
    local_4f8.M.M[1][1] = _UNK_15076b18c;
    local_654 = (local_710->AbsolutePosition).field0_0x0._s_0;
    fVar2 = local_710->Scale;
    local_758.Y = local_768.Y;
    local_758.X = local_768.X;
    local_760 = local_768.X * fVar2 + local_654.X;
    fStack_75c = local_768.Y * fVar2 + local_654.Y;
    ___xmm_3f80000000000000000000003f800000 = afVar11;
    _UNK_15076b188 = afVar13;
    local_4f8.Trans.field0_0x0 = (TVector2<float>_u_0)local_758;
    Concatenate<TTransform2<float>_>(&local_4e0,&local_4f8,&local_710->AccumulatedRenderTransform);
    local_348._s_0.Y = fStack_75c;
    local_348._s_0.X = local_760;
    local_334 = CONCAT44(local_700._4_4_,local_700._0_4_);
    local_314 = local_710->bHasRenderTransform * '\x02' | local_314 & 0xfc;
    local_33c = 0;
    local_31c = local_4e0.Trans.field0_0x0;
    local_32c[0] = local_4e0.M.M[0][0];
    local_32c[1] = local_4e0.M.M[0][1];
    afStack_324[0] = local_4e0.M.M[1][0];
    afStack_324[1] = local_4e0.M.M[1][1];
    local_340 = fVar2;
    FSlateDrawElement::MakeText
              (param_3,*param_4,(FPaintGeometry *)&local_348._s_0,&local_590,&local_418,None,
               &FLinearColor::Red);
    if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_590.Data.AllocatorInstance.Data);
    }
    local_768.Y = local_768.Y + fVar32;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_418.CompositeFont.SharedReferenceCount.ReferenceController);
    FVar27 = local_2d8.SecondaryData;
  }
  fVar32 = __real_41400000;
  if (this->bShowWidgetList != false) {
    uVar29 = 0;
    iVar19 = this->MaxNumberOfWidgetInList;
    if (local_c0 < this->MaxNumberOfWidgetInList) {
      iVar19 = local_c0;
    }
    local_710 = (FGeometry *)(longlong)iVar19;
    if (0 < (longlong)iVar19) {
      local_748 = (TVector2<float>_u_0)0x0;
      do {
        TVar5 = local_748;
        uVar18 = 0;
        if ((int)uVar29 < local_c0) {
          uVar18 = ~uVar29 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar27 = (ForElementType<unsigned___int64>)&local_1c8;
        if (local_1c8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
          FVar27 = local_1c8.SecondaryData;
        }
        uVar18 = *(uint *)((longlong)FVar27 + (longlong)TVar5 * 8);
        uVar20 = 0;
        if ((int)uVar18 < (this->InvalidationInfos).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (this->InvalidationInfos).AllocatorInstance.Data;
        ::FString::PrintfImpl(&local_580,L"\'%s\' -> \'%s\'");
        pTVar16 = local_720;
        afVar13 = _UNK_15076b188;
        afVar11 = ___xmm_3f80000000000000000000003f800000;
        fVar2 = pFVar15->Scale;
        local_648 = (pFVar15->AbsolutePosition).field0_0x0._s_0;
        local_700[8] = '\0';
        local_700[9] = '\0';
        local_700[10] = 0x80;
        local_700[0xb] = '?';
        local_758 = *local_720;
        local_700[0xc] = '\0';
        local_700[0xd] = '\0';
        local_700[0xe] = 0x80;
        local_700[0xf] = '?';
        local_760 = fVar2 * local_758.X + local_648.X;
        ___xmm_3f80000000000000000000003f800000 = afVar10[0];
        _UNK_15076b184 = afVar10[1];
        local_4c8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_4c8.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar12[0];
        _UNK_15076b18c = afVar12[1];
        local_4c8.M.M[1][0] = _UNK_15076b188;
        local_4c8.M.M[1][1] = _UNK_15076b18c;
        fStack_75c = fVar2 * local_758.Y + local_648.Y;
        ___xmm_3f80000000000000000000003f800000 = afVar11;
        _UNK_15076b188 = afVar13;
        local_4c8.Trans.field0_0x0 = (TVector2<float>_u_0)local_758;
        Concatenate<TTransform2<float>_>(&local_4b0,&local_4c8,&pFVar15->AccumulatedRenderTransform)
        ;
        local_310._s_0.Y = fStack_75c;
        local_310._s_0.X = local_760;
        local_2fc = CONCAT44(local_700._12_4_,local_700._8_4_);
        local_2dc = pFVar15->bHasRenderTransform * '\x02' | local_2dc & 0xfc;
        local_304 = 0;
        local_2f4[0] = local_4b0.M.M[0][0];
        local_2f4[1] = local_4b0.M.M[0][1];
        afStack_2ec[0] = local_4b0.M.M[1][0];
        afStack_2ec[1] = local_4b0.M.M[1][1];
        local_2e4 = local_4b0.Trans.field0_0x0;
        local_308 = fVar2;
        FSlateDrawElement::MakeText
                  (local_738,*local_730,(FPaintGeometry *)&local_310._s_0,&local_580,local_718,None,
                   (FLinearColor *)(pFVar6 + (longlong)(int)uVar18 * 0xa8 + 0x84));
        pTVar16->Y = pTVar16->Y + fVar32;
        if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_580.Data.AllocatorInstance.Data);
        }
        uVar29 = uVar29 + 1;
        local_748._s_0 = local_748._s_0 + 1;
        FVar27 = local_2d8.SecondaryData;
      } while ((longlong)local_748 < (longlong)local_710);
    }
    if (this->MaxNumberOfWidgetInList < local_c0) {
      local_768.Y = local_768.Y + fVar32;
      ::FString::PrintfImpl(&local_640,L"   %d more invalidations");
      `FConsoleSlateDebuggerInvalidate::HandlePaintDebugInfo'::__l2::<lambda_1>::operator()
                (&local_738,&local_640,&FLinearColor::White);
      FVar27 = local_2d8.SecondaryData;
      if ((ForElementType<unsigned___int64>)local_640.Data.AllocatorInstance.Data !=
          (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free(local_640.Data.AllocatorInstance.Data);
        FVar27 = local_2d8.SecondaryData;
      }
    }
  }
  if (local_1c8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_1c8.SecondaryData);
    FVar27 = local_2d8.SecondaryData;
  }
  if (FVar27 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar27);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// HandleSetInvalidateRootReasonFilter @ 142443790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerInvalidate::HandleSetInvalidateRootReasonFilter
          (FConsoleSlateDebuggerInvalidate *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_498 [32];
  undefined1 local_478 [4];
  ESlateDebuggingInvalidateRootReason local_474;
  FString local_470;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_498;
  local_474 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)local_474;
  local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  if (local_474 == None) {
    if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    local_458.Base = local_438;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    local_458.CurPos = local_438;
    local_458.End = (wchar_t *)local_38;
    pvVar3 = FGenericPlatformString::Memcpy(local_438,L"Current Invalidate Root Reason set: ",0x48);
    local_458.CurPos = (wchar_t *)((longlong)pvVar3 + 0x48);
    pFVar4 = ::LexToString(&local_470,this->InvalidateRootReasonFilter);
    iVar1 = (pFVar4->Data).ArrayNum;
    pFVar8 = (pFVar4->Data).AllocatorInstance.Data;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar9 = 0;
    }
    uVar7 = (ulong64)iVar9;
    if (local_458.End < local_458.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
    }
    if (iVar9 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar8,uVar7 * 2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar3 + uVar7 * 2);
    }
    if ((FConsoleSlateDebuggerInvalidate *)local_470.Data.AllocatorInstance.Data !=
        (FConsoleSlateDebuggerInvalidate *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
  }
  else {
    pFVar8 = (param_1->AllocatorInstance).Data;
    local_458.Base = local_438;
    local_458.End = (wchar_t *)local_38;
    bVar2 = true;
    pwVar5 = local_438;
    pFVar10 = pFVar8 + uVar6 * 0x10;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    local_458.CurPos = pwVar5;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_478);
        pwVar5 = local_458.CurPos;
      }
      if (pFVar8 == pFVar10) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        if (local_458.End < pwVar5 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,1);
          pwVar5 = local_458.CurPos;
        }
        *pwVar5 = L'|';
        pwVar5 = local_458.CurPos + 1;
        local_458.CurPos = pwVar5;
      }
      pvVar3 = *(void **)pFVar8;
      iVar9 = *(int *)(pFVar8 + 8) + -1;
      if (*(int *)(pFVar8 + 8) == 0) {
        iVar9 = 0;
      }
      uVar7 = (ulong64)iVar9;
      if (local_458.End < pwVar5 + uVar7) {
        TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
        pwVar5 = local_458.CurPos;
      }
      if (iVar9 != 0) {
        pvVar3 = FGenericPlatformString::Memcpy(pwVar5,pvVar3,uVar7 * 2);
        pwVar5 = (wchar_t *)((longlong)pvVar3 + uVar7 * 2);
        local_458.CurPos = pwVar5;
      }
      uVar6 = (ulonglong)local_474;
      pFVar8 = pFVar8 + 0x10;
    }
    if (local_458.End < pwVar5 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,1);
      pwVar5 = local_458.CurPos;
    }
    *pwVar5 = L'\0';
    bVar2 = LexTryParseString(&local_474,local_458.Base);
    if (bVar2) {
      *(ESlateDebuggingInvalidateRootReason *)(local_470.Data.AllocatorInstance.Data + 8) =
           local_474;
      SaveConfig((FConsoleSlateDebuggerInvalidate *)local_470.Data.AllocatorInstance.Data);
    }
    else if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  return;
}

// HandleSetInvalidateWidgetReasonFilter @ 142443a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerInvalidate::HandleSetInvalidateWidgetReasonFilter
          (FConsoleSlateDebuggerInvalidate *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_498 [32];
  FScriptContainerElement local_478;
  undefined1 local_477 [3];
  uint local_474;
  FString local_470;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_498;
  local_474 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)local_474;
  local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  if (local_474 == 0) {
    if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    local_458.Base = local_438;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    local_458.CurPos = local_438;
    local_458.End = (wchar_t *)local_38;
    pvVar3 = FGenericPlatformString::Memcpy
                       (local_438,L"Current Invalidate Widget Reason set: ",0x4c);
    local_458.CurPos = (wchar_t *)((longlong)pvVar3 + 0x4c);
    pFVar4 = ::LexToString(&local_470,this->InvalidateWidgetReasonFilter);
    iVar1 = (pFVar4->Data).ArrayNum;
    pFVar8 = (pFVar4->Data).AllocatorInstance.Data;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar9 = 0;
    }
    uVar7 = (ulong64)iVar9;
    if (local_458.End < local_458.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
    }
    if (iVar9 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar8,uVar7 * 2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar3 + uVar7 * 2);
    }
    if ((FConsoleSlateDebuggerInvalidate *)local_470.Data.AllocatorInstance.Data !=
        (FConsoleSlateDebuggerInvalidate *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
  }
  else {
    pFVar8 = (param_1->AllocatorInstance).Data;
    local_458.Base = local_438;
    local_458.End = (wchar_t *)local_38;
    bVar2 = true;
    pwVar5 = local_438;
    pFVar10 = pFVar8 + uVar6 * 0x10;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    local_458.CurPos = pwVar5;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_477);
        pwVar5 = local_458.CurPos;
      }
      if (pFVar8 == pFVar10) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        if (local_458.End < pwVar5 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_458,1);
          pwVar5 = local_458.CurPos;
        }
        *pwVar5 = L'|';
        pwVar5 = local_458.CurPos + 1;
        local_458.CurPos = pwVar5;
      }
      pvVar3 = *(void **)pFVar8;
      iVar9 = *(int *)(pFVar8 + 8) + -1;
      if (*(int *)(pFVar8 + 8) == 0) {
        iVar9 = 0;
      }
      uVar7 = (ulong64)iVar9;
      if (local_458.End < pwVar5 + uVar7) {
        TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
        pwVar5 = local_458.CurPos;
      }
      if (iVar9 != 0) {
        pvVar3 = FGenericPlatformString::Memcpy(pwVar5,pvVar3,uVar7 * 2);
        pwVar5 = (wchar_t *)((longlong)pvVar3 + uVar7 * 2);
        local_458.CurPos = pwVar5;
      }
      uVar6 = (ulonglong)local_474;
      pFVar8 = pFVar8 + 0x10;
    }
    if (local_458.End < pwVar5 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,1);
      pwVar5 = local_458.CurPos;
    }
    *pwVar5 = L'\0';
    bVar2 = LexTryParseString((EInvalidateWidgetReason *)&local_478,local_458.Base);
    if (bVar2) {
      local_470.Data.AllocatorInstance.Data[7] = local_478;
      SaveConfig((FConsoleSlateDebuggerInvalidate *)local_470.Data.AllocatorInstance.Data);
    }
    else if (4 < (byte)LogSlateDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  return;
}

// HandleWidgetInvalidated @ 142444300

void __thiscall
FConsoleSlateDebuggerInvalidate::HandleWidgetInvalidated
          (FConsoleSlateDebuggerInvalidate *this,FSlateDebuggingInvalidateArgs *param_1)

{
  FString *pFVar1;
  TArray<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  SWidget *pSVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  ESlateDebuggingInvalidateRootReason EVar7;
  int iVar8;
  FInvalidationInfo *pFVar9;
  ulong64 uVar10;
  FString *pFVar11;
  EInvalidateWidgetReason EVar12;
  FInvalidationInfo *pFVar13;
  int iVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  FInvalidationInfo *this_00;
  FString local_58;
  FWidgetProxyHandle local_48;
  
  uVar10 = 0;
  pSVar4 = param_1->WidgetInvalidated;
  if (pSVar4 != (SWidget *)0x0) {
    local_48.InvalidationRootHandle.InvalidationRoot =
         (pSVar4->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    local_48.InvalidationRootHandle.UniqueId =
         (pSVar4->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    local_48.InvalidationRootHandle._12_4_ =
         *(undefined4 *)&(pSVar4->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
    local_48.WidgetIndex = (pSVar4->FastPathProxyHandle).WidgetIndex;
    local_48.WidgetSortOrder.Order = (pSVar4->FastPathProxyHandle).WidgetSortOrder.Order;
    bVar6 = FWidgetProxyHandle::IsValid(&local_48,pSVar4);
    if (bVar6) {
      uVar16 = uVar10;
      if (param_1->WidgetInvalidated != (SWidget *)0x0) {
        uVar16 = param_1->WidgetInvalidated->UniqueIdentifier;
      }
      pSVar4 = param_1->WidgetInvalidateInvestigator;
      uVar15 = uVar10;
      if (pSVar4 != (SWidget *)0x0) {
        uVar15 = pSVar4->UniqueIdentifier;
      }
      EVar7 = this->InvalidateRootReasonFilter & param_1->InvalidateInvalidationRootReason;
      if ((EVar7 & Root) == None) {
        if ((EVar7 & ChildOrder) == None) {
          if ((EVar7 & ScreenPosition) == None) {
            EVar12 = this->InvalidateWidgetReasonFilter & param_1->InvalidateWidgetReason;
            if ((EVar12 & ChildOrder) == None) {
              if ((char)EVar12 < '\0') {
                iVar14 = 0x28;
              }
              else if ((EVar12 & Layout) == None) {
                if ((EVar12 & (Visibility|RenderTransform)) == None) {
                  if ((EVar12 & Volatility) == None) {
                    if ((EVar12 & Paint) == None) {
                      return;
                    }
                    iVar14 = 0x14;
                  }
                  else {
                    iVar14 = 0x19;
                  }
                }
                else {
                  iVar14 = 0x1e;
                }
              }
              else {
                iVar14 = 0x23;
              }
            }
            else {
              iVar14 = 0x2d;
            }
          }
          else {
            iVar14 = 0x32;
          }
        }
        else {
          iVar14 = 0x50;
        }
      }
      else {
        iVar14 = 100;
      }
      pTVar2 = &this->FrameInvalidationInfos;
      this_00 = (FInvalidationInfo *)(pTVar2->AllocatorInstance).Data;
      iVar8 = (this->FrameInvalidationInfos).ArrayNum;
      pFVar9 = this_00 + iVar8;
      for (pFVar13 = this_00; pFVar13 != pFVar9; pFVar13 = pFVar13 + 1) {
        if ((pFVar13->WidgetInvalidatedId == uVar16) && (pFVar13->WidgetInvalidatorId == uVar15)) {
          if (iVar14 <= pFVar13->InvalidationPriority) {
            return;
          }
          pFVar13->WidgetReason = pFVar13->WidgetReason | param_1->InvalidateWidgetReason;
          pFVar13->InvalidationRootReason =
               pFVar13->InvalidationRootReason | param_1->InvalidateInvalidationRootReason;
          pFVar13->InvalidationPriority = iVar14;
          return;
        }
      }
      pFVar13 = this_00;
      if (this_00 != pFVar9) {
        do {
          if (pFVar13->WidgetInvalidatedId == uVar16) {
            if (iVar14 <= pFVar13->InvalidationPriority) {
              return;
            }
            bVar6 = this->bUseWidgetPathAsName;
            bVar3 = this->bShowWidgetList;
            if (pSVar4 != (SWidget *)0x0) {
              uVar10 = pSVar4->UniqueIdentifier;
            }
            pFVar13->WidgetInvalidatorId = uVar10;
            if (bVar3 != false) {
              bVar6 = bVar6 == false;
              if (bVar6) {
                pFVar11 = FReflectionMetaData::GetWidgetDebugInfo
                                    (&local_58,param_1->WidgetInvalidateInvestigator);
              }
              else {
                pFVar11 = FReflectionMetaData::GetWidgetPath
                                    ((FString *)&local_48,param_1->WidgetInvalidateInvestigator,true
                                     ,false);
              }
              pFVar1 = &pFVar13->WidgetInvalidatorName;
              if (pFVar1 != pFVar11) {
                pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
                if (pFVar5 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar5);
                }
                (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
                (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar13->WidgetInvalidatorName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
                (pFVar13->WidgetInvalidatorName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
                (pFVar11->Data).ArrayNum = 0;
                (pFVar11->Data).ArrayMax = 0;
              }
              if ((bVar6) &&
                 (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if ((!bVar6) &&
                 (local_48.InvalidationRootHandle.InvalidationRoot != (FSlateInvalidationRoot *)0x0)
                 ) {
                FMemory::Free(local_48.InvalidationRootHandle.InvalidationRoot);
              }
            }
            pFVar13->WidgetReason = pFVar13->WidgetReason | param_1->InvalidateWidgetReason;
            pFVar13->InvalidationRootReason =
                 pFVar13->InvalidationRootReason | param_1->InvalidateInvalidationRootReason;
            pFVar13->InvalidationPriority = iVar14;
            return;
          }
          pFVar13 = pFVar13 + 1;
        } while (pFVar13 != pFVar9);
        do {
          if (this_00->WidgetInvalidatedId == uVar15) {
            if (iVar14 < this_00->InvalidationPriority) {
              return;
            }
            FInvalidationInfo::ReplaceInvalidated
                      (this_00,param_1,iVar14,this->bShowWidgetList,this->bUseWidgetPathAsName);
            return;
          }
          this_00 = this_00 + 1;
        } while (this_00 != pFVar9);
      }
      if (iVar8 == (this->FrameInvalidationInfos).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a8,&pTVar2->AllocatorInstance,&(this->FrameInvalidationInfos).ArrayMax
                          );
        (this->FrameInvalidationInfos).ArrayNum = iVar8;
      }
      iVar8 = (this->FrameInvalidationInfos).ArrayNum;
      (this->FrameInvalidationInfos).ArrayNum = iVar8 + 1;
      FInvalidationInfo::FInvalidationInfo
                ((FInvalidationInfo *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0xa8),
                 param_1,iVar14,this->bShowWidgetList,this->bUseWidgetPathAsName);
      pSVar4 = param_1->WidgetInvalidated;
      local_48.InvalidationRootHandle.InvalidationRoot =
           (pSVar4->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
      local_48.InvalidationRootHandle.UniqueId =
           (pSVar4->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
      local_48.InvalidationRootHandle._12_4_ =
           *(undefined4 *)&(pSVar4->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
      local_48.WidgetIndex = (pSVar4->FastPathProxyHandle).WidgetIndex;
      local_48.WidgetSortOrder.Order = (pSVar4->FastPathProxyHandle).WidgetSortOrder.Order;
      TArray<FSlateInvalidationRootHandle,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FSlateInvalidationRootHandle>
                (&this->FrameRootHandles,&local_48.InvalidationRootHandle);
    }
  }
  return;
}

// HandledConfigChanged @ 1424448d0

void __thiscall
FConsoleSlateDebuggerInvalidate::HandledConfigChanged
          (FConsoleSlateDebuggerInvalidate *this,IConsoleVariable *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FColor FStackX_8;
  FString FStack_18;
  
  pwVar2 = L"";
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bShowWidgetList",this->bShowWidgetList,&FStack_18
            );
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bUseWidgetPathAsName",this->bUseWidgetPathAsName,
             &FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bShowLegend",this->bShowLegend,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bLogInvalidatedWidget",
             this->bLogInvalidatedWidget,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bUsePerformanceThreshold",
             this->bUsePerformanceThreshold,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawRootRootColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawRootRootColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawRootChildOrderColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawRootChildOrderColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawRootScreenPositionColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawRootScreenPositionColor",FStackX_8,&FStack_18
            );
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetPrepassColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetPrepassColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetLayoutColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetLayoutColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetPaintColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetPaintColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetVolatilityColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetVolatilityColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetChildOrderColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetChildOrderColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetRenderTransformColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetRenderTransformColor",FStackX_8,
             &FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetVisibilityColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetVisibilityColor",FStackX_8,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetInt
            (GConfig,L"SlateDebugger.Invalidate",L"MaxNumberOfWidgetInList",
             this->MaxNumberOfWidgetInList,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar1);
  FConfigCacheIni::SetFloat
            (GConfig,L"SlateDebugger.Invalidate",L"CacheDuration",this->CacheDuration,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&FStack_18,pwVar2);
  FConfigCacheIni::SetFloat
            (GConfig,L"SlateDebugger.Invalidate",L"ThresholdPerformanceMs",
             this->ThresholdPerformanceMs,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadConfig @ 1424462b0

void __thiscall FConsoleSlateDebuggerInvalidate::LoadConfig(FConsoleSlateDebuggerInvalidate *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FColor_u_0 local_res8 [2];
  FString local_38 [2];
  
  pwVar6 = L"";
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bEnabled",&this->bEnabledCVarValue,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bShowWidgetList",&this->bShowWidgetList,local_38)
  ;
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bUseWidgetPathAsName",&this->bUseWidgetPathAsName
             ,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bShowLegend",&this->bShowLegend,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bLogInvalidatedWidget",
             &this->bLogInvalidatedWidget,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bUsePerformanceThreshold",
             &this->bUsePerformanceThreshold,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawRootRootColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  fVar3 = __real_3b808081;
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawRootRootColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawRootRootColor).field0_0x0._s_0.G = fVar1;
    (this->DrawRootRootColor).field0_0x0._s_0.B = fVar2;
    (this->DrawRootRootColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawRootChildOrderColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawRootChildOrderColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawRootChildOrderColor).field0_0x0._s_0.G = fVar1;
    (this->DrawRootChildOrderColor).field0_0x0._s_0.B = fVar2;
    (this->DrawRootChildOrderColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawRootScreenPositionColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawRootScreenPositionColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawRootScreenPositionColor).field0_0x0._s_0.G = fVar1;
    (this->DrawRootScreenPositionColor).field0_0x0._s_0.B = fVar2;
    (this->DrawRootScreenPositionColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3
    ;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetPrepassColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetPrepassColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetPrepassColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetPrepassColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetPrepassColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetLayoutColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetLayoutColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetLayoutColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetLayoutColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetLayoutColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetPaintColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetPaintColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetPaintColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetPaintColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetPaintColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetVolatilityColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetVolatilityColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetVolatilityColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetVolatilityColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetVolatilityColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetChildOrderColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetChildOrderColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetChildOrderColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetChildOrderColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetChildOrderColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetRenderTransformColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetRenderTransformColor).field0_0x0._s_0.A =
         (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  bVar4 = FConfigCacheIni::GetColor
                    (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetVisibilityColor",
                     (FColor *)&local_res8[0]._s_0,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    fVar1 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    (this->DrawWidgetVisibilityColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    (this->DrawWidgetVisibilityColor).field0_0x0._s_0.G = fVar1;
    (this->DrawWidgetVisibilityColor).field0_0x0._s_0.B = fVar2;
    (this->DrawWidgetVisibilityColor).field0_0x0._s_0.A = (float)(byte)local_res8[0]._3_1_ * fVar3;
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetInt
            (GConfig,L"SlateDebugger.Invalidate",L"MaxNumberOfWidgetInList",
             &this->MaxNumberOfWidgetInList,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pwVar5 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar5);
  FConfigCacheIni::GetFloat
            (GConfig,L"SlateDebugger.Invalidate",L"CacheDuration",&this->CacheDuration,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_38,pwVar6);
  FConfigCacheIni::GetFloat
            (GConfig,L"SlateDebugger.Invalidate",L"ThresholdPerformanceMs",
             &this->ThresholdPerformanceMs,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (this->bEnabledCVarValue != false) {
    StartDebugging(this);
  }
  return;
}

// ProcessFrameList @ 14244b420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerInvalidate::ProcessFrameList(FConsoleSlateDebuggerInvalidate *this)

{
  int *piVar1;
  EInvalidateWidgetReason EVar2;
  int iVar3;
  ESlateDebuggingInvalidateRootReason EVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TVector2<float>_u_0 TVar10;
  TVector2<float>_u_0 TVar11;
  TVector2<float>_u_0 TVar12;
  TVector2<float>_u_0 TVar13;
  atomic<int> aVar14;
  FInvalidationInfo *pFVar15;
  char cVar16;
  atomic<int> aVar17;
  int iVar18;
  FSlateApplicationBase *pFVar19;
  FScriptContainerElement *pFVar20;
  void *pvVar21;
  FString *pFVar22;
  FLinearColor *pFVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  ulong64 uVar26;
  SWidget *pSVar27;
  SWidget *pSVar28;
  SWidget *pSVar29;
  SWidget *pSVar30;
  FInvalidationInfo *pFVar31;
  bool bVar32;
  undefined1 auStackY_508 [32];
  undefined1 local_4d8 [4];
  undefined8 local_4d4;
  uint local_4cc;
  float local_4c8;
  float fStack_4c4;
  float local_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float local_4b0;
  float fStack_4ac;
  FInvalidationInfo *local_4a8;
  FString local_4a0;
  FString local_490;
  FSlateInvalidationRoot *local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_508;
  pFVar19 = FSlateApplicationBase::Get();
  dVar7 = (double)(**(code **)(*(longlong *)pFVar19 + 0x60))(pFVar19);
  local_4cc = (this->FrameInvalidationInfos).ArrayNum;
  uVar24 = (ulonglong)(int)local_4cc;
  pFVar31 = (FInvalidationInfo *)(this->FrameInvalidationInfos).AllocatorInstance.Data;
  local_4a8 = pFVar31 + uVar24;
LAB_14244b4a0:
  pFVar15 = local_4a8;
  pSVar29 = (SWidget *)0x0;
  if ((this->FrameInvalidationInfos).ArrayNum != (int)uVar24) {
    local_4d8[0] = 0;
    `TCheckedPointerIterator<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int,0>::operator!='
    ::__l2::<lambda_1>::operator()(local_4d8);
  }
  if (pFVar31 == pFVar15) {
    piVar1 = &(this->FrameInvalidationInfos).ArrayMax;
    pFVar31 = (FInvalidationInfo *)(this->FrameInvalidationInfos).AllocatorInstance.Data;
    iVar18 = (this->FrameInvalidationInfos).ArrayNum;
    if ((this->FrameInvalidationInfos).ArrayMax < 0) {
      DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>(pFVar31,iVar18);
      (this->FrameInvalidationInfos).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa8,8,0,&(this->FrameInvalidationInfos).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>(pFVar31,iVar18);
      (this->FrameInvalidationInfos).ArrayNum = 0;
    }
    (this->FrameRootHandles).ArrayNum = 0;
    if ((this->FrameRootHandles).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->FrameRootHandles).AllocatorInstance,0,
                 &(this->FrameRootHandles).ArrayMax);
    }
    return;
  }
  pSVar27 = (SWidget *)(pFVar31->WidgetInvalidated).WeakReferenceCount.ReferenceController;
  pSVar30 = pSVar27;
  if (pSVar27 != (SWidget *)0x0) {
    aVar14 = *(atomic<int> *)&pSVar27->_padding_;
    do {
      pSVar30 = pSVar29;
      if (aVar14 == (atomic<int>)0x0) goto LAB_14244b4e3;
      LOCK();
      aVar17 = *(atomic<int> *)&pSVar27->_padding_;
      bVar32 = aVar14 == aVar17;
      if (bVar32) {
        *(atomic<int> *)&pSVar27->_padding_ = (atomic<int>)((int)aVar14 + 1);
        aVar17 = aVar14;
      }
      UNLOCK();
      aVar14 = aVar17;
    } while (!bVar32);
    pSVar29 = (pFVar31->WidgetInvalidated).Object;
    pSVar30 = pSVar27;
  }
LAB_14244b4e3:
  if (this->bUsePerformanceThreshold == false) {
LAB_14244b549:
    if (this->bLogInvalidatedWidget != false) {
      local_468.Base = local_448;
      local_468.bIsDynamic = false;
      local_468.bIsExternal = false;
      local_468.CurPos = local_448;
      local_468.End = (wchar_t *)local_48;
      pvVar21 = FGenericPlatformString::Memcpy(local_448,L"Invalidator: \'",0x1c);
      pFVar20 = (pFVar31->WidgetInvalidatorName).Data.AllocatorInstance.Data;
      local_468.CurPos = (wchar_t *)((longlong)pvVar21 + 0x1c);
      iVar3 = (pFVar31->WidgetInvalidatorName).Data.ArrayNum;
      iVar18 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar18 = 0;
      }
      uVar26 = (ulong64)iVar18;
      if (local_468.End < local_468.CurPos + uVar26) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,uVar26);
      }
      if (iVar18 != 0) {
        pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar20,uVar26 * 2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar21 + uVar26 * 2);
      }
      if (local_468.End < local_468.CurPos + 0x10) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0x10);
      }
      pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\' Invalidated: \'",0x20);
      pFVar20 = (pFVar31->WidgetInvalidatedName).Data.AllocatorInstance.Data;
      local_468.CurPos = (wchar_t *)((longlong)pvVar21 + 0x20);
      iVar3 = (pFVar31->WidgetInvalidatedName).Data.ArrayNum;
      iVar18 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar18 = 0;
      }
      uVar26 = (ulong64)iVar18;
      if (local_468.End < local_468.CurPos + uVar26) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,uVar26);
      }
      if (iVar18 != 0) {
        pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar20,uVar26 * 2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar21 + uVar26 * 2);
      }
      if (local_468.End < local_468.CurPos + 0x10) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0x10);
      }
      pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\' Root Reason: \'",0x20);
      local_468.CurPos = (wchar_t *)((longlong)pvVar21 + 0x20);
      pFVar22 = ::LexToString(&local_4a0,pFVar31->InvalidationRootReason);
      iVar3 = (pFVar22->Data).ArrayNum;
      pFVar20 = (pFVar22->Data).AllocatorInstance.Data;
      iVar18 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar18 = 0;
      }
      uVar26 = (ulong64)iVar18;
      if (local_468.End < local_468.CurPos + uVar26) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,uVar26);
      }
      if (iVar18 != 0) {
        pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar20,uVar26 * 2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar21 + uVar26 * 2);
      }
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
      if (local_468.End < local_468.CurPos + 0x12) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0x12);
      }
      pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\' Widget Reason: \'",0x24);
      local_468.CurPos = (wchar_t *)((longlong)pvVar21 + 0x24);
      pFVar22 = ::LexToString(&local_490,pFVar31->WidgetReason);
      iVar3 = (pFVar22->Data).ArrayNum;
      pFVar20 = (pFVar22->Data).AllocatorInstance.Data;
      iVar18 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar18 = 0;
      }
      uVar26 = (ulong64)iVar18;
      if (local_468.End < local_468.CurPos + uVar26) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,uVar26);
      }
      if (iVar18 != 0) {
        pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar20,uVar26 * 2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar21 + uVar26 * 2);
      }
      if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.Data.AllocatorInstance.Data);
      }
      if (local_468.End < local_468.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,1);
      }
      pvVar21 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\'",2);
      local_468.CurPos = (wchar_t *)((longlong)pvVar21 + 2);
      if (4 < (byte)LogSlateDebugger._0_1_) {
        if (local_468.End < (wchar_t *)((longlong)pvVar21 + 4U)) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'\0';
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
    }
    pSVar27 = pSVar29;
    if (pSVar29 != (SWidget *)0x0) {
      do {
        cVar16 = (**(code **)(pSVar27->_padding_ + 0x208))();
        if (cVar16 != '\0') {
          uVar26 = pSVar27->UniqueIdentifier;
          pFVar31->WindowId = uVar26;
          if (uVar26 == 0) goto LAB_14244babf;
          EVar4 = pFVar31->InvalidationRootReason;
          if ((EVar4 & Root) == None) {
            if ((EVar4 & ChildOrder) == None) {
              if ((EVar4 & ScreenPosition) == None) {
                EVar2 = pFVar31->WidgetReason;
                if ((EVar2 & ChildOrder) == None) {
                  if ((char)EVar2 < '\0') {
                    pFVar23 = &this->DrawWidgetPrepassColor;
                  }
                  else if ((EVar2 & Layout) == None) {
                    if ((EVar2 & RenderTransform) == None) {
                      if ((EVar2 & Visibility) == None) {
                        if ((EVar2 & Volatility) == None) {
                          if ((EVar2 & Paint) == None) {
                            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("false",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerInvalidate.cpp"
                                                ,0x16b,L"");
                            if (bVar32) {
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            pFVar23 = &FLinearColor::Black;
                          }
                          else {
                            pFVar23 = &this->DrawWidgetPaintColor;
                          }
                        }
                        else {
                          pFVar23 = &this->DrawWidgetVolatilityColor;
                        }
                      }
                      else {
                        pFVar23 = &this->DrawWidgetVisibilityColor;
                      }
                    }
                    else {
                      pFVar23 = &this->DrawWidgetRenderTransformColor;
                    }
                  }
                  else {
                    pFVar23 = &this->DrawWidgetLayoutColor;
                  }
                }
                else {
                  pFVar23 = &this->DrawWidgetChildOrderColor;
                }
              }
              else {
                pFVar23 = &this->DrawRootScreenPositionColor;
              }
            }
            else {
              pFVar23 = &this->DrawRootChildOrderColor;
            }
          }
          else {
            pFVar23 = &this->DrawRootRootColor;
          }
          uVar8 = *(undefined8 *)&pFVar23->field0_0x0;
          uVar9 = *(undefined8 *)((longlong)&pFVar23->field0_0x0 + 8);
          pFVar31->InvalidationTime = dVar7;
          *(undefined8 *)&(pFVar31->DisplayColor).field0_0x0 = uVar8;
          *(undefined8 *)((longlong)&(pFVar31->DisplayColor).field0_0x0 + 8) = uVar9;
          local_4d4._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
          local_4d4._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
          local_4c8 = (float)local_4d4 *
                      (pSVar29->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0]
                      [0] + local_4d4._4_4_ *
                            (pSVar29->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M
                            .M[1][0] +
                      (pSVar29->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                      field0_0x0._s_0.X;
          fStack_4c4 = (float)local_4d4 *
                       *(float *)((longlong)
                                  (pSVar29->PersistentState).AllottedGeometry.
                                  AccumulatedRenderTransform.M.M[0] + 4) +
                       local_4d4._4_4_ *
                       *(float *)((longlong)
                                  ((pSVar29->PersistentState).AllottedGeometry.
                                   AccumulatedRenderTransform.M.M + 1) + 4) +
                       (pSVar29->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                       field0_0x0._s_0.Y;
          TVar10._s_0.Y = fStack_4c4;
          TVar10._s_0.X = local_4c8;
          (pFVar31->InvalidatedPaintLocation).field0_0x0 = TVar10;
          local_4d4 = (pSVar29->PersistentState).AllottedGeometry.Size;
          local_4c0 = (float)local_4d4 *
                      (pSVar29->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0]
                      [0] + local_4d4._4_4_ *
                            (pSVar29->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M
                            .M[1][0];
          fStack_4bc = (float)local_4d4 *
                       *(float *)((longlong)
                                  (pSVar29->PersistentState).AllottedGeometry.
                                  AccumulatedRenderTransform.M.M[0] + 4) +
                       local_4d4._4_4_ *
                       *(float *)((longlong)
                                  ((pSVar29->PersistentState).AllottedGeometry.
                                   AccumulatedRenderTransform.M.M + 1) + 4);
          TVar11._s_0.Y = fStack_4bc;
          TVar11._s_0.X = local_4c0;
          (pFVar31->InvalidatedPaintSize).field0_0x0 = TVar11;
          pSVar29 = (SWidget *)(pFVar31->WidgetInvalidator).WeakReferenceCount.ReferenceController;
          pSVar27 = pSVar29;
          if (pSVar29 == (SWidget *)0x0) goto LAB_14244ba71;
          aVar14 = *(atomic<int> *)&pSVar29->_padding_;
          goto joined_r0x00014244ba5e;
        }
        pTVar5 = (pSVar27->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        pSVar28 = (SWidget *)0x0;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          aVar14 = pTVar5->SharedReferenceCount;
          do {
            if (aVar14 == (atomic<int>)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              pFVar31->WindowId = 0;
              goto LAB_14244babf;
            }
            LOCK();
            aVar17 = pTVar5->SharedReferenceCount;
            bVar32 = aVar14 == aVar17;
            if (bVar32) {
              pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar14 + 1);
              aVar17 = aVar14;
            }
            UNLOCK();
            aVar14 = aVar17;
          } while (!bVar32);
          pSVar28 = (pSVar27->ParentWidgetPtr).Object;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        pSVar27 = pSVar28;
      } while (pSVar28 != (SWidget *)0x0);
      pFVar31->WindowId = 0;
    }
  }
  else if (pSVar29 != (SWidget *)0x0) {
    pFVar20 = (this->FrameRootHandles).AllocatorInstance.Data;
    local_480 = (pSVar29->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    uStack_478 = *(undefined8 *)&(pSVar29->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    local_470._0_2_ = (pSVar29->FastPathProxyHandle).WidgetIndex.ArrayIndex;
    local_470._2_2_ = (pSVar29->FastPathProxyHandle).WidgetIndex.ElementIndex;
    local_470._4_4_ = (pSVar29->FastPathProxyHandle).WidgetSortOrder;
    pFVar25 = pFVar20 + (longlong)(this->FrameRootHandles).ArrayNum * 0x10;
    if (pFVar20 != pFVar25) {
      do {
        if (*(int *)(pFVar20 + 8) == (int)uStack_478) goto LAB_14244b549;
        pFVar20 = pFVar20 + 0x10;
      } while (pFVar20 != pFVar25);
    }
  }
  goto LAB_14244babf;
joined_r0x00014244ba5e:
  do {
    pSVar27 = (SWidget *)0x0;
    if (aVar14 == (atomic<int>)0x0) goto LAB_14244ba71;
    LOCK();
    aVar17 = *(atomic<int> *)&pSVar29->_padding_;
    bVar32 = aVar14 == aVar17;
    if (bVar32) {
      *(atomic<int> *)&pSVar29->_padding_ = (atomic<int>)((int)aVar14 + 1);
      aVar17 = aVar14;
    }
    UNLOCK();
    aVar14 = aVar17;
  } while (!bVar32);
  pSVar28 = (pFVar31->WidgetInvalidator).Object;
  pSVar27 = pSVar29;
  if (pSVar28 != (SWidget *)0x0) {
    pFVar31->bIsInvalidatorPaintValid = true;
    local_4d4._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    local_4d4._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_4b8 = (float)local_4d4 *
                (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0] +
                local_4d4._4_4_ *
                (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0] +
                (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                field0_0x0._s_0.X;
    fStack_4b4 = (float)local_4d4 *
                 *(float *)((longlong)
                            (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M
                            .M[0] + 4) +
                 local_4d4._4_4_ *
                 *(float *)((longlong)
                            ((pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.
                             M.M + 1) + 4) +
                 (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                 field0_0x0._s_0.Y;
    TVar12._s_0.Y = fStack_4b4;
    TVar12._s_0.X = local_4b8;
    (pFVar31->InvalidatorPaintLocation).field0_0x0 = TVar12;
    local_4d4 = (pSVar28->PersistentState).AllottedGeometry.Size;
    local_4b0 = (float)local_4d4 *
                (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[0][0] +
                local_4d4._4_4_ *
                (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M.M[1][0];
    fStack_4ac = (float)local_4d4 *
                 *(float *)((longlong)
                            (pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.M
                            .M[0] + 4) +
                 local_4d4._4_4_ *
                 *(float *)((longlong)
                            ((pSVar28->PersistentState).AllottedGeometry.AccumulatedRenderTransform.
                             M.M + 1) + 4);
    TVar13._s_0.Y = fStack_4ac;
    TVar13._s_0.X = local_4b0;
    (pFVar31->InvalidatorPaintSize).field0_0x0 = TVar13;
  }
LAB_14244ba71:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar27);
  iVar18 = (this->InvalidationInfos).ArrayNum;
  piVar1 = &(this->InvalidationInfos).ArrayMax;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8a8,&(this->InvalidationInfos).AllocatorInstance,piVar1);
  }
  (this->InvalidationInfos).ArrayNum = iVar18 + 1;
  FInvalidationInfo::FInvalidationInfo
            ((FInvalidationInfo *)
             ((this->InvalidationInfos).AllocatorInstance.Data + (longlong)iVar18 * 0xa8),pFVar31);
LAB_14244babf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar30);
  uVar24 = (ulonglong)local_4cc;
  pFVar31 = pFVar31 + 1;
  goto LAB_14244b4a0;
}

// SaveConfig @ 142450e00

void __thiscall FConsoleSlateDebuggerInvalidate::SaveConfig(FConsoleSlateDebuggerInvalidate *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FColor local_res8;
  FString local_18;
  
  pwVar2 = L"";
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bShowWidgetList",this->bShowWidgetList,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bUseWidgetPathAsName",this->bUseWidgetPathAsName,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bShowLegend",this->bShowLegend,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bLogInvalidatedWidget",
             this->bLogInvalidatedWidget,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"SlateDebugger.Invalidate",L"bUsePerformanceThreshold",
             this->bUsePerformanceThreshold,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawRootRootColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawRootRootColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawRootChildOrderColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawRootChildOrderColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawRootScreenPositionColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawRootScreenPositionColor",local_res8,&local_18
            );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetPrepassColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetPrepassColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetLayoutColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetLayoutColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetPaintColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetPaintColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetVolatilityColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetVolatilityColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetChildOrderColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetChildOrderColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetRenderTransformColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetRenderTransformColor",local_res8,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FLinearColor::ToFColorSRGB(&this->DrawWidgetVisibilityColor);
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetColor
            (GConfig,L"SlateDebugger.Invalidate",L"DrawWidgetVisibilityColor",local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetInt
            (GConfig,L"SlateDebugger.Invalidate",L"MaxNumberOfWidgetInList",
             this->MaxNumberOfWidgetInList,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetFloat
            (GConfig,L"SlateDebugger.Invalidate",L"CacheDuration",this->CacheDuration,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FConfigCacheIni::SetFloat
            (GConfig,L"SlateDebugger.Invalidate",L"ThresholdPerformanceMs",
             this->ThresholdPerformanceMs,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StartDebugging @ 142452500

void __thiscall
FConsoleSlateDebuggerInvalidate::StartDebugging(FConsoleSlateDebuggerInvalidate *this)

{
  int *piVar1;
  
  if (this->bEnabled == false) {
    this->bEnabled = true;
    DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
              ((FInvalidationInfo *)(this->InvalidationInfos).AllocatorInstance.Data,
               (this->InvalidationInfos).ArrayNum);
    piVar1 = &(this->InvalidationInfos).ArrayMax;
    (this->InvalidationInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,0,&(this->InvalidationInfos).AllocatorInstance,0,piVar1);
    }
    DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
              ((FInvalidationInfo *)(this->FrameInvalidationInfos).AllocatorInstance.Data,
               (this->FrameInvalidationInfos).ArrayNum);
    piVar1 = &(this->FrameInvalidationInfos).ArrayMax;
    (this->FrameInvalidationInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,0,&(this->FrameInvalidationInfos).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->FrameRootHandles).ArrayMax;
    (this->FrameRootHandles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->FrameRootHandles).AllocatorInstance,0,piVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerInvalidate>
              ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::PaintDebugElements,
               (FConsoleSlateDebuggerInvalidate *)&stack0x00000008,(pmf_39de65f2)this);
    TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerInvalidate>
              ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::WidgetInvalidateEvent,
               (FConsoleSlateDebuggerInvalidate *)&stack0x00000008,(pmf_5df08f3f)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FConsoleSlateDebuggerInvalidate>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrame,(FConsoleSlateDebuggerInvalidate *)&stack0x00000008,
               (pmf_ffc87156)this);
    this->bEnabledCVarValue = this->bEnabled;
    return;
  }
  this->bEnabledCVarValue = this->bEnabled;
  return;
}

// StopDebugging @ 142452b90

void __thiscall
FConsoleSlateDebuggerInvalidate::StopDebugging(FConsoleSlateDebuggerInvalidate *this)

{
  int *piVar1;
  
  if (this->bEnabled != false) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::WidgetInvalidateEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::PaintDebugElements,this);
    DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
              ((FInvalidationInfo *)(this->InvalidationInfos).AllocatorInstance.Data,
               (this->InvalidationInfos).ArrayNum);
    piVar1 = &(this->InvalidationInfos).ArrayMax;
    (this->InvalidationInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,0,&(this->InvalidationInfos).AllocatorInstance,0,piVar1);
    }
    DestructItems<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,int>
              ((FInvalidationInfo *)(this->FrameInvalidationInfos).AllocatorInstance.Data,
               (this->FrameInvalidationInfos).ArrayNum);
    piVar1 = &(this->FrameInvalidationInfos).ArrayMax;
    (this->FrameInvalidationInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,0,&(this->FrameInvalidationInfos).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->FrameRootHandles).ArrayMax;
    (this->FrameRootHandles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->FrameRootHandles).AllocatorInstance,0,piVar1);
    }
    this->bEnabled = false;
    this->bEnabledCVarValue = false;
    return;
  }
  this->bEnabledCVarValue = false;
  return;
}

