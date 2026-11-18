// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// StartupModule @ 145d73050

void __thiscall FRenderCoreModule::StartupModule(FRenderCoreModule *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
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
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[3] = UpdateShaderDevelopmentMode;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  (*pcVar1)(pIVar2,local_res10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  InitRenderGraph();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrameRT,(_func___cdecl_void *)local_res18);
  return;
}

// ShutdownModule @ 145d731e0

void __thiscall FRenderCoreModule::ShutdownModule(FRenderCoreModule *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskHandle FVar3;
  
  FVar3.Pimpl.Reference = FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference;
  if (FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait
              ((FTaskBase *)FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference);
    FVar3 = FRDGBuilder::FAsyncDeleter::LastTask;
  }
  FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  if (FVar3.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &((FTaskBase *)FVar3.Pimpl.Reference)->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000145d73227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FTaskBase *)FVar3.Pimpl.Reference)->_padding_)(FVar3.Pimpl.Reference,1);
      return;
    }
  }
  return;
}

