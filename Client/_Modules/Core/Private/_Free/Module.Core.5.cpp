// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 346

// RunnableTlsSlot'' @ 140f03120

void __cdecl `dynamic_initializer_for_'FRunnableThread::RunnableTlsSlot__(void)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x347,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = TlsAlloc();
  if (DVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot( TlsSlot )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x349,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRunnableThread::RunnableTlsSlot = DVar3;
  return;
}

// `dynamic_initializer_for_'CVarDoPooledThreadWaitTimeouts'' @ 140f031a0

void __cdecl _dynamic_initializer_for__CVarDoPooledThreadWaitTimeouts__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDoPooledThreadWaitTimeouts,L"DoPooledThreadWaitTimeouts",
             &GDoPooledThreadWaitTimeouts,
             L"If enabled, uses the old behaviour for waking up pool threads every 10ms. Otherwise, lets pooled threads sleep until data arrives."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDoPooledThreadWaitTimeouts__);
  return;
}

// `dynamic_initializer_for_'CVarFastDecimalFormatLargeFloatSupport'' @ 140f031f0

void __cdecl
FastDecimalFormat::Internal::_dynamic_initializer_for__CVarFastDecimalFormatLargeFloatSupport__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFastDecimalFormatLargeFloatSupport,L"Core.bFastDecimalFormatLargeFloatSupport",
             &bFastDecimalFormatLargeFloatSupport,
             L"True implies we perform additional processing for floating point types over 9223372036854775807 to prevent clipping to this value."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFastDecimalFormatLargeFloatSupport__);
  return;
}

// `dynamic_initializer_for_'CVarHangulTextWrappingMethod'' @ 140f03240

void __cdecl _dynamic_initializer_for__CVarHangulTextWrappingMethod__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHangulTextWrappingMethod,L"Localization.HangulTextWrappingMethod",local_res8,
             L"0: PerSyllable, 1: PerWord (default).",0);
  atexit(_dynamic_atexit_destructor_for__CVarHangulTextWrappingMethod__);
  return;
}

// `dynamic_initializer_for_'CVarIndicateIfNearlyInteger'' @ 140f03290

void __cdecl
FastDecimalFormat::Internal::_dynamic_initializer_for__CVarIndicateIfNearlyInteger__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIndicateIfNearlyInteger,L"Core.bFastDecimalFormatCanIndicateIfNearlyInteger",
             &bFastDecimalFormatCanIndicateIfNearlyInteger,
             L"True implies we will indicate nearly integer values with \'...\' - such as 1e-16 which would normally be displayed as 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIndicateIfNearlyInteger__);
  return;
}

// `dynamic_initializer_for_'CVarMiMallocMemoryResetDelay'' @ 140f032e0

void __cdecl _dynamic_initializer_for__CVarMiMallocMemoryResetDelay__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ApplyMiMallocMemoryResetDelayChange;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMiMallocMemoryResetDelay,L"mi.MemoryResetDelay",&GMiMallocMemoryResetDelay,
             L"The time in milliseconds to keep recently freed memory pages inside the process for reuse. This can dramatically reduce OS overhead of memory zeroing and page faults during alloc intense workloads."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarMiMallocMemoryResetDelay__);
  return;
}

// `dynamic_initializer_for_'CVarSpanishUsesMinTwoGrouping'' @ 140f03420

void __cdecl _dynamic_initializer_for__CVarSpanishUsesMinTwoGrouping__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSpanishUsesMinTwoGrouping,L"Localization.SpanishUsesMinTwoGrouping",local_res8,
             L"False: 1234 will use a group separator, True: 1234 will not use a group separator (default)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSpanishUsesMinTwoGrouping__);
  return;
}

// `dynamic_initializer_for_'CVarSpanishUsesRAENumberFormat'' @ 140f03470

void __cdecl _dynamic_initializer_for__CVarSpanishUsesRAENumberFormat__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSpanishUsesRAENumberFormat,L"Localization.SpanishUsesRAENumberFormat",local_res8,
             L"False: Disabled (CLDR format), True: Enabled (RAE format, default).",0);
  atexit(_dynamic_atexit_destructor_for__CVarSpanishUsesRAENumberFormat__);
  return;
}

// `dynamic_initializer_for_'CVarUseLocaleSpecificDigitCharacters'' @ 140f034c0

void __cdecl _dynamic_initializer_for__CVarUseLocaleSpecificDigitCharacters__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarUseLocaleSpecificDigitCharacters,L"Localization.UseLocaleSpecificDigitCharacters",
             local_res8,
             L"False: Locales will always use Arabic digit characters (eg, 1234), True: Locales will use the digit characters specified in their CLDR data (default)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseLocaleSpecificDigitCharacters__);
  return;
}

// `dynamic_initializer_for_'CachedMemoryStats'' @ 140f03510

void __cdecl PlatformMemoryHelpers::_dynamic_initializer_for__CachedMemoryStats__(void)

{
  FGenericPlatformMemoryStats::FGenericPlatformMemoryStats
            ((FGenericPlatformMemoryStats *)&CachedMemoryStats);
  CachedMemoryStats.WindowsSpecificMemoryStat = 0;
  CachedMemoryStats.MemoryPressureStatus = Unknown;
  return;
}

// `dynamic_initializer_for_'FMallocBinnedTestCommand'' @ 140f03540

void __cdecl _dynamic_initializer_for__FMallocBinnedTestCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FMallocBinnedOverrunTest;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FMallocBinnedTestCommand,L"Memory.StaleTest",
             L"Test for Memory.UsePurgatory. *** Will crash the game!",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__FMallocBinnedTestCommand__);
  return;
}

// `dynamic_initializer_for_'FMallocUsePoisonCommand'' @ 140f03680

void __cdecl _dynamic_initializer_for__FMallocUsePoisonCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FMemory::EnablePoisonTests;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FMallocUsePoisonCommand,L"Memory.UsePoison",
             L"Uses the poison malloc proxy to check if things are relying on uninitialized or free\'d memory."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__FMallocUsePoisonCommand__);
  return;
}

// `dynamic_initializer_for_'FMallocUsePurgatoryCommand'' @ 140f037c0

void __cdecl _dynamic_initializer_for__FMallocUsePurgatoryCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FMemory::EnablePurgatoryTests;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FMallocUsePurgatoryCommand,L"Memory.UsePurgatory",
             L"Uses the purgatory malloc proxy to check if things are writing to stale pointers.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__FMallocUsePurgatoryCommand__);
  return;
}

// `dynamic_initializer_for_'GAudioPipe'' @ 140f03900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__GAudioPipe__(void)

{
  code *pcVar1;
  bool bVar2;
  
  GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController = operator_new(0x18);
  if (GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    GAudioPipe.EmptyEventRef = ___xmm_00000000000000000000000000000010;
  }
  else {
    (GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    (GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    *(undefined8 *)
     &(GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController)->WeakReferenceCount = 1;
    GAudioPipe.EmptyEventRef.Object =
         (TEventCount<unsigned_int> *)
         (GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController + 1);
    if (GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController + 1 ==
        (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  GAudioPipe.DebugName = L"AudioPipe";
  atexit(_dynamic_atexit_destructor_for__GAudioPipe__);
  return;
}

// `dynamic_initializer_for_'LogGatherArchiveObject'' @ 140f039a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGatherArchiveObject__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGatherArchiveObject,L"LogGatherArchiveObject",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGatherArchiveObject__);
  return;
}

// `dynamic_initializer_for_'LogICUInternationalization'' @ 140f039e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogICUInternationalization__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogICUInternationalization,L"LogICUInternationalization",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogICUInternationalization__);
  return;
}

// `dynamic_initializer_for_'LogInternationalizationManifestObject'' @ 140f03a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInternationalizationManifestObject__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInternationalizationManifestObject,
             L"LogInternationalizationManifestObject",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInternationalizationManifestObject__);
  return;
}

// `dynamic_initializer_for_'LogInternationalizationMetadata'' @ 140f03a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInternationalizationMetadata__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInternationalizationMetadata,L"LogInternationalizationMetadata"
             ,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInternationalizationMetadata__);
  return;
}

// `dynamic_initializer_for_'LogMallocFrameProfiler'' @ 140f03aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMallocFrameProfiler__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMallocFrameProfiler,L"LogMallocFrameProfiler",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMallocFrameProfiler__);
  return;
}

// `dynamic_initializer_for_'MallocStompTestCommand'' @ 140f03ae0

void __cdecl _dynamic_initializer_for__MallocStompTestCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = MallocStompOverrunTest;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&MallocStompTestCommand,L"MallocStomp.OverrunTest",L"Overrun test for the FMallocStomp"
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__MallocStompTestCommand__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EventTriggerWithId'' @ 140f03c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EventTriggerWithId__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EventTriggerWithId == (FThreadSafeStaticStat<FStat_STAT_EventTriggerWithId>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_EventTriggerWithId");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EventTriggerWithId,*pFVar1,
               L"CPU Stall - Trigger For Event with ID","STATGROUP_CPUStalls","STATCAT_Advanced",
               L"CPU Stalls",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EventWaitWithId'' @ 140f03cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EventWaitWithId__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EventWaitWithId == (FThreadSafeStaticStat<FStat_STAT_EventWaitWithId>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EventWaitWithId");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EventWaitWithId,*pFVar1,
               L"CPU Stall - Wait For Event with ID","STATGROUP_CPUStalls","STATCAT_Advanced",
               L"CPU Stalls",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FreeCalls'' @ 140f03d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FreeCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FreeCalls == (FThreadSafeStaticStat<FStat_STAT_FreeCalls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FreeCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FreeCalls,*pFVar1,L"Free calls",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MallocCalls'' @ 140f03dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MallocCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MallocCalls == (FThreadSafeStaticStat<FStat_STAT_MallocCalls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MallocCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MallocCalls,*pFVar1,L"Malloc calls",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReallocCalls'' @ 140f03e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReallocCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReallocCalls == (FThreadSafeStaticStat<FStat_STAT_ReallocCalls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReallocCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReallocCalls,*pFVar1,L"Realloc calls",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ThreadPoolDummyCounter'' @ 140f03ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ThreadPoolDummyCounter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ThreadPoolDummyCounter ==
      (FThreadSafeStaticStat<FStat_STAT_ThreadPoolDummyCounter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ThreadPoolDummyCounter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ThreadPoolDummyCounter,*pFVar1,
               L"ThreadPoolDummyCounter","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalAllocatorCalls'' @ 140f03f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalAllocatorCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalAllocatorCalls == (FThreadSafeStaticStat<FStat_STAT_TotalAllocatorCalls>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalAllocatorCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalAllocatorCalls,*pFVar1,
               L"Total Allocator calls","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 1416c8ae0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416c8b20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::TEventCount<unsigned_int>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::TEventCount<unsigned_int>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416c8bc0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FMallocBinnedOverrunTest'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMallocBinnedOverrunTest'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// IsInAsyncLoadingThreadCoreInternal @ 1416c8c00

bool __cdecl IsInAsyncLoadingThreadCoreInternal(void)

{
  return false;
}

// operator<<<FTextSourceSiteContext> @ 1416c9b70

void __cdecl
operator<<<FTextSourceSiteContext>
          (FStructuredArchiveSlot param_1,
          TArray<FTextSourceSiteContext,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchiveState *pFVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar9 = local_res10[0];
  if (pFVar7->ArIsLoading != 0) {
    iVar10 = *piVar1;
    if (iVar10 < (int)local_res10[0]) {
      iVar10 = local_res10[0] - iVar10;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (200,8,iVar10,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<FTextSourceSiteContext,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 200,iVar10);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar10) {
        uVar8 = iVar10 - local_res10[0];
        if (((int)(local_res10[0] | uVar8) < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          TArray<FTextSourceSiteContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_2,uVar9,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar9 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 200;
      operator<<((FVar4.StructuredArchive)->Formatter->Inner,(FString *)pFVar11);
      operator<<((FVar4.StructuredArchive)->Formatter->Inner,(FString *)(pFVar11 + 0x10));
      FBinaryArchiveFormatter::Serialize
                ((FVar4.StructuredArchive)->Formatter,(bool *)(pFVar11 + 0x20));
      FBinaryArchiveFormatter::Serialize
                ((FVar4.StructuredArchive)->Formatter,(bool *)(pFVar11 + 0x21));
      operator<<((FStructuredArchiveSlot)FVar4.StructuredArchive,
                 (FLocMetadataObject *)(pFVar11 + 0x28));
      operator<<((FStructuredArchiveSlot)FVar4.StructuredArchive,
                 (FLocMetadataObject *)(pFVar11 + 0x78));
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)local_res10[0]);
  }
  return;
}

// BinarySearchBy<TArray<TTuple<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData>,TSizedDefaultAllocator<32>_>,FString,TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_> @ 1416ca780

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>,TSizedDefaultAllocator<32>_>,FString,TSortedMap<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
          (TArray<TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>,TSizedDefaultAllocator<32>_>
           *param_1,FString *param_2,FKeyForward param_3,TLess<FString_const_&> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>_const_,int,FString,TSortedMap<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (iVar2 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    pwVar5 = L"";
    if (*(int *)(pFVar1 + (longlong)iVar2 * 0x28 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)(pFVar1 + (longlong)iVar2 * 0x28);
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar6);
    iVar4 = -1;
    if (-1 < iVar3) {
      iVar4 = iVar2;
    }
    return iVar4;
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FString,TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_> @ 1416ca820

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FString,TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
          (TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FString *param_2,FKeyForward param_3,TLess<FString_const_&> param_4)

{
  ForElementType<TTuple<FString,FString>_> FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<TTuple<FString,FString>_> FVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<TTuple<FString,FString>_>)param_1;
  if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
    FVar5 = FVar1;
  }
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FString>_const_,int,FString,TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    ((TTuple<FString,FString> *)FVar5,param_1->ArrayNum,param_2,(FKeyForward)param_3
                     ,param_4);
  if (iVar2 < param_1->ArrayNum) {
    FVar1 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<TTuple<FString,FString>_>)0x0) {
      param_1 = (TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    pwVar6 = L"";
    if (*(int *)((longlong)iVar2 * 0x20 + 8 + (longlong)param_1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)((longlong)iVar2 * 0x20 + (longlong)param_1);
    }
    if ((param_2->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar7);
    iVar4 = -1;
    if (-1 < iVar3) {
      iVar4 = iVar2;
    }
    return iVar4;
  }
  return -1;
}

// ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int> @ 1416ca9b0

void __cdecl
ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
          (void *param_1,TSharedPtr<FLocMetadataValue,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FLocMetadataValue **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FMallocFrameProfiler::FCallStackStats,int> @ 1416caaa0

void __cdecl
DefaultConstructItems<FMallocFrameProfiler::FCallStackStats,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FICUInternationalization::FICUCultureData,int> @ 1416caad0

void __cdecl
DefaultConstructItems<FICUInternationalization::FICUCultureData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FTextSourceSiteContext,int> @ 1416cab10

void __cdecl DefaultConstructItems<FTextSourceSiteContext,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined2 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined4 *)(lVar1 + 0x44) = 0;
      *(undefined4 *)(lVar1 + 0x48) = 0x80;
      *(undefined4 *)(lVar1 + 0x4c) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 0x7c) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined8 *)(lVar1 + 0xa4) = 0;
      *(undefined8 *)(lVar1 + 0xb4) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0;
      *(undefined8 *)(lVar1 + 0x8c) = 0;
      *(undefined4 *)(lVar1 + 0x94) = 0;
      *(undefined4 *)(lVar1 + 0x98) = 0x80;
      *(undefined4 *)(lVar1 + 0x9c) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0xa0) = 0;
      *(undefined8 *)(lVar1 + 0xac) = 0;
      lVar1 = lVar1 + 200;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FThreadManager::FThreadStackBackTrace,int> @ 1416cabd0

void __cdecl
DefaultConstructItems<FThreadManager::FThreadStackBackTrace,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 0x65) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x32c) = 100;
      puVar1 = puVar1 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int> @ 1416cacb0

void __cdecl
DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>
          (TTuple<FName,TSharedPtr<FCulture,1>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData>,int> @ 1416cacf0

void __cdecl
DestructItems<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>,int>
          (TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`ApplyCultureDisplayNameSubstitutes'::__l2::FDisplayNameSubstitute,int> @ 1416cad30

void __cdecl
DestructItems<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,int>
          (FDisplayNameSubstitute *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->OldString;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FDisplayNameSubstitute *)(pFVar2 + -1))->Culture).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FICUInternationalization::FICUCultureData,int> @ 1416cad90

void __cdecl
DestructItems<FICUInternationalization::FICUCultureData,int>(FICUCultureData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ScriptCode;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FICUCultureData *)(pFVar2 + -2))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FManifestContext,int> @ 1416cae00

void __cdecl DestructItems<FManifestContext,int>(FManifestContext *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->InfoMetadataObj).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      if (pFVar1[-5].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-5].ReferenceController);
      }
      if (pFVar1[-8].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-8].ReferenceController);
      }
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FNameTag,int> @ 1416cae60

void __cdecl
DestructItems<_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FNameTag,int>
          (FNameTag *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Str).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTextSourceSiteContext,int> @ 1416caea0

void __cdecl DestructItems<FTextSourceSiteContext,int>(FTextSourceSiteContext *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->KeyMetaData).Values.field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -9) = 0;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      if ((void *)puVar1[-0x15] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x15]);
      }
      if ((void *)puVar1[-0x17] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x17]);
      }
      puVar1 = puVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FThreadManager::FThreadStackBackTrace,int> @ 1416caf40

void __cdecl
DestructItems<FThreadManager::FThreadStackBackTrace,int>(FThreadStackBackTrace *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ThreadName;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0x34;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,int> @ 1416caf80

void __cdecl
DestructItems<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FLocMetadataValue,1>,int> @ 1416cafc0

void __cdecl
DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
          (TSharedPtr<FLocMetadataValue,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FArchiveEntry,1>,int> @ 1416cb000

void __cdecl
DestructItems<TSharedRef<FArchiveEntry,1>,int>(TSharedRef<FArchiveEntry,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FCulture,1>,int> @ 1416cb040

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl DestructItems<TSharedRef<FCulture,1>,int>(TSharedRef<FCulture,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FManifestEntry,1>,int> @ 1416cb080

void __cdecl
DestructItems<TSharedRef<FManifestEntry,1>,int>(TSharedRef<FManifestEntry,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FTlsAutoCleanup,TDefaultDelete<FTlsAutoCleanup>_>,int> @ 1416cb0c0

void __cdecl
DestructItems<TUniquePtr<FTlsAutoCleanup,TDefaultDelete<FTlsAutoCleanup>_>,int>
          (TUniquePtr<FTlsAutoCleanup,TDefaultDelete<FTlsAutoCleanup>_> *param_1,int param_2)

{
  FTlsAutoCleanup *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FTlsAutoCleanup *)0x0) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindByPredicate<`FInternationalization::GetCustomCulture'::__l2::<lambda_1>_> @ 1416cd880

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FCulture,1> * __thiscall
TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FInternationalization::GetCustomCulture_::__l2::<lambda_1>_>
          (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  int iVar2;
  TSharedRef<FCulture,1> *pTVar3;
  TSharedRef<FCulture,1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (TSharedRef<FCulture,1> *)(this->AllocatorInstance).Data;
  pTVar3 = pTVar4 + this->ArrayNum;
  while( true ) {
    if (pTVar4 == pTVar3) {
      return (TSharedRef<FCulture,1> *)0x0;
    }
    iVar2 = ((param_1.InCultureName)->Data).ArrayNum;
    iVar1 = (pTVar4->Object->CachedName).Data.ArrayNum;
    if (iVar1 == iVar2) {
      if (iVar1 < 2) {
        return pTVar4;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pTVar4->Object->CachedName).Data.AllocatorInstance.Data,
                         (wchar_t *)((param_1.InCultureName)->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar1 + iVar2 == 1;
    }
    if (bVar5) break;
    pTVar4 = pTVar4 + 1;
  }
  return pTVar4;
}

// GetTypeHash<icu_64::BreakIterator_const_,1> @ 1416ce4c0

uint __cdecl
GetTypeHash<icu_64::BreakIterator_const_,1>(TSharedPtr<icu_64::BreakIterator_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<icu_64::RegexMatcher_const_,1> @ 1416ce4f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

uint __cdecl
GetTypeHash<icu_64::RegexMatcher_const_,1>(TSharedPtr<icu_64::RegexMatcher_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<icu_64::RegexPattern_const_,1> @ 1416ce520

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

uint __cdecl
GetTypeHash<icu_64::RegexPattern_const_,1>(TSharedPtr<icu_64::RegexPattern_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSiftDown<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_> @ 1416ce590

void __cdecl
AlgoImpl::
HeapSiftDown<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_>
          (TSharedPtr<FLocMetadataValue,1> *param_1,int param_2,int param_3,
          FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
          *param_5)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLocMetadataValue *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLocMetadataValue *pFVar6;
  code *pcVar7;
  longlong lVar8;
  int iVar9;
  TSharedPtr<FLocMetadataValue,1> *pTVar10;
  TSharedPtr<FLocMetadataValue,1> *pTVar11;
  bool bVar12;
  
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar2 = param_2 * 2;
    iVar9 = iVar2 + 1;
    if (iVar2 + 2 < param_3) {
      lVar1 = (longlong)iVar2 + 2;
      lVar8 = (longlong)iVar2 + 1;
      pTVar3 = param_1[lVar8].SharedReferenceCount.ReferenceController;
      pFVar4 = param_1[lVar8].Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = param_1[lVar1].SharedReferenceCount.ReferenceController;
      pFVar6 = param_1[lVar1].Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar6 == (FLocMetadataValue *)0x0) && (pFVar4 == (FLocMetadataValue *)0x0)) {
        bVar12 = false;
      }
      else {
        bVar12 = pFVar4 != (FLocMetadataValue *)0x0;
        if ((pFVar6 != (FLocMetadataValue *)0x0) == bVar12) {
          if ((pFVar6 == (FLocMetadataValue *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((pFVar4 == (FLocMetadataValue *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = FLocMetadataValue::operator<(pFVar6,pFVar4);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (bVar12 != false) {
        iVar9 = iVar2;
      }
      iVar9 = iVar9 + 1;
    }
    pTVar11 = param_1 + param_2;
    pTVar10 = param_1 + iVar9;
    pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar10->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar11->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar6 == (FLocMetadataValue *)0x0) && (pFVar4 == (FLocMetadataValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
    bVar12 = pFVar4 != (FLocMetadataValue *)0x0;
    if ((pFVar6 != (FLocMetadataValue *)0x0) == bVar12) {
      if ((pFVar6 == (FLocMetadataValue *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar4 == (FLocMetadataValue *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar12 = FLocMetadataValue::operator<(pFVar6,pFVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar12 == false) {
      return;
    }
    pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar11->Object;
    pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar11->Object = pTVar10->Object;
    (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
    pTVar10->Object = pFVar4;
    (pTVar10->SharedReferenceCount).ReferenceController = pTVar5;
    param_2 = iVar9;
  } while( true );
}

// HeapSortInternal<IQueuedWork_*,int,FIdentityFunctor,TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)>_> @ 1416ce810

void __cdecl
AlgoImpl::
HeapSortInternal<IQueuedWork_*,int,FIdentityFunctor,TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)>_>
          (IQueuedWork **param_1,int param_2,FIdentityFunctor param_3,
          TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)> *param_4)

{
  IQueuedWork *pIVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  IQueuedWork *pIVar11;
  IQueuedWork *local_70;
  IQueuedWork *local_68;
  IQueuedWork *local_60;
  IQueuedWork *local_58;
  IQueuedWork *local_50;
  IQueuedWork *local_48;
  IQueuedWork *local_40;
  IQueuedWork *local_38 [2];
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  do {
    if (iVar7 < param_2) {
      iVar10 = iVar6;
      do {
        iVar3 = iVar10 * 2;
        iVar9 = iVar3 + 1;
        if (iVar3 + 2 < param_2) {
          local_68 = param_1[iVar9];
          local_60 = param_1[(longlong)iVar3 + 2];
          cVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_60,&local_68);
          if (cVar5 != '\0') {
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + 1;
        }
        local_58 = param_1[iVar9];
        local_70 = param_1[iVar10];
        cVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_70,&local_58);
        if (cVar5 == '\0') break;
        pIVar11 = param_1[iVar10];
        param_1[iVar10] = param_1[iVar9];
        param_1[iVar9] = pIVar11;
        iVar10 = iVar9;
      } while (iVar9 * 2 + 1 < param_2);
    }
    if (iVar6 == 0) {
      iVar7 = param_2 + -1;
      lVar8 = (longlong)iVar7;
      if (0 < iVar7) {
        do {
          pIVar11 = *param_1;
          *param_1 = param_1[lVar8];
          param_1[lVar8] = pIVar11;
          if (1 < iVar7) {
            pIVar11 = (IQueuedWork *)&param_4->field_0x8;
            local_70 = pIVar11;
            iVar6 = 0;
            do {
              pIVar1 = local_70;
              iVar9 = iVar6 * 2;
              iVar10 = iVar9 + 1;
              if (iVar9 + 2 < iVar7) {
                local_50 = param_1[iVar10];
                local_48 = param_1[(longlong)iVar9 + 2];
                cVar5 = (**(code **)param_4)(local_70->_padding_,&local_48,&local_50);
                if (cVar5 != '\0') {
                  iVar10 = iVar9;
                }
                iVar10 = iVar10 + 1;
                pIVar11 = pIVar1;
              }
              local_40 = param_1[iVar10];
              local_38[0] = param_1[iVar6];
              cVar5 = (**(code **)param_4)(pIVar11->_padding_,local_38,&local_40);
              if (cVar5 == '\0') break;
              pIVar1 = param_1[iVar6];
              param_1[iVar6] = param_1[iVar10];
              param_1[iVar10] = pIVar1;
              iVar6 = iVar10;
            } while (iVar10 * 2 + 1 < iVar7);
          }
          lVar8 = lVar8 + -1;
          iVar7 = iVar7 + -1;
        } while (0 < lVar8);
      }
      return;
    }
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 + -2;
  } while( true );
}

// HeapSortInternal<FMallocFrameProfiler::FCallStackStats,int,FIdentityFunctor,TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,`FMallocFrameProfiler::UpdateStats'::__l2::<lambda_1>_>_> @ 1416ceac0

void __cdecl
AlgoImpl::
HeapSortInternal<FMallocFrameProfiler::FCallStackStats,int,FIdentityFunctor,TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,_FMallocFrameProfiler::UpdateStats_::__l2::<lambda_1>_>_>
          (FCallStackStats *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,_public:_virtual_void___cdecl_FMallocFrameProfiler::UpdateStats(void)_::_2_::<lambda_1>_>
          param_4)

{
  FCallStackStats *pFVar1;
  FCallStackStats *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FCallStackStats *pFVar18;
  longlong lVar19;
  int iVar20;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar15 = iVar14 * 2 + 1;
  iVar20 = iVar15;
  iVar16 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_1416cebcd:
      if (iVar16 == 0) {
        iVar15 = param_2 + -1;
        lVar19 = (longlong)iVar15;
        if (0 < iVar15) {
          pFVar18 = param_1 + lVar19;
          do {
            iVar20 = pFVar18->Mallocs;
            iVar14 = pFVar18->Frees;
            iVar16 = pFVar18->UsageCount;
            iVar7 = param_1->UniqueFrames;
            iVar8 = param_1->LastFrameSeen;
            iVar17 = param_1->CallStackIndex;
            iVar4 = param_1->Mallocs;
            iVar5 = param_1->Frees;
            iVar6 = param_1->UsageCount;
            param_1->CallStackIndex = pFVar18->CallStackIndex;
            param_1->Mallocs = iVar20;
            param_1->Frees = iVar14;
            param_1->UsageCount = iVar16;
            iVar20 = pFVar18->LastFrameSeen;
            param_1->UniqueFrames = pFVar18->UniqueFrames;
            param_1->LastFrameSeen = iVar20;
            pFVar18->CallStackIndex = iVar17;
            pFVar18->Mallocs = iVar4;
            pFVar18->Frees = iVar5;
            pFVar18->UsageCount = iVar6;
            pFVar18->UniqueFrames = iVar7;
            pFVar18->LastFrameSeen = iVar8;
            iVar20 = 0;
            if (1 < iVar15) {
              do {
                iVar14 = iVar20 * 2;
                iVar16 = iVar14 + 1;
                if (iVar14 + 2 < iVar15) {
                  if (param_1[iVar16].Mallocs < param_1[(longlong)iVar14 + 2].Mallocs) {
                    iVar16 = iVar14;
                  }
                  iVar16 = iVar16 + 1;
                }
                pFVar1 = param_1 + iVar16;
                if (param_1[iVar20].Mallocs <= pFVar1->Mallocs) break;
                iVar14 = pFVar1->Mallocs;
                iVar17 = pFVar1->Frees;
                iVar4 = pFVar1->UsageCount;
                iVar9 = param_1[iVar20].UniqueFrames;
                iVar10 = param_1[iVar20].LastFrameSeen;
                pFVar2 = param_1 + iVar20;
                iVar5 = pFVar2->CallStackIndex;
                iVar6 = pFVar2->Mallocs;
                iVar7 = pFVar2->Frees;
                iVar8 = pFVar2->UsageCount;
                pFVar2 = param_1 + iVar20;
                pFVar2->CallStackIndex = pFVar1->CallStackIndex;
                pFVar2->Mallocs = iVar14;
                pFVar2->Frees = iVar17;
                pFVar2->UsageCount = iVar4;
                iVar14 = pFVar1->LastFrameSeen;
                param_1[iVar20].UniqueFrames = pFVar1->UniqueFrames;
                param_1[iVar20].LastFrameSeen = iVar14;
                pFVar1->CallStackIndex = iVar5;
                pFVar1->Mallocs = iVar6;
                pFVar1->Frees = iVar7;
                pFVar1->UsageCount = iVar8;
                pFVar1->UniqueFrames = iVar9;
                pFVar1->LastFrameSeen = iVar10;
                iVar20 = iVar16;
              } while (iVar16 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar19 = lVar19 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar14 = iVar16 + -1;
      iVar15 = iVar20 + -2;
      iVar20 = iVar15;
      iVar16 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar17 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      if (param_1[iVar17].Mallocs < param_1[(longlong)iVar15 + 2].Mallocs) {
        iVar17 = iVar15;
      }
      iVar17 = iVar17 + 1;
    }
    pFVar18 = param_1 + iVar17;
    if (param_1[iVar14].Mallocs <= pFVar18->Mallocs) goto LAB_1416cebcd;
    iVar4 = pFVar18->Mallocs;
    iVar5 = pFVar18->Frees;
    iVar6 = pFVar18->UsageCount;
    iVar15 = iVar17 * 2 + 1;
    iVar11 = param_1[iVar14].UniqueFrames;
    iVar12 = param_1[iVar14].LastFrameSeen;
    pFVar1 = param_1 + iVar14;
    iVar7 = pFVar1->CallStackIndex;
    iVar8 = pFVar1->Mallocs;
    iVar9 = pFVar1->Frees;
    iVar10 = pFVar1->UsageCount;
    pFVar1 = param_1 + iVar14;
    pFVar1->CallStackIndex = pFVar18->CallStackIndex;
    pFVar1->Mallocs = iVar4;
    pFVar1->Frees = iVar5;
    pFVar1->UsageCount = iVar6;
    iVar4 = pFVar18->LastFrameSeen;
    param_1[iVar14].UniqueFrames = pFVar18->UniqueFrames;
    param_1[iVar14].LastFrameSeen = iVar4;
    pFVar18->CallStackIndex = iVar7;
    pFVar18->Mallocs = iVar8;
    pFVar18->Frees = iVar9;
    pFVar18->UsageCount = iVar10;
    pFVar18->UniqueFrames = iVar11;
    pFVar18->LastFrameSeen = iVar12;
    iVar14 = iVar17;
  } while( true );
}

// HeapSortInternal<FICUInternationalization::FICUCultureData,int,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,`FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>_>_> @ 1416cece0

void __cdecl
AlgoImpl::
HeapSortInternal<FICUInternationalization::FICUCultureData,int,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,_FICUInternationalization::GetPrioritizedCultureNames_::__l5::<lambda_2>_>_>
          (FICUCultureData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FICUInternationalization::FICUCultureData,_public:_class_TArray<FString,TSizedDefaultAllocator<32>_>___cdecl_FICUInternationalization::GetPrioritizedCultureNames(FString_const_&)_::_5_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  FICUCultureData *pFVar21;
  int iVar22;
  FICUCultureData *pFVar23;
  FICUCultureData *pFVar24;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar18 = iVar16;
  iVar19 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_1416cee41:
      if (iVar19 == 0) {
        iVar16 = param_2 + -1;
        lVar20 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar21 = param_1 + lVar20;
          do {
            iVar18 = (pFVar21->Name).Data.ArrayNum;
            iVar15 = (pFVar21->Name).Data.ArrayMax;
            iVar22 = 0;
            pFVar2 = (param_1->Name).Data.AllocatorInstance.Data;
            iVar19 = (param_1->Name).Data.ArrayNum;
            iVar17 = (param_1->Name).Data.ArrayMax;
            pFVar3 = (param_1->LanguageCode).Data.AllocatorInstance.Data;
            iVar6 = (param_1->LanguageCode).Data.ArrayNum;
            iVar7 = (param_1->LanguageCode).Data.ArrayMax;
            pFVar4 = (param_1->ScriptCode).Data.AllocatorInstance.Data;
            iVar8 = (param_1->ScriptCode).Data.ArrayNum;
            iVar9 = (param_1->ScriptCode).Data.ArrayMax;
            pFVar5 = (param_1->CountryCode).Data.AllocatorInstance.Data;
            iVar10 = (param_1->CountryCode).Data.ArrayNum;
            iVar11 = (param_1->CountryCode).Data.ArrayMax;
            (param_1->Name).Data.AllocatorInstance.Data =
                 (pFVar21->Name).Data.AllocatorInstance.Data;
            (param_1->Name).Data.ArrayNum = iVar18;
            (param_1->Name).Data.ArrayMax = iVar15;
            iVar18 = (pFVar21->LanguageCode).Data.ArrayNum;
            iVar15 = (pFVar21->LanguageCode).Data.ArrayMax;
            (param_1->LanguageCode).Data.AllocatorInstance.Data =
                 (pFVar21->LanguageCode).Data.AllocatorInstance.Data;
            (param_1->LanguageCode).Data.ArrayNum = iVar18;
            (param_1->LanguageCode).Data.ArrayMax = iVar15;
            iVar18 = (pFVar21->ScriptCode).Data.ArrayNum;
            iVar15 = (pFVar21->ScriptCode).Data.ArrayMax;
            (param_1->ScriptCode).Data.AllocatorInstance.Data =
                 (pFVar21->ScriptCode).Data.AllocatorInstance.Data;
            (param_1->ScriptCode).Data.ArrayNum = iVar18;
            (param_1->ScriptCode).Data.ArrayMax = iVar15;
            iVar18 = (pFVar21->CountryCode).Data.ArrayNum;
            iVar15 = (pFVar21->CountryCode).Data.ArrayMax;
            (param_1->CountryCode).Data.AllocatorInstance.Data =
                 (pFVar21->CountryCode).Data.AllocatorInstance.Data;
            (param_1->CountryCode).Data.ArrayNum = iVar18;
            (param_1->CountryCode).Data.ArrayMax = iVar15;
            (pFVar21->Name).Data.AllocatorInstance.Data = pFVar2;
            (pFVar21->Name).Data.ArrayNum = iVar19;
            (pFVar21->Name).Data.ArrayMax = iVar17;
            (pFVar21->LanguageCode).Data.AllocatorInstance.Data = pFVar3;
            (pFVar21->LanguageCode).Data.ArrayNum = iVar6;
            (pFVar21->LanguageCode).Data.ArrayMax = iVar7;
            (pFVar21->ScriptCode).Data.AllocatorInstance.Data = pFVar4;
            (pFVar21->ScriptCode).Data.ArrayNum = iVar8;
            (pFVar21->ScriptCode).Data.ArrayMax = iVar9;
            (pFVar21->CountryCode).Data.AllocatorInstance.Data = pFVar5;
            (pFVar21->CountryCode).Data.ArrayNum = iVar10;
            (pFVar21->CountryCode).Data.ArrayMax = iVar11;
            if (1 < iVar16) {
              do {
                iVar15 = iVar22 * 2;
                iVar18 = iVar15 + 1;
                if (iVar15 + 2 < iVar16) {
                  bVar14 = `FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>
                           ::operator()(param_4.Predicate,param_1 + (iVar15 + 2),param_1 + iVar18);
                  if (bVar14) {
                    iVar18 = iVar15;
                  }
                  iVar18 = iVar18 + 1;
                }
                pFVar23 = param_1 + iVar18;
                pFVar24 = param_1 + iVar22;
                bVar14 = `FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>::
                         operator()(param_4.Predicate,pFVar24,pFVar23);
                if (!bVar14) break;
                iVar15 = (pFVar23->Name).Data.ArrayNum;
                iVar19 = (pFVar23->Name).Data.ArrayMax;
                pFVar2 = (pFVar24->Name).Data.AllocatorInstance.Data;
                iVar17 = (pFVar24->Name).Data.ArrayNum;
                iVar6 = (pFVar24->Name).Data.ArrayMax;
                pFVar3 = (pFVar24->LanguageCode).Data.AllocatorInstance.Data;
                iVar7 = (pFVar24->LanguageCode).Data.ArrayNum;
                iVar8 = (pFVar24->LanguageCode).Data.ArrayMax;
                pFVar4 = (pFVar24->ScriptCode).Data.AllocatorInstance.Data;
                iVar9 = (pFVar24->ScriptCode).Data.ArrayNum;
                iVar10 = (pFVar24->ScriptCode).Data.ArrayMax;
                pFVar5 = (pFVar24->CountryCode).Data.AllocatorInstance.Data;
                iVar11 = (pFVar24->CountryCode).Data.ArrayNum;
                iVar22 = (pFVar24->CountryCode).Data.ArrayMax;
                (pFVar24->Name).Data.AllocatorInstance.Data =
                     (pFVar23->Name).Data.AllocatorInstance.Data;
                (pFVar24->Name).Data.ArrayNum = iVar15;
                (pFVar24->Name).Data.ArrayMax = iVar19;
                iVar15 = (pFVar23->LanguageCode).Data.ArrayNum;
                iVar19 = (pFVar23->LanguageCode).Data.ArrayMax;
                (pFVar24->LanguageCode).Data.AllocatorInstance.Data =
                     (pFVar23->LanguageCode).Data.AllocatorInstance.Data;
                (pFVar24->LanguageCode).Data.ArrayNum = iVar15;
                (pFVar24->LanguageCode).Data.ArrayMax = iVar19;
                iVar15 = (pFVar23->ScriptCode).Data.ArrayNum;
                iVar19 = (pFVar23->ScriptCode).Data.ArrayMax;
                (pFVar24->ScriptCode).Data.AllocatorInstance.Data =
                     (pFVar23->ScriptCode).Data.AllocatorInstance.Data;
                (pFVar24->ScriptCode).Data.ArrayNum = iVar15;
                (pFVar24->ScriptCode).Data.ArrayMax = iVar19;
                iVar15 = (pFVar23->CountryCode).Data.ArrayNum;
                iVar19 = (pFVar23->CountryCode).Data.ArrayMax;
                (pFVar24->CountryCode).Data.AllocatorInstance.Data =
                     (pFVar23->CountryCode).Data.AllocatorInstance.Data;
                (pFVar24->CountryCode).Data.ArrayNum = iVar15;
                (pFVar24->CountryCode).Data.ArrayMax = iVar19;
                (pFVar23->Name).Data.AllocatorInstance.Data = pFVar2;
                (pFVar23->Name).Data.ArrayNum = iVar17;
                (pFVar23->Name).Data.ArrayMax = iVar6;
                (pFVar23->LanguageCode).Data.AllocatorInstance.Data = pFVar3;
                (pFVar23->LanguageCode).Data.ArrayNum = iVar7;
                (pFVar23->LanguageCode).Data.ArrayMax = iVar8;
                (pFVar23->ScriptCode).Data.AllocatorInstance.Data = pFVar4;
                (pFVar23->ScriptCode).Data.ArrayNum = iVar9;
                (pFVar23->ScriptCode).Data.ArrayMax = iVar10;
                (pFVar23->CountryCode).Data.AllocatorInstance.Data = pFVar5;
                (pFVar23->CountryCode).Data.ArrayNum = iVar11;
                (pFVar23->CountryCode).Data.ArrayMax = iVar22;
                iVar22 = iVar18;
              } while (iVar18 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar20 = lVar20 + -1;
            pFVar21 = pFVar21 + -1;
          } while (0 < lVar20);
        }
        return;
      }
      iVar15 = iVar19 + -1;
      iVar16 = iVar18 + -2;
      iVar18 = iVar16;
      iVar19 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      bVar14 = `FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>::operator()
                         (param_4.Predicate,param_1 + (iVar16 + 2),param_1 + iVar17);
      if (bVar14) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    pFVar21 = param_1 + iVar17;
    pFVar23 = param_1 + iVar15;
    bVar14 = `FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>::operator()
                       (param_4.Predicate,pFVar23,pFVar21);
    if (!bVar14) goto LAB_1416cee41;
    iVar15 = (pFVar21->Name).Data.ArrayNum;
    iVar6 = (pFVar21->Name).Data.ArrayMax;
    iVar16 = iVar17 * 2 + 1;
    pFVar2 = (pFVar23->Name).Data.AllocatorInstance.Data;
    iVar7 = (pFVar23->Name).Data.ArrayNum;
    iVar8 = (pFVar23->Name).Data.ArrayMax;
    pFVar3 = (pFVar23->LanguageCode).Data.AllocatorInstance.Data;
    iVar9 = (pFVar23->LanguageCode).Data.ArrayNum;
    iVar10 = (pFVar23->LanguageCode).Data.ArrayMax;
    pFVar4 = (pFVar23->ScriptCode).Data.AllocatorInstance.Data;
    iVar11 = (pFVar23->ScriptCode).Data.ArrayNum;
    iVar22 = (pFVar23->ScriptCode).Data.ArrayMax;
    pFVar5 = (pFVar23->CountryCode).Data.AllocatorInstance.Data;
    iVar12 = (pFVar23->CountryCode).Data.ArrayNum;
    iVar13 = (pFVar23->CountryCode).Data.ArrayMax;
    (pFVar23->Name).Data.AllocatorInstance.Data = (pFVar21->Name).Data.AllocatorInstance.Data;
    (pFVar23->Name).Data.ArrayNum = iVar15;
    (pFVar23->Name).Data.ArrayMax = iVar6;
    iVar15 = (pFVar21->LanguageCode).Data.ArrayNum;
    iVar6 = (pFVar21->LanguageCode).Data.ArrayMax;
    (pFVar23->LanguageCode).Data.AllocatorInstance.Data =
         (pFVar21->LanguageCode).Data.AllocatorInstance.Data;
    (pFVar23->LanguageCode).Data.ArrayNum = iVar15;
    (pFVar23->LanguageCode).Data.ArrayMax = iVar6;
    iVar15 = (pFVar21->ScriptCode).Data.ArrayNum;
    iVar6 = (pFVar21->ScriptCode).Data.ArrayMax;
    (pFVar23->ScriptCode).Data.AllocatorInstance.Data =
         (pFVar21->ScriptCode).Data.AllocatorInstance.Data;
    (pFVar23->ScriptCode).Data.ArrayNum = iVar15;
    (pFVar23->ScriptCode).Data.ArrayMax = iVar6;
    iVar15 = (pFVar21->CountryCode).Data.ArrayNum;
    iVar6 = (pFVar21->CountryCode).Data.ArrayMax;
    (pFVar23->CountryCode).Data.AllocatorInstance.Data =
         (pFVar21->CountryCode).Data.AllocatorInstance.Data;
    (pFVar23->CountryCode).Data.ArrayNum = iVar15;
    (pFVar23->CountryCode).Data.ArrayMax = iVar6;
    (pFVar21->Name).Data.AllocatorInstance.Data = pFVar2;
    (pFVar21->Name).Data.ArrayNum = iVar7;
    (pFVar21->Name).Data.ArrayMax = iVar8;
    (pFVar21->LanguageCode).Data.AllocatorInstance.Data = pFVar3;
    (pFVar21->LanguageCode).Data.ArrayNum = iVar9;
    (pFVar21->LanguageCode).Data.ArrayMax = iVar10;
    (pFVar21->ScriptCode).Data.AllocatorInstance.Data = pFVar4;
    (pFVar21->ScriptCode).Data.ArrayNum = iVar11;
    (pFVar21->ScriptCode).Data.ArrayMax = iVar22;
    (pFVar21->CountryCode).Data.AllocatorInstance.Data = pFVar5;
    (pFVar21->CountryCode).Data.ArrayNum = iVar12;
    (pFVar21->CountryCode).Data.ArrayMax = iVar13;
    iVar15 = iVar17;
  } while( true );
}

// HeapSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_> @ 1416cefc0

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
          (TSharedPtr<FLocMetadataValue,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue> param_4)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLocMetadataValue *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedPtr<FLocMetadataValue,1> *pTVar6;
  int iVar7;
  FIdentityFunctor local_res18 [8];
  TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue> local_res20;
  TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
  local_18 [2];
  
  local_res18[0] = param_3;
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_18[0].Predicate = &local_res20;
  HeapifyInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_>
            (param_1,param_2,param_3,&local_res20);
  iVar7 = param_2 + -1;
  if (0 < iVar7) {
    pTVar6 = param_1 + iVar7;
    do {
      pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
      pFVar3 = param_1->Object;
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar6->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      pTVar6->Object = pFVar3;
      (pTVar6->SharedReferenceCount).ReferenceController = pTVar4;
      HeapSiftDown<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_>
                (param_1,0,iVar7,local_res18,local_18);
      iVar7 = iVar7 + -1;
      pTVar6 = pTVar6 + -1;
    } while (0 < iVar7);
  }
  return;
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_> @ 1416cf0a0

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,TLess<FString>_> param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  FString *pFVar17;
  FString *pFVar18;
  FString *pFVar19;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar15 = iVar8;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_1416cf1f7:
      if (iVar9 == 0) {
        iVar8 = param_2 + -1;
        lVar16 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar19 = param_1 + lVar16;
          do {
            iVar15 = (pFVar19->Data).ArrayNum;
            iVar6 = (pFVar19->Data).ArrayMax;
            iVar7 = 0;
            pFVar2 = (param_1->Data).AllocatorInstance.Data;
            iVar9 = (param_1->Data).ArrayNum;
            iVar14 = (param_1->Data).ArrayMax;
            (param_1->Data).AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
            (param_1->Data).ArrayNum = iVar15;
            (param_1->Data).ArrayMax = iVar6;
            (pFVar19->Data).AllocatorInstance.Data = pFVar2;
            (pFVar19->Data).ArrayNum = iVar9;
            (pFVar19->Data).ArrayMax = iVar14;
            if (1 < iVar8) {
              do {
                iVar6 = iVar7 * 2;
                iVar15 = iVar6 + 1;
                if (iVar6 + 2 < iVar8) {
                  lVar10 = (longlong)iVar6 + 2;
                  lVar11 = (longlong)iVar6 + 1;
                  if (param_1[lVar11].Data.ArrayNum == 0) {
                    pwVar13 = L"";
                  }
                  else {
                    pwVar13 = (wchar_t *)param_1[lVar11].Data.AllocatorInstance.Data;
                  }
                  if (param_1[lVar10].Data.ArrayNum == 0) {
                    pwVar12 = L"";
                  }
                  else {
                    pwVar12 = (wchar_t *)param_1[lVar10].Data.AllocatorInstance.Data;
                  }
                  iVar9 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
                  if (iVar9 < 0) {
                    iVar15 = iVar6;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar17 = param_1 + iVar7;
                pFVar18 = param_1 + iVar15;
                if ((pFVar18->Data).ArrayNum == 0) {
                  pwVar13 = L"";
                }
                else {
                  pwVar13 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
                }
                if ((pFVar17->Data).ArrayNum == 0) {
                  pwVar12 = L"";
                }
                else {
                  pwVar12 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                }
                iVar6 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
                if (-1 < iVar6) break;
                iVar6 = (pFVar18->Data).ArrayNum;
                iVar9 = (pFVar18->Data).ArrayMax;
                pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
                iVar14 = (pFVar17->Data).ArrayNum;
                iVar7 = (pFVar17->Data).ArrayMax;
                (pFVar17->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
                (pFVar17->Data).ArrayNum = iVar6;
                (pFVar17->Data).ArrayMax = iVar9;
                (pFVar18->Data).AllocatorInstance.Data = pFVar2;
                (pFVar18->Data).ArrayNum = iVar14;
                (pFVar18->Data).ArrayMax = iVar7;
                iVar7 = iVar15;
              } while (iVar15 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar16 = lVar16 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar8 = iVar15 + -2;
      iVar15 = iVar8;
      iVar9 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar14 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      lVar16 = (longlong)iVar8 + 2;
      lVar10 = (longlong)iVar8 + 1;
      if (param_1[lVar10].Data.ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)param_1[lVar10].Data.AllocatorInstance.Data;
      }
      if (param_1[lVar16].Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)param_1[lVar16].Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
      if (iVar7 < 0) {
        iVar14 = iVar8;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar19 = param_1 + iVar6;
    pFVar17 = param_1 + iVar14;
    if ((pFVar17->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
    if (-1 < iVar8) goto LAB_1416cf1f7;
    iVar6 = (pFVar17->Data).ArrayNum;
    iVar7 = (pFVar17->Data).ArrayMax;
    iVar8 = iVar14 * 2 + 1;
    pFVar2 = (pFVar19->Data).AllocatorInstance.Data;
    iVar3 = (pFVar19->Data).ArrayNum;
    iVar4 = (pFVar19->Data).ArrayMax;
    (pFVar19->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
    (pFVar19->Data).ArrayNum = iVar6;
    (pFVar19->Data).ArrayMax = iVar7;
    (pFVar17->Data).AllocatorInstance.Data = pFVar2;
    (pFVar17->Data).ArrayNum = iVar3;
    (pFVar17->Data).ArrayMax = iVar4;
    iVar6 = iVar14;
  } while( true );
}

// HeapSortInternal<enum_ETextPluralForm,int,FIdentityFunctor,TDereferenceWrapper<enum_ETextPluralForm,TLess<void>_>_> @ 1416cf330

void __cdecl
AlgoImpl::
HeapSortInternal<enum_ETextPluralForm,int,FIdentityFunctor,TDereferenceWrapper<enum_ETextPluralForm,TLess<void>_>_>
          (ETextPluralForm *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ETextPluralForm,TLess<void>_> param_4)

{
  ETextPluralForm EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ETextPluralForm *pEVar10;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar6 = iVar4 * 2 + 1;
  iVar9 = iVar6;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar6) {
LAB_1416cf40e:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar8 = (longlong)iVar6;
        if (0 < iVar6) {
          pEVar10 = param_1 + lVar8;
          do {
            iVar9 = 0;
            EVar1 = *param_1;
            *param_1 = *pEVar10;
            *pEVar10 = EVar1;
            if (1 < iVar6) {
              do {
                iVar4 = iVar9 * 2;
                iVar7 = iVar4 + 1;
                if (iVar4 + 2 < iVar6) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar7]) {
                    iVar7 = iVar4;
                  }
                  iVar7 = iVar7 + 1;
                }
                EVar1 = param_1[iVar9];
                if (param_1[iVar7] <= EVar1) break;
                param_1[iVar9] = param_1[iVar7];
                param_1[iVar7] = EVar1;
                iVar9 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            pEVar10 = pEVar10 + -1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar4;
    }
    iVar6 = iVar4 * 2;
    iVar5 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2] < param_1[iVar5]) {
        iVar5 = iVar6;
      }
      iVar5 = iVar5 + 1;
    }
    EVar1 = param_1[iVar4];
    if (param_1[iVar5] <= EVar1) goto LAB_1416cf40e;
    param_1[iVar4] = param_1[iVar5];
    param_1[iVar5] = EVar1;
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar5;
  } while( true );
}

// HeapifyInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_> @ 1416cf4c0

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_>
          (TSharedPtr<FLocMetadataValue,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FLocMetadataValue *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLocMetadataValue *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  TSharedPtr<FLocMetadataValue,1> *pTVar13;
  TSharedPtr<FLocMetadataValue,1> *pTVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar6 = iVar9;
  iVar12 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_1416cf753:
      if (iVar12 == 0) {
        return;
      }
      iVar8 = iVar12 + -1;
      iVar9 = iVar6 + -2;
      iVar6 = iVar9;
      iVar12 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      lVar10 = (longlong)iVar9 + 1;
      pTVar1 = param_1[lVar10].SharedReferenceCount.ReferenceController;
      pFVar2 = param_1[lVar10].Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = param_1[(longlong)iVar9 + 2].SharedReferenceCount.ReferenceController;
      pFVar4 = param_1[(longlong)iVar9 + 2].Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FLocMetadataValue *)0x0) && (pFVar2 == (FLocMetadataValue *)0x0)) {
        bVar7 = false;
      }
      else {
        bVar7 = pFVar2 != (FLocMetadataValue *)0x0;
        if ((pFVar4 != (FLocMetadataValue *)0x0) == bVar7) {
          if ((pFVar4 == (FLocMetadataValue *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pFVar2 == (FLocMetadataValue *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar7 = FLocMetadataValue::operator<(pFVar4,pFVar2);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      if (bVar7 != false) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    pTVar14 = param_1 + iVar8;
    pTVar13 = param_1 + iVar11;
    pTVar1 = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar13->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar14->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FLocMetadataValue *)0x0) && (pFVar2 == (FLocMetadataValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      goto LAB_1416cf753;
    }
    bVar7 = pFVar2 != (FLocMetadataValue *)0x0;
    if ((pFVar4 != (FLocMetadataValue *)0x0) == bVar7) {
      if ((pFVar4 == (FLocMetadataValue *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar2 == (FLocMetadataValue *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar7 = FLocMetadataValue::operator<(pFVar4,pFVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar7 == false) goto LAB_1416cf753;
    pTVar1 = (pTVar13->SharedReferenceCount).ReferenceController;
    iVar9 = iVar11 * 2 + 1;
    pFVar2 = pTVar14->Object;
    pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
    pTVar14->Object = pTVar13->Object;
    (pTVar14->SharedReferenceCount).ReferenceController = pTVar1;
    pTVar13->Object = pFVar2;
    (pTVar13->SharedReferenceCount).ReferenceController = pTVar3;
    iVar8 = iVar11;
  } while( true );
}

// IntCastChecked<int,unsigned___int64> @ 1416cf7a0

int __cdecl IntCastChecked<int,unsigned___int64>(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((param_1 != (longlong)iVar3) || (iVar3 < 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// IntroSortInternal<IQueuedWork_*,int,FIdentityFunctor,TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)>_> @ 1416cf7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<IQueuedWork_*,int,FIdentityFunctor,TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)>_>
          (IQueuedWork **param_1,int param_2,FIdentityFunctor param_3,
          TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)> *param_4)

{
  IQueuedWork *pIVar1;
  char cVar2;
  int iVar3;
  IQueuedWork **ppIVar4;
  IQueuedWork **ppIVar5;
  IQueuedWork **ppIVar6;
  IQueuedWork **ppIVar7;
  IQueuedWork ***pppIVar8;
  int iVar9;
  IQueuedWork **ppIVar10;
  float fVar11;
  undefined1 auStack_3b8 [32];
  IQueuedWork *local_398;
  IQueuedWork *local_390;
  TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)> local_388 [2];
  IQueuedWork **local_368;
  IQueuedWork **local_358;
  IQueuedWork **local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar11;
    memset(local_340,0,0x2e8);
    pppIVar8 = &local_358;
    do {
      ppIVar4 = pppIVar8[1];
      ppIVar7 = *pppIVar8;
      local_368 = pppIVar8[2];
      iVar3 = (int)((longlong)ppIVar4 - (longlong)ppIVar7 >> 3) + 1;
      ppIVar10 = ppIVar7;
      iVar9 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_1416cf8b0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppIVar5 = ppIVar4 + 1;
          pIVar1 = ppIVar10[iVar3 >> 1];
          ppIVar10[iVar3 >> 1] = *ppIVar10;
          *ppIVar10 = pIVar1;
          ppIVar7 = ppIVar10;
LAB_1416cf8e0:
          ppIVar7 = ppIVar7 + 1;
          if (ppIVar7 <= ppIVar4) goto code_r0x0001416cf8e9;
          goto LAB_1416cf910;
        }
        for (; ppIVar5 = ppIVar10, ppIVar7 = ppIVar10, ppIVar10 < ppIVar4; ppIVar4 = ppIVar4 + -1) {
          while (ppIVar6 = ppIVar5, ppIVar7 = ppIVar7 + 1, ppIVar7 <= ppIVar4) {
            local_390 = *ppIVar7;
            local_398 = *ppIVar6;
            cVar2 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_398,&local_390);
            ppIVar5 = ppIVar7;
            if (cVar2 == '\0') {
              ppIVar5 = ppIVar6;
            }
          }
          pIVar1 = *ppIVar6;
          *ppIVar6 = *ppIVar4;
          *ppIVar4 = pIVar1;
        }
        goto LAB_1416cfa00;
      }
LAB_1416cf9de:
      local_388[0]._0_8_ = *(undefined8 *)param_4;
      local_388[0]._8_8_ = *(undefined8 *)&param_4->field_0x8;
      HeapSortInternal<IQueuedWork_*,int,FIdentityFunctor,TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)>_>
                (ppIVar7,iVar3,param_3,local_388);
LAB_1416cfa00:
      pppIVar8 = pppIVar8 + -3;
    } while (&local_358 <= pppIVar8);
  }
  return;
code_r0x0001416cf8e9:
  local_398 = *ppIVar7;
  local_390 = *ppIVar10;
  cVar2 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_390,&local_398);
  if (cVar2 == '\0') goto LAB_1416cf8e0;
LAB_1416cf910:
  do {
    ppIVar6 = ppIVar5;
    ppIVar5 = ppIVar6 + -1;
    if (ppIVar5 <= ppIVar10) break;
    local_390 = *ppIVar10;
    local_398 = *ppIVar5;
    cVar2 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_398,&local_390);
  } while (cVar2 == '\0');
  if (ppIVar7 <= ppIVar5) {
    pIVar1 = *ppIVar7;
    *ppIVar7 = *ppIVar5;
    *ppIVar5 = pIVar1;
    goto LAB_1416cf8e0;
  }
  pIVar1 = *ppIVar10;
  iVar9 = iVar9 + -1;
  *ppIVar10 = *ppIVar5;
  *ppIVar5 = pIVar1;
  if ((longlong)((longlong)ppIVar5 + (-8 - (longlong)ppIVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppIVar4 - (longlong)ppIVar7 & 0xfffffffffffffff8U)) {
    if (ppIVar7 < ppIVar4) {
      *pppIVar8 = ppIVar7;
      pppIVar8[1] = ppIVar4;
      *(int *)(pppIVar8 + 2) = iVar9;
      pppIVar8 = pppIVar8 + 3;
    }
    if (ppIVar5 <= ppIVar10 + 1) goto LAB_1416cfa00;
    ppIVar4 = ppIVar6 + -2;
    ppIVar7 = ppIVar10;
  }
  else {
    if (ppIVar10 + 1 < ppIVar5) {
      *pppIVar8 = ppIVar10;
      pppIVar8[1] = ppIVar6 + -2;
      *(int *)(pppIVar8 + 2) = iVar9;
      pppIVar8 = pppIVar8 + 3;
    }
    if (ppIVar4 <= ppIVar7) goto LAB_1416cfa00;
  }
  iVar3 = (int)((longlong)ppIVar4 - (longlong)ppIVar7 >> 3) + 1;
  ppIVar10 = ppIVar7;
  if (iVar9 == 0) goto LAB_1416cf9de;
  goto LAB_1416cf8b0;
}

// IntroSortInternal<FMallocFrameProfiler::FCallStackStats,int,FIdentityFunctor,TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,`FMallocFrameProfiler::UpdateStats'::__l2::<lambda_1>_>_> @ 1416cfae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMallocFrameProfiler::FCallStackStats,int,FIdentityFunctor,TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,_FMallocFrameProfiler::UpdateStats_::__l2::<lambda_1>_>_>
          (FCallStackStats *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,_public:_virtual_void___cdecl_FMallocFrameProfiler::UpdateStats(void)_::_2_::<lambda_1>_>
          param_4)

{
  FCallStackStats *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  FCallStackStats *pFVar17;
  FCallStackStats *pFVar18;
  FCallStackStats *pFVar19;
  FCallStackStats *pFVar20;
  FCallStackStats *pFVar21;
  FCallStackStats *pFVar22;
  FCallStackStats **ppFVar23;
  float fVar24;
  undefined1 auStack_378 [48];
  FCallStackStats *local_348;
  FCallStackStats *local_338;
  FCallStackStats *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar24;
    memset(local_320,0,0x2e8);
    ppFVar23 = &local_338;
    do {
      pFVar17 = ppFVar23[1];
      pFVar22 = *ppFVar23;
      pFVar1 = ppFVar23[2];
      local_348._0_4_ = (int)pFVar1;
      iVar16 = (int)(((longlong)pFVar17 - (longlong)pFVar22) / 0x18) + 1;
      pFVar21 = pFVar22;
      if ((int)local_348 != 0) {
LAB_1416cfbb0:
        if (8 < iVar16) {
          iVar6 = pFVar21->Mallocs;
          iVar7 = pFVar21->Frees;
          iVar8 = pFVar21->UsageCount;
          pFVar19 = pFVar17 + 1;
          iVar16 = iVar16 / 2;
          pFVar22 = pFVar21 + iVar16;
          iVar9 = pFVar22->CallStackIndex;
          iVar10 = pFVar22->Mallocs;
          iVar11 = pFVar22->Frees;
          iVar12 = pFVar22->UsageCount;
          iVar13 = pFVar21[iVar16].UniqueFrames;
          iVar14 = pFVar21[iVar16].LastFrameSeen;
          pFVar22 = pFVar21 + iVar16;
          pFVar22->CallStackIndex = pFVar21->CallStackIndex;
          pFVar22->Mallocs = iVar6;
          pFVar22->Frees = iVar7;
          pFVar22->UsageCount = iVar8;
          iVar6 = pFVar21->LastFrameSeen;
          pFVar21[iVar16].UniqueFrames = pFVar21->UniqueFrames;
          pFVar21[iVar16].LastFrameSeen = iVar6;
          pFVar21->CallStackIndex = iVar9;
          pFVar21->Mallocs = iVar10;
          pFVar21->Frees = iVar11;
          pFVar21->UsageCount = iVar12;
          pFVar21->UniqueFrames = iVar13;
          pFVar21->LastFrameSeen = iVar14;
          pFVar22 = pFVar21;
LAB_1416cfc00:
          pFVar18 = pFVar22;
          pFVar22 = pFVar18 + 1;
          if (pFVar22 <= pFVar17) goto code_r0x0001416cfc09;
          goto LAB_1416cfc13;
        }
        for (; pFVar22 = pFVar21, pFVar1 = pFVar21, pFVar21 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar17) {
            if (pFVar1->Mallocs < pFVar22->Mallocs) {
              pFVar22 = pFVar1;
            }
          }
          iVar8 = pFVar22->CallStackIndex;
          iVar9 = pFVar22->Mallocs;
          iVar10 = pFVar22->Frees;
          iVar11 = pFVar22->UsageCount;
          iVar12 = pFVar22->UniqueFrames;
          iVar13 = pFVar22->LastFrameSeen;
          iVar16 = pFVar17->Mallocs;
          iVar6 = pFVar17->Frees;
          iVar7 = pFVar17->UsageCount;
          pFVar22->CallStackIndex = pFVar17->CallStackIndex;
          pFVar22->Mallocs = iVar16;
          pFVar22->Frees = iVar6;
          pFVar22->UsageCount = iVar7;
          iVar16 = pFVar17->LastFrameSeen;
          pFVar22->UniqueFrames = pFVar17->UniqueFrames;
          pFVar22->LastFrameSeen = iVar16;
          pFVar17->CallStackIndex = iVar8;
          pFVar17->Mallocs = iVar9;
          pFVar17->Frees = iVar10;
          pFVar17->UsageCount = iVar11;
          pFVar17->UniqueFrames = iVar12;
          pFVar17->LastFrameSeen = iVar13;
        }
        goto LAB_1416cfd35;
      }
LAB_1416cfd26:
      local_348 = pFVar1;
      HeapSortInternal<FMallocFrameProfiler::FCallStackStats,int,FIdentityFunctor,TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,_FMallocFrameProfiler::UpdateStats_::__l2::<lambda_1>_>_>
                (pFVar22,iVar16,param_3,param_4);
LAB_1416cfd35:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_338 <= ppFVar23);
  }
  return;
code_r0x0001416cfc09:
  if (pFVar21->Mallocs <= pFVar18[1].Mallocs) goto LAB_1416cfc00;
LAB_1416cfc13:
  do {
    pFVar20 = pFVar19;
    pFVar19 = pFVar20 + -1;
    if (pFVar19 <= pFVar21) break;
  } while (pFVar20[-1].Mallocs <= pFVar21->Mallocs);
  uVar2 = pFVar19->CallStackIndex;
  uVar3 = pFVar19->Mallocs;
  uVar4 = pFVar20[-1].Frees;
  uVar5 = pFVar20[-1].UsageCount;
  if (pFVar22 <= pFVar19) {
    iVar6 = pFVar22->CallStackIndex;
    iVar7 = pFVar22->Mallocs;
    iVar8 = pFVar18[1].Frees;
    iVar9 = pFVar18[1].UsageCount;
    iVar10 = pFVar18[1].UniqueFrames;
    iVar11 = pFVar18[1].LastFrameSeen;
    pFVar22->CallStackIndex = uVar2;
    pFVar22->Mallocs = uVar3;
    pFVar18[1].Frees = uVar4;
    pFVar18[1].UsageCount = uVar5;
    iVar16 = pFVar20[-1].LastFrameSeen;
    pFVar18[1].UniqueFrames = pFVar20[-1].UniqueFrames;
    pFVar18[1].LastFrameSeen = iVar16;
    pFVar19->CallStackIndex = iVar6;
    pFVar19->Mallocs = iVar7;
    pFVar20[-1].Frees = iVar8;
    pFVar20[-1].UsageCount = iVar9;
    pFVar20[-1].UniqueFrames = iVar10;
    pFVar20[-1].LastFrameSeen = iVar11;
    goto LAB_1416cfc00;
  }
  iVar6 = pFVar21->CallStackIndex;
  iVar7 = pFVar21->Mallocs;
  iVar8 = pFVar21->Frees;
  iVar9 = pFVar21->UsageCount;
  iVar10 = pFVar21->UniqueFrames;
  iVar11 = pFVar21->LastFrameSeen;
  lVar15 = (longlong)pFVar19 + (-0x18 - (longlong)pFVar21);
  local_348._0_4_ = (int)local_348 + -1;
  lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
  pFVar21->CallStackIndex = uVar2;
  pFVar21->Mallocs = uVar3;
  pFVar21->Frees = uVar4;
  pFVar21->UsageCount = uVar5;
  iVar16 = pFVar20[-1].LastFrameSeen;
  pFVar21->UniqueFrames = pFVar20[-1].UniqueFrames;
  pFVar21->LastFrameSeen = iVar16;
  pFVar19->CallStackIndex = iVar6;
  pFVar19->Mallocs = iVar7;
  pFVar20[-1].Frees = iVar8;
  pFVar20[-1].UsageCount = iVar9;
  pFVar20[-1].UniqueFrames = iVar10;
  pFVar20[-1].LastFrameSeen = iVar11;
  if ((lVar15 >> 2) - (lVar15 >> 0x3f) < ((longlong)pFVar17 - (longlong)pFVar22) / 0x18) {
    if (pFVar22 < pFVar17) {
      *ppFVar23 = pFVar22;
      ppFVar23[1] = pFVar17;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar19 <= pFVar21 + 1) goto LAB_1416cfd35;
    pFVar17 = pFVar20 + -2;
    pFVar22 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar19) {
      *ppFVar23 = pFVar21;
      ppFVar23[1] = pFVar20 + -2;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar17 <= pFVar22) goto LAB_1416cfd35;
  }
  iVar16 = (int)(((longlong)pFVar17 - (longlong)pFVar22) / 0x18) + 1;
  pFVar21 = pFVar22;
  if ((int)local_348 == 0) goto LAB_1416cfd26;
  goto LAB_1416cfbb0;
}

// IntroSortInternal<FICUInternationalization::FICUCultureData,int,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,`FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>_>_> @ 1416cfdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FICUInternationalization::FICUCultureData,int,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,_FICUInternationalization::GetPrioritizedCultureNames_::__l5::<lambda_2>_>_>
          (FICUCultureData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FICUInternationalization::FICUCultureData,_public:_class_TArray<FString,TSizedDefaultAllocator<32>_>___cdecl_FICUInternationalization::GetPrioritizedCultureNames(FString_const_&)_::_5_::<lambda_2>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  FICUCultureData *pFVar20;
  FICUCultureData *pFVar21;
  FICUCultureData *pFVar22;
  FICUCultureData **ppFVar23;
  int iVar24;
  FICUCultureData *pFVar25;
  FICUCultureData *pFVar26;
  FICUCultureData *pFVar27;
  float fVar28;
  undefined1 auStack_388 [48];
  FICUCultureData *local_358;
  FICUCultureData *local_348;
  FICUCultureData *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar28;
    memset(local_330,0,0x2e8);
    ppFVar23 = &local_348;
    do {
      pFVar27 = ppFVar23[1];
      pFVar26 = *ppFVar23;
      local_358 = ppFVar23[2];
      iVar19 = (int)((longlong)pFVar27 - (longlong)pFVar26 >> 6) + 1;
      pFVar25 = pFVar26;
      iVar24 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1416cfeb0:
        if (8 < iVar19) {
          iVar8 = (pFVar25->Name).Data.ArrayNum;
          iVar9 = (pFVar25->Name).Data.ArrayMax;
          pFVar20 = pFVar27 + 1;
          pFVar26 = pFVar25 + iVar19 / 2;
          pFVar1 = (pFVar26->Name).Data.AllocatorInstance.Data;
          iVar10 = (pFVar26->Name).Data.ArrayNum;
          iVar11 = (pFVar26->Name).Data.ArrayMax;
          pFVar2 = (pFVar26->LanguageCode).Data.AllocatorInstance.Data;
          iVar12 = (pFVar26->LanguageCode).Data.ArrayNum;
          iVar13 = (pFVar26->LanguageCode).Data.ArrayMax;
          pFVar3 = (pFVar26->ScriptCode).Data.AllocatorInstance.Data;
          iVar14 = (pFVar26->ScriptCode).Data.ArrayNum;
          iVar15 = (pFVar26->ScriptCode).Data.ArrayMax;
          pFVar4 = (pFVar26->CountryCode).Data.AllocatorInstance.Data;
          iVar16 = (pFVar26->CountryCode).Data.ArrayNum;
          iVar17 = (pFVar26->CountryCode).Data.ArrayMax;
          (pFVar26->Name).Data.AllocatorInstance.Data = (pFVar25->Name).Data.AllocatorInstance.Data;
          (pFVar26->Name).Data.ArrayNum = iVar8;
          (pFVar26->Name).Data.ArrayMax = iVar9;
          iVar19 = (pFVar25->LanguageCode).Data.ArrayNum;
          iVar8 = (pFVar25->LanguageCode).Data.ArrayMax;
          (pFVar26->LanguageCode).Data.AllocatorInstance.Data =
               (pFVar25->LanguageCode).Data.AllocatorInstance.Data;
          (pFVar26->LanguageCode).Data.ArrayNum = iVar19;
          (pFVar26->LanguageCode).Data.ArrayMax = iVar8;
          iVar19 = (pFVar25->ScriptCode).Data.ArrayNum;
          iVar8 = (pFVar25->ScriptCode).Data.ArrayMax;
          (pFVar26->ScriptCode).Data.AllocatorInstance.Data =
               (pFVar25->ScriptCode).Data.AllocatorInstance.Data;
          (pFVar26->ScriptCode).Data.ArrayNum = iVar19;
          (pFVar26->ScriptCode).Data.ArrayMax = iVar8;
          iVar19 = (pFVar25->CountryCode).Data.ArrayNum;
          iVar8 = (pFVar25->CountryCode).Data.ArrayMax;
          (pFVar26->CountryCode).Data.AllocatorInstance.Data =
               (pFVar25->CountryCode).Data.AllocatorInstance.Data;
          (pFVar26->CountryCode).Data.ArrayNum = iVar19;
          (pFVar26->CountryCode).Data.ArrayMax = iVar8;
          (pFVar25->Name).Data.AllocatorInstance.Data = pFVar1;
          (pFVar25->Name).Data.ArrayNum = iVar10;
          (pFVar25->Name).Data.ArrayMax = iVar11;
          (pFVar25->LanguageCode).Data.AllocatorInstance.Data = pFVar2;
          (pFVar25->LanguageCode).Data.ArrayNum = iVar12;
          (pFVar25->LanguageCode).Data.ArrayMax = iVar13;
          (pFVar25->ScriptCode).Data.AllocatorInstance.Data = pFVar3;
          (pFVar25->ScriptCode).Data.ArrayNum = iVar14;
          (pFVar25->ScriptCode).Data.ArrayMax = iVar15;
          (pFVar25->CountryCode).Data.AllocatorInstance.Data = pFVar4;
          (pFVar25->CountryCode).Data.ArrayNum = iVar16;
          (pFVar25->CountryCode).Data.ArrayMax = iVar17;
          pFVar26 = pFVar25;
LAB_1416cff13:
          pFVar22 = pFVar26;
          pFVar26 = pFVar22 + 1;
          if (pFVar26 <= pFVar27) goto code_r0x0001416cff1c;
          goto LAB_1416cff30;
        }
        for (; pFVar20 = pFVar25, pFVar26 = pFVar25, pFVar25 < pFVar27; pFVar27 = pFVar27 + -1) {
          while (pFVar22 = pFVar20, pFVar26 = pFVar26 + 1, pFVar26 <= pFVar27) {
            bVar18 = `FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>::
                     operator()(param_4.Predicate,pFVar22,pFVar26);
            pFVar20 = pFVar26;
            if (!bVar18) {
              pFVar20 = pFVar22;
            }
          }
          pFVar1 = (pFVar22->Name).Data.AllocatorInstance.Data;
          iVar8 = (pFVar22->Name).Data.ArrayNum;
          iVar9 = (pFVar22->Name).Data.ArrayMax;
          pFVar2 = (pFVar22->LanguageCode).Data.AllocatorInstance.Data;
          iVar10 = (pFVar22->LanguageCode).Data.ArrayNum;
          iVar11 = (pFVar22->LanguageCode).Data.ArrayMax;
          pFVar3 = (pFVar22->ScriptCode).Data.AllocatorInstance.Data;
          iVar12 = (pFVar22->ScriptCode).Data.ArrayNum;
          iVar13 = (pFVar22->ScriptCode).Data.ArrayMax;
          iVar24 = (pFVar27->Name).Data.ArrayNum;
          iVar19 = (pFVar27->Name).Data.ArrayMax;
          pFVar4 = (pFVar22->CountryCode).Data.AllocatorInstance.Data;
          iVar14 = (pFVar22->CountryCode).Data.ArrayNum;
          iVar15 = (pFVar22->CountryCode).Data.ArrayMax;
          (pFVar22->Name).Data.AllocatorInstance.Data = (pFVar27->Name).Data.AllocatorInstance.Data;
          (pFVar22->Name).Data.ArrayNum = iVar24;
          (pFVar22->Name).Data.ArrayMax = iVar19;
          iVar24 = (pFVar27->LanguageCode).Data.ArrayNum;
          iVar19 = (pFVar27->LanguageCode).Data.ArrayMax;
          (pFVar22->LanguageCode).Data.AllocatorInstance.Data =
               (pFVar27->LanguageCode).Data.AllocatorInstance.Data;
          (pFVar22->LanguageCode).Data.ArrayNum = iVar24;
          (pFVar22->LanguageCode).Data.ArrayMax = iVar19;
          iVar24 = (pFVar27->ScriptCode).Data.ArrayNum;
          iVar19 = (pFVar27->ScriptCode).Data.ArrayMax;
          (pFVar22->ScriptCode).Data.AllocatorInstance.Data =
               (pFVar27->ScriptCode).Data.AllocatorInstance.Data;
          (pFVar22->ScriptCode).Data.ArrayNum = iVar24;
          (pFVar22->ScriptCode).Data.ArrayMax = iVar19;
          iVar24 = (pFVar27->CountryCode).Data.ArrayNum;
          iVar19 = (pFVar27->CountryCode).Data.ArrayMax;
          (pFVar22->CountryCode).Data.AllocatorInstance.Data =
               (pFVar27->CountryCode).Data.AllocatorInstance.Data;
          (pFVar22->CountryCode).Data.ArrayNum = iVar24;
          (pFVar22->CountryCode).Data.ArrayMax = iVar19;
          (pFVar27->Name).Data.AllocatorInstance.Data = pFVar1;
          (pFVar27->Name).Data.ArrayNum = iVar8;
          (pFVar27->Name).Data.ArrayMax = iVar9;
          (pFVar27->LanguageCode).Data.AllocatorInstance.Data = pFVar2;
          (pFVar27->LanguageCode).Data.ArrayNum = iVar10;
          (pFVar27->LanguageCode).Data.ArrayMax = iVar11;
          (pFVar27->ScriptCode).Data.AllocatorInstance.Data = pFVar3;
          (pFVar27->ScriptCode).Data.ArrayNum = iVar12;
          (pFVar27->ScriptCode).Data.ArrayMax = iVar13;
          (pFVar27->CountryCode).Data.AllocatorInstance.Data = pFVar4;
          (pFVar27->CountryCode).Data.ArrayNum = iVar14;
          (pFVar27->CountryCode).Data.ArrayMax = iVar15;
        }
        goto LAB_1416d0065;
      }
LAB_1416d0054:
      HeapSortInternal<FICUInternationalization::FICUCultureData,int,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,_FICUInternationalization::GetPrioritizedCultureNames_::__l5::<lambda_2>_>_>
                (pFVar26,iVar19,param_3,param_4);
LAB_1416d0065:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_348 <= ppFVar23);
  }
  return;
code_r0x0001416cff1c:
  bVar18 = `FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>::operator()
                     (param_4.Predicate,pFVar25,pFVar26);
  if (!bVar18) goto LAB_1416cff13;
LAB_1416cff30:
  do {
    pFVar21 = pFVar20;
    pFVar20 = pFVar21 + -1;
    if (pFVar20 <= pFVar25) break;
    bVar18 = `FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>::operator()
                       (param_4.Predicate,pFVar20,pFVar25);
  } while (!bVar18);
  pFVar1 = (pFVar20->Name).Data.AllocatorInstance.Data;
  uVar5 = pFVar21[-1].Name.Data.ArrayNum;
  uVar6 = pFVar21[-1].Name.Data.ArrayMax;
  if (pFVar26 <= pFVar20) {
    pFVar2 = (pFVar26->Name).Data.AllocatorInstance.Data;
    iVar9 = pFVar22[1].Name.Data.ArrayNum;
    iVar10 = pFVar22[1].Name.Data.ArrayMax;
    pFVar3 = pFVar22[1].LanguageCode.Data.AllocatorInstance.Data;
    iVar11 = pFVar22[1].LanguageCode.Data.ArrayNum;
    iVar12 = pFVar22[1].LanguageCode.Data.ArrayMax;
    pFVar4 = pFVar22[1].ScriptCode.Data.AllocatorInstance.Data;
    iVar13 = pFVar22[1].ScriptCode.Data.ArrayNum;
    iVar14 = pFVar22[1].ScriptCode.Data.ArrayMax;
    pFVar7 = pFVar22[1].CountryCode.Data.AllocatorInstance.Data;
    iVar15 = pFVar22[1].CountryCode.Data.ArrayNum;
    iVar16 = pFVar22[1].CountryCode.Data.ArrayMax;
    (pFVar26->Name).Data.AllocatorInstance.Data = pFVar1;
    pFVar22[1].Name.Data.ArrayNum = uVar5;
    pFVar22[1].Name.Data.ArrayMax = uVar6;
    iVar19 = pFVar21[-1].LanguageCode.Data.ArrayNum;
    iVar8 = pFVar21[-1].LanguageCode.Data.ArrayMax;
    pFVar22[1].LanguageCode.Data.AllocatorInstance.Data =
         pFVar21[-1].LanguageCode.Data.AllocatorInstance.Data;
    pFVar22[1].LanguageCode.Data.ArrayNum = iVar19;
    pFVar22[1].LanguageCode.Data.ArrayMax = iVar8;
    iVar19 = pFVar21[-1].ScriptCode.Data.ArrayNum;
    iVar8 = pFVar21[-1].ScriptCode.Data.ArrayMax;
    pFVar22[1].ScriptCode.Data.AllocatorInstance.Data =
         pFVar21[-1].ScriptCode.Data.AllocatorInstance.Data;
    pFVar22[1].ScriptCode.Data.ArrayNum = iVar19;
    pFVar22[1].ScriptCode.Data.ArrayMax = iVar8;
    iVar19 = pFVar21[-1].CountryCode.Data.ArrayNum;
    iVar8 = pFVar21[-1].CountryCode.Data.ArrayMax;
    pFVar22[1].CountryCode.Data.AllocatorInstance.Data =
         pFVar21[-1].CountryCode.Data.AllocatorInstance.Data;
    pFVar22[1].CountryCode.Data.ArrayNum = iVar19;
    pFVar22[1].CountryCode.Data.ArrayMax = iVar8;
    (pFVar20->Name).Data.AllocatorInstance.Data = pFVar2;
    pFVar21[-1].Name.Data.ArrayNum = iVar9;
    pFVar21[-1].Name.Data.ArrayMax = iVar10;
    pFVar21[-1].LanguageCode.Data.AllocatorInstance.Data = pFVar3;
    pFVar21[-1].LanguageCode.Data.ArrayNum = iVar11;
    pFVar21[-1].LanguageCode.Data.ArrayMax = iVar12;
    pFVar21[-1].ScriptCode.Data.AllocatorInstance.Data = pFVar4;
    pFVar21[-1].ScriptCode.Data.ArrayNum = iVar13;
    pFVar21[-1].ScriptCode.Data.ArrayMax = iVar14;
    pFVar21[-1].CountryCode.Data.AllocatorInstance.Data = pFVar7;
    pFVar21[-1].CountryCode.Data.ArrayNum = iVar15;
    pFVar21[-1].CountryCode.Data.ArrayMax = iVar16;
    goto LAB_1416cff13;
  }
  pFVar2 = (pFVar25->Name).Data.AllocatorInstance.Data;
  iVar9 = (pFVar25->Name).Data.ArrayNum;
  iVar10 = (pFVar25->Name).Data.ArrayMax;
  pFVar3 = (pFVar25->LanguageCode).Data.AllocatorInstance.Data;
  iVar11 = (pFVar25->LanguageCode).Data.ArrayNum;
  iVar12 = (pFVar25->LanguageCode).Data.ArrayMax;
  pFVar4 = (pFVar25->ScriptCode).Data.AllocatorInstance.Data;
  iVar13 = (pFVar25->ScriptCode).Data.ArrayNum;
  iVar14 = (pFVar25->ScriptCode).Data.ArrayMax;
  iVar24 = iVar24 + -1;
  pFVar7 = (pFVar25->CountryCode).Data.AllocatorInstance.Data;
  iVar15 = (pFVar25->CountryCode).Data.ArrayNum;
  iVar16 = (pFVar25->CountryCode).Data.ArrayMax;
  (pFVar25->Name).Data.AllocatorInstance.Data = pFVar1;
  (pFVar25->Name).Data.ArrayNum = uVar5;
  (pFVar25->Name).Data.ArrayMax = uVar6;
  iVar19 = pFVar21[-1].LanguageCode.Data.ArrayNum;
  iVar8 = pFVar21[-1].LanguageCode.Data.ArrayMax;
  (pFVar25->LanguageCode).Data.AllocatorInstance.Data =
       pFVar21[-1].LanguageCode.Data.AllocatorInstance.Data;
  (pFVar25->LanguageCode).Data.ArrayNum = iVar19;
  (pFVar25->LanguageCode).Data.ArrayMax = iVar8;
  iVar19 = pFVar21[-1].ScriptCode.Data.ArrayNum;
  iVar8 = pFVar21[-1].ScriptCode.Data.ArrayMax;
  (pFVar25->ScriptCode).Data.AllocatorInstance.Data =
       pFVar21[-1].ScriptCode.Data.AllocatorInstance.Data;
  (pFVar25->ScriptCode).Data.ArrayNum = iVar19;
  (pFVar25->ScriptCode).Data.ArrayMax = iVar8;
  iVar19 = pFVar21[-1].CountryCode.Data.ArrayNum;
  iVar8 = pFVar21[-1].CountryCode.Data.ArrayMax;
  (pFVar25->CountryCode).Data.AllocatorInstance.Data =
       pFVar21[-1].CountryCode.Data.AllocatorInstance.Data;
  (pFVar25->CountryCode).Data.ArrayNum = iVar19;
  (pFVar25->CountryCode).Data.ArrayMax = iVar8;
  (pFVar20->Name).Data.AllocatorInstance.Data = pFVar2;
  pFVar21[-1].Name.Data.ArrayNum = iVar9;
  pFVar21[-1].Name.Data.ArrayMax = iVar10;
  pFVar21[-1].LanguageCode.Data.AllocatorInstance.Data = pFVar3;
  pFVar21[-1].LanguageCode.Data.ArrayNum = iVar11;
  pFVar21[-1].LanguageCode.Data.ArrayMax = iVar12;
  pFVar21[-1].ScriptCode.Data.AllocatorInstance.Data = pFVar4;
  pFVar21[-1].ScriptCode.Data.ArrayNum = iVar13;
  pFVar21[-1].ScriptCode.Data.ArrayMax = iVar14;
  pFVar21[-1].CountryCode.Data.AllocatorInstance.Data = pFVar7;
  pFVar21[-1].CountryCode.Data.ArrayNum = iVar15;
  pFVar21[-1].CountryCode.Data.ArrayMax = iVar16;
  if ((longlong)((longlong)pFVar20 + (-0x40 - (longlong)pFVar25) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pFVar27 - (longlong)pFVar26 & 0xffffffffffffffc0U)) {
    if (pFVar26 < pFVar27) {
      *ppFVar23 = pFVar26;
      ppFVar23[1] = pFVar27;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar20 <= pFVar25 + 1) goto LAB_1416d0065;
    pFVar27 = pFVar21 + -2;
    pFVar26 = pFVar25;
  }
  else {
    if (pFVar25 + 1 < pFVar20) {
      *ppFVar23 = pFVar25;
      ppFVar23[1] = pFVar21 + -2;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar27 <= pFVar26) goto LAB_1416d0065;
  }
  iVar19 = (int)((longlong)pFVar27 - (longlong)pFVar26 >> 6) + 1;
  pFVar25 = pFVar26;
  if (iVar24 == 0) goto LAB_1416d0054;
  goto LAB_1416cfeb0;
}

// IntroSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_> @ 1416d0160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
          (TSharedPtr<FLocMetadataValue,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue> param_4)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLocMetadataValue *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FLocMetadataValue *pFVar5;
  code *pcVar6;
  TSharedPtr<FLocMetadataValue,1> *pTVar7;
  int iVar8;
  bool bVar9;
  TSharedPtr<FLocMetadataValue,1> *pTVar10;
  longlong lVar11;
  int iVar12;
  TSharedPtr<FLocMetadataValue,1> *pTVar13;
  TSharedPtr<FLocMetadataValue,1> *pTVar14;
  TSharedPtr<FLocMetadataValue,1> *pTVar15;
  float fVar16;
  undefined1 auStackY_3e8 [32];
  FIdentityFunctor local_3b8 [8];
  FIdentityFunctor local_3b0;
  TSharedPtr<FLocMetadataValue,1> **local_3a8;
  TSharedPtr<FLocMetadataValue,1> *local_3a0;
  int local_398;
  TSharedPtr<FLocMetadataValue,1> *local_390;
  TSharedPtr<FLocMetadataValue,1> *local_388;
  FCompareMetadataValue *local_380;
  TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue> local_378;
  TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
  local_370 [3];
  TSharedPtr<FLocMetadataValue,1> *local_358;
  TSharedPtr<FLocMetadataValue,1> *local_348;
  TSharedPtr<FLocMetadataValue,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_3b0 = param_3;
    local_380 = param_4.Predicate;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    local_3a8 = &local_348;
    do {
      local_388 = local_3a8[1];
      local_358 = local_3a8[2];
      iVar12 = (int)((longlong)local_388 - (longlong)*local_3a8 >> 4);
      pTVar7 = *local_3a8;
      local_398 = (int)local_358;
joined_r0x0001416d0248:
      iVar8 = iVar12 + 1;
      local_390 = pTVar7;
      if (local_398 != 0) {
        if (8 < iVar8) {
          pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
          pFVar3 = pTVar7[iVar8 / 2].Object;
          pTVar4 = pTVar7[iVar8 / 2].SharedReferenceCount.ReferenceController;
          pTVar7[iVar8 / 2].Object = pTVar7->Object;
          pTVar7[iVar8 / 2].SharedReferenceCount.ReferenceController = pTVar2;
          pTVar7->Object = pFVar3;
          (pTVar7->SharedReferenceCount).ReferenceController = pTVar4;
          pTVar10 = pTVar7;
          local_3a0 = local_388 + 1;
          pTVar14 = local_388;
LAB_1416d02a0:
          while (pTVar13 = pTVar10, pTVar10 = pTVar13 + 1, pTVar15 = local_3a0, pTVar10 <= pTVar14)
          {
            pTVar2 = pTVar13[1].SharedReferenceCount.ReferenceController;
            pFVar3 = pTVar10->Object;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
            pFVar5 = pTVar7->Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar5 != (FLocMetadataValue *)0x0) || (pFVar3 != (FLocMetadataValue *)0x0))
            goto LAB_1416d02f4;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
          }
          goto LAB_1416d0380;
        }
        if (pTVar7 < local_388) {
          pTVar14 = pTVar7;
          do {
            pTVar10 = pTVar14;
            pTVar14 = pTVar10;
            pTVar15 = pTVar7 + 1;
            if (pTVar7 + 1 <= local_388) {
              do {
                pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
                pFVar3 = pTVar15->Object;
                if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
                pFVar5 = pTVar10->Object;
                if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar4->SharedReferenceCount =
                       (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_3a0 = pTVar10;
                if ((pFVar5 == (FLocMetadataValue *)0x0) && (pFVar3 == (FLocMetadataValue *)0x0)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = pFVar3 != (FLocMetadataValue *)0x0;
                  if ((pFVar5 != (FLocMetadataValue *)0x0) == bVar9) {
                    if ((pFVar5 == (FLocMetadataValue *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x44d,L""), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if ((pFVar3 == (FLocMetadataValue *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x44d,L""), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    bVar9 = FLocMetadataValue::operator<(pFVar5,pFVar3);
                  }
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar4);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
                pTVar10 = pTVar15;
                if (bVar9 == false) {
                  pTVar10 = local_3a0;
                }
                pTVar15 = pTVar15 + 1;
                pTVar14 = local_390;
              } while (pTVar15 <= local_388);
            }
            pFVar3 = pTVar10->Object;
            pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
            pTVar15 = local_388 + -1;
            pTVar4 = (local_388->SharedReferenceCount).ReferenceController;
            pTVar10->Object = local_388->Object;
            (pTVar10->SharedReferenceCount).ReferenceController = pTVar4;
            local_388->Object = pFVar3;
            (local_388->SharedReferenceCount).ReferenceController = pTVar2;
            param_4.Predicate = local_380;
            local_3a0 = pTVar10;
            local_388 = pTVar15;
          } while (pTVar14 < pTVar15);
        }
        goto LAB_1416d073d;
      }
      local_3b8[0] = param_3;
      local_378.Predicate = param_4.Predicate;
      if (iVar8 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                           ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_1416d06ca:
        local_370[0].Predicate = &local_378;
        HeapifyInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_>
                  (pTVar7,iVar8,param_3,&local_378);
        if (0 < iVar12) {
          lVar11 = (longlong)iVar12 << 4;
          do {
            puVar1 = (undefined8 *)((longlong)&pTVar7->Object + lVar11);
            pTVar2 = (TReferenceControllerBase<1> *)puVar1[1];
            pFVar3 = pTVar7->Object;
            pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
            pTVar7->Object = (FLocMetadataValue *)*puVar1;
            (pTVar7->SharedReferenceCount).ReferenceController = pTVar2;
            puVar1 = (undefined8 *)((longlong)&pTVar7->Object + lVar11);
            *puVar1 = pFVar3;
            puVar1[1] = pTVar4;
            HeapSiftDown<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>_>
                      (pTVar7,0,iVar12,local_3b8,local_370);
            iVar12 = iVar12 + -1;
            lVar11 = lVar11 + -0x10;
          } while (0 < iVar12);
        }
      }
      else if (iVar8 != 0) goto LAB_1416d06ca;
LAB_1416d073d:
      local_3a8 = local_3a8 + -3;
    } while (&local_348 <= local_3a8);
  }
  return;
LAB_1416d02f4:
  bVar9 = pFVar3 != (FLocMetadataValue *)0x0;
  if ((pFVar5 != (FLocMetadataValue *)0x0) == bVar9) {
    if ((pFVar5 == (FLocMetadataValue *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar3 == (FLocMetadataValue *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar9 = FLocMetadataValue::operator<(pFVar5,pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar15 = local_3a0;
  if (bVar9 == false) goto LAB_1416d02a0;
LAB_1416d0380:
  do {
    while( true ) {
      pTVar14 = pTVar15;
      pTVar15 = pTVar14 + -1;
      if (pTVar15 <= pTVar7) goto LAB_1416d0456;
      pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar7->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = pTVar14[-1].SharedReferenceCount.ReferenceController;
      pFVar5 = pTVar15->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar5 != (FLocMetadataValue *)0x0) || (pFVar3 != (FLocMetadataValue *)0x0)) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    bVar9 = pFVar3 != (FLocMetadataValue *)0x0;
    if ((pFVar5 != (FLocMetadataValue *)0x0) == bVar9) {
      if ((pFVar5 == (FLocMetadataValue *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pFVar3 == (FLocMetadataValue *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar9 = FLocMetadataValue::operator<(pFVar5,pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  } while (bVar9 == false);
LAB_1416d0456:
  pTVar2 = pTVar14[-1].SharedReferenceCount.ReferenceController;
  local_3a0 = pTVar15;
  if (pTVar10 <= pTVar15) {
    pFVar3 = pTVar10->Object;
    pTVar4 = pTVar13[1].SharedReferenceCount.ReferenceController;
    pTVar10->Object = pTVar15->Object;
    pTVar13[1].SharedReferenceCount.ReferenceController = pTVar2;
    pTVar15->Object = pFVar3;
    pTVar14[-1].SharedReferenceCount.ReferenceController = pTVar4;
    pTVar14 = local_388;
    goto LAB_1416d02a0;
  }
  pFVar3 = pTVar7->Object;
  pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
  local_398 = local_398 + -1;
  pTVar7->Object = pTVar15->Object;
  (pTVar7->SharedReferenceCount).ReferenceController = pTVar2;
  pTVar15->Object = pFVar3;
  pTVar14[-1].SharedReferenceCount.ReferenceController = pTVar4;
  param_4.Predicate = local_380;
  param_3 = local_3b0;
  if ((longlong)((longlong)pTVar15 + (-0x10 - (longlong)pTVar7) & 0xfffffffffffffff0U) <
      (longlong)((longlong)local_388 - (longlong)pTVar10 & 0xfffffffffffffff0U)) {
    if (pTVar10 < local_388) {
      *local_3a8 = pTVar10;
      local_3a8[1] = local_388;
      *(int *)(local_3a8 + 2) = local_398;
      local_3a8 = local_3a8 + 3;
    }
    if (pTVar15 <= local_390 + 1) goto LAB_1416d073d;
    local_388 = pTVar14 + -2;
  }
  else {
    if (local_390 + 1 < pTVar15) {
      *local_3a8 = local_390;
      local_3a8[1] = pTVar14 + -2;
      *(int *)(local_3a8 + 2) = local_398;
      local_3a8 = local_3a8 + 3;
    }
    local_390 = pTVar10;
    if (local_388 <= pTVar10) goto LAB_1416d073d;
  }
  iVar12 = (int)((longlong)local_388 - (longlong)local_390 >> 4);
  pTVar7 = local_390;
  goto joined_r0x0001416d0248;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_> @ 1416d07b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,TLess<FString>_> param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString *pFVar12;
  FString *pFVar13;
  int iVar14;
  FString **ppFVar15;
  FString *pFVar16;
  FString *pFVar17;
  FString *pFVar18;
  FString *pFVar19;
  float fVar20;
  undefined1 auStack_388 [48];
  FString *local_358;
  FString *local_348;
  FString *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar20;
    memset(local_330,0,0x2e8);
    ppFVar15 = &local_348;
    do {
      pFVar12 = ppFVar15[1];
      pFVar19 = *ppFVar15;
      local_358 = ppFVar15[2];
      iVar9 = (int)((longlong)pFVar12 - (longlong)pFVar19 >> 4) + 1;
      pFVar18 = pFVar19;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1416d0870:
        if (8 < iVar9) {
          iVar5 = (pFVar18->Data).ArrayNum;
          iVar6 = (pFVar18->Data).ArrayMax;
          pFVar16 = pFVar12 + 1;
          pFVar19 = pFVar18 + iVar9 / 2;
          pFVar1 = (pFVar19->Data).AllocatorInstance.Data;
          iVar7 = (pFVar19->Data).ArrayNum;
          iVar8 = (pFVar19->Data).ArrayMax;
          pFVar19 = pFVar18 + iVar9 / 2;
          (pFVar19->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar19->Data).ArrayNum = iVar5;
          (pFVar19->Data).ArrayMax = iVar6;
          (pFVar18->Data).AllocatorInstance.Data = pFVar1;
          (pFVar18->Data).ArrayNum = iVar7;
          (pFVar18->Data).ArrayMax = iVar8;
          pFVar19 = pFVar18;
LAB_1416d08a0:
          pFVar13 = pFVar19;
          pFVar19 = pFVar13 + 1;
          if (pFVar19 <= pFVar12) goto code_r0x0001416d08a9;
          goto LAB_1416d08e0;
        }
        for (; pFVar19 = pFVar18, pFVar16 = pFVar18, pFVar18 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar13 = pFVar19, pFVar19 = pFVar16 + 1, pFVar19 <= pFVar12) {
            if (pFVar16[1].Data.ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
            }
            if ((pFVar13->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
            iVar14 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
            pFVar16 = pFVar19;
            if (-1 < iVar14) {
              pFVar19 = pFVar13;
            }
          }
          pFVar1 = (pFVar13->Data).AllocatorInstance.Data;
          iVar5 = (pFVar13->Data).ArrayNum;
          iVar6 = (pFVar13->Data).ArrayMax;
          iVar14 = (pFVar12->Data).ArrayNum;
          iVar9 = (pFVar12->Data).ArrayMax;
          (pFVar13->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar13->Data).ArrayNum = iVar14;
          (pFVar13->Data).ArrayMax = iVar9;
          (pFVar12->Data).AllocatorInstance.Data = pFVar1;
          (pFVar12->Data).ArrayNum = iVar5;
          (pFVar12->Data).ArrayMax = iVar6;
        }
        goto LAB_1416d09ce;
      }
LAB_1416d09bd:
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
                (pFVar19,iVar9,param_3,param_4);
LAB_1416d09ce:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_348 <= ppFVar15);
  }
  return;
code_r0x0001416d08a9:
  if (pFVar13[1].Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  if ((pFVar18->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
  if (-1 < iVar9) goto LAB_1416d08a0;
LAB_1416d08e0:
  do {
    pFVar17 = pFVar16;
    pFVar16 = pFVar17 + -1;
    if (pFVar16 <= pFVar18) break;
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    if (pFVar17[-1].Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
  } while (-1 < iVar9);
  pFVar1 = (pFVar16->Data).AllocatorInstance.Data;
  uVar2 = pFVar17[-1].Data.ArrayNum;
  uVar3 = pFVar17[-1].Data.ArrayMax;
  if (pFVar19 <= pFVar16) {
    pFVar4 = (pFVar19->Data).AllocatorInstance.Data;
    iVar9 = pFVar13[1].Data.ArrayNum;
    iVar5 = pFVar13[1].Data.ArrayMax;
    (pFVar19->Data).AllocatorInstance.Data = pFVar1;
    pFVar13[1].Data.ArrayNum = uVar2;
    pFVar13[1].Data.ArrayMax = uVar3;
    (pFVar16->Data).AllocatorInstance.Data = pFVar4;
    pFVar17[-1].Data.ArrayNum = iVar9;
    pFVar17[-1].Data.ArrayMax = iVar5;
    goto LAB_1416d08a0;
  }
  pFVar4 = (pFVar18->Data).AllocatorInstance.Data;
  iVar9 = (pFVar18->Data).ArrayNum;
  iVar5 = (pFVar18->Data).ArrayMax;
  iVar14 = iVar14 + -1;
  (pFVar18->Data).AllocatorInstance.Data = pFVar1;
  (pFVar18->Data).ArrayNum = uVar2;
  (pFVar18->Data).ArrayMax = uVar3;
  (pFVar16->Data).AllocatorInstance.Data = pFVar4;
  pFVar17[-1].Data.ArrayNum = iVar9;
  pFVar17[-1].Data.ArrayMax = iVar5;
  if ((longlong)((longlong)pFVar16 + (-0x10 - (longlong)pFVar18) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar12 - (longlong)pFVar19 & 0xfffffffffffffff0U)) {
    if (pFVar19 < pFVar12) {
      *ppFVar15 = pFVar19;
      ppFVar15[1] = pFVar12;
      *(int *)(ppFVar15 + 2) = iVar14;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar16 <= pFVar18 + 1) goto LAB_1416d09ce;
    pFVar12 = pFVar17 + -2;
    pFVar19 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar16) {
      *ppFVar15 = pFVar18;
      ppFVar15[1] = pFVar17 + -2;
      *(int *)(ppFVar15 + 2) = iVar14;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar12 <= pFVar19) goto LAB_1416d09ce;
  }
  iVar9 = (int)((longlong)pFVar12 - (longlong)pFVar19 >> 4) + 1;
  pFVar18 = pFVar19;
  if (iVar14 == 0) goto LAB_1416d09bd;
  goto LAB_1416d0870;
}

// IntroSortInternal<enum_ETextPluralForm,int,FIdentityFunctor,TDereferenceWrapper<enum_ETextPluralForm,TLess<void>_>_> @ 1416d0ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<enum_ETextPluralForm,int,FIdentityFunctor,TDereferenceWrapper<enum_ETextPluralForm,TLess<void>_>_>
          (ETextPluralForm *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ETextPluralForm,TLess<void>_> param_4)

{
  ETextPluralForm *pEVar1;
  ETextPluralForm EVar2;
  int iVar3;
  ETextPluralForm *pEVar4;
  ETextPluralForm *pEVar5;
  ETextPluralForm **ppEVar6;
  ETextPluralForm *pEVar7;
  ETextPluralForm *pEVar9;
  ETextPluralForm *pEVar10;
  ETextPluralForm *pEVar11;
  float fVar12;
  undefined1 auStack_378 [32];
  uint local_358;
  uint uStack_354;
  uint uStack_350;
  uint uStack_34c;
  ETextPluralForm *local_348;
  ETextPluralForm *local_338;
  ETextPluralForm *pEStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  ETextPluralForm *pEVar8;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    pEStack_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    ppEVar6 = &local_338;
    do {
      local_358 = *(uint *)ppEVar6;
      uStack_354 = *(uint *)((longlong)ppEVar6 + 4);
      pEVar10 = *ppEVar6;
      uStack_350 = *(uint *)(ppEVar6 + 1);
      uStack_34c = *(uint *)((longlong)ppEVar6 + 0xc);
      pEVar9 = ppEVar6[1];
      pEVar11 = (ETextPluralForm *)(ulonglong)*(uint *)(ppEVar6 + 1);
      pEVar1 = ppEVar6[2];
      pEVar5 = (ETextPluralForm *)(ulonglong)local_358;
      local_348._0_4_ = (uint)pEVar1;
      iVar3 = (*(uint *)(ppEVar6 + 1) - local_358) + 1;
      if ((uint)local_348 != 0) {
LAB_1416d0b70:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pEVar7 = pEVar9 + 1;
          EVar2 = pEVar10[iVar3 >> 1];
          pEVar10[iVar3 >> 1] = *pEVar10;
          *pEVar10 = EVar2;
          pEVar4 = pEVar10;
LAB_1416d0ba0:
          pEVar4 = pEVar4 + 1;
          if (pEVar4 <= pEVar9) goto code_r0x0001416d0ba8;
          goto LAB_1416d0bb0;
        }
        for (; pEVar5 = pEVar10, pEVar1 = pEVar10, pEVar10 < pEVar9; pEVar9 = pEVar9 + -1) {
          while (pEVar1 = pEVar1 + 1, pEVar1 <= pEVar9) {
            if (*pEVar5 < *pEVar1) {
              pEVar5 = pEVar1;
            }
          }
          EVar2 = *pEVar5;
          *pEVar5 = *pEVar9;
          *pEVar9 = EVar2;
        }
        goto LAB_1416d0c61;
      }
LAB_1416d0c52:
      local_348 = pEVar1;
      HeapSortInternal<enum_ETextPluralForm,int,FIdentityFunctor,TDereferenceWrapper<enum_ETextPluralForm,TLess<void>_>_>
                (pEVar10,iVar3,param_3,param_4);
LAB_1416d0c61:
      ppEVar6 = ppEVar6 + -3;
    } while (&local_338 <= ppEVar6);
  }
  return;
code_r0x0001416d0ba8:
  if (*pEVar4 <= *pEVar10) goto LAB_1416d0ba0;
LAB_1416d0bb0:
  do {
    pEVar8 = pEVar7;
    pEVar7 = pEVar8 + -1;
    if (pEVar7 <= pEVar10) break;
  } while (*pEVar10 <= *pEVar7);
  if (pEVar4 <= pEVar7) {
    EVar2 = *pEVar4;
    *pEVar4 = *pEVar7;
    *pEVar7 = EVar2;
    goto LAB_1416d0ba0;
  }
  EVar2 = *pEVar10;
  local_348._0_4_ = (uint)local_348 - 1;
  *pEVar10 = *pEVar7;
  *pEVar7 = EVar2;
  if ((longlong)(pEVar7 + (-1 - (longlong)pEVar10)) < (longlong)pEVar9 - (longlong)pEVar4) {
    if (pEVar4 < pEVar9) {
      *ppEVar6 = pEVar4;
      ppEVar6[1] = pEVar9;
      *(uint *)(ppEVar6 + 2) = (uint)local_348;
      ppEVar6 = ppEVar6 + 3;
    }
    if (pEVar7 <= pEVar10 + 1) goto LAB_1416d0c61;
    pEVar9 = pEVar8 + -2;
    pEVar4 = pEVar5;
    pEVar11 = pEVar9;
  }
  else {
    if (pEVar10 + 1 < pEVar7) {
      *ppEVar6 = pEVar10;
      ppEVar6[1] = pEVar8 + -2;
      *(uint *)(ppEVar6 + 2) = (uint)local_348;
      ppEVar6 = ppEVar6 + 3;
    }
    pEVar10 = pEVar4;
    if (pEVar9 <= pEVar4) goto LAB_1416d0c61;
  }
  iVar3 = ((int)pEVar11 - (int)pEVar4) + 1;
  pEVar5 = pEVar4;
  if ((uint)local_348 == 0) goto LAB_1416d0c52;
  goto LAB_1416d0b70;
}

// LowerBoundInternal<TTuple<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData>_const_,int,FString,TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_> @ 1416d0d00

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>_const_,int,FString,TSortedMap<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
          (TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
           *param_1,int param_2,FString *param_3,FKeyForward param_4,TLess<FString_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((param_3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
      if (iVar3 < 0) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar6;
}

// LowerBoundInternal<TTuple<FString,FString>_const_,int,FString,TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_> @ 1416d0da0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FString>_const_,int,FString,TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
          (TTuple<FString,FString> *param_1,int param_2,FString *param_3,FKeyForward param_4,
          TLess<FString_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((param_3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
      if (iVar3 < 0) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar6;
}

// MakeShared<FDecimalNumberFormattingRules,1,FDecimalNumberFormattingRules_const_&> @ 1416d0e40

TSharedRef<FDecimalNumberFormattingRules,1> * __cdecl
MakeShared<FDecimalNumberFormattingRules,1,FDecimalNumberFormattingRules_const_&>
          (TSharedRef<FDecimalNumberFormattingRules,1> *__return_storage_ptr__,
          FDecimalNumberFormattingRules *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FDecimalNumberFormattingRules,1> *pTVar9;
  
  pTVar8 = operator_new(0xb8);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FDecimalNumberFormattingRules *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDecimalNumberFormattingRules___00_SharedPointerInternals__6B_
    ;
    FString::FString((FString *)(pTVar8 + 1),&param_1->NaNString);
    FString::FString((FString *)(pTVar8 + 2),&param_1->NegativePrefixString);
    FString::FString((FString *)(pTVar8 + 3),&param_1->NegativeSuffixString);
    FString::FString((FString *)(pTVar8 + 4),&param_1->PositivePrefixString);
    FString::FString((FString *)(pTVar8 + 5),&param_1->PositiveSuffixString);
    FString::FString((FString *)(pTVar8 + 6),&param_1->PlusString);
    FString::FString((FString *)(pTVar8 + 7),&param_1->MinusString);
    *(wchar_t *)&pTVar8[8]._padding_ = param_1->GroupingSeparatorCharacter;
    *(wchar_t *)((longlong)&pTVar8[8]._padding_ + 2) = param_1->DecimalSeparatorCharacter;
    *(uchar *)((longlong)&pTVar8[8]._padding_ + 4) = param_1->PrimaryGroupingSize;
    *(uchar *)((longlong)&pTVar8[8]._padding_ + 5) = param_1->SecondaryGroupingSize;
    *(uchar *)((longlong)&pTVar8[8]._padding_ + 6) = param_1->MinimumGroupingDigits;
    wVar4 = param_1->DigitCharacters[1];
    wVar5 = param_1->DigitCharacters[2];
    wVar6 = param_1->DigitCharacters[3];
    lVar2 = *(longlong *)(param_1->DigitCharacters + 4);
    *(wchar_t *)&pTVar8[8].SharedReferenceCount.field_0x0 = param_1->DigitCharacters[0];
    *(wchar_t *)&pTVar8[8].SharedReferenceCount.field_0x2 = wVar4;
    *(wchar_t *)&pTVar8[8].WeakReferenceCount.field_0x0 = wVar5;
    *(wchar_t *)&pTVar8[8].WeakReferenceCount.field_0x2 = wVar6;
    pTVar8[9]._padding_ = lVar2;
    pTVar8[9].SharedReferenceCount = *(atomic<int> *)(param_1->DigitCharacters + 8);
    uVar3 = *(undefined8 *)&(param_1->CultureDefaultFormattingOptions).MinimumIntegralDigits;
    *(undefined8 *)&pTVar8[9].WeakReferenceCount =
         *(undefined8 *)&param_1->CultureDefaultFormattingOptions;
    *(undefined8 *)((longlong)&pTVar8[10]._padding_ + 4) = uVar3;
    *(undefined8 *)&pTVar8[10].WeakReferenceCount =
         *(undefined8 *)&(param_1->CultureDefaultFormattingOptions).MinimumFractionalDigits;
    __return_storage_ptr__->Object = (FDecimalNumberFormattingRules *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if ((FDecimalNumberFormattingRules *)(pTVar8 + 1) == (FDecimalNumberFormattingRules *)0x0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TSharedRef<FDecimalNumberFormattingRules,1> *)(*pcVar1)();
        return pTVar9;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FRegexMatcherImplementation,1,FRegexPatternImplementation_&,FString_const_&> @ 1416d0fd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FRegexMatcherImplementation,1> * __cdecl
MakeShared<FRegexMatcherImplementation,1,FRegexPatternImplementation_&,FString_const_&>
          (TSharedRef<FRegexMatcherImplementation,1> *__return_storage_ptr__,
          FRegexPatternImplementation *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FRegexMatcherImplementation,1> *pTVar4;
  
  pTVar3 = operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FRegexMatcherImplementation *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRegexMatcherImplementation___00_SharedPointerInternals__6B_
    ;
    FRegexMatcherImplementation::FRegexMatcherImplementation
              ((FRegexMatcherImplementation *)(pTVar3 + 1),param_1,param_2);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FRegexMatcherImplementation *)(pTVar3 + 1);
    if ((FRegexMatcherImplementation *)(pTVar3 + 1) == (FRegexMatcherImplementation *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FRegexMatcherImplementation,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// Merge<`ApplyCultureDisplayNameSubstitutes'::__l2::FDisplayNameSubstitute,FIdentityFunctor,TDereferenceWrapper<`ApplyCultureDisplayNameSubstitutes'::__l2::FDisplayNameSubstitute,`ApplyCultureDisplayNameSubstitutes'::__l6::<lambda_1>_>_> @ 1416d1090

void __cdecl
AlgoImpl::
Merge<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,FIdentityFunctor,TDereferenceWrapper<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,_ApplyCultureDisplayNameSubstitutes_::__l6::<lambda_1>_>_>
          (FDisplayNameSubstitute *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<_void___cdecl_ApplyCultureDisplayNameSubstitutes(TArrayView<FString_const_,int>,FString_&)_::_2_::FDisplayNameSubstitute,_void___cdecl_ApplyCultureDisplayNameSubstitutes(TArrayView<FString_const_,int>,FString_&)_::_6_::<lambda_1>_>
          param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FDisplayNameSubstitute *pFVar15;
  FDisplayNameSubstitute *pFVar17;
  uint uVar18;
  FDisplayNameSubstitute *pFVar19;
  FDisplayNameSubstitute *pFVar20;
  FDisplayNameSubstitute *pFVar21;
  int iVar22;
  FDisplayNameSubstitute *pFVar16;
  
  if (0 < param_2) {
    iVar14 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      uVar18 = param_2 - iVar14;
      iVar22 = 0;
      if (0 < (int)uVar18) {
        iVar13 = param_1[param_2].Culture.Data.ArrayNum;
        iVar12 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar12 = 0;
        }
        do {
          iVar1 = (uVar18 >> 1) + iVar22;
          iVar2 = param_1[(longlong)iVar1 + (longlong)iVar14].Culture.Data.ArrayNum;
          iVar13 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar13 = 0;
          }
          if (iVar12 <= iVar13) {
            iVar22 = iVar1 + (uVar18 & 1);
          }
          uVar3 = uVar18 >> 1;
          uVar18 = uVar18 >> 1;
        } while (uVar3 != 0);
      }
      iVar14 = iVar14 + iVar22;
      if (param_2 <= iVar14) {
        return;
      }
      uVar18 = param_3 - param_2;
      pFVar19 = param_1 + iVar14;
      iVar22 = 0;
      if (0 < (int)uVar18) {
        iVar13 = (pFVar19->Culture).Data.ArrayNum;
        iVar12 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar12 = 0;
          iVar22 = 0;
        }
        do {
          iVar1 = (uVar18 >> 1) + iVar22;
          iVar2 = param_1[(longlong)iVar1 + (longlong)param_2].Culture.Data.ArrayNum;
          iVar13 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar13 = 0;
          }
          if (iVar12 < iVar13) {
            iVar22 = iVar1 + (uVar18 & 1);
          }
          uVar3 = uVar18 >> 1;
          uVar18 = uVar18 >> 1;
        } while (uVar3 != 0);
      }
      iVar13 = (iVar22 - iVar14) + param_2;
      iVar12 = param_2 - iVar14;
      if ((iVar12 != 0) && (iVar12 < iVar13)) {
        pFVar15 = pFVar19 + iVar12;
        pFVar20 = pFVar19;
        pFVar16 = pFVar19 + iVar12;
        do {
          while( true ) {
            pFVar17 = pFVar15 + 1;
            pFVar21 = pFVar20 + 1;
            iVar12 = (pFVar15->Culture).Data.ArrayNum;
            iVar1 = (pFVar15->Culture).Data.ArrayMax;
            pFVar4 = (pFVar20->Culture).Data.AllocatorInstance.Data;
            iVar2 = (pFVar20->Culture).Data.ArrayNum;
            iVar7 = (pFVar20->Culture).Data.ArrayMax;
            pFVar5 = (pFVar20->OldString).Data.AllocatorInstance.Data;
            iVar8 = (pFVar20->OldString).Data.ArrayNum;
            iVar9 = (pFVar20->OldString).Data.ArrayMax;
            pFVar6 = (pFVar20->NewString).Data.AllocatorInstance.Data;
            iVar10 = (pFVar20->NewString).Data.ArrayNum;
            iVar11 = (pFVar20->NewString).Data.ArrayMax;
            (pFVar20->Culture).Data.AllocatorInstance.Data =
                 (pFVar15->Culture).Data.AllocatorInstance.Data;
            (pFVar20->Culture).Data.ArrayNum = iVar12;
            (pFVar20->Culture).Data.ArrayMax = iVar1;
            iVar12 = (pFVar15->OldString).Data.ArrayNum;
            iVar1 = (pFVar15->OldString).Data.ArrayMax;
            (pFVar20->OldString).Data.AllocatorInstance.Data =
                 (pFVar15->OldString).Data.AllocatorInstance.Data;
            (pFVar20->OldString).Data.ArrayNum = iVar12;
            (pFVar20->OldString).Data.ArrayMax = iVar1;
            iVar12 = (pFVar15->NewString).Data.ArrayNum;
            iVar1 = (pFVar15->NewString).Data.ArrayMax;
            (pFVar20->NewString).Data.AllocatorInstance.Data =
                 (pFVar15->NewString).Data.AllocatorInstance.Data;
            (pFVar20->NewString).Data.ArrayNum = iVar12;
            (pFVar20->NewString).Data.ArrayMax = iVar1;
            (pFVar15->Culture).Data.AllocatorInstance.Data = pFVar4;
            (pFVar15->Culture).Data.ArrayNum = iVar2;
            (pFVar15->Culture).Data.ArrayMax = iVar7;
            (pFVar15->OldString).Data.AllocatorInstance.Data = pFVar5;
            (pFVar15->OldString).Data.ArrayNum = iVar8;
            (pFVar15->OldString).Data.ArrayMax = iVar9;
            (pFVar15->NewString).Data.AllocatorInstance.Data = pFVar6;
            (pFVar15->NewString).Data.ArrayNum = iVar10;
            (pFVar15->NewString).Data.ArrayMax = iVar11;
            pFVar20 = pFVar21;
            if (pFVar17 == pFVar19 + iVar13) break;
            pFVar15 = pFVar17;
            if (pFVar21 == pFVar16) {
              pFVar16 = pFVar17;
            }
          }
          pFVar15 = pFVar16;
        } while (pFVar21 != pFVar16);
      }
      param_2 = param_2 + iVar22;
      iVar14 = iVar14 + 1 + iVar22;
    } while (iVar14 < param_2);
  }
  return;
}

// PrivateHashBufferChunked<FXxHash128> @ 1416d1aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXxHash128 * __cdecl
PrivateHashBufferChunked<FXxHash128>
          (FXxHash128 *__return_storage_ptr__,TMemoryView<void_const_> *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FXxHash128 *pFVar9;
  XXH_INLINE_XXH128_hash_t *pXVar10;
  ForElementType<TStaticArray<unsigned_char,16,4294967295>_> FVar11;
  uint uVar12;
  undefined1 auStackY_508 [32];
  <lambda_1> local_4c8;
  TArrayView<std::nullptr_t,int> local_4b8;
  code *local_4a8;
  void **local_4a0;
  void *local_498;
  ulong64 uStack_490;
  ulong64 local_488;
  ForElementType<TStaticArray<unsigned_char,16,4294967295>_> *local_480;
  XXH_INLINE_XXH128_hash_t local_478;
  XXH_INLINE_XXH128_hash_t local_468;
  ForElementType<TStaticArray<unsigned_char,16,4294967295>_> local_458;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_508;
  uVar1 = param_1->Size;
  if ((param_2 < uVar1) && (param_2 != 0)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (param_2 - 1) + uVar1;
    iVar7 = SUB164(auVar4 / auVar3,0);
    if (((SUB168(auVar4 / auVar3,0) != (longlong)iVar7) || (iVar7 < 0)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FXxHash128 *)(*pcVar5)();
      return pFVar9;
    }
    local_50[1] = 0x40;
    local_458.SecondaryData = (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)0x0;
    local_50[0] = 0;
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TStaticArray<unsigned_char,16,4294967295>_>_>
                      (0x10,1,iVar7 + 1,&local_458,local_50,local_50 + 1);
    FVar11 = (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)&local_458;
    if (local_458.SecondaryData != (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)0x0)
    {
      FVar11 = local_458.SecondaryData;
    }
    memset((void *)((longlong)iVar8 * 0x10 + (longlong)FVar11),0,(longlong)(iVar7 + 1) << 4);
    local_498 = param_1->Data;
    uStack_490 = param_1->Size;
    local_480 = &local_458;
    local_4b8.DataPtr = (void **)0x0;
    local_4a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`PrivateHashBufferChunked<FXxHash128>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_4a0 = &local_498;
    local_4b8.ArrayNum = 0;
    local_488 = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"XxHash.PF",iVar7,1,(TFunctionRef<void___cdecl(int)> *)&local_4a8,local_4c8,None,
               &local_4b8);
    uVar12 = 0;
    if ((int)(local_50[0] - 1U) < local_50[0]) {
      uVar12 = ~(local_50[0] - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FXxHash128 *)(*pcVar5)();
      return pFVar9;
    }
    FVar11 = (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)&local_458;
    if (local_458.SecondaryData != (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)0x0)
    {
      FVar11 = local_458.SecondaryData;
    }
    *(ulonglong *)((longlong)FVar11 + (longlong)(local_50[0] + -1) * 0x10) = uVar1;
    FVar11 = (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)&local_458;
    if (local_458.SecondaryData != (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)0x0)
    {
      FVar11 = local_458.SecondaryData;
    }
    pXVar10 = XXH_INLINE_XXH3_128bits(&local_478,(void *)FVar11,(longlong)iVar7 * 0x10 + 8);
    uVar2 = pXVar10->high64;
    __return_storage_ptr__->HashLow = pXVar10->low64;
    __return_storage_ptr__->HashHigh = uVar2;
    if (local_458.SecondaryData != (ForElementType<TStaticArray<unsigned_char,16,4294967295>_>)0x0)
    {
      FMemory::Free((void *)local_458.SecondaryData);
    }
  }
  else {
    pXVar10 = XXH_INLINE_XXH3_128bits(&local_468,param_1->Data,uVar1);
    uVar2 = pXVar10->high64;
    __return_storage_ptr__->HashLow = pXVar10->low64;
    __return_storage_ptr__->HashHigh = uVar2;
  }
  return __return_storage_ptr__;
}

// PrivateHashBufferChunked<FXxHash64> @ 1416d1d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXxHash64 __cdecl
PrivateHashBufferChunked<FXxHash64>(TMemoryView<void_const_> *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FXxHash64 FVar8;
  ForElementType<TStaticArray<unsigned_char,8,4294967295>_> FVar9;
  uint uVar10;
  undefined1 auStackY_2e8 [32];
  <lambda_1> local_2a8;
  TArrayView<std::nullptr_t,int> local_2a0;
  code *local_290;
  void **local_288;
  void *local_280;
  ulong64 uStack_278;
  ulong64 local_270;
  ForElementType<TStaticArray<unsigned_char,8,4294967295>_> *local_268;
  ForElementType<TStaticArray<unsigned_char,8,4294967295>_> local_258;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar1 = param_1->Size;
  if ((param_2 < uVar1) && (param_2 != 0)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (param_2 - 1) + uVar1;
    iVar6 = SUB164(auVar3 / auVar2,0);
    if (((SUB168(auVar3 / auVar2,0) != (longlong)iVar6) || (iVar6 < 0)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      FVar8.Hash = (*pcVar4)();
      return (FXxHash64)FVar8.Hash;
    }
    local_50[1] = 0x40;
    local_258.SecondaryData = (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)0x0;
    local_50[0] = 0;
    iVar7 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TStaticArray<unsigned_char,8,4294967295>_>_>
                      (8,1,iVar6 + 1,&local_258,local_50,local_50 + 1);
    FVar9 = (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)&local_258;
    if (local_258.SecondaryData != (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)0x0) {
      FVar9 = local_258.SecondaryData;
    }
    memset((void *)((longlong)FVar9 + (longlong)iVar7 * 8),0,(longlong)(iVar6 + 1) << 3);
    local_280 = param_1->Data;
    uStack_278 = param_1->Size;
    local_268 = &local_258;
    local_2a0.DataPtr = (void **)0x0;
    local_290 = UE::Core::Private::Function::
                TFunctionRefCaller<`PrivateHashBufferChunked<FXxHash64>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_288 = &local_280;
    local_2a0.ArrayNum = 0;
    local_270 = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"XxHash.PF",iVar6,1,(TFunctionRef<void___cdecl(int)> *)&local_290,local_2a8,None,
               &local_2a0);
    uVar10 = 0;
    if ((int)(local_50[0] - 1U) < local_50[0]) {
      uVar10 = ~(local_50[0] - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      FVar8.Hash = (*pcVar4)();
      return (FXxHash64)FVar8.Hash;
    }
    FVar9 = (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)&local_258;
    if (local_258.SecondaryData != (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)0x0) {
      FVar9 = local_258.SecondaryData;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)(local_50[0] + -1) * 8) = uVar1;
    FVar9 = (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)&local_258;
    if (local_258.SecondaryData != (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)0x0) {
      FVar9 = local_258.SecondaryData;
    }
    FVar8.Hash = XXH_INLINE_XXH3_64bits((void *)FVar9,(longlong)iVar6 * 8 + 8);
    if (local_258.SecondaryData != (ForElementType<TStaticArray<unsigned_char,8,4294967295>_>)0x0) {
      FMemory::Free((void *)local_258.SecondaryData);
    }
  }
  else {
    FVar8.Hash = XXH_INLINE_XXH3_64bits(param_1->Data,uVar1);
  }
  return (FXxHash64)FVar8.Hash;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FNameTag>_> @ 1416d1fb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FNameTag>_>
          (ushort param_1,
          ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FNameTag>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// RemoveAll<`InternationalizationUtilities::SanitizeTimezoneCode'::__l6::<lambda_1>_> @ 1416d2c10

int __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::
RemoveAll<_InternationalizationUtilities::SanitizeTimezoneCode_::__l6::<lambda_1>_>
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  short sVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar2 = this->ArrayNum;
  lVar5 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar6 = 0;
  pFVar3 = (this->AllocatorInstance).Data;
  sVar1 = *(short *)pFVar3;
  uVar11 = uVar6;
  if (sVar1 != 0) {
    if (sVar1 == 0x2f) {
      *param_1->NumValidChars = 0;
    }
    else {
      uVar12 = uVar6;
      if (((0x34 < (ushort)(sVar1 - 0x2bU)) ||
          ((0x10ffffffc0ffe5U >> ((ulonglong)(ushort)(sVar1 - 0x2bU) & 0x3f) & 1) == 0)) &&
         (uVar8 = uVar6, 0x19 < (ushort)(sVar1 - 0x61U))) goto LAB_1416d2c92;
      piVar4 = param_1->NumValidChars;
      *piVar4 = *piVar4 + 1;
      uVar8 = uVar6;
      if (0xe < *piVar4) goto LAB_1416d2c92;
    }
  }
  uVar8 = uVar6;
  uVar12 = 1;
LAB_1416d2c92:
  do {
    iVar7 = (int)uVar8;
    uVar6 = uVar6 + 1;
    uVar8 = (ulonglong)(iVar7 + 1);
    if ((longlong)uVar6 < lVar5) {
      do {
        sVar1 = *(short *)(pFVar3 + uVar6 * 2);
        if (sVar1 == 0) {
LAB_1416d2cbd:
          iVar9 = 1;
        }
        else {
          if (sVar1 == 0x2f) {
            *param_1->NumValidChars = 0;
            goto LAB_1416d2cbd;
          }
          if ((((ushort)(sVar1 - 0x2bU) < 0x35) &&
              ((0x10ffffffc0ffe5U >> ((ulonglong)(ushort)(sVar1 - 0x2bU) & 0x3f) & 1) != 0)) ||
             ((ushort)(sVar1 - 0x61U) < 0x1a)) {
            piVar4 = param_1->NumValidChars;
            *piVar4 = *piVar4 + 1;
            if (*piVar4 < 0xf) goto LAB_1416d2cbd;
          }
          iVar9 = 0;
        }
        if ((int)uVar12 != iVar9) break;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < lVar5);
    }
    iVar9 = (int)uVar8 - iVar7;
    if ((byte)uVar12 != 0) {
      iVar10 = (int)uVar11;
      if (iVar10 != iVar7) {
        memmove(pFVar3 + (longlong)iVar10 * 2,pFVar3 + (longlong)iVar7 * 2,(longlong)iVar9 * 2);
      }
      uVar11 = (ulonglong)(uint)(iVar10 + iVar9);
    }
    uVar12 = (ulonglong)(byte)((byte)uVar12 ^ 1);
    if (lVar5 <= (longlong)uVar6) {
      this->ArrayNum = (int)uVar11;
      return iVar2 - (int)uVar11;
    }
  } while( true );
}

// Reverse<TSharedRef<FArchiveEntry,1>_> @ 1416d3b50

void __cdecl
AlgoImpl::Reverse<TSharedRef<FArchiveEntry,1>_>(TSharedRef<FArchiveEntry,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FArchiveEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FArchiveEntry,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// Reverse<TSharedRef<FManifestEntry,1>_> @ 1416d3ba0

void __cdecl
AlgoImpl::Reverse<TSharedRef<FManifestEntry,1>_>(TSharedRef<FManifestEntry,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FManifestEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FManifestEntry,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// StableSortInternal<`ApplyCultureDisplayNameSubstitutes'::__l2::FDisplayNameSubstitute,FIdentityFunctor,TDereferenceWrapper<`ApplyCultureDisplayNameSubstitutes'::__l2::FDisplayNameSubstitute,`ApplyCultureDisplayNameSubstitutes'::__l6::<lambda_1>_>_> @ 1416d3bf0

void __cdecl
AlgoImpl::
StableSortInternal<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,FIdentityFunctor,TDereferenceWrapper<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,_ApplyCultureDisplayNameSubstitutes_::__l6::<lambda_1>_>_>
          (FDisplayNameSubstitute *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_void___cdecl_ApplyCultureDisplayNameSubstitutes(TArrayView<FString_const_,int>,FString_&)_::_2_::FDisplayNameSubstitute,_void___cdecl_ApplyCultureDisplayNameSubstitutes(TArrayView<FString_const_,int>,FString_&)_::_6_::<lambda_1>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FDisplayNameSubstitute *pFVar12;
  int iVar13;
  longlong lVar14;
  
  if (0 < param_2) {
    pFVar12 = param_1 + 1;
    iVar13 = 1;
    lVar14 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if (iVar13 < param_2) {
        iVar10 = (pFVar12->Culture).Data.ArrayNum;
        iVar9 = pFVar12[-1].Culture.Data.ArrayNum;
        iVar8 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar8 = 0;
        }
        iVar10 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar10 = 0;
        }
        if (iVar10 < iVar8) {
          iVar8 = (pFVar12->Culture).Data.ArrayNum;
          iVar10 = (pFVar12->Culture).Data.ArrayMax;
          pFVar1 = pFVar12[-1].Culture.Data.AllocatorInstance.Data;
          iVar9 = pFVar12[-1].Culture.Data.ArrayNum;
          iVar11 = pFVar12[-1].Culture.Data.ArrayMax;
          pFVar2 = pFVar12[-1].OldString.Data.AllocatorInstance.Data;
          iVar4 = pFVar12[-1].OldString.Data.ArrayNum;
          iVar5 = pFVar12[-1].OldString.Data.ArrayMax;
          pFVar3 = pFVar12[-1].NewString.Data.AllocatorInstance.Data;
          iVar6 = pFVar12[-1].NewString.Data.ArrayNum;
          iVar7 = pFVar12[-1].NewString.Data.ArrayMax;
          pFVar12[-1].Culture.Data.AllocatorInstance.Data =
               (pFVar12->Culture).Data.AllocatorInstance.Data;
          pFVar12[-1].Culture.Data.ArrayNum = iVar8;
          pFVar12[-1].Culture.Data.ArrayMax = iVar10;
          iVar8 = (pFVar12->OldString).Data.ArrayNum;
          iVar10 = (pFVar12->OldString).Data.ArrayMax;
          pFVar12[-1].OldString.Data.AllocatorInstance.Data =
               (pFVar12->OldString).Data.AllocatorInstance.Data;
          pFVar12[-1].OldString.Data.ArrayNum = iVar8;
          pFVar12[-1].OldString.Data.ArrayMax = iVar10;
          iVar8 = (pFVar12->NewString).Data.ArrayNum;
          iVar10 = (pFVar12->NewString).Data.ArrayMax;
          pFVar12[-1].NewString.Data.AllocatorInstance.Data =
               (pFVar12->NewString).Data.AllocatorInstance.Data;
          pFVar12[-1].NewString.Data.ArrayNum = iVar8;
          pFVar12[-1].NewString.Data.ArrayMax = iVar10;
          (pFVar12->Culture).Data.AllocatorInstance.Data = pFVar1;
          (pFVar12->Culture).Data.ArrayNum = iVar9;
          (pFVar12->Culture).Data.ArrayMax = iVar11;
          (pFVar12->OldString).Data.AllocatorInstance.Data = pFVar2;
          (pFVar12->OldString).Data.ArrayNum = iVar4;
          (pFVar12->OldString).Data.ArrayMax = iVar5;
          (pFVar12->NewString).Data.AllocatorInstance.Data = pFVar3;
          (pFVar12->NewString).Data.ArrayNum = iVar6;
          (pFVar12->NewString).Data.ArrayMax = iVar7;
        }
      }
      iVar13 = iVar13 + 2;
      pFVar12 = pFVar12 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar13 = 2;
  if (2 < param_2) {
    do {
      iVar8 = iVar13 * 2;
      iVar9 = 0;
      iVar10 = param_2;
      do {
        iVar11 = iVar10;
        if (iVar8 <= iVar10) {
          iVar11 = iVar8;
        }
        Merge<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,FIdentityFunctor,TDereferenceWrapper<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,_ApplyCultureDisplayNameSubstitutes_::__l6::<lambda_1>_>_>
                  (param_1 + iVar9,iVar13,iVar11,param_3,param_4);
        iVar9 = iVar9 + iVar8;
        iVar10 = iVar10 + iVar13 * -2;
      } while (iVar9 < param_2);
      iVar13 = iVar8;
    } while (iVar8 < param_2);
  }
  return;
}

// SwapValues<unsigned_int> @ 1416d3d60

void __cdecl SwapValues<unsigned_int>(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// SwapValues<unsigned___int64> @ 1416d3d80

void __cdecl SwapValues<unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// Transform<TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_UE::Core::Private::Tuple::TTupleBaseElement<FString,0,2>::*> @ 1416d3da0

void __cdecl
Algo::
Transform<TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_UE::Core::Private::Tuple::TTupleBaseElement<FString,0,2>::*>
          (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *param_1,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          pdm_493efb4e param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined1 local_res8 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res10;
  undefined1 local_a8 [16];
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1416d3e4d;
      uVar11 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_84 = (int)lVar8 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1416d3e4d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_res10 = param_2;
  local_a8._8_8_ = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this = local_res10;
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1416d3f50;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1416d3f50:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (this,(FString *)local_a8,
               (bool *)((longlong)TStack_68.CurrentBitIndex * 0x20 + (longlong)(int)param_3 +
                       *(longlong *)pTVar6));
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// EnumSet<enum_UDateFormatBooleanAttribute,0,4> @ 1416d3fd0

EnumSet<UDateFormatBooleanAttribute,0,4> * __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::EnumSet<enum_UDateFormatBooleanAttribute,0,4>
          (void *this,EnumSet<UDateFormatBooleanAttribute,0,4> *param_1)

{
  *(uint *)this = param_1->fBools;
  return this;
}

// EnumSet<enum_UDateFormatBooleanAttribute,0,4> @ 1416d3fe0

EnumSet<UDateFormatBooleanAttribute,0,4> * __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::EnumSet<enum_UDateFormatBooleanAttribute,0,4>
          (void *this)

{
  *(undefined4 *)this = 0;
  return this;
}

// ~EnumSet<enum_UDateFormatBooleanAttribute,0,4> @ 1416d7960

void __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::
~EnumSet<enum_UDateFormatBooleanAttribute,0,4>(void *this)

{
  return;
}

// ~TFunction_OwnedObject<`FMallocBinnedOverrunTest'::__l2::<lambda_1>,1,0> @ 1416d7a00

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FMallocBinnedOverrunTest'::__l2::<lambda_1>,1,0>
::~TFunction_OwnedObject<_FMallocBinnedOverrunTest_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMallocBinnedOverrunTest'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FThreadManager::GetAllThreadStackBackTraces'::__l2::<lambda_1>,0,0> @ 1416d7a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FThreadManager::GetAllThreadStackBackTraces'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FThreadManager::GetAllThreadStackBackTraces_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FThreadManager::GetAllThreadStackBackTraces'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FThreadManager::GetForkableThreads'::__l2::<lambda_1>,0,0> @ 1416d7a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FThreadManager::GetForkableThreads'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FThreadManager::GetForkableThreads_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FThreadManager::GetForkableThreads'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// operator= @ 1416d9900

EnumSet<UDateFormatBooleanAttribute,0,4> * __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
          (void *this,EnumSet<UDateFormatBooleanAttribute,0,4> *param_1)

{
  *(uint *)this = param_1->fBools;
  return this;
}

// operator<< @ 1416da070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FLocMetadataObject *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  operator<<(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 1416da0f0

void __cdecl operator<<(FStructuredArchiveSlot param_1,FLocMetadataObject *param_2)

{
  FArchive *this;
  uint *puVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FArchiveState *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FSlotBase local_res8;
  uint local_res10 [4];
  FString local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FLocMetadataValue,1> local_58;
  FString *local_48;
  TSharedPtr<FLocMetadataValue,1> *local_40;
  
  local_res10[0] = *(int *)&(param_2->Values).field_0x8 - *(int *)&(param_2->Values).field_0x34;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  bVar10 = pFVar7->ArIsLoading;
  if (bVar10 != 0) {
    TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
               *)param_2,local_res10[0]);
  }
  uVar11 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
              *)param_2,&local_68);
  uVar8 = uVar11;
  uVar12 = uVar11;
  if (0 < (int)local_res10[0]) {
    do {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      uVar9 = (uint)uVar8;
      if (bVar10 == 0) {
        uVar5 = 0;
        if ((int)uVar9 < local_68.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)(local_68.AllocatorInstance.Data + uVar12 + 8) + -1;
        if (*(int *)(local_68.AllocatorInstance.Data + uVar12 + 8) == 0) {
          iVar6 = 0;
        }
        FString::AssignRange
                  (&local_78,*(wchar_t **)(local_68.AllocatorInstance.Data + uVar12),iVar6);
        operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&local_78);
        iVar6 = local_78.Data.ArrayNum + -1;
        FVar3.Data = local_78.Data.AllocatorInstance.Data;
        if (local_78.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
        iVar6 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                            *)param_2,uVar5,&local_78);
        uVar8 = uVar11;
        if (((iVar6 == -1) ||
            (uVar8 = *(longlong *)&param_2->Values + (longlong)iVar6 * 0x28, uVar8 == 0)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        `anonymous_namespace'::SerializeLocMetadataValue
                  (param_1,(TSharedPtr<FLocMetadataValue,1> *)(uVar8 + 0x10));
      }
      else {
        operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&local_78);
        local_58.Object = (FLocMetadataValue *)0x0;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        `anonymous_namespace'::SerializeLocMetadataValue(param_1,&local_58);
        local_48 = &local_78;
        local_40 = &local_58;
        TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_const_&>_>
                  ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                    *)param_2,
                   (TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_const_&> *)
                   (local_res10 + 2),(bool *)&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 0x10;
    } while ((int)(uVar9 + 1) < (int)local_res10[0]);
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1416db080

void __thiscall
`PrivateHashBufferChunked<FXxHash128>'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  XXH_INLINE_XXH128_hash_t XVar7;
  ulong64 uVar8;
  bool bVar9;
  uint uVar10;
  XXH_INLINE_XXH128_hash_t *pXVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  XXH_INLINE_XXH128_hash_t local_18;
  
  uVar13 = *(ulonglong *)((longlong)this + 0x10);
  uVar2 = *(ulonglong *)((longlong)this + 8);
  uVar14 = (longlong)param_1 * uVar13;
  if (uVar2 < uVar14) {
    uVar14 = uVar2;
  }
  if (uVar2 - uVar14 < uVar13) {
    uVar13 = uVar2 - uVar14;
  }
  pXVar11 = XXH_INLINE_XXH3_128bits(&local_18,(void *)(*(longlong *)this + uVar14),uVar13);
  lVar3 = *(longlong *)((longlong)this + 0x18);
  uVar5 = (uint)pXVar11->low64;
  uVar6 = *(uint *)((longlong)&pXVar11->low64 + 4);
  uVar8 = pXVar11->low64;
  XVar7 = *pXVar11;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar3 + 0x408)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar12 = *(longlong *)(lVar3 + 0x400);
  if (*(longlong *)(lVar3 + 0x400) == 0) {
    lVar12 = lVar3;
  }
  puVar1 = (ulonglong *)(lVar12 + (longlong)param_1 * 0x10);
  uVar13 = XVar7.high64;
  *puVar1 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18
            | (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 |
            (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
  puVar1[1] = (ulonglong)(uVar6 >> 0x18) | ((ulonglong)uVar6 & 0xff0000) >> 8 |
              ((ulonglong)uVar6 & 0xff00) << 8 | ((ulonglong)uVar6 & 0xff) << 0x18 |
              ((ulonglong)uVar5 & 0xff000000) << 8 | ((ulonglong)uVar5 & 0xff0000) << 0x18 |
              ((ulonglong)uVar5 & 0xff00) << 0x28 | uVar8 << 0x38;
  return;
}

// operator() @ 1416db170

void __thiscall
`PrivateHashBufferChunked<FXxHash64>'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *(ulonglong *)((longlong)this + 8);
  uVar8 = *(ulonglong *)((longlong)this + 0x10);
  uVar9 = (longlong)param_1 * uVar8;
  if (uVar1 < uVar9) {
    uVar9 = uVar1;
  }
  if (uVar1 - uVar9 < uVar8) {
    uVar8 = uVar1 - uVar9;
  }
  uVar6 = XXH_INLINE_XXH3_64bits((void *)(*(longlong *)this + uVar9),uVar8);
  lVar2 = *(longlong *)((longlong)this + 0x18);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x208)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (*(longlong *)(lVar2 + 0x200) == 0) {
    lVar7 = lVar2;
  }
  *(ulong64 *)(lVar7 + (longlong)param_1 * 8) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  return;
}

// operator() @ 1416db240

wchar_t __thiscall
``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::<lambda_1>::
operator()(void *this,ENumberFormatSymbol param_1,wchar_t param_2)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t wVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  short *psVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  
  lVar5 = (**(code **)(**(longlong **)this + 0x130))();
  if ((int)param_1 < 0x1c) {
    lVar8 = (longlong)(int)param_1 * 0x40;
    piVar9 = (int *)(lVar8 + 0x14 + lVar5);
    psVar10 = (short *)(lVar8 + 0x10 + lVar5);
    plVar12 = (longlong *)(lVar8 + 0x20 + lVar5);
    pwVar11 = (wchar_t *)(lVar8 + 0x12 + lVar5);
  }
  else {
    piVar9 = (int *)(lVar5 + 0x714);
    psVar10 = (short *)(lVar5 + 0x710);
    plVar12 = (longlong *)(lVar5 + 0x720);
    pwVar11 = (wchar_t *)(lVar5 + 0x712);
  }
  if (*psVar10 >> 7 == 0) {
    iVar6 = (int)*psVar10 >> 5;
  }
  else {
    iVar6 = *piVar9;
  }
  if ((2 < iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ICUSymbolString.length() <= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x2d2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    wVar4 = (*pcVar2)();
    return wVar4;
  }
  sVar1 = *psVar10;
  iVar6 = (int)sVar1 >> 5;
  iVar7 = iVar6;
  if (sVar1 >> 7 != 0) {
    iVar7 = *piVar9;
  }
  if (iVar7 == 1) {
    if (sVar1 >> 7 != 0) {
      iVar6 = *piVar9;
    }
    if (iVar6 == 0) {
      param_2 = L'\xffff';
    }
    else {
      if (((int)sVar1 & 2U) == 0) {
        pwVar11 = (wchar_t *)*plVar12;
      }
      param_2 = *pwVar11;
    }
  }
  return param_2;
}

// operator() @ 1416dc890

/* WARNING: Removing unreachable block (ram,0x0001416dd0a8) */
/* WARNING: Removing unreachable block (ram,0x0001416dcfeb) */
/* WARNING: Removing unreachable block (ram,0x0001416dcf2e) */
/* WARNING: Removing unreachable block (ram,0x0001416dce78) */
/* WARNING: Removing unreachable block (ram,0x0001416dcdbb) */
/* WARNING: Removing unreachable block (ram,0x0001416dccfe) */
/* WARNING: Removing unreachable block (ram,0x0001416dcc41) */
/* WARNING: Removing unreachable block (ram,0x0001416dcb7d) */
/* WARNING: Removing unreachable block (ram,0x0001416dcab1) */
/* WARNING: Removing unreachable block (ram,0x0001416dc9d6) */
/* WARNING: Removing unreachable block (ram,0x0001416dc91e) */
/* WARNING: Removing unreachable block (ram,0x0001416dc97a) */
/* WARNING: Removing unreachable block (ram,0x0001416dca47) */
/* WARNING: Removing unreachable block (ram,0x0001416dcb1b) */
/* WARNING: Removing unreachable block (ram,0x0001416dcbdf) */
/* WARNING: Removing unreachable block (ram,0x0001416dcca3) */
/* WARNING: Removing unreachable block (ram,0x0001416dcd59) */
/* WARNING: Removing unreachable block (ram,0x0001416dce16) */
/* WARNING: Removing unreachable block (ram,0x0001416dced3) */
/* WARNING: Removing unreachable block (ram,0x0001416dcf89) */
/* WARNING: Removing unreachable block (ram,0x0001416dd046) */
/* WARNING: Removing unreachable block (ram,0x0001416dd10a) */

TSortedMap<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
* __thiscall
`InternationalizationUtilities::GetCanonicalCultureName'::__l2::<lambda_9>::operator()
          (void *this,
          TSortedMap<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
          *__return_storage_ptr__)

{
  TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
  *pTVar1;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Pairs).ArrayNum = 0;
  (__return_storage_ptr__->Pairs).ArrayMax = 0;
  ::FString::FString(&local_188,L"");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_188);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_188.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_188.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_188.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"en-US-POSIX";
  *(undefined8 *)&pTVar1->field_0x18 = 0;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_178,L"c");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_178);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_178.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_178.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_178.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"en-US-POSIX";
  *(undefined8 *)&pTVar1->field_0x18 = 0;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_168,L"posix");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_168);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_168.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_168.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_168.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"en-US-POSIX";
  *(undefined8 *)&pTVar1->field_0x18 = 0;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_158,L"ca-ES-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_158);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_158.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_158.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_158.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"ca-ES";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"ESP";
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_148,L"de-AT-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_148);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_148.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_148.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_148.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"de-AT";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"ATS";
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_138,L"de-DE-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_138);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_138.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_138.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_138.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"de-DE";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"DEM";
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_128,L"de-LU-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_128);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_128.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_128.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_128.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"de-LU";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"LUF";
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_118,L"el-GR-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_118);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_118.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_118.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_118.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"el-GR";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"GRD";
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_108,L"en-BE-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_108);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_108.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_108.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_108.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"en-BE";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"BEF";
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_f8,L"en-IE-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_f8);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_f8.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_f8.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_f8.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"en-IE";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"IEP";
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_e8,L"es-ES-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_e8);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_e8.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_e8.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_e8.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"es-ES";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"ESP";
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_d8,L"eu-ES-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_d8);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_d8.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_d8.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_d8.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"eu-ES";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"ESP";
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_c8,L"fi-FI-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_c8);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_c8.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_c8.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_c8.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"fi-FI";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"FIM";
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_b8,L"fr-BE-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_b8);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_b8.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_b8.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_b8.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"fr-BE";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"BEF";
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_a8,L"fr-FR-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_a8);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_a8.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_a8.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_a8.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"fr-FR";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"FRF";
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_98,L"fr-LU-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_98);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_98.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_98.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_98.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"fr-LU";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"LUF";
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_88,L"ga-IE-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_88);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_88.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_88.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_88.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"ga-IE";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"IEP";
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_78,L"gl-ES-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_78);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_78.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_78.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_78.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"gl-ES";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"ESP";
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_68,L"it-IT-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_68);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_68.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_68.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_68.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"it-IT";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"ITL";
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_58,L"nl-BE-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_58);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_58.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_58.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_58.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"nl-BE";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"BEF";
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_48,L"nl-NL-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_48);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_48.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_48.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_48.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"nl-NL";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"NLG";
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_38,L"pt-PT-PREEURO");
  pTVar1 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
           ::AllocateMemoryForEmplace<FString_&>(__return_storage_ptr__,&local_38);
  *(undefined8 *)pTVar1 = 0;
  *(FScriptContainerElement **)pTVar1 = local_38.Data.AllocatorInstance.Data;
  *(int *)&pTVar1->field_0x8 = local_38.Data.ArrayNum;
  *(int *)&pTVar1->field_0xc = local_38.Data.ArrayMax;
  *(wchar_t **)&pTVar1->field_0x10 = L"pt-PT";
  *(wchar_t **)&pTVar1->field_0x18 = L"currency";
  *(wchar_t **)&pTVar1->field_0x20 = L"PTE";
  return __return_storage_ptr__;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1416dd2b8

/* [thunk]:public: virtual void * __ptr64 __cdecl FThreadImpl::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FThreadImpl::_vector_deleting_destructor__adjustor_8__(FThreadImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FThreadImpl *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1416dd2d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(unsigned_int,FRunnableThread_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_int,FRunnableThread_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXIPEAVFRunnableThread___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FThreadManager::GetAllThreadStackBackTraces'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FThreadManager::GetAllThreadStackBackTraces'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FThreadManager::GetForkableThreads'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FThreadManager::GetForkableThreads'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd3c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDecimalNumberFormattingRules,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDecimalNumberFormattingRules,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd400

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FKeysCulture,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FKeysCulture,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd440

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLeetCulture,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLeetCulture,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd480

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRegexMatcherImplementation,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRegexMatcherImplementation,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd4c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRegexPatternImplementation,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRegexPatternImplementation,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd500

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FThreadImpl,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FThreadImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd540

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::BreakIterator,SharedPointerInternals::DefaultDeleter<icu_64::BreakIterator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<icu_64::BreakIterator,SharedPointerInternals::DefaultDeleter<icu_64::BreakIterator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd580

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::Collator,SharedPointerInternals::DefaultDeleter<icu_64::Collator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<icu_64::Collator,SharedPointerInternals::DefaultDeleter<icu_64::Collator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd5c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::DateFormat,SharedPointerInternals::DefaultDeleter<icu_64::DateFormat>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<icu_64::DateFormat,SharedPointerInternals::DefaultDeleter<icu_64::DateFormat>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd600

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::DecimalFormat,SharedPointerInternals::DefaultDeleter<icu_64::DecimalFormat>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<icu_64::DecimalFormat,SharedPointerInternals::DefaultDeleter<icu_64::DecimalFormat>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd640

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FArchiveEntry,SharedPointerInternals::DefaultDeleter<FArchiveEntry>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FArchiveEntry,SharedPointerInternals::DefaultDeleter<FArchiveEntry>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd680

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCulture,SharedPointerInternals::DefaultDeleter<FCulture>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCulture,SharedPointerInternals::DefaultDeleter<FCulture>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd6c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEvent,`FSharedEventRef::FSharedEventRef'::__l1::<lambda_4_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd700

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FICUBreakIterator,SharedPointerInternals::DefaultDeleter<FICUBreakIterator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FICUBreakIterator,SharedPointerInternals::DefaultDeleter<FICUBreakIterator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd740

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FICUCamelCaseBreakIterator,SharedPointerInternals::DefaultDeleter<FICUCamelCaseBreakIterator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FICUCamelCaseBreakIterator,SharedPointerInternals::DefaultDeleter<FICUCamelCaseBreakIterator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd780

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FICULineBreakIterator,SharedPointerInternals::DefaultDeleter<FICULineBreakIterator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FICULineBreakIterator,SharedPointerInternals::DefaultDeleter<FICULineBreakIterator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd7c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataObject,SharedPointerInternals::DefaultDeleter<FLocMetadataObject>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLocMetadataObject,SharedPointerInternals::DefaultDeleter<FLocMetadataObject>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd800

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueArray,SharedPointerInternals::DefaultDeleter<FLocMetadataValueArray>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLocMetadataValueArray,SharedPointerInternals::DefaultDeleter<FLocMetadataValueArray>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd840

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueBoolean,SharedPointerInternals::DefaultDeleter<FLocMetadataValueBoolean>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLocMetadataValueBoolean,SharedPointerInternals::DefaultDeleter<FLocMetadataValueBoolean>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd880

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueObject,SharedPointerInternals::DefaultDeleter<FLocMetadataValueObject>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLocMetadataValueObject,SharedPointerInternals::DefaultDeleter<FLocMetadataValueObject>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd8c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueString,SharedPointerInternals::DefaultDeleter<FLocMetadataValueString>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLocMetadataValueString,SharedPointerInternals::DefaultDeleter<FLocMetadataValueString>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd900

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FManifestEntry,SharedPointerInternals::DefaultDeleter<FManifestEntry>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FManifestEntry,SharedPointerInternals::DefaultDeleter<FManifestEntry>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd940

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FText::FSortPredicate::FSortPredicateImplementation,SharedPointerInternals::DefaultDeleter<FText::FSortPredicate::FSortPredicateImplementation>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FText::FSortPredicate::FSortPredicateImplementation,SharedPointerInternals::DefaultDeleter<FText::FSortPredicate::FSortPredicateImplementation>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd980

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::RegexMatcher,SharedPointerInternals::DefaultDeleter<icu_64::RegexMatcher>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<icu_64::RegexMatcher,SharedPointerInternals::DefaultDeleter<icu_64::RegexMatcher>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dd9c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::RegexPattern,SharedPointerInternals::DefaultDeleter<icu_64::RegexPattern>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<icu_64::RegexPattern,SharedPointerInternals::DefaultDeleter<icu_64::RegexPattern>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dda00

void * __thiscall
FCachedFileHandle::_scalar_deleting_destructor_(FCachedFileHandle *this,uint param_1)

{
  IFileHandle *pIVar1;
  
  this->_padding_ = (longlong)&___7FCachedFileHandle__6B_;
  pIVar1 = (this->FileHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20058);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dda60

void * __thiscall
FCachedReadPlatformFile::_scalar_deleting_destructor_(FCachedReadPlatformFile *this,uint param_1)

{
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddaa0

void * __thiscall
FCamelCaseBreakIterator::_scalar_deleting_destructor_(FCamelCaseBreakIterator *this,uint param_1)

{
  ForElementType<int> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->BreakPoints).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->InternalString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddb00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall FCulture::_scalar_deleting_destructor_(FCulture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FICUCultureImplementation *pFVar2;
  
  pFVar1 = (this->CachedVariant).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedScript).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedNativeRegion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedRegion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedNativeLanguage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedTwoLetterISOLanguageName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedThreeLetterISOLanguageName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedUnrealLegacyThreeLetterISOLanguageName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedNativeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedVerseIdentifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedEnglishName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->Implementation).Ptr;
  if (pFVar2 != (FICUCultureImplementation *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddc10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
FCustomCultureImplementation::_scalar_deleting_destructor_
          (FCustomCultureImplementation *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomCulture).SharedReferenceCount.ReferenceController);
  FICUCultureImplementation::~FICUCultureImplementation((FICUCultureImplementation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddc60

void * __thiscall FFakeThread::_scalar_deleting_destructor_(FFakeThread *this,uint param_1)

{
  FThreadManager *pFVar1;
  
  this->_padding_ = (longlong)&___7FFakeThread__6B_;
  pFVar1 = FThreadManager::Get();
  FThreadManager::RemoveThread(pFVar1,(FRunnableThread *)this);
  this->_padding_ = (longlong)&___7FRunnableThread__6B_;
  if (GIsRequestingExit == false) {
    pFVar1 = FThreadManager::Get();
    FThreadManager::RemoveThread(pFVar1,(FRunnableThread *)this);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddcf0

void * __thiscall FForkableThread::_scalar_deleting_destructor_(FForkableThread *this,uint param_1)

{
  FRunnableThread *pFVar1;
  FThreadManager *pFVar2;
  
  this->_padding_ = (longlong)&___7FForkableThread__6B_;
  pFVar1 = this->RealThread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->RealThread = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&___7FFakeThread__6B_;
  pFVar2 = FThreadManager::Get();
  FThreadManager::RemoveThread(pFVar2,(FRunnableThread *)this);
  this->_padding_ = (longlong)&___7FRunnableThread__6B_;
  if (GIsRequestingExit == false) {
    pFVar2 = FThreadManager::Get();
    FThreadManager::RemoveThread(pFVar2,(FRunnableThread *)this);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddda0

void * __thiscall
FGameThreadHitchHeartBeatThreaded::_scalar_deleting_destructor_
          (FGameThreadHitchHeartBeatThreaded *this,uint param_1)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FGameThreadHitchHeartBeatThreaded__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HeartBeatCritical);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dde10

void * __thiscall
FICUBreakIterator::_scalar_deleting_destructor_(FICUBreakIterator *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FICUBreakIterator__6B_;
  if (FICUBreakIteratorManager::Singleton != (FICUBreakIteratorManager *)0x0) {
    FICUBreakIteratorManager::DestroyIterator
              (FICUBreakIteratorManager::Singleton,&this->ICUBreakIteratorHandle);
  }
  pTVar3 = (this->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dde90

void * __thiscall
FICUCamelCaseBreakIterator::_scalar_deleting_destructor_
          (FICUCamelCaseBreakIterator *this,uint param_1)

{
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddef0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
FICUCultureImplementation::_scalar_deleting_destructor_
          (FICUCultureImplementation *this,uint param_1)

{
  ~FICUCultureImplementation(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddf30

void * __thiscall
FICULineBreakIterator::_scalar_deleting_destructor_(FICULineBreakIterator *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FICULineBreakIterator__6B_;
  if (FICUBreakIteratorManager::Singleton != (FICUBreakIteratorManager *)0x0) {
    FICUBreakIteratorManager::DestroyIterator
              (FICUBreakIteratorManager::Singleton,&this->ICULineBreakIteratorHandle);
  }
  pTVar3 = (this->ICULineBreakIteratorHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ddfb0

void * __thiscall
TextBiDi::Internal::FICUTextBiDi::_scalar_deleting_destructor_(FICUTextBiDi *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FICUTextBiDi_Internal_TextBiDi__6B_;
  ubidi_close_64(this->ICUBiDi);
  this->ICUBiDi = (UBiDi *)0x0;
  icu_64::UnicodeString::~UnicodeString(&this->ICUString);
  this->_padding_ = (longlong)&___7ITextBiDi_TextBiDi__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de020

void * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::_scalar_deleting_destructor_
          (FICUTextCharacterIterator_ConvertToUnicodeString *this,uint param_1)

{
  *(undefined ***)this = &___7FICUTextCharacterIterator_ConvertToUnicodeString__6B_;
  icu_64::StringCharacterIterator::~StringCharacterIterator((StringCharacterIterator *)this);
  icu_64::UnicodeString::~UnicodeString((UnicodeString *)&this->field_0x70);
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      icu_64::UMemory::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de0a0

void * __thiscall
FICUTextCharacterIterator_NativeUTF16::_scalar_deleting_destructor_
          (FICUTextCharacterIterator_NativeUTF16 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  pFVar1 = (this->InternalString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  icu_64::UCharCharacterIterator::~UCharCharacterIterator((UCharCharacterIterator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      icu_64::UMemory::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de110

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall FKeysCulture::_scalar_deleting_destructor_(FKeysCulture *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InvariantCulture).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de150

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall FLeetCulture::_scalar_deleting_destructor_(FLeetCulture *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InvariantCulture).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de190

void * __thiscall
FLocMetadataValueArray::_scalar_deleting_destructor_(FLocMetadataValueArray *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
            ((TSharedPtr<FLocMetadataValue,1> *)(this->Value).AllocatorInstance.Data,
             (this->Value).ArrayNum);
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FLocMetadataValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de1f0

void * __thiscall
FLocMetadataValueBoolean::_scalar_deleting_destructor_(FLocMetadataValueBoolean *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLocMetadataValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de230

void * __thiscall
FLocMetadataValueObject::_scalar_deleting_destructor_(FLocMetadataValueObject *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FLocMetadataValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de280

void * __thiscall
FLocMetadataValueString::_scalar_deleting_destructor_(FLocMetadataValueString *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FLocMetadataValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de2d0

void * __thiscall
FLoggedPlatformFile::FLogStatVisitor::_scalar_deleting_destructor_
          (FLogStatVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de310

void * __thiscall
FLoggedPlatformFile::FLogVisitor::_scalar_deleting_destructor_(FLogVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de350

void * __thiscall
FLoggedPlatformFile::_scalar_deleting_destructor_(FLoggedPlatformFile *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->OpenHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OpenHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OpenHandles);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LogFileCritical);
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de3d0

void * __thiscall
FLoggingAsyncReadFileHandle::_scalar_deleting_destructor_
          (FLoggingAsyncReadFileHandle *this,uint param_1)

{
  IAsyncReadFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FLoggingAsyncReadFileHandle__6B_;
  pIVar1 = this->ActualRequest;
  if (pIVar1 != (IAsyncReadFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IAsyncReadFileHandle::~IAsyncReadFileHandle((IAsyncReadFileHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de440

void * __thiscall
FMallocCallstackHandler::_scalar_deleting_destructor_(FMallocCallstackHandler *this,uint param_1)

{
  ~FMallocCallstackHandler(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de4b0

void * __thiscall
FMallocDoubleFreeFinder::_scalar_deleting_destructor_(FMallocDoubleFreeFinder *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TrackedFreeAllocations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrackedFreeAllocations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackedFreeAllocations);
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrackedCurrentAllocations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackedCurrentAllocations);
  FMallocCallstackHandler::~FMallocCallstackHandler((FMallocCallstackHandler *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de580

void * __thiscall
FMallocFrameProfiler::_scalar_deleting_destructor_(FMallocFrameProfiler *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CallStackStatsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TrackedCurrentAllocations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackedCurrentAllocations);
  FMallocCallstackHandler::~FMallocCallstackHandler((FMallocCallstackHandler *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de630

void * __thiscall FMallocLibpas::_scalar_deleting_destructor_(FMallocLibpas *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de6a0

void * __thiscall FMallocMimalloc::_scalar_deleting_destructor_(FMallocMimalloc *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de710

void * __thiscall
FMallocPoisonProxy::_scalar_deleting_destructor_(FMallocPoisonProxy *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de780

void * __thiscall
FMallocPurgatoryProxy::_scalar_deleting_destructor_(FMallocPurgatoryProxy *this,uint param_1)

{
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)(this->Purgatory + 3));
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)(this->Purgatory + 2));
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)(this->Purgatory + 1));
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)this->Purgatory);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de820

void * __thiscall FMallocStomp::_scalar_deleting_destructor_(FMallocStomp *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de890

void * __thiscall
FMallocThreadSafeProxy::_scalar_deleting_destructor_(FMallocThreadSafeProxy *this,uint param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SynchronizationObject);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      MemoryTrace_Free((ulong64)this,0,0);
      free(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de900

void * __thiscall
FPlatformFileOpenLog::_scalar_deleting_destructor_(FPlatformFileOpenLog *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPlatformFileOpenLog__6B_;
  pFVar1 = (this->LogOutput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FilenameAccessMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FilenameAccessMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilenameAccessMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de9a0

void * __thiscall FQueuedThread::_scalar_deleting_destructor_(FQueuedThread *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416de9e0

void * __thiscall
FQueuedThreadPool::_scalar_deleting_destructor_(FQueuedThreadPool *this,uint param_1)

{
  *this = (FQueuedThreadPool)&___7FQueuedThreadPool__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dea20

void * __thiscall
FQueuedThreadPoolBase::_scalar_deleting_destructor_(FQueuedThreadPoolBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar2;
  
  this->_padding_ = (longlong)&___7FQueuedThreadPoolBase__6B_;
  Destroy(this);
  pFVar1 = (this->AllThreads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QueuedThreads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->QueuedWork).PriorityQueuedWork.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FVar2 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
            &(this->QueuedWork).PriorityQueuedWork;
  }
  DestructItems<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_> *)FVar2,
             (this->QueuedWork).PriorityQueuedWork.ArrayNum);
  FVar2 = (this->QueuedWork).PriorityQueuedWork.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FQueuedThreadPool__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416deac0

void * __thiscall FRunnableThread::_scalar_deleting_destructor_(FRunnableThread *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FThreadManager *this_00;
  
  this->_padding_ = (longlong)&___7FRunnableThread__6B_;
  if (GIsRequestingExit == false) {
    this_00 = FThreadManager::Get();
    FThreadManager::RemoveThread(this_00,this);
  }
  pFVar1 = (this->ThreadName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416deb30

void * __thiscall
FThreadHeartBeat::_scalar_deleting_destructor_(FThreadHeartBeat *this,uint param_1)

{
  FRunnableThread *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FThreadHeartBeat__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHangDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUnstuck);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStuck);
  *(undefined4 *)&(this->CheckpointHeartBeat).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CheckpointHeartBeat).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CheckpointHeartBeat);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CheckpointHeartBeatCritical);
  *(undefined4 *)&(this->FunctionHeartBeat).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FunctionHeartBeat).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FunctionHeartBeat);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FunctionHeartBeatCritical);
  *(undefined4 *)&(this->ThreadHeartBeat).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ThreadHeartBeat).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadHeartBeat);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HeartBeatCritical);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dec60

void * __thiscall FThreadImpl::_scalar_deleting_destructor_(FThreadImpl *this,uint param_1)

{
  ~FThreadImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416deca0

void * __thiscall IBreakIterator::_scalar_deleting_destructor_(IBreakIterator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416decd0

void * __thiscall
ICultureImplementation::_scalar_deleting_destructor_(ICultureImplementation *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ded00

void * __thiscall ICustomCulture::_scalar_deleting_destructor_(ICustomCulture *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ded30

void * __thiscall TextBiDi::ITextBiDi::_scalar_deleting_destructor_(ITextBiDi *this,uint param_1)

{
  *this = (ITextBiDi)&___7ITextBiDi_TextBiDi__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416ded70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
icu_64::RegexMatcher::_scalar_deleting_destructor_(RegexMatcher *this,uint param_1)

{
  ~RegexMatcher(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      UMemory::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dedd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
icu_64::RegexPattern::_scalar_deleting_destructor_(RegexPattern *this,uint param_1)

{
  ~RegexPattern(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      UMemory::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dee30

void * __thiscall icu_64::Replaceable::_scalar_deleting_destructor_(Replaceable *this,uint param_1)

{
  ~Replaceable(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      UMemory::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416dee90

void * __thiscall icu_64::UObject::_scalar_deleting_destructor_(UObject *this,uint param_1)

{
  ~UObject(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      UMemory::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416deef0

void * __thiscall
icu_64::UnicodeString::_scalar_deleting_destructor_(UnicodeString *this,uint param_1)

{
  ~UnicodeString(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      UMemory::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// operator_new[] @ 1416def50

void * __cdecl FUseSystemMallocForNew::operator_new__(ulong64 param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  MemoryTrace_Alloc((ulong64)pvVar1,param_1,0,0,0);
  return pvVar1;
}

// operator_delete[] @ 1416defa0

void __cdecl FUseSystemMallocForNew::operator_delete__(void *param_1)

{
  MemoryTrace_Free((ulong64)param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001416defbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}

// ApplyCultureDisplayNameSubstitutes @ 1416e0240

/* WARNING: Removing unreachable block (ram,0x0001416e0847) */
/* WARNING: Removing unreachable block (ram,0x0001416e0602) */
/* WARNING: Removing unreachable block (ram,0x0001416e0855) */
/* WARNING: Removing unreachable block (ram,0x0001416e0658) */
/* WARNING: Removing unreachable block (ram,0x0001416e068b) */
/* WARNING: Removing unreachable block (ram,0x0001416e047b) */
/* WARNING: Removing unreachable block (ram,0x0001416e04ae) */
/* WARNING: Removing unreachable block (ram,0x0001416e0610) */
/* WARNING: Removing unreachable block (ram,0x0001416e06bb) */
/* WARNING: Removing unreachable block (ram,0x0001416e06ee) */
/* WARNING: Removing unreachable block (ram,0x0001416e0864) */

void __cdecl
ApplyCultureDisplayNameSubstitutes(TArrayView<FString_const_,int> *param_1,FString *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  ForAnyElementType this;
  FString *pFVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  FIdentityFunctor local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`ApplyCultureDisplayNameSubstitutes'::__l2::
           _dynamic_atexit_destructor_for__CultureDisplayNameSubstitutes__);
    _Init_thread_footer(&_TSS0);
  }
  if (((bHasInitializedCultureDisplayNameSubstitutes == false) &&
      (GConfig != (FConfigCacheIni *)0x0)) && (GConfig->bIsReadyForUse != false)) {
    bHasInitializedCultureDisplayNameSubstitutes = true;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"CultureDisplayNameSubstitutes",&local_c0,
               &GEngineIni);
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"CultureDisplayNameSubstitutes",&local_50,&GGameIni)
    ;
    lVar8 = (longlong)local_50.ArrayNum;
    if (local_50.ArrayNum != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_50.ArrayNum,&local_c0.AllocatorInstance,&local_c0.ArrayNum,
                         &local_c0.ArrayMax);
      memmove(local_c0.AllocatorInstance.Data + (longlong)iVar4 * 0x10,
              local_50.AllocatorInstance.Data,lVar8 << 4);
      local_50._8_8_ = local_50._8_8_ & 0xffffffff00000000;
    }
    DestructItems<FString,int>((FString *)local_50.AllocatorInstance.Data,0);
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    uVar6 = local_c0._8_8_ & 0xffffffff;
    if (local_c0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar6);
    }
    if (CultureDisplayNameSubstitutes.ArrayMax < local_c0.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_c0.ArrayNum,&CultureDisplayNameSubstitutes.AllocatorInstance,
                 CultureDisplayNameSubstitutes.ArrayNum,&CultureDisplayNameSubstitutes.ArrayMax);
      uVar6 = local_c0._8_8_ & 0xffffffff;
    }
    iVar4 = (int)uVar6;
    pFVar11 = local_c0.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    this.Data = local_c0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != iVar4) {
        local_res18[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (this.Data == pFVar11) break;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      FString::ParseIntoArray((FString *)this.Data,&local_d8,L";",true);
      if (local_d8.ArrayNum == 2) {
        local_70 = *(undefined8 *)local_d8.AllocatorInstance.Data;
        *(undefined8 *)local_d8.AllocatorInstance.Data = 0;
        local_68 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 8);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 8) = 0;
        local_78 = 0;
        local_80 = 0;
        local_60 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x10);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x10) = 0;
        local_58 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x18);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x18) = 0;
        if (((CultureDisplayNameSubstitutes.AllocatorInstance.Data <=
              (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 <
             CultureDisplayNameSubstitutes.AllocatorInstance.Data +
             (longlong)CultureDisplayNameSubstitutes.ArrayMax * 0x30)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (CultureDisplayNameSubstitutes.ArrayNum == CultureDisplayNameSubstitutes.ArrayMax) {
          CultureDisplayNameSubstitutes.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&CultureDisplayNameSubstitutes.AllocatorInstance,
                          &CultureDisplayNameSubstitutes.ArrayMax);
        }
        FVar2.Data = CultureDisplayNameSubstitutes.AllocatorInstance.Data;
        lVar8 = (longlong)CultureDisplayNameSubstitutes.ArrayNum;
        CultureDisplayNameSubstitutes.ArrayNum = CultureDisplayNameSubstitutes.ArrayNum + 1;
        *(undefined8 *)(CultureDisplayNameSubstitutes.AllocatorInstance.Data + lVar8 * 0x30) = 0;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30) = local_80;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 8) = (undefined4)local_78;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0xc) = local_78._4_4_;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x10) = 0;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x10) = local_70;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x18) = (undefined4)local_68;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x1c) = local_68._4_4_;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x20) = 0;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x20) = local_60;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x28) = (undefined4)local_58;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x2c) = local_58._4_4_;
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
      }
      else if (local_d8.ArrayNum == 3) {
        local_b0 = *(undefined8 *)local_d8.AllocatorInstance.Data;
        *(undefined8 *)local_d8.AllocatorInstance.Data = 0;
        local_a8 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 8);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 8) = 0;
        local_a0 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x10);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x10) = 0;
        local_98 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x18);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x18) = 0;
        local_90 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x20);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x20) = 0;
        local_88 = *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x28);
        *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x28) = 0;
        if (((CultureDisplayNameSubstitutes.AllocatorInstance.Data <=
              (FScriptContainerElement *)&local_b0) &&
            ((FScriptContainerElement *)&local_b0 <
             CultureDisplayNameSubstitutes.AllocatorInstance.Data +
             (longlong)CultureDisplayNameSubstitutes.ArrayMax * 0x30)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (CultureDisplayNameSubstitutes.ArrayNum == CultureDisplayNameSubstitutes.ArrayMax) {
          CultureDisplayNameSubstitutes.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&CultureDisplayNameSubstitutes.AllocatorInstance,
                          &CultureDisplayNameSubstitutes.ArrayMax);
        }
        FVar2.Data = CultureDisplayNameSubstitutes.AllocatorInstance.Data;
        lVar8 = (longlong)CultureDisplayNameSubstitutes.ArrayNum;
        CultureDisplayNameSubstitutes.ArrayNum = CultureDisplayNameSubstitutes.ArrayNum + 1;
        *(undefined8 *)(CultureDisplayNameSubstitutes.AllocatorInstance.Data + lVar8 * 0x30) = 0;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30) = local_b0;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 8) = (undefined4)local_a8;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0xc) = local_a8._4_4_;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x10) = 0;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x10) = local_a0;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x18) = (undefined4)local_98;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x1c) = local_98._4_4_;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x20) = 0;
        *(undefined8 *)(FVar2.Data + lVar8 * 0x30 + 0x20) = local_90;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x28) = (undefined4)local_88;
        *(undefined4 *)(FVar2.Data + lVar8 * 0x30 + 0x2c) = local_88._4_4_;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_b0 = 0;
      }
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      uVar6 = local_c0._8_8_ & 0xffffffff;
      this.Data = this.Data + 0x10;
    }
    AlgoImpl::
    StableSortInternal<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,FIdentityFunctor,TDereferenceWrapper<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,_ApplyCultureDisplayNameSubstitutes_::__l6::<lambda_1>_>_>
              ((FDisplayNameSubstitute *)CultureDisplayNameSubstitutes.AllocatorInstance.Data,
               CultureDisplayNameSubstitutes.ArrayNum,local_res18[0],(<lambda_1> *)local_res20);
    DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  iVar4 = CultureDisplayNameSubstitutes.ArrayNum;
  pFVar11 = CultureDisplayNameSubstitutes.AllocatorInstance.Data + 8;
  pFVar13 = CultureDisplayNameSubstitutes.AllocatorInstance.Data +
            (longlong)CultureDisplayNameSubstitutes.ArrayNum * 0x30;
  do {
    while( true ) {
      if (CultureDisplayNameSubstitutes.ArrayNum != iVar4) {
        `TCheckedPointerIterator<`ApplyCultureDisplayNameSubstitutes'::__l2::FDisplayNameSubstitute,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_c8);
      }
      if (pFVar11 + -8 == pFVar13) {
        return;
      }
      if (*(int *)pFVar11 < 2) break;
      pFVar9 = param_1->DataPtr;
      pFVar10 = pFVar9 + param_1->ArrayNum;
      if (pFVar9 == pFVar10) goto LAB_1416e099a;
      do {
        iVar5 = (pFVar9->Data).ArrayNum;
        if (iVar5 == *(int *)pFVar11) {
          if (iVar5 < 2) goto LAB_1416e0968;
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                             *(wchar_t **)(pFVar11 + -8));
          bVar3 = iVar5 == 0;
        }
        else {
          bVar3 = iVar5 + *(int *)pFVar11 == 1;
        }
        if (bVar3) goto LAB_1416e0968;
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != pFVar10);
      pFVar11 = pFVar11 + 0x30;
    }
LAB_1416e0968:
    if (*(int *)(pFVar11 + 0x20) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)(pFVar11 + 0x18);
    }
    if (*(int *)(pFVar11 + 0x10) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)(pFVar11 + 8);
    }
    FString::ReplaceInline(param_2,pwVar7,pwVar12,CaseSensitive);
LAB_1416e099a:
    pFVar11 = pFVar11 + 0x30;
  } while( true );
}

// ApplyMiMallocMemoryResetDelayChange @ 1416e0a20

void __cdecl ApplyMiMallocMemoryResetDelayChange(IConsoleVariable *param_1)

{
  mi_option_set(mi_option_reset_delay,GMiMallocMemoryResetDelay);
  return;
}

// BuildFinalString @ 1416e1820

void __cdecl
FastDecimalFormat::Internal::BuildFinalString
          (bool param_1,bool param_2,FDecimalNumberFormattingRules *param_3,wchar_t *param_4,
          int param_5,wchar_t *param_6,int param_7,FString *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FDecimalNumberSigningStrings local_88;
  
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings(&local_88,param_3,param_2);
  pFVar5 = local_88.PositiveSuffixStringPtr;
  if (param_1) {
    pFVar5 = local_88.NegativeSuffixStringPtr;
    local_88.PositivePrefixStringPtr = local_88.NegativePrefixStringPtr;
  }
  iVar3 = (pFVar5->Data).ArrayNum;
  iVar1 = ((local_88.PositivePrefixStringPtr)->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  iVar3 = iVar1 + -1;
  iVar2 = (param_8->Data).ArrayNum;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar2 + -1 + iVar4 + iVar3;
  if (iVar2 == 0) {
    iVar1 = iVar4 + iVar3;
  }
  ::FString::Reserve(param_8,param_7 + 1 + iVar1 + param_5);
  iVar3 = ((local_88.PositivePrefixStringPtr)->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (param_8,(wchar_t *)((local_88.PositivePrefixStringPtr)->Data).AllocatorInstance.Data,
             iVar4);
  ::FString::AppendChars(param_8,param_4,param_5);
  if (0 < param_7) {
    ::FString::AppendChar(param_8,param_3->DecimalSeparatorCharacter);
    ::FString::AppendChars(param_8,param_6,param_7);
  }
  iVar3 = (pFVar5->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(param_8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar4);
  if (local_88.GeneratedPositiveSuffixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.GeneratedPositiveSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_88.GeneratedPositivePrefixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.GeneratedPositivePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_88.GeneratedNegativeSuffixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.GeneratedNegativeSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_88.GeneratedNegativePrefixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.GeneratedNegativePrefixString.Data.AllocatorInstance.Data);
  }
  return;
}

// CityHash32 @ 1416e2670

uint __cdecl CityHash32(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar5 = (ulonglong)param_2;
  if (0x18 < param_2) {
    uVar2 = ((uint)(*(int *)(param_1 + (uVar5 - 4)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (uVar5 - 4)) * 0x16a88000) * 0x1b873593 ^ param_2;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (uVar5 - 0x10)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (uVar5 - 0x10)) * 0x16a88000) * 0x1b873593;
    uVar7 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5;
    uVar2 = ((uint)(*(int *)(param_1 + (uVar5 - 8)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (uVar5 - 8)) * 0x16a88000) * 0x1b873593 ^ param_2 * -0x3361d2af;
    uVar4 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (uVar5 - 0xc)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (uVar5 - 0xc)) * 0x16a88000) * 0x1b873593;
    uVar2 = ((uint)(*(int *)(param_1 + (uVar5 - 0x14)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (uVar5 - 0x14)) * 0x16a88000) * 0x1b873593 + param_2 * -0x3361d2af;
    uVar2 = ((uVar2 >> 0x13 | uVar2 * 0x2000) + 0xfaddaf14) * 5;
    uVar6 = (param_2 - 1) / 0x14;
    puVar11 = (uint *)(param_1 + 0x10);
    uVar4 = ((uVar4 >> 0x13 | uVar4 << 0xd) + 0xfaddaf14) * 5;
    do {
      uVar9 = (puVar11[-4] * -0x3361d2af >> 0x11 | puVar11[-4] * 0x16a88000) * 0x1b873593;
      uVar2 = puVar11[-3] + uVar2;
      uVar10 = uVar9 ^ uVar7;
      uVar7 = uVar9 + (uVar2 >> 0x13 | uVar2 * 0x2000) * -0x3361d2af;
      uVar2 = puVar11[-3] +
              (puVar11[-1] * -0x3361d2af >> 0x11 | puVar11[-1] * 0x16a88000) * 0x1b873593 ^
              ((uVar10 >> 0x12 | uVar10 << 0xe) + 0xfaddaf14) * 5;
      iVar3 = (uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14 + *puVar11;
      uVar2 = iVar3 * 5;
      uVar9 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8;
      uVar8 = uVar9 | (uVar2 & 0xff00) << 8 | iVar3 * 0x5000000;
      uVar4 = (puVar11[-2] * -0x3361d2af >> 0x11 | puVar11[-2] * 0x16a88000) * 0x1b873593 + uVar4;
      uVar2 = ((uVar4 >> 0x12 | uVar4 * 0x4000) + 0xfaddaf14) * 5 ^ *puVar11;
      uVar10 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8;
      uVar2 = (uVar10 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) * 5;
      uVar6 = uVar6 - 1;
      puVar11 = puVar11 + 5;
      uVar4 = uVar8;
    } while (uVar6 != 0);
    uVar8 = uVar8 >> 0xb;
    uVar7 = uVar7 + ((uVar8 | uVar9 << 0x15) * -0x3361d2af >> 0x11 | uVar8 * 0x16a88000) *
                    -0x3361d2af;
    iVar3 = (uVar7 >> 0x13 | uVar7 * 0x2000) + 0xfaddaf14;
    iVar3 = ((uint)(iVar3 * 5) >> 0x11 | iVar3 * 0x28000) +
            ((uVar2 >> 0xb | uVar10 * 0xa00000) * -0x3361d2af >> 0x11 | (uVar2 >> 0xb) * 0x16a88000)
    ;
    uVar2 = ((uint)(iVar3 * -0x3361d2af) >> 0x13 | iVar3 * -0x3a55e000) * 5 + 0xe6546b64;
    return (uVar2 >> 0x11 | uVar2 * 0x8000) * -0x3361d2af;
  }
  if (0xc < param_2) {
    uVar2 = ((uint)(*(int *)(param_1 + ((ulonglong)(param_2 >> 1) - 4)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + ((ulonglong)(param_2 >> 1) - 4)) * 0x16a88000) * 0x1b873593 ^ param_2
    ;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + 4) * 0x16a88000) * 0x1b873593;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (uVar5 - 8)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (uVar5 - 8)) * 0x16a88000) * 0x1b873593;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (param_2 >> 1)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 >> 1)) * 0x16a88000) * 0x1b873593;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)param_1 * -0x3361d2af) >> 0x11 | *(int *)param_1 * 0x16a88000) *
            0x1b873593;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (uVar5 - 4)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (uVar5 - 4)) * 0x16a88000) * 0x1b873593;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5;
    uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    return uVar2 >> 0x10 ^ uVar2;
  }
  if (4 < param_2) {
    uVar2 = ((*(int *)param_1 + param_2) * -0x3361d2af >> 0x11 |
            (*(int *)param_1 + param_2) * 0x16a88000) * 0x1b873593 ^ param_2 * 5;
    iVar3 = *(int *)(param_1 + (uVar5 - 4)) + param_2 * 5;
    uVar7 = *(int *)(param_1 + (param_2 >> 1 & 4)) * -0x3361d2af + 0x318f97d9;
    uVar2 = ((uint)(iVar3 * -0x3361d2af) >> 0x11 | iVar3 * 0x16a88000) * 0x1b873593 ^
            ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5;
    uVar2 = (uVar7 >> 0x11 | uVar7 * 0x8000) * 0x1b873593 ^
            ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5;
    uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5;
    uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    return uVar2 >> 0x10 ^ uVar2;
  }
  uVar2 = 0;
  uVar7 = 9;
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = (int)cVar1 + uVar2 * -0x3361d2af;
      uVar7 = uVar7 ^ uVar2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar7 = uVar7 ^ (param_2 * -0x3361d2af >> 0x11 | param_2 * 0x16a88000) * 0x1b873593;
  uVar2 = (uVar2 * -0x3361d2af >> 0x11 | uVar2 * 0x16a88000) * 0x1b873593 ^
          ((uVar7 >> 0x13 | uVar7 << 0xd) + 0xfaddaf14) * 5;
  uVar2 = ((uVar2 >> 0x13 | uVar2 << 0xd) + 0xfaddaf14) * 5;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  return uVar2 >> 0x10 ^ uVar2;
}

// CityHash64 @ 1416e2ab0

ulong64 __cdecl CityHash64(char *param_1,uint param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint local_res10;
  
  uVar3 = (ulonglong)param_2;
  if (0x20 < param_2) {
    if (param_2 < 0x41) {
      lVar8 = *(longlong *)(param_1 + (uVar3 - 0x18));
      lVar13 = (ulonglong)(param_2 * 2) + 0x9ae16a3b2f90404f;
      uVar2 = *(longlong *)param_1 * -0x651e95c4d06fbfb1 + *(longlong *)(param_1 + (uVar3 - 8));
      lVar7 = *(longlong *)(param_1 + 0x18) * 9 + 1 +
              (uVar2 ^ *(ulonglong *)(param_1 + (uVar3 - 0x20)));
      uVar6 = *(longlong *)(param_1 + 0x18) * 9 +
              *(longlong *)(param_1 + 0x10) * -0x651e95c4d06fbfb1;
      lVar4 = (uVar6 >> 0x2a | uVar6 * 0x400000) + lVar8;
      uVar2 = (((*(ulonglong *)(param_1 + 8) >> 0x1e | *(ulonglong *)(param_1 + 8) << 0x22) + lVar8)
               * 9 + (uVar2 >> 0x2b | uVar2 * 0x200000) + lVar7) * lVar13;
      uVar2 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
               uVar2 << 0x38) + lVar7 + lVar13 * *(longlong *)(param_1 + (uVar3 - 0x10))) * lVar13;
      uVar2 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
               uVar2 << 0x38) + uVar6 + lVar8 + lVar4 + *(longlong *)(param_1 + (uVar3 - 8))) *
              lVar13;
      uVar3 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
               uVar2 << 0x38) + uVar6 + lVar8 + *(longlong *)(param_1 + 8)) * lVar13 +
              lVar13 * *(longlong *)(param_1 + (uVar3 - 0x10)) +
              *(longlong *)(param_1 + (uVar3 - 0x20));
      uVar1 = (uVar3 >> 0x2f ^ uVar3) * lVar13 + lVar4;
    }
    else {
      lVar8 = *(longlong *)(param_1 + (uVar3 - 0x28));
      uVar9 = *(longlong *)(param_1 + (uVar3 - 0x38)) + *(longlong *)(param_1 + (uVar3 - 0x10));
      uVar6 = (*(longlong *)(param_1 + (uVar3 - 0x30)) + uVar3 ^
              *(ulonglong *)(param_1 + (uVar3 - 0x18))) * -0x622015f714c7d297;
      uVar6 = (uVar6 >> 0x2f ^ uVar6 ^ *(ulonglong *)(param_1 + (uVar3 - 0x18))) *
              -0x622015f714c7d297;
      uVar10 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
      lVar4 = *(longlong *)(param_1 + (uVar3 - 0x40)) + uVar3;
      uVar2 = *(longlong *)(param_1 + (uVar3 - 0x30)) + *(longlong *)(param_1 + (uVar3 - 0x38)) +
              lVar4;
      uVar6 = lVar4 + lVar8 + uVar10;
      uVar12 = (uVar6 >> 0x15 | uVar6 << 0x2b) + (uVar2 >> 0x2c | uVar2 * 0x100000) + lVar4;
      lVar4 = uVar9 + 0xb492b66fbe98f273 + *(longlong *)(param_1 + (uVar3 - 0x20));
      uVar6 = *(longlong *)(param_1 + (uVar3 - 0x10)) + *(longlong *)(param_1 + (uVar3 - 0x18)) +
              lVar4;
      uVar11 = lVar4 + *(longlong *)(param_1 + (uVar3 - 8)) + lVar8;
      uVar3 = uVar6 + *(longlong *)(param_1 + (uVar3 - 8));
      lVar7 = lVar8 * -0x4b6d499041670d8d + *(longlong *)param_1;
      uVar11 = (uVar11 >> 0x15 | uVar11 << 0x2b) + (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar4;
      local_res10 = param_2 - 1 & 0xffffffc0;
      uVar6 = uVar2 + lVar8;
      plVar14 = (longlong *)(param_1 + 0x30);
      do {
        uVar5 = plVar14[-5] + uVar6 + uVar9 + lVar7;
        uVar9 = uVar9 + *plVar14 + uVar12;
        lVar8 = plVar14[-6] + uVar12 * -0x4b6d499041670d8d;
        uVar12 = plVar14[-4] + plVar14[-5] + lVar8;
        lVar7 = (uVar3 + uVar10 >> 0x21 | (uVar3 + uVar10) * 0x80000000) * -0x4b6d499041670d8d;
        uVar2 = plVar14[-3] + uVar12;
        uVar10 = (uVar5 >> 0x25 | uVar5 * 0x8000000) * -0x4b6d499041670d8d ^ uVar11;
        uVar3 = uVar3 + plVar14[-3] + lVar8 + uVar10;
        uVar9 = (uVar9 >> 0x2a | uVar9 * 0x400000) * -0x4b6d499041670d8d + plVar14[-1] + uVar6;
        uVar12 = (uVar12 >> 0x2c | uVar12 * 0x100000) + (uVar3 >> 0x15 | uVar3 << 0x2b) + lVar8;
        lVar8 = plVar14[-2] + lVar7 + uVar11;
        uVar3 = plVar14[-1] + *plVar14 + lVar8;
        uVar6 = plVar14[-4] + plVar14[1] + lVar8 + uVar9;
        uVar11 = (uVar3 >> 0x2c | uVar3 * 0x100000) + (uVar6 >> 0x15 | uVar6 << 0x2b) + lVar8;
        uVar3 = plVar14[1] + uVar3;
        local_res10 = local_res10 - 0x40;
        uVar6 = uVar2;
        plVar14 = plVar14 + 8;
      } while (local_res10 != 0);
      uVar6 = (uVar11 ^ uVar12) * -0x622015f714c7d297;
      uVar2 = (uVar3 ^ uVar2) * -0x622015f714c7d297;
      uVar6 = (uVar6 >> 0x2f ^ uVar6 ^ uVar11) * -0x622015f714c7d297;
      uVar3 = (uVar2 >> 0x2f ^ uVar2 ^ uVar3) * -0x622015f714c7d297;
      uVar6 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297 + lVar7;
      uVar3 = ((uVar9 >> 0x2f ^ uVar9) * -0x4b6d499041670d8d +
               (uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297 + uVar10 ^ uVar6) * -0x622015f714c7d297
      ;
      uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ uVar6) * -0x622015f714c7d297;
      uVar1 = (uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    }
    return uVar1;
  }
  if (0x10 < param_2) {
    lVar8 = (ulonglong)(param_2 * 2) + 0x9ae16a3b2f90404f;
    uVar9 = lVar8 * *(longlong *)(param_1 + (uVar3 - 8));
    uVar6 = *(longlong *)(param_1 + 8) + *(longlong *)param_1 * -0x4b6d499041670d8d;
    uVar2 = *(longlong *)(param_1 + 8) + 0x9ae16a3b2f90404f;
    uVar2 = (uVar2 >> 0x12 | uVar2 << 0x2e) + uVar9 + *(longlong *)param_1 * -0x4b6d499041670d8d;
    uVar3 = (*(longlong *)(param_1 + (uVar3 - 0x10)) * -0x651e95c4d06fbfb1 +
             (uVar9 >> 0x1e | uVar9 << 0x22) + (uVar6 >> 0x2b | uVar6 * 0x200000) ^ uVar2) * lVar8;
    uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ uVar2) * lVar8;
    return (uVar3 >> 0x2f ^ uVar3) * lVar8;
  }
  if (param_2 < 8) {
    if (param_2 < 4) {
      if (param_2 == 0) {
        return 0x9ae16a3b2f90404f;
      }
      uVar3 = (ulonglong)(byte)param_1[param_2 >> 1] * -0x1e95c4d06fbfb100 +
              (ulonglong)(byte)*param_1 * -0x651e95c4d06fbfb1 ^
              (ulonglong)(param_2 + (uint)(byte)param_1[param_2 - 1] * 4) * -0x3c5a37a36834ced9;
      return (uVar3 >> 0x2f ^ uVar3) * -0x651e95c4d06fbfb1;
    }
    lVar8 = (ulonglong)(param_2 * 2) + 0x9ae16a3b2f90404f;
    uVar6 = (uVar3 + (ulonglong)*(uint *)param_1 * 8 ^ (ulonglong)*(uint *)(param_1 + (uVar3 - 4)))
            * lVar8;
    uVar3 = uVar6 >> 0x2f ^ uVar6 ^ (ulonglong)*(uint *)(param_1 + (uVar3 - 4));
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + (uVar3 - 8));
    uVar2 = *(longlong *)param_1 + 0x9ae16a3b2f90404f;
    lVar8 = (ulonglong)(param_2 * 2) + 0x9ae16a3b2f90404f;
    uVar3 = ((uVar2 >> 0x19 | uVar2 << 0x27) + uVar6) * lVar8;
    uVar6 = ((uVar6 >> 0x25 | uVar6 << 0x1b) * lVar8 + uVar2 ^ uVar3) * lVar8;
    uVar3 = uVar6 >> 0x2f ^ uVar6 ^ uVar3;
  }
  return (uVar3 * lVar8 >> 0x2f ^ uVar3 * lVar8) * lVar8;
}

// CityHash64WithSeed @ 1416e2fe0

ulong64 __cdecl CityHash64WithSeed(char *param_1,uint param_2,ulong64 param_3)

{
  ulong64 uVar1;
  ulonglong uVar2;
  
  uVar1 = CityHash64(param_1,param_2);
  uVar2 = (uVar1 + 0x651e95c4d06fbfb1 ^ param_3) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ uVar2 ^ param_3) * -0x622015f714c7d297;
  return (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
}

// CityHash64WithSeeds @ 1416e3040

ulong64 __cdecl CityHash64WithSeeds(char *param_1,uint param_2,ulong64 param_3,ulong64 param_4)

{
  ulong64 uVar1;
  ulonglong uVar2;
  
  uVar1 = CityHash64(param_1,param_2);
  uVar2 = (uVar1 - param_3 ^ param_4) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ uVar2 ^ param_4) * -0x622015f714c7d297;
  return (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
}

// ComputeBaseDirection @ 1416e41c0

ETextDirection __cdecl TextBiDi::Internal::ComputeBaseDirection(UnicodeString *param_1)

{
  ushort uVar1;
  wchar16 *pwVar2;
  int iVar3;
  
  uVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
  if ((short)uVar1 >> 7 == 0) {
    iVar3 = (int)(short)uVar1 >> 5;
  }
  else {
    iVar3 = (param_1->fUnion).fFields.fLength;
  }
  if (((int)(short)uVar1 & 0x11U) == 0) {
    if ((uVar1 & 2) == 0) {
      pwVar2 = (param_1->fUnion).fFields.fArray;
    }
    else {
      pwVar2 = (wchar16 *)((longlong)&param_1->fUnion + 2);
    }
  }
  else {
    pwVar2 = (wchar16 *)0x0;
  }
  iVar3 = ubidi_getBaseDirection_64(pwVar2,iVar3);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      return RightToLeft;
    }
    if (iVar3 == 2) {
      return Mixed;
    }
  }
  return LeftToRight;
}

// ComputeBaseDirection @ 1416e4230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ETextDirection __cdecl TextBiDi::ComputeBaseDirection(FString *param_1)

{
  int iVar1;
  int iVar2;
  wchar16 *_Dst;
  ETextDirection EVar3;
  undefined8 uVar4;
  wchar_t *_Src;
  undefined1 auStack_88 [32];
  UnicodeString local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
    _Src = L"";
  }
  else {
    _Src = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (iVar2 == 0) {
    return LeftToRight;
  }
  local_68._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_68.fUnion.fStackFields.fLengthAndFlags = 2;
  if (0 < iVar2) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_68,iVar2 + 1);
    memcpy(_Dst,_Src,(longlong)iVar2 * 2);
    _Dst[iVar2] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_68,iVar2);
  }
  if (local_68.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    local_68.fUnion.fFields.fLength = (int)local_68.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  uVar4 = (wchar16 *)0x0;
  if (((local_68.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
     (uVar4 = (wchar16 *)((longlong)&local_68.fUnion + 2),
     (local_68.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
    uVar4 = local_68.fUnion.fFields.fArray;
  }
  iVar2 = ubidi_getBaseDirection_64(uVar4,local_68.fUnion.fFields.fLength);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      EVar3 = RightToLeft;
      goto LAB_1416e4322;
    }
    if (iVar2 == 2) {
      EVar3 = Mixed;
      goto LAB_1416e4322;
    }
  }
  EVar3 = LeftToRight;
LAB_1416e4322:
  icu_64::UnicodeString::~UnicodeString(&local_68);
  return EVar3;
}

// ComputeBaseDirection @ 1416e4360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ETextDirection __cdecl TextBiDi::ComputeBaseDirection(FText *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  wchar16 *_Dst;
  ETextDirection EVar4;
  undefined8 uVar5;
  wchar_t *_Src;
  undefined1 auStack_88 [32];
  UnicodeString local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = FText::ToString(param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
    _Src = L"";
  }
  else {
    _Src = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  if (iVar2 == 0) {
    return LeftToRight;
  }
  local_68._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_68.fUnion.fStackFields.fLengthAndFlags = 2;
  if (0 < iVar2) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_68,iVar2 + 1);
    memcpy(_Dst,_Src,(longlong)iVar2 * 2);
    _Dst[iVar2] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_68,iVar2);
  }
  if (local_68.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    local_68.fUnion.fFields.fLength = (int)local_68.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  uVar5 = (wchar16 *)0x0;
  if (((local_68.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
     (uVar5 = (wchar16 *)((longlong)&local_68.fUnion + 2),
     (local_68.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
    uVar5 = local_68.fUnion.fFields.fArray;
  }
  iVar2 = ubidi_getBaseDirection_64(uVar5,local_68.fUnion.fFields.fLength);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      EVar4 = RightToLeft;
      goto LAB_1416e4457;
    }
    if (iVar2 == 2) {
      EVar4 = Mixed;
      goto LAB_1416e4457;
    }
  }
  EVar4 = LeftToRight;
LAB_1416e4457:
  icu_64::UnicodeString::~UnicodeString(&local_68);
  return EVar4;
}

// ComputeBaseDirection @ 1416e4490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ETextDirection __cdecl TextBiDi::ComputeBaseDirection(wchar_t *param_1,int param_2,int param_3)

{
  int iVar1;
  wchar16 *_Dst;
  ETextDirection EVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  UnicodeString local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    return LeftToRight;
  }
  local_78._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_78.fUnion.fStackFields.fLengthAndFlags = 2;
  if (0 < param_3) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_78,param_3 + 1);
    memcpy(_Dst,param_1 + param_2,(longlong)param_3 * 2);
    _Dst[param_3] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_78,param_3);
  }
  if (local_78.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    local_78.fUnion.fFields.fLength = (int)local_78.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  uVar3 = (wchar16 *)0x0;
  if (((local_78.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
     (uVar3 = (wchar16 *)((longlong)&local_78.fUnion + 2),
     (local_78.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
    uVar3 = local_78.fUnion.fFields.fArray;
  }
  iVar1 = ubidi_getBaseDirection_64(uVar3,local_78.fUnion.fFields.fLength);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      EVar2 = RightToLeft;
      goto LAB_1416e457e;
    }
    if (iVar1 == 2) {
      EVar2 = Mixed;
      goto LAB_1416e457e;
    }
  }
  EVar2 = LeftToRight;
LAB_1416e457e:
  icu_64::UnicodeString::~UnicodeString(&local_78);
  return EVar2;
}

// ComputeTextDirection @ 1416e4970

/* WARNING: Enum "Type": Some values do not have unique names */

ETextDirection __cdecl
TextBiDi::Internal::ComputeTextDirection(UBiDi *param_1,UnicodeString *param_2)

{
  ushort uVar1;
  wchar16 *pwVar2;
  int iVar3;
  int local_res10 [6];
  
  uVar1 = (param_2->fUnion).fStackFields.fLengthAndFlags;
  pwVar2 = (wchar16 *)0x0;
  local_res10[0] = 0;
  if ((short)uVar1 >> 7 == 0) {
    iVar3 = (int)(short)uVar1 >> 5;
  }
  else {
    iVar3 = (param_2->fUnion).fFields.fLength;
  }
  if (((int)(short)uVar1 & 0x11U) == 0) {
    if ((uVar1 & 2) == 0) {
      pwVar2 = (param_2->fUnion).fFields.fArray;
    }
    else {
      pwVar2 = (wchar16 *)((longlong)&param_2->fUnion + 2);
    }
  }
  ubidi_setPara_64(param_1,pwVar2,iVar3,0,0,local_res10);
  if (local_res10[0] < 1) {
    iVar3 = ubidi_getDirection_64(param_1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        return RightToLeft;
      }
      if (iVar3 == 2) {
        return Mixed;
      }
    }
  }
  else if (2 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  return LeftToRight;
}

// ComputeTextDirection @ 1416e4a30

/* WARNING: Enum "Type": Some values do not have unique names */

ETextDirection __cdecl
TextBiDi::Internal::ComputeTextDirection
          (UBiDi *param_1,UnicodeString *param_2,int param_3,ETextDirection param_4,
          TArray<TextBiDi::FTextDirectionInfo,TSizedDefaultAllocator<32>_> *param_5)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ETextDirection EVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  int *piVar8;
  wchar16 *pwVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  wchar16 *pwVar13;
  int iVar14;
  undefined7 in_register_00000089;
  int local_res10 [4];
  ETextDirection local_res20;
  int *piVar15;
  int local_48;
  undefined4 local_44 [3];
  
  pwVar13 = (wchar16 *)0x0;
  local_res10[0] = 0;
  if (param_4 == Mixed) {
    in_register_00000089 = 0x15060d1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBaseDirection != ETextDirection::Mixed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                       ,0x10b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  uVar1 = (param_2->fUnion).fStackFields.fLengthAndFlags;
  if ((short)uVar1 >> 7 == 0) {
    iVar14 = (int)(short)uVar1 >> 5;
  }
  else {
    iVar14 = (param_2->fUnion).fFields.fLength;
  }
  pwVar9 = pwVar13;
  if ((((int)(short)uVar1 & 0x11U) == 0) &&
     (pwVar9 = (wchar16 *)((longlong)&param_2->fUnion + 2), (uVar1 & 2) == 0)) {
    pwVar9 = (param_2->fUnion).fFields.fArray;
  }
  ubidi_setPara_64(param_1,pwVar9,iVar14,CONCAT71(in_register_00000089,param_4 != LeftToRight),0,
                   local_res10);
  if (0 < local_res10[0]) {
    if (2 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    return LeftToRight;
  }
  iVar14 = ubidi_getDirection_64(param_1);
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      EVar5 = RightToLeft;
      goto LAB_1416e4b16;
    }
    if (iVar14 == 2) {
      EVar5 = Mixed;
      goto LAB_1416e4b16;
    }
  }
  EVar5 = LeftToRight;
LAB_1416e4b16:
  local_res20 = EVar5;
  iVar14 = ubidi_countRuns_64(param_1,local_res10);
  lVar12 = (longlong)iVar14;
  piVar15 = &param_5->ArrayMax;
  piVar8 = &param_5->ArrayNum;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0xc,4,iVar14,&param_5->AllocatorInstance,piVar8,piVar15);
  memset((param_5->AllocatorInstance).Data + (longlong)iVar14 * 0xc,0,lVar12 * 0xc);
  pwVar9 = pwVar13;
  if (0 < lVar12) {
    do {
      piVar10 = (int *)(longlong)param_5->ArrayNum;
      uVar11 = (uint)pwVar13;
      uVar7 = 0;
      if ((int)uVar11 < param_5->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (uVar7 == 0) {
        piVar8 = (int *)(longlong)(int)uVar11;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        piVar15 = piVar10;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
      pFVar2 = (param_5->AllocatorInstance).Data;
      local_48 = 0;
      local_44[0] = 0;
      iVar14 = ubidi_getVisualRun_64(param_1,pwVar13,&local_48,local_44,piVar8,piVar15);
      if (iVar14 == 0) {
LAB_1416e4c12:
        FVar6 = (FScriptContainerElement)0x0;
      }
      else if (iVar14 == 1) {
        FVar6 = (FScriptContainerElement)0x1;
      }
      else {
        if (iVar14 != 2) goto LAB_1416e4c12;
        FVar6 = (FScriptContainerElement)0x2;
      }
      *(FScriptContainerElement *)((longlong)pwVar9 + (longlong)(pFVar2 + 8)) = FVar6;
      pwVar13 = (wchar16 *)(ulonglong)(uVar11 + 1);
      *(int *)((longlong)pwVar9 + (longlong)pFVar2) = local_48 + param_3;
      *(undefined4 *)((longlong)pwVar9 + (longlong)(pFVar2 + 4)) = local_44[0];
      pwVar9 = pwVar9 + 6;
      lVar12 = lVar12 + -1;
      EVar5 = local_res20;
    } while (lVar12 != 0);
  }
  return EVar5;
}

// ComputeTextDirection @ 1416e4ca0

ETextDirection __cdecl TextBiDi::ComputeTextDirection(FString *param_1)

{
  int iVar1;
  ETextDirection EVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 != 0) {
    EVar2 = ComputeTextDirection((wchar_t *)(param_1->Data).AllocatorInstance.Data,0,iVar1 + -1);
    return EVar2;
  }
  EVar2 = ComputeTextDirection(L"",0,0);
  return EVar2;
}

// ComputeTextDirection @ 1416e4cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ETextDirection __cdecl
TextBiDi::ComputeTextDirection
          (FString *param_1,ETextDirection param_2,
          TArray<TextBiDi::FTextDirectionInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  ETextDirection EVar2;
  wchar16 *_Dst;
  UBiDi *pUVar3;
  int iVar4;
  wchar_t *_Src;
  undefined1 auStackY_c8 [32];
  int local_98 [4];
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = 0;
  if (iVar1 == 0) {
    _Src = L"";
  }
  else {
    _Src = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar1 + -1;
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if (iVar4 == 0) {
    EVar2 = LeftToRight;
  }
  else {
    local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_88.fUnion.fStackFields.fLengthAndFlags = 2;
    if (0 < iVar4) {
      _Dst = icu_64::UnicodeString::getBuffer(&local_88,iVar4 + 1);
      memcpy(_Dst,_Src,(longlong)iVar4 * 2);
      _Dst[iVar4] = L'\0';
      icu_64::UnicodeString::releaseBuffer(&local_88,iVar4);
    }
    local_98[0] = 0;
    if (local_88.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
      local_88.fUnion.fFields.fLength = (int)local_88.fUnion.fStackFields.fLengthAndFlags >> 5;
    }
    pUVar3 = (UBiDi *)ubidi_openSized_64(local_88.fUnion.fFields.fLength,0,local_98);
    if ((pUVar3 == (UBiDi *)0x0) || (0 < local_98[0])) {
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      icu_64::UnicodeString::~UnicodeString(&local_88);
      EVar2 = LeftToRight;
    }
    else {
      EVar2 = Internal::ComputeTextDirection(pUVar3,&local_88,0,param_2,param_3);
      ubidi_close_64(pUVar3);
      icu_64::UnicodeString::~UnicodeString(&local_88);
    }
  }
  return EVar2;
}

// ComputeTextDirection @ 1416e4e80

ETextDirection __cdecl TextBiDi::ComputeTextDirection(FText *param_1)

{
  int iVar1;
  ETextDirection EVar2;
  FString *pFVar3;
  
  pFVar3 = FText::ToString(param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 != 0) {
    EVar2 = ComputeTextDirection((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,0,iVar1 + -1);
    return EVar2;
  }
  EVar2 = ComputeTextDirection(L"",0,0);
  return EVar2;
}

// ComputeTextDirection @ 1416e4ec0

ETextDirection __cdecl
TextBiDi::ComputeTextDirection
          (FText *param_1,ETextDirection param_2,
          TArray<TextBiDi::FTextDirectionInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  ETextDirection EVar1;
  FString *pFVar2;
  
  pFVar2 = FText::ToString(param_1);
  EVar1 = ComputeTextDirection(pFVar2,param_2,param_3);
  return EVar1;
}

// ComputeTextDirection @ 1416e4f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ETextDirection __cdecl TextBiDi::ComputeTextDirection(wchar_t *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  wchar16 *_Dst;
  longlong lVar3;
  undefined8 uVar4;
  ETextDirection EVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int *local_90;
  int local_88;
  int local_84 [3];
  UnicodeString local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_3 == 0) {
    return LeftToRight;
  }
  uVar4 = (wchar16 *)0x0;
  local_78._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_78.fUnion.fStackFields.fLengthAndFlags = 2;
  if (0 < param_3) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_78,param_3 + 1);
    memcpy(_Dst,param_1 + param_2,(longlong)param_3 * 2);
    _Dst[param_3] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_78,param_3);
  }
  local_88 = 0;
  uVar1 = local_78.fUnion.fFields.fLength;
  if (local_78.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar1 = (int)local_78.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  lVar3 = ubidi_openSized_64(uVar1,0,&local_88);
  if ((lVar3 == 0) || (0 < local_88)) {
    if (2 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    EVar5 = LeftToRight;
    goto LAB_1416e50b1;
  }
  local_84[0] = 0;
  if (local_78.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    local_78.fUnion.fFields.fLength = (int)local_78.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if ((((int)local_78.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
     (uVar4 = (wchar16 *)((longlong)&local_78.fUnion + 2),
     (local_78.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
    uVar4 = local_78.fUnion.fFields.fArray;
  }
  local_90 = local_84;
  local_98 = 0;
  ubidi_setPara_64(lVar3,uVar4,local_78.fUnion.fFields.fLength,0);
  if (local_84[0] < 1) {
    iVar2 = ubidi_getDirection_64(lVar3);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        EVar5 = RightToLeft;
        ubidi_close_64(lVar3);
        goto LAB_1416e50b1;
      }
      if (iVar2 == 2) {
        EVar5 = Mixed;
        ubidi_close_64(lVar3);
        goto LAB_1416e50b1;
      }
    }
  }
  else if (2 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  EVar5 = LeftToRight;
  ubidi_close_64(lVar3);
LAB_1416e50b1:
  icu_64::UnicodeString::~UnicodeString(&local_78);
  return EVar5;
}

// ComputeTextDirection @ 1416e5100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ETextDirection __cdecl
TextBiDi::ComputeTextDirection
          (wchar_t *param_1,int param_2,int param_3,ETextDirection param_4,
          TArray<TextBiDi::FTextDirectionInfo,TSizedDefaultAllocator<32>_> *param_5)

{
  ETextDirection EVar1;
  wchar16 *_Dst;
  UBiDi *pUVar2;
  undefined1 auStackY_d8 [32];
  int local_a8 [4];
  UnicodeString local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  if (param_3 == 0) {
    EVar1 = LeftToRight;
  }
  else {
    local_98._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_98.fUnion.fStackFields.fLengthAndFlags = 2;
    if (0 < param_3) {
      _Dst = icu_64::UnicodeString::getBuffer(&local_98,param_3 + 1);
      memcpy(_Dst,param_1 + param_2,(longlong)param_3 * 2);
      _Dst[param_3] = L'\0';
      icu_64::UnicodeString::releaseBuffer(&local_98,param_3);
    }
    local_a8[0] = 0;
    if (local_98.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
      local_98.fUnion.fFields.fLength = (int)local_98.fUnion.fStackFields.fLengthAndFlags >> 5;
    }
    pUVar2 = (UBiDi *)ubidi_openSized_64(local_98.fUnion.fFields.fLength,0,local_a8);
    if ((pUVar2 == (UBiDi *)0x0) || (0 < local_a8[0])) {
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      EVar1 = LeftToRight;
    }
    else {
      EVar1 = Internal::ComputeTextDirection(pUVar2,&local_98,param_2,param_4,param_5);
      ubidi_close_64(pUVar2);
    }
    icu_64::UnicodeString::~UnicodeString(&local_98);
  }
  return EVar1;
}

// CreateBreakIterator @ 1416e7020

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<icu_64::BreakIterator_const_,1> * __cdecl
`anonymous_namespace'::CreateBreakIterator
          (TSharedRef<icu_64::BreakIterator_const_,1> *__return_storage_ptr__,Locale *param_1,
          EBreakIteratorType param_2)

{
  bool bVar1;
  BreakIterator *pBVar2;
  Locale *pLVar3;
  TSharedRef<icu_64::BreakIterator_const_,1> *pTVar4;
  code *pcVar5;
  Locale *local_res8 [2];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  
  local_res20[0] = 0;
  if (param_2 == Grapheme) {
LAB_1416e7074:
    pcVar5 = icu_64::BreakIterator::createCharacterInstance;
  }
  else if (param_2 == Word) {
    pcVar5 = icu_64::BreakIterator::createWordInstance;
  }
  else if (param_2 == Line) {
    pcVar5 = icu_64::BreakIterator::createLineInstance;
  }
  else if (param_2 == Sentence) {
    pcVar5 = icu_64::BreakIterator::createSentenceInstance;
  }
  else {
    if (param_2 != Title) {
      local_res18[0] = 0;
      ``anonymous_namespace'::CreateBreakIterator'::__l4::<lambda_1>::operator()(local_res18);
      goto LAB_1416e7074;
    }
    pcVar5 = icu_64::BreakIterator::createTitleInstance;
  }
  pBVar2 = (BreakIterator *)(*pcVar5)(param_1,local_res20);
  local_40.ReferenceController = ::operator_new(0x18);
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_40.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_40.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VBreakIterator_icu_64__U__DefaultDeleter_VBreakIterator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_40.ReferenceController[1]._padding_ = (longlong)pBVar2;
  }
  if (pBVar2 == (BreakIterator *)0x0) {
    local_res8[0] = param_1;
    bVar1 = ``anonymous_namespace'::CreateBreakIterator'::__l5::<lambda_2>::operator()(local_res8);
    if (!bVar1) {
      pLVar3 = GetInvariantLocale();
      pBVar2 = (BreakIterator *)(*pcVar5)(pLVar3,local_res20);
      local_30.ReferenceController = ::operator_new(0x18);
      if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_30.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VBreakIterator_icu_64__U__DefaultDeleter_VBreakIterator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_30.ReferenceController[1]._padding_ = (longlong)pBVar2;
      }
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
      if (pBVar2 != (BreakIterator *)0x0) goto LAB_1416e71aa;
      bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x51,L"");
      if (bVar1) {
        pcVar5 = (code *)swi(3);
        pTVar4 = (TSharedRef<icu_64::BreakIterator_const_,1> *)(*pcVar5)();
        return pTVar4;
      }
    }
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar1) {
      pcVar5 = (code *)swi(3);
      pTVar4 = (TSharedRef<icu_64::BreakIterator_const_,1> *)(*pcVar5)();
      return pTVar4;
    }
  }
LAB_1416e71aa:
  __return_storage_ptr__->Object = pBVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (BreakIterator *)0x0) &&
     (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar1)) {
    pcVar5 = (code *)swi(3);
    pTVar4 = (TSharedRef<icu_64::BreakIterator_const_,1> *)(*pcVar5)();
    return pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  return __return_storage_ptr__;
}

// CreateDateFormat @ 1416e79c0

/* WARNING: Enum "EStyle": Some values do not have unique names */

TSharedRef<icu_64::DateFormat_const_,1> * __cdecl
`anonymous_namespace'::CreateDateFormat
          (TSharedRef<icu_64::DateFormat_const_,1> *__return_storage_ptr__,Locale *param_1,
          DecimalFormat *param_2)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  DateFormat *pDVar4;
  Locale *pLVar5;
  TSharedRef<icu_64::DateFormat_const_,1> *pTVar6;
  TimeZone *pTVar7;
  Locale *local_res8;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  
  pDVar4 = icu_64::DateFormat::createDateInstance(DEFAULT,param_1);
  local_30.ReferenceController = ::operator_new(0x18);
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_30.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_30.ReferenceController[1]._padding_ = (longlong)pDVar4;
  }
  if (pDVar4 == (DateFormat *)0x0) {
    local_res8 = param_1;
    bVar3 = ``anonymous_namespace'::CreateDateFormat'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar3) {
      pLVar5 = GetInvariantLocale();
      pDVar4 = icu_64::DateFormat::createDateInstance(DEFAULT,pLVar5);
      local_20.ReferenceController = ::operator_new(0x18);
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_20.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_20.ReferenceController[1]._padding_ = (longlong)pDVar4;
      }
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      if (pDVar4 != (DateFormat *)0x0) goto LAB_1416e7b07;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x68,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
      return pTVar6;
    }
  }
LAB_1416e7b07:
  pcVar1 = *(code **)(pDVar4->_padding_ + 0xb0);
  pTVar7 = icu_64::TimeZone::createDefault();
  (*pcVar1)(pDVar4,pTVar7);
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  (**(code **)(pDVar4->_padding_ + 0xa0))(pDVar4,param_2);
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  FVar2.ReferenceController = local_30.ReferenceController;
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  __return_storage_ptr__->Object = pDVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return __return_storage_ptr__;
}

// CreateDateTimeFormat @ 1416e7c10

/* WARNING: Enum "EStyle": Some values do not have unique names */

TSharedRef<icu_64::DateFormat_const_,1> * __cdecl
`anonymous_namespace'::CreateDateTimeFormat
          (TSharedRef<icu_64::DateFormat_const_,1> *__return_storage_ptr__,Locale *param_1,
          DecimalFormat *param_2)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  DateFormat *pDVar4;
  Locale *pLVar5;
  TSharedRef<icu_64::DateFormat_const_,1> *pTVar6;
  TimeZone *pTVar7;
  Locale *local_res8;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  
  pDVar4 = icu_64::DateFormat::createDateTimeInstance(DEFAULT,DEFAULT,param_1);
  local_30.ReferenceController = ::operator_new(0x18);
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_30.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_30.ReferenceController[1]._padding_ = (longlong)pDVar4;
  }
  if (pDVar4 == (DateFormat *)0x0) {
    local_res8 = param_1;
    bVar3 = ``anonymous_namespace'::CreateDateTimeFormat'::__l3::<lambda_1>::operator()(&local_res8)
    ;
    if (!bVar3) {
      pLVar5 = GetInvariantLocale();
      pDVar4 = icu_64::DateFormat::createDateTimeInstance(DEFAULT,DEFAULT,pLVar5);
      local_20.ReferenceController = ::operator_new(0x18);
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_20.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_20.ReferenceController[1]._padding_ = (longlong)pDVar4;
      }
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      if (pDVar4 != (DateFormat *)0x0) goto LAB_1416e7d5e;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x82,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
      return pTVar6;
    }
  }
LAB_1416e7d5e:
  pcVar1 = *(code **)(pDVar4->_padding_ + 0xb0);
  pTVar7 = icu_64::TimeZone::createDefault();
  (*pcVar1)(pDVar4,pTVar7);
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  (**(code **)(pDVar4->_padding_ + 0xa0))(pDVar4,param_2);
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  FVar2.ReferenceController = local_30.ReferenceController;
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  __return_storage_ptr__->Object = pDVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return __return_storage_ptr__;
}

// CreateTextBiDi @ 1416e8fb0

TUniquePtr<TextBiDi::ITextBiDi,TDefaultDelete<TextBiDi::ITextBiDi>_> __cdecl
TextBiDi::CreateTextBiDi(void)

{
  ITextBiDi IVar1;
  undefined8 uVar2;
  ITextBiDi *in_RCX;
  
  IVar1 = (ITextBiDi)::operator_new(0x58);
  if (IVar1 != (ITextBiDi)0x0) {
    *(undefined ***)IVar1 = &___7FICUTextBiDi_Internal_TextBiDi__6B_;
    uVar2 = ubidi_open_64();
    *(undefined8 *)((longlong)IVar1 + 8) = uVar2;
    *(undefined ***)((longlong)IVar1 + 0x10) = icu_64::UnicodeString::vftable;
    *(undefined2 *)((longlong)IVar1 + 0x18) = 2;
    *in_RCX = IVar1;
    return (TUniquePtr<TextBiDi::ITextBiDi,TDefaultDelete<TextBiDi::ITextBiDi>_>)in_RCX;
  }
  *in_RCX = (ITextBiDi)0x0;
  return (TUniquePtr<TextBiDi::ITextBiDi,TDefaultDelete<TextBiDi::ITextBiDi>_>)in_RCX;
}

// CreateTimeFormat @ 1416e9020

/* WARNING: Enum "EStyle": Some values do not have unique names */

TSharedRef<icu_64::DateFormat_const_,1> * __cdecl
`anonymous_namespace'::CreateTimeFormat
          (TSharedRef<icu_64::DateFormat_const_,1> *__return_storage_ptr__,Locale *param_1,
          DecimalFormat *param_2)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  DateFormat *pDVar4;
  Locale *pLVar5;
  TSharedRef<icu_64::DateFormat_const_,1> *pTVar6;
  TimeZone *pTVar7;
  Locale *local_res8;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  
  pDVar4 = icu_64::DateFormat::createTimeInstance(DEFAULT,param_1);
  local_30.ReferenceController = ::operator_new(0x18);
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_30.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_30.ReferenceController[1]._padding_ = (longlong)pDVar4;
  }
  if (pDVar4 == (DateFormat *)0x0) {
    local_res8 = param_1;
    bVar3 = ``anonymous_namespace'::CreateTimeFormat'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar3) {
      pLVar5 = GetInvariantLocale();
      pDVar4 = icu_64::DateFormat::createTimeInstance(DEFAULT,pLVar5);
      local_20.ReferenceController = ::operator_new(0x18);
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_20.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_20.ReferenceController[1]._padding_ = (longlong)pDVar4;
      }
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      if (pDVar4 != (DateFormat *)0x0) goto LAB_1416e9167;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x75,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
      return pTVar6;
    }
  }
LAB_1416e9167:
  pcVar1 = *(code **)(pDVar4->_padding_ + 0xb0);
  pTVar7 = icu_64::TimeZone::createDefault();
  (*pcVar1)(pDVar4,pTVar7);
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  (**(code **)(pDVar4->_padding_ + 0xa0))(pDVar4,param_2);
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  FVar2.ReferenceController = local_30.ReferenceController;
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar4 == (DateFormat *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
    return pTVar6;
  }
  __return_storage_ptr__->Object = pDVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return __return_storage_ptr__;
}

// CultureInvariantDecimalToString @ 1416e9510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FString * __cdecl
FastDecimalFormat::Internal::CultureInvariantDecimalToString
          (FString *__return_storage_ptr__,double param_1,wchar_t **param_2,int param_3,
          FDecimalNumberFormattingRules *param_4,FNumberFormattingOptions *param_5)

{
  wchar_t wVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FString *pFVar10;
  void *pvVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  int iVar14;
  ulonglong uVar15;
  char cVar16;
  ForAnyElementType FVar17;
  ulong64 uVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  byte bVar21;
  double dVar22;
  uint uVar23;
  undefined1 auStackY_248 [32];
  FString local_210;
  wchar_t **local_200;
  double local_1f8;
  FString *local_1f0;
  FDecimalNumberSigningStrings local_1e8;
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [128];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_248;
  pwVar19 = *param_2;
  local_1f0 = __return_storage_ptr__;
  if ((pwVar19 == (wchar_t *)0x0) || (param_3 < 1)) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3412458744825512326>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\FastDecimalFormat.cpp"
                       ,0x186,"InBuffer && InBufferLen > 0");
    if (!bVar7) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar3)();
    return pFVar10;
  }
  local_188.Base = local_168;
  pwVar13 = local_168;
  local_188.End = (wchar_t *)local_68;
  local_188.bIsDynamic = false;
  local_188.bIsExternal = false;
  local_188.CurPos = pwVar13;
  if ((param_5->UseGrouping == false) || (bVar21 = param_4->PrimaryGroupingSize, bVar21 == 0)) {
    bVar7 = false;
    bVar5 = false;
    uVar15 = 0;
  }
  else {
    bVar7 = true;
    bVar5 = true;
    dVar22 = log(param_1);
    uVar15 = (ulonglong)
             (byte)((char)(int)(double)CONCAT44((uint)((ulonglong)(dVar22 * __real_3fdbcb7b1526e50d)
                                                      >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar22 * __real_3fdbcb7b1526e50d,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) + 1) %
             (ulonglong)bVar21;
  }
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)(pwVar19 + param_3);
  uVar8 = param_5->MinimumIntegralDigits - param_3;
  uVar23 = 0;
  if (0 < (int)uVar8) {
    uVar23 = uVar8;
  }
  if (0 < (int)uVar23) {
    uVar20 = (ulonglong)uVar23;
    do {
      if ((bVar7) && (cVar16 = (char)uVar15, uVar15 = (ulonglong)(byte)(cVar16 - 1), cVar16 == '\0')
         ) {
        wVar1 = param_4->GroupingSeparatorCharacter;
        if (local_188.End < pwVar13 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_188,1);
          pwVar13 = local_188.CurPos;
        }
        *pwVar13 = wVar1;
        uVar15 = (ulonglong)param_4->SecondaryGroupingSize;
        pwVar13 = local_188.CurPos + 1;
        local_188.CurPos = pwVar13;
      }
      wVar1 = param_4->DigitCharacters[0];
      if (local_188.End < pwVar13 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_188,1);
        pwVar13 = local_188.CurPos;
      }
      *pwVar13 = wVar1;
      pwVar13 = local_188.CurPos + 1;
      uVar20 = uVar20 - 1;
      local_188.CurPos = pwVar13;
    } while (uVar20 != 0);
  }
  pFVar9 = (FScriptContainerElement *)*param_2;
  bVar7 = false;
  if (*(wchar_t *)pFVar9 == L'-') {
    bVar7 = true;
  }
  else if (*(wchar_t *)pFVar9 != L'+') goto LAB_1416e96c1;
  pFVar9 = pFVar9 + 2;
  *param_2 = (wchar_t *)pFVar9;
LAB_1416e96c1:
  bVar4 = false;
  bVar21 = 0;
  FVar17.Data = local_210.Data.AllocatorInstance.Data;
  if (pFVar9 < local_210.Data.AllocatorInstance.Data) {
    do {
      if (*(wchar_t *)pFVar9 == L'.') {
        if (param_5->MaximumFractionalDigits < 1) break;
        wVar1 = param_4->DecimalSeparatorCharacter;
        bVar4 = true;
        if (local_188.End < pwVar13 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_188,1);
          pwVar13 = local_188.CurPos;
          FVar17.Data = local_210.Data.AllocatorInstance.Data;
        }
        *pwVar13 = wVar1;
      }
      else {
        if (((!bVar4) && (bVar5)) &&
           (cVar16 = (char)uVar15, uVar15 = (ulonglong)(byte)(cVar16 - 1), cVar16 == '\0')) {
          wVar1 = param_4->GroupingSeparatorCharacter;
          if (local_188.End < pwVar13 + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_188,1);
            pwVar13 = local_188.CurPos;
          }
          *pwVar13 = wVar1;
          pwVar13 = local_188.CurPos + 1;
          uVar15 = (ulonglong)(byte)(param_4->SecondaryGroupingSize - 1);
          local_188.CurPos = pwVar13;
        }
        wVar1 = **param_2;
        if ((((ushort)wVar1 < 0x30) || (9 < (ulonglong)(ushort)wVar1 - 0x30)) &&
           (local_200 = param_2,
           bVar6 = `FastDecimalFormat::Internal::CultureInvariantDecimalToString'::__l29::<lambda_1>
                   ::operator()(&local_200), pwVar13 = local_188.CurPos, !bVar6)) break;
        wVar1 = param_4->DigitCharacters[(ulonglong)(uint)(ushort)wVar1 - 0x30];
        if (local_188.End < pwVar13 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_188,1);
          pwVar13 = local_188.CurPos;
        }
        *pwVar13 = wVar1;
        bVar21 = bVar21 + bVar4;
        FVar17.Data = local_210.Data.AllocatorInstance.Data;
      }
      pwVar13 = local_188.CurPos + 1;
      *param_2 = *param_2 + 1;
      pFVar9 = (FScriptContainerElement *)*param_2;
      local_188.CurPos = pwVar13;
    } while (pFVar9 < FVar17.Data);
  }
  local_1f8 = 0.0;
  dVar22 = modf(param_1,&local_1f8);
  if ((int)(uint)bVar21 < param_5->MaximumFractionalDigits) {
    if (!bVar4) {
      wVar1 = param_4->DecimalSeparatorCharacter;
      if (local_188.End < local_188.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_188,1);
      }
      *local_188.CurPos = wVar1;
      local_188.CurPos = local_188.CurPos + 1;
    }
    uVar23 = SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)dVar22 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((0.0 <= (double)CONCAT44(uVar8,uVar23) && (double)CONCAT44(uVar8,uVar23) != 0.0) &&
       (uVar23 = param_5->MaximumFractionalDigits - (uint)bVar21, 0 < (int)uVar23)) {
      uVar15 = (ulonglong)uVar23;
      do {
        wVar1 = param_4->DigitCharacters[0];
        if (local_188.End < local_188.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_188,1);
        }
        *local_188.CurPos = wVar1;
        local_188.CurPos = local_188.CurPos + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_1e8,param_4,param_5->AlwaysSign != false);
  pFVar10 = local_1e8.PositiveSuffixStringPtr;
  if (bVar7) {
    local_1e8.PositivePrefixStringPtr = local_1e8.NegativePrefixStringPtr;
    pFVar10 = local_1e8.NegativeSuffixStringPtr;
  }
  pFVar9 = ((local_1e8.PositivePrefixStringPtr)->Data).AllocatorInstance.Data;
  iVar2 = ((local_1e8.PositivePrefixStringPtr)->Data).ArrayNum;
  iVar14 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar14 = 0;
  }
  if (((int)((longlong)local_188.CurPos - (longlong)local_188.Base >> 1) < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos + RemoveLen <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x119,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar3)();
    return pFVar10;
  }
  uVar18 = (ulong64)iVar14;
  if (iVar14 < 0) {
    local_188.CurPos = local_188.CurPos + uVar18;
    for (pwVar19 = local_188.Base; pwVar19 != local_188.CurPos; pwVar19 = pwVar19 + 1) {
      *pwVar19 = pwVar19[-uVar18];
    }
  }
  else if (0 < iVar14) {
    if (local_188.End < local_188.CurPos + uVar18) {
      TStringBuilderBase<wchar_t>::Extend(&local_188,uVar18);
    }
    local_188.CurPos = local_188.CurPos + uVar18;
    pwVar19 = local_188.CurPos + -1;
    if (pwVar19 != local_188.Base + (uVar18 - 1)) {
      pwVar13 = pwVar19 + -uVar18;
      do {
        wVar1 = *pwVar13;
        pwVar13 = pwVar13 + -1;
        *pwVar19 = wVar1;
        pwVar19 = pwVar19 + -1;
      } while (pwVar19 != local_188.Base + (uVar18 - 1));
    }
  }
  if (0 < iVar14) {
    memcpy(local_188.Base,pFVar9,(longlong)iVar14 * 2);
  }
  iVar2 = (pFVar10->Data).ArrayNum;
  pFVar9 = (pFVar10->Data).AllocatorInstance.Data;
  iVar14 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar14 = 0;
  }
  uVar18 = (ulong64)iVar14;
  if (local_188.End < local_188.CurPos + uVar18) {
    TStringBuilderBase<wchar_t>::Extend(&local_188,uVar18);
  }
  if (iVar14 != 0) {
    pvVar11 = FGenericPlatformString::Memcpy(local_188.CurPos,pFVar9,uVar18 * 2);
    local_188.CurPos = (wchar_t *)((longlong)pvVar11 + uVar18 * 2);
  }
  pFVar10 = local_1f0;
  (local_1f0->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_1f0->Data).ArrayNum = 0;
  (local_1f0->Data).ArrayMax = 0;
  pFVar12 = ::FString::ConstructFromPtrSize
                      (&local_210,local_188.Base,
                       (int)((longlong)local_188.CurPos - (longlong)local_188.Base >> 1));
  if (pFVar10 != pFVar12) {
    pFVar9 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar10->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->Data).ArrayNum = (pFVar12->Data).ArrayNum;
    (pFVar10->Data).ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (local_1e8.GeneratedPositiveSuffixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.GeneratedPositiveSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_1e8.GeneratedPositivePrefixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.GeneratedPositivePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_1e8.GeneratedNegativeSuffixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.GeneratedNegativeSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_1e8.GeneratedNegativePrefixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.GeneratedNegativePrefixString.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
  return pFVar10;
}

// DoGamethreadHook @ 1416ebca0

void __cdecl DoGamethreadHook(int param_1)

{
  code *pcVar1;
  TFunction<void___cdecl(int)> *pTVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_res10 [6];
  
  if ((GIsRunning) && (GGameThreadMallocHook != (TFunction<void___cdecl(int)> *)0x0)) {
    bVar3 = IsInGameThread();
    pTVar2 = GGameThreadMallocHook;
    if (bVar3) {
      local_res10[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)GGameThreadMallocHook);
      pcVar1 = *(code **)pTVar2;
      plVar5 = (longlong *)&pTVar2->field_0x10;
      if (*(longlong **)&pTVar2->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&pTVar2->field_0x28;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,local_res10);
    }
  }
  return;
}

// ExtractNumberFormattingRulesFromICUDecimalFormatter @ 1416ed2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDecimalNumberFormattingRules * __cdecl
`anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter
          (FDecimalNumberFormattingRules *__return_storage_ptr__,Locale *param_1,
          DecimalFormat *param_2)

{
  FString *pFVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  uchar uVar5;
  wchar_t wVar6;
  undefined4 uVar7;
  ERoundingMode EVar8;
  int iVar9;
  longlong lVar10;
  UnicodeString *pUVar11;
  undefined1 auStackY_128 [32];
  FStringConverter local_f8 [8];
  DecimalFormat *local_f0;
  undefined1 local_e8 [112];
  UnicodeString local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(__return_storage_ptr__);
  cVar4 = icu_64::NumberFormat::isGroupingUsed((NumberFormat *)param_2);
  (__return_storage_ptr__->CultureDefaultFormattingOptions).UseGrouping = cVar4 != '\0';
  uVar7 = (**(code **)(param_2->_padding_ + 0x108))(param_2);
  switch(uVar7) {
  case 0:
    EVar8 = ToPositiveInfinity;
    break;
  case 1:
    EVar8 = ToNegativeInfinity;
    break;
  case 2:
    EVar8 = ToZero;
    break;
  case 3:
    EVar8 = FromZero;
    break;
  default:
    EVar8 = HalfToEven;
    break;
  case 5:
    EVar8 = HalfToZero;
    break;
  case 6:
    EVar8 = HalfFromZero;
  }
  (__return_storage_ptr__->CultureDefaultFormattingOptions).RoundingMode = EVar8;
  iVar9 = icu_64::NumberFormat::getMinimumIntegerDigits((NumberFormat *)param_2);
  (__return_storage_ptr__->CultureDefaultFormattingOptions).MinimumIntegralDigits = iVar9;
  iVar9 = icu_64::NumberFormat::getMaximumIntegerDigits((NumberFormat *)param_2);
  (__return_storage_ptr__->CultureDefaultFormattingOptions).MaximumIntegralDigits = iVar9;
  iVar9 = icu_64::NumberFormat::getMinimumFractionDigits((NumberFormat *)param_2);
  (__return_storage_ptr__->CultureDefaultFormattingOptions).MinimumFractionalDigits = iVar9;
  iVar9 = icu_64::NumberFormat::getMaximumFractionDigits((NumberFormat *)param_2);
  (__return_storage_ptr__->CultureDefaultFormattingOptions).MaximumFractionalDigits = iVar9;
  (**(code **)(param_2->_padding_ + 200))(param_2,1);
  local_78._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_78.fUnion.fStackFields.fLengthAndFlags = L'\x02';
  local_f0 = param_2;
  lVar10 = (**(code **)(param_2->_padding_ + 0x130))(param_2);
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_4_ = 0;
  local_e8._12_4_ = 0;
  if (*(short *)(lVar10 + 0x3d0) >> 7 == 0) {
    iVar9 = (int)*(short *)(lVar10 + 0x3d0) >> 5;
  }
  else {
    iVar9 = *(int *)(lVar10 + 0x3d4);
  }
  if (iVar9 == 0) {
    ::FString::Empty((FString *)local_e8);
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (local_f8,(UnicodeString *)(lVar10 + 0x3c8),0,iVar9,(FString *)local_e8);
  }
  if (__return_storage_ptr__ != (FDecimalNumberFormattingRules *)local_e8) {
    pFVar3 = (__return_storage_ptr__->NaNString).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->NaNString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_e8._0_8_;
    (__return_storage_ptr__->NaNString).Data.ArrayNum = local_e8._8_4_;
    (__return_storage_ptr__->NaNString).Data.ArrayMax = local_e8._12_4_;
    local_e8._8_4_ = 0;
    local_e8._12_4_ = 0;
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  pUVar11 = icu_64::DecimalFormat::getNegativePrefix(param_2,&local_78);
  local_e8._16_8_ = (FScriptContainerElement *)0x0;
  local_e8._24_4_ = 0;
  local_e8._28_4_ = 0;
  sVar2 = (pUVar11->fUnion).fStackFields.fLengthAndFlags;
  if (sVar2 >> 7 == 0) {
    iVar9 = (int)sVar2 >> 5;
  }
  else {
    iVar9 = (pUVar11->fUnion).fFields.fLength;
  }
  if (iVar9 == 0) {
    ::FString::Empty((FString *)(local_e8 + 0x10));
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (local_f8,pUVar11,0,iVar9,(FString *)(local_e8 + 0x10));
  }
  pFVar1 = &__return_storage_ptr__->NegativePrefixString;
  if (pFVar1 != (FString *)(local_e8 + 0x10)) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_e8._16_8_;
    (__return_storage_ptr__->NegativePrefixString).Data.ArrayNum = local_e8._24_4_;
    (__return_storage_ptr__->NegativePrefixString).Data.ArrayMax = local_e8._28_4_;
    local_e8._24_4_ = 0;
    local_e8._28_4_ = 0;
    local_e8._16_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  pUVar11 = icu_64::DecimalFormat::getNegativeSuffix(param_2,&local_78);
  local_e8._32_8_ = (FScriptContainerElement *)0x0;
  local_e8._40_4_ = 0;
  local_e8._44_4_ = 0;
  sVar2 = (pUVar11->fUnion).fStackFields.fLengthAndFlags;
  if (sVar2 >> 7 == 0) {
    iVar9 = (int)sVar2 >> 5;
  }
  else {
    iVar9 = (pUVar11->fUnion).fFields.fLength;
  }
  if (iVar9 == 0) {
    ::FString::Empty((FString *)(local_e8 + 0x20));
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (local_f8,pUVar11,0,iVar9,(FString *)(local_e8 + 0x20));
  }
  pFVar1 = &__return_storage_ptr__->NegativeSuffixString;
  if (pFVar1 != (FString *)(local_e8 + 0x20)) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_e8._32_8_;
    (__return_storage_ptr__->NegativeSuffixString).Data.ArrayNum = local_e8._40_4_;
    (__return_storage_ptr__->NegativeSuffixString).Data.ArrayMax = local_e8._44_4_;
    local_e8._40_4_ = 0;
    local_e8._44_4_ = 0;
    local_e8._32_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_e8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._32_8_);
  }
  pUVar11 = icu_64::DecimalFormat::getPositivePrefix(param_2,&local_78);
  local_e8._48_8_ = (FScriptContainerElement *)0x0;
  local_e8._56_4_ = 0;
  local_e8._60_4_ = 0;
  sVar2 = (pUVar11->fUnion).fStackFields.fLengthAndFlags;
  if (sVar2 >> 7 == 0) {
    iVar9 = (int)sVar2 >> 5;
  }
  else {
    iVar9 = (pUVar11->fUnion).fFields.fLength;
  }
  if (iVar9 == 0) {
    ::FString::Empty((FString *)(local_e8 + 0x30));
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (local_f8,pUVar11,0,iVar9,(FString *)(local_e8 + 0x30));
  }
  pFVar1 = &__return_storage_ptr__->PositivePrefixString;
  if (pFVar1 != (FString *)(local_e8 + 0x30)) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_e8._48_8_;
    (__return_storage_ptr__->PositivePrefixString).Data.ArrayNum = local_e8._56_4_;
    (__return_storage_ptr__->PositivePrefixString).Data.ArrayMax = local_e8._60_4_;
    local_e8._56_4_ = 0;
    local_e8._60_4_ = 0;
    local_e8._48_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_e8._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._48_8_);
  }
  pUVar11 = icu_64::DecimalFormat::getPositiveSuffix(param_2,&local_78);
  local_e8._64_8_ = (FScriptContainerElement *)0x0;
  local_e8._72_4_ = 0;
  local_e8._76_4_ = 0;
  sVar2 = (pUVar11->fUnion).fStackFields.fLengthAndFlags;
  if (sVar2 >> 7 == 0) {
    iVar9 = (int)sVar2 >> 5;
  }
  else {
    iVar9 = (pUVar11->fUnion).fFields.fLength;
  }
  if (iVar9 == 0) {
    ::FString::Empty((FString *)(local_e8 + 0x40));
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (local_f8,pUVar11,0,iVar9,(FString *)(local_e8 + 0x40));
  }
  pFVar1 = &__return_storage_ptr__->PositiveSuffixString;
  if (pFVar1 != (FString *)(local_e8 + 0x40)) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_e8._64_8_;
    (__return_storage_ptr__->PositiveSuffixString).Data.ArrayNum = local_e8._72_4_;
    (__return_storage_ptr__->PositiveSuffixString).Data.ArrayMax = local_e8._76_4_;
    local_e8._72_4_ = 0;
    local_e8._76_4_ = 0;
    local_e8._64_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_e8._64_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._64_8_);
  }
  lVar10 = (**(code **)(param_2->_padding_ + 0x130))(param_2);
  local_e8._80_8_ = (FScriptContainerElement *)0x0;
  local_e8._88_4_ = 0;
  local_e8._92_4_ = 0;
  if (*(short *)(lVar10 + 0x1d0) >> 7 == 0) {
    iVar9 = (int)*(short *)(lVar10 + 0x1d0) >> 5;
  }
  else {
    iVar9 = *(int *)(lVar10 + 0x1d4);
  }
  if (iVar9 == 0) {
    ::FString::Empty((FString *)(local_e8 + 0x50));
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (local_f8,(UnicodeString *)(lVar10 + 0x1c8),0,iVar9,(FString *)(local_e8 + 0x50));
  }
  pFVar1 = &__return_storage_ptr__->PlusString;
  if (pFVar1 != (FString *)(local_e8 + 0x50)) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_e8._80_8_;
    (__return_storage_ptr__->PlusString).Data.ArrayNum = local_e8._88_4_;
    (__return_storage_ptr__->PlusString).Data.ArrayMax = local_e8._92_4_;
    local_e8._88_4_ = 0;
    local_e8._92_4_ = 0;
    local_e8._80_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_e8._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._80_8_);
  }
  lVar10 = (**(code **)(param_2->_padding_ + 0x130))(param_2);
  local_e8._96_8_ = (FScriptContainerElement *)0x0;
  local_e8._104_4_ = 0;
  local_e8._108_4_ = 0;
  if (*(short *)(lVar10 + 400) >> 7 == 0) {
    iVar9 = (int)*(short *)(lVar10 + 400) >> 5;
  }
  else {
    iVar9 = *(int *)(lVar10 + 0x194);
  }
  if (iVar9 == 0) {
    ::FString::Empty((FString *)(local_e8 + 0x60));
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (local_f8,(UnicodeString *)(lVar10 + 0x188),0,iVar9,(FString *)(local_e8 + 0x60));
  }
  pFVar1 = &__return_storage_ptr__->MinusString;
  if (pFVar1 != (FString *)(local_e8 + 0x60)) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_e8._96_8_;
    (__return_storage_ptr__->MinusString).Data.ArrayNum = local_e8._104_4_;
    (__return_storage_ptr__->MinusString).Data.ArrayMax = local_e8._108_4_;
    local_e8._104_4_ = 0;
    local_e8._108_4_ = 0;
    local_e8._96_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_e8._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._96_8_);
  }
  wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
          <lambda_1>::operator()(&local_f0,kGroupingSeparatorSymbol,L',');
  __return_storage_ptr__->GroupingSeparatorCharacter = wVar6;
  wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
          <lambda_1>::operator()(&local_f0,kDecimalSeparatorSymbol,L'.');
  __return_storage_ptr__->DecimalSeparatorCharacter = wVar6;
  iVar9 = icu_64::DecimalFormat::getGroupingSize(param_2);
  __return_storage_ptr__->PrimaryGroupingSize = (uchar)iVar9;
  iVar9 = icu_64::DecimalFormat::getSecondaryGroupingSize(param_2);
  if (iVar9 < 1) {
    uVar5 = __return_storage_ptr__->PrimaryGroupingSize;
  }
  else {
    iVar9 = icu_64::DecimalFormat::getSecondaryGroupingSize(param_2);
    uVar5 = (uchar)iVar9;
  }
  __return_storage_ptr__->SecondaryGroupingSize = uVar5;
  iVar9 = icu_64::DecimalFormat::getMinimumGroupingDigits(param_2);
  uVar5 = '\x01';
  if (1 < iVar9) {
    uVar5 = (uchar)iVar9;
  }
  __return_storage_ptr__->MinimumGroupingDigits = uVar5;
  cVar4 = (**(code **)(*(longlong *)CVarUseLocaleSpecificDigitCharacters._padding_ + 0xc0))();
  if (cVar4 == '\0') {
    if (__return_storage_ptr__->GroupingSeparatorCharacter == L'٫') {
      __return_storage_ptr__->GroupingSeparatorCharacter = L'.';
    }
    else if (__return_storage_ptr__->GroupingSeparatorCharacter == L'٬') {
      __return_storage_ptr__->GroupingSeparatorCharacter = L',';
    }
    if (__return_storage_ptr__->DecimalSeparatorCharacter == L'٫') {
      __return_storage_ptr__->DecimalSeparatorCharacter = L'.';
    }
    else if (__return_storage_ptr__->DecimalSeparatorCharacter == L'٬') {
      __return_storage_ptr__->DecimalSeparatorCharacter = L',';
    }
  }
  else {
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kZeroDigitSymbol,L'0');
    __return_storage_ptr__->DigitCharacters[0] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kOneDigitSymbol,L'1');
    __return_storage_ptr__->DigitCharacters[1] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kTwoDigitSymbol,L'2');
    __return_storage_ptr__->DigitCharacters[2] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kThreeDigitSymbol,L'3');
    __return_storage_ptr__->DigitCharacters[3] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kFourDigitSymbol,L'4');
    __return_storage_ptr__->DigitCharacters[4] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kFiveDigitSymbol,L'5');
    __return_storage_ptr__->DigitCharacters[5] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kSixDigitSymbol,L'6');
    __return_storage_ptr__->DigitCharacters[6] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kSevenDigitSymbol,L'7');
    __return_storage_ptr__->DigitCharacters[7] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kEightDigitSymbol,L'8');
    __return_storage_ptr__->DigitCharacters[8] = wVar6;
    wVar6 = ``anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter'::__l2::
            <lambda_1>::operator()(&local_f0,kNineDigitSymbol,L'9');
    __return_storage_ptr__->DigitCharacters[9] = wVar6;
  }
  iVar9 = strcmp(param_1->language,"es");
  if (iVar9 == 0) {
    cVar4 = (**(code **)(*(longlong *)CVarSpanishUsesRAENumberFormat._padding_ + 0xc0))();
    if (cVar4 != '\0') {
      __return_storage_ptr__->GroupingSeparatorCharacter = L'\xa0';
      __return_storage_ptr__->DecimalSeparatorCharacter = L',';
    }
    cVar4 = (**(code **)(*(longlong *)CVarSpanishUsesMinTwoGrouping._padding_ + 0xc0))();
    if (cVar4 != '\0') {
      __return_storage_ptr__->MinimumGroupingDigits = '\x02';
    }
  }
  icu_64::UnicodeString::~UnicodeString(&local_78);
  return __return_storage_ptr__;
}

// FMallocBinnedOverrunTest @ 1416edad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMallocBinnedOverrunTest(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *local_res8;
  code *local_38 [2];
  undefined **local_28;
  void *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  pvVar3 = operator_new__(0x40);
  operator_delete__(pvVar3);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMallocBinnedOverrunTest'::`2'::<lambda_1>,1,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMallocBinnedOverrunTest'::__l2::<lambda_1>,void>::Call;
  local_18 = 0x40;
  local_20 = pvVar3;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// FractionalToString @ 1416f00b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FastDecimalFormat::Internal::FractionalToString
          (double param_1,FDecimalNumberFormattingRules *param_2,FNumberFormattingOptions *param_3,
          FString *param_4)

{
  wchar_t wVar1;
  double dVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStackY_268 [32];
  FScriptContainerElement *local_200;
  FString local_1f8;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  double local_1d8;
  FString local_1d0;
  wchar_t awStack_1bc [49];
  wchar_t awStack_15a [49];
  wchar_t local_f8 [48];
  ulonglong local_98;
  ulonglong uVar19;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar12 = 0;
  uVar16 = 0;
  uVar20 = 0;
  uVar18 = 0;
  local_1e8 = param_3->MinimumIntegralDigits;
  if (param_3->MinimumIntegralDigits < 0) {
    local_1e8 = uVar18;
  }
  uVar15 = param_3->MinimumFractionalDigits;
  if (param_3->MinimumFractionalDigits < 0) {
    uVar15 = uVar16;
  }
  param_3->MinimumIntegralDigits = local_1e8;
  param_3->MinimumFractionalDigits = uVar15;
  uVar3 = param_3->MaximumIntegralDigits;
  if (param_3->MaximumIntegralDigits < (int)local_1e8) {
    uVar3 = local_1e8;
  }
  uVar21 = param_3->MaximumFractionalDigits;
  if (param_3->MaximumFractionalDigits < (int)uVar15) {
    uVar21 = uVar15;
  }
  param_3->MaximumIntegralDigits = uVar3;
  param_3->MaximumFractionalDigits = uVar21;
  local_1e4 = uVar21;
  local_1e0 = uVar15;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  iVar6 = _isnan((double)(float)param_1);
  if (iVar6 == 0) {
    bVar23 = 0x7fffffffffffffff < (ulonglong)param_1;
    local_200 = (FScriptContainerElement *)0x0;
    local_1d8 = 0.0;
    FractionalToString_SplitAndRoundNumber
              (bVar23,param_1,uVar21,param_3->RoundingMode,(double *)&local_200,&local_1d8);
    dVar5 = __real_43e0000000000000;
    if ((((bFastDecimalFormatCanIndicateIfNearlyInteger == 0) ||
         (param_3->IndicateNearlyInteger == false)) ||
        (__real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)((double)local_200 - param_1) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84((double)local_200 - param_1,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (bVar4 = true, (double)local_200 == param_1)) {
      bVar4 = false;
    }
    uVar26 = SUB84(local_1d8,0);
    uVar27 = (uint)((ulonglong)local_1d8 >> 0x20);
    pFVar25 = local_200;
    if (bVar23) {
      pFVar25 = (FScriptContainerElement *)
                CONCAT44((uint)((ulonglong)local_200 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         (uint)local_200 ^ (uint)__xmm_80000000000000008000000000000000);
      uVar26 = uVar26 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar27 = uVar27 ^ __xmm_80000000000000008000000000000000._4_4_;
    }
    dVar2 = (double)CONCAT44(uVar27,uVar26);
    lVar7 = 0;
    pFVar24 = pFVar25;
    if ((__real_43e0000000000000 <= (double)pFVar25) &&
       (pFVar24 = (FScriptContainerElement *)((double)pFVar25 - __real_43e0000000000000),
       (double)pFVar24 < __real_43e0000000000000)) {
      lVar7 = -0x8000000000000000;
    }
    if (((double)pFVar25 - (double)(ulonglong)((longlong)(double)pFVar24 + lVar7) <=
         __real_3e45798ee0000000) || (bFastDecimalFormatLargeFloatSupport == 0)) {
      if ((param_3->UseGrouping == false) || (param_2->PrimaryGroupingSize == '\0')) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      iVar6 = IntegralToString_UInt64ToString
                        ((longlong)(double)pFVar24 + lVar7,bVar14,param_2->PrimaryGroupingSize,
                         param_2->SecondaryGroupingSize,param_2->MinimumGroupingDigits,
                         param_2->GroupingSeparatorCharacter,param_2->DigitCharacters,local_1e8,
                         uVar3,local_f8,0x29);
      if ((double)CONCAT44(uVar27,uVar26) != 0.0) {
        lVar7 = 0;
        if ((dVar5 <= (double)CONCAT44(uVar27,uVar26)) &&
           (dVar2 = (double)CONCAT44(uVar27,uVar26) - dVar5, dVar2 < dVar5)) {
          lVar7 = -0x8000000000000000;
        }
        uVar17 = uVar12;
        if (((longlong)dVar2 + lVar7 != 0) && (uVar17 = 0, uVar18 = uVar20, 0 < (int)uVar21)) {
          pwVar13 = awStack_15a;
          uVar11 = (longlong)dVar2 + lVar7;
          uVar17 = uVar12;
          uVar19 = uVar12;
          do {
            pwVar13 = pwVar13 + 1;
            uVar18 = (uint)uVar19;
            if (uVar11 == 0) break;
            uVar17 = (ulonglong)((int)uVar17 + 1);
            uVar18 = uVar18 + 1;
            uVar19 = (ulonglong)uVar18;
            *pwVar13 = param_2->DigitCharacters[uVar11 % 10];
            uVar11 = uVar11 / 10;
          } while ((int)uVar18 < (int)uVar21);
        }
        uVar20 = 0x14 - uVar18;
        if ((int)-uVar18 < (int)(0x14 - uVar18)) {
          uVar20 = -uVar18;
        }
        if (0 < (int)uVar20) {
          iVar10 = (int)uVar17;
          uVar17 = (ulonglong)(iVar10 + uVar20);
          wVar1 = param_2->DigitCharacters[0];
          pwVar13 = awStack_15a + (longlong)iVar10 + 1;
          for (uVar11 = (ulonglong)uVar20; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pwVar13 = wVar1;
            pwVar13 = pwVar13 + 1;
          }
        }
        iVar10 = (int)uVar17;
        if (0 < iVar10) {
          pwVar13 = awStack_15a + iVar10;
          do {
            wVar1 = *pwVar13;
            pwVar13 = pwVar13 + -1;
            awStack_1bc[uVar12 + 2] = wVar1;
            uVar12 = uVar12 + 1;
          } while ((longlong)uVar12 < (longlong)iVar10);
        }
        awStack_1bc[(longlong)iVar10 + 2] = L'\0';
        iVar22 = 0x12 - iVar10;
        if ((int)(local_1e4 - iVar10) < 0x12 - iVar10) {
          iVar22 = local_1e4 - iVar10;
        }
        if (0 < iVar22) {
          memmove(awStack_1bc + (longlong)iVar22 + 2,awStack_1bc + 2,(longlong)iVar10 * 2);
          wVar1 = param_2->DigitCharacters[0];
          uVar17 = (ulonglong)(uint)(iVar10 + iVar22);
          pwVar13 = awStack_1bc + 2;
          for (uVar12 = (longlong)iVar22 & 0x7fffffffffffffff; uVar15 = local_1e0, uVar12 != 0;
              uVar12 = uVar12 - 1) {
            *pwVar13 = wVar1;
            pwVar13 = pwVar13 + 1;
          }
        }
        uVar16 = (uint)uVar17;
        if ((int)uVar15 < (int)uVar16) {
          pwVar13 = awStack_1bc + (longlong)(int)uVar16 + 1;
          do {
            uVar16 = (uint)uVar17;
            if (*pwVar13 != param_2->DigitCharacters[0]) break;
            uVar16 = uVar16 - 1;
            uVar17 = (ulonglong)uVar16;
            pwVar13 = pwVar13 + -1;
          } while ((int)uVar15 < (int)uVar16);
        }
      }
      lVar7 = (longlong)(int)uVar16;
      if ((ulonglong)(lVar7 * 2) < 0x52) {
        uVar20 = 0x12 - uVar16;
        if ((int)(uVar15 - uVar16) < (int)(0x12 - uVar16)) {
          uVar20 = uVar15 - uVar16;
        }
        awStack_1bc[lVar7 + 2] = L'\0';
        if (0 < (int)uVar20) {
          wVar1 = param_2->DigitCharacters[0];
          uVar16 = uVar16 + uVar20;
          pwVar13 = awStack_1bc + lVar7 + 2;
          for (uVar12 = (ulonglong)uVar20; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pwVar13 = wVar1;
            pwVar13 = pwVar13 + 1;
          }
        }
        lVar7 = (longlong)(int)uVar16;
        if ((ulonglong)(lVar7 * 2) < 0x52) {
          awStack_1bc[lVar7 + 2] = L'\0';
          if ((bVar4) && (uVar16 + 3 < 0x29)) {
            lVar9 = (longlong)(int)uVar16;
            awStack_1bc[lVar7 + 2] = L'.';
            iVar10 = uVar16 + 2;
            uVar16 = uVar16 + 3;
            awStack_1bc[lVar9 + 3] = L'.';
            awStack_1bc[(longlong)iVar10 + 2] = L'.';
            if (0x51 < (longlong)iVar10 * 2 + 2U) goto LAB_1416f064b;
            awStack_1bc[(longlong)iVar10 + 3] = L'\0';
          }
          BuildFinalString(bVar23,(bool)*local_1d0.Data.AllocatorInstance.Data,param_2,local_f8,
                           iVar6,awStack_1bc + 2,uVar16,param_4);
          return;
        }
      }
LAB_1416f064b:
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    ::FString::SanitizeFloat(&local_1f8,param_1,1);
    if (param_4 != &local_1f8) {
      pFVar25 = (param_4->Data).AllocatorInstance.Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      (param_4->Data).AllocatorInstance.Data = local_1f8.Data.AllocatorInstance.Data;
      (param_4->Data).ArrayNum = local_1f8.Data.ArrayNum;
      (param_4->Data).ArrayMax = local_1f8.Data.ArrayMax;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    bVar23 = ::FString::IsNumeric(param_4);
    if (bVar23) {
      iVar6 = (param_4->Data).ArrayNum;
      if (iVar6 == 0) {
        local_200 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_200 = (param_4->Data).AllocatorInstance.Data;
        uVar20 = iVar6 - 1;
      }
      pFVar8 = CultureInvariantDecimalToString
                         (&local_1d0,param_1,(wchar_t **)&local_200,uVar20,param_2,param_3);
      ::FString::operator=(param_4,pFVar8);
      if ((FNumberFormattingOptions *)local_1d0.Data.AllocatorInstance.Data !=
          (FNumberFormattingOptions *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar6 = (param_2->NaNString).Data.ArrayNum;
    uVar20 = iVar6 - 1;
    if (iVar6 == 0) {
      uVar20 = uVar18;
    }
    ::FString::AppendChars
              (param_4,(wchar_t *)(param_2->NaNString).Data.AllocatorInstance.Data,uVar20);
  }
  return;
}

// FractionalToString_SplitAndRoundNumber @ 1416f0660

void __cdecl
FastDecimalFormat::Internal::FractionalToString_SplitAndRoundNumber
          (bool param_1,double param_2,int param_3,ERoundingMode param_4,double *param_5,
          double *param_6)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar8;
  double local_res10;
  double local_38 [4];
  undefined1 auVar7 [16];
  
  iVar2 = 0x12;
  if (param_3 < 0x12) {
    iVar2 = param_3;
  }
  local_res10 = param_2;
  if (iVar2 == 0) {
    local_38[0] = 0.0;
  }
  else {
    local_38[0] = modf(param_2,&local_res10);
  }
  pdVar1 = &local_res10;
  if (iVar2 != 0) {
    pdVar1 = local_38;
  }
  dVar3 = FMath::TruncateToHalfIfClose((double)Pow10Table[iVar2] * *pdVar1,__real_3e45798ee0000000);
  *pdVar1 = dVar3;
  switch(param_4) {
  case HalfToEven:
    dVar3 = FMath::RoundHalfToEven(dVar3);
    *pdVar1 = dVar3;
    break;
  case HalfFromZero:
    dVar3 = FMath::RoundHalfFromZero(dVar3);
    *pdVar1 = dVar3;
    break;
  case HalfToZero:
    dVar3 = FMath::RoundHalfToZero(dVar3);
    *pdVar1 = dVar3;
    break;
  case FromZero:
    if (0.0 <= dVar3) goto LAB_1416f0789;
LAB_1416f075c:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar3;
    auVar6 = roundpd(auVar5,auVar5,1);
    dVar3 = auVar6._0_8_;
    goto LAB_1416f078f;
  case ToZero:
    if (0.0 <= dVar3) goto LAB_1416f075c;
    goto LAB_1416f0789;
  case ToNegativeInfinity:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar3;
    auVar6 = roundpd(auVar6,auVar6,1);
    dVar3 = auVar6._0_8_;
    goto LAB_1416f078f;
  case ToPositiveInfinity:
LAB_1416f0789:
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar3;
    auVar6 = roundpd(auVar7,auVar7,2);
    dVar3 = auVar6._0_8_;
LAB_1416f078f:
    *pdVar1 = dVar3;
  }
  if (iVar2 == 0) {
    *param_5 = dVar3;
    *param_6 = 0.0;
  }
  else {
    dVar4 = dVar3;
    if (param_1) {
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    dVar8 = (double)Pow10Table[iVar2];
    if (dVar8 <= dVar4) {
      if (param_1) {
        local_res10 = local_res10 + __real_bff0000000000000;
        dVar3 = dVar8 + *pdVar1;
        *pdVar1 = dVar3;
      }
      else {
        local_res10 = local_res10 + __real_3ff0000000000000;
        dVar3 = *pdVar1 - dVar8;
        *pdVar1 = dVar3;
      }
    }
    *param_5 = local_res10;
    *param_6 = dVar3;
  }
  return;
}

// GetAllThreadStackBackTraces_ProcessSingle @ 1416f1b70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
GetAllThreadStackBackTraces_ProcessSingle
          (uint param_1,uint param_2,wchar_t *param_3,FThreadStackBackTrace *param_4)

{
  TArray<unsigned___int64,TFixedAllocator<100>_> *this;
  int *piVar1;
  TTypeCompatibleBytes<unsigned___int64> *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  this = &param_4->ProgramCounters;
  param_4->ThreadId = param_2;
  FString::operator=(&param_4->ThreadName,param_3);
  TArray<unsigned___int64,TFixedAllocator<100>_>::SetNumZeroed(this,100,No);
  piVar1 = &(param_4->ProgramCounters).ArrayNum;
  uVar7 = *piVar1;
  if ((int)uVar7 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 == param_2) {
    uVar4 = FWindowsPlatformStackWalk::CaptureStackBackTrace((ulong64 *)this,uVar7,(void *)0x0);
  }
  else {
    uVar4 = FWindowsPlatformStackWalk::CaptureThreadStackBackTrace
                      ((ulonglong)param_2,(ulong64 *)this,uVar7,(void *)0x0);
  }
  if ((int)uVar4 < (int)uVar7) {
    uVar7 = uVar4;
  }
  uVar4 = 0;
  if (0 < (int)uVar7) {
    uVar4 = uVar7;
  }
  if ((int)uVar4 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar4) {
    iVar5 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<100>::ForElementType<unsigned___int64>_>
                      (8,8,uVar4 - iVar6,&this->AllocatorInstance,piVar1,
                       &(param_4->ProgramCounters).ArrayMax);
    memset((this->AllocatorInstance).InlineData + iVar5,0,(longlong)(int)(uVar4 - iVar6) << 3);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar6) {
      uVar7 = iVar6 - uVar4;
      if ((int)(uVar7 | uVar4) < 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar7 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + (int)uVar4;
        iVar6 = (*piVar1 - uVar7) - uVar4;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar6 << 3);
        }
        *piVar1 = *piVar1 - uVar7;
      }
    }
  }
  return;
}

// GetCanonicalCultureName @ 1416f3130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001416f3ad5) */
/* WARNING: Removing unreachable block (ram,0x0001416f3292) */
/* WARNING: Removing unreachable block (ram,0x0001416f35ef) */
/* WARNING: Removing unreachable block (ram,0x0001416f3e93) */
/* WARNING: Removing unreachable block (ram,0x0001416f35fd) */
/* WARNING: Removing unreachable block (ram,0x0001416f3c4c) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
InternationalizationUtilities::GetCanonicalCultureName
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          FInternationalization *param_3)

{
  char cVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCulture *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
  *pTVar10;
  TSharedRef<FCulture,1> *pTVar11;
  FString *pFVar12;
  TTuple<FString,FString> *pTVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
  FVar16;
  ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
  FVar17;
  ForElementType<TTuple<FString,FString>_> FVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  wchar_t *pwVar21;
  int *piVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  uchar *puVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  ENameTagType EVar30;
  ulonglong uVar31;
  wchar_t *pwVar32;
  wchar_t wVar33;
  uint uVar34;
  void *pvVar35;
  undefined1 auStackY_338 [32];
  FKeyForward local_2e8 [8];
  FString local_2e0;
  undefined1 local_2d0 [8];
  FString local_2c8;
  undefined1 local_2b8 [8];
  FString local_2b0;
  FString local_2a0;
  ulonglong local_290;
  TArray<FString,TSizedDefaultAllocator<32>_> local_288;
  FNameTag local_278;
  FNameTag local_260;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FScriptContainerElement *local_1a8;
  longlong local_1a0;
  FString *local_198;
  wchar_t *pwStack_180;
  wchar_t *local_178;
  ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
  local_150;
  int local_e8;
  int local_e4;
  TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_e0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar14 = 0;
  uVar7 = 0;
  piVar22 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_198 = param_2;
  if ((*piVar22 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `InternationalizationUtilities::GetCanonicalCultureName'::__l2::<lambda_9>::operator()
              (local_2e8,&CanonizedTagMap);
    atexit(`InternationalizationUtilities::GetCanonicalCultureName'::__l2::
           _dynamic_atexit_destructor_for__CanonizedTagMap__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar22 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    VariantMap.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178 = L"EUR";
    VariantMap.Pairs.ArrayNum = 0;
    VariantMap.Pairs.ArrayMax = 0;
    pwStack_180 = L"currency";
    ::FString::FString(&local_248,L"EURO");
    pTVar10 = TSortedMap<FString,`InternationalizationUtilities::GetCanonicalCultureName'::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>
              ::AllocateMemoryForEmplace<FString_&>(&VariantMap,&local_248);
    *(undefined8 *)pTVar10 = 0;
    *(FScriptContainerElement **)pTVar10 = local_248.Data.AllocatorInstance.Data;
    *(int *)&pTVar10->field_0x8 = local_248.Data.ArrayNum;
    *(int *)&pTVar10->field_0xc = local_248.Data.ArrayMax;
    *(undefined8 *)&pTVar10->field_0x10 = 0;
    *(wchar_t **)&pTVar10->field_0x18 = pwStack_180;
    *(wchar_t **)&pTVar10->field_0x20 = local_178;
    local_248.Data.ArrayNum = 0;
    local_248.Data.ArrayMax = 0;
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    atexit(`InternationalizationUtilities::GetCanonicalCultureName'::__l2::
           _dynamic_atexit_destructor_for__VariantMap__);
    _Init_thread_footer(&::_TSS1);
  }
  SanitizeCultureCode(&local_1d8,param_1);
  pTVar11 = TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_FInternationalization::GetCustomCulture_::__l2::<lambda_1>_>
                      (&param_3->CustomCultures,&local_1d8);
  if (pTVar11 == (TSharedRef<FCulture,1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pFVar3 != (FCulture *)0x0) {
      ::FString::FString(__return_storage_ptr__,&local_1d8);
      if (local_1d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  local_150.SecondaryData =
       (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
        )0x0;
  local_e8 = 0;
  local_e4 = 4;
  local_e0.AllocatorInstance.SecondaryData = (ForElementType<TTuple<FString,FString>_>)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 4;
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  for (FVar23.Data = local_1d8.Data.AllocatorInstance.Data;
      FVar20.Data = local_1d8.Data.AllocatorInstance.Data,
      FVar23.Data != local_1d8.Data.AllocatorInstance.Data + (longlong)local_1d8.Data.ArrayNum * 2;
      FVar23.Data = FVar23.Data + 2) {
    if (*(wchar_t *)FVar23.Data == L'@') {
      lVar24 = (longlong)FVar23.Data - (longlong)local_1d8.Data.AllocatorInstance.Data >> 1;
      goto LAB_1416f33c0;
    }
  }
  lVar24 = 0xffffffff;
  uVar34 = 0xffffffff;
  for (; FVar20.Data !=
         local_1d8.Data.AllocatorInstance.Data + (longlong)local_1d8.Data.ArrayNum * 2;
      FVar20.Data = FVar20.Data + 2) {
LAB_1416f33c0:
    uVar34 = (uint)lVar24;
    if (*(wchar_t *)FVar20.Data == L'.') {
      uVar19 = (uint)((longlong)FVar20.Data - (longlong)local_1d8.Data.AllocatorInstance.Data >> 1);
      if (uVar19 != 0xffffffff) goto LAB_1416f33f2;
      break;
    }
  }
  uVar19 = local_1d8.Data.ArrayNum - 1;
  if (local_1d8.Data.ArrayNum == 0) {
    uVar19 = uVar7;
  }
LAB_1416f33f2:
  uVar6 = uVar34;
  if ((uVar34 == 0xffffffff) && (uVar6 = local_1d8.Data.ArrayNum - 1, local_1d8.Data.ArrayNum == 0))
  {
    uVar6 = uVar7;
  }
  if ((int)uVar6 < (int)uVar19) {
    uVar19 = uVar6;
  }
  uVar6 = local_1d8.Data.ArrayNum - 1;
  if (local_1d8.Data.ArrayNum == 0) {
    uVar6 = 0;
  }
  if ((int)uVar19 < (int)uVar6) {
    uVar6 = uVar19;
  }
  if (0 < (int)uVar6) {
    uVar7 = uVar6;
  }
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar23.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_1c8,(wchar_t *)FVar23.Data,uVar7);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  local_2a0.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
  local_2a0.Data.ArrayNum = local_1c8.Data.ArrayNum;
  local_2a0.Data.ArrayMax = local_1c8.Data.ArrayMax;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::ReplaceCharInlineCaseSensitive(&local_2a0,L'_',L'-');
  if (uVar34 != 0xffffffff) {
    ::FString::RightChop(&local_1d8,&local_1b8,uVar34 + 1);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    local_208.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
    local_208.Data.ArrayNum = local_1b8.Data.ArrayNum;
    local_208.Data.ArrayMax = local_1b8.Data.ArrayMax;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  uVar7 = Algo::
          BinarySearchBy<TArray<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>,TSizedDefaultAllocator<32>_>,FString,TSortedMap<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                    (&CanonizedTagMap.Pairs,&local_2a0,local_2e8[0],
                     (TLess<FString_const_&>)local_2e8[0]);
  uVar27 = uVar14;
  uVar31 = uVar14;
  iVar8 = local_2a0.Data.ArrayNum;
  if (uVar7 != 0xffffffff) {
    uVar34 = 0;
    if ((int)uVar7 < CanonizedTagMap.Pairs.ArrayNum) {
      uVar34 = ~uVar7 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FString *)(*pcVar4)();
      return pFVar12;
    }
    pFVar26 = CanonizedTagMap.Pairs.AllocatorInstance.Data + ((longlong)(int)uVar7 * 5 + 2) * 8;
    iVar8 = local_2a0.Data.ArrayNum;
    if (((pFVar26 != (FScriptContainerElement *)0x0) &&
        (::FString::operator=(&local_2a0,*(wchar_t **)pFVar26), iVar8 = local_2a0.Data.ArrayNum,
        *(longlong *)(pFVar26 + 8) != 0)) && (*(wchar_t **)(pFVar26 + 0x10) != (wchar_t *)0x0)) {
      ::FString::FString(&local_1f8,*(wchar_t **)(pFVar26 + 0x10));
      ::FString::FString(&local_238,*(wchar_t **)(pFVar26 + 8));
      pTVar13 = TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                ::AllocateMemoryForEmplace<FString_&>
                          ((TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                            *)&local_e0,&local_238);
      *(undefined8 *)pTVar13 = 0;
      *(FScriptContainerElement **)pTVar13 = local_238.Data.AllocatorInstance.Data;
      *(int *)&pTVar13->field_0x8 = local_238.Data.ArrayNum;
      *(int *)&pTVar13->field_0xc = local_238.Data.ArrayMax;
      *(undefined8 *)&pTVar13->field_0x10 = 0;
      *(FScriptContainerElement **)&pTVar13->field_0x10 = local_1f8.Data.AllocatorInstance.Data;
      *(int *)&pTVar13->field_0x18 = local_1f8.Data.ArrayNum;
      *(int *)&pTVar13->field_0x1c = local_1f8.Data.ArrayMax;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Data.ArrayNum = 0;
      local_238.Data.ArrayMax = 0;
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = local_2a0.Data.ArrayNum;
    }
  }
LAB_1416f3610:
  do {
    uVar34 = 0;
    uVar7 = iVar8 - 1U;
    if (iVar8 == 0) {
      uVar7 = uVar34;
    }
    iVar29 = (int)uVar31;
    if (iVar29 < (int)uVar7) {
      if ((((iVar29 < 0) || (iVar8 == 0)) || ((int)(iVar8 - 1U) <= iVar29)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), iVar8 = local_2a0.Data.ArrayNum, bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FString *)(*pcVar4)();
        return pFVar12;
      }
      if (*(short *)(local_2a0.Data.AllocatorInstance.Data + uVar27 * 2) != 0x2d) {
        uVar27 = uVar27 + 1;
        uVar31 = (ulonglong)(iVar29 + 1);
        goto LAB_1416f3610;
      }
    }
    local_290 = uVar27;
    ::FString::Mid(&local_2a0,&local_2c8,(int)uVar14,iVar29 - (int)uVar14);
    EVar30 = Variant;
    iVar8 = local_2c8.Data.ArrayNum;
    if (local_e8 == 0) {
      uVar7 = local_2c8.Data.ArrayNum - 1;
      if (local_2c8.Data.ArrayNum == 0) {
        uVar7 = uVar34;
      }
      if ((uVar7 != 2) && (uVar7 != 3)) {
        pFVar12 = FLeetCulture::StaticGetName();
        iVar8 = (pFVar12->Data).ArrayNum;
        if (local_2c8.Data.ArrayNum == iVar8) {
          if (local_2c8.Data.ArrayNum < 2) goto LAB_1416f373d;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_2c8.Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
          bVar5 = iVar8 == 0;
        }
        else {
          bVar5 = local_2c8.Data.ArrayNum + iVar8 == 1;
        }
        if (!bVar5) {
          pFVar12 = FKeysCulture::StaticGetName();
          iVar8 = (pFVar12->Data).ArrayNum;
          if (local_2c8.Data.ArrayNum == iVar8) {
            if (local_2c8.Data.ArrayNum < 2) goto LAB_1416f373d;
            iVar8 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_2c8.Data.AllocatorInstance.Data,
                               (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
            bVar5 = iVar8 == 0;
          }
          else {
            bVar5 = local_2c8.Data.ArrayNum + iVar8 == 1;
          }
          iVar8 = local_2c8.Data.ArrayNum;
          if (!bVar5) goto LAB_1416f3754;
        }
      }
LAB_1416f373d:
      EVar30 = Language;
      ::FString::ToLowerInline(&local_2c8);
      goto LAB_1416f3ae6;
    }
LAB_1416f3754:
    if (local_e8 == 1) {
      FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                )&local_150;
      if (local_150.SecondaryData !=
          (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
           )0x0) {
        FVar16 = local_150.SecondaryData;
      }
      if (*(ENameTagType *)((longlong)FVar16 + 0x10) != Language) goto LAB_1416f37d0;
      uVar7 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar7 = uVar34;
      }
      if (uVar7 != 4) goto LAB_1416f37d0;
      EVar30 = Script;
      ::FString::ToLowerInline(&local_2c8);
      uVar7 = local_2c8.Data.ArrayNum - 1;
      if (local_2c8.Data.ArrayNum == 0) {
        uVar7 = uVar34;
      }
      if (0 < (int)uVar7) {
        *(wchar_t *)local_2c8.Data.AllocatorInstance.Data =
             *(wchar_t *)local_2c8.Data.AllocatorInstance.Data -
             (-(ushort)((ushort)*(wchar_t *)local_2c8.Data.AllocatorInstance.Data - 0x61 < 0x1a) &
             0x20);
        EVar30 = Script;
        goto LAB_1416f3ae6;
      }
LAB_1416f3aea:
      iVar8 = local_2c8.Data.ArrayNum + -1;
      if (local_2c8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        local_278.Str.Data.AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
        local_278.Str.Data.ArrayMax = local_2c8.Data.ArrayMax;
        local_278.Str.Data.ArrayNum = local_2c8.Data.ArrayNum;
        FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                  )&local_150;
        if (local_150.SecondaryData !=
            (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
             )0x0) {
          FVar16 = local_150.SecondaryData;
        }
        local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.Data.ArrayNum = 0;
        local_2c8.Data.ArrayMax = 0;
        local_278.Type = EVar30;
        if ((ulonglong)FVar16 <= &local_278) {
          FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                    )&local_150;
          if (local_150.SecondaryData !=
              (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
               )0x0) {
            FVar16 = local_150.SecondaryData;
          }
          if ((&local_278 < (FNameTag *)((longlong)FVar16 + (longlong)local_e4 * 0x18)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar12 = (FString *)(*pcVar4)();
            return pFVar12;
          }
        }
        if (local_e8 == local_e4) {
          local_e8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FNameTag>_>
                               (0x818,&local_150,&local_e4);
        }
        lVar24 = (longlong)local_e8;
        FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                  )&local_150;
        if (local_150.SecondaryData !=
            (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
             )0x0) {
          FVar16 = local_150.SecondaryData;
        }
        local_e8 = local_e8 + 1;
        (((FNameTag *)((longlong)FVar16 + lVar24 * 0x18))->Str).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (((FNameTag *)((longlong)FVar16 + lVar24 * 0x18))->Str).Data.AllocatorInstance.Data =
             local_278.Str.Data.AllocatorInstance.Data;
        local_278.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ((int *)((longlong)FVar16 + 8))[lVar24 * 6] = local_278.Str.Data.ArrayNum;
        ((int *)((longlong)FVar16 + 0xc))[lVar24 * 6] = local_278.Str.Data.ArrayMax;
        local_278.Str.Data.ArrayNum = 0;
        local_278.Str.Data.ArrayMax = 0;
        ((ENameTagType *)((longlong)FVar16 + 0x10))[lVar24 * 0x18] = local_278.Type;
      }
    }
    else {
LAB_1416f37d0:
      if (local_e8 - 1U < 2) {
        uVar7 = uVar34;
        if ((int)(local_e8 - 1U) < local_e8) {
          uVar7 = ~(local_e8 - 1U) >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar12 = (FString *)(*pcVar4)();
            return pFVar12;
          }
          iVar8 = local_2c8.Data.ArrayNum;
        }
        FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                  )&local_150;
        if (local_150.SecondaryData !=
            (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
             )0x0) {
          FVar16 = local_150.SecondaryData;
        }
        if (*(ENameTagType *)
             ((ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
               *)((longlong)FVar16 - 8) + (longlong)local_e8 * 3) != Language) {
          uVar7 = uVar34;
          if ((int)(local_e8 - 1U) < local_e8) {
            uVar7 = ~(local_e8 - 1U) >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar12 = (FString *)(*pcVar4)();
              return pFVar12;
            }
            iVar8 = local_2c8.Data.ArrayNum;
          }
          FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                    )&local_150;
          if (local_150.SecondaryData !=
              (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
               )0x0) {
            FVar16 = local_150.SecondaryData;
          }
          if (*(ENameTagType *)
               ((ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                 *)((longlong)FVar16 - 8) + (longlong)local_e8 * 3) != Script) goto LAB_1416f38fc;
        }
        uVar7 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar7 = uVar34;
        }
        if ((uVar7 == 2) || (uVar7 == 3)) {
          EVar30 = Region;
          ::FString::ToUpperInline(&local_2c8);
          goto LAB_1416f3ae6;
        }
      }
LAB_1416f38fc:
      ::FString::ToUpperInline(&local_2c8);
      FVar23 = VariantMap.Pairs.AllocatorInstance;
      uVar7 = VariantMap.Pairs.ArrayNum;
      if (VariantMap.Pairs.ArrayNum < 1) {
LAB_1416f3ae6:
        goto LAB_1416f3aea;
      }
      do {
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_2c8.Data.ArrayNum != 0) {
          FVar20.Data = local_2c8.Data.AllocatorInstance.Data;
        }
        iVar8 = (uVar7 >> 1) + uVar34;
        if (*(int *)(FVar23.Data + (longlong)iVar8 * 0x28 + 8) == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = *(wchar_t **)(FVar23.Data + (longlong)iVar8 * 0x28);
        }
        iVar9 = FGenericPlatformStricmp::Stricmp(pwVar21,(wchar_t *)FVar20.Data);
        if (iVar9 < 0) {
          uVar34 = iVar8 + (uVar7 & 1);
        }
        uVar19 = uVar7 >> 1;
        uVar7 = uVar7 >> 1;
      } while (uVar19 != 0);
      if (VariantMap.Pairs.ArrayNum <= (int)uVar34) goto LAB_1416f3ae6;
      lVar24 = (longlong)(int)uVar34 * 0x28;
      if (*(int *)(VariantMap.Pairs.AllocatorInstance.Data + lVar24 + 8) == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = *(wchar_t **)(VariantMap.Pairs.AllocatorInstance.Data + lVar24);
      }
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_2c8.Data.ArrayNum != 0) {
        FVar23.Data = local_2c8.Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar23.Data,pwVar21);
      if ((iVar8 < 0) || (uVar34 == 0xffffffff)) goto LAB_1416f3ae6;
      uVar7 = 0;
      if ((int)uVar34 < VariantMap.Pairs.ArrayNum) {
        uVar7 = ~uVar34 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FString *)(*pcVar4)();
        return pFVar12;
      }
      pFVar26 = VariantMap.Pairs.AllocatorInstance.Data + lVar24 + 0x10;
      if (pFVar26 == (FScriptContainerElement *)0x0) goto LAB_1416f3ae6;
      if (((*(longlong *)(pFVar26 + 8) == 0) || (*(longlong *)(pFVar26 + 0x10) == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("VariantTagData->KeywordArgKey && VariantTagData->KeywordArgValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationUtilities.cpp"
                             ,0x13b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FString *)(*pcVar4)();
        return pFVar12;
      }
      ::FString::FString(&local_1e8,*(wchar_t **)(pFVar26 + 0x10));
      ::FString::FString(&local_228,*(wchar_t **)(pFVar26 + 8));
      pTVar13 = TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                ::AllocateMemoryForEmplace<FString_&>
                          ((TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                            *)&local_e0,&local_228);
      *(undefined8 *)pTVar13 = 0;
      *(FScriptContainerElement **)pTVar13 = local_228.Data.AllocatorInstance.Data;
      *(int *)&pTVar13->field_0x8 = local_228.Data.ArrayNum;
      *(int *)&pTVar13->field_0xc = local_228.Data.ArrayMax;
      *(undefined8 *)&pTVar13->field_0x10 = 0;
      *(FScriptContainerElement **)&pTVar13->field_0x10 = local_1e8.Data.AllocatorInstance.Data;
      *(int *)&pTVar13->field_0x18 = local_1e8.Data.ArrayNum;
      *(int *)&pTVar13->field_0x1c = local_1e8.Data.ArrayMax;
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Data.ArrayNum = 0;
      local_228.Data.ArrayMax = 0;
      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    uVar7 = iVar29 + 1;
    uVar14 = (ulonglong)uVar7;
    iVar29 = local_2a0.Data.ArrayNum + -1;
    if (local_2a0.Data.ArrayNum == 0) {
      iVar29 = 0;
    }
    uVar27 = local_290 + 1;
    uVar31 = (ulonglong)uVar7;
    iVar8 = local_2a0.Data.ArrayNum;
  } while ((int)uVar7 < iVar29);
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_208,&local_288,L";",true);
  uVar14 = (ulonglong)local_288.ArrayNum;
  pFVar26 = local_288.AllocatorInstance.Data + uVar14 * 0x10;
  lVar24 = 0x9d4c;
  local_290 = CONCAT44(local_290._4_4_,local_288.ArrayNum);
  local_1a0 = 0x9d4c;
  FVar23.Data = local_288.AllocatorInstance.Data;
  pvVar35 = ThreadLocalStoragePointer;
  local_1a8 = pFVar26;
LAB_1416f3ce1:
  if (local_288.ArrayNum != (int)uVar14) {
    local_2d0[0] = 0;
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2d0);
  }
  if (FVar23.Data != pFVar26) {
    pwVar21 = *(wchar_t **)FVar23.Data;
    for (pwVar32 = pwVar21; pwVar32 != pwVar21 + *(int *)(FVar23.Data + 8); pwVar32 = pwVar32 + 1) {
      if (*pwVar32 == L'=') {
        iVar8 = (int)((longlong)pwVar32 - (longlong)pwVar21 >> 1);
        if (iVar8 != -1) {
          iVar9 = *(int *)(FVar23.Data + 8);
          iVar29 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar29 = 0;
          }
          if (iVar8 < iVar29) {
            iVar29 = iVar8;
          }
          iVar28 = 0;
          if (0 < iVar29) {
            iVar28 = iVar29;
          }
          if (iVar9 == 0) {
            pwVar21 = L"";
          }
          ::FString::ConstructFromPtrSize(&local_2b0,pwVar21,iVar28);
          if ((*(int *)(lVar24 + *(longlong *)((longlong)pvVar35 + (ulonglong)_tls_index * 8)) <
               ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FString::FString(ValidKeywords,L"calendar");
            ::FString::FString(ValidKeywords + 1,L"collation");
            ::FString::FString(ValidKeywords + 2,L"currency");
            ::FString::FString(ValidKeywords + 3,L"numbers");
            atexit(``InternationalizationUtilities::GetCanonicalCultureName'::__l2::<lambda_8>::
                   operator()'::__l2::_dynamic_atexit_destructor_for__ValidKeywords__);
            _Init_thread_footer(&::_TSS0);
          }
          ::FString::ToLowerInline(&local_2b0);
          FVar20.Data = local_2b0.Data.AllocatorInstance.Data;
          iVar29 = local_2b0.Data.ArrayNum;
          pFVar12 = ValidKeywords;
          goto LAB_1416f3f90;
        }
        break;
      }
    }
    ::FString::ToUpperInline((FString *)FVar23.Data);
    iVar29 = *(int *)(FVar23.Data + 8);
    iVar8 = iVar29 + -1;
    if (iVar29 == 0) {
      iVar8 = 0;
    }
    if (0 < iVar8) {
                    /* WARNING: Load size is inaccurate */
      local_260.Str.Data.AllocatorInstance.Data = *FVar23.Data;
      *(undefined8 *)FVar23.Data = 0;
      *(undefined8 *)(FVar23.Data + 8) = 0;
      local_260.Str.Data.ArrayMax = *(int *)(FVar23.Data + 0xc);
      local_260.Str.Data.ArrayNum = iVar29;
      local_260.Type = Variant;
      FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                )&local_150;
      if (local_150.SecondaryData !=
          (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
           )0x0) {
        FVar16 = local_150.SecondaryData;
      }
      if ((ulonglong)FVar16 <= &local_260) {
        FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                  )&local_150;
        if (local_150.SecondaryData !=
            (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
             )0x0) {
          FVar16 = local_150.SecondaryData;
        }
        if ((&local_260 < (FNameTag *)((longlong)FVar16 + (longlong)local_e4 * 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar4)();
          return pFVar12;
        }
      }
      if (local_e8 == local_e4) {
        local_e8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FNameTag>_>
                             (0x818,&local_150,&local_e4);
      }
      FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                )&local_150;
      if (local_150.SecondaryData !=
          (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
           )0x0) {
        FVar16 = local_150.SecondaryData;
      }
      lVar15 = (longlong)local_e8;
      local_e8 = local_e8 + 1;
      (((FNameTag *)((longlong)FVar16 + lVar15 * 0x18))->Str).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (((FNameTag *)((longlong)FVar16 + lVar15 * 0x18))->Str).Data.AllocatorInstance.Data =
           local_260.Str.Data.AllocatorInstance.Data;
      local_260.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((int *)((longlong)FVar16 + 8))[lVar15 * 6] = local_260.Str.Data.ArrayNum;
      ((int *)((longlong)FVar16 + 0xc))[lVar15 * 6] = local_260.Str.Data.ArrayMax;
      local_260.Str.Data.ArrayNum = 0;
      local_260.Str.Data.ArrayMax = 0;
      ((ENameTagType *)((longlong)FVar16 + 0x10))[lVar15 * 0x18] = local_260.Type;
    }
    goto LAB_1416f4126;
  }
  DestructItems<FString,int>((FString *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  uVar14 = 0;
  local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.Data.ArrayNum = 0;
  local_2e0.Data.ArrayMax = 0;
  uVar7 = 0;
  if (local_e8 < 1) goto LAB_1416f438f;
  FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
            )&local_150;
  if (local_150.SecondaryData !=
      (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
       )0x0) {
    FVar16 = local_150.SecondaryData;
  }
  if ((*(ENameTagType *)((longlong)FVar16 + 0x10) != Language) ||
     (uVar27 = uVar14, iVar8 = local_e8, local_e8 < 1)) goto LAB_1416f438f;
  goto LAB_1416f41b0;
  while( true ) {
    if (bVar5) goto LAB_1416f3fd5;
    pFVar12 = pFVar12 + 1;
    if (pFVar12 == (FString *)&::_TSS0) break;
LAB_1416f3f90:
    iVar9 = (pFVar12->Data).ArrayNum;
    if (iVar29 == iVar9) {
      if (iVar29 < 2) goto LAB_1416f3fd5;
      iVar9 = wcscmp((wchar_t *)FVar20.Data,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
      bVar5 = iVar9 == 0;
    }
    else {
      bVar5 = iVar9 + iVar29 == 1;
    }
  }
  ::FString::Reset(&local_2b0,0);
LAB_1416f3fd5:
  ::FString::RightChop((FString *)FVar23.Data,&local_218,iVar8 + 1);
  iVar8 = local_2b0.Data.ArrayNum + -1;
  if (local_2b0.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    iVar8 = local_218.Data.ArrayNum + -1;
    if (local_218.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if (0 < iVar8) {
      uVar7 = Algo::
              BinarySearchBy<TArray<TTuple<FString,FString>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FString,TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>::FKeyForward,TLess<FString_const_&>_>
                        (&local_e0,&local_2b0,(FKeyForward)local_2e8[0],
                         (TLess<FString_const_&>)local_2e8[0]);
      if (uVar7 != 0xffffffff) {
        uVar34 = 0;
        if ((int)uVar7 < local_e0.ArrayNum) {
          uVar34 = ~uVar7 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar4)();
          return pFVar12;
        }
        FVar18 = (ForElementType<TTuple<FString,FString>_>)&local_e0;
        if (local_e0.AllocatorInstance.SecondaryData !=
            (ForElementType<TTuple<FString,FString>_>)0x0) {
          FVar18 = local_e0.AllocatorInstance.SecondaryData;
        }
        if ((uchar *)((longlong)FVar18 + 0x10) + (longlong)(int)uVar7 * 0x20 != (uchar *)0x0)
        goto LAB_1416f40f3;
      }
      pTVar13 = TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                ::AllocateMemoryForEmplace<FString_&>
                          ((TSortedMap<FString,FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>
                            *)&local_e0,&local_2b0);
      *(undefined8 *)pTVar13 = 0;
      *(FScriptContainerElement **)pTVar13 = local_2b0.Data.AllocatorInstance.Data;
      local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar13->field_0x8 = local_2b0.Data.ArrayNum;
      *(int *)&pTVar13->field_0xc = local_2b0.Data.ArrayMax;
      local_2b0.Data.ArrayNum = 0;
      local_2b0.Data.ArrayMax = 0;
      *(undefined8 *)&pTVar13->field_0x10 = 0;
      *(FScriptContainerElement **)&pTVar13->field_0x10 = local_218.Data.AllocatorInstance.Data;
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar13->field_0x18 = local_218.Data.ArrayNum;
      *(int *)&pTVar13->field_0x1c = local_218.Data.ArrayMax;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
    }
  }
LAB_1416f40f3:
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar26 = local_1a8;
  lVar24 = local_1a0;
  pvVar35 = ThreadLocalStoragePointer;
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    pFVar26 = local_1a8;
    lVar24 = local_1a0;
    pvVar35 = ThreadLocalStoragePointer;
  }
LAB_1416f4126:
  uVar14 = local_290 & 0xffffffff;
  FVar23.Data = FVar23.Data + 0x10;
  goto LAB_1416f3ce1;
LAB_1416f41b0:
  uVar19 = (uint)uVar14;
  uVar34 = 0;
  if ((int)uVar19 < iVar8) {
    uVar34 = ~uVar19 >> 0x1f;
  }
  if ((uVar34 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar8 = local_e8, bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FString *)(*pcVar4)();
    return pFVar12;
  }
  FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
            )&local_150;
  if (local_150.SecondaryData !=
      (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
       )0x0) {
    FVar16 = local_150.SecondaryData;
  }
  cVar1 = *(char *)(uVar27 + 0x10 + (longlong)FVar16);
  pFVar12 = (FString *)(uVar27 + (longlong)FVar16);
  if (cVar1 == '\0') {
    if (&local_2e0 != pFVar12) {
      iVar29 = (pFVar12->Data).ArrayNum;
      pFVar26 = (pFVar12->Data).AllocatorInstance.Data;
      local_2e0.Data.ArrayNum = iVar29;
      if ((iVar29 == 0) && (local_2e0.Data.ArrayMax == 0)) {
        local_2e0.Data.ArrayNum = 0;
        local_2e0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar29,local_2e0.Data.ArrayMax,(ForAnyElementType *)&local_2e0,iVar29,
                   &local_2e0.Data.ArrayMax);
        iVar8 = local_e8;
        if (iVar29 != 0) {
          memcpy(local_2e0.Data.AllocatorInstance.Data,pFVar26,(longlong)iVar29 * 2);
          iVar8 = local_e8;
        }
      }
    }
  }
  else {
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      ::FString::AppendChar(&local_2e0,L'-');
      iVar8 = (pFVar12->Data).ArrayNum;
    }
    else {
      if (cVar1 != '\x03') goto LAB_1416f4381;
      iVar29 = uVar19 - 1;
      if ((-1 < iVar29) && (iVar29 < iVar8)) {
        uVar34 = uVar7;
        if (iVar29 < iVar8) {
          uVar34 = -uVar19 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar4)();
          return pFVar12;
        }
        FVar17 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
                  )&local_150;
        if (local_150.SecondaryData !=
            (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
             )0x0) {
          FVar17 = local_150.SecondaryData;
        }
        if ((*(char *)((uVar27 - 8) + (longlong)FVar17) == '\0') &&
           (1 < *(int *)(uVar27 + 8 + (longlong)FVar16))) {
          ::FString::AppendChar(&local_2e0,L'-');
        }
      }
      ::FString::AppendChar(&local_2e0,L'-');
      iVar8 = *(int *)(uVar27 + 8 + (longlong)FVar16);
    }
    uVar34 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar34 = uVar7;
    }
    ::FString::AppendChars(&local_2e0,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,uVar34);
    iVar8 = local_e8;
  }
LAB_1416f4381:
  uVar14 = (ulonglong)(uVar19 + 1);
  uVar27 = uVar27 + 0x18;
  if (iVar8 <= (int)(uVar19 + 1)) {
LAB_1416f438f:
    iVar8 = local_e0.ArrayNum;
    uVar34 = local_2e0.Data.ArrayNum - 1;
    if (local_2e0.Data.ArrayNum == 0) {
      uVar34 = uVar7;
    }
    if ((0 < (int)uVar34) && (lVar24 = (longlong)local_e0.ArrayNum, 0 < local_e0.ArrayNum)) {
      wVar33 = L'@';
      FVar18 = (ForElementType<TTuple<FString,FString>_>)&local_e0;
      if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<TTuple<FString,FString>_>)0x0)
      {
        FVar18 = local_e0.AllocatorInstance.SecondaryData;
      }
      puVar25 = (uchar *)((longlong)FVar18 + 0x18);
      while( true ) {
        if (local_e0.ArrayNum != iVar8) {
          `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2b8);
        }
        if ((ForElementType<TTuple<FString,FString>_> *)(puVar25 + -0x18) ==
            (ForElementType<TTuple<FString,FString>_> *)(lVar24 * 0x20 + (longlong)FVar18)) break;
        ::FString::AppendChar(&local_2e0,wVar33);
        wVar33 = L';';
        uVar34 = *(int *)(puVar25 + -0x10) - 1;
        if (*(int *)(puVar25 + -0x10) == 0) {
          uVar34 = uVar7;
        }
        ::FString::AppendChars
                  (&local_2e0,
                   *(wchar_t **)
                    ((ForElementType<TTuple<FString,FString>_> *)(puVar25 + -0x18))->InlineData,
                   uVar34);
        ::FString::AppendChar(&local_2e0,L'=');
        uVar34 = *(int *)puVar25 - 1;
        if (*(int *)puVar25 == 0) {
          uVar34 = uVar7;
        }
        ::FString::AppendChars(&local_2e0,*(wchar_t **)(puVar25 + -8),uVar34);
        puVar25 = puVar25 + 0x20;
      }
    }
    if ((local_2e0.Data.ArrayNum < 2) && (&local_2e0 != local_198)) {
      iVar8 = (local_198->Data).ArrayNum;
      pFVar26 = (local_198->Data).AllocatorInstance.Data;
      local_2e0.Data.ArrayNum = iVar8;
      if ((iVar8 == 0) && (local_2e0.Data.ArrayMax == 0)) {
        local_2e0.Data.ArrayNum = 0;
        local_2e0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,local_2e0.Data.ArrayMax,(ForAnyElementType *)&local_2e0,iVar8,
                   &local_2e0.Data.ArrayMax);
        if (iVar8 != 0) {
          memcpy(local_2e0.Data.AllocatorInstance.Data,pFVar26,(longlong)iVar8 * 2);
        }
      }
    }
    FVar23.Data = local_2e0.Data.AllocatorInstance.Data;
    local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar23.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_2e0.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_2e0.Data.ArrayMax;
    local_2e0.Data.ArrayNum = 0;
    local_2e0.Data.ArrayMax = 0;
    FVar18 = (ForElementType<TTuple<FString,FString>_>)&local_e0;
    if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<TTuple<FString,FString>_>)0x0) {
      FVar18 = local_e0.AllocatorInstance.SecondaryData;
    }
    DestructItems<TTuple<FString,FString>,int>((TTuple<FString,FString> *)FVar18,local_e0.ArrayNum);
    if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<TTuple<FString,FString>_>)0x0) {
      FMemory::Free((void *)local_e0.AllocatorInstance.SecondaryData);
    }
    FVar16 = (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
              )&local_150;
    if (local_150.SecondaryData !=
        (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
         )0x0) {
      FVar16 = local_150.SecondaryData;
    }
    DestructItems<_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FNameTag,int>
              ((FNameTag *)FVar16,local_e8);
    if (local_150.SecondaryData !=
        (ForElementType<,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FNameTag>
         )0x0) {
      FMemory::Free((void *)local_150.SecondaryData);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  goto LAB_1416f41b0;
}

// GetCultureAgnosticFormattingRules @ 1416f4e30

FDecimalNumberFormattingRules * __cdecl FastDecimalFormat::GetCultureAgnosticFormattingRules(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      CultureAgnosticFormattingRules.MinimumGroupingDigits = '\x01';
      CultureAgnosticFormattingRules.NaNString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      CultureAgnosticFormattingRules.NaNString.Data.ArrayNum = 0;
      CultureAgnosticFormattingRules.NaNString.Data.ArrayMax = 0;
      CultureAgnosticFormattingRules.NegativePrefixString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      CultureAgnosticFormattingRules.NegativePrefixString.Data.ArrayNum = 0;
      CultureAgnosticFormattingRules.NegativePrefixString.Data.ArrayMax = 0;
      CultureAgnosticFormattingRules.NegativeSuffixString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      CultureAgnosticFormattingRules.NegativeSuffixString.Data.ArrayNum = 0;
      CultureAgnosticFormattingRules.NegativeSuffixString.Data.ArrayMax = 0;
      CultureAgnosticFormattingRules.PositivePrefixString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      CultureAgnosticFormattingRules.PositivePrefixString.Data.ArrayNum = 0;
      CultureAgnosticFormattingRules.PositivePrefixString.Data.ArrayMax = 0;
      CultureAgnosticFormattingRules.PositiveSuffixString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      CultureAgnosticFormattingRules.PositiveSuffixString.Data.ArrayNum = 0;
      CultureAgnosticFormattingRules.PositiveSuffixString.Data.ArrayMax = 0;
      CultureAgnosticFormattingRules.PlusString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      CultureAgnosticFormattingRules.PlusString.Data.ArrayNum = 0;
      CultureAgnosticFormattingRules.PlusString.Data.ArrayMax = 0;
      CultureAgnosticFormattingRules.MinusString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      CultureAgnosticFormattingRules.MinusString.Data.ArrayNum = 0;
      CultureAgnosticFormattingRules.MinusString.Data.ArrayMax = 0;
      CultureAgnosticFormattingRules.GroupingSeparatorCharacter = L'\0';
      CultureAgnosticFormattingRules.DecimalSeparatorCharacter = L'\0';
      CultureAgnosticFormattingRules.PrimaryGroupingSize = '\0';
      CultureAgnosticFormattingRules.SecondaryGroupingSize = '\0';
      FNumberFormattingOptions::FNumberFormattingOptions
                (&CultureAgnosticFormattingRules.CultureDefaultFormattingOptions);
      builtin_wcsncpy(CultureAgnosticFormattingRules.DigitCharacters,L"0123456789",10);
      ::FString::operator=(&CultureAgnosticFormattingRules.NaNString,L"NaN");
      ::FString::operator=(&CultureAgnosticFormattingRules.NegativePrefixString,L"-");
      ::FString::operator=(&CultureAgnosticFormattingRules.PlusString,L"+");
      ::FString::operator=(&CultureAgnosticFormattingRules.MinusString,L"-");
      CultureAgnosticFormattingRules.GroupingSeparatorCharacter = L',';
      CultureAgnosticFormattingRules.DecimalSeparatorCharacter = L'.';
      CultureAgnosticFormattingRules.PrimaryGroupingSize = '\x03';
      CultureAgnosticFormattingRules.SecondaryGroupingSize = '\x03';
      atexit(`FastDecimalFormat::GetCultureAgnosticFormattingRules'::__l2::
             _dynamic_atexit_destructor_for__CultureAgnosticFormattingRules__);
      _Init_thread_footer(&::_TSS0);
      return &CultureAgnosticFormattingRules;
    }
  }
  return &CultureAgnosticFormattingRules;
}

// GetFrameMemoryStats @ 1416f8520

FPlatformMemoryStats * __cdecl
PlatformMemoryHelpers::GetFrameMemoryStats(FPlatformMemoryStats *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulong64 uVar5;
  undefined7 uVar6;
  bool bVar7;
  FPlatformMemoryStats *pFVar8;
  FPlatformMemoryStats local_98;
  
  bVar7 = IsInGameThread();
  if (!bVar7) {
    FWindowsPlatformMemory::GetStats(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (GFrameCounter != CachedMemoryStatsAtFrame) {
    CachedMemoryStatsAtFrame = GFrameCounter;
    pFVar8 = FWindowsPlatformMemory::GetStats(&local_98);
    CachedMemoryStats._padding_._0_4_ = (undefined4)pFVar8->_padding_;
    CachedMemoryStats._padding_._4_4_ = *(undefined4 *)((longlong)&pFVar8->_padding_ + 4);
    CachedMemoryStats._padding_._0_4_ = (undefined4)pFVar8->_padding_;
    CachedMemoryStats._padding_._4_4_ = *(undefined4 *)((longlong)&pFVar8->_padding_ + 4);
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats._padding_ = pFVar8->_padding_;
    CachedMemoryStats.WindowsSpecificMemoryStat = pFVar8->WindowsSpecificMemoryStat;
    CachedMemoryStats.MemoryPressureStatus = pFVar8->MemoryPressureStatus;
    CachedMemoryStats._129_7_ = *(undefined7 *)&pFVar8->field_0x81;
  }
  uVar3 = CachedMemoryStats._padding_._4_4_;
  uVar2 = (undefined4)CachedMemoryStats._padding_;
  uVar1 = CachedMemoryStats._padding_._4_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)CachedMemoryStats._padding_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = uVar3;
  lVar4 = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = CachedMemoryStats._padding_;
  __return_storage_ptr__->_padding_ = lVar4;
  uVar5 = CachedMemoryStats.WindowsSpecificMemoryStat;
  __return_storage_ptr__->_padding_ = CachedMemoryStats._padding_;
  __return_storage_ptr__->WindowsSpecificMemoryStat = uVar5;
  uVar6 = CachedMemoryStats._129_7_;
  __return_storage_ptr__->MemoryPressureStatus = CachedMemoryStats.MemoryPressureStatus;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar6;
  return __return_storage_ptr__;
}

// GetHangulTextWrappingMethod @ 1416f8660

EHangulTextWrappingMethod __cdecl GetHangulTextWrappingMethod(void)

{
  uint uVar1;
  EHangulTextWrappingMethod EVar2;
  
  uVar1 = (**(code **)(*(longlong *)CVarHangulTextWrappingMethod._padding_ + 200))();
  EVar2 = PerWord;
  if (uVar1 < 2) {
    EVar2 = (EHangulTextWrappingMethod)uVar1;
  }
  return EVar2;
}

// GetInvariantLocale @ 1416f8830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Locale * __cdecl `anonymous_namespace'::GetInvariantLocale(void)

{
  Locale *pLVar1;
  undefined1 auStackY_128 [32];
  Locale local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `GetInvariantLocale'::`2'::_TSS0) &&
     (_Init_thread_header(&`GetInvariantLocale'::`2'::_TSS0), `GetInvariantLocale'::`2'::_TSS0 == -1
     )) {
    icu_64::Locale::Locale
              (&`GetInvariantLocale'::`2'::InvariantLocale,"en-US-POSIX",(char *)0x0,(char *)0x0,
               (char *)0x0);
    if (`GetInvariantLocale'::`2'::InvariantLocale.fIsBogus != '\0') {
      pLVar1 = (Locale *)icu_64::Locale::Locale(&local_f8);
      icu_64::Locale::operator=(&`GetInvariantLocale'::`2'::InvariantLocale,pLVar1);
      icu_64::Locale::~Locale(&local_f8);
    }
    atexit(``anonymous_namespace'::GetInvariantLocale'::__l2::
           _dynamic_atexit_destructor_for__InvariantLocale__);
    _Init_thread_footer(&`GetInvariantLocale'::`2'::_TSS0);
  }
  return &`GetInvariantLocale'::`2'::InvariantLocale;
}

// GetParagraphDirection @ 1416f97d0

uchar __cdecl TextBiDi::Internal::GetParagraphDirection(ETextDirection param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if (param_1 == Mixed) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBaseDirection != ETextDirection::Mixed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                       ,0x10b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return param_1 != LeftToRight;
}

// ICUPluralFormToUE @ 1416fda90

ETextPluralForm __cdecl ICUPluralFormToUE(UnicodeString *param_1)

{
  short sVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    icu_64::UnicodeString::UnicodeString(&ZeroStr,"zero");
    atexit(`ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__ZeroStr__);
    _Init_thread_footer(&_TSS0);
  }
  if ((*piVar5 < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    icu_64::UnicodeString::UnicodeString(&OneStr,"one");
    atexit(`ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__OneStr__);
    _Init_thread_footer(&_TSS1);
  }
  if ((*piVar5 < _TSS2) && (_Init_thread_header(&_TSS2), _TSS2 == -1)) {
    icu_64::UnicodeString::UnicodeString(&TwoStr,"two");
    atexit(`ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__TwoStr__);
    _Init_thread_footer(&_TSS2);
  }
  if ((*piVar5 < _TSS3) && (_Init_thread_header(&_TSS3), _TSS3 == -1)) {
    icu_64::UnicodeString::UnicodeString(&FewStr,"few");
    atexit(`ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__FewStr__);
    _Init_thread_footer(&_TSS3);
  }
  if ((*piVar5 < _TSS4) && (_Init_thread_header(&_TSS4), _TSS4 == -1)) {
    icu_64::UnicodeString::UnicodeString(&ManyStr,"many");
    atexit(`ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__ManyStr__);
    _Init_thread_footer(&_TSS4);
  }
  if ((*piVar5 < _TSS5) && (_Init_thread_header(&_TSS5), _TSS5 == -1)) {
    icu_64::UnicodeString::UnicodeString(&OtherStr,"other");
    atexit(`ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__OtherStr__);
    _Init_thread_footer(&_TSS5);
  }
  if ((*(byte *)&param_1->fUnion & 1) == 0) {
    sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
    if (sVar1 >> 7 == 0) {
      iVar6 = (int)sVar1 >> 5;
    }
    else {
      iVar6 = (param_1->fUnion).fFields.fLength;
    }
    uVar4 = (uint)ZeroStr.fUnion.fStackFields.fLengthAndFlags;
    uVar3 = ZeroStr.fUnion.fFields.fLength;
    if (-1 < (int)uVar4) {
      uVar3 = (int)uVar4 >> 5;
    }
    if (((uVar4 & 1) == 0) && (iVar6 == uVar3)) {
      bVar2 = icu_64::UnicodeString::doEquals(param_1,&ZeroStr,iVar6);
      goto LAB_1416fdb6c;
    }
  }
  else {
    bVar2 = ZeroStr.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1;
LAB_1416fdb6c:
    if (bVar2 != 0) {
      return Zero;
    }
  }
  if ((*(byte *)&param_1->fUnion & 1) == 0) {
    sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
    if (sVar1 >> 7 == 0) {
      iVar6 = (int)sVar1 >> 5;
    }
    else {
      iVar6 = (param_1->fUnion).fFields.fLength;
    }
    uVar4 = (uint)OneStr.fUnion.fStackFields.fLengthAndFlags;
    uVar3 = OneStr.fUnion.fFields.fLength;
    if (-1 < (int)uVar4) {
      uVar3 = (int)uVar4 >> 5;
    }
    if (((uVar4 & 1) == 0) && (iVar6 == uVar3)) {
      bVar2 = icu_64::UnicodeString::doEquals(param_1,&OneStr,iVar6);
      goto LAB_1416fdbdb;
    }
  }
  else {
    bVar2 = OneStr.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1;
LAB_1416fdbdb:
    if (bVar2 != 0) {
      return One;
    }
  }
  if ((*(byte *)&param_1->fUnion & 1) == 0) {
    sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
    if (sVar1 >> 7 == 0) {
      iVar6 = (int)sVar1 >> 5;
    }
    else {
      iVar6 = (param_1->fUnion).fFields.fLength;
    }
    uVar4 = (uint)TwoStr.fUnion.fStackFields.fLengthAndFlags;
    uVar3 = TwoStr.fUnion.fFields.fLength;
    if (-1 < (int)uVar4) {
      uVar3 = (int)uVar4 >> 5;
    }
    if (((uVar4 & 1) == 0) && (iVar6 == uVar3)) {
      bVar2 = icu_64::UnicodeString::doEquals(param_1,&TwoStr,iVar6);
      goto LAB_1416fdc4a;
    }
  }
  else {
    bVar2 = TwoStr.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1;
LAB_1416fdc4a:
    if (bVar2 != 0) {
      return Two;
    }
  }
  if ((*(byte *)&param_1->fUnion & 1) == 0) {
    sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
    if (sVar1 >> 7 == 0) {
      iVar6 = (int)sVar1 >> 5;
    }
    else {
      iVar6 = (param_1->fUnion).fFields.fLength;
    }
    uVar4 = (uint)FewStr.fUnion.fStackFields.fLengthAndFlags;
    uVar3 = FewStr.fUnion.fFields.fLength;
    if (-1 < (int)uVar4) {
      uVar3 = (int)uVar4 >> 5;
    }
    if (((uVar4 & 1) == 0) && (iVar6 == uVar3)) {
      bVar2 = icu_64::UnicodeString::doEquals(param_1,&FewStr,iVar6);
      goto LAB_1416fdcb9;
    }
  }
  else {
    bVar2 = FewStr.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1;
LAB_1416fdcb9:
    if (bVar2 != 0) {
      return Few;
    }
  }
  if ((*(byte *)&param_1->fUnion & 1) == 0) {
    sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
    if (sVar1 >> 7 == 0) {
      iVar6 = (int)sVar1 >> 5;
    }
    else {
      iVar6 = (param_1->fUnion).fFields.fLength;
    }
    uVar4 = (uint)ManyStr.fUnion.fStackFields.fLengthAndFlags;
    uVar3 = ManyStr.fUnion.fFields.fLength;
    if (-1 < (int)uVar4) {
      uVar3 = (int)uVar4 >> 5;
    }
    if (((uVar4 & 1) == 0) && (iVar6 == uVar3)) {
      bVar2 = icu_64::UnicodeString::doEquals(param_1,&ManyStr,iVar6);
      goto LAB_1416fdd28;
    }
  }
  else {
    bVar2 = ManyStr.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1;
LAB_1416fdd28:
    if (bVar2 != 0) {
      return Many;
    }
  }
  if ((*(byte *)&param_1->fUnion & 1) == 0) {
    sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
    if (sVar1 >> 7 == 0) {
      iVar6 = (int)sVar1 >> 5;
    }
    else {
      iVar6 = (param_1->fUnion).fFields.fLength;
    }
    uVar4 = (uint)OtherStr.fUnion.fStackFields.fLengthAndFlags;
    uVar3 = OtherStr.fUnion.fFields.fLength;
    if (-1 < (int)uVar4) {
      uVar3 = (int)uVar4 >> 5;
    }
    if (((uVar4 & 1) != 0) || (iVar6 != uVar3)) goto LAB_1416fdd99;
    bVar2 = icu_64::UnicodeString::doEquals(param_1,&OtherStr,iVar6);
  }
  else {
    bVar2 = OtherStr.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1;
  }
  if (bVar2 != 0) {
    return Other;
  }
LAB_1416fdd99:
  `ICUPluralFormToUE'::__l2::<lambda_1>::operator()(local_res8);
  return Other;
}

// ICUPluralRulesToUEValidPluralForms @ 1416fdf70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> * __cdecl
ICUPluralRulesToUEValidPluralForms
          (TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          PluralRules *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *pTVar5;
  StringEnumeration *pSVar6;
  UnicodeString *pUVar7;
  FIdentityFunctor local_res8 [8];
  UErrorCode local_res10 [2];
  FScriptContainerElement local_28 [16];
  
  if ((param_1 == (PluralRules *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InICUPluralRules",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0xb2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  local_res10[0] = U_ZERO_ERROR;
  pSVar6 = icu_64::PluralRules::getKeywords(param_1,local_res10);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (pSVar6 != (StringEnumeration *)0x0) {
    pUVar7 = (UnicodeString *)(**(code **)(pSVar6->_padding_ + 0x30))(pSVar6,local_res10);
    while (pUVar7 != (UnicodeString *)0x0) {
      local_28[0] = (FScriptContainerElement)ICUPluralFormToUE(pUVar7);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= local_28) && (local_28 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar4] = local_28[0];
      pUVar7 = (UnicodeString *)(**(code **)(pSVar6->_padding_ + 0x30))(pSVar6,local_res10);
    }
    (**(code **)pSVar6->_padding_)(pSVar6,1);
  }
  AlgoImpl::
  IntroSortInternal<enum_ETextPluralForm,int,FIdentityFunctor,TDereferenceWrapper<enum_ETextPluralForm,TLess<void>_>_>
            ((ETextPluralForm *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  return __return_storage_ptr__;
}

// IntegralToString @ 1417011a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FastDecimalFormat::Internal::IntegralToString
          (bool param_1,ulong64 param_2,FDecimalNumberFormattingRules *param_3,
          FNumberFormattingOptions *param_4,FString *param_5)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_168 [32];
  wchar_t local_108 [48];
  wchar_t local_a8 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar2 = param_4->MinimumIntegralDigits;
  if (param_4->MinimumIntegralDigits < 0) {
    uVar2 = 0;
  }
  uVar7 = param_4->MinimumFractionalDigits;
  if (param_4->MinimumFractionalDigits < 0) {
    uVar7 = 0;
  }
  uVar6 = param_4->MaximumIntegralDigits;
  if (param_4->MaximumIntegralDigits < (int)uVar2) {
    uVar6 = uVar2;
  }
  if ((param_4->UseGrouping == false) || (param_3->PrimaryGroupingSize == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  iVar3 = IntegralToString_UInt64ToString
                    (param_2,bVar5,param_3->PrimaryGroupingSize,param_3->SecondaryGroupingSize,
                     param_3->MinimumGroupingDigits,param_3->GroupingSeparatorCharacter,
                     param_3->DigitCharacters,uVar2,uVar6,local_a8,0x29);
  uVar2 = 0;
  if (0 < (int)uVar7) {
    uVar6 = 0x12;
    if ((int)uVar7 < 0x12) {
      uVar6 = uVar7;
    }
    uVar2 = 0;
    if (0 < (int)uVar6) {
      wVar1 = param_3->DigitCharacters[0];
      pwVar8 = local_108;
      for (uVar4 = (ulonglong)uVar6; uVar2 = uVar6, uVar4 != 0; uVar4 = uVar4 - 1) {
        *pwVar8 = wVar1;
        pwVar8 = pwVar8 + 1;
      }
    }
  }
  if (0x51 < (ulonglong)((longlong)(int)uVar2 * 2)) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  bVar5 = param_4->AlwaysSign;
  local_108[(int)uVar2] = L'\0';
  BuildFinalString(param_1,bVar5,param_3,local_a8,iVar3,local_108,uVar2,param_5);
  return;
}

// IntegralToString_UInt64ToString @ 141701300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FastDecimalFormat::Internal::IntegralToString_UInt64ToString
          (ulong64 param_1,bool param_2,uchar param_3,uchar param_4,uchar param_5,wchar_t param_6,
          wchar_t *param_7,int param_8,int param_9,wchar_t *param_10,int param_11)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar uVar5;
  uchar uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_c8 [46];
  wchar_t wStack_9a;
  wchar_t local_98;
  undefined1 local_96 [94];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((param_11 < 0x29) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBufferToFillSize >= MinRequiredIntegralBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\FastDecimalFormat.cpp"
                         ,0xb3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar13 = 0;
  uVar6 = param_3;
  iVar4 = 0;
  iVar9 = iVar13;
  if ((param_1 != 0) && (iVar4 = 0, iVar9 = 0, 0 < param_9)) {
    pwVar8 = &local_98;
    uVar5 = param_3;
    iVar9 = iVar13;
    iVar4 = iVar13;
    do {
      uVar6 = uVar5;
      if (param_1 == 0) break;
      if ((param_2) && (uVar6 = uVar5 + 0xff, uVar5 == '\0')) {
        iVar9 = iVar9 + 1;
        *pwVar8 = param_6;
        pwVar8 = pwVar8 + 1;
        uVar6 = param_4 + 0xff;
      }
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + 1;
      *pwVar8 = param_7[param_1 % 10];
      pwVar8 = pwVar8 + 1;
      param_1 = param_1 / 10;
      uVar5 = uVar6;
    } while (iVar4 < param_9);
  }
  lVar7 = 0;
  uVar12 = 0x14U - iVar4;
  if (param_8 - iVar4 < (int)(0x14U - iVar4)) {
    uVar12 = param_8 - iVar4;
  }
  if (0 < (int)uVar12) {
    wVar1 = *param_7;
    iVar4 = iVar4 + uVar12;
    uVar10 = (ulonglong)uVar12;
    pwVar8 = (wchar_t *)(local_96 + (longlong)iVar9 * 2 + -2);
    do {
      if ((param_2) && (bVar3 = uVar6 == '\0', uVar6 = uVar6 + 0xff, bVar3)) {
        iVar9 = iVar9 + 1;
        *pwVar8 = param_6;
        pwVar8 = pwVar8 + 1;
        uVar6 = param_4;
      }
      *pwVar8 = wVar1;
      iVar9 = iVar9 + 1;
      pwVar8 = pwVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (((param_2) && ((int)(uint)param_3 < iVar4)) && (iVar4 < (int)((uint)param_5 + (uint)param_3)))
  {
    memmove(local_96 + (ulonglong)param_3 * 2 + -2,local_96 + (ulonglong)param_3 * 2,
            (longlong)(int)((iVar9 - (uint)param_3) + -1));
    iVar9 = iVar9 + -1;
  }
  lVar11 = (longlong)iVar9;
  if (0 < iVar9) {
    pwVar8 = &wStack_9a + lVar11;
    do {
      wVar1 = *pwVar8;
      pwVar8 = pwVar8 + -1;
      param_10[lVar7] = wVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar11);
  }
  param_10[lVar11] = L'\0';
  return iVar9;
}

// IsAudioThreadRunning @ 141701590

bool __cdecl IsAudioThreadRunning(void)

{
  if ((GIsAudioThreadRunning != (atomic<bool>)0x0) && (GIsAudioThreadSuspended == (atomic<bool>)0x0)
     ) {
    return true;
  }
  return false;
}

// IsInActualLoadingThread @ 141701fe0

bool __cdecl IsInActualLoadingThread(void)

{
  bool bVar1;
  
  bVar1 = (*IsInAsyncLoadingThread)();
  if (bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// IsInActualRenderingThread @ 141702010

bool __cdecl IsInActualRenderingThread(void)

{
  DWORD DVar1;
  char local_res8 [8];
  undefined1 local_res10 [24];
  undefined1 *local_18;
  char *local_10;
  
  local_res8[0] =
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9f0) == 0x10;
  DVar1 = GetCurrentThreadId();
  local_res10[0] = DVar1 == GRenderThreadId;
  if (local_res10[0] != local_res8[0]) {
    local_18 = local_res10;
    local_10 = local_res8;
    `IsInActualRenderingThread'::__l3::<lambda_1>::operator()(&local_18);
  }
  return (bool)local_res10[0];
}

// IsInAnyRenderingThread @ 141702080

bool __cdecl IsInAnyRenderingThread(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9f0);
  if ((iVar1 != 0x40000010) && (((iVar1 - 0x10U & 0xbfffffef) != 0 || (iVar1 == 0x40000010)))) {
    return false;
  }
  return true;
}

// IsInAudioThread @ 1417020d0

bool __cdecl IsInAudioThread(void)

{
  bool bVar1;
  
  if ((GIsAudioThreadRunning != (atomic<bool>)0x0) && (GIsAudioThreadSuspended == (atomic<bool>)0x0)
     ) {
    bVar1 = UE::Tasks::FPipe::IsInContext(&GAudioPipe);
    return bVar1;
  }
  bVar1 = IsInGameThread();
  return bVar1;
}

// IsInGameThread @ 141702100

bool __cdecl IsInGameThread(void)

{
  bool bVar1;
  DWORD DVar2;
  char local_res8 [8];
  undefined1 local_res10 [24];
  undefined1 *local_18;
  char *local_10;
  
  if (!GIsGameThreadIdInitialized) {
    return true;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9f0) != 2) {
    bVar1 = FTaskTagScope::IsRunningDuringStaticInit();
    local_res8[0] = '\0';
    if (!bVar1) goto LAB_14170213a;
  }
  local_res8[0] = '\x01';
LAB_14170213a:
  bVar1 = UE::Tasks::Private::IsThreadRetractingTask();
  if (bVar1) {
    return (bool)local_res8[0];
  }
  DVar2 = GetCurrentThreadId();
  local_res10[0] = DVar2 == GGameThreadId;
  if (local_res10[0] == local_res8[0]) {
    return (bool)local_res10[0];
  }
  local_18 = local_res10;
  local_10 = local_res8;
  `IsInGameThread'::__l8::<lambda_1>::operator()(&local_18);
  return (bool)local_res10[0];
}

// IsInParallelGameThread @ 1417021a0

bool __cdecl IsInParallelGameThread(void)

{
  return *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9f0) == 0x40000002;
}

// IsInParallelLoadingThread @ 1417021d0

bool __cdecl IsInParallelLoadingThread(void)

{
  return *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9f0) == 0x40000040;
}

// IsInParallelRHIThread @ 141702200

bool __cdecl IsInParallelRHIThread(void)

{
  return (bool)((byte)(*(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x9f0) >> 5) & 1);
}

// IsInParallelRenderingThread @ 141702230

bool __cdecl IsInParallelRenderingThread(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  DWORD DVar4;
  char local_res8 [8];
  undefined1 local_res10 [24];
  undefined1 *local_18;
  char *local_10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (GRenderThreadId == 0) {
    iVar1 = *(int *)(lVar2 + 0x9f0);
    if ((iVar1 != 0x10) && ((iVar1 != 2 && (iVar1 != 0x40000010)))) {
LAB_1417022a8:
      local_res8[0] = '\0';
      goto LAB_14170226b;
    }
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x9f0);
    if ((iVar1 != 0x40000010) && (((iVar1 - 0x10U & 0xbfffffef) != 0 || (iVar1 == 0x40000010))))
    goto LAB_1417022a8;
  }
  local_res8[0] = '\x01';
LAB_14170226b:
  bVar3 = UE::Tasks::Private::IsThreadRetractingTask();
  local_res10[0] = local_res8[0];
  if (!bVar3) {
    DVar4 = GetCurrentThreadId();
    local_res10[0] = GRenderThreadId == 0 || DVar4 != GGameThreadId;
    if (local_res10[0] != local_res8[0]) {
      local_18 = local_res10;
      local_10 = local_res8;
      `IsInParallelRenderingThread'::__l10::<lambda_1>::operator()(&local_18);
      return (bool)local_res10[0];
    }
  }
  return (bool)local_res10[0];
}

// IsInRHIThread @ 141702300

bool __cdecl IsInRHIThread(void)

{
  return *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9f0) == 0x20;
}

// IsInRenderingThread @ 141702330

bool __cdecl IsInRenderingThread(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  DWORD DVar4;
  char local_res8 [8];
  char local_res10 [24];
  undefined1 *local_18;
  char *local_10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (GRenderThreadId == 0) {
    iVar1 = *(int *)(lVar2 + 0x9f0);
    if (((iVar1 == 2) || (iVar1 == 0x10)) ||
       (bVar3 = FTaskTagScope::IsRunningDuringStaticInit(), local_res8[0] = false, bVar3)) {
      local_res8[0] = true;
    }
  }
  else {
    local_res8[0] = *(int *)(lVar2 + 0x9f0) == 0x10;
  }
  bVar3 = UE::Tasks::Private::IsThreadRetractingTask();
  local_res10[0] = local_res8[0];
  if (!bVar3) {
    DVar4 = GetCurrentThreadId();
    if (GRenderThreadId == 0) {
      if ((DVar4 == GGameThreadId) ||
         (bVar3 = FTaskTagScope::IsRunningDuringStaticInit(), local_res10[0] = false, bVar3)) {
        local_res10[0] = true;
      }
    }
    else {
      local_res10[0] = DVar4 == GRenderThreadId;
    }
    if (local_res10[0] != local_res8[0]) {
      local_18 = local_res10;
      local_10 = local_res8;
      `IsInRenderingThread'::__l5::<lambda_1>::operator()(&local_18);
      return (bool)local_res10[0];
    }
  }
  return (bool)local_res10[0];
}

// IsInSlateThread @ 1417023f0

bool __cdecl IsInSlateThread(void)

{
  bool bVar1;
  DWORD DVar2;
  char local_res8 [8];
  char local_res10 [24];
  char *local_18;
  char *local_10;
  
  local_res8[0] =
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9f0) == 4;
  bVar1 = UE::Tasks::Private::IsThreadRetractingTask();
  local_res10[0] = local_res8[0];
  if (!bVar1) {
    if ((GSlateLoadingThreadId == 0) ||
       (DVar2 = GetCurrentThreadId(), DVar2 != GSlateLoadingThreadId)) {
      local_res10[0] = '\0';
    }
    else {
      local_res10[0] = '\x01';
    }
    if (local_res10[0] != local_res8[0]) {
      local_18 = local_res10;
      local_10 = local_res8;
      `IsInSlateThread'::__l5::<lambda_1>::operator()(&local_18);
      return (bool)local_res10[0];
    }
  }
  return (bool)local_res10[0];
}

// IsInWorkerThread @ 141702480

bool __cdecl IsInWorkerThread(void)

{
  bool bVar1;
  
  bVar1 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                    ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  return bVar1;
}

// IsRHIThreadRunning @ 141702640

bool __cdecl IsRHIThreadRunning(void)

{
  return GIsRunningRHIInDedicatedThread_InternalUseOnly;
}

// LexToString @ 141703d80

FString * __cdecl LexToString(FString *__return_storage_ptr__,FBlake3Hash *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x41,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = 0x20;
  local_18.DataPtr = param_1->Hash;
  UE::String::BytesToHexLower
            (&local_18,(wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
  uVar7 = *piVar2 - 1;
  uVar5 = 0;
  if ((int)uVar7 < *piVar2) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  *(undefined2 *)
   ((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)*piVar2 * 2 + -2) = 0;
  return __return_storage_ptr__;
}

// LoadInternationalizationConfigArray @ 141703fd0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
LoadInternationalizationConfigArray
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GConfig && GConfig->IsReadyForUse()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUInternationalization.cpp"
                       ,0x198,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"Internationalization",param_1,__return_storage_ptr__,&GEngineIni);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FConfigCacheIni::GetArray(GConfig,L"Internationalization",param_1,&local_18,&GGameIni);
  if (__return_storage_ptr__ == &local_18) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  lVar5 = (longlong)local_18.ArrayNum;
  if (local_18.ArrayNum != 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_18.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10,
            local_18.AllocatorInstance.Data,lVar5 << 4);
    local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,0);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LogMemoryDiff @ 141704150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
MemoryMiscInternal::LogMemoryDiff
          (wchar_t *param_1,FPlatformMemoryStats *param_2,FPlatformMemoryStats *param_3)

{
  if (4 < (byte)LogMemory._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  return;
}

// MallocStompOverrunTest @ 1417048b0

void __cdecl MallocStompOverrunTest(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(4);
  *(undefined1 *)((longlong)pvVar1 + 0x15) = 0;
  return;
}

// Pow10 @ 141708580

ulong64 __cdecl FastDecimalFormat::Pow10(int param_1)

{
  int iVar1;
  
  iVar1 = 0x12;
  if (param_1 < 0x12) {
    iVar1 = param_1;
  }
  return Internal::Pow10Table[iVar1];
}

// SanitizeCultureCode @ 14170f910

FString * __cdecl
InternationalizationUtilities::SanitizeCultureCode(FString *__return_storage_ptr__,FString *param_1)

{
  short sVar1;
  ushort uVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_30 = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_30;
  if (local_30 < 2) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,local_30,0,&local_38,local_30,&local_2c);
  memcpy(local_38.Data,_Src,lVar8 * 2);
  FVar3.Data = local_38.Data;
  lVar8 = (longlong)local_30;
  iVar9 = 0;
  if (local_30 != 0) {
    iVar9 = 0;
    sVar1 = *(short *)local_38.Data;
    if ((sVar1 == 0) ||
       ((((ushort)(sVar1 - 0x2dU) < 0x33 &&
         ((0x43ffffff95ffbU >> ((ulonglong)(ushort)(sVar1 - 0x2dU) & 0x3f) & 1) != 0)) ||
        ((ushort)(sVar1 - 0x61U) < 0x1a)))) {
      bVar10 = 1;
    }
    else {
      bVar10 = 0;
    }
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar7 + 1;
        if (lVar8 <= lVar5) break;
        uVar2 = *(ushort *)(FVar3.Data + lVar5 * 2);
        if (((uVar2 == 0) ||
            (((ushort)(uVar2 - 0x2d) < 0x33 &&
             ((0x43ffffff95ffbU >> ((ulonglong)(uVar2 - 0x2d & 0xffff) & 0x3f) & 1) != 0)))) ||
           ((ushort)(uVar2 - 0x61) < 0x1a)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
      } while (bVar10 == bVar4);
      if (bVar10 != 0) {
        if (iVar9 != iVar6) {
          memmove(FVar3.Data + (longlong)iVar9 * 2,FVar3.Data + (longlong)iVar6 * 2,
                  (longlong)(iVar7 - iVar6) * 2);
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar10 = bVar10 ^ 1;
      iVar6 = iVar7;
    } while (lVar5 < lVar8);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_2c;
  (__return_storage_ptr__->Data).ArrayNum = iVar9;
  return __return_storage_ptr__;
}

// SanitizeCurrencyCode @ 14170fae0

FString * __cdecl
InternationalizationUtilities::SanitizeCurrencyCode
          (FString *__return_storage_ptr__,FString *param_1)

{
  short sVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_30 = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_30;
  if (local_30 < 2) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,local_30,0,&local_38,local_30,&local_2c);
  memcpy(local_38.Data,_Src,lVar8 * 2);
  FVar2.Data = local_38.Data;
  lVar8 = (longlong)local_30;
  iVar5 = 0;
  iVar9 = 0;
  if (local_30 != 0) {
    iVar9 = 0;
    sVar1 = *(short *)local_38.Data;
    if (sVar1 == 0) {
      bVar10 = 1;
    }
    else if (((ushort)(sVar1 - 0x41U) < 0x1a) || ((ushort)(sVar1 - 0x61U) < 0x1a)) {
      iVar5 = 1;
      bVar10 = 1;
    }
    else {
      bVar10 = 0;
      iVar5 = 0;
    }
    lVar4 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar7 + 1;
        if (lVar8 <= lVar4) break;
        sVar1 = *(short *)(FVar2.Data + lVar4 * 2);
        if ((sVar1 == 0) ||
           ((((ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a)) &&
            (iVar5 = iVar5 + 1, iVar5 < 4)))) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
      } while (bVar10 == bVar3);
      if (bVar10 != 0) {
        if (iVar9 != iVar6) {
          memmove(FVar2.Data + (longlong)iVar9 * 2,FVar2.Data + (longlong)iVar6 * 2,
                  (longlong)(iVar7 - iVar6) * 2);
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar10 = bVar10 ^ 1;
      iVar6 = iVar7;
    } while (lVar4 < lVar8);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_2c;
  (__return_storage_ptr__->Data).ArrayNum = iVar9;
  return __return_storage_ptr__;
}

// SanitizeNumberFormattingOptions @ 14170fcb0

void __cdecl
FastDecimalFormat::Internal::SanitizeNumberFormattingOptions(FNumberFormattingOptions *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->MinimumIntegralDigits;
  iVar2 = param_1->MinimumFractionalDigits;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  param_1->MinimumIntegralDigits = iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  param_1->MinimumFractionalDigits = iVar2;
  iVar1 = param_1->MaximumIntegralDigits;
  if (param_1->MaximumIntegralDigits < iVar3) {
    iVar1 = iVar3;
  }
  param_1->MaximumIntegralDigits = iVar1;
  iVar3 = param_1->MaximumFractionalDigits;
  if (param_1->MaximumFractionalDigits < iVar2) {
    iVar3 = iVar2;
  }
  param_1->MaximumFractionalDigits = iVar3;
  return;
}

// SanitizeTimezoneCode @ 14170fcf0

FString * __cdecl
InternationalizationUtilities::SanitizeTimezoneCode
          (FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  int local_res10 [2];
  <lambda_1> local_res18;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = (param_1->Data).ArrayNum;
  lVar1 = (longlong)local_18.ArrayNum;
  if (local_18.ArrayNum < 2) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
             &local_18.ArrayMax);
  memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 * 2);
  local_res18.NumValidChars = local_res10;
  local_res10[0] = 0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::
  RemoveAll<_InternationalizationUtilities::SanitizeTimezoneCode_::__l6::<lambda_1>_>
            (&local_18,&local_res18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// SerializeLocMetadataValue @ 141710350

void __cdecl
`anonymous_namespace'::SerializeLocMetadataValue
          (FStructuredArchiveSlot param_1,TSharedPtr<FLocMetadataValue,1> *param_2)

{
  int iVar1;
  uint *puVar2;
  FFastPathLoadBuffer *pFVar3;
  code *pcVar4;
  FSlotBase FVar5;
  bool bVar6;
  FArchive *pFVar7;
  FLocMetadataValueArray *pFVar8;
  FLocMetadataValueArray *pFVar9;
  FArchiveState *pFVar10;
  FLocMetadataValue *pFVar11;
  FLocMetadataValueArray *pFVar12;
  FLocMetadataValueArray *pFVar13;
  longlong lVar14;
  byte bVar15;
  FLocMetadataValue FVar16;
  FLocMetadataValue FVar17;
  FSlotBase local_res8;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  FSlotBase local_90;
  FString local_88;
  FSlotBase local_78;
  FSlotBase local_70;
  FSlotBase local_68;
  FSlotBase local_60;
  FSlotBase local_58;
  FSlotBase local_50;
  TRawPtrProxy<FLocMetadataValueObject> local_48;
  TRawPtrProxy<FLocMetadataValueArray> local_40;
  TRawPtrProxy<FLocMetadataValueString> local_38;
  TRawPtrProxy<FLocMetadataValueBoolean> local_30;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  pFVar12 = (FLocMetadataValueArray *)0x0;
  bVar15 = pFVar7->field_0x28 & 1;
  local_res20[0] = 0;
  if (bVar15 == 0) {
    if ((param_2->Object == (FLocMetadataValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                           ,0x129,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_2->Object == (FLocMetadataValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20[0] = (**(code **)((longlong)*param_2->Object + 0x38))();
  }
  else if ((param_2->Object != (FLocMetadataValue *)0x0) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Value.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                              ,0x125,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res20);
    }
  }
  else {
    local_res20[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  if (local_res20[0] == 1) {
    if (bVar15 != 0) {
      pFVar8 = ::operator_new(0x10);
      if (pFVar8 != (FLocMetadataValueArray *)0x0) {
        pFVar8->_padding_ = (longlong)&___7FLocMetadataValueBoolean__6B_;
        local_58.StructuredArchive = (FStructuredArchive *)param_1;
        pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_58);
        if ((pFVar10->ArIsLoading == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Slot.GetArchiveState().IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                               ,0x1cb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FBinaryArchiveFormatter::Serialize
                  ((local_58.StructuredArchive)->Formatter,(bool *)&pFVar8->Value);
        pFVar12 = pFVar8;
      }
      local_30.Object = (FLocMetadataValueBoolean *)pFVar12;
      TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueBoolean>(param_2,&local_30);
      return;
    }
    pFVar11 = TSharedPtr<FLocMetadataValue,1>::operator*<FLocMetadataValue>(param_2);
    local_50.StructuredArchive = (FStructuredArchive *)param_1;
    pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_50);
    if ((pFVar10->ArIsLoading != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Slot.GetArchiveState().IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                           ,0x1d2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = (FArchiveState *)(local_50.StructuredArchive)->Formatter->Inner;
    pFVar3 = pFVar10->ActiveFPLB;
    if (pFVar3->StartFastPathLoadBuffer + 4 <= pFVar3->EndFastPathLoadBuffer) {
      pFVar3->StartFastPathLoadBuffer = pFVar3->StartFastPathLoadBuffer + 4;
      return;
    }
    local_94 = 0;
    if (pFVar10->ArIsLoading == 0) {
      local_94 = (uint)(*(char *)(pFVar11 + 1) != '\0');
    }
    (**(code **)(pFVar10->_padding_ + 0x188))(pFVar10,&local_94,4);
    if (1 < local_94) {
      FArchiveState::SetError(pFVar10);
      return;
    }
  }
  else if (local_res20[0] == 2) {
    if (bVar15 != 0) {
      pFVar8 = ::operator_new(0x18);
      if (pFVar8 != (FLocMetadataValueArray *)0x0) {
        pFVar8->_padding_ = (longlong)&___7FLocMetadataValueString__6B_;
        (pFVar8->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Value).ArrayNum = 0;
        (pFVar8->Value).ArrayMax = 0;
        local_68.StructuredArchive = (FStructuredArchive *)param_1;
        pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_68);
        if ((pFVar10->ArIsLoading == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Slot.GetArchiveState().IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                               ,0x1ac,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::operator<<((local_68.StructuredArchive)->Formatter->Inner,(FString *)&pFVar8->Value);
        pFVar12 = pFVar8;
      }
      local_38.Object = (FLocMetadataValueString *)pFVar12;
      TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueString>(param_2,&local_38);
      return;
    }
    pFVar11 = TSharedPtr<FLocMetadataValue,1>::operator*<FLocMetadataValue>(param_2);
    local_60.StructuredArchive = (FStructuredArchive *)param_1;
    pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_60);
    if ((pFVar10->ArIsLoading != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Slot.GetArchiveState().IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                           ,0x1b2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88.Data.ArrayNum = *(int *)(pFVar11 + 2);
    lVar14 = (longlong)local_88.Data.ArrayNum;
    FVar17 = pFVar11[1];
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_88.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,(void *)FVar17,lVar14 * 2);
    }
    ::operator<<((local_60.StructuredArchive)->Formatter->Inner,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      return;
    }
  }
  else if (local_res20[0] == 3) {
    if (bVar15 != 0) {
      pFVar8 = ::operator_new(0x18);
      if (pFVar8 != (FLocMetadataValueArray *)0x0) {
        pFVar12 = FLocMetadataValueArray::FLocMetadataValueArray(pFVar8,param_1);
      }
      local_40.Object = pFVar12;
      TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueArray>(param_2,&local_40);
      return;
    }
    pFVar11 = TSharedPtr<FLocMetadataValue,1>::operator*<FLocMetadataValue>(param_2);
    local_90.StructuredArchive = (FStructuredArchive *)param_1;
    pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_90);
    if ((pFVar10->ArIsLoading != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Slot.GetArchiveState().IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                           ,0x244,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_98 = *(uint *)(pFVar11 + 2);
    pFVar7 = (local_90.StructuredArchive)->Formatter->Inner;
    puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
      if ((pFVar7->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar7,&local_98);
      }
    }
    else {
      local_98 = *puVar2;
      **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
    }
    FVar5.StructuredArchive = local_90.StructuredArchive;
    iVar1 = *(int *)(pFVar11 + 2);
    FVar17 = pFVar11[1];
    FVar16 = (FLocMetadataValue)((longlong)iVar1 * 0x10 + (longlong)FVar17);
    while( true ) {
      if (*(int *)(pFVar11 + 2) != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FLocMetadataValue,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar17 == FVar16) break;
      SerializeLocMetadataValue
                ((FStructuredArchiveSlot)FVar5.StructuredArchive,
                 (TSharedPtr<FLocMetadataValue,1> *)FVar17);
      FVar17 = (FLocMetadataValue)((longlong)FVar17 + 0x10);
    }
  }
  else {
    if (local_res20[0] == 4) {
      if (bVar15 != 0) {
        pFVar8 = ::operator_new(0x18);
        if (pFVar8 != (FLocMetadataValueArray *)0x0) {
          pFVar8->_padding_ = (longlong)&___7FLocMetadataValueObject__6B_;
          local_78.StructuredArchive = (FStructuredArchive *)param_1;
          pFVar9 = ::operator_new(0x50);
          pFVar13 = pFVar12;
          if (pFVar9 != (FLocMetadataValueArray *)0x0) {
            (pFVar9->Value).ArrayNum = 0;
            (pFVar9->Value).ArrayMax = 0;
            pFVar9[1]._padding_ = 0;
            pFVar9[2].Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar9[3]._padding_ = 0;
            pFVar9->_padding_ = 0;
            (pFVar9->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar9[1].Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar9[1].Value.ArrayNum = 0;
            pFVar9[1].Value.ArrayMax = 0x80;
            *(undefined4 *)&pFVar9[2]._padding_ = 0xffffffff;
            *(undefined4 *)((longlong)&pFVar9[2]._padding_ + 4) = 0;
            pFVar9[2].Value.ArrayNum = 0;
            pFVar9[2].Value.ArrayMax = 0;
            pFVar13 = pFVar9;
          }
          (pFVar8->Value).AllocatorInstance.Data = (FScriptContainerElement *)pFVar13;
          pFVar9 = ::operator_new(0x18);
          if (pFVar9 != (FLocMetadataValueArray *)0x0) {
            *(undefined4 *)&(pFVar9->Value).AllocatorInstance.Data = 1;
            pFVar9->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_VFLocMetadataObject__U__DefaultDeleter_VFLocMetadataObject___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            *(undefined4 *)((longlong)&(pFVar9->Value).AllocatorInstance.Data + 4) = 1;
            *(FLocMetadataValueArray **)&(pFVar9->Value).ArrayNum = pFVar13;
            pFVar12 = pFVar9;
          }
          *(FLocMetadataValueArray **)&(pFVar8->Value).ArrayNum = pFVar12;
          pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_78);
          if ((pFVar10->ArIsLoading == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Slot.GetArchiveState().IsLoading()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                                 ,0x279,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar5.StructuredArchive = local_78.StructuredArchive;
          if (((pFVar8->Value).AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ::operator<<((FStructuredArchiveSlot)FVar5.StructuredArchive,
                       (FLocMetadataObject *)(pFVar8->Value).AllocatorInstance.Data);
          pFVar12 = pFVar8;
        }
        local_48.Object = (FLocMetadataValueObject *)pFVar12;
        TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueObject>(param_2,&local_48);
        return;
      }
      pFVar11 = TSharedPtr<FLocMetadataValue,1>::operator*<FLocMetadataValue>(param_2);
      local_70.StructuredArchive = (FStructuredArchive *)param_1;
      pFVar10 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_70);
      if ((pFVar10->ArIsLoading != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Slot.GetArchiveState().IsLoading()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                             ,0x280,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar5.StructuredArchive = local_70.StructuredArchive;
      if ((pFVar11[1] == (FLocMetadataValue)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::operator<<((FStructuredArchiveSlot)FVar5.StructuredArchive,(FLocMetadataObject *)pFVar11[1])
      ;
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x163,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// StringToCultureInvariantDecimal @ 141712fd0

bool __cdecl
FastDecimalFormat::Internal::StringToCultureInvariantDecimal
          (wchar_t **param_1,wchar_t *param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,FDecimalNumberSignParser *param_5,
          TStringBuilderWithBuffer<wchar_t,128> *param_6)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar7;
  wchar_t *pwVar8;
  bool local_res8 [8];
  ulonglong uVar6;
  
  if (**param_1 == L'\0') {
    return true;
  }
  bVar2 = param_4->UseGrouping;
  local_res8[0] = false;
  FDecimalNumberSignParser::ParseLeadingSign(param_5,param_1,local_res8);
  if (local_res8[0] != false) {
    if ((ulonglong)param_6->_padding_ < param_6->_padding_ + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_6,1);
    }
    *(undefined2 *)param_6->_padding_ = 0x2d;
    param_6->_padding_ = param_6->_padding_ + 2;
  }
  pwVar8 = *param_1;
  bVar7 = true;
  if (pwVar8 < param_2) {
    do {
      uVar4 = 0;
      wVar1 = *pwVar8;
      if (wVar1 == param_3->GroupingSeparatorCharacter) {
        if (bVar2 == false) {
          return false;
        }
        *param_1 = pwVar8 + 1;
      }
      else {
        if (wVar1 == param_3->DecimalSeparatorCharacter) {
          *param_1 = pwVar8 + 1;
          if ((ulonglong)param_6->_padding_ < param_6->_padding_ + 2U) {
            TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_6,1);
          }
          *(undefined2 *)param_6->_padding_ = 0x2e;
        }
        else {
          bVar7 = false;
          uVar6 = uVar4;
          while ((wVar1 != param_3->DigitCharacters[uVar4] && (wVar1 != L"0123456789"[uVar4]))) {
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            uVar4 = uVar4 + 1;
            if (9 < uVar5) goto LAB_141713142;
          }
          wVar1 = L"0123456789"[uVar4];
          *param_1 = pwVar8 + 1;
          if ((ulonglong)param_6->_padding_ < param_6->_padding_ + 2U) {
            TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_6,1);
          }
          *(wchar_t *)param_6->_padding_ = wVar1;
        }
        param_6->_padding_ = param_6->_padding_ + 2;
      }
      pwVar8 = *param_1;
    } while (pwVar8 < param_2);
    bVar7 = true;
  }
LAB_141713142:
  bVar2 = FDecimalNumberSignParser::ParseTrailingSign(param_5,param_1,local_res8);
  if (*(short *)(param_6->_padding_ + -2) != 0) {
    if ((ulonglong)param_6->_padding_ < param_6->_padding_ + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_6,1);
    }
    *(undefined2 *)param_6->_padding_ = 0;
    param_6->_padding_ = param_6->_padding_ + 2;
  }
  bVar3 = true;
  if (!bVar2) {
    bVar3 = bVar7;
  }
  return bVar3;
}

// StringToFractional @ 1417131c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FastDecimalFormat::Internal::StringToFractional
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,FDecimalNumberFractionalLimits *param_5,double *param_6,
          int *param_7)

{
  double *pdVar1;
  wchar_t wVar2;
  bool bVar3;
  FDecimalNumberFormattingRules *pFVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar15;
  FString *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  char cVar21;
  ulonglong uVar22;
  byte bVar23;
  double dVar24;
  undefined1 auStackY_378 [32];
  bool local_347;
  byte local_346;
  wchar_t *local_340;
  FDecimalNumberFormattingRules *local_338;
  wchar_t *local_330;
  wchar_t *local_328;
  int local_320;
  wchar_t *local_318;
  wchar_t *local_310;
  ulonglong local_308;
  double *local_300;
  FNumberParsingOptions *local_2f8;
  int *local_2f0;
  FDecimalNumberSignParser local_2e8;
  TStringBuilderWithBuffer<wchar_t,128> local_168;
  ulonglong local_48 [2];
  ulonglong uVar14;
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_300 = param_6;
  local_328 = param_1 + param_2;
  local_2f0 = param_7;
  local_340 = param_1;
  local_338 = param_3;
  local_320 = param_2;
  local_318 = param_1;
  local_2f8 = param_4;
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_2e8.Localized_DefaultSigned,param_3,None);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_2e8.Localized_AlwaysSigned,param_3,AlwaysSign);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_2e8.ASCII_DefaultSigned,param_3,UseASCIISigns);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_2e8.ASCII_AlwaysSigned,param_3,UseASCIISigns|AlwaysSign);
  pFVar16 = local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr;
  bVar3 = false;
  local_347 = false;
  bVar23 = -(param_4->UseClamping != false) & 0x20;
  bVar11 = -(param_4->InsideLimits != false) & 0x10;
  bVar6 = param_4->UseGrouping;
  uVar17 = 0;
  local_308 = 0;
  local_310 = L"0123456789";
  local_346 = 0;
  iVar15 = 0;
  uVar22 = uVar17;
  if (*param_1 == L'\0') {
    pwVar10 = &param_3->DecimalSeparatorCharacter;
    uVar18 = 1;
    local_330 = pwVar10;
LAB_141713898:
    local_347 = false;
    bVar11 = 0;
    cVar21 = '\0';
    if ((local_318 < param_1) && (uVar22 = 0, param_1[-1] == *pwVar10)) {
      bVar11 = 0;
      if (*param_1 == L'\0') {
        bVar23 = 1;
        uVar22 = uVar17;
      }
      else {
        iVar8 = ((local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr)->Data).ArrayNum;
        iVar7 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar7 = iVar15;
        }
        if (iVar7 < 1) {
LAB_1417138fa:
          iVar8 = ((local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr)->Data).ArrayNum;
          iVar7 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar7 = iVar15;
          }
          if (iVar7 < 1) {
LAB_141713931:
            iVar8 = ((local_2e8.Localized_AlwaysSigned.PositivePrefixStringPtr)->Data).ArrayNum;
            iVar7 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar7 = iVar15;
            }
            if (0 < iVar7) {
              if (iVar8 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)
                          ((local_2e8.Localized_AlwaysSigned.PositivePrefixStringPtr)->Data).
                          AllocatorInstance.Data;
              }
              iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
              local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr =
                   local_2e8.Localized_AlwaysSigned.PositivePrefixStringPtr;
              if (iVar8 == 0) goto LAB_141713a7b;
            }
            iVar8 = ((local_2e8.Localized_AlwaysSigned.NegativePrefixStringPtr)->Data).ArrayNum;
            iVar7 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar7 = iVar15;
            }
            if (0 < iVar7) {
              if (iVar8 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)
                          ((local_2e8.Localized_AlwaysSigned.NegativePrefixStringPtr)->Data).
                          AllocatorInstance.Data;
              }
              iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
              local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr =
                   local_2e8.Localized_AlwaysSigned.NegativePrefixStringPtr;
              if (iVar8 == 0) goto LAB_141713a78;
            }
            iVar8 = ((local_2e8.ASCII_DefaultSigned.PositivePrefixStringPtr)->Data).ArrayNum;
            iVar7 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar7 = iVar15;
            }
            if (0 < iVar7) {
              if (iVar8 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)
                          ((local_2e8.ASCII_DefaultSigned.PositivePrefixStringPtr)->Data).
                          AllocatorInstance.Data;
              }
              iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
              local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr =
                   local_2e8.ASCII_DefaultSigned.PositivePrefixStringPtr;
              if (iVar8 == 0) goto LAB_141713a7b;
            }
            iVar8 = ((local_2e8.ASCII_DefaultSigned.NegativePrefixStringPtr)->Data).ArrayNum;
            iVar7 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar7 = iVar15;
            }
            if (0 < iVar7) {
              if (iVar8 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)
                          ((local_2e8.ASCII_DefaultSigned.NegativePrefixStringPtr)->Data).
                          AllocatorInstance.Data;
              }
              iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
              local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr =
                   local_2e8.ASCII_DefaultSigned.NegativePrefixStringPtr;
              if (iVar8 == 0) goto LAB_141713a78;
            }
            iVar8 = ((local_2e8.ASCII_AlwaysSigned.PositivePrefixStringPtr)->Data).ArrayNum;
            iVar7 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar7 = iVar15;
            }
            if (0 < iVar7) {
              if (iVar8 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)
                          ((local_2e8.ASCII_AlwaysSigned.PositivePrefixStringPtr)->Data).
                          AllocatorInstance.Data;
              }
              iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
              local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr =
                   local_2e8.ASCII_AlwaysSigned.PositivePrefixStringPtr;
              if (iVar8 == 0) goto LAB_141713a7b;
            }
            iVar8 = ((local_2e8.ASCII_AlwaysSigned.NegativePrefixStringPtr)->Data).ArrayNum;
            iVar7 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar7 = iVar15;
            }
            if (0 < iVar7) {
              if (iVar8 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)
                          ((local_2e8.ASCII_AlwaysSigned.NegativePrefixStringPtr)->Data).
                          AllocatorInstance.Data;
              }
              iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
              local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr =
                   local_2e8.ASCII_AlwaysSigned.NegativePrefixStringPtr;
              if (iVar8 == 0) goto LAB_141713a78;
            }
            uVar22 = uVar17;
            iVar15 = 1;
            if (param_1 < local_328) {
              while (wVar2 = *param_1, iVar15 = 1, wVar2 != *local_330) {
                if (wVar2 == local_338->GroupingSeparatorCharacter) goto LAB_141713a8d;
                pwVar10 = L"0123456789";
                uVar14 = uVar17;
                while ((wVar2 != *(wchar_t *)
                                  ((longlong)pwVar10 + (longlong)(local_338 + -0x2009c79)) &&
                       (wVar2 != *pwVar10))) {
                  uVar12 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar12;
                  pwVar10 = pwVar10 + 1;
                  iVar15 = 0;
                  if (9 < uVar12) goto LAB_141713aed;
                }
                param_1 = param_1 + 1;
                if (bVar11 < 0x12) {
                  bVar11 = bVar11 + 1;
                  uVar22 = (longlong)(int)uVar14 + uVar22 * 10;
                }
                iVar15 = 1;
                local_340 = param_1;
                if (local_328 <= param_1) break;
              }
            }
LAB_141713aed:
            if (*param_1 == local_338->DecimalSeparatorCharacter) {
              bVar23 = 0;
            }
            else {
              bVar6 = FDecimalNumberSignParser::ParseTrailingSign(&local_2e8,&local_340,&local_347);
              bVar23 = (byte)iVar15;
              param_1 = local_340;
              cVar21 = local_347;
              if (bVar6) {
                bVar23 = 1;
              }
            }
            goto LAB_141713b4c;
          }
          if (iVar8 == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)
                      ((local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr)->Data).
                      AllocatorInstance.Data;
          }
          iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
          if (iVar8 != 0) goto LAB_141713931;
LAB_141713a78:
          cVar21 = '\x01';
          local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr =
               local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr;
        }
        else {
          if (iVar8 == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)
                      ((local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr)->Data).
                      AllocatorInstance.Data;
          }
          iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
          if (iVar8 != 0) goto LAB_1417138fa;
        }
LAB_141713a7b:
        iVar8 = ((local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr)->Data).ArrayNum;
        iVar7 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar7 = iVar15;
        }
        param_1 = param_1 + iVar7;
        uVar22 = uVar17;
LAB_141713a8d:
        bVar23 = 0;
      }
LAB_141713b4c:
      uVar18 = (ulonglong)((byte)uVar18 & bVar23);
    }
  }
  else {
    iVar8 = ((local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr)->Data).ArrayNum;
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    if (iVar7 < 1) {
LAB_14171332f:
      pFVar16 = local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr;
      iVar8 = ((local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.Localized_DefaultSigned.NegativePrefixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        if (iVar8 != 0) goto LAB_141713362;
LAB_14171348e:
        bVar3 = true;
        goto LAB_141713493;
      }
LAB_141713362:
      pFVar16 = local_2e8.Localized_AlwaysSigned.PositivePrefixStringPtr;
      iVar8 = ((local_2e8.Localized_AlwaysSigned.PositivePrefixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.Localized_AlwaysSigned.PositivePrefixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        if (iVar8 == 0) goto LAB_141713493;
      }
      pFVar16 = local_2e8.Localized_AlwaysSigned.NegativePrefixStringPtr;
      iVar8 = ((local_2e8.Localized_AlwaysSigned.NegativePrefixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.Localized_AlwaysSigned.NegativePrefixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        if (iVar8 == 0) goto LAB_14171348e;
      }
      pFVar16 = local_2e8.ASCII_DefaultSigned.PositivePrefixStringPtr;
      iVar8 = ((local_2e8.ASCII_DefaultSigned.PositivePrefixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.ASCII_DefaultSigned.PositivePrefixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        if (iVar8 == 0) goto LAB_141713493;
      }
      pFVar16 = local_2e8.ASCII_DefaultSigned.NegativePrefixStringPtr;
      iVar8 = ((local_2e8.ASCII_DefaultSigned.NegativePrefixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.ASCII_DefaultSigned.NegativePrefixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        if (iVar8 == 0) goto LAB_14171348e;
      }
      pFVar16 = local_2e8.ASCII_AlwaysSigned.PositivePrefixStringPtr;
      iVar8 = ((local_2e8.ASCII_AlwaysSigned.PositivePrefixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.ASCII_AlwaysSigned.PositivePrefixStringPtr)->Data).AllocatorInstance
                    .Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        if (iVar8 == 0) goto LAB_141713493;
      }
      pFVar16 = local_2e8.ASCII_AlwaysSigned.NegativePrefixStringPtr;
      iVar8 = ((local_2e8.ASCII_AlwaysSigned.NegativePrefixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      pwVar10 = param_1;
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)
                   ((local_2e8.ASCII_AlwaysSigned.NegativePrefixStringPtr)->Data).AllocatorInstance.
                   Data;
        }
        iVar8 = wcsncmp(param_1,pwVar9,(longlong)iVar7);
        if (iVar8 == 0) goto LAB_14171348e;
      }
    }
    else {
      if (iVar8 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)
                  ((local_2e8.Localized_DefaultSigned.PositivePrefixStringPtr)->Data).
                  AllocatorInstance.Data;
      }
      iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
      if (iVar8 != 0) goto LAB_14171332f;
LAB_141713493:
      iVar8 = (pFVar16->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      pwVar10 = param_1 + iVar7;
      local_340 = pwVar10;
    }
    pFVar4 = local_338;
    uVar14 = 1;
    uVar18 = uVar14;
    if (pwVar10 < local_328) {
      local_330 = &local_338->DecimalSeparatorCharacter;
      uVar19 = uVar17;
      do {
        wVar2 = *pwVar10;
        uVar18 = uVar14;
        if (wVar2 == local_338->DecimalSeparatorCharacter) break;
        uVar20 = uVar19;
        uVar5 = local_308;
        if (wVar2 == local_338->GroupingSeparatorCharacter) {
          if (bVar6 == false) {
            uVar18 = 0;
            param_1 = pwVar10;
            goto LAB_1417137b0;
          }
        }
        else {
          pwVar9 = L"0123456789";
          uVar13 = uVar17;
          while ((wVar2 != *(wchar_t *)
                            ((longlong)local_338 + (0x78 - (longlong)local_310) + (longlong)pwVar9)
                 && (wVar2 != *pwVar9))) {
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            pwVar9 = pwVar9 + 1;
            uVar18 = uVar17;
            if (9 < uVar12) goto LAB_1417135d9;
          }
          param_1 = pwVar10 + 1;
          if (local_346 < 0x14) {
            local_346 = local_346 + 1;
            uVar20 = (longlong)(int)uVar13 + uVar19 * 10;
            uVar5 = uVar20;
            if (((bVar23 != 0 || bVar11 != 0) && (uVar20 <= uVar19)) && (uVar19 != 0)) {
joined_r0x00014171359b:
              local_347 = true;
              if (bVar11 != 0) {
                local_347 = true;
                local_340 = param_1;
                goto LAB_1417137c8;
              }
            }
          }
          else if (bVar23 != 0 || bVar11 != 0) goto joined_r0x00014171359b;
        }
        local_308 = uVar5;
        pwVar10 = pwVar10 + 1;
        uVar19 = uVar20;
        uVar18 = uVar14;
        local_340 = pwVar10;
      } while (pwVar10 < local_328);
    }
LAB_1417135d9:
    local_330 = &local_338->DecimalSeparatorCharacter;
    param_1 = pwVar10;
    if (*pwVar10 == local_338->DecimalSeparatorCharacter) {
      param_1 = pwVar10 + 1;
      local_340 = param_1;
    }
    iVar8 = ((local_2e8.Localized_DefaultSigned.PositiveSuffixStringPtr)->Data).ArrayNum;
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = iVar15;
    }
    if (iVar7 < 1) {
LAB_14171362d:
      iVar8 = ((local_2e8.Localized_DefaultSigned.NegativeSuffixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.Localized_DefaultSigned.NegativeSuffixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        if (iVar8 != 0) goto LAB_141713660;
LAB_14171378c:
        bVar3 = true;
        local_2e8.Localized_DefaultSigned.PositiveSuffixStringPtr =
             local_2e8.Localized_DefaultSigned.NegativeSuffixStringPtr;
        goto LAB_141713791;
      }
LAB_141713660:
      iVar8 = ((local_2e8.Localized_AlwaysSigned.PositiveSuffixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.Localized_AlwaysSigned.PositiveSuffixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        local_2e8.Localized_DefaultSigned.PositiveSuffixStringPtr =
             local_2e8.Localized_AlwaysSigned.PositiveSuffixStringPtr;
        if (iVar8 == 0) goto LAB_141713791;
      }
      iVar8 = ((local_2e8.Localized_AlwaysSigned.NegativeSuffixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.Localized_AlwaysSigned.NegativeSuffixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        local_2e8.Localized_DefaultSigned.NegativeSuffixStringPtr =
             local_2e8.Localized_AlwaysSigned.NegativeSuffixStringPtr;
        if (iVar8 == 0) goto LAB_14171378c;
      }
      iVar8 = ((local_2e8.ASCII_DefaultSigned.PositiveSuffixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.ASCII_DefaultSigned.PositiveSuffixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        local_2e8.Localized_DefaultSigned.PositiveSuffixStringPtr =
             local_2e8.ASCII_DefaultSigned.PositiveSuffixStringPtr;
        if (iVar8 == 0) goto LAB_141713791;
      }
      iVar8 = ((local_2e8.ASCII_DefaultSigned.NegativeSuffixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.ASCII_DefaultSigned.NegativeSuffixStringPtr)->Data).
                    AllocatorInstance.Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        local_2e8.Localized_DefaultSigned.NegativeSuffixStringPtr =
             local_2e8.ASCII_DefaultSigned.NegativeSuffixStringPtr;
        if (iVar8 == 0) goto LAB_14171378c;
      }
      iVar8 = ((local_2e8.ASCII_AlwaysSigned.PositiveSuffixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.ASCII_AlwaysSigned.PositiveSuffixStringPtr)->Data).AllocatorInstance
                    .Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        local_2e8.Localized_DefaultSigned.PositiveSuffixStringPtr =
             local_2e8.ASCII_AlwaysSigned.PositiveSuffixStringPtr;
        if (iVar8 == 0) goto LAB_141713791;
      }
      iVar8 = ((local_2e8.ASCII_AlwaysSigned.NegativeSuffixStringPtr)->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      if (0 < iVar7) {
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)
                    ((local_2e8.ASCII_AlwaysSigned.NegativeSuffixStringPtr)->Data).AllocatorInstance
                    .Data;
        }
        iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
        local_2e8.Localized_DefaultSigned.NegativeSuffixStringPtr =
             local_2e8.ASCII_AlwaysSigned.NegativeSuffixStringPtr;
        if (iVar8 == 0) goto LAB_14171378c;
      }
    }
    else {
      if (iVar8 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)
                  ((local_2e8.Localized_DefaultSigned.PositiveSuffixStringPtr)->Data).
                  AllocatorInstance.Data;
      }
      iVar8 = wcsncmp(param_1,pwVar10,(longlong)iVar7);
      if (iVar8 != 0) goto LAB_14171362d;
LAB_141713791:
      iVar8 = ((local_2e8.Localized_DefaultSigned.PositiveSuffixStringPtr)->Data).ArrayNum;
      uVar18 = 1;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar15;
      }
      param_1 = param_1 + iVar7;
      local_340 = param_1;
    }
LAB_1417137b0:
    pwVar10 = local_330;
    if (local_347 != false) {
LAB_1417137c8:
      pwVar10 = local_330;
      uVar18 = 0;
      if (bFastDecimalFormatLargeFloatSupport != 0) {
        local_310 = local_318;
        local_168._padding_ = (longlong)local_168.StringBuffer;
        local_168._padding_ = (longlong)local_168.StringBuffer;
        local_168._padding_ = (longlong)local_48;
        local_168._padding_._0_2_ = 0;
        bVar6 = StringToCultureInvariantDecimal
                          (&local_310,local_328,pFVar4,local_2f8,&local_2e8,&local_168);
        if (bVar6) {
          dVar24 = wcstod((wchar_t *)local_168._padding_,(wchar_t **)0x0);
          *local_300 = dVar24;
          *local_2f0 = local_320;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                    ((TStringBuilderBase<wchar_t> *)&local_168);
          bVar6 = true;
          goto LAB_141713c5e;
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                  ((TStringBuilderBase<wchar_t> *)&local_168);
      }
    }
    cVar21 = '\0';
    bVar11 = 0;
    local_347 = false;
    if ((char)uVar18 != '\0') goto LAB_141713898;
  }
  if ((byte)(bVar11 + local_346) != '\0') {
    uVar17 = uVar18;
  }
  bVar6 = SUB81(uVar17,0);
  dVar24 = (double)uVar22 / (double)Pow10Table[bVar11] + (double)local_308;
  if ((bVar3) || (cVar21 != '\0')) {
    dVar24 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar24,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  *local_300 = dVar24;
  if (bVar6 != false) {
    pdVar1 = &param_5->NumericLimitMax;
    if (local_2f8->InsideLimits != false) {
      if ((dVar24 < param_5->NumericLimitLowest) || (*pdVar1 <= dVar24 && dVar24 != *pdVar1)) {
        bVar6 = false;
      }
      if (bVar6 == false) goto LAB_141713c47;
    }
    if (local_2f8->UseClamping != false) {
      if (*pdVar1 <= dVar24) {
        dVar24 = *pdVar1;
      }
      if (dVar24 <= param_5->NumericLimitLowest) {
        dVar24 = param_5->NumericLimitLowest;
      }
      *local_300 = dVar24;
    }
  }
LAB_141713c47:
  if (((byte)(bVar11 + local_346) != '\0') && (local_2f0 != (int *)0x0)) {
    *local_2f0 = (int)((longlong)param_1 - (longlong)local_318 >> 1);
  }
LAB_141713c5e:
  FDecimalNumberSignParser::~FDecimalNumberSignParser(&local_2e8);
  return bVar6;
}

// StringToIntegral @ 141713ca0

bool __cdecl
FastDecimalFormat::Internal::StringToIntegral
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,FDecimalNumberIntegralLimits *param_5,bool *param_6,
          ulong64 *param_7,int *param_8)

{
  wchar_t wVar1;
  ulonglong uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  byte bVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  byte bVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  wchar_t *local_1c8 [2];
  FDecimalNumberSignParser local_1b8;
  
  local_1c8[0] = param_1;
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_1b8.Localized_DefaultSigned,param_3,None);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_1b8.Localized_AlwaysSigned,param_3,AlwaysSign);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_1b8.ASCII_DefaultSigned,param_3,UseASCIISigns);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_1b8.ASCII_AlwaysSigned,param_3,UseASCIISigns|AlwaysSign);
  bVar8 = -(param_4->UseClamping != false) & 0x20;
  bVar5 = -(param_4->InsideLimits != false) & 0x10;
  bVar9 = param_4->UseGrouping;
  *param_6 = false;
  uVar12 = 0;
  *param_7 = 0;
  bVar3 = false;
  bVar10 = 0;
  if (*param_1 == L'\0') {
    bVar9 = false;
    goto LAB_141713fbb;
  }
  FDecimalNumberSignParser::ParseLeadingSign(&local_1b8,local_1c8,param_6);
  for (pwVar7 = local_1c8[0]; uVar13 = 1, local_1c8[0] = pwVar7, pwVar7 < param_1 + param_2;
      pwVar7 = pwVar7 + 1) {
    pwVar4 = L"0123456789";
    wVar1 = *pwVar7;
    uVar13 = 1;
    if (wVar1 == param_3->DecimalSeparatorCharacter) break;
    if (wVar1 == param_3->GroupingSeparatorCharacter) {
      if (bVar9 == false) {
LAB_141713e7c:
        bVar9 = false;
        goto LAB_141713f9c;
      }
    }
    else {
      uVar6 = uVar12;
      while ((wVar1 != *(wchar_t *)((longlong)pwVar4 + (longlong)(param_3 + -0x2009c79)) &&
             (wVar1 != *pwVar4))) {
        uVar11 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar11;
        pwVar4 = pwVar4 + 1;
        uVar13 = 0;
        if (9 < uVar11) goto LAB_141713e8c;
      }
      local_1c8[0] = pwVar7 + 1;
      if (bVar10 < 0x14) {
        uVar2 = *param_7;
        bVar10 = bVar10 + 1;
        uVar6 = (longlong)(int)uVar6 + uVar2 * 10;
        if ((((bVar8 != 0 || bVar5 != 0) && (uVar6 <= uVar2)) && (uVar2 != 0)) &&
           (bVar3 = true, bVar5 != 0)) goto LAB_141713e7c;
        *param_7 = uVar6;
      }
      else if ((bVar8 != 0 || bVar5 != 0) && (bVar3 = true, bVar5 != 0)) {
        bVar9 = false;
        goto LAB_141713fa1;
      }
    }
  }
LAB_141713e8c:
  if (*pwVar7 == param_3->DecimalSeparatorCharacter) {
    local_1c8[0] = pwVar7 + 1;
  }
  bVar9 = FDecimalNumberSignParser::ParseTrailingSign(&local_1b8,local_1c8,param_6);
  if (bVar9) {
    uVar13 = 1;
  }
  uVar6 = uVar12;
  if (bVar10 != 0) {
    uVar6 = (ulonglong)uVar13;
  }
  bVar9 = SUB81(uVar6,0);
  if (bVar9 != false) {
    if (param_4->InsideLimits != false) {
      bVar5 = !bVar3 & bVar9;
      if (param_5->bIsNumericSigned == false) {
        bVar8 = 0;
        if (*param_6 == false) {
          bVar8 = bVar5;
        }
        bVar9 = (bool)(*param_7 <= param_5->NumericLimitMax & bVar8);
      }
      else if (*param_6 == false) {
        uVar6 = uVar12;
        if (*param_7 <= param_5->NumericLimitMax) {
          uVar6 = (ulonglong)bVar5;
        }
        bVar9 = SUB81(uVar6,0);
      }
      else {
        uVar6 = uVar12;
        if (*param_7 <= (ulonglong)-param_5->NumericLimitLowest) {
          uVar6 = (ulonglong)bVar5;
        }
        bVar9 = SUB81(uVar6,0);
      }
      if (bVar9 == false) goto LAB_141713f9c;
    }
    if (param_4->UseClamping != false) {
      if (bVar3) {
        if (*param_6 == false) {
          *param_7 = param_5->NumericLimitMax;
        }
        else {
          *param_7 = -param_5->NumericLimitLowest;
        }
      }
      else {
        if (*param_6 == false) {
          uVar6 = param_5->NumericLimitMax;
        }
        else {
          uVar6 = -param_5->NumericLimitLowest;
        }
        if (*param_7 < uVar6) {
          uVar6 = *param_7;
        }
        if (uVar6 != 0) {
          uVar12 = uVar6;
        }
        *param_7 = uVar12;
      }
    }
  }
LAB_141713f9c:
  if (bVar10 != 0) {
LAB_141713fa1:
    if (param_8 != (int *)0x0) {
      *param_8 = (int)((longlong)local_1c8[0] - (longlong)param_1 >> 1);
    }
  }
LAB_141713fbb:
  FDecimalNumberSignParser::~FDecimalNumberSignParser(&local_1b8);
  return bVar9;
}

// StringToIntegral_StringToUInt64 @ 141713ff0

bool __cdecl
FastDecimalFormat::Internal::StringToIntegral_StringToUInt64
          (wchar_t **param_1,wchar_t *param_2,FDecimalNumberFormattingRules *param_3,
          FDecimalNumberSignParser *param_4,EDecimalNumberParseFlags *param_5,int param_6,
          bool *param_7,bool *param_8,ulong64 *param_9,uchar *param_10)

{
  ulonglong uVar1;
  EDecimalNumberParseFlags EVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t wVar8;
  uint uVar9;
  
  *param_7 = false;
  *param_8 = false;
  *param_9 = 0;
  *param_10 = '\0';
  if (**param_1 == L'\0') {
    return true;
  }
  bVar4 = FDecimalNumberSignParser::ParseLeadingSign(param_4,param_1,param_7);
  if ((bVar4) && ((*param_5 & AllowLeadingSign) == None)) {
    return false;
  }
  EVar2 = *param_5;
  bVar4 = true;
  pwVar6 = *param_1;
  if ((pwVar6 < param_2) && (wVar8 = *pwVar6, wVar8 != param_3->DecimalSeparatorCharacter)) {
    do {
      if (wVar8 == param_3->GroupingSeparatorCharacter) {
        if ((*param_5 & AllowGroupSeparators) == None) {
          return false;
        }
        *param_1 = pwVar6 + 1;
      }
      else {
        uVar9 = 0;
        pwVar7 = L"0123456789";
        while ((*pwVar6 != *(wchar_t *)((longlong)pwVar7 + (longlong)(param_3 + -0x2009c79)) &&
               (*pwVar6 != *pwVar7))) {
          uVar9 = uVar9 + 1;
          pwVar7 = pwVar7 + 1;
          if (9 < uVar9) {
            bVar4 = false;
            goto LAB_14171410a;
          }
        }
        *param_1 = *param_1 + 1;
        if ((int)(uint)*param_10 < param_6) {
          *param_10 = *param_10 + 1;
          uVar3 = *param_9;
          uVar1 = (longlong)(int)uVar9 + uVar3 * 10;
          if (((((EVar2 & (ClampValue|TestLimits)) != None) && (uVar1 <= uVar3)) && (uVar3 != 0)) &&
             (*param_8 = true, (*param_5 & TestLimits) != None)) {
            return false;
          }
          *param_9 = uVar1;
        }
        else if (((EVar2 & (ClampValue|TestLimits)) != None) &&
                (*param_8 = true, (*param_5 & TestLimits) != None)) {
          return false;
        }
      }
      pwVar6 = *param_1;
      if (param_2 <= pwVar6) goto LAB_14171410a;
      wVar8 = *pwVar6;
    } while (wVar8 != param_3->DecimalSeparatorCharacter);
  }
  else {
LAB_14171410a:
    pwVar6 = *param_1;
    if (*pwVar6 != param_3->DecimalSeparatorCharacter) goto LAB_141714122;
  }
  if ((*param_5 & AllowDecimalSeparators) == None) {
    return false;
  }
  *param_1 = pwVar6 + 1;
LAB_141714122:
  bVar5 = FDecimalNumberSignParser::ParseTrailingSign(param_4,param_1,param_7);
  if (!bVar5) {
    return bVar4;
  }
  if ((*param_5 & AllowTrailingSign) == None) {
    return false;
  }
  return true;
}

// add @ 14171ad40

void __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::add
          (void *this,UDateFormatBooleanAttribute param_1)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)this = ~uVar1 & *(uint *)this | uVar1;
  return;
}

// clear @ 14171ad60

void __thiscall icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::clear(void *this)

{
  *(undefined4 *)this = 0;
  return;
}

// contains @ 14171aea0

int __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::contains
          (void *this,UDateFormatBooleanAttribute param_1)

{
  return (int)((*(uint *)this >> (param_1 & 0x1f) & 1) != 0);
}

// flag @ 14171aec0

uint __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::flag
          (void *this,UDateFormatBooleanAttribute param_1)

{
  return 1 << ((byte)param_1 & 0x1f);
}

// get @ 14171aed0

int __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::get
          (void *this,UDateFormatBooleanAttribute param_1)

{
  return (int)((*(uint *)this >> (param_1 & 0x1f) & 1) != 0);
}

// getAll @ 14171aef0

uint __thiscall icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::getAll(void *this)

{
  return *(uint *)this;
}

// isValidEnum @ 14171af40

schar __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::isValidEnum
          (void *this,UDateFormatBooleanAttribute param_1)

{
  return param_1 < UDAT_BOOLEAN_ATTRIBUTE_COUNT;
}

// isValidValue @ 14171af50

schar __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::isValidValue(void *this,int param_1)

{
  return (uint)param_1 < 2;
}

// remove @ 14171af60

void __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::remove
          (void *this,UDateFormatBooleanAttribute param_1)

{
  *(uint *)this = *(uint *)this & ~(1 << ((byte)param_1 & 0x1f));
  return;
}

// set @ 14171af80

void __thiscall
icu_64::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::set
          (void *this,UDateFormatBooleanAttribute param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = uVar2;
  }
  *(uint *)this = ~uVar2 & *(uint *)this | uVar1;
  return;
}

// XXH3_accumulate_512_sse2 @ 14171afb0

void __cdecl XXH3_accumulate_512_sse2(void *param_1,void *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  
  auVar1 = *(undefined1 (*) [16])param_2;
  auVar5._0_8_ = auVar1._8_8_;
  auVar5._8_4_ = auVar1._0_4_;
  auVar5._12_4_ = auVar1._4_4_;
  lVar3 = (ulonglong)(auVar1._12_4_ ^ *(uint *)((longlong)param_3 + 0xc)) *
          (ulonglong)(auVar1._8_4_ ^ *(uint *)((longlong)param_3 + 8)) +
          auVar5._8_8_ + *(longlong *)((longlong)param_1 + 8);
  auVar2._8_4_ = (int)lVar3;
  auVar2._0_8_ = (ulonglong)(auVar1._4_4_ ^ *(uint *)((longlong)param_3 + 4)) *
                 (ulonglong)(auVar1._0_4_ ^ *(uint *)param_3) + auVar5._0_8_ + *(longlong *)param_1;
  auVar2._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar2;
  auVar1 = *(undefined1 (*) [16])((longlong)param_2 + 0x10);
  uVar4 = *(uint *)((longlong)param_3 + 0x18);
  auVar9._0_8_ = auVar1._8_8_;
  auVar9._8_4_ = auVar1._0_4_;
  auVar9._12_4_ = auVar1._4_4_;
  uVar12 = *(uint *)((longlong)param_3 + 0x10) ^ auVar1._0_4_;
  uVar13 = *(uint *)((longlong)param_3 + 0x14) ^ auVar1._4_4_;
  auVar6._4_4_ = uVar12;
  auVar6._0_4_ = uVar13;
  auVar6._8_4_ = *(uint *)((longlong)param_3 + 0x1c) ^ auVar1._12_4_;
  auVar6._12_4_ = uVar12;
  *(ulonglong *)((longlong)param_1 + 0x10) =
       auVar9._0_8_ + *(longlong *)((longlong)param_1 + 0x10) +
       (ulonglong)uVar13 * (ulonglong)uVar12;
  *(ulonglong *)((longlong)param_1 + 0x18) =
       auVar9._8_8_ + *(longlong *)((longlong)param_1 + 0x18) +
       (auVar6._8_8_ & 0xffffffff) * (ulonglong)(uVar4 ^ auVar1._8_4_);
  auVar1 = *(undefined1 (*) [16])((longlong)param_2 + 0x20);
  uVar4 = *(uint *)((longlong)param_3 + 0x28);
  auVar10._0_8_ = auVar1._8_8_;
  auVar10._8_4_ = auVar1._0_4_;
  auVar10._12_4_ = auVar1._4_4_;
  uVar12 = *(uint *)((longlong)param_3 + 0x20) ^ auVar1._0_4_;
  uVar13 = *(uint *)((longlong)param_3 + 0x24) ^ auVar1._4_4_;
  auVar7._4_4_ = uVar12;
  auVar7._0_4_ = uVar13;
  auVar7._8_4_ = *(uint *)((longlong)param_3 + 0x2c) ^ auVar1._12_4_;
  auVar7._12_4_ = uVar12;
  *(ulonglong *)((longlong)param_1 + 0x20) =
       auVar10._0_8_ + *(longlong *)((longlong)param_1 + 0x20) +
       (ulonglong)uVar13 * (ulonglong)uVar12;
  *(ulonglong *)((longlong)param_1 + 0x28) =
       auVar10._8_8_ + *(longlong *)((longlong)param_1 + 0x28) +
       (auVar7._8_8_ & 0xffffffff) * (ulonglong)(uVar4 ^ auVar1._8_4_);
  auVar1 = *(undefined1 (*) [16])((longlong)param_2 + 0x30);
  uVar4 = *(uint *)((longlong)param_3 + 0x38);
  uVar12 = *(uint *)((longlong)param_3 + 0x30) ^ auVar1._0_4_;
  uVar13 = *(uint *)((longlong)param_3 + 0x34) ^ auVar1._4_4_;
  auVar11._4_4_ = uVar12;
  auVar11._0_4_ = uVar13;
  auVar11._8_4_ = *(uint *)((longlong)param_3 + 0x3c) ^ auVar1._12_4_;
  auVar11._12_4_ = uVar12;
  auVar8._0_8_ = auVar1._8_8_;
  auVar8._8_4_ = auVar1._0_4_;
  auVar8._12_4_ = auVar1._4_4_;
  *(ulonglong *)((longlong)param_1 + 0x30) =
       (ulonglong)uVar13 * (ulonglong)uVar12 +
       auVar8._0_8_ + *(longlong *)((longlong)param_1 + 0x30);
  *(ulonglong *)((longlong)param_1 + 0x38) =
       (auVar11._8_8_ & 0xffffffff) * (ulonglong)(uVar4 ^ auVar1._8_4_) +
       auVar8._8_8_ + *(longlong *)((longlong)param_1 + 0x38);
  return;
}

// XXH3_hashLong_128b_default @ 14171b060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XXH_INLINE_XXH128_hash_t * __cdecl
XXH3_hashLong_128b_default
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,void *param_1,ulong64 param_2,
          ulong64 param_3,void *param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 (*pauVar17) [16];
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar39;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulonglong uVar50;
  uint uVar51;
  uint uVar52;
  ulonglong uVar53;
  undefined1 auVar54 [16];
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;
  longlong lVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulonglong uVar61;
  longlong lVar62;
  ulonglong uVar63;
  longlong lVar66;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  ulonglong uVar67;
  longlong lVar68;
  longlong lVar70;
  undefined1 auVar69 [16];
  longlong lVar71;
  longlong lVar73;
  undefined1 auVar72 [16];
  
  uVar20 = param_2 - 1 >> 10;
  lVar62 = -0x3d4d51c2d82b14b1;
  lVar66 = 0x165667b19e3779f9;
  lVar71 = -0x7a1435883d4d519d;
  lVar73 = 0x85ebca77;
  lVar68 = 0x27d4eb2f165667c5;
  lVar70 = 0x9e3779b1;
  lVar56 = 0xc2b2ae3d;
  lVar60 = -0x61c8864e7a143579;
  if (uVar20 != 0) {
    pauVar17 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
    uVar21 = uVar20;
    do {
      lVar19 = 0x10;
      puVar18 = (uint *)(XXH3_kSecret + 0x20);
      do {
        auVar44 = pauVar17[-1];
        uVar22 = puVar18[-8] ^ auVar44._0_4_;
        uVar39 = puVar18[-7] ^ auVar44._4_4_;
        auVar41._4_4_ = uVar22;
        auVar41._0_4_ = uVar39;
        auVar41._8_4_ = puVar18[-5] ^ auVar44._12_4_;
        auVar41._12_4_ = uVar22;
        auVar23._0_8_ = auVar44._8_8_;
        auVar23._8_4_ = auVar44._0_4_;
        auVar23._12_4_ = auVar44._4_4_;
        auVar27 = *pauVar17;
        lVar56 = (ulonglong)uVar39 * (ulonglong)uVar22 + auVar23._0_8_ + lVar56;
        lVar60 = (auVar41._8_8_ & 0xffffffff) * (ulonglong)(puVar18[-6] ^ auVar44._8_4_) +
                 auVar23._8_8_ + lVar60;
        uVar22 = puVar18[-4] ^ auVar27._0_4_;
        uVar39 = puVar18[-3] ^ auVar27._4_4_;
        auVar42._4_4_ = uVar22;
        auVar42._0_4_ = uVar39;
        auVar42._8_4_ = puVar18[-1] ^ auVar27._12_4_;
        auVar42._12_4_ = uVar22;
        auVar24._0_8_ = auVar27._8_8_;
        auVar24._8_4_ = auVar27._0_4_;
        auVar24._12_4_ = auVar27._4_4_;
        auVar44 = pauVar17[1];
        lVar62 = (ulonglong)uVar39 * (ulonglong)uVar22 + auVar24._0_8_ + lVar62;
        lVar66 = (auVar42._8_8_ & 0xffffffff) * (ulonglong)(puVar18[-2] ^ auVar27._8_4_) +
                 auVar24._8_8_ + lVar66;
        uVar22 = auVar44._0_4_ ^ *puVar18;
        uVar51 = auVar44._4_4_ ^ puVar18[1];
        auVar25._0_8_ = auVar44._8_8_;
        auVar25._8_4_ = auVar44._0_4_;
        auVar25._12_4_ = auVar44._4_4_;
        auVar43._4_4_ = uVar22;
        auVar43._0_4_ = uVar51;
        auVar43._8_4_ = auVar44._12_4_ ^ puVar18[3];
        auVar43._12_4_ = uVar22;
        auVar27 = pauVar17[2];
        pauVar17 = pauVar17 + 4;
        uVar39 = puVar18[4] ^ auVar27._0_4_;
        uVar52 = puVar18[5] ^ auVar27._4_4_;
        auVar26._0_8_ = auVar27._8_8_;
        auVar26._8_4_ = auVar27._0_4_;
        auVar26._12_4_ = auVar27._4_4_;
        lVar71 = lVar71 + auVar25._0_8_ + (ulonglong)uVar51 * (ulonglong)uVar22;
        lVar73 = lVar73 + auVar25._8_8_ +
                 (auVar43._8_8_ & 0xffffffff) * (ulonglong)(auVar44._8_4_ ^ puVar18[2]);
        auVar44._4_4_ = uVar39;
        auVar44._0_4_ = uVar52;
        auVar44._8_4_ = puVar18[7] ^ auVar27._12_4_;
        auVar44._12_4_ = uVar39;
        lVar68 = lVar68 + auVar26._0_8_ + (ulonglong)uVar52 * (ulonglong)uVar39;
        lVar70 = lVar70 + auVar26._8_8_ +
                 (auVar44._8_8_ & 0xffffffff) * (ulonglong)(puVar18[6] ^ auVar27._8_4_);
        lVar19 = lVar19 + -1;
        puVar18 = puVar18 + 2;
      } while (lVar19 != 0);
      uVar22 = (uint)((ulonglong)lVar56 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar60 >> 0x20);
      auVar27._0_4_ =
           uVar22 >> 0xf ^ (uint)lVar56 ^ CONCAT31(XXH3_kSecret._129_3_,XXH3_kSecret[0x80]);
      auVar27._4_4_ = uVar22 ^ CONCAT31(XXH3_kSecret._133_3_,XXH3_kSecret[0x84]);
      auVar27._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar60 ^ CONCAT31(XXH3_kSecret._137_3_,XXH3_kSecret[0x88]);
      auVar27._12_4_ = uVar39 ^ CONCAT31(XXH3_kSecret._141_3_,XXH3_kSecret[0x8c]);
      auVar58._4_4_ = auVar27._0_4_;
      auVar58._0_4_ = auVar27._4_4_;
      auVar58._8_4_ = auVar27._12_4_;
      auVar58._12_4_ = auVar27._0_4_;
      lVar56 = ((ulonglong)auVar27._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar27._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar60 = ((auVar58._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar27._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar22 = (uint)((ulonglong)lVar62 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar66 >> 0x20);
      auVar28._0_4_ =
           uVar22 >> 0xf ^ (uint)lVar62 ^ CONCAT31(XXH3_kSecret._145_3_,XXH3_kSecret[0x90]);
      auVar28._4_4_ = uVar22 ^ CONCAT31(XXH3_kSecret._149_3_,XXH3_kSecret[0x94]);
      auVar28._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar66 ^ CONCAT31(XXH3_kSecret._153_3_,XXH3_kSecret[0x98]);
      auVar28._12_4_ = uVar39 ^ CONCAT31(XXH3_kSecret._157_3_,XXH3_kSecret[0x9c]);
      auVar64._4_4_ = auVar28._0_4_;
      auVar64._0_4_ = auVar28._4_4_;
      auVar64._8_4_ = auVar28._12_4_;
      auVar64._12_4_ = auVar28._0_4_;
      lVar62 = ((ulonglong)auVar28._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar28._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar66 = ((auVar64._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar28._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar22 = (uint)((ulonglong)lVar71 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar73 >> 0x20);
      auVar29._0_4_ =
           uVar22 >> 0xf ^ (uint)lVar71 ^ CONCAT31(XXH3_kSecret._161_3_,XXH3_kSecret[0xa0]);
      auVar29._4_4_ = uVar22 ^ CONCAT31(XXH3_kSecret._165_3_,XXH3_kSecret[0xa4]);
      auVar29._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar73 ^ CONCAT31(XXH3_kSecret._169_3_,XXH3_kSecret[0xa8]);
      auVar29._12_4_ = uVar39 ^ CONCAT31(XXH3_kSecret._173_3_,XXH3_kSecret[0xac]);
      auVar72._4_4_ = auVar29._0_4_;
      auVar72._0_4_ = auVar29._4_4_;
      auVar72._8_4_ = auVar29._12_4_;
      auVar72._12_4_ = auVar29._0_4_;
      lVar71 = ((ulonglong)auVar29._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar29._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar73 = ((auVar72._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar29._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar22 = (uint)((ulonglong)lVar68 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar70 >> 0x20);
      auVar30._0_4_ =
           uVar22 >> 0xf ^ (uint)lVar68 ^ CONCAT31(XXH3_kSecret._177_3_,XXH3_kSecret[0xb0]);
      auVar30._4_4_ = uVar22 ^ CONCAT31(XXH3_kSecret._181_3_,XXH3_kSecret[0xb4]);
      auVar30._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar70 ^ CONCAT31(XXH3_kSecret._185_3_,XXH3_kSecret[0xb8]);
      auVar30._12_4_ = uVar39 ^ XXH3_kSecret._188_4_;
      auVar69._4_4_ = auVar30._0_4_;
      auVar69._0_4_ = auVar30._4_4_;
      auVar69._8_4_ = auVar30._12_4_;
      auVar69._12_4_ = auVar30._0_4_;
      lVar68 = ((ulonglong)auVar30._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar30._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar70 = ((auVar69._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar30._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  uVar21 = (param_2 + uVar20 * -0x400) - 1 >> 6;
  if (uVar21 != 0) {
    pauVar17 = (undefined1 (*) [16])((longlong)param_1 + uVar20 * 0x400 + 0x10);
    puVar18 = (uint *)(XXH3_kSecret + 0x20);
    do {
      auVar44 = pauVar17[-1];
      uVar22 = puVar18[-8] ^ auVar44._0_4_;
      uVar39 = puVar18[-7] ^ auVar44._4_4_;
      auVar31._0_8_ = auVar44._8_8_;
      auVar31._8_4_ = auVar44._0_4_;
      auVar31._12_4_ = auVar44._4_4_;
      auVar45._4_4_ = uVar22;
      auVar45._0_4_ = uVar39;
      auVar45._8_4_ = puVar18[-5] ^ auVar44._12_4_;
      auVar45._12_4_ = uVar22;
      auVar27 = *pauVar17;
      lVar56 = lVar56 + auVar31._0_8_ + (ulonglong)uVar39 * (ulonglong)uVar22;
      lVar60 = lVar60 + auVar31._8_8_ +
               (auVar45._8_8_ & 0xffffffff) * (ulonglong)(puVar18[-6] ^ auVar44._8_4_);
      uVar22 = puVar18[-4] ^ auVar27._0_4_;
      uVar39 = puVar18[-3] ^ auVar27._4_4_;
      auVar32._0_8_ = auVar27._8_8_;
      auVar32._8_4_ = auVar27._0_4_;
      auVar32._12_4_ = auVar27._4_4_;
      auVar46._4_4_ = uVar22;
      auVar46._0_4_ = uVar39;
      auVar46._8_4_ = puVar18[-1] ^ auVar27._12_4_;
      auVar46._12_4_ = uVar22;
      auVar44 = pauVar17[1];
      lVar62 = lVar62 + auVar32._0_8_ + (ulonglong)uVar39 * (ulonglong)uVar22;
      lVar66 = lVar66 + auVar32._8_8_ +
               (auVar46._8_8_ & 0xffffffff) * (ulonglong)(puVar18[-2] ^ auVar27._8_4_);
      uVar22 = *puVar18 ^ auVar44._0_4_;
      uVar39 = puVar18[1] ^ auVar44._4_4_;
      auVar47._4_4_ = uVar22;
      auVar47._0_4_ = uVar39;
      auVar47._8_4_ = puVar18[3] ^ auVar44._12_4_;
      auVar47._12_4_ = uVar22;
      auVar33._0_8_ = auVar44._8_8_;
      auVar33._8_4_ = auVar44._0_4_;
      auVar33._12_4_ = auVar44._4_4_;
      auVar27 = pauVar17[2];
      lVar71 = (ulonglong)uVar39 * (ulonglong)uVar22 + auVar33._0_8_ + lVar71;
      lVar73 = (auVar47._8_8_ & 0xffffffff) * (ulonglong)(puVar18[2] ^ auVar44._8_4_) +
               auVar33._8_8_ + lVar73;
      uVar22 = puVar18[4] ^ auVar27._0_4_;
      uVar39 = puVar18[5] ^ auVar27._4_4_;
      auVar48._4_4_ = uVar22;
      auVar48._0_4_ = uVar39;
      auVar48._8_4_ = puVar18[7] ^ auVar27._12_4_;
      auVar48._12_4_ = uVar22;
      auVar34._0_8_ = auVar27._8_8_;
      auVar34._8_4_ = auVar27._0_4_;
      auVar34._12_4_ = auVar27._4_4_;
      lVar68 = (ulonglong)uVar39 * (ulonglong)uVar22 + auVar34._0_8_ + lVar68;
      lVar70 = (auVar48._8_8_ & 0xffffffff) * (ulonglong)(puVar18[6] ^ auVar27._8_4_) +
               auVar34._8_8_ + lVar70;
      uVar21 = uVar21 - 1;
      pauVar17 = pauVar17 + 4;
      puVar18 = puVar18 + 2;
    } while (uVar21 != 0);
  }
  auVar44 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x40));
  uVar22 = auVar44._0_4_ ^ XXH3_kSecret._121_4_;
  uVar39 = auVar44._4_4_ ^ XXH3_kSecret._125_4_;
  auVar35._0_8_ = auVar44._8_8_;
  auVar35._8_4_ = auVar44._0_4_;
  auVar35._12_4_ = auVar44._4_4_;
  auVar27 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x30));
  auVar54._4_4_ = uVar22;
  auVar54._0_4_ = uVar39;
  auVar54._8_4_ = auVar44._12_4_ ^ XXH3_kSecret._133_4_;
  auVar54._12_4_ = uVar22;
  uVar53 = (ulonglong)uVar39 * (ulonglong)uVar22 + auVar35._0_8_ + lVar56;
  uVar55 = (auVar54._8_8_ & 0xffffffff) * (ulonglong)(auVar44._8_4_ ^ XXH3_kSecret._129_4_) +
           auVar35._8_8_ + lVar60;
  uVar22 = auVar27._0_4_ ^ XXH3_kSecret._137_4_;
  uVar39 = auVar27._4_4_ ^ XXH3_kSecret._141_4_;
  auVar59._4_4_ = uVar22;
  auVar59._0_4_ = uVar39;
  auVar59._8_4_ = auVar27._12_4_ ^ XXH3_kSecret._149_4_;
  auVar59._12_4_ = uVar22;
  auVar44 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x20));
  auVar36._0_8_ = auVar27._8_8_;
  auVar36._8_4_ = auVar27._0_4_;
  auVar36._12_4_ = auVar27._4_4_;
  uVar57 = (ulonglong)uVar39 * (ulonglong)uVar22 + auVar36._0_8_ + lVar62;
  uVar61 = (auVar59._8_8_ & 0xffffffff) * (ulonglong)(auVar27._8_4_ ^ XXH3_kSecret._145_4_) +
           auVar36._8_8_ + lVar66;
  auVar65._0_8_ = auVar44._8_8_;
  auVar65._8_4_ = auVar44._0_4_;
  auVar65._12_4_ = auVar44._4_4_;
  auVar27 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x10));
  uVar22 = auVar44._0_4_ ^ XXH3_kSecret._153_4_;
  uVar39 = auVar44._4_4_ ^ XXH3_kSecret._157_4_;
  auVar37._4_4_ = uVar22;
  auVar37._0_4_ = uVar39;
  auVar37._8_4_ = auVar44._12_4_ ^ XXH3_kSecret._165_4_;
  auVar37._12_4_ = uVar22;
  auVar49._0_8_ = auVar27._8_8_;
  auVar49._8_4_ = auVar27._0_4_;
  auVar49._12_4_ = auVar27._4_4_;
  uVar63 = auVar65._0_8_ + lVar71 + (ulonglong)uVar39 * (ulonglong)uVar22;
  uVar67 = auVar65._8_8_ + lVar73 +
           (auVar37._8_8_ & 0xffffffff) * (ulonglong)(auVar44._8_4_ ^ XXH3_kSecret._161_4_);
  uVar22 = auVar27._0_4_ ^ XXH3_kSecret._169_4_;
  uVar39 = auVar27._4_4_ ^ XXH3_kSecret._173_4_;
  auVar38._4_4_ = uVar22;
  auVar38._0_4_ = uVar39;
  auVar38._8_4_ = auVar27._12_4_ ^ XXH3_kSecret._181_4_;
  auVar38._12_4_ = uVar22;
  uVar40 = auVar49._0_8_ + lVar68 + (ulonglong)uVar39 * (ulonglong)uVar22;
  uVar50 = auVar49._8_8_ + lVar70 +
           (auVar38._8_8_ & 0xffffffff) * (ulonglong)(auVar27._8_4_ ^ XXH3_kSecret._177_4_);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = XXH3_kSecret._19_8_ ^ uVar55;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = XXH3_kSecret._11_8_ ^ uVar53;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = XXH3_kSecret._35_8_ ^ uVar61;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = XXH3_kSecret._27_8_ ^ uVar57;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = XXH3_kSecret._51_8_ ^ uVar67;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = XXH3_kSecret._43_8_ ^ uVar63;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = XXH3_kSecret._67_8_ ^ uVar50;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = XXH3_kSecret._59_8_ ^ uVar40;
  uVar20 = (SUB168(auVar4 * auVar12,0) ^ SUB168(auVar4 * auVar12,8)) +
           (SUB168(auVar1 * auVar9,0) ^ SUB168(auVar1 * auVar9,8)) + param_2 * -0x61c8864e7a143579 +
           (SUB168(auVar2 * auVar10,0) ^ SUB168(auVar2 * auVar10,8)) +
           (SUB168(auVar3 * auVar11,0) ^ SUB168(auVar3 * auVar11,8));
  uVar21 = CONCAT44(XXH3_kSecret._121_4_,XXH3_kSecret._117_4_);
  uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
  __return_storage_ptr__->low64 = uVar20 >> 0x20 ^ uVar20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = CONCAT44(XXH3_kSecret._129_4_,XXH3_kSecret._125_4_) ^ uVar55;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar21 ^ uVar53;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = CONCAT44(XXH3_kSecret._145_4_,XXH3_kSecret._141_4_) ^ uVar61;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = CONCAT44(XXH3_kSecret._137_4_,XXH3_kSecret._133_4_) ^ uVar57;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = CONCAT44(XXH3_kSecret._161_4_,XXH3_kSecret._157_4_) ^ uVar67;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = CONCAT44(XXH3_kSecret._153_4_,XXH3_kSecret._149_4_) ^ uVar63;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = CONCAT44(XXH3_kSecret._177_4_,XXH3_kSecret._173_4_) ^ uVar50;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = CONCAT44(XXH3_kSecret._169_4_,XXH3_kSecret._165_4_) ^ uVar40;
  uVar20 = (SUB168(auVar8 * auVar16,0) ^ SUB168(auVar8 * auVar16,8)) +
           (SUB168(auVar5 * auVar13,0) ^ SUB168(auVar5 * auVar13,8)) +
           ~(param_2 * -0x3d4d51c2d82b14b1) +
           (SUB168(auVar6 * auVar14,0) ^ SUB168(auVar6 * auVar14,8)) +
           (SUB168(auVar7 * auVar15,0) ^ SUB168(auVar7 * auVar15,8));
  uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
  __return_storage_ptr__->high64 = uVar20 >> 0x20 ^ uVar20;
  return __return_storage_ptr__;
}

// XXH3_hashLong_128b_withSecret @ 14171b650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XXH_INLINE_XXH128_hash_t * __cdecl
XXH3_hashLong_128b_withSecret
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,void *param_1,ulong64 param_2,
          ulong64 param_3,void *param_4,ulong64 param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  uint *puVar26;
  uint *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar45;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar46;
  uint uVar47;
  uint uVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  ulonglong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulonglong uVar60;
  ulonglong uVar61;
  undefined1 auVar62 [16];
  ulonglong uVar63;
  ulonglong uVar64;
  uint uVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  ulonglong uVar69;
  ulonglong uVar70;
  uint uVar74;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  ulonglong uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  auVar71._8_8_ = 0x9e3779b185ebca87;
  auVar71._0_8_ = 0xc2b2ae3d;
  auVar65._8_8_ = 0x165667b19e3779f9;
  auVar65._0_8_ = 0xc2b2ae3d27d4eb4f;
  auVar78._8_8_ = 0x85ebca77;
  auVar78._0_8_ = 0x85ebca77c2b2ae63;
  auVar76._8_8_ = 0x9e3779b1;
  auVar76._0_8_ = 0x27d4eb2f165667c5;
  uVar30 = param_5 - 0x40 >> 3;
  uVar23 = (param_2 - 1) / (uVar30 * 0x40);
  if (uVar23 != 0) {
    pauVar25 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
    puVar27 = (uint *)((param_5 - 0x40) + (longlong)param_4);
    puVar1 = (uint *)((param_5 - 0x30) + (longlong)param_4);
    puVar2 = (uint *)((param_5 - 0x20) + (longlong)param_4);
    puVar3 = (uint *)((param_5 - 0x10) + (longlong)param_4);
    uVar29 = uVar23;
    do {
      if (uVar30 != 0) {
        pauVar24 = pauVar25;
        puVar26 = (uint *)((longlong)param_4 + 0x20);
        uVar28 = uVar30;
        do {
          auVar34 = pauVar24[-1];
          uVar32 = puVar26[-8] ^ auVar34._0_4_;
          uVar45 = puVar26[-7] ^ auVar34._4_4_;
          auVar48._4_4_ = uVar32;
          auVar48._0_4_ = uVar45;
          auVar48._8_4_ = puVar26[-5] ^ auVar34._12_4_;
          auVar48._12_4_ = uVar32;
          auVar33._0_8_ = auVar34._8_8_;
          auVar33._8_4_ = auVar34._0_4_;
          auVar33._12_4_ = auVar34._4_4_;
          lVar31 = auVar71._8_8_;
          auVar66 = *pauVar24;
          auVar71._0_8_ = (ulonglong)uVar45 * (ulonglong)uVar32 + auVar33._0_8_ + auVar71._0_8_;
          auVar71._8_8_ =
               (auVar48._8_8_ & 0xffffffff) * (ulonglong)(puVar26[-6] ^ auVar34._8_4_) +
               auVar33._8_8_ + lVar31;
          uVar32 = puVar26[-4] ^ auVar66._0_4_;
          uVar45 = puVar26[-3] ^ auVar66._4_4_;
          auVar49._4_4_ = uVar32;
          auVar49._0_4_ = uVar45;
          auVar49._8_4_ = puVar26[-1] ^ auVar66._12_4_;
          auVar49._12_4_ = uVar32;
          auVar34._0_8_ = auVar66._8_8_;
          auVar34._8_4_ = auVar66._0_4_;
          auVar34._12_4_ = auVar66._4_4_;
          lVar31 = auVar65._8_8_;
          auVar65._0_8_ = (ulonglong)uVar45 * (ulonglong)uVar32 + auVar34._0_8_ + auVar65._0_8_;
          auVar65._8_8_ =
               (auVar49._8_8_ & 0xffffffff) * (ulonglong)(puVar26[-2] ^ auVar66._8_4_) +
               auVar34._8_8_ + lVar31;
          auVar34 = pauVar24[1];
          uVar32 = *puVar26 ^ auVar34._0_4_;
          uVar45 = puVar26[1] ^ auVar34._4_4_;
          auVar35._0_8_ = auVar34._8_8_;
          auVar35._8_4_ = auVar34._0_4_;
          auVar35._12_4_ = auVar34._4_4_;
          auVar50._4_4_ = uVar32;
          auVar50._0_4_ = uVar45;
          auVar50._8_4_ = puVar26[3] ^ auVar34._12_4_;
          auVar50._12_4_ = uVar32;
          lVar31 = auVar78._8_8_;
          auVar66 = pauVar24[2];
          auVar78._0_8_ = auVar78._0_8_ + auVar35._0_8_ + (ulonglong)uVar45 * (ulonglong)uVar32;
          auVar78._8_8_ =
               lVar31 + auVar35._8_8_ +
               (auVar50._8_8_ & 0xffffffff) * (ulonglong)(puVar26[2] ^ auVar34._8_4_);
          uVar32 = puVar26[4] ^ auVar66._0_4_;
          uVar45 = puVar26[5] ^ auVar66._4_4_;
          auVar51._4_4_ = uVar32;
          auVar51._0_4_ = uVar45;
          auVar51._8_4_ = puVar26[7] ^ auVar66._12_4_;
          auVar51._12_4_ = uVar32;
          auVar36._0_8_ = auVar66._8_8_;
          auVar36._8_4_ = auVar66._0_4_;
          auVar36._12_4_ = auVar66._4_4_;
          lVar31 = auVar76._8_8_;
          auVar76._0_8_ = (ulonglong)uVar45 * (ulonglong)uVar32 + auVar36._0_8_ + auVar76._0_8_;
          auVar76._8_8_ =
               (auVar51._8_8_ & 0xffffffff) * (ulonglong)(puVar26[6] ^ auVar66._8_4_) +
               auVar36._8_8_ + lVar31;
          uVar28 = uVar28 - 1;
          pauVar24 = pauVar24 + 4;
          puVar26 = puVar26 + 2;
        } while (uVar28 != 0);
      }
      pauVar25 = pauVar25 + uVar30 * 4;
      uVar32 = auVar71._12_4_;
      uVar74 = auVar71._8_4_;
      uVar46 = auVar71._4_4_ >> 0xf ^ auVar71._0_4_ ^ *puVar27;
      uVar55 = auVar71._4_4_ ^ puVar27[1];
      auVar72._4_4_ = uVar46;
      auVar72._0_4_ = uVar55;
      auVar72._8_4_ = uVar32 ^ puVar27[3];
      auVar72._12_4_ = uVar46;
      uVar45 = auVar65._12_4_;
      uVar68 = auVar65._8_4_;
      uVar47 = auVar65._4_4_ >> 0xf ^ auVar65._0_4_ ^ *puVar1;
      uVar56 = auVar65._4_4_ ^ puVar1[1];
      auVar66._4_4_ = uVar47;
      auVar66._0_4_ = uVar56;
      auVar66._8_4_ = uVar45 ^ puVar1[3];
      auVar66._12_4_ = uVar47;
      auVar71._0_8_ =
           ((ulonglong)uVar55 * (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) << 0x20) +
           (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) * (ulonglong)uVar46;
      auVar71._8_8_ =
           ((auVar72._8_8_ & 0xffffffff) * (_UNK_15066df88 & 0xffffffff) << 0x20) +
           (_UNK_15066df88 & 0xffffffff) * (ulonglong)(uVar32 >> 0xf ^ uVar74 ^ puVar27[2]);
      uVar32 = auVar78._12_4_;
      uVar74 = auVar78._8_4_;
      uVar46 = auVar78._4_4_ >> 0xf ^ auVar78._0_4_ ^ *puVar2;
      uVar55 = auVar78._4_4_ ^ puVar2[1];
      auVar79._4_4_ = uVar46;
      auVar79._0_4_ = uVar55;
      auVar79._8_4_ = uVar32 ^ puVar2[3];
      auVar79._12_4_ = uVar46;
      auVar65._0_8_ =
           ((ulonglong)uVar56 * (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) << 0x20) +
           (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) * (ulonglong)uVar47;
      auVar65._8_8_ =
           ((auVar66._8_8_ & 0xffffffff) * (_UNK_15066df88 & 0xffffffff) << 0x20) +
           (_UNK_15066df88 & 0xffffffff) * (ulonglong)(uVar45 >> 0xf ^ uVar68 ^ puVar1[2]);
      uVar45 = auVar76._12_4_;
      uVar68 = auVar76._8_4_;
      uVar47 = auVar76._4_4_ >> 0xf ^ auVar76._0_4_ ^ *puVar3;
      uVar56 = auVar76._4_4_ ^ puVar3[1];
      auVar77._4_4_ = uVar47;
      auVar77._0_4_ = uVar56;
      auVar77._8_4_ = uVar45 ^ puVar3[3];
      auVar77._12_4_ = uVar47;
      auVar78._0_8_ =
           ((ulonglong)uVar55 * (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) << 0x20) +
           (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) * (ulonglong)uVar46;
      auVar78._8_8_ =
           ((auVar79._8_8_ & 0xffffffff) * (_UNK_15066df88 & 0xffffffff) << 0x20) +
           (_UNK_15066df88 & 0xffffffff) * (ulonglong)(uVar32 >> 0xf ^ uVar74 ^ puVar2[2]);
      auVar76._0_8_ =
           ((ulonglong)uVar56 * (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) << 0x20) +
           (___xmm_9e3779b19e3779b19e3779b19e3779b1 & 0xffffffff) * (ulonglong)uVar47;
      auVar76._8_8_ =
           ((auVar77._8_8_ & 0xffffffff) * (_UNK_15066df88 & 0xffffffff) << 0x20) +
           (_UNK_15066df88 & 0xffffffff) * (ulonglong)(uVar45 >> 0xf ^ uVar68 ^ puVar3[2]);
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  lVar31 = uVar23 * uVar30 * 0x40;
  uVar23 = (param_2 - lVar31) - 1 >> 6;
  if (uVar23 != 0) {
    pauVar25 = (undefined1 (*) [16])((longlong)param_1 + lVar31 + 0x10);
    puVar27 = (uint *)((longlong)param_4 + 0x20);
    do {
      auVar34 = pauVar25[-1];
      auVar66 = pauVar25[1];
      uVar32 = puVar27[-8] ^ auVar34._0_4_;
      uVar45 = puVar27[-7] ^ auVar34._4_4_;
      auVar52._4_4_ = uVar32;
      auVar52._0_4_ = uVar45;
      auVar52._8_4_ = puVar27[-5] ^ auVar34._12_4_;
      auVar52._12_4_ = uVar32;
      auVar37._0_8_ = auVar34._8_8_;
      auVar37._8_4_ = auVar34._0_4_;
      auVar37._12_4_ = auVar34._4_4_;
      lVar31 = auVar71._8_8_;
      auVar33 = *pauVar25;
      auVar71._0_8_ = (ulonglong)uVar45 * (ulonglong)uVar32 + auVar37._0_8_ + auVar71._0_8_;
      auVar71._8_8_ =
           (auVar52._8_8_ & 0xffffffff) * (ulonglong)(puVar27[-6] ^ auVar34._8_4_) +
           auVar37._8_8_ + lVar31;
      uVar32 = puVar27[-4] ^ auVar33._0_4_;
      uVar45 = puVar27[-3] ^ auVar33._4_4_;
      auVar53._4_4_ = uVar32;
      auVar53._0_4_ = uVar45;
      auVar53._8_4_ = puVar27[-1] ^ auVar33._12_4_;
      auVar53._12_4_ = uVar32;
      auVar38._0_8_ = auVar33._8_8_;
      auVar38._8_4_ = auVar33._0_4_;
      auVar38._12_4_ = auVar33._4_4_;
      lVar31 = auVar65._8_8_;
      auVar65._0_8_ = (ulonglong)uVar45 * (ulonglong)uVar32 + auVar38._0_8_ + auVar65._0_8_;
      auVar65._8_8_ =
           (auVar53._8_8_ & 0xffffffff) * (ulonglong)(puVar27[-2] ^ auVar33._8_4_) +
           auVar38._8_8_ + lVar31;
      uVar32 = auVar66._0_4_ ^ *puVar27;
      uVar45 = auVar66._4_4_ ^ puVar27[1];
      auVar39._0_8_ = auVar66._8_8_;
      auVar39._8_4_ = auVar66._0_4_;
      auVar39._12_4_ = auVar66._4_4_;
      auVar58._4_4_ = uVar32;
      auVar58._0_4_ = uVar45;
      auVar58._8_4_ = auVar66._12_4_ ^ puVar27[3];
      auVar58._12_4_ = uVar32;
      lVar31 = auVar78._8_8_;
      auVar78._0_8_ = (ulonglong)uVar45 * (ulonglong)uVar32 + auVar39._0_8_ + auVar78._0_8_;
      auVar78._8_8_ =
           (auVar58._8_8_ & 0xffffffff) * (ulonglong)(auVar66._8_4_ ^ puVar27[2]) +
           auVar39._8_8_ + lVar31;
      auVar34 = pauVar25[2];
      uVar32 = puVar27[4] ^ auVar34._0_4_;
      uVar45 = puVar27[5] ^ auVar34._4_4_;
      auVar54._4_4_ = uVar32;
      auVar54._0_4_ = uVar45;
      auVar54._8_4_ = puVar27[7] ^ auVar34._12_4_;
      auVar54._12_4_ = uVar32;
      auVar40._0_8_ = auVar34._8_8_;
      auVar40._8_4_ = auVar34._0_4_;
      auVar40._12_4_ = auVar34._4_4_;
      lVar31 = auVar76._8_8_;
      auVar76._0_8_ = (ulonglong)uVar45 * (ulonglong)uVar32 + auVar40._0_8_ + auVar76._0_8_;
      auVar76._8_8_ =
           (auVar54._8_8_ & 0xffffffff) * (ulonglong)(puVar27[6] ^ auVar34._8_4_) +
           auVar40._8_8_ + lVar31;
      uVar23 = uVar23 - 1;
      pauVar25 = pauVar25 + 4;
      puVar27 = puVar27 + 2;
    } while (uVar23 != 0);
  }
  auVar34 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x40));
  puVar27 = (uint *)((param_5 - 0x47) + (longlong)param_4);
  auVar62._0_8_ = auVar34._8_8_;
  auVar62._8_4_ = auVar34._0_4_;
  auVar62._12_4_ = auVar34._4_4_;
  puVar1 = (uint *)((param_5 - 0x37) + (longlong)param_4);
  uVar32 = auVar34._0_4_ ^ *puVar27;
  uVar45 = auVar34._4_4_ ^ puVar27[1];
  auVar41._4_4_ = uVar32;
  auVar41._0_4_ = uVar45;
  auVar41._8_4_ = auVar34._12_4_ ^ puVar27[3];
  auVar41._12_4_ = uVar32;
  uVar61 = auVar62._0_8_ + auVar71._0_8_ + (ulonglong)uVar45 * (ulonglong)uVar32;
  uVar63 = auVar62._8_8_ + auVar71._8_8_ +
           (auVar41._8_8_ & 0xffffffff) * (ulonglong)(auVar34._8_4_ ^ puVar27[2]);
  auVar71 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x30));
  uVar32 = *puVar1 ^ auVar71._0_4_;
  uVar45 = puVar1[1] ^ auVar71._4_4_;
  auVar73._0_8_ = auVar71._8_8_;
  auVar73._8_4_ = auVar71._0_4_;
  auVar73._12_4_ = auVar71._4_4_;
  auVar42._4_4_ = uVar32;
  auVar42._0_4_ = uVar45;
  auVar42._8_4_ = puVar1[3] ^ auVar71._12_4_;
  auVar42._12_4_ = uVar32;
  puVar27 = (uint *)((param_5 - 0x27) + (longlong)param_4);
  uVar70 = auVar73._0_8_ + auVar65._0_8_ + (ulonglong)uVar45 * (ulonglong)uVar32;
  uVar75 = auVar73._8_8_ + auVar65._8_8_ +
           (auVar42._8_8_ & 0xffffffff) * (ulonglong)(puVar1[2] ^ auVar71._8_4_);
  auVar71 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x20));
  uVar32 = *puVar27 ^ auVar71._0_4_;
  uVar45 = puVar27[1] ^ auVar71._4_4_;
  auVar67._0_8_ = auVar71._8_8_;
  auVar67._8_4_ = auVar71._0_4_;
  auVar67._12_4_ = auVar71._4_4_;
  auVar43._4_4_ = uVar32;
  auVar43._0_4_ = uVar45;
  auVar43._8_4_ = puVar27[3] ^ auVar71._12_4_;
  auVar43._12_4_ = uVar32;
  puVar1 = (uint *)((param_5 - 0x17) + (longlong)param_4);
  uVar64 = auVar67._0_8_ + auVar78._0_8_ + (ulonglong)uVar45 * (ulonglong)uVar32;
  uVar69 = auVar67._8_8_ + auVar78._8_8_ +
           (auVar43._8_8_ & 0xffffffff) * (ulonglong)(puVar27[2] ^ auVar71._8_4_);
  auVar71 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x10));
  auVar59._0_8_ = auVar71._8_8_;
  auVar59._8_4_ = auVar71._0_4_;
  auVar59._12_4_ = auVar71._4_4_;
  uVar32 = *puVar1 ^ auVar71._0_4_;
  uVar45 = puVar1[1] ^ auVar71._4_4_;
  auVar44._4_4_ = uVar32;
  auVar44._0_4_ = uVar45;
  auVar44._8_4_ = puVar1[3] ^ auVar71._12_4_;
  auVar44._12_4_ = uVar32;
  uVar57 = auVar59._0_8_ + auVar76._0_8_ + (ulonglong)uVar45 * (ulonglong)uVar32;
  uVar60 = auVar59._8_8_ + auVar76._8_8_ +
           (auVar44._8_8_ & 0xffffffff) * (ulonglong)(puVar1[2] ^ auVar71._8_4_);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar63 ^ *(ulonglong *)((longlong)param_4 + 0x13);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar61 ^ *(ulonglong *)((longlong)param_4 + 0xb);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar75 ^ *(ulonglong *)((longlong)param_4 + 0x23);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar70 ^ *(ulonglong *)((longlong)param_4 + 0x1b);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar69 ^ *(ulonglong *)((longlong)param_4 + 0x33);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar64 ^ *(ulonglong *)((longlong)param_4 + 0x2b);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar60 ^ *(ulonglong *)((longlong)param_4 + 0x43);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar57 ^ *(ulonglong *)((longlong)param_4 + 0x3b);
  uVar23 = (SUB168(auVar10 * auVar18,0) ^ SUB168(auVar10 * auVar18,8)) +
           (SUB168(auVar7 * auVar15,0) ^ SUB168(auVar7 * auVar15,8)) + param_2 * -0x61c8864e7a143579
           + (SUB168(auVar8 * auVar16,0) ^ SUB168(auVar8 * auVar16,8)) +
           (SUB168(auVar9 * auVar17,0) ^ SUB168(auVar9 * auVar17,8));
  uVar30 = *(ulonglong *)((param_5 - 0x23) + (longlong)param_4);
  uVar29 = *(ulonglong *)((param_5 - 0x2b) + (longlong)param_4);
  uVar28 = *(ulonglong *)((param_5 - 0x33) + (longlong)param_4);
  uVar4 = *(ulonglong *)((param_5 - 0x3b) + (longlong)param_4);
  uVar5 = *(ulonglong *)((param_5 - 0x13) + (longlong)param_4);
  uVar6 = *(ulonglong *)((param_5 - 0x1b) + (longlong)param_4);
  uVar23 = (uVar23 >> 0x25 ^ uVar23) * 0x165667919e3779f9;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar63 ^ *(ulonglong *)((param_5 - 0x43) + (longlong)param_4);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar61 ^ *(ulonglong *)((param_5 - 0x4b) + (longlong)param_4);
  __return_storage_ptr__->low64 = uVar23 >> 0x20 ^ uVar23;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar75 ^ uVar28;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar70 ^ uVar4;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar69 ^ uVar30;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar64 ^ uVar29;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar60 ^ uVar5;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar57 ^ uVar6;
  uVar23 = (SUB168(auVar11 * auVar19,0) ^ SUB168(auVar11 * auVar19,8)) +
           ~(param_2 * -0x3d4d51c2d82b14b1) +
           (SUB168(auVar12 * auVar20,0) ^ SUB168(auVar12 * auVar20,8)) +
           (SUB168(auVar13 * auVar21,0) ^ SUB168(auVar13 * auVar21,8)) +
           (SUB168(auVar14 * auVar22,0) ^ SUB168(auVar14 * auVar22,8));
  uVar23 = (uVar23 >> 0x25 ^ uVar23) * 0x165667919e3779f9;
  __return_storage_ptr__->high64 = uVar23 >> 0x20 ^ uVar23;
  return __return_storage_ptr__;
}

// XXH3_hashLong_128b_withSeed @ 14171bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XXH_INLINE_XXH128_hash_t * __cdecl
XXH3_hashLong_128b_withSeed
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,void *param_1,ulong64 param_2,
          ulong64 param_3,void *param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 (*pauVar33) [16];
  uint *puVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint uVar38;
  uint uVar67;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  uint uVar68;
  uint uVar69;
  longlong lVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  ulonglong uVar87;
  longlong lVar88;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  uint uVar89;
  uint uVar91;
  undefined1 auVar90 [16];
  ulonglong uVar92;
  undefined1 auVar93 [16];
  ulonglong uVar96;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  longlong lVar97;
  longlong lVar102;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  ulonglong uVar98;
  ulonglong uVar103;
  undefined1 auVar101 [16];
  longlong lVar104;
  longlong lVar110;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  ulonglong uVar105;
  ulonglong uVar111;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  longlong lVar112;
  longlong lVar116;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  longlong lVar117;
  longlong lVar120;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  longlong lVar121;
  longlong lVar122;
  longlong lVar123;
  longlong lVar124;
  longlong lVar125;
  longlong lVar126;
  longlong lVar127;
  longlong lVar128;
  undefined1 local_1b8 [80];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined3 local_128;
  undefined5 uStack_125;
  undefined3 uStack_120;
  undefined5 uStack_11d;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined5 local_f8;
  undefined4 uStack_f3;
  uint uStack_ef;
  undefined4 uStack_eb;
  uint uStack_e7;
  undefined4 uStack_e3;
  uint uStack_df;
  undefined4 uStack_db;
  uint uStack_d7;
  undefined4 uStack_d3;
  uint uStack_cf;
  undefined4 uStack_cb;
  uint uStack_c7;
  undefined4 uStack_c3;
  uint uStack_bf;
  undefined4 uStack_bb;
  uint uStack_b7;
  undefined4 uStack_b3;
  undefined7 uStack_af;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)local_1b8;
  uVar37 = param_2 - 1 >> 10;
  if (param_3 == 0) {
    lVar104 = -0x3d4d51c2d82b14b1;
    lVar110 = 0x165667b19e3779f9;
    lVar117 = -0x7a1435883d4d519d;
    lVar120 = 0x85ebca77;
    lVar112 = 0x27d4eb2f165667c5;
    lVar116 = 0x9e3779b1;
    lVar97 = 0xc2b2ae3d;
    lVar102 = -0x61c8864e7a143579;
    if (uVar37 != 0) {
      pauVar33 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
      uVar36 = uVar37;
      do {
        lVar35 = 0x10;
        puVar34 = (uint *)(XXH3_kSecret + 0x20);
        do {
          auVar80 = pauVar33[-1];
          uVar38 = puVar34[-8] ^ auVar80._0_4_;
          uVar67 = puVar34[-7] ^ auVar80._4_4_;
          auVar71._4_4_ = uVar38;
          auVar71._0_4_ = uVar67;
          auVar71._8_4_ = puVar34[-5] ^ auVar80._12_4_;
          auVar71._12_4_ = uVar38;
          auVar39._0_8_ = auVar80._8_8_;
          auVar39._8_4_ = auVar80._0_4_;
          auVar39._12_4_ = auVar80._4_4_;
          auVar94 = *pauVar33;
          lVar97 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar39._0_8_ + lVar97;
          lVar102 = (auVar71._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-6] ^ auVar80._8_4_) +
                    auVar39._8_8_ + lVar102;
          uVar38 = puVar34[-4] ^ auVar94._0_4_;
          uVar67 = puVar34[-3] ^ auVar94._4_4_;
          auVar72._4_4_ = uVar38;
          auVar72._0_4_ = uVar67;
          auVar72._8_4_ = puVar34[-1] ^ auVar94._12_4_;
          auVar72._12_4_ = uVar38;
          auVar40._0_8_ = auVar94._8_8_;
          auVar40._8_4_ = auVar94._0_4_;
          auVar40._12_4_ = auVar94._4_4_;
          lVar104 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar40._0_8_ + lVar104;
          lVar110 = (auVar72._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-2] ^ auVar94._8_4_) +
                    auVar40._8_8_ + lVar110;
          auVar80 = pauVar33[1];
          uVar89 = *puVar34 ^ auVar80._0_4_;
          uVar91 = puVar34[1] ^ auVar80._4_4_;
          auVar41._0_8_ = auVar80._8_8_;
          auVar41._8_4_ = auVar80._0_4_;
          auVar41._12_4_ = auVar80._4_4_;
          auVar73._4_4_ = uVar89;
          auVar73._0_4_ = uVar91;
          auVar73._8_4_ = puVar34[3] ^ auVar80._12_4_;
          auVar73._12_4_ = uVar89;
          auVar94 = pauVar33[2];
          pauVar33 = pauVar33 + 4;
          uVar38 = puVar34[4] ^ auVar94._0_4_;
          uVar67 = puVar34[5] ^ auVar94._4_4_;
          lVar117 = lVar117 + auVar41._0_8_ + (ulonglong)uVar91 * (ulonglong)uVar89;
          lVar120 = lVar120 + auVar41._8_8_ +
                    (auVar73._8_8_ & 0xffffffff) * (ulonglong)(puVar34[2] ^ auVar80._8_4_);
          auVar74._4_4_ = uVar38;
          auVar74._0_4_ = uVar67;
          auVar74._8_4_ = puVar34[7] ^ auVar94._12_4_;
          auVar74._12_4_ = uVar38;
          auVar42._0_8_ = auVar94._8_8_;
          auVar42._8_4_ = auVar94._0_4_;
          auVar42._12_4_ = auVar94._4_4_;
          lVar112 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar42._0_8_ + lVar112;
          lVar116 = (auVar74._8_8_ & 0xffffffff) * (ulonglong)(puVar34[6] ^ auVar94._8_4_) +
                    auVar42._8_8_ + lVar116;
          lVar35 = lVar35 + -1;
          puVar34 = puVar34 + 2;
        } while (lVar35 != 0);
        uVar38 = (uint)((ulonglong)lVar97 >> 0x20);
        uVar67 = (uint)((ulonglong)lVar102 >> 0x20);
        auVar43._0_4_ =
             uVar38 >> 0xf ^ (uint)lVar97 ^ CONCAT31(XXH3_kSecret._129_3_,XXH3_kSecret[0x80]);
        auVar43._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._133_3_,XXH3_kSecret[0x84]);
        auVar43._8_4_ =
             uVar67 >> 0xf ^ (uint)lVar102 ^ CONCAT31(XXH3_kSecret._137_3_,XXH3_kSecret[0x88]);
        auVar43._12_4_ = uVar67 ^ CONCAT31(XXH3_kSecret._141_3_,XXH3_kSecret[0x8c]);
        auVar99._4_4_ = auVar43._0_4_;
        auVar99._0_4_ = auVar43._4_4_;
        auVar99._8_4_ = auVar43._12_4_;
        auVar99._12_4_ = auVar43._0_4_;
        lVar97 = ((ulonglong)auVar43._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                 0x20) + (ulonglong)auVar43._0_4_ *
                         (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar102 = ((auVar99._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (auVar43._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar38 = (uint)((ulonglong)lVar104 >> 0x20);
        uVar67 = (uint)((ulonglong)lVar110 >> 0x20);
        auVar44._0_4_ =
             uVar38 >> 0xf ^ (uint)lVar104 ^ CONCAT31(XXH3_kSecret._145_3_,XXH3_kSecret[0x90]);
        auVar44._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._149_3_,XXH3_kSecret[0x94]);
        auVar44._8_4_ =
             uVar67 >> 0xf ^ (uint)lVar110 ^ CONCAT31(XXH3_kSecret._153_3_,XXH3_kSecret[0x98]);
        auVar44._12_4_ = uVar67 ^ CONCAT31(XXH3_kSecret._157_3_,XXH3_kSecret[0x9c]);
        auVar106._4_4_ = auVar44._0_4_;
        auVar106._0_4_ = auVar44._4_4_;
        auVar106._8_4_ = auVar44._12_4_;
        auVar106._12_4_ = auVar44._0_4_;
        lVar104 = ((ulonglong)auVar44._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                  0x20) + (ulonglong)auVar44._0_4_ *
                          (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar110 = ((auVar106._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (auVar44._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar38 = (uint)((ulonglong)lVar117 >> 0x20);
        uVar67 = (uint)((ulonglong)lVar120 >> 0x20);
        auVar45._0_4_ =
             uVar38 >> 0xf ^ (uint)lVar117 ^ CONCAT31(XXH3_kSecret._161_3_,XXH3_kSecret[0xa0]);
        auVar45._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._165_3_,XXH3_kSecret[0xa4]);
        auVar45._8_4_ =
             uVar67 >> 0xf ^ (uint)lVar120 ^ CONCAT31(XXH3_kSecret._169_3_,XXH3_kSecret[0xa8]);
        auVar45._12_4_ = uVar67 ^ CONCAT31(XXH3_kSecret._173_3_,XXH3_kSecret[0xac]);
        auVar118._4_4_ = auVar45._0_4_;
        auVar118._0_4_ = auVar45._4_4_;
        auVar118._8_4_ = auVar45._12_4_;
        auVar118._12_4_ = auVar45._0_4_;
        lVar117 = ((ulonglong)auVar45._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                  0x20) + (ulonglong)auVar45._0_4_ *
                          (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar120 = ((auVar118._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (auVar45._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar38 = (uint)((ulonglong)lVar112 >> 0x20);
        uVar67 = (uint)((ulonglong)lVar116 >> 0x20);
        auVar46._0_4_ =
             uVar38 >> 0xf ^ (uint)lVar112 ^ CONCAT31(XXH3_kSecret._177_3_,XXH3_kSecret[0xb0]);
        auVar46._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._181_3_,XXH3_kSecret[0xb4]);
        auVar46._8_4_ =
             uVar67 >> 0xf ^ (uint)lVar116 ^ CONCAT31(XXH3_kSecret._185_3_,XXH3_kSecret[0xb8]);
        auVar46._12_4_ = uVar67 ^ XXH3_kSecret._188_4_;
        auVar113._4_4_ = auVar46._0_4_;
        auVar113._0_4_ = auVar46._4_4_;
        auVar113._8_4_ = auVar46._12_4_;
        auVar113._12_4_ = auVar46._0_4_;
        lVar112 = ((ulonglong)auVar46._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                  0x20) + (ulonglong)auVar46._0_4_ *
                          (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar116 = ((auVar113._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (auVar46._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
    uVar36 = (param_2 + uVar37 * -0x400) - 1 >> 6;
    if (uVar36 != 0) {
      pauVar33 = (undefined1 (*) [16])((longlong)param_1 + uVar37 * 0x400 + 0x10);
      puVar34 = (uint *)(XXH3_kSecret + 0x20);
      do {
        auVar80 = pauVar33[-1];
        auVar94 = pauVar33[1];
        uVar38 = puVar34[-8] ^ auVar80._0_4_;
        uVar67 = puVar34[-7] ^ auVar80._4_4_;
        auVar47._0_8_ = auVar80._8_8_;
        auVar47._8_4_ = auVar80._0_4_;
        auVar47._12_4_ = auVar80._4_4_;
        auVar75._4_4_ = uVar38;
        auVar75._0_4_ = uVar67;
        auVar75._8_4_ = puVar34[-5] ^ auVar80._12_4_;
        auVar75._12_4_ = uVar38;
        auVar55 = *pauVar33;
        lVar97 = lVar97 + auVar47._0_8_ + (ulonglong)uVar67 * (ulonglong)uVar38;
        lVar102 = lVar102 + auVar47._8_8_ +
                  (auVar75._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-6] ^ auVar80._8_4_);
        uVar38 = puVar34[-4] ^ auVar55._0_4_;
        uVar67 = puVar34[-3] ^ auVar55._4_4_;
        auVar48._0_8_ = auVar55._8_8_;
        auVar48._8_4_ = auVar55._0_4_;
        auVar48._12_4_ = auVar55._4_4_;
        auVar76._4_4_ = uVar38;
        auVar76._0_4_ = uVar67;
        auVar76._8_4_ = puVar34[-1] ^ auVar55._12_4_;
        auVar76._12_4_ = uVar38;
        lVar104 = lVar104 + auVar48._0_8_ + (ulonglong)uVar67 * (ulonglong)uVar38;
        lVar110 = lVar110 + auVar48._8_8_ +
                  (auVar76._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-2] ^ auVar55._8_4_);
        uVar38 = auVar94._0_4_ ^ *puVar34;
        uVar67 = auVar94._4_4_ ^ puVar34[1];
        auVar49._0_8_ = auVar94._8_8_;
        auVar49._8_4_ = auVar94._0_4_;
        auVar49._12_4_ = auVar94._4_4_;
        auVar90._4_4_ = uVar38;
        auVar90._0_4_ = uVar67;
        auVar90._8_4_ = auVar94._12_4_ ^ puVar34[3];
        auVar90._12_4_ = uVar38;
        lVar117 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar49._0_8_ + lVar117;
        lVar120 = (auVar90._8_8_ & 0xffffffff) * (ulonglong)(auVar94._8_4_ ^ puVar34[2]) +
                  auVar49._8_8_ + lVar120;
        auVar80 = pauVar33[2];
        uVar38 = puVar34[4] ^ auVar80._0_4_;
        uVar67 = puVar34[5] ^ auVar80._4_4_;
        auVar50._0_8_ = auVar80._8_8_;
        auVar50._8_4_ = auVar80._0_4_;
        auVar50._12_4_ = auVar80._4_4_;
        auVar77._4_4_ = uVar38;
        auVar77._0_4_ = uVar67;
        auVar77._8_4_ = puVar34[7] ^ auVar80._12_4_;
        auVar77._12_4_ = uVar38;
        lVar112 = lVar112 + auVar50._0_8_ + (ulonglong)uVar67 * (ulonglong)uVar38;
        lVar116 = lVar116 + auVar50._8_8_ +
                  (auVar77._8_8_ & 0xffffffff) * (ulonglong)(puVar34[6] ^ auVar80._8_4_);
        uVar36 = uVar36 - 1;
        pauVar33 = pauVar33 + 4;
        puVar34 = puVar34 + 2;
      } while (uVar36 != 0);
    }
    auVar80 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x40));
    uVar38 = auVar80._0_4_ ^ XXH3_kSecret._121_4_;
    uVar67 = auVar80._4_4_ ^ XXH3_kSecret._125_4_;
    auVar51._0_8_ = auVar80._8_8_;
    auVar51._8_4_ = auVar80._0_4_;
    auVar51._12_4_ = auVar80._4_4_;
    auVar94 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x30));
    auVar93._4_4_ = uVar38;
    auVar93._0_4_ = uVar67;
    auVar93._8_4_ = auVar80._12_4_ ^ XXH3_kSecret._133_4_;
    auVar93._12_4_ = uVar38;
    uVar92 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar51._0_8_ + lVar97;
    uVar96 = (auVar93._8_8_ & 0xffffffff) * (ulonglong)(auVar80._8_4_ ^ XXH3_kSecret._129_4_) +
             auVar51._8_8_ + lVar102;
    uVar38 = auVar94._0_4_ ^ XXH3_kSecret._137_4_;
    uVar67 = auVar94._4_4_ ^ XXH3_kSecret._141_4_;
    auVar100._4_4_ = uVar38;
    auVar100._0_4_ = uVar67;
    auVar100._8_4_ = auVar94._12_4_ ^ XXH3_kSecret._149_4_;
    auVar100._12_4_ = uVar38;
    auVar80 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x20));
    auVar52._0_8_ = auVar94._8_8_;
    auVar52._8_4_ = auVar94._0_4_;
    auVar52._12_4_ = auVar94._4_4_;
    uVar98 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar52._0_8_ + lVar104;
    uVar103 = (auVar100._8_8_ & 0xffffffff) * (ulonglong)(auVar94._8_4_ ^ XXH3_kSecret._145_4_) +
              auVar52._8_8_ + lVar110;
    auVar107._0_8_ = auVar80._8_8_;
    auVar107._8_4_ = auVar80._0_4_;
    auVar107._12_4_ = auVar80._4_4_;
    auVar94 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x10));
    uVar38 = auVar80._0_4_ ^ XXH3_kSecret._153_4_;
    uVar67 = auVar80._4_4_ ^ XXH3_kSecret._157_4_;
    auVar53._4_4_ = uVar38;
    auVar53._0_4_ = uVar67;
    auVar53._8_4_ = auVar80._12_4_ ^ XXH3_kSecret._165_4_;
    auVar53._12_4_ = uVar38;
    auVar78._0_8_ = auVar94._8_8_;
    auVar78._8_4_ = auVar94._0_4_;
    auVar78._12_4_ = auVar94._4_4_;
    uVar105 = auVar107._0_8_ + lVar117 + (ulonglong)uVar67 * (ulonglong)uVar38;
    uVar111 = auVar107._8_8_ + lVar120 +
              (auVar53._8_8_ & 0xffffffff) * (ulonglong)(auVar80._8_4_ ^ XXH3_kSecret._161_4_);
    uVar38 = auVar94._0_4_ ^ XXH3_kSecret._169_4_;
    uVar67 = auVar94._4_4_ ^ XXH3_kSecret._173_4_;
    auVar54._4_4_ = uVar38;
    auVar54._0_4_ = uVar67;
    auVar54._8_4_ = auVar94._12_4_ ^ XXH3_kSecret._181_4_;
    auVar54._12_4_ = uVar38;
    uVar36 = auVar78._0_8_ + lVar112 + (ulonglong)uVar67 * (ulonglong)uVar38;
    uVar87 = auVar78._8_8_ + lVar116 +
             (auVar54._8_8_ & 0xffffffff) * (ulonglong)(auVar94._8_4_ ^ XXH3_kSecret._177_4_);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar96 ^ CONCAT35(XXH3_kSecret._24_3_,XXH3_kSecret._19_5_);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = CONCAT35(XXH3_kSecret._16_3_,XXH3_kSecret._11_5_) ^ uVar92;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar103 ^ CONCAT35(XXH3_kSecret._40_3_,XXH3_kSecret._35_5_);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar98 ^ CONCAT35(XXH3_kSecret._32_3_,XXH3_kSecret._27_5_);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar111 ^ CONCAT35(XXH3_kSecret._56_3_,XXH3_kSecret._51_5_);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = CONCAT35(XXH3_kSecret._48_3_,XXH3_kSecret._43_5_) ^ uVar105;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT35(XXH3_kSecret._72_3_,XXH3_kSecret._67_5_) ^ uVar87;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = CONCAT35(XXH3_kSecret._64_3_,XXH3_kSecret._59_5_) ^ uVar36;
    uVar37 = (SUB168(auVar4 * auVar20,0) ^ SUB168(auVar4 * auVar20,8)) +
             (SUB168(auVar1 * auVar17,0) ^ SUB168(auVar1 * auVar17,8)) +
             param_2 * -0x61c8864e7a143579 +
             (SUB168(auVar2 * auVar18,0) ^ SUB168(auVar2 * auVar18,8)) +
             (SUB168(auVar3 * auVar19,0) ^ SUB168(auVar3 * auVar19,8));
    uVar37 = (uVar37 >> 0x25 ^ uVar37) * 0x165667919e3779f9;
    __return_storage_ptr__->low64 = uVar37 >> 0x20 ^ uVar37;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = CONCAT44(XXH3_kSecret._129_4_,XXH3_kSecret._125_4_) ^ uVar96;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = CONCAT44(XXH3_kSecret._121_4_,XXH3_kSecret._117_4_) ^ uVar92;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(XXH3_kSecret._145_4_,XXH3_kSecret._141_4_) ^ uVar103;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = CONCAT44(XXH3_kSecret._137_4_,XXH3_kSecret._133_4_) ^ uVar98;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = CONCAT44(XXH3_kSecret._161_4_,XXH3_kSecret._157_4_) ^ uVar111;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = CONCAT44(XXH3_kSecret._153_4_,XXH3_kSecret._149_4_) ^ uVar105;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = CONCAT44(XXH3_kSecret._177_4_,XXH3_kSecret._173_4_) ^ uVar87;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = CONCAT44(XXH3_kSecret._169_4_,XXH3_kSecret._165_4_) ^ uVar36;
    uVar37 = (SUB168(auVar8 * auVar24,0) ^ SUB168(auVar8 * auVar24,8)) +
             ~(param_2 * -0x3d4d51c2d82b14b1) +
             (SUB168(auVar5 * auVar21,0) ^ SUB168(auVar5 * auVar21,8)) +
             (SUB168(auVar6 * auVar22,0) ^ SUB168(auVar6 * auVar22,8)) +
             (SUB168(auVar7 * auVar23,0) ^ SUB168(auVar7 * auVar23,8));
    uVar37 = (uVar37 >> 0x25 ^ uVar37) * 0x165667919e3779f9;
    __return_storage_ptr__->high64 = uVar37 >> 0x20 ^ uVar37;
  }
  else {
    lVar35 = -param_3;
    lVar102 = CONCAT53(XXH3_kSecret._19_5_,XXH3_kSecret._16_3_) + param_3;
    lVar104 = CONCAT53(XXH3_kSecret._27_5_,XXH3_kSecret._24_3_) + lVar35;
    lVar97 = CONCAT53(XXH3_kSecret._11_5_,XXH3_kSecret._8_3_) + lVar35;
    lVar112 = 0xc2b2ae3d;
    lVar116 = -0x61c8864e7a143579;
    local_168 = XXH3_kSecret._0_8_ + param_3;
    uStack_160._0_3_ = (undefined3)lVar97;
    uStack_160._3_5_ = (undefined5)((ulonglong)lVar97 >> 0x18);
    lVar121 = CONCAT35(XXH3_kSecret._133_3_,CONCAT41(XXH3_kSecret._129_4_,XXH3_kSecret[0x80])) +
              param_3;
    lVar122 = CONCAT35(XXH3_kSecret._141_3_,CONCAT41(XXH3_kSecret._137_4_,XXH3_kSecret[0x88])) +
              lVar35;
    lVar123 = CONCAT35(XXH3_kSecret._149_3_,CONCAT41(XXH3_kSecret._145_4_,XXH3_kSecret[0x90])) +
              param_3;
    lVar124 = CONCAT35(XXH3_kSecret._157_3_,CONCAT41(XXH3_kSecret._153_4_,XXH3_kSecret[0x98])) +
              lVar35;
    uStack_158._0_3_ = (undefined3)lVar102;
    uStack_158._3_5_ = (undefined5)((ulonglong)lVar102 >> 0x18);
    uStack_150._0_3_ = (undefined3)lVar104;
    uStack_150._3_5_ = (undefined5)((ulonglong)lVar104 >> 0x18);
    lVar97 = CONCAT53(XXH3_kSecret._35_5_,XXH3_kSecret._32_3_) + param_3;
    lVar102 = CONCAT53(XXH3_kSecret._43_5_,XXH3_kSecret._40_3_) + lVar35;
    lVar125 = CONCAT35(XXH3_kSecret._165_3_,CONCAT41(XXH3_kSecret._161_4_,XXH3_kSecret[0xa0])) +
              param_3;
    lVar126 = CONCAT35(XXH3_kSecret._173_3_,CONCAT41(XXH3_kSecret._169_4_,XXH3_kSecret[0xa8])) +
              lVar35;
    lVar117 = CONCAT53(XXH3_kSecret._51_5_,XXH3_kSecret._48_3_) + param_3;
    lVar120 = CONCAT53(XXH3_kSecret._59_5_,XXH3_kSecret._56_3_) + lVar35;
    lVar104 = -0x3d4d51c2d82b14b1;
    lVar110 = 0x165667b19e3779f9;
    local_148._0_3_ = (undefined3)lVar97;
    local_148._3_5_ = (undefined5)((ulonglong)lVar97 >> 0x18);
    uStack_140._0_3_ = (undefined3)lVar102;
    uStack_140._3_5_ = (undefined5)((ulonglong)lVar102 >> 0x18);
    lVar127 = CONCAT35(XXH3_kSecret._181_3_,CONCAT41(XXH3_kSecret._177_4_,XXH3_kSecret[0xb0])) +
              param_3;
    lVar128 = CONCAT44(XXH3_kSecret._188_4_,CONCAT31(XXH3_kSecret._185_3_,XXH3_kSecret[0xb8])) +
              lVar35;
    uStack_138._0_3_ = (undefined3)lVar117;
    uStack_138._3_5_ = (undefined5)((ulonglong)lVar117 >> 0x18);
    uStack_130._0_3_ = (undefined3)lVar120;
    uStack_130._3_5_ = (undefined5)((ulonglong)lVar120 >> 0x18);
    lVar117 = CONCAT53(XXH3_kSecret._67_5_,XXH3_kSecret._64_3_) + param_3;
    lVar120 = CONCAT53(XXH3_kSecret._75_5_,XXH3_kSecret._72_3_) + lVar35;
    lVar97 = -0x7a1435883d4d519d;
    lVar102 = 0x85ebca77;
    local_128 = (undefined3)lVar117;
    uStack_125 = (undefined5)((ulonglong)lVar117 >> 0x18);
    uStack_120 = (undefined3)lVar120;
    uStack_11d = (undefined5)((ulonglong)lVar120 >> 0x18);
    local_118 = XXH3_kSecret._80_8_ + param_3;
    lStack_110 = XXH3_kSecret._88_8_ + lVar35;
    lVar70 = CONCAT35(XXH3_kSecret._117_3_,XXH3_kSecret._112_5_) + param_3;
    lVar88 = CONCAT35(XXH3_kSecret._125_3_,CONCAT41(XXH3_kSecret._121_4_,XXH3_kSecret[0x78])) +
             lVar35;
    lVar117 = 0x27d4eb2f165667c5;
    lVar120 = 0x9e3779b1;
    local_108 = XXH3_kSecret._96_8_ + param_3;
    lStack_100 = XXH3_kSecret._104_8_ + lVar35;
    local_f8 = (undefined5)lVar70;
    uStack_f3._0_3_ = (undefined3)((ulonglong)lVar70 >> 0x28);
    uStack_f3._3_1_ = (undefined1)lVar88;
    uStack_ef = (uint)((ulonglong)lVar88 >> 8);
    uStack_eb._0_3_ = (undefined3)((ulonglong)lVar88 >> 0x28);
    uStack_eb._3_1_ = (undefined1)lVar121;
    uStack_e7 = (uint)((ulonglong)lVar121 >> 8);
    uStack_e3._0_3_ = (undefined3)((ulonglong)lVar121 >> 0x28);
    uStack_e3._3_1_ = (undefined1)lVar122;
    uStack_df = (uint)((ulonglong)lVar122 >> 8);
    uStack_db._0_3_ = (undefined3)((ulonglong)lVar122 >> 0x28);
    uStack_db._3_1_ = (undefined1)lVar123;
    uStack_d7 = (uint)((ulonglong)lVar123 >> 8);
    uStack_d3._0_3_ = (undefined3)((ulonglong)lVar123 >> 0x28);
    uStack_d3._3_1_ = (undefined1)lVar124;
    uStack_cf = (uint)((ulonglong)lVar124 >> 8);
    uStack_cb._0_3_ = (undefined3)((ulonglong)lVar124 >> 0x28);
    uStack_cb._3_1_ = (undefined1)lVar125;
    uStack_c7 = (uint)((ulonglong)lVar125 >> 8);
    uStack_c3._0_3_ = (undefined3)((ulonglong)lVar125 >> 0x28);
    uStack_c3._3_1_ = (undefined1)lVar126;
    uStack_bf = (uint)((ulonglong)lVar126 >> 8);
    uStack_bb._0_3_ = (undefined3)((ulonglong)lVar126 >> 0x28);
    uStack_bb._3_1_ = (undefined1)lVar127;
    uStack_b7 = (uint)((ulonglong)lVar127 >> 8);
    uStack_b3._0_3_ = (undefined3)((ulonglong)lVar127 >> 0x28);
    uStack_b3._3_1_ = (undefined1)lVar128;
    uStack_af = (undefined7)((ulonglong)lVar128 >> 8);
    if (uVar37 != 0) {
      pauVar33 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
      uVar36 = uVar37;
      do {
        lVar35 = 0x10;
        puVar34 = (uint *)&local_148;
        do {
          auVar80 = pauVar33[-1];
          uVar38 = puVar34[-8] ^ auVar80._0_4_;
          uVar89 = puVar34[-7] ^ auVar80._4_4_;
          auVar55._0_8_ = auVar80._8_8_;
          auVar55._8_4_ = auVar80._0_4_;
          auVar55._12_4_ = auVar80._4_4_;
          auVar79._4_4_ = uVar38;
          auVar79._0_4_ = uVar89;
          auVar79._8_4_ = puVar34[-5] ^ auVar80._12_4_;
          auVar79._12_4_ = uVar38;
          auVar94 = *pauVar33;
          uVar67 = puVar34[-4] ^ auVar94._0_4_;
          uVar91 = puVar34[-3] ^ auVar94._4_4_;
          auVar56._0_8_ = auVar94._8_8_;
          auVar56._8_4_ = auVar94._0_4_;
          auVar56._12_4_ = auVar94._4_4_;
          lVar112 = lVar112 + auVar55._0_8_ + (ulonglong)uVar89 * (ulonglong)uVar38;
          lVar116 = lVar116 + auVar55._8_8_ +
                    (auVar79._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-6] ^ auVar80._8_4_);
          auVar80._4_4_ = uVar67;
          auVar80._0_4_ = uVar91;
          auVar80._8_4_ = puVar34[-1] ^ auVar94._12_4_;
          auVar80._12_4_ = uVar67;
          lVar104 = lVar104 + auVar56._0_8_ + (ulonglong)uVar91 * (ulonglong)uVar67;
          lVar110 = lVar110 + auVar56._8_8_ +
                    (auVar80._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-2] ^ auVar94._8_4_);
          auVar80 = pauVar33[1];
          uVar38 = auVar80._0_4_ ^ *puVar34;
          uVar89 = auVar80._4_4_ ^ puVar34[1];
          auVar57._0_8_ = auVar80._8_8_;
          auVar57._8_4_ = auVar80._0_4_;
          auVar57._12_4_ = auVar80._4_4_;
          auVar81._4_4_ = uVar38;
          auVar81._0_4_ = uVar89;
          auVar81._8_4_ = auVar80._12_4_ ^ puVar34[3];
          auVar81._12_4_ = uVar38;
          auVar94 = pauVar33[2];
          pauVar33 = pauVar33 + 4;
          uVar67 = puVar34[4] ^ auVar94._0_4_;
          uVar91 = puVar34[5] ^ auVar94._4_4_;
          auVar58._0_8_ = auVar94._8_8_;
          auVar58._8_4_ = auVar94._0_4_;
          auVar58._12_4_ = auVar94._4_4_;
          lVar97 = lVar97 + auVar57._0_8_ + (ulonglong)uVar89 * (ulonglong)uVar38;
          lVar102 = lVar102 + auVar57._8_8_ +
                    (auVar81._8_8_ & 0xffffffff) * (ulonglong)(auVar80._8_4_ ^ puVar34[2]);
          auVar82._4_4_ = uVar67;
          auVar82._0_4_ = uVar91;
          auVar82._8_4_ = puVar34[7] ^ auVar94._12_4_;
          auVar82._12_4_ = uVar67;
          lVar117 = lVar117 + auVar58._0_8_ + (ulonglong)uVar91 * (ulonglong)uVar67;
          lVar120 = lVar120 + auVar58._8_8_ +
                    (auVar82._8_8_ & 0xffffffff) * (ulonglong)(puVar34[6] ^ auVar94._8_4_);
          lVar35 = lVar35 + -1;
          puVar34 = puVar34 + 2;
        } while (lVar35 != 0);
        uVar38 = (uint)((ulonglong)lVar112 >> 0x20);
        uVar89 = (uint)((ulonglong)lVar116 >> 0x20);
        uVar68 = uVar38 >> 0xf ^ (uint)lVar112 ^ (uint)lVar121;
        uVar38 = uVar38 ^ (uint)((ulonglong)lVar121 >> 0x20);
        auVar114._4_4_ = uVar68;
        auVar114._0_4_ = uVar38;
        auVar114._8_4_ = uVar89 ^ (uint)((ulonglong)lVar122 >> 0x20);
        auVar114._12_4_ = uVar68;
        uVar67 = (uint)((ulonglong)lVar104 >> 0x20);
        uVar91 = (uint)((ulonglong)lVar110 >> 0x20);
        uVar69 = uVar67 >> 0xf ^ (uint)lVar104 ^ (uint)lVar123;
        uVar67 = uVar67 ^ (uint)((ulonglong)lVar123 >> 0x20);
        auVar108._4_4_ = uVar69;
        auVar108._0_4_ = uVar67;
        auVar108._8_4_ = uVar91 ^ (uint)((ulonglong)lVar124 >> 0x20);
        auVar108._12_4_ = uVar69;
        lVar112 = ((ulonglong)uVar38 * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
                  (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 * (ulonglong)uVar68;
        lVar116 = ((auVar114._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (ulonglong)_UNK_15066df88 *
                  (ulonglong)(uVar89 >> 0xf ^ (uint)lVar116 ^ (uint)lVar122);
        uVar38 = (uint)((ulonglong)lVar97 >> 0x20);
        uVar89 = (uint)((ulonglong)lVar102 >> 0x20);
        uVar68 = uVar38 >> 0xf ^ (uint)lVar97 ^ (uint)lVar125;
        uVar38 = uVar38 ^ (uint)((ulonglong)lVar125 >> 0x20);
        auVar94._4_4_ = uVar68;
        auVar94._0_4_ = uVar38;
        auVar94._8_4_ = uVar89 ^ (uint)((ulonglong)lVar126 >> 0x20);
        auVar94._12_4_ = uVar68;
        lVar104 = ((ulonglong)uVar67 * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
                  (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 * (ulonglong)uVar69;
        lVar110 = ((auVar108._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (ulonglong)_UNK_15066df88 *
                  (ulonglong)(uVar91 >> 0xf ^ (uint)lVar110 ^ (uint)lVar124);
        uVar67 = (uint)((ulonglong)lVar117 >> 0x20);
        uVar91 = (uint)((ulonglong)lVar120 >> 0x20);
        uVar69 = uVar67 >> 0xf ^ (uint)lVar117 ^ (uint)lVar127;
        uVar67 = uVar67 ^ (uint)((ulonglong)lVar127 >> 0x20);
        auVar119._4_4_ = uVar69;
        auVar119._0_4_ = uVar67;
        auVar119._8_4_ = uVar91 ^ (uint)((ulonglong)lVar128 >> 0x20);
        auVar119._12_4_ = uVar69;
        lVar97 = ((ulonglong)uVar38 * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
                 (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 * (ulonglong)uVar68;
        lVar102 = ((auVar94._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (ulonglong)_UNK_15066df88 *
                  (ulonglong)(uVar89 >> 0xf ^ (uint)lVar102 ^ (uint)lVar126);
        lVar117 = ((ulonglong)uVar67 * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
                  (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 * (ulonglong)uVar69;
        lVar120 = ((auVar119._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (ulonglong)_UNK_15066df88 *
                  (ulonglong)(uVar91 >> 0xf ^ (uint)lVar120 ^ (uint)lVar128);
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
    uVar36 = (param_2 + uVar37 * -0x400) - 1 >> 6;
    if (uVar36 != 0) {
      pauVar33 = (undefined1 (*) [16])((longlong)param_1 + uVar37 * 0x400 + 0x10);
      puVar34 = (uint *)&local_148;
      do {
        auVar80 = pauVar33[-1];
        uVar38 = puVar34[-8] ^ auVar80._0_4_;
        uVar67 = puVar34[-7] ^ auVar80._4_4_;
        auVar59._0_8_ = auVar80._8_8_;
        auVar59._8_4_ = auVar80._0_4_;
        auVar59._12_4_ = auVar80._4_4_;
        auVar83._4_4_ = uVar38;
        auVar83._0_4_ = uVar67;
        auVar83._8_4_ = puVar34[-5] ^ auVar80._12_4_;
        auVar83._12_4_ = uVar38;
        auVar94 = *pauVar33;
        lVar112 = lVar112 + auVar59._0_8_ + (ulonglong)uVar67 * (ulonglong)uVar38;
        lVar116 = lVar116 + auVar59._8_8_ +
                  (auVar83._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-6] ^ auVar80._8_4_);
        uVar38 = puVar34[-4] ^ auVar94._0_4_;
        uVar67 = puVar34[-3] ^ auVar94._4_4_;
        auVar60._0_8_ = auVar94._8_8_;
        auVar60._8_4_ = auVar94._0_4_;
        auVar60._12_4_ = auVar94._4_4_;
        auVar84._4_4_ = uVar38;
        auVar84._0_4_ = uVar67;
        auVar84._8_4_ = puVar34[-1] ^ auVar94._12_4_;
        auVar84._12_4_ = uVar38;
        auVar80 = pauVar33[1];
        lVar104 = lVar104 + auVar60._0_8_ + (ulonglong)uVar67 * (ulonglong)uVar38;
        lVar110 = lVar110 + auVar60._8_8_ +
                  (auVar84._8_8_ & 0xffffffff) * (ulonglong)(puVar34[-2] ^ auVar94._8_4_);
        uVar38 = *puVar34 ^ auVar80._0_4_;
        uVar67 = puVar34[1] ^ auVar80._4_4_;
        auVar61._0_8_ = auVar80._8_8_;
        auVar61._8_4_ = auVar80._0_4_;
        auVar61._12_4_ = auVar80._4_4_;
        auVar85._4_4_ = uVar38;
        auVar85._0_4_ = uVar67;
        auVar85._8_4_ = puVar34[3] ^ auVar80._12_4_;
        auVar85._12_4_ = uVar38;
        auVar94 = pauVar33[2];
        lVar97 = lVar97 + auVar61._0_8_ + (ulonglong)uVar67 * (ulonglong)uVar38;
        lVar102 = lVar102 + auVar61._8_8_ +
                  (auVar85._8_8_ & 0xffffffff) * (ulonglong)(puVar34[2] ^ auVar80._8_4_);
        uVar38 = puVar34[4] ^ auVar94._0_4_;
        uVar67 = puVar34[5] ^ auVar94._4_4_;
        auVar62._0_8_ = auVar94._8_8_;
        auVar62._8_4_ = auVar94._0_4_;
        auVar62._12_4_ = auVar94._4_4_;
        auVar86._4_4_ = uVar38;
        auVar86._0_4_ = uVar67;
        auVar86._8_4_ = puVar34[7] ^ auVar94._12_4_;
        auVar86._12_4_ = uVar38;
        lVar117 = lVar117 + auVar62._0_8_ + (ulonglong)uVar67 * (ulonglong)uVar38;
        lVar120 = lVar120 + auVar62._8_8_ +
                  (auVar86._8_8_ & 0xffffffff) * (ulonglong)(puVar34[6] ^ auVar94._8_4_);
        uVar36 = uVar36 - 1;
        pauVar33 = pauVar33 + 4;
        puVar34 = puVar34 + 2;
      } while (uVar36 != 0);
    }
    auVar80 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x40));
    auVar94 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x20));
    uVar38 = uStack_ef ^ auVar80._0_4_;
    uVar67 = uStack_eb ^ auVar80._4_4_;
    auVar101._4_4_ = uVar38;
    auVar101._0_4_ = uVar67;
    auVar101._8_4_ = uStack_e3 ^ auVar80._12_4_;
    auVar101._12_4_ = uVar38;
    auVar63._0_8_ = auVar80._8_8_;
    auVar63._8_4_ = auVar80._0_4_;
    auVar63._12_4_ = auVar80._4_4_;
    auVar55 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x30));
    uVar92 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar63._0_8_ + lVar112;
    uVar96 = (auVar101._8_8_ & 0xffffffff) * (ulonglong)(uStack_e7 ^ auVar80._8_4_) +
             auVar63._8_8_ + lVar116;
    uVar38 = uStack_df ^ auVar55._0_4_;
    uVar67 = uStack_db ^ auVar55._4_4_;
    auVar115._4_4_ = uVar38;
    auVar115._0_4_ = uVar67;
    auVar115._8_4_ = uStack_d3 ^ auVar55._12_4_;
    auVar115._12_4_ = uVar38;
    auVar64._0_8_ = auVar55._8_8_;
    auVar64._8_4_ = auVar55._0_4_;
    auVar64._12_4_ = auVar55._4_4_;
    uVar105 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar64._0_8_ + lVar104;
    uVar111 = (auVar115._8_8_ & 0xffffffff) * (ulonglong)(uStack_d7 ^ auVar55._8_4_) +
              auVar64._8_8_ + lVar110;
    uVar38 = auVar94._0_4_ ^ uStack_cf;
    uVar67 = auVar94._4_4_ ^ uStack_cb;
    auVar65._0_8_ = auVar94._8_8_;
    auVar65._8_4_ = auVar94._0_4_;
    auVar65._12_4_ = auVar94._4_4_;
    auVar80 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x10));
    auVar109._4_4_ = uVar38;
    auVar109._0_4_ = uVar67;
    auVar109._8_4_ = auVar94._12_4_ ^ uStack_c3;
    auVar109._12_4_ = uVar38;
    uVar98 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar65._0_8_ + lVar97;
    uVar103 = (auVar109._8_8_ & 0xffffffff) * (ulonglong)(auVar94._8_4_ ^ uStack_c7) +
              auVar65._8_8_ + lVar102;
    uVar38 = auVar80._0_4_ ^ uStack_bf;
    uVar67 = auVar80._4_4_ ^ uStack_bb;
    auVar66._0_8_ = auVar80._8_8_;
    auVar66._8_4_ = auVar80._0_4_;
    auVar66._12_4_ = auVar80._4_4_;
    auVar95._4_4_ = uVar38;
    auVar95._0_4_ = uVar67;
    auVar95._8_4_ = auVar80._12_4_ ^ uStack_b3;
    auVar95._12_4_ = uVar38;
    uVar36 = (ulonglong)uVar67 * (ulonglong)uVar38 + auVar66._0_8_ + lVar117;
    uVar87 = (auVar95._8_8_ & 0xffffffff) * (ulonglong)(auVar80._8_4_ ^ uStack_b7) +
             auVar66._8_8_ + lVar120;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = CONCAT35((undefined3)uStack_150,uStack_158._3_5_) ^ uVar96;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = CONCAT35((undefined3)uStack_158,uStack_160._3_5_) ^ uVar92;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = CONCAT35((undefined3)uStack_140,local_148._3_5_) ^ uVar111;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = CONCAT35((undefined3)local_148,uStack_150._3_5_) ^ uVar105;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = CONCAT35((undefined3)uStack_130,uStack_138._3_5_) ^ uVar103;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = CONCAT35((undefined3)uStack_138,uStack_140._3_5_) ^ uVar98;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = CONCAT35(uStack_120,uStack_125) ^ uVar87;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = CONCAT35(local_128,uStack_130._3_5_) ^ uVar36;
    uVar37 = (SUB168(auVar12 * auVar28,0) ^ SUB168(auVar12 * auVar28,8)) +
             (SUB168(auVar9 * auVar25,0) ^ SUB168(auVar9 * auVar25,8)) +
             param_2 * -0x61c8864e7a143579 +
             (SUB168(auVar10 * auVar26,0) ^ SUB168(auVar10 * auVar26,8)) +
             (SUB168(auVar11 * auVar27,0) ^ SUB168(auVar11 * auVar27,8));
    uVar37 = (uVar37 >> 0x25 ^ uVar37) * 0x165667919e3779f9;
    __return_storage_ptr__->low64 = uVar37 >> 0x20 ^ uVar37;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = CONCAT44(uStack_e7,uStack_eb) ^ uVar96;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = CONCAT44(uStack_ef,uStack_f3) ^ uVar92;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = CONCAT44(uStack_d7,uStack_db) ^ uVar111;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = CONCAT44(uStack_df,uStack_e3) ^ uVar105;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = CONCAT44(uStack_c7,uStack_cb) ^ uVar103;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = CONCAT44(uStack_cf,uStack_d3) ^ uVar98;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = CONCAT44(uStack_b7,uStack_bb) ^ uVar87;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = CONCAT44(uStack_bf,uStack_c3) ^ uVar36;
    uVar37 = (SUB168(auVar16 * auVar32,0) ^ SUB168(auVar16 * auVar32,8)) +
             (SUB168(auVar13 * auVar29,0) ^ SUB168(auVar13 * auVar29,8)) +
             ~(param_2 * -0x3d4d51c2d82b14b1) +
             (SUB168(auVar14 * auVar30,0) ^ SUB168(auVar14 * auVar30,8)) +
             (SUB168(auVar15 * auVar31,0) ^ SUB168(auVar15 * auVar31,8));
    uVar37 = (uVar37 >> 0x25 ^ uVar37) * 0x165667919e3779f9;
    __return_storage_ptr__->high64 = uVar37 >> 0x20 ^ uVar37;
  }
  return __return_storage_ptr__;
}

// XXH3_hashLong_64b_default @ 14171c860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl
XXH3_hashLong_64b_default
          (void *param_1,ulong64 param_2,ulong64 param_3,uchar *param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  longlong lVar48;
  longlong lVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  longlong lVar52;
  longlong lVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  longlong lVar56;
  longlong lVar58;
  undefined1 auVar57 [16];
  longlong lVar59;
  longlong lVar61;
  undefined1 auVar60 [16];
  
  uVar12 = param_2 - 1 >> 10;
  lVar52 = -0x3d4d51c2d82b14b1;
  lVar55 = 0x165667b19e3779f9;
  lVar59 = -0x7a1435883d4d519d;
  lVar61 = 0x85ebca77;
  lVar56 = 0x27d4eb2f165667c5;
  lVar58 = 0x9e3779b1;
  lVar48 = 0xc2b2ae3d;
  lVar51 = -0x61c8864e7a143579;
  if (uVar12 != 0) {
    pauVar9 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
    uVar13 = uVar12;
    do {
      lVar11 = 0x10;
      puVar10 = (uint *)(XXH3_kSecret + 0x20);
      do {
        auVar31 = pauVar9[-1];
        uVar38 = puVar10[-8] ^ auVar31._0_4_;
        uVar41 = puVar10[-7] ^ auVar31._4_4_;
        auVar14._0_8_ = auVar31._8_8_;
        auVar14._8_4_ = auVar31._0_4_;
        auVar14._12_4_ = auVar31._4_4_;
        auVar30._4_4_ = uVar38;
        auVar30._0_4_ = uVar41;
        auVar30._8_4_ = puVar10[-5] ^ auVar31._12_4_;
        auVar30._12_4_ = uVar38;
        auVar18 = *pauVar9;
        uVar39 = puVar10[-4] ^ auVar18._0_4_;
        uVar42 = puVar10[-3] ^ auVar18._4_4_;
        auVar15._0_8_ = auVar18._8_8_;
        auVar15._8_4_ = auVar18._0_4_;
        auVar15._12_4_ = auVar18._4_4_;
        lVar48 = lVar48 + auVar14._0_8_ + (ulonglong)uVar41 * (ulonglong)uVar38;
        lVar51 = lVar51 + auVar14._8_8_ +
                 (auVar30._8_8_ & 0xffffffff) * (ulonglong)(puVar10[-6] ^ auVar31._8_4_);
        auVar31._4_4_ = uVar39;
        auVar31._0_4_ = uVar42;
        auVar31._8_4_ = puVar10[-1] ^ auVar18._12_4_;
        auVar31._12_4_ = uVar39;
        lVar52 = lVar52 + auVar15._0_8_ + (ulonglong)uVar42 * (ulonglong)uVar39;
        lVar55 = lVar55 + auVar15._8_8_ +
                 (auVar31._8_8_ & 0xffffffff) * (ulonglong)(puVar10[-2] ^ auVar18._8_4_);
        auVar31 = pauVar9[1];
        uVar38 = auVar31._0_4_ ^ *puVar10;
        uVar41 = auVar31._4_4_ ^ puVar10[1];
        auVar16._0_8_ = auVar31._8_8_;
        auVar16._8_4_ = auVar31._0_4_;
        auVar16._12_4_ = auVar31._4_4_;
        auVar32._4_4_ = uVar38;
        auVar32._0_4_ = uVar41;
        auVar32._8_4_ = auVar31._12_4_ ^ puVar10[3];
        auVar32._12_4_ = uVar38;
        auVar18 = pauVar9[2];
        pauVar9 = pauVar9 + 4;
        uVar39 = puVar10[4] ^ auVar18._0_4_;
        uVar42 = puVar10[5] ^ auVar18._4_4_;
        auVar17._0_8_ = auVar18._8_8_;
        auVar17._8_4_ = auVar18._0_4_;
        auVar17._12_4_ = auVar18._4_4_;
        lVar59 = lVar59 + auVar16._0_8_ + (ulonglong)uVar41 * (ulonglong)uVar38;
        lVar61 = lVar61 + auVar16._8_8_ +
                 (auVar32._8_8_ & 0xffffffff) * (ulonglong)(auVar31._8_4_ ^ puVar10[2]);
        auVar33._4_4_ = uVar39;
        auVar33._0_4_ = uVar42;
        auVar33._8_4_ = puVar10[7] ^ auVar18._12_4_;
        auVar33._12_4_ = uVar39;
        lVar56 = lVar56 + auVar17._0_8_ + (ulonglong)uVar42 * (ulonglong)uVar39;
        lVar58 = lVar58 + auVar17._8_8_ +
                 (auVar33._8_8_ & 0xffffffff) * (ulonglong)(puVar10[6] ^ auVar18._8_4_);
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 2;
      } while (lVar11 != 0);
      uVar38 = (uint)((ulonglong)lVar48 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar51 >> 0x20);
      auVar18._0_4_ =
           uVar38 >> 0xf ^ (uint)lVar48 ^ CONCAT31(XXH3_kSecret._129_3_,XXH3_kSecret[0x80]);
      auVar18._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._133_3_,XXH3_kSecret[0x84]);
      auVar18._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar51 ^ CONCAT31(XXH3_kSecret._137_3_,XXH3_kSecret[0x88]);
      auVar18._12_4_ = uVar39 ^ CONCAT31(XXH3_kSecret._141_3_,XXH3_kSecret[0x8c]);
      auVar49._4_4_ = auVar18._0_4_;
      auVar49._0_4_ = auVar18._4_4_;
      auVar49._8_4_ = auVar18._12_4_;
      auVar49._12_4_ = auVar18._0_4_;
      lVar48 = ((ulonglong)auVar18._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar18._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar51 = ((auVar49._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar18._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar38 = (uint)((ulonglong)lVar52 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar55 >> 0x20);
      auVar19._0_4_ =
           uVar38 >> 0xf ^ (uint)lVar52 ^ CONCAT31(XXH3_kSecret._145_3_,XXH3_kSecret[0x90]);
      auVar19._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._149_3_,XXH3_kSecret[0x94]);
      auVar19._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar55 ^ CONCAT31(XXH3_kSecret._153_3_,XXH3_kSecret[0x98]);
      auVar19._12_4_ = uVar39 ^ CONCAT31(XXH3_kSecret._157_3_,XXH3_kSecret[0x9c]);
      auVar53._4_4_ = auVar19._0_4_;
      auVar53._0_4_ = auVar19._4_4_;
      auVar53._8_4_ = auVar19._12_4_;
      auVar53._12_4_ = auVar19._0_4_;
      lVar52 = ((ulonglong)auVar19._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar19._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar55 = ((auVar53._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar19._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar38 = (uint)((ulonglong)lVar59 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar61 >> 0x20);
      auVar20._0_4_ =
           uVar38 >> 0xf ^ (uint)lVar59 ^ CONCAT31(XXH3_kSecret._161_3_,XXH3_kSecret[0xa0]);
      auVar20._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._165_3_,XXH3_kSecret[0xa4]);
      auVar20._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar61 ^ CONCAT31(XXH3_kSecret._169_3_,XXH3_kSecret[0xa8]);
      auVar20._12_4_ = uVar39 ^ CONCAT31(XXH3_kSecret._173_3_,XXH3_kSecret[0xac]);
      auVar60._4_4_ = auVar20._0_4_;
      auVar60._0_4_ = auVar20._4_4_;
      auVar60._8_4_ = auVar20._12_4_;
      auVar60._12_4_ = auVar20._0_4_;
      lVar59 = ((ulonglong)auVar20._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar20._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar61 = ((auVar60._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar20._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar38 = (uint)((ulonglong)lVar56 >> 0x20);
      uVar39 = (uint)((ulonglong)lVar58 >> 0x20);
      auVar21._0_4_ =
           uVar38 >> 0xf ^ (uint)lVar56 ^ CONCAT31(XXH3_kSecret._177_3_,XXH3_kSecret[0xb0]);
      auVar21._4_4_ = uVar38 ^ CONCAT31(XXH3_kSecret._181_3_,XXH3_kSecret[0xb4]);
      auVar21._8_4_ =
           uVar39 >> 0xf ^ (uint)lVar58 ^ CONCAT31(XXH3_kSecret._185_3_,XXH3_kSecret[0xb8]);
      auVar21._12_4_ = uVar39 ^ XXH3_kSecret._188_4_;
      auVar57._4_4_ = auVar21._0_4_;
      auVar57._0_4_ = auVar21._4_4_;
      auVar57._8_4_ = auVar21._12_4_;
      auVar57._12_4_ = auVar21._0_4_;
      lVar56 = ((ulonglong)auVar21._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
               0x20) + (ulonglong)auVar21._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1
      ;
      lVar58 = ((auVar57._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
               (auVar21._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = (param_2 + uVar12 * -0x400) - 1 >> 6;
  if (uVar13 != 0) {
    pauVar9 = (undefined1 (*) [16])((longlong)param_1 + uVar12 * 0x400 + 0x10);
    puVar10 = (uint *)(XXH3_kSecret + 0x20);
    do {
      auVar31 = pauVar9[-1];
      auVar18 = pauVar9[1];
      uVar38 = puVar10[-8] ^ auVar31._0_4_;
      uVar39 = puVar10[-7] ^ auVar31._4_4_;
      auVar34._4_4_ = uVar38;
      auVar34._0_4_ = uVar39;
      auVar34._8_4_ = puVar10[-5] ^ auVar31._12_4_;
      auVar34._12_4_ = uVar38;
      auVar22._0_8_ = auVar31._8_8_;
      auVar22._8_4_ = auVar31._0_4_;
      auVar22._12_4_ = auVar31._4_4_;
      auVar14 = *pauVar9;
      lVar48 = (ulonglong)uVar39 * (ulonglong)uVar38 + auVar22._0_8_ + lVar48;
      lVar51 = (auVar34._8_8_ & 0xffffffff) * (ulonglong)(puVar10[-6] ^ auVar31._8_4_) +
               auVar22._8_8_ + lVar51;
      uVar38 = puVar10[-4] ^ auVar14._0_4_;
      uVar39 = puVar10[-3] ^ auVar14._4_4_;
      auVar35._4_4_ = uVar38;
      auVar35._0_4_ = uVar39;
      auVar35._8_4_ = puVar10[-1] ^ auVar14._12_4_;
      auVar35._12_4_ = uVar38;
      auVar23._0_8_ = auVar14._8_8_;
      auVar23._8_4_ = auVar14._0_4_;
      auVar23._12_4_ = auVar14._4_4_;
      lVar52 = (ulonglong)uVar39 * (ulonglong)uVar38 + auVar23._0_8_ + lVar52;
      lVar55 = (auVar35._8_8_ & 0xffffffff) * (ulonglong)(puVar10[-2] ^ auVar14._8_4_) +
               auVar23._8_8_ + lVar55;
      uVar38 = auVar18._0_4_ ^ *puVar10;
      uVar39 = auVar18._4_4_ ^ puVar10[1];
      auVar24._0_8_ = auVar18._8_8_;
      auVar24._8_4_ = auVar18._0_4_;
      auVar24._12_4_ = auVar18._4_4_;
      auVar40._4_4_ = uVar38;
      auVar40._0_4_ = uVar39;
      auVar40._8_4_ = auVar18._12_4_ ^ puVar10[3];
      auVar40._12_4_ = uVar38;
      lVar59 = (ulonglong)uVar39 * (ulonglong)uVar38 + auVar24._0_8_ + lVar59;
      lVar61 = (auVar40._8_8_ & 0xffffffff) * (ulonglong)(auVar18._8_4_ ^ puVar10[2]) +
               auVar24._8_8_ + lVar61;
      auVar31 = pauVar9[2];
      uVar38 = puVar10[4] ^ auVar31._0_4_;
      uVar39 = puVar10[5] ^ auVar31._4_4_;
      auVar25._0_8_ = auVar31._8_8_;
      auVar25._8_4_ = auVar31._0_4_;
      auVar25._12_4_ = auVar31._4_4_;
      auVar36._4_4_ = uVar38;
      auVar36._0_4_ = uVar39;
      auVar36._8_4_ = puVar10[7] ^ auVar31._12_4_;
      auVar36._12_4_ = uVar38;
      lVar56 = lVar56 + auVar25._0_8_ + (ulonglong)uVar39 * (ulonglong)uVar38;
      lVar58 = lVar58 + auVar25._8_8_ +
               (auVar36._8_8_ & 0xffffffff) * (ulonglong)(puVar10[6] ^ auVar31._8_4_);
      uVar13 = uVar13 - 1;
      pauVar9 = pauVar9 + 4;
      puVar10 = puVar10 + 2;
    } while (uVar13 != 0);
  }
  auVar31 = *(undefined1 (*) [16])((param_2 - 0x40) + (longlong)param_1);
  auVar47._0_8_ = auVar31._8_8_;
  auVar47._8_4_ = auVar31._0_4_;
  auVar47._12_4_ = auVar31._4_4_;
  auVar18 = *(undefined1 (*) [16])((param_2 - 0x30) + (longlong)param_1);
  uVar38 = auVar31._0_4_ ^ XXH3_kSecret._121_4_;
  uVar43 = auVar31._4_4_ ^ XXH3_kSecret._125_4_;
  auVar26._4_4_ = uVar38;
  auVar26._0_4_ = uVar43;
  auVar26._8_4_ = auVar31._12_4_ ^ XXH3_kSecret._133_4_;
  auVar26._12_4_ = uVar38;
  auVar50._0_8_ = auVar18._8_8_;
  auVar50._8_4_ = auVar18._0_4_;
  auVar50._12_4_ = auVar18._4_4_;
  auVar14 = *(undefined1 (*) [16])((param_2 - 0x20) + (longlong)param_1);
  auVar54._0_8_ = auVar14._8_8_;
  auVar54._8_4_ = auVar14._0_4_;
  auVar54._12_4_ = auVar14._4_4_;
  uVar39 = auVar18._0_4_ ^ XXH3_kSecret._137_4_;
  uVar44 = auVar18._4_4_ ^ XXH3_kSecret._141_4_;
  auVar27._4_4_ = uVar39;
  auVar27._0_4_ = uVar44;
  auVar27._8_4_ = auVar18._12_4_ ^ XXH3_kSecret._149_4_;
  auVar27._12_4_ = uVar39;
  auVar15 = *(undefined1 (*) [16])((param_2 - 0x10) + (longlong)param_1);
  uVar41 = auVar14._0_4_ ^ XXH3_kSecret._153_4_;
  uVar45 = auVar14._4_4_ ^ XXH3_kSecret._157_4_;
  auVar28._4_4_ = uVar41;
  auVar28._0_4_ = uVar45;
  auVar28._8_4_ = auVar14._12_4_ ^ XXH3_kSecret._165_4_;
  auVar28._12_4_ = uVar41;
  auVar37._0_8_ = auVar15._8_8_;
  auVar37._8_4_ = auVar15._0_4_;
  auVar37._12_4_ = auVar15._4_4_;
  uVar42 = auVar15._0_4_ ^ XXH3_kSecret._169_4_;
  uVar46 = auVar15._4_4_ ^ XXH3_kSecret._173_4_;
  auVar29._4_4_ = uVar42;
  auVar29._0_4_ = uVar46;
  auVar29._8_4_ = auVar15._12_4_ ^ XXH3_kSecret._181_4_;
  auVar29._12_4_ = uVar42;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = XXH3_kSecret._19_8_ ^
                 auVar47._8_8_ + lVar51 +
                 (auVar26._8_8_ & 0xffffffff) * (ulonglong)(auVar31._8_4_ ^ XXH3_kSecret._129_4_);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = XXH3_kSecret._11_8_ ^
                 auVar47._0_8_ + lVar48 + (ulonglong)uVar43 * (ulonglong)uVar38;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = XXH3_kSecret._35_8_ ^
                 auVar50._8_8_ + lVar55 +
                 (auVar27._8_8_ & 0xffffffff) * (ulonglong)(auVar18._8_4_ ^ XXH3_kSecret._145_4_);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = XXH3_kSecret._27_8_ ^
                 auVar50._0_8_ + lVar52 + (ulonglong)uVar44 * (ulonglong)uVar39;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = XXH3_kSecret._51_8_ ^
                 auVar54._8_8_ + lVar61 +
                 (auVar28._8_8_ & 0xffffffff) * (ulonglong)(auVar14._8_4_ ^ XXH3_kSecret._161_4_);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = XXH3_kSecret._43_8_ ^
                 auVar54._0_8_ + lVar59 + (ulonglong)uVar45 * (ulonglong)uVar41;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = XXH3_kSecret._67_8_ ^
                 auVar37._8_8_ + lVar58 +
                 (auVar29._8_8_ & 0xffffffff) * (ulonglong)(auVar15._8_4_ ^ XXH3_kSecret._177_4_);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = XXH3_kSecret._59_8_ ^
                 auVar37._0_8_ + lVar56 + (ulonglong)uVar46 * (ulonglong)uVar42;
  uVar12 = (SUB168(auVar4 * auVar8,0) ^ SUB168(auVar4 * auVar8,8)) +
           (SUB168(auVar1 * auVar5,0) ^ SUB168(auVar1 * auVar5,8)) + param_2 * -0x61c8864e7a143579 +
           (SUB168(auVar2 * auVar6,0) ^ SUB168(auVar2 * auVar6,8)) +
           (SUB168(auVar3 * auVar7,0) ^ SUB168(auVar3 * auVar7,8));
  uVar12 = (uVar12 >> 0x25 ^ uVar12) * 0x165667919e3779f9;
  return uVar12 >> 0x20 ^ uVar12;
}

// XXH3_hashLong_64b_withSecret @ 14171cd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl
XXH3_hashLong_64b_withSecret
          (void *param_1,ulong64 param_2,ulong64 param_3,uchar *param_4,ulong64 param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar46;
  uint uVar47;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar48;
  uint uVar49;
  uint uVar52;
  undefined1 auVar50 [16];
  uint uVar53;
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  auVar58._8_8_ = 0x9e3779b185ebca87;
  auVar58._0_8_ = 0xc2b2ae3d;
  auVar55._8_8_ = 0x165667b19e3779f9;
  auVar55._0_8_ = 0xc2b2ae3d27d4eb4f;
  auVar63._8_8_ = 0x85ebca77;
  auVar63._0_8_ = 0x85ebca77c2b2ae63;
  auVar61._8_8_ = 0x9e3779b1;
  auVar61._0_8_ = 0x27d4eb2f165667c5;
  uVar19 = param_5 - 0x40 >> 3;
  uVar12 = (param_2 - 1) / (uVar19 * 0x40);
  if (uVar12 != 0) {
    puVar16 = (uint *)(param_4 + (param_5 - 0x40));
    puVar1 = (uint *)(param_4 + (param_5 - 0x30));
    puVar2 = (uint *)(param_4 + (param_5 - 0x20));
    puVar3 = (uint *)(param_4 + (param_5 - 0x10));
    pauVar14 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
    uVar18 = uVar12;
    do {
      if (uVar19 != 0) {
        pauVar13 = pauVar14;
        puVar15 = (uint *)(param_4 + 0x20);
        uVar17 = uVar19;
        do {
          auVar22 = pauVar13[-1];
          auVar24 = pauVar13[1];
          uVar48 = puVar15[-8] ^ auVar22._0_4_;
          uVar52 = puVar15[-7] ^ auVar22._4_4_;
          auVar21._0_8_ = auVar22._8_8_;
          auVar21._8_4_ = auVar22._0_4_;
          auVar21._12_4_ = auVar22._4_4_;
          auVar39._4_4_ = uVar48;
          auVar39._0_4_ = uVar52;
          auVar39._8_4_ = puVar15[-5] ^ auVar22._12_4_;
          auVar39._12_4_ = uVar48;
          lVar20 = auVar58._8_8_;
          auVar23 = *pauVar13;
          auVar58._0_8_ = auVar58._0_8_ + auVar21._0_8_ + (ulonglong)uVar52 * (ulonglong)uVar48;
          auVar58._8_8_ =
               lVar20 + auVar21._8_8_ +
               (auVar39._8_8_ & 0xffffffff) * (ulonglong)(puVar15[-6] ^ auVar22._8_4_);
          uVar48 = puVar15[-4] ^ auVar23._0_4_;
          uVar52 = puVar15[-3] ^ auVar23._4_4_;
          auVar40._4_4_ = uVar48;
          auVar40._0_4_ = uVar52;
          auVar40._8_4_ = puVar15[-1] ^ auVar23._12_4_;
          auVar40._12_4_ = uVar48;
          auVar22._0_8_ = auVar23._8_8_;
          auVar22._8_4_ = auVar23._0_4_;
          auVar22._12_4_ = auVar23._4_4_;
          lVar20 = auVar55._8_8_;
          auVar55._0_8_ = (ulonglong)uVar52 * (ulonglong)uVar48 + auVar22._0_8_ + auVar55._0_8_;
          auVar55._8_8_ =
               (auVar40._8_8_ & 0xffffffff) * (ulonglong)(puVar15[-2] ^ auVar23._8_4_) +
               auVar22._8_8_ + lVar20;
          uVar48 = auVar24._0_4_ ^ *puVar15;
          uVar52 = auVar24._4_4_ ^ puVar15[1];
          auVar23._0_8_ = auVar24._8_8_;
          auVar23._8_4_ = auVar24._0_4_;
          auVar23._12_4_ = auVar24._4_4_;
          auVar50._4_4_ = uVar48;
          auVar50._0_4_ = uVar52;
          auVar50._8_4_ = auVar24._12_4_ ^ puVar15[3];
          auVar50._12_4_ = uVar48;
          lVar20 = auVar63._8_8_;
          auVar63._0_8_ = (ulonglong)uVar52 * (ulonglong)uVar48 + auVar23._0_8_ + auVar63._0_8_;
          auVar63._8_8_ =
               (auVar50._8_8_ & 0xffffffff) * (ulonglong)(auVar24._8_4_ ^ puVar15[2]) +
               auVar23._8_8_ + lVar20;
          auVar22 = pauVar13[2];
          uVar48 = puVar15[4] ^ auVar22._0_4_;
          uVar52 = puVar15[5] ^ auVar22._4_4_;
          auVar24._0_8_ = auVar22._8_8_;
          auVar24._8_4_ = auVar22._0_4_;
          auVar24._12_4_ = auVar22._4_4_;
          auVar41._4_4_ = uVar48;
          auVar41._0_4_ = uVar52;
          auVar41._8_4_ = puVar15[7] ^ auVar22._12_4_;
          auVar41._12_4_ = uVar48;
          lVar20 = auVar61._8_8_;
          auVar61._0_8_ = auVar61._0_8_ + auVar24._0_8_ + (ulonglong)uVar52 * (ulonglong)uVar48;
          auVar61._8_8_ =
               lVar20 + auVar24._8_8_ +
               (auVar41._8_8_ & 0xffffffff) * (ulonglong)(puVar15[6] ^ auVar22._8_4_);
          uVar17 = uVar17 - 1;
          pauVar13 = pauVar13 + 4;
          puVar15 = puVar15 + 2;
        } while (uVar17 != 0);
      }
      pauVar14 = pauVar14 + uVar19 * 4;
      auVar25._0_4_ = auVar58._4_4_ >> 0xf ^ auVar58._0_4_ ^ *puVar16;
      auVar25._4_4_ = auVar58._4_4_ ^ puVar16[1];
      auVar25._8_4_ = auVar58._12_4_ >> 0xf ^ auVar58._8_4_ ^ puVar16[2];
      auVar25._12_4_ = auVar58._12_4_ ^ puVar16[3];
      auVar59._4_4_ = auVar25._0_4_;
      auVar59._0_4_ = auVar25._4_4_;
      auVar59._8_4_ = auVar25._12_4_;
      auVar59._12_4_ = auVar25._0_4_;
      auVar58._0_8_ =
           ((ulonglong)auVar25._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
           (ulonglong)auVar25._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
      auVar58._8_8_ =
           ((auVar59._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
           (auVar25._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      auVar26._0_4_ = auVar55._4_4_ >> 0xf ^ auVar55._0_4_ ^ *puVar1;
      auVar26._4_4_ = auVar55._4_4_ ^ puVar1[1];
      auVar26._8_4_ = auVar55._12_4_ >> 0xf ^ auVar55._8_4_ ^ puVar1[2];
      auVar26._12_4_ = auVar55._12_4_ ^ puVar1[3];
      auVar56._4_4_ = auVar26._0_4_;
      auVar56._0_4_ = auVar26._4_4_;
      auVar56._8_4_ = auVar26._12_4_;
      auVar56._12_4_ = auVar26._0_4_;
      auVar55._0_8_ =
           ((ulonglong)auVar26._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
           (ulonglong)auVar26._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
      auVar55._8_8_ =
           ((auVar56._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
           (auVar26._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      auVar27._0_4_ = auVar63._4_4_ >> 0xf ^ auVar63._0_4_ ^ *puVar2;
      auVar27._4_4_ = auVar63._4_4_ ^ puVar2[1];
      auVar27._8_4_ = auVar63._12_4_ >> 0xf ^ auVar63._8_4_ ^ puVar2[2];
      auVar27._12_4_ = auVar63._12_4_ ^ puVar2[3];
      auVar64._4_4_ = auVar27._0_4_;
      auVar64._0_4_ = auVar27._4_4_;
      auVar64._8_4_ = auVar27._12_4_;
      auVar64._12_4_ = auVar27._0_4_;
      auVar63._0_8_ =
           ((ulonglong)auVar27._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
           (ulonglong)auVar27._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
      auVar63._8_8_ =
           ((auVar64._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
           (auVar27._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      auVar28._0_4_ = auVar61._4_4_ >> 0xf ^ auVar61._0_4_ ^ *puVar3;
      auVar28._4_4_ = auVar61._4_4_ ^ puVar3[1];
      auVar28._8_4_ = auVar61._12_4_ >> 0xf ^ auVar61._8_4_ ^ puVar3[2];
      auVar28._12_4_ = auVar61._12_4_ ^ puVar3[3];
      auVar62._4_4_ = auVar28._0_4_;
      auVar62._0_4_ = auVar28._4_4_;
      auVar62._8_4_ = auVar28._12_4_;
      auVar62._12_4_ = auVar28._0_4_;
      auVar61._0_8_ =
           ((ulonglong)auVar28._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
           (ulonglong)auVar28._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
      auVar61._8_8_ =
           ((auVar62._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
           (auVar28._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  lVar20 = uVar12 * uVar19 * 0x40;
  uVar12 = (param_2 - lVar20) - 1 >> 6;
  if (uVar12 != 0) {
    pauVar14 = (undefined1 (*) [16])((longlong)param_1 + lVar20 + 0x10);
    puVar16 = (uint *)(param_4 + 0x20);
    do {
      auVar22 = pauVar14[-1];
      uVar48 = puVar16[-8] ^ auVar22._0_4_;
      uVar52 = puVar16[-7] ^ auVar22._4_4_;
      auVar29._0_8_ = auVar22._8_8_;
      auVar29._8_4_ = auVar22._0_4_;
      auVar29._12_4_ = auVar22._4_4_;
      auVar42._4_4_ = uVar48;
      auVar42._0_4_ = uVar52;
      auVar42._8_4_ = puVar16[-5] ^ auVar22._12_4_;
      auVar42._12_4_ = uVar48;
      lVar20 = auVar58._8_8_;
      auVar24 = *pauVar14;
      auVar58._0_8_ = auVar58._0_8_ + auVar29._0_8_ + (ulonglong)uVar52 * (ulonglong)uVar48;
      auVar58._8_8_ =
           lVar20 + auVar29._8_8_ +
           (auVar42._8_8_ & 0xffffffff) * (ulonglong)(puVar16[-6] ^ auVar22._8_4_);
      uVar48 = puVar16[-4] ^ auVar24._0_4_;
      uVar52 = puVar16[-3] ^ auVar24._4_4_;
      auVar30._0_8_ = auVar24._8_8_;
      auVar30._8_4_ = auVar24._0_4_;
      auVar30._12_4_ = auVar24._4_4_;
      auVar43._4_4_ = uVar48;
      auVar43._0_4_ = uVar52;
      auVar43._8_4_ = puVar16[-1] ^ auVar24._12_4_;
      auVar43._12_4_ = uVar48;
      lVar20 = auVar55._8_8_;
      auVar55._0_8_ = auVar55._0_8_ + auVar30._0_8_ + (ulonglong)uVar52 * (ulonglong)uVar48;
      auVar55._8_8_ =
           lVar20 + auVar30._8_8_ +
           (auVar43._8_8_ & 0xffffffff) * (ulonglong)(puVar16[-2] ^ auVar24._8_4_);
      auVar22 = pauVar14[1];
      uVar48 = auVar22._0_4_ ^ *puVar16;
      uVar52 = auVar22._4_4_ ^ puVar16[1];
      auVar31._0_8_ = auVar22._8_8_;
      auVar31._8_4_ = auVar22._0_4_;
      auVar31._12_4_ = auVar22._4_4_;
      auVar44._4_4_ = uVar48;
      auVar44._0_4_ = uVar52;
      auVar44._8_4_ = auVar22._12_4_ ^ puVar16[3];
      auVar44._12_4_ = uVar48;
      lVar20 = auVar63._8_8_;
      auVar24 = pauVar14[2];
      auVar63._0_8_ = auVar63._0_8_ + auVar31._0_8_ + (ulonglong)uVar52 * (ulonglong)uVar48;
      auVar63._8_8_ =
           lVar20 + auVar31._8_8_ +
           (auVar44._8_8_ & 0xffffffff) * (ulonglong)(auVar22._8_4_ ^ puVar16[2]);
      uVar48 = puVar16[4] ^ auVar24._0_4_;
      uVar52 = puVar16[5] ^ auVar24._4_4_;
      auVar32._0_8_ = auVar24._8_8_;
      auVar32._8_4_ = auVar24._0_4_;
      auVar32._12_4_ = auVar24._4_4_;
      auVar45._4_4_ = uVar48;
      auVar45._0_4_ = uVar52;
      auVar45._8_4_ = puVar16[7] ^ auVar24._12_4_;
      auVar45._12_4_ = uVar48;
      lVar20 = auVar61._8_8_;
      auVar61._0_8_ = auVar61._0_8_ + auVar32._0_8_ + (ulonglong)uVar52 * (ulonglong)uVar48;
      auVar61._8_8_ =
           lVar20 + auVar32._8_8_ +
           (auVar45._8_8_ & 0xffffffff) * (ulonglong)(puVar16[6] ^ auVar24._8_4_);
      uVar12 = uVar12 - 1;
      pauVar14 = pauVar14 + 4;
      puVar16 = puVar16 + 2;
    } while (uVar12 != 0);
  }
  auVar22 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x40));
  puVar16 = (uint *)(param_4 + (param_5 - 0x47));
  auVar54._0_8_ = auVar22._8_8_;
  auVar54._8_4_ = auVar22._0_4_;
  auVar54._12_4_ = auVar22._4_4_;
  puVar1 = (uint *)(param_4 + (param_5 - 0x37));
  uVar49 = auVar22._0_4_ ^ *puVar16;
  uVar53 = auVar22._4_4_ ^ puVar16[1];
  auVar33._4_4_ = uVar49;
  auVar33._0_4_ = uVar53;
  auVar33._8_4_ = auVar22._12_4_ ^ puVar16[3];
  auVar33._12_4_ = uVar49;
  auVar24 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x30));
  uVar37 = *puVar1 ^ auVar24._0_4_;
  uVar46 = puVar1[1] ^ auVar24._4_4_;
  auVar60._0_8_ = auVar24._8_8_;
  auVar60._8_4_ = auVar24._0_4_;
  auVar60._12_4_ = auVar24._4_4_;
  auVar34._4_4_ = uVar37;
  auVar34._0_4_ = uVar46;
  auVar34._8_4_ = puVar1[3] ^ auVar24._12_4_;
  auVar34._12_4_ = uVar37;
  puVar2 = (uint *)(param_4 + (param_5 - 0x27));
  auVar23 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x20));
  uVar38 = *puVar2 ^ auVar23._0_4_;
  uVar47 = puVar2[1] ^ auVar23._4_4_;
  auVar57._0_8_ = auVar23._8_8_;
  auVar57._8_4_ = auVar23._0_4_;
  auVar57._12_4_ = auVar23._4_4_;
  auVar35._4_4_ = uVar38;
  auVar35._0_4_ = uVar47;
  auVar35._8_4_ = puVar2[3] ^ auVar23._12_4_;
  auVar35._12_4_ = uVar38;
  auVar21 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x10));
  puVar3 = (uint *)(param_4 + (param_5 - 0x17));
  uVar48 = *puVar3 ^ auVar21._0_4_;
  uVar52 = puVar3[1] ^ auVar21._4_4_;
  auVar51._4_4_ = uVar48;
  auVar51._0_4_ = uVar52;
  auVar51._8_4_ = puVar3[3] ^ auVar21._12_4_;
  auVar51._12_4_ = uVar48;
  auVar36._0_8_ = auVar21._8_8_;
  auVar36._8_4_ = auVar21._0_4_;
  auVar36._12_4_ = auVar21._4_4_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar54._8_8_ + auVar58._8_8_ +
                 (auVar33._8_8_ & 0xffffffff) * (ulonglong)(auVar22._8_4_ ^ puVar16[2]) ^
                 *(ulonglong *)(param_4 + 0x13);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar54._0_8_ + auVar58._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar49 ^
                 *(ulonglong *)(param_4 + 0xb);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar60._8_8_ + auVar55._8_8_ +
                 (auVar34._8_8_ & 0xffffffff) * (ulonglong)(puVar1[2] ^ auVar24._8_4_) ^
                 *(ulonglong *)(param_4 + 0x23);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar60._0_8_ + auVar55._0_8_ + (ulonglong)uVar46 * (ulonglong)uVar37 ^
                 *(ulonglong *)(param_4 + 0x1b);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar57._8_8_ + auVar63._8_8_ +
                 (auVar35._8_8_ & 0xffffffff) * (ulonglong)(puVar2[2] ^ auVar23._8_4_) ^
                 *(ulonglong *)(param_4 + 0x33);
  auVar10._8_8_ = 0;
  auVar10._0_8_ =
       auVar57._0_8_ + auVar63._0_8_ + (ulonglong)uVar47 * (ulonglong)uVar38 ^
       *(ulonglong *)(param_4 + 0x2b);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (auVar51._8_8_ & 0xffffffff) * (ulonglong)(puVar3[2] ^ auVar21._8_4_) +
                 auVar36._8_8_ + auVar61._8_8_ ^ *(ulonglong *)(param_4 + 0x43);
  auVar11._8_8_ = 0;
  auVar11._0_8_ =
       (ulonglong)uVar52 * (ulonglong)uVar48 + auVar36._0_8_ + auVar61._0_8_ ^
       *(ulonglong *)(param_4 + 0x3b);
  uVar12 = (SUB168(auVar7 * auVar11,0) ^ SUB168(auVar7 * auVar11,8)) +
           (SUB168(auVar4 * auVar8,0) ^ SUB168(auVar4 * auVar8,8)) + param_2 * -0x61c8864e7a143579 +
           (SUB168(auVar5 * auVar9,0) ^ SUB168(auVar5 * auVar9,8)) +
           (SUB168(auVar6 * auVar10,0) ^ SUB168(auVar6 * auVar10,8));
  uVar12 = (uVar12 >> 0x25 ^ uVar12) * 0x165667919e3779f9;
  return uVar12 >> 0x20 ^ uVar12;
}

// XXH3_hashLong_64b_withSeed @ 14171d2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl
XXH3_hashLong_64b_withSeed
          (void *param_1,ulong64 param_2,ulong64 param_3,uchar *param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong64 uVar17;
  undefined1 (*pauVar18) [16];
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  longlong lVar55;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar71;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar72;
  uint uVar73;
  uint uVar74;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  uint uVar75;
  uint uVar76;
  uint uVar79;
  uint uVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  longlong lVar83;
  longlong lVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  longlong lVar89;
  longlong lVar94;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  longlong lVar95;
  longlong lVar99;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  longlong lVar100;
  longlong lVar103;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  longlong lVar104;
  longlong lVar105;
  longlong lVar106;
  longlong lVar107;
  longlong lVar108;
  longlong lVar109;
  longlong lVar110;
  undefined1 local_188 [64];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined3 local_108;
  undefined5 uStack_105;
  undefined3 uStack_100;
  undefined5 uStack_fd;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined1 uStack_d0;
  uint uStack_cf;
  undefined4 uStack_cb;
  uint uStack_c7;
  undefined4 uStack_c3;
  uint uStack_bf;
  undefined4 uStack_bb;
  uint uStack_b7;
  undefined4 uStack_b3;
  uint uStack_af;
  undefined4 uStack_ab;
  uint uStack_a7;
  undefined4 uStack_a3;
  uint uStack_9f;
  undefined4 uStack_9b;
  uint uStack_97;
  undefined4 uStack_93;
  undefined7 uStack_8f;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)local_188;
  uVar21 = param_2 - 1 >> 10;
  if (param_3 == 0) {
    lVar95 = -0x3d4d51c2d82b14b1;
    lVar99 = 0x165667b19e3779f9;
    lVar83 = -0x7a1435883d4d519d;
    lVar88 = 0x85ebca77;
    lVar100 = 0x27d4eb2f165667c5;
    lVar103 = 0x9e3779b1;
    lVar89 = 0xc2b2ae3d;
    lVar94 = -0x61c8864e7a143579;
    if (uVar21 != 0) {
      pauVar18 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
      uVar22 = uVar21;
      do {
        lVar20 = 0x10;
        puVar19 = (uint *)(XXH3_kSecret + 0x20);
        do {
          auVar64 = pauVar18[-1];
          auVar43 = pauVar18[1];
          uVar75 = puVar19[-8] ^ auVar64._0_4_;
          uVar79 = puVar19[-7] ^ auVar64._4_4_;
          auVar23._0_8_ = auVar64._8_8_;
          auVar23._8_4_ = auVar64._0_4_;
          auVar23._12_4_ = auVar64._4_4_;
          auVar56._4_4_ = uVar75;
          auVar56._0_4_ = uVar79;
          auVar56._8_4_ = puVar19[-5] ^ auVar64._12_4_;
          auVar56._12_4_ = uVar75;
          auVar39 = *pauVar18;
          uVar76 = puVar19[-4] ^ auVar39._0_4_;
          uVar80 = puVar19[-3] ^ auVar39._4_4_;
          auVar24._0_8_ = auVar39._8_8_;
          auVar24._8_4_ = auVar39._0_4_;
          auVar24._12_4_ = auVar39._4_4_;
          lVar89 = lVar89 + auVar23._0_8_ + (ulonglong)uVar79 * (ulonglong)uVar75;
          lVar94 = lVar94 + auVar23._8_8_ +
                   (auVar56._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-6] ^ auVar64._8_4_);
          auVar57._4_4_ = uVar76;
          auVar57._0_4_ = uVar80;
          auVar57._8_4_ = puVar19[-1] ^ auVar39._12_4_;
          auVar57._12_4_ = uVar76;
          lVar95 = lVar95 + auVar24._0_8_ + (ulonglong)uVar80 * (ulonglong)uVar76;
          lVar99 = lVar99 + auVar24._8_8_ +
                   (auVar57._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-2] ^ auVar39._8_4_);
          uVar75 = auVar43._0_4_ ^ *puVar19;
          uVar76 = auVar43._4_4_ ^ puVar19[1];
          auVar25._0_8_ = auVar43._8_8_;
          auVar25._8_4_ = auVar43._0_4_;
          auVar25._12_4_ = auVar43._4_4_;
          auVar77._4_4_ = uVar75;
          auVar77._0_4_ = uVar76;
          auVar77._8_4_ = auVar43._12_4_ ^ puVar19[3];
          auVar77._12_4_ = uVar75;
          lVar83 = (ulonglong)uVar76 * (ulonglong)uVar75 + auVar25._0_8_ + lVar83;
          lVar88 = (auVar77._8_8_ & 0xffffffff) * (ulonglong)(auVar43._8_4_ ^ puVar19[2]) +
                   auVar25._8_8_ + lVar88;
          auVar64 = pauVar18[2];
          pauVar18 = pauVar18 + 4;
          uVar75 = puVar19[4] ^ auVar64._0_4_;
          uVar76 = puVar19[5] ^ auVar64._4_4_;
          auVar26._0_8_ = auVar64._8_8_;
          auVar26._8_4_ = auVar64._0_4_;
          auVar26._12_4_ = auVar64._4_4_;
          auVar58._4_4_ = uVar75;
          auVar58._0_4_ = uVar76;
          auVar58._8_4_ = puVar19[7] ^ auVar64._12_4_;
          auVar58._12_4_ = uVar75;
          lVar100 = lVar100 + auVar26._0_8_ + (ulonglong)uVar76 * (ulonglong)uVar75;
          lVar103 = lVar103 + auVar26._8_8_ +
                    (auVar58._8_8_ & 0xffffffff) * (ulonglong)(puVar19[6] ^ auVar64._8_4_);
          lVar20 = lVar20 + -1;
          puVar19 = puVar19 + 2;
        } while (lVar20 != 0);
        uVar75 = (uint)((ulonglong)lVar89 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar94 >> 0x20);
        auVar27._0_4_ =
             uVar75 >> 0xf ^ (uint)lVar89 ^ CONCAT31(XXH3_kSecret._129_3_,XXH3_kSecret[0x80]);
        auVar27._4_4_ = uVar75 ^ CONCAT31(XXH3_kSecret._133_3_,XXH3_kSecret[0x84]);
        auVar27._8_4_ =
             uVar76 >> 0xf ^ (uint)lVar94 ^ CONCAT31(XXH3_kSecret._137_3_,XXH3_kSecret[0x88]);
        auVar27._12_4_ = uVar76 ^ CONCAT31(XXH3_kSecret._141_3_,XXH3_kSecret[0x8c]);
        auVar90._4_4_ = auVar27._0_4_;
        auVar90._0_4_ = auVar27._4_4_;
        auVar90._8_4_ = auVar27._12_4_;
        auVar90._12_4_ = auVar27._0_4_;
        lVar89 = ((ulonglong)auVar27._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                 0x20) + (ulonglong)auVar27._0_4_ *
                         (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar94 = ((auVar90._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                 (auVar27._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar75 = (uint)((ulonglong)lVar95 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar99 >> 0x20);
        auVar28._0_4_ =
             uVar75 >> 0xf ^ (uint)lVar95 ^ CONCAT31(XXH3_kSecret._145_3_,XXH3_kSecret[0x90]);
        auVar28._4_4_ = uVar75 ^ CONCAT31(XXH3_kSecret._149_3_,XXH3_kSecret[0x94]);
        auVar28._8_4_ =
             uVar76 >> 0xf ^ (uint)lVar99 ^ CONCAT31(XXH3_kSecret._153_3_,XXH3_kSecret[0x98]);
        auVar28._12_4_ = uVar76 ^ CONCAT31(XXH3_kSecret._157_3_,XXH3_kSecret[0x9c]);
        auVar96._4_4_ = auVar28._0_4_;
        auVar96._0_4_ = auVar28._4_4_;
        auVar96._8_4_ = auVar28._12_4_;
        auVar96._12_4_ = auVar28._0_4_;
        lVar95 = ((ulonglong)auVar28._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                 0x20) + (ulonglong)auVar28._0_4_ *
                         (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar99 = ((auVar96._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                 (auVar28._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar75 = (uint)((ulonglong)lVar83 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar88 >> 0x20);
        auVar29._0_4_ =
             uVar75 >> 0xf ^ (uint)lVar83 ^ CONCAT31(XXH3_kSecret._161_3_,XXH3_kSecret[0xa0]);
        auVar29._4_4_ = uVar75 ^ CONCAT31(XXH3_kSecret._165_3_,XXH3_kSecret[0xa4]);
        auVar29._8_4_ =
             uVar76 >> 0xf ^ (uint)lVar88 ^ CONCAT31(XXH3_kSecret._169_3_,XXH3_kSecret[0xa8]);
        auVar29._12_4_ = uVar76 ^ CONCAT31(XXH3_kSecret._173_3_,XXH3_kSecret[0xac]);
        auVar84._4_4_ = auVar29._0_4_;
        auVar84._0_4_ = auVar29._4_4_;
        auVar84._8_4_ = auVar29._12_4_;
        auVar84._12_4_ = auVar29._0_4_;
        lVar83 = ((ulonglong)auVar29._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                 0x20) + (ulonglong)auVar29._0_4_ *
                         (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar88 = ((auVar84._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                 (auVar29._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar75 = (uint)((ulonglong)lVar100 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar103 >> 0x20);
        auVar30._0_4_ =
             uVar75 >> 0xf ^ (uint)lVar100 ^ CONCAT31(XXH3_kSecret._177_3_,XXH3_kSecret[0xb0]);
        auVar30._4_4_ = uVar75 ^ CONCAT31(XXH3_kSecret._181_3_,XXH3_kSecret[0xb4]);
        auVar30._8_4_ =
             uVar76 >> 0xf ^ (uint)lVar103 ^ CONCAT31(XXH3_kSecret._185_3_,XXH3_kSecret[0xb8]);
        auVar30._12_4_ = uVar76 ^ XXH3_kSecret._188_4_;
        auVar101._4_4_ = auVar30._0_4_;
        auVar101._0_4_ = auVar30._4_4_;
        auVar101._8_4_ = auVar30._12_4_;
        auVar101._12_4_ = auVar30._0_4_;
        lVar100 = ((ulonglong)auVar30._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                  0x20) + (ulonglong)auVar30._0_4_ *
                          (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar103 = ((auVar101._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (auVar30._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    uVar22 = (param_2 + uVar21 * -0x400) - 1 >> 6;
    if (uVar22 != 0) {
      pauVar18 = (undefined1 (*) [16])((longlong)param_1 + uVar21 * 0x400 + 0x10);
      puVar19 = (uint *)(XXH3_kSecret + 0x20);
      do {
        auVar64 = pauVar18[-1];
        uVar75 = puVar19[-8] ^ auVar64._0_4_;
        uVar76 = puVar19[-7] ^ auVar64._4_4_;
        auVar59._4_4_ = uVar75;
        auVar59._0_4_ = uVar76;
        auVar59._8_4_ = puVar19[-5] ^ auVar64._12_4_;
        auVar59._12_4_ = uVar75;
        auVar31._0_8_ = auVar64._8_8_;
        auVar31._8_4_ = auVar64._0_4_;
        auVar31._12_4_ = auVar64._4_4_;
        auVar43 = *pauVar18;
        lVar89 = (ulonglong)uVar76 * (ulonglong)uVar75 + auVar31._0_8_ + lVar89;
        lVar94 = (auVar59._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-6] ^ auVar64._8_4_) +
                 auVar31._8_8_ + lVar94;
        uVar75 = puVar19[-4] ^ auVar43._0_4_;
        uVar76 = puVar19[-3] ^ auVar43._4_4_;
        auVar60._4_4_ = uVar75;
        auVar60._0_4_ = uVar76;
        auVar60._8_4_ = puVar19[-1] ^ auVar43._12_4_;
        auVar60._12_4_ = uVar75;
        auVar32._0_8_ = auVar43._8_8_;
        auVar32._8_4_ = auVar43._0_4_;
        auVar32._12_4_ = auVar43._4_4_;
        lVar95 = (ulonglong)uVar76 * (ulonglong)uVar75 + auVar32._0_8_ + lVar95;
        lVar99 = (auVar60._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-2] ^ auVar43._8_4_) +
                 auVar32._8_8_ + lVar99;
        auVar64 = pauVar18[1];
        uVar75 = *puVar19 ^ auVar64._0_4_;
        uVar76 = puVar19[1] ^ auVar64._4_4_;
        auVar33._0_8_ = auVar64._8_8_;
        auVar33._8_4_ = auVar64._0_4_;
        auVar33._12_4_ = auVar64._4_4_;
        auVar61._4_4_ = uVar75;
        auVar61._0_4_ = uVar76;
        auVar61._8_4_ = puVar19[3] ^ auVar64._12_4_;
        auVar61._12_4_ = uVar75;
        auVar43 = pauVar18[2];
        lVar83 = lVar83 + auVar33._0_8_ + (ulonglong)uVar76 * (ulonglong)uVar75;
        lVar88 = lVar88 + auVar33._8_8_ +
                 (auVar61._8_8_ & 0xffffffff) * (ulonglong)(puVar19[2] ^ auVar64._8_4_);
        uVar75 = puVar19[4] ^ auVar43._0_4_;
        uVar76 = puVar19[5] ^ auVar43._4_4_;
        auVar62._4_4_ = uVar75;
        auVar62._0_4_ = uVar76;
        auVar62._8_4_ = puVar19[7] ^ auVar43._12_4_;
        auVar62._12_4_ = uVar75;
        auVar34._0_8_ = auVar43._8_8_;
        auVar34._8_4_ = auVar43._0_4_;
        auVar34._12_4_ = auVar43._4_4_;
        lVar100 = (ulonglong)uVar76 * (ulonglong)uVar75 + auVar34._0_8_ + lVar100;
        lVar103 = (auVar62._8_8_ & 0xffffffff) * (ulonglong)(puVar19[6] ^ auVar43._8_4_) +
                  auVar34._8_8_ + lVar103;
        uVar22 = uVar22 - 1;
        pauVar18 = pauVar18 + 4;
        puVar19 = puVar19 + 2;
      } while (uVar22 != 0);
    }
    auVar64 = *(undefined1 (*) [16])((param_2 - 0x40) + (longlong)param_1);
    uVar75 = auVar64._0_4_ ^ XXH3_kSecret._121_4_;
    uVar71 = auVar64._4_4_ ^ XXH3_kSecret._125_4_;
    auVar35._0_8_ = auVar64._8_8_;
    auVar35._8_4_ = auVar64._0_4_;
    auVar35._12_4_ = auVar64._4_4_;
    auVar43 = *(undefined1 (*) [16])((param_2 - 0x30) + (longlong)param_1);
    auVar81._4_4_ = uVar75;
    auVar81._0_4_ = uVar71;
    auVar81._8_4_ = auVar64._12_4_ ^ XXH3_kSecret._133_4_;
    auVar81._12_4_ = uVar75;
    uVar76 = auVar43._0_4_ ^ XXH3_kSecret._137_4_;
    uVar72 = auVar43._4_4_ ^ XXH3_kSecret._141_4_;
    auVar36._0_8_ = auVar43._8_8_;
    auVar36._8_4_ = auVar43._0_4_;
    auVar36._12_4_ = auVar43._4_4_;
    auVar39 = *(undefined1 (*) [16])((param_2 - 0x20) + (longlong)param_1);
    auVar91._4_4_ = uVar76;
    auVar91._0_4_ = uVar72;
    auVar91._8_4_ = auVar43._12_4_ ^ XXH3_kSecret._149_4_;
    auVar91._12_4_ = uVar76;
    uVar79 = auVar39._0_4_ ^ XXH3_kSecret._153_4_;
    uVar73 = auVar39._4_4_ ^ XXH3_kSecret._157_4_;
    auVar37._0_8_ = auVar39._8_8_;
    auVar37._8_4_ = auVar39._0_4_;
    auVar37._12_4_ = auVar39._4_4_;
    auVar40 = *(undefined1 (*) [16])((param_2 - 0x10) + (longlong)param_1);
    auVar97._4_4_ = uVar79;
    auVar97._0_4_ = uVar73;
    auVar97._8_4_ = auVar39._12_4_ ^ XXH3_kSecret._165_4_;
    auVar97._12_4_ = uVar79;
    uVar80 = auVar40._0_4_ ^ XXH3_kSecret._169_4_;
    uVar74 = auVar40._4_4_ ^ XXH3_kSecret._173_4_;
    auVar38._0_8_ = auVar40._8_8_;
    auVar38._8_4_ = auVar40._0_4_;
    auVar38._12_4_ = auVar40._4_4_;
    auVar85._4_4_ = uVar80;
    auVar85._0_4_ = uVar74;
    auVar85._8_4_ = auVar40._12_4_ ^ XXH3_kSecret._181_4_;
    auVar85._12_4_ = uVar80;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT35(XXH3_kSecret._24_3_,XXH3_kSecret._19_5_) ^
                   (auVar81._8_8_ & 0xffffffff) * (ulonglong)(auVar64._8_4_ ^ XXH3_kSecret._129_4_)
                   + auVar35._8_8_ + lVar94;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = CONCAT35(XXH3_kSecret._16_3_,XXH3_kSecret._11_5_) ^
                   (ulonglong)uVar71 * (ulonglong)uVar75 + auVar35._0_8_ + lVar89;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT35(XXH3_kSecret._40_3_,XXH3_kSecret._35_5_) ^
                   (auVar91._8_8_ & 0xffffffff) * (ulonglong)(auVar43._8_4_ ^ XXH3_kSecret._145_4_)
                   + auVar36._8_8_ + lVar99;
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         CONCAT35(XXH3_kSecret._32_3_,XXH3_kSecret._27_5_) ^
         (ulonglong)uVar72 * (ulonglong)uVar76 + auVar36._0_8_ + lVar95;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (auVar97._8_8_ & 0xffffffff) * (ulonglong)(auVar39._8_4_ ^ XXH3_kSecret._161_4_)
                   + auVar37._8_8_ + lVar88 ^ CONCAT35(XXH3_kSecret._56_3_,XXH3_kSecret._51_5_);
    auVar11._8_8_ = 0;
    auVar11._0_8_ =
         CONCAT35(XXH3_kSecret._48_3_,XXH3_kSecret._43_5_) ^
         (ulonglong)uVar73 * (ulonglong)uVar79 + auVar37._0_8_ + lVar83;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (auVar85._8_8_ & 0xffffffff) * (ulonglong)(auVar40._8_4_ ^ XXH3_kSecret._177_4_)
                   + auVar38._8_8_ + lVar103 ^ CONCAT35(XXH3_kSecret._72_3_,XXH3_kSecret._67_5_);
    auVar12._8_8_ = 0;
    auVar12._0_8_ =
         (ulonglong)uVar74 * (ulonglong)uVar80 + auVar38._0_8_ + lVar100 ^
         CONCAT35(XXH3_kSecret._64_3_,XXH3_kSecret._59_5_);
    uVar21 = (SUB168(auVar4 * auVar12,0) ^ SUB168(auVar4 * auVar12,8)) +
             (SUB168(auVar1 * auVar9,0) ^ SUB168(auVar1 * auVar9,8)) + param_2 * -0x61c8864e7a143579
             + (SUB168(auVar2 * auVar10,0) ^ SUB168(auVar2 * auVar10,8)) +
             (SUB168(auVar3 * auVar11,0) ^ SUB168(auVar3 * auVar11,8));
    uVar21 = (uVar21 >> 0x25 ^ uVar21) * 0x165667919e3779f9;
    uVar17 = uVar21 >> 0x20 ^ uVar21;
  }
  else {
    lVar20 = -param_3;
    lVar83 = lVar20 + CONCAT53(XXH3_kSecret._11_5_,XXH3_kSecret._8_3_);
    lVar89 = 0xc2b2ae3d;
    lVar94 = -0x61c8864e7a143579;
    lVar105 = param_3 + CONCAT35(XXH3_kSecret._133_3_,
                                 CONCAT41(XXH3_kSecret._129_4_,XXH3_kSecret[0x80]));
    lVar106 = lVar20 + CONCAT35(XXH3_kSecret._141_3_,
                                CONCAT41(XXH3_kSecret._137_4_,XXH3_kSecret[0x88]));
    lVar107 = param_3 + CONCAT35(XXH3_kSecret._149_3_,
                                 CONCAT41(XXH3_kSecret._145_4_,XXH3_kSecret[0x90]));
    lVar108 = lVar20 + CONCAT35(XXH3_kSecret._157_3_,
                                CONCAT41(XXH3_kSecret._153_4_,XXH3_kSecret[0x98]));
    lVar109 = param_3 + CONCAT35(XXH3_kSecret._165_3_,
                                 CONCAT41(XXH3_kSecret._161_4_,XXH3_kSecret[0xa0]));
    lVar110 = lVar20 + CONCAT35(XXH3_kSecret._173_3_,
                                CONCAT41(XXH3_kSecret._169_4_,XXH3_kSecret[0xa8]));
    local_148 = param_3 + XXH3_kSecret._0_8_;
    uStack_140._0_3_ = (undefined3)lVar83;
    uStack_140._3_5_ = (undefined5)((ulonglong)lVar83 >> 0x18);
    lVar83 = param_3 + CONCAT53(XXH3_kSecret._19_5_,XXH3_kSecret._16_3_);
    lVar88 = lVar20 + CONCAT53(XXH3_kSecret._27_5_,XXH3_kSecret._24_3_);
    uStack_138._0_3_ = (undefined3)lVar83;
    uStack_138._3_5_ = (undefined5)((ulonglong)lVar83 >> 0x18);
    uStack_130._0_3_ = (undefined3)lVar88;
    uStack_130._3_5_ = (undefined5)((ulonglong)lVar88 >> 0x18);
    lVar83 = param_3 + CONCAT53(XXH3_kSecret._35_5_,XXH3_kSecret._32_3_);
    lVar88 = lVar20 + CONCAT53(XXH3_kSecret._43_5_,XXH3_kSecret._40_3_);
    local_128._0_3_ = (undefined3)lVar83;
    local_128._3_5_ = (undefined5)((ulonglong)lVar83 >> 0x18);
    uStack_120._0_3_ = (undefined3)lVar88;
    uStack_120._3_5_ = (undefined5)((ulonglong)lVar88 >> 0x18);
    lVar83 = param_3 + CONCAT53(XXH3_kSecret._51_5_,XXH3_kSecret._48_3_);
    lVar88 = lVar20 + CONCAT53(XXH3_kSecret._59_5_,XXH3_kSecret._56_3_);
    uStack_118._0_3_ = (undefined3)lVar83;
    uStack_118._3_5_ = (undefined5)((ulonglong)lVar83 >> 0x18);
    uStack_110._0_3_ = (undefined3)lVar88;
    uStack_110._3_5_ = (undefined5)((ulonglong)lVar88 >> 0x18);
    lVar83 = param_3 + CONCAT53(XXH3_kSecret._67_5_,XXH3_kSecret._64_3_);
    lVar88 = lVar20 + CONCAT53(XXH3_kSecret._75_5_,XXH3_kSecret._72_3_);
    local_108 = (undefined3)lVar83;
    uStack_105 = (undefined5)((ulonglong)lVar83 >> 0x18);
    uStack_100 = (undefined3)lVar88;
    uStack_fd = (undefined5)((ulonglong)lVar88 >> 0x18);
    lVar83 = -0x3d4d51c2d82b14b1;
    lVar88 = 0x165667b19e3779f9;
    local_f8 = param_3 + XXH3_kSecret._80_8_;
    lStack_f0 = lVar20 + XXH3_kSecret._88_8_;
    lVar100 = -0x7a1435883d4d519d;
    lVar103 = 0x85ebca77;
    local_e8 = param_3 + XXH3_kSecret._96_8_;
    lStack_e0 = lVar20 + XXH3_kSecret._104_8_;
    lVar55 = lVar20 + CONCAT35(XXH3_kSecret._125_3_,
                               CONCAT41(XXH3_kSecret._121_4_,XXH3_kSecret[0x78]));
    lVar104 = param_3 + CONCAT35(XXH3_kSecret._181_3_,
                                 CONCAT41(XXH3_kSecret._177_4_,XXH3_kSecret[0xb0]));
    lVar20 = lVar20 + CONCAT44(XXH3_kSecret._188_4_,
                               CONCAT31(XXH3_kSecret._185_3_,XXH3_kSecret[0xb8]));
    lVar95 = 0x27d4eb2f165667c5;
    lVar99 = 0x9e3779b1;
    local_d8 = param_3 + XXH3_kSecret._112_8_;
    uStack_d0 = (undefined1)lVar55;
    uStack_cf = (uint)((ulonglong)lVar55 >> 8);
    uStack_cb._0_3_ = (undefined3)((ulonglong)lVar55 >> 0x28);
    uStack_cb._3_1_ = (undefined1)lVar105;
    uStack_c7 = (uint)((ulonglong)lVar105 >> 8);
    uStack_c3._0_3_ = (undefined3)((ulonglong)lVar105 >> 0x28);
    uStack_c3._3_1_ = (undefined1)lVar106;
    uStack_bf = (uint)((ulonglong)lVar106 >> 8);
    uStack_bb._0_3_ = (undefined3)((ulonglong)lVar106 >> 0x28);
    uStack_bb._3_1_ = (undefined1)lVar107;
    uStack_b7 = (uint)((ulonglong)lVar107 >> 8);
    uStack_b3._0_3_ = (undefined3)((ulonglong)lVar107 >> 0x28);
    uStack_b3._3_1_ = (undefined1)lVar108;
    uStack_af = (uint)((ulonglong)lVar108 >> 8);
    uStack_ab._0_3_ = (undefined3)((ulonglong)lVar108 >> 0x28);
    uStack_ab._3_1_ = (undefined1)lVar109;
    uStack_a7 = (uint)((ulonglong)lVar109 >> 8);
    uStack_a3._0_3_ = (undefined3)((ulonglong)lVar109 >> 0x28);
    uStack_a3._3_1_ = (undefined1)lVar110;
    uStack_9f = (uint)((ulonglong)lVar110 >> 8);
    uStack_9b._0_3_ = (undefined3)((ulonglong)lVar110 >> 0x28);
    uStack_9b._3_1_ = (undefined1)lVar104;
    uStack_97 = (uint)((ulonglong)lVar104 >> 8);
    uStack_93._0_3_ = (undefined3)((ulonglong)lVar104 >> 0x28);
    uStack_93._3_1_ = (undefined1)lVar20;
    uStack_8f = (undefined7)((ulonglong)lVar20 >> 8);
    if (uVar21 != 0) {
      pauVar18 = (undefined1 (*) [16])((longlong)param_1 + 0x10);
      uVar22 = uVar21;
      do {
        lVar55 = 0x10;
        puVar19 = (uint *)&local_128;
        do {
          auVar64 = pauVar18[-1];
          uVar75 = puVar19[-8] ^ auVar64._0_4_;
          uVar79 = puVar19[-7] ^ auVar64._4_4_;
          auVar39._0_8_ = auVar64._8_8_;
          auVar39._8_4_ = auVar64._0_4_;
          auVar39._12_4_ = auVar64._4_4_;
          auVar63._4_4_ = uVar75;
          auVar63._0_4_ = uVar79;
          auVar63._8_4_ = puVar19[-5] ^ auVar64._12_4_;
          auVar63._12_4_ = uVar75;
          auVar43 = *pauVar18;
          uVar76 = puVar19[-4] ^ auVar43._0_4_;
          uVar80 = puVar19[-3] ^ auVar43._4_4_;
          auVar40._0_8_ = auVar43._8_8_;
          auVar40._8_4_ = auVar43._0_4_;
          auVar40._12_4_ = auVar43._4_4_;
          lVar89 = lVar89 + auVar39._0_8_ + (ulonglong)uVar79 * (ulonglong)uVar75;
          lVar94 = lVar94 + auVar39._8_8_ +
                   (auVar63._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-6] ^ auVar64._8_4_);
          auVar64._4_4_ = uVar76;
          auVar64._0_4_ = uVar80;
          auVar64._8_4_ = puVar19[-1] ^ auVar43._12_4_;
          auVar64._12_4_ = uVar76;
          lVar83 = lVar83 + auVar40._0_8_ + (ulonglong)uVar80 * (ulonglong)uVar76;
          lVar88 = lVar88 + auVar40._8_8_ +
                   (auVar64._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-2] ^ auVar43._8_4_);
          auVar64 = pauVar18[1];
          uVar75 = auVar64._0_4_ ^ *puVar19;
          uVar79 = auVar64._4_4_ ^ puVar19[1];
          auVar41._0_8_ = auVar64._8_8_;
          auVar41._8_4_ = auVar64._0_4_;
          auVar41._12_4_ = auVar64._4_4_;
          auVar65._4_4_ = uVar75;
          auVar65._0_4_ = uVar79;
          auVar65._8_4_ = auVar64._12_4_ ^ puVar19[3];
          auVar65._12_4_ = uVar75;
          auVar43 = pauVar18[2];
          pauVar18 = pauVar18 + 4;
          uVar76 = puVar19[4] ^ auVar43._0_4_;
          uVar80 = puVar19[5] ^ auVar43._4_4_;
          auVar42._0_8_ = auVar43._8_8_;
          auVar42._8_4_ = auVar43._0_4_;
          auVar42._12_4_ = auVar43._4_4_;
          lVar100 = lVar100 + auVar41._0_8_ + (ulonglong)uVar79 * (ulonglong)uVar75;
          lVar103 = lVar103 + auVar41._8_8_ +
                    (auVar65._8_8_ & 0xffffffff) * (ulonglong)(auVar64._8_4_ ^ puVar19[2]);
          auVar66._4_4_ = uVar76;
          auVar66._0_4_ = uVar80;
          auVar66._8_4_ = puVar19[7] ^ auVar43._12_4_;
          auVar66._12_4_ = uVar76;
          lVar95 = lVar95 + auVar42._0_8_ + (ulonglong)uVar80 * (ulonglong)uVar76;
          lVar99 = lVar99 + auVar42._8_8_ +
                   (auVar66._8_8_ & 0xffffffff) * (ulonglong)(puVar19[6] ^ auVar43._8_4_);
          lVar55 = lVar55 + -1;
          puVar19 = puVar19 + 2;
        } while (lVar55 != 0);
        uVar75 = (uint)((ulonglong)lVar89 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar94 >> 0x20);
        auVar43._0_4_ = uVar75 >> 0xf ^ (uint)lVar89 ^ (uint)lVar105;
        auVar43._4_4_ = uVar75 ^ (uint)((ulonglong)lVar105 >> 0x20);
        auVar43._8_4_ = uVar76 >> 0xf ^ (uint)lVar94 ^ (uint)lVar106;
        auVar43._12_4_ = uVar76 ^ (uint)((ulonglong)lVar106 >> 0x20);
        auVar92._4_4_ = auVar43._0_4_;
        auVar92._0_4_ = auVar43._4_4_;
        auVar92._8_4_ = auVar43._12_4_;
        auVar92._12_4_ = auVar43._0_4_;
        lVar89 = ((ulonglong)auVar43._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                 0x20) + (ulonglong)auVar43._0_4_ *
                         (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar94 = ((auVar92._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                 (auVar43._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar75 = (uint)((ulonglong)lVar83 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar88 >> 0x20);
        auVar44._0_4_ = uVar75 >> 0xf ^ (uint)lVar83 ^ (uint)lVar107;
        auVar44._4_4_ = uVar75 ^ (uint)((ulonglong)lVar107 >> 0x20);
        auVar44._8_4_ = uVar76 >> 0xf ^ (uint)lVar88 ^ (uint)lVar108;
        auVar44._12_4_ = uVar76 ^ (uint)((ulonglong)lVar108 >> 0x20);
        auVar86._4_4_ = auVar44._0_4_;
        auVar86._0_4_ = auVar44._4_4_;
        auVar86._8_4_ = auVar44._12_4_;
        auVar86._12_4_ = auVar44._0_4_;
        lVar83 = ((ulonglong)auVar44._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                 0x20) + (ulonglong)auVar44._0_4_ *
                         (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar88 = ((auVar86._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                 (auVar44._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar75 = (uint)((ulonglong)lVar100 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar103 >> 0x20);
        auVar45._0_4_ = uVar75 >> 0xf ^ (uint)lVar100 ^ (uint)lVar109;
        auVar45._4_4_ = uVar75 ^ (uint)((ulonglong)lVar109 >> 0x20);
        auVar45._8_4_ = uVar76 >> 0xf ^ (uint)lVar103 ^ (uint)lVar110;
        auVar45._12_4_ = uVar76 ^ (uint)((ulonglong)lVar110 >> 0x20);
        auVar102._4_4_ = auVar45._0_4_;
        auVar102._0_4_ = auVar45._4_4_;
        auVar102._8_4_ = auVar45._12_4_;
        auVar102._12_4_ = auVar45._0_4_;
        lVar100 = ((ulonglong)auVar45._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                  0x20) + (ulonglong)auVar45._0_4_ *
                          (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar103 = ((auVar102._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                  (auVar45._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar75 = (uint)((ulonglong)lVar95 >> 0x20);
        uVar76 = (uint)((ulonglong)lVar99 >> 0x20);
        auVar46._0_4_ = uVar75 >> 0xf ^ (uint)lVar95 ^ (uint)lVar104;
        auVar46._4_4_ = uVar75 ^ (uint)((ulonglong)lVar104 >> 0x20);
        auVar46._8_4_ = uVar76 >> 0xf ^ (uint)lVar99 ^ (uint)lVar20;
        auVar46._12_4_ = uVar76 ^ (uint)((ulonglong)lVar20 >> 0x20);
        auVar98._4_4_ = auVar46._0_4_;
        auVar98._0_4_ = auVar46._4_4_;
        auVar98._8_4_ = auVar46._12_4_;
        auVar98._12_4_ = auVar46._0_4_;
        lVar95 = ((ulonglong)auVar46._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 <<
                 0x20) + (ulonglong)auVar46._0_4_ *
                         (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        lVar99 = ((auVar98._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
                 (auVar46._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    uVar22 = (param_2 + uVar21 * -0x400) - 1 >> 6;
    if (uVar22 != 0) {
      pauVar18 = (undefined1 (*) [16])((longlong)param_1 + uVar21 * 0x400 + 0x10);
      puVar19 = (uint *)&local_128;
      do {
        auVar64 = pauVar18[-1];
        uVar75 = puVar19[-8] ^ auVar64._0_4_;
        uVar76 = puVar19[-7] ^ auVar64._4_4_;
        auVar67._4_4_ = uVar75;
        auVar67._0_4_ = uVar76;
        auVar67._8_4_ = puVar19[-5] ^ auVar64._12_4_;
        auVar67._12_4_ = uVar75;
        auVar47._0_8_ = auVar64._8_8_;
        auVar47._8_4_ = auVar64._0_4_;
        auVar47._12_4_ = auVar64._4_4_;
        auVar43 = *pauVar18;
        lVar89 = (ulonglong)uVar76 * (ulonglong)uVar75 + auVar47._0_8_ + lVar89;
        lVar94 = (auVar67._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-6] ^ auVar64._8_4_) +
                 auVar47._8_8_ + lVar94;
        uVar75 = puVar19[-4] ^ auVar43._0_4_;
        uVar76 = puVar19[-3] ^ auVar43._4_4_;
        auVar68._4_4_ = uVar75;
        auVar68._0_4_ = uVar76;
        auVar68._8_4_ = puVar19[-1] ^ auVar43._12_4_;
        auVar68._12_4_ = uVar75;
        auVar48._0_8_ = auVar43._8_8_;
        auVar48._8_4_ = auVar43._0_4_;
        auVar48._12_4_ = auVar43._4_4_;
        lVar83 = (ulonglong)uVar76 * (ulonglong)uVar75 + auVar48._0_8_ + lVar83;
        lVar88 = (auVar68._8_8_ & 0xffffffff) * (ulonglong)(puVar19[-2] ^ auVar43._8_4_) +
                 auVar48._8_8_ + lVar88;
        auVar64 = pauVar18[1];
        uVar75 = *puVar19 ^ auVar64._0_4_;
        uVar76 = puVar19[1] ^ auVar64._4_4_;
        auVar49._0_8_ = auVar64._8_8_;
        auVar49._8_4_ = auVar64._0_4_;
        auVar49._12_4_ = auVar64._4_4_;
        auVar69._4_4_ = uVar75;
        auVar69._0_4_ = uVar76;
        auVar69._8_4_ = puVar19[3] ^ auVar64._12_4_;
        auVar69._12_4_ = uVar75;
        auVar43 = pauVar18[2];
        lVar100 = lVar100 + auVar49._0_8_ + (ulonglong)uVar76 * (ulonglong)uVar75;
        lVar103 = lVar103 + auVar49._8_8_ +
                  (auVar69._8_8_ & 0xffffffff) * (ulonglong)(puVar19[2] ^ auVar64._8_4_);
        uVar75 = puVar19[4] ^ auVar43._0_4_;
        uVar76 = puVar19[5] ^ auVar43._4_4_;
        auVar70._4_4_ = uVar75;
        auVar70._0_4_ = uVar76;
        auVar70._8_4_ = puVar19[7] ^ auVar43._12_4_;
        auVar70._12_4_ = uVar75;
        auVar50._0_8_ = auVar43._8_8_;
        auVar50._8_4_ = auVar43._0_4_;
        auVar50._12_4_ = auVar43._4_4_;
        lVar95 = (ulonglong)uVar76 * (ulonglong)uVar75 + auVar50._0_8_ + lVar95;
        lVar99 = (auVar70._8_8_ & 0xffffffff) * (ulonglong)(puVar19[6] ^ auVar43._8_4_) +
                 auVar50._8_8_ + lVar99;
        uVar22 = uVar22 - 1;
        pauVar18 = pauVar18 + 4;
        puVar19 = puVar19 + 2;
      } while (uVar22 != 0);
    }
    auVar64 = *(undefined1 (*) [16])((param_2 - 0x40) + (longlong)param_1);
    uStack_cf = auVar64._0_4_ ^ uStack_cf;
    uStack_cb = auVar64._4_4_ ^ uStack_cb;
    auVar51._0_8_ = auVar64._8_8_;
    auVar51._8_4_ = auVar64._0_4_;
    auVar51._12_4_ = auVar64._4_4_;
    auVar43 = *(undefined1 (*) [16])((param_2 - 0x30) + (longlong)param_1);
    auVar82._4_4_ = uStack_cf;
    auVar82._0_4_ = uStack_cb;
    auVar82._8_4_ = auVar64._12_4_ ^ uStack_c3;
    auVar82._12_4_ = uStack_cf;
    uStack_bf = auVar43._0_4_ ^ uStack_bf;
    uStack_bb = auVar43._4_4_ ^ uStack_bb;
    auVar93._4_4_ = uStack_bf;
    auVar93._0_4_ = uStack_bb;
    auVar93._8_4_ = auVar43._12_4_ ^ uStack_b3;
    auVar93._12_4_ = uStack_bf;
    auVar52._0_8_ = auVar43._8_8_;
    auVar52._8_4_ = auVar43._0_4_;
    auVar52._12_4_ = auVar43._4_4_;
    auVar39 = *(undefined1 (*) [16])((param_2 - 0x20) + (longlong)param_1);
    uStack_af = uStack_af ^ auVar39._0_4_;
    uStack_ab = uStack_ab ^ auVar39._4_4_;
    auVar87._0_8_ = auVar39._8_8_;
    auVar87._8_4_ = auVar39._0_4_;
    auVar87._12_4_ = auVar39._4_4_;
    auVar53._4_4_ = uStack_af;
    auVar53._0_4_ = uStack_ab;
    auVar53._8_4_ = uStack_a3 ^ auVar39._12_4_;
    auVar53._12_4_ = uStack_af;
    auVar40 = *(undefined1 (*) [16])((param_2 - 0x10) + (longlong)param_1);
    auVar78._0_8_ = auVar40._8_8_;
    auVar78._8_4_ = auVar40._0_4_;
    auVar78._12_4_ = auVar40._4_4_;
    uStack_9f = uStack_9f ^ auVar40._0_4_;
    uStack_9b = uStack_9b ^ auVar40._4_4_;
    auVar54._4_4_ = uStack_9f;
    auVar54._0_4_ = uStack_9b;
    auVar54._8_4_ = uStack_93 ^ auVar40._12_4_;
    auVar54._12_4_ = uStack_9f;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (auVar82._8_8_ & 0xffffffff) * (ulonglong)(auVar64._8_4_ ^ uStack_c7) +
                   auVar51._8_8_ + lVar94 ^ CONCAT35((undefined3)uStack_130,uStack_138._3_5_);
    auVar13._8_8_ = 0;
    auVar13._0_8_ =
         CONCAT35((undefined3)uStack_138,uStack_140._3_5_) ^
         (ulonglong)uStack_cb * (ulonglong)uStack_cf + auVar51._0_8_ + lVar89;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT35((undefined3)uStack_120,local_128._3_5_) ^
                   (auVar93._8_8_ & 0xffffffff) * (ulonglong)(auVar43._8_4_ ^ uStack_b7) +
                   auVar52._8_8_ + lVar88;
    auVar14._8_8_ = 0;
    auVar14._0_8_ =
         CONCAT35((undefined3)local_128,uStack_130._3_5_) ^
         (ulonglong)uStack_bb * (ulonglong)uStack_bf + auVar52._0_8_ + lVar83;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = CONCAT35((undefined3)uStack_110,uStack_118._3_5_) ^
                   auVar87._8_8_ + lVar103 +
                   (auVar53._8_8_ & 0xffffffff) * (ulonglong)(uStack_a7 ^ auVar39._8_4_);
    auVar15._8_8_ = 0;
    auVar15._0_8_ =
         CONCAT35((undefined3)uStack_118,uStack_120._3_5_) ^
         auVar87._0_8_ + lVar100 + (ulonglong)uStack_ab * (ulonglong)uStack_af;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = CONCAT35(uStack_100,uStack_105) ^
                   auVar78._8_8_ + lVar99 +
                   (auVar54._8_8_ & 0xffffffff) * (ulonglong)(uStack_97 ^ auVar40._8_4_);
    auVar16._8_8_ = 0;
    auVar16._0_8_ =
         CONCAT35(local_108,uStack_110._3_5_) ^
         auVar78._0_8_ + lVar95 + (ulonglong)uStack_9b * (ulonglong)uStack_9f;
    uVar21 = (SUB168(auVar8 * auVar16,0) ^ SUB168(auVar8 * auVar16,8)) +
             (SUB168(auVar5 * auVar13,8) ^ SUB168(auVar5 * auVar13,0)) +
             param_2 * -0x61c8864e7a143579 +
             (SUB168(auVar6 * auVar14,8) ^ SUB168(auVar6 * auVar14,0)) +
             (SUB168(auVar7 * auVar15,8) ^ SUB168(auVar7 * auVar15,0));
    uVar21 = (uVar21 >> 0x25 ^ uVar21) * 0x165667919e3779f9;
    uVar17 = uVar21 >> 0x20 ^ uVar21;
  }
  return uVar17;
}

// XXH3_initCustomSecret_sse2 @ 14171dd40

void __cdecl XXH3_initCustomSecret_sse2(void *param_1,ulong64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = -param_2;
  lVar2 = lVar1 + XXH3_kSecret._8_8_;
  *(ulong64 *)param_1 = param_2 + XXH3_kSecret._0_8_;
  *(longlong *)((longlong)param_1 + 8) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._24_8_;
  *(ulong64 *)((longlong)param_1 + 0x10) = param_2 + XXH3_kSecret._16_8_;
  *(longlong *)((longlong)param_1 + 0x18) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._40_8_;
  *(ulong64 *)((longlong)param_1 + 0x20) = param_2 + XXH3_kSecret._32_8_;
  *(longlong *)((longlong)param_1 + 0x28) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._56_8_;
  *(ulong64 *)((longlong)param_1 + 0x30) = param_2 + XXH3_kSecret._48_8_;
  *(longlong *)((longlong)param_1 + 0x38) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._72_8_;
  *(ulong64 *)((longlong)param_1 + 0x40) = param_2 + XXH3_kSecret._64_8_;
  *(longlong *)((longlong)param_1 + 0x48) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._88_8_;
  *(ulong64 *)((longlong)param_1 + 0x50) = param_2 + XXH3_kSecret._80_8_;
  *(longlong *)((longlong)param_1 + 0x58) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._104_8_;
  *(ulong64 *)((longlong)param_1 + 0x60) = param_2 + XXH3_kSecret._96_8_;
  *(longlong *)((longlong)param_1 + 0x68) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._120_8_;
  *(ulong64 *)((longlong)param_1 + 0x70) = param_2 + XXH3_kSecret._112_8_;
  *(longlong *)((longlong)param_1 + 0x78) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._136_8_;
  *(ulong64 *)((longlong)param_1 + 0x80) = param_2 + XXH3_kSecret._128_8_;
  *(longlong *)((longlong)param_1 + 0x88) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._152_8_;
  *(ulong64 *)((longlong)param_1 + 0x90) = param_2 + XXH3_kSecret._144_8_;
  *(longlong *)((longlong)param_1 + 0x98) = lVar2;
  lVar2 = lVar1 + XXH3_kSecret._168_8_;
  *(ulong64 *)((longlong)param_1 + 0xa0) = param_2 + XXH3_kSecret._160_8_;
  *(longlong *)((longlong)param_1 + 0xa8) = lVar2;
  lVar1 = lVar1 + XXH3_kSecret._184_8_;
  *(ulong64 *)((longlong)param_1 + 0xb0) = param_2 + XXH3_kSecret._176_8_;
  *(longlong *)((longlong)param_1 + 0xb8) = lVar1;
  return;
}

// XXH3_len_129to240_128b @ 14171de30

XXH_INLINE_XXH128_hash_t * __cdecl
XXH3_len_129to240_128b
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,uchar *param_1,ulong64 param_2,
          uchar *param_3,ulong64 param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(longlong *)(param_3 + 8) - param_5 ^ *(ulonglong *)(param_1 + 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *(longlong *)param_3 + param_5 ^ *(ulonglong *)param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(longlong *)(param_3 + 0x18) - param_5 ^ *(ulonglong *)(param_1 + 0x18);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(longlong *)(param_3 + 0x10) + param_5 ^ *(ulonglong *)(param_1 + 0x10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(longlong *)(param_3 + 0x28) - param_5 ^ *(ulonglong *)(param_1 + 0x28);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(longlong *)(param_3 + 0x20) + param_5 ^ *(ulonglong *)(param_1 + 0x20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(longlong *)(param_3 + 0x38) - param_5 ^ *(ulonglong *)(param_1 + 0x38);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(longlong *)(param_3 + 0x30) + param_5 ^ *(ulonglong *)(param_1 + 0x30);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(longlong *)(param_3 + 0x48) - param_5 ^ *(ulonglong *)(param_1 + 0x48);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(longlong *)(param_3 + 0x40) + param_5 ^ *(ulonglong *)(param_1 + 0x40);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(longlong *)(param_3 + 0x58) - param_5 ^ *(ulonglong *)(param_1 + 0x58);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *(longlong *)(param_3 + 0x50) + param_5 ^ *(ulonglong *)(param_1 + 0x50);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *(longlong *)(param_3 + 0x68) - param_5 ^ *(ulonglong *)(param_1 + 0x68);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(longlong *)(param_3 + 0x60) + param_5 ^ *(ulonglong *)(param_1 + 0x60);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *(longlong *)(param_3 + 0x78) - param_5 ^ *(ulonglong *)(param_1 + 0x78);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *(longlong *)(param_3 + 0x70) + param_5 ^ *(ulonglong *)(param_1 + 0x70);
  uVar25 = (SUB168(auVar7 * auVar19,0) ^ SUB168(auVar7 * auVar19,8)) +
           ((SUB168(auVar5 * auVar17,0) ^ SUB168(auVar5 * auVar17,8)) +
            ((SUB168(auVar3 * auVar15,0) ^ SUB168(auVar3 * auVar15,8)) +
             ((SUB168(auVar1 * auVar13,0) ^ SUB168(auVar1 * auVar13,8)) +
              param_2 * -0x61c8864e7a143579 ^
             *(ulonglong *)(param_1 + 0x18) + *(ulonglong *)(param_1 + 0x10)) ^
            *(ulonglong *)(param_1 + 0x38) + *(ulonglong *)(param_1 + 0x30)) ^
           *(ulonglong *)(param_1 + 0x58) + *(ulonglong *)(param_1 + 0x50)) ^
           *(ulonglong *)(param_1 + 0x78) + *(ulonglong *)(param_1 + 0x70);
  uVar29 = (SUB168(auVar8 * auVar20,0) ^ SUB168(auVar8 * auVar20,8)) +
           ((SUB168(auVar6 * auVar18,0) ^ SUB168(auVar6 * auVar18,8)) +
            ((SUB168(auVar4 * auVar16,0) ^ SUB168(auVar4 * auVar16,8)) +
             (*(ulonglong *)(param_1 + 8) + *(longlong *)param_1 ^ SUB168(auVar2 * auVar14,0) ^
             SUB168(auVar2 * auVar14,8)) ^
            *(ulonglong *)(param_1 + 0x20) + *(ulonglong *)(param_1 + 0x28)) ^
           *(ulonglong *)(param_1 + 0x40) + *(ulonglong *)(param_1 + 0x48)) ^
           *(ulonglong *)(param_1 + 0x60) + *(ulonglong *)(param_1 + 0x68);
  uVar25 = (uVar25 >> 0x25 ^ uVar25) * 0x165667919e3779f9;
  uVar25 = uVar25 >> 0x20 ^ uVar25;
  uVar29 = (uVar29 >> 0x25 ^ uVar29) * 0x165667919e3779f9;
  uVar29 = uVar29 >> 0x20 ^ uVar29;
  lVar28 = (longlong)((int)((int)param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5);
  if (4 < lVar28) {
    lVar28 = lVar28 + -4;
    plVar26 = (longlong *)(param_3 + 0xb);
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *plVar26 - param_5 ^
                     *(ulonglong *)(param_1 + (0x7d - (longlong)param_3) + (longlong)plVar26);
      auVar21._8_8_ = 0;
      auVar21._0_8_ =
           plVar26[-1] + param_5 ^
           *(ulonglong *)(param_1 + (0x75 - (longlong)param_3) + (longlong)plVar26);
      uVar25 = (SUB168(auVar9 * auVar21,0) ^ SUB168(auVar9 * auVar21,8)) + uVar25 ^
               *(ulonglong *)(param_1 + (0x85 - (longlong)param_3) + (longlong)plVar26) +
               *(ulonglong *)(param_1 + (0x8d - (longlong)param_3) + (longlong)plVar26);
      auVar10._8_8_ = 0;
      auVar10._0_8_ =
           plVar26[2] - param_5 ^
           *(ulonglong *)(param_1 + (0x8d - (longlong)param_3) + (longlong)plVar26);
      auVar22._8_8_ = 0;
      auVar22._0_8_ =
           plVar26[1] + param_5 ^
           *(ulonglong *)(param_1 + (0x85 - (longlong)param_3) + (longlong)plVar26);
      uVar29 = (SUB168(auVar10 * auVar22,0) ^ SUB168(auVar10 * auVar22,8)) + uVar29 ^
               *(ulonglong *)(param_1 + (0x75 - (longlong)param_3) + (longlong)plVar26) +
               *(ulonglong *)(param_1 + (0x7d - (longlong)param_3) + (longlong)plVar26);
      lVar28 = lVar28 + -1;
      plVar26 = plVar26 + 4;
    } while (lVar28 != 0);
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(longlong *)(param_3 + 0x6f) + param_5 ^ *(ulonglong *)(param_1 + (param_2 - 8));
  auVar23._8_8_ = 0;
  auVar23._0_8_ =
       *(longlong *)(param_3 + 0x67) - param_5 ^ *(ulonglong *)(param_1 + (param_2 - 0x10));
  uVar27 = (SUB168(auVar11 * auVar23,0) ^ SUB168(auVar11 * auVar23,8)) + uVar25 ^
           *(ulonglong *)(param_1 + (param_2 - 0x18)) + *(ulonglong *)(param_1 + (param_2 - 0x20));
  auVar12._8_8_ = 0;
  auVar12._0_8_ =
       *(longlong *)(param_3 + 0x7f) + param_5 ^ *(ulonglong *)(param_1 + (param_2 - 0x18));
  auVar24._8_8_ = 0;
  auVar24._0_8_ =
       *(longlong *)(param_3 + 0x77) - param_5 ^ *(ulonglong *)(param_1 + (param_2 - 0x20));
  uVar29 = (SUB168(auVar12 * auVar24,0) ^ SUB168(auVar12 * auVar24,8)) + uVar29 ^
           *(ulonglong *)(param_1 + (param_2 - 0x10)) + *(ulonglong *)(param_1 + (param_2 - 8));
  uVar25 = uVar29 + uVar27;
  uVar29 = uVar29 * -0x7a1435883d4d519d +
           (param_2 - param_5) * -0x3d4d51c2d82b14b1 + uVar27 * -0x61c8864e7a143579;
  uVar25 = (uVar25 >> 0x25 ^ uVar25) * 0x165667919e3779f9;
  __return_storage_ptr__->low64 = uVar25 >> 0x20 ^ uVar25;
  uVar25 = (uVar29 >> 0x25 ^ uVar29) * 0x165667919e3779f9;
  __return_storage_ptr__->high64 = -(uVar25 >> 0x20 ^ uVar25);
  return __return_storage_ptr__;
}

// XXH3_len_129to240_64b @ 14171e1e0

ulong64 __cdecl
XXH3_len_129to240_64b(uchar *param_1,ulong64 param_2,uchar *param_3,ulong64 param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(longlong *)(param_3 + 8) - param_5 ^ *(ulonglong *)(param_1 + 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(longlong *)param_3 + param_5 ^ *(ulonglong *)param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(longlong *)(param_3 + 0x18) - param_5 ^ *(ulonglong *)(param_1 + 0x18);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(longlong *)(param_3 + 0x10) + param_5 ^ *(ulonglong *)(param_1 + 0x10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(longlong *)(param_3 + 0x28) - param_5 ^ *(ulonglong *)(param_1 + 0x28);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *(longlong *)(param_3 + 0x20) + param_5 ^ *(ulonglong *)(param_1 + 0x20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(longlong *)(param_3 + 0x38) - param_5 ^ *(ulonglong *)(param_1 + 0x38);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(longlong *)(param_3 + 0x30) + param_5 ^ *(ulonglong *)(param_1 + 0x30);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(longlong *)(param_3 + 0x48) - param_5 ^ *(ulonglong *)(param_1 + 0x48);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(longlong *)(param_3 + 0x40) + param_5 ^ *(ulonglong *)(param_1 + 0x40);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(longlong *)(param_3 + 0x58) - param_5 ^ *(ulonglong *)(param_1 + 0x58);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(longlong *)(param_3 + 0x50) + param_5 ^ *(ulonglong *)(param_1 + 0x50);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *(longlong *)(param_3 + 0x68) - param_5 ^ *(ulonglong *)(param_1 + 0x68);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(longlong *)(param_3 + 0x60) + param_5 ^ *(ulonglong *)(param_1 + 0x60);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *(longlong *)(param_3 + 0x78) - param_5 ^ *(ulonglong *)(param_1 + 0x78);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *(longlong *)(param_3 + 0x70) + param_5 ^ *(ulonglong *)(param_1 + 0x70);
  uVar21 = (SUB168(auVar8 * auVar18,0) ^ SUB168(auVar8 * auVar18,8)) +
           (SUB168(auVar1 * auVar11,0) ^ SUB168(auVar1 * auVar11,8)) + param_2 * -0x61c8864e7a143579
           + (SUB168(auVar2 * auVar12,0) ^ SUB168(auVar2 * auVar12,8)) +
           (SUB168(auVar3 * auVar13,0) ^ SUB168(auVar3 * auVar13,8)) +
           (SUB168(auVar4 * auVar14,0) ^ SUB168(auVar4 * auVar14,8)) +
           (SUB168(auVar5 * auVar15,0) ^ SUB168(auVar5 * auVar15,8)) +
           (SUB168(auVar6 * auVar16,0) ^ SUB168(auVar6 * auVar16,8)) +
           (SUB168(auVar7 * auVar17,0) ^ SUB168(auVar7 * auVar17,8));
  uVar21 = (uVar21 >> 0x25 ^ uVar21) * 0x165667919e3779f9;
  uVar21 = uVar21 >> 0x20 ^ uVar21;
  lVar23 = (longlong)((int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4);
  if (8 < lVar23) {
    lVar23 = lVar23 + -8;
    plVar22 = (longlong *)(param_3 + 3);
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = plVar22[1] - param_5 ^
                     *(ulonglong *)(param_1 + (longlong)plVar22 + (0x85 - (longlong)param_3));
      auVar19._8_8_ = 0;
      auVar19._0_8_ =
           *plVar22 + param_5 ^
           *(ulonglong *)(param_1 + (longlong)plVar22 + (0x7d - (longlong)param_3));
      uVar21 = uVar21 + (SUB168(auVar9 * auVar19,0) ^ SUB168(auVar9 * auVar19,8));
      lVar23 = lVar23 + -1;
      plVar22 = plVar22 + 2;
    } while (lVar23 != 0);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(longlong *)(param_3 + 0x7f) - param_5 ^ *(ulonglong *)(param_1 + (param_2 - 8));
  auVar20._8_8_ = 0;
  auVar20._0_8_ =
       *(longlong *)(param_3 + 0x77) + param_5 ^ *(ulonglong *)(param_1 + (param_2 - 0x10));
  uVar21 = (SUB168(auVar10 * auVar20,0) ^ SUB168(auVar10 * auVar20,8)) + uVar21;
  uVar21 = (uVar21 >> 0x25 ^ uVar21) * 0x165667919e3779f9;
  return uVar21 >> 0x20 ^ uVar21;
}

// XXH3_scrambleAcc_sse2 @ 14171e3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl XXH3_scrambleAcc_sse2(void *param_1,void *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar4 = _UNK_15066df88;
  uVar3 = ___xmm_9e3779b19e3779b19e3779b19e3779b1;
  auVar9._0_4_ = *(uint *)((longlong)param_1 + 4) >> 0xf ^ *(uint *)param_1 ^ *(uint *)param_2;
  auVar9._4_4_ = *(uint *)((longlong)param_1 + 4) ^ *(uint *)((longlong)param_2 + 4);
  auVar9._8_4_ = *(uint *)((longlong)param_1 + 0xc) >> 0xf ^ *(uint *)((longlong)param_1 + 8) ^
                 *(uint *)((longlong)param_2 + 8);
  auVar9._12_4_ = *(uint *)((longlong)param_1 + 0xc) ^ *(uint *)((longlong)param_2 + 0xc);
  auVar5._4_4_ = auVar9._0_4_;
  auVar5._0_4_ = auVar9._4_4_;
  auVar5._8_4_ = auVar9._12_4_;
  auVar5._12_4_ = auVar9._0_4_;
  uVar1 = (ulonglong)_UNK_15066df88;
  uVar2 = (ulonglong)_UNK_15066df88;
  *(ulonglong *)param_1 =
       ((ulonglong)auVar9._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20) +
       (ulonglong)auVar9._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
  *(ulonglong *)((longlong)param_1 + 8) =
       ((auVar5._8_8_ & 0xffffffff) * uVar1 << 0x20) + (auVar9._8_8_ & 0xffffffff) * uVar2;
  auVar10._0_4_ =
       *(uint *)((longlong)param_1 + 0x14) >> 0xf ^ *(uint *)((longlong)param_1 + 0x10) ^
       *(uint *)((longlong)param_2 + 0x10);
  auVar10._4_4_ = *(uint *)((longlong)param_1 + 0x14) ^ *(uint *)((longlong)param_2 + 0x14);
  auVar10._8_4_ =
       *(uint *)((longlong)param_1 + 0x1c) >> 0xf ^ *(uint *)((longlong)param_1 + 0x18) ^
       *(uint *)((longlong)param_2 + 0x18);
  auVar10._12_4_ = *(uint *)((longlong)param_1 + 0x1c) ^ *(uint *)((longlong)param_2 + 0x1c);
  auVar6._4_4_ = auVar10._0_4_;
  auVar6._0_4_ = auVar10._4_4_;
  auVar6._8_4_ = auVar10._12_4_;
  auVar6._12_4_ = auVar10._0_4_;
  *(ulonglong *)((longlong)param_1 + 0x10) =
       ((ulonglong)auVar10._4_4_ * (ulonglong)uVar3 << 0x20) +
       (ulonglong)auVar10._0_4_ * (ulonglong)uVar3;
  *(ulonglong *)((longlong)param_1 + 0x18) =
       ((auVar6._8_8_ & 0xffffffff) * (ulonglong)uVar4 << 0x20) +
       (auVar10._8_8_ & 0xffffffff) * (ulonglong)uVar4;
  auVar11._0_4_ =
       *(uint *)((longlong)param_1 + 0x24) >> 0xf ^ *(uint *)((longlong)param_1 + 0x20) ^
       *(uint *)((longlong)param_2 + 0x20);
  auVar11._4_4_ = *(uint *)((longlong)param_1 + 0x24) ^ *(uint *)((longlong)param_2 + 0x24);
  auVar11._8_4_ =
       *(uint *)((longlong)param_1 + 0x2c) >> 0xf ^ *(uint *)((longlong)param_1 + 0x28) ^
       *(uint *)((longlong)param_2 + 0x28);
  auVar11._12_4_ = *(uint *)((longlong)param_1 + 0x2c) ^ *(uint *)((longlong)param_2 + 0x2c);
  auVar7._4_4_ = auVar11._0_4_;
  auVar7._0_4_ = auVar11._4_4_;
  auVar7._8_4_ = auVar11._12_4_;
  auVar7._12_4_ = auVar11._0_4_;
  *(ulonglong *)((longlong)param_1 + 0x20) =
       ((ulonglong)auVar11._4_4_ * (ulonglong)uVar3 << 0x20) +
       (ulonglong)auVar11._0_4_ * (ulonglong)uVar3;
  *(ulonglong *)((longlong)param_1 + 0x28) =
       ((auVar7._8_8_ & 0xffffffff) * (ulonglong)uVar4 << 0x20) +
       (auVar11._8_8_ & 0xffffffff) * (ulonglong)uVar4;
  auVar12._0_4_ =
       *(uint *)((longlong)param_1 + 0x34) >> 0xf ^ *(uint *)((longlong)param_1 + 0x30) ^
       *(uint *)((longlong)param_2 + 0x30);
  auVar12._4_4_ = *(uint *)((longlong)param_1 + 0x34) ^ *(uint *)((longlong)param_2 + 0x34);
  auVar12._8_4_ =
       *(uint *)((longlong)param_1 + 0x3c) >> 0xf ^ *(uint *)((longlong)param_1 + 0x38) ^
       *(uint *)((longlong)param_2 + 0x38);
  auVar12._12_4_ = *(uint *)((longlong)param_1 + 0x3c) ^ *(uint *)((longlong)param_2 + 0x3c);
  auVar8._4_4_ = auVar12._0_4_;
  auVar8._0_4_ = auVar12._4_4_;
  auVar8._8_4_ = auVar12._12_4_;
  auVar8._12_4_ = auVar12._0_4_;
  *(ulonglong *)((longlong)param_1 + 0x30) =
       ((ulonglong)auVar12._4_4_ * (ulonglong)uVar3 << 0x20) +
       (ulonglong)auVar12._0_4_ * (ulonglong)uVar3;
  *(ulonglong *)((longlong)param_1 + 0x38) =
       ((auVar8._8_8_ & 0xffffffff) * (ulonglong)uVar4 << 0x20) +
       (auVar12._8_8_ & 0xffffffff) * (ulonglong)uVar4;
  return;
}

// XXH_INLINE_XXH3_128bits @ 14171e4a0

XXH_INLINE_XXH128_hash_t * __cdecl
XXH_INLINE_XXH3_128bits
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong64 uVar22;
  uint uVar23;
  XXH_INLINE_XXH128_hash_t *pXVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong local_res8;
  ulonglong local_res18;
  XXH_INLINE_XXH128_hash_t local_38;
  
  if (param_2 < 0x11) {
    if (param_2 < 9) {
      if (param_2 < 4) {
        lVar29 = 0x165667b19e3779f9;
        if (param_2 == 0) {
          uVar30 = XXH3_kSecret._88_8_ ^ XXH3_kSecret._80_8_;
          uVar28 = ((ulonglong)(XXH3_kSecret._72_8_ ^ XXH3_kSecret._64_8_) >> 0x21 ^
                   XXH3_kSecret._72_8_ ^ XXH3_kSecret._64_8_) * -0x3d4d51c2d82b14b1;
          uVar28 = (uVar28 >> 0x1d ^ uVar28) * 0x165667b19e3779f9;
          __return_storage_ptr__->low64 = uVar28 >> 0x20 ^ uVar28;
          uVar28 = (uVar30 >> 0x21 ^ uVar30) * -0x3d4d51c2d82b14b1;
          uVar28 = uVar28 >> 0x1d ^ uVar28;
        }
        else {
          uVar25 = (uint)CONCAT11(*(undefined1 *)((param_2 >> 1) + (longlong)param_1),
                                  *(undefined1 *)param_1) << 8;
          uVar27 = (uint)param_2;
          uVar26 = (uVar25 | uVar27) << 8;
          uVar23 = (uint)*(byte *)((longlong)param_1 + (param_2 - 1));
          uVar25 = (uVar25 | uVar27 & 0xffffff) >> 0x10 | (uVar26 & 0xff0000) >> 8 |
                   (uVar27 & 0xff) << 0x10;
          uVar30 = (ulonglong)((uVar26 | uVar23) ^ XXH3_kSecret._4_4_ ^ XXH3_kSecret._0_4_) *
                   -0x3d4d51c2d82b14b1;
          uVar28 = (ulonglong)
                   ((uVar25 << 0xd | (uVar25 | uVar23 << 0x18) >> 0x13) ^ XXH3_kSecret._12_4_ ^
                   XXH3_kSecret._8_4_) * -0x3d4d51c2d82b14b1;
          uVar30 = (uVar30 >> 0x1d ^ uVar30) * 0x165667b19e3779f9;
          uVar28 = uVar28 >> 0x1d ^ uVar28;
          __return_storage_ptr__->low64 = uVar30 >> 0x20 ^ uVar30;
        }
      }
      else {
        lVar29 = 0x165667919e3779f9;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2 * 4 + 0x9e3779b185ebca87;
        auVar13._8_8_ = 0;
        auVar13._0_8_ =
             CONCAT44(*(undefined4 *)((longlong)param_1 + (param_2 - 4)),*(undefined4 *)param_1) ^
             XXH3_kSecret._24_8_ ^ XXH3_kSecret._16_8_;
        *__return_storage_ptr__ = (XXH_INLINE_XXH128_hash_t)(auVar2 * auVar13);
        uVar28 = __return_storage_ptr__->high64 + __return_storage_ptr__->low64 * 2;
        uVar30 = uVar28 >> 3 ^ __return_storage_ptr__->low64;
        uVar30 = (uVar30 >> 0x23 ^ uVar30) * -0x604de39ae16720db;
        uVar28 = uVar28 >> 0x25 ^ uVar28;
        __return_storage_ptr__->low64 = uVar30 >> 0x1c ^ uVar30;
      }
    }
    else {
      uVar28 = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      uVar30 = uVar28 ^ XXH3_kSecret._56_8_ ^ XXH3_kSecret._48_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28 ^ *(ulonglong *)param_1 ^ XXH3_kSecret._40_8_ ^ XXH3_kSecret._32_8_;
      uVar28 = (uVar30 & 0xffffffff) * 0x85ebca76 + uVar30 +
               SUB168(ZEXT816(0x9e3779b185ebca87) * auVar11,8);
      auVar12._8_8_ = 0;
      auVar12._0_8_ =
           (uVar28 >> 0x38 | (uVar28 & 0xff000000000000) >> 0x28 | (uVar28 & 0xff0000000000) >> 0x18
            | (uVar28 & 0xff00000000) >> 8 | (uVar28 & 0xff000000) << 8 |
            (uVar28 & 0xff0000) << 0x18 | (uVar28 & 0xff00) << 0x28 | uVar28 << 0x38) ^
           (param_2 << 0x36) + -0x40000000000000 + SUB168(ZEXT816(0x9e3779b185ebca87) * auVar11,0);
      *__return_storage_ptr__ = (XXH_INLINE_XXH128_hash_t)(ZEXT816(0xc2b2ae3d27d4eb4f) * auVar12);
      uVar28 = __return_storage_ptr__->high64 + uVar28 * -0x3d4d51c2d82b14b1;
      lVar29 = 0x165667919e3779f9;
      uVar30 = (__return_storage_ptr__->low64 >> 0x25 ^ __return_storage_ptr__->low64) *
               0x165667919e3779f9;
      uVar28 = uVar28 >> 0x25 ^ uVar28;
      __return_storage_ptr__->low64 = uVar30 >> 0x20 ^ uVar30;
    }
    __return_storage_ptr__->high64 = uVar28 * lVar29 >> 0x20 ^ uVar28 * lVar29;
    return __return_storage_ptr__;
  }
  if (param_2 < 0x81) {
    local_res8 = param_2 * -0x61c8864e7a143579;
    uVar28 = 0;
    if (0x20 < param_2) {
      local_res18 = 0;
      if (0x40 < param_2) {
        if (0x60 < param_2) {
          uVar30 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x40));
          uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x38));
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulonglong *)((longlong)param_1 + 0x38) ^ XXH3_kSecret._104_8_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = *(ulonglong *)((longlong)param_1 + 0x30) ^ XXH3_kSecret._96_8_;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar1 ^ XXH3_kSecret._120_8_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar30 ^ XXH3_kSecret._112_8_;
          uVar28 = *(ulonglong *)((longlong)param_1 + 0x38) +
                   *(longlong *)((longlong)param_1 + 0x30) ^ SUB168(auVar4 * auVar15,0) ^
                   SUB168(auVar4 * auVar15,8);
          local_res8 = local_res8 + (SUB168(auVar3 * auVar14,0) ^ SUB168(auVar3 * auVar14,8)) ^
                       uVar1 + uVar30;
        }
        uVar30 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x30));
        uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x28));
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)((longlong)param_1 + 0x28) ^ XXH3_kSecret._72_8_;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)((longlong)param_1 + 0x20) ^ XXH3_kSecret._64_8_;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar1 ^ XXH3_kSecret._88_8_;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar30 ^ XXH3_kSecret._80_8_;
        local_res18 = (SUB168(auVar6 * auVar17,0) ^ SUB168(auVar6 * auVar17,8)) + uVar28 ^
                      *(ulonglong *)((longlong)param_1 + 0x20) +
                      *(ulonglong *)((longlong)param_1 + 0x28);
        local_res8 = (SUB168(auVar5 * auVar16,0) ^ SUB168(auVar5 * auVar16,8)) + local_res8 ^
                     uVar1 + uVar30;
      }
      uVar30 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x20));
      uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)((longlong)param_1 + 0x18) ^ XXH3_kSecret._40_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *(ulonglong *)((longlong)param_1 + 0x10) ^ XXH3_kSecret._32_8_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar1 ^ XXH3_kSecret._56_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar30 ^ XXH3_kSecret._48_8_;
      uVar28 = (SUB168(auVar8 * auVar19,0) ^ SUB168(auVar8 * auVar19,8)) + local_res18 ^
               *(ulonglong *)((longlong)param_1 + 0x10) + *(ulonglong *)((longlong)param_1 + 0x18);
      local_res8 = (SUB168(auVar7 * auVar18,0) ^ SUB168(auVar7 * auVar18,8)) + local_res8 ^
                   uVar1 + uVar30;
    }
    uVar30 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)((longlong)param_1 + 8) ^
                   CONCAT44(XXH3_kSecret._12_4_,XXH3_kSecret._8_4_);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulonglong *)param_1 ^ CONCAT44(XXH3_kSecret._4_4_,XXH3_kSecret._0_4_);
    uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
    uVar31 = (SUB168(auVar9 * auVar20,0) ^ SUB168(auVar9 * auVar20,8)) + local_res8 ^ uVar1 + uVar30
    ;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar1 ^ XXH3_kSecret._24_8_;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar30 ^ XXH3_kSecret._16_8_;
    uVar30 = (SUB168(auVar10 * auVar21,0) ^ SUB168(auVar10 * auVar21,8)) + uVar28 ^
             *(ulonglong *)((longlong)param_1 + 8) + *(ulonglong *)param_1;
    uVar28 = uVar30 + uVar31;
    uVar30 = uVar30 * -0x7a1435883d4d519d + param_2 * -0x3d4d51c2d82b14b1 +
             uVar31 * -0x61c8864e7a143579;
    uVar28 = (uVar28 >> 0x25 ^ uVar28) * 0x165667919e3779f9;
    __return_storage_ptr__->low64 = uVar28 >> 0x20 ^ uVar28;
    uVar28 = (uVar30 >> 0x25 ^ uVar30) * 0x165667919e3779f9;
    __return_storage_ptr__->high64 = -(uVar28 >> 0x20 ^ uVar28);
  }
  else if (param_2 < 0xf1) {
    XXH3_len_129to240_128b(__return_storage_ptr__,param_1,param_2,XXH3_kSecret,0xc0,0);
  }
  else {
    pXVar24 = XXH3_hashLong_128b_default(&local_38,param_1,param_2,0,XXH3_kSecret,0xc0);
    uVar22 = pXVar24->high64;
    __return_storage_ptr__->low64 = pXVar24->low64;
    __return_storage_ptr__->high64 = uVar22;
  }
  return __return_storage_ptr__;
}

// XXH_INLINE_XXH3_128bits_digest @ 14171ea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XXH_INLINE_XXH128_hash_t * __cdecl
XXH_INLINE_XXH3_128bits_digest
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,XXH_INLINE_XXH3_state_s *param_1)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong uVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  uchar *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  uchar *puVar29;
  ulonglong uVar30;
  uchar *puVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar53;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  ulonglong uVar72;
  undefined1 auVar73 [16];
  ulonglong uVar75;
  undefined1 auVar74 [16];
  longlong lVar78;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auStackY_138 [32];
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_138;
  puVar31 = param_1->extSecret;
  if (puVar31 == (uchar *)0x0) {
    puVar31 = param_1->customSecret;
  }
  uVar26 = param_1->totalLen;
  puVar25 = param_1->buffer;
  if (uVar26 < 0xf1) {
    if (param_1->seed == 0) {
      XXH_INLINE_XXH3_128bits_withSecret
                (__return_storage_ptr__,puVar25,uVar26,puVar31,param_1->secretLimit + 0x40);
    }
    else {
      XXH_INLINE_XXH3_128bits_withSeed(__return_storage_ptr__,puVar25,uVar26,param_1->seed);
    }
  }
  else {
    uVar33 = param_1->bufferedSize;
    uVar32 = (ulonglong)uVar33;
    puVar1 = &param_1->secretLimit;
    auVar83 = *(undefined1 (*) [16])(param_1->acc + 6);
    auVar76 = *(undefined1 (*) [16])param_1->acc;
    auVar79 = *(undefined1 (*) [16])(param_1->acc + 2);
    auVar81 = *(undefined1 (*) [16])(param_1->acc + 4);
    if (uVar33 < 0x40) {
      uVar33 = 0x40 - uVar33;
      memcpy(&local_b8,(void *)((longlong)param_1 + (0x200 - (ulonglong)uVar33)),(ulonglong)uVar33);
      memcpy((void *)((longlong)&local_b8 + (ulonglong)uVar33),puVar25,uVar32);
      uVar2 = *puVar1;
      puVar25 = puVar31 + (uVar2 - 7);
      uVar33 = local_b8 ^ *(uint *)puVar25;
      auVar50._8_4_ = local_b8;
      auVar50._0_8_ = CONCAT44(uStack_ac,uStack_b0);
      auVar50._12_4_ = uStack_b4;
      auVar74._4_4_ = uVar33;
      auVar74._0_4_ = uStack_b4 ^ *(uint *)(puVar25 + 4);
      auVar74._8_4_ = uStack_ac ^ *(uint *)(puVar25 + 0xc);
      auVar74._12_4_ = uVar33;
      puVar29 = puVar31 + uVar2 + 9;
      uVar53 = *(uint *)puVar29 ^ local_a8;
      auVar71._4_4_ = uVar53;
      auVar71._0_4_ = *(uint *)(puVar29 + 4) ^ uStack_a4;
      auVar71._8_4_ = *(uint *)(puVar29 + 0xc) ^ uStack_9c;
      auVar71._12_4_ = uVar53;
      uVar72 = (ulonglong)(uStack_b4 ^ *(uint *)(puVar25 + 4)) * (ulonglong)uVar33 +
               CONCAT44(uStack_ac,uStack_b0) + auVar76._0_8_;
      uVar75 = (auVar74._8_8_ & 0xffffffff) * (ulonglong)(uStack_b0 ^ *(uint *)(puVar25 + 8)) +
               auVar50._8_8_ + auVar76._8_8_;
      auVar51._8_4_ = local_a8;
      auVar51._0_8_ = CONCAT44(uStack_9c,uStack_a0);
      auVar51._12_4_ = uStack_a4;
      puVar25 = puVar31 + uVar2 + 0x19;
      uVar27 = (ulonglong)(*(uint *)(puVar29 + 4) ^ uStack_a4) * (ulonglong)uVar53 +
               CONCAT44(uStack_9c,uStack_a0) + auVar79._0_8_;
      uVar30 = (auVar71._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar29 + 8) ^ uStack_a0) +
               auVar51._8_8_ + auVar79._8_8_;
      auVar52._8_4_ = local_98;
      auVar52._0_8_ = CONCAT44(uStack_8c,uStack_90);
      auVar52._12_4_ = uStack_94;
      puVar29 = puVar31 + uVar2 + 0x29;
      uVar32 = (ulonglong)(*(uint *)(puVar25 + 4) ^ uStack_94) *
               (ulonglong)(*(uint *)puVar25 ^ local_98) +
               CONCAT44(uStack_8c,uStack_90) + auVar81._0_8_;
      lVar28 = (ulonglong)(*(uint *)(puVar25 + 0xc) ^ uStack_8c) *
               (ulonglong)(*(uint *)(puVar25 + 8) ^ uStack_90) + auVar52._8_8_ + auVar81._8_8_;
      auVar49._4_4_ = uStack_7c;
      auVar49._0_4_ = uStack_80;
      auVar49._8_4_ = local_88;
      auVar49._12_4_ = uStack_84;
      lVar78 = (ulonglong)(*(uint *)(puVar29 + 4) ^ uStack_84) *
               (ulonglong)(*(uint *)puVar29 ^ local_88);
      lVar23 = (ulonglong)(*(uint *)(puVar29 + 0xc) ^ uStack_7c) *
               (ulonglong)(*(uint *)(puVar29 + 8) ^ uStack_80);
    }
    else {
      uVar2 = param_1->nbStripesSoFar;
      uVar3 = *puVar1;
      uVar30 = param_1->nbStripesPerBlock - uVar2;
      uVar27 = (ulonglong)(uVar33 - 1 >> 6);
      if (uVar27 < uVar30) {
        if (uVar27 != 0) {
          puVar25 = param_1->buffer + 0x10;
          puVar29 = puVar31 + uVar2 * 8 + 0x20;
          do {
            auVar50 = *(undefined1 (*) [16])(puVar25 + -0x10);
            uVar33 = (uint)*(ulong64 *)(puVar29 + -0x20) ^ auVar50._0_4_;
            uVar53 = *(uint *)(puVar29 + -0x1c) ^ auVar50._4_4_;
            auVar42._0_8_ = auVar50._8_8_;
            auVar42._8_4_ = auVar50._0_4_;
            auVar42._12_4_ = auVar50._4_4_;
            auVar65._4_4_ = uVar33;
            auVar65._0_4_ = uVar53;
            auVar65._8_4_ = *(uint *)(puVar29 + -0x14) ^ auVar50._12_4_;
            auVar65._12_4_ = uVar33;
            lVar28 = auVar76._8_8_;
            auVar51 = *(undefined1 (*) [16])puVar25;
            auVar76._0_8_ = auVar76._0_8_ + auVar42._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar33;
            auVar76._8_8_ =
                 lVar28 + auVar42._8_8_ +
                 (auVar65._8_8_ & 0xffffffff) *
                 (ulonglong)((uint)*(ulong64 *)(puVar29 + -0x18) ^ auVar50._8_4_);
            uVar33 = (uint)*(ulong64 *)(puVar29 + -0x10) ^ auVar51._0_4_;
            uVar53 = *(uint *)(puVar29 + -0xc) ^ auVar51._4_4_;
            auVar43._0_8_ = auVar51._8_8_;
            auVar43._8_4_ = auVar51._0_4_;
            auVar43._12_4_ = auVar51._4_4_;
            auVar66._4_4_ = uVar33;
            auVar66._0_4_ = uVar53;
            auVar66._8_4_ = *(uint *)(puVar29 + -4) ^ auVar51._12_4_;
            auVar66._12_4_ = uVar33;
            lVar28 = auVar79._8_8_;
            auVar79._0_8_ = auVar79._0_8_ + auVar43._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar33;
            auVar79._8_8_ =
                 lVar28 + auVar43._8_8_ +
                 (auVar66._8_8_ & 0xffffffff) *
                 (ulonglong)((uint)*(ulong64 *)(puVar29 + -8) ^ auVar51._8_4_);
            auVar50 = *(undefined1 (*) [16])(puVar25 + 0x10);
            uVar33 = auVar50._0_4_ ^ *(uint *)puVar29;
            uVar53 = auVar50._4_4_ ^ *(uint *)(puVar29 + 4);
            auVar44._0_8_ = auVar50._8_8_;
            auVar44._8_4_ = auVar50._0_4_;
            auVar44._12_4_ = auVar50._4_4_;
            auVar67._4_4_ = uVar33;
            auVar67._0_4_ = uVar53;
            auVar67._8_4_ = auVar50._12_4_ ^ *(uint *)(puVar29 + 0xc);
            auVar67._12_4_ = uVar33;
            lVar28 = auVar81._8_8_;
            auVar51 = *(undefined1 (*) [16])(puVar25 + 0x20);
            auVar81._0_8_ = auVar81._0_8_ + auVar44._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar33;
            auVar81._8_8_ =
                 lVar28 + auVar44._8_8_ +
                 (auVar67._8_8_ & 0xffffffff) * (ulonglong)(auVar50._8_4_ ^ *(uint *)(puVar29 + 8));
            uVar33 = *(uint *)(puVar29 + 0x10) ^ auVar51._0_4_;
            uVar53 = *(uint *)(puVar29 + 0x14) ^ auVar51._4_4_;
            auVar45._0_8_ = auVar51._8_8_;
            auVar45._8_4_ = auVar51._0_4_;
            auVar45._12_4_ = auVar51._4_4_;
            auVar68._4_4_ = uVar33;
            auVar68._0_4_ = uVar53;
            auVar68._8_4_ = *(uint *)(puVar29 + 0x1c) ^ auVar51._12_4_;
            auVar68._12_4_ = uVar33;
            lVar28 = auVar83._8_8_;
            auVar83._0_8_ = auVar83._0_8_ + auVar45._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar33;
            auVar83._8_8_ =
                 lVar28 + auVar45._8_8_ +
                 (auVar68._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar29 + 0x18) ^ auVar51._8_4_);
            uVar27 = uVar27 - 1;
            puVar25 = puVar25 + 0x40;
            puVar29 = puVar29 + 8;
          } while (uVar27 != 0);
        }
      }
      else {
        lVar28 = uVar27 - uVar30;
        if (uVar30 != 0) {
          puVar25 = param_1->buffer + 0x10;
          puVar29 = puVar31 + uVar2 * 8 + 0x20;
          uVar27 = uVar30;
          do {
            auVar50 = *(undefined1 (*) [16])(puVar25 + -0x10);
            uVar33 = (uint)*(ulong64 *)(puVar29 + -0x20) ^ auVar50._0_4_;
            uVar53 = *(uint *)(puVar29 + -0x1c) ^ auVar50._4_4_;
            auVar54._4_4_ = uVar33;
            auVar54._0_4_ = uVar53;
            auVar54._8_4_ = *(uint *)(puVar29 + -0x14) ^ auVar50._12_4_;
            auVar54._12_4_ = uVar33;
            auVar34._0_8_ = auVar50._8_8_;
            auVar34._8_4_ = auVar50._0_4_;
            auVar34._12_4_ = auVar50._4_4_;
            lVar78 = auVar76._8_8_;
            auVar51 = *(undefined1 (*) [16])puVar25;
            auVar76._0_8_ = (ulonglong)uVar53 * (ulonglong)uVar33 + auVar34._0_8_ + auVar76._0_8_;
            auVar76._8_8_ =
                 (auVar54._8_8_ & 0xffffffff) *
                 (ulonglong)((uint)*(ulong64 *)(puVar29 + -0x18) ^ auVar50._8_4_) +
                 auVar34._8_8_ + lVar78;
            uVar33 = (uint)*(ulong64 *)(puVar29 + -0x10) ^ auVar51._0_4_;
            uVar53 = *(uint *)(puVar29 + -0xc) ^ auVar51._4_4_;
            auVar55._4_4_ = uVar33;
            auVar55._0_4_ = uVar53;
            auVar55._8_4_ = *(uint *)(puVar29 + -4) ^ auVar51._12_4_;
            auVar55._12_4_ = uVar33;
            auVar35._0_8_ = auVar51._8_8_;
            auVar35._8_4_ = auVar51._0_4_;
            auVar35._12_4_ = auVar51._4_4_;
            lVar78 = auVar79._8_8_;
            auVar79._0_8_ = (ulonglong)uVar53 * (ulonglong)uVar33 + auVar35._0_8_ + auVar79._0_8_;
            auVar79._8_8_ =
                 (auVar55._8_8_ & 0xffffffff) *
                 (ulonglong)((uint)*(ulong64 *)(puVar29 + -8) ^ auVar51._8_4_) +
                 auVar35._8_8_ + lVar78;
            auVar50 = *(undefined1 (*) [16])(puVar25 + 0x10);
            uVar33 = auVar50._0_4_ ^ *(uint *)puVar29;
            uVar53 = auVar50._4_4_ ^ *(uint *)(puVar29 + 4);
            auVar36._0_8_ = auVar50._8_8_;
            auVar36._8_4_ = auVar50._0_4_;
            auVar36._12_4_ = auVar50._4_4_;
            auVar56._4_4_ = uVar33;
            auVar56._0_4_ = uVar53;
            auVar56._8_4_ = auVar50._12_4_ ^ *(uint *)(puVar29 + 0xc);
            auVar56._12_4_ = uVar33;
            lVar78 = auVar81._8_8_;
            auVar51 = *(undefined1 (*) [16])(puVar25 + 0x20);
            auVar81._0_8_ = auVar81._0_8_ + auVar36._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar33;
            auVar81._8_8_ =
                 lVar78 + auVar36._8_8_ +
                 (auVar56._8_8_ & 0xffffffff) * (ulonglong)(auVar50._8_4_ ^ *(uint *)(puVar29 + 8));
            uVar33 = *(uint *)(puVar29 + 0x10) ^ auVar51._0_4_;
            uVar53 = *(uint *)(puVar29 + 0x14) ^ auVar51._4_4_;
            auVar57._4_4_ = uVar33;
            auVar57._0_4_ = uVar53;
            auVar57._8_4_ = *(uint *)(puVar29 + 0x1c) ^ auVar51._12_4_;
            auVar57._12_4_ = uVar33;
            auVar37._0_8_ = auVar51._8_8_;
            auVar37._8_4_ = auVar51._0_4_;
            auVar37._12_4_ = auVar51._4_4_;
            lVar78 = auVar83._8_8_;
            auVar83._0_8_ = (ulonglong)uVar53 * (ulonglong)uVar33 + auVar37._0_8_ + auVar83._0_8_;
            auVar83._8_8_ =
                 (auVar57._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar29 + 0x18) ^ auVar51._8_4_) + auVar37._8_8_ + lVar78;
            uVar27 = uVar27 - 1;
            puVar25 = puVar25 + 0x40;
            puVar29 = puVar29 + 8;
          } while (uVar27 != 0);
        }
        puVar25 = puVar31 + uVar3;
        auVar58._0_4_ = auVar76._4_4_ >> 0xf ^ auVar76._0_4_ ^ *(uint *)puVar25;
        auVar58._4_4_ = auVar76._4_4_ ^ *(uint *)(puVar25 + 4);
        auVar58._8_4_ = auVar76._12_4_ >> 0xf ^ auVar76._8_4_ ^ *(uint *)(puVar25 + 8);
        auVar58._12_4_ = auVar76._12_4_ ^ *(uint *)(puVar25 + 0xc);
        auVar77._4_4_ = auVar58._0_4_;
        auVar77._0_4_ = auVar58._4_4_;
        auVar77._8_4_ = auVar58._12_4_;
        auVar77._12_4_ = auVar58._0_4_;
        puVar25 = puVar31 + uVar3 + 0x10;
        auVar76._0_8_ =
             ((ulonglong)auVar58._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20)
             + (ulonglong)auVar58._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        auVar76._8_8_ =
             ((auVar77._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
             (auVar58._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        auVar59._0_4_ = auVar79._4_4_ >> 0xf ^ auVar79._0_4_ ^ *(uint *)puVar25;
        auVar59._4_4_ = auVar79._4_4_ ^ *(uint *)(puVar25 + 4);
        auVar59._8_4_ = auVar79._12_4_ >> 0xf ^ auVar79._8_4_ ^ *(uint *)(puVar25 + 8);
        auVar59._12_4_ = auVar79._12_4_ ^ *(uint *)(puVar25 + 0xc);
        auVar80._4_4_ = auVar59._0_4_;
        auVar80._0_4_ = auVar59._4_4_;
        auVar80._8_4_ = auVar59._12_4_;
        auVar80._12_4_ = auVar59._0_4_;
        puVar25 = puVar31 + uVar3 + 0x20;
        auVar79._0_8_ =
             ((ulonglong)auVar59._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20)
             + (ulonglong)auVar59._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        auVar79._8_8_ =
             ((auVar80._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
             (auVar59._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        auVar60._0_4_ = auVar81._4_4_ >> 0xf ^ auVar81._0_4_ ^ *(uint *)puVar25;
        auVar60._4_4_ = auVar81._4_4_ ^ *(uint *)(puVar25 + 4);
        auVar60._8_4_ = auVar81._12_4_ >> 0xf ^ auVar81._8_4_ ^ *(uint *)(puVar25 + 8);
        auVar60._12_4_ = auVar81._12_4_ ^ *(uint *)(puVar25 + 0xc);
        auVar82._4_4_ = auVar60._0_4_;
        auVar82._0_4_ = auVar60._4_4_;
        auVar82._8_4_ = auVar60._12_4_;
        auVar82._12_4_ = auVar60._0_4_;
        puVar25 = puVar31 + uVar3 + 0x30;
        auVar81._0_8_ =
             ((ulonglong)auVar60._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20)
             + (ulonglong)auVar60._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        auVar81._8_8_ =
             ((auVar82._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
             (auVar60._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        auVar61._0_4_ = auVar83._4_4_ >> 0xf ^ auVar83._0_4_ ^ *(uint *)puVar25;
        auVar61._4_4_ = auVar83._4_4_ ^ *(uint *)(puVar25 + 4);
        auVar61._8_4_ = auVar83._12_4_ >> 0xf ^ auVar83._8_4_ ^ *(uint *)(puVar25 + 8);
        auVar61._12_4_ = auVar83._12_4_ ^ *(uint *)(puVar25 + 0xc);
        auVar84._4_4_ = auVar61._0_4_;
        auVar84._0_4_ = auVar61._4_4_;
        auVar84._8_4_ = auVar61._12_4_;
        auVar84._12_4_ = auVar61._0_4_;
        auVar83._0_8_ =
             ((ulonglong)auVar61._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20)
             + (ulonglong)auVar61._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        auVar83._8_8_ =
             ((auVar84._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
             (auVar61._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        if (lVar28 != 0) {
          pauVar24 = (undefined1 (*) [16])((longlong)param_1 + uVar30 * 0x40 + 0x110);
          puVar25 = puVar31 + 0x20;
          do {
            auVar50 = pauVar24[-1];
            auVar51 = pauVar24[1];
            uVar33 = *(uint *)(puVar25 + -0x20) ^ auVar50._0_4_;
            uVar53 = *(uint *)(puVar25 + -0x1c) ^ auVar50._4_4_;
            auVar62._4_4_ = uVar33;
            auVar62._0_4_ = uVar53;
            auVar62._8_4_ = *(uint *)(puVar25 + -0x14) ^ auVar50._12_4_;
            auVar62._12_4_ = uVar33;
            auVar38._0_8_ = auVar50._8_8_;
            auVar38._8_4_ = auVar50._0_4_;
            auVar38._12_4_ = auVar50._4_4_;
            lVar78 = auVar76._8_8_;
            auVar52 = *pauVar24;
            auVar76._0_8_ = (ulonglong)uVar53 * (ulonglong)uVar33 + auVar38._0_8_ + auVar76._0_8_;
            auVar76._8_8_ =
                 (auVar62._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar25 + -0x18) ^ auVar50._8_4_) + auVar38._8_8_ + lVar78;
            uVar33 = *(uint *)(puVar25 + -0x10) ^ auVar52._0_4_;
            uVar53 = *(uint *)(puVar25 + -0xc) ^ auVar52._4_4_;
            auVar63._4_4_ = uVar33;
            auVar63._0_4_ = uVar53;
            auVar63._8_4_ = *(uint *)(puVar25 + -4) ^ auVar52._12_4_;
            auVar63._12_4_ = uVar33;
            auVar39._0_8_ = auVar52._8_8_;
            auVar39._8_4_ = auVar52._0_4_;
            auVar39._12_4_ = auVar52._4_4_;
            lVar78 = auVar79._8_8_;
            auVar79._0_8_ = (ulonglong)uVar53 * (ulonglong)uVar33 + auVar39._0_8_ + auVar79._0_8_;
            auVar79._8_8_ =
                 (auVar63._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar25 + -8) ^ auVar52._8_4_)
                 + auVar39._8_8_ + lVar78;
            uVar33 = auVar51._0_4_ ^ *(uint *)puVar25;
            uVar53 = auVar51._4_4_ ^ *(uint *)(puVar25 + 4);
            auVar40._0_8_ = auVar51._8_8_;
            auVar40._8_4_ = auVar51._0_4_;
            auVar40._12_4_ = auVar51._4_4_;
            auVar69._4_4_ = uVar33;
            auVar69._0_4_ = uVar53;
            auVar69._8_4_ = auVar51._12_4_ ^ *(uint *)(puVar25 + 0xc);
            auVar69._12_4_ = uVar33;
            lVar78 = auVar81._8_8_;
            auVar81._0_8_ = (ulonglong)uVar53 * (ulonglong)uVar33 + auVar40._0_8_ + auVar81._0_8_;
            auVar81._8_8_ =
                 (auVar69._8_8_ & 0xffffffff) * (ulonglong)(auVar51._8_4_ ^ *(uint *)(puVar25 + 8))
                 + auVar40._8_8_ + lVar78;
            auVar50 = pauVar24[2];
            uVar33 = *(uint *)(puVar25 + 0x10) ^ auVar50._0_4_;
            uVar53 = *(uint *)(puVar25 + 0x14) ^ auVar50._4_4_;
            auVar64._4_4_ = uVar33;
            auVar64._0_4_ = uVar53;
            auVar64._8_4_ = *(uint *)(puVar25 + 0x1c) ^ auVar50._12_4_;
            auVar64._12_4_ = uVar33;
            auVar41._0_8_ = auVar50._8_8_;
            auVar41._8_4_ = auVar50._0_4_;
            auVar41._12_4_ = auVar50._4_4_;
            lVar78 = auVar83._8_8_;
            auVar83._0_8_ = (ulonglong)uVar53 * (ulonglong)uVar33 + auVar41._0_8_ + auVar83._0_8_;
            auVar83._8_8_ =
                 (auVar64._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar25 + 0x18) ^ auVar50._8_4_) + auVar41._8_8_ + lVar78;
            lVar28 = lVar28 + -1;
            pauVar24 = pauVar24 + 4;
            puVar25 = puVar25 + 8;
          } while (lVar28 != 0);
        }
      }
      puVar25 = puVar31 + (uVar3 - 7);
      auVar50 = *(undefined1 (*) [16])(param_1->customSecret + uVar32 + 0x80);
      uVar33 = *(uint *)puVar25 ^ auVar50._0_4_;
      uVar53 = *(uint *)(puVar25 + 4) ^ auVar50._4_4_;
      auVar73._0_8_ = auVar50._8_8_;
      auVar73._8_4_ = auVar50._0_4_;
      auVar73._12_4_ = auVar50._4_4_;
      auVar46._4_4_ = uVar33;
      auVar46._0_4_ = uVar53;
      auVar46._8_4_ = *(uint *)(puVar25 + 0xc) ^ auVar50._12_4_;
      auVar46._12_4_ = uVar33;
      puVar29 = puVar31 + uVar3 + 9;
      uVar72 = auVar73._0_8_ + auVar76._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar33;
      uVar75 = auVar73._8_8_ + auVar76._8_8_ +
               (auVar46._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar25 + 8) ^ auVar50._8_4_);
      auVar76 = *(undefined1 (*) [16])(param_1->customSecret + uVar32 + 0x90);
      uVar33 = *(uint *)puVar29 ^ auVar76._0_4_;
      uVar53 = *(uint *)(puVar29 + 4) ^ auVar76._4_4_;
      auVar70._0_8_ = auVar76._8_8_;
      auVar70._8_4_ = auVar76._0_4_;
      auVar70._12_4_ = auVar76._4_4_;
      auVar47._4_4_ = uVar33;
      auVar47._0_4_ = uVar53;
      auVar47._8_4_ = *(uint *)(puVar29 + 0xc) ^ auVar76._12_4_;
      auVar47._12_4_ = uVar33;
      auVar50 = *(undefined1 (*) [16])(param_1->customSecret + uVar32 + 0xa0);
      uVar27 = auVar70._0_8_ + auVar79._0_8_ + (ulonglong)uVar53 * (ulonglong)uVar33;
      uVar30 = auVar70._8_8_ + auVar79._8_8_ +
               (auVar47._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar29 + 8) ^ auVar76._8_4_);
      puVar25 = puVar31 + uVar3 + 0x19;
      auVar48._0_8_ = auVar50._8_8_;
      auVar48._8_4_ = auVar50._0_4_;
      auVar48._12_4_ = auVar50._4_4_;
      auVar76 = *(undefined1 (*) [16])(param_1->customSecret + uVar32 + 0xb0);
      uVar32 = (ulonglong)(*(uint *)(puVar25 + 4) ^ auVar50._4_4_) *
               (ulonglong)(*(uint *)puVar25 ^ auVar50._0_4_) + auVar48._0_8_ + auVar81._0_8_;
      lVar28 = (ulonglong)(*(uint *)(puVar25 + 0xc) ^ auVar50._12_4_) *
               (ulonglong)(*(uint *)(puVar25 + 8) ^ auVar50._8_4_) + auVar48._8_8_ + auVar81._8_8_;
      puVar25 = puVar31 + uVar3 + 0x29;
      lVar78 = (ulonglong)(*(uint *)(puVar25 + 4) ^ auVar76._4_4_) *
               (ulonglong)(*(uint *)puVar25 ^ auVar76._0_4_);
      lVar23 = (ulonglong)(*(uint *)(puVar25 + 0xc) ^ auVar76._12_4_) *
               (ulonglong)(*(uint *)(puVar25 + 8) ^ auVar76._8_4_);
      auVar49._0_8_ = auVar76._8_8_;
      auVar49._8_4_ = auVar76._0_4_;
      auVar49._12_4_ = auVar76._4_4_;
    }
    uVar22 = lVar78 + auVar49._0_8_ + auVar83._0_8_;
    lVar23 = lVar23 + auVar49._8_8_ + auVar83._8_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar75 ^ *(ulonglong *)(puVar31 + 0x13);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar72 ^ *(ulonglong *)(puVar31 + 0xb);
    auVar20._8_4_ = (int)lVar28;
    auVar20._0_8_ = uVar32;
    auVar20._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    auVar21._8_4_ = (int)lVar23;
    auVar21._0_8_ = uVar22;
    auVar21._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar30 ^ *(ulonglong *)(puVar31 + 0x23);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar27 ^ *(ulonglong *)(puVar31 + 0x1b);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar20._8_8_ ^ *(ulonglong *)(puVar31 + 0x33);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar32 ^ *(ulonglong *)(puVar31 + 0x2b);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar21._8_8_ ^ *(ulonglong *)(puVar31 + 0x43);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar22 ^ *(ulonglong *)(puVar31 + 0x3b);
    uVar26 = (SUB168(auVar7 * auVar15,0) ^ SUB168(auVar7 * auVar15,8)) +
             (SUB168(auVar4 * auVar12,8) ^ SUB168(auVar4 * auVar12,0)) +
             uVar26 * -0x61c8864e7a143579 +
             (SUB168(auVar5 * auVar13,8) ^ SUB168(auVar5 * auVar13,0)) +
             (SUB168(auVar6 * auVar14,8) ^ SUB168(auVar6 * auVar14,0));
    uVar26 = (uVar26 >> 0x25 ^ uVar26) * 0x165667919e3779f9;
    __return_storage_ptr__->low64 = uVar26 >> 0x20 ^ uVar26;
    uVar2 = *puVar1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar75 ^ *(ulonglong *)(puVar31 + (uVar2 - 3));
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar72 ^ *(ulonglong *)(puVar31 + (uVar2 - 0xb));
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar30 ^ *(ulonglong *)(puVar31 + uVar2 + 0xd);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar27 ^ *(ulonglong *)(puVar31 + uVar2 + 5);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = auVar20._8_8_ ^ *(ulonglong *)(puVar31 + uVar2 + 0x1d);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32 ^ *(ulonglong *)(puVar31 + uVar2 + 0x15);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar21._8_8_ ^ *(ulonglong *)(puVar31 + uVar2 + 0x2d);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar22 ^ *(ulonglong *)(puVar31 + uVar2 + 0x25);
    uVar26 = (SUB168(auVar11 * auVar19,0) ^ SUB168(auVar11 * auVar19,8)) +
             (SUB168(auVar8 * auVar16,8) ^ SUB168(auVar8 * auVar16,0)) +
             ~(param_1->totalLen * -0x3d4d51c2d82b14b1) +
             (SUB168(auVar9 * auVar17,8) ^ SUB168(auVar9 * auVar17,0)) +
             (SUB168(auVar10 * auVar18,8) ^ SUB168(auVar10 * auVar18,0));
    uVar26 = (uVar26 >> 0x25 ^ uVar26) * 0x165667919e3779f9;
    __return_storage_ptr__->high64 = uVar26 >> 0x20 ^ uVar26;
  }
  return __return_storage_ptr__;
}

// XXH_INLINE_XXH3_128bits_update @ 14171f1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XXH_INLINE_XXH_errorcode __cdecl
XXH_INLINE_XXH3_128bits_update(XXH_INLINE_XXH3_state_s *param_1,void *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  undefined1 (*pauVar7) [16];
  uchar *puVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  longlong lVar11;
  void *pvVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  uchar *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar57;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar77;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  ulong64 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  ulong64 uVar82;
  undefined1 auVar81 [16];
  ulong64 uVar83;
  undefined1 auVar84 [16];
  ulong64 uVar86;
  undefined1 auVar85 [16];
  ulong64 uVar87;
  undefined1 auVar88 [16];
  ulong64 uVar90;
  undefined1 auVar89 [16];
  ulong64 uVar91;
  undefined1 auVar92 [16];
  ulong64 uVar94;
  undefined1 auVar93 [16];
  
  if (param_2 == (void *)0x0) {
    return XXH_INLINE_XXH_ERROR;
  }
  puVar15 = param_1->extSecret;
  uVar1 = (longlong)param_2 + param_3;
  if (puVar15 == (uchar *)0x0) {
    puVar15 = param_1->customSecret;
  }
  param_1->totalLen = param_1->totalLen + param_3;
  uVar5 = _UNK_15066df88;
  uVar4 = ___xmm_9e3779b19e3779b19e3779b19e3779b1;
  uVar40 = param_1->bufferedSize;
  uVar9 = (ulonglong)uVar40;
  if (uVar9 + param_3 < 0x101) {
    memcpy(param_1->buffer + uVar9,param_2,param_3);
    param_1->bufferedSize = param_1->bufferedSize + (int)param_3;
  }
  else {
    if (uVar40 != 0) {
      memcpy(param_1->buffer + uVar9,param_2,(ulonglong)(0x100 - uVar40));
      uVar83 = param_1->nbStripesSoFar;
      param_2 = (void *)((longlong)param_2 + (ulonglong)(0x100 - uVar40));
      uVar91 = param_1->secretLimit;
      uVar9 = param_1->nbStripesPerBlock - uVar83;
      if (uVar9 < 5) {
        uVar14 = 4 - uVar9;
        if (uVar9 != 0) {
          puVar6 = param_1->buffer + 0x10;
          puVar8 = puVar15 + uVar83 * 8 + 0x20;
          uVar13 = uVar9;
          do {
            auVar41 = *(undefined1 (*) [16])(puVar6 + -0x10);
            uVar86 = *(ulong64 *)(puVar8 + -0x18);
            auVar58._0_8_ = auVar41._8_8_;
            auVar58._8_4_ = auVar41._0_4_;
            auVar58._12_4_ = auVar41._4_4_;
            uVar83 = param_1->acc[1];
            uVar40 = (uint)*(ulong64 *)(puVar8 + -0x20) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar8 + -0x1c) ^ auVar41._4_4_;
            auVar16._4_4_ = uVar40;
            auVar16._0_4_ = uVar57;
            auVar16._8_4_ = *(uint *)(puVar8 + -0x14) ^ auVar41._12_4_;
            auVar16._12_4_ = uVar40;
            param_1->acc[0] =
                 auVar58._0_8_ + param_1->acc[0] + (ulonglong)uVar57 * (ulonglong)uVar40;
            param_1->acc[1] =
                 auVar58._8_8_ + uVar83 +
                 (auVar16._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar86 ^ auVar41._8_4_);
            auVar41 = *(undefined1 (*) [16])puVar6;
            uVar83 = *(ulong64 *)(puVar8 + -8);
            auVar59._0_8_ = auVar41._8_8_;
            auVar59._8_4_ = auVar41._0_4_;
            auVar59._12_4_ = auVar41._4_4_;
            uVar40 = (uint)*(ulong64 *)(puVar8 + -0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar8 + -0xc) ^ auVar41._4_4_;
            auVar17._4_4_ = uVar40;
            auVar17._0_4_ = uVar57;
            auVar17._8_4_ = *(uint *)(puVar8 + -4) ^ auVar41._12_4_;
            auVar17._12_4_ = uVar40;
            param_1->acc[2] =
                 auVar59._0_8_ + param_1->acc[2] + (ulonglong)uVar57 * (ulonglong)uVar40;
            param_1->acc[3] =
                 auVar59._8_8_ + param_1->acc[3] +
                 (auVar17._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_);
            auVar41 = *(undefined1 (*) [16])(puVar6 + 0x10);
            uVar40 = *(uint *)(puVar8 + 8);
            auVar79._0_8_ = auVar41._8_8_;
            auVar79._8_4_ = auVar41._0_4_;
            auVar79._12_4_ = auVar41._4_4_;
            uVar57 = auVar41._0_4_ ^ *(uint *)puVar8;
            uVar77 = auVar41._4_4_ ^ *(uint *)(puVar8 + 4);
            auVar18._4_4_ = uVar57;
            auVar18._0_4_ = uVar77;
            auVar18._8_4_ = auVar41._12_4_ ^ *(uint *)(puVar8 + 0xc);
            auVar18._12_4_ = uVar57;
            param_1->acc[4] =
                 auVar79._0_8_ + param_1->acc[4] + (ulonglong)uVar77 * (ulonglong)uVar57;
            param_1->acc[5] =
                 auVar79._8_8_ + param_1->acc[5] +
                 (auVar18._8_8_ & 0xffffffff) * (ulonglong)(auVar41._8_4_ ^ uVar40);
            auVar41 = *(undefined1 (*) [16])(puVar6 + 0x20);
            uVar40 = *(uint *)(puVar8 + 0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar8 + 0x14) ^ auVar41._4_4_;
            auVar60._4_4_ = uVar40;
            auVar60._0_4_ = uVar57;
            auVar60._8_4_ = *(uint *)(puVar8 + 0x1c) ^ auVar41._12_4_;
            auVar60._12_4_ = uVar40;
            auVar19._0_8_ = auVar41._8_8_;
            auVar19._8_4_ = auVar41._0_4_;
            auVar19._12_4_ = auVar41._4_4_;
            auVar61._0_8_ = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar19._0_8_ + param_1->acc[6];
            auVar61._8_8_ =
                 (auVar60._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar8 + 0x18) ^ auVar41._8_4_) +
                 auVar19._8_8_ + param_1->acc[7];
            *(undefined1 (*) [16])(param_1->acc + 6) = auVar61;
            uVar13 = uVar13 - 1;
            puVar6 = puVar6 + 0x40;
            puVar8 = puVar8 + 8;
          } while (uVar13 != 0);
        }
        puVar6 = puVar15 + uVar91;
        auVar41._0_4_ =
             *(uint *)((longlong)param_1->acc + 4) >> 0xf ^ (uint)param_1->acc[0] ^ *(uint *)puVar6;
        auVar41._4_4_ = *(uint *)((longlong)param_1->acc + 4) ^ *(uint *)(puVar6 + 4);
        auVar41._8_4_ =
             *(uint *)((longlong)param_1->acc + 0xc) >> 0xf ^ (uint)param_1->acc[1] ^
             *(uint *)(puVar6 + 8);
        auVar41._12_4_ = *(uint *)((longlong)param_1->acc + 0xc) ^ *(uint *)(puVar6 + 0xc);
        auVar80._4_4_ = auVar41._0_4_;
        auVar80._0_4_ = auVar41._4_4_;
        auVar80._8_4_ = auVar41._12_4_;
        auVar80._12_4_ = auVar41._0_4_;
        uVar78 = ((ulonglong)auVar41._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar41._0_4_ * (ulonglong)uVar4;
        uVar82 = ((auVar80._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar41._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        uVar40 = *(uint *)((longlong)param_1->acc + 0x14);
        uVar57 = *(uint *)((longlong)param_1->acc + 0x1c);
        uVar83 = param_1->acc[2];
        uVar77 = *(uint *)((longlong)param_1->acc + 0x14);
        uVar86 = param_1->acc[3];
        uVar2 = *(uint *)((longlong)param_1->acc + 0x1c);
        param_1->acc[0] = uVar78;
        param_1->acc[1] = uVar82;
        puVar6 = puVar15 + uVar91 + 0x10;
        auVar42._0_4_ = uVar40 >> 0xf ^ (uint)uVar83 ^ *(uint *)puVar6;
        auVar42._4_4_ = uVar77 ^ *(uint *)(puVar6 + 4);
        auVar42._8_4_ = uVar57 >> 0xf ^ (uint)uVar86 ^ *(uint *)(puVar6 + 8);
        auVar42._12_4_ = uVar2 ^ *(uint *)(puVar6 + 0xc);
        auVar84._4_4_ = auVar42._0_4_;
        auVar84._0_4_ = auVar42._4_4_;
        auVar84._8_4_ = auVar42._12_4_;
        auVar84._12_4_ = auVar42._0_4_;
        uVar83 = ((ulonglong)auVar42._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar42._0_4_ * (ulonglong)uVar4;
        uVar86 = ((auVar84._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar42._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        param_1->acc[2] = uVar83;
        param_1->acc[3] = uVar86;
        puVar6 = puVar15 + uVar91 + 0x20;
        auVar43._0_4_ =
             *(uint *)((longlong)param_1->acc + 0x24) >> 0xf ^ (uint)param_1->acc[4] ^
             *(uint *)puVar6;
        auVar43._4_4_ = *(uint *)((longlong)param_1->acc + 0x24) ^ *(uint *)(puVar6 + 4);
        auVar43._8_4_ =
             *(uint *)((longlong)param_1->acc + 0x2c) >> 0xf ^ (uint)param_1->acc[5] ^
             *(uint *)(puVar6 + 8);
        auVar43._12_4_ = *(uint *)((longlong)param_1->acc + 0x2c) ^ *(uint *)(puVar6 + 0xc);
        auVar88._4_4_ = auVar43._0_4_;
        auVar88._0_4_ = auVar43._4_4_;
        auVar88._8_4_ = auVar43._12_4_;
        auVar88._12_4_ = auVar43._0_4_;
        uVar87 = ((ulonglong)auVar43._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar43._0_4_ * (ulonglong)uVar4;
        uVar90 = ((auVar88._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar43._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        param_1->acc[4] = uVar87;
        param_1->acc[5] = uVar90;
        puVar6 = puVar15 + uVar91 + 0x30;
        auVar44._0_4_ =
             *(uint *)((longlong)param_1->acc + 0x34) >> 0xf ^ (uint)param_1->acc[6] ^
             *(uint *)puVar6;
        auVar44._4_4_ = *(uint *)((longlong)param_1->acc + 0x34) ^ *(uint *)(puVar6 + 4);
        auVar44._8_4_ =
             *(uint *)((longlong)param_1->acc + 0x3c) >> 0xf ^ (uint)param_1->acc[7] ^
             *(uint *)(puVar6 + 8);
        auVar44._12_4_ = *(uint *)((longlong)param_1->acc + 0x3c) ^ *(uint *)(puVar6 + 0xc);
        auVar92._4_4_ = auVar44._0_4_;
        auVar92._0_4_ = auVar44._4_4_;
        auVar92._8_4_ = auVar44._12_4_;
        auVar92._12_4_ = auVar44._0_4_;
        uVar91 = ((ulonglong)auVar44._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar44._0_4_ * (ulonglong)uVar4;
        uVar94 = ((auVar92._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar44._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        param_1->acc[6] = uVar91;
        param_1->acc[7] = uVar94;
        if (uVar14 != 0) {
          pauVar7 = (undefined1 (*) [16])((longlong)param_1 + uVar9 * 0x40 + 0x110);
          puVar6 = puVar15 + 0x20;
          uVar10 = uVar14;
          do {
            auVar41 = pauVar7[-1];
            uVar40 = *(uint *)(puVar6 + -0x20) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
            auVar20._0_8_ = auVar41._8_8_;
            auVar20._8_4_ = auVar41._0_4_;
            auVar20._12_4_ = auVar41._4_4_;
            auVar45._4_4_ = uVar40;
            auVar45._0_4_ = uVar57;
            auVar45._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
            auVar45._12_4_ = uVar40;
            uVar78 = uVar78 + auVar20._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
            uVar82 = uVar82 + auVar20._8_8_ +
                     (auVar45._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + -0x18) ^ auVar41._8_4_);
            param_1->acc[0] = uVar78;
            param_1->acc[1] = uVar82;
            auVar41 = *pauVar7;
            uVar40 = *(uint *)(puVar6 + -0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
            auVar21._0_8_ = auVar41._8_8_;
            auVar21._8_4_ = auVar41._0_4_;
            auVar21._12_4_ = auVar41._4_4_;
            auVar46._4_4_ = uVar40;
            auVar46._0_4_ = uVar57;
            auVar46._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
            auVar46._12_4_ = uVar40;
            uVar83 = uVar83 + auVar21._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
            uVar86 = uVar86 + auVar21._8_8_ +
                     (auVar46._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + -8) ^ auVar41._8_4_);
            param_1->acc[2] = uVar83;
            param_1->acc[3] = uVar86;
            auVar41 = pauVar7[1];
            uVar40 = *(uint *)puVar6 ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
            auVar47._4_4_ = uVar40;
            auVar47._0_4_ = uVar57;
            auVar47._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
            auVar47._12_4_ = uVar40;
            auVar22._0_8_ = auVar41._8_8_;
            auVar22._8_4_ = auVar41._0_4_;
            auVar22._12_4_ = auVar41._4_4_;
            uVar87 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar22._0_8_ + uVar87;
            uVar90 = (auVar47._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + 8) ^ auVar41._8_4_) + auVar22._8_8_ + uVar90;
            param_1->acc[4] = uVar87;
            param_1->acc[5] = uVar90;
            auVar41 = pauVar7[2];
            uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
            auVar23._0_8_ = auVar41._8_8_;
            auVar23._8_4_ = auVar41._0_4_;
            auVar23._12_4_ = auVar41._4_4_;
            auVar48._4_4_ = uVar40;
            auVar48._0_4_ = uVar57;
            auVar48._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
            auVar48._12_4_ = uVar40;
            uVar91 = uVar91 + auVar23._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
            uVar94 = uVar94 + auVar23._8_8_ +
                     (auVar48._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_);
            param_1->acc[6] = uVar91;
            param_1->acc[7] = uVar94;
            uVar10 = uVar10 - 1;
            pauVar7 = pauVar7 + 4;
            puVar6 = puVar6 + 8;
          } while (uVar10 != 0);
        }
        param_1->nbStripesSoFar = uVar14;
      }
      else {
        lVar11 = 4;
        puVar6 = param_1->buffer + 0x10;
        puVar8 = puVar15 + uVar83 * 8 + 0x20;
        do {
          auVar41 = *(undefined1 (*) [16])(puVar6 + -0x10);
          uVar91 = *(ulong64 *)(puVar8 + -0x18);
          auVar62._0_8_ = auVar41._8_8_;
          auVar62._8_4_ = auVar41._0_4_;
          auVar62._12_4_ = auVar41._4_4_;
          uVar83 = param_1->acc[1];
          uVar40 = (uint)*(ulong64 *)(puVar8 + -0x20) ^ auVar41._0_4_;
          uVar57 = *(uint *)(puVar8 + -0x1c) ^ auVar41._4_4_;
          auVar24._4_4_ = uVar40;
          auVar24._0_4_ = uVar57;
          auVar24._8_4_ = *(uint *)(puVar8 + -0x14) ^ auVar41._12_4_;
          auVar24._12_4_ = uVar40;
          param_1->acc[0] = auVar62._0_8_ + param_1->acc[0] + (ulonglong)uVar57 * (ulonglong)uVar40;
          param_1->acc[1] =
               auVar62._8_8_ + uVar83 +
               (auVar24._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar91 ^ auVar41._8_4_);
          auVar41 = *(undefined1 (*) [16])puVar6;
          uVar83 = *(ulong64 *)(puVar8 + -8);
          uVar40 = (uint)*(ulong64 *)(puVar8 + -0x10) ^ auVar41._0_4_;
          uVar57 = *(uint *)(puVar8 + -0xc) ^ auVar41._4_4_;
          auVar63._4_4_ = uVar40;
          auVar63._0_4_ = uVar57;
          auVar63._8_4_ = *(uint *)(puVar8 + -4) ^ auVar41._12_4_;
          auVar63._12_4_ = uVar40;
          auVar25._0_8_ = auVar41._8_8_;
          auVar25._8_4_ = auVar41._0_4_;
          auVar25._12_4_ = auVar41._4_4_;
          param_1->acc[2] = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar25._0_8_ + param_1->acc[2];
          param_1->acc[3] =
               (auVar63._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_) +
               auVar25._8_8_ + param_1->acc[3];
          auVar41 = *(undefined1 (*) [16])(puVar6 + 0x10);
          uVar40 = *(uint *)(puVar8 + 8);
          uVar57 = *(uint *)puVar8 ^ auVar41._0_4_;
          uVar77 = *(uint *)(puVar8 + 4) ^ auVar41._4_4_;
          auVar64._4_4_ = uVar57;
          auVar64._0_4_ = uVar77;
          auVar64._8_4_ = *(uint *)(puVar8 + 0xc) ^ auVar41._12_4_;
          auVar64._12_4_ = uVar57;
          auVar26._0_8_ = auVar41._8_8_;
          auVar26._8_4_ = auVar41._0_4_;
          auVar26._12_4_ = auVar41._4_4_;
          param_1->acc[4] = (ulonglong)uVar77 * (ulonglong)uVar57 + auVar26._0_8_ + param_1->acc[4];
          param_1->acc[5] =
               (auVar64._8_8_ & 0xffffffff) * (ulonglong)(uVar40 ^ auVar41._8_4_) +
               auVar26._8_8_ + param_1->acc[5];
          auVar41 = *(undefined1 (*) [16])(puVar6 + 0x20);
          auVar65._0_8_ = auVar41._8_8_;
          auVar65._8_4_ = auVar41._0_4_;
          auVar65._12_4_ = auVar41._4_4_;
          uVar40 = *(uint *)(puVar8 + 0x10) ^ auVar41._0_4_;
          uVar57 = *(uint *)(puVar8 + 0x14) ^ auVar41._4_4_;
          auVar27._4_4_ = uVar40;
          auVar27._0_4_ = uVar57;
          auVar27._8_4_ = *(uint *)(puVar8 + 0x1c) ^ auVar41._12_4_;
          auVar27._12_4_ = uVar40;
          auVar66._0_8_ = auVar65._0_8_ + param_1->acc[6] + (ulonglong)uVar57 * (ulonglong)uVar40;
          auVar66._8_8_ =
               auVar65._8_8_ + param_1->acc[7] +
               (auVar27._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar8 + 0x18) ^ auVar41._8_4_);
          *(undefined1 (*) [16])(param_1->acc + 6) = auVar66;
          lVar11 = lVar11 + -1;
          puVar6 = puVar6 + 0x40;
          puVar8 = puVar8 + 8;
        } while (lVar11 != 0);
        param_1->nbStripesSoFar = param_1->nbStripesSoFar + 4;
      }
      param_1->bufferedSize = 0;
    }
    if ((longlong)param_2 + 0x100U < uVar1) {
      do {
        pvVar12 = param_2;
        uVar83 = param_1->nbStripesSoFar;
        uVar91 = param_1->secretLimit;
        uVar9 = param_1->nbStripesPerBlock - uVar83;
        if (uVar9 < 5) {
          uVar14 = 4 - uVar9;
          if (uVar9 != 0) {
            pauVar7 = (undefined1 (*) [16])((longlong)pvVar12 + 0x10);
            puVar6 = puVar15 + uVar83 * 8 + 0x20;
            uVar13 = uVar9;
            do {
              auVar41 = pauVar7[-1];
              uVar86 = *(ulong64 *)(puVar6 + -0x18);
              uVar40 = (uint)*(ulong64 *)(puVar6 + -0x20) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
              auVar67._4_4_ = uVar40;
              auVar67._0_4_ = uVar57;
              auVar67._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
              auVar67._12_4_ = uVar40;
              auVar28._0_8_ = auVar41._8_8_;
              auVar28._8_4_ = auVar41._0_4_;
              auVar28._12_4_ = auVar41._4_4_;
              uVar83 = param_1->acc[1];
              param_1->acc[0] =
                   (ulonglong)uVar57 * (ulonglong)uVar40 + auVar28._0_8_ + param_1->acc[0];
              param_1->acc[1] =
                   (auVar67._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar86 ^ auVar41._8_4_) +
                   auVar28._8_8_ + uVar83;
              auVar41 = *pauVar7;
              uVar83 = *(ulong64 *)(puVar6 + -8);
              uVar40 = (uint)*(ulong64 *)(puVar6 + -0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
              auVar68._4_4_ = uVar40;
              auVar68._0_4_ = uVar57;
              auVar68._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
              auVar68._12_4_ = uVar40;
              auVar29._0_8_ = auVar41._8_8_;
              auVar29._8_4_ = auVar41._0_4_;
              auVar29._12_4_ = auVar41._4_4_;
              param_1->acc[2] =
                   (ulonglong)uVar57 * (ulonglong)uVar40 + auVar29._0_8_ + param_1->acc[2];
              param_1->acc[3] =
                   (auVar68._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_) +
                   auVar29._8_8_ + param_1->acc[3];
              auVar41 = pauVar7[1];
              uVar40 = *(uint *)(puVar6 + 8);
              auVar69._0_8_ = auVar41._8_8_;
              auVar69._8_4_ = auVar41._0_4_;
              auVar69._12_4_ = auVar41._4_4_;
              uVar57 = *(uint *)puVar6 ^ auVar41._0_4_;
              uVar77 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
              auVar30._4_4_ = uVar57;
              auVar30._0_4_ = uVar77;
              auVar30._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
              auVar30._12_4_ = uVar57;
              param_1->acc[4] =
                   auVar69._0_8_ + param_1->acc[4] + (ulonglong)uVar77 * (ulonglong)uVar57;
              param_1->acc[5] =
                   auVar69._8_8_ + param_1->acc[5] +
                   (auVar30._8_8_ & 0xffffffff) * (ulonglong)(uVar40 ^ auVar41._8_4_);
              auVar41 = pauVar7[2];
              auVar70._0_8_ = auVar41._8_8_;
              auVar70._8_4_ = auVar41._0_4_;
              auVar70._12_4_ = auVar41._4_4_;
              uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
              auVar31._4_4_ = uVar40;
              auVar31._0_4_ = uVar57;
              auVar31._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
              auVar31._12_4_ = uVar40;
              auVar71._0_8_ =
                   auVar70._0_8_ + param_1->acc[6] + (ulonglong)uVar57 * (ulonglong)uVar40;
              auVar71._8_8_ =
                   auVar70._8_8_ + param_1->acc[7] +
                   (auVar31._8_8_ & 0xffffffff) *
                   (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_);
              *(undefined1 (*) [16])(param_1->acc + 6) = auVar71;
              uVar13 = uVar13 - 1;
              pauVar7 = pauVar7 + 4;
              puVar6 = puVar6 + 8;
            } while (uVar13 != 0);
          }
          puVar6 = puVar15 + uVar91;
          auVar49._0_4_ =
               *(uint *)((longlong)param_1->acc + 4) >> 0xf ^ (uint)param_1->acc[0] ^
               *(uint *)puVar6;
          auVar49._4_4_ = *(uint *)((longlong)param_1->acc + 4) ^ *(uint *)(puVar6 + 4);
          auVar49._8_4_ =
               *(uint *)((longlong)param_1->acc + 0xc) >> 0xf ^ (uint)param_1->acc[1] ^
               *(uint *)(puVar6 + 8);
          auVar49._12_4_ = *(uint *)((longlong)param_1->acc + 0xc) ^ *(uint *)(puVar6 + 0xc);
          auVar81._4_4_ = auVar49._0_4_;
          auVar81._0_4_ = auVar49._4_4_;
          auVar81._8_4_ = auVar49._12_4_;
          auVar81._12_4_ = auVar49._0_4_;
          uVar78 = ((ulonglong)auVar49._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar49._0_4_ * (ulonglong)uVar4;
          uVar82 = ((auVar81._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar49._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          uVar40 = *(uint *)((longlong)param_1->acc + 0x14);
          uVar57 = *(uint *)((longlong)param_1->acc + 0x1c);
          uVar83 = param_1->acc[2];
          uVar77 = *(uint *)((longlong)param_1->acc + 0x14);
          uVar86 = param_1->acc[3];
          uVar2 = *(uint *)((longlong)param_1->acc + 0x1c);
          param_1->acc[0] = uVar78;
          param_1->acc[1] = uVar82;
          puVar6 = puVar15 + uVar91 + 0x10;
          auVar50._0_4_ = uVar40 >> 0xf ^ (uint)uVar83 ^ *(uint *)puVar6;
          auVar50._4_4_ = uVar77 ^ *(uint *)(puVar6 + 4);
          auVar50._8_4_ = uVar57 >> 0xf ^ (uint)uVar86 ^ *(uint *)(puVar6 + 8);
          auVar50._12_4_ = uVar2 ^ *(uint *)(puVar6 + 0xc);
          auVar85._4_4_ = auVar50._0_4_;
          auVar85._0_4_ = auVar50._4_4_;
          auVar85._8_4_ = auVar50._12_4_;
          auVar85._12_4_ = auVar50._0_4_;
          uVar83 = ((ulonglong)auVar50._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar50._0_4_ * (ulonglong)uVar4;
          uVar86 = ((auVar85._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar50._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          param_1->acc[2] = uVar83;
          param_1->acc[3] = uVar86;
          puVar6 = puVar15 + uVar91 + 0x20;
          auVar51._0_4_ =
               *(uint *)((longlong)param_1->acc + 0x24) >> 0xf ^ (uint)param_1->acc[4] ^
               *(uint *)puVar6;
          auVar51._4_4_ = *(uint *)((longlong)param_1->acc + 0x24) ^ *(uint *)(puVar6 + 4);
          auVar51._8_4_ =
               *(uint *)((longlong)param_1->acc + 0x2c) >> 0xf ^ (uint)param_1->acc[5] ^
               *(uint *)(puVar6 + 8);
          auVar51._12_4_ = *(uint *)((longlong)param_1->acc + 0x2c) ^ *(uint *)(puVar6 + 0xc);
          auVar89._4_4_ = auVar51._0_4_;
          auVar89._0_4_ = auVar51._4_4_;
          auVar89._8_4_ = auVar51._12_4_;
          auVar89._12_4_ = auVar51._0_4_;
          uVar87 = ((ulonglong)auVar51._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar51._0_4_ * (ulonglong)uVar4;
          uVar90 = ((auVar89._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar51._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          param_1->acc[4] = uVar87;
          param_1->acc[5] = uVar90;
          puVar6 = puVar15 + uVar91 + 0x30;
          auVar52._0_4_ =
               *(uint *)((longlong)param_1->acc + 0x34) >> 0xf ^ (uint)param_1->acc[6] ^
               *(uint *)puVar6;
          auVar52._4_4_ = *(uint *)((longlong)param_1->acc + 0x34) ^ *(uint *)(puVar6 + 4);
          auVar52._8_4_ =
               *(uint *)((longlong)param_1->acc + 0x3c) >> 0xf ^ (uint)param_1->acc[7] ^
               *(uint *)(puVar6 + 8);
          auVar52._12_4_ = *(uint *)((longlong)param_1->acc + 0x3c) ^ *(uint *)(puVar6 + 0xc);
          auVar93._4_4_ = auVar52._0_4_;
          auVar93._0_4_ = auVar52._4_4_;
          auVar93._8_4_ = auVar52._12_4_;
          auVar93._12_4_ = auVar52._0_4_;
          uVar91 = ((ulonglong)auVar52._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar52._0_4_ * (ulonglong)uVar4;
          uVar94 = ((auVar93._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar52._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          param_1->acc[6] = uVar91;
          param_1->acc[7] = uVar94;
          if (uVar14 != 0) {
            pauVar7 = (undefined1 (*) [16])(uVar9 * 0x40 + 0x10 + (longlong)pvVar12);
            puVar6 = puVar15 + 0x20;
            uVar10 = uVar14;
            do {
              auVar41 = pauVar7[-1];
              uVar40 = *(uint *)(puVar6 + -0x20) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
              auVar53._4_4_ = uVar40;
              auVar53._0_4_ = uVar57;
              auVar53._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
              auVar53._12_4_ = uVar40;
              auVar32._0_8_ = auVar41._8_8_;
              auVar32._8_4_ = auVar41._0_4_;
              auVar32._12_4_ = auVar41._4_4_;
              uVar78 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar32._0_8_ + uVar78;
              uVar82 = (auVar53._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + -0x18) ^ auVar41._8_4_) +
                       auVar32._8_8_ + uVar82;
              param_1->acc[0] = uVar78;
              param_1->acc[1] = uVar82;
              auVar41 = *pauVar7;
              uVar40 = *(uint *)(puVar6 + -0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
              auVar54._4_4_ = uVar40;
              auVar54._0_4_ = uVar57;
              auVar54._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
              auVar54._12_4_ = uVar40;
              auVar33._0_8_ = auVar41._8_8_;
              auVar33._8_4_ = auVar41._0_4_;
              auVar33._12_4_ = auVar41._4_4_;
              uVar83 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar33._0_8_ + uVar83;
              uVar86 = (auVar54._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + -8) ^ auVar41._8_4_) + auVar33._8_8_ + uVar86;
              param_1->acc[2] = uVar83;
              param_1->acc[3] = uVar86;
              auVar41 = pauVar7[1];
              uVar40 = *(uint *)puVar6 ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
              auVar34._0_8_ = auVar41._8_8_;
              auVar34._8_4_ = auVar41._0_4_;
              auVar34._12_4_ = auVar41._4_4_;
              auVar55._4_4_ = uVar40;
              auVar55._0_4_ = uVar57;
              auVar55._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
              auVar55._12_4_ = uVar40;
              uVar87 = uVar87 + auVar34._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
              uVar90 = uVar90 + auVar34._8_8_ +
                       (auVar55._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + 8) ^ auVar41._8_4_);
              param_1->acc[4] = uVar87;
              param_1->acc[5] = uVar90;
              auVar41 = pauVar7[2];
              uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
              auVar56._4_4_ = uVar40;
              auVar56._0_4_ = uVar57;
              auVar56._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
              auVar56._12_4_ = uVar40;
              auVar35._0_8_ = auVar41._8_8_;
              auVar35._8_4_ = auVar41._0_4_;
              auVar35._12_4_ = auVar41._4_4_;
              uVar91 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar35._0_8_ + uVar91;
              uVar94 = (auVar56._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_) +
                       auVar35._8_8_ + uVar94;
              param_1->acc[6] = uVar91;
              param_1->acc[7] = uVar94;
              uVar10 = uVar10 - 1;
              pauVar7 = pauVar7 + 4;
              puVar6 = puVar6 + 8;
            } while (uVar10 != 0);
          }
          param_1->nbStripesSoFar = uVar14;
        }
        else {
          lVar11 = 4;
          pauVar7 = (undefined1 (*) [16])((longlong)pvVar12 + 0x10);
          puVar6 = puVar15 + uVar83 * 8 + 0x20;
          do {
            auVar41 = pauVar7[-1];
            uVar91 = *(ulong64 *)(puVar6 + -0x18);
            auVar72._0_8_ = auVar41._8_8_;
            auVar72._8_4_ = auVar41._0_4_;
            auVar72._12_4_ = auVar41._4_4_;
            uVar83 = param_1->acc[1];
            uVar40 = (uint)*(ulong64 *)(puVar6 + -0x20) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
            auVar36._4_4_ = uVar40;
            auVar36._0_4_ = uVar57;
            auVar36._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
            auVar36._12_4_ = uVar40;
            param_1->acc[0] =
                 auVar72._0_8_ + param_1->acc[0] + (ulonglong)uVar57 * (ulonglong)uVar40;
            param_1->acc[1] =
                 auVar72._8_8_ + uVar83 +
                 (auVar36._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar91 ^ auVar41._8_4_);
            auVar41 = *pauVar7;
            uVar83 = *(ulong64 *)(puVar6 + -8);
            uVar40 = (uint)*(ulong64 *)(puVar6 + -0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
            auVar73._4_4_ = uVar40;
            auVar73._0_4_ = uVar57;
            auVar73._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
            auVar73._12_4_ = uVar40;
            auVar37._0_8_ = auVar41._8_8_;
            auVar37._8_4_ = auVar41._0_4_;
            auVar37._12_4_ = auVar41._4_4_;
            param_1->acc[2] =
                 (ulonglong)uVar57 * (ulonglong)uVar40 + auVar37._0_8_ + param_1->acc[2];
            param_1->acc[3] =
                 (auVar73._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_) +
                 auVar37._8_8_ + param_1->acc[3];
            auVar41 = pauVar7[1];
            uVar40 = *(uint *)(puVar6 + 8);
            uVar57 = *(uint *)puVar6 ^ auVar41._0_4_;
            uVar77 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
            auVar74._4_4_ = uVar57;
            auVar74._0_4_ = uVar77;
            auVar74._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
            auVar74._12_4_ = uVar57;
            auVar38._0_8_ = auVar41._8_8_;
            auVar38._8_4_ = auVar41._0_4_;
            auVar38._12_4_ = auVar41._4_4_;
            param_1->acc[4] =
                 (ulonglong)uVar77 * (ulonglong)uVar57 + auVar38._0_8_ + param_1->acc[4];
            param_1->acc[5] =
                 (auVar74._8_8_ & 0xffffffff) * (ulonglong)(uVar40 ^ auVar41._8_4_) +
                 auVar38._8_8_ + param_1->acc[5];
            auVar41 = pauVar7[2];
            auVar75._0_8_ = auVar41._8_8_;
            auVar75._8_4_ = auVar41._0_4_;
            auVar75._12_4_ = auVar41._4_4_;
            uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
            auVar39._4_4_ = uVar40;
            auVar39._0_4_ = uVar57;
            auVar39._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
            auVar39._12_4_ = uVar40;
            auVar76._0_8_ = auVar75._0_8_ + param_1->acc[6] + (ulonglong)uVar57 * (ulonglong)uVar40;
            auVar76._8_8_ =
                 auVar75._8_8_ + param_1->acc[7] +
                 (auVar39._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_);
            *(undefined1 (*) [16])(param_1->acc + 6) = auVar76;
            lVar11 = lVar11 + -1;
            pauVar7 = pauVar7 + 4;
            puVar6 = puVar6 + 8;
          } while (lVar11 != 0);
          param_1->nbStripesSoFar = param_1->nbStripesSoFar + 4;
        }
        param_2 = (void *)((longlong)pvVar12 + 0x100);
      } while (param_2 < (void *)(uVar1 - 0x100));
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 200);
      *(undefined8 *)(param_1->buffer + 0xc0) = *(undefined8 *)((longlong)pvVar12 + 0xc0);
      *(undefined8 *)(param_1->buffer + 200) = uVar3;
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 0xd8);
      *(undefined8 *)(param_1->buffer + 0xd0) = *(undefined8 *)((longlong)pvVar12 + 0xd0);
      *(undefined8 *)(param_1->buffer + 0xd8) = uVar3;
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 0xe8);
      *(undefined8 *)(param_1->buffer + 0xe0) = *(undefined8 *)((longlong)pvVar12 + 0xe0);
      *(undefined8 *)(param_1->buffer + 0xe8) = uVar3;
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 0xf8);
      *(undefined8 *)(param_1->buffer + 0xf0) = *(undefined8 *)((longlong)pvVar12 + 0xf0);
      *(undefined8 *)(param_1->buffer + 0xf8) = uVar3;
    }
    memcpy(param_1->buffer,param_2,uVar1 - (longlong)param_2);
    param_1->bufferedSize = (int)uVar1 - (int)param_2;
  }
  return XXH_INLINE_XXH_OK;
}

// XXH_INLINE_XXH3_128bits_withSecret @ 14171fa80

XXH_INLINE_XXH128_hash_t * __cdecl
XXH_INLINE_XXH3_128bits_withSecret
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,void *param_1,ulong64 param_2,
          void *param_3,ulong64 param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong64 uVar22;
  uint uVar23;
  XXH_INLINE_XXH128_hash_t *pXVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong local_res8;
  ulonglong local_res18;
  XXH_INLINE_XXH128_hash_t local_48;
  
  if (0x10 < param_2) {
    if (param_2 < 0x81) {
      uVar29 = 0;
      local_res8 = param_2 * -0x61c8864e7a143579;
      if (0x20 < param_2) {
        local_res18 = 0;
        if (0x40 < param_2) {
          if (0x60 < param_2) {
            uVar27 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x40));
            uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x38));
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *(ulonglong *)((longlong)param_1 + 0x38) ^
                           *(ulonglong *)((longlong)param_3 + 0x68);
            auVar14._8_8_ = 0;
            auVar14._0_8_ =
                 *(ulonglong *)((longlong)param_1 + 0x30) ^ *(ulonglong *)((longlong)param_3 + 0x60)
            ;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar1 ^ *(ulonglong *)((longlong)param_3 + 0x78);
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar27 ^ *(ulonglong *)((longlong)param_3 + 0x70);
            uVar29 = *(ulonglong *)((longlong)param_1 + 0x30) +
                     *(ulonglong *)((longlong)param_1 + 0x38) ^ SUB168(auVar4 * auVar15,0) ^
                     SUB168(auVar4 * auVar15,8);
            local_res8 = local_res8 + (SUB168(auVar3 * auVar14,0) ^ SUB168(auVar3 * auVar14,8)) ^
                         uVar1 + uVar27;
          }
          uVar27 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x30));
          uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x28));
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)((longlong)param_1 + 0x28) ^
                         *(ulonglong *)((longlong)param_3 + 0x48);
          auVar16._8_8_ = 0;
          auVar16._0_8_ =
               *(ulonglong *)((longlong)param_1 + 0x20) ^ *(ulonglong *)((longlong)param_3 + 0x40);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar1 ^ *(ulonglong *)((longlong)param_3 + 0x58);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar27 ^ *(ulonglong *)((longlong)param_3 + 0x50);
          local_res18 = (SUB168(auVar6 * auVar17,0) ^ SUB168(auVar6 * auVar17,8)) + uVar29 ^
                        *(ulonglong *)((longlong)param_1 + 0x20) +
                        *(ulonglong *)((longlong)param_1 + 0x28);
          local_res8 = (SUB168(auVar5 * auVar16,0) ^ SUB168(auVar5 * auVar16,8)) + local_res8 ^
                       uVar1 + uVar27;
        }
        uVar27 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x20));
        uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)((longlong)param_1 + 0x18) ^
                       *(ulonglong *)((longlong)param_3 + 0x28);
        auVar18._8_8_ = 0;
        auVar18._0_8_ =
             *(ulonglong *)((longlong)param_1 + 0x10) ^ *(ulonglong *)((longlong)param_3 + 0x20);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar1 ^ *(ulonglong *)((longlong)param_3 + 0x38);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar27 ^ *(ulonglong *)((longlong)param_3 + 0x30);
        uVar29 = (SUB168(auVar8 * auVar19,0) ^ SUB168(auVar8 * auVar19,8)) + local_res18 ^
                 *(ulonglong *)((longlong)param_1 + 0x10) + *(ulonglong *)((longlong)param_1 + 0x18)
        ;
        local_res8 = (SUB168(auVar7 * auVar18,0) ^ SUB168(auVar7 * auVar18,8)) + local_res8 ^
                     uVar1 + uVar27;
      }
      uVar27 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)((longlong)param_1 + 8) ^ *(ulonglong *)((longlong)param_3 + 8);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *(ulonglong *)param_1 ^ *(ulonglong *)param_3;
      uVar1 = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      uVar30 = (SUB168(auVar9 * auVar20,0) ^ SUB168(auVar9 * auVar20,8)) + local_res8 ^
               uVar1 + uVar27;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar1 ^ *(ulonglong *)((longlong)param_3 + 0x18);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar27 ^ *(ulonglong *)((longlong)param_3 + 0x10);
      uVar27 = (SUB168(auVar10 * auVar21,0) ^ SUB168(auVar10 * auVar21,8)) + uVar29 ^
               *(ulonglong *)((longlong)param_1 + 8) + *(ulonglong *)param_1;
      uVar29 = uVar27 + uVar30;
      uVar27 = param_2 * -0x3d4d51c2d82b14b1 + uVar30 * -0x61c8864e7a143579 +
               uVar27 * -0x7a1435883d4d519d;
      uVar29 = (uVar29 >> 0x25 ^ uVar29) * 0x165667919e3779f9;
      __return_storage_ptr__->low64 = uVar29 >> 0x20 ^ uVar29;
      uVar29 = (uVar27 >> 0x25 ^ uVar27) * 0x165667919e3779f9;
      __return_storage_ptr__->high64 = -(uVar29 >> 0x20 ^ uVar29);
    }
    else if (param_2 < 0xf1) {
      XXH3_len_129to240_128b(__return_storage_ptr__,param_1,param_2,param_3,param_4,0);
    }
    else {
      pXVar24 = XXH3_hashLong_128b_withSecret(&local_48,param_1,param_2,0,param_3,param_4);
      uVar22 = pXVar24->high64;
      __return_storage_ptr__->low64 = pXVar24->low64;
      __return_storage_ptr__->high64 = uVar22;
    }
    return __return_storage_ptr__;
  }
  if (param_2 < 9) {
    if (param_2 < 4) {
      if (param_2 == 0) {
        uVar29 = *(ulonglong *)((longlong)param_3 + 0x48) ^ *(ulonglong *)((longlong)param_3 + 0x40)
        ;
        uVar27 = *(ulonglong *)((longlong)param_3 + 0x58) ^ *(ulonglong *)((longlong)param_3 + 0x50)
        ;
        uVar29 = (uVar29 >> 0x21 ^ uVar29) * -0x3d4d51c2d82b14b1;
        uVar29 = (uVar29 >> 0x1d ^ uVar29) * 0x165667b19e3779f9;
        __return_storage_ptr__->low64 = uVar29 >> 0x20 ^ uVar29;
        uVar29 = (uVar27 >> 0x21 ^ uVar27) * -0x3d4d51c2d82b14b1;
        uVar29 = uVar29 >> 0x1d ^ uVar29;
      }
      else {
        uVar25 = (uint)CONCAT11(*(undefined1 *)((param_2 >> 1) + (longlong)param_1),
                                *(undefined1 *)param_1) << 8;
        uVar28 = (uint)param_2;
        uVar26 = (uVar25 | uVar28) << 8;
        uVar23 = (uint)*(byte *)((longlong)param_1 + (param_2 - 1));
        uVar25 = (uVar25 | uVar28 & 0xffffff) >> 0x10 | (uVar26 & 0xff0000) >> 8 |
                 (uVar28 & 0xff) << 0x10;
        uVar27 = (ulonglong)
                 (*(uint *)((longlong)param_3 + 4) ^ (uVar26 | uVar23) ^ *(uint *)param_3) *
                 -0x3d4d51c2d82b14b1;
        uVar29 = (ulonglong)
                 ((uVar25 << 0xd | (uVar25 | uVar23 << 0x18) >> 0x13) ^
                  *(uint *)((longlong)param_3 + 0xc) ^ *(uint *)((longlong)param_3 + 8)) *
                 -0x3d4d51c2d82b14b1;
        uVar27 = (uVar27 >> 0x1d ^ uVar27) * 0x165667b19e3779f9;
        uVar29 = uVar29 >> 0x1d ^ uVar29;
        __return_storage_ptr__->low64 = uVar27 >> 0x20 ^ uVar27;
      }
      __return_storage_ptr__->high64 =
           uVar29 * 0x165667b19e3779f9 >> 0x20 ^ uVar29 * 0x165667b19e3779f9;
      return __return_storage_ptr__;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2 * 4 + 0x9e3779b185ebca87;
    auVar13._8_8_ = 0;
    auVar13._0_8_ =
         CONCAT44(*(undefined4 *)((longlong)param_1 + (param_2 - 4)),*(undefined4 *)param_1) ^
         *(ulonglong *)((longlong)param_3 + 0x18) ^ *(ulonglong *)((longlong)param_3 + 0x10);
    *__return_storage_ptr__ = (XXH_INLINE_XXH128_hash_t)(auVar2 * auVar13);
    uVar29 = __return_storage_ptr__->high64 + __return_storage_ptr__->low64 * 2;
    uVar27 = uVar29 >> 3 ^ __return_storage_ptr__->low64;
    uVar27 = (uVar27 >> 0x23 ^ uVar27) * -0x604de39ae16720db;
    __return_storage_ptr__->low64 = uVar27 >> 0x1c ^ uVar27;
    uVar29 = (uVar29 >> 0x25 ^ uVar29) * 0x165667919e3779f9;
    __return_storage_ptr__->high64 = uVar29 >> 0x20 ^ uVar29;
    return __return_storage_ptr__;
  }
  uVar29 = *(ulonglong *)((longlong)param_3 + 0x38) ^ *(ulonglong *)((longlong)param_3 + 0x30) ^
           *(ulonglong *)((longlong)param_1 + (param_2 - 8));
  auVar11._8_8_ = 0;
  auVar11._0_8_ =
       *(ulonglong *)((longlong)param_3 + 0x28) ^ *(ulonglong *)((longlong)param_3 + 0x20) ^
       *(ulonglong *)param_1 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8));
  uVar29 = uVar29 + (uVar29 & 0xffffffff) * 0x85ebca76 +
           SUB168(ZEXT816(0x9e3779b185ebca87) * auVar11,8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ =
       (uVar29 >> 0x38 | (uVar29 & 0xff000000000000) >> 0x28 | (uVar29 & 0xff0000000000) >> 0x18 |
        (uVar29 & 0xff00000000) >> 8 | (uVar29 & 0xff000000) << 8 | (uVar29 & 0xff0000) << 0x18 |
        (uVar29 & 0xff00) << 0x28 | uVar29 << 0x38) ^
       (param_2 << 0x36) + -0x40000000000000 + SUB168(ZEXT816(0x9e3779b185ebca87) * auVar11,0);
  *__return_storage_ptr__ = (XXH_INLINE_XXH128_hash_t)(ZEXT816(0xc2b2ae3d27d4eb4f) * auVar12);
  uVar27 = __return_storage_ptr__->high64 + uVar29 * -0x3d4d51c2d82b14b1;
  uVar29 = (__return_storage_ptr__->low64 >> 0x25 ^ __return_storage_ptr__->low64) *
           0x165667919e3779f9;
  __return_storage_ptr__->low64 = uVar29 >> 0x20 ^ uVar29;
  uVar29 = (uVar27 >> 0x25 ^ uVar27) * 0x165667919e3779f9;
  __return_storage_ptr__->high64 = uVar29 >> 0x20 ^ uVar29;
  return __return_storage_ptr__;
}

// XXH_INLINE_XXH3_128bits_withSeed @ 141720000

XXH_INLINE_XXH128_hash_t * __cdecl
XXH_INLINE_XXH3_128bits_withSeed
          (XXH_INLINE_XXH128_hash_t *__return_storage_ptr__,void *param_1,ulong64 param_2,
          ulong64 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong64 uVar21;
  uint uVar22;
  ulonglong uVar23;
  XXH_INLINE_XXH128_hash_t *pXVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong local_res8;
  ulonglong local_res18;
  ulonglong local_48;
  XXH_INLINE_XXH128_hash_t local_40;
  
  if (0x10 < param_2) {
    if (param_2 < 0x81) {
      local_res8 = param_2 * -0x61c8864e7a143579;
      local_res18 = 0;
      if (0x20 < param_2) {
        local_48 = 0;
        if (0x40 < param_2) {
          if (0x60 < param_2) {
            uVar28 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x38));
            uVar23 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x40));
            auVar2._8_8_ = 0;
            auVar2._0_8_ = XXH3_kSecret._104_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 0x38)
            ;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = XXH3_kSecret._96_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + 0x30)
            ;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = XXH3_kSecret._120_8_ - param_3 ^ uVar28;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = XXH3_kSecret._112_8_ + param_3 ^ uVar23;
            local_res18 = *(ulonglong *)((longlong)param_1 + 0x30) +
                          *(ulonglong *)((longlong)param_1 + 0x38) ^ SUB168(auVar3 * auVar14,0) ^
                          SUB168(auVar3 * auVar14,8);
            local_res8 = (SUB168(auVar2 * auVar13,0) ^ SUB168(auVar2 * auVar13,8)) + local_res8 ^
                         uVar28 + uVar23;
          }
          uVar28 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x30));
          uVar23 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x28));
          auVar4._8_8_ = 0;
          auVar4._0_8_ = XXH3_kSecret._72_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 0x28);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = XXH3_kSecret._64_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + 0x20);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = XXH3_kSecret._88_8_ - param_3 ^ uVar23;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = XXH3_kSecret._80_8_ + param_3 ^ uVar28;
          local_48 = (SUB168(auVar5 * auVar16,0) ^ SUB168(auVar5 * auVar16,8)) + local_res18 ^
                     *(ulonglong *)((longlong)param_1 + 0x20) +
                     *(ulonglong *)((longlong)param_1 + 0x28);
          local_res8 = (SUB168(auVar4 * auVar15,0) ^ SUB168(auVar4 * auVar15,8)) + local_res8 ^
                       uVar23 + uVar28;
        }
        uVar28 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
        uVar23 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x20));
        auVar6._8_8_ = 0;
        auVar6._0_8_ = XXH3_kSecret._40_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 0x18);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = XXH3_kSecret._32_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + 0x10);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = XXH3_kSecret._56_8_ - param_3 ^ uVar28;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = XXH3_kSecret._48_8_ + param_3 ^ uVar23;
        local_res18 = (SUB168(auVar7 * auVar18,0) ^ SUB168(auVar7 * auVar18,8)) + local_48 ^
                      *(ulonglong *)((longlong)param_1 + 0x10) +
                      *(ulonglong *)((longlong)param_1 + 0x18);
        local_res8 = (SUB168(auVar6 * auVar17,0) ^ SUB168(auVar6 * auVar17,8)) + local_res8 ^
                     uVar28 + uVar23;
      }
      uVar28 = *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
      uVar23 = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      auVar8._8_8_ = 0;
      auVar8._0_8_ = XXH3_kSecret._8_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 8);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = XXH3_kSecret._0_8_ + param_3 ^ *(ulonglong *)param_1;
      uVar27 = (SUB168(auVar8 * auVar19,0) ^ SUB168(auVar8 * auVar19,8)) + local_res8 ^
               uVar23 + uVar28;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = XXH3_kSecret._24_8_ - param_3 ^ uVar23;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = XXH3_kSecret._16_8_ + param_3 ^ uVar28;
      uVar23 = (SUB168(auVar9 * auVar20,0) ^ SUB168(auVar9 * auVar20,8)) + local_res18 ^
               *(ulonglong *)((longlong)param_1 + 8) + *(ulonglong *)param_1;
      uVar28 = uVar23 + uVar27;
      uVar23 = (param_2 - param_3) * -0x3d4d51c2d82b14b1 + uVar27 * -0x61c8864e7a143579 +
               uVar23 * -0x7a1435883d4d519d;
      uVar28 = (uVar28 >> 0x25 ^ uVar28) * 0x165667919e3779f9;
      __return_storage_ptr__->low64 = uVar28 >> 0x20 ^ uVar28;
      uVar28 = (uVar23 >> 0x25 ^ uVar23) * 0x165667919e3779f9;
      __return_storage_ptr__->high64 = -(uVar28 >> 0x20 ^ uVar28);
      return __return_storage_ptr__;
    }
    if (0xf0 < param_2) {
      pXVar24 = XXH3_hashLong_128b_withSeed(&local_40,param_1,param_2,param_3,XXH3_kSecret,0xc0);
      uVar21 = pXVar24->high64;
      __return_storage_ptr__->low64 = pXVar24->low64;
      __return_storage_ptr__->high64 = uVar21;
      return __return_storage_ptr__;
    }
    XXH3_len_129to240_128b(__return_storage_ptr__,param_1,param_2,XXH3_kSecret,0xc0,param_3);
    return __return_storage_ptr__;
  }
  if (param_2 < 9) {
    if (param_2 < 4) {
      if (param_2 == 0) {
        uVar28 = XXH3_kSecret._72_8_ ^ XXH3_kSecret._64_8_ ^ param_3;
        uVar28 = (uVar28 >> 0x21 ^ uVar28) * -0x3d4d51c2d82b14b1;
        uVar28 = (uVar28 >> 0x1d ^ uVar28) * 0x165667b19e3779f9;
        uVar28 = uVar28 >> 0x20 ^ uVar28;
        uVar23 = XXH3_kSecret._88_8_ ^ XXH3_kSecret._80_8_ ^ param_3;
      }
      else {
        uVar25 = (uint)CONCAT11(*(undefined1 *)((param_2 >> 1) + (longlong)param_1),
                                *(undefined1 *)param_1) << 8;
        uVar29 = (uint)param_2;
        uVar26 = (uVar25 | uVar29) << 8;
        uVar22 = (uint)*(byte *)((longlong)param_1 + (param_2 - 1));
        uVar25 = (uVar25 | uVar29 & 0xffffff) >> 0x10 | (uVar26 & 0xff0000) >> 8 |
                 (uVar29 & 0xff) << 0x10;
        uVar23 = (ulonglong)(uVar25 << 0xd | (uVar25 | uVar22 << 0x18) >> 0x13) ^
                 (uint)(XXH3_kSecret._12_4_ ^ XXH3_kSecret._8_4_) - param_3;
        uVar28 = (uint)(XXH3_kSecret._4_4_ ^ XXH3_kSecret._0_4_) + param_3;
        uVar28 = (uVar28 >> 0x21 ^ uVar28 ^ (uVar26 | uVar22)) * -0x3d4d51c2d82b14b1;
        uVar28 = (uVar28 >> 0x1d ^ uVar28) * 0x165667b19e3779f9;
        uVar28 = uVar28 >> 0x20 ^ uVar28;
      }
      __return_storage_ptr__->low64 = uVar28;
      uVar28 = (uVar23 >> 0x21 ^ uVar23) * -0x3d4d51c2d82b14b1;
      uVar28 = (uVar28 >> 0x1d ^ uVar28) * 0x165667b19e3779f9;
      goto LAB_1417200ff;
    }
    uVar25 = (uint)param_3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2 * 4 + 0x9e3779b185ebca87;
    auVar12._8_8_ = 0;
    auVar12._0_8_ =
         ((ulonglong)
          (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18) <<
          0x20 ^ param_3) + (XXH3_kSecret._24_8_ ^ XXH3_kSecret._16_8_) ^
         CONCAT44(*(undefined4 *)((longlong)param_1 + (param_2 - 4)),*(undefined4 *)param_1);
    *__return_storage_ptr__ = (XXH_INLINE_XXH128_hash_t)(auVar1 * auVar12);
    uVar28 = __return_storage_ptr__->high64 + __return_storage_ptr__->low64 * 2;
    uVar23 = uVar28 >> 3 ^ __return_storage_ptr__->low64;
    uVar27 = (uVar23 >> 0x23 ^ uVar23) * -0x604de39ae16720db;
    uVar23 = uVar27 >> 0x1c;
  }
  else {
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         (XXH3_kSecret._40_8_ ^ XXH3_kSecret._32_8_) - param_3 ^ *(ulonglong *)param_1 ^
         *(ulonglong *)((longlong)param_1 + (param_2 - 8));
    uVar28 = (XXH3_kSecret._56_8_ ^ XXH3_kSecret._48_8_) + param_3 ^
             *(ulonglong *)((longlong)param_1 + (param_2 - 8));
    uVar28 = uVar28 + (uVar28 & 0xffffffff) * 0x85ebca76 +
             SUB168(ZEXT816(0x9e3779b185ebca87) * auVar10,8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ =
         (uVar28 >> 0x38 | (uVar28 & 0xff000000000000) >> 0x28 | (uVar28 & 0xff0000000000) >> 0x18 |
          (uVar28 & 0xff00000000) >> 8 | (uVar28 & 0xff000000) << 8 | (uVar28 & 0xff0000) << 0x18 |
          (uVar28 & 0xff00) << 0x28 | uVar28 << 0x38) ^
         (param_2 << 0x36) + -0x40000000000000 + SUB168(ZEXT816(0x9e3779b185ebca87) * auVar10,0);
    *__return_storage_ptr__ = (XXH_INLINE_XXH128_hash_t)(ZEXT816(0xc2b2ae3d27d4eb4f) * auVar11);
    uVar28 = __return_storage_ptr__->high64 + uVar28 * -0x3d4d51c2d82b14b1;
    uVar27 = (__return_storage_ptr__->low64 >> 0x25 ^ __return_storage_ptr__->low64) *
             0x165667919e3779f9;
    uVar23 = uVar27 >> 0x20;
  }
  __return_storage_ptr__->low64 = uVar23 ^ uVar27;
  uVar28 = (uVar28 >> 0x25 ^ uVar28) * 0x165667919e3779f9;
LAB_1417200ff:
  __return_storage_ptr__->high64 = uVar28 >> 0x20 ^ uVar28;
  return __return_storage_ptr__;
}

// XXH_INLINE_XXH3_64bits @ 141720660

ulong64 __cdecl XXH_INLINE_XXH3_64bits(void *param_1,ulong64 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong64 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  if (0x10 < param_2) {
    if (param_2 < 0x81) {
      lVar21 = param_2 * -0x61c8864e7a143579;
      if (0x20 < param_2) {
        if (0x40 < param_2) {
          if (0x60 < param_2) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = XXH3_kSecret._104_8_ ^ *(ulonglong *)((longlong)param_1 + 0x38);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = XXH3_kSecret._96_8_ ^ *(ulonglong *)((longlong)param_1 + 0x30);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = XXH3_kSecret._120_8_ ^
                           *(ulonglong *)((longlong)param_1 + (param_2 - 0x38));
            auVar12._8_8_ = 0;
            auVar12._0_8_ =
                 XXH3_kSecret._112_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x40));
            lVar21 = lVar21 + (SUB168(auVar2 * auVar11,0) ^ SUB168(auVar2 * auVar11,8)) +
                     (SUB168(auVar3 * auVar12,0) ^ SUB168(auVar3 * auVar12,8));
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = XXH3_kSecret._72_8_ ^ *(ulonglong *)((longlong)param_1 + 0x28);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = XXH3_kSecret._64_8_ ^ *(ulonglong *)((longlong)param_1 + 0x20);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = XXH3_kSecret._88_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x28));
          auVar14._8_8_ = 0;
          auVar14._0_8_ = XXH3_kSecret._80_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x30))
          ;
          lVar21 = lVar21 + (SUB168(auVar5 * auVar14,0) ^ SUB168(auVar5 * auVar14,8)) +
                   (SUB168(auVar4 * auVar13,0) ^ SUB168(auVar4 * auVar13,8));
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = XXH3_kSecret._40_8_ ^ *(ulonglong *)((longlong)param_1 + 0x18);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = XXH3_kSecret._32_8_ ^ *(ulonglong *)((longlong)param_1 + 0x10);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = XXH3_kSecret._56_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
        auVar16._8_8_ = 0;
        auVar16._0_8_ = XXH3_kSecret._48_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x20));
        lVar21 = lVar21 + (SUB168(auVar6 * auVar15,0) ^ SUB168(auVar6 * auVar15,8)) +
                 (SUB168(auVar7 * auVar16,0) ^ SUB168(auVar7 * auVar16,8));
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = XXH3_kSecret._8_8_ ^ *(ulonglong *)((longlong)param_1 + 8);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = CONCAT44(XXH3_kSecret._4_4_,XXH3_kSecret._0_4_) ^ *(ulonglong *)param_1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = XXH3_kSecret._24_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      auVar18._8_8_ = 0;
      auVar18._0_8_ = XXH3_kSecret._16_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
      uVar20 = lVar21 + (SUB168(auVar9 * auVar18,0) ^ SUB168(auVar9 * auVar18,8)) +
               (SUB168(auVar8 * auVar17,0) ^ SUB168(auVar8 * auVar17,8));
      uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
      return uVar20 >> 0x20 ^ uVar20;
    }
    if (0xf0 < param_2) {
      uVar19 = XXH3_hashLong_64b_default(param_1,param_2,0,XXH3_kSecret,0xc0);
      return uVar19;
    }
    uVar19 = XXH3_len_129to240_64b(param_1,param_2,XXH3_kSecret,0xc0,0);
    return uVar19;
  }
  if (8 < param_2) {
    uVar22 = XXH3_kSecret._32_8_ ^ *(ulonglong *)param_1 ^ XXH3_kSecret._24_8_;
    uVar20 = XXH3_kSecret._48_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8)) ^
             XXH3_kSecret._40_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar20;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar22;
    uVar20 = (SUB168(auVar1 * auVar10,0) ^ SUB168(auVar1 * auVar10,8)) +
             uVar20 + (uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                       (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                       (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                       (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38) + param_2;
    uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
    return uVar20 >> 0x20 ^ uVar20;
  }
  if (param_2 < 4) {
    if (param_2 == 0) {
      uVar20 = ((ulonglong)(XXH3_kSecret._64_8_ ^ XXH3_kSecret._56_8_) >> 0x21 ^
               XXH3_kSecret._64_8_ ^ XXH3_kSecret._56_8_) * -0x3d4d51c2d82b14b1;
      uVar20 = (uVar20 >> 0x1d ^ uVar20) * 0x165667b19e3779f9;
      return uVar20 >> 0x20 ^ uVar20;
    }
    uVar20 = (((ulonglong)
               (((uint)CONCAT11(*(undefined1 *)((param_2 >> 1) + (longlong)param_1),
                                *(undefined1 *)param_1) << 8 | (uint)param_2) << 8) |
              (ulonglong)*(byte *)((longlong)param_1 + (param_2 - 1))) ^
              (ulonglong)(uint)XXH3_kSecret._4_4_ ^ (ulonglong)(uint)XXH3_kSecret._0_4_) *
             -0x3d4d51c2d82b14b1;
    uVar20 = (uVar20 >> 0x1d ^ uVar20) * 0x165667b19e3779f9;
    return uVar20 >> 0x20 ^ uVar20;
  }
  uVar20 = CONCAT44(*(undefined4 *)param_1,*(undefined4 *)((longlong)param_1 + (param_2 - 4))) ^
           XXH3_kSecret._16_8_ ^ XXH3_kSecret._8_8_;
  uVar20 = ((uVar20 << 0x31 | uVar20 >> 0xf) ^ (uVar20 << 0x18 | uVar20 >> 0x28) ^ uVar20) *
           -0x604de39ae16720db;
  uVar20 = ((uVar20 >> 0x23) + param_2 ^ uVar20) * -0x604de39ae16720db;
  return uVar20 >> 0x1c ^ uVar20;
}

// XXH_INLINE_XXH3_64bits_digest @ 1417209e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl XXH_INLINE_XXH3_64bits_digest(XXH_INLINE_XXH3_state_s *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong64 uVar13;
  undefined1 (*pauVar14) [16];
  uchar *puVar15;
  ulonglong uVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uchar *puVar20;
  ulonglong uVar21;
  uchar *puVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar58;
  uint uVar59;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar60;
  uint uVar61;
  uint uVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  ulonglong uVar66;
  undefined1 auVar64 [16];
  ulonglong uVar67;
  undefined1 auVar68 [16];
  ulonglong uVar70;
  undefined1 auVar69 [16];
  longlong lVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auStack_118 [96];
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_118;
  puVar20 = param_1->extSecret;
  if (puVar20 == (uchar *)0x0) {
    puVar20 = param_1->customSecret;
  }
  uVar16 = param_1->totalLen;
  puVar15 = param_1->buffer;
  if (uVar16 < 0xf1) {
    if (param_1->seed == 0) {
      uVar17 = XXH_INLINE_XXH3_64bits_withSecret(puVar15,uVar16,puVar20,param_1->secretLimit + 0x40)
      ;
    }
    else {
      uVar17 = XXH_INLINE_XXH3_64bits_withSeed(puVar15,uVar16,param_1->seed);
    }
  }
  else {
    uVar61 = param_1->bufferedSize;
    uVar23 = (ulonglong)uVar61;
    auVar76 = *(undefined1 (*) [16])(param_1->acc + 6);
    auVar71 = *(undefined1 (*) [16])param_1->acc;
    uVar17 = param_1->acc[2];
    uVar13 = param_1->acc[3];
    auVar74 = *(undefined1 (*) [16])(param_1->acc + 4);
    if (uVar61 < 0x40) {
      uVar61 = 0x40 - uVar61;
      memcpy(&local_b8,(void *)((longlong)param_1 + (0x200 - (ulonglong)uVar61)),(ulonglong)uVar61);
      memcpy((void *)((longlong)&local_b8 + (ulonglong)uVar61),puVar15,uVar23);
      uVar1 = param_1->secretLimit;
      auVar69._8_4_ = local_b8;
      auVar69._0_8_ = CONCAT44(uStack_ac,uStack_b0);
      auVar69._12_4_ = uStack_b4;
      puVar15 = puVar20 + (uVar1 - 7);
      puVar22 = puVar20 + uVar1 + 9;
      local_b8 = local_b8 ^ *(uint *)puVar15;
      uVar61 = *(uint *)puVar22 ^ local_a8;
      auVar39._4_4_ = local_b8;
      auVar39._0_4_ = uStack_b4 ^ *(uint *)(puVar15 + 4);
      auVar39._8_4_ = uStack_ac ^ *(uint *)(puVar15 + 0xc);
      auVar39._12_4_ = local_b8;
      auVar64._8_4_ = local_a8;
      auVar64._0_8_ = CONCAT44(uStack_9c,uStack_a0);
      auVar64._12_4_ = uStack_a4;
      uVar67 = CONCAT44(uStack_ac,uStack_b0) + auVar71._0_8_ +
               (ulonglong)(uStack_b4 ^ *(uint *)(puVar15 + 4)) * (ulonglong)local_b8;
      uVar70 = auVar69._8_8_ + auVar71._8_8_ +
               (auVar39._8_8_ & 0xffffffff) * (ulonglong)(uStack_b0 ^ *(uint *)(puVar15 + 8));
      auVar40._4_4_ = uVar61;
      auVar40._0_4_ = *(uint *)(puVar22 + 4) ^ uStack_a4;
      auVar40._8_4_ = *(uint *)(puVar22 + 0xc) ^ uStack_9c;
      auVar40._12_4_ = uVar61;
      puVar15 = puVar20 + uVar1 + 0x19;
      uVar65 = *(uint *)puVar15 ^ local_98;
      uVar21 = CONCAT44(uStack_9c,uStack_a0) + uVar17 +
               (ulonglong)(*(uint *)(puVar22 + 4) ^ uStack_a4) * (ulonglong)uVar61;
      uVar66 = auVar64._8_8_ + uVar13 +
               (auVar40._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar22 + 8) ^ uStack_a0);
      auVar41._4_4_ = uVar65;
      auVar41._0_4_ = *(uint *)(puVar15 + 4) ^ uStack_94;
      auVar41._8_4_ = *(uint *)(puVar15 + 0xc) ^ uStack_8c;
      auVar41._12_4_ = uVar65;
      puVar22 = puVar20 + uVar1 + 0x29;
      uVar61 = *(uint *)puVar22 ^ local_88;
      uVar58 = *(uint *)(puVar22 + 4) ^ uStack_84;
      uVar59 = *(uint *)(puVar22 + 8) ^ uStack_80;
      uVar60 = *(uint *)(puVar22 + 0xc) ^ uStack_7c;
      uVar18 = CONCAT44(uStack_8c,uStack_90) + auVar74._0_8_ +
               (ulonglong)(*(uint *)(puVar15 + 4) ^ uStack_94) * (ulonglong)uVar65;
      lVar19 = CONCAT44(uStack_94,local_98) + auVar74._8_8_ +
               (auVar41._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar15 + 8) ^ uStack_90);
    }
    else {
      uVar1 = param_1->nbStripesSoFar;
      uVar2 = param_1->secretLimit;
      uVar21 = param_1->nbStripesPerBlock - uVar1;
      uVar18 = (ulonglong)(uVar61 - 1 >> 6);
      if (uVar18 < uVar21) {
        if (uVar18 != 0) {
          puVar15 = param_1->buffer + 0x10;
          puVar22 = puVar20 + uVar1 * 8 + 0x20;
          do {
            auVar39 = *(undefined1 (*) [16])(puVar15 + -0x10);
            auVar40 = *(undefined1 (*) [16])(puVar15 + 0x10);
            uVar61 = (uint)*(ulong64 *)(puVar22 + -0x20) ^ auVar39._0_4_;
            uVar65 = *(uint *)(puVar22 + -0x1c) ^ auVar39._4_4_;
            auVar55._4_4_ = uVar61;
            auVar55._0_4_ = uVar65;
            auVar55._8_4_ = *(uint *)(puVar22 + -0x14) ^ auVar39._12_4_;
            auVar55._12_4_ = uVar61;
            auVar32._0_8_ = auVar39._8_8_;
            auVar32._8_4_ = auVar39._0_4_;
            auVar32._12_4_ = auVar39._4_4_;
            lVar19 = auVar71._8_8_;
            auVar71._0_8_ = (ulonglong)uVar65 * (ulonglong)uVar61 + auVar32._0_8_ + auVar71._0_8_;
            auVar71._8_8_ =
                 (auVar55._8_8_ & 0xffffffff) *
                 (ulonglong)((uint)*(ulong64 *)(puVar22 + -0x18) ^ auVar39._8_4_) +
                 auVar32._8_8_ + lVar19;
            auVar39 = *(undefined1 (*) [16])puVar15;
            uVar61 = (uint)*(ulong64 *)(puVar22 + -0x10) ^ auVar39._0_4_;
            uVar65 = *(uint *)(puVar22 + -0xc) ^ auVar39._4_4_;
            auVar33._0_8_ = auVar39._8_8_;
            auVar33._8_4_ = auVar39._0_4_;
            auVar33._12_4_ = auVar39._4_4_;
            auVar56._4_4_ = uVar61;
            auVar56._0_4_ = uVar65;
            auVar56._8_4_ = *(uint *)(puVar22 + -4) ^ auVar39._12_4_;
            auVar56._12_4_ = uVar61;
            uVar17 = uVar17 + auVar33._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            uVar13 = uVar13 + auVar33._8_8_ +
                     (auVar56._8_8_ & 0xffffffff) *
                     (ulonglong)((uint)*(ulong64 *)(puVar22 + -8) ^ auVar39._8_4_);
            uVar61 = auVar40._0_4_ ^ *(uint *)puVar22;
            uVar65 = auVar40._4_4_ ^ *(uint *)(puVar22 + 4);
            auVar34._0_8_ = auVar40._8_8_;
            auVar34._8_4_ = auVar40._0_4_;
            auVar34._12_4_ = auVar40._4_4_;
            auVar62._4_4_ = uVar61;
            auVar62._0_4_ = uVar65;
            auVar62._8_4_ = auVar40._12_4_ ^ *(uint *)(puVar22 + 0xc);
            auVar62._12_4_ = uVar61;
            lVar19 = auVar74._8_8_;
            auVar74._0_8_ = (ulonglong)uVar65 * (ulonglong)uVar61 + auVar34._0_8_ + auVar74._0_8_;
            auVar74._8_8_ =
                 (auVar62._8_8_ & 0xffffffff) * (ulonglong)(auVar40._8_4_ ^ *(uint *)(puVar22 + 8))
                 + auVar34._8_8_ + lVar19;
            auVar39 = *(undefined1 (*) [16])(puVar15 + 0x20);
            uVar61 = *(uint *)(puVar22 + 0x10) ^ auVar39._0_4_;
            uVar65 = *(uint *)(puVar22 + 0x14) ^ auVar39._4_4_;
            auVar57._4_4_ = uVar61;
            auVar57._0_4_ = uVar65;
            auVar57._8_4_ = *(uint *)(puVar22 + 0x1c) ^ auVar39._12_4_;
            auVar57._12_4_ = uVar61;
            auVar35._0_8_ = auVar39._8_8_;
            auVar35._8_4_ = auVar39._0_4_;
            auVar35._12_4_ = auVar39._4_4_;
            lVar19 = auVar76._8_8_;
            auVar76._0_8_ = (ulonglong)uVar65 * (ulonglong)uVar61 + auVar35._0_8_ + auVar76._0_8_;
            auVar76._8_8_ =
                 (auVar57._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar22 + 0x18) ^ auVar39._8_4_) + auVar35._8_8_ + lVar19;
            uVar18 = uVar18 - 1;
            puVar15 = puVar15 + 0x40;
            puVar22 = puVar22 + 8;
          } while (uVar18 != 0);
        }
      }
      else {
        lVar19 = uVar18 - uVar21;
        if (uVar21 != 0) {
          puVar15 = param_1->buffer + 0x10;
          puVar22 = puVar20 + uVar1 * 8 + 0x20;
          uVar18 = uVar21;
          do {
            auVar39 = *(undefined1 (*) [16])(puVar15 + -0x10);
            uVar61 = (uint)*(ulong64 *)(puVar22 + -0x20) ^ auVar39._0_4_;
            uVar65 = *(uint *)(puVar22 + -0x1c) ^ auVar39._4_4_;
            auVar24._0_8_ = auVar39._8_8_;
            auVar24._8_4_ = auVar39._0_4_;
            auVar24._12_4_ = auVar39._4_4_;
            auVar43._4_4_ = uVar61;
            auVar43._0_4_ = uVar65;
            auVar43._8_4_ = *(uint *)(puVar22 + -0x14) ^ auVar39._12_4_;
            auVar43._12_4_ = uVar61;
            lVar73 = auVar71._8_8_;
            auVar40 = *(undefined1 (*) [16])puVar15;
            auVar71._0_8_ = auVar71._0_8_ + auVar24._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            auVar71._8_8_ =
                 lVar73 + auVar24._8_8_ +
                 (auVar43._8_8_ & 0xffffffff) *
                 (ulonglong)((uint)*(ulong64 *)(puVar22 + -0x18) ^ auVar39._8_4_);
            uVar61 = (uint)*(ulong64 *)(puVar22 + -0x10) ^ auVar40._0_4_;
            uVar65 = *(uint *)(puVar22 + -0xc) ^ auVar40._4_4_;
            auVar25._0_8_ = auVar40._8_8_;
            auVar25._8_4_ = auVar40._0_4_;
            auVar25._12_4_ = auVar40._4_4_;
            auVar44._4_4_ = uVar61;
            auVar44._0_4_ = uVar65;
            auVar44._8_4_ = *(uint *)(puVar22 + -4) ^ auVar40._12_4_;
            auVar44._12_4_ = uVar61;
            auVar39 = *(undefined1 (*) [16])(puVar15 + 0x10);
            uVar17 = uVar17 + auVar25._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            uVar13 = uVar13 + auVar25._8_8_ +
                     (auVar44._8_8_ & 0xffffffff) *
                     (ulonglong)((uint)*(ulong64 *)(puVar22 + -8) ^ auVar40._8_4_);
            uVar61 = *(uint *)puVar22 ^ auVar39._0_4_;
            uVar65 = *(uint *)(puVar22 + 4) ^ auVar39._4_4_;
            auVar45._4_4_ = uVar61;
            auVar45._0_4_ = uVar65;
            auVar45._8_4_ = *(uint *)(puVar22 + 0xc) ^ auVar39._12_4_;
            auVar45._12_4_ = uVar61;
            auVar26._0_8_ = auVar39._8_8_;
            auVar26._8_4_ = auVar39._0_4_;
            auVar26._12_4_ = auVar39._4_4_;
            lVar73 = auVar74._8_8_;
            auVar74._0_8_ = (ulonglong)uVar65 * (ulonglong)uVar61 + auVar26._0_8_ + auVar74._0_8_;
            auVar74._8_8_ =
                 (auVar45._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar22 + 8) ^ auVar39._8_4_)
                 + auVar26._8_8_ + lVar73;
            auVar39 = *(undefined1 (*) [16])(puVar15 + 0x20);
            uVar61 = *(uint *)(puVar22 + 0x10) ^ auVar39._0_4_;
            uVar65 = *(uint *)(puVar22 + 0x14) ^ auVar39._4_4_;
            auVar27._0_8_ = auVar39._8_8_;
            auVar27._8_4_ = auVar39._0_4_;
            auVar27._12_4_ = auVar39._4_4_;
            auVar46._4_4_ = uVar61;
            auVar46._0_4_ = uVar65;
            auVar46._8_4_ = *(uint *)(puVar22 + 0x1c) ^ auVar39._12_4_;
            auVar46._12_4_ = uVar61;
            lVar73 = auVar76._8_8_;
            auVar76._0_8_ = auVar76._0_8_ + auVar27._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            auVar76._8_8_ =
                 lVar73 + auVar27._8_8_ +
                 (auVar46._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar22 + 0x18) ^ auVar39._8_4_);
            uVar18 = uVar18 - 1;
            puVar15 = puVar15 + 0x40;
            puVar22 = puVar22 + 8;
          } while (uVar18 != 0);
        }
        uVar65 = (uint)(uVar13 >> 0x20);
        uVar61 = (uint)(uVar17 >> 0x20);
        puVar15 = puVar20 + uVar2;
        auVar47._0_4_ = auVar71._4_4_ >> 0xf ^ auVar71._0_4_ ^ *(uint *)puVar15;
        auVar47._4_4_ = auVar71._4_4_ ^ *(uint *)(puVar15 + 4);
        auVar47._8_4_ = auVar71._12_4_ >> 0xf ^ auVar71._8_4_ ^ *(uint *)(puVar15 + 8);
        auVar47._12_4_ = auVar71._12_4_ ^ *(uint *)(puVar15 + 0xc);
        auVar72._4_4_ = auVar47._0_4_;
        auVar72._0_4_ = auVar47._4_4_;
        auVar72._8_4_ = auVar47._12_4_;
        auVar72._12_4_ = auVar47._0_4_;
        puVar15 = puVar20 + uVar2 + 0x10;
        auVar71._0_8_ =
             ((ulonglong)auVar47._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20)
             + (ulonglong)auVar47._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        auVar71._8_8_ =
             ((auVar72._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
             (auVar47._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        auVar48._0_4_ = uVar61 >> 0xf ^ (uint)uVar17 ^ *(uint *)puVar15;
        auVar48._4_4_ = uVar61 ^ *(uint *)(puVar15 + 4);
        auVar48._8_4_ = uVar65 >> 0xf ^ (uint)uVar13 ^ *(uint *)(puVar15 + 8);
        auVar48._12_4_ = uVar65 ^ *(uint *)(puVar15 + 0xc);
        puVar15 = puVar20 + uVar2 + 0x20;
        uVar17 = ((ulonglong)(auVar48._4_4_ * ___xmm_9e3779b19e3779b19e3779b19e3779b1) << 0x20) +
                 (ulonglong)auVar48._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        uVar13 = ((ulonglong)(auVar48._12_4_ * _UNK_15066df88) << 0x20) +
                 (auVar48._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        auVar49._0_4_ = auVar74._4_4_ >> 0xf ^ auVar74._0_4_ ^ *(uint *)puVar15;
        auVar49._4_4_ = auVar74._4_4_ ^ *(uint *)(puVar15 + 4);
        auVar49._8_4_ = auVar74._12_4_ >> 0xf ^ auVar74._8_4_ ^ *(uint *)(puVar15 + 8);
        auVar49._12_4_ = auVar74._12_4_ ^ *(uint *)(puVar15 + 0xc);
        auVar75._4_4_ = auVar49._0_4_;
        auVar75._0_4_ = auVar49._4_4_;
        auVar75._8_4_ = auVar49._12_4_;
        auVar75._12_4_ = auVar49._0_4_;
        puVar15 = puVar20 + uVar2 + 0x30;
        auVar74._0_8_ =
             ((ulonglong)auVar49._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20)
             + (ulonglong)auVar49._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        auVar74._8_8_ =
             ((auVar75._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
             (auVar49._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        auVar50._0_4_ = auVar76._4_4_ >> 0xf ^ auVar76._0_4_ ^ *(uint *)puVar15;
        auVar50._4_4_ = auVar76._4_4_ ^ *(uint *)(puVar15 + 4);
        auVar50._8_4_ = auVar76._12_4_ >> 0xf ^ auVar76._8_4_ ^ *(uint *)(puVar15 + 8);
        auVar50._12_4_ = auVar76._12_4_ ^ *(uint *)(puVar15 + 0xc);
        auVar77._4_4_ = auVar50._0_4_;
        auVar77._0_4_ = auVar50._4_4_;
        auVar77._8_4_ = auVar50._12_4_;
        auVar77._12_4_ = auVar50._0_4_;
        auVar76._0_8_ =
             ((ulonglong)auVar50._4_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1 << 0x20)
             + (ulonglong)auVar50._0_4_ * (ulonglong)___xmm_9e3779b19e3779b19e3779b19e3779b1;
        auVar76._8_8_ =
             ((auVar77._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88 << 0x20) +
             (auVar50._8_8_ & 0xffffffff) * (ulonglong)_UNK_15066df88;
        if (lVar19 != 0) {
          pauVar14 = (undefined1 (*) [16])((longlong)param_1 + uVar21 * 0x40 + 0x110);
          puVar15 = puVar20 + 0x20;
          do {
            auVar39 = pauVar14[-1];
            uVar61 = *(uint *)(puVar15 + -0x20) ^ auVar39._0_4_;
            uVar65 = *(uint *)(puVar15 + -0x1c) ^ auVar39._4_4_;
            auVar28._0_8_ = auVar39._8_8_;
            auVar28._8_4_ = auVar39._0_4_;
            auVar28._12_4_ = auVar39._4_4_;
            auVar51._4_4_ = uVar61;
            auVar51._0_4_ = uVar65;
            auVar51._8_4_ = *(uint *)(puVar15 + -0x14) ^ auVar39._12_4_;
            auVar51._12_4_ = uVar61;
            lVar73 = auVar71._8_8_;
            auVar40 = *pauVar14;
            auVar71._0_8_ = auVar71._0_8_ + auVar28._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            auVar71._8_8_ =
                 lVar73 + auVar28._8_8_ +
                 (auVar51._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar15 + -0x18) ^ auVar39._8_4_);
            uVar61 = *(uint *)(puVar15 + -0x10) ^ auVar40._0_4_;
            uVar65 = *(uint *)(puVar15 + -0xc) ^ auVar40._4_4_;
            auVar29._0_8_ = auVar40._8_8_;
            auVar29._8_4_ = auVar40._0_4_;
            auVar29._12_4_ = auVar40._4_4_;
            auVar52._4_4_ = uVar61;
            auVar52._0_4_ = uVar65;
            auVar52._8_4_ = *(uint *)(puVar15 + -4) ^ auVar40._12_4_;
            auVar52._12_4_ = uVar61;
            uVar17 = uVar17 + auVar29._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            uVar13 = uVar13 + auVar29._8_8_ +
                     (auVar52._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar15 + -8) ^ auVar40._8_4_);
            auVar39 = pauVar14[1];
            uVar61 = auVar39._0_4_ ^ *(uint *)puVar15;
            uVar65 = auVar39._4_4_ ^ *(uint *)(puVar15 + 4);
            auVar30._0_8_ = auVar39._8_8_;
            auVar30._8_4_ = auVar39._0_4_;
            auVar30._12_4_ = auVar39._4_4_;
            auVar53._4_4_ = uVar61;
            auVar53._0_4_ = uVar65;
            auVar53._8_4_ = auVar39._12_4_ ^ *(uint *)(puVar15 + 0xc);
            auVar53._12_4_ = uVar61;
            lVar73 = auVar74._8_8_;
            auVar40 = pauVar14[2];
            auVar74._0_8_ = auVar74._0_8_ + auVar30._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            auVar74._8_8_ =
                 lVar73 + auVar30._8_8_ +
                 (auVar53._8_8_ & 0xffffffff) * (ulonglong)(auVar39._8_4_ ^ *(uint *)(puVar15 + 8));
            uVar61 = *(uint *)(puVar15 + 0x10) ^ auVar40._0_4_;
            uVar65 = *(uint *)(puVar15 + 0x14) ^ auVar40._4_4_;
            auVar31._0_8_ = auVar40._8_8_;
            auVar31._8_4_ = auVar40._0_4_;
            auVar31._12_4_ = auVar40._4_4_;
            auVar54._4_4_ = uVar61;
            auVar54._0_4_ = uVar65;
            auVar54._8_4_ = *(uint *)(puVar15 + 0x1c) ^ auVar40._12_4_;
            auVar54._12_4_ = uVar61;
            lVar73 = auVar76._8_8_;
            auVar76._0_8_ = auVar76._0_8_ + auVar31._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
            auVar76._8_8_ =
                 lVar73 + auVar31._8_8_ +
                 (auVar54._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar15 + 0x18) ^ auVar40._8_4_);
            lVar19 = lVar19 + -1;
            pauVar14 = pauVar14 + 4;
            puVar15 = puVar15 + 8;
          } while (lVar19 != 0);
        }
      }
      puVar15 = puVar20 + (uVar2 - 7);
      auVar39 = *(undefined1 (*) [16])(param_1->customSecret + uVar23 + 0x80);
      auVar68._0_8_ = auVar39._8_8_;
      auVar68._8_4_ = auVar39._0_4_;
      auVar68._12_4_ = auVar39._4_4_;
      puVar22 = puVar20 + uVar2 + 9;
      uVar61 = auVar39._0_4_ ^ *(uint *)puVar15;
      uVar65 = auVar39._4_4_ ^ *(uint *)(puVar15 + 4);
      auVar36._4_4_ = uVar61;
      auVar36._0_4_ = uVar65;
      auVar36._8_4_ = auVar39._12_4_ ^ *(uint *)(puVar15 + 0xc);
      auVar36._12_4_ = uVar61;
      uVar67 = auVar68._0_8_ + auVar71._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
      uVar70 = auVar68._8_8_ + auVar71._8_8_ +
               (auVar36._8_8_ & 0xffffffff) * (ulonglong)(auVar39._8_4_ ^ *(uint *)(puVar15 + 8));
      auVar71 = *(undefined1 (*) [16])(param_1->customSecret + uVar23 + 0x90);
      uVar61 = *(uint *)puVar22 ^ auVar71._0_4_;
      uVar65 = *(uint *)(puVar22 + 4) ^ auVar71._4_4_;
      auVar63._0_8_ = auVar71._8_8_;
      auVar63._8_4_ = auVar71._0_4_;
      auVar63._12_4_ = auVar71._4_4_;
      auVar37._4_4_ = uVar61;
      auVar37._0_4_ = uVar65;
      auVar37._8_4_ = *(uint *)(puVar22 + 0xc) ^ auVar71._12_4_;
      auVar37._12_4_ = uVar61;
      puVar15 = puVar20 + uVar2 + 0x19;
      uVar21 = auVar63._0_8_ + uVar17 + (ulonglong)uVar65 * (ulonglong)uVar61;
      uVar66 = auVar63._8_8_ + uVar13 +
               (auVar37._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar22 + 8) ^ auVar71._8_4_);
      auVar71 = *(undefined1 (*) [16])(param_1->customSecret + uVar23 + 0xa0);
      uVar61 = *(uint *)puVar15 ^ auVar71._0_4_;
      uVar65 = *(uint *)(puVar15 + 4) ^ auVar71._4_4_;
      auVar38._4_4_ = uVar61;
      auVar38._0_4_ = uVar65;
      auVar38._8_4_ = *(uint *)(puVar15 + 0xc) ^ auVar71._12_4_;
      auVar38._12_4_ = uVar61;
      puVar22 = puVar20 + uVar2 + 0x29;
      uVar18 = auVar71._8_8_ + auVar74._0_8_ + (ulonglong)uVar65 * (ulonglong)uVar61;
      lVar19 = auVar71._0_8_ + auVar74._8_8_ +
               (auVar38._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar15 + 8) ^ auVar71._8_4_);
      local_88 = *(uint *)(param_1->customSecret + uVar23 + 0xb0);
      uStack_84 = *(uint *)(param_1->customSecret + uVar23 + 0xb4);
      uStack_80 = *(uint *)(param_1->customSecret + uVar23 + 0xb8);
      uStack_7c = *(uint *)(param_1->customSecret + uVar23 + 0xbc);
      uVar61 = *(uint *)puVar22 ^ local_88;
      uVar58 = *(uint *)(puVar22 + 4) ^ uStack_84;
      uVar59 = *(uint *)(puVar22 + 8) ^ uStack_80;
      uVar60 = *(uint *)(puVar22 + 0xc) ^ uStack_7c;
    }
    auVar42._4_4_ = uVar61;
    auVar42._0_4_ = uVar58;
    auVar42._8_4_ = uVar60;
    auVar42._12_4_ = uVar61;
    uVar23 = CONCAT44(uStack_7c,uStack_80) + auVar76._0_8_ + (ulonglong)uVar58 * (ulonglong)uVar61;
    lVar73 = CONCAT44(uStack_84,local_88) + auVar76._8_8_ +
             (auVar42._8_8_ & 0xffffffff) * (ulonglong)uVar59;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar70 ^ *(ulonglong *)(puVar20 + 0x13);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar67 ^ *(ulonglong *)(puVar20 + 0xb);
    auVar11._8_4_ = (int)lVar19;
    auVar11._0_8_ = uVar18;
    auVar11._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar66 ^ *(ulonglong *)(puVar20 + 0x23);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar21 ^ *(ulonglong *)(puVar20 + 0x1b);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar11._8_8_ ^ *(ulonglong *)(puVar20 + 0x33);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar18 ^ *(ulonglong *)(puVar20 + 0x2b);
    auVar12._8_4_ = (int)lVar73;
    auVar12._0_8_ = uVar23;
    auVar12._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar12._8_8_ ^ *(ulonglong *)(puVar20 + 0x43);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar23 ^ *(ulonglong *)(puVar20 + 0x3b);
    uVar16 = (SUB168(auVar6 * auVar10,0) ^ SUB168(auVar6 * auVar10,8)) +
             (SUB168(auVar3 * auVar7,8) ^ SUB168(auVar3 * auVar7,0)) + uVar16 * -0x61c8864e7a143579
             + (SUB168(auVar4 * auVar8,8) ^ SUB168(auVar4 * auVar8,0)) +
             (SUB168(auVar5 * auVar9,8) ^ SUB168(auVar5 * auVar9,0));
    uVar16 = (uVar16 >> 0x25 ^ uVar16) * 0x165667919e3779f9;
    uVar17 = uVar16 >> 0x20 ^ uVar16;
  }
  return uVar17;
}

// XXH_INLINE_XXH3_64bits_update @ 1417210a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

XXH_INLINE_XXH_errorcode __cdecl
XXH_INLINE_XXH3_64bits_update(XXH_INLINE_XXH3_state_s *param_1,void *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  undefined1 (*pauVar7) [16];
  uchar *puVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  longlong lVar11;
  void *pvVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  uchar *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar57;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar77;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  ulong64 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  ulong64 uVar82;
  undefined1 auVar81 [16];
  ulong64 uVar83;
  undefined1 auVar84 [16];
  ulong64 uVar86;
  undefined1 auVar85 [16];
  ulong64 uVar87;
  undefined1 auVar88 [16];
  ulong64 uVar90;
  undefined1 auVar89 [16];
  ulong64 uVar91;
  undefined1 auVar92 [16];
  ulong64 uVar94;
  undefined1 auVar93 [16];
  
  if (param_2 == (void *)0x0) {
    return XXH_INLINE_XXH_ERROR;
  }
  puVar15 = param_1->extSecret;
  uVar1 = (longlong)param_2 + param_3;
  if (puVar15 == (uchar *)0x0) {
    puVar15 = param_1->customSecret;
  }
  param_1->totalLen = param_1->totalLen + param_3;
  uVar5 = _UNK_15066df88;
  uVar4 = ___xmm_9e3779b19e3779b19e3779b19e3779b1;
  uVar40 = param_1->bufferedSize;
  uVar9 = (ulonglong)uVar40;
  if (uVar9 + param_3 < 0x101) {
    memcpy(param_1->buffer + uVar9,param_2,param_3);
    param_1->bufferedSize = param_1->bufferedSize + (int)param_3;
  }
  else {
    if (uVar40 != 0) {
      memcpy(param_1->buffer + uVar9,param_2,(ulonglong)(0x100 - uVar40));
      uVar83 = param_1->nbStripesSoFar;
      param_2 = (void *)((longlong)param_2 + (ulonglong)(0x100 - uVar40));
      uVar91 = param_1->secretLimit;
      uVar9 = param_1->nbStripesPerBlock - uVar83;
      if (uVar9 < 5) {
        uVar14 = 4 - uVar9;
        if (uVar9 != 0) {
          puVar6 = param_1->buffer + 0x10;
          puVar8 = puVar15 + uVar83 * 8 + 0x20;
          uVar13 = uVar9;
          do {
            auVar41 = *(undefined1 (*) [16])(puVar6 + -0x10);
            uVar86 = *(ulong64 *)(puVar8 + -0x18);
            auVar58._0_8_ = auVar41._8_8_;
            auVar58._8_4_ = auVar41._0_4_;
            auVar58._12_4_ = auVar41._4_4_;
            uVar83 = param_1->acc[1];
            uVar40 = (uint)*(ulong64 *)(puVar8 + -0x20) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar8 + -0x1c) ^ auVar41._4_4_;
            auVar16._4_4_ = uVar40;
            auVar16._0_4_ = uVar57;
            auVar16._8_4_ = *(uint *)(puVar8 + -0x14) ^ auVar41._12_4_;
            auVar16._12_4_ = uVar40;
            param_1->acc[0] =
                 auVar58._0_8_ + param_1->acc[0] + (ulonglong)uVar57 * (ulonglong)uVar40;
            param_1->acc[1] =
                 auVar58._8_8_ + uVar83 +
                 (auVar16._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar86 ^ auVar41._8_4_);
            auVar41 = *(undefined1 (*) [16])puVar6;
            uVar83 = *(ulong64 *)(puVar8 + -8);
            auVar59._0_8_ = auVar41._8_8_;
            auVar59._8_4_ = auVar41._0_4_;
            auVar59._12_4_ = auVar41._4_4_;
            uVar40 = (uint)*(ulong64 *)(puVar8 + -0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar8 + -0xc) ^ auVar41._4_4_;
            auVar17._4_4_ = uVar40;
            auVar17._0_4_ = uVar57;
            auVar17._8_4_ = *(uint *)(puVar8 + -4) ^ auVar41._12_4_;
            auVar17._12_4_ = uVar40;
            param_1->acc[2] =
                 auVar59._0_8_ + param_1->acc[2] + (ulonglong)uVar57 * (ulonglong)uVar40;
            param_1->acc[3] =
                 auVar59._8_8_ + param_1->acc[3] +
                 (auVar17._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_);
            auVar41 = *(undefined1 (*) [16])(puVar6 + 0x10);
            uVar40 = *(uint *)(puVar8 + 8);
            auVar79._0_8_ = auVar41._8_8_;
            auVar79._8_4_ = auVar41._0_4_;
            auVar79._12_4_ = auVar41._4_4_;
            uVar57 = auVar41._0_4_ ^ *(uint *)puVar8;
            uVar77 = auVar41._4_4_ ^ *(uint *)(puVar8 + 4);
            auVar18._4_4_ = uVar57;
            auVar18._0_4_ = uVar77;
            auVar18._8_4_ = auVar41._12_4_ ^ *(uint *)(puVar8 + 0xc);
            auVar18._12_4_ = uVar57;
            param_1->acc[4] =
                 auVar79._0_8_ + param_1->acc[4] + (ulonglong)uVar77 * (ulonglong)uVar57;
            param_1->acc[5] =
                 auVar79._8_8_ + param_1->acc[5] +
                 (auVar18._8_8_ & 0xffffffff) * (ulonglong)(auVar41._8_4_ ^ uVar40);
            auVar41 = *(undefined1 (*) [16])(puVar6 + 0x20);
            uVar40 = *(uint *)(puVar8 + 0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar8 + 0x14) ^ auVar41._4_4_;
            auVar60._4_4_ = uVar40;
            auVar60._0_4_ = uVar57;
            auVar60._8_4_ = *(uint *)(puVar8 + 0x1c) ^ auVar41._12_4_;
            auVar60._12_4_ = uVar40;
            auVar19._0_8_ = auVar41._8_8_;
            auVar19._8_4_ = auVar41._0_4_;
            auVar19._12_4_ = auVar41._4_4_;
            auVar61._0_8_ = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar19._0_8_ + param_1->acc[6];
            auVar61._8_8_ =
                 (auVar60._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar8 + 0x18) ^ auVar41._8_4_) +
                 auVar19._8_8_ + param_1->acc[7];
            *(undefined1 (*) [16])(param_1->acc + 6) = auVar61;
            uVar13 = uVar13 - 1;
            puVar6 = puVar6 + 0x40;
            puVar8 = puVar8 + 8;
          } while (uVar13 != 0);
        }
        puVar6 = puVar15 + uVar91;
        auVar41._0_4_ =
             *(uint *)((longlong)param_1->acc + 4) >> 0xf ^ (uint)param_1->acc[0] ^ *(uint *)puVar6;
        auVar41._4_4_ = *(uint *)((longlong)param_1->acc + 4) ^ *(uint *)(puVar6 + 4);
        auVar41._8_4_ =
             *(uint *)((longlong)param_1->acc + 0xc) >> 0xf ^ (uint)param_1->acc[1] ^
             *(uint *)(puVar6 + 8);
        auVar41._12_4_ = *(uint *)((longlong)param_1->acc + 0xc) ^ *(uint *)(puVar6 + 0xc);
        auVar80._4_4_ = auVar41._0_4_;
        auVar80._0_4_ = auVar41._4_4_;
        auVar80._8_4_ = auVar41._12_4_;
        auVar80._12_4_ = auVar41._0_4_;
        uVar78 = ((ulonglong)auVar41._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar41._0_4_ * (ulonglong)uVar4;
        uVar82 = ((auVar80._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar41._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        uVar40 = *(uint *)((longlong)param_1->acc + 0x14);
        uVar57 = *(uint *)((longlong)param_1->acc + 0x1c);
        uVar83 = param_1->acc[2];
        uVar77 = *(uint *)((longlong)param_1->acc + 0x14);
        uVar86 = param_1->acc[3];
        uVar2 = *(uint *)((longlong)param_1->acc + 0x1c);
        param_1->acc[0] = uVar78;
        param_1->acc[1] = uVar82;
        puVar6 = puVar15 + uVar91 + 0x10;
        auVar42._0_4_ = uVar40 >> 0xf ^ (uint)uVar83 ^ *(uint *)puVar6;
        auVar42._4_4_ = uVar77 ^ *(uint *)(puVar6 + 4);
        auVar42._8_4_ = uVar57 >> 0xf ^ (uint)uVar86 ^ *(uint *)(puVar6 + 8);
        auVar42._12_4_ = uVar2 ^ *(uint *)(puVar6 + 0xc);
        auVar84._4_4_ = auVar42._0_4_;
        auVar84._0_4_ = auVar42._4_4_;
        auVar84._8_4_ = auVar42._12_4_;
        auVar84._12_4_ = auVar42._0_4_;
        uVar83 = ((ulonglong)auVar42._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar42._0_4_ * (ulonglong)uVar4;
        uVar86 = ((auVar84._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar42._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        param_1->acc[2] = uVar83;
        param_1->acc[3] = uVar86;
        puVar6 = puVar15 + uVar91 + 0x20;
        auVar43._0_4_ =
             *(uint *)((longlong)param_1->acc + 0x24) >> 0xf ^ (uint)param_1->acc[4] ^
             *(uint *)puVar6;
        auVar43._4_4_ = *(uint *)((longlong)param_1->acc + 0x24) ^ *(uint *)(puVar6 + 4);
        auVar43._8_4_ =
             *(uint *)((longlong)param_1->acc + 0x2c) >> 0xf ^ (uint)param_1->acc[5] ^
             *(uint *)(puVar6 + 8);
        auVar43._12_4_ = *(uint *)((longlong)param_1->acc + 0x2c) ^ *(uint *)(puVar6 + 0xc);
        auVar88._4_4_ = auVar43._0_4_;
        auVar88._0_4_ = auVar43._4_4_;
        auVar88._8_4_ = auVar43._12_4_;
        auVar88._12_4_ = auVar43._0_4_;
        uVar87 = ((ulonglong)auVar43._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar43._0_4_ * (ulonglong)uVar4;
        uVar90 = ((auVar88._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar43._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        param_1->acc[4] = uVar87;
        param_1->acc[5] = uVar90;
        puVar6 = puVar15 + uVar91 + 0x30;
        auVar44._0_4_ =
             *(uint *)((longlong)param_1->acc + 0x34) >> 0xf ^ (uint)param_1->acc[6] ^
             *(uint *)puVar6;
        auVar44._4_4_ = *(uint *)((longlong)param_1->acc + 0x34) ^ *(uint *)(puVar6 + 4);
        auVar44._8_4_ =
             *(uint *)((longlong)param_1->acc + 0x3c) >> 0xf ^ (uint)param_1->acc[7] ^
             *(uint *)(puVar6 + 8);
        auVar44._12_4_ = *(uint *)((longlong)param_1->acc + 0x3c) ^ *(uint *)(puVar6 + 0xc);
        auVar92._4_4_ = auVar44._0_4_;
        auVar92._0_4_ = auVar44._4_4_;
        auVar92._8_4_ = auVar44._12_4_;
        auVar92._12_4_ = auVar44._0_4_;
        uVar91 = ((ulonglong)auVar44._4_4_ * (ulonglong)uVar4 << 0x20) +
                 (ulonglong)auVar44._0_4_ * (ulonglong)uVar4;
        uVar94 = ((auVar92._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                 (auVar44._8_8_ & 0xffffffff) * (ulonglong)uVar5;
        param_1->acc[6] = uVar91;
        param_1->acc[7] = uVar94;
        if (uVar14 != 0) {
          pauVar7 = (undefined1 (*) [16])((longlong)param_1 + uVar9 * 0x40 + 0x110);
          puVar6 = puVar15 + 0x20;
          uVar10 = uVar14;
          do {
            auVar41 = pauVar7[-1];
            uVar40 = *(uint *)(puVar6 + -0x20) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
            auVar20._0_8_ = auVar41._8_8_;
            auVar20._8_4_ = auVar41._0_4_;
            auVar20._12_4_ = auVar41._4_4_;
            auVar45._4_4_ = uVar40;
            auVar45._0_4_ = uVar57;
            auVar45._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
            auVar45._12_4_ = uVar40;
            uVar78 = uVar78 + auVar20._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
            uVar82 = uVar82 + auVar20._8_8_ +
                     (auVar45._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + -0x18) ^ auVar41._8_4_);
            param_1->acc[0] = uVar78;
            param_1->acc[1] = uVar82;
            auVar41 = *pauVar7;
            uVar40 = *(uint *)(puVar6 + -0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
            auVar21._0_8_ = auVar41._8_8_;
            auVar21._8_4_ = auVar41._0_4_;
            auVar21._12_4_ = auVar41._4_4_;
            auVar46._4_4_ = uVar40;
            auVar46._0_4_ = uVar57;
            auVar46._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
            auVar46._12_4_ = uVar40;
            uVar83 = uVar83 + auVar21._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
            uVar86 = uVar86 + auVar21._8_8_ +
                     (auVar46._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + -8) ^ auVar41._8_4_);
            param_1->acc[2] = uVar83;
            param_1->acc[3] = uVar86;
            auVar41 = pauVar7[1];
            uVar40 = *(uint *)puVar6 ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
            auVar47._4_4_ = uVar40;
            auVar47._0_4_ = uVar57;
            auVar47._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
            auVar47._12_4_ = uVar40;
            auVar22._0_8_ = auVar41._8_8_;
            auVar22._8_4_ = auVar41._0_4_;
            auVar22._12_4_ = auVar41._4_4_;
            uVar87 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar22._0_8_ + uVar87;
            uVar90 = (auVar47._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + 8) ^ auVar41._8_4_) + auVar22._8_8_ + uVar90;
            param_1->acc[4] = uVar87;
            param_1->acc[5] = uVar90;
            auVar41 = pauVar7[2];
            uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
            auVar23._0_8_ = auVar41._8_8_;
            auVar23._8_4_ = auVar41._0_4_;
            auVar23._12_4_ = auVar41._4_4_;
            auVar48._4_4_ = uVar40;
            auVar48._0_4_ = uVar57;
            auVar48._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
            auVar48._12_4_ = uVar40;
            uVar91 = uVar91 + auVar23._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
            uVar94 = uVar94 + auVar23._8_8_ +
                     (auVar48._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_);
            param_1->acc[6] = uVar91;
            param_1->acc[7] = uVar94;
            uVar10 = uVar10 - 1;
            pauVar7 = pauVar7 + 4;
            puVar6 = puVar6 + 8;
          } while (uVar10 != 0);
        }
        param_1->nbStripesSoFar = uVar14;
      }
      else {
        lVar11 = 4;
        puVar6 = param_1->buffer + 0x10;
        puVar8 = puVar15 + uVar83 * 8 + 0x20;
        do {
          auVar41 = *(undefined1 (*) [16])(puVar6 + -0x10);
          uVar91 = *(ulong64 *)(puVar8 + -0x18);
          auVar62._0_8_ = auVar41._8_8_;
          auVar62._8_4_ = auVar41._0_4_;
          auVar62._12_4_ = auVar41._4_4_;
          uVar83 = param_1->acc[1];
          uVar40 = (uint)*(ulong64 *)(puVar8 + -0x20) ^ auVar41._0_4_;
          uVar57 = *(uint *)(puVar8 + -0x1c) ^ auVar41._4_4_;
          auVar24._4_4_ = uVar40;
          auVar24._0_4_ = uVar57;
          auVar24._8_4_ = *(uint *)(puVar8 + -0x14) ^ auVar41._12_4_;
          auVar24._12_4_ = uVar40;
          param_1->acc[0] = auVar62._0_8_ + param_1->acc[0] + (ulonglong)uVar57 * (ulonglong)uVar40;
          param_1->acc[1] =
               auVar62._8_8_ + uVar83 +
               (auVar24._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar91 ^ auVar41._8_4_);
          auVar41 = *(undefined1 (*) [16])puVar6;
          uVar83 = *(ulong64 *)(puVar8 + -8);
          uVar40 = (uint)*(ulong64 *)(puVar8 + -0x10) ^ auVar41._0_4_;
          uVar57 = *(uint *)(puVar8 + -0xc) ^ auVar41._4_4_;
          auVar63._4_4_ = uVar40;
          auVar63._0_4_ = uVar57;
          auVar63._8_4_ = *(uint *)(puVar8 + -4) ^ auVar41._12_4_;
          auVar63._12_4_ = uVar40;
          auVar25._0_8_ = auVar41._8_8_;
          auVar25._8_4_ = auVar41._0_4_;
          auVar25._12_4_ = auVar41._4_4_;
          param_1->acc[2] = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar25._0_8_ + param_1->acc[2];
          param_1->acc[3] =
               (auVar63._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_) +
               auVar25._8_8_ + param_1->acc[3];
          auVar41 = *(undefined1 (*) [16])(puVar6 + 0x10);
          uVar40 = *(uint *)(puVar8 + 8);
          uVar57 = *(uint *)puVar8 ^ auVar41._0_4_;
          uVar77 = *(uint *)(puVar8 + 4) ^ auVar41._4_4_;
          auVar64._4_4_ = uVar57;
          auVar64._0_4_ = uVar77;
          auVar64._8_4_ = *(uint *)(puVar8 + 0xc) ^ auVar41._12_4_;
          auVar64._12_4_ = uVar57;
          auVar26._0_8_ = auVar41._8_8_;
          auVar26._8_4_ = auVar41._0_4_;
          auVar26._12_4_ = auVar41._4_4_;
          param_1->acc[4] = (ulonglong)uVar77 * (ulonglong)uVar57 + auVar26._0_8_ + param_1->acc[4];
          param_1->acc[5] =
               (auVar64._8_8_ & 0xffffffff) * (ulonglong)(uVar40 ^ auVar41._8_4_) +
               auVar26._8_8_ + param_1->acc[5];
          auVar41 = *(undefined1 (*) [16])(puVar6 + 0x20);
          auVar65._0_8_ = auVar41._8_8_;
          auVar65._8_4_ = auVar41._0_4_;
          auVar65._12_4_ = auVar41._4_4_;
          uVar40 = *(uint *)(puVar8 + 0x10) ^ auVar41._0_4_;
          uVar57 = *(uint *)(puVar8 + 0x14) ^ auVar41._4_4_;
          auVar27._4_4_ = uVar40;
          auVar27._0_4_ = uVar57;
          auVar27._8_4_ = *(uint *)(puVar8 + 0x1c) ^ auVar41._12_4_;
          auVar27._12_4_ = uVar40;
          auVar66._0_8_ = auVar65._0_8_ + param_1->acc[6] + (ulonglong)uVar57 * (ulonglong)uVar40;
          auVar66._8_8_ =
               auVar65._8_8_ + param_1->acc[7] +
               (auVar27._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(puVar8 + 0x18) ^ auVar41._8_4_);
          *(undefined1 (*) [16])(param_1->acc + 6) = auVar66;
          lVar11 = lVar11 + -1;
          puVar6 = puVar6 + 0x40;
          puVar8 = puVar8 + 8;
        } while (lVar11 != 0);
        param_1->nbStripesSoFar = param_1->nbStripesSoFar + 4;
      }
      param_1->bufferedSize = 0;
    }
    if ((longlong)param_2 + 0x100U < uVar1) {
      do {
        pvVar12 = param_2;
        uVar83 = param_1->nbStripesSoFar;
        uVar91 = param_1->secretLimit;
        uVar9 = param_1->nbStripesPerBlock - uVar83;
        if (uVar9 < 5) {
          uVar14 = 4 - uVar9;
          if (uVar9 != 0) {
            pauVar7 = (undefined1 (*) [16])((longlong)pvVar12 + 0x10);
            puVar6 = puVar15 + uVar83 * 8 + 0x20;
            uVar13 = uVar9;
            do {
              auVar41 = pauVar7[-1];
              uVar86 = *(ulong64 *)(puVar6 + -0x18);
              uVar40 = (uint)*(ulong64 *)(puVar6 + -0x20) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
              auVar67._4_4_ = uVar40;
              auVar67._0_4_ = uVar57;
              auVar67._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
              auVar67._12_4_ = uVar40;
              auVar28._0_8_ = auVar41._8_8_;
              auVar28._8_4_ = auVar41._0_4_;
              auVar28._12_4_ = auVar41._4_4_;
              uVar83 = param_1->acc[1];
              param_1->acc[0] =
                   (ulonglong)uVar57 * (ulonglong)uVar40 + auVar28._0_8_ + param_1->acc[0];
              param_1->acc[1] =
                   (auVar67._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar86 ^ auVar41._8_4_) +
                   auVar28._8_8_ + uVar83;
              auVar41 = *pauVar7;
              uVar83 = *(ulong64 *)(puVar6 + -8);
              uVar40 = (uint)*(ulong64 *)(puVar6 + -0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
              auVar68._4_4_ = uVar40;
              auVar68._0_4_ = uVar57;
              auVar68._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
              auVar68._12_4_ = uVar40;
              auVar29._0_8_ = auVar41._8_8_;
              auVar29._8_4_ = auVar41._0_4_;
              auVar29._12_4_ = auVar41._4_4_;
              param_1->acc[2] =
                   (ulonglong)uVar57 * (ulonglong)uVar40 + auVar29._0_8_ + param_1->acc[2];
              param_1->acc[3] =
                   (auVar68._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_) +
                   auVar29._8_8_ + param_1->acc[3];
              auVar41 = pauVar7[1];
              uVar40 = *(uint *)(puVar6 + 8);
              auVar69._0_8_ = auVar41._8_8_;
              auVar69._8_4_ = auVar41._0_4_;
              auVar69._12_4_ = auVar41._4_4_;
              uVar57 = *(uint *)puVar6 ^ auVar41._0_4_;
              uVar77 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
              auVar30._4_4_ = uVar57;
              auVar30._0_4_ = uVar77;
              auVar30._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
              auVar30._12_4_ = uVar57;
              param_1->acc[4] =
                   auVar69._0_8_ + param_1->acc[4] + (ulonglong)uVar77 * (ulonglong)uVar57;
              param_1->acc[5] =
                   auVar69._8_8_ + param_1->acc[5] +
                   (auVar30._8_8_ & 0xffffffff) * (ulonglong)(uVar40 ^ auVar41._8_4_);
              auVar41 = pauVar7[2];
              auVar70._0_8_ = auVar41._8_8_;
              auVar70._8_4_ = auVar41._0_4_;
              auVar70._12_4_ = auVar41._4_4_;
              uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
              auVar31._4_4_ = uVar40;
              auVar31._0_4_ = uVar57;
              auVar31._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
              auVar31._12_4_ = uVar40;
              auVar71._0_8_ =
                   auVar70._0_8_ + param_1->acc[6] + (ulonglong)uVar57 * (ulonglong)uVar40;
              auVar71._8_8_ =
                   auVar70._8_8_ + param_1->acc[7] +
                   (auVar31._8_8_ & 0xffffffff) *
                   (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_);
              *(undefined1 (*) [16])(param_1->acc + 6) = auVar71;
              uVar13 = uVar13 - 1;
              pauVar7 = pauVar7 + 4;
              puVar6 = puVar6 + 8;
            } while (uVar13 != 0);
          }
          puVar6 = puVar15 + uVar91;
          auVar49._0_4_ =
               *(uint *)((longlong)param_1->acc + 4) >> 0xf ^ (uint)param_1->acc[0] ^
               *(uint *)puVar6;
          auVar49._4_4_ = *(uint *)((longlong)param_1->acc + 4) ^ *(uint *)(puVar6 + 4);
          auVar49._8_4_ =
               *(uint *)((longlong)param_1->acc + 0xc) >> 0xf ^ (uint)param_1->acc[1] ^
               *(uint *)(puVar6 + 8);
          auVar49._12_4_ = *(uint *)((longlong)param_1->acc + 0xc) ^ *(uint *)(puVar6 + 0xc);
          auVar81._4_4_ = auVar49._0_4_;
          auVar81._0_4_ = auVar49._4_4_;
          auVar81._8_4_ = auVar49._12_4_;
          auVar81._12_4_ = auVar49._0_4_;
          uVar78 = ((ulonglong)auVar49._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar49._0_4_ * (ulonglong)uVar4;
          uVar82 = ((auVar81._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar49._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          uVar40 = *(uint *)((longlong)param_1->acc + 0x14);
          uVar57 = *(uint *)((longlong)param_1->acc + 0x1c);
          uVar83 = param_1->acc[2];
          uVar77 = *(uint *)((longlong)param_1->acc + 0x14);
          uVar86 = param_1->acc[3];
          uVar2 = *(uint *)((longlong)param_1->acc + 0x1c);
          param_1->acc[0] = uVar78;
          param_1->acc[1] = uVar82;
          puVar6 = puVar15 + uVar91 + 0x10;
          auVar50._0_4_ = uVar40 >> 0xf ^ (uint)uVar83 ^ *(uint *)puVar6;
          auVar50._4_4_ = uVar77 ^ *(uint *)(puVar6 + 4);
          auVar50._8_4_ = uVar57 >> 0xf ^ (uint)uVar86 ^ *(uint *)(puVar6 + 8);
          auVar50._12_4_ = uVar2 ^ *(uint *)(puVar6 + 0xc);
          auVar85._4_4_ = auVar50._0_4_;
          auVar85._0_4_ = auVar50._4_4_;
          auVar85._8_4_ = auVar50._12_4_;
          auVar85._12_4_ = auVar50._0_4_;
          uVar83 = ((ulonglong)auVar50._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar50._0_4_ * (ulonglong)uVar4;
          uVar86 = ((auVar85._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar50._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          param_1->acc[2] = uVar83;
          param_1->acc[3] = uVar86;
          puVar6 = puVar15 + uVar91 + 0x20;
          auVar51._0_4_ =
               *(uint *)((longlong)param_1->acc + 0x24) >> 0xf ^ (uint)param_1->acc[4] ^
               *(uint *)puVar6;
          auVar51._4_4_ = *(uint *)((longlong)param_1->acc + 0x24) ^ *(uint *)(puVar6 + 4);
          auVar51._8_4_ =
               *(uint *)((longlong)param_1->acc + 0x2c) >> 0xf ^ (uint)param_1->acc[5] ^
               *(uint *)(puVar6 + 8);
          auVar51._12_4_ = *(uint *)((longlong)param_1->acc + 0x2c) ^ *(uint *)(puVar6 + 0xc);
          auVar89._4_4_ = auVar51._0_4_;
          auVar89._0_4_ = auVar51._4_4_;
          auVar89._8_4_ = auVar51._12_4_;
          auVar89._12_4_ = auVar51._0_4_;
          uVar87 = ((ulonglong)auVar51._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar51._0_4_ * (ulonglong)uVar4;
          uVar90 = ((auVar89._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar51._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          param_1->acc[4] = uVar87;
          param_1->acc[5] = uVar90;
          puVar6 = puVar15 + uVar91 + 0x30;
          auVar52._0_4_ =
               *(uint *)((longlong)param_1->acc + 0x34) >> 0xf ^ (uint)param_1->acc[6] ^
               *(uint *)puVar6;
          auVar52._4_4_ = *(uint *)((longlong)param_1->acc + 0x34) ^ *(uint *)(puVar6 + 4);
          auVar52._8_4_ =
               *(uint *)((longlong)param_1->acc + 0x3c) >> 0xf ^ (uint)param_1->acc[7] ^
               *(uint *)(puVar6 + 8);
          auVar52._12_4_ = *(uint *)((longlong)param_1->acc + 0x3c) ^ *(uint *)(puVar6 + 0xc);
          auVar93._4_4_ = auVar52._0_4_;
          auVar93._0_4_ = auVar52._4_4_;
          auVar93._8_4_ = auVar52._12_4_;
          auVar93._12_4_ = auVar52._0_4_;
          uVar91 = ((ulonglong)auVar52._4_4_ * (ulonglong)uVar4 << 0x20) +
                   (ulonglong)auVar52._0_4_ * (ulonglong)uVar4;
          uVar94 = ((auVar93._8_8_ & 0xffffffff) * (ulonglong)uVar5 << 0x20) +
                   (auVar52._8_8_ & 0xffffffff) * (ulonglong)uVar5;
          param_1->acc[6] = uVar91;
          param_1->acc[7] = uVar94;
          if (uVar14 != 0) {
            pauVar7 = (undefined1 (*) [16])(uVar9 * 0x40 + 0x10 + (longlong)pvVar12);
            puVar6 = puVar15 + 0x20;
            uVar10 = uVar14;
            do {
              auVar41 = pauVar7[-1];
              uVar40 = *(uint *)(puVar6 + -0x20) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
              auVar53._4_4_ = uVar40;
              auVar53._0_4_ = uVar57;
              auVar53._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
              auVar53._12_4_ = uVar40;
              auVar32._0_8_ = auVar41._8_8_;
              auVar32._8_4_ = auVar41._0_4_;
              auVar32._12_4_ = auVar41._4_4_;
              uVar78 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar32._0_8_ + uVar78;
              uVar82 = (auVar53._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + -0x18) ^ auVar41._8_4_) +
                       auVar32._8_8_ + uVar82;
              param_1->acc[0] = uVar78;
              param_1->acc[1] = uVar82;
              auVar41 = *pauVar7;
              uVar40 = *(uint *)(puVar6 + -0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
              auVar54._4_4_ = uVar40;
              auVar54._0_4_ = uVar57;
              auVar54._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
              auVar54._12_4_ = uVar40;
              auVar33._0_8_ = auVar41._8_8_;
              auVar33._8_4_ = auVar41._0_4_;
              auVar33._12_4_ = auVar41._4_4_;
              uVar83 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar33._0_8_ + uVar83;
              uVar86 = (auVar54._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + -8) ^ auVar41._8_4_) + auVar33._8_8_ + uVar86;
              param_1->acc[2] = uVar83;
              param_1->acc[3] = uVar86;
              auVar41 = pauVar7[1];
              uVar40 = *(uint *)puVar6 ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
              auVar34._0_8_ = auVar41._8_8_;
              auVar34._8_4_ = auVar41._0_4_;
              auVar34._12_4_ = auVar41._4_4_;
              auVar55._4_4_ = uVar40;
              auVar55._0_4_ = uVar57;
              auVar55._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
              auVar55._12_4_ = uVar40;
              uVar87 = uVar87 + auVar34._0_8_ + (ulonglong)uVar57 * (ulonglong)uVar40;
              uVar90 = uVar90 + auVar34._8_8_ +
                       (auVar55._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + 8) ^ auVar41._8_4_);
              param_1->acc[4] = uVar87;
              param_1->acc[5] = uVar90;
              auVar41 = pauVar7[2];
              uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
              uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
              auVar56._4_4_ = uVar40;
              auVar56._0_4_ = uVar57;
              auVar56._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
              auVar56._12_4_ = uVar40;
              auVar35._0_8_ = auVar41._8_8_;
              auVar35._8_4_ = auVar41._0_4_;
              auVar35._12_4_ = auVar41._4_4_;
              uVar91 = (ulonglong)uVar57 * (ulonglong)uVar40 + auVar35._0_8_ + uVar91;
              uVar94 = (auVar56._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_) +
                       auVar35._8_8_ + uVar94;
              param_1->acc[6] = uVar91;
              param_1->acc[7] = uVar94;
              uVar10 = uVar10 - 1;
              pauVar7 = pauVar7 + 4;
              puVar6 = puVar6 + 8;
            } while (uVar10 != 0);
          }
          param_1->nbStripesSoFar = uVar14;
        }
        else {
          lVar11 = 4;
          pauVar7 = (undefined1 (*) [16])((longlong)pvVar12 + 0x10);
          puVar6 = puVar15 + uVar83 * 8 + 0x20;
          do {
            auVar41 = pauVar7[-1];
            uVar91 = *(ulong64 *)(puVar6 + -0x18);
            auVar72._0_8_ = auVar41._8_8_;
            auVar72._8_4_ = auVar41._0_4_;
            auVar72._12_4_ = auVar41._4_4_;
            uVar83 = param_1->acc[1];
            uVar40 = (uint)*(ulong64 *)(puVar6 + -0x20) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0x1c) ^ auVar41._4_4_;
            auVar36._4_4_ = uVar40;
            auVar36._0_4_ = uVar57;
            auVar36._8_4_ = *(uint *)(puVar6 + -0x14) ^ auVar41._12_4_;
            auVar36._12_4_ = uVar40;
            param_1->acc[0] =
                 auVar72._0_8_ + param_1->acc[0] + (ulonglong)uVar57 * (ulonglong)uVar40;
            param_1->acc[1] =
                 auVar72._8_8_ + uVar83 +
                 (auVar36._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar91 ^ auVar41._8_4_);
            auVar41 = *pauVar7;
            uVar83 = *(ulong64 *)(puVar6 + -8);
            uVar40 = (uint)*(ulong64 *)(puVar6 + -0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + -0xc) ^ auVar41._4_4_;
            auVar73._4_4_ = uVar40;
            auVar73._0_4_ = uVar57;
            auVar73._8_4_ = *(uint *)(puVar6 + -4) ^ auVar41._12_4_;
            auVar73._12_4_ = uVar40;
            auVar37._0_8_ = auVar41._8_8_;
            auVar37._8_4_ = auVar41._0_4_;
            auVar37._12_4_ = auVar41._4_4_;
            param_1->acc[2] =
                 (ulonglong)uVar57 * (ulonglong)uVar40 + auVar37._0_8_ + param_1->acc[2];
            param_1->acc[3] =
                 (auVar73._8_8_ & 0xffffffff) * (ulonglong)((uint)uVar83 ^ auVar41._8_4_) +
                 auVar37._8_8_ + param_1->acc[3];
            auVar41 = pauVar7[1];
            uVar40 = *(uint *)(puVar6 + 8);
            uVar57 = *(uint *)puVar6 ^ auVar41._0_4_;
            uVar77 = *(uint *)(puVar6 + 4) ^ auVar41._4_4_;
            auVar74._4_4_ = uVar57;
            auVar74._0_4_ = uVar77;
            auVar74._8_4_ = *(uint *)(puVar6 + 0xc) ^ auVar41._12_4_;
            auVar74._12_4_ = uVar57;
            auVar38._0_8_ = auVar41._8_8_;
            auVar38._8_4_ = auVar41._0_4_;
            auVar38._12_4_ = auVar41._4_4_;
            param_1->acc[4] =
                 (ulonglong)uVar77 * (ulonglong)uVar57 + auVar38._0_8_ + param_1->acc[4];
            param_1->acc[5] =
                 (auVar74._8_8_ & 0xffffffff) * (ulonglong)(uVar40 ^ auVar41._8_4_) +
                 auVar38._8_8_ + param_1->acc[5];
            auVar41 = pauVar7[2];
            auVar75._0_8_ = auVar41._8_8_;
            auVar75._8_4_ = auVar41._0_4_;
            auVar75._12_4_ = auVar41._4_4_;
            uVar40 = *(uint *)(puVar6 + 0x10) ^ auVar41._0_4_;
            uVar57 = *(uint *)(puVar6 + 0x14) ^ auVar41._4_4_;
            auVar39._4_4_ = uVar40;
            auVar39._0_4_ = uVar57;
            auVar39._8_4_ = *(uint *)(puVar6 + 0x1c) ^ auVar41._12_4_;
            auVar39._12_4_ = uVar40;
            auVar76._0_8_ = auVar75._0_8_ + param_1->acc[6] + (ulonglong)uVar57 * (ulonglong)uVar40;
            auVar76._8_8_ =
                 auVar75._8_8_ + param_1->acc[7] +
                 (auVar39._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(puVar6 + 0x18) ^ auVar41._8_4_);
            *(undefined1 (*) [16])(param_1->acc + 6) = auVar76;
            lVar11 = lVar11 + -1;
            pauVar7 = pauVar7 + 4;
            puVar6 = puVar6 + 8;
          } while (lVar11 != 0);
          param_1->nbStripesSoFar = param_1->nbStripesSoFar + 4;
        }
        param_2 = (void *)((longlong)pvVar12 + 0x100);
      } while (param_2 < (void *)(uVar1 - 0x100));
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 200);
      *(undefined8 *)(param_1->buffer + 0xc0) = *(undefined8 *)((longlong)pvVar12 + 0xc0);
      *(undefined8 *)(param_1->buffer + 200) = uVar3;
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 0xd8);
      *(undefined8 *)(param_1->buffer + 0xd0) = *(undefined8 *)((longlong)pvVar12 + 0xd0);
      *(undefined8 *)(param_1->buffer + 0xd8) = uVar3;
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 0xe8);
      *(undefined8 *)(param_1->buffer + 0xe0) = *(undefined8 *)((longlong)pvVar12 + 0xe0);
      *(undefined8 *)(param_1->buffer + 0xe8) = uVar3;
      uVar3 = *(undefined8 *)((longlong)pvVar12 + 0xf8);
      *(undefined8 *)(param_1->buffer + 0xf0) = *(undefined8 *)((longlong)pvVar12 + 0xf0);
      *(undefined8 *)(param_1->buffer + 0xf8) = uVar3;
    }
    memcpy(param_1->buffer,param_2,uVar1 - (longlong)param_2);
    param_1->bufferedSize = (int)uVar1 - (int)param_2;
  }
  return XXH_INLINE_XXH_OK;
}

// XXH_INLINE_XXH3_64bits_withSecret @ 141721940

ulong64 __cdecl
XXH_INLINE_XXH3_64bits_withSecret(void *param_1,ulong64 param_2,void *param_3,ulong64 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong64 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  if (0x10 < param_2) {
    if (param_2 < 0x81) {
      lVar21 = param_2 * -0x61c8864e7a143579;
      if (0x20 < param_2) {
        if (0x40 < param_2) {
          if (0x60 < param_2) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = *(ulonglong *)((longlong)param_1 + 0x38) ^
                           *(ulonglong *)((longlong)param_3 + 0x68);
            auVar11._8_8_ = 0;
            auVar11._0_8_ =
                 *(ulonglong *)((longlong)param_1 + 0x30) ^ *(ulonglong *)((longlong)param_3 + 0x60)
            ;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *(ulonglong *)((longlong)param_1 + (param_2 - 0x38)) ^
                           *(ulonglong *)((longlong)param_3 + 0x78);
            auVar12._8_8_ = 0;
            auVar12._0_8_ =
                 *(ulonglong *)((longlong)param_1 + (param_2 - 0x40)) ^
                 *(ulonglong *)((longlong)param_3 + 0x70);
            lVar21 = lVar21 + (SUB168(auVar2 * auVar11,0) ^ SUB168(auVar2 * auVar11,8)) +
                     (SUB168(auVar3 * auVar12,0) ^ SUB168(auVar3 * auVar12,8));
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *(ulonglong *)((longlong)param_1 + 0x28) ^
                         *(ulonglong *)((longlong)param_3 + 0x48);
          auVar13._8_8_ = 0;
          auVar13._0_8_ =
               *(ulonglong *)((longlong)param_1 + 0x20) ^ *(ulonglong *)((longlong)param_3 + 0x40);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)((longlong)param_1 + (param_2 - 0x28)) ^
                         *(ulonglong *)((longlong)param_3 + 0x58);
          auVar14._8_8_ = 0;
          auVar14._0_8_ =
               *(ulonglong *)((longlong)param_3 + 0x50) ^
               *(ulonglong *)((longlong)param_1 + (param_2 - 0x30));
          lVar21 = lVar21 + (SUB168(auVar5 * auVar14,0) ^ SUB168(auVar5 * auVar14,8)) +
                   (SUB168(auVar4 * auVar13,0) ^ SUB168(auVar4 * auVar13,8));
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)((longlong)param_3 + 0x28) ^
                       *(ulonglong *)((longlong)param_1 + 0x18);
        auVar15._8_8_ = 0;
        auVar15._0_8_ =
             *(ulonglong *)((longlong)param_3 + 0x20) ^ *(ulonglong *)((longlong)param_1 + 0x10);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)((longlong)param_3 + 0x38) ^
                       *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
        auVar16._8_8_ = 0;
        auVar16._0_8_ =
             *(ulonglong *)((longlong)param_1 + (param_2 - 0x20)) ^
             *(ulonglong *)((longlong)param_3 + 0x30);
        lVar21 = lVar21 + (SUB168(auVar6 * auVar15,0) ^ SUB168(auVar6 * auVar15,8)) +
                 (SUB168(auVar7 * auVar16,0) ^ SUB168(auVar7 * auVar16,8));
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)((longlong)param_1 + 8) ^ *(ulonglong *)((longlong)param_3 + 8);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulonglong *)param_1 ^ *(ulonglong *)param_3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)((longlong)param_3 + 0x18) ^
                     *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      auVar18._8_8_ = 0;
      auVar18._0_8_ =
           *(ulonglong *)((longlong)param_1 + (param_2 - 0x10)) ^
           *(ulonglong *)((longlong)param_3 + 0x10);
      uVar20 = lVar21 + (SUB168(auVar9 * auVar18,0) ^ SUB168(auVar9 * auVar18,8)) +
               (SUB168(auVar8 * auVar17,0) ^ SUB168(auVar8 * auVar17,8));
      uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
      return uVar20 >> 0x20 ^ uVar20;
    }
    if (0xf0 < param_2) {
      uVar19 = XXH3_hashLong_64b_withSecret(param_1,param_2,0,param_3,param_4);
      return uVar19;
    }
    uVar19 = XXH3_len_129to240_64b(param_1,param_2,param_3,param_4,0);
    return uVar19;
  }
  if (8 < param_2) {
    uVar22 = *(ulonglong *)((longlong)param_3 + 0x20) ^ *(ulonglong *)((longlong)param_3 + 0x18) ^
             *(ulonglong *)param_1;
    uVar20 = *(ulonglong *)((longlong)param_1 + (param_2 - 8)) ^
             *(ulonglong *)((longlong)param_3 + 0x30) ^ *(ulonglong *)((longlong)param_3 + 0x28);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar20;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar22;
    uVar20 = (SUB168(auVar1 * auVar10,0) ^ SUB168(auVar1 * auVar10,8)) +
             uVar20 + (uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                       (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                       (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                       (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38) + param_2;
    uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
    return uVar20 >> 0x20 ^ uVar20;
  }
  if (param_2 < 4) {
    if (param_2 == 0) {
      uVar20 = *(ulonglong *)((longlong)param_3 + 0x40) ^ *(ulonglong *)((longlong)param_3 + 0x38);
      uVar20 = (uVar20 >> 0x21 ^ uVar20) * -0x3d4d51c2d82b14b1;
      uVar20 = (uVar20 >> 0x1d ^ uVar20) * 0x165667b19e3779f9;
      return uVar20 >> 0x20 ^ uVar20;
    }
    uVar20 = (((ulonglong)
               (((uint)CONCAT11(*(undefined1 *)((param_2 >> 1) + (longlong)param_1),
                                *(undefined1 *)param_1) << 8 | (uint)param_2) << 8) |
              (ulonglong)*(byte *)((longlong)param_1 + (param_2 - 1))) ^
              (ulonglong)*(uint *)((longlong)param_3 + 4) ^ (ulonglong)*(uint *)param_3) *
             -0x3d4d51c2d82b14b1;
    uVar20 = (uVar20 >> 0x1d ^ uVar20) * 0x165667b19e3779f9;
    return uVar20 >> 0x20 ^ uVar20;
  }
  uVar20 = CONCAT44(*(undefined4 *)param_1,*(undefined4 *)((longlong)param_1 + (param_2 - 4))) ^
           *(ulonglong *)((longlong)param_3 + 0x10) ^ *(ulonglong *)((longlong)param_3 + 8);
  uVar20 = ((uVar20 << 0x31 | uVar20 >> 0xf) ^ (uVar20 << 0x18 | uVar20 >> 0x28) ^ uVar20) *
           -0x604de39ae16720db;
  uVar20 = ((uVar20 >> 0x23) + param_2 ^ uVar20) * -0x604de39ae16720db;
  return uVar20 >> 0x1c ^ uVar20;
}

// XXH_INLINE_XXH3_64bits_withSeed @ 141721c70

ulong64 __cdecl XXH_INLINE_XXH3_64bits_withSeed(void *param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong64 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  
  if (0x10 < param_2) {
    if (param_2 < 0x81) {
      lVar22 = param_2 * -0x61c8864e7a143579;
      if (0x20 < param_2) {
        if (0x40 < param_2) {
          if (0x60 < param_2) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = XXH3_kSecret._104_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 0x38)
            ;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = XXH3_kSecret._96_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + 0x30)
            ;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = XXH3_kSecret._120_8_ - param_3 ^
                           *(ulonglong *)((longlong)param_1 + (param_2 - 0x38));
            auVar12._8_8_ = 0;
            auVar12._0_8_ =
                 XXH3_kSecret._112_8_ + param_3 ^
                 *(ulonglong *)((longlong)param_1 + (param_2 - 0x40));
            lVar22 = lVar22 + (SUB168(auVar2 * auVar11,0) ^ SUB168(auVar2 * auVar11,8)) +
                     (SUB168(auVar3 * auVar12,0) ^ SUB168(auVar3 * auVar12,8));
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = XXH3_kSecret._72_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 0x28);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = XXH3_kSecret._64_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + 0x20);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = XXH3_kSecret._88_8_ - param_3 ^
                         *(ulonglong *)((longlong)param_1 + (param_2 - 0x28));
          auVar14._8_8_ = 0;
          auVar14._0_8_ =
               XXH3_kSecret._80_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x30));
          lVar22 = lVar22 + (SUB168(auVar5 * auVar14,0) ^ SUB168(auVar5 * auVar14,8)) +
                   (SUB168(auVar4 * auVar13,0) ^ SUB168(auVar4 * auVar13,8));
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = XXH3_kSecret._40_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 0x18);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = XXH3_kSecret._32_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + 0x10);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = XXH3_kSecret._56_8_ - param_3 ^
                       *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
        auVar16._8_8_ = 0;
        auVar16._0_8_ =
             XXH3_kSecret._48_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x20));
        lVar22 = lVar22 + (SUB168(auVar6 * auVar15,0) ^ SUB168(auVar6 * auVar15,8)) +
                 (SUB168(auVar7 * auVar16,0) ^ SUB168(auVar7 * auVar16,8));
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = XXH3_kSecret._8_8_ - param_3 ^ *(ulonglong *)((longlong)param_1 + 8);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = XXH3_kSecret._0_8_ + param_3 ^ *(ulonglong *)param_1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = XXH3_kSecret._24_8_ - param_3 ^
                     *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      auVar18._8_8_ = 0;
      auVar18._0_8_ =
           XXH3_kSecret._16_8_ + param_3 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
      uVar21 = lVar22 + (SUB168(auVar9 * auVar18,0) ^ SUB168(auVar9 * auVar18,8)) +
               (SUB168(auVar8 * auVar17,0) ^ SUB168(auVar8 * auVar17,8));
      uVar21 = (uVar21 >> 0x25 ^ uVar21) * 0x165667919e3779f9;
      return uVar21 >> 0x20 ^ uVar21;
    }
    if (0xf0 < param_2) {
      uVar19 = XXH3_hashLong_64b_withSeed(param_1,param_2,param_3,XXH3_kSecret,0xc0);
      return uVar19;
    }
    uVar19 = XXH3_len_129to240_64b(param_1,param_2,XXH3_kSecret,0xc0,param_3);
    return uVar19;
  }
  if (8 < param_2) {
    uVar23 = (XXH3_kSecret._32_8_ ^ XXH3_kSecret._24_8_) + param_3 ^ *(ulonglong *)param_1;
    uVar21 = (XXH3_kSecret._48_8_ ^ XXH3_kSecret._40_8_) - param_3 ^
             *(ulonglong *)((longlong)param_1 + (param_2 - 8));
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar21;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar23;
    uVar21 = (SUB168(auVar1 * auVar10,0) ^ SUB168(auVar1 * auVar10,8)) +
             uVar21 + (uVar23 >> 0x38 | (uVar23 & 0xff000000000000) >> 0x28 |
                       (uVar23 & 0xff0000000000) >> 0x18 | (uVar23 & 0xff00000000) >> 8 |
                       (uVar23 & 0xff000000) << 8 | (uVar23 & 0xff0000) << 0x18 |
                       (uVar23 & 0xff00) << 0x28 | uVar23 << 0x38) + param_2;
    uVar21 = (uVar21 >> 0x25 ^ uVar21) * 0x165667919e3779f9;
    return uVar21 >> 0x20 ^ uVar21;
  }
  if (param_2 < 4) {
    if (param_2 == 0) {
      uVar21 = XXH3_kSecret._64_8_ ^ XXH3_kSecret._56_8_ ^ param_3;
      uVar21 = (uVar21 >> 0x21 ^ uVar21) * -0x3d4d51c2d82b14b1;
      uVar21 = (uVar21 >> 0x1d ^ uVar21) * 0x165667b19e3779f9;
      return uVar21 >> 0x20 ^ uVar21;
    }
    uVar21 = (uint)(XXH3_kSecret._4_4_ ^ XXH3_kSecret._0_4_) + param_3;
    uVar21 = (uVar21 >> 0x21 ^
             ((ulonglong)
              (((uint)CONCAT11(*(undefined1 *)((param_2 >> 1) + (longlong)param_1),
                               *(undefined1 *)param_1) << 8 | (uint)param_2) << 8) |
             (ulonglong)*(byte *)((longlong)param_1 + (param_2 - 1))) ^ uVar21) *
             -0x3d4d51c2d82b14b1;
    uVar21 = (uVar21 >> 0x1d ^ uVar21) * 0x165667b19e3779f9;
    return uVar21 >> 0x20 ^ uVar21;
  }
  uVar20 = (uint)param_3;
  uVar21 = (XXH3_kSecret._16_8_ ^ XXH3_kSecret._8_8_) -
           ((ulonglong)
            (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18) <<
            0x20 ^ param_3) ^
           CONCAT44(*(undefined4 *)param_1,*(undefined4 *)((longlong)param_1 + (param_2 - 4)));
  uVar21 = ((uVar21 << 0x31 | uVar21 >> 0xf) ^ (uVar21 << 0x18 | uVar21 >> 0x28) ^ uVar21) *
           -0x604de39ae16720db;
  uVar21 = ((uVar21 >> 0x23) + param_2 ^ uVar21) * -0x604de39ae16720db;
  return uVar21 >> 0x1c ^ uVar21;
}

// XXH_writeLE64 @ 141722080

void __cdecl XXH_writeLE64(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// `dynamic_atexit_destructor_for_'AutoDestroySingleton'' @ 15033d200

void __cdecl
`FPlatformFileManager::GetPlatformFile'::__l5::
_dynamic_atexit_destructor_for__AutoDestroySingleton__(void)

{
  if (AutoDestroySingleton.Ptr != (IPlatformFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033d214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*AutoDestroySingleton.Ptr)(AutoDestroySingleton.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AutoDestroySingleton'' @ 15033d220

void __cdecl
`FPlatformFileManager::GetPlatformFile'::__l9::
_dynamic_atexit_destructor_for__AutoDestroySingleton__(void)

{
  if (AutoDestroySingleton.Ptr != (IPlatformFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033d234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*AutoDestroySingleton.Ptr)(AutoDestroySingleton.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AutoDestroySingleton'' @ 15033d240

void __cdecl
`FPlatformFileManager::GetPlatformFile'::__l13::
_dynamic_atexit_destructor_for__AutoDestroySingleton__(void)

{
  if (AutoDestroySingleton.Ptr != (IPlatformFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033d254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*AutoDestroySingleton.Ptr)(AutoDestroySingleton.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDoPooledThreadWaitTimeouts'' @ 15033d260

void __cdecl _dynamic_atexit_destructor_for__CVarDoPooledThreadWaitTimeouts__(void)

{
  CVarDoPooledThreadWaitTimeouts._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDoPooledThreadWaitTimeouts);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFastDecimalFormatLargeFloatSupport'' @ 15033d280

void __cdecl
FastDecimalFormat::Internal::
_dynamic_atexit_destructor_for__CVarFastDecimalFormatLargeFloatSupport__(void)

{
  CVarFastDecimalFormatLargeFloatSupport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFastDecimalFormatLargeFloatSupport);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHangulTextWrappingMethod'' @ 15033d2a0

void __cdecl _dynamic_atexit_destructor_for__CVarHangulTextWrappingMethod__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHangulTextWrappingMethod);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIndicateIfNearlyInteger'' @ 15033d2c0

void __cdecl
FastDecimalFormat::Internal::_dynamic_atexit_destructor_for__CVarIndicateIfNearlyInteger__(void)

{
  CVarIndicateIfNearlyInteger._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIndicateIfNearlyInteger);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMiMallocMemoryResetDelay'' @ 15033d2e0

void __cdecl _dynamic_atexit_destructor_for__CVarMiMallocMemoryResetDelay__(void)

{
  CVarMiMallocMemoryResetDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMiMallocMemoryResetDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSpanishUsesMinTwoGrouping'' @ 15033d300

void __cdecl _dynamic_atexit_destructor_for__CVarSpanishUsesMinTwoGrouping__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSpanishUsesMinTwoGrouping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSpanishUsesRAENumberFormat'' @ 15033d320

void __cdecl _dynamic_atexit_destructor_for__CVarSpanishUsesRAENumberFormat__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSpanishUsesRAENumberFormat);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseLocaleSpecificDigitCharacters'' @ 15033d340

void __cdecl _dynamic_atexit_destructor_for__CVarUseLocaleSpecificDigitCharacters__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseLocaleSpecificDigitCharacters);
  return;
}

// `dynamic_atexit_destructor_for_'CachedCharacterBoundaryIterator'' @ 15033d360

void __cdecl
`FBreakIterator::GetCharacterBoundaryIterator'::__l2::
_dynamic_atexit_destructor_for__CachedCharacterBoundaryIterator__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xa18));
  return;
}

// `dynamic_atexit_destructor_for_'CachedLineBreakIterator'' @ 15033d390

void __cdecl
`FBreakIterator::GetLineBreakIterator'::__l2::
_dynamic_atexit_destructor_for__CachedLineBreakIterator__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xa30));
  return;
}

// `dynamic_atexit_destructor_for_'CachedWordBreakIterator'' @ 15033d3c0

void __cdecl
`FBreakIterator::GetWordBreakIterator'::__l2::
_dynamic_atexit_destructor_for__CachedWordBreakIterator__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xa48));
  return;
}

// `dynamic_atexit_destructor_for_'CanonizedTagMap'' @ 15033d3f0

void __cdecl
`InternationalizationUtilities::GetCanonicalCultureName'::__l2::
_dynamic_atexit_destructor_for__CanonizedTagMap__(void)

{
  DestructItems<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>,int>
            ((TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
              *)CanonizedTagMap.Pairs.AllocatorInstance.Data,CanonizedTagMap.Pairs.ArrayNum);
  if (CanonizedTagMap.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(CanonizedTagMap.Pairs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CultureAgnosticFormattingRules'' @ 15033d430

void __cdecl
`FastDecimalFormat::GetCultureAgnosticFormattingRules'::__l2::
_dynamic_atexit_destructor_for__CultureAgnosticFormattingRules__(void)

{
  if (CultureAgnosticFormattingRules.MinusString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureAgnosticFormattingRules.MinusString.Data.AllocatorInstance.Data);
  }
  if (CultureAgnosticFormattingRules.PlusString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureAgnosticFormattingRules.PlusString.Data.AllocatorInstance.Data);
  }
  if (CultureAgnosticFormattingRules.PositiveSuffixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureAgnosticFormattingRules.PositiveSuffixString.Data.AllocatorInstance.Data);
  }
  if (CultureAgnosticFormattingRules.PositivePrefixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureAgnosticFormattingRules.PositivePrefixString.Data.AllocatorInstance.Data);
  }
  if (CultureAgnosticFormattingRules.NegativeSuffixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureAgnosticFormattingRules.NegativeSuffixString.Data.AllocatorInstance.Data);
  }
  if (CultureAgnosticFormattingRules.NegativePrefixString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureAgnosticFormattingRules.NegativePrefixString.Data.AllocatorInstance.Data);
  }
  if (CultureAgnosticFormattingRules.NaNString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureAgnosticFormattingRules.NaNString.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CultureDisplayNameSubstitutes'' @ 15033d4c0

void __cdecl
`ApplyCultureDisplayNameSubstitutes'::__l2::
_dynamic_atexit_destructor_for__CultureDisplayNameSubstitutes__(void)

{
  DestructItems<_ApplyCultureDisplayNameSubstitutes_::__l2::FDisplayNameSubstitute,int>
            ((FDisplayNameSubstitute *)CultureDisplayNameSubstitutes.AllocatorInstance.Data,
             CultureDisplayNameSubstitutes.ArrayNum);
  if (CultureDisplayNameSubstitutes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(CultureDisplayNameSubstitutes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EnglishCultureName'' @ 15033d500

void __cdecl
`FCulture::RefreshCultureDisplayNames'::__l6::_dynamic_atexit_destructor_for__EnglishCultureName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EnglishCultureName.Data.AllocatorInstance.Data;
  if (EnglishCultureName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EnglishCultureName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FMallocBinnedTestCommand'' @ 15033d520

void __cdecl _dynamic_atexit_destructor_for__FMallocBinnedTestCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FMallocBinnedTestCommand);
  return;
}

// `dynamic_atexit_destructor_for_'FMallocUsePoisonCommand'' @ 15033d540

void __cdecl _dynamic_atexit_destructor_for__FMallocUsePoisonCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FMallocUsePoisonCommand);
  return;
}

// `dynamic_atexit_destructor_for_'FMallocUsePurgatoryCommand'' @ 15033d560

void __cdecl _dynamic_atexit_destructor_for__FMallocUsePurgatoryCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FMallocUsePurgatoryCommand);
  return;
}

// `dynamic_atexit_destructor_for_'FewStr'' @ 15033d580

void __cdecl `ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__FewStr__(void)

{
  icu_64::UnicodeString::~UnicodeString(&FewStr);
  return;
}

// `dynamic_atexit_destructor_for_'GAudioPipe'' @ 15033d5a0

void __cdecl _dynamic_atexit_destructor_for__GAudioPipe__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GAudioPipe.TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GAudioPipe.EmptyEventRef.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GameThreadName'' @ 15033d5f0

void __cdecl
`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__GameThreadName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
               ::__l2::GameThreadName.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
      ::__l2::GameThreadName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
      ::__l2::GameThreadName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Helper'' @ 15033d610

void __cdecl
`FGameThreadHitchHeartBeatThreaded::Get'::__l2::_dynamic_atexit_destructor_for__Helper__(void)

{
  FGameThreadHitchHeartBeatThreaded::Singleton = (FGameThreadHitchHeartBeatThreaded *)0x0;
  if (Helper.Instance != (FGameThreadHitchHeartBeatThreaded *)0x0) {
    (**(code **)((Helper.Instance)->_padding_ + 0x28))(Helper.Instance,1);
  }
  Helper.Instance = (FGameThreadHitchHeartBeatThreaded *)0x0;
  return;
}

// `dynamic_atexit_destructor_for_'Helper'' @ 15033d650

void __cdecl `FThreadHeartBeat::Get'::__l2::_dynamic_atexit_destructor_for__Helper__(void)

{
  FThreadHeartBeat::Singleton = (FThreadHeartBeat *)0x0;
  if (Helper.Instance != (FThreadHeartBeat *)0x0) {
    (**(code **)((Helper.Instance)->_padding_ + 0x28))(Helper.Instance,1);
  }
  Helper.Instance = (FThreadHeartBeat *)0x0;
  return;
}

// `dynamic_atexit_destructor_for_'InvariantLocale'' @ 15033d690

void __cdecl
``anonymous_namespace'::GetInvariantLocale'::__l2::_dynamic_atexit_destructor_for__InvariantLocale__
          (void)

{
  icu_64::Locale::~Locale(&`GetInvariantLocale'::`2'::InvariantLocale);
  return;
}

// `dynamic_atexit_destructor_for_'KeysCultureName'' @ 15033d6b0

void __cdecl
`FKeysCulture::StaticGetName'::__l2::_dynamic_atexit_destructor_for__KeysCultureName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = KeysCultureName.Data.AllocatorInstance.Data;
  if (KeysCultureName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (KeysCultureName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LeakedPointers'' @ 15033d6d0

void __cdecl `FMemory::TestMemory'::__l2::_dynamic_atexit_destructor_for__LeakedPointers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LeakedPointers.AllocatorInstance.Data;
  if (LeakedPointers.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LeakedPointers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LeetCultureName'' @ 15033d6f0

void __cdecl
`FLeetCulture::StaticGetName'::__l2::_dynamic_atexit_destructor_for__LeetCultureName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LeetCultureName.Data.AllocatorInstance.Data;
  if (LeetCultureName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LeetCultureName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogGatherArchiveObject'' @ 15033d710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGatherArchiveObject__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGatherArchiveObject);
  return;
}

// `dynamic_atexit_destructor_for_'LogICUInternationalization'' @ 15033d730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogICUInternationalization__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogICUInternationalization);
  return;
}

// `dynamic_atexit_destructor_for_'LogInternationalizationManifestObject'' @ 15033d750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInternationalizationManifestObject__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInternationalizationManifestObject);
  return;
}

// `dynamic_atexit_destructor_for_'LogInternationalizationMetadata'' @ 15033d770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInternationalizationMetadata__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInternationalizationMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'LogMallocFrameProfiler'' @ 15033d790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMallocFrameProfiler__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMallocFrameProfiler);
  return;
}

// `dynamic_atexit_destructor_for_'MallocStompTestCommand'' @ 15033d7b0

void __cdecl _dynamic_atexit_destructor_for__MallocStompTestCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&MallocStompTestCommand);
  return;
}

// `dynamic_atexit_destructor_for_'ManyStr'' @ 15033d7d0

void __cdecl `ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__ManyStr__(void)

{
  icu_64::UnicodeString::~UnicodeString(&ManyStr);
  return;
}

// `dynamic_atexit_destructor_for_'NoThreadName'' @ 15033d7f0

void __cdecl
`FThreadManager::GetThreadNameInternal'::__l2::_dynamic_atexit_destructor_for__NoThreadName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NoThreadName.Data.AllocatorInstance.Data;
  if (NoThreadName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NoThreadName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OneStr'' @ 15033d810

void __cdecl `ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__OneStr__(void)

{
  icu_64::UnicodeString::~UnicodeString(&OneStr);
  return;
}

// `dynamic_atexit_destructor_for_'OtherStr'' @ 15033d830

void __cdecl `ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__OtherStr__(void)

{
  icu_64::UnicodeString::~UnicodeString(&OtherStr);
  return;
}

// `dynamic_atexit_destructor_for_'RenderThreadName'' @ 15033d850

void __cdecl
`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__RenderThreadName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
               ::__l2::RenderThreadName.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
      ::__l2::RenderThreadName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
      ::__l2::RenderThreadName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033d870

void __cdecl `FThreadManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnParentPreFork,
             &::Singleton);
  ::Singleton.Threads._6736_4_ = 0;
  if (::Singleton.Threads._6728_8_ != 0) {
    FMemory::Free((void *)::Singleton.Threads._6728_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&::Singleton.Threads);
                    /* WARNING: Could not recover jumptable at 0x00015033d8b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033d8d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
`TLazySingleton<FInternationalization>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  TLazySingleton<FInternationalization>::Reset
            ((TLazySingleton<FInternationalization> *)
             &`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'TlsInstances'' @ 15033d8f0

void __cdecl `FTlsAutoCleanup::Register'::__l2::_dynamic_atexit_destructor_for__TlsInstances__(void)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar3 = (undefined8 *)(lVar1 + 0x9e0);
  DestructItems<TUniquePtr<FTlsAutoCleanup,TDefaultDelete<FTlsAutoCleanup>_>,int>
            ((TUniquePtr<FTlsAutoCleanup,TDefaultDelete<FTlsAutoCleanup>_> *)*puVar3,
             *(int *)(lVar1 + 0x9e8));
  pvVar2 = (void *)*puVar3;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TwoStr'' @ 15033d940

void __cdecl `ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__TwoStr__(void)

{
  icu_64::UnicodeString::~UnicodeString(&TwoStr);
  return;
}

// `dynamic_atexit_destructor_for_'ValidKeywords'' @ 15033d960

void __cdecl
``InternationalizationUtilities::GetCanonicalCultureName'::__l2::<lambda_8>::operator()'::__l2::
_dynamic_atexit_destructor_for__ValidKeywords__(void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &::_TSS0;
  lVar2 = 4;
  do {
    piVar1 = piVar3 + -4;
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'VariantMap'' @ 15033d9b0

void __cdecl
`InternationalizationUtilities::GetCanonicalCultureName'::__l2::
_dynamic_atexit_destructor_for__VariantMap__(void)

{
  DestructItems<TTuple<FString,_InternationalizationUtilities::GetCanonicalCultureName_::__l2::FCanonizedTagData>,int>
            ((TTuple<FString,,FString___cdecl_InternationalizationUtilities::GetCanonicalCultureName(FString_const_&,FString_const_&,FInternationalization_&)_::_2_::FCanonizedTagData>
              *)VariantMap.Pairs.AllocatorInstance.Data,VariantMap.Pairs.ArrayNum);
  if (VariantMap.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(VariantMap.Pairs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WhatHaveWeHere'' @ 15033d9f0

void __cdecl
`FMallocDoubleFreeFinder::TrackSpecial'::__l2::_dynamic_atexit_destructor_for__WhatHaveWeHere__
          (void)

{
  WhatHaveWeHere.Size = 0;
  WhatHaveWeHere.CallStackIndex = -1;
  return;
}

// `dynamic_atexit_destructor_for_'WhatHaveWeHere'' @ 15033da10

void __cdecl
`FMallocDoubleFreeFinder::TrackFree'::__l5::_dynamic_atexit_destructor_for__WhatHaveWeHere__(void)

{
  WhatHaveWeHere.Size = 0;
  WhatHaveWeHere.CallStackIndex = -1;
  return;
}

// `dynamic_atexit_destructor_for_'ZeroStr'' @ 15033da30

void __cdecl `ICUPluralFormToUE'::__l2::_dynamic_atexit_destructor_for__ZeroStr__(void)

{
  icu_64::UnicodeString::~UnicodeString(&ZeroStr);
  return;
}

// operator() @ 15047a4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall ``anonymous_namespace'::CreateCollator'::__l3::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444582>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x28);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444582>,
                       &``CreateCollator'::`3'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047a56c;
    }
  }
  bVar2 = false;
LAB_15047a56c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall ``anonymous_namespace'::CreateDateFormat'::__l3::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444571>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x28);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444571>,
                       &``CreateDateFormat'::`3'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047a66c;
    }
  }
  bVar2 = false;
LAB_15047a66c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047a6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``anonymous_namespace'::CreateDateTimeFormat'::__l3::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444545>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x28);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444545>,
                       &``CreateDateTimeFormat'::`3'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047a76c;
    }
  }
  bVar2 = false;
LAB_15047a76c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047a7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall ``anonymous_namespace'::CreateTimeFormat'::__l3::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444558>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x28);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444558>,
                       &``CreateTimeFormat'::`3'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047a86c;
    }
  }
  bVar2 = false;
LAB_15047a86c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047a8c0

bool __thiscall `IsInActualRenderingThread'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7867358571250319625>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7867358571250319625>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15047a940

bool __thiscall
``anonymous_namespace'::CreateBreakIterator'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444613>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444613>,
                       &``CreateBreakIterator'::`4'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047a980

bool __thiscall `IsInRenderingThread'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7867358571250319645>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7867358571250319645>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15047aa10

bool __thiscall `IsInSlateThread'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7867358571250319591>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7867358571250319591>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15047adf0

bool __thiscall `IsInGameThread'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7867358571250319556>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7867358571250319556>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15047ae70

bool __thiscall `IsInParallelRenderingThread'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7867358571250319682>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7867358571250319682>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15047af00

bool __thiscall
`FastDecimalFormat::Internal::CultureInvariantDecimalToString'::__l29::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3412458744825512393>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3412458744825512393>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15047b390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``anonymous_namespace'::CreateBreakIterator'::__l5::<lambda_2>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444594>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x28);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444594>,
                       &``CreateBreakIterator'::`5'::<lambda_2>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047b43c;
    }
  }
  bVar2 = false;
LAB_15047b43c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

