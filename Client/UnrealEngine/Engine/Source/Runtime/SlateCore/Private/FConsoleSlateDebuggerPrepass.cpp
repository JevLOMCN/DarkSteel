// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// FConsoleSlateDebuggerPrepass @ 14242b080

FConsoleSlateDebuggerPrepass * __thiscall
FConsoleSlateDebuggerPrepass::FConsoleSlateDebuggerPrepass(FConsoleSlateDebuggerPrepass *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  FConsoleSlateDebuggerPassBase::FConsoleSlateDebuggerPassBase
            ((FConsoleSlateDebuggerPassBase *)this);
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerPrepass__6B_;
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
    puVar1[4] = FConsoleSlateDebuggerPassBase::HandleEnabled;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnabledRefCVar,L"SlateDebugger.Prepass.Enable",(bool *)&this->_padding_,
             L"Start/Stop the prepassed widget debug tool. It shows when widgets are prepassed.",
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ShowPrepassWidgetCommand,L"SlateDebugger.Prepass.Start",
             L"Start the prepassed widget debug tool. Use to show widget that have been prepassed this frame."
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->HidePrepassWidgetCommand,L"SlateDebugger.Prepass.Stop",
             L"Stop the prepassed widget debug tool.",
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->LogPrepassedWidgetOnceCommand,L"SlateDebugger.Prepass.LogOnce",
             L"Log the names of all widgets that were prepassed during the last update.",
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->EnableWidgetsNameListRefCVar,L"SlateDebugger.Prepass.EnableWidgetNameList",
             (bool *)((longlong)&this->_padding_ + 1),
             L"Start/Stop displaying the name of the widgets that have been prepassed.",
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ToggleWidgetsNameListCommand,L"SlateDebugger.Prepass.ToggleWidgetNameList",
             L"Option displaying the name of the widgets that have been prepassed.",
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->MaxNumberOfWidgetInListRefCVar,
             L"SlateDebugger.Prepass.MaxNumberOfWidgetDisplayedInList",(int *)&this->_padding_,
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
    puVar1[4] = FConsoleSlateDebuggerPassBase::HandleDebugGameWindowOnlyChanged;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->OnlyGameWindowRefCVar,L"SlateDebugger.Prepass.OnlyGameWindow",
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->DrawBorderEnabledRefCVar,L"SlateDebugger.Prepass.DrawBorder",
             (bool *)((longlong)&this->_padding_ + 4),
             L"Draw a border around the widgets being prepassed",
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
    puVar1[4] = FConsoleSlateDebuggerPassBase::SaveConfigOnVariableChanged;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->DrawFillEnabledRefCVar,L"SlateDebugger.Prepass.DrawFill",
             (bool *)((longlong)&this->_padding_ + 3),L"Fill the widgets being prepassed",
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
  this->_padding_ = 0x41a0000041200000;
  return this;
}

// ~FConsoleSlateDebuggerPrepass @ 14242eaa0

void __thiscall
FConsoleSlateDebuggerPrepass::~FConsoleSlateDebuggerPrepass(FConsoleSlateDebuggerPrepass *this)

{
  this->_padding_ = (longlong)&___7FConsoleSlateDebuggerPrepass__6B_;
  FConsoleSlateDebuggerPassBase::StopDebugging((FConsoleSlateDebuggerPassBase *)this);
  *(undefined ***)&(this->DrawFillEnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DrawFillEnabledRefCVar);
  *(undefined ***)&(this->DrawBorderEnabledRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DrawBorderEnabledRefCVar);
  *(undefined ***)&(this->OnlyGameWindowRefCVar).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->OnlyGameWindowRefCVar);
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
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&this->LogPrepassedWidgetOnceCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->HidePrepassWidgetCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ShowPrepassWidgetCommand);
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

// AddUpdatedWidget @ 142432f30

void __thiscall
FConsoleSlateDebuggerPrepass::AddUpdatedWidget
          (FConsoleSlateDebuggerPrepass *this,SWidget *param_1,ulong64 param_2,bool param_3)

{
  FWidgetInfo *pFVar1;
  
  pFVar1 = FConsoleSlateDebuggerPassBase::AddUpdatedWidget_Internal
                     ((FConsoleSlateDebuggerPassBase *)this,param_1,param_2,
                      param_1->LastPrepassFrame);
  if (param_3) {
    pFVar1->UpdateCount = pFVar1->UpdateCount + 1;
  }
  return;
}

// GetConfigSection @ 14243ea60

FString * __thiscall
FConsoleSlateDebuggerPrepass::GetConfigSection
          (FConsoleSlateDebuggerPrepass *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SlateDebugger.Prepass");
  return __return_storage_ptr__;
}

// GetEnabledCVar @ 14243eb70

FAutoConsoleVariableRef * __thiscall
FConsoleSlateDebuggerPrepass::GetEnabledCVar(FConsoleSlateDebuggerPrepass *this)

{
  return &this->EnabledRefCVar;
}

// GetNumberOfWidgetsUpdatedLogString @ 14243f290

FString * __thiscall
FConsoleSlateDebuggerPrepass::GetNumberOfWidgetsUpdatedLogString
          (FConsoleSlateDebuggerPrepass *this,FString *__return_storage_ptr__,uint param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d widgets prepassed");
  return __return_storage_ptr__;
}

// HandleEndWidgetPrepass @ 1424407b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerPrepass::HandleEndWidgetPrepass
          (FConsoleSlateDebuggerPrepass *this,SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplicationBase *pFVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  longlong *plVar5;
  FWidgetInfo *pFVar6;
  undefined1 local_res10 [8];
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget_const_,1> local_18;
  
  pFVar3 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x28);
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_18);
  (*pcVar1)(pFVar3,&local_28,pTVar4);
  if (local_28 != (longlong *)0x0) {
    if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
      if ((local_28 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*(int *)((longlong)local_28 + 0x374) != 5) &&
         (plVar5 = (longlong *)(**(code **)(*local_28 + 0x1f0))(local_28,local_res10),
         *plVar5 != this->_padding_)) goto LAB_1424408b2;
    }
    if ((local_28 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = FConsoleSlateDebuggerPassBase::AddUpdatedWidget_Internal
                       ((FConsoleSlateDebuggerPassBase *)this,param_1,local_28[0x40],
                        param_1->LastPrepassFrame);
    pFVar6->UpdateCount = pFVar6->UpdateCount + 1;
  }
LAB_1424408b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// LoadConfig @ 142447370

void __thiscall FConsoleSlateDebuggerPrepass::LoadConfig(FConsoleSlateDebuggerPrepass *this)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FConsoleSlateDebuggerPassBase::LoadConfig((FConsoleSlateDebuggerPassBase *)this);
  plVar2 = *(longlong **)&(this->OnlyGameWindowRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 7);
  local_4c = 0x4000000;
  lVar3 = *plVar2;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0xf000000;
  local_34 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,local_58,&local_4c);
  puVar6 = &u_0;
  puVar5 = &u_0;
  if (cVar1 != '\0') {
    puVar5 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar5,uVar4);
  plVar2 = *(longlong **)&(this->EnableWidgetsNameListRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  local_4c = 0x4000000;
  lVar3 = *plVar2;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0xf000000;
  local_34 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,local_58,&local_4c);
  puVar5 = &u_0;
  if (cVar1 != '\0') {
    puVar5 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar5,uVar4);
  plVar2 = *(longlong **)&(this->DrawFillEnabledRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  local_4c = 0x4000000;
  lVar3 = *plVar2;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0xf000000;
  local_34 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,local_58,&local_4c);
  puVar5 = &u_0;
  if (cVar1 != '\0') {
    puVar5 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar5,uVar4);
  plVar2 = *(longlong **)&(this->DrawBorderEnabledRefCVar).field_0x8;
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  local_4c = 0x4000000;
  lVar3 = *plVar2;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0xf000000;
  local_34 = 0x1000000;
  uVar4 = (**(code **)(lVar3 + 0xa8))(plVar2,local_58,&local_4c);
  if (cVar1 != '\0') {
    puVar6 = &u_1;
  }
  (**(code **)(lVar3 + 0xb0))(plVar2,puVar6,uVar4);
  return;
}

// StartDebugging_Internal @ 142452a90

void __thiscall
FConsoleSlateDebuggerPrepass::StartDebugging_Internal(FConsoleSlateDebuggerPrepass *this)

{
  FConsoleSlateDebuggerPassBase::StartDebugging_Internal((FConsoleSlateDebuggerPassBase *)this);
  TMulticastDelegateRegistration<void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>::
  AddRaw<FConsoleSlateDebuggerPrepass>
            ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
              *)&FSlateDebugging::EndWidgetPrepass,(FConsoleSlateDebuggerPrepass *)&stack0x00000010,
             (pmf_c4210563)this);
  return;
}

// StopDebugging_Internal @ 142453090

void __thiscall
FConsoleSlateDebuggerPrepass::StopDebugging_Internal(FConsoleSlateDebuggerPrepass *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::EndWidgetPrepass,this);
  FConsoleSlateDebuggerPassBase::StopDebugging_Internal((FConsoleSlateDebuggerPassBase *)this);
  return;
}

