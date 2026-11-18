// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TimerExecute @ 1488e40f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FLoopingTestFunc::TimerExecute(void)

{
  float fVar1;
  FTimerManager *this;
  FTimerHandle *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FTimerData *pFVar5;
  FDelegateAllocation local_28 [2];
  
  pFVar2 = Handle;
  this = TimerManager;
  fVar1 = NewTime;
  TimerCalled = TimerCalled + 1;
  if (TimerCalled == 1) {
    local_28[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_28[0].DelegateSize = 0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,local_28);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseStaticDelegateInstance___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      puVar3[3] = TimerExecute;
    }
    FTimerManager::SetTimer
              (TimerManager,Handle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)local_28,
               fVar1,true,__real_bf800000);
    if (local_28[0].DelegateSize != 0) {
      if (local_28[0].DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_28[0].DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)local_28,0,0,0x10);
      local_28[0].DelegateSize = 0;
    }
    if (local_28[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_28[0].DelegateAllocator);
      return;
    }
  }
  else {
    pFVar5 = FTimerManager::FindTimer(TimerManager,Handle);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this,(FTimerHandle)pFVar2->Handle);
    }
    pFVar2->Handle = 0;
  }
  return;
}

