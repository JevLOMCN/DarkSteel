// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosVDScopedTLSBufferAccessor @ 14373ce80

FChaosVDScopedTLSBufferAccessor * __thiscall
FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor
          (FChaosVDScopedTLSBufferAccessor *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FChaosVDScopedTLSBufferAccessor *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FTlsAutoCleanup local_res18;
  code *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_90 = local_res8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar4);
  if (*(int *)(pFVar5 + 0x45) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferAccessCounter == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                       ,0x5d,L"The CVD buffer is already in use!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FChaosVDScopedTLSBufferAccessor *)(*pcVar2)();
      return pFVar6;
    }
  }
  if (pFVar5[0x44] == (FTlsAutoCleanup)0x0) {
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__O___GetTLSDataBufferRef_FChaosVDThreadContext__IEAAAEAV__TArray_EV__TSizedDefaultAllocator__0CA_____XZ___V__6B_
      ;
      puVar7[3] = pFVar5;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FChaosVDRuntimeModule::RecordingStopDelegate,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res18);
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    pFVar5[0x44] = local_res18;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  }
  this->BufferRef = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar5 + 0x46);
  puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_80 = local_res10;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar4);
  *(int *)(pFVar5 + 0x45) = *(int *)(pFVar5 + 0x45) + 1;
  pTVar1 = this->BufferRef;
  if (pTVar1->ArrayMax < 0xffff) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0xffff,&pTVar1->AllocatorInstance,pTVar1->ArrayNum,&pTVar1->ArrayMax);
  }
  return this;
}

// ~FChaosVDScopedTLSBufferAccessor @ 14373f030

void __thiscall
FChaosVDScopedTLSBufferAccessor::~FChaosVDScopedTLSBufferAccessor
          (FChaosVDScopedTLSBufferAccessor *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  pTVar1 = this->BufferRef;
  pTVar1->ArrayNum = 0;
  if (pTVar1->ArrayMax < 0xffff) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0xffff,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
  }
  puVar2 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
  *(int *)(pFVar3 + 0x45) = *(int *)(pFVar3 + 0x45) + -1;
  return;
}

