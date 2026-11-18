// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 724

// ApplyToClientPollingOperation'' @ 1413c4ab0

void __cdecl `dynamic_initializer_for_'ULiveLinkPreset::ApplyToClientPollingOperation__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ULiveLinkPreset::ApplyToClientPollingOperation__);
  return;
}

// FeatureName'' @ 1413c4ad0

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// `dynamic_initializer_for_'ALL_SUBJECTS_DELEGATE_TOKEN'' @ 1413c4af0

void __cdecl UE::LiveLink::Private::_dynamic_initializer_for__ALL_SUBJECTS_DELEGATE_TOKEN__(void)

{
  ::FName::FName(&ALL_SUBJECTS_DELEGATE_TOKEN,"__Internal_AllSubjects_Update");
  return;
}

// `dynamic_initializer_for_'BackgroundColorSource'' @ 1413c4b10

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__BackgroundColorSource__(void)

{
  BackgroundColorSource.field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[0x3e];
  BackgroundColorSource.field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[0x3e];
  BackgroundColorSource.field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[0x3e];
  return;
}

// `dynamic_initializer_for_'BackgroundColorSubject'' @ 1413c4b40

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__BackgroundColorSubject__(void)

{
  BackgroundColorSubject.field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[0x3e];
  BackgroundColorSubject.field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[0x3e];
  BackgroundColorSubject.field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[0x3e];
  return;
}

// `dynamic_initializer_for_'CLiveLinkLogDisableMessage'' @ 1413c4b70

void __cdecl LiveLinkLogDetail::_dynamic_initializer_for__CLiveLinkLogDisableMessage__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CLiveLinkLogDisableMessage,L"LiveLink.Log.DisableMessage",
             L"Disable a LiveLink Message ID.Use: \"LiveLink.Log.DisableMessage MessageID\"",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CLiveLinkLogDisableMessage__);
  return;
}

// `dynamic_initializer_for_'CLiveLinkLogEnableMessage'' @ 1413c4ca0

void __cdecl LiveLinkLogDetail::_dynamic_initializer_for__CLiveLinkLogEnableMessage__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CLiveLinkLogEnableMessage,L"LiveLink.Log.EnableMessage",
             L"Enable a LiveLink Message ID that was previously disabled.Use: \"LiveLink.Log.EnableMessage MessageID\""
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CLiveLinkLogEnableMessage__);
  return;
}

// `dynamic_initializer_for_'CLiveLinkLogRepeated'' @ 1413c4dd0

void __cdecl LiveLinkLogDetail::_dynamic_initializer_for__CLiveLinkLogRepeated__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CLiveLinkLogRepeated,L"LiveLink.Log.LogRepeated",
             L"Log all messages event if they are not log for the first time.To log: \"LiveLink.Log.LogRepeated\"To set: \"LiveLink.Log.LogRepeated TRUE|FALSE\""
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CLiveLinkLogRepeated__);
  return;
}

// `dynamic_initializer_for_'CLiveLinkLogSilent'' @ 1413c4f00

void __cdecl LiveLinkLogDetail::_dynamic_initializer_for__CLiveLinkLogSilent__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CLiveLinkLogSilent,L"LiveLink.Log.SilentMode",
             L"Silent all log from LiveLink.To silent: \"LiveLink.Log.SilentMode\"To set: \"LiveLink.Log.SilentMode TRUE|FALSE\""
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CLiveLinkLogSilent__);
  return;
}

// `dynamic_initializer_for_'CVarLiveLinkMaxBufferSize'' @ 1413c5030

void __cdecl LiveLinkTimedDataInput::_dynamic_initializer_for__CVarLiveLinkMaxBufferSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 200;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLiveLinkMaxBufferSize,L"LiveLink.TimedDataInput.MaxBufferSize",local_res8,
             L"The max size the timed data input is allowed to set the buffer size.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLiveLinkMaxBufferSize__);
  return;
}

// `dynamic_initializer_for_'CVarLiveLinkMessageBusSourceReconnectAfterTimeout'' @ 1413c5080

void __cdecl _dynamic_initializer_for__CVarLiveLinkMessageBusSourceReconnectAfterTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLiveLinkMessageBusSourceReconnectAfterTimeout,
             L"LiveLink.MessageBus.Source.ReconnectAfterTimeout",
             &GLiveLinkMessageBusSourceReconnectAfterTimeout,
             L"When enabled, when the connection times out, it will try to re-connect instead of removing the source."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLiveLinkMessageBusSourceReconnectAfterTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarLiveLinkMinBufferSize'' @ 1413c50d0

void __cdecl LiveLinkTimedDataInput::_dynamic_initializer_for__CVarLiveLinkMinBufferSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLiveLinkMinBufferSize,L"LiveLink.TimedDataInput.MinBufferSize",local_res8,
             L"The min size the timed data input is allowed to set the buffer size.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLiveLinkMinBufferSize__);
  return;
}

// `dynamic_initializer_for_'CVarLiveLinkNumFramesForSmoothOffset'' @ 1413c5120

void __cdecl
LiveLinkTimedDataInput::_dynamic_initializer_for__CVarLiveLinkNumFramesForSmoothOffset__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarLiveLinkNumFramesForSmoothOffset,
             L"LiveLink.TimedDataInput.NumFramesForSmoothOffset",local_res8,
             L"The fractional number of source frames used an offset to achieve smooth evaluation time."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLiveLinkNumFramesForSmoothOffset__);
  return;
}

// `dynamic_initializer_for_'CVarLiveLinkSupportCompressPayloads'' @ 1413c5170

void __cdecl _dynamic_initializer_for__CVarLiveLinkSupportCompressPayloads__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLiveLinkSupportCompressPayloads,L"LiveLink.SupportCompressPayloads",local_res8,
             L"Whether to add the annotation indicating that we support compressed animation data. Can be set to 0 to simulate that compressed payloads are not supported."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLiveLinkSupportCompressPayloads__);
  return;
}

// `dynamic_initializer_for_'CVarLiveLinkUpdateContinuousClockOffset'' @ 1413c51c0

void __cdecl
LiveLinkTimedDataInput::_dynamic_initializer_for__CVarLiveLinkUpdateContinuousClockOffset__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarLiveLinkUpdateContinuousClockOffset,L"LiveLink.TimedDataInput.UpdateClockOffset",
             local_res8,
             L"By default, clock offset is continuously updated for each source. You can pause it if desired with this cvar and offset will be fixed to its value."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLiveLinkUpdateContinuousClockOffset__);
  return;
}

// `dynamic_initializer_for_'CVarMaxNewFrameDataPerUpdate'' @ 1413c5210

void __cdecl _dynamic_initializer_for__CVarMaxNewFrameDataPerUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x800;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxNewFrameDataPerUpdate,L"LiveLink.Client.MaxNewFrameDataPerUpdate",local_res8,
             L"Maximun number of new frame data that can be added in a single UE frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxNewFrameDataPerUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarMaxNewStaticDataPerUpdate'' @ 1413c5260

void __cdecl _dynamic_initializer_for__CVarMaxNewStaticDataPerUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxNewStaticDataPerUpdate,L"LiveLink.Client.MaxNewStaticDataPerUpdate",local_res8,
             L"Maximun number of new static data that can be added in a single UE frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxNewStaticDataPerUpdate__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LiveLink'' @ 1413c52b0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LiveLink__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_LiveLink,L"LiveLink",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,
             None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LiveLink_LiveLinkClient'' @ 1413c5300

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LiveLink_LiveLinkClient__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_LiveLink_LiveLinkClient,L"LiveLink_LiveLinkClient",(FName)0x0,
             (FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LiveLink_LiveLinkLogInstance'' @ 1413c5350

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LiveLink_LiveLinkLogInstance__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_LiveLink_LiveLinkLogInstance,L"LiveLink_LiveLinkLogInstance",
             (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LiveLink_LiveLinkMessageBusDiscoveryManager'' @ 1413c53a0

void __cdecl
_dynamic_initializer_for__LLMTagDeclaration_LiveLink_LiveLinkMessageBusDiscoveryManager__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_LiveLink_LiveLinkMessageBusDiscoveryManager,
             L"LiveLink_LiveLinkMessageBusDiscoveryManager",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LevelEditorName'' @ 1413c53f0

void __cdecl _dynamic_initializer_for__LevelEditorName__(void)

{
  FName::FName(&LevelEditorName,"LevelEditor");
  return;
}

// `dynamic_initializer_for_'LiveLinkPresetAddCmd'' @ 1413c5410

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__LiveLinkPresetAddCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_29>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&LiveLinkPresetAddCmd,L"LiveLink.Preset.Add",
             L"Add a LiveLinkPreset. Use: LiveLink.Preset.Add Preset=/Game/Folder/MyLiveLinkPreset.MyLiveLinkPreset"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__LiveLinkPresetAddCmd__);
  return;
}

// `dynamic_initializer_for_'LiveLinkPresetApplyCmd'' @ 1413c5540

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__LiveLinkPresetApplyCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&LiveLinkPresetApplyCmd,L"LiveLink.Preset.Apply",
             L"Apply a LiveLinkPreset. Use: LiveLink.Preset.Apply Preset=/Game/Folder/MyLiveLinkPreset.MyLiveLinkPreset"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__LiveLinkPresetApplyCmd__);
  return;
}

// `dynamic_initializer_for_'LogLiveLink'' @ 1413c5670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveLink__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogLiveLink,L"LogLiveLink",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLiveLink__);
  return;
}

// `dynamic_initializer_for_'MachineColumnName'' @ 1413c56b0

void __cdecl ProviderPollUI::_dynamic_initializer_for__MachineColumnName__(void)

{
  ::FName::FName(&MachineColumnName,L"Machine");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLiveLink'' @ 1413c56d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLiveLink__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LiveLink";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LiveLink",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FLiveLinkModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize'' @ 1413c5720

void __cdecl _dynamic_initializer_for__NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize__(void)

{
  FName::FName(&NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize,L"OnInitialize");
  return;
}

// `dynamic_initializer_for_'NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate'' @ 1413c5740

void __cdecl _dynamic_initializer_for__NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate__(void)

{
  FName::FName(&NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate,L"OnUpdate");
  return;
}

// `dynamic_initializer_for_'NoSubjectSelected'' @ 1413c5760

void __cdecl LiveLinkCustomTimeStepUtils::_dynamic_initializer_for__NoSubjectSelected__(void)

{
  ::FString::FString(&NoSubjectSelected,L"<NO_SUBJECT>");
  atexit(_dynamic_atexit_destructor_for__NoSubjectSelected__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LiveLink_Client_Tick'' @ 1413c5790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LiveLink_Client_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LiveLink_Client_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_Client_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LiveLink_Client_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_Client_Tick,*pFVar1,
               L"LiveLink - Client - Tick","STATGROUP_LiveLink","STATCAT_Advanced",L"Live Link",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LiveLink_EvaluateFrame'' @ 1413c5820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LiveLink_EvaluateFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LiveLink_EvaluateFrame ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LiveLink_EvaluateFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_EvaluateFrame,*pFVar1,
               L"LiveLink - EvaluateFrame","STATGROUP_LiveLink","STATCAT_Advanced",L"Live Link",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LiveLink_PushFrameData'' @ 1413c58b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LiveLink_PushFrameData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LiveLink_PushFrameData ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_PushFrameData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LiveLink_PushFrameData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_PushFrameData,*pFVar1,
               L"LiveLink - Push FrameData","STATGROUP_LiveLink","STATCAT_Advanced",L"Live Link",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LiveLink_PushStaticData'' @ 1413c5940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LiveLink_PushStaticData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LiveLink_PushStaticData ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_PushStaticData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LiveLink_PushStaticData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_PushStaticData,*pFVar1,
               L"LiveLink - Push StaticData","STATGROUP_LiveLink","STATCAT_Advanced",L"Live Link",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TypeColumnName'' @ 1413c59d0

void __cdecl ProviderPollUI::_dynamic_initializer_for__TypeColumnName__(void)

{
  ::FName::FName(&TypeColumnName,L"Type");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h__Script_LiveLink_4149169122'' @ 1413c59f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h__Script_LiveLink_4149169122__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h__Script_LiveLink_52736292'' @ 1413c5a30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h__Script_LiveLink_52736292__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h__Script_LiveLink_925262497'' @ 1413c5a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h__Script_LiveLink_925262497__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h__Script_LiveLink_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h__Script_LiveLink_4164148445'' @ 1413c5ac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h__Script_LiveLink_4164148445__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h__Script_LiveLink_2198913122'' @ 1413c5b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h__Script_LiveLink_2198913122__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h__Script_LiveLink_4051363130'' @ 1413c5b40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h__Script_LiveLink_4051363130__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h__Script_LiveLink_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h__Script_LiveLink_4112338456'' @ 1413c5b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h__Script_LiveLink_4112338456__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h__Script_LiveLink_17308065'' @ 1413c5bd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h__Script_LiveLink_17308065__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h__Script_LiveLink_1303550681'' @ 1413c5c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h__Script_LiveLink_1303550681__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h__Script_LiveLink_2684274077'' @ 1413c5c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h__Script_LiveLink_2684274077__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h__Script_LiveLink_2128884617'' @ 1413c5c90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h__Script_LiveLink_2128884617__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h__Script_LiveLink_375325711'' @ 1413c5cd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h__Script_LiveLink_375325711__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h__Script_LiveLink_4247881732'' @ 1413c5d10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h__Script_LiveLink_4247881732__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h__Script_LiveLink_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h__Script_LiveLink_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h__Script_LiveLink_424418090'' @ 1413c5d60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h__Script_LiveLink_424418090__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h__Script_LiveLink_1515924518'' @ 1413c5da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h__Script_LiveLink_1515924518__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h__Script_LiveLink_622212705'' @ 1413c5de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h__Script_LiveLink_622212705__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h__Script_LiveLink_3693870682'' @ 1413c5e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h__Script_LiveLink_3693870682__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h__Script_LiveLink_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h__Script_LiveLink_1178361494'' @ 1413c5e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h__Script_LiveLink_1178361494__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h__Script_LiveLink_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h__Script_LiveLink_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h__Script_LiveLink_3776796635'' @ 1413c5eb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h__Script_LiveLink_3776796635__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h__Script_LiveLink_49397183'' @ 1413c5ef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h__Script_LiveLink_49397183__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h__Script_LiveLink_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkVirtualSubjectBoneAttachment_h__Script_LiveLink_3261806643'' @ 1413c5f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkVirtualSubjectBoneAttachment_h__Script_LiveLink_3261806643__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkVirtualSubjectBoneAttachment_h__Script_LiveLink_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h__Script_LiveLink_1748522413'' @ 1413c5f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h__Script_LiveLink_1748522413__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h__Script_LiveLink_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h__Script_LiveLink_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h__Script_LiveLink_677020682'' @ 1413c5fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h__Script_LiveLink_677020682__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkDeadbandPreProcessor_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h__Script_LiveLink_2136670760'' @ 1413c6010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h__Script_LiveLink_2136670760__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h__Script_LiveLink_3172700088'' @ 1413c6050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h__Script_LiveLink_3172700088__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkTransformRoleToAnimation_h__Script_LiveLink_2984095467'' @ 1413c6090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkTransformRoleToAnimation_h__Script_LiveLink_2984095467__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkTransformRoleToAnimation_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h__Script_LiveLink_1910661790'' @ 1413c60d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h__Script_LiveLink_1910661790__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h__Script_LiveLink_2943128283'' @ 1413c6110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h__Script_LiveLink_2943128283__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h__Script_LiveLink_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h__Script_LiveLink_2973393181'' @ 1413c6160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h__Script_LiveLink_2973393181__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h__Script_LiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LiveLink'' @ 1413c61a0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LiveLink__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x3f390b40;
  local_res8[0].DeclarationsHash = 0xd2c64311;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LiveLink,L"/Script/LiveLink",
             &Z_Registration_Info_UPackage__Script_LiveLink,local_res8);
  return;
}

// Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings @ 14cff2860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton;
}

// NewStructOps @ 14cff2960

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkVirtualSubjectBoneAttachment,&UE::CoreUObject::Private::Construct<FLiveLinkVirtualSubjectBoneAttachment>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkVirtualSubjectBoneAttachment>,&UE::CoreUObject::Private::Destruct<FLiveLinkVirtualSubjectBoneAttachment>,&UE::CoreUObject::Private::Copy<FLiveLinkVirtualSubjectBoneAttachment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkAnimationRoleToTransform @ 14cff29a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationRoleToTransform(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkMarkerVisualizer @ 14cff2c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkMarkerVisualizer(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkMarkerVisualizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.OuterSingleton;
}

// Z_Construct_UEnum_LiveLink_EAxisSign @ 14cff2c60

UEnum * __cdecl Z_Construct_UEnum_LiveLink_EAxisSign(void)

{
  if (Z_Registration_Info_UEnum_EAxisSign.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAxisSign.InnerSingleton,
               &Z_Construct_UEnum_LiveLink_EAxisSign_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAxisSign.InnerSingleton;
}

// EAxisSign_StaticEnum @ 14cff2cc0

UEnum * __cdecl EAxisSign_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxisSign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_EAxisSign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_EAxisSign,(UObject *)pUVar1,L"EAxisSign");
  }
  return Z_Registration_Info_UEnum_EAxisSign.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cff2f40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bEvaluateLiveLink_SetBit @ 14cff2f70

void __cdecl
Z_Construct_UClass_ULiveLinkMarkerVisualizer_Statics::NewProp_bEvaluateLiveLink_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa10) = 1;
  return;
}

// NewProp_bDrawLabels_SetBit @ 14cff2f80

void __cdecl
Z_Construct_UClass_ULiveLinkMarkerVisualizer_Statics::NewProp_bDrawLabels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa11) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14cff3230

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cff35a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cff3910

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,LiveLinkLogDetail::<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_ULiveLinkTransformRoleToAnimation @ 14cff3a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformRoleToAnimation(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkSkeletonRemapper @ 14cff3a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkSkeletonRemapper(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor @ 14cff3ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkLocatorAxisSwitchPreProcessor @ 14cff3d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkLocatorAxisSwitchPreProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkLocatorAxisSwitchPreProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor @ 14cff3d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.OuterSingleton;
}

// Z_Construct_UEnum_LiveLink_ELiveLinkAxis @ 14cff3e60

UEnum * __cdecl Z_Construct_UEnum_LiveLink_ELiveLinkAxis(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkAxis.InnerSingleton,
               &Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkAxis.InnerSingleton;
}

// ELiveLinkAxis_StaticEnum @ 14cff3ea0

UEnum * __cdecl ELiveLinkAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkAxis,(UObject *)pUVar1,L"ELiveLinkAxis");
  }
  return Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkSettings @ 14cff3ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkUserSettings @ 14cff3f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkUserSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkUserSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting @ 14cff3f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkRoleProjectSetting.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkRoleProjectSetting.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkRoleProjectSetting.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkRoleProjectSetting.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14cff3fe0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkRoleProjectSetting,&UE::CoreUObject::Private::Construct<FLiveLinkRoleProjectSetting>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkRoleProjectSetting>,&UE::CoreUObject::Private::Destruct<FLiveLinkRoleProjectSetting>,&UE::CoreUObject::Private::Copy<FLiveLinkRoleProjectSetting>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature @ 14cff40e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseOffsetPosition_SetBit @ 14cff4120

void __cdecl
Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::
NewProp_bUseOffsetPosition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// Z_Construct_UPackage__Script_LiveLink @ 14cff4130

UPackage * __cdecl Z_Construct_UPackage__Script_LiveLink(void)

{
  if (Z_Registration_Info_UPackage__Script_LiveLink.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LiveLink.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LiveLink.OuterSingleton;
}

// NewProp_bUseOffsetOrientation_SetBit @ 14cff4170

void __cdecl
Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::
NewProp_bUseOffsetOrientation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject @ 14cff4240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize @ 14cff4280

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkMessageBusFinder @ 14cff42c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkMessageBusFinder(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.OuterSingleton;
}

// Z_Construct_UScriptStruct_FProviderPollResult @ 14cff4300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProviderPollResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProviderPollResult.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProviderPollResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FProviderPollResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProviderPollResult.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FProviderPollResult.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bIsValidProvider_SetBit @ 14cff4380

void __cdecl
Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_bIsValidProvider_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewStructOps @ 14cff4390

void * __cdecl Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProviderPollResult,&UE::CoreUObject::Private::Construct<FProviderPollResult>,&UE::CoreUObject::Private::ConstructForTests<FProviderPollResult>,&UE::CoreUObject::Private::Destruct<FProviderPollResult>,&UE::CoreUObject::Private::Copy<FProviderPollResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate @ 14cff43d0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bInShouldStampCurrentTime_SetBit @ 14cff4410

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics
::NewProp_bInShouldStampCurrentTime_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff4420

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  return;
}

// Z_Construct_UClass_ULiveLinkCustomTimeStep @ 14cff4430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkCustomTimeStep(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal @ 14cff4470

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLockStepMode_SetBit @ 14cff4570

void __cdecl
Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics::NewProp_bLockStepMode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff4580

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bPreProcessRebroadcastFrames_SetBit @ 14cff4590

void __cdecl
Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bPreProcessRebroadcastFrames_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_bTranslateRebroadcastFrames_SetBit @ 14cff45a0

void __cdecl
Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_bTranslateRebroadcastFrames_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal @ 14cff45b0

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider @ 14cff45f0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder @ 14cff4630

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders @ 14cff4670

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor @ 14cff4770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.
                OuterSingleton,
               &Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor @ 14cff47b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton;
}

// NewProp_bInterpolatePropertyValues_SetBit @ 14cff4af0

void __cdecl
Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::
NewProp_bInterpolatePropertyValues_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14cff4cf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`anonymous_namespace'::<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,_anonymous_namespace_::<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cff4f10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`anonymous_namespace'::<lambda_29>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,_anonymous_namespace_::<lambda_29>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor @ 14cff4f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.OuterSingleton;
}

// NewProp_bEnableDeadband_SetBit @ 14cff4f80

void __cdecl
Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_Statics::NewProp_bEnableDeadband_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UClass_ULiveLinkAnimationVirtualSubject @ 14cff5050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationVirtualSubject(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton;
}

// Z_Construct_UEnum_LiveLink_EBoneTransformResolution @ 14cff5090

UEnum * __cdecl Z_Construct_UEnum_LiveLink_EBoneTransformResolution(void)

{
  if (Z_Registration_Info_UEnum_EBoneTransformResolution.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBoneTransformResolution.InnerSingleton,
               &Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBoneTransformResolution.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment @ 14cff50d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EBoneTransformResolution_StaticEnum @ 14cff5150

UEnum * __cdecl EBoneTransformResolution_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_EBoneTransformResolution,(UObject *)pUVar1,
                       L"EBoneTransformResolution");
  }
  return Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton;
}

// NewProp_bAppendSubjectNameToBones_SetBit @ 14cff5190

void __cdecl
Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::
NewProp_bAppendSubjectNameToBones_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a0) = 1;
  return;
}

// Z_Construct_UClass_ALiveLinkDataPreview @ 14cff5260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALiveLinkDataPreview(void)

{
  if (Z_Registration_Info_UClass_ALiveLinkDataPreview.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALiveLinkDataPreview.OuterSingleton,
               &Z_Construct_UClass_ALiveLinkDataPreview_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALiveLinkDataPreview.OuterSingleton;
}

// Z_Construct_UFunction_ALiveLinkDataPreview_InitializeSubjects @ 14cff5360

UFunction * __cdecl Z_Construct_UFunction_ALiveLinkDataPreview_InitializeSubjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALiveLinkDataPreview_InitializeSubjects_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewEvaluate_SetBit @ 14cff53a0

void __cdecl
Z_Construct_UFunction_ALiveLinkDataPreview_SetEnableLiveLinkData_Statics::
NewProp_bNewEvaluate_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALiveLinkDataPreview_SetEnableLiveLinkData @ 14cff53b0

UFunction * __cdecl Z_Construct_UFunction_ALiveLinkDataPreview_SetEnableLiveLinkData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALiveLinkDataPreview_SetEnableLiveLinkData_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent @ 14cff53f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.OuterSingleton;
}

// NewProp_bDrawLabels_SetBit @ 14cff5430

void __cdecl
Z_Construct_UClass_ALiveLinkDataPreview_Statics::NewProp_bDrawLabels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1000) = 1;
  return;
}

// NewProp_bEvaluateLiveLink_SetBit @ 14cff5440

void __cdecl
Z_Construct_UClass_ALiveLinkDataPreview_Statics::NewProp_bEvaluateLiveLink_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3e9) = 1;
  return;
}

// NewProp_bModifyActorTransform_SetBit @ 14cff5450

void __cdecl
Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bSetRelativeLocation_SetBit @ 14cff5460

void __cdecl
Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return;
}

// NewStructOps @ 14cff54b0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkRetargetAssetReference,&UE::CoreUObject::Private::Construct<FLiveLinkRetargetAssetReference>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkRetargetAssetReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkHubSubjectSettings @ 14cff55b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkHubSubjectSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkHubSubjectSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkBlueprintLibrary @ 14cff56b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount @ 14cff56f0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform @ 14cff5730

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff5770

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame @ 14cff5780

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkBroadcastComponent @ 14cff57c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkBroadcastComponent(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkBroadcastComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.OuterSingleton;
}

// NewProp_bEnable_SetBit @ 14cff5800

void __cdecl
Z_Construct_UClass_ULiveLinkBroadcastComponent_Statics::NewProp_bEnable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff5810

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime @ 14cff5820

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff58a0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset @ 14cff58b0

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff58f0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole @ 14cff5900

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff5940

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationFrameData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationFrameData @ 14cff5950

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationFrameData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationFrameData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff5990

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationStaticData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationStaticData @ 14cff59a0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationStaticData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetAnimationStaticData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData @ 14cff5ab0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkPreset_NoRegister @ 14cff5c50

UClass * __cdecl Z_Construct_UClass_ULiveLinkPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkPreset",
               &Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton,
               ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkPreset>,
               InternalVTableHelperCtorCaller<ULiveLinkPreset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkMessageBusSourceFactory @ 14cff5fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkMessageBusSourceFactory(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren @ 14cff60d0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves @ 14cff6110

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeVirtualSubject_SetBit @ 14cff6150

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::
NewProp_bIncludeVirtualSubject_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames @ 14cff6160

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole @ 14cff61a0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeDisabledSubject_SetBit @ 14cff61e0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::
NewProp_bIncludeDisabledSubject_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIncludeVirtualSubject_SetBit @ 14cff61f0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::
NewProp_bIncludeVirtualSubject_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects @ 14cff6200

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectState @ 14cff6240

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata @ 14cff6280

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkTimecodeProvider @ 14cff62c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkTimecodeProvider(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton;
}

// Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType @ 14cff6300

UEnum * __cdecl Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton,
               &Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton;
}

// ELiveLinkTimecodeProviderEvaluationType_StaticEnum @ 14cff6340

UEnum * __cdecl ELiveLinkTimecodeProviderEvaluationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType,
                       (UObject *)pUVar1,L"ELiveLinkTimecodeProviderEvaluationType");
  }
  return Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkBroadcastSubsystem @ 14cff6380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkBroadcastSubsystem(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkBroadcastSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent @ 14cff63c0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideFrameRate_SetBit @ 14cff6400

void __cdecl
Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff6410

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue @ 14cff6420

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkMessageBusSourceSettings @ 14cff6460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkMessageBusSourceSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform @ 14cff64a0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName @ 14cff64e0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus @ 14cff6520

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister @ 14cff6560

UClass * __cdecl Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusFinder",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton,
               ULiveLinkMessageBusFinder::StaticRegisterNativesULiveLinkMessageBusFinder,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkMessageBusFinder>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusFinder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.InnerSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType @ 14cff6650

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid @ 14cff6690

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole @ 14cff6780

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex @ 14cff67c0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkDataPreviewComponent @ 14cff6800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkDataPreviewComponent(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkDataPreviewComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.OuterSingleton;
}

// Z_Construct_UEnum_LiveLink_ELiveLinkVisualBoneType @ 14cff6840

UEnum * __cdecl Z_Construct_UEnum_LiveLink_ELiveLinkVisualBoneType(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.InnerSingleton,
               &Z_Construct_UEnum_LiveLink_ELiveLinkVisualBoneType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.InnerSingleton;
}

// ELiveLinkVisualBoneType_StaticEnum @ 14cff6880

UEnum * __cdecl ELiveLinkVisualBoneType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkVisualBoneType,(UObject *)pUVar1,
                       L"ELiveLinkVisualBoneType");
  }
  return Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName @ 14cff68c0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff6900

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bNewDrawLabel_SetBit @ 14cff6910

void __cdecl
Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetDrawLabels_Statics::
NewProp_bNewDrawLabel_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent @ 14cff6920

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetDrawLabels @ 14cff6960

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetDrawLabels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetDrawLabels_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewEvaluateLiveLink_SetBit @ 14cff69a0

void __cdecl
Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetEvaluateLiveLinkData_Statics::
NewProp_bNewEvaluateLiveLink_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff69b0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetEvaluateLiveLinkData @ 14cff69c0

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetEvaluateLiveLinkData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkDataPreviewComponent_SetEvaluateLiveLinkData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled @ 14cff6a00

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff6a40

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bEvaluateLiveLink_SetBit @ 14cff6a50

void __cdecl
Z_Construct_UClass_ULiveLinkDataPreviewComponent_Statics::NewProp_bEvaluateLiveLink_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa08) = 1;
  return;
}

// NewProp_bDrawLabels_SetBit @ 14cff6a60

void __cdecl
Z_Construct_UClass_ULiveLinkDataPreviewComponent_Statics::NewProp_bDrawLabels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa09) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid @ 14cff6a70

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForThisFrame_SetBit @ 14cff6ab0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::
NewProp_bForThisFrame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff6ac0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled @ 14cff6ad0

UFunction * __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms @ 14cff6b10

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkPreset @ 14cff6b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkPreset(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton;
}

// NewProp_bRecreatePresets_SetBit @ 14cff6c50

void __cdecl
Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff6c60

void __cdecl
Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform @ 14cff6c70

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkPreset_AddToClient @ 14cff6cb0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkPreset_AddToClient(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_PauseSubject @ 14cff6cf0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_PauseSubject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_PauseSubject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cff6d40

void __cdecl
Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cff6d60

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UClass_ULiveLinkTimeSynchronizationSource @ 14cff6d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkTimeSynchronizationSource(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient @ 14cff6db0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource @ 14cff6eb0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14cff6ef0

void __cdecl
Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent @ 14cff6f00

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled @ 14cff6f40

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient @ 14cff6f80

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkComponent @ 14cff6fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkComponent(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkComponent.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponent.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName @ 14cff7000

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames @ 14cff7120

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkBlueprintLibrary_UnpauseSubject @ 14cff7260

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkBlueprintLibrary_UnpauseSubject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_UnpauseSubject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// AddLambda<`ULiveLinkPreset::ApplyToClientLatent'::__l2::<lambda_1>_> @ 14cff7800

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_ULiveLinkPreset::ApplyToClientLatent_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr FVar7;
  ForElementType<TAlignedBytes<16,16>_> *pFVar8;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  FVar7.ObjectIndex = 0;
  FVar7.ObjectSerialNumber = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x70,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULiveLinkPreset::ApplyToClientLatent'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[4] = *in_R8;
    puVar4[6] = in_R8[2];
    puVar4[0xb] = in_R8[7];
    in_R8[7] = 0;
    uVar1 = in_R8[5];
    puVar4[8] = in_R8[4];
    puVar4[9] = uVar1;
    puVar4[10] = in_R8[6];
    if (puVar4[6] != 0) {
      in_R8[2] = 0;
    }
    *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(in_R8 + 8);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  (param_1->WeakThis).WeakPtr = (FWeakObjectPtr)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      pFVar6 = (FWeakObjectPtr *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      FVar7 = *pFVar6;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar3 = *(int *)&this->field_0x10;
    (param_1->WeakThis).WeakPtr = FVar7;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar8 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar8);
    }
    *pFVar8 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar8 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Blend<UE::Math::TTransform<double>_> @ 14cffac20

void __cdecl
LiveLinkAnimationBlendingUtil::Blend<UE::Math::TTransform<double>_>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,float param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.Num() == B.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkAnimationFrameInterpolateProcessor.cpp"
                         ,0x1e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  uVar8 = param_1->ArrayNum;
  if (iVar6 < (int)uVar8) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,uVar8 - iVar6,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax
                      );
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x60,uVar8 - iVar6);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar6) {
      uVar10 = iVar6 - uVar8;
      if (((int)(uVar10 | uVar8) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar10 != 0) {
        pFVar7 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x60;
        iVar6 = (*piVar1 - uVar8) - uVar10;
        if (iVar6 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar10 * 0x60,(longlong)iVar6 * 0x60);
        }
        *piVar1 = *piVar1 - uVar10;
      }
    }
  }
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      uVar11 = ~uVar8 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar10 = uVar11;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (param_3->AllocatorInstance).Data;
      lVar9 = (longlong)(int)uVar8 * 0x60;
      uVar10 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar10 = uVar11;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar10 = uVar11;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      BlendItem((TTransform<double> *)((param_1->AllocatorInstance).Data + lVar9),
                (TTransform<double> *)(pFVar2 + lVar9),(TTransform<double> *)(pFVar7 + lVar9),
                param_4);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return;
}

// BlendValue<UE::Math::TQuat<double>_> @ 14cffaed0

TQuat<double> * __cdecl
LiveLinkInterpolation::BlendValue<UE::Math::TQuat<double>_>
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          float param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  pTVar8 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_48,param_1,param_2,(double)param_3);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar12,8);
  return __return_storage_ptr__;
}

// BlendValue<UE::Math::TRotator<double>_> @ 14cffafa0

TRotator<double> * __cdecl
LiveLinkInterpolation::BlendValue<UE::Math::TRotator<double>_>
          (TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,
          TRotator<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  
  auVar12._0_8_ = param_2->Roll - param_1->Roll;
  dVar21 = param_2->Pitch - param_1->Pitch;
  auVar17._0_8_ = param_2->Yaw - param_1->Yaw;
  auVar17._8_8_ = 0;
  auVar10._8_4_ = SUB84(auVar17._0_8_,0);
  auVar10._0_8_ = dVar21;
  auVar10._12_4_ = (int)((ulonglong)auVar17._0_8_ >> 0x20);
  auVar11 = divpd(auVar10,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar11 = roundpd(auVar17,auVar11,3);
  dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar18._0_8_ = auVar11._0_8_ * dVar3;
  dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar18._8_8_ = auVar11._8_8_ * dVar4;
  auVar12._8_8_ = 0;
  dVar21 = dVar21 - auVar18._0_8_;
  dVar23 = auVar17._0_8_ - auVar18._8_8_;
  auVar11 = divpd(auVar12,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar11 = roundpd(auVar18,auVar11,3);
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar13._8_4_ = SUB84(dVar23,0);
  auVar13._0_8_ = dVar21;
  auVar13._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar1 = auVar12._0_8_ - auVar11._0_8_ * dVar5;
  dVar2 = 0.0 - auVar11._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  dVar16 = auVar13._8_8_ + dVar4;
  uVar6 = -(ulonglong)(0.0 <= dVar21);
  uVar8 = -(ulonglong)(0.0 <= dVar23);
  auVar19._0_8_ = uVar6 & (ulonglong)dVar21;
  auVar19._8_4_ = (undefined4)(uVar8 & (ulonglong)dVar23);
  auVar19._12_4_ = (undefined4)((uVar8 & (ulonglong)dVar23) >> 0x20);
  auVar20._0_4_ = ~(uint)uVar6 & SUB84(dVar21 + dVar3,0);
  auVar20._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar21 + dVar3) >> 0x20);
  auVar20._8_4_ = ~(uint)uVar8 & SUB84(dVar16,0);
  auVar20._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar16 >> 0x20);
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar20 = auVar20 | auVar19;
  dVar16 = auVar14._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar6 = -(ulonglong)(0.0 <= dVar1);
  uVar8 = -(ulonglong)(0.0 <= dVar2);
  auVar24._0_4_ = ~(uint)uVar6 & SUB84(dVar1 + dVar5,0);
  auVar24._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar5) >> 0x20);
  auVar24._8_4_ = ~(uint)uVar8 & SUB84(dVar16,0);
  auVar24._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar16 >> 0x20);
  auVar11._8_4_ = (int)((ulonglong)dVar2 & uVar8);
  auVar11._0_8_ = (ulonglong)dVar1 & uVar6;
  auVar11._12_4_ = (int)(((ulonglong)dVar2 & uVar8) >> 0x20);
  auVar24 = auVar24 | auVar11;
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar20._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar20._8_8_);
  dVar16 = (double)param_3;
  uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar24._0_8_);
  auVar22._0_8_ = uVar8 & (ulonglong)(auVar20._0_8_ - dVar3);
  uVar6 = uVar9 & (ulonglong)(auVar20._8_8_ - dVar4);
  auVar22._8_4_ = (undefined4)uVar6;
  auVar22._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar8 & auVar20._0_4_;
  auVar15._4_4_ = ~(uint)(uVar8 >> 0x20) & auVar20._4_4_;
  auVar15._8_4_ = ~(uint)uVar9 & auVar20._8_4_;
  auVar15._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar20._12_4_;
  dVar1 = param_1->Yaw;
  __return_storage_ptr__->Pitch = dVar16 * SUB168(auVar22 | auVar15,0) + param_1->Pitch;
  dVar2 = param_1->Roll;
  __return_storage_ptr__->Yaw = dVar16 * SUB168(auVar22 | auVar15,8) + dVar1;
  __return_storage_ptr__->Roll =
       dVar16 * (double)(uVar7 & (ulonglong)(auVar24._0_8_ - dVar5) |
                        CONCAT44(~(uint)(uVar7 >> 0x20) & auVar24._4_4_,~(uint)uVar7 & auVar24._0_4_
                                )) + dVar2;
  return __return_storage_ptr__;
}

// BlendValue<UE::Math::TTransform<double>_> @ 14cffb0f0

TTransform<double> * __cdecl
LiveLinkInterpolation::BlendValue<UE::Math::TTransform<double>_>
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar41;
  uint uVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  dVar16 = (param_1->Rotation).XY.m128d_f64[1];
  dVar17 = (param_1->Translation).XY.m128d_f64[0];
  dVar18 = (param_1->Translation).XY.m128d_f64[1];
  dVar19 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar20 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar21 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_1->Scale3D).ZW.m128d_f64[1];
  dVar22 = (param_1->Translation).ZW.m128d_f64[0];
  dVar8 = (param_1->Translation).ZW.m128d_f64[1];
  fVar35 = __real_3f800000 - param_3;
  dVar14 = (double)fVar35;
  dVar15 = (double)fVar35;
  dVar12 = (double)fVar35;
  dVar13 = (double)fVar35;
  dVar23 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0] * dVar14;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar16 * dVar15;
  dVar6 = dVar6 * dVar13;
  auVar33._8_4_ = SUB84(dVar6,0);
  auVar33._0_8_ = dVar23 * dVar12;
  auVar33._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar33;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar17 * dVar14;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar18 * dVar15;
  dVar11 = dVar11 * dVar13;
  dVar8 = dVar8 * dVar13;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar22 * dVar12;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar19 * dVar14;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar20 * dVar15;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar21 * dVar12;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  dVar15 = (double)param_3;
  dVar16 = (double)param_3;
  dVar17 = (double)param_3;
  dVar18 = (double)param_3;
  dVar13 = (param_2->Rotation).ZW.m128d_f64[0] * dVar17;
  dVar14 = (param_2->Rotation).ZW.m128d_f64[1] * dVar18;
  dVar11 = (param_2->Rotation).XY.m128d_f64[0] * dVar15;
  dVar12 = (param_2->Rotation).XY.m128d_f64[1] * dVar16;
  dVar6 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] * dVar13 +
          (__return_storage_ptr__->Rotation).XY.m128d_f64[0] * dVar11;
  dVar8 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] * dVar14 +
          (__return_storage_ptr__->Rotation).XY.m128d_f64[1] * dVar12;
  auVar29._8_4_ = SUB84(dVar8,0);
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  uVar24 = -(ulonglong)(0.0 <= auVar29._8_8_ + dVar6);
  uVar26 = -(ulonglong)(0.0 <= dVar6 + dVar8);
  uVar41 = (uint)(uVar24 >> 0x20);
  uVar42 = (uint)(uVar26 >> 0x20);
  auVar36._0_4_ = ~(uint)uVar24 & SUB84(0.0 - dVar11,0);
  auVar36._4_4_ = ~uVar41 & (uint)((ulonglong)(0.0 - dVar11) >> 0x20);
  auVar36._8_4_ = ~(uint)uVar26 & SUB84(0.0 - dVar12,0);
  auVar36._12_4_ = ~uVar42 & (uint)((ulonglong)(0.0 - dVar12) >> 0x20);
  auVar38._8_4_ = (int)((ulonglong)dVar12 & uVar26);
  auVar38._0_8_ = (ulonglong)dVar11 & uVar24;
  auVar38._12_4_ = (int)(((ulonglong)dVar12 & uVar26) >> 0x20);
  auVar37._0_8_ = SUB168(auVar36 | auVar38,0) + (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
  auVar37._8_8_ = SUB168(auVar36 | auVar38,8) + (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
  auVar30._0_4_ = ~(uint)uVar24 & SUB84(0.0 - dVar13,0);
  auVar30._4_4_ = ~uVar41 & (uint)((ulonglong)(0.0 - dVar13) >> 0x20);
  auVar30._8_4_ = ~(uint)uVar26 & SUB84(0.0 - dVar14,0);
  auVar30._12_4_ = ~uVar42 & (uint)((ulonglong)(0.0 - dVar14) >> 0x20);
  auVar39._0_8_ = (ulonglong)dVar13 & uVar24;
  auVar39._8_4_ = (undefined4)(uVar26 & (ulonglong)dVar14);
  auVar39._12_4_ = (undefined4)((uVar26 & (ulonglong)dVar14) >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar37;
  dVar6 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
       SUB168(auVar30 | auVar39,0) + (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = SUB168(auVar30 | auVar39,8) + dVar6;
  dVar8 = (param_2->Translation).XY.m128d_f64[1];
  dVar11 = (param_2->Translation).ZW.m128d_f64[0];
  dVar12 = (param_2->Translation).ZW.m128d_f64[1];
  dVar6 = (__return_storage_ptr__->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (param_2->Translation).XY.m128d_f64[0] * dVar15 +
       (__return_storage_ptr__->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar8 * dVar16 + dVar6;
  dVar6 = dVar12 * dVar18 + (__return_storage_ptr__->Translation).ZW.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar6,0);
  auVar3._0_8_ = dVar11 * dVar17 + (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar3;
  dVar8 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar6 = (__return_storage_ptr__->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (param_2->Scale3D).XY.m128d_f64[0] * dVar15 +
       (__return_storage_ptr__->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar8 * dVar16 + dVar6;
  dVar6 = dVar12 * dVar18 + (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar11 * dVar17 + (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar4;
  dVar11 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
  dVar12 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
  dVar13 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
  dVar14 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
  dVar6 = dVar13 * dVar13 + dVar11 * dVar11;
  dVar8 = dVar14 * dVar14 + dVar12 * dVar12;
  auVar31._8_4_ = SUB84(dVar8,0);
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar32._0_8_ = auVar31._8_8_ + dVar6;
  auVar32._8_8_ = dVar6 + dVar8;
  auVar38 = sqrtpd(auVar37,auVar32);
  uVar26 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar32._0_8_);
  uVar27 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar32._8_8_);
  uVar25 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar32._0_8_);
  uVar28 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar32._8_8_);
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
  auVar34._0_8_ = uVar25 & (ulonglong)(auVar33._0_8_ * dVar11);
  uVar24 = uVar28 & (ulonglong)(auVar33._8_8_ * dVar12);
  auVar34._8_4_ = (undefined4)uVar24;
  auVar34._12_4_ = (undefined4)(uVar24 >> 0x20);
  auVar40._0_8_ = uVar26 & (ulonglong)(auVar38._0_8_ * dVar13);
  uVar24 = uVar27 & (ulonglong)(auVar38._8_8_ * dVar14);
  auVar40._8_4_ = (undefined4)uVar24;
  auVar40._12_4_ = (undefined4)(uVar24 >> 0x20);
  auVar10._4_4_ = ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar10._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar10._8_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar10._12_4_ = ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar41 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar42 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar1 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar34 | auVar10;
  auVar5._4_4_ = ~(uint)(uVar26 >> 0x20) & uVar42;
  auVar5._0_4_ = ~(uint)uVar26 & uVar41;
  auVar5._8_4_ = ~(uint)uVar27 & uVar1;
  auVar5._12_4_ = ~(uint)(uVar27 >> 0x20) & uVar2;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar40 | auVar5;
  return __return_storage_ptr__;
}

// BlendValue<UE::Math::TVector4<double>_> @ 14cffb2f0

TVector4<double> * __cdecl
LiveLinkInterpolation::BlendValue<UE::Math::TVector4<double>_>
          (TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1,
          TVector4<double> *param_2,float param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.W;
  dVar9 = (double)param_3;
  dVar2 = ((param_2->field0_0x0)._s_0.Y - dVar2) * dVar9 + dVar2;
  dVar7 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = (param_2->field0_0x0)._s_0.W;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = ((param_2->field0_0x0)._s_0.X - dVar5) * dVar9 + dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  dVar4 = (dVar8 - dVar4) * dVar9 + dVar4;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (dVar7 - dVar6) * dVar9 + dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
  return __return_storage_ptr__;
}

// BlendValue<UE::Math::TVector<double>_> @ 14cffb340

TVector<double> * __cdecl
LiveLinkInterpolation::BlendValue<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (double)param_3;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * dVar6 +
       (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 - dVar2) * dVar6 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar4 - dVar5) * dVar6 + (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// BlendValue<FLinearColor> @ 14cffb3a0

FLinearColor * __cdecl
LiveLinkInterpolation::BlendValue<FLinearColor>
          (FLinearColor *__return_storage_ptr__,FLinearColor *param_1,FLinearColor *param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_2->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.G;
  fVar3 = (param_1->field0_0x0)._s_0.G;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       ((param_2->field0_0x0)._s_0.R - (param_1->field0_0x0)._s_0.R) * param_3 +
       (param_1->field0_0x0)._s_0.R;
  fVar4 = (param_2->field0_0x0)._s_0.B;
  fVar5 = (param_1->field0_0x0)._s_0.B;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (fVar1 - fVar2) * param_3 + fVar3;
  fVar1 = (param_2->field0_0x0)._s_0.A;
  fVar2 = (param_1->field0_0x0)._s_0.A;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (fVar4 - fVar5) * param_3 + (param_1->field0_0x0)._s_0.B;
  (__return_storage_ptr__->field0_0x0)._s_0.A = (fVar1 - fVar2) * param_3 + fVar3;
  return __return_storage_ptr__;
}

// Cast<ULiveLinkSubjectSettings,UObject> @ 14cffb9e0

ULiveLinkSubjectSettings * __cdecl Cast<ULiveLinkSubjectSettings,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (ULiveLinkSubjectSettings *)param_1;
    }
  }
  return (ULiveLinkSubjectSettings *)0x0;
}

// CastChecked<ULiveLinkPreset,UObject> @ 14cffba30

ULiveLinkPreset * __cdecl CastChecked<ULiveLinkPreset,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULiveLinkPreset>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ULiveLinkPreset::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULiveLinkPreset *)param_1;
  }
  pFVar3 = GetTypeName<ULiveLinkPreset>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ULiveLinkSubjectSettings,UObject> @ 14cffbaf0

ULiveLinkSubjectSettings * __cdecl CastChecked<ULiveLinkSubjectSettings,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULiveLinkSubjectSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULiveLinkSubjectSettings *)param_1;
  }
  pFVar3 = GetTypeName<ULiveLinkSubjectSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FProviderPollResult,FProviderPollResult,int> @ 14cffbbb0

void __cdecl
ConstructItems<FProviderPollResult,FProviderPollResult,int>
          (void *param_1,FProviderPollResult *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  FString *this;
  FString *pFVar3;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    pFVar3 = &param_2->MachineName;
    do {
      uVar2 = *(undefined8 *)&(((FProviderPollResult *)(pFVar3 + -2))->Address).UniqueId.C;
      puVar1 = (undefined8 *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)pFVar3);
      *puVar1 = *(undefined8 *)&(((FProviderPollResult *)(pFVar3 + -2))->Address).UniqueId;
      puVar1[1] = uVar2;
      FString::FString(this + -1,pFVar3 + -1);
      FString::FString(this,pFVar3);
      this[1].Data.AllocatorInstance.Data = *(FScriptContainerElement **)(pFVar3 + 1);
      *(bool *)&this[1].Data.ArrayNum = *(bool *)((longlong)(pFVar3 + 1) + 8);
      this[1].Data.ArrayMax = *(int *)((longlong)(pFVar3 + 1) + 0xc);
      *(undefined8 *)
       &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          *)(this + 2))->Elements = 0;
      this[2].Data.ArrayNum = 0;
      this[2].Data.ArrayMax = 0;
      this[4].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this[4].Data.ArrayNum = 0;
      this[4].Data.ArrayMax = 0x80;
      *(undefined4 *)&this[5].Data.AllocatorInstance.Data = 0xffffffff;
      *(undefined4 *)((longlong)&this[5].Data.AllocatorInstance.Data + 4) = 0;
      this[6].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this[6].Data.ArrayNum = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(this + 2),
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(pFVar3 + 2));
      this = this + 9;
      pFVar3 = pFVar3 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedPtr<FLiveLinkDebugUIEntry,1>,int> @ 14cffbc90

void __cdecl
ConstructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedPtr<FLiveLinkDebugUIEntry,1>,int>
          (void *param_1,TSharedPtr<FLiveLinkDebugUIEntry,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FLiveLinkDebugUIEntry **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,int> @ 14cffbcd0

void __cdecl
ConstructItems<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,int>
          (void *param_1,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FLiveLinkSource **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FProviderPollResult,1>,TSharedPtr<FProviderPollResult,1>,int> @ 14cffbd10

void __cdecl
ConstructItems<TSharedPtr<FProviderPollResult,1>,TSharedPtr<FProviderPollResult,1>,int>
          (void *param_1,TSharedPtr<FProviderPollResult,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FProviderPollResult **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSubclassOf<ULiveLinkFramePreProcessor>,TSubclassOf<ULiveLinkFramePreProcessor>,int> @ 14cffbd50

void __cdecl
ConstructItems<TSubclassOf<ULiveLinkFramePreProcessor>,TSubclassOf<ULiveLinkFramePreProcessor>,int>
          (void *param_1,TSubclassOf<ULiveLinkFramePreProcessor> *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FLiveLinkSubjectFrameData,int> @ 14cffc830

void __cdecl DefaultConstructItems<FLiveLinkSubjectFrameData,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::FStructOnScope(param_1);
    FStructOnScope::FStructOnScope((FStructOnScope *)((longlong)param_1 + 0x28));
    param_1 = (void *)((longlong)param_1 + 0x50);
  }
  return;
}

// DestructItems<TTuple<FGuid,FText>,int> @ 14cffcb00

void __cdecl DestructItems<TTuple<FGuid,FText>,int>(TTuple<FGuid,FText> *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,int> @ 14cffcb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,int>
          (FHeartbeatRecipient *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->MessageEndpoint).WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
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
      pFVar4 = pFVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkCollectionSourceItem,int> @ 14cffcb90

void __cdecl
DestructItems<FLiveLinkCollectionSourceItem,int>(FLiveLinkCollectionSourceItem *param_1,int param_2)

{
  TStrongObjectPtr<ULiveLinkSourceSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Setting;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pTVar1 + 4))->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pTVar1 + 2))->ReferenceController);
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
        pTVar1->Object = (UObject *)0x0;
      }
      pTVar1 = pTVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkCollectionSubjectItem,int> @ 14cffcc00

void __cdecl
DestructItems<FLiveLinkCollectionSubjectItem,int>
          (FLiveLinkCollectionSubjectItem *param_1,int param_2)

{
  FLiveLinkSubject *pFVar1;
  TStrongObjectPtr<ULiveLinkVirtualSubject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->VirtualSubject;
    do {
      if (pTVar2->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
        pTVar2->Object = (UObject *)0x0;
      }
      pFVar1 = ((TUniquePtr<FLiveLinkSubject,TDefaultDelete<FLiveLinkSubject>_> *)(pTVar2 + -1))->
               Ptr;
      if (pFVar1 != (FLiveLinkSubject *)0x0) {
        (**(code **)pFVar1->_padding_)(pFVar1,1);
      }
      if (((TStrongObjectPtr<ULiveLinkSubjectSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
            *)(pTVar2 + -2))->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject
                  (((TStrongObjectPtr<ULiveLinkSubjectSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                     *)(pTVar2 + -2))->Object);
        ((TStrongObjectPtr<ULiveLinkSubjectSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          *)(pTVar2 + -2))->Object = (UObject *)0x0;
      }
      pTVar2 = pTVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkRoleProjectSetting,int> @ 14cffcc80

void __cdecl
DestructItems<FLiveLinkRoleProjectSetting,int>(FLiveLinkRoleProjectSetting *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->FramePreProcessors;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkSourcePreset,int> @ 14cffccc0

void __cdecl DestructItems<FLiveLinkSourcePreset,int>(FLiveLinkSourcePreset *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SourceType;
    do {
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (FText *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkSubjectFrameData,int> @ 14cffcd00

void __cdecl
DestructItems<FLiveLinkSubjectFrameData,int>(FLiveLinkSubjectFrameData *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::~FStructOnScope(&(param_1->FrameData).WrappedStruct);
    FStructOnScope::~FStructOnScope((FStructOnScope *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FLiveLinkVirtualSubjectBoneAttachment,int> @ 14cffcd40

void __cdecl
DestructItems<FLiveLinkVirtualSubjectBoneAttachment,int>
          (FLiveLinkVirtualSubjectBoneAttachment *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->LastError;
    do {
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = pFVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkClient::FPendingSubjectFrame,int> @ 14cffcd80

void __cdecl
DestructItems<FLiveLinkClient::FPendingSubjectFrame,int>(FPendingSubjectFrame *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::~FStructOnScope(&(param_1->FrameData).WrappedStruct);
    param_1 = (FPendingSubjectFrame *)(&param_1->FrameData + 1);
  }
  return;
}

// DestructItems<FLiveLinkClient::FPendingSubjectStatic,int> @ 14cffcdc0

void __cdecl
DestructItems<FLiveLinkClient::FPendingSubjectStatic,int>
          (FPendingSubjectStatic *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->ExtraMetadata).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      FStructOnScope::~FStructOnScope((FStructOnScope *)(puVar1 + -0xd));
      puVar1 = puVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FProviderPollResult,int> @ 14cffce30

void __cdecl DestructItems<FProviderPollResult,int>(FProviderPollResult *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Annotations).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkLogInstance::FRepeatableMessage,int> @ 14cffceb0

void __cdecl
DestructItems<FLiveLinkLogInstance::FRepeatableMessage,int>(FRepeatableMessage *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FSharedReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Data).SharedReferenceCount;
    do {
      plVar3 = *(longlong **)(pFVar4 + 2);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar4->ReferenceController);
      pFVar4 = pFVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int> @ 14cffcf10

void __cdecl
DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::~FStructOnScope(&param_1->WrappedStruct);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,int> @ 14cffcf50

void __cdecl
DestructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,int>
          (TSharedPtr<FLiveLinkDebugUIEntry,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,int> @ 14cffcf90

void __cdecl
DestructItems<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,int>
          (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FProviderPollResult,1>,int> @ 14cffcfd0

void __cdecl
DestructItems<TSharedPtr<FProviderPollResult,1>,int>
          (TSharedPtr<FProviderPollResult,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int> @ 14cffd010

void __cdecl
DestructItems<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int>
          (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *param_1,int param_2)

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

// DestructItems<ULiveLinkDataPreviewComponent,int> @ 14cffd050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
DestructItems<ULiveLinkDataPreviewComponent,int>(ULiveLinkDataPreviewComponent *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->CachedSkeletonData).BoneNames;
    do {
      *(undefined ***)(pTVar2 + -0xa3) = &ULiveLinkDataPreviewComponent::_vftable__for__UObject__;
      *(undefined ***)((longlong)(pTVar2 + -0xa1) + 8) =
           &ULiveLinkDataPreviewComponent::_vftable__for__IInterface_AssetUserData__;
      *(undefined ***)(pTVar2 + -0xa0) =
           &ULiveLinkDataPreviewComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
      *(undefined ***)(pTVar2 + -0x7e) =
           &ULiveLinkDataPreviewComponent::_vftable__for__INavRelevantInterface__;
      *(undefined ***)((longlong)(pTVar2 + -0x7e) + 8) =
           &ULiveLinkDataPreviewComponent::_vftable__for__IInterface_AsyncCompilation__;
      *(undefined ***)(pTVar2 + -0x7d) =
           &ULiveLinkDataPreviewComponent::_vftable__for__IPhysicsComponent__;
      *(undefined ***)(pTVar2 + -0x3e) = &___7ULiveLinkDataPreviewComponent__6B_;
      DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                (*(TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> **)(pTVar2 + 0xe),
                 *(int *)((longlong)(pTVar2 + 0xe) + 8));
      if (*(void **)(pTVar2 + 0xe) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 0xe));
      }
      if (*(void **)(pTVar2 + 0xd) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 0xd));
      }
      if (*(void **)(pTVar2 + 0xc) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 0xc));
      }
      if (*(void **)(pTVar2 + 9) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 9));
      }
      *(undefined4 *)((longlong)(pTVar2 + 7) + 8) = 0;
      if (*(void **)(pTVar2 + 7) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 7));
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pTVar2 + 3));
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((void *)((FLiveLinkSkeletonStaticData *)(pTVar2 + -1))->_padding_ != (void *)0x0) {
        FMemory::Free((void *)((FLiveLinkSkeletonStaticData *)(pTVar2 + -1))->_padding_);
      }
      if (*(void **)(pTVar2 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -2));
      }
      UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
                ((UInstancedStaticMeshComponent *)(pTVar2 + -0xa3));
      pTVar2 = pTVar2 + 0xb2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DuplicateObject<ULiveLinkSourceSettings> @ 14cffd200

ULiveLinkSourceSettings * __cdecl
DuplicateObject<ULiveLinkSourceSettings>
          (TObjectPtr<ULiveLinkSourceSettings> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  ULiveLinkSourceSettings *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
  pUVar2 = (ULiveLinkSourceSettings *)
           DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<ULiveLinkSourceSettings> @ 14cffd250

ULiveLinkSourceSettings * __cdecl
DuplicateObject<ULiveLinkSourceSettings>
          (ULiveLinkSourceSettings *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  ULiveLinkSourceSettings *pUVar2;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
  pUVar2 = (ULiveLinkSourceSettings *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<ULiveLinkSubjectSettings> @ 14cffd2a0

ULiveLinkSubjectSettings * __cdecl
DuplicateObject<ULiveLinkSubjectSettings>
          (TObjectPtr<ULiveLinkSubjectSettings> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  ULiveLinkSubjectSettings *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  pUVar2 = (ULiveLinkSubjectSettings *)
           DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<ULiveLinkSubjectSettings> @ 14cffd2f0

ULiveLinkSubjectSettings * __cdecl
DuplicateObject<ULiveLinkSubjectSettings>
          (ULiveLinkSubjectSettings *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  ULiveLinkSubjectSettings *pUVar2;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  pUVar2 = (ULiveLinkSubjectSettings *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<ULiveLinkVirtualSubject> @ 14cffd340

ULiveLinkVirtualSubject * __cdecl
DuplicateObject<ULiveLinkVirtualSubject>
          (TObjectPtr<ULiveLinkVirtualSubject> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  ULiveLinkVirtualSubject *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
  pUVar2 = (ULiveLinkVirtualSubject *)
           DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<ULiveLinkVirtualSubject> @ 14cffd390

ULiveLinkVirtualSubject * __cdecl
DuplicateObject<ULiveLinkVirtualSubject>
          (ULiveLinkVirtualSubject *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  ULiveLinkVirtualSubject *pUVar2;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
  pUVar2 = (ULiveLinkVirtualSubject *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// FindExistingActionWithPredicate<FLiveLinkMessageBusFinderAction,`FLatentActionManager::FindExistingAction<FLiveLinkMessageBusFinderAction>'::__l2::FFirstItemPredicate> @ 14cfffc80

FLiveLinkMessageBusFinderAction * __thiscall
FLatentActionManager::
FindExistingActionWithPredicate<FLiveLinkMessageBusFinderAction,_FLatentActionManager::FindExistingAction<FLiveLinkMessageBusFinderAction>_::__l2::FFirstItemPredicate>
          (FLatentActionManager *this,UObject *param_1,int param_2,FFirstItemPredicate *param_3)

{
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *this_00;
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  int iStack_2c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return (FLiveLinkMessageBusFinderAction *)0x0;
  }
  puVar3 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &(this->ObjectToActionListMap).field_0x38;
  }
  iVar1 = *(int *)(puVar3 + (((ulonglong)local_res8 >> 0x20 ^ (ulonglong)local_res8 & 0xffffffff) &
                            (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4)
  ;
  if (iVar1 == -1) {
    return (FLiveLinkMessageBusFinderAction *)0x0;
  }
  while( true ) {
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
    if (((int)*puVar2 == local_res8.ObjectIndex) &&
       ((int)((ulonglong)*puVar2 >> 0x20) == local_res8.ObjectSerialNumber)) break;
    iVar1 = *(int *)(puVar2 + 3);
    if (iVar1 == -1) {
      return (FLiveLinkMessageBusFinderAction *)0x0;
    }
  }
  if (iVar1 == -1) {
    return (FLiveLinkMessageBusFinderAction *)0x0;
  }
  puVar4 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (FLiveLinkMessageBusFinderAction *)0x0;
  }
  this_00 = (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
             *)*puVar4;
  if (this_00 ==
      (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
       *)0x0) {
    return (FLiveLinkMessageBusFinderAction *)0x0;
  }
  iVar1 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
          ::Num(this_00,param_2);
  if (iVar1 < 1) {
    return (FLiveLinkMessageBusFinderAction *)0x0;
  }
  iStack_2c = -1;
  if (*(int *)&this_00->field_0x48 != 0) {
    puVar3 = *(undefined1 **)&this_00->field_0x40;
    if (*(undefined1 **)&this_00->field_0x40 == (undefined1 *)0x0) {
      puVar3 = &this_00->field_0x38;
    }
    iStack_2c = *(int *)(puVar3 + ((longlong)*(int *)&this_00->field_0x48 - 1U & (longlong)param_2)
                                  * 4);
    if (iStack_2c != -1) {
      do {
        iVar1 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iStack_2c * 0x18);
        if (*(int *)(*(longlong *)this_00 + (longlong)iStack_2c * 0x18) == param_2) break;
        iStack_2c = iVar1;
      } while (iVar1 != -1);
    }
  }
  if (iStack_2c == -1) {
    return (FLiveLinkMessageBusFinderAction *)0x0;
  }
  return *(FLiveLinkMessageBusFinderAction **)
          (*(longlong *)this_00 + 8 + (longlong)iStack_2c * 0x18);
}

// FindExistingActionWithPredicate<FApplyToClientLatentAction,`FLatentActionManager::FindExistingAction<FApplyToClientLatentAction>'::__l2::FFirstItemPredicate> @ 14cfffe40

FApplyToClientLatentAction * __thiscall
FLatentActionManager::
FindExistingActionWithPredicate<FApplyToClientLatentAction,_FLatentActionManager::FindExistingAction<FApplyToClientLatentAction>_::__l2::FFirstItemPredicate>
          (FLatentActionManager *this,UObject *param_1,int param_2,FFirstItemPredicate *param_3)

{
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *this_00;
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  int iStack_2c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return (FApplyToClientLatentAction *)0x0;
  }
  puVar3 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &(this->ObjectToActionListMap).field_0x38;
  }
  iVar1 = *(int *)(puVar3 + (((ulonglong)local_res8 >> 0x20 ^ (ulonglong)local_res8 & 0xffffffff) &
                            (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4)
  ;
  if (iVar1 == -1) {
    return (FApplyToClientLatentAction *)0x0;
  }
  while( true ) {
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
    if (((int)*puVar2 == local_res8.ObjectIndex) &&
       ((int)((ulonglong)*puVar2 >> 0x20) == local_res8.ObjectSerialNumber)) break;
    iVar1 = *(int *)(puVar2 + 3);
    if (iVar1 == -1) {
      return (FApplyToClientLatentAction *)0x0;
    }
  }
  if (iVar1 == -1) {
    return (FApplyToClientLatentAction *)0x0;
  }
  puVar4 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (FApplyToClientLatentAction *)0x0;
  }
  this_00 = (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
             *)*puVar4;
  if (this_00 ==
      (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
       *)0x0) {
    return (FApplyToClientLatentAction *)0x0;
  }
  iVar1 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
          ::Num(this_00,param_2);
  if (iVar1 < 1) {
    return (FApplyToClientLatentAction *)0x0;
  }
  iStack_2c = -1;
  if (*(int *)&this_00->field_0x48 != 0) {
    puVar3 = *(undefined1 **)&this_00->field_0x40;
    if (*(undefined1 **)&this_00->field_0x40 == (undefined1 *)0x0) {
      puVar3 = &this_00->field_0x38;
    }
    iStack_2c = *(int *)(puVar3 + ((longlong)*(int *)&this_00->field_0x48 - 1U & (longlong)param_2)
                                  * 4);
    if (iStack_2c != -1) {
      do {
        iVar1 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iStack_2c * 0x18);
        if (*(int *)(*(longlong *)this_00 + (longlong)iStack_2c * 0x18) == param_2) break;
        iStack_2c = iVar1;
      } while (iVar1 != -1);
    }
  }
  if (iStack_2c == -1) {
    return (FApplyToClientLatentAction *)0x0;
  }
  return *(FApplyToClientLatentAction **)(*(longlong *)this_00 + 8 + (longlong)iStack_2c * 0x18);
}

// ForEachComponent_Internal<ULiveLinkDataPreviewComponent,1,1,`AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d000780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<ULiveLinkDataPreviewComponent,1,1,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  ULiveLinkDataPreviewComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = ULiveLinkDataPreviewComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14d0008a3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14d0008a3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d00093d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14d00093d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14d000a40;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14d000a40:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<ULiveLinkDataPreviewComponent,1,1,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(ULiveLinkDataPreviewComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (ULiveLinkDataPreviewComponent *)0x0) {
      `AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<ULiveLinkDataPreviewComponent,1,0,`AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d000cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<ULiveLinkDataPreviewComponent,1,0,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ULiveLinkDataPreviewComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = ULiveLinkDataPreviewComponent::StaticClass();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14d000db6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d000db6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d000e3d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d000e3d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d000f41;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14d000f41:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(ULiveLinkDataPreviewComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (ULiveLinkDataPreviewComponent *)0x0) {
      `AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<ULiveLinkDataPreviewComponent,0,1,`AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d000fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<ULiveLinkDataPreviewComponent,0,1,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ULiveLinkDataPreviewComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = ULiveLinkDataPreviewComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14d0010b3;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14d0010b3:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14d001160;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14d001160:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14d001270;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14d001270:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<ULiveLinkDataPreviewComponent,0,1,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(ULiveLinkDataPreviewComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (ULiveLinkDataPreviewComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<ULiveLinkDataPreviewComponent,0,0,`AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d001500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<ULiveLinkDataPreviewComponent,0,0,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ULiveLinkDataPreviewComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = ULiveLinkDataPreviewComponent::StaticClass();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14d0015de;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14d0015de:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14d00166f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14d00166f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14d001780;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14d001780:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(ULiveLinkDataPreviewComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (ULiveLinkDataPreviewComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USkeletalMeshComponent,1,1,`AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d001820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,1,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14d001943;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14d001943:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d0019dd;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14d0019dd:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14d001ae0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14d001ae0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,1,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      `AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>
      ::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USkeletalMeshComponent,1,0,`AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d001d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USkeletalMeshComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14d001e56;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d001e56:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d001edd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d001edd:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d001fe1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14d001fe1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(USkeletalMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (USkeletalMeshComponent *)0x0) {
      `AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>
      ::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USkeletalMeshComponent,0,1,`AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d002060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,0,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14d002153;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14d002153:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14d002200;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14d002200:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14d002310;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14d002310:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,0,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USkeletalMeshComponent,0,0,`AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d0025a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  USkeletalMeshComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14d00267e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14d00267e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14d00270f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14d00270f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14d002820;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14d002820:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(USkeletalMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (USkeletalMeshComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetDefault<ULiveLinkSettings> @ 14d002ca0

ULiveLinkSettings * __cdecl GetDefault<ULiveLinkSettings>(void)

{
  UClass *this;
  
  this = ULiveLinkSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (ULiveLinkSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (ULiveLinkSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeHash<FLiveLinkDebugUIEntry_const_,1> @ 14d002df0

uint __cdecl
GetTypeHash<FLiveLinkDebugUIEntry_const_,1>(TSharedPtr<FLiveLinkDebugUIEntry_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<SLiveLinkMessageBusSourceFactory::FLiveLinkSource_const_,1> @ 14d002e20

uint __cdecl
GetTypeHash<SLiveLinkMessageBusSourceFactory::FLiveLinkSource_const_,1>
          (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<ULiveLinkPreset> @ 14d002e50

FString * __cdecl GetTypeName<ULiveLinkPreset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ULiveLinkPreset::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ULiveLinkSubjectSettings> @ 14d002e90

FString * __cdecl GetTypeName<ULiveLinkSubjectSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,`FLiveLinkMotionController::BuildSourceData'::__l11::<lambda_1>_>_> @ 14d002ed0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,_FLiveLinkMotionController::BuildSourceData_::__l11::<lambda_1>_>_>
          (TTuple<FGuid,FText> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FGuid,FText>,_public:_void___cdecl_FLiveLinkMotionController::BuildSourceData(void)_::_11_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  <lambda_1> *p<Var11;
  int iVar12;
  TTuple<FGuid,FText> *pTVar13;
  longlong lVar14;
  int iVar15;
  TTuple<FGuid,FText> *pTVar16;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TTuple<FGuid,FText>,_FLiveLinkMotionController::BuildSourceData_::__l11::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TTuple<FGuid,FText>,_public:_void___cdecl_FLiveLinkMotionController::BuildSourceData(void)_::_11_::<lambda_1>_>
              *)&local_res20);
  iVar15 = param_2 + -1;
  lVar14 = (longlong)iVar15;
  if (0 < iVar15) {
    pTVar16 = param_1 + lVar14;
    p<Var11 = local_res20;
    do {
      uVar3 = *(undefined8 *)&pTVar16->field_0x8;
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)&param_1->field_0x8;
      uVar6 = *(undefined8 *)&param_1->field_0x10;
      uVar7 = *(undefined8 *)&param_1->field_0x18;
      *(undefined8 *)param_1 = *(undefined8 *)pTVar16;
      *(undefined8 *)&param_1->field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&pTVar16->field_0x18;
      *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar16->field_0x10;
      *(undefined8 *)&param_1->field_0x18 = uVar3;
      *(undefined8 *)pTVar16 = uVar4;
      *(undefined8 *)&pTVar16->field_0x8 = uVar5;
      *(undefined8 *)&pTVar16->field_0x10 = uVar6;
      *(undefined8 *)&pTVar16->field_0x18 = uVar7;
      iVar10 = 0;
      if (1 < iVar15) {
        do {
          iVar2 = iVar10 * 2;
          iVar12 = iVar2 + 1;
          if (iVar2 + 2 < iVar15) {
            pTVar13 = param_1 + (longlong)iVar2 + 2;
            if ((((*(uint *)&pTVar13->field_0xc == (p<Var11->CaptureWildcardSource).D &&
                  *(uint *)&pTVar13->field_0x8 == (p<Var11->CaptureWildcardSource).C) &&
                 *(uint *)&pTVar13->field_0x4 == (p<Var11->CaptureWildcardSource).B) &&
                 *(uint *)pTVar13 == (p<Var11->CaptureWildcardSource).A) ||
               (iVar9 = FText::CompareToCaseIgnored
                                  ((FText *)&pTVar13->field_0x10,
                                   (FText *)&param_1[iVar12].field_0x10), p<Var11 = local_res20,
               iVar9 < 1)) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              iVar12 = iVar2;
            }
            iVar12 = iVar12 + 1;
          }
          pTVar13 = param_1 + iVar10;
          if ((((*(uint *)&pTVar13->field_0xc != (p<Var11->CaptureWildcardSource).D ||
                *(uint *)&pTVar13->field_0x8 != (p<Var11->CaptureWildcardSource).C) ||
               *(uint *)&pTVar13->field_0x4 != (p<Var11->CaptureWildcardSource).B) ||
               (p<Var11->CaptureWildcardSource).A != *(uint *)pTVar13) &&
             (iVar10 = FText::CompareToCaseIgnored
                                 ((FText *)&pTVar13->field_0x10,(FText *)&param_1[iVar12].field_0x10
                                 ), p<Var11 = local_res20, 0 < iVar10)) break;
          uVar3 = *(undefined8 *)pTVar13;
          uVar4 = *(undefined8 *)&pTVar13->field_0x8;
          uVar5 = *(undefined8 *)&pTVar13->field_0x10;
          uVar6 = *(undefined8 *)&pTVar13->field_0x18;
          uVar7 = *(undefined8 *)&param_1[iVar12].field_0x8;
          *(undefined8 *)pTVar13 = *(undefined8 *)(param_1 + iVar12);
          *(undefined8 *)&pTVar13->field_0x8 = uVar7;
          uVar7 = *(undefined8 *)(&param_1[iVar12].field_0x10 + 8);
          *(undefined8 *)&pTVar13->field_0x10 = *(undefined8 *)&param_1[iVar12].field_0x10;
          *(undefined8 *)&pTVar13->field_0x18 = uVar7;
          *(undefined8 *)(param_1 + iVar12) = uVar3;
          *(undefined8 *)&param_1[iVar12].field_0x8 = uVar4;
          *(undefined8 *)&param_1[iVar12].field_0x10 = uVar5;
          *(undefined8 *)(&param_1[iVar12].field_0x10 + 8) = uVar6;
          iVar10 = iVar12;
        } while (iVar12 * 2 + 1 < iVar15);
      }
      iVar15 = iVar15 + -1;
      lVar14 = lVar14 + -1;
      pTVar16 = pTVar16 + -1;
    } while (0 < lVar14);
  }
  return;
}

// HeapSortInternal<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,`FLiveLinkSubject::AdjustSubFrame_SceneTime'::__l29::<lambda_1>,TLess<void>_> @ 14d0030b0

void __cdecl
AlgoImpl::
HeapSortInternal<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,_FLiveLinkSubject::AdjustSubFrame_SceneTime_::__l29::<lambda_1>,TLess<void>_>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1,int param_2,<lambda_1> param_3,
          TLess<void> param_4)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar2;
  double dVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr FVar8;
  uchar *puVar9;
  FWeakObjectPtr FVar10;
  undefined7 uVar11;
  undefined7 uVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  double *pdVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar23;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar19 = iVar16;
  iVar22 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14d003217:
      if (iVar22 == 0) {
        iVar16 = param_2 + -1;
        lVar21 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar23 = param_1 + lVar21;
          do {
            FVar7 = (pFVar23->WrappedStruct).ScriptStruct.WeakPtr;
            iVar20 = 0;
            bVar14 = (param_1->WrappedStruct).OwnsMemory;
            uVar12 = *(undefined7 *)&(param_1->WrappedStruct).field_0x21;
            lVar13 = (param_1->WrappedStruct)._padding_;
            uVar5 = *(undefined4 *)((longlong)&(param_1->WrappedStruct)._padding_ + 4);
            iVar19 = (param_1->WrappedStruct).ScriptStruct.WeakPtr.ObjectIndex;
            iVar15 = (param_1->WrappedStruct).ScriptStruct.WeakPtr.ObjectSerialNumber;
            puVar9 = (param_1->WrappedStruct).SampleStructMemory;
            FVar8 = (param_1->WrappedStruct).Package.WeakPtr;
            (param_1->WrappedStruct)._padding_ = (pFVar23->WrappedStruct)._padding_;
            (param_1->WrappedStruct).ScriptStruct.WeakPtr = FVar7;
            uVar6 = *(undefined4 *)((longlong)&(pFVar23->WrappedStruct).SampleStructMemory + 4);
            iVar22 = (pFVar23->WrappedStruct).Package.WeakPtr.ObjectIndex;
            iVar18 = (pFVar23->WrappedStruct).Package.WeakPtr.ObjectSerialNumber;
            *(undefined4 *)&(param_1->WrappedStruct).SampleStructMemory =
                 *(undefined4 *)&(pFVar23->WrappedStruct).SampleStructMemory;
            *(undefined4 *)((longlong)&(param_1->WrappedStruct).SampleStructMemory + 4) = uVar6;
            (param_1->WrappedStruct).Package.WeakPtr.ObjectIndex = iVar22;
            (param_1->WrappedStruct).Package.WeakPtr.ObjectSerialNumber = iVar18;
            uVar11 = *(undefined7 *)&(pFVar23->WrappedStruct).field_0x21;
            (param_1->WrappedStruct).OwnsMemory = (pFVar23->WrappedStruct).OwnsMemory;
            *(undefined7 *)&(param_1->WrappedStruct).field_0x21 = uVar11;
            *(int *)&(pFVar23->WrappedStruct)._padding_ = (int)lVar13;
            *(undefined4 *)((longlong)&(pFVar23->WrappedStruct)._padding_ + 4) = uVar5;
            (pFVar23->WrappedStruct).ScriptStruct.WeakPtr.ObjectIndex = iVar19;
            (pFVar23->WrappedStruct).ScriptStruct.WeakPtr.ObjectSerialNumber = iVar15;
            (pFVar23->WrappedStruct).SampleStructMemory = puVar9;
            (pFVar23->WrappedStruct).Package.WeakPtr = FVar8;
            (pFVar23->WrappedStruct).OwnsMemory = bVar14;
            *(undefined7 *)&(pFVar23->WrappedStruct).field_0x21 = uVar12;
            if (1 < iVar16) {
              do {
                iVar15 = iVar20 * 2;
                iVar19 = iVar15 + 1;
                if (iVar15 + 2 < iVar16) {
                  pdVar17 = (double *)
                            (**(code **)(param_1[(longlong)iVar15 + 2].WrappedStruct._padding_ +
                                        0x10))(param_1 + (longlong)iVar15 + 2);
                  dVar3 = *pdVar17;
                  pdVar17 = (double *)
                            (**(code **)(param_1[iVar19].WrappedStruct._padding_ + 0x10))
                                      (param_1 + iVar19);
                  if (dVar3 < *pdVar17) {
                    iVar19 = iVar15;
                  }
                  iVar19 = iVar19 + 1;
                }
                pFVar1 = param_1 + iVar20;
                pdVar17 = (double *)
                          (**(code **)(param_1[iVar20].WrappedStruct._padding_ + 0x10))(pFVar1);
                dVar3 = *pdVar17;
                pFVar2 = param_1 + iVar19;
                pdVar17 = (double *)
                          (**(code **)(param_1[iVar19].WrappedStruct._padding_ + 0x10))(pFVar2);
                if (*pdVar17 <= dVar3) break;
                FVar7 = (pFVar2->WrappedStruct).ScriptStruct.WeakPtr;
                bVar14 = (pFVar1->WrappedStruct).OwnsMemory;
                uVar12 = *(undefined7 *)&(pFVar1->WrappedStruct).field_0x21;
                lVar13 = (pFVar1->WrappedStruct)._padding_;
                uVar5 = *(undefined4 *)((longlong)&(pFVar1->WrappedStruct)._padding_ + 4);
                iVar15 = (pFVar1->WrappedStruct).ScriptStruct.WeakPtr.ObjectIndex;
                iVar22 = (pFVar1->WrappedStruct).ScriptStruct.WeakPtr.ObjectSerialNumber;
                puVar9 = (pFVar1->WrappedStruct).SampleStructMemory;
                FVar8 = (pFVar1->WrappedStruct).Package.WeakPtr;
                (pFVar1->WrappedStruct)._padding_ = (pFVar2->WrappedStruct)._padding_;
                (pFVar1->WrappedStruct).ScriptStruct.WeakPtr = FVar7;
                uVar6 = *(undefined4 *)((longlong)&(pFVar2->WrappedStruct).SampleStructMemory + 4);
                iVar18 = (pFVar2->WrappedStruct).Package.WeakPtr.ObjectIndex;
                iVar20 = (pFVar2->WrappedStruct).Package.WeakPtr.ObjectSerialNumber;
                *(undefined4 *)&(pFVar1->WrappedStruct).SampleStructMemory =
                     *(undefined4 *)&(pFVar2->WrappedStruct).SampleStructMemory;
                *(undefined4 *)((longlong)&(pFVar1->WrappedStruct).SampleStructMemory + 4) = uVar6;
                (pFVar1->WrappedStruct).Package.WeakPtr.ObjectIndex = iVar18;
                (pFVar1->WrappedStruct).Package.WeakPtr.ObjectSerialNumber = iVar20;
                uVar11 = *(undefined7 *)&(pFVar2->WrappedStruct).field_0x21;
                (pFVar1->WrappedStruct).OwnsMemory = (pFVar2->WrappedStruct).OwnsMemory;
                *(undefined7 *)&(pFVar1->WrappedStruct).field_0x21 = uVar11;
                *(int *)&(pFVar2->WrappedStruct)._padding_ = (int)lVar13;
                *(undefined4 *)((longlong)&(pFVar2->WrappedStruct)._padding_ + 4) = uVar5;
                (pFVar2->WrappedStruct).ScriptStruct.WeakPtr.ObjectIndex = iVar15;
                (pFVar2->WrappedStruct).ScriptStruct.WeakPtr.ObjectSerialNumber = iVar22;
                (pFVar2->WrappedStruct).SampleStructMemory = puVar9;
                (pFVar2->WrappedStruct).Package.WeakPtr = FVar8;
                (pFVar2->WrappedStruct).OwnsMemory = bVar14;
                *(undefined7 *)&(pFVar2->WrappedStruct).field_0x21 = uVar12;
                iVar20 = iVar19;
              } while (iVar19 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar21 = lVar21 + -1;
            pFVar23 = pFVar23 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar15 = iVar22 + -1;
      iVar16 = iVar19 + -2;
      iVar19 = iVar16;
      iVar22 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar18 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      pdVar17 = (double *)
                (**(code **)(param_1[(longlong)iVar16 + 2].WrappedStruct._padding_ + 0x10))
                          (param_1 + (longlong)iVar16 + 2);
      dVar3 = *pdVar17;
      pdVar17 = (double *)
                (**(code **)(param_1[iVar18].WrappedStruct._padding_ + 0x10))(param_1 + iVar18);
      if (dVar3 < *pdVar17) {
        iVar18 = iVar16;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar23 = param_1 + iVar15;
    pdVar17 = (double *)(**(code **)(param_1[iVar15].WrappedStruct._padding_ + 0x10))(pFVar23);
    dVar3 = *pdVar17;
    pFVar1 = param_1 + iVar18;
    pdVar17 = (double *)(**(code **)(param_1[iVar18].WrappedStruct._padding_ + 0x10))(pFVar1);
    if (*pdVar17 <= dVar3) goto LAB_14d003217;
    FVar7 = (pFVar1->WrappedStruct).ScriptStruct.WeakPtr;
    iVar16 = iVar18 * 2 + 1;
    bVar14 = (pFVar23->WrappedStruct).OwnsMemory;
    uVar12 = *(undefined7 *)&(pFVar23->WrappedStruct).field_0x21;
    lVar21 = (pFVar23->WrappedStruct)._padding_;
    FVar8 = (pFVar23->WrappedStruct).ScriptStruct.WeakPtr;
    puVar9 = (pFVar23->WrappedStruct).SampleStructMemory;
    FVar10 = (pFVar23->WrappedStruct).Package.WeakPtr;
    (pFVar23->WrappedStruct)._padding_ = (pFVar1->WrappedStruct)._padding_;
    (pFVar23->WrappedStruct).ScriptStruct.WeakPtr = FVar7;
    FVar7 = (pFVar1->WrappedStruct).Package.WeakPtr;
    (pFVar23->WrappedStruct).SampleStructMemory = (pFVar1->WrappedStruct).SampleStructMemory;
    (pFVar23->WrappedStruct).Package.WeakPtr = FVar7;
    uVar11 = *(undefined7 *)&(pFVar1->WrappedStruct).field_0x21;
    (pFVar23->WrappedStruct).OwnsMemory = (pFVar1->WrappedStruct).OwnsMemory;
    *(undefined7 *)&(pFVar23->WrappedStruct).field_0x21 = uVar11;
    (pFVar1->WrappedStruct)._padding_ = lVar21;
    (pFVar1->WrappedStruct).ScriptStruct.WeakPtr = FVar8;
    (pFVar1->WrappedStruct).SampleStructMemory = puVar9;
    (pFVar1->WrappedStruct).Package.WeakPtr = FVar10;
    (pFVar1->WrappedStruct).OwnsMemory = bVar14;
    *(undefined7 *)&(pFVar1->WrappedStruct).field_0x21 = uVar12;
    iVar15 = iVar18;
  } while( true );
}

// HeapifyInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TTuple<FGuid,FText>,`FLiveLinkMotionController::BuildSourceData'::__l11::<lambda_1>_>_>_> @ 14d003390

void __cdecl
AlgoImpl::
HeapifyInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TTuple<FGuid,FText>,_FLiveLinkMotionController::BuildSourceData_::__l11::<lambda_1>_>_>_>
          (TTuple<FGuid,FText> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TTuple<FGuid,FText>,_public:_void___cdecl_FLiveLinkMotionController::BuildSourceData(void)_::_11_::<lambda_1>_>_>
          param_4)

{
  <lambda_1> *p<Var1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TTuple<FGuid,FText> *pTVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar3 = iVar12;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_14d0034fe:
      if (iVar15 == 0) {
        return;
      }
      iVar10 = iVar15 + -1;
      iVar12 = iVar3 + -2;
      iVar3 = iVar12;
      iVar15 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar13 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      p<Var1 = (param_4.Predicate)->Predicate;
      pTVar14 = param_1 + (longlong)iVar12 + 2;
      if (((((p<Var1->CaptureWildcardSource).D == *(uint *)&pTVar14->field_0xc &&
            (p<Var1->CaptureWildcardSource).C == *(uint *)&pTVar14->field_0x8) &&
           (p<Var1->CaptureWildcardSource).B == *(uint *)&pTVar14->field_0x4) &&
           *(uint *)pTVar14 == (p<Var1->CaptureWildcardSource).A) ||
         (iVar11 = FText::CompareToCaseIgnored
                             ((FText *)&pTVar14->field_0x10,(FText *)&param_1[iVar13].field_0x10),
         iVar11 < 1)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        iVar13 = iVar12;
      }
      iVar13 = iVar13 + 1;
    }
    p<Var1 = (param_4.Predicate)->Predicate;
    pTVar14 = param_1 + iVar10;
    if (((((p<Var1->CaptureWildcardSource).D != *(uint *)&pTVar14->field_0xc ||
          (p<Var1->CaptureWildcardSource).C != *(uint *)&pTVar14->field_0x8) ||
         (p<Var1->CaptureWildcardSource).B != *(uint *)&pTVar14->field_0x4) ||
         *(uint *)pTVar14 != (p<Var1->CaptureWildcardSource).A) &&
       (iVar12 = FText::CompareToCaseIgnored
                           ((FText *)&pTVar14->field_0x10,(FText *)&param_1[iVar13].field_0x10),
       0 < iVar12)) goto LAB_14d0034fe;
    uVar4 = *(undefined8 *)pTVar14;
    uVar5 = *(undefined8 *)&pTVar14->field_0x8;
    uVar6 = *(undefined8 *)&pTVar14->field_0x10;
    uVar7 = *(undefined8 *)&pTVar14->field_0x18;
    uVar8 = *(undefined8 *)&param_1[iVar13].field_0x8;
    *(undefined8 *)pTVar14 = *(undefined8 *)(param_1 + iVar13);
    *(undefined8 *)&pTVar14->field_0x8 = uVar8;
    uVar8 = *(undefined8 *)(&param_1[iVar13].field_0x10 + 8);
    *(undefined8 *)&pTVar14->field_0x10 = *(undefined8 *)&param_1[iVar13].field_0x10;
    *(undefined8 *)&pTVar14->field_0x18 = uVar8;
    iVar12 = iVar13 * 2 + 1;
    *(undefined8 *)(param_1 + iVar13) = uVar4;
    *(undefined8 *)&param_1[iVar13].field_0x8 = uVar5;
    *(undefined8 *)&param_1[iVar13].field_0x10 = uVar6;
    *(undefined8 *)(&param_1[iVar13].field_0x10 + 8) = uVar7;
    iVar10 = iVar13;
  } while( true );
}

// InternalConstructor<ALiveLinkDataPreview> @ 14d0036b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALiveLinkDataPreview>(FObjectInitializer *param_1)

{
  TRotator<double> *pTVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int *piVar4;
  FActorTickFunction *this;
  AActor **this_00;
  FVector_NetQuantize100 *this_01;
  undefined1 *this_02;
  TObjectPtr<USceneComponent> *pTVar5;
  FUtf8String *this_03;
  TVector<double> *this_04;
  double *pdVar6;
  uint *puVar7;
  int iVar8;
  AActor *this_05;
  longlong *plVar9;
  double dVar10;
  ForAnyElementType FVar11;
  int iVar12;
  bool bVar13;
  FName *pFVar14;
  UClass *pUVar15;
  USceneComponent *pUVar16;
  USceneComponent *this_06;
  FName FVar17;
  FName FVar18;
  FUObjectItem *pFVar19;
  TQuat<double> *pTVar20;
  size_t sVar21;
  FName FStackX_8;
  FName FStackX_10;
  TVector<double>_u_0 TStack_198;
  FSoftObjectPath FStack_178;
  FSoftObjectPath FStack_158;
  FSoftObjectPath FStack_138;
  FSoftObjectPath FStack_118;
  FSoftObjectPath FStack_f8;
  FSoftObjectPath FStack_d8;
  FSoftObjectPath aFStack_b8 [2];
  TQuat<double> aTStack_78 [2];
  
  this_05 = (AActor *)param_1->Obj;
  if (this_05 == (AActor *)0x0) {
    return;
  }
  AActor::AActor(this_05);
  this = &this_05[1].PrimaryActorTick;
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  this_05->_padding_ = (longlong)&___7ALiveLinkDataPreview__6B_;
  FVar17 = (FName)((longlong)&this_05[1].PrimaryActorTick._padding_ + 4);
  this_05[1]._padding_ = 0;
  this_05[1]._padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this_05[1].PrimaryActorTick._padding_ = 0;
  *(int *)FVar17 = 0;
  this_05[1]._padding_ = 0;
  this_05[1]._padding_ = 0;
  this_05[1]._padding_ = 0;
  FStackX_10 = FVar17;
  FUtf8String::Reset((FUtf8String *)this,0);
  this_00 = &this_05[1].PrimaryActorTick.Target;
  this_05[1].PrimaryActorTick._padding_ = 0;
  *this_00 = (AActor *)0x0;
  *(undefined8 *)&this_05[1].field_0x58 = 0;
  this_05[1].PrimaryActorTick._padding_ = 0;
  this_05[1].PrimaryActorTick._padding_ = 0;
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &this_05[1].AttachmentReplication.LocationOffset;
  this_05[1].RemoteRole = '\0';
  this_05[1].ActorCategory = '\0';
  *(undefined2 *)&this_05[1].field_0x62 = 0;
  this_05[1].InitialLifeSpan = 0.0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&this_05[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
  this_05[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
  this_05[1].CustomTimeDilation = 0.0;
  this_05[1].RayTracingGroupId = 0;
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  FUtf8String::Reset((FUtf8String *)this_01,0);
  this_02 = &this_05[1].AttachmentReplication.RelativeScale3D.field_0x10;
  *(undefined8 *)&this_05[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
  *(undefined8 *)this_02 = 0;
  this_05[1].AttachmentReplication.RotationOffset.Pitch = 0.0;
  *(undefined8 *)&this_05[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
  *(undefined8 *)&this_05[1].AttachmentReplication.RelativeScale3D = 0;
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  FUtf8String::Reset((FUtf8String *)this_02,0);
  pTVar5 = &this_05[1].AttachmentReplication.AttachComponent;
  this_05[1].AttachmentReplication.RotationOffset.Yaw = 0.0;
  (pTVar5->field0_0x0).DebugPtr = (USceneComponent *)0x0;
  this_05[1].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.X = 0.0;
  this_05[1].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
  this_05[1].AttachmentReplication.AttachSocket.Number = 0;
  this_05[1].AttachmentReplication.RotationOffset.Roll = 0.0;
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  FUtf8String::Reset((FUtf8String *)pTVar5,0);
  this_03 = (FUtf8String *)((longlong)&this_05[1].ReplicatedMovement.AngularVelocity.field0_0x0 + 8)
  ;
  this_05[1].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.Y = 0.0;
  (this_03->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_05[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Z = 0.0;
  this_05[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.X = 0.0;
  this_05[1].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.Z = 0.0;
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  FUtf8String::Reset(this_03,0);
  this_04 = &this_05[1].ReplicatedMovement.Location;
  pTVar1 = &this_05[1].ReplicatedMovement.Rotation;
  (this_04->field0_0x0)._s_0.X = 0.0;
  pTVar1->Pitch = 0.0;
  this_05[1].ReplicatedMovement.Rotation.Yaw = 0.0;
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  this_05[1].ReplicatedMovement.Location.field0_0x0._s_0.Z = 0.0;
  this_05[1].ReplicatedMovement.Location.field0_0x0._s_0.Y = 0.0;
  FUtf8String::Reset((FUtf8String *)pTVar1,0);
  pbVar2 = (byte *)((longlong)&(this_05->PrimaryActorTick)._padding_ + 2);
  *pbVar2 = *pbVar2 | 2;
  TStack_198._8_4_ = 0x25;
  this_05[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.X = 0.0;
  this_05[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.Y = 0.0;
  this_05[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this_05[1].ReplicatedMovement.field_0x78 = 0;
  this_05[1].ReplicatedMovement.ServerPhysicsHandle = 0;
  this_05[1].ReplicatedMovement.LocationQuantizationLevel = RoundWholeNumber;
  this_05[1].ReplicatedMovement.VelocityQuantizationLevel = RoundWholeNumber;
  this_05[1].ReplicatedMovement.RotationQuantizationLevel = ByteComponents;
  this_05[1].ReplicatedMovement.field_0x87 = 0;
  FStack_178.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_178.AssetPath.PackageName.Number = 0;
  FStack_178.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_178.AssetPath.AssetName.Number = 0;
  FStack_178.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_178.SubPathString.Data.ArrayNum = 0;
  FStack_178.SubPathString.Data.ArrayMax = 0;
  TStack_198._s_0.X = 2.807215514233e-314;
  *(undefined1 *)((longlong)&this_05[1].ReplicatedMovement.Rotation.Roll + 1) = 1;
  FSoftObjectPath::SetPath(&FStack_178,(TStringView<char> *)&TStack_198);
  FVar11.Data = FStack_178.SubPathString.Data.AllocatorInstance.Data;
  this_05[1]._padding_ = 0;
  this_05[1]._padding_ = (longlong)FStack_178.AssetPath.PackageName;
  this_05[1]._padding_ = (longlong)FStack_178.AssetPath.AssetName;
  if (this != (FActorTickFunction *)&FStack_178.SubPathString) {
    iVar12 = FStack_178.SubPathString.Data.ArrayNum;
    sVar21 = (size_t)FStack_178.SubPathString.Data.ArrayNum;
    iVar8 = *(int *)FVar17;
    *(int *)&this_05[1].PrimaryActorTick._padding_ = FStack_178.SubPathString.Data.ArrayNum;
    if ((FStack_178.SubPathString.Data.ArrayNum == 0) && (iVar8 == 0)) {
      *(int *)FStackX_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_178.SubPathString.Data.ArrayNum,iVar8,
                 (ForAnyElementType *)&this_05[1].PrimaryActorTick,
                 FStack_178.SubPathString.Data.ArrayNum,
                 (int *)((longlong)&this_05[1].PrimaryActorTick._padding_ + 4));
      if (iVar12 != 0) {
        memcpy((void *)this_05[1].PrimaryActorTick._padding_,FVar11.Data,sVar21);
      }
    }
  }
  if (FStack_178.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_178.SubPathString.Data.AllocatorInstance.Data);
  }
  TStack_198._8_4_ = 0x27;
  TStack_198._s_0.X = 2.80721553399563e-314;
  FStack_158.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_158.AssetPath.PackageName.Number = 0;
  FStack_158.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_158.AssetPath.AssetName.Number = 0;
  FStack_158.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_158.SubPathString.Data.ArrayNum = 0;
  FStack_158.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&FStack_158,(TStringView<char> *)&TStack_198);
  FVar11.Data = FStack_158.SubPathString.Data.AllocatorInstance.Data;
  this_05[1].PrimaryActorTick._padding_ = 0;
  this_05[1].PrimaryActorTick._padding_ = (longlong)FStack_158.AssetPath.PackageName;
  this_05[1].PrimaryActorTick._padding_ = (longlong)FStack_158.AssetPath.AssetName;
  if ((FUtf8String *)this_00 != &FStack_158.SubPathString) {
    iVar8 = FStack_158.SubPathString.Data.ArrayNum;
    sVar21 = (size_t)FStack_158.SubPathString.Data.ArrayNum;
    puVar3 = &this_05[1].field_0x5c;
    *(int *)&this_05[1].field_0x58 = FStack_158.SubPathString.Data.ArrayNum;
    if ((FStack_158.SubPathString.Data.ArrayNum == 0) && (*(int *)puVar3 == 0)) {
      *(undefined4 *)puVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_158.SubPathString.Data.ArrayNum,*(int *)puVar3,
                 (ForAnyElementType *)this_00,FStack_158.SubPathString.Data.ArrayNum,(int *)puVar3);
      if (iVar8 != 0) {
        memcpy(*this_00,FVar11.Data,sVar21);
      }
    }
  }
  if (FStack_158.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_158.SubPathString.Data.AllocatorInstance.Data);
  }
  TStack_198._8_4_ = 0x2f;
  TStack_198._s_0.X = 2.80721555375825e-314;
  FStack_138.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_138.AssetPath.PackageName.Number = 0;
  FStack_138.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_138.AssetPath.AssetName.Number = 0;
  FStack_138.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_138.SubPathString.Data.ArrayNum = 0;
  FStack_138.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&FStack_138,(TStringView<char> *)&TStack_198);
  FVar11.Data = FStack_138.SubPathString.Data.AllocatorInstance.Data;
  this_05[1].RemoteRole = '\0';
  this_05[1].ActorCategory = '\0';
  *(undefined2 *)&this_05[1].field_0x62 = 0;
  this_05[1].InitialLifeSpan = 0.0;
  this_05[1].CustomTimeDilation = (float)FStack_138.AssetPath.PackageName.ComparisonIndex.Value;
  this_05[1].RayTracingGroupId = FStack_138.AssetPath.PackageName.Number;
  this_05[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr =
       (AActor *)FStack_138.AssetPath.AssetName;
  if (this_01 != (FVector_NetQuantize100 *)&FStack_138.SubPathString) {
    iVar12 = FStack_138.SubPathString.Data.ArrayNum;
    sVar21 = (size_t)FStack_138.SubPathString.Data.ArrayNum;
    puVar3 = &this_05[1].AttachmentReplication.LocationOffset.field_0xc;
    iVar8 = *(int *)puVar3;
    *(int *)&this_05[1].AttachmentReplication.LocationOffset.field_0x8 =
         FStack_138.SubPathString.Data.ArrayNum;
    if ((FStack_138.SubPathString.Data.ArrayNum == 0) && (iVar8 == 0)) {
      *(undefined4 *)puVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_138.SubPathString.Data.ArrayNum,iVar8,(ForAnyElementType *)this_01,
                 FStack_138.SubPathString.Data.ArrayNum,(int *)puVar3);
      if (iVar12 != 0) {
        memcpy(*(void **)this_01,FVar11.Data,sVar21);
      }
    }
  }
  if (FStack_138.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_138.SubPathString.Data.AllocatorInstance.Data);
  }
  TStack_198._8_4_ = 0x37;
  TStack_198._s_0.X = 2.8072155774734e-314;
  FStack_118.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_118.AssetPath.PackageName.Number = 0;
  FStack_118.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_118.AssetPath.AssetName.Number = 0;
  FStack_118.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_118.SubPathString.Data.ArrayNum = 0;
  FStack_118.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&FStack_118,(TStringView<char> *)&TStack_198);
  FVar11.Data = FStack_118.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&this_05[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
  *(uint *)&this_05[1].AttachmentReplication.RelativeScale3D.field_0x0 =
       FStack_118.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&this_05[1].AttachmentReplication.RelativeScale3D.field_0x4 =
       FStack_118.AssetPath.PackageName.Number;
  *(uint *)&this_05[1].AttachmentReplication.RelativeScale3D.field_0x8 =
       FStack_118.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&this_05[1].AttachmentReplication.RelativeScale3D.field_0xc =
       FStack_118.AssetPath.AssetName.Number;
  if ((FUtf8String *)this_02 != &FStack_118.SubPathString) {
    iVar12 = FStack_118.SubPathString.Data.ArrayNum;
    sVar21 = (size_t)FStack_118.SubPathString.Data.ArrayNum;
    piVar4 = (int *)((longlong)&this_05[1].AttachmentReplication.RotationOffset.Pitch + 4);
    iVar8 = *piVar4;
    *(int *)&this_05[1].AttachmentReplication.RotationOffset.Pitch =
         FStack_118.SubPathString.Data.ArrayNum;
    if ((FStack_118.SubPathString.Data.ArrayNum == 0) && (iVar8 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_118.SubPathString.Data.ArrayNum,iVar8,(ForAnyElementType *)this_02,
                 FStack_118.SubPathString.Data.ArrayNum,piVar4);
      if (iVar12 != 0) {
        memcpy(*(void **)this_02,FVar11.Data,sVar21);
      }
    }
  }
  if (FStack_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.SubPathString.Data.AllocatorInstance.Data);
  }
  TStack_198._8_4_ = 0x35;
  TStack_198._s_0.X = 2.80721560514108e-314;
  FStack_f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_f8.AssetPath.PackageName.Number = 0;
  FStack_f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_f8.AssetPath.AssetName.Number = 0;
  FStack_f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_f8.SubPathString.Data.ArrayNum = 0;
  FStack_f8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&FStack_f8,(TStringView<char> *)&TStack_198);
  FVar11.Data = FStack_f8.SubPathString.Data.AllocatorInstance.Data;
  this_05[1].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.Y = 0.0;
  pdVar6 = &this_05[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Y;
  this_05[1].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.Z =
       (double)FStack_f8.AssetPath.PackageName;
  this_05[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.X =
       (double)FStack_f8.AssetPath.AssetName;
  if ((FUtf8String *)pdVar6 != &FStack_f8.SubPathString) {
    iVar12 = FStack_f8.SubPathString.Data.ArrayNum;
    sVar21 = (size_t)FStack_f8.SubPathString.Data.ArrayNum;
    piVar4 = (int *)((longlong)&this_05[1].ReplicatedMovement.AngularVelocity.field0_0x0 + 0x14);
    iVar8 = *piVar4;
    *(int *)((longlong)&this_05[1].ReplicatedMovement.AngularVelocity.field0_0x0 + 0x10) =
         FStack_f8.SubPathString.Data.ArrayNum;
    if ((FStack_f8.SubPathString.Data.ArrayNum == 0) && (iVar8 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_f8.SubPathString.Data.ArrayNum,iVar8,(ForAnyElementType *)pdVar6,
                 FStack_f8.SubPathString.Data.ArrayNum,piVar4);
      if (iVar12 != 0) {
        memcpy((void *)*pdVar6,FVar11.Data,sVar21);
      }
    }
  }
  if (FStack_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.SubPathString.Data.AllocatorInstance.Data);
  }
  TStack_198._8_4_ = 0x39;
  TStack_198._s_0.X = 2.80721563280876e-314;
  FStack_d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_d8.AssetPath.PackageName.Number = 0;
  FStack_d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_d8.AssetPath.AssetName.Number = 0;
  FStack_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_d8.SubPathString.Data.ArrayNum = 0;
  FStack_d8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&FStack_d8,(TStringView<char> *)&TStack_198);
  FVar11.Data = FStack_d8.SubPathString.Data.AllocatorInstance.Data;
  this_05[1].AttachmentReplication.RotationOffset.Yaw = 0.0;
  pTVar5 = &this_05[1].AttachmentReplication.AttachComponent;
  this_05[1].AttachmentReplication.RotationOffset.Roll = (double)FStack_d8.AssetPath.PackageName;
  this_05[1].AttachmentReplication.AttachSocket = FStack_d8.AssetPath.AssetName;
  if ((FUtf8String *)pTVar5 != &FStack_d8.SubPathString) {
    iVar12 = FStack_d8.SubPathString.Data.ArrayNum;
    sVar21 = (size_t)FStack_d8.SubPathString.Data.ArrayNum;
    piVar4 = (int *)((longlong)&this_05[1].ReplicatedMovement.LinearVelocity.field0_0x0 + 4);
    iVar8 = *piVar4;
    *(int *)&this_05[1].ReplicatedMovement.LinearVelocity.field0_0x0 =
         FStack_d8.SubPathString.Data.ArrayNum;
    if ((FStack_d8.SubPathString.Data.ArrayNum == 0) && (iVar8 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_d8.SubPathString.Data.ArrayNum,iVar8,(ForAnyElementType *)pTVar5,
                 FStack_d8.SubPathString.Data.ArrayNum,piVar4);
      if (iVar12 != 0) {
        memcpy((pTVar5->field0_0x0).DebugPtr,FVar11.Data,sVar21);
      }
    }
  }
  if (FStack_d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.SubPathString.Data.AllocatorInstance.Data);
  }
  TStack_198._8_4_ = 0x2c;
  TStack_198._s_0.X = 2.80721566442896e-314;
  aFStack_b8[0].AssetPath.PackageName.ComparisonIndex.Value = 0;
  aFStack_b8[0].AssetPath.PackageName.Number = 0;
  aFStack_b8[0].AssetPath.AssetName.ComparisonIndex.Value = 0;
  aFStack_b8[0].AssetPath.AssetName.Number = 0;
  aFStack_b8[0].SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aFStack_b8[0].SubPathString.Data.ArrayNum = 0;
  aFStack_b8[0].SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(aFStack_b8,(TStringView<char> *)&TStack_198);
  FVar11.Data = aFStack_b8[0].SubPathString.Data.AllocatorInstance.Data;
  (this_04->field0_0x0)._s_0.X = 0.0;
  pTVar1 = &this_05[1].ReplicatedMovement.Rotation;
  this_05[1].ReplicatedMovement.Location.field0_0x0._s_0.Y =
       (double)aFStack_b8[0].AssetPath.PackageName;
  this_05[1].ReplicatedMovement.Location.field0_0x0._s_0.Z =
       (double)aFStack_b8[0].AssetPath.AssetName;
  if (pTVar1 != (TRotator<double> *)&aFStack_b8[0].SubPathString) {
    iVar12 = aFStack_b8[0].SubPathString.Data.ArrayNum;
    sVar21 = (size_t)aFStack_b8[0].SubPathString.Data.ArrayNum;
    piVar4 = (int *)((longlong)&this_05[1].ReplicatedMovement.Rotation.Yaw + 4);
    iVar8 = *piVar4;
    *(int *)&this_05[1].ReplicatedMovement.Rotation.Yaw = aFStack_b8[0].SubPathString.Data.ArrayNum;
    if ((aFStack_b8[0].SubPathString.Data.ArrayNum == 0) && (iVar8 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,aFStack_b8[0].SubPathString.Data.ArrayNum,iVar8,(ForAnyElementType *)pTVar1,
                 aFStack_b8[0].SubPathString.Data.ArrayNum,piVar4);
      if (iVar12 != 0) {
        memcpy((void *)pTVar1->Pitch,FVar11.Data,sVar21);
      }
    }
  }
  if (aFStack_b8[0].SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aFStack_b8[0].SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar14 = FName::FName(&FStackX_10,"Root");
  FVar17 = *pFVar14;
  pUVar15 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar16 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this_05,FVar17,pUVar15,pUVar15,true,false);
  AActor::SetRootComponent(this_05,pUVar16);
  pFVar14 = FName::FName(&FStackX_8,"Sprite");
  FVar17 = *pFVar14;
  pUVar15 = Z_Construct_UClass_UBillboardComponent_NoRegister();
  this_06 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this_05,FVar17,pUVar15,pUVar15,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_06 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_06);
  }
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  *(USceneComponent **)((longlong)&this_05[1].ReplicatedMovement.Acceleration.field0_0x0 + 0x10) =
       this_06;
  USceneComponent::SetupAttachment(this_06,pUVar16,(FName)0x0);
  bVar13 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this_05,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar13) {
    return;
  }
  FVar17 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_04);
  if ((FVar17 == (FName)0x0) && (this_05[1].ReplicatedMovement.Location.field0_0x0._s_0.Y != 0.0)) {
    FVar18 = (FName)FSoftObjectPath::ResolveObject
                              ((FSoftObjectPath *)
                               ((longlong)&this_05[1].ReplicatedMovement.Location.field0_0x0 + 8));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar18 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar18);
    }
    bVar13 = (*IsInAsyncLoadingThread)();
    if (((bVar13) && (FVar18 != (FName)0x0)) &&
       (pFVar19 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar18 + 0xc)),
       ((pFVar19->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14d00fca6:
      if ((*(uint *)((longlong)FVar18 + 8) >> 0x1e & 1) != 0) goto LAB_14d00fcb4;
      bVar13 = true;
    }
    else {
      FStackX_8 = FVar18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar18 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar18);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_04,(FObjectPtr)&FStackX_8);
      if (FVar18 != (FName)0x0) goto LAB_14d00fca6;
LAB_14d00fcb4:
      bVar13 = false;
    }
    FVar17.ComparisonIndex.Value = 0;
    FVar17.Number = 0;
    if (bVar13) {
      FVar17 = FVar18;
    }
  }
  if (FVar17 != (FName)0x0) goto LAB_14d00fd9c;
  if (this_05[1].ReplicatedMovement.Location.field0_0x0._s_0.Y == 0.0) {
    return;
  }
  FSoftObjectPath::TryLoad
            ((FSoftObjectPath *)((longlong)&this_05[1].ReplicatedMovement.Location.field0_0x0 + 8),
             (FUObjectSerializeContext *)0x0);
  FVar17 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_04);
  if ((FVar17 == (FName)0x0) && (this_05[1].ReplicatedMovement.Location.field0_0x0._s_0.Y != 0.0)) {
    FVar18 = (FName)FSoftObjectPath::ResolveObject
                              ((FSoftObjectPath *)
                               ((longlong)&this_05[1].ReplicatedMovement.Location.field0_0x0 + 8));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar18 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar18);
    }
    bVar13 = (*IsInAsyncLoadingThread)();
    if (((bVar13) && (FVar18 != (FName)0x0)) &&
       (pFVar19 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar18 + 0xc)),
       ((pFVar19->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14d00fd7a:
      if ((*(uint *)((longlong)FVar18 + 8) >> 0x1e & 1) != 0) goto LAB_14d00fd88;
      bVar13 = true;
    }
    else {
      FStackX_8 = FVar18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar18 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar18);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_04,(FObjectPtr)&FStackX_8);
      if (FVar18 != (FName)0x0) goto LAB_14d00fd7a;
LAB_14d00fd88:
      bVar13 = false;
    }
    FVar17.ComparisonIndex.Value = 0;
    FVar17.Number = 0;
    if (bVar13) {
      FVar17 = FVar18;
    }
  }
  if (FVar17 == (FName)0x0) {
    return;
  }
LAB_14d00fd9c:
  pUVar15 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar8 = (int)pUVar15->_padding_;
  if ((iVar8 <= *(int *)(*(longlong *)((longlong)FVar17 + 0x10) + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)((longlong)FVar17 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
      &pUVar15->_padding_)) {
    plVar9 = *(longlong **)((longlong)&this_05[1].ReplicatedMovement.Acceleration.field0_0x0 + 0x10)
    ;
    (**(code **)(*plVar9 + 0xa90))(plVar9,FVar17);
    dVar10 = __real_4024000000000000;
    puVar7 = (uint *)((longlong)this_05[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.Z + 0x550
                     );
    *puVar7 = *puVar7 | 1;
    *(undefined4 *)((longlong)this_05[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.Z + 0x554)
         = 0x3a1d4952;
    pUVar16 = *(USceneComponent **)
               ((longlong)&this_05[1].ReplicatedMovement.Acceleration.field0_0x0 + 0x10);
    TStack_198._s_0.X = (pUVar16->RelativeRotation).Pitch;
    TStack_198._s_0.Y = (pUVar16->RelativeRotation).Yaw;
    TStack_198._s_0.Z = (pUVar16->RelativeRotation).Roll;
    pTVar20 = FRotationConversionCache::RotatorToQuat
                        (&pUVar16->RelativeRotationCache,aTStack_78,(TRotator<double> *)&TStack_198)
    ;
    TStack_198._s_0.X = 0.0;
    TStack_198._s_0.Y = 0.0;
    TStack_198._s_0.Z = dVar10;
    USceneComponent::SetRelativeLocationAndRotation
              (pUVar16,(TVector<double> *)&TStack_198,pTVar20,false,(FHitResult *)0x0,None);
  }
  return;
}

// InternalConstructor<UDEPRECATED_LiveLinkDrivenComponent> @ 14d0036d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UDEPRECATED_LiveLinkDrivenComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UDEPRECATED_LiveLinkDrivenComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDEPRECATED_LiveLinkDrivenComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UDEPRECATED_LiveLinkDrivenComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkAnimationAxisSwitchPreProcessor> @ 14d003730

void __cdecl
InternalConstructor<ULiveLinkAnimationAxisSwitchPreProcessor>(FObjectInitializer *param_1)

{
  ULiveLinkFramePreProcessor *this;
  undefined8 uVar1;
  double dVar2;
  
  this = (ULiveLinkFramePreProcessor *)param_1->Obj;
  if (this != (ULiveLinkFramePreProcessor *)0x0) {
    ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor(this,param_1);
    *(undefined4 *)(this + 1) = 0x20100;
    *(undefined ***)this = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
    this[1].field_0x4 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x10 = uVar1;
    *(double *)&this[1].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this[1].field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)(this + 2) = dVar2;
    *(double *)&this[2].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7ULiveLinkAnimationAxisSwitchPreProcessor__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkAnimationFrameInterpolationProcessor> @ 14d0037b0

void __cdecl
InternalConstructor<ULiveLinkAnimationFrameInterpolationProcessor>(FObjectInitializer *param_1)

{
  ULiveLinkFrameInterpolationProcessor *this;
  
  this = (ULiveLinkFrameInterpolationProcessor *)param_1->Obj;
  if (this != (ULiveLinkFrameInterpolationProcessor *)0x0) {
    ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &___7ULiveLinkAnimationFrameInterpolationProcessor__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkAnimationRoleToTransform> @ 14d003800

void __cdecl InternalConstructor<ULiveLinkAnimationRoleToTransform>(FObjectInitializer *param_1)

{
  ULiveLinkFrameTranslator *this;
  
  this = (ULiveLinkFrameTranslator *)param_1->Obj;
  if (this != (ULiveLinkFrameTranslator *)0x0) {
    ULiveLinkFrameTranslator::ULiveLinkFrameTranslator(this,param_1);
    *(undefined ***)this = &___7ULiveLinkAnimationRoleToTransform__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkAnimationVirtualSubject> @ 14d003840

/* WARNING: Type propagation algorithm not settling */

void __cdecl InternalConstructor<ULiveLinkAnimationVirtualSubject>(FObjectInitializer *param_1)

{
  ULiveLinkVirtualSubject *this;
  FObjectInitializer *pFVar1;
  UClass *pUVar2;
  
  this = (ULiveLinkVirtualSubject *)param_1->Obj;
  if (this != (ULiveLinkVirtualSubject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    ULiveLinkVirtualSubject::ULiveLinkVirtualSubject(this,pFVar1);
    *(undefined4 *)&this[1]._padding_ = 2;
    this->_padding_ = (longlong)&ULiveLinkAnimationVirtualSubject::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULiveLinkAnimationVirtualSubject::_vftable__for__ILiveLinkSubject__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].SyncSubject.Name = (FName)0x0;
    this[1].Subjects.ArrayNum = 0;
    this[1].Subjects.ArrayMax = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 2;
    *(undefined4 *)&this[1].FrameTranslators.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].FrameTranslators.AllocatorInstance.Data + 4) = 0x80;
    this[1].FrameTranslators.ArrayNum = -1;
    this[1].FrameTranslators.ArrayMax = 0;
    this[1].LiveLinkClient = (ILiveLinkClient *)0x0;
    *(undefined4 *)&this[1].FrameSnapshot.StaticData.WrappedStruct._padding_ = 0;
    this[1].FrameSnapshot.StaticData.WrappedStruct.ScriptStruct.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].FrameSnapshot.StaticData.WrappedStruct.SampleStructMemory = (uchar *)0x0;
    this[1].FrameSnapshot.FrameData.WrappedStruct._padding_ = 0;
    this[1].FrameSnapshot.FrameData.WrappedStruct.ScriptStruct.WeakPtr.ObjectIndex = 0;
    this[1].FrameSnapshot.FrameData.WrappedStruct.ScriptStruct.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this[1].FrameSnapshot.FrameData.WrappedStruct.SampleStructMemory = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].FrameSnapshot.FrameData.WrappedStruct.SampleStructMemory + 4)
         = 0;
    *(undefined8 *)&this[1].FrameSnapshot.FrameData.WrappedStruct.OwnsMemory = 0;
    this[1].SubjectKey.Source.A = 0;
    *(undefined1 *)&this[1].SubjectKey.Source.C = 0;
    pUVar2 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->Role).Class.field0_0x0.DebugPtr = pUVar2;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<ULiveLinkBasicFrameInterpolationProcessor> @ 14d003970

void __cdecl
InternalConstructor<ULiveLinkBasicFrameInterpolationProcessor>(FObjectInitializer *param_1)

{
  ULiveLinkFrameInterpolationProcessor *this;
  
  this = (ULiveLinkFrameInterpolationProcessor *)param_1->Obj;
  if (this != (ULiveLinkFrameInterpolationProcessor *)0x0) {
    ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkBlueprintLibrary> @ 14d0039b0

void __cdecl InternalConstructor<ULiveLinkBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7ULiveLinkBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkBlueprintVirtualSubject> @ 14d0039e0

void __cdecl InternalConstructor<ULiveLinkBlueprintVirtualSubject>(FObjectInitializer *param_1)

{
  ULiveLinkVirtualSubject *this;
  FObjectInitializer *pFVar1;
  
  this = (ULiveLinkVirtualSubject *)param_1->Obj;
  if (this != (ULiveLinkVirtualSubject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    ULiveLinkVirtualSubject::ULiveLinkVirtualSubject(this,pFVar1);
    this->_padding_ = (longlong)&ULiveLinkBlueprintVirtualSubject::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULiveLinkBlueprintVirtualSubject::_vftable__for__ILiveLinkSubject__
    ;
    FStructOnScope::FStructOnScope((FStructOnScope *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<ULiveLinkBroadcastComponent> @ 14d003a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULiveLinkBroadcastComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  FObjectInitializer *pFVar2;
  undefined8 local_res8;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar2);
    *(undefined1 *)&this[1]._padding_ = 1;
    local_res8 = 0;
    this->_padding_ = (longlong)&ULiveLinkBroadcastComponent::_vftable__for__UObject__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ =
         (longlong)&ULiveLinkBroadcastComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&ULiveLinkBroadcastComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&this[1].PrimaryComponentTick,(FObjectPtr)&local_res8);
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
    this->bTickInEditor = '\x01';
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    *(undefined8 *)((longlong)&this[1].ComponentTags.AllocatorInstance.Data + 4) = 0;
    *(undefined8 *)&this[1].ComponentTags.ArrayMax = 0;
    *(undefined8 *)((longlong)&this[1].AssetUserData.AllocatorInstance.Data + 4) = 0;
    *(undefined1 *)&this[1].ComponentTags.AllocatorInstance.Data = 1;
  }
  return;
}

// InternalConstructor<ULiveLinkBroadcastSubsystem> @ 14d003b20

void __cdecl InternalConstructor<ULiveLinkBroadcastSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7ULiveLinkBroadcastSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkComponent> @ 14d003b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULiveLinkComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UActorComponent *this;
  FObjectInitializer *pFVar2;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar2);
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
    this->_padding_ = (longlong)&ULiveLinkComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULiveLinkComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&ULiveLinkComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->bTickInEditor = '\x01';
    *(undefined1 *)&(this->PrimaryComponentTick)._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkCustomTimeStep> @ 14d003be0

void __cdecl InternalConstructor<ULiveLinkCustomTimeStep>(FObjectInitializer *param_1)

{
  UGenlockedCustomTimeStep *this;
  
  this = (UGenlockedCustomTimeStep *)param_1->Obj;
  if (this != (UGenlockedCustomTimeStep *)0x0) {
    UGenlockedCustomTimeStep::UGenlockedCustomTimeStep(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    this->_padding_ = (longlong)&___7ULiveLinkCustomTimeStep__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3c;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].bAutoDetectFormat = false;
    this[2].bWaitForBothFields = false;
    *(undefined2 *)&this[2].field_0x2a = 0;
    this[1].bAutoDetectFormat = false;
    this[1].bWaitForBothFields = false;
    *(undefined6 *)&this[1].field_0x2a = 0x3ff000000000;
    FEventRef::FEventRef((FEventRef *)(this + 3),AutoReset);
    FEventRef::FEventRef((FEventRef *)&this[3]._padding_,AutoReset);
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3].bAutoDetectFormat = false;
    this[3].bWaitForBothFields = false;
    *(undefined6 *)&this[3].field_0x2a = 0x3ff000000000;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 1;
    *(undefined4 *)&this[3]._padding_ = 1;
  }
  return;
}

// InternalConstructor<ULiveLinkDataPreviewComponent> @ 14d003cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<ULiveLinkDataPreviewComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UInstancedStaticMeshComponent *this;
  FObjectInitializer *pFVar2;
  
  this = (UInstancedStaticMeshComponent *)param_1->Obj;
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,pFVar2);
    *(undefined4 *)&this[1]._padding_ = 0x1010001;
    this->_padding_ = (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7ULiveLinkDataPreviewComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x80;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this->_padding_ = 5;
  }
  return;
}

// InternalConstructor<ULiveLinkHubSubjectSettings> @ 14d003df0

void __cdecl InternalConstructor<ULiveLinkHubSubjectSettings>(FObjectInitializer *param_1)

{
  ULiveLinkSubjectSettings *this;
  
  this = (ULiveLinkSubjectSettings *)param_1->Obj;
  if (this != (ULiveLinkSubjectSettings *)0x0) {
    ULiveLinkSubjectSettings::ULiveLinkSubjectSettings(this);
    this->_padding_ = (longlong)&___7ULiveLinkHubSubjectSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PreProcessors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].PreProcessors.ArrayNum = 0;
    this[1].PreProcessors.ArrayMax = 0;
    this[1].InterpolationProcessor.field0_0x0.DebugPtr = (ULiveLinkFrameInterpolationProcessor *)0x0
    ;
  }
  return;
}

// InternalConstructor<ULiveLinkLocatorAxisSwitchPreProcessor> @ 14d003e60

void __cdecl
InternalConstructor<ULiveLinkLocatorAxisSwitchPreProcessor>(FObjectInitializer *param_1)

{
  ULiveLinkFramePreProcessor *this;
  undefined8 uVar1;
  double dVar2;
  
  this = (ULiveLinkFramePreProcessor *)param_1->Obj;
  if (this != (ULiveLinkFramePreProcessor *)0x0) {
    ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor(this,param_1);
    *(undefined4 *)(this + 1) = 0x20100;
    *(undefined ***)this = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
    this[1].field_0x4 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x10 = uVar1;
    *(double *)&this[1].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this[1].field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)(this + 2) = dVar2;
    *(double *)&this[2].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7ULiveLinkLocatorAxisSwitchPreProcessor__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkMarkerVisualizer> @ 14d003ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<ULiveLinkMarkerVisualizer>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UInstancedStaticMeshComponent *this;
  FObjectInitializer *pFVar2;
  
  this = (UInstancedStaticMeshComponent *)param_1->Obj;
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,pFVar2);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    this->_padding_ = (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7ULiveLinkMarkerVisualizer__6B_;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x80;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this->_padding_ = 5;
    *(undefined2 *)((longlong)&this[1]._padding_ + 1) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 3) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<ULiveLinkMessageBusFinder> @ 14d003fc0

void __cdecl InternalConstructor<ULiveLinkMessageBusFinder>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULiveLinkMessageBusFinder__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014d004008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[2].field_0x8,4000);
    return;
  }
  return;
}

// InternalConstructor<ULiveLinkMessageBusSourceFactory> @ 14d004020

void __cdecl InternalConstructor<ULiveLinkMessageBusSourceFactory>(FObjectInitializer *param_1)

{
  ULiveLinkSourceFactory *this;
  
  this = (ULiveLinkSourceFactory *)param_1->Obj;
  if (this != (ULiveLinkSourceFactory *)0x0) {
    ULiveLinkSourceFactory::ULiveLinkSourceFactory(this,param_1);
    *(undefined ***)this = &___7ULiveLinkMessageBusSourceFactory__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkMessageBusSourceSettings> @ 14d004050

void __cdecl InternalConstructor<ULiveLinkMessageBusSourceSettings>(FObjectInitializer *param_1)

{
  ULiveLinkSourceSettings *this;
  UClass *this_00;
  
  this = (ULiveLinkSourceSettings *)param_1->Obj;
  if (this != (ULiveLinkSourceSettings *)0x0) {
    ULiveLinkSourceSettings::ULiveLinkSourceSettings(this);
    this->_padding_ = (longlong)&___7ULiveLinkMessageBusSourceSettings__6B_;
    this_00 = ULiveLinkSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    this->Mode = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x14;
  }
  return;
}

// InternalConstructor<ULiveLinkPreset> @ 14d0040c0

void __cdecl InternalConstructor<ULiveLinkPreset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkPreset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkSettings> @ 14d004110

void __cdecl InternalConstructor<ULiveLinkSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULiveLinkSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 3),0);
    *(undefined4 *)&this[3].field_0x10 = 0x38d1b717;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&this[3].field_0x20 = 0x3ff0000000000000;
    *(undefined8 *)(this + 4) = 0x4000000000000000;
    *(undefined8 *)&this[4].field_0x8 = 0x4014000000000000;
    *(undefined8 *)&this[4].field_0x18 = 0x3fe0000000000000;
    this[3].field_0x14 = 1;
    *(undefined2 *)&this[4].field_0x10 = 0;
    *(float *)&this[4].field_0x20 = FLinearColor::sRGBToLinearTable[0x1f];
    *(float *)&this[4].field_0x24 = FLinearColor::sRGBToLinearTable[0xe4];
    *(float *)(this + 5) = FLinearColor::sRGBToLinearTable[0x4b];
    *(undefined4 *)&this[5].field_0x4 = 0x3f800000;
    *(float *)&this[5].field_0x8 = FLinearColor::sRGBToLinearTable[0xff];
    *(float *)&this[5].field_0xc = FLinearColor::sRGBToLinearTable[0xb8];
    *(float *)&this[5].field_0x10 = FLinearColor::sRGBToLinearTable[0];
    *(undefined4 *)&this[5].field_0x14 = 0x3f800000;
    *(undefined2 *)&this[5].field_0x18 = 0xc10;
  }
  return;
}

// InternalConstructor<ULiveLinkSkeletonRemapper> @ 14d004260

void __cdecl InternalConstructor<ULiveLinkSkeletonRemapper>(FObjectInitializer *param_1)

{
  ULiveLinkSubjectRemapper *this;
  
  this = (ULiveLinkSubjectRemapper *)param_1->Obj;
  if (this != (ULiveLinkSubjectRemapper *)0x0) {
    ULiveLinkSubjectRemapper::ULiveLinkSubjectRemapper(this,param_1);
    this->_padding_ = (longlong)&___7ULiveLinkSkeletonRemapper__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    *(undefined8 *)&this[1].BoneNameMap = 0;
    *(undefined8 *)&this[1].BoneNameMap.field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkTimeSynchronizationSource> @ 14d0042e0

void __cdecl InternalConstructor<ULiveLinkTimeSynchronizationSource>(FObjectInitializer *param_1)

{
  pmf_a312ab9c this;
  int iVar1;
  FObjectInitializer *pFVar2;
  IModularFeatures *pIVar3;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *pTVar4;
  longlong lVar5;
  longlong lVar6;
  
  this = (pmf_a312ab9c)param_1->Obj;
  if (this != (pmf_a312ab9c)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UTimeSynchronizationSource::UTimeSynchronizationSource
              ((UTimeSynchronizationSource *)this,pFVar2);
    *(undefined ***)this = &___7ULiveLinkTimeSynchronizationSource__6B_;
    *(undefined8 *)((longlong)this + 0x30) = 0;
    *(undefined1 *)((longlong)this + 0x44) = 0;
    *(undefined8 *)((longlong)this + 0x48) = 0;
    *(undefined8 *)((longlong)this + 0x50) = 0;
    *(undefined4 *)((longlong)this + 0x58) = 60000;
    *(undefined4 *)((longlong)this + 0x5c) = 1;
    *(undefined8 *)((longlong)this + 0x68) = 0;
    *(undefined8 *)((longlong)this + 0x70) = 0;
    *(undefined8 *)((longlong)this + 0x78) = 0;
    *(undefined4 *)((longlong)this + 0x40) = 0;
    if ((*(uint *)((longlong)this + 8) & 0x30) == 0) {
      pIVar3 = IModularFeatures::Get();
      pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *)(**(code **)((longlong)*pIVar3 + 0x38))(pIVar3);
      TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
      ::AddUObject<ULiveLinkTimeSynchronizationSource>
                (pTVar4,(ULiveLinkTimeSynchronizationSource *)&stack0x00000008,this);
      pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
      TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
      ::AddUObject<ULiveLinkTimeSynchronizationSource>
                (pTVar4,(ULiveLinkTimeSynchronizationSource *)&stack0x00000008,this);
      iVar1 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
      if (0 < iVar1) {
        lVar5 = (**(code **)((longlong)*pIVar3 + 0x20))
                          (pIVar3,ILiveLinkClient::ModularFeatureName,0);
        lVar6 = lVar5 + -8;
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        *(longlong *)((longlong)this + 0x38) = lVar6;
      }
    }
  }
  return;
}

// InternalConstructor<ULiveLinkTimecodeProvider> @ 14d0043f0

void __cdecl InternalConstructor<ULiveLinkTimecodeProvider>(FObjectInitializer *param_1)

{
  UTimecodeProvider *this;
  FObjectInitializer *pFVar1;
  
  this = (UTimecodeProvider *)param_1->Obj;
  if (this != (UTimecodeProvider *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UTimecodeProvider::UTimecodeProvider(this,pFVar1);
    *(undefined8 *)&this[1].FrameDelay = 4;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7ULiveLinkTimecodeProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x18;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].FrameDelay = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 3),4000);
    *(undefined8 *)&this[3].FrameDelay = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkTransformAxisSwitchPreProcessor> @ 14d0044a0

void __cdecl
InternalConstructor<ULiveLinkTransformAxisSwitchPreProcessor>(FObjectInitializer *param_1)

{
  if ((ULiveLinkTransformAxisSwitchPreProcessor *)param_1->Obj !=
      (ULiveLinkTransformAxisSwitchPreProcessor *)0x0) {
    ULiveLinkTransformAxisSwitchPreProcessor::ULiveLinkTransformAxisSwitchPreProcessor
              ((ULiveLinkTransformAxisSwitchPreProcessor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ULiveLinkTransformDeadbandPreProcessor> @ 14d0044c0

void __cdecl
InternalConstructor<ULiveLinkTransformDeadbandPreProcessor>(FObjectInitializer *param_1)

{
  ULiveLinkFramePreProcessor *this;
  
  this = (ULiveLinkFramePreProcessor *)param_1->Obj;
  if (this != (ULiveLinkFramePreProcessor *)0x0) {
    ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7ULiveLinkTransformDeadbandPreProcessor__6B_;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkTransformRoleToAnimation> @ 14d004510

void __cdecl InternalConstructor<ULiveLinkTransformRoleToAnimation>(FObjectInitializer *param_1)

{
  ULiveLinkFrameTranslator *this;
  
  this = (ULiveLinkFrameTranslator *)param_1->Obj;
  if (this != (ULiveLinkFrameTranslator *)0x0) {
    ULiveLinkFrameTranslator::ULiveLinkFrameTranslator(this,param_1);
    *(undefined ***)this = &___7ULiveLinkTransformRoleToAnimation__6B_;
    FName::FName((FName *)(this + 1),"Root");
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkUserSettings> @ 14d004560

void __cdecl InternalConstructor<ULiveLinkUserSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkUserSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkVirtualSubjectSourceSettings> @ 14d0045a0

void __cdecl InternalConstructor<ULiveLinkVirtualSubjectSourceSettings>(FObjectInitializer *param_1)

{
  ULiveLinkSourceSettings *this;
  
  this = (ULiveLinkSourceSettings *)param_1->Obj;
  if (this != (ULiveLinkSourceSettings *)0x0) {
    ULiveLinkSourceSettings::ULiveLinkSourceSettings(this);
    this->_padding_ = (longlong)&___7ULiveLinkVirtualSubjectSourceSettings__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<ALiveLinkDataPreview> @ 14d0045e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALiveLinkDataPreview>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALiveLinkDataPreview *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALiveLinkDataPreview::GetPrivateStaticClass();
  pAVar3 = (ALiveLinkDataPreview *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (ALiveLinkDataPreview *)0x0) {
    pAVar3 = ALiveLinkDataPreview::ALiveLinkDataPreview(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_LiveLinkDrivenComponent> @ 14d004680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_LiveLinkDrivenComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_LiveLinkDrivenComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UDEPRECATED_LiveLinkDrivenComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDEPRECATED_LiveLinkDrivenComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UDEPRECATED_LiveLinkDrivenComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkAnimationAxisSwitchPreProcessor> @ 14d004750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkAnimationAxisSwitchPreProcessor>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = ULiveLinkAnimationAxisSwitchPreProcessor::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor
              ((ULiveLinkFramePreProcessor *)pUVar3,param_1);
    *(undefined4 *)(pUVar3 + 1) = 0x20100;
    *(undefined ***)pUVar3 = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
    pUVar3[1].field_0x4 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar3[1].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar3[1].field_0x10 = uVar1;
    *(double *)&pUVar3[1].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&pUVar3[1].field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)(pUVar3 + 2) = dVar2;
    *(double *)&pUVar3[2].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined ***)pUVar3 = &___7ULiveLinkAnimationAxisSwitchPreProcessor__6B_;
    *(undefined8 *)&pUVar3[2].field_0x10 = 0;
    *(undefined8 *)&pUVar3[2].field_0x18 = 0;
    return pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkAnimationFrameInterpolationProcessor> @ 14d004850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkAnimationFrameInterpolationProcessor>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkAnimationFrameInterpolationProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
              ((ULiveLinkFrameInterpolationProcessor *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7ULiveLinkAnimationFrameInterpolationProcessor__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkAnimationRoleToTransform> @ 14d004910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkAnimationRoleToTransform>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkAnimationRoleToTransform::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkFrameTranslator::ULiveLinkFrameTranslator((ULiveLinkFrameTranslator *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkAnimationRoleToTransform__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkAnimationVirtualSubject> @ 14d0049d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkAnimationVirtualSubject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkVirtualSubject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkAnimationVirtualSubject::GetPrivateStaticClass();
  this = (ULiveLinkVirtualSubject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULiveLinkVirtualSubject *)0x0) {
    ULiveLinkVirtualSubject::ULiveLinkVirtualSubject(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 2;
    this->_padding_ = (longlong)&ULiveLinkAnimationVirtualSubject::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULiveLinkAnimationVirtualSubject::_vftable__for__ILiveLinkSubject__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].SyncSubject.Name = (FName)0x0;
    this[1].Subjects.ArrayNum = 0;
    this[1].Subjects.ArrayMax = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 2;
    *(undefined4 *)&this[1].FrameTranslators.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].FrameTranslators.AllocatorInstance.Data + 4) = 0x80;
    this[1].FrameTranslators.ArrayNum = -1;
    this[1].FrameTranslators.ArrayMax = 0;
    this[1].LiveLinkClient = (ILiveLinkClient *)0x0;
    *(undefined4 *)&this[1].FrameSnapshot.StaticData.WrappedStruct._padding_ = 0;
    this[1].FrameSnapshot.StaticData.WrappedStruct.ScriptStruct.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].FrameSnapshot.StaticData.WrappedStruct.SampleStructMemory = (uchar *)0x0;
    this[1].FrameSnapshot.FrameData.WrappedStruct._padding_ = 0;
    this[1].FrameSnapshot.FrameData.WrappedStruct.ScriptStruct.WeakPtr.ObjectIndex = 0;
    this[1].FrameSnapshot.FrameData.WrappedStruct.ScriptStruct.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this[1].FrameSnapshot.FrameData.WrappedStruct.SampleStructMemory = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].FrameSnapshot.FrameData.WrappedStruct.SampleStructMemory + 4)
         = 0;
    *(undefined8 *)&this[1].FrameSnapshot.FrameData.WrappedStruct.OwnsMemory = 0;
    this[1].SubjectKey.Source.A = 0;
    *(undefined1 *)&this[1].SubjectKey.Source.C = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkBasicFrameInterpolationProcessor> @ 14d004b40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkBasicFrameInterpolationProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkBasicFrameInterpolationProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
              ((ULiveLinkFrameInterpolationProcessor *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkBlueprintLibrary> @ 14d004c00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkBlueprintVirtualSubject> @ 14d004cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkBlueprintVirtualSubject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkVirtualSubject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkBlueprintVirtualSubject::GetPrivateStaticClass();
  this = (ULiveLinkVirtualSubject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULiveLinkVirtualSubject *)0x0) {
    ULiveLinkVirtualSubject::ULiveLinkVirtualSubject(this,param_1);
    this->_padding_ = (longlong)&ULiveLinkBlueprintVirtualSubject::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULiveLinkBlueprintVirtualSubject::_vftable__for__ILiveLinkSubject__
    ;
    FStructOnScope::FStructOnScope((FStructOnScope *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkBroadcastComponent> @ 14d004d80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkBroadcastComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkBroadcastComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&ULiveLinkBroadcastComponent::_vftable__for__UObject__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ =
         (longlong)&ULiveLinkBroadcastComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&ULiveLinkBroadcastComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&this[1].PrimaryComponentTick,(FObjectPtr)&local_res10);
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    *(undefined8 *)((longlong)&this[1].ComponentTags.AllocatorInstance.Data + 4) = 0;
    *(undefined8 *)&this[1].ComponentTags.ArrayMax = 0;
    *(undefined8 *)((longlong)&this[1].AssetUserData.AllocatorInstance.Data + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkBroadcastSubsystem> @ 14d004ed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkBroadcastSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkBroadcastSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7ULiveLinkBroadcastSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkComponent> @ 14d004f90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&ULiveLinkComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULiveLinkComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&ULiveLinkComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkCustomTimeStep> @ 14d005070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkCustomTimeStep>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGenlockedCustomTimeStep *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkCustomTimeStep::GetPrivateStaticClass();
  this = (UGenlockedCustomTimeStep *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGenlockedCustomTimeStep *)0x0) {
    UGenlockedCustomTimeStep::UGenlockedCustomTimeStep(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7ULiveLinkCustomTimeStep__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3c;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].bAutoDetectFormat = false;
    this[2].bWaitForBothFields = false;
    *(undefined2 *)&this[2].field_0x2a = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    this[1].bAutoDetectFormat = false;
    this[1].bWaitForBothFields = false;
    *(undefined6 *)&this[1].field_0x2a = 0x3ff000000000;
    FEventRef::FEventRef((FEventRef *)(this + 3),AutoReset);
    FEventRef::FEventRef((FEventRef *)&this[3]._padding_,AutoReset);
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 1;
    *(undefined4 *)&this[3]._padding_ = 1;
    this[3].bAutoDetectFormat = false;
    this[3].bWaitForBothFields = false;
    *(undefined6 *)&this[3].field_0x2a = 0x3ff000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkDataPreviewComponent> @ 14d0051b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkDataPreviewComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInstancedStaticMeshComponent *this;
  UInstancedStaticMeshComponent *pUVar3;
  
  pUVar3 = (UInstancedStaticMeshComponent *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkDataPreviewComponent::GetPrivateStaticClass();
  this = (UInstancedStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,param_1);
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this->_padding_ = (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&ULiveLinkDataPreviewComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7ULiveLinkDataPreviewComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<ULiveLinkHubSubjectSettings> @ 14d005320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkHubSubjectSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkSubjectSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkHubSubjectSettings::GetPrivateStaticClass();
  this = (ULiveLinkSubjectSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULiveLinkSubjectSettings *)0x0) {
    ULiveLinkSubjectSettings::ULiveLinkSubjectSettings(this,param_1);
    this->_padding_ = (longlong)&___7ULiveLinkHubSubjectSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PreProcessors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].PreProcessors.ArrayNum = 0;
    this[1].PreProcessors.ArrayMax = 0;
    this[1].InterpolationProcessor.field0_0x0.DebugPtr = (ULiveLinkFrameInterpolationProcessor *)0x0
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkLocatorAxisSwitchPreProcessor> @ 14d005410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkLocatorAxisSwitchPreProcessor>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = ULiveLinkLocatorAxisSwitchPreProcessor::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor
              ((ULiveLinkFramePreProcessor *)pUVar3,param_1);
    *(undefined4 *)(pUVar3 + 1) = 0x20100;
    *(undefined ***)pUVar3 = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
    pUVar3[1].field_0x4 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar3[1].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar3[1].field_0x10 = uVar1;
    *(double *)&pUVar3[1].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&pUVar3[1].field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)(pUVar3 + 2) = dVar2;
    *(double *)&pUVar3[2].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined ***)pUVar3 = &___7ULiveLinkLocatorAxisSwitchPreProcessor__6B_;
    *(undefined8 *)&pUVar3[2].field_0x10 = 0;
    *(undefined8 *)&pUVar3[2].field_0x18 = 0;
    return pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkMarkerVisualizer> @ 14d005510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkMarkerVisualizer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInstancedStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkMarkerVisualizer::GetPrivateStaticClass();
  this = (UInstancedStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&ULiveLinkMarkerVisualizer::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7ULiveLinkMarkerVisualizer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkMessageBusFinder> @ 14d005640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkMessageBusFinder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkMessageBusFinder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkMessageBusFinder__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[2].field_0x8,4000);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceFactory> @ 14d005720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkMessageBusSourceFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkSourceFactory::ULiveLinkSourceFactory((ULiveLinkSourceFactory *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkMessageBusSourceFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceSettings> @ 14d0057d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkSourceSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkMessageBusSourceSettings::GetPrivateStaticClass();
  this = (ULiveLinkSourceSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULiveLinkSourceSettings *)0x0) {
    ULiveLinkSourceSettings::ULiveLinkSourceSettings(this,param_1);
    this->_padding_ = (longlong)&___7ULiveLinkMessageBusSourceSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkPreset> @ 14d005880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkPreset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &___7ULiveLinkPreset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkSettings> @ 14d005950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar1 + 3),0);
    *(undefined2 *)&pUVar1[4].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkSkeletonRemapper> @ 14d005a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkSkeletonRemapper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkSubjectRemapper *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkSkeletonRemapper::GetPrivateStaticClass();
  this = (ULiveLinkSubjectRemapper *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULiveLinkSubjectRemapper *)0x0) {
    ULiveLinkSubjectRemapper::ULiveLinkSubjectRemapper(this,param_1);
    this->_padding_ = (longlong)&___7ULiveLinkSkeletonRemapper__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    *(undefined8 *)&this[1].BoneNameMap = 0;
    *(undefined8 *)&this[1].BoneNameMap.field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkTimeSynchronizationSource> @ 14d005b30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkTimeSynchronizationSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTimeSynchronizationSource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkTimeSynchronizationSource::GetPrivateStaticClass();
  this = (UTimeSynchronizationSource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTimeSynchronizationSource *)0x0) {
    UTimeSynchronizationSource::UTimeSynchronizationSource(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7ULiveLinkTimeSynchronizationSource__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].bUseForSynchronization = 60000;
    this[1].FrameOffset = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkTimecodeProvider> @ 14d005c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkTimecodeProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTimecodeProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkTimecodeProvider::GetPrivateStaticClass();
  this = (UTimecodeProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTimecodeProvider *)0x0) {
    UTimecodeProvider::UTimecodeProvider(this,param_1);
    this->_padding_ = (longlong)&___7ULiveLinkTimecodeProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1].field_0x2c = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].FrameDelay = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 3),4000);
    *(undefined8 *)&this[3].FrameDelay = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkTransformAxisSwitchPreProcessor> @ 14d005d10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkTransformAxisSwitchPreProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkTransformAxisSwitchPreProcessor *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkTransformAxisSwitchPreProcessor::GetPrivateStaticClass();
  pUVar3 = (ULiveLinkTransformAxisSwitchPreProcessor *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (ULiveLinkTransformAxisSwitchPreProcessor *)0x0) {
    pUVar3 = ULiveLinkTransformAxisSwitchPreProcessor::ULiveLinkTransformAxisSwitchPreProcessor
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkTransformDeadbandPreProcessor> @ 14d005db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkTransformDeadbandPreProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkTransformDeadbandPreProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor
              ((ULiveLinkFramePreProcessor *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7ULiveLinkTransformDeadbandPreProcessor__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkTransformRoleToAnimation> @ 14d005e70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkTransformRoleToAnimation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkTransformRoleToAnimation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkFrameTranslator::ULiveLinkFrameTranslator((ULiveLinkFrameTranslator *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkTransformRoleToAnimation__6B_;
    FName::FName((FName *)(pUVar1 + 1),"Root");
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkUserSettings> @ 14d005f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkUserSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkUserSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkUserSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkVirtualSubjectSourceSettings> @ 14d006000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkVirtualSubjectSourceSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkSourceSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkVirtualSubjectSourceSettings::GetPrivateStaticClass();
  this = (ULiveLinkSourceSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULiveLinkSourceSettings *)0x0) {
    ULiveLinkSourceSettings::ULiveLinkSourceSettings(this,param_1);
    this->_padding_ = (longlong)&___7ULiveLinkVirtualSubjectSourceSettings__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// Interpolate<double> @ 14d0060c0

void __cdecl
LiveLinkAnimationBlendingUtil::Interpolate<double>
          (double param_1,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_3,FLiveLinkSubjectFrameData *param_4,bool param_5,
          FLiveLinkInterpolationInfo *param_6)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this;
  FScriptContainerElement *this_00;
  FScriptContainerElement *this_01;
  undefined8 *puVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  FLiveLinkSkeletonStaticData *pFVar5;
  UScriptStruct *pUVar6;
  FLiveLinkAnimationFrameData *pFVar7;
  FLiveLinkAnimationFrameData *pFVar8;
  FLiveLinkAnimationFrameData *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  FGenericInterpolateOptions local_48;
  uint local_44;
  uint local_40 [2];
  FWeakObjectPtr local_38;
  UScriptStruct *local_30 [3];
  
  pFVar5 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                     (param_2);
  if ((pFVar5 == (FLiveLinkSkeletonStaticData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStaticData.Cast<FLiveLinkSkeletonStaticData>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkAnimationFrameInterpolateProcessor.cpp"
                         ,0x35,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_44 = 0xffffffff;
  local_40[0] = 0xffffffff;
  bVar4 = ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker
          ::FindInterpolateIndex(param_1,param_3,(int *)&local_44,(int *)local_40,param_6);
  uVar13 = local_44;
  if (!bVar4) {
    param_6->bOverflowDetected = true;
    return;
  }
  lVar11 = (longlong)(int)local_44;
  this = &param_4->FrameData;
  if (local_44 == local_40[0]) {
    uVar13 = 0;
    if ((int)local_44 < param_3->ArrayNum) {
      uVar13 = ~local_44 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = (param_3->AllocatorInstance).Data + lVar11 * 0x28;
  }
  else {
    pUVar6 = FLiveLinkAnimationFrameData::StaticStruct();
    if ((pUVar6 == (UScriptStruct *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOtherStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                           ,0x16d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_30[0] = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_30);
    FVar3 = local_38;
    (**(code **)((this->WrappedStruct)._padding_ + 0x40))(this);
    puVar1 = (undefined8 *)(this->WrappedStruct)._padding_;
    (param_4->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar3;
    (*(code *)*puVar1)(this);
    uVar14 = 0;
    if ((int)uVar13 < param_3->ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar11 = (longlong)(int)local_40[0];
    this_00 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x28;
    uVar13 = 0;
    if ((int)local_40[0] < param_3->ArrayNum) {
      uVar13 = ~local_40[0] >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_01 = (param_3->AllocatorInstance).Data + lVar11 * 0x28;
    dVar12 = ULiveLinkBasicFrameInterpolationProcessor::
             FLiveLinkBasicFrameInterpolationProcessorWorker::GetBlendFactor
                       (param_1,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_00,
                        (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_01);
    uVar13 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar14 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    pFVar10 = this_00;
    if ((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar14,uVar13) &&
         (double)CONCAT44(uVar14,uVar13) != __real_3e45798ee2308c3a) &&
       (pFVar10 = this_01,
       __real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)(__real_3ff0000000000000 - dVar12) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(__real_3ff0000000000000 - dVar12,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      pFVar7 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                         ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_00);
      pFVar8 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                         ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_01);
      pFVar9 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                         (this);
      if (((pFVar7 == (FLiveLinkAnimationFrameData *)0x0) ||
          ((pFVar8 == (FLiveLinkAnimationFrameData *)0x0 ||
           (pFVar9 == (FLiveLinkAnimationFrameData *)0x0)))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimationFrameDataPtrA && AnimationFrameDataPtrB && AnimationFrameDataPtrOutput"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkAnimationFrameInterpolateProcessor.cpp"
                             ,0x56,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_48.bInterpolateInterpProperties = param_5;
      local_48.bInterpolatePropertyValues = true;
      local_48.bCopyClosestFrame = false;
      local_48.bCopyClosestMetaData = true;
      ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
      GenericInterpolate(dVar12,&local_48,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_00
                         ,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_01,this);
      CopyFrameDataBlended(pFVar7,pFVar8,(float)dVar12,param_4);
      return;
    }
  }
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
            (this,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar10);
  return;
}

// Interpolate<double> @ 14d006450

void __cdecl
LiveLinkInterpolation::Interpolate<double>
          (double param_1,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_3,FLiveLinkSubjectFrameData *param_4,bool param_5,
          FLiveLinkInterpolationInfo *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  FGenericInterpolateOptions local_38;
  uint local_34;
  uint local_30 [6];
  
  local_30[0] = 0xffffffff;
  local_34 = 0xffffffff;
  bVar4 = ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker
          ::FindInterpolateIndex(param_1,param_3,(int *)local_30,(int *)&local_34,param_6);
  uVar8 = local_34;
  if (!bVar4) {
    param_6->bOverflowDetected = true;
    return;
  }
  lVar6 = (longlong)(int)local_30[0];
  param_6->FrameIndexA = local_30[0];
  param_6->FrameIndexB = local_34;
  if (local_30[0] == local_34) {
    uVar8 = 0;
    if ((int)local_30[0] < param_3->ArrayNum) {
      uVar8 = ~local_30[0] >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
              (&param_4->FrameData,
               (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
               ((param_3->AllocatorInstance).Data + lVar6 * 0x28));
  }
  else {
    uVar9 = 0;
    if ((int)local_30[0] < param_3->ArrayNum) {
      uVar9 = ~local_30[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_3->AllocatorInstance).Data + lVar6 * 0x28;
    uVar9 = 0;
    if ((int)uVar8 < param_3->ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x28;
    dVar7 = ULiveLinkBasicFrameInterpolationProcessor::
            FLiveLinkBasicFrameInterpolationProcessorWorker::GetBlendFactor
                      (param_1,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar1,
                       (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar2);
    uVar8 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    pFVar5 = pFVar1;
    if (((double)CONCAT44(uVar9,uVar8) < __real_3e45798ee2308c3a ||
         (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee2308c3a) ||
       (pFVar5 = pFVar2,
       (double)CONCAT44((uint)((ulonglong)(__real_3ff0000000000000 - dVar7) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(__real_3ff0000000000000 - dVar7,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a)) {
      FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
                (&param_4->FrameData,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar5);
    }
    else {
      local_38.bInterpolatePropertyValues = param_5;
      local_38.bCopyClosestFrame = true;
      local_38.bCopyClosestMetaData = true;
      local_38.bInterpolateInterpProperties = true;
      ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
      GenericInterpolate(dVar7,&local_38,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar1,
                         (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar2,
                         &param_4->FrameData);
    }
  }
  return;
}

// Interpolate<UE::Math::TQuat<double>_> @ 14d006690

void __cdecl
LiveLinkInterpolation::Interpolate<UE::Math::TQuat<double>_>
          (FStructProperty *param_1,float param_2,void *param_3,void *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  TQuat<double> *pTVar14;
  int iVar15;
  longlong lVar16;
  undefined1 *_Dst;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  TQuat<double> local_88 [3];
  
  dVar11 = __real_3e45798ee0000000;
  iVar13 = (int)param_1->_padding_;
  iVar15 = 0;
  if (0 < iVar13) {
    do {
      if (((iVar15 < 0) || (iVar13 <= iVar15)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = *(int *)((longlong)&param_1->_padding_ + 4);
      iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
      lVar16 = (longlong)iVar15;
      if (((iVar15 < 0) || ((int)param_1->_padding_ <= iVar15)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
      iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
      if (((iVar15 < 0) || ((int)param_1->_padding_ <= iVar15)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_5 == (void *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Dst = (undefined1 *)
             ((longlong)param_5 +
             (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
             *(int *)((longlong)&param_1->_padding_ + 4) * lVar16);
      pTVar14 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          (local_88,(TQuat<double> *)
                                    ((longlong)param_3 + (longlong)iVar1 + iVar13 * lVar16),
                           (TQuat<double> *)((longlong)param_4 + (longlong)iVar3 + iVar2 * lVar16),
                           (double)param_2);
      dVar7 = pTVar14->X;
      dVar8 = pTVar14->Y;
      dVar9 = pTVar14->Z;
      dVar10 = pTVar14->W;
      dVar19 = dVar9 * dVar9 + dVar7 * dVar7;
      dVar22 = dVar10 * dVar10 + dVar8 * dVar8;
      dVar5 = dVar22 + dVar19;
      dVar19 = dVar19 + dVar22;
      auVar23._8_4_ = SUB84(dVar19,0);
      auVar23._0_8_ = dVar5;
      auVar23._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      in_XMM4 = sqrtpd(in_XMM4,auVar23);
      uVar17 = -(ulonglong)(dVar11 <= dVar5);
      uVar18 = -(ulonglong)(dVar11 <= dVar19);
      uVar24 = (uint)(uVar17 >> 0x20);
      uVar25 = (uint)(uVar18 >> 0x20);
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
      local_a8._0_8_ = uVar17 & (ulonglong)(auVar23._0_8_ * dVar7);
      uVar6 = uVar18 & (ulonglong)(auVar23._8_8_ * dVar8);
      local_a8._8_4_ = (undefined4)uVar6;
      local_a8._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar20._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar20._4_4_ =
           ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar20._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar20._12_4_ =
           ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_a8 = local_a8 | auVar20;
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
      local_98._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
      ;
      local_98._4_4_ =
           ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_98._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
      ;
      local_98._12_4_ =
           ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar21._0_8_ = (ulonglong)(auVar23._0_8_ * dVar9) & uVar17;
      uVar18 = (ulonglong)(auVar23._8_8_ * dVar10) & uVar18;
      auVar21._8_4_ = (undefined4)uVar18;
      auVar21._12_4_ = (undefined4)(uVar18 >> 0x20);
      local_98 = local_98 | auVar21;
      if (_Dst != local_a8) {
        if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
          (**(code **)(param_1->_padding_ + 0xf0))(param_1,_Dst,local_a8,1);
        }
        else {
          memcpy(_Dst,local_a8,(longlong)*(int *)((longlong)&param_1->_padding_ + 4));
        }
      }
      iVar13 = (int)param_1->_padding_;
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar13);
  }
  return;
}

// Interpolate<UE::Math::TRotator<double>_> @ 14d0069b0

void __cdecl
LiveLinkInterpolation::Interpolate<UE::Math::TRotator<double>_>
          (FStructProperty *param_1,float param_2,void *param_3,void *param_4,void *param_5)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  longlong lVar7;
  size_t _Size;
  double *_Dst;
  double *pdVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar21;
  undefined1 auVar18 [16];
  double dVar13;
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  
  iVar4 = (int)param_1->_padding_;
  iVar5 = 0;
  if (0 < iVar4) {
    lVar7 = 0;
    uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
    uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
    uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
    uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
    uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
    uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
    uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
    uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
    uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
    uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
    uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
    uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
    uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
    uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
    dVar2 = (double)param_2;
    do {
      if ((iVar5 < 0) || (iVar4 <= iVar5)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      }
      if (param_3 == (void *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      }
      pdVar8 = (double *)
               ((longlong)param_3 +
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
               *(int *)((longlong)&param_1->_padding_ + 4) * lVar7);
      if ((iVar5 < 0) || ((int)param_1->_padding_ <= iVar5)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      }
      if (param_4 == (void *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      }
      pdVar6 = (double *)
               ((longlong)param_4 +
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
               *(int *)((longlong)&param_1->_padding_ + 4) * lVar7);
      if ((iVar5 < 0) || ((int)param_1->_padding_ <= iVar5)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      }
      if (param_5 == (void *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      }
      auVar23._0_8_ = pdVar6[1] - pdVar8[1];
      auVar23._8_8_ = 0;
      _Size = (size_t)*(int *)((longlong)&param_1->_padding_ + 4);
      auVar16._0_8_ = pdVar6[2] - pdVar8[2];
      auVar14._8_4_ = SUB84(auVar23._0_8_,0);
      auVar14._0_8_ = *pdVar6 - *pdVar8;
      auVar14._12_4_ = (int)((ulonglong)auVar23._0_8_ >> 0x20);
      auVar24._4_4_ = uVar37;
      auVar24._0_4_ = uVar36;
      auVar24._8_4_ = uVar38;
      auVar24._12_4_ = uVar39;
      auVar15 = divpd(auVar14,auVar24);
      _Dst = (double *)
             ((longlong)param_5 +
             (longlong)*(int *)((longlong)&param_1->_padding_ + 4) + (longlong)iVar5 * _Size);
      auVar24 = roundpd(auVar23,auVar15,3);
      auVar16._8_8_ = 0;
      auVar15._4_4_ = uVar33;
      auVar15._0_4_ = uVar32;
      auVar15._8_4_ = uVar34;
      auVar15._12_4_ = uVar35;
      auVar15 = divpd(auVar16,auVar15);
      auVar25._0_8_ = auVar24._0_8_ * (double)CONCAT44(uVar37,uVar36);
      auVar25._8_8_ = auVar24._8_8_ * (double)CONCAT44(uVar39,uVar38);
      dVar28 = (*pdVar6 - *pdVar8) - auVar25._0_8_;
      dVar29 = auVar23._0_8_ - auVar25._8_8_;
      auVar15 = roundpd(auVar25,auVar15,3);
      auVar17._8_4_ = SUB84(dVar29,0);
      auVar17._0_8_ = dVar28;
      auVar17._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      dVar12 = dVar28 + (double)CONCAT44(uVar37,uVar36);
      dVar21 = auVar17._8_8_ + (double)CONCAT44(uVar39,uVar38);
      dVar13 = auVar16._0_8_ - auVar15._0_8_ * (double)CONCAT44(uVar33,uVar32);
      dVar22 = 0.0 - auVar15._8_8_ * (double)CONCAT44(uVar35,uVar34);
      uVar9 = -(ulonglong)(0.0 <= dVar28);
      uVar10 = -(ulonglong)(0.0 <= dVar29);
      auVar26._0_8_ = uVar9 & (ulonglong)dVar28;
      auVar26._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar29);
      auVar26._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar29) >> 0x20);
      auVar30._0_4_ = ~(uint)uVar9 & SUB84(dVar12,0);
      auVar30._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar12 >> 0x20);
      auVar30._8_4_ = ~(uint)uVar10 & SUB84(dVar21,0);
      auVar30._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar21 >> 0x20);
      auVar18._8_4_ = SUB84(dVar22,0);
      auVar18._0_8_ = dVar13;
      auVar18._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      auVar30 = auVar30 | auVar26;
      uVar9 = -(ulonglong)(0.0 <= dVar13);
      uVar10 = -(ulonglong)(0.0 <= dVar22);
      auVar27._0_8_ = uVar9 & (ulonglong)dVar13;
      auVar27._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar22);
      auVar27._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar22) >> 0x20);
      dVar13 = dVar13 + (double)CONCAT44(uVar33,uVar32);
      dVar22 = auVar18._8_8_ + (double)CONCAT44(uVar35,uVar34);
      auVar31._0_4_ = ~(uint)uVar9 & SUB84(dVar13,0);
      auVar31._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar13 >> 0x20);
      auVar31._8_4_ = ~(uint)uVar10 & SUB84(dVar22,0);
      auVar31._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
      auVar19._0_8_ = (double)CONCAT44(uVar43,uVar42);
      auVar19._8_4_ = uVar44;
      auVar19._12_4_ = uVar45;
      auVar31 = auVar31 | auVar27;
      uVar10 = -(ulonglong)(auVar19._0_8_ < auVar30._0_8_);
      uVar11 = -(ulonglong)(auVar19._8_8_ < auVar30._8_8_);
      local_e0._0_8_ = uVar10 & (ulonglong)(auVar30._0_8_ - (double)CONCAT44(uVar37,uVar36));
      uVar9 = uVar11 & (ulonglong)(auVar30._8_8_ - (double)CONCAT44(uVar39,uVar38));
      local_e0._8_4_ = (undefined4)uVar9;
      local_e0._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar20._0_4_ = ~(uint)uVar10 & auVar30._0_4_;
      auVar20._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar30._4_4_;
      auVar20._8_4_ = ~(uint)uVar11 & auVar30._8_4_;
      auVar20._12_4_ = ~(uint)(uVar11 >> 0x20) & auVar30._12_4_;
      local_e0 = local_e0 | auVar20;
      local_f8 = local_e0._0_8_ * dVar2 + *pdVar8;
      uVar9 = -(ulonglong)((double)CONCAT44(uVar41,uVar40) < auVar31._0_8_);
      local_f0 = local_e0._8_8_ * dVar2 + pdVar8[1];
      local_d0 = (double)(uVar9 & (ulonglong)(auVar31._0_8_ - (double)CONCAT44(uVar33,uVar32)) |
                         CONCAT44(~(uint)(uVar9 >> 0x20) & auVar31._4_4_,
                                  ~(uint)uVar9 & auVar31._0_4_));
      local_e8 = local_d0 * dVar2 + pdVar8[2];
      if (_Dst != &local_f8) {
        if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
          (**(code **)(param_1->_padding_ + 0xf0))(param_1,_Dst,&local_f8,1);
        }
        else {
          memcpy(_Dst,&local_f8,_Size);
        }
        uVar42 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
        uVar43 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
        uVar44 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
        uVar45 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
        uVar40 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
        uVar36 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
        uVar37 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
        uVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
        uVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
        uVar32 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
        uVar33 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
        uVar34 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
        uVar35 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      }
      iVar4 = (int)param_1->_padding_;
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// Interpolate<UE::Math::TTransform<double>_> @ 14d006e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
LiveLinkInterpolation::Interpolate<UE::Math::TTransform<double>_>
          (FStructProperty *param_1,float param_2,void *param_3,void *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TTransform<double> *_Dst;
  size_t _Size;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c0;
  void *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar9 = 0;
  iVar8 = (int)param_1->_padding_;
  local_b8 = param_5;
  if (0 < iVar8) {
    do {
      pvVar6 = local_b8;
      if (((iVar9 < 0) || (iVar8 <= iVar9)) &&
         (local_c8 = iVar9, local_c0 = iVar8,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)((longlong)&param_1->_padding_ + 4);
      iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
      lVar10 = (longlong)iVar9;
      iVar2 = (int)param_1->_padding_;
      if (((iVar9 < 0) || (iVar2 <= iVar9)) &&
         (local_c8 = iVar9, local_c0 = iVar2,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
      iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
      iVar4 = (int)param_1->_padding_;
      if (((iVar9 < 0) || (iVar4 <= iVar9)) &&
         (local_c8 = iVar9, local_c0 = iVar4,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pvVar6 == (void *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      _Size = (size_t)*(int *)((longlong)&param_1->_padding_ + 4);
      _Dst = (TTransform<double> *)
             ((longlong)local_b8 +
             (longlong)*(int *)((longlong)&param_1->_padding_ + 4) + _Size * lVar10);
      BlendValue<UE::Math::TTransform<double>_>
                (&local_a8,
                 (TTransform<double> *)((longlong)param_3 + (longlong)iVar1 + iVar8 * lVar10),
                 (TTransform<double> *)((longlong)param_4 + (longlong)iVar3 + iVar2 * lVar10),
                 param_2);
      if (_Dst != &local_a8) {
        if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
          (**(code **)(param_1->_padding_ + 0xf0))(param_1,_Dst,&local_a8,1);
        }
        else {
          memcpy(_Dst,&local_a8,_Size);
        }
      }
      iVar8 = (int)param_1->_padding_;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  return;
}

// Interpolate<UE::Math::TVector4<double>_> @ 14d007110

void __cdecl
LiveLinkInterpolation::Interpolate<UE::Math::TVector4<double>_>
          (FStructProperty *param_1,float param_2,void *param_3,void *param_4,void *param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  size_t _Size;
  double *_Dst;
  longlong lVar9;
  double local_68;
  double local_60;
  undefined1 local_58 [16];
  
  iVar5 = (int)param_1->_padding_;
  iVar6 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    dVar3 = (double)param_2;
    do {
      if (((iVar6 < 0) || (iVar5 <= iVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pdVar7 = (double *)
               ((longlong)param_3 +
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
               *(int *)((longlong)&param_1->_padding_ + 4) * lVar9);
      if (((iVar6 < 0) || ((int)param_1->_padding_ <= iVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pdVar8 = (double *)
               ((longlong)param_4 +
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
               *(int *)((longlong)&param_1->_padding_ + 4) * lVar9);
      if (((iVar6 < 0) || ((int)param_1->_padding_ <= iVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_5 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Size = (size_t)*(int *)((longlong)&param_1->_padding_ + 4);
      local_68 = (*pdVar8 - *pdVar7) * dVar3 + *pdVar7;
      _Dst = (double *)
             ((longlong)param_5 +
             (longlong)*(int *)((longlong)&param_1->_padding_ + 4) + (longlong)iVar6 * _Size);
      dVar2 = (pdVar8[3] - pdVar7[3]) * dVar3 + pdVar7[3];
      local_60 = dVar3 * (pdVar8[1] - pdVar7[1]) + pdVar7[1];
      local_58._8_4_ = SUB84(dVar2,0);
      local_58._0_8_ = (pdVar8[2] - pdVar7[2]) * dVar3 + pdVar7[2];
      local_58._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      if (_Dst != &local_68) {
        if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
          (**(code **)(param_1->_padding_ + 0xf0))(param_1,_Dst,&local_68,1);
        }
        else {
          memcpy(_Dst,&local_68,_Size);
        }
      }
      iVar5 = (int)param_1->_padding_;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// Interpolate<UE::Math::TVector<double>_> @ 14d0073a0

void __cdecl
LiveLinkInterpolation::Interpolate<UE::Math::TVector<double>_>
          (FStructProperty *param_1,float param_2,void *param_3,void *param_4,void *param_5)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  size_t _Size;
  double *_Dst;
  longlong lVar8;
  double local_58;
  double local_50;
  double local_48;
  
  iVar4 = (int)param_1->_padding_;
  iVar5 = 0;
  if (0 < iVar4) {
    lVar8 = 0;
    dVar2 = (double)param_2;
    do {
      if (((iVar5 < 0) || (iVar4 <= iVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pdVar6 = (double *)
               ((longlong)param_3 +
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
               *(int *)((longlong)&param_1->_padding_ + 4) * lVar8);
      if (((iVar5 < 0) || ((int)param_1->_padding_ <= iVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pdVar7 = (double *)
               ((longlong)param_4 +
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
               *(int *)((longlong)&param_1->_padding_ + 4) * lVar8);
      if (((iVar5 < 0) || ((int)param_1->_padding_ <= iVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_5 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Size = (size_t)*(int *)((longlong)&param_1->_padding_ + 4);
      local_58 = (*pdVar7 - *pdVar6) * dVar2 + *pdVar6;
      _Dst = (double *)
             ((longlong)param_5 +
             (longlong)*(int *)((longlong)&param_1->_padding_ + 4) + (longlong)iVar5 * _Size);
      local_50 = (pdVar7[1] - pdVar6[1]) * dVar2 + pdVar6[1];
      local_48 = dVar2 * (pdVar7[2] - pdVar6[2]) + pdVar6[2];
      if (_Dst != &local_58) {
        if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
          (**(code **)(param_1->_padding_ + 0xf0))(param_1,_Dst,&local_58,1);
        }
        else {
          memcpy(_Dst,&local_58,_Size);
        }
      }
      iVar4 = (int)param_1->_padding_;
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// Interpolate<FLinearColor> @ 14d007630

void __cdecl
LiveLinkInterpolation::Interpolate<FLinearColor>
          (FStructProperty *param_1,float param_2,void *param_3,void *param_4,void *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  size_t _Size;
  float *_Dst;
  longlong lVar7;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  iVar3 = (int)param_1->_padding_;
  iVar4 = 0;
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      if (((iVar4 < 0) || (iVar3 <= iVar4)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pfVar5 = (float *)((longlong)param_3 +
                        (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
                        *(int *)((longlong)&param_1->_padding_ + 4) * lVar7);
      if (((iVar4 < 0) || ((int)param_1->_padding_ <= iVar4)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pfVar6 = (float *)((longlong)param_4 +
                        (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
                        *(int *)((longlong)&param_1->_padding_ + 4) * lVar7);
      if (((iVar4 < 0) || ((int)param_1->_padding_ <= iVar4)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_5 == (void *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Size = (size_t)*(int *)((longlong)&param_1->_padding_ + 4);
      local_68 = (*pfVar6 - *pfVar5) * param_2 + *pfVar5;
      _Dst = (float *)((longlong)param_5 +
                      (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
                      (longlong)iVar4 * _Size);
      local_64 = (pfVar6[1] - pfVar5[1]) * param_2 + pfVar5[1];
      local_60 = (pfVar6[2] - pfVar5[2]) * param_2 + pfVar5[2];
      local_5c = (pfVar6[3] - pfVar5[3]) * param_2 + pfVar5[3];
      if (_Dst != &local_68) {
        if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
          (**(code **)(param_1->_padding_ + 0xf0))(param_1,_Dst,&local_68,1);
        }
        else {
          memcpy(_Dst,&local_68,_Size);
        }
      }
      iVar3 = (int)param_1->_padding_;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

// Interpolate<FQualifiedFrameTime> @ 14d0078e0

void __cdecl
LiveLinkAnimationBlendingUtil::Interpolate<FQualifiedFrameTime>
          (FQualifiedFrameTime *param_1,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_3,FLiveLinkSubjectFrameData *param_4,bool param_5,
          FLiveLinkInterpolationInfo *param_6)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this;
  FScriptContainerElement *this_00;
  FScriptContainerElement *this_01;
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  FLiveLinkSkeletonStaticData *pFVar6;
  UScriptStruct *pUVar7;
  FLiveLinkAnimationFrameData *pFVar8;
  FLiveLinkAnimationFrameData *pFVar9;
  FLiveLinkAnimationFrameData *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  FGenericInterpolateOptions local_res8 [2];
  uint local_78;
  uint local_74;
  FWeakObjectPtr local_70;
  UScriptStruct *local_68 [2];
  FQualifiedFrameTime local_58;
  FQualifiedFrameTime local_48 [2];
  
  pFVar6 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                     (param_2);
  if ((pFVar6 == (FLiveLinkSkeletonStaticData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStaticData.Cast<FLiveLinkSkeletonStaticData>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkAnimationFrameInterpolateProcessor.cpp"
                         ,0x35,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58.Time = param_1->Time;
  local_58.Rate = param_1->Rate;
  local_78 = 0xffffffff;
  local_74 = 0xffffffff;
  bVar5 = ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker
          ::FindInterpolateIndex(&local_58,param_3,(int *)&local_78,(int *)&local_74,param_6);
  uVar13 = local_78;
  if (!bVar5) {
    param_6->bOverflowDetected = true;
    return;
  }
  lVar12 = (longlong)(int)local_78;
  this = &param_4->FrameData;
  if (local_78 == local_74) {
    uVar13 = 0;
    if ((int)local_78 < param_3->ArrayNum) {
      uVar13 = ~local_78 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
              (this,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
                    ((param_3->AllocatorInstance).Data + lVar12 * 0x28));
  }
  else {
    pUVar7 = FLiveLinkAnimationFrameData::StaticStruct();
    if ((pUVar7 == (UScriptStruct *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOtherStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                           ,0x16d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_70.ObjectIndex = 0;
    local_70.ObjectSerialNumber = 0;
    local_68[0] = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=(&local_70,(FObjectPtr)local_68);
    FVar4 = local_70;
    (**(code **)((this->WrappedStruct)._padding_ + 0x40))(this);
    puVar1 = (undefined8 *)(this->WrappedStruct)._padding_;
    (param_4->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar4;
    (*(code *)*puVar1)(this);
    uVar14 = 0;
    if ((int)uVar13 < param_3->ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar12 = (longlong)(int)local_74;
    this_00 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x28;
    uVar13 = 0;
    if ((int)local_74 < param_3->ArrayNum) {
      uVar13 = ~local_74 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_48[0].Time = param_1->Time;
    local_48[0].Rate = param_1->Rate;
    this_01 = (param_3->AllocatorInstance).Data + lVar12 * 0x28;
    dVar3 = ULiveLinkBasicFrameInterpolationProcessor::
            FLiveLinkBasicFrameInterpolationProcessorWorker::GetBlendFactor
                      (local_48,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_00,
                       (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_01);
    uVar13 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar14 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    pFVar11 = this_00;
    if (((double)CONCAT44(uVar14,uVar13) < __real_3e45798ee2308c3a ||
         (double)CONCAT44(uVar14,uVar13) == __real_3e45798ee2308c3a) ||
       (uVar13 = SUB84(__real_3ff0000000000000 - dVar3,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar14 = (uint)((ulonglong)(__real_3ff0000000000000 - dVar3) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_, pFVar11 = this_01,
       (double)CONCAT44(uVar14,uVar13) < __real_3e45798ee2308c3a ||
       (double)CONCAT44(uVar14,uVar13) == __real_3e45798ee2308c3a)) {
      FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
                (this,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar11);
    }
    else {
      pFVar8 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                         ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_00);
      pFVar9 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                         ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_01);
      pFVar10 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                          (this);
      if (((pFVar8 == (FLiveLinkAnimationFrameData *)0x0) ||
          ((pFVar9 == (FLiveLinkAnimationFrameData *)0x0 ||
           (pFVar10 == (FLiveLinkAnimationFrameData *)0x0)))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimationFrameDataPtrA && AnimationFrameDataPtrB && AnimationFrameDataPtrOutput"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkAnimationFrameInterpolateProcessor.cpp"
                             ,0x56,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8[0].bInterpolateInterpProperties = param_5;
      local_res8[0].bInterpolatePropertyValues = true;
      local_res8[0].bCopyClosestFrame = false;
      local_res8[0].bCopyClosestMetaData = true;
      ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
      GenericInterpolate(dVar3,local_res8,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_00
                         ,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)this_01,this);
      CopyFrameDataBlended(pFVar8,pFVar9,(float)dVar3,param_4);
    }
  }
  return;
}

// Interpolate<FQualifiedFrameTime> @ 14d007c90

void __cdecl
LiveLinkInterpolation::Interpolate<FQualifiedFrameTime>
          (FQualifiedFrameTime *param_1,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_3,FLiveLinkSubjectFrameData *param_4,bool param_5,
          FLiveLinkInterpolationInfo *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  FGenericInterpolateOptions local_res8 [2];
  uint local_58;
  uint local_54 [3];
  FQualifiedFrameTime local_48;
  FQualifiedFrameTime local_38;
  
  local_48.Time = param_1->Time;
  local_48.Rate = param_1->Rate;
  local_54[0] = 0xffffffff;
  local_58 = 0xffffffff;
  bVar5 = ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker
          ::FindInterpolateIndex(&local_48,param_3,(int *)local_54,(int *)&local_58,param_6);
  uVar8 = local_58;
  if (!bVar5) {
    param_6->bOverflowDetected = true;
    return;
  }
  lVar7 = (longlong)(int)local_54[0];
  param_6->FrameIndexA = local_54[0];
  param_6->FrameIndexB = local_58;
  if (local_54[0] == local_58) {
    uVar8 = 0;
    if ((int)local_54[0] < param_3->ArrayNum) {
      uVar8 = ~local_54[0] >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
              (&param_4->FrameData,
               (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
               ((param_3->AllocatorInstance).Data + lVar7 * 0x28));
  }
  else {
    uVar9 = 0;
    if ((int)local_54[0] < param_3->ArrayNum) {
      uVar9 = ~local_54[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_3->AllocatorInstance).Data + lVar7 * 0x28;
    uVar9 = 0;
    if ((int)uVar8 < param_3->ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38.Time = param_1->Time;
    local_38.Rate = param_1->Rate;
    pFVar2 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x28;
    dVar4 = ULiveLinkBasicFrameInterpolationProcessor::
            FLiveLinkBasicFrameInterpolationProcessorWorker::GetBlendFactor
                      (&local_38,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar1,
                       (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar2);
    uVar8 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    pFVar6 = pFVar1;
    if (((double)CONCAT44(uVar9,uVar8) < __real_3e45798ee2308c3a ||
         (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee2308c3a) ||
       (uVar8 = SUB84(__real_3ff0000000000000 - dVar4,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)(__real_3ff0000000000000 - dVar4) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_, pFVar6 = pFVar2,
       (double)CONCAT44(uVar9,uVar8) < __real_3e45798ee2308c3a ||
       (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee2308c3a)) {
      FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
                (&param_4->FrameData,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar6);
    }
    else {
      local_res8[0].bInterpolatePropertyValues = param_5;
      local_res8[0].bCopyClosestFrame = true;
      local_res8[0].bCopyClosestMetaData = true;
      local_res8[0].bInterpolateInterpProperties = true;
      ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
      GenericInterpolate(dVar4,local_res8,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar1,
                         (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar2,
                         &param_4->FrameData);
    }
  }
  return;
}

// IntroSortInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,`FLiveLinkMotionController::BuildSourceData'::__l11::<lambda_1>_>_> @ 14d007ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,_FLiveLinkMotionController::BuildSourceData_::__l11::<lambda_1>_>_>
          (TTuple<FGuid,FText> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FGuid,FText>,_public:_void___cdecl_FLiveLinkMotionController::BuildSourceData(void)_::_11_::<lambda_1>_>
          param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  TTuple<FGuid,FText> *pTVar8;
  TTuple<FGuid,FText> *pTVar9;
  TTuple<FGuid,FText> *pTVar10;
  TTuple<FGuid,FText> *pTVar11;
  TTuple<FGuid,FText> *pTVar12;
  float fVar13;
  undefined1 auStack_3b8 [32];
  FIdentityFunctor local_398;
  TTuple<FGuid,FText> **local_390;
  TTuple<FGuid,FText> *local_388;
  uint *local_380;
  int local_378;
  TTuple<FGuid,FText> *local_370;
  TTuple<FGuid,FText> *local_350;
  TTuple<FGuid,FText> *local_348;
  TTuple<FGuid,FText> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_398 = param_3;
    local_348 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar13;
    memset(local_330,0,0x2e8);
    local_390 = &local_348;
    do {
      local_388 = local_390[1];
      pTVar9 = *local_390;
      local_350 = local_390[2];
      iVar7 = (int)((longlong)local_388 - (longlong)pTVar9 >> 5) + 1;
      local_378 = (int)local_350;
      if ((int)local_350 != 0) {
        local_380 = &((param_4.Predicate)->CaptureWildcardSource).D;
        pTVar12 = pTVar9;
LAB_14d007fd0:
        if (8 < iVar7) {
          uVar2 = *(undefined8 *)&pTVar12->field_0x8;
          pTVar9 = pTVar12 + iVar7 / 2;
          uVar3 = *(undefined8 *)pTVar9;
          uVar4 = *(undefined8 *)&pTVar9->field_0x8;
          uVar5 = *(undefined8 *)&pTVar9->field_0x10;
          uVar6 = *(undefined8 *)&pTVar9->field_0x18;
          *(undefined8 *)pTVar9 = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar9->field_0x8 = uVar2;
          uVar2 = *(undefined8 *)&pTVar12->field_0x18;
          *(undefined8 *)&pTVar9->field_0x10 = *(undefined8 *)&pTVar12->field_0x10;
          *(undefined8 *)&pTVar9->field_0x18 = uVar2;
          *(undefined8 *)pTVar12 = uVar3;
          *(undefined8 *)&pTVar12->field_0x8 = uVar4;
          *(undefined8 *)&pTVar12->field_0x10 = uVar5;
          *(undefined8 *)&pTVar12->field_0x18 = uVar6;
          pTVar9 = pTVar12;
          local_370 = local_388 + 1;
LAB_14d008030:
          pTVar11 = pTVar9;
          pTVar9 = pTVar11 + 1;
          pTVar10 = local_370;
          if ((pTVar9 <= local_388) &&
             (((*(uint *)&pTVar12->field_0xc != ((param_4.Predicate)->CaptureWildcardSource).D ||
               *(uint *)&pTVar12->field_0x8 != ((param_4.Predicate)->CaptureWildcardSource).C) ||
              *(uint *)&pTVar12->field_0x4 != ((param_4.Predicate)->CaptureWildcardSource).B) ||
              ((param_4.Predicate)->CaptureWildcardSource).A != *(uint *)pTVar12))
          goto code_r0x00014d008073;
          goto LAB_14d008090;
        }
        if (pTVar12 < local_388) {
          puVar1 = &((param_4.Predicate)->CaptureWildcardSource).D;
          do {
            pTVar9 = pTVar12 + 1;
            pTVar10 = local_388;
            pTVar11 = pTVar12;
            if (pTVar12 + 1 <= local_388) {
              do {
                if ((((*(uint *)&pTVar11->field_0xc == *local_380 &&
                      *(uint *)&pTVar11->field_0x8 == ((param_4.Predicate)->CaptureWildcardSource).C
                      ) && *(uint *)&pTVar11->field_0x4 ==
                           ((param_4.Predicate)->CaptureWildcardSource).B) &&
                     *(uint *)pTVar11 == ((param_4.Predicate)->CaptureWildcardSource).A) ||
                   (iVar7 = FText::CompareToCaseIgnored
                                      ((FText *)&pTVar11->field_0x10,(FText *)&pTVar9->field_0x10),
                   pTVar10 = local_388, iVar7 < 1)) {
                  pTVar11 = pTVar9;
                }
                pTVar9 = pTVar9 + 1;
              } while (pTVar9 <= pTVar10);
            }
            uVar3 = *(undefined8 *)pTVar11;
            uVar4 = *(undefined8 *)&pTVar11->field_0x8;
            local_388 = pTVar10 + -1;
            uVar5 = *(undefined8 *)&pTVar11->field_0x10;
            uVar6 = *(undefined8 *)&pTVar11->field_0x18;
            uVar2 = *(undefined8 *)&pTVar10->field_0x8;
            *(undefined8 *)pTVar11 = *(undefined8 *)pTVar10;
            *(undefined8 *)&pTVar11->field_0x8 = uVar2;
            uVar2 = *(undefined8 *)&pTVar10->field_0x18;
            *(undefined8 *)&pTVar11->field_0x10 = *(undefined8 *)&pTVar10->field_0x10;
            *(undefined8 *)&pTVar11->field_0x18 = uVar2;
            *(undefined8 *)pTVar10 = uVar3;
            *(undefined8 *)&pTVar10->field_0x8 = uVar4;
            *(undefined8 *)&pTVar10->field_0x10 = uVar5;
            *(undefined8 *)&pTVar10->field_0x18 = uVar6;
            local_380 = puVar1;
          } while (pTVar12 < local_388);
        }
        goto LAB_14d0081e9;
      }
LAB_14d0081d3:
      HeapSortInternal<TTuple<FGuid,FText>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FGuid,FText>,_FLiveLinkMotionController::BuildSourceData_::__l11::<lambda_1>_>_>
                (pTVar9,iVar7,param_3,param_4);
LAB_14d0081e9:
      local_390 = local_390 + -3;
    } while (&local_348 <= local_390);
  }
  return;
code_r0x00014d008073:
  iVar7 = FText::CompareToCaseIgnored((FText *)&pTVar12->field_0x10,(FText *)&pTVar11[1].field_0x10)
  ;
  pTVar10 = local_370;
  if (0 < iVar7) goto LAB_14d008030;
LAB_14d008090:
  do {
    pTVar8 = pTVar10;
    local_380 = &((param_4.Predicate)->CaptureWildcardSource).D;
    pTVar10 = pTVar8 + -1;
    if ((pTVar10 <= pTVar12) ||
       (((*(uint *)&pTVar8[-1].field_0xc == *local_380 &&
         *(uint *)&pTVar8[-1].field_0x4 == ((param_4.Predicate)->CaptureWildcardSource).B) &&
        *(uint *)&pTVar8[-1].field_0x8 == ((param_4.Predicate)->CaptureWildcardSource).C) &&
        *(uint *)pTVar10 == ((param_4.Predicate)->CaptureWildcardSource).A)) break;
    iVar7 = FText::CompareToCaseIgnored
                      ((FText *)&pTVar8[-1].field_0x10,(FText *)&pTVar12->field_0x10);
  } while (0 < iVar7);
  uVar2 = *(undefined8 *)&pTVar8[-1].field_0x8;
  local_370 = pTVar10;
  if (pTVar9 <= pTVar10) {
    uVar3 = *(undefined8 *)pTVar9;
    uVar4 = *(undefined8 *)&pTVar11[1].field_0x8;
    uVar5 = *(undefined8 *)&pTVar11[1].field_0x10;
    uVar6 = *(undefined8 *)&pTVar11[1].field_0x18;
    *(undefined8 *)pTVar9 = *(undefined8 *)pTVar10;
    *(undefined8 *)&pTVar11[1].field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pTVar8[-1].field_0x18;
    *(undefined8 *)&pTVar11[1].field_0x10 = *(undefined8 *)&pTVar8[-1].field_0x10;
    *(undefined8 *)&pTVar11[1].field_0x18 = uVar2;
    *(undefined8 *)pTVar10 = uVar3;
    *(undefined8 *)&pTVar8[-1].field_0x8 = uVar4;
    *(undefined8 *)&pTVar8[-1].field_0x10 = uVar5;
    *(undefined8 *)&pTVar8[-1].field_0x18 = uVar6;
    goto LAB_14d008030;
  }
  uVar3 = *(undefined8 *)pTVar12;
  uVar4 = *(undefined8 *)&pTVar12->field_0x8;
  uVar5 = *(undefined8 *)&pTVar12->field_0x10;
  uVar6 = *(undefined8 *)&pTVar12->field_0x18;
  *(undefined8 *)pTVar12 = *(undefined8 *)pTVar10;
  *(undefined8 *)&pTVar12->field_0x8 = uVar2;
  local_378 = local_378 + -1;
  uVar2 = *(undefined8 *)&pTVar8[-1].field_0x18;
  *(undefined8 *)&pTVar12->field_0x10 = *(undefined8 *)&pTVar8[-1].field_0x10;
  *(undefined8 *)&pTVar12->field_0x18 = uVar2;
  *(undefined8 *)pTVar10 = uVar3;
  *(undefined8 *)&pTVar8[-1].field_0x8 = uVar4;
  *(undefined8 *)&pTVar8[-1].field_0x10 = uVar5;
  *(undefined8 *)&pTVar8[-1].field_0x18 = uVar6;
  param_3 = local_398;
  if ((longlong)((longlong)pTVar10 + (-0x20 - (longlong)pTVar12) & 0xffffffffffffffe0U) <
      (longlong)((longlong)local_388 - (longlong)pTVar9 & 0xffffffffffffffe0U)) {
    if (pTVar9 < local_388) {
      *local_390 = pTVar9;
      local_390[1] = local_388;
      *(int *)(local_390 + 2) = local_378;
      local_390 = local_390 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_14d0081e9;
    local_388 = pTVar8 + -2;
    pTVar9 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *local_390 = pTVar12;
      local_390[1] = pTVar8 + -2;
      *(int *)(local_390 + 2) = local_378;
      local_390 = local_390 + 3;
    }
    if (local_388 <= pTVar9) goto LAB_14d0081e9;
  }
  iVar7 = (int)((longlong)local_388 - (longlong)pTVar9 >> 5) + 1;
  pTVar12 = pTVar9;
  if (local_378 == 0) goto LAB_14d0081d3;
  goto LAB_14d007fd0;
}

// IntroSortInternal<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,`FLiveLinkSubject::AdjustSubFrame_SceneTime'::__l29::<lambda_1>,TLess<void>_> @ 14d008310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,_FLiveLinkSubject::AdjustSubFrame_SceneTime_::__l29::<lambda_1>,TLess<void>_>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1,int param_2,<lambda_1> param_3,
          TLess<void> param_4)

{
  uchar **ppuVar1;
  double dVar2;
  FWeakObjectPtr FVar3;
  longlong lVar4;
  FWeakObjectPtr FVar5;
  uchar *puVar6;
  FWeakObjectPtr FVar7;
  longlong lVar8;
  undefined7 uVar9;
  bool bVar10;
  undefined7 uVar11;
  double *pdVar12;
  int iVar13;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar14;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar15;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> **ppFVar16;
  int iVar17;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar18;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar19;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar20;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar21;
  float fVar22;
  undefined1 auStack_398 [48];
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *local_368;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *local_358;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar22;
    memset(local_340,0,0x2e8);
    ppFVar16 = &local_358;
    do {
      pFVar14 = ppFVar16[1];
      pFVar21 = *ppFVar16;
      local_368 = ppFVar16[2];
      iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar21) / 0x28) + 1;
      pFVar20 = pFVar21;
      iVar17 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_14d0083f1:
        if (8 < iVar13) {
          FVar3 = (pFVar20->WrappedStruct).ScriptStruct.WeakPtr;
          pFVar18 = pFVar14 + 1;
          iVar13 = iVar13 / 2;
          lVar4 = pFVar20[iVar13].WrappedStruct._padding_;
          FVar5 = pFVar20[iVar13].WrappedStruct.ScriptStruct.WeakPtr;
          ppuVar1 = &pFVar20[iVar13].WrappedStruct.SampleStructMemory;
          puVar6 = *ppuVar1;
          FVar7 = *(FWeakObjectPtr *)(ppuVar1 + 1);
          bVar10 = pFVar20[iVar13].WrappedStruct.OwnsMemory;
          uVar11 = *(undefined7 *)&pFVar20[iVar13].WrappedStruct.field_0x21;
          pFVar20[iVar13].WrappedStruct._padding_ = (pFVar20->WrappedStruct)._padding_;
          pFVar20[iVar13].WrappedStruct.ScriptStruct.WeakPtr = FVar3;
          FVar3 = (pFVar20->WrappedStruct).Package.WeakPtr;
          ppuVar1 = &pFVar20[iVar13].WrappedStruct.SampleStructMemory;
          *ppuVar1 = (pFVar20->WrappedStruct).SampleStructMemory;
          *(FWeakObjectPtr *)(ppuVar1 + 1) = FVar3;
          uVar9 = *(undefined7 *)&(pFVar20->WrappedStruct).field_0x21;
          pFVar20[iVar13].WrappedStruct.OwnsMemory = (pFVar20->WrappedStruct).OwnsMemory;
          *(undefined7 *)&pFVar20[iVar13].WrappedStruct.field_0x21 = uVar9;
          (pFVar20->WrappedStruct)._padding_ = lVar4;
          (pFVar20->WrappedStruct).ScriptStruct.WeakPtr = FVar5;
          (pFVar20->WrappedStruct).SampleStructMemory = puVar6;
          (pFVar20->WrappedStruct).Package.WeakPtr = FVar7;
          (pFVar20->WrappedStruct).OwnsMemory = bVar10;
          *(undefined7 *)&(pFVar20->WrappedStruct).field_0x21 = uVar11;
          pFVar21 = pFVar20;
LAB_14d008451:
          pFVar15 = pFVar21;
          pFVar21 = pFVar15 + 1;
          if (pFVar21 <= pFVar14) goto code_r0x00014d00845a;
          goto LAB_14d008476;
        }
        for (; pFVar18 = pFVar20, pFVar21 = pFVar20, pFVar20 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar21 = pFVar21 + 1, pFVar21 <= pFVar14) {
            pdVar12 = (double *)(**(code **)((pFVar21->WrappedStruct)._padding_ + 0x10))(pFVar21);
            dVar2 = *pdVar12;
            pdVar12 = (double *)(**(code **)((pFVar18->WrappedStruct)._padding_ + 0x10))(pFVar18);
            if (*pdVar12 <= dVar2 && dVar2 != *pdVar12) {
              pFVar18 = pFVar21;
            }
          }
          lVar4 = (pFVar18->WrappedStruct)._padding_;
          FVar3 = (pFVar18->WrappedStruct).ScriptStruct.WeakPtr;
          bVar10 = (pFVar18->WrappedStruct).OwnsMemory;
          uVar11 = *(undefined7 *)&(pFVar18->WrappedStruct).field_0x21;
          puVar6 = (pFVar18->WrappedStruct).SampleStructMemory;
          FVar5 = (pFVar18->WrappedStruct).Package.WeakPtr;
          FVar7 = (pFVar14->WrappedStruct).ScriptStruct.WeakPtr;
          (pFVar18->WrappedStruct)._padding_ = (pFVar14->WrappedStruct)._padding_;
          (pFVar18->WrappedStruct).ScriptStruct.WeakPtr = FVar7;
          FVar7 = (pFVar14->WrappedStruct).Package.WeakPtr;
          (pFVar18->WrappedStruct).SampleStructMemory = (pFVar14->WrappedStruct).SampleStructMemory;
          (pFVar18->WrappedStruct).Package.WeakPtr = FVar7;
          uVar9 = *(undefined7 *)&(pFVar14->WrappedStruct).field_0x21;
          (pFVar18->WrappedStruct).OwnsMemory = (pFVar14->WrappedStruct).OwnsMemory;
          *(undefined7 *)&(pFVar18->WrappedStruct).field_0x21 = uVar9;
          (pFVar14->WrappedStruct)._padding_ = lVar4;
          (pFVar14->WrappedStruct).ScriptStruct.WeakPtr = FVar3;
          (pFVar14->WrappedStruct).SampleStructMemory = puVar6;
          (pFVar14->WrappedStruct).Package.WeakPtr = FVar5;
          (pFVar14->WrappedStruct).OwnsMemory = bVar10;
          *(undefined7 *)&(pFVar14->WrappedStruct).field_0x21 = uVar11;
        }
        goto LAB_14d0085ec;
      }
LAB_14d0085d2:
      HeapSortInternal<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,_FLiveLinkSubject::AdjustSubFrame_SceneTime_::__l29::<lambda_1>,TLess<void>_>
                (pFVar21,iVar13,param_3,param_4);
LAB_14d0085ec:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_358 <= ppFVar16);
  }
  return;
code_r0x00014d00845a:
  pdVar12 = (double *)(**(code **)((pFVar21->WrappedStruct)._padding_ + 0x10))(pFVar21);
  dVar2 = *pdVar12;
  pdVar12 = (double *)(**(code **)((pFVar20->WrappedStruct)._padding_ + 0x10))(pFVar20);
  if (dVar2 < *pdVar12 || dVar2 == *pdVar12) goto LAB_14d008451;
LAB_14d008476:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar20) break;
    pdVar12 = (double *)(**(code **)((pFVar20->WrappedStruct)._padding_ + 0x10))(pFVar20);
    dVar2 = *pdVar12;
    pdVar12 = (double *)(**(code **)((pFVar18->WrappedStruct)._padding_ + 0x10))(pFVar18);
  } while (dVar2 < *pdVar12 || dVar2 == *pdVar12);
  lVar4 = (pFVar18->WrappedStruct)._padding_;
  FVar3 = pFVar19[-1].WrappedStruct.ScriptStruct.WeakPtr;
  if (pFVar21 <= pFVar18) {
    lVar8 = (pFVar21->WrappedStruct)._padding_;
    FVar5 = pFVar15[1].WrappedStruct.ScriptStruct.WeakPtr;
    puVar6 = pFVar15[1].WrappedStruct.SampleStructMemory;
    FVar7 = pFVar15[1].WrappedStruct.Package.WeakPtr;
    bVar10 = pFVar15[1].WrappedStruct.OwnsMemory;
    uVar11 = *(undefined7 *)&pFVar15[1].WrappedStruct.field_0x21;
    (pFVar21->WrappedStruct)._padding_ = lVar4;
    pFVar15[1].WrappedStruct.ScriptStruct.WeakPtr = FVar3;
    FVar3 = pFVar19[-1].WrappedStruct.Package.WeakPtr;
    pFVar15[1].WrappedStruct.SampleStructMemory = pFVar19[-1].WrappedStruct.SampleStructMemory;
    pFVar15[1].WrappedStruct.Package.WeakPtr = FVar3;
    uVar9 = *(undefined7 *)&pFVar19[-1].WrappedStruct.field_0x21;
    pFVar15[1].WrappedStruct.OwnsMemory = pFVar19[-1].WrappedStruct.OwnsMemory;
    *(undefined7 *)&pFVar15[1].WrappedStruct.field_0x21 = uVar9;
    (pFVar18->WrappedStruct)._padding_ = lVar8;
    pFVar19[-1].WrappedStruct.ScriptStruct.WeakPtr = FVar5;
    pFVar19[-1].WrappedStruct.SampleStructMemory = puVar6;
    pFVar19[-1].WrappedStruct.Package.WeakPtr = FVar7;
    pFVar19[-1].WrappedStruct.OwnsMemory = bVar10;
    *(undefined7 *)&pFVar19[-1].WrappedStruct.field_0x21 = uVar11;
    goto LAB_14d008451;
  }
  lVar8 = (pFVar20->WrappedStruct)._padding_;
  FVar5 = (pFVar20->WrappedStruct).ScriptStruct.WeakPtr;
  puVar6 = (pFVar20->WrappedStruct).SampleStructMemory;
  FVar7 = (pFVar20->WrappedStruct).Package.WeakPtr;
  bVar10 = (pFVar20->WrappedStruct).OwnsMemory;
  uVar11 = *(undefined7 *)&(pFVar20->WrappedStruct).field_0x21;
  (pFVar20->WrappedStruct)._padding_ = lVar4;
  (pFVar20->WrappedStruct).ScriptStruct.WeakPtr = FVar3;
  FVar3 = pFVar19[-1].WrappedStruct.Package.WeakPtr;
  iVar17 = iVar17 + -1;
  (pFVar20->WrappedStruct).SampleStructMemory = pFVar19[-1].WrappedStruct.SampleStructMemory;
  (pFVar20->WrappedStruct).Package.WeakPtr = FVar3;
  uVar9 = *(undefined7 *)&pFVar19[-1].WrappedStruct.field_0x21;
  (pFVar20->WrappedStruct).OwnsMemory = pFVar19[-1].WrappedStruct.OwnsMemory;
  *(undefined7 *)&(pFVar20->WrappedStruct).field_0x21 = uVar9;
  (pFVar18->WrappedStruct)._padding_ = lVar8;
  pFVar19[-1].WrappedStruct.ScriptStruct.WeakPtr = FVar5;
  pFVar19[-1].WrappedStruct.SampleStructMemory = puVar6;
  pFVar19[-1].WrappedStruct.Package.WeakPtr = FVar7;
  pFVar19[-1].WrappedStruct.OwnsMemory = bVar10;
  *(undefined7 *)&pFVar19[-1].WrappedStruct.field_0x21 = uVar11;
  if (((longlong)pFVar18 + (-0x28 - (longlong)pFVar20)) / 0x28 <
      ((longlong)pFVar14 - (longlong)pFVar21) / 0x28) {
    if (pFVar21 < pFVar14) {
      *ppFVar16 = pFVar21;
      ppFVar16[1] = pFVar14;
      *(int *)(ppFVar16 + 2) = iVar17;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar18 <= pFVar20 + 1) goto LAB_14d0085ec;
    pFVar14 = pFVar19 + -2;
    pFVar21 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar18) {
      *ppFVar16 = pFVar20;
      ppFVar16[1] = pFVar19 + -2;
      *(int *)(ppFVar16 + 2) = iVar17;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar14 <= pFVar21) goto LAB_14d0085ec;
  }
  iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar21) / 0x28) + 1;
  pFVar20 = pFVar21;
  if (iVar17 == 0) goto LAB_14d0085d2;
  goto LAB_14d0083f1;
}

// KahnTopologicalSort<TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>_&,`ULiveLinkAnimationVirtualSubject::SortSubjects'::__l2::<lambda_1>_> @ 14d0086e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Algo::
KahnTopologicalSort<TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>_&,_ULiveLinkAnimationVirtualSubject::SortSubjects_::__l2::<lambda_1>_>
          (TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2,
          ETopologicalSort param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ForElementType<FSetElementId> FVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  ulonglong uVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  byte bVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  uint *puVar32;
  uint uVar33;
  ForElementType<unsigned_int> FVar34;
  undefined1 auStackY_4c8 [32];
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  undefined1 local_475;
  undefined1 local_474 [4];
  uint local_470 [2];
  ForAnyElementType local_468;
  undefined8 local_460;
  ForAnyElementType local_458;
  undefined8 local_450;
  uint local_448;
  uint local_444;
  uint local_440 [2];
  uint local_438 [2];
  ETopologicalSort local_430;
  uint local_42c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_428;
  int iStack_420;
  uint uStack_41c;
  TBitArray<FDefaultBitArrayAllocator> *local_418;
  undefined4 uStack_410;
  uint uStack_40c;
  uint local_408;
  undefined4 uStack_404;
  int iStack_400;
  undefined4 uStack_3fc;
  uint local_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f0;
  undefined4 local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c4;
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *local_3c0;
  undefined4 local_3b8;
  int local_3b4;
  int local_3b0 [2];
  longlong *local_3a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3a0;
  int local_380;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 uStack_350;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_340;
  undefined8 uStack_320;
  undefined4 local_2fc;
  undefined4 local_2dc;
  undefined1 local_2d8 [32];
  uint *local_2b8;
  ulonglong uStack_2b0;
  undefined8 local_2a8;
  ForElementType<FSetElementId> FStack_2a0;
  ulonglong uStack_290;
  undefined1 local_288 [32];
  uint *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  ForElementType<FSetElementId> FStack_250;
  undefined8 uStack_240;
  undefined1 local_238 [32];
  ForElementType<unsigned_int> local_218;
  uint local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined1 local_200 [8];
  ForAnyElementType local_1f8;
  uint local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  ForAnyElementType local_1d8;
  ulonglong local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  FMutuallyReachableVertexSetContext local_1b8;
  bool local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  uVar23 = 0;
  local_238._0_8_ = (FScriptContainerElement *)0x0;
  local_238._8_8_ = 0;
  local_218 = (ForElementType<unsigned_int>)0x0;
  local_210 = 0;
  local_20c = 0x80;
  local_208 = -1;
  local_204 = 0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0._0_4_ = 0;
  local_1e0._4_4_ = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = 0;
  local_1c0._4_4_ = 0;
  local_58 = false;
  local_2d8._0_8_ = (FScriptContainerElement *)0x0;
  local_2d8._8_8_ = 0;
  local_2b8 = (uint *)0x0;
  uStack_2b0 = 0x8000000000;
  local_2a8 = 0xffffffff;
  FStack_2a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_290 = uStack_290 & 0xffffffff00000000;
  local_430 = param_3;
  local_3c0 = param_1;
  AlgoImpl::
  KahnTopologicalSort_CreateWorkingGraph<TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,_ULiveLinkAnimationVirtualSubject::SortSubjects_::__l2::<lambda_1>_>
            ((FKahnContext *)local_238,param_1,param_2,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8);
  uVar33 = (uint)local_1d0;
  local_288._0_8_ = (FScriptContainerElement *)0x0;
  local_288._8_8_ = 0;
  local_268 = (uint *)0x0;
  uStack_260 = 0x8000000000;
  local_258 = 0xffffffff;
  FStack_250.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_240 = (ulonglong)uStack_240._4_4_ << 0x20;
  local_458.Data = (FScriptContainerElement *)0x0;
  local_450 = 0;
  local_42c = (uint)local_1d0;
  if ((int)(uint)local_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_1d0 & 0xffffffff);
  }
  if (0 < (int)(uint)local_1d0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)local_1d0,&local_458,0,(int *)((longlong)&local_450 + 4));
  }
  if (uVar33 <= (uint)(local_238._8_4_ - local_204)) goto LAB_14d008ad5;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_238,uVar33);
  uVar22 = 1;
  if (3 < uVar33) {
    uVar22 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_3b8 = (undefined4)lVar20;
    uVar22 = (ulonglong)(uint)(1 << ((byte)lVar20 & 0x1f));
  }
  uVar29 = (uint)uVar22;
  if ((local_1f0 != 0) && ((int)uVar29 <= (int)local_1f0)) goto LAB_14d008ad5;
  local_1f0 = uVar29;
  if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,0,4);
  }
  if (uVar29 != 0) {
    uVar27 = uVar29;
    if (uVar29 < 2) {
      if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
        uVar27 = 0;
        goto LAB_14d008918;
      }
    }
    else {
LAB_14d008918:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,uVar27,4);
    }
    if (0 < (int)uVar29) {
      uVar30 = uVar23;
      do {
        FVar19.Data = (FScriptContainerElement *)local_200;
        if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar19.Data = local_1f8.Data;
        }
        uVar16 = uVar30 & (longlong)(int)uVar29 - 1U;
        uVar30 = uVar30 + 1;
        *(undefined4 *)((longlong)FVar19.Data + uVar16 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_1f0 != 0) {
    pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
    local_3f8 = 0;
    uStack_3f4 = 1;
    uStack_3e4 = 0;
    uStack_3e0 = 0;
    uVar22 = uVar23;
    if (local_210 != 0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_238 + 0x10);
      if (local_218 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_218;
      }
      uVar29 = *(uint *)FVar34;
      uVar30 = uVar23;
      while (uVar29 == 0) {
        uStack_3e0 = (int)uVar30 + 0x20;
        uVar30 = (ulonglong)uStack_3e0;
        iVar15 = (int)uVar22;
        local_3f8 = iVar15 + 1;
        uVar22 = (ulonglong)local_3f8;
        if ((int)((local_210 - 1) + ((int)(local_210 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_3f8)
        goto LAB_14d008a2d;
        uVar29 = ((uint *)((longlong)FVar34 + 4))[iVar15];
      }
      uStack_3f4 = -uVar29 & uVar29;
      uVar22 = (ulonglong)uStack_3f4 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_3b4 = (int)lVar20;
      uStack_3e4 = local_3b4 + -1 + uStack_3e0;
      uVar22 = (ulonglong)uStack_3e4;
      if ((int)local_210 < (int)uStack_3e4) {
LAB_14d008a2d:
        uVar22 = (ulonglong)local_210;
        uStack_3e4 = local_210;
      }
    }
    local_3e8 = 0xffffffff;
    local_3a8 = (longlong *)local_238;
    local_3a0._padding_ = CONCAT44(uStack_3f4,local_3f8);
    local_3a0.CurrentBitIndex = uStack_3e4;
    local_3a0.UnvisitedBitMask = 0xffffffff;
    local_3a0._28_4_ = uStack_3dc;
    local_3a0.BaseBitIndex = uStack_3e0;
    local_3a0.Array = pTStack_3f0;
    if ((int)uVar22 < (int)local_210) {
      do {
        iVar15 = (int)uVar22;
        uVar29 = local_1f0 - 1 & *(uint *)(*local_3a8 + (longlong)iVar15 * 0xc);
        lVar20 = *local_3a8 + (longlong)iVar15 * 0xc;
        *(uint *)(lVar20 + 8) = uVar29;
        FVar19.Data = (FScriptContainerElement *)local_200;
        if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar19.Data = local_1f8.Data;
        }
        uVar22 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar29;
        *(undefined4 *)(lVar20 + 4) = *(undefined4 *)((longlong)FVar19.Data + uVar22 * 4);
        *(int *)((longlong)FVar19.Data + uVar22 * 4) = iVar15;
        local_3a0.UnvisitedBitMask = local_3a0.UnvisitedBitMask & ~local_3a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3a0);
        uVar22 = (ulonglong)(uint)local_3a0.CurrentBitIndex;
      } while (local_3a0.CurrentBitIndex < (local_3a0.Array)->NumBits);
    }
  }
LAB_14d008ad5:
  local_448 = 0;
  if (0 < (int)uVar33) {
    do {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,local_3b0,
                 (bool *)&local_448);
      local_448 = (int)uVar23 + 1;
      uVar23 = (ulonglong)local_448;
    } while ((int)local_448 < (int)uVar33);
  }
  iVar15 = local_238._8_4_ - local_204;
  do {
    if (iVar15 < 1) {
      uVar29 = 0;
      local_468.Data = (FScriptContainerElement *)0x0;
      local_460 = 0;
      if (0 < (int)uVar33) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar33,&local_468,0,(int *)((longlong)&local_460 + 4));
      }
      pFVar24 = (param_1->AllocatorInstance).Data;
      iVar15 = param_1->ArrayNum;
      pFVar26 = pFVar24 + (longlong)iVar15 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar15) {
          local_475 = 0;
          `TCheckedPointerIterator<FLiveLinkSubjectName,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_475);
        }
        if (pFVar24 == pFVar26) break;
        if (((local_468.Data <= pFVar24) &&
            (pFVar24 < local_468.Data + (longlong)local_460._4_4_ * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        if ((int)local_460 == local_460._4_4_) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_468,(int *)((longlong)&local_460 + 4));
          local_460 = CONCAT44(local_460._4_4_,iVar21);
        }
        lVar20 = (longlong)(int)local_460;
        local_460 = CONCAT44(local_460._4_4_,(int)local_460 + 1);
        uVar3 = *(undefined8 *)pFVar24;
        pFVar24 = pFVar24 + 8;
        *(undefined8 *)(local_468.Data + lVar20 * 8) = uVar3;
      }
      pFVar24 = (param_1->AllocatorInstance).Data;
      iVar15 = param_1->ArrayNum;
      lVar20 = 0;
      pFVar26 = pFVar24 + (longlong)iVar15 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar15) {
          local_474[0] = 0;
          `TCheckedPointerIterator<FLiveLinkSubjectName,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_474);
        }
        if (pFVar24 == pFVar26) break;
        uVar33 = 0;
        if ((int)uVar29 < (int)local_450) {
          uVar33 = ~uVar29 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        uVar33 = *(uint *)(local_458.Data + lVar20);
        uVar27 = 0;
        if ((int)uVar33 < (int)local_460) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        uVar29 = uVar29 + 1;
        lVar20 = lVar20 + 4;
        *(undefined8 *)pFVar24 = *(undefined8 *)(local_468.Data + (longlong)(int)uVar33 * 8);
        pFVar24 = pFVar24 + 8;
      }
      bVar13 = true;
      if (local_468.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data);
      }
LAB_14d00957f:
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data);
      }
      uStack_240 = uStack_240 & 0xffffffff00000000;
      if (FStack_250.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_250.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_288);
      uStack_290 = uStack_290 & 0xffffffff00000000;
      if (FStack_2a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_2a0.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2d8);
      if (local_58 != false) {
        AlgoImpl::FMutuallyReachableVertexSetContext::~FMutuallyReachableVertexSetContext
                  (&local_1b8);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1d8.Data,(uint)local_1d0);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1d8.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data,(int)local_1e0);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      local_1f0 = 0;
      if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_1f8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_238);
      return bVar13;
    }
    iVar15 = 0;
    uVar33 = 0;
    if (local_2d8._8_4_ == local_2a8._4_4_) {
      if ((param_3 & AllowCycles) == None) {
        bVar13 = false;
        goto LAB_14d00957f;
      }
      pTVar17 = AlgoImpl::FindMostIndependentMutuallyReachableVertexSet((FKahnContext *)local_238);
      if ((*(int *)&(pTVar17->Elements).field_0x8 == *(int *)&(pTVar17->Elements).field_0x34) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!MRVS.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x67,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      uVar29 = *(uint *)&(pTVar17->Elements).field_0x28;
      puVar1 = &(pTVar17->Elements).field_0x10;
      uStack_41c = 1;
      uStack_40c = uVar33;
      local_408 = uVar33;
      if (uVar29 != 0) {
        puVar32 = *(uint **)&(pTVar17->Elements).field_0x20;
        puVar28 = (uint *)puVar1;
        if (puVar32 != (uint *)0x0) {
          puVar28 = puVar32;
        }
        uVar27 = *puVar28;
        iVar15 = 0;
        while (uVar27 == 0) {
          lVar20 = (longlong)iVar15;
          local_408 = local_408 + 0x20;
          iVar15 = iVar15 + 1;
          uStack_40c = uVar29;
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14d008c0d;
          uVar27 = puVar28[lVar20 + 1];
        }
        uStack_41c = -uVar27 & uVar27;
        uVar23 = (ulonglong)uStack_41c * 2 + 1;
        lVar20 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_380 = (int)lVar20;
        uStack_40c = (local_408 - 1) + local_380;
        if ((int)uVar29 < (int)uStack_40c) {
          uStack_40c = uVar29;
        }
      }
LAB_14d008c0d:
      uVar27 = *(uint *)&(pTVar17->Elements).field_0x28;
      uStack_404 = local_2fc;
      uVar25 = uVar27 & 0xffffffe0;
      iStack_400 = *(int *)&(pTVar17->Elements).field_0x8 - *(int *)&(pTVar17->Elements).field_0x34;
      TStack_370._padding_ = CONCAT44(uStack_41c,iVar15);
      uStack_410 = 0xffffffff;
      TStack_370.CurrentBitIndex = uStack_40c;
      TStack_370.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)uVar27 >> 5;
      TStack_370._28_4_ = local_2fc;
      TStack_370.BaseBitIndex = local_408;
      uStack_350 = CONCAT44(uStack_3fc,iStack_400);
      local_428 = pTVar17;
      iStack_420 = iVar15;
      local_418 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_378 = pTVar17;
      TStack_370.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar27 < 0) || ((int)uVar29 < (int)uVar27)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      uVar29 = *(uint *)&(pTVar17->Elements).field_0x28;
      if (uVar27 != uVar29) {
        puVar2 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
        puVar31 = puVar1;
        if (puVar2 != (undefined1 *)0x0) {
          puVar31 = puVar2;
        }
        uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar21 * 4);
        while (uVar27 == 0) {
          lVar20 = (longlong)iVar21;
          uVar25 = uVar25 + 0x20;
          iVar21 = iVar21 + 1;
          uVar27 = uVar29;
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_14d008d10;
          uVar27 = *(uint *)(puVar31 + lVar20 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_3d8 = (int)lVar20;
        uVar27 = (uVar25 - 1) + local_3d8;
        if ((int)uVar29 < (int)uVar27) {
          uVar27 = uVar29;
        }
      }
LAB_14d008d10:
      while( true ) {
        pTVar5 = local_378;
        if (*(int *)&(local_378->Elements).field_0x8 - *(int *)&(local_378->Elements).field_0x34 !=
            (int)uStack_350) {
          local_478 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_478);
        }
        if (((TStack_370.CurrentBitIndex == uVar27) &&
            (TStack_370.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar5 == pTVar17)) break;
        uVar29 = *(uint *)(*(longlong *)&pTVar5->Elements +
                          (longlong)TStack_370.CurrentBitIndex * 0xc);
        local_444 = uVar29;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8,&local_3d4,
                   (bool *)&local_444);
        uVar25 = uVar33;
        if ((int)uVar29 < (int)local_1c0) {
          uVar25 = ~uVar29 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        *(undefined4 *)(local_1c8.Data + (longlong)(int)uVar29 * 4) = 0xffffffff;
        TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
      }
    }
    if (local_288._8_4_ != local_258._4_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288);
      bVar13 = (longlong)local_288._8_8_ < 0;
      local_288._8_8_ = local_288._8_8_ & 0xffffffff00000000;
      if (bVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_288,0,(int *)(local_288 + 0xc));
      }
      local_258 = 0xffffffff;
      uStack_260 = uStack_260 & 0xffffffff00000000;
    }
    uVar29 = (uint)uStack_2b0;
    uStack_41c = 1;
    uStack_40c = uVar33;
    iStack_420 = 0;
    if ((uint)uStack_2b0 != 0) {
      puVar32 = (uint *)(local_2d8 + 0x10);
      if (local_2b8 != (uint *)0x0) {
        puVar32 = local_2b8;
      }
      uVar27 = *puVar32;
      while (uVar27 == 0) {
        lVar20 = (longlong)iStack_420;
        uVar33 = uVar33 + 0x20;
        iStack_420 = iStack_420 + 1;
        uStack_40c = (uint)uStack_2b0;
        if ((int)(((uint)uStack_2b0 - 1) + ((int)((uint)uStack_2b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iStack_420) goto LAB_14d008ed0;
        uVar27 = (puVar32 + 1)[lVar20];
      }
      uStack_41c = -uVar27 & uVar27;
      uVar23 = (ulonglong)uStack_41c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_3d0 = (int)lVar20;
      uStack_40c = (uVar33 - 1) + local_3d0;
      if ((int)(uint)uStack_2b0 < (int)uStack_40c) {
        uStack_40c = (uint)uStack_2b0;
      }
    }
LAB_14d008ed0:
    local_428 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8;
    uStack_404 = local_2dc;
    local_418 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10);
    iStack_400 = local_2d8._8_4_ - local_2a8._4_4_;
    uVar27 = (uint)uStack_2b0 & 0xffffffe0;
    TStack_340._padding_ = CONCAT44(uStack_41c,iStack_420);
    uStack_410 = 0xffffffff;
    TStack_340.CurrentBitIndex = uStack_40c;
    TStack_340.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)(uint)uStack_2b0 >> 5;
    TStack_340._28_4_ = local_2dc;
    TStack_340.BaseBitIndex = uVar33;
    uStack_320 = CONCAT44(uStack_3fc,iStack_400);
    bVar18 = (byte)uStack_2b0;
    local_408 = uVar33;
    local_348 = local_428;
    TStack_340.Array = local_418;
    if ((int)(uint)uStack_2b0 < 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
    }
    if (uVar29 != (uint)uStack_2b0) {
      puVar32 = (uint *)(local_2d8 + 0x10);
      if (local_2b8 != (uint *)0x0) {
        puVar32 = local_2b8;
      }
      uVar33 = -1 << (bVar18 & 0x1f) & puVar32[iVar15];
      while (uVar33 == 0) {
        lVar20 = (longlong)iVar15;
        uVar27 = uVar27 + 0x20;
        iVar15 = iVar15 + 1;
        uVar29 = (uint)uStack_2b0;
        if ((int)(((uint)uStack_2b0 - 1) + ((int)((uint)uStack_2b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iVar15) goto LAB_14d009000;
        uVar33 = (puVar32 + 1)[lVar20];
      }
      uVar23 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_3cc = (int)lVar20;
      uVar29 = local_3cc + -1 + uVar27;
      if ((int)(uint)uStack_2b0 < (int)uVar29) {
        uVar29 = (uint)uStack_2b0;
      }
    }
LAB_14d009000:
    while( true ) {
      pTVar17 = local_348;
      if (*(int *)&(local_348->Elements).field_0x8 - *(int *)&(local_348->Elements).field_0x34 !=
          (int)uStack_320) {
        local_477 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_477);
      }
      uVar22 = uStack_240;
      FVar12 = FStack_250.SecondaryData;
      uVar10 = FStack_250._0_8_;
      uVar9 = local_258;
      uVar23 = uStack_260;
      puVar32 = local_268;
      uVar8 = local_288._24_8_;
      uVar7 = local_288._16_8_;
      uVar6 = local_288._8_8_;
      uVar3 = local_288._0_8_;
      if (((TStack_340.CurrentBitIndex == uVar29) &&
          (TStack_340.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10))) &&
         (pTVar17 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8)) break;
      local_470[0] = *(uint *)(*(longlong *)&pTVar17->Elements +
                              (longlong)TStack_340.CurrentBitIndex * 0xc);
      lVar20 = (longlong)(int)local_470[0];
      uVar33 = 0;
      if ((int)local_470[0] < (int)local_1e0) {
        uVar33 = ~local_470[0] >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      pFVar26 = local_1e8.Data + lVar20 * 0x10;
      puVar28 = *(uint **)&pFVar26->field_0x0;
      iVar15 = *(int *)(pFVar26 + 8);
      puVar32 = puVar28 + iVar15;
      while( true ) {
        if (*(int *)(pFVar26 + 8) != iVar15) {
          local_476 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_476)
          ;
        }
        if (puVar28 == puVar32) break;
        local_440[0] = *puVar28;
        lVar20 = (longlong)(int)local_440[0];
        uVar33 = 0;
        if ((int)local_440[0] < (int)local_1c0) {
          uVar33 = ~local_440[0] >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        pFVar24 = local_1c8.Data + lVar20 * 4;
        if (*(int *)pFVar24 != -1) {
          if ((*(int *)pFVar24 < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReferencerDependencyCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                                  ,0x7d,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          *(int *)pFVar24 = *(int *)pFVar24 + -1;
          if (*(int *)pFVar24 == 0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288,&local_3c4
                       ,(bool *)local_440);
          }
        }
        puVar28 = puVar28 + 1;
      }
      local_438[0] = local_470[0];
      iVar15 = local_238._8_4_ - local_204;
      if (iVar15 != 0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,local_470[0],
                   (int *)local_438);
      }
      if ((local_238._8_4_ - local_204 != iVar15 + -1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("RemainingVertices.Num() == RemainingNum - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x88,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      if (((local_458.Data <= (FScriptContainerElement *)local_470) &&
          ((FScriptContainerElement *)local_470 < local_458.Data + (longlong)local_450._4_4_ * 4))
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      iVar15 = (int)local_450;
      if ((int)local_450 == local_450._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_458,(int *)((longlong)&local_450 + 4));
      }
      local_450 = CONCAT44(local_450._4_4_,iVar15 + 1);
      *(uint *)(local_458.Data + (longlong)iVar15 * 4) = local_470[0];
      TStack_340.UnvisitedBitMask = TStack_340.UnvisitedBitMask & ~TStack_340._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_340);
    }
    iVar15 = local_238._8_4_ - local_204;
    local_288._0_8_ = local_2d8._0_8_;
    local_288._8_8_ = local_2d8._8_8_;
    local_268 = local_2b8;
    uStack_260 = uStack_2b0;
    local_288._16_8_ = local_2d8._16_8_;
    local_288._24_8_ = local_2d8._24_8_;
    FStack_250.SecondaryData = FStack_2a0.SecondaryData;
    uStack_240 = uStack_290;
    local_258 = local_2a8;
    FStack_250.InlineData[0] = FStack_2a0.InlineData[0];
    FStack_250.InlineData[1] = FStack_2a0.InlineData[1];
    FStack_250.InlineData[2] = FStack_2a0.InlineData[2];
    FStack_250.InlineData[3] = FStack_2a0.InlineData[3];
    FStack_250._padding_ = FStack_2a0._padding_;
    uVar11 = FStack_250._0_8_;
    local_2d8._16_8_ = uVar7;
    local_2d8._24_8_ = uVar8;
    local_2b8 = puVar32;
    uStack_2b0 = uVar23;
    local_2a8 = uVar9;
    FStack_250.InlineData[0] = (uchar)uVar10;
    FStack_250.InlineData[1] = SUB81(uVar10,1);
    FStack_250.InlineData[2] = SUB81(uVar10,2);
    FStack_250.InlineData[3] = SUB81(uVar10,3);
    FStack_250._padding_ = SUB84(uVar10,4);
    FStack_2a0.InlineData[0] = FStack_250.InlineData[0];
    FStack_2a0.InlineData[1] = FStack_250.InlineData[1];
    FStack_2a0.InlineData[2] = FStack_250.InlineData[2];
    FStack_2a0.InlineData[3] = FStack_250.InlineData[3];
    FStack_2a0._padding_ = FStack_250._padding_;
    FStack_2a0.SecondaryData = FVar12;
    uStack_290 = uVar22;
    param_1 = local_3c0;
    param_3 = local_430;
    uVar33 = local_42c;
    local_2d8._0_8_ = uVar3;
    local_2d8._8_8_ = uVar6;
    FStack_250._0_8_ = uVar11;
  } while( true );
}

// KahnTopologicalSort_CreateWorkingGraph<TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,`ULiveLinkAnimationVirtualSubject::SortSubjects'::__l2::<lambda_1>_> @ 14d0096c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
AlgoImpl::
KahnTopologicalSort_CreateWorkingGraph<TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,_ULiveLinkAnimationVirtualSubject::SortSubjects_::__l2::<lambda_1>_>
          (FKahnContext *param_1,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FIdentityFunctor FVar3;
  undefined8 uVar4;
  code *pcVar5;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  FName *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  FName *pFVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  ForAnyElementType FVar24;
  FScriptContainerElement *pFVar25;
  TMap<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_>,0>_>
  *local_res18 [2];
  undefined1 auStackY_1c8 [32];
  TLess<void> local_178;
  FIdentityFunctor local_177 [3];
  uint local_174;
  undefined1 local_170;
  undefined1 local_16f [3];
  undefined4 local_16c;
  int local_168;
  uint local_164;
  uint local_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 local_150;
  uint uStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_140;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_138;
  FName *local_130;
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> local_128;
  undefined4 local_118;
  int local_114;
  int local_110 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  FName *local_f8;
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  FScriptContainerElement *local_c0;
  undefined4 *local_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar10 = param_2->ArrayNum;
  local_138 = &param_1->Referencers;
  uVar14 = 0;
  local_140 = &param_1->Dependencies;
  pTVar1 = &param_1->DependencyCount;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_res18[0] = param_3.ParentToChildren;
  local_108 = pTVar1;
  local_100 = param_4;
  local_f0 = param_2;
  if (uVar10 == 0) goto LAB_14d009976;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar10);
  uVar18 = 1;
  if (3 < uVar10) {
    uVar18 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_118 = (undefined4)lVar20;
    uVar18 = (ulonglong)(uint)(1 << ((byte)lVar20 & 0x1f));
  }
  uVar9 = (uint)uVar18;
  if ((local_60 != 0) && ((int)uVar9 <= (int)local_60)) goto LAB_14d009976;
  local_60 = uVar9;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar9 != 0) {
    uVar21 = uVar9;
    if (uVar9 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar21 = 0;
        goto LAB_14d0097ca;
      }
    }
    else {
LAB_14d0097ca:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar21,4);
    }
    if (0 < (int)uVar9) {
      uVar22 = uVar14;
      do {
        FVar24.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_68.Data;
        }
        uVar13 = (longlong)(int)uVar9 - 1U & uVar22;
        uVar22 = uVar22 + 1;
        *(undefined4 *)(FVar24.Data + uVar13 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_160 = 0;
    uStack_15c = 1;
    uStack_14c = 0;
    uStack_148 = 0;
    if (local_80 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_88;
      }
      uVar9 = *(uint *)FVar23;
      uVar18 = uVar14;
      while (uVar9 == 0) {
        uStack_148 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_148;
        iVar12 = (int)uVar14;
        local_160 = iVar12 + 1;
        uVar14 = (ulonglong)local_160;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_160)
        goto LAB_14d0098cf;
        uVar9 = ((uint *)((longlong)FVar23 + 4))[iVar12];
      }
      uStack_15c = -uVar9 & uVar9;
      uVar14 = (ulonglong)uStack_15c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_114 = (int)lVar20;
      uStack_14c = local_114 + -1 + uStack_148;
      uVar14 = (ulonglong)uStack_14c;
      if ((int)local_80 < (int)uStack_14c) {
LAB_14d0098cf:
        uVar14 = (ulonglong)local_80;
        uStack_14c = local_80;
      }
    }
    local_150 = 0xffffffff;
    local_e8 = (longlong *)local_a8;
    local_e0._padding_ = CONCAT44(uStack_15c,local_160);
    local_e0.CurrentBitIndex = uStack_14c;
    local_e0.UnvisitedBitMask = 0xffffffff;
    local_e0._28_4_ = uStack_144;
    local_e0.BaseBitIndex = uStack_148;
    local_e0.Array = pTStack_158;
    if ((int)uVar14 < (int)local_80) {
      do {
        iVar12 = (int)uVar14;
        uVar4 = *(undefined8 *)(*local_e8 + (longlong)iVar12 * 0x14);
        lVar20 = *local_e8 + (longlong)iVar12 * 0x14;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar9 = local_60 - 1 & uVar9 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)(lVar20 + 0x10) = uVar9;
        FVar24.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_68.Data;
        }
        uVar14 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar20 + 0xc) = *(undefined4 *)(FVar24.Data + uVar14 * 4);
        *(int *)(FVar24.Data + uVar14 * 4) = iVar12;
        local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
        uVar14 = (ulonglong)(uint)local_e0.CurrentBitIndex;
      } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
    }
  }
LAB_14d009976:
  pFVar25 = (param_2->AllocatorInstance).Data;
  iVar12 = param_2->ArrayNum;
  local_174 = 0;
  pFVar2 = pFVar25 + (longlong)iVar12 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar12) {
      local_178 = (TLess<void>)0x0;
      `TCheckedPointerIterator<FLiveLinkSubjectName,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_178);
    }
    if (pFVar25 == pFVar2) break;
    lVar20 = *(longlong *)pFVar25;
    local_16c = 0xffffffff;
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar20);
    uVar9 = uVar9 + (int)((ulonglong)lVar20 >> 0x20);
    if (local_a8._8_4_ != local_74) {
      FVar24.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar24.Data = local_68.Data;
      }
      iVar11 = *(int *)(FVar24.Data + (ulonglong)(local_60 - 1 & uVar9) * 4);
      if (iVar11 != -1) {
        do {
          pFVar17 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar11 * 0x14);
          if (*(longlong *)(local_a8._0_8_ + (longlong)iVar11 * 0x14) == *(longlong *)pFVar25) {
            if (pFVar17 != (FScriptContainerElement *)0x0) goto LAB_14d009a5b;
            break;
          }
          iVar11 = *(int *)(pFVar17 + 0xc);
        } while (iVar11 != -1);
      }
    }
    local_b8 = &local_16c;
    local_c0 = pFVar25;
    TSet<TTuple<FLiveLinkSubjectName,int>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FLiveLinkSubjectName_const_&,int_&&>_>
              ((TSet<TTuple<FLiveLinkSubjectName,int>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,int,0>,FDefaultSetAllocator>
                *)local_a8,(uint)&local_168,
               (TPairInitializer<FLiveLinkSubjectName_const_&,int_&&> *)(ulonglong)uVar9,
               (bool *)&local_c0);
    pFVar17 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)local_168 * 0x14);
LAB_14d009a5b:
    if ((*(int *)(pFVar17 + 8) != -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExistingHandle == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                           ,0xb7,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar25 = pFVar25 + 8;
    *(uint *)(pFVar17 + 8) = local_174;
    local_174 = local_174 + 1;
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_138,uVar10,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_140,uVar10,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar1,uVar10,Default);
  local_164 = param_2->ArrayNum;
  uVar14 = (ulonglong)(int)local_164;
  pFVar19 = (FName *)(param_2->AllocatorInstance).Data;
  local_174 = 0;
  local_f8 = pFVar19 + uVar14;
  FVar3 = local_177[0];
  do {
    pFVar7 = local_f8;
    local_130 = pFVar19;
    if (param_2->ArrayNum != (int)uVar14) {
      local_170 = 0;
      `TCheckedPointerIterator<FLiveLinkSubjectName,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_170);
    }
    if (pFVar19 == pFVar7) {
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      return;
    }
    `ULiveLinkAnimationVirtualSubject::SortSubjects'::__l2::<lambda_1>::operator()
              (local_res18,&local_128,(FLiveLinkSubjectName)*pFVar19);
    pTVar6 = local_140;
    lVar20 = (longlong)(int)local_174;
    uVar10 = 0;
    if ((int)local_174 < local_140->ArrayNum) {
      uVar10 = ~local_174 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar25 = (pTVar6->AllocatorInstance).Data + lVar20 * 0x10;
    iVar12 = local_128.ArrayNum;
    pFVar2 = local_128.AllocatorInstance.Data + (longlong)iVar12 * 8;
    FVar24.Data = local_128.AllocatorInstance.Data;
    while( true ) {
      if (local_128.ArrayNum != iVar12) {
        local_16f[0] = 0;
        `TCheckedPointerIterator<FLiveLinkSubjectName_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_16f);
      }
      if (FVar24.Data == pFVar2) break;
      lVar20 = *(longlong *)FVar24.Data;
      uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar20);
      if (local_a8._8_4_ == local_74) {
LAB_14d009cc1:
        FVar24.Data = FVar24.Data + 8;
      }
      else {
        FVar16.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_68.Data;
        }
        iVar11 = *(int *)(FVar16.Data +
                         (ulonglong)(local_60 - 1 & uVar10 + (int)((ulonglong)lVar20 >> 0x20)) * 4);
        if (iVar11 == -1) goto LAB_14d009cc1;
        do {
          pFVar17 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar11 * 0x14);
          if (*(longlong *)(local_a8._0_8_ + (longlong)iVar11 * 0x14) == *(longlong *)FVar24.Data) {
            pFVar15 = pFVar17 + 8;
            if (pFVar17 == (FScriptContainerElement *)0x0) {
              pFVar15 = (FScriptContainerElement *)0x0;
            }
            if (pFVar15 != (FScriptContainerElement *)0x0) {
              if (((*(FScriptContainerElement **)&pFVar25->field_0x0 <= pFVar15) &&
                  (pFVar15 < *(FScriptContainerElement **)&pFVar25->field_0x0 +
                             (longlong)*(int *)(pFVar25 + 0xc) * 4)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar11 = *(int *)&pFVar25[8].field_0x0;
              if (iVar11 == *(int *)(pFVar25 + 0xc)) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar25,(int *)(pFVar25 + 0xc));
              }
              *(int *)&pFVar25[8].field_0x0 = iVar11 + 1;
              *(undefined4 *)
               (*(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)iVar11 * 4) =
                   *(undefined4 *)pFVar15;
            }
            goto LAB_14d009cc1;
          }
          iVar11 = *(int *)(pFVar17 + 0xc);
        } while (iVar11 != -1);
        FVar24.Data = FVar24.Data + 8;
      }
    }
    IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
              ((int *)*(FScriptContainerElement **)&pFVar25->field_0x0,*(int *)&pFVar25[8].field_0x0
               ,FVar3,local_178);
    uVar10 = *(uint *)&pFVar25[8].field_0x0;
    pFVar2 = *(FScriptContainerElement **)&pFVar25->field_0x0;
    uVar9 = uVar10;
    if ((int)uVar10 < 2) {
LAB_14d009d74:
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < (int)uVar10) {
        uVar10 = uVar10 - uVar9;
        if (((int)(uVar10 | uVar9) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          iVar12 = (*(int *)&pFVar25[8].field_0x0 - uVar9) - uVar10;
          if (iVar12 != 0) {
            memmove(*(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)(int)uVar9 * 4,
                    *(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)(int)uVar9 * 4 +
                    (longlong)(int)uVar10 * 4,(longlong)iVar12 << 2);
          }
          *(uint *)&pFVar25[8].field_0x0 = *(int *)&pFVar25[8].field_0x0 - uVar10;
        }
      }
    }
    else {
      pFVar17 = pFVar2 + 4;
      pFVar15 = pFVar2;
      if (pFVar17 != pFVar2 + (longlong)(int)uVar10 * 4) {
        do {
          if ((*(int *)pFVar15 != *(int *)pFVar17) && (pFVar15 = pFVar15 + 4, pFVar15 != pFVar17)) {
            *(int *)pFVar15 = *(int *)pFVar17;
          }
          pFVar17 = pFVar17 + 4;
        } while (pFVar17 != pFVar2 + (longlong)(int)uVar10 * 4);
        uVar10 = *(uint *)&pFVar25[8].field_0x0;
      }
      uVar9 = (uint)((longlong)(pFVar15 + (4 - (longlong)pFVar2)) >> 2);
      if ((int)uVar9 <= (int)uVar10) goto LAB_14d009d74;
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar9 - uVar10,(ForAnyElementType *)pFVar25,(int *)(pFVar25 + 8),
                          (int *)(pFVar25 + 0xc));
      memset(*(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)iVar12 * 4,0,
             (longlong)(int)(uVar9 - uVar10) << 2);
    }
    pTVar1 = local_108;
    lVar20 = (longlong)(int)local_174;
    iVar12 = *(int *)&pFVar25[8].field_0x0;
    uVar10 = 0;
    if ((int)local_174 < local_108->ArrayNum) {
      uVar10 = ~local_174 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)((pTVar1->AllocatorInstance).Data + lVar20 * 4) = iVar12;
    if (iVar12 == 0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (local_100,local_110,(bool *)&local_174);
    }
    pTVar6 = local_138;
    pFVar17 = *(FScriptContainerElement **)&pFVar25->field_0x0;
    iVar12 = *(int *)&pFVar25[8].field_0x0;
    pFVar2 = pFVar17 + (longlong)iVar12 * 4;
    while( true ) {
      if (*(int *)&pFVar25[8].field_0x0 != iVar12) {
        local_177[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_177);
      }
      FVar3 = local_177[0];
      if (pFVar17 == pFVar2) break;
      uVar10 = *(uint *)pFVar17;
      uVar9 = 0;
      if ((int)uVar10 < pTVar6->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
      if (((*(FScriptContainerElement **)&pFVar15->field_0x0 <=
            (FScriptContainerElement *)&local_174) &&
          ((FScriptContainerElement *)&local_174 <
           *(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)*(int *)(pFVar15 + 0xc) * 4)
          ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = *(int *)&pFVar15[8].field_0x0;
      if (iVar11 == *(int *)(pFVar15 + 0xc)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
      }
      *(int *)&pFVar15[8].field_0x0 = iVar11 + 1;
      pFVar17 = pFVar17 + 4;
      *(uint *)(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar11 * 4) = local_174
      ;
    }
    local_174 = local_174 + 1;
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)local_164;
    pFVar19 = local_130 + 1;
    param_2 = local_f0;
  } while( true );
}

// MakeRequiredArgs<FLiveLinkClient_*> @ 14d00a2a0

T1RequiredArgs<FLiveLinkClient_*_&&> __cdecl
RequiredArgs::MakeRequiredArgs<FLiveLinkClient_*>(FLiveLinkClient **param_1)

{
  FLiveLinkClient *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<FLiveLinkClient_*_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_> @ 14d00a2b0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_> @ 14d00a2c0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_>
                   (TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
                    *param_1)

{
  SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_> @ 14d00a2d0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_> @ 14d00a2e0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
                    *param_1)

{
  STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_> @ 14d00a2f0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FProviderPollResult,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>)param_1;
}

// MakeShared<FLiveLinkLogInstance::FRepeatableMessageData,1> @ 14d00a300

TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> * __cdecl
MakeShared<FLiveLinkLogInstance::FRepeatableMessageData,1>
          (TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FRepeatableMessageData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFRepeatableMessageData_FLiveLinkLogInstance___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FRepeatableMessageData *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FSlateColorBrush,1,FLinearColor_const_&> @ 14d00a3a0

TSharedRef<FSlateColorBrush,1> * __cdecl
MakeShared<FSlateColorBrush,1,FLinearColor_const_&>
          (TSharedRef<FSlateColorBrush,1> *__return_storage_ptr__,FLinearColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FSlateColorBrush,1> *pTVar4;
  TVector2<float>_u_0 local_res18 [2];
  FMargin local_28;
  
  pTVar3 = operator_new(0xc0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSlateColorBrush *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFSlateColorBrush___00_SharedPointerInternals__6B_;
    local_res18[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_28.Left = 0.0;
    local_28.Top = 0.0;
    local_28.Right = 0.0;
    local_28.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)(pTVar3 + 1),Image,(FName)0x0,&local_28,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res18[0]._s_0,param_1,(UObject *)0x0,false);
    pTVar3[1]._padding_ = (longlong)&___7FSlateColorBrush__6B_;
    __return_storage_ptr__->Object = (FSlateColorBrush *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FSlateColorBrush *)(pTVar3 + 1) == (FSlateColorBrush *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FSlateColorBrush,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> @ 14d00a4b0

TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> * __cdecl
MakeShared<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFLiveLinkDebugUIEntry___00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ =
         (longlong)&STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>
            (__return_storage_ptr__,(STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)(pTVar2 + 1),
             pTVar2);
  return __return_storage_ptr__;
}

// MakeShared<FLiveLinkVirtualSubjectSource,1> @ 14d00a620

TSharedRef<FLiveLinkVirtualSubjectSource,1> * __cdecl
MakeShared<FLiveLinkVirtualSubjectSource,1>
          (TSharedRef<FLiveLinkVirtualSubjectSource,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FLiveLinkVirtualSubjectSource,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FLiveLinkVirtualSubjectSource *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLiveLinkVirtualSubjectSource___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FLiveLinkVirtualSubjectSource__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FLiveLinkVirtualSubjectSource *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FLiveLinkVirtualSubjectSource,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs> @ 14d00a6c0

TSlateDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs> @ 14d00a770

TSlateDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_> @ 14d00a820

TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *)
                      (local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14d00a980

TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *)
                      (local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_> @ 14d00aae0

TSlateDecl<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
  ::
  TSlateDecl<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_> @ 14d00ab90

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_> @ 14d00ac40

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>_> @ 14d00acf0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FProviderPollResult,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_> @ 14d00ada0

TSlateDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_> * __cdecl
MakeTDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_>
          (TSlateDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<FLiveLinkClient_*_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_>::
  TSlateDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs> @ 14d00ae50

TSlateDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SProviderPollRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14d00af00

TSlateDecl<SProviderPollRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> *
__cdecl MakeTDecl<SProviderPollRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                  (TSlateDecl<SProviderPollRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SProviderPollRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SProviderPollRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x478);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSProviderPollRow___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x468);
    STableRow<TSharedPtr<FProviderPollResult,1>_>::STableRow<TSharedPtr<FProviderPollResult,1>_>
              ((STableRow<TSharedPtr<FProviderPollResult,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SProviderPollRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount = &SProviderPollRow::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SProviderPollRow,1>::TSharedRef<SProviderPollRow,1>
            ((TSharedRef<SProviderPollRow,1> *)(local_48 + 0x10),(SProviderPollRow *)(pTVar5 + 1),
             pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SProviderPollRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SProviderPollRow *)local_48._16_8_;
    local_48._0_8_ = (SProviderPollRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SProviderPollRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SProviderPollRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x468);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Merge<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,`SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_3>_>_> @ 14d00b130

void __cdecl
AlgoImpl::
Merge<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,_SLiveLinkMessageBusSourceFactory::Tick_::__l5::<lambda_3>_>_>
          (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1,int param_2,
          int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,_public:_virtual_void___cdecl_SLiveLinkMessageBusSourceFactory::Tick(FGeometry_const_&,double,float)_::_5_::<lambda_3>_>
          param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FLiveLinkSource *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar7;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar9;
  int iVar10;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar11;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar12;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar13;
  uint uVar14;
  uint uVar15;
  int local_58;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar8;
  
  if (0 < param_2) {
    local_58 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar10 = 0;
      if (0 < param_2 - local_58) {
        uVar15 = param_2 - local_58;
        iVar10 = 0;
        do {
          uVar14 = uVar15 >> 1;
          bVar4 = `SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_3>::operator()
                            (param_5.Predicate,param_1 + param_2,
                             param_1 + (longlong)(int)(uVar14 + iVar10) + (longlong)local_58);
          if (!bVar4) {
            iVar10 = uVar14 + iVar10 + (uVar15 & 1);
          }
          uVar15 = uVar14;
        } while (uVar14 != 0);
      }
      local_58 = local_58 + iVar10;
      if (param_2 <= local_58) {
        return;
      }
      iVar10 = 0;
      pTVar11 = param_1 + local_58;
      uVar15 = param_3 - param_2;
      if (0 < (int)uVar15) {
        do {
          uVar14 = uVar15 >> 1;
          bVar4 = `SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_3>::operator()
                            (param_5.Predicate,
                             param_1 + (longlong)(int)(uVar14 + iVar10) + (longlong)param_2,pTVar11)
          ;
          if (bVar4) {
            iVar10 = uVar14 + iVar10 + (uVar15 & 1);
          }
          uVar15 = uVar14;
        } while (uVar14 != 0);
      }
      iVar5 = (iVar10 - local_58) + param_2;
      iVar6 = param_2 - local_58;
      if ((iVar6 != 0) && (iVar6 < iVar5)) {
        pTVar7 = pTVar11 + iVar6;
        pTVar12 = pTVar11;
        pTVar8 = pTVar11 + iVar6;
        do {
          while( true ) {
            pTVar9 = pTVar7 + 1;
            pTVar13 = pTVar12 + 1;
            pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
            pFVar2 = pTVar12->Object;
            pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
            pTVar12->Object = pTVar7->Object;
            (pTVar12->SharedReferenceCount).ReferenceController = pTVar1;
            pTVar7->Object = pFVar2;
            (pTVar7->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar12 = pTVar13;
            if (pTVar9 == pTVar11 + iVar5) break;
            pTVar7 = pTVar9;
            if (pTVar13 == pTVar8) {
              pTVar8 = pTVar9;
            }
          }
          pTVar7 = pTVar8;
        } while (pTVar13 != pTVar8);
      }
      local_58 = local_58 + 1 + iVar10;
      param_2 = param_2 + iVar10;
    } while (local_58 < param_2);
  }
  return;
}

// NewObject<ULiveLinkFrameInterpolationProcessor> @ 14d00b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkFrameInterpolationProcessor * __cdecl
NewObject<ULiveLinkFrameInterpolationProcessor>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (ULiveLinkFrameInterpolationProcessor *)pUVar2;
}

// NewObject<ULiveLinkFramePreProcessor> @ 14d00b460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkFramePreProcessor * __cdecl
NewObject<ULiveLinkFramePreProcessor>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (ULiveLinkFramePreProcessor *)pUVar2;
}

// NewObject<ULiveLinkMessageBusFinder> @ 14d00b560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkMessageBusFinder * __cdecl NewObject<ULiveLinkMessageBusFinder>(UObject *param_1)

{
  UClass *pUVar1;
  ULiveLinkMessageBusFinder *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = ULiveLinkMessageBusFinder::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULiveLinkMessageBusFinder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULiveLinkSourceSettings> @ 14d00b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkSourceSettings * __cdecl
NewObject<ULiveLinkSourceSettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULiveLinkSourceSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULiveLinkSourceSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULiveLinkSubjectSettings> @ 14d00b700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkSubjectSettings * __cdecl NewObject<ULiveLinkSubjectSettings>(UObject *param_1)

{
  UClass *pUVar1;
  ULiveLinkSubjectSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULiveLinkSubjectSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULiveLinkSubjectSettings> @ 14d00b7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkSubjectSettings * __cdecl
NewObject<ULiveLinkSubjectSettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULiveLinkSubjectSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULiveLinkSubjectSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULiveLinkVirtualSubject> @ 14d00b8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkVirtualSubject * __cdecl
NewObject<ULiveLinkVirtualSubject>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULiveLinkVirtualSubject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULiveLinkVirtualSubject *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULiveLinkVirtualSubjectSourceSettings> @ 14d00b9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkVirtualSubjectSourceSettings * __cdecl
NewObject<ULiveLinkVirtualSubjectSourceSettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULiveLinkVirtualSubjectSourceSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = ULiveLinkVirtualSubjectSourceSettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULiveLinkVirtualSubjectSourceSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RemoveAll<`TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14d00baa0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  TWeakPtr<FMessageEndpoint,1> *pTVar2;
  TWeakPtr<FMessageEndpoint,1> *pTVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FWeakReferencer<1> *pFVar12;
  byte bVar13;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pTVar2 = *(TWeakPtr<FMessageEndpoint,1> **)param_1;
  iVar7 = 0;
  pTVar3 = (TWeakPtr<FMessageEndpoint,1> *)(this->AllocatorInstance).Data;
  local_res18 = 0;
  bVar4 = TWeakPtr<FMessageEndpoint,1>::UEOpEquals<FMessageEndpoint>(pTVar2,pTVar3);
  if ((bVar4) &&
     (((*(int *)((longlong)&pTVar2[1].WeakReferenceCount.ReferenceController + 4) ==
        *(int *)((longlong)&pTVar3[1].WeakReferenceCount.ReferenceController + 4) &&
       *(int *)&pTVar2[1].WeakReferenceCount.ReferenceController ==
       *(int *)&pTVar3[1].WeakReferenceCount.ReferenceController) &&
      *(int *)((longlong)&pTVar2[1].Object + 4) == *(int *)((longlong)&pTVar3[1].Object + 4)) &&
      *(int *)&pTVar2[1].Object == *(int *)&pTVar3[1].Object)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  lVar6 = 0;
  iVar8 = 0;
  do {
    iVar9 = iVar8 + 1;
    lVar6 = lVar6 + 1;
    if (lVar6 < lVar11) {
      pFVar12 = &pTVar3[lVar6 * 2 + 1].WeakReferenceCount;
      do {
        pTVar2 = *(TWeakPtr<FMessageEndpoint,1> **)param_1;
        bVar4 = TWeakPtr<FMessageEndpoint,1>::UEOpEquals<FMessageEndpoint>
                          (pTVar2,(TWeakPtr<FMessageEndpoint,1> *)(pFVar12 + -3));
        if ((bVar4) &&
           (((*(int *)((longlong)&pFVar12->ReferenceController + 4) ==
              *(int *)((longlong)&pTVar2[1].WeakReferenceCount.ReferenceController + 4) &&
             *(int *)((longlong)&((TWeakPtr<FMessageEndpoint,1> *)(pFVar12 + -1))->Object + 4) ==
             *(int *)((longlong)&pTVar2[1].Object + 4)) &&
            *(int *)&((TWeakPtr<FMessageEndpoint,1> *)(pFVar12 + -1))->Object ==
            *(int *)&pTVar2[1].Object) &&
            *(int *)&pTVar2[1].WeakReferenceCount.ReferenceController ==
            *(int *)&pFVar12->ReferenceController)) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        iVar7 = local_res18;
        if (bVar13 != bVar5) break;
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + 1;
        pFVar12 = pFVar12 + 4;
      } while (lVar6 < lVar11);
    }
    iVar10 = iVar9 - iVar8;
    if (bVar13 == 0) {
      DestructItems<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,int>
                ((FHeartbeatRecipient *)(pTVar3 + (longlong)iVar8 * 2),iVar10);
    }
    else {
      if (iVar7 != iVar8) {
        memmove(pTVar3 + (longlong)iVar7 * 2,pTVar3 + (longlong)iVar8 * 2,(longlong)iVar10 << 5);
      }
      iVar7 = iVar7 + iVar10;
      local_res18 = iVar7;
    }
    bVar13 = bVar13 ^ 1;
    iVar8 = iVar9;
    if (lVar11 <= lVar6) {
      this->ArrayNum = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}

// Reverse<FLiveLinkSubjectName> @ 14d00c6a0

void __cdecl AlgoImpl::Reverse<FLiveLinkSubjectName>(FLiveLinkSubjectName *param_1,int param_2)

{
  FName FVar1;
  FName *pFVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    pFVar2 = &param_1[param_2 + -1].Name;
    do {
      FVar1 = param_1[lVar3].Name;
      param_1[lVar3].Name = *pFVar2;
      lVar3 = lVar3 + 1;
      *pFVar2 = FVar1;
      pFVar2 = pFVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// RotateInternal<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> @ 14d00c700

int __cdecl
AlgoImpl::RotateInternal<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
          (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1,int param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FLiveLinkSource *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar4;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar6;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar7;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar8;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar5;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar4 = param_1 + param_3;
    pTVar7 = param_1;
    pTVar5 = param_1 + param_3;
    do {
      while( true ) {
        pTVar6 = pTVar4 + 1;
        pTVar8 = pTVar7 + 1;
        pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
        pFVar2 = pTVar7->Object;
        pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar4->Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar1;
        pTVar4->Object = pFVar2;
        (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
        pTVar7 = pTVar8;
        if (pTVar6 == param_1 + param_2) break;
        pTVar4 = pTVar6;
        if (pTVar8 == pTVar5) {
          pTVar5 = pTVar6;
        }
      }
      pTVar4 = pTVar5;
    } while (pTVar8 != pTVar5);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,`SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_3>_>_> @ 14d00ca10

void __cdecl
AlgoImpl::
StableSortInternal<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,_SLiveLinkMessageBusSourceFactory::Tick_::__l5::<lambda_3>_>_>
          (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,_public:_virtual_void___cdecl_SLiveLinkMessageBusSourceFactory::Tick(FGeometry_const_&,double,float)_::_5_::<lambda_3>_>
          param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLiveLinkSource *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *pTVar11;
  
  iVar9 = 0;
  if (0 < param_2) {
    pTVar11 = param_1 + 1;
    pTVar7 = param_1;
    do {
      if ((iVar9 + 1 < param_2) &&
         (bVar5 = `SLiveLinkMessageBusSourceFactory::Tick'::__l5::<lambda_3>::operator()
                            (param_4.Predicate,pTVar11,pTVar7), bVar5)) {
        pTVar2 = pTVar7[1].SharedReferenceCount.ReferenceController;
        pFVar3 = pTVar7->Object;
        pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar7[1].Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar2;
        pTVar7[1].Object = pFVar3;
        pTVar7[1].SharedReferenceCount.ReferenceController = pTVar4;
      }
      iVar9 = iVar9 + 2;
      pTVar11 = pTVar11 + 2;
      pTVar7 = pTVar7 + 2;
    } while (iVar9 < param_2);
  }
  iVar9 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar9 * 2;
      iVar6 = 0;
      iVar10 = param_2;
      do {
        iVar8 = iVar10;
        if (iVar1 <= iVar10) {
          iVar8 = iVar1;
        }
        Merge<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,_SLiveLinkMessageBusSourceFactory::Tick_::__l5::<lambda_3>_>_>
                  (param_1 + iVar6,iVar9,iVar8,param_3,param_4);
        iVar6 = iVar6 + iVar1;
        iVar10 = iVar10 + iVar9 * -2;
      } while (iVar6 < param_2);
      iVar9 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EAxisSign> @ 14d00cb10

UEnum * __cdecl StaticEnum<enum_EAxisSign>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxisSign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_EAxisSign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_EAxisSign,(UObject *)pUVar1,L"EAxisSign");
  }
  return Z_Registration_Info_UEnum_EAxisSign.OuterSingleton;
}

// StaticEnum<enum_EBoneTransformResolution> @ 14d00cb50

UEnum * __cdecl StaticEnum<enum_EBoneTransformResolution>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_EBoneTransformResolution,(UObject *)pUVar1,
                       L"EBoneTransformResolution");
  }
  return Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkAxis> @ 14d00cb90

UEnum * __cdecl StaticEnum<enum_ELiveLinkAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkAxis,(UObject *)pUVar1,L"ELiveLinkAxis");
  }
  return Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkTimecodeProviderEvaluationType> @ 14d00cbd0

UEnum * __cdecl StaticEnum<enum_ELiveLinkTimecodeProviderEvaluationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType,
                       (UObject *)pUVar1,L"ELiveLinkTimecodeProviderEvaluationType");
  }
  return Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkVisualBoneType> @ 14d00cc10

UEnum * __cdecl StaticEnum<enum_ELiveLinkVisualBoneType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkVisualBoneType,(UObject *)pUVar1,
                       L"ELiveLinkVisualBoneType");
  }
  return Z_Registration_Info_UEnum_ELiveLinkVisualBoneType.OuterSingleton;
}

// Transform<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&,`FLiveLinkFloatAnimationFrameData::ToAnimData'::__l2::<lambda_1>_> @ 14d00cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Algo::
Transform<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&,_FLiveLinkFloatAnimationFrameData::ToAnimData_::__l2::<lambda_1>_>
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar1 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_98[0] = 0;
      `TCheckedPointerIterator<UE::Math::TTransform<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pFVar8 == pFVar7) break;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_88._8_4_ = SUB84((double)*(float *)(pFVar8 + 4),0);
    local_88._0_8_ = (double)*(float *)pFVar8;
    local_88._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar8 + 4) >> 0x20);
    local_78._8_4_ = SUB84((double)*(float *)(pFVar8 + 0xc),0);
    local_78._0_8_ = (double)*(float *)(pFVar8 + 8);
    local_78._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar8 + 0xc) >> 0x20);
    local_68._8_4_ = SUB84((double)*(float *)(pFVar8 + 0x14),0);
    local_68._0_8_ = (double)*(float *)(pFVar8 + 0x10);
    local_68._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar8 + 0x14) >> 0x20);
    local_58._8_4_ = SUB84((double)*(float *)(pFVar8 + 0x1c),0);
    local_58._0_8_ = (double)*(float *)(pFVar8 + 0x18);
    local_58._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar8 + 0x1c) >> 0x20);
    local_48._8_4_ = SUB84((double)*(float *)(pFVar8 + 0x24),0);
    local_48._0_8_ = (double)*(float *)(pFVar8 + 0x20);
    local_48._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar8 + 0x24) >> 0x20);
    local_38._8_4_ = SUB84((double)*(float *)(pFVar8 + 0x2c),0);
    local_38._0_8_ = (double)*(float *)(pFVar8 + 0x28);
    local_38._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar8 + 0x2c) >> 0x20);
    if ((pFVar2 <= (FScriptContainerElement *)local_88) &&
       ((FScriptContainerElement *)local_88 < pFVar2 + (longlong)param_2->ArrayMax * 0x60)) {
      local_b0 = (longlong)param_2->ArrayNum;
      local_a8 = 0x60;
      local_c8 = local_88;
      local_c0 = pFVar2;
      local_b8 = (longlong)param_2->ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar2 = (param_2->AllocatorInstance).Data;
    lVar6 = (longlong)iVar5 * 0x60;
    pFVar8 = pFVar8 + 0x30;
    *(undefined8 *)(pFVar2 + lVar6) = local_88._0_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 8) = local_88._8_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x10) = local_78._0_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x10 + 8) = local_78._8_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x20) = local_68._0_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x20 + 8) = local_68._8_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x30) = local_58._0_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x30 + 8) = local_58._8_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x40) = local_48._0_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x40 + 8) = local_48._8_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x50) = local_38._0_8_;
    *(undefined8 *)(pFVar2 + lVar6 + 0x50 + 8) = local_38._8_8_;
  }
  return;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_ECustomTimeStepSynchronizationState>_> @ 14d00cff0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_ECustomTimeStepSynchronizationState>_>
          (_Atomic_padded<ECustomTimeStepSynchronizationState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_ECustomTimeStepSynchronizationState>_> @ 14d00d000

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_ECustomTimeStepSynchronizationState>_>
          (_Atomic_padded<ECustomTimeStepSynchronizationState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_ETimecodeProviderSynchronizationState>_> @ 14d00d010

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_ETimecodeProviderSynchronizationState>_>
          (_Atomic_padded<ETimecodeProviderSynchronizationState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<enum_ETimecodeProviderSynchronizationState>_> @ 14d00d020

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<enum_ETimecodeProviderSynchronizationState>_>
          (_Atomic_padded<ETimecodeProviderSynchronizationState> *param_1)

{
  return (long *)param_1;
}

// _Atomic_reinterpret_as<int,enum_ECustomTimeStepSynchronizationState> @ 14d00d030

int __cdecl
std::_Atomic_reinterpret_as<int,enum_ECustomTimeStepSynchronizationState>
          (ECustomTimeStepSynchronizationState *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<long,enum_ETimecodeProviderSynchronizationState> @ 14d00d040

long __cdecl
std::_Atomic_reinterpret_as<long,enum_ETimecodeProviderSynchronizationState>
          (ETimecodeProviderSynchronizationState *param_1)

{
  return *param_1;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULiveLinkPreset::ApplyToClientLatent'::__l2::<lambda_1>_> @ 14d00dc00

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_void___cdecl_ULiveLinkPreset::ApplyToClientLatent(TFunction<void___cdecl(bool)>)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULiveLinkPreset::ApplyToClientLatent'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_ULiveLinkPreset::ApplyToClientLatent_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_void___cdecl_ULiveLinkPreset::ApplyToClientLatent(TFunction<void___cdecl(bool)>)_::_2_::<lambda_1>_>
          *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULiveLinkPreset::ApplyToClientLatent'::`2'::<lambda_1>_>
        ::_vftable_;
  *(FWeakObjectPtr *)((longlong)this + 0x20) = (param_1->Functor).WeakThis.WeakPtr;
  lVar1 = *(longlong *)&(param_1->Functor).WrappedCallback;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->Functor).WrappedCallback.field_0x28;
    puVar3 = (undefined8 *)&(param_1->Functor).WrappedCallback.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  *(uint *)((longlong)this + 0x60) = (param_1->Functor).Count;
  return this;
}

// ~TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,1,1> @ 14d015140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>_::__l7::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,1,1> @ 14d015160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>_::__l7::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,1,1> @ 14d015180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>_::__l7::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey__W4ELiveLinkSubjectState___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEAW4ELiveLinkSubjectState___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey__W4ELiveLinkSubjectState___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEAW4ELiveLinkSubjectState___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,1,1> @ 14d0151a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>_::__l7::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,1,0> @ 14d0151c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// operator() @ 14d01aaf0

void __thiscall
_anon_CF18CE8C::<lambda_28>::operator()
          (<lambda_28> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  UObject *pUVar4;
  ULiveLinkPreset *this_00;
  wchar_t *pwVar5;
  FScriptContainerElement *this_01;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FUObjectCppClassStaticFunctions local_res18;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TFunction<void___cdecl(bool)> local_58;
  
  if (1 < GFrameCounter) {
    this_01 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar6 = this_01 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (this_01 == pFVar6) break;
      iVar7 = 0;
      iVar2 = ::FString::Find((FString *)this_01,L"Preset=",7,IgnoreCase,FromStart,-1);
      if (iVar2 != -1) {
        if (*(int *)(this_01 + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)&this_01->field_0x0;
        }
        pwVar5 = pwVar5 + (longlong)iVar2 + 7;
        if (pwVar5 != (wchar_t *)0x0) {
          sVar3 = wcslen(pwVar5);
          iVar7 = (int)sVar3;
        }
        if (Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton == (UClass *)0x0) {
          local_res18.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/LiveLink",L"LiveLinkPreset",
                     &Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton,
                     ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset,0x58,8,CLASS_Intrinsic,
                     CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkPreset>,
                     InternalVTableHelperCtorCaller<ULiveLinkPreset>,&local_res18,
                     UObject::StaticClass,UObject::StaticClass);
        }
        local_68._12_4_ = uStack_7c;
        local_68.Size = iVar7;
        local_78.DataPtr = (wchar_t *)0x0;
        local_78.Size = 0;
        local_78._12_4_ = 0;
        local_68.DataPtr = pwVar5;
        pUVar4 = StaticLoadObject(Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton,
                                  (UObject *)0x0,&local_68,&local_78,0,(UPackageMap *)0x0,true,
                                  (FLinkerInstancingContext *)0x0);
        if (pUVar4 != (UObject *)0x0) {
          this_00 = CastChecked<ULiveLinkPreset,UObject>(pUVar4);
          local_58._0_8_ = 0;
          local_58._40_8_ = 0;
          ULiveLinkPreset::ApplyToClientLatent(this_00,&local_58);
        }
      }
      this_01 = this_01 + 0x10;
    }
  }
  return;
}

// operator() @ 14d01ad40

void __thiscall
_anon_CF18CE8C::<lambda_29>::operator()
          (<lambda_29> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  ULiveLinkPreset *this_00;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *this_01;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FUObjectCppClassStaticFunctions local_res10;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  iVar1 = param_1->ArrayNum;
  pwVar8 = L"";
  this_01 = (param_1->AllocatorInstance).Data;
  uVar2 = local_38._12_4_;
  pFVar10 = this_01 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10.AddReferencedObjects = local_res10.AddReferencedObjects & 0xffffffffffffff00;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (this_01 == pFVar10) break;
    iVar9 = 0;
    iVar3 = ::FString::Find((FString *)this_01,L"Preset=",7,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      if (*(int *)(this_01 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)&this_01->field_0x0;
      }
      pwVar7 = pwVar7 + (longlong)iVar3 + 7;
      if (pwVar7 != (wchar_t *)0x0) {
        sVar4 = wcslen(pwVar7);
        iVar9 = (int)sVar4;
      }
      if (Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton == (UClass *)0x0) {
        local_res10.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/LiveLink",L"LiveLinkPreset",
                   &Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton,
                   ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset,0x58,8,CLASS_Intrinsic,
                   CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkPreset>,
                   InternalVTableHelperCtorCaller<ULiveLinkPreset>,&local_res10,UObject::StaticClass
                   ,UObject::StaticClass);
      }
      local_48.DataPtr = (wchar_t *)0x0;
      local_48.Size = 0;
      local_48._12_4_ = 0;
      local_38._12_4_ = uVar2;
      local_38.Size = iVar9;
      local_38.DataPtr = pwVar7;
      this_00 = (ULiveLinkPreset *)
                StaticLoadObject(Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton,
                                 (UObject *)0x0,&local_38,&local_48,0,(UPackageMap *)0x0,true,
                                 (FLinkerInstancingContext *)0x0);
      if (this_00 != (ULiveLinkPreset *)0x0) {
        pUVar5 = ULiveLinkPreset::StaticClass();
        iVar3 = (int)pUVar5->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) {
          pFVar6 = GetTypeName<ULiveLinkPreset>((FString *)&local_38);
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          pFVar6 = GetFullNameForCastLogError<UObject>((FString *)&local_48,(UObject *)this_00);
          if ((pFVar6->Data).ArrayNum != 0) {
            pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar8,pwVar7);
        }
        ULiveLinkPreset::AddToClient(this_00,true);
      }
    }
    this_01 = this_01 + 0x10;
  }
  return;
}

// `vcall'{152,{flat}}'_}' @ 14d01c154

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FLiveLinkDebugUIEntry,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d01c157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 14d01c164

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct
   SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d01c167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 14d01c174

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FProviderPollResult,1> >::`vcall'{152,{flat}}'
   }' */

void __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FProviderPollResult,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d01c177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d01c184

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   FLiveLinkDebugUIEntry,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d01c198

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> >::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *
                      )&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d01c1ac

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   FProviderPollResult,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>::_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d01c1bc

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FLiveLinkDebugUIEntry,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d01c1cc

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> >::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *
                      )&this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d01c1dc

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FProviderPollResult,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FProviderPollResult,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FProviderPollResult,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d01c1ec

/* [thunk]:public: virtual void * __ptr64 __cdecl SProviderPollRow::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SProviderPollRow::_vector_deleting_destructor__adjustor_8__(SProviderPollRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SProviderPollRow *)&this[-1].PollResultPtr.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d01c1fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UDEPRECATED_LiveLinkDrivenComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDEPRECATED_LiveLinkDrivenComponent::_vector_deleting_destructor__adjustor_40__
          (UDEPRECATED_LiveLinkDrivenComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDEPRECATED_LiveLinkDrivenComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d01c20c

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkAnimationVirtualSubject::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkAnimationVirtualSubject::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkAnimationVirtualSubject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkAnimationVirtualSubject *)&this[-1].BoneNameToIndex.field_0x30,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d01c21c

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkBlueprintVirtualSubject::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkBlueprintVirtualSubject::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkBlueprintVirtualSubject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkBlueprintVirtualSubject *)&this[-1].CachedStaticData,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d01c22c

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkBroadcastComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkBroadcastComponent::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkBroadcastComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkBroadcastComponent *)&this[-1].CachedResolvedObject,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d01c23c

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkComponent::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULiveLinkComponent *)&this[-1].OnLiveLinkUpdated,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14d01c24c

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkDataPreviewComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkDataPreviewComponent::_vector_deleting_destructor__adjustor_592__
          (ULiveLinkDataPreviewComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkDataPreviewComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14d01c260

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkDataPreviewComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkDataPreviewComponent::_vector_deleting_destructor__adjustor_600__
          (ULiveLinkDataPreviewComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkDataPreviewComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14d01c274

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkDataPreviewComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkDataPreviewComponent::_vector_deleting_destructor__adjustor_608__
          (ULiveLinkDataPreviewComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkDataPreviewComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d01c288

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkDataPreviewComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkDataPreviewComponent::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkDataPreviewComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkDataPreviewComponent *)
                      &this[-1].CachedAnimationData.Transforms.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 14d01c298

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkDataPreviewComponent::`vector deleting
   destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkDataPreviewComponent::_vector_deleting_destructor__adjustor_1616__
          (ULiveLinkDataPreviewComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkDataPreviewComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14d01c2ac

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkMarkerVisualizer::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkMarkerVisualizer::_vector_deleting_destructor__adjustor_592__
          (ULiveLinkMarkerVisualizer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULiveLinkMarkerVisualizer *)&this[-1].field_0x7f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14d01c2c0

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkMarkerVisualizer::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkMarkerVisualizer::_vector_deleting_destructor__adjustor_600__
          (ULiveLinkMarkerVisualizer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULiveLinkMarkerVisualizer *)&this[-1].field_0x7e8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14d01c2d4

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkMarkerVisualizer::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkMarkerVisualizer::_vector_deleting_destructor__adjustor_608__
          (ULiveLinkMarkerVisualizer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULiveLinkMarkerVisualizer *)&this[-1].field_0x7e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d01c2e8

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkMarkerVisualizer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkMarkerVisualizer::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkMarkerVisualizer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkMarkerVisualizer *)&this[-1].MarkerLocations,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 14d01c2f8

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkMarkerVisualizer::`vector deleting
   destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkMarkerVisualizer::_vector_deleting_destructor__adjustor_1616__
          (ULiveLinkMarkerVisualizer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULiveLinkMarkerVisualizer *)&this[-1].field_0x3f0,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d01c310

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::
_scalar_deleting_destructor_(FArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c340

void * __thiscall
UE::Slate::ItemsSource::
FArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c370

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c430

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c4f0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c580

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c610

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c640

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c670

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c6a0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c6d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c700

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c730

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c760

void * __thiscall
IBaseDelegateInstance<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c790

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c7c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c7f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c820

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c850

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::
_scalar_deleting_destructor_(IItemsSource<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c880

void * __thiscall
UE::Slate::ItemsSource::
IItemsSource<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c8b0

void * __thiscall
SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c910

void * __thiscall
SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_scalar_deleting_destructor_
          (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *this,
          uint param_1)

{
  ~SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01c970

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FProviderPollResult,1>_>::~STableRow<TSharedPtr<FProviderPollResult,1>_>
            ((STableRow<TSharedPtr<FProviderPollResult,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ca10

void * __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ca70

void * __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_scalar_deleting_destructor_
          (STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *this,
          uint param_1)

{
  ~STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cad0

void * __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FProviderPollResult,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FProviderPollResult,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cb30

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cb60

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`FLiveLinkLogInstance::CreateTokenizedMessage'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cba0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`ULiveLinkPreset::ApplyToClientLatent'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cc00

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cc30

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cc60

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cc90

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ccc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ccf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cd20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cd50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cd80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cdb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cde0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ce10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ce40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ce70

void * __thiscall
TBaseSPMethodDelegateInstance<1,FLiveLinkDebugUIEntry_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,FLiveLinkDebugUIEntry_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ced0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cf30

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cf90

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01cff0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d050

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FProviderPollResult,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FProviderPollResult,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d0b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FProviderPollResult,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FProviderPollResult,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d110

void * __thiscall
TBaseSPMethodDelegateInstance<1,SLiveLinkDebugView_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FLiveLinkDebugUIEntry,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SLiveLinkDebugView_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FLiveLinkDebugUIEntry,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d180

void * __thiscall
TBaseSPMethodDelegateInstance<1,SLiveLinkMessageBusSourceFactory_const_,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SLiveLinkMessageBusSourceFactory_const_,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d1e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d240

void * __thiscall
TBaseSPMethodDelegateInstance<0,SLiveLinkDebugView,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SLiveLinkDebugView,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d2a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SLiveLinkDebugView,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SLiveLinkDebugView,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d300

void * __thiscall
TBaseSPMethodDelegateInstance<0,SLiveLinkMessageBusSourceFactory,1,void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d360

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d390

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d3c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d400

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d430

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d460

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d490

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d4c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d4f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d520

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d550

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d580

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d5b0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d5e0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d610

void * __thiscall
TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FLiveLinkDebugUIEntry,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FLiveLinkDebugUIEntry,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d650

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d680

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d6b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d6e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d710

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d740

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d780

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d7b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d7e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d810

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFGuid___ZUFDefaultTSDelegateUserPolicy____AEAUFGuid___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey__W4ELiveLinkSubjectState___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEAW4ELiveLinkSubjectState___FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey__W4ELiveLinkSubjectState___ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEAW4ELiveLinkSubjectState___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXUFLiveLinkSubjectKey___N_ZUFDefaultTSDelegateUserPolicy____AEAUFLiveLinkSubjectKey__AEA_N_Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6____BroadcastOnGameThread_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy______V_FLiveLinkSourceCollection__QEAAXAEAV__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d980

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkDebugUIEntry,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkDebugUIEntry,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01d9c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkDefaultVirtualSubjectSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkDefaultVirtualSubjectSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01da00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01da40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProviderPollResult,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FProviderPollResult,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01da80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FLiveLinkLogInstance::FRepeatableMessageData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkLogInstance::FRepeatableMessageData,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dac0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateColorBrush,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSlateColorBrush,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01db00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01db40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01db80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dbc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dc00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dc40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dc80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkAnimationAxisSwitchPreProcessor::FLiveLinkAnimationAxisSwitchPreProcessorWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkAnimationAxisSwitchPreProcessor::FLiveLinkAnimationAxisSwitchPreProcessorWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dcc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dd00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dd40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dd80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkBroadcastSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkBroadcastSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ddc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkLocatorAxisSwitchPreProcessor::FLiveLinkLocatorAxisSwitchPreProcessorWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkLocatorAxisSwitchPreProcessor::FLiveLinkLocatorAxisSwitchPreProcessorWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01de00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkMessageBusSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkMessageBusSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01de40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkSkeletonRemapperWorker,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkSkeletonRemapperWorker,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01de80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkTimedDataInput,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkTimedDataInput,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dec0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01df00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01df40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkTransformRoleToAnimation::FLiveLinkTransformRoleToAnimationWorker,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ULiveLinkTransformRoleToAnimation::FLiveLinkTransformRoleToAnimationWorker,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01df80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkVirtualSubjectSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkVirtualSubjectSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01dfc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateStyleSet,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSlateStyleSet,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x410);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e000

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLiveLinkDebugView,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SLiveLinkDebugView,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e040

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e080

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SProviderPollRow,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SProviderPollRow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageCatchall<FLiveLinkMessageBusSource>::_scalar_deleting_destructor_
          (TRawMessageCatchall<FLiveLinkMessageBusSource> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e100

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>::_scalar_deleting_destructor_
          (TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e140

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e180

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>::_scalar_deleting_destructor_
          (TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e200

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageCatchall<FLiveLinkMessageBusSource>,SharedPointerInternals::DefaultDeleter<TRawMessageCatchall<FLiveLinkMessageBusSource>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageCatchall<FLiveLinkMessageBusSource>,SharedPointerInternals::DefaultDeleter<TRawMessageCatchall<FLiveLinkMessageBusSource>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e240

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e280

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e300

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e340

void * __thiscall
TTableViewMetadata<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e3b0

void * __thiscall
TTableViewMetadata<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ALiveLinkDataPreview::_scalar_deleting_destructor_(ALiveLinkDataPreview *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ALiveLinkDataPreview__6B_;
  pFVar1 = (this->CachedSubjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<ULiveLinkDataPreviewComponent,int>
            ((ULiveLinkDataPreviewComponent *)(this->Visualizers).AllocatorInstance.Data,
             (this->Visualizers).ArrayNum);
  pFVar1 = (this->Visualizers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SpriteTexture).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->LocatorMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->CameraMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TransformMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->AxisMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->JointMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->BoneMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Subjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e540

void * __thiscall
FApplyToClientLatentAction::_scalar_deleting_destructor_
          (FApplyToClientLatentAction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e580

void * __thiscall
ULiveLinkAnimationAxisSwitchPreProcessor::FLiveLinkAnimationAxisSwitchPreProcessorWorker::
_scalar_deleting_destructor_(FLiveLinkAnimationAxisSwitchPreProcessorWorker *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e5b0

void * __thiscall
FLiveLinkBroadcastSource::_scalar_deleting_destructor_(FLiveLinkBroadcastSource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e5f0

void * __thiscall FLiveLinkClient::_scalar_deleting_destructor_(FLiveLinkClient *this,uint param_1)

{
  ~FLiveLinkClient(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e630

void * __thiscall
FLiveLinkDefaultVirtualSubjectSource::_scalar_deleting_destructor_
          (FLiveLinkDefaultVirtualSubjectSource *this,uint param_1)

{
  *(undefined ***)this = &___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e670

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FLiveLinkHeartbeatEmitter::_scalar_deleting_destructor_
          (FLiveLinkHeartbeatEmitter *this,uint param_1)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FLiveLinkHeartbeatEmitter__6B_;
  pFVar1 = (this->Thread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  DestructItems<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,int>
            ((FHeartbeatRecipient *)(this->HeartbeatRecipients).AllocatorInstance.Data,
             (this->HeartbeatRecipients).ArrayNum);
  pFVar2 = (this->HeartbeatRecipients).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e700

void * __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::FLiveLinkLocatorAxisSwitchPreProcessorWorker::
_scalar_deleting_destructor_(FLiveLinkLocatorAxisSwitchPreProcessorWorker *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e730

void * __thiscall FLiveLinkLog::_scalar_deleting_destructor_(FLiveLinkLog *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e760

void * __thiscall
FLiveLinkLogInstance::_scalar_deleting_destructor_(FLiveLinkLogInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLiveLinkLogInstance__6B_;
  pFVar1 = (this->DisabledMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLiveLinkLogInstance::FRepeatableMessage,int>
            ((FRepeatableMessage *)(this->RepeatableMessages).AllocatorInstance.Data,
             (this->RepeatableMessages).ArrayNum);
  pFVar1 = (this->RepeatableMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->ToUpdateMessages).AllocatorInstance.Data,
             (this->ToUpdateMessages).ArrayNum);
  pFVar1 = (this->ToUpdateMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FLiveLinkMessageBusDiscoveryManager::_scalar_deleting_destructor_
          (FLiveLinkMessageBusDiscoveryManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMessageEndpoint *pFVar1;
  FRunnableThread *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->SourcesCriticalSection;
  this->_padding_ = (longlong)&___7FLiveLinkMessageBusDiscoveryManager__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->MessageEndpoint).Object;
    if (pFVar1 != (FMessageEndpoint *)0x0) {
      pFVar1->Enabled = false;
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->MessageEndpoint != (TSharedPtr<FMessageEndpoint,1> *)&local_18) {
        (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MessageEndpoint).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = this->Thread;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
      this->Thread = (FRunnableThread *)0x0;
    }
    FGenericPlatformProcess::ReturnSynchEventToPool(this->PollEvent);
    this->PollEvent = (FEvent *)0x0;
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FProviderPollResult,1>,int>
              ((TSharedPtr<FProviderPollResult,1> *)
               (this->LastProviderPoolResults).AllocatorInstance.Data,
               (this->LastProviderPoolResults).ArrayNum);
    pFVar3 = (this->LastProviderPoolResults).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    this->_padding_ = (longlong)&___7FRunnable__6B_;
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x90);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `scalar_deleting_destructor' @ 14d01e910

void * __thiscall
FLiveLinkMessageBusFinderAction::_scalar_deleting_destructor_
          (FLiveLinkMessageBusFinderAction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e950

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FLiveLinkMessageBusSource::_scalar_deleting_destructor_
          (FLiveLinkMessageBusSource *this,uint param_1)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ConnectionLastActiveSection);
  pIVar1 = (this->SourceMachineName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->SourceType).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->RoleInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01e9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FLiveLinkModule::_scalar_deleting_destructor_(FLiveLinkModule *this,uint param_1)

{
  ~FLiveLinkModule(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ea10

void * __thiscall
FLiveLinkMotionController::_scalar_deleting_destructor_
          (FLiveLinkMotionController *this,uint param_1)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this->_padding_ = (longlong)&___7FLiveLinkMotionController__6B_;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)(this->Client->_padding_ + 0x1e0))();
  FVar1.ID = (this->OnSubjectsChangedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar1);
  }
  (this->OnSubjectsChangedHandle).ID = 0;
  pFVar2 = (this->EnumeratedSources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMotionController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ea90

void * __thiscall
FLiveLinkSkeletonRemapperWorker::_scalar_deleting_destructor_
          (FLiveLinkSkeletonRemapperWorker *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNameMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01eaf0

void * __thiscall
FLiveLinkSubject::_scalar_deleting_destructor_(FLiveLinkSubject *this,uint param_1)

{
  ~FLiveLinkSubject(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01eb30

void * __thiscall
FLiveLinkTimedDataInput::_scalar_deleting_destructor_(FLiveLinkTimedDataInput *this,uint param_1)

{
  ~FLiveLinkTimedDataInput(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01eb70

void * __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker::
_scalar_deleting_destructor_(FLiveLinkTransformAxisSwitchPreProcessorWorker *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01eba0

void * __thiscall
ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker::
_scalar_deleting_destructor_(FLiveLinkTransformDeadbandPreProcessorWorker *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ebd0

void * __thiscall
FLiveLinkVirtualSubjectSource::_scalar_deleting_destructor_
          (FLiveLinkVirtualSubjectSource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ec10

void * __thiscall
SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ec50

void * __thiscall
SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
FSlateAccessibleListView::_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ec90

void * __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ecd0

void * __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
FSlateAccessibleTableRow::_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ed10

void * __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ed50

void * __thiscall ILiveLinkClient::_scalar_deleting_destructor_(ILiveLinkClient *this,uint param_1)

{
  *this = (ILiveLinkClient)&___7ILiveLinkClient__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ed90

void * __thiscall
ILiveLinkFramePreProcessorWorker::_scalar_deleting_destructor_
          (ILiveLinkFramePreProcessorWorker *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01edc0

void * __thiscall ILiveLinkModule::_scalar_deleting_destructor_(ILiveLinkModule *this,uint param_1)

{
  *this = (ILiveLinkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ee00

void * __thiscall
ILiveLinkSubjectRemapperWorker::_scalar_deleting_destructor_
          (ILiveLinkSubjectRemapperWorker *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ee30

void * __thiscall
IMotionController::_scalar_deleting_destructor_(IMotionController *this,uint param_1)

{
  *this = (IMotionController)&___7IMotionController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ee70

void * __thiscall ITimedDataInput::_scalar_deleting_destructor_(ITimedDataInput *this,uint param_1)

{
  *this = (ITimedDataInput)&___7ITimedDataInput__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01eeb0

void * __thiscall
SLiveLinkDebugView::_scalar_deleting_destructor_(SLiveLinkDebugView *this,uint param_1)

{
  ~SLiveLinkDebugView(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ef10

void * __thiscall
SLiveLinkMessageBusSourceFactory::_scalar_deleting_destructor_
          (SLiveLinkMessageBusSourceFactory *this,uint param_1)

{
  ~SLiveLinkMessageBusSourceFactory(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01ef70

void * __thiscall
SProviderPollRow::_scalar_deleting_destructor_(SProviderPollRow *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PollResultPtr).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<FProviderPollResult,1>_>::~STableRow<TSharedPtr<FProviderPollResult,1>_>
            ((STableRow<TSharedPtr<FProviderPollResult,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x468);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UDEPRECATED_LiveLinkDrivenComponent::_scalar_deleting_destructor_
          (UDEPRECATED_LiveLinkDrivenComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f0a0

void * __thiscall
ULiveLinkAnimationAxisSwitchPreProcessor::_scalar_deleting_destructor_
          (ULiveLinkAnimationAxisSwitchPreProcessor *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x68);
  ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f110

void * __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::_scalar_deleting_destructor_
          (ULiveLinkAnimationFrameInterpolationProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkAnimationFrameInterpolationProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  ULiveLinkFrameInterpolationProcessor::~ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f190

void * __thiscall
ULiveLinkAnimationRoleToTransform::_scalar_deleting_destructor_
          (ULiveLinkAnimationRoleToTransform *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkAnimationRoleToTransform__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  ULiveLinkFrameTranslator::~ULiveLinkFrameTranslator((ULiveLinkFrameTranslator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f200

void * __thiscall
ULiveLinkAnimationVirtualSubject::_scalar_deleting_destructor_
          (ULiveLinkAnimationVirtualSubject *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined4 *)&(this->BoneNameToIndex).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  pvVar1 = *(void **)&(this->BoneNameToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNameToIndex);
  *(undefined4 *)&(this->ChildBonesInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChildBonesInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,ULiveLinkAnimationVirtualSubject::FChildBoneInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildBonesInfo);
  DestructItems<FLiveLinkVirtualSubjectBoneAttachment,int>
            ((FLiveLinkVirtualSubjectBoneAttachment *)(this->Attachments).AllocatorInstance.Data,
             (this->Attachments).ArrayNum);
  pFVar2 = (this->Attachments).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ULiveLinkVirtualSubject::~ULiveLinkVirtualSubject((ULiveLinkVirtualSubject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f2f0

void * __thiscall
ULiveLinkBasicFrameInterpolationProcessor::_scalar_deleting_destructor_
          (ULiveLinkBasicFrameInterpolationProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BaseInstance).SharedReferenceCount.ReferenceController);
  ULiveLinkFrameInterpolationProcessor::~ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f360

void * __thiscall
ULiveLinkBlueprintLibrary::_scalar_deleting_destructor_
          (ULiveLinkBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f3c0

void * __thiscall
ULiveLinkBlueprintVirtualSubject::_scalar_deleting_destructor_
          (ULiveLinkBlueprintVirtualSubject *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  FStructOnScope::~FStructOnScope(&(this->CachedStaticData).WrappedStruct);
  ULiveLinkVirtualSubject::~ULiveLinkVirtualSubject((ULiveLinkVirtualSubject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ULiveLinkBroadcastComponent::_scalar_deleting_destructor_
          (ULiveLinkBroadcastComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->AllowedCurveNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllowedBoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->SourceMesh)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f4f0

void * __thiscall
ULiveLinkBroadcastSubsystem::_scalar_deleting_destructor_
          (ULiveLinkBroadcastSubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkBroadcastSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ULiveLinkComponent::_scalar_deleting_destructor_(ULiveLinkComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnLiveLinkUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkUpdated);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f600

void * __thiscall
ULiveLinkCustomTimeStep::_scalar_deleting_destructor_(ULiveLinkCustomTimeStep *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkCustomTimeStep__6B_;
  FEventRef::~FEventRef(&this->EventWaitForSync);
  FEventRef::~FEventRef(&this->EventLiveLink);
  UGenlockedCustomTimeStep::~UGenlockedCustomTimeStep((UGenlockedCustomTimeStep *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f680

void * __thiscall
ULiveLinkDataPreviewComponent::_scalar_deleting_destructor_
          (ULiveLinkDataPreviewComponent *this,uint param_1)

{
  ~ULiveLinkDataPreviewComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f6e0

void * __thiscall
ULiveLinkHubSubjectSettings::_scalar_deleting_destructor_
          (ULiveLinkHubSubjectSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkHubSubjectSettings__6B_;
  pFVar1 = (this->Source).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutboundName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubjectName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ULiveLinkSubjectSettings::~ULiveLinkSubjectSettings((ULiveLinkSubjectSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f780

void * __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::_scalar_deleting_destructor_
          (ULiveLinkLocatorAxisSwitchPreProcessor *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x68);
  ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f7f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
ULiveLinkMarkerVisualizer::_scalar_deleting_destructor_
          (ULiveLinkMarkerVisualizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7ULiveLinkMarkerVisualizer__6B_;
  pFVar1 = (this->MarkerLabels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
ULiveLinkMessageBusFinder::_scalar_deleting_destructor_
          (ULiveLinkMessageBusFinder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkMessageBusFinder__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PollDataCriticalSection);
  DestructItems<FProviderPollResult,int>
            ((FProviderPollResult *)(this->PollData).AllocatorInstance.Data,
             (this->PollData).ArrayNum);
  pFVar1 = (this->PollData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f960

void * __thiscall
ULiveLinkMessageBusSourceFactory::_scalar_deleting_destructor_
          (ULiveLinkMessageBusSourceFactory *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceFactory__6B_;
  ULiveLinkSourceFactory::~ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01f9c0

void * __thiscall
ULiveLinkMessageBusSourceSettings::_scalar_deleting_destructor_
          (ULiveLinkMessageBusSourceSettings *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceSettings__6B_;
  ULiveLinkSourceSettings::~ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fa20

void * __thiscall ULiveLinkPreset::_scalar_deleting_destructor_(ULiveLinkPreset *this,uint param_1)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1.ID = (this->ApplyToClientEndFrameHandle).ID;
  this->_padding_ = (longlong)&___7ULiveLinkPreset__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               FVar1);
  }
  pFVar2 = (this->Subjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FLiveLinkSourcePreset,int>
            ((FLiveLinkSourcePreset *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar2 = (this->Sources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fac0

void * __thiscall
ULiveLinkSettings::_scalar_deleting_destructor_(ULiveLinkSettings *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ULiveLinkSettings__6B_;
  pvVar1 = *(void **)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DefaultSettingsClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FLiveLinkRoleProjectSetting,int>
            ((FLiveLinkRoleProjectSetting *)(this->DefaultRoleSettings).AllocatorInstance.Data,
             (this->DefaultRoleSettings).ArrayNum);
  pFVar2 = (this->DefaultRoleSettings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fb60

void * __thiscall
ULiveLinkSkeletonRemapper::_scalar_deleting_destructor_
          (ULiveLinkSkeletonRemapper *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkSkeletonRemapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->ReferenceSkeleton).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  ULiveLinkSubjectRemapper::~ULiveLinkSubjectRemapper((ULiveLinkSubjectRemapper *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fbe0

void * __thiscall
ULiveLinkTimeSynchronizationSource::_scalar_deleting_destructor_
          (ULiveLinkTimeSynchronizationSource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkTimeSynchronizationSource__6B_;
  UTimeSynchronizationSource::~UTimeSynchronizationSource((UTimeSynchronizationSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fc40

void * __thiscall
ULiveLinkTimecodeProvider::_scalar_deleting_destructor_
          (ULiveLinkTimecodeProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkTimecodeProvider__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SubjectFrameLock);
  pFVar1 = (this->SubjectFrameTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTimecodeProvider::~UTimecodeProvider((UTimecodeProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fcc0

void * __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::_scalar_deleting_destructor_
          (ULiveLinkTransformAxisSwitchPreProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fd30

void * __thiscall
ULiveLinkTransformDeadbandPreProcessor::_scalar_deleting_destructor_
          (ULiveLinkTransformDeadbandPreProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkTransformDeadbandPreProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fda0

void * __thiscall
ULiveLinkTransformRoleToAnimation::_scalar_deleting_destructor_
          (ULiveLinkTransformRoleToAnimation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkTransformRoleToAnimation__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  ULiveLinkFrameTranslator::~ULiveLinkFrameTranslator((ULiveLinkFrameTranslator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fe10

void * __thiscall
ULiveLinkUserSettings::_scalar_deleting_destructor_(ULiveLinkUserSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkUserSettings__6B_;
  pFVar1 = (this->PresetSaveDir).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d01fe80

void * __thiscall
ULiveLinkVirtualSubjectSourceSettings::_scalar_deleting_destructor_
          (ULiveLinkVirtualSubjectSourceSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkVirtualSubjectSourceSettings__6B_;
  ULiveLinkSourceSettings::~ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// AddToBoneNames @ 14d021820

void __cdecl
LiveLinkAnimationVirtualSubjectUtils::AddToBoneNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,FName param_3,
          TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *param_4)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  FName *this;
  uint uVar11;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  TPairInitializer<int_const_&,FName_&&> local_b0;
  FString local_a0;
  FString local_90;
  int *local_80;
  undefined1 *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_res18 = param_3;
  if (param_3 != (FName)0x0) {
    pFVar8 = ::FName::ToString(&local_res18,&local_70);
    ::FString::ConcatFC(&local_c0,pFVar8,L"_");
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_d0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    local_d0.Data.ArrayNum = local_c0.Data.ArrayNum;
    local_d0.Data.ArrayMax = local_c0.Data.ArrayMax;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = param_2->ArrayNum + param_1->ArrayNum;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  this = (FName *)(param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar2 = this + iVar3;
  do {
    if (param_2->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar2) {
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      return;
    }
    pFVar4 = (FName *)(param_1->AllocatorInstance).Data;
    if (pFVar4 != pFVar4 + param_1->ArrayNum) {
      pFVar9 = pFVar4;
      do {
        if (*pFVar9 == *this) {
          local_res10[0] = (int)((longlong)pFVar9 - (longlong)pFVar4 >> 3);
          if (local_res10[0] != -1) {
            pFVar8 = ::FName::ToString(this,&local_60);
            ::FString::ConcatCF(&local_a0,L"__REPLACED_BONE_",pFVar8);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_a0.Data.ArrayNum != 0) {
              FVar10.Data = local_a0.Data.AllocatorInstance.Data;
            }
            ::FName::FName((FName *)((longlong)&local_b0.Key + 4),(wchar_t *)FVar10.Data);
            local_80 = local_res10;
            local_78 = (undefined1 *)((longlong)&local_b0.Key + 4);
            TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,FName_&&>_>
                      ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                        *)param_4,&local_b0,(bool *)&local_80);
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_14d02194b;
        }
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != pFVar4 + param_1->ArrayNum);
    }
    local_res10[0] = -1;
LAB_14d02194b:
    pFVar8 = ::FName::ToString(this,&local_50);
    ::FString::ConcatFF(&local_90,&local_d0,pFVar8);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar10.Data = local_90.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_d8,(wchar_t *)FVar10.Data);
    pFVar4 = (FName *)(param_1->AllocatorInstance).Data;
    if ((pFVar4 <= &local_d8) && (&local_d8 < pFVar4 + *piVar1)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(FName *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_d8;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    this = this + 1;
  } while( true );
}

// AddToBoneParents @ 14d021b10

void __cdecl
LiveLinkAnimationVirtualSubjectUtils::AddToBoneParents
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 local_34;
  int local_30 [2];
  
  iVar3 = param_1->ArrayNum;
  uVar10 = param_2->ArrayNum + iVar3;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&param_1->AllocatorInstance,iVar3,piVar1);
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  iVar4 = param_2->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar4 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (*(int *)pFVar9 == -1) {
      if (param_1->ArrayNum == 0) {
        local_34 = 0xffffffff;
        if ((pFVar5 <= (FScriptContainerElement *)&local_34) &&
           ((FScriptContainerElement *)&local_34 < pFVar5 + (longlong)*piVar1 * 4)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        pFVar9 = pFVar9 + 4;
        param_1->ArrayNum = iVar8 + 1;
        *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_34;
      }
      else {
        local_38 = 0;
        if ((pFVar5 <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 < pFVar5 + (longlong)*piVar1 * 4)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        pFVar9 = pFVar9 + 4;
        param_1->ArrayNum = iVar8 + 1;
        *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_38;
      }
    }
    else {
      local_30[0] = *(int *)pFVar9 + iVar3;
      if ((pFVar5 <= (FScriptContainerElement *)local_30) &&
         ((FScriptContainerElement *)local_30 < pFVar5 + (longlong)*piVar1 * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      pFVar9 = pFVar9 + 4;
      param_1->ArrayNum = iVar8 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_30[0];
    }
  }
  return;
}

// AxisAbs @ 14d023de0

ELiveLinkAxis __cdecl LiveLinkAxisSwitchPreProcessor::AxisAbs(ELiveLinkAxis param_1)

{
  return param_1 % 3;
}

// AxisAbs @ 14d023e00

ELiveLinkAxis __cdecl LiveLinkLocationSwitchPreprocessor::AxisAbs(ELiveLinkAxis param_1)

{
  return param_1 % 3;
}

// AxisSign @ 14d023e20

float __cdecl LiveLinkAxisSwitchPreProcessor::AxisSign(ELiveLinkAxis param_1)

{
  if (param_1 < XNeg) {
    return __real_3f800000;
  }
  return __real_bf800000;
}

// AxisSign @ 14d023e40

float __cdecl LiveLinkLocationSwitchPreprocessor::AxisSign(ELiveLinkAxis param_1)

{
  if (param_1 < XNeg) {
    return __real_3f800000;
  }
  return __real_bf800000;
}

// BlendItem @ 14d023f40

void __cdecl
LiveLinkAnimationBlendingUtil::BlendItem(float *param_1,float *param_2,float *param_3,float param_4)

{
  *param_3 = (__real_3f800000 - param_4) * *param_1 + param_4 * *param_2;
  return;
}

// BlendItem @ 14d023f70

void __cdecl
LiveLinkAnimationBlendingUtil::BlendItem
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          float param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar44;
  uint uVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  dVar16 = (param_1->Rotation).XY.m128d_f64[1];
  dVar20 = (param_1->Translation).XY.m128d_f64[0];
  dVar21 = (param_1->Translation).XY.m128d_f64[1];
  dVar22 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar23 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar24 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_1->Scale3D).ZW.m128d_f64[1];
  dVar25 = (param_1->Translation).ZW.m128d_f64[0];
  dVar8 = (param_1->Translation).ZW.m128d_f64[1];
  fVar38 = __real_3f800000 - param_4;
  dVar14 = (double)fVar38;
  dVar15 = (double)fVar38;
  dVar12 = (double)fVar38;
  dVar13 = (double)fVar38;
  dVar26 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  (param_3->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0] * dVar14;
  (param_3->Rotation).XY.m128d_f64[1] = dVar16 * dVar15;
  dVar16 = (double)param_4;
  dVar17 = (double)param_4;
  dVar18 = (double)param_4;
  dVar19 = (double)param_4;
  dVar6 = dVar6 * dVar13;
  auVar36._8_4_ = SUB84(dVar6,0);
  auVar36._0_8_ = dVar26 * dVar12;
  auVar36._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar36;
  (param_3->Translation).XY.m128d_f64[0] = dVar20 * dVar14;
  (param_3->Translation).XY.m128d_f64[1] = dVar21 * dVar15;
  dVar11 = dVar11 * dVar13;
  dVar8 = dVar8 * dVar13;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar25 * dVar12;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_3->Translation).ZW.m128d_f64 = auVar7;
  (param_3->Scale3D).XY.m128d_f64[0] = dVar22 * dVar14;
  (param_3->Scale3D).XY.m128d_f64[1] = dVar23 * dVar15;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar24 * dVar12;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64 = auVar9;
  dVar13 = (param_2->Rotation).ZW.m128d_f64[0] * dVar18;
  dVar14 = (param_2->Rotation).ZW.m128d_f64[1] * dVar19;
  dVar11 = (param_2->Rotation).XY.m128d_f64[0] * dVar16;
  dVar12 = (param_2->Rotation).XY.m128d_f64[1] * dVar17;
  dVar6 = (param_3->Rotation).ZW.m128d_f64[0] * dVar13 +
          (param_3->Rotation).XY.m128d_f64[0] * dVar11;
  dVar8 = (param_3->Rotation).ZW.m128d_f64[1] * dVar14 +
          (param_3->Rotation).XY.m128d_f64[1] * dVar12;
  auVar32._8_4_ = SUB84(dVar8,0);
  auVar32._0_8_ = dVar6;
  auVar32._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  uVar27 = -(ulonglong)(0.0 <= auVar32._8_8_ + dVar6);
  uVar29 = -(ulonglong)(0.0 <= dVar6 + dVar8);
  uVar44 = (uint)(uVar27 >> 0x20);
  uVar45 = (uint)(uVar29 >> 0x20);
  auVar39._0_4_ = ~(uint)uVar27 & SUB84(0.0 - dVar11,0);
  auVar39._4_4_ = ~uVar44 & (uint)((ulonglong)(0.0 - dVar11) >> 0x20);
  auVar39._8_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar12,0);
  auVar39._12_4_ = ~uVar45 & (uint)((ulonglong)(0.0 - dVar12) >> 0x20);
  auVar41._8_4_ = (int)((ulonglong)dVar12 & uVar29);
  auVar41._0_8_ = (ulonglong)dVar11 & uVar27;
  auVar41._12_4_ = (int)(((ulonglong)dVar12 & uVar29) >> 0x20);
  auVar40._0_8_ = SUB168(auVar39 | auVar41,0) + (param_3->Rotation).XY.m128d_f64[0];
  auVar40._8_8_ = SUB168(auVar39 | auVar41,8) + (param_3->Rotation).XY.m128d_f64[1];
  auVar33._0_4_ = ~(uint)uVar27 & SUB84(0.0 - dVar13,0);
  auVar33._4_4_ = ~uVar44 & (uint)((ulonglong)(0.0 - dVar13) >> 0x20);
  auVar33._8_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar14,0);
  auVar33._12_4_ = ~uVar45 & (uint)((ulonglong)(0.0 - dVar14) >> 0x20);
  auVar42._0_8_ = (ulonglong)dVar13 & uVar27;
  auVar42._8_4_ = (undefined4)(uVar29 & (ulonglong)dVar14);
  auVar42._12_4_ = (undefined4)((uVar29 & (ulonglong)dVar14) >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar40;
  dVar6 = (param_3->Rotation).ZW.m128d_f64[1];
  (param_3->Rotation).ZW.m128d_f64[0] =
       SUB168(auVar33 | auVar42,0) + (param_3->Rotation).ZW.m128d_f64[0];
  (param_3->Rotation).ZW.m128d_f64[1] = SUB168(auVar33 | auVar42,8) + dVar6;
  dVar8 = (param_2->Translation).XY.m128d_f64[1];
  dVar11 = (param_2->Translation).ZW.m128d_f64[0];
  dVar12 = (param_2->Translation).ZW.m128d_f64[1];
  dVar6 = (param_3->Translation).XY.m128d_f64[1];
  (param_3->Translation).XY.m128d_f64[0] =
       (param_2->Translation).XY.m128d_f64[0] * dVar16 + (param_3->Translation).XY.m128d_f64[0];
  (param_3->Translation).XY.m128d_f64[1] = dVar8 * dVar17 + dVar6;
  dVar6 = dVar12 * dVar19 + (param_3->Translation).ZW.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar6,0);
  auVar3._0_8_ = dVar11 * dVar18 + (param_3->Translation).ZW.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_3->Translation).ZW.m128d_f64 = auVar3;
  dVar8 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar6 = (param_3->Scale3D).XY.m128d_f64[1];
  (param_3->Scale3D).XY.m128d_f64[0] =
       (param_2->Scale3D).XY.m128d_f64[0] * dVar16 + (param_3->Scale3D).XY.m128d_f64[0];
  (param_3->Scale3D).XY.m128d_f64[1] = dVar8 * dVar17 + dVar6;
  dVar6 = dVar12 * dVar19 + (param_3->Scale3D).ZW.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar11 * dVar18 + (param_3->Scale3D).ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64 = auVar4;
  dVar11 = (param_3->Rotation).XY.m128d_f64[0];
  dVar12 = (param_3->Rotation).XY.m128d_f64[1];
  dVar13 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar14 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar6 = dVar13 * dVar13 + dVar11 * dVar11;
  dVar8 = dVar14 * dVar14 + dVar12 * dVar12;
  auVar34._8_4_ = SUB84(dVar8,0);
  auVar34._0_8_ = dVar6;
  auVar34._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar35._0_8_ = auVar34._8_8_ + dVar6;
  auVar35._8_8_ = dVar6 + dVar8;
  auVar41 = sqrtpd(auVar40,auVar35);
  uVar29 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar35._0_8_);
  uVar30 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar35._8_8_);
  uVar28 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar35._0_8_);
  uVar31 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar35._8_8_);
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
  auVar37._0_8_ = uVar28 & (ulonglong)(auVar36._0_8_ * dVar11);
  uVar27 = uVar31 & (ulonglong)(auVar36._8_8_ * dVar12);
  auVar37._8_4_ = (undefined4)uVar27;
  auVar37._12_4_ = (undefined4)(uVar27 >> 0x20);
  auVar43._0_8_ = uVar29 & (ulonglong)(auVar41._0_8_ * dVar13);
  uVar27 = uVar30 & (ulonglong)(auVar41._8_8_ * dVar14);
  auVar43._8_4_ = (undefined4)uVar27;
  auVar43._12_4_ = (undefined4)(uVar27 >> 0x20);
  auVar10._4_4_ = ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar10._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar10._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar10._12_4_ = ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar44 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar45 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar1 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar37 | auVar10;
  auVar5._4_4_ = ~(uint)(uVar29 >> 0x20) & uVar45;
  auVar5._0_4_ = ~(uint)uVar29 & uVar44;
  auVar5._8_4_ = ~(uint)uVar30 & uVar1;
  auVar5._12_4_ = ~(uint)(uVar30 >> 0x20) & uVar2;
  *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar43 | auVar5;
  return;
}

// CalculateProviderMachineOffset @ 14d028ea0

double __cdecl
LiveLinkMessageBusHelper::CalculateProviderMachineOffset
          (double param_1,TSharedRef<IMessageContext,1> *param_2)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  
  FDateTime::UtcNow();
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  plVar3 = (longlong *)(**(code **)((longlong)*param_2->Object + 0x68))();
  dVar2 = 0.0;
  if (0.0 <= param_1) {
    dVar2 = (dVar1 - param_1) - (double)(local_res10 - *plVar3) * __real_3e7ad7f29abcaf48;
  }
  return dVar2;
}

// CopyFrameDataBlended @ 14d030f60

void __cdecl
LiveLinkAnimationBlendingUtil::CopyFrameDataBlended
          (FLiveLinkAnimationFrameData *param_1,FLiveLinkAnimationFrameData *param_2,float param_3,
          FLiveLinkSubjectFrameData *param_4)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FLiveLinkAnimationFrameData *pFVar4;
  
  lVar3 = (**(code **)((param_4->FrameData).WrappedStruct._padding_ + 0x10))(&param_4->FrameData);
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutFrame.FrameData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkAnimationFrameInterpolateProcessor.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                     (&param_4->FrameData);
  if (pFVar4 == (FLiveLinkAnimationFrameData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendedFrame",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkAnimationFrameInterpolateProcessor.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Blend<UE::Math::TTransform<double>_>
            (&param_1->Transforms,&param_2->Transforms,&pFVar4->Transforms,param_3);
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationFrameInterpolateProcessor @ 14d03ad70

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationFrameInterpolateProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRoleToTransform @ 14d03ad80

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRoleToTransform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationVirtualSubject @ 14d03ad90

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationVirtualSubject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAxisSwitchPreProcessor @ 14d03ada0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAxisSwitchPreProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkBasicFrameInterpolateProcessor @ 14d03adb0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkBasicFrameInterpolateProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintLibrary @ 14d03adc0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintVirtualSubject @ 14d03add0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintVirtualSubject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkBroadcastComponent @ 14d03ade0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkBroadcastComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkBroadcastSubsystem @ 14d03adf0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkBroadcastSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkComponent @ 14d03ae00

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkCustomTimeStep @ 14d03ae10

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkCustomTimeStep(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkDataPreview @ 14d03ae20

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkDataPreview(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkDataPreviewComponent @ 14d03ae30

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkDataPreviewComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkDeadbandPreProcessor @ 14d03ae40

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkDeadbandPreProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkDrivenComponent @ 14d03ae50

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkDrivenComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkHubSubjectSettings @ 14d03ae60

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkHubSubjectSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkMarkerVisualizer @ 14d03ae70

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkMarkerVisualizer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusFinder @ 14d03ae80

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusFinder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceFactory @ 14d03ae90

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceSettings @ 14d03aea0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkPreset @ 14d03aeb0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkPreset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAssetReference @ 14d03aec0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAssetReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkSettings @ 14d03aed0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkSkeletonRemapper @ 14d03aee0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkSkeletonRemapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkTimeSynchronizationSource @ 14d03aef0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkTimeSynchronizationSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkTimecodeProvider @ 14d03af00

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkTimecodeProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRoleToAnimation @ 14d03af10

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRoleToAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSource @ 14d03af20

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubjectBoneAttachment @ 14d03af30

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubjectBoneAttachment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLink_init @ 14d03af40

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLink_init(void)

{
  return;
}

// FLiveLinkTickSignature_DelegateWrapper @ 14d03f900

void __cdecl
FLiveLinkTickSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// Generic_Evaluate @ 14d047b50

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
EvaluateLiveLinkFrame::Generic_Evaluate
          (ULiveLinkBlueprintLibrary *param_1,FFrame *param_2,FStructProperty *param_3,
          FLiveLinkSubjectRepresentation *param_4,EEvaluateType param_5,double param_6,
          FQualifiedFrameTime *param_7,void *param_8)

{
  UObject *pUVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UScriptStruct *pUVar11;
  FText *pFVar12;
  IModularFeatures *pIVar13;
  longlong lVar14;
  ULiveLinkRole *pUVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined1 local_res20 [8];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  TObjectPtr<UClass>_u_0 local_150;
  TObjectPtr<UClass>_u_0 local_148;
  TObjectPtr<UClass>_u_0 local_140;
  FBlueprintExceptionInfo local_138;
  FBlueprintExceptionInfo local_120;
  FBlueprintExceptionInfo local_108;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FStructOnScope local_b8;
  FStructOnScope local_90;
  FStructOnScope local_68;
  
  pUVar10 = (param_4->Role).Class.field0_0x0.DebugPtr;
  uVar5 = false;
  if ((pUVar10 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if (((int)pUVar10->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar7 * 8) != &pUVar8->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (pUVar10 = (param_4->Role).Class.field0_0x0.DebugPtr, pUVar10 != (UClass *)0x0))
       && ((param_4->Subject).Name != (FName)0x0)) {
      if ((param_3 == (FStructProperty *)0x0) || (param_8 == (void *)0x0)) {
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_e0,L"EvaluateLiveLinkFrame",L"MissingOutputProperty",
                             L"Failed to resolve the output parameter for EvaluateLiveLinkFrame.");
        local_120.EventType = AccessViolation;
        local_120.Description.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
        if (local_120.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_120.Description.field0_0x0.TypedValue.TextData.Reference
                      + 8))(local_120.Description.field0_0x0.TypedValue.TextData.Reference,local_158
                           );
        }
        local_120.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
        if ((local_120.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        FBlueprintCoreDelegates::ThrowScriptException((UObject *)param_1,param_2,&local_120);
        uVar16 = local_120.Description.field0_0x0.TypedValue.TextData.Reference;
        goto LAB_14d048056;
      }
      pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      pUVar8 = (UClass *)0x0;
      if (pUVar9 != (UClass *)0x0) {
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar10->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar8 = (param_4->Role).Class.field0_0x0.DebugPtr;
        }
      }
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      pUVar1 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UObject *)0x0) {
        return false;
      }
      pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      iVar7 = (int)pUVar10->_padding_;
      if (*(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38) < iVar7) {
        return false;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar10->_padding_) {
        return false;
      }
      pUVar2 = (param_3->Struct).field0_0x0.DebugPtr;
      pUVar11 = (UScriptStruct *)(**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1);
      if (pUVar2 != pUVar11) {
        if (pUVar11 != (UScriptStruct *)0x0) {
          iVar7 = (int)pUVar11->_padding_;
          if (((int)pUVar2->_padding_ < iVar7) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
              &pUVar11->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) &&
             (bVar4 = FStructUtils::TheSameLayout((UStruct *)pUVar2,(UStruct *)pUVar11,false), bVar4
             )) goto LAB_14d047d81;
        }
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_f0,L"EvaluateLiveLinkFrame",L"IncompatibleProperty",
                             L"Incompatible output blueprint data; the role blueprint\'s data type is not the same as the return type."
                            );
        local_138.EventType = AccessViolation;
        local_138.Description.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
        if (local_138.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_138.Description.field0_0x0.TypedValue.TextData.Reference
                      + 8))(local_138.Description.field0_0x0.TypedValue.TextData.Reference,
                            local_res20);
        }
        local_138.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
        if ((local_138.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (local_f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        }
        FBlueprintCoreDelegates::ThrowScriptException((UObject *)param_1,param_2,&local_138);
        uVar16 = local_138.Description.field0_0x0.TypedValue.TextData.Reference;
        goto LAB_14d048056;
      }
LAB_14d047d81:
      FStructOnScope::FStructOnScope(&local_68,(UStruct *)pUVar2,param_8);
      pIVar13 = IModularFeatures::Get();
      iVar7 = (**(code **)((longlong)*pIVar13 + 0x18))(pIVar13,ILiveLinkClient::ModularFeatureName);
      if (iVar7 < 1) goto LAB_14d047f02;
      lVar14 = (**(code **)((longlong)*pIVar13 + 0x20))
                         (pIVar13,ILiveLinkClient::ModularFeatureName,0);
      plVar17 = (longlong *)(lVar14 + -8);
      if (lVar14 == 0) {
        plVar17 = (longlong *)0x0;
      }
      FStructOnScope::FStructOnScope(&local_b8);
      FStructOnScope::FStructOnScope(&local_90);
      if (param_5 == Snapshot) {
LAB_14d047e8c:
        local_140 = (TObjectPtr<UClass>_u_0)(param_4->Role).Class.field0_0x0.DebugPtr;
        pcVar3 = *(code **)(*plVar17 + 0x198);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_140.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_140.DebugPtr);
        }
        cVar6 = (*pcVar3)(plVar17,(param_4->Subject).Name,&local_140,&local_b8);
      }
      else if (param_5 == WorldTime) {
        local_148 = (TObjectPtr<UClass>_u_0)(param_4->Role).Class.field0_0x0.DebugPtr;
        pcVar3 = *(code **)(*plVar17 + 0x1a0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_148.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_148.DebugPtr);
        }
        cVar6 = (*pcVar3)(plVar17,(param_4->Subject).Name,param_6,&local_148,&local_b8);
      }
      else {
        if (param_5 != SceneTime) goto LAB_14d047e8c;
        local_150 = (TObjectPtr<UClass>_u_0)(param_4->Role).Class.field0_0x0.DebugPtr;
        pcVar3 = *(code **)(*plVar17 + 0x1a8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_150.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_150.DebugPtr);
        }
        cVar6 = (*pcVar3)(plVar17,(param_4->Subject).Name,param_7,&local_150,&local_b8);
      }
      uVar5 = 0;
      if (cVar6 != '\0') {
        pUVar15 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&param_4->Role);
        uVar5 = (**(code **)(*(longlong *)pUVar15 + 0x2c8))(pUVar15,&local_b8,&local_68);
      }
      FStructOnScope::~FStructOnScope(&local_90);
      FStructOnScope::~FStructOnScope(&local_b8);
LAB_14d047f02:
      FStructOnScope::~FStructOnScope(&local_68);
      return (bool)uVar5;
    }
  }
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_d0,L"EvaluateLiveLinkFrame",L"MissingRoleInput",
                       L"Failed to resolve the subject. Be sure the subject name and role are valid."
                      );
  local_108.EventType = AccessViolation;
  local_108.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
  if (local_108.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_108.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_108.Description.field0_0x0.TypedValue.TextData.Reference,local_154);
  }
  local_108.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
  if ((local_108.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException((UObject *)param_1,param_2,&local_108);
  uVar16 = local_108.Description.field0_0x0.TypedValue.TextData.Reference;
LAB_14d048056:
  if ((ITextData *)uVar16 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar16 + 0x10))();
  }
  return false;
}

// InPluginContent @ 14d05a9f0

FString * __cdecl
LiveLinkModuleUtils::InPluginContent(FString *__return_storage_ptr__,FString *param_1,char *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  IPluginManager *pIVar4;
  longlong *plVar5;
  FString *pFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FString local_58;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  FString local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = IPluginManager::Get();
      uStack_40 = 8;
      local_48 = L"LiveLink";
      local_28 = 0x507b6428;
      uStack_24 = 1;
      uStack_20 = 8;
      uStack_1c = uStack_3c;
      plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_18,&local_28);
      if (*plVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar1)();
          return pFVar6;
        }
      }
      (**(code **)(*(longlong *)*plVar5 + 0x30))((longlong *)*plVar5,&ContentDir);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      atexit(`LiveLinkModuleUtils::InPluginContent'::__l2::
             _dynamic_atexit_destructor_for__ContentDir__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FString::FString(&local_38,param_2);
  _Src = ContentDir.Data.AllocatorInstance;
  iVar7 = (param_1->Data).ArrayNum;
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  iVar7 = ContentDir.Data.ArrayNum;
  if ((iVar7 != 0) || (iVar3 = 2, iVar8 == -1)) {
    iVar3 = 1;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = iVar7;
  if ((iVar7 == 0) && (iVar8 + iVar3 == 0)) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    uVar9 = iVar8 + iVar3 + iVar7;
    if ((int)uVar9 < iVar7) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar9,0,(ForAnyElementType *)&local_58,iVar7,&local_58.Data.ArrayMax);
    if (iVar7 != 0) {
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar7 * 2);
    }
  }
  ::FString::PathAppend(&local_58,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar8);
  ::FString::ConcatFF(__return_storage_ptr__,&local_58,&local_38);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Interpolate @ 14d05dcb0

void __cdecl
LiveLinkInterpolation::Interpolate
          (UStruct *param_1,bool param_2,float param_3,void *param_4,void *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FProperty *pFVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong lVar13;
  ulonglong *puVar14;
  void *pvVar15;
  void *pvVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  int local_74;
  TFieldIterator<FProperty> local_60;
  
  if (param_1 == (UStruct *)0x0) {
    local_60.Field = (FField *)0x0;
  }
  else {
    local_60.Field = param_1->ChildProperties;
  }
  local_60.InterfaceIndex = -1;
  local_60.bIncludeSuper = true;
  local_60.bIncludeDeprecated = true;
  local_60.bIncludeInterface = false;
  local_60.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_60);
  pFVar4 = (FProperty *)local_60.Field;
  do {
    if (pFVar4 == (FProperty *)0x0) {
      return;
    }
    local_60.Field = (FField *)pFVar4;
    if ((!param_2) || ((pFVar4->PropertyFlags & CPF_Interp) != CPF_None)) {
      if ((pFVar4 == (FProperty *)0x0) ||
         (((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) == 0 || (pFVar4 == (FProperty *)0x0))))
      {
        InterpolateProperty(pFVar4,param_3,param_4,param_5,param_6);
        local_60.Field = (FField *)pFVar4;
      }
      else {
        iVar9 = pFVar4->ArrayDim;
        local_74 = 0;
        if (0 < iVar9) {
          do {
            if (((local_74 < 0) || (iVar9 <= local_74)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((param_4 == (void *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar19 = (ulonglong *)
                      ((longlong)param_4 +
                      (longlong)pFVar4->Offset_Internal +
                      (longlong)local_74 * (longlong)pFVar4->ElementSize);
            if (((local_74 < 0) || (pFVar4->ArrayDim <= local_74)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((param_5 == (void *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar18 = (ulonglong *)
                      ((longlong)param_5 +
                      (longlong)pFVar4->Offset_Internal +
                      (longlong)local_74 * (longlong)pFVar4->ElementSize);
            if (((local_74 < 0) || (pFVar4->ArrayDim <= local_74)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((param_6 == (void *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar14 = (ulonglong *)
                      ((longlong)param_6 +
                      (longlong)pFVar4->Offset_Internal +
                      (longlong)local_74 * (longlong)pFVar4->ElementSize);
            lVar5 = pFVar4[1]._padding_;
            (**(code **)(*(longlong *)pFVar4[1]._padding_ + 0x168))();
            lVar13 = pFVar4[1]._padding_;
            iVar9 = *(int *)(lVar13 + 0x34);
            if ((iVar9 < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((lVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar6 = pFVar4[1]._padding_;
            (**(code **)(*(longlong *)pFVar4[1]._padding_ + 0x168))();
            lVar13 = pFVar4[1]._padding_;
            iVar1 = *(int *)(lVar13 + 0x34);
            if ((iVar1 < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((lVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar7 = pFVar4[1]._padding_;
            (**(code **)(*(longlong *)pFVar4[1]._padding_ + 0x168))();
            lVar13 = pFVar4[1]._padding_;
            iVar2 = *(int *)(lVar13 + 0x34);
            if ((iVar2 < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((lVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar10 = (uint)puVar14[1];
            if ((int)puVar18[1] < (int)(uint)puVar14[1]) {
              uVar10 = (uint)puVar18[1];
            }
            if ((int)puVar19[1] < (int)uVar10) {
              uVar10 = (uint)puVar19[1];
            }
            if (0 < (int)uVar10) {
              lVar13 = 0;
              uVar17 = (ulonglong)uVar10;
              do {
                if ((int)puVar14[1] == 0) {
                  pvVar12 = (void *)0x0;
                }
                else {
                  uVar11 = *puVar14;
                  if (((lVar7 & 1) != 0) && ((uVar11 & 1) != 0)) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar14;
                  }
                  pvVar12 = (void *)(iVar2 * lVar13 + uVar11);
                }
                if ((int)puVar18[1] == 0) {
                  pvVar16 = (void *)0x0;
                }
                else {
                  uVar11 = *puVar18;
                  if (((lVar6 & 1) != 0) && ((uVar11 & 1) != 0)) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar18;
                  }
                  pvVar16 = (void *)(iVar1 * lVar13 + uVar11);
                }
                if ((int)puVar19[1] == 0) {
                  pvVar15 = (void *)0x0;
                }
                else {
                  uVar11 = *puVar19;
                  if (((lVar5 & 1) != 0) && ((uVar11 & 1) != 0)) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar19;
                  }
                  pvVar15 = (void *)(iVar9 * lVar13 + uVar11);
                }
                InterpolateProperty((FProperty *)pFVar4[1]._padding_,param_3,pvVar15,pvVar16,pvVar12
                                   );
                lVar13 = lVar13 + 1;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            iVar9 = pFVar4->ArrayDim;
            local_74 = local_74 + 1;
          } while (local_74 < iVar9);
        }
      }
    }
    local_60.Field = (FField *)((FProperty *)local_60.Field)->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_60);
    pFVar4 = (FProperty *)local_60.Field;
  } while( true );
}

// InterpolateProperty @ 14d05e230

void __cdecl
LiveLinkInterpolation::InterpolateProperty
          (FProperty *param_1,float param_2,void *param_3,void *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  FNameEntryId FVar9;
  int iVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  undefined1 local_res8 [8];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [64];
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x18 & 1) != 0))
    {
      cVar8 = (**(code **)(param_1->_padding_ + 0x1d0))(param_1);
      if (cVar8 == '\0') {
        cVar8 = (**(code **)(param_1->_padding_ + 0x1d8))(param_1);
        if ((cVar8 != '\0') &&
           (lVar11 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1), lVar11 == 0)) {
          iVar10 = param_1->ArrayDim;
          iVar13 = 0;
          if (0 < iVar10) {
            do {
              if (((iVar13 < 0) || (iVar10 <= iVar13)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((param_3 == (void *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar11 = (**(code **)(param_1->_padding_ + 0x210))
                                 (param_1,(longlong)param_3 +
                                          (longlong)param_1->Offset_Internal +
                                          (longlong)iVar13 * (longlong)param_1->ElementSize);
              if (((iVar13 < 0) || (param_1->ArrayDim <= iVar13)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((param_4 == (void *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar12 = (**(code **)(param_1->_padding_ + 0x210))
                                 (param_1,(longlong)param_4 +
                                          (longlong)param_1->Offset_Internal +
                                          (longlong)iVar13 * (longlong)param_1->ElementSize);
              if (((iVar13 < 0) || (param_1->ArrayDim <= iVar13)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((param_5 == (void *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              (**(code **)(param_1->_padding_ + 0x1e8))
                        (param_1,(longlong)param_5 +
                                 (longlong)param_1->Offset_Internal +
                                 (longlong)iVar13 * (longlong)param_1->ElementSize,
                         (longlong)((float)(lVar12 - lVar11) * param_2 + (float)lVar11));
              iVar10 = param_1->ArrayDim;
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar10);
          }
        }
      }
      else {
        iVar10 = param_1->ArrayDim;
        iVar13 = 0;
        if (0 < iVar10) {
          do {
            if (((iVar13 < 0) || (iVar10 <= iVar13)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((param_3 == (void *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            dVar14 = (double)(**(code **)(param_1->_padding_ + 0x230))
                                       (param_1,(longlong)param_3 +
                                                (longlong)param_1->Offset_Internal +
                                                (longlong)iVar13 * (longlong)param_1->ElementSize);
            if (((iVar13 < 0) || (param_1->ArrayDim <= iVar13)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((param_4 == (void *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            dVar6 = (double)(**(code **)(param_1->_padding_ + 0x230))
                                      (param_1,(longlong)param_4 +
                                               (longlong)param_1->Offset_Internal +
                                               (longlong)iVar13 * (longlong)param_1->ElementSize);
            if (((iVar13 < 0) || (param_1->ArrayDim <= iVar13)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((param_5 == (void *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (**(code **)(param_1->_padding_ + 0x1f8))
                      (param_1,(longlong)param_5 +
                               (longlong)param_1->Offset_Internal +
                               (longlong)iVar13 * (longlong)param_1->ElementSize,
                       SUB84((dVar6 - dVar14) * (double)param_2 + dVar14,0));
            iVar10 = param_1->ArrayDim;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar10);
        }
      }
    }
  }
  else {
    uVar4 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
    FVar9 = FNameEntryId::FromValidEName((EName)local_res8);
    if (uVar4 == *(uint *)CONCAT44(extraout_var,FVar9.Value)) {
      Interpolate<UE::Math::TVector<double>_>
                ((FStructProperty *)param_1,param_2,param_3,param_4,param_5);
    }
    else {
      uVar4 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
      FVar9 = FNameEntryId::FromValidEName((EName)local_78);
      if (uVar4 == *(uint *)CONCAT44(extraout_var_00,FVar9.Value)) {
        Interpolate<UE::Math::TVector4<double>_>
                  ((FStructProperty *)param_1,param_2,param_3,param_4,param_5);
      }
      else {
        uVar4 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
        FVar9 = FNameEntryId::FromValidEName((EName)local_74);
        if (uVar4 == *(uint *)CONCAT44(extraout_var_01,FVar9.Value)) {
          Interpolate<UE::Math::TRotator<double>_>
                    ((FStructProperty *)param_1,param_2,param_3,param_4,param_5);
        }
        else {
          uVar4 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
          FVar9 = FNameEntryId::FromValidEName((EName)local_70);
          if (uVar4 == *(uint *)CONCAT44(extraout_var_02,FVar9.Value)) {
            Interpolate<UE::Math::TQuat<double>_>
                      ((FStructProperty *)param_1,param_2,param_3,param_4,param_5);
          }
          else {
            uVar4 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
            FVar9 = FNameEntryId::FromValidEName((EName)local_6c);
            if (uVar4 == *(uint *)CONCAT44(extraout_var_03,FVar9.Value)) {
              Interpolate<UE::Math::TTransform<double>_>
                        ((FStructProperty *)param_1,param_2,param_3,param_4,param_5);
            }
            else {
              uVar4 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
              FVar9 = FNameEntryId::FromValidEName((EName)local_68);
              if (uVar4 == *(uint *)CONCAT44(extraout_var_04,FVar9.Value)) {
                Interpolate<FLinearColor>
                          ((FStructProperty *)param_1,param_2,param_3,param_4,param_5);
              }
              else {
                iVar10 = param_1->ArrayDim;
                iVar13 = 0;
                if (0 < iVar10) {
                  do {
                    if (((iVar13 < 0) || (iVar10 <= iVar13)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2dd,
                                           L"Array index out of bounds: %i from an array of size %i"
                                          ), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if ((param_3 == (void *)0x0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ContainerPtr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2de,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar10 = param_1->ElementSize;
                    iVar1 = param_1->Offset_Internal;
                    if (((iVar13 < 0) || (param_1->ArrayDim <= iVar13)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2dd,
                                           L"Array index out of bounds: %i from an array of size %i"
                                          ), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if ((param_4 == (void *)0x0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ContainerPtr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2de,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar2 = param_1->ElementSize;
                    iVar3 = param_1->Offset_Internal;
                    if (((iVar13 < 0) || (param_1->ArrayDim <= iVar13)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2dd,
                                           L"Array index out of bounds: %i from an array of size %i"
                                          ), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if ((param_5 == (void *)0x0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ContainerPtr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2de,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    Interpolate((UStruct *)param_1[1]._padding_,false,param_2,
                                (void *)((longlong)param_3 +
                                        (longlong)iVar1 + (longlong)iVar13 * (longlong)iVar10),
                                (void *)((longlong)param_4 +
                                        (longlong)iVar3 + (longlong)iVar13 * (longlong)iVar2),
                                (void *)((longlong)param_5 +
                                        (longlong)param_1->Offset_Internal +
                                        (longlong)iVar13 * (longlong)param_1->ElementSize));
                    iVar10 = param_1->ArrayDim;
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < iVar10);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// LiveLinkAxisToVectorMember @ 14d0610a0

float __cdecl
LiveLinkAxisSwitchPreProcessor::LiveLinkAxisToVectorMember
          (ELiveLinkAxis param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = (uint)param_1 + (param_1 / 3) * -3;
  if (2 < (byte)uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return (float)(param_2->field0_0x0).XYZ[uVar3 & 0xff];
}

// LiveLinkAxisToVectorMember @ 14d061110

float __cdecl
LiveLinkLocationSwitchPreprocessor::LiveLinkAxisToVectorMember
          (ELiveLinkAxis param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = (uint)param_1 + (param_1 / 3) * -3;
  if (2 < (byte)uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return (float)(param_2->field0_0x0).XYZ[uVar3 & 0xff];
}

// SendAnalyticsSourceAdded @ 14d07d5f0

/* WARNING: Removing unreachable block (ram,0x00014d07d808) */
/* WARNING: Removing unreachable block (ram,0x00014d07d816) */

void __cdecl LiveLinkSourceCollection::SendAnalyticsSourceAdded(ILiveLinkSource *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *this;
  FString *pFVar5;
  FString *pFVar6;
  longlong lVar7;
  IAnalyticsProviderET *pIVar8;
  wchar_t *pwVar9;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  longlong *local_58 [2];
  FString local_48;
  FAnalyticsEventAttribute local_38;
  
  if (param_1 == (ILiveLinkSource *)0x0) {
    return;
  }
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  this = (FText *)(**(code **)((longlong)*param_1 + 0x38))(param_1,local_58);
  pFVar5 = FText::ToString(this);
  pFVar6 = ::FString::FString(&local_48,L"Type");
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar9,L"DateOffset");
    if (iVar4 != 0) goto LAB_14d07d6b4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d07d6b4:
  local_38.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_38.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_38.AttrValueString,pFVar5);
  local_38.AttrValueBool = false;
  local_38.AttrValueNumber = 0.0;
  local_38.AttrType = String;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_78.Data <= &local_38) &&
      (&local_38 < (FAnalyticsEventAttribute *)(local_78.Data + (longlong)local_70._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_70;
  if ((int)local_70 == local_70._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_78,(int *)((longlong)&local_70 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_70 = CONCAT44(local_70._4_4_,iVar4 + 1);
  *(undefined8 *)&local_78.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_78.Data[lVar7 * 0x30].field_0x0 =
       local_38.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_78.Data + lVar7 * 0x30 + 8) = local_38.AttrName.Data.ArrayNum;
  *(int *)(local_78.Data + lVar7 * 0x30 + 0xc) = local_38.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_78.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_78.Data + lVar7 * 0x30 + 0x10) =
       local_38.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_78.Data + lVar7 * 0x30 + 0x18) = local_38.AttrValueString.Data.ArrayNum;
  *(int *)(local_78.Data + lVar7 * 0x30 + 0x1c) = local_38.AttrValueString.Data.ArrayMax;
  *(double *)(local_78.Data + lVar7 * 0x30 + 0x20) = local_38.AttrValueNumber;
  local_78.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_38.AttrValueBool;
  *(AttrTypeEnum *)(local_78.Data + lVar7 * 0x30 + 0x2c) = local_38.AttrType;
  local_38.AttrValueString.Data.ArrayNum = 0;
  local_38.AttrValueString.Data.ArrayMax = 0;
  local_38.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = 0;
  local_38.AttrName.Data.ArrayMax = 0;
  local_38.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  pIVar8 = FEngineAnalytics::GetProvider();
  pcVar2 = *(code **)(pIVar8->_padding_ + 0x100);
  ::FString::FString(&local_68,L"Usage.LiveLink.SourceAdded");
  (*pcVar2)(pIVar8,&local_68,&local_78);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_78.Data,(int)local_70);
  if ((FAnalyticsEventAttribute *)local_78.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// SwitchTransform @ 14d080b00

void __cdecl
LiveLinkAxisSwitchPreProcessor::SwitchTransform
          (TTransform<double> *param_1,ELiveLinkAxis param_2,ELiveLinkAxis param_3,
          ELiveLinkAxis param_4,bool param_5,TVector<double> *param_6,bool param_7,
          TRotator<double> *param_8)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  float fVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  TQuat<double> *pTVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar34;
  double dVar28;
  undefined1 auVar30 [16];
  double dVar29;
  double dVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar39;
  undefined1 auVar38 [16];
  float fVar40;
  uint uVar41;
  uint uVar42;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0 [4];
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  TQuat<double> local_a8 [3];
  
  local_f0[0] = (param_1->Translation).XY.m128d_f64[0];
  local_f0[1] = (param_1->Translation).XY.m128d_f64[1];
  local_f0[2] = (param_1->Translation).ZW.m128d_f64[0];
  bVar19 = param_2 % 3;
  if ((2 < bVar19) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar16)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar41 = __xmm_80000000800000008000000080000000;
  fVar23 = (float)local_f0[bVar19];
  if (Z < param_2) {
    fVar23 = (float)((uint)fVar23 ^ __xmm_80000000800000008000000080000000);
  }
  local_108 = (double)fVar23;
  bVar18 = param_3 % 3;
  if ((2 < bVar18) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar16)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar23 = (float)local_f0[bVar18];
  if (Z < param_3) {
    fVar23 = (float)((uint)fVar23 ^ uVar41);
  }
  dStack_100 = (double)fVar23;
  bVar20 = param_4 % 3;
  if ((2 < bVar20) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar16)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar23 = (float)local_f0[bVar20];
  if (Z < param_4) {
    fVar23 = (float)((uint)fVar23 ^ uVar41);
  }
  local_c8 = (param_1->Scale3D).ZW.m128d_f64[0];
  local_f8 = (double)fVar23;
  local_f0[3] = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_d0 = (param_1->Scale3D).XY.m128d_f64[1];
  if ((2 < bVar19) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar16)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_c0 = (double)(float)local_f0[(ulonglong)bVar19 + 3];
  if ((2 < bVar18) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar16)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  dStack_b8 = (double)(float)local_f0[(ulonglong)bVar18 + 3];
  if ((2 < bVar20) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar16)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar9 = *(uint *)(param_1->Rotation).XY.m128d_f64;
  uVar10 = *(uint *)((longlong)(param_1->Rotation).XY.m128d_f64 + 4);
  pdVar11 = (param_1->Rotation).XY.m128d_f64 + 1;
  uVar27 = *(uint *)pdVar11;
  uVar34 = *(uint *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc);
  auVar31 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  uVar41 = auVar31._0_4_;
  uVar42 = auVar31._4_4_;
  dVar28 = auVar31._0_8_;
  local_b0 = (double)(float)local_f0[(ulonglong)bVar20 + 3];
  uVar37 = (uint)__xmm_80000000000000008000000000000000;
  uVar39 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  switch(param_2) {
  case X:
    local_128 = (param_1->Rotation).XY.m128d_f64[0];
    break;
  case Y:
    local_128 = *pdVar11;
    break;
  case Z:
    local_128 = dVar28;
    break;
  case XNeg:
    uVar24 = uVar9;
    uVar26 = uVar10;
    goto LAB_14d080dc1;
  case YNeg:
    uVar24 = uVar27;
    uVar26 = uVar34;
    goto LAB_14d080dc1;
  case ZNeg:
    uVar24 = uVar41;
    uVar26 = uVar42;
LAB_14d080dc1:
    local_128 = (double)CONCAT44(uVar26 ^ uVar39,uVar24 ^ uVar37);
  }
  switch(param_3) {
  case X:
    dStack_120 = (param_1->Rotation).XY.m128d_f64[0];
    break;
  case Y:
    dStack_120 = *pdVar11;
    break;
  case Z:
    dStack_120 = dVar28;
    break;
  case XNeg:
    uVar24 = uVar9;
    uVar26 = uVar10;
    goto LAB_14d080e02;
  case YNeg:
    uVar24 = uVar27;
    uVar26 = uVar34;
    goto LAB_14d080e02;
  case ZNeg:
    uVar24 = uVar41;
    uVar26 = uVar42;
LAB_14d080e02:
    dStack_120 = (double)CONCAT44(uVar26 ^ uVar39,uVar24 ^ uVar37);
  }
  switch(param_4) {
  case X:
    local_118 = (param_1->Rotation).XY.m128d_f64[0];
    break;
  case Z:
    local_118 = dVar28;
    break;
  case XNeg:
    local_118 = (double)CONCAT44(uVar10 ^ uVar39,uVar9 ^ uVar37);
    break;
  case YNeg:
    uVar27 = uVar27 ^ uVar37;
    uVar34 = uVar34 ^ uVar39;
  case Y:
    local_118 = (double)CONCAT44(uVar34,uVar27);
    break;
  case ZNeg:
    local_118 = (double)CONCAT44(uVar42 ^ uVar39,uVar41 ^ uVar37);
  }
  fVar23 = 0.0;
  auVar36 = ZEXT416((uint)__real_bf800000);
  if (bVar19 == 0) {
    if (bVar18 != 1) {
      if ((bVar18 != 2) || (bVar20 != 1)) goto LAB_14d080eca;
LAB_14d080ec7:
      fVar23 = __real_bf800000;
      goto LAB_14d080eca;
    }
    if (bVar20 != 2) goto LAB_14d080eca;
  }
  else if (bVar19 == 1) {
    if (bVar18 != 2) {
      if ((bVar18 != 0) || (bVar20 != 2)) goto LAB_14d080eca;
      goto LAB_14d080ec7;
    }
    if (bVar20 != 0) goto LAB_14d080eca;
  }
  else {
    if (bVar19 != 2) goto LAB_14d080eca;
    if (bVar18 != 0) {
      if ((bVar18 != 1) || (bVar20 != 0)) goto LAB_14d080eca;
      goto LAB_14d080ec7;
    }
    if (bVar20 != 1) goto LAB_14d080eca;
  }
  fVar23 = __real_3f800000;
LAB_14d080eca:
  fVar40 = __real_bf800000;
  if (param_2 < XNeg) {
    fVar40 = __real_3f800000;
  }
  fVar25 = __real_bf800000;
  if (param_3 < XNeg) {
    fVar25 = __real_3f800000;
  }
  fVar7 = __real_3f800000;
  if (Z < param_4) {
    fVar7 = __real_bf800000;
  }
  dVar28 = (double)(fVar25 * fVar40 * fVar7) * (double)fVar23 * auVar31._8_8_;
  if (param_5) {
    local_108 = local_108 + (param_6->field0_0x0)._s_0.X;
    dStack_100 = dStack_100 + (param_6->field0_0x0)._s_0.Y;
    local_f8 = local_f8 + (param_6->field0_0x0)._s_0.Z;
  }
  if (param_7) {
    pTVar17 = UE::Math::TRotator<double>::Quaternion(param_8,local_a8);
    dVar12 = pTVar17->Z;
    dVar13 = pTVar17->W;
    dVar14 = pTVar17->X;
    dVar15 = pTVar17->Y;
    auVar36._8_8_ = dVar14;
    auVar36._0_8_ = dVar15;
    dVar2 = dVar14 * dVar28;
    dVar35 = dVar15 * dVar28;
    dVar6 = local_128 * dVar12;
    dVar5 = local_118 * dVar12;
    dVar29 = local_118 * dVar15;
    dVar3 = local_118 * dVar14;
    local_118 = local_128 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                + dVar12 * dVar28 +
                dVar14 * dStack_120 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                local_118 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]
    ;
    dVar28 = local_128 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar13 * dVar28 +
             dVar15 * dStack_120 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_128 = local_128 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                + dVar2 + dVar12 * dStack_120 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dStack_120 = dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar35 +
                 dVar13 * dStack_120 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  }
  auVar30._8_4_ = SUB84(dVar28,0);
  auVar30._0_8_ = local_118;
  auVar30._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  dVar29 = local_118 * local_118 + local_128 * local_128;
  dVar35 = auVar30._8_8_ * dVar28 + dStack_120 * dStack_120;
  dVar2 = dVar35 + dVar29;
  dVar29 = dVar29 + dVar35;
  auVar31._8_4_ = SUB84(dVar29,0);
  auVar31._0_8_ = dVar2;
  auVar31._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  auVar36 = sqrtpd(auVar36,auVar31);
  uVar21 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar22 = -(ulonglong)(__real_3e45798ee0000000 <= dVar29);
  uVar41 = (uint)(uVar21 >> 0x20);
  uVar42 = (uint)(uVar22 >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
  auVar32._0_8_ = uVar21 & (ulonglong)(auVar31._0_8_ * local_118);
  uVar8 = uVar22 & (ulonglong)(auVar31._8_8_ * dVar28);
  auVar32._8_4_ = (undefined4)uVar8;
  auVar32._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar38._0_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar38._4_4_ =
       ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar38._8_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar38._12_4_ =
       ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
  auVar33._0_8_ = (ulonglong)(auVar31._0_8_ * local_128) & uVar21;
  uVar8 = (ulonglong)(auVar31._8_8_ * dStack_120) & uVar22;
  auVar33._8_4_ = (undefined4)uVar8;
  auVar33._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar4._4_4_ = ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
  auVar4._0_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar4._8_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._12_4_ =
       ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar33 | auVar4;
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar38 | auVar32;
  (param_1->Translation).XY.m128d_f64[0] = local_108;
  (param_1->Translation).XY.m128d_f64[1] = dStack_100;
  (param_1->Translation).ZW.m128d_f64[0] = local_f8;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  (param_1->Scale3D).XY.m128d_f64[0] = local_c0;
  (param_1->Scale3D).XY.m128d_f64[1] = dStack_b8;
  (param_1->Scale3D).ZW.m128d_f64[0] = local_b0;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// SwitchTranslation @ 14d0811b0

void __cdecl
LiveLinkLocationSwitchPreprocessor::SwitchTranslation
          (TVector<double> *param_1,ELiveLinkAxis param_2,ELiveLinkAxis param_3,
          ELiveLinkAxis param_4,bool param_5,TVector<double> *param_6,bool param_7,
          TRotator<double> *param_8)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  uint uVar5;
  float fVar6;
  TVector<double>_u_0 local_68;
  double local_50 [3];
  TVector<double> local_38 [2];
  
  local_50[0] = (param_1->field0_0x0)._s_0.X;
  local_50[1] = (param_1->field0_0x0)._s_0.Y;
  local_50[2] = (param_1->field0_0x0)._s_0.Z;
  uVar5 = (uint)param_2 + (param_2 / 3) * -3;
  if (2 < (byte)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar2 = __xmm_80000000800000008000000080000000;
  fVar6 = (float)local_50[uVar5 & 0xff];
  if (Z < param_2) {
    fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
  }
  local_68._s_0.X = (double)fVar6;
  uVar5 = (uint)param_3 + (param_3 / 3) * -3;
  if (2 < (byte)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar6 = (float)local_50[uVar5 & 0xff];
  if (Z < param_3) {
    fVar6 = (float)((uint)fVar6 ^ uVar2);
  }
  local_68._s_0.Y = (double)fVar6;
  uVar5 = (uint)param_4 + (param_4 / 3) * -3;
  if (2 < (byte)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar6 = (float)local_50[uVar5 & 0xff];
  if (Z < param_4) {
    fVar6 = (float)((uint)fVar6 ^ uVar2);
  }
  local_68._s_0.Z = (double)fVar6;
  if (param_5) {
    local_68._s_0.X = local_68._s_0.X + (param_6->field0_0x0)._s_0.X;
    local_68._s_0.Y = local_68._s_0.Y + (param_6->field0_0x0)._s_0.Y;
    local_68._s_0.Z = local_68._s_0.Z + (param_6->field0_0x0)._s_0.Z;
  }
  if (param_7) {
    pTVar4 = UE::Math::TRotator<double>::RotateVector
                       (param_8,local_38,(TVector<double> *)&local_68._s_0);
    local_68._0_4_ = *(undefined4 *)&pTVar4->field0_0x0;
    local_68._4_4_ = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 4);
    local_68._8_4_ = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 8);
    local_68._12_4_ = *(undefined4 *)((longlong)&pTVar4->field0_0x0 + 0xc);
    local_68._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  }
  else {
  }
  *(undefined4 *)&param_1->field0_0x0 = local_68._0_4_;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 4) = local_68._4_4_;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 8) = local_68._8_4_;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc) = local_68._12_4_;
  (param_1->field0_0x0)._s_0.Z = local_68._s_0.Z;
  return;
}

// ToLiveLinkSourceMode @ 14d083050

ELiveLinkSourceMode __cdecl
LiveLinkTimedDataInput::ToLiveLinkSourceMode(ETimedDataInputEvaluationType param_1)

{
  if (param_1 != None) {
    if (param_1 == Timecode) {
      return Timecode;
    }
    if (param_1 == PlatformTime) {
      return EngineTime;
    }
  }
  return Latest;
}

// ToTimedDataInputEvaluationType @ 14d083080

ETimedDataInputEvaluationType __cdecl
LiveLinkTimedDataInput::ToTimedDataInputEvaluationType(ELiveLinkSourceMode param_1)

{
  if (param_1 != Latest) {
    if (param_1 == EngineTime) {
      return PlatformTime;
    }
    if (param_1 == Timecode) {
      return Timecode;
    }
  }
  return None;
}

// Z_Construct_UClass_ALiveLinkDataPreview_NoRegister @ 14d08a5c0

UClass * __cdecl Z_Construct_UClass_ALiveLinkDataPreview_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDataPreview",
               &Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton,
               ALiveLinkDataPreview::StaticRegisterNativesALiveLinkDataPreview,0x418,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALiveLinkDataPreview>,
               InternalVTableHelperCtorCaller<ALiveLinkDataPreview>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister @ 14d08a680

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDrivenComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton,
               UDEPRECATED_LiveLinkDrivenComponent::
               StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_LiveLinkDrivenComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_LiveLinkDrivenComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_NoRegister @ 14d08a740

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationAxisSwitchPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.InnerSingleton,
               ULiveLinkAnimationAxisSwitchPreProcessor::
               StaticRegisterNativesULiveLinkAnimationAxisSwitchPreProcessor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkAnimationAxisSwitchPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationAxisSwitchPreProcessor>,local_res8,
               ULiveLinkTransformAxisSwitchPreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister @ 14d08a800

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.
                InnerSingleton,
               ULiveLinkAnimationFrameInterpolationProcessor::
               StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkAnimationFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationFrameInterpolationProcessor>,
               local_res8,ULiveLinkBasicFrameInterpolationProcessor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister @ 14d08a8c0

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationRoleToTransform",
               &Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton,
               ULiveLinkAnimationRoleToTransform::
               StaticRegisterNativesULiveLinkAnimationRoleToTransform,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkAnimationRoleToTransform>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationRoleToTransform>,local_res8,
               ULiveLinkFrameTranslator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister @ 14d08a980

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton,
               ULiveLinkAnimationVirtualSubject::
               StaticRegisterNativesULiveLinkAnimationVirtualSubject,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkAnimationVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationVirtualSubject>,local_res8,
               ULiveLinkVirtualSubject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister @ 14d08aa40

UClass * __cdecl Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBasicFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton,
               ULiveLinkBasicFrameInterpolationProcessor::
               StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBasicFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkBasicFrameInterpolationProcessor>,local_res8,
               ULiveLinkFrameInterpolationProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkBlueprintLibrary_NoRegister @ 14d08ab00

UClass * __cdecl Z_Construct_UClass_ULiveLinkBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBlueprintLibrary",
               &Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton,
               ULiveLinkBlueprintLibrary::StaticRegisterNativesULiveLinkBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULiveLinkBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister @ 14d08abc0

UClass * __cdecl Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBlueprintVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton,
               ULiveLinkBlueprintVirtualSubject::
               StaticRegisterNativesULiveLinkBlueprintVirtualSubject,0x1a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBlueprintVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkBlueprintVirtualSubject>,local_res8,
               ULiveLinkVirtualSubject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkBroadcastComponent_NoRegister @ 14d08ac80

UClass * __cdecl Z_Construct_UClass_ULiveLinkBroadcastComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBroadcastComponent",
               &Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton,
               ULiveLinkBroadcastComponent::StaticRegisterNativesULiveLinkBroadcastComponent,0x148,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBroadcastComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkBroadcastComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastComponent.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkBroadcastSubsystem_NoRegister @ 14d08ad40

UClass * __cdecl Z_Construct_UClass_ULiveLinkBroadcastSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBroadcastSubsystem",
               &Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton,
               ULiveLinkBroadcastSubsystem::StaticRegisterNativesULiveLinkBroadcastSubsystem,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBroadcastSubsystem>,
               InternalVTableHelperCtorCaller<ULiveLinkBroadcastSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkComponent_NoRegister @ 14d08ae00

UClass * __cdecl Z_Construct_UClass_ULiveLinkComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkComponent",
               &Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton,
               ULiveLinkComponent::StaticRegisterNativesULiveLinkComponent,0xe8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponent.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkCustomTimeStep_NoRegister @ 14d08aec0

UClass * __cdecl Z_Construct_UClass_ULiveLinkCustomTimeStep_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkCustomTimeStep",
               &Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton,
               ULiveLinkCustomTimeStep::StaticRegisterNativesULiveLinkCustomTimeStep,0xc0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkCustomTimeStep>
               ,InternalVTableHelperCtorCaller<ULiveLinkCustomTimeStep>,local_res8,
               UGenlockedCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkDataPreviewComponent_NoRegister @ 14d08af80

UClass * __cdecl Z_Construct_UClass_ULiveLinkDataPreviewComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDataPreviewComponent",
               &Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton,
               ULiveLinkDataPreviewComponent::StaticRegisterNativesULiveLinkDataPreviewComponent,
               0xb20,0x10,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDataPreviewComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkDataPreviewComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkHubSubjectSettings_NoRegister @ 14d08b040

UClass * __cdecl Z_Construct_UClass_ULiveLinkHubSubjectSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkHubSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton,
               ULiveLinkHubSubjectSettings::StaticRegisterNativesULiveLinkHubSubjectSettings,0xe0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkHubSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkHubSubjectSettings>,local_res8,
               ULiveLinkSubjectSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkHubSubjectSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkLocatorAxisSwitchPreProcessor_NoRegister @ 14d08b100

UClass * __cdecl Z_Construct_UClass_ULiveLinkLocatorAxisSwitchPreProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkLocatorAxisSwitchPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton,
               ULiveLinkLocatorAxisSwitchPreProcessor::
               StaticRegisterNativesULiveLinkLocatorAxisSwitchPreProcessor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkLocatorAxisSwitchPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkLocatorAxisSwitchPreProcessor>,local_res8,
               ULiveLinkTransformAxisSwitchPreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkMarkerVisualizer_NoRegister @ 14d08b1c0

UClass * __cdecl Z_Construct_UClass_ULiveLinkMarkerVisualizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMarkerVisualizer",
               &Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton,
               ULiveLinkMarkerVisualizer::StaticRegisterNativesULiveLinkMarkerVisualizer,0xa40,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkMarkerVisualizer>,
               InternalVTableHelperCtorCaller<ULiveLinkMarkerVisualizer>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMarkerVisualizer.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister @ 14d08b280

UClass * __cdecl Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusSourceFactory",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton,
               ULiveLinkMessageBusSourceFactory::
               StaticRegisterNativesULiveLinkMessageBusSourceFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkMessageBusSourceFactory>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceFactory>,local_res8,
               ULiveLinkSourceFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister @ 14d08b340

UClass * __cdecl Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton,
               ULiveLinkMessageBusSourceSettings::
               StaticRegisterNativesULiveLinkMessageBusSourceSettings,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkMessageBusSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkSettings_NoRegister @ 14d08b400

UClass * __cdecl Z_Construct_UClass_ULiveLinkSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkSettings",
               &Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton,
               ULiveLinkSettings::StaticRegisterNativesULiveLinkSettings,0xe8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<ULiveLinkSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkSkeletonRemapper_NoRegister @ 14d08b4b0

UClass * __cdecl Z_Construct_UClass_ULiveLinkSkeletonRemapper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkSkeletonRemapper",
               &Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton,
               ULiveLinkSkeletonRemapper::StaticRegisterNativesULiveLinkSkeletonRemapper,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkSkeletonRemapper>,
               InternalVTableHelperCtorCaller<ULiveLinkSkeletonRemapper>,local_res8,
               ULiveLinkSubjectRemapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister @ 14d08b570

UClass * __cdecl Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTimeSynchronizationSource",
               &Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton,
               ULiveLinkTimeSynchronizationSource::
               StaticRegisterNativesULiveLinkTimeSynchronizationSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<ULiveLinkTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister @ 14d08b630

UClass * __cdecl Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTimecodeProvider",
               &Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton,
               ULiveLinkTimecodeProvider::StaticRegisterNativesULiveLinkTimecodeProvider,0xc0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkTimecodeProvider>,
               InternalVTableHelperCtorCaller<ULiveLinkTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_NoRegister @ 14d08b6f0

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTransformAxisSwitchPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton,
               ULiveLinkTransformAxisSwitchPreProcessor::
               StaticRegisterNativesULiveLinkTransformAxisSwitchPreProcessor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkTransformAxisSwitchPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformAxisSwitchPreProcessor>,local_res8,
               ULiveLinkFramePreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_NoRegister @ 14d08b7b0

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformDeadbandPreProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTransformDeadbandPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton,
               ULiveLinkTransformDeadbandPreProcessor::
               StaticRegisterNativesULiveLinkTransformDeadbandPreProcessor,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTransformDeadbandPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformDeadbandPreProcessor>,local_res8,
               ULiveLinkFramePreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_NoRegister @ 14d08b870

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformRoleToAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTransformRoleToAnimation",
               &Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.InnerSingleton,
               ULiveLinkTransformRoleToAnimation::
               StaticRegisterNativesULiveLinkTransformRoleToAnimation,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTransformRoleToAnimation>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformRoleToAnimation>,local_res8,
               ULiveLinkFrameTranslator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformRoleToAnimation.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkUserSettings_NoRegister @ 14d08b930

UClass * __cdecl Z_Construct_UClass_ULiveLinkUserSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkUserSettings",
               &Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton,
               ULiveLinkUserSettings::StaticRegisterNativesULiveLinkUserSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULiveLinkUserSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkUserSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkUserSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister @ 14d08b9e0

UClass * __cdecl Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkVirtualSubjectSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton,
               ULiveLinkVirtualSubjectSourceSettings::
               StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkVirtualSubjectSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkVirtualSubjectSourceSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference @ 14d08baa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkRetargetAssetReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkRetargetAssetReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkRetargetAssetReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkRetargetAssetReference.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_LiveLink @ 14d08ffc0

void __cdecl IMPLEMENT_MODULE_LiveLink(void)

{
  return;
}

// ApplyToClientPollingOperation'' @ 150455520

void __cdecl `dynamic_atexit_destructor_for_'ULiveLinkPreset::ApplyToClientPollingOperation__(void)

{
  if (ULiveLinkPreset::ApplyToClientPollingOperation.Ptr != (FApplyToClientPollingOperation *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150455534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)ULiveLinkPreset::ApplyToClientPollingOperation.Ptr[-1].RemainingTime)
              (&ULiveLinkPreset::ApplyToClientPollingOperation.Ptr[-1].RemainingTime);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CLiveLinkLogDisableMessage'' @ 150455540

void __cdecl LiveLinkLogDetail::_dynamic_atexit_destructor_for__CLiveLinkLogDisableMessage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CLiveLinkLogDisableMessage);
  return;
}

// `dynamic_atexit_destructor_for_'CLiveLinkLogEnableMessage'' @ 150455560

void __cdecl LiveLinkLogDetail::_dynamic_atexit_destructor_for__CLiveLinkLogEnableMessage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CLiveLinkLogEnableMessage);
  return;
}

// `dynamic_atexit_destructor_for_'CLiveLinkLogRepeated'' @ 150455580

void __cdecl LiveLinkLogDetail::_dynamic_atexit_destructor_for__CLiveLinkLogRepeated__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CLiveLinkLogRepeated);
  return;
}

// `dynamic_atexit_destructor_for_'CLiveLinkLogSilent'' @ 1504555a0

void __cdecl LiveLinkLogDetail::_dynamic_atexit_destructor_for__CLiveLinkLogSilent__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CLiveLinkLogSilent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveLinkMaxBufferSize'' @ 1504555c0

void __cdecl
LiveLinkTimedDataInput::_dynamic_atexit_destructor_for__CVarLiveLinkMaxBufferSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLiveLinkMaxBufferSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveLinkMessageBusSourceReconnectAfterTimeout'' @ 1504555e0

void __cdecl
_dynamic_atexit_destructor_for__CVarLiveLinkMessageBusSourceReconnectAfterTimeout__(void)

{
  CVarLiveLinkMessageBusSourceReconnectAfterTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLiveLinkMessageBusSourceReconnectAfterTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveLinkMinBufferSize'' @ 150455600

void __cdecl
LiveLinkTimedDataInput::_dynamic_atexit_destructor_for__CVarLiveLinkMinBufferSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLiveLinkMinBufferSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveLinkNumFramesForSmoothOffset'' @ 150455620

void __cdecl
LiveLinkTimedDataInput::_dynamic_atexit_destructor_for__CVarLiveLinkNumFramesForSmoothOffset__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLiveLinkNumFramesForSmoothOffset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveLinkSupportCompressPayloads'' @ 150455640

void __cdecl _dynamic_atexit_destructor_for__CVarLiveLinkSupportCompressPayloads__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLiveLinkSupportCompressPayloads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveLinkUpdateContinuousClockOffset'' @ 150455660

void __cdecl
LiveLinkTimedDataInput::_dynamic_atexit_destructor_for__CVarLiveLinkUpdateContinuousClockOffset__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLiveLinkUpdateContinuousClockOffset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxNewFrameDataPerUpdate'' @ 150455680

void __cdecl _dynamic_atexit_destructor_for__CVarMaxNewFrameDataPerUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxNewFrameDataPerUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxNewStaticDataPerUpdate'' @ 1504556a0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxNewStaticDataPerUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxNewStaticDataPerUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'ContentDir'' @ 1504556c0

void __cdecl
`LiveLinkModuleUtils::InPluginContent'::__l2::_dynamic_atexit_destructor_for__ContentDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ContentDir.Data.AllocatorInstance.Data;
  if (ContentDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ContentDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LiveLinkPresetAddCmd'' @ 1504556e0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__LiveLinkPresetAddCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LiveLinkPresetAddCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LiveLinkPresetApplyCmd'' @ 150455700

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__LiveLinkPresetApplyCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LiveLinkPresetApplyCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LogLiveLink'' @ 150455720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveLink__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveLink);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 150455740

void __cdecl
`SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 150455760

void __cdecl
`SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
GetDefaultAccessibleText'::__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NoSubjectSelected'' @ 150455780

void __cdecl LiveLinkCustomTimeStepUtils::_dynamic_atexit_destructor_for__NoSubjectSelected__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NoSubjectSelected.Data.AllocatorInstance.Data;
  if (NoSubjectSelected.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NoSubjectSelected.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

