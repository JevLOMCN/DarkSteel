// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 49

// `dynamic_initializer_for_'HighlightRecorder'' @ 141169440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__HighlightRecorder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&HighlightRecorder,L"HighlightRecorder",Log,All);
  atexit(_dynamic_atexit_destructor_for__HighlightRecorder__);
  return;
}

// `dynamic_initializer_for_'HighlightRecorderPause'' @ 141169480

void __cdecl _dynamic_initializer_for__HighlightRecorderPause__(void)

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
    puVar1[3] = FHighlightRecorder::PauseCmd;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&HighlightRecorderPause,L"HighlightRecorder.Pause",
             L"Pauses recording of highlight clip",
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
  atexit(_dynamic_atexit_destructor_for__HighlightRecorderPause__);
  return;
}

// `dynamic_initializer_for_'HighlightRecorderResume'' @ 1411695c0

void __cdecl _dynamic_initializer_for__HighlightRecorderResume__(void)

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
    puVar1[3] = FHighlightRecorder::ResumeCmd;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&HighlightRecorderResume,L"HighlightRecorder.Resume",
             L"Resumes recording of highlight clip",
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
  atexit(_dynamic_atexit_destructor_for__HighlightRecorderResume__);
  return;
}

// `dynamic_initializer_for_'HighlightRecorderSave'' @ 141169700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__HighlightRecorderSave__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FHighlightRecorder::SaveCmd;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&HighlightRecorderSave,L"HighlightRecorder.Save",
             L"Saves highlight clip, optional parameters: filename (\"test.mp4\" by default) and max duration (float, secs, duration of ring buffer by default)"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__HighlightRecorderSave__);
  return;
}

// `dynamic_initializer_for_'HighlightRecorderStart'' @ 141169840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__HighlightRecorderStart__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = FHighlightRecorder::Start;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&HighlightRecorderStart,L"HighlightRecorder.Start",
             L"Starts recording of highlight clip, optional parameter: max duration (float, 30 seconds by default)"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__HighlightRecorderStart__);
  return;
}

// `dynamic_initializer_for_'HighlightRecorderStop'' @ 141169980

void __cdecl _dynamic_initializer_for__HighlightRecorderStop__(void)

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
    puVar1[3] = FHighlightRecorder::StopCmd;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&HighlightRecorderStop,L"HighlightRecorder.Stop",L"Stops recording of highlight clip",
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
  atexit(_dynamic_atexit_destructor_for__HighlightRecorderStop__);
  return;
}

// `dynamic_initializer_for_'MP4'' @ 141169ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__MP4__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&MP4,L"MP4",Log,All);
  atexit(_dynamic_atexit_destructor_for__MP4__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWindowsPlatformFeatures'' @ 141169b00

void __cdecl _dynamic_initializer_for__ModuleRegistrantWindowsPlatformFeatures__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WindowsPlatformFeatures";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WindowsPlatformFeatures",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FWindowsPlatformFeaturesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VideoRecordingSystem_EnableRecording'' @ 141169b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VideoRecordingSystem_EnableRecording__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VideoRecordingSystem_EnableRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_EnableRecording>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VideoRecordingSystem_EnableRecording");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VideoRecordingSystem_EnableRecording,
               *pFVar1,L"EnableRecording","STATGROUP_VideoRecordingSystem","STATCAT_Advanced",
               L"VideoRecordingSystem",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VideoRecordingSystem_FinalizeRecording'' @ 141169be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VideoRecordingSystem_FinalizeRecording__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VideoRecordingSystem_FinalizeRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_FinalizeRecording>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VideoRecordingSystem_FinalizeRecording");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VideoRecordingSystem_FinalizeRecording,
               *pFVar1,L"FinalizeRecording","STATGROUP_VideoRecordingSystem","STATCAT_Advanced",
               L"VideoRecordingSystem",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VideoRecordingSystem_NewRecording'' @ 141169c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VideoRecordingSystem_NewRecording__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VideoRecordingSystem_NewRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_NewRecording>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VideoRecordingSystem_NewRecording");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VideoRecordingSystem_NewRecording,*pFVar1,
               L"NewRecording","STATGROUP_VideoRecordingSystem","STATCAT_Advanced",
               L"VideoRecordingSystem",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VideoRecordingSystem_PauseRecording'' @ 141169d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VideoRecordingSystem_PauseRecording__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VideoRecordingSystem_PauseRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_PauseRecording>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VideoRecordingSystem_PauseRecording");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VideoRecordingSystem_PauseRecording,
               *pFVar1,L"PauseRecording","STATGROUP_VideoRecordingSystem","STATCAT_Advanced",
               L"VideoRecordingSystem",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VideoRecordingSystem_StartRecording'' @ 141169d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VideoRecordingSystem_StartRecording__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VideoRecordingSystem_StartRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_StartRecording>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VideoRecordingSystem_StartRecording");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VideoRecordingSystem_StartRecording,
               *pFVar1,L"StartRecording","STATGROUP_VideoRecordingSystem","STATCAT_Advanced",
               L"VideoRecordingSystem",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'WMF'' @ 141169e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__WMF__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&WMF,L"WMF",Log,All);
  atexit(_dynamic_atexit_destructor_for__WMF__);
  return;
}

// `dynamic_initializer_for_'WindowsVideoRecordingSystem'' @ 141169e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__WindowsVideoRecordingSystem__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&WindowsVideoRecordingSystem,L"WindowsVideoRecordingSystem",All,All
            );
  atexit(_dynamic_atexit_destructor_for__WindowsVideoRecordingSystem__);
  return;
}

// `dynamic_initializer_for_'WmfRingBuffer'' @ 141169ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__WmfRingBuffer__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&WmfRingBuffer,L"WmfRingBuffer",Log,All);
  atexit(_dynamic_atexit_destructor_for__WmfRingBuffer__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_WindowsVideoRecordingSystem'' @ 141169ee0

void __cdecl _dynamic_initializer_for___GCsvCategory_WindowsVideoRecordingSystem__(void)

{
  FString::operator=(&_GCsvCategory_WindowsVideoRecordingSystem.Name,L"WindowsVideoRecordingSystem")
  ;
  _GCsvCategory_WindowsVideoRecordingSystem.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_WindowsVideoRecordingSystem.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_WindowsVideoRecordingSystem__);
  return;
}

// `scalar_deleting_destructor' @ 148d24a70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AX_NAEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ConstructItems<AVEncoder::FMediaPacket,AVEncoder::FMediaPacket,int> @ 148d24ae0

void __cdecl
ConstructItems<AVEncoder::FMediaPacket,AVEncoder::FMediaPacket,int>
          (void *param_1,FMediaPacket *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  undefined4 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  long64 lVar4;
  FTimespan *pFVar5;
  long64 *plVar6;
  
  if (param_3 != 0) {
    pFVar5 = &param_2->Timestamp;
    plVar6 = (long64 *)((longlong)param_1 + 8);
    do {
      pFVar1 = (ForAnyElementType *)(plVar6 + 2);
      *(EPacketType *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pFVar5) =
           ((FMediaPacket *)(pFVar5 + -1))->Type;
      *plVar6 = pFVar5->Ticks;
      plVar6[1] = pFVar5[1].Ticks;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(pFVar5 + 3);
      _Src = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar5 + 2))->AllocatorInstance
             ).Data;
      *(int *)(plVar6 + 3) = iVar3;
      if (iVar3 == 0) {
        *(int *)((longlong)plVar6 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,0,pFVar1,iVar3,(int *)((longlong)plVar6 + 0x1c));
        memcpy(pFVar1->Data,_Src,(longlong)iVar3);
      }
      lVar4 = pFVar5[5].Ticks;
      plVar6[4] = *(long64 *)(pFVar5 + 4);
      plVar6[5] = lVar4;
      puVar2 = (undefined4 *)(pFVar5 + 6);
      pFVar5 = pFVar5 + 8;
      *(undefined4 *)(plVar6 + 6) = *puVar2;
      plVar6 = plVar6 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<AVEncoder::FMediaPacket,int> @ 148d24bf0

void __cdecl DestructItems<AVEncoder::FMediaPacket,int>(FMediaPacket *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Data;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_FHighlightRecorder::EState>_> @ 148d24c30

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_FHighlightRecorder::EState>_>
          (_Atomic_padded<FHighlightRecorder::EState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_EVideoRecordingState>_> @ 148d24c40

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_EVideoRecordingState>_>
          (_Atomic_padded<EVideoRecordingState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<enum_FHighlightRecorder::EState>_> @ 148d24c50

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<enum_FHighlightRecorder::EState>_>
          (_Atomic_padded<FHighlightRecorder::EState> *param_1)

{
  return (long *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<enum_EVideoRecordingState>_> @ 148d24c60

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<enum_EVideoRecordingState>_>
          (_Atomic_padded<EVideoRecordingState> *param_1)

{
  return (long *)param_1;
}

// _Atomic_reinterpret_as<long,enum_FHighlightRecorder::EState> @ 148d24c70

long __cdecl std::_Atomic_reinterpret_as<long,enum_FHighlightRecorder::EState>(EState *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<long,enum_EVideoRecordingState> @ 148d24c80

long __cdecl
std::_Atomic_reinterpret_as<long,enum_EVideoRecordingState>(EVideoRecordingState *param_1)

{
  return *param_1;
}

// ~TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,0,0> @ 148d24f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FWindowsVideoRecordingSystem::FinalizeRecording_::__l47::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::`47'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,1,1> @ 148d24fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FHighlightRecorder::SaveHighlight_::__l66::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::`66'::<lambda_1>,1,1>::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `scalar_deleting_destructor' @ 148d25500

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWindowsVideoRecordingSystem,void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d25550

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,bool,bool,FString,bool>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Payload).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d255a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::`47'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d255e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::`66'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d25630

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWindowsVideoRecordingSystem,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWindowsVideoRecordingSystem,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d25670

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FHighlightRecorder::_scalar_deleting_destructor_(FHighlightRecorder *this,uint param_1)

{
  longlong *plVar1;
  FThread *this_00;
  FScriptContainerElement *pFVar2;
  FWmfMp4Writer *pFVar3;
  IMFSinkWriter *pIVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FHighlightRecorder__6B_;
  Stop(this);
  if (4 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
  }
  if (*(longlong *)&this->DoneCallback != 0) {
    plVar1 = *(longlong **)&(this->DoneCallback).field_0x28;
    plVar5 = (longlong *)&(this->DoneCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  this_00 = (this->BackgroundSaving).Ptr;
  if (this_00 != (FThread *)0x0) {
    ::FThread::~FThread(this_00);
    ::operator_delete(this_00,0x10);
  }
  DestructItems<AVEncoder::FMediaPacket,int>
            ((FMediaPacket *)(this->RingBuffer).Samples.AllocatorInstance.Data,
             (this->RingBuffer).Samples.ArrayNum);
  pFVar2 = (this->RingBuffer).Samples.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->RingBuffer).Mutex);
  pFVar3 = (this->Mp4Writer).Ptr;
  if (pFVar3 != (FWmfMp4Writer *)0x0) {
    pIVar4 = (pFVar3->Writer).Reference;
    if (pIVar4 != (IMFSinkWriter *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    ::operator_delete(pFVar3,8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d25770

void * __thiscall
FWindowsPlatformFeaturesModule::_scalar_deleting_destructor_
          (FWindowsPlatformFeaturesModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VideoRecordingSystem).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d257c0

void * __thiscall
FWindowsVideoRecordingSystem::_scalar_deleting_destructor_
          (FWindowsVideoRecordingSystem *this,uint param_1)

{
  ~FWindowsVideoRecordingSystem(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// GetComErrorDescription @ 148d272b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetComErrorDescription(FString *__return_storage_ptr__,DWORD param_1)

{
  DWORD DVar1;
  wchar_t *pwVar2;
  undefined1 auStackY_2058 [32];
  WCHAR local_2018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x148d272bc;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2058;
  DVar1 = FormatMessageW(0x1000,(LPCVOID)0x0,param_1,0,local_2018,0x1000,(va_list *)0x0);
  pwVar2 = local_2018;
  if (DVar1 == 0) {
    pwVar2 = L"[cannot find error description]";
  }
  FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_WindowsPlatformFeatures @ 148d2b130

void __cdecl IMPLEMENT_MODULE_WindowsPlatformFeatures(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'HighlightRecorder'' @ 15040c2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__HighlightRecorder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&HighlightRecorder);
  return;
}

// `dynamic_atexit_destructor_for_'HighlightRecorderPause'' @ 15040c2f0

void __cdecl _dynamic_atexit_destructor_for__HighlightRecorderPause__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&HighlightRecorderPause);
  return;
}

// `dynamic_atexit_destructor_for_'HighlightRecorderResume'' @ 15040c310

void __cdecl _dynamic_atexit_destructor_for__HighlightRecorderResume__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&HighlightRecorderResume);
  return;
}

// `dynamic_atexit_destructor_for_'HighlightRecorderSave'' @ 15040c330

void __cdecl _dynamic_atexit_destructor_for__HighlightRecorderSave__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&HighlightRecorderSave);
  return;
}

// `dynamic_atexit_destructor_for_'HighlightRecorderStart'' @ 15040c350

void __cdecl _dynamic_atexit_destructor_for__HighlightRecorderStart__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&HighlightRecorderStart);
  return;
}

// `dynamic_atexit_destructor_for_'HighlightRecorderStop'' @ 15040c370

void __cdecl _dynamic_atexit_destructor_for__HighlightRecorderStop__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&HighlightRecorderStop);
  return;
}

// `dynamic_atexit_destructor_for_'MP4'' @ 15040c390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__MP4__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&MP4);
  return;
}

// `dynamic_atexit_destructor_for_'WMF'' @ 15040c3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__WMF__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&WMF);
  return;
}

// `dynamic_atexit_destructor_for_'WindowsVideoRecordingSystem'' @ 15040c3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__WindowsVideoRecordingSystem__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&WindowsVideoRecordingSystem);
  return;
}

// `dynamic_atexit_destructor_for_'WmfRingBuffer'' @ 15040c3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__WmfRingBuffer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&WmfRingBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_WindowsVideoRecordingSystem'' @ 15040c410

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_WindowsVideoRecordingSystem__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_WindowsVideoRecordingSystem.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_WindowsVideoRecordingSystem.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_WindowsVideoRecordingSystem.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

