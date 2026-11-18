// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// FConsoleSlateDebuggerPaint @ 14242a420

FConsoleSlateDebuggerPaint * __thiscall
FConsoleSlateDebuggerPaint::FConsoleSlateDebuggerPaint(FConsoleSlateDebuggerPaint *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  FConsoleSlateDebuggerPassBase::FConsoleSlateDebuggerPassBase
            ((FConsoleSlateDebuggerPassBase *)this);
  this->bLogWarningIfWidgetIsPaintedMoreThanOnce = true;
  local_68 = (undefined1  [8])0x0;
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerPaint__6B_;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = FConsoleSlateDebuggerPassBase::HandleEnabled;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnabledRefCVar,L"SlateDebugger.Paint.Enable",(bool *)&this->_padding_,
             L"Start/Stop the painted widget debug tool. It shows when widgets are painted.",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = FConsoleSlateDebuggerPassBase::StartDebugging;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ShowPaintWidgetCommand,L"SlateDebugger.Paint.Start",
             L"Start the painted widget debug tool. Use to show widget that have been painted this frame."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68,0);
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = FConsoleSlateDebuggerPassBase::StopDebugging;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->HidePaintWidgetCommand,L"SlateDebugger.Paint.Stop",
             L"Stop the painted widget debug tool.",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = FConsoleSlateDebuggerPassBase::HandleLogOnce;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->LogPaintedWidgetOnceCommand,L"SlateDebugger.Paint.LogOnce",
             L"Log the names of all widgets that were painted during the last update.",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableWidgetsNameListRefCVar,L"SlateDebugger.Paint.EnableWidgetNameList",
             (bool *)((longlong)&this->_padding_ + 1),
             L"Start/Stop displaying the name of the widgets that have been painted.",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = FConsoleSlateDebuggerPassBase::HandleToggleWidgetNameList;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ToggleWidgetsNameListCommand,L"SlateDebugger.Paint.ToggleWidgetNameList",
             L"Option displaying the name of the widgets that have been painted.",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->MaxNumberOfWidgetInListRefCVar,
             L"SlateDebugger.Paint.MaxNumberOfWidgetDisplayedInList",(int *)&this->_padding_,
             L"The max number of widgets that will be displayed when DisplayWidgetNameList is active."
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->LogWarningIfWidgetIsPaintedMoreThanOnceRefCVar,
             L"SlateDebugger.Paint.LogWarningIfWidgetIsPaintedMoreThanOnce",
             &this->bLogWarningIfWidgetIsPaintedMoreThanOnce,
             L"Option to log a warning if a widget is painted more than once in a single frame.",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = FConsoleSlateDebuggerPassBase::HandleDebugGameWindowOnlyChanged;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->OnlyGameWindowRefCVar,L"SlateDebugger.Paint.OnlyGameWindow",
             (bool *)((longlong)&this->_padding_ + 7),L"Option to only debug the game window",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->DrawBorderEnabledRefCVar,L"SlateDebugger.Paint.DrawBorder",
             (bool *)((longlong)&this->_padding_ + 4),
             L"Draw a border around the widgets being painted",
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
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->DrawFillEnabledRefCVar,L"SlateDebugger.Paint.DrawFill",
             (bool *)((longlong)&this->_padding_ + 3),L"Fill the widgets being painted",
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
  return this;
}

// ~FConsoleSlateDebuggerPaint @ 14242e960

void __thiscall
FConsoleSlateDebuggerPaint::~FConsoleSlateDebuggerPaint(FConsoleSlateDebuggerPaint *this)

{
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerPaint__6B_;
  FConsoleSlateDebuggerPassBase::StopDebugging((FConsoleSlateDebuggerPassBase *)this);
  *(undefined ***)&(this->DrawFillEnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DrawFillEnabledRefCVar);
  *(undefined ***)&(this->DrawBorderEnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DrawBorderEnabledRefCVar);
  *(undefined ***)&(this->OnlyGameWindowRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->OnlyGameWindowRefCVar);
  *(undefined ***)&(this->LogWarningIfWidgetIsPaintedMoreThanOnceRefCVar).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->LogWarningIfWidgetIsPaintedMoreThanOnceRefCVar);
  *(undefined ***)&(this->MaxNumberOfWidgetInListRefCVar).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->MaxNumberOfWidgetInListRefCVar);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ToggleWidgetsNameListCommand)
  ;
  *(undefined ***)&(this->EnableWidgetsNameListRefCVar).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnableWidgetsNameListRefCVar)
  ;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->LogPaintedWidgetOnceCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->HidePaintWidgetCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ShowPaintWidgetCommand);
  *(undefined ***)&(this->EnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->EnabledRefCVar);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerPassBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FConsoleSlateDebuggerPassBase::FWidgetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// AddUpdatedWidget @ 142432ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerPaint::AddUpdatedWidget
          (FConsoleSlateDebuggerPaint *this,SWidget *param_1,ulong64 param_2,bool param_3)

{
  FWidgetInfo *pFVar1;
  
  pFVar1 = FConsoleSlateDebuggerPassBase::AddUpdatedWidget_Internal
                     ((FConsoleSlateDebuggerPassBase *)this,param_1,param_2,param_1->LastPaintFrame)
  ;
  if (((this->bLogWarningIfWidgetIsPaintedMoreThanOnce != false) && (pFVar1->UpdateCount != 0)) &&
     (2 < (byte)LogSlateDebugger._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
  }
  if (param_3) {
    pFVar1->UpdateCount = pFVar1->UpdateCount + 1;
  }
  return;
}

// GetConfigSection @ 14243ea30

FString * __thiscall
FConsoleSlateDebuggerPaint::GetConfigSection
          (FConsoleSlateDebuggerPaint *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SlateDebugger.Paint");
  return __return_storage_ptr__;
}

// GetEnabledCVar @ 14243eb60

FAutoConsoleVariableRef * __thiscall
FConsoleSlateDebuggerPaint::GetEnabledCVar(FConsoleSlateDebuggerPaint *this)

{
  return &this->EnabledRefCVar;
}

// GetNumberOfWidgetsUpdatedLogString @ 14243f260

FString * __thiscall
FConsoleSlateDebuggerPaint::GetNumberOfWidgetsUpdatedLogString
          (FConsoleSlateDebuggerPaint *this,FString *__return_storage_ptr__,uint param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d widgets painted");
  return __return_storage_ptr__;
}

// HandleEndWidgetPaint @ 1424406e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerPaint::HandleEndWidgetPaint
          (FConsoleSlateDebuggerPaint *this,SWidget *param_1,FSlateWindowElementList *param_2,
          int param_3)

{
  SWindow *pSVar1;
  longlong *plVar2;
  FWidgetInfo *pFVar3;
  ulong64 uVar4;
  undefined1 local_res8 [8];
  
  pSVar1 = FSlateWindowElementList::GetPaintWindow(param_2);
  if (((*(char *)((longlong)&this->_padding_ + 7) == '\0') || (pSVar1->Type == GameWindow)) ||
     (plVar2 = (longlong *)(**(code **)(pSVar1->_padding_ + 0x1f0))(pSVar1,local_res8),
     *plVar2 == this->_padding_)) {
    pSVar1 = FSlateWindowElementList::GetPaintWindow(param_2);
    if (pSVar1 == (SWindow *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = pSVar1->_padding_;
    }
    pFVar3 = FConsoleSlateDebuggerPassBase::AddUpdatedWidget_Internal
                       ((FConsoleSlateDebuggerPassBase *)this,param_1,uVar4,param_1->LastPaintFrame)
    ;
    if (((this->bLogWarningIfWidgetIsPaintedMoreThanOnce != false) && (pFVar3->UpdateCount != 0)) &&
       (2 < (byte)LogSlateDebugger._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    pFVar3->UpdateCount = pFVar3->UpdateCount + 1;
  }
  return;
}

// LoadConfig @ 142446bf0

void __thiscall FConsoleSlateDebuggerPaint::LoadConfig(FConsoleSlateDebuggerPaint *this)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  undefined *puVar7;
  undefined *puVar8;
  FString local_68;
  FString local_58;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FConsoleSlateDebuggerPassBase::LoadConfig((FConsoleSlateDebuggerPassBase *)this);
  ::FString::FString(&local_68,L"SlateDebugger.Paint");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_58,(wchar_t *)FVar5.Data);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pwVar6 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_68,pwVar6);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetBool
            (GConfig,(wchar_t *)FVar5.Data,L"bLogWarningIfWidgetIsPaintedMoreThanOnce",
             &this->bLogWarningIfWidgetIsPaintedMoreThanOnce,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  plVar2 = *(longlong **)&(this->OnlyGameWindowRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 7);
  local_48 = 0x4000000;
  lVar3 = *plVar2;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0xf000000;
  local_30 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,&local_68,&local_48);
  puVar8 = &u_0;
  puVar7 = &u_0;
  if (cVar1 != '\0') {
    puVar7 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar7,uVar4);
  plVar2 = *(longlong **)&(this->EnableWidgetsNameListRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  local_48 = 0x4000000;
  lVar3 = *plVar2;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0xf000000;
  local_30 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,&local_68,&local_48);
  puVar7 = &u_0;
  if (cVar1 != '\0') {
    puVar7 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar7,uVar4);
  plVar2 = *(longlong **)&(this->DrawFillEnabledRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  local_48 = 0x4000000;
  lVar3 = *plVar2;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0xf000000;
  local_30 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,&local_68,&local_48);
  puVar7 = &u_0;
  if (cVar1 != '\0') {
    puVar7 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar7,uVar4);
  plVar2 = *(longlong **)&(this->DrawBorderEnabledRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  local_48 = 0x4000000;
  lVar3 = *plVar2;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0xf000000;
  local_30 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,&local_68,&local_48);
  if (cVar1 != '\0') {
    puVar8 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar8,uVar4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveConfig @ 142451760

void __thiscall FConsoleSlateDebuggerPaint::SaveConfig(FConsoleSlateDebuggerPaint *this)

{
  ForAnyElementType FVar1;
  wchar_t *pwVar2;
  FString local_28;
  FString local_18;
  
  FConsoleSlateDebuggerPassBase::SaveConfig((FConsoleSlateDebuggerPassBase *)this);
  ::FString::FString(&local_28,L"SlateDebugger.Paint");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,(wchar_t *)FVar1.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar2);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool
            (GConfig,(wchar_t *)FVar1.Data,L"bLogWarningIfWidgetIsPaintedMoreThanOnce",
             this->bLogWarningIfWidgetIsPaintedMoreThanOnce,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StartDebugging_Internal @ 142452930

void __thiscall
FConsoleSlateDebuggerPaint::StartDebugging_Internal(FConsoleSlateDebuggerPaint *this)

{
  FConsoleSlateDebuggerPassBase::StartDebugging_Internal((FConsoleSlateDebuggerPassBase *)this);
  TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
  ::AddRaw<FConsoleSlateDebuggerPaint>
            ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::EndWidgetPaint,(FConsoleSlateDebuggerPaint *)&stack0x00000010,
             (pmf_38a42201)this);
  return;
}

// StopDebugging_Internal @ 142452f60

void __thiscall FConsoleSlateDebuggerPaint::StopDebugging_Internal(FConsoleSlateDebuggerPaint *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::EndWidgetPaint,
             this);
  FConsoleSlateDebuggerPassBase::StopDebugging_Internal((FConsoleSlateDebuggerPassBase *)this);
  return;
}

