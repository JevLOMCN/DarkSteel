// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerRuntime
// Functions: 2

// StartupModule @ 14cd8b2c0

void __thiscall FRewindDebuggerRuntimeModule::StartupModule(FRewindDebuggerRuntimeModule *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  FRewindDebuggerRuntime *pFVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  IModularFeatures *pIVar10;
  FRewindDebuggerRuntimeModule *pFVar11;
  undefined8 in_stack_fffffffffffffef8;
  uint uVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  FDelegateAllocation local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar12 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  if (RewindDebugger::FRewindDebuggerRuntime::InternalInstance == (FRewindDebuggerRuntime *)0x0) {
    RewindDebugger::FRewindDebuggerRuntime::InternalInstance = ::operator_new(0x68);
    if (RewindDebugger::FRewindDebuggerRuntime::InternalInstance == (FRewindDebuggerRuntime *)0x0) {
      RewindDebugger::FRewindDebuggerRuntime::InternalInstance = (FRewindDebuggerRuntime *)0x0;
    }
    else {
      *(undefined4 *)&RewindDebugger::FRewindDebuggerRuntime::InternalInstance->field_0x61 = 0;
      *(undefined2 *)&RewindDebugger::FRewindDebuggerRuntime::InternalInstance->field_0x65 = 0;
      RewindDebugger::FRewindDebuggerRuntime::InternalInstance->field_0x67 = 0;
      *(undefined8 *)&RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStarted = 0
      ;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStarted).field_0x8 = 0;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStarted).field_0x10 = 0;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStarted).field_0x18 = 2;
      *(undefined8 *)&RewindDebugger::FRewindDebuggerRuntime::InternalInstance->ClearRecording = 0;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->ClearRecording).field_0x8 = 0;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->ClearRecording).field_0x10 = 0;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->ClearRecording).field_0x18 = 2;
      *(undefined8 *)&RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStopped = 0
      ;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStopped).field_0x8 = 0;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStopped).field_0x10 = 0;
      *(undefined8 *)
       &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStopped).field_0x18 = 2;
      RewindDebugger::FRewindDebuggerRuntime::InternalInstance->bIsRecording = false;
    }
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pFVar4 = RewindDebugger::FRewindDebuggerRuntime::InternalInstance;
  pIVar3 = IConsoleManager::Singleton;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFRewindDebuggerRuntime_RewindDebugger____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs;
    puVar7[3] = pFVar4;
    if (pFVar4 == (FRewindDebuggerRuntime *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  puVar7 = (undefined8 *)((ulonglong)uVar12 << 0x20);
  local_a8 = (*pcVar2)(pIVar3,L"RewindDebugger.StartRecording",
                       L"Starts making a rewind debugger recording.",&local_d8,puVar7);
  pFVar1 = (this->ConsoleObjects).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)(this->ConsoleObjects).ArrayMax * 8)
     ) {
    puVar7 = &local_a8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = (this->ConsoleObjects).ArrayNum;
  if (iVar6 == (this->ConsoleObjects).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConsoleObjects).AllocatorInstance,
                       &(this->ConsoleObjects).ArrayMax);
  }
  (this->ConsoleObjects).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->ConsoleObjects).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_98);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pFVar4 = RewindDebugger::FRewindDebuggerRuntime::InternalInstance;
  pIVar3 = IConsoleManager::Singleton;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_48);
  local_30 = &local_b8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_b8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar8;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFRewindDebuggerRuntime_RewindDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[4] = RewindDebugger::FRewindDebuggerRuntime::StopRecording;
    puVar9[3] = pFVar4;
    if (pFVar4 == (FRewindDebuggerRuntime *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_a0 = (*pcVar2)(pIVar3,L"RewindDebugger.StopRecording",
                       L"Stops the current rewind debugger recording.",&local_c0,
                       (ulonglong)puVar7 & 0xffffffff00000000);
  pFVar1 = (this->ConsoleObjects).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a0) &&
     ((FScriptContainerElement *)&local_a0 < pFVar1 + (longlong)(this->ConsoleObjects).ArrayMax * 8)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = (this->ConsoleObjects).ArrayNum;
  if (iVar6 == (this->ConsoleObjects).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConsoleObjects).AllocatorInstance,
                       &(this->ConsoleObjects).ArrayMax);
  }
  (this->ConsoleObjects).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->ConsoleObjects).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_80);
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b8,0,0,0x10);
    local_b8.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  pIVar10 = IModularFeatures::Get();
  pFVar11 = this + 1;
  if (this == (FRewindDebuggerRuntimeModule *)0xffffffffffffffe8) {
    pFVar11 = (FRewindDebuggerRuntimeModule *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cd8b7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar10 + 0x28))
            (pIVar10,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar11,
             *(code **)((longlong)*pIVar10 + 0x28));
  return;
}

// ShutdownModule @ 14cd8b7f0

void __thiscall FRewindDebuggerRuntimeModule::ShutdownModule(FRewindDebuggerRuntimeModule *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  IConsoleManager *pIVar6;
  FRewindDebuggerRuntime *this_00;
  bool bVar7;
  IModularFeatures *pIVar8;
  FScriptContainerElement *pFVar9;
  FRewindDebuggerRuntimeModule *pFVar10;
  undefined1 local_res8 [8];
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  pIVar6 = IConsoleManager::Singleton;
  pFVar9 = (this->ConsoleObjects).AllocatorInstance.Data;
  iVar3 = (this->ConsoleObjects).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ConsoleObjects).ArrayNum != iVar3) {
      `TCheckedPointerIterator<IConsoleObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    if (*(longlong *)pFVar9 != 0) {
      (**(code **)((longlong)*pIVar6 + 0xb8))(pIVar6);
    }
    pFVar9 = pFVar9 + 8;
  }
  piVar1 = &(this->ConsoleObjects).ArrayMax;
  (this->ConsoleObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConsoleObjects).AllocatorInstance,0,piVar1);
  }
  this_00 = RewindDebugger::FRewindDebuggerRuntime::InternalInstance;
  if (RewindDebugger::FRewindDebuggerRuntime::InternalInstance != (FRewindDebuggerRuntime *)0x0) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStopped).
                 field_0x8,
               *(int *)&(RewindDebugger::FRewindDebuggerRuntime::InternalInstance->RecordingStopped)
                        .field_0x10);
    pvVar4 = *(void **)&(this_00->RecordingStopped).field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this_00->RecordingStopped);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(this_00->ClearRecording).field_0x8,*(int *)&(this_00->ClearRecording).field_0x10);
    pvVar4 = *(void **)&(this_00->ClearRecording).field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this_00->ClearRecording);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(this_00->RecordingStarted).field_0x8,
               *(int *)&(this_00->RecordingStarted).field_0x10);
    pvVar4 = *(void **)&(this_00->RecordingStarted).field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x68);
  }
  RewindDebugger::FRewindDebuggerRuntime::InternalInstance = (FRewindDebuggerRuntime *)0x0;
  pIVar8 = IModularFeatures::Get();
  pFVar10 = this + 1;
  if (this == (FRewindDebuggerRuntimeModule *)0xffffffffffffffe8) {
    pFVar10 = (FRewindDebuggerRuntimeModule *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cd8b981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar8 + 0x30))
            (pIVar8,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar10,
             *(code **)((longlong)*pIVar8 + 0x30));
  return;
}

