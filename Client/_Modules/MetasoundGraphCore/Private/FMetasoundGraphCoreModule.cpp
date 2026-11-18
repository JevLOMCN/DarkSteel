// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// StartupModule @ 14ad28c70

void __thiscall Metasound::FMetasoundGraphCoreModule::StartupModule(FMetasoundGraphCoreModule *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_108;
  FDelegateAllocation FStack_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_f0;
  FDelegateAllocation FStack_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_d8;
  FDelegateAllocation FStack_d0;
  FDestructionSentinel FStack_c0;
  FDestructionSentinel FStack_a8;
  FDestructionSentinel FStack_90;
  FDestructionSentinel FStack_78;
  FDelegateAllocation *pFStack_60;
  FDestructionSentinel FStack_58;
  FDelegateAllocation *pFStack_40;
  FDestructionSentinel FStack_38;
  FDelegateAllocation *pFStack_20;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  TStack_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_100.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_108,(FWriteAccessScope *)&FStack_78);
  pFStack_60 = &FStack_100;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&FStack_100);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (FStack_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_78.Accessor,&FStack_78);
  }
  (*pcVar1)(pIVar2,L"au.Metasound.Profiling.AddNodes",
            L"Adds the specified node class name(s) to the list of metasound nodes that will be profiled and visible in Insights."
            ,&TStack_108,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_108,(FWriteAccessScope *)&FStack_c0);
  if ((FStack_100.DelegateSize != 0) &&
     (FStack_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_100,0,0,0x10);
    FStack_100.DelegateSize = 0;
  }
  if (FStack_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
  }
  if (FStack_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_108.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  TStack_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_e8.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_f0,(FWriteAccessScope *)&FStack_58);
  pFStack_40 = &FStack_e8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&FStack_e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  (*pcVar1)(pIVar2,L"au.Metasound.Profiling.ListNodes",
            L"Lists the node class names that will be profiled and visible in Insights.",&TStack_f0,
            0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_f0,(FWriteAccessScope *)&FStack_a8);
  if ((FStack_e8.DelegateSize != 0) &&
     (FStack_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_e8,0,0,0x10);
    FStack_e8.DelegateSize = 0;
  }
  if (FStack_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a8.Accessor,&FStack_a8);
  }
  if (FStack_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_f0.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  TStack_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_d0.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_d8,(FWriteAccessScope *)&FStack_38);
  pFStack_20 = &FStack_d0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&FStack_d0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (FStack_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_38.Accessor,&FStack_38);
  }
  (*pcVar1)(pIVar2,L"au.Metasound.Profiling.RemoveNodes",
            L"Removes the specified node class name(s) (or ALL if no names are provided) from the list of node types that will be profiled and visible in Insights."
            ,&TStack_d8,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_d8,(FWriteAccessScope *)&FStack_90);
  if ((FStack_d0.DelegateSize != 0) &&
     (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_d0,0,0,0x10);
    FStack_d0.DelegateSize = 0;
  }
  if (FStack_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_90.Accessor,&FStack_90);
  }
  if (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_d8.AccessDetector);
  return;
}

