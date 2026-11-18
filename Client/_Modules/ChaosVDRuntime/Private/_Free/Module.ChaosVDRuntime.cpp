// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 458

// DelegatesRWLock'' @ 140f50360

void __cdecl `dynamic_initializer_for_'FChaosVDRuntimeModule::DelegatesRWLock__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::DelegatesRWLock__);
  return;
}

// PerformFullCaptureDelegate'' @ 140f50380

void __cdecl `dynamic_initializer_for_'FChaosVDRuntimeModule::PerformFullCaptureDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::PerformFullCaptureDelegate__);
  return;
}

// PostRecordingStartedDelegate'' @ 140f503a0

void __cdecl `dynamic_initializer_for_'FChaosVDRuntimeModule::PostRecordingStartedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::PostRecordingStartedDelegate__);
  return;
}

// RecordingStartFailedDelegate'' @ 140f503c0

void __cdecl `dynamic_initializer_for_'FChaosVDRuntimeModule::RecordingStartFailedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::RecordingStartFailedDelegate__);
  return;
}

// RecordingStartedDelegate'' @ 140f503e0

void __cdecl `dynamic_initializer_for_'FChaosVDRuntimeModule::RecordingStartedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::RecordingStartedDelegate__);
  return;
}

// RecordingStopDelegate'' @ 140f50400

void __cdecl `dynamic_initializer_for_'FChaosVDRuntimeModule::RecordingStopDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::RecordingStopDelegate__);
  return;
}

// `dynamic_initializer_for_'CVarChaosVDGTimeBetweenFullCaptures'' @ 140f50420

void __cdecl _dynamic_initializer_for__CVarChaosVDGTimeBetweenFullCaptures__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarChaosVDGTimeBetweenFullCaptures,L"p.Chaos.VD.TimeBetweenFullCaptures",10,
             L"Time interval in seconds after which a full capture (not only delta changes) should be recorded"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosVDGTimeBetweenFullCaptures__);
  return;
}

// `dynamic_initializer_for_'CVarChaosVDMaxBytesPerRelayChunk'' @ 140f50470

void __cdecl _dynamic_initializer_for__CVarChaosVDMaxBytesPerRelayChunk__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarChaosVDMaxBytesPerRelayChunk,L"p.Chaos.VD.MaxBytesPerRelayChunk",0x10000,
             L"How many bytes per relay data message we should send",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosVDMaxBytesPerRelayChunk__);
  return;
}

// `dynamic_initializer_for_'CVarChaosVDMaxTimeToWaitForDisconnect'' @ 140f504c0

void __cdecl _dynamic_initializer_for__CVarChaosVDMaxTimeToWaitForDisconnect__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarChaosVDMaxTimeToWaitForDisconnect,L"p.Chaos.VD.MaxTimeToWaitForDisconnectSeconds",
             __real_40a00000,
             L"Max time to wait after attempting to stop an active trace session. After that time has passed if we are still connected, CVD will continue and eventually error out."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosVDMaxTimeToWaitForDisconnect__);
  return;
}

// `dynamic_initializer_for_'ChaosVDStartRecordingCommand'' @ 140f50510

void __cdecl _dynamic_initializer_for__ChaosVDStartRecordingCommand__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ChaosVDStartRecordingCommand,L"p.Chaos.StartVDRecording",
             L"Turn on the recording of debugging data",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__ChaosVDStartRecordingCommand__);
  return;
}

// `dynamic_initializer_for_'LogChaosVDRuntime'' @ 140f50640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosVDRuntime__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogChaosVDRuntime,L"LogChaosVDRuntime",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosVDRuntime__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantChaosVDRuntime'' @ 140f50680

void __cdecl _dynamic_initializer_for__ModuleRegistrantChaosVDRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ChaosVDRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ChaosVDRuntime",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FChaosVDRuntimeModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StopVDStartRecordingCommand'' @ 140f506d0

void __cdecl _dynamic_initializer_for__StopVDStartRecordingCommand__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&StopVDStartRecordingCommand,L"p.Chaos.StopVDRecording",
             L"Turn off the recording of debugging data",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__StopVDStartRecordingCommand__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_ChaosVDRecordingDetails_h__Script_ChaosVDRuntime_1384861358'' @ 140f50800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_ChaosVDRecordingDetails_h__Script_ChaosVDRuntime_1384861358__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_ChaosVDRecordingDetails_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_ChaosVDRecordingDetails_h__Script_ChaosVDRuntime_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h__Script_ChaosVDRuntime_625818392'' @ 140f50850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h__Script_ChaosVDRuntime_625818392__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCharacterGroundConstraintDataWrappers_h__Script_ChaosVDRuntime_2278885971'' @ 140f508a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCharacterGroundConstraintDataWrappers_h__Script_ChaosVDRuntime_2278885971__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCharacterGroundConstraintDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h__Script_ChaosVDRuntime_1116918798'' @ 140f508e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h__Script_ChaosVDRuntime_1116918798__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,9,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::EnumInfo,8);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDDebugShapeDataWrapper_h__Script_ChaosVDRuntime_655750876'' @ 140f50930

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDDebugShapeDataWrapper_h__Script_ChaosVDRuntime_655750876__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDDebugShapeDataWrapper_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h__Script_ChaosVDRuntime_1128545320'' @ 140f50970

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h__Script_ChaosVDRuntime_1128545320__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::EnumInfo,9);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h__Script_ChaosVDRuntime_2589043476'' @ 140f509c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h__Script_ChaosVDRuntime_2589043476__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,0xf,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h__Script_ChaosVDRuntime_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h__Script_ChaosVDRuntime_2803256885'' @ 140f50a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h__Script_ChaosVDRuntime_2803256885__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ChaosVDRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h__Script_ChaosVDRuntime_Statics
             ::EnumInfo,8);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ChaosVDRuntime'' @ 140f50a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ChaosVDRuntime__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa45645dd;
  local_res8[0].DeclarationsHash = 0x6915217;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ChaosVDRuntime,L"/Script/ChaosVDRuntime",
             &Z_Registration_Info_UPackage__Script_ChaosVDRuntime,local_res8);
  return;
}

// EChaosVDCollisionQueryParamsFlags_StaticEnum @ 1436c5cc0

UEnum * __cdecl EChaosVDCollisionQueryParamsFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags,
                       (UObject *)pUVar1,L"EChaosVDCollisionQueryParamsFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton;
}

// NewProp_bTraceComplex_SetBit @ 1436c5d80

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceComplex_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 1;
  return;
}

// NewProp_bFindInitialOverlaps_SetBit @ 1436c5d90

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bFindInitialOverlaps_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 2;
  return;
}

// NewProp_bReturnFaceIndex_SetBit @ 1436c5de0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnFaceIndex_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 4;
  return;
}

// NewProp_bReturnPhysicalMaterial_SetBit @ 1436c5df0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::
NewProp_bReturnPhysicalMaterial_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 8;
  return;
}

// NewProp_bIgnoreBlocks_SetBit @ 1436c5e00

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreBlocks_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 0x10;
  return;
}

// NewProp_bIsTraceType_SetBit @ 1436c5e10

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionChannelInfo_Statics::NewProp_bIsTraceType_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bIgnoreTouches_SetBit @ 1436c5e20

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreTouches_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 0x20;
  return;
}

// NewStructOps @ 1436c5e30

void * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionChannelInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCollisionChannelInfo,&UE::CoreUObject::Private::Construct<FChaosVDCollisionChannelInfo>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionChannelInfo>,&UE::CoreUObject::Private::Destruct<FChaosVDCollisionChannelInfo>,&UE::CoreUObject::Private::Copy<FChaosVDCollisionChannelInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSkipNarrowPhase_SetBit @ 1436c5e70

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bSkipNarrowPhase_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 0x40;
  return;
}

// NewProp_bTraceIntoSubComponents_SetBit @ 1436c5e80

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::
NewProp_bTraceIntoSubComponents_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 0x80;
  return;
}

// NewProp_bReplaceHitWithSubComponents_SetBit @ 1436c5e90

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::
NewProp_bReplaceHitWithSubComponents_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) | 0x100;
  return;
}

// NewStructOps @ 1436c5ea0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCollisionQueryParams,&UE::CoreUObject::Private::Construct<FChaosVDCollisionQueryParams>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionQueryParams>,&UE::CoreUObject::Private::Destruct<FChaosVDCollisionQueryParams>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDCollisionQueryParams>,&UE::CoreUObject::Private::Copy<FChaosVDCollisionQueryParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436c5ee0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionChannelsInfoContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x300;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCollisionChannelsInfoContainer,&UE::CoreUObject::Private::Construct<FChaosVDCollisionChannelsInfoContainer>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionChannelsInfoContainer>,&UE::CoreUObject::Private::Destruct<FChaosVDCollisionChannelsInfoContainer>,&UE::CoreUObject::Private::Copy<FChaosVDCollisionChannelsInfoContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDQueryFastDataParallelFlags_StaticEnum @ 1436c5f20

UEnum * __cdecl EChaosVDQueryFastDataParallelFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags,
                       (UObject *)pUVar1,L"EChaosVDQueryFastDataParallelFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton;
}

// NewProp_bParallel0_SetBit @ 1436c5fe0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel0_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) | 1;
  return;
}

// NewProp_bParallel1_SetBit @ 1436c5ff0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel1_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) | 2;
  return;
}

// `scalar_deleting_destructor' @ 1436c6000

void * __thiscall
FChaosVDRuntimeModule::_scalar_deleting_destructor_(FChaosVDRuntimeModule *this,uint param_1)

{
  ~FChaosVDRuntimeModule(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// NewProp_bParallel2_SetBit @ 1436c6040

void __cdecl
Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel2_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) | 4;
  return;
}

// NewStructOps @ 1436c6050

void * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDQueryFastData,&UE::CoreUObject::Private::Construct<FChaosVDQueryFastData>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryFastData>,&UE::CoreUObject::Private::Destruct<FChaosVDQueryFastData>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryFastData>,&UE::CoreUObject::Private::Copy<FChaosVDQueryFastData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436c62a0

void * __thiscall
FChaosVDJointStateDataWrapper::_scalar_deleting_destructor_
          (FChaosVDJointStateDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c6350

void * __thiscall
FChaosVDGTJointStateDataWrapper::_scalar_deleting_destructor_
          (FChaosVDGTJointStateDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// EChaosVDSQHitFlags_StaticEnum @ 1436c6540

UEnum * __cdecl EChaosVDSQHitFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSQHitFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSQHitFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQHitFlags,(UObject *)pUVar1,
                       L"EChaosVDSQHitFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDSQHitFlags.OuterSingleton;
}

// NewStructOps @ 1436c6610

void * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDQueryHitData,&UE::CoreUObject::Private::Construct<FChaosVDQueryHitData>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryHitData>,&UE::CoreUObject::Private::Destruct<FChaosVDQueryHitData>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryHitData>,&UE::CoreUObject::Private::Copy<FChaosVDQueryHitData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436c6650

void * __thiscall
FChaosVDJointSolverSettingsDataWrapper::_scalar_deleting_destructor_
          (FChaosVDJointSolverSettingsDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// EChaosVDCollisionQueryHitType_StaticEnum @ 1436c66c0

UEnum * __cdecl EChaosVDCollisionQueryHitType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType,
                       (UObject *)pUVar1,L"EChaosVDCollisionQueryHitType");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton;
}

// EChaosVDSQVisitRejectReason_StaticEnum @ 1436c6740

UEnum * __cdecl EChaosVDSQVisitRejectReason_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQVisitRejectReason,
                       (UObject *)pUVar1,L"EChaosVDSQVisitRejectReason");
  }
  return Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436c6780

void * __thiscall
FChaosVDJointSettingsDataWrapper::_scalar_deleting_destructor_
          (FChaosVDJointSettingsDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c6820

void * __thiscall
FChaosVDJointConstraint::_scalar_deleting_destructor_(FChaosVDJointConstraint *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3c0);
  }
  return this;
}

// EChaosVDSceneQueryVisitorType_StaticEnum @ 1436c6850

UEnum * __cdecl EChaosVDSceneQueryVisitorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType,
                       (UObject *)pUVar1,L"EChaosVDSceneQueryVisitorType");
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode @ 1436c6890

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDJointForceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDJointForceMode.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDJointForceMode.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType @ 1436c68d0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDJointMotionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDJointMotionType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDJointMotionType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType @ 1436c6910

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDJointReSimType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDJointReSimType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDJointReSimType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType @ 1436c6950

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDJointSyncType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDJointSyncType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSyncType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType @ 1436c6990

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDPlasticityType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDPlasticityType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDPlasticityType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper @ 1436c69d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDGTJointStateDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDGTJointStateDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDGTJointStateDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDGTJointStateDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper @ 1436c6a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointSettingsDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDJointSettingsDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointSettingsDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDJointSettingsDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper @ 1436c6ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointStateDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDJointStateDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointStateDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDJointStateDataWrapper.InnerSingleton;
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

// EChaosVDJointReSimType_StaticEnum @ 1436c6b50

UEnum * __cdecl EChaosVDJointReSimType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType,(UObject *)pUVar1,
                       L"EChaosVDJointReSimType");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton;
}

// NewStructOps @ 1436c6be0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDQueryVisitStep,&UE::CoreUObject::Private::Construct<FChaosVDQueryVisitStep>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryVisitStep>,&UE::CoreUObject::Private::Destruct<FChaosVDQueryVisitStep>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryVisitStep>,&UE::CoreUObject::Private::Copy<FChaosVDQueryVisitStep>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDJointSyncType_StaticEnum @ 1436c6c20

UEnum * __cdecl EChaosVDJointSyncType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType,(UObject *)pUVar1,
                       L"EChaosVDJointSyncType");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton;
}

// EChaosVDJointStateFlags_StaticEnum @ 1436c6cc0

UEnum * __cdecl EChaosVDJointStateFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags,(UObject *)pUVar1,
                       L"EChaosVDJointStateFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton;
}

// EChaosVDGTJointStateFlags_StaticEnum @ 1436c6d90

UEnum * __cdecl EChaosVDGTJointStateFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDGTJointStateFlags,(UObject *)pUVar1,
                       L"EChaosVDGTJointStateFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.OuterSingleton;
}

// NewProp_bIsRetryQuery_SetBit @ 1436c6de0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_bIsRetryQuery_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bDisabled_SetBit @ 1436c6f70

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDisabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 1;
  return;
}

// NewProp_bBroken_SetBit @ 1436c6f80

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBroken_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 2;
  return;
}

// NewStructOps @ 1436c6f90

void * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDQueryDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDQueryDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDQueryDataWrapper>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDQueryDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bBreaking_SetBit @ 1436c6fd0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBreaking_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 4;
  return;
}

// NewProp_bDriveTargetChanged_SetBit @ 1436c7000

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDriveTargetChanged_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 8;
  return;
}

// NewProp_bEnabledDuringResim_SetBit @ 1436c7010

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bEnabledDuringResim_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 0x10;
  return;
}

// NewStructOps @ 1436c7020

void * __cdecl Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDJointStateDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDJointStateDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDJointStateDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDJointStateDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDJointStateDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436c71e0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDSceneQueriesDataContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDSceneQueriesDataContainer,&UE::CoreUObject::Private::Construct<FChaosVDSceneQueriesDataContainer>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDSceneQueriesDataContainer>,&UE::CoreUObject::Private::Destruct<FChaosVDSceneQueriesDataContainer>,&UE::CoreUObject::Private::Copy<FChaosVDSceneQueriesDataContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsBreaking_SetBit @ 1436c7220

void __cdecl
Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper_Statics::NewProp_bIsBreaking_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 1;
  return;
}

// NewProp_bIsBroken_SetBit @ 1436c7230

void __cdecl
Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper_Statics::NewProp_bIsBroken_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 2;
  return;
}

// NewProp_bDriveTargetChanged_SetBit @ 1436c7240

void __cdecl
Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper_Statics::
NewProp_bDriveTargetChanged_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 4;
  return;
}

// NewProp_bIsViolating_SetBit @ 1436c7250

void __cdecl
Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper_Statics::NewProp_bIsViolating_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 8;
  return;
}

// NewStructOps @ 1436c72d0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDGTJointStateDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDGTJointStateDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDGTJointStateDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDGTJointStateDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDGTJointStateDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436c73c0

void * __thiscall
FChaosVDAABBTreeDataWrapper::_scalar_deleting_destructor_
          (FChaosVDAABBTreeDataWrapper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FChaosVDBoundingVolumeDataWrapper,int>
            ((FChaosVDBoundingVolumeDataWrapper *)(this->BoundingVolumeLeafs).AllocatorInstance.Data
             ,(this->BoundingVolumeLeafs).ArrayNum);
  pFVar1 = (this->BoundingVolumeLeafs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FChaosVDAABBTreeLeafDataWrapper,int>
            ((FChaosVDAABBTreeLeafDataWrapper *)(this->TreeArrayLeafs).AllocatorInstance.Data,
             (this->TreeArrayLeafs).ArrayNum);
  pFVar1 = (this->TreeArrayLeafs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType @ 1436c7680

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement @ 1436c76c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement.InnerSingleton;
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

// EChaosVDJointSolverSettingsFlags_StaticEnum @ 1436c7740

UEnum * __cdecl EChaosVDJointSolverSettingsFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags,
                       (UObject *)pUVar1,L"EChaosVDJointSolverSettingsFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase @ 1436c7780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDWrapperDataBase @ 1436c7800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDWrapperDataBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDWrapperDataBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDWrapperDataBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDWrapperDataBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDWrapperDataBase.InnerSingleton;
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

// EChaosVDAABBTreeNodeFlags_StaticEnum @ 1436c7880

UEnum * __cdecl EChaosVDAABBTreeNodeFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags,(UObject *)pUVar1,
                       L"EChaosVDAABBTreeNodeFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton;
}

// EChaosVDAccelerationStructureType_StaticEnum @ 1436c78c0

UEnum * __cdecl EChaosVDAccelerationStructureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType,
                       (UObject *)pUVar1,L"EChaosVDAccelerationStructureType");
  }
  return Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton;
}

// NewProp_bUseLinearSolver_SetBit @ 1436c7970

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
NewProp_bUseLinearSolver_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) | 1;
  return;
}

// NewProp_bSortEnabled_SetBit @ 1436c7980

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
NewProp_bSortEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) | 2;
  return;
}

// NewProp_bSolvePositionLast_SetBit @ 1436c7990

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
NewProp_bSolvePositionLast_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) | 4;
  return;
}

// NewProp_bUsePositionBasedDrives_SetBit @ 1436c79a0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
NewProp_bUsePositionBasedDrives_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) | 8;
  return;
}

// NewProp_bEnableTwistLimits_SetBit @ 1436c79b0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
NewProp_bEnableTwistLimits_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) | 0x10;
  return;
}

// NewProp_bEnableSwingLimits_SetBit @ 1436c79c0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
NewProp_bEnableSwingLimits_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) | 0x20;
  return;
}

// NewProp_bEnableDrives_SetBit @ 1436c79d0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
NewProp_bEnableDrives_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) | 0x40;
  return;
}

// NewStructOps @ 1436c79e0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDAccelerationStructureBase,&UE::CoreUObject::Private::Construct<FChaosVDAccelerationStructureBase>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDAccelerationStructureBase>,&UE::CoreUObject::Private::Destruct<FChaosVDAccelerationStructureBase>,&UE::CoreUObject::Private::Copy<FChaosVDAccelerationStructureBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436c7a70

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDJointSolverSettingsDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDJointSolverSettingsDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDJointSolverSettingsDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDJointSolverSettingsDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDJointSolverSettingsDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436c7af0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDBVCellElementDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDBVCellElementDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDBVCellElementDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDBVCellElementDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDBVCellElementDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436c7dd0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDBoundingVolumeDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDBoundingVolumeDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDBoundingVolumeDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDBoundingVolumeDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDBoundingVolumeDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDJointMotionType_StaticEnum @ 1436c7e10

UEnum * __cdecl EChaosVDJointMotionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType,(UObject *)pUVar1,
                       L"EChaosVDJointMotionType");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton;
}

// EChaosVDJointForceMode_StaticEnum @ 1436c7e90

UEnum * __cdecl EChaosVDJointForceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode,(UObject *)pUVar1,
                       L"EChaosVDJointForceMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436c7f20

void * __thiscall
FChaosVDWrapperDataBase::_scalar_deleting_destructor_(FChaosVDWrapperDataBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// EChaosVDPlasticityType_StaticEnum @ 1436c7f90

UEnum * __cdecl EChaosVDPlasticityType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType,(UObject *)pUVar1,
                       L"EChaosVDPlasticityType");
  }
  return Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436c8000

void * __thiscall
FChaosVDConstraintDataWrapperBase::_scalar_deleting_destructor_
          (FChaosVDConstraintDataWrapperBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// EChaosVDJointSettingsFlags_StaticEnum @ 1436c8070

UEnum * __cdecl EChaosVDJointSettingsFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags,(UObject *)pUVar1
                       ,L"EChaosVDJointSettingsFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436c8120

void * __thiscall
FChaosVDFRigidParticleControlFlags::_scalar_deleting_destructor_
          (FChaosVDFRigidParticleControlFlags *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bLeaf_SetBit @ 1436c81c0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bLeaf_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 1;
  return;
}

// NewProp_bDirtyNode_SetBit @ 1436c81d0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewProp_bDirtyNode_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 2;
  return;
}

// NewStructOps @ 1436c81e0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDAABBTreeNodeDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDAABBTreeNodeDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreeNodeDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDAABBTreeNodeDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDAABBTreeNodeDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCollisionEnabled_SetBit @ 1436c8360

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bCollisionEnabled_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 1;
  return;
}

// NewProp_bMassConditioningEnabled_SetBit @ 1436c8370

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bMassConditioningEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 2;
  return;
}

// NewProp_bUseLinearSolver_SetBit @ 1436c8380

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bUseLinearSolver_SetBit
          (void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 4;
  return;
}

// NewProp_bSoftLinearLimitsEnabled_SetBit @ 1436c8390

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bSoftLinearLimitsEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 8;
  return;
}

// NewProp_bSoftTwistLimitsEnabled_SetBit @ 1436c83a0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bSoftTwistLimitsEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x10;
  return;
}

// NewProp_bSoftSwingLimitsEnabled_SetBit @ 1436c83b0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bSoftSwingLimitsEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x20;
  return;
}

// `scalar_deleting_destructor' @ 1436c83c0

void * __thiscall
FChaosVDParticlePositionRotation::_scalar_deleting_destructor_
          (FChaosVDParticlePositionRotation *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// NewProp_bAngularSLerpPositionDriveEnabled_SetBit @ 1436c83f0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bAngularSLerpPositionDriveEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x40;
  return;
}

// NewProp_bAngularSLerpVelocityDriveEnabled_SetBit @ 1436c8400

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bAngularSLerpVelocityDriveEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x80;
  return;
}

// NewProp_bAngularTwistPositionDriveEnabled_SetBit @ 1436c8420

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bAngularTwistPositionDriveEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x100;
  return;
}

// NewProp_bAngularTwistVelocityDriveEnabled_SetBit @ 1436c8440

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bAngularTwistVelocityDriveEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x200;
  return;
}

// NewProp_bAngularSwingPositionDriveEnabled_SetBit @ 1436c84a0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bAngularSwingPositionDriveEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x400;
  return;
}

// NewProp_bAngularSwingVelocityDriveEnabled_SetBit @ 1436c84c0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bAngularSwingVelocityDriveEnabled_SetBit(void *param_1)

{
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) | 0x800;
  return;
}

// `scalar_deleting_destructor' @ 1436c8530

void * __thiscall
FChaosVDParticleVelocities::_scalar_deleting_destructor_
          (FChaosVDParticleVelocities *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewProp_bLinearPositionDriveEnabled0_SetBit @ 1436c8650

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bLinearPositionDriveEnabled0_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) | 1;
  return;
}

// NewProp_bLinearPositionDriveEnabled1_SetBit @ 1436c8690

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bLinearPositionDriveEnabled1_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) | 2;
  return;
}

// NewProp_bLinearPositionDriveEnabled2_SetBit @ 1436c86b0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bLinearPositionDriveEnabled2_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) | 4;
  return;
}

// `scalar_deleting_destructor' @ 1436c86c0

void * __thiscall
FChaosVDParticleBounds::_scalar_deleting_destructor_(FChaosVDParticleBounds *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewProp_bLinearVelocityDriveEnabled0_SetBit @ 1436c86f0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bLinearVelocityDriveEnabled0_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) | 8;
  return;
}

// NewProp_bLinearVelocityDriveEnabled1_SetBit @ 1436c8840

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bLinearVelocityDriveEnabled1_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) | 0x10;
  return;
}

// NewProp_bLinearVelocityDriveEnabled2_SetBit @ 1436c8850

void __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::
NewProp_bLinearVelocityDriveEnabled2_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) | 0x20;
  return;
}

// NewStructOps @ 1436c8860

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDAABBTreePayloadBoundsElement,&UE::CoreUObject::Private::Construct<FChaosVDAABBTreePayloadBoundsElement>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreePayloadBoundsElement>,&UE::CoreUObject::Private::Destruct<FChaosVDAABBTreePayloadBoundsElement>,&UE::CoreUObject::Private::Copy<FChaosVDAABBTreePayloadBoundsElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436c8950

void * __thiscall
FChaosVDParticleDynamics::_scalar_deleting_destructor_(FChaosVDParticleDynamics *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// NewStructOps @ 1436c89a0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2f0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDJointSettingsDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDJointSettingsDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDJointSettingsDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDJointSettingsDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDJointSettingsDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436c8a20

void * __thiscall
FChaosVDCollisionResponseParams::_scalar_deleting_destructor_
          (FChaosVDCollisionResponseParams *this,uint param_1)

{
  ForElementType<unsigned_char> FVar1;
  
  FVar1 = (this->FlagsPerChannel).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c8a70

void * __thiscall
FChaosVDParticleMassProps::_scalar_deleting_destructor_
          (FChaosVDParticleMassProps *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c8b30

void * __thiscall
FChaosVDParticleDynamicMisc::_scalar_deleting_destructor_
          (FChaosVDParticleDynamicMisc *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c8be0

void * __thiscall
FChaosVDCollisionObjectQueryParams::_scalar_deleting_destructor_
          (FChaosVDCollisionObjectQueryParams *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 1436c8c10

void * __cdecl Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDAABBTreeLeafDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDAABBTreeLeafDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreeLeafDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDAABBTreeLeafDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDAABBTreeLeafDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436c8d20

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDAccelerationStructureContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDAccelerationStructureContainer,&UE::CoreUObject::Private::Construct<FChaosVDAccelerationStructureContainer>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDAccelerationStructureContainer>,&UE::CoreUObject::Private::Destruct<FChaosVDAccelerationStructureContainer>,&UE::CoreUObject::Private::Copy<FChaosVDAccelerationStructureContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436c8dc0

void * __thiscall
FChaosVDCollisionQueryParams::_scalar_deleting_destructor_
          (FChaosVDCollisionQueryParams *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IgnoredComponentsNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoredActorsNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoredActorsIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoredComponentsIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// NewProp_bDynamicTree_SetBit @ 1436c8f60

void __cdecl
Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewProp_bDynamicTree_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 1436c8f70

void * __thiscall
FChaosVDQueryFastData::_scalar_deleting_destructor_(FChaosVDQueryFastData *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// NewStructOps @ 1436c8fa0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDAABBTreeDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDAABBTreeDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreeDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDAABBTreeDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDAABBTreeDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436c92d0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDJointConstraint,&UE::CoreUObject::Private::Construct<FChaosVDJointConstraint>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDJointConstraint>,&UE::CoreUObject::Private::Destruct<FChaosVDJointConstraint>,&UE::CoreUObject::Private::Copy<FChaosVDJointConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436c9540

void * __thiscall
FChaosVDQueryHitData::_scalar_deleting_destructor_(FChaosVDQueryHitData *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c95b0

void * __thiscall
FChaosVDQueryVisitStep::_scalar_deleting_destructor_(FChaosVDQueryVisitStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c95e0

void * __thiscall
FChaosVDParticleCluster::_scalar_deleting_destructor_(FChaosVDParticleCluster *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ConnectivityEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c96e0

void * __thiscall
FChaosVDKinematicTarget::_scalar_deleting_destructor_(FChaosVDKinematicTarget *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436c97a0

void * __thiscall FChaosVDVSmooth::_scalar_deleting_destructor_(FChaosVDVSmooth *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ca170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ca1a0

void * __thiscall
FChaosVDParticleDataWrapper::_scalar_deleting_destructor_
          (FChaosVDParticleDataWrapper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CollisionDataPerShape).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ca570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ca5e0

void * __thiscall
FChaosVDAccelerationStructureBase::_scalar_deleting_destructor_
          (FChaosVDAccelerationStructureBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ca650

void * __thiscall
FChaosVDBVCellElementDataWrapper::_scalar_deleting_destructor_
          (FChaosVDBVCellElementDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDRecordingMode @ 1436cae00

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDRecordingMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDRecordingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDRecordingMode.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDRecordingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDRecordingMode.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDTransportMode @ 1436cae40

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDTransportMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDTransportMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDTransportMode.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDTransportMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDTransportMode.InnerSingleton;
}

// Z_Construct_UPackage__Script_ChaosVDRuntime @ 1436cae80

UPackage * __cdecl Z_Construct_UPackage__Script_ChaosVDRuntime(void)

{
  if (Z_Registration_Info_UPackage__Script_ChaosVDRuntime.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ChaosVDRuntime.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ChaosVDRuntime.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436caec0

void * __thiscall
FChaosVDBoundingVolumeDataWrapper::_scalar_deleting_destructor_
          (FChaosVDBoundingVolumeDataWrapper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
             (this->MElements).AllocatorInstance.Data,(this->MElements).ArrayNum);
  pFVar1 = (this->MElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436caf80

void * __thiscall
FChaosVDCharacterGroundConstraintStateDataWrapper::_scalar_deleting_destructor_
          (FChaosVDCharacterGroundConstraintStateDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// EChaosVDRecordingMode_StaticEnum @ 1436caff0

UEnum * __cdecl EChaosVDRecordingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDRecordingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDRecordingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDRecordingMode,(UObject *)pUVar1,
                       L"EChaosVDRecordingMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDRecordingMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436cb030

void * __thiscall
FChaosVDAABBTreeNodeDataWrapper::_scalar_deleting_destructor_
          (FChaosVDAABBTreeNodeDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436cb0a0

void * __thiscall
FChaosVDCharacterGroundConstraintSettingsDataWrapper::_scalar_deleting_destructor_
          (FChaosVDCharacterGroundConstraintSettingsDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436cb110

void * __thiscall
FChaosVDAABBTreePayloadBoundsElement::_scalar_deleting_destructor_
          (FChaosVDAABBTreePayloadBoundsElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// EChaosVDTransportMode_StaticEnum @ 1436cb180

UEnum * __cdecl EChaosVDTransportMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDTransportMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDTransportMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDTransportMode,(UObject *)pUVar1,
                       L"EChaosVDTransportMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDTransportMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436cb1c0

void * __thiscall
FChaosVDCharacterGroundConstraintDataDataWrapper::_scalar_deleting_destructor_
          (FChaosVDCharacterGroundConstraintDataDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436cb310

void * __thiscall
FChaosVDCharacterGroundConstraint::_scalar_deleting_destructor_
          (FChaosVDCharacterGroundConstraint *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper @ 1436cb3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper @ 1436cb420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper @ 1436cb4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDConstraintDataWrapperBase @ 1436cb520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDConstraintDataWrapperBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDConstraintDataWrapperBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDConstraintDataWrapperBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDConstraintDataWrapperBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDConstraintDataWrapperBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDConstraintDataWrapperBase.InnerSingleton;
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

// NewStructOps @ 1436cb5a0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDStartRecordingCommandMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDStartRecordingCommandMessage,&UE::CoreUObject::Private::Construct<FChaosVDStartRecordingCommandMessage>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDStartRecordingCommandMessage>,&UE::CoreUObject::Private::Destruct<FChaosVDStartRecordingCommandMessage>,&UE::CoreUObject::Private::Copy<FChaosVDStartRecordingCommandMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDisabled_SetBit @ 1436cb5e0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::
NewProp_bDisabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 1436cb5f0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCharacterGroundConstraintStateDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraintStateDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraintStateDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraintStateDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraintStateDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDKinematicTargetMode @ 1436cb850

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDKinematicTargetMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDKinematicTargetMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType @ 1436cb890

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDObjectStateType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDObjectStateType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDObjectStateType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType @ 1436cb8d0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDParticleType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDParticleType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDParticleType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType @ 1436cb910

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDSleepType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDSleepType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDSleepType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDConnectivityEdge @ 1436cb950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDConnectivityEdge(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDConnectivityEdge.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDConnectivityEdge.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDConnectivityEdge.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDConnectivityEdge.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags @ 1436cb9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDFRigidParticleControlFlags.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDFRigidParticleControlFlags.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDFRigidParticleControlFlags.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDFRigidParticleControlFlags.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDKinematicTarget @ 1436cba50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDKinematicTarget(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDKinematicTarget.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDKinematicTarget.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDKinematicTarget_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDKinematicTarget.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDKinematicTarget.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleBounds @ 1436cbad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleBounds(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleBounds.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleBounds.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleBounds_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleBounds.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleBounds.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleCluster @ 1436cbb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleCluster(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleCluster.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleCluster.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleCluster.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleCluster.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc @ 1436cbbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamicMisc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamicMisc.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamicMisc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamicMisc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleDynamics @ 1436cbc50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleDynamics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamics.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamics.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamics.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamics.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleMassProps @ 1436cbcd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleMassProps(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleMassProps.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleMassProps.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleMassProps.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleMassProps.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation @ 1436cbd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticlePositionRotation.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticlePositionRotation.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticlePositionRotation.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticlePositionRotation.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleVelocities @ 1436cbdd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleVelocities(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleVelocities.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleVelocities.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleVelocities.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleVelocities.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDVSmooth @ 1436cbe50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDVSmooth(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDVSmooth.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDVSmooth.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDVSmooth_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDVSmooth.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDVSmooth.InnerSingleton;
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

// EChaosVDParticleType_StaticEnum @ 1436cbed0

UEnum * __cdecl EChaosVDParticleType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType,(UObject *)pUVar1,
                       L"EChaosVDParticleType");
  }
  return Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton;
}

// EChaosVDSleepType_StaticEnum @ 1436cbf10

UEnum * __cdecl EChaosVDSleepType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType,(UObject *)pUVar1,
                       L"EChaosVDSleepType");
  }
  return Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton;
}

// NewStructOps @ 1436cbf50

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCharacterGroundConstraintSettingsDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraintSettingsDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraintSettingsDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraintSettingsDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraintSettingsDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDObjectStateType_StaticEnum @ 1436cbf90

UEnum * __cdecl EChaosVDObjectStateType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType,(UObject *)pUVar1,
                       L"EChaosVDObjectStateType");
  }
  return Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton;
}

// NewProp_bIsValid_SetBit @ 1436cbfd0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDTraceDetails_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewStructOps @ 1436cbfe0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDTraceDetails_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDTraceDetails,&UE::CoreUObject::Private::Construct<FChaosVDTraceDetails>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDTraceDetails>,&UE::CoreUObject::Private::Destruct<FChaosVDTraceDetails>,&UE::CoreUObject::Private::Copy<FChaosVDTraceDetails>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cc020

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleMetadata,&UE::CoreUObject::Private::Construct<FChaosVDParticleMetadata>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleMetadata>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleMetadata>,&UE::CoreUObject::Private::Copy<FChaosVDParticleMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cc230

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCharacterGroundConstraintDataDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraintDataDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraintDataDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraintDataDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraintDataDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasValidData_SetBit @ 1436cc270

void __cdecl
Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::NewProp_bHasValidData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 1436cc280

void * __cdecl Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDWrapperDataBase,&UE::CoreUObject::Private::Construct<FChaosVDWrapperDataBase>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDWrapperDataBase>,&UE::CoreUObject::Private::Destruct<FChaosVDWrapperDataBase>,&UE::CoreUObject::Private::Copy<FChaosVDWrapperDataBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436cc3a0

void * __thiscall
FChaosVDAABBTreeLeafDataWrapper::_scalar_deleting_destructor_
          (FChaosVDAABBTreeLeafDataWrapper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// NewStructOps @ 1436cc5a0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraintDataWrapperBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDConstraintDataWrapperBase,&UE::CoreUObject::Private::Construct<FChaosVDConstraintDataWrapperBase>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDConstraintDataWrapperBase>,&UE::CoreUObject::Private::Destruct<FChaosVDConstraintDataWrapperBase>,&UE::CoreUObject::Private::Copy<FChaosVDConstraintDataWrapperBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cc5e0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCharacterGroundConstraint,&UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraint>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraint>,&UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraint>,&UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bGravityEnabled_SetBit @ 1436cc690

void __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bGravityEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bCCDEnabled_SetBit @ 1436cc6a0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bCCDEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bOneWayInteractionEnabled_SetBit @ 1436cc6b0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::
NewProp_bOneWayInteractionEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bInertiaConditioningEnabled_SetBit @ 1436cc6c0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::
NewProp_bInertiaConditioningEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewProp_bMACDEnabled_SetBit @ 1436cc6d0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bMACDEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bPartialIslandSleepAllowed_SetBit @ 1436cc6e0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::
NewProp_bPartialIslandSleepAllowed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bGyroscopicTorqueEnabled_SetBit @ 1436cc6f0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::
NewProp_bGyroscopicTorqueEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewStructOps @ 1436cc700

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDFRigidParticleControlFlags,&UE::CoreUObject::Private::Construct<FChaosVDFRigidParticleControlFlags>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDFRigidParticleControlFlags>,&UE::CoreUObject::Private::Destruct<FChaosVDFRigidParticleControlFlags>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDFRigidParticleControlFlags>,&UE::CoreUObject::Private::Copy<FChaosVDFRigidParticleControlFlags>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436ccb00

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticlePositionRotation,&UE::CoreUObject::Private::Construct<FChaosVDParticlePositionRotation>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticlePositionRotation>,&UE::CoreUObject::Private::Destruct<FChaosVDParticlePositionRotation>,&UE::CoreUObject::Private::Copy<FChaosVDParticlePositionRotation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436ccfe0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleVelocities,&UE::CoreUObject::Private::Construct<FChaosVDParticleVelocities>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleVelocities>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleVelocities>,&UE::CoreUObject::Private::Copy<FChaosVDParticleVelocities>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cd240

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleBounds_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleBounds,&UE::CoreUObject::Private::Construct<FChaosVDParticleBounds>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleBounds>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleBounds>,&UE::CoreUObject::Private::Copy<FChaosVDParticleBounds>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cd3c0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleDynamics,&UE::CoreUObject::Private::Construct<FChaosVDParticleDynamics>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleDynamics>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleDynamics>,&UE::CoreUObject::Private::Copy<FChaosVDParticleDynamics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag @ 1436cd400

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType @ 1436cd440

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDContactPointType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDContactPointType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDContactPointType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType @ 1436cd480

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDContactShapesType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDContactShapesType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDContactShapesType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseType @ 1436cd4c0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDMidPhaseType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDMidPhaseType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDMidPhaseType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDCollisionChannelInfo @ 1436cd500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionChannelInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCollisionChannelInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCollisionFilterData @ 1436cd580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionFilterData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionFilterData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCollisionFilterData.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionFilterData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCollisionFilterData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCollisionMaterial @ 1436cd600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionMaterial(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionMaterial.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCollisionMaterial.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionMaterial.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCollisionMaterial.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDConstraint @ 1436cd680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDConstraint.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDConstraint.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDConstraint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDContactPoint @ 1436cd700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDContactPoint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDContactPoint.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDContactPoint.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDContactPoint.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FChaosVDContactPoint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDManifoldPoint @ 1436cd780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDManifoldPoint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDManifoldPoint.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDManifoldPoint.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDManifoldPoint.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FChaosVDManifoldPoint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDShapeCollisionData @ 1436cd800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDShapeCollisionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDShapeCollisionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDShapeCollisionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDShapeCollisionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDShapeCollisionData.InnerSingleton;
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

// EChaosVDContactShapesType_StaticEnum @ 1436cd880

UEnum * __cdecl EChaosVDContactShapesType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType,(UObject *)pUVar1,
                       L"EChaosVDContactShapesType");
  }
  return Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton;
}

// NewStructOps @ 1436cda90

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleMassProps,&UE::CoreUObject::Private::Construct<FChaosVDParticleMassProps>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleMassProps>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleMassProps>,&UE::CoreUObject::Private::Copy<FChaosVDParticleMassProps>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDContactPointType_StaticEnum @ 1436cdad0

UEnum * __cdecl EChaosVDContactPointType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType,(UObject *)pUVar1,
                       L"EChaosVDContactPointType");
  }
  return Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton;
}

// NewStructOps @ 1436cdb70

void * __cdecl Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDContactPoint,&UE::CoreUObject::Private::Construct<FChaosVDContactPoint>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDContactPoint>,&UE::CoreUObject::Private::Destruct<FChaosVDContactPoint>,&UE::CoreUObject::Private::Copy<FChaosVDContactPoint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDisabled_SetBit @ 1436cdbb0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_bDisabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewStructOps @ 1436cdbc0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleDynamicMisc,&UE::CoreUObject::Private::Construct<FChaosVDParticleDynamicMisc>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleDynamicMisc>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleDynamicMisc>,&UE::CoreUObject::Private::Copy<FChaosVDParticleDynamicMisc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDManifoldPointFlags_StaticEnum @ 1436cdc00

UEnum * __cdecl EChaosVDManifoldPointFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags,(UObject *)pUVar1
                       ,L"EChaosVDManifoldPointFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton;
}

// NewProp_bDisabled_SetBit @ 1436cdcb0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bDisabled_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bWasRestored_SetBit @ 1436cdcc0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasRestored_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// NewProp_bWasReplaced_SetBit @ 1436cdcd0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasReplaced_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 4;
  return;
}

// NewProp_bHasStaticFrictionAnchor_SetBit @ 1436cdce0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bHasStaticFrictionAnchor_SetBit
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 8;
  return;
}

// NewProp_bIsValid_SetBit @ 1436cdcf0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x10;
  return;
}

// NewProp_bInsideStaticFrictionCone_SetBit @ 1436cdd60

void __cdecl
Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bInsideStaticFrictionCone_SetBit
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x20;
  return;
}

// NewStructOps @ 1436cdd70

void * __cdecl Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDManifoldPoint,&UE::CoreUObject::Private::Construct<FChaosVDManifoldPoint>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDManifoldPoint>,&UE::CoreUObject::Private::Destruct<FChaosVDManifoldPoint>,&UE::CoreUObject::Private::Copy<FChaosVDManifoldPoint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cde90

void * __cdecl Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDConnectivityEdge,&UE::CoreUObject::Private::Construct<FChaosVDConnectivityEdge>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDConnectivityEdge>,&UE::CoreUObject::Private::Destruct<FChaosVDConnectivityEdge>,&UE::CoreUObject::Private::Copy<FChaosVDConnectivityEdge>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInternalCluster_SetBit @ 1436ce350

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bInternalCluster_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return;
}

// NewStructOps @ 1436ce360

void * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCollisionMaterial,&UE::CoreUObject::Private::Construct<FChaosVDCollisionMaterial>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionMaterial>,&UE::CoreUObject::Private::Destruct<FChaosVDCollisionMaterial>,&UE::CoreUObject::Private::Copy<FChaosVDCollisionMaterial>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsAnchored_SetBit @ 1436ce3e0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsAnchored_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// NewProp_bUnbreakable_SetBit @ 1436ce3f0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bUnbreakable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  return;
}

// NewProp_bIsChildToParentLocked_SetBit @ 1436ce400

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsChildToParentLocked_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xaa) = 1;
  return;
}

// NewStructOps @ 1436ce410

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleCluster,&UE::CoreUObject::Private::Construct<FChaosVDParticleCluster>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleCluster>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleCluster>,&UE::CoreUObject::Private::Copy<FChaosVDParticleCluster>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436ce450

void * __thiscall
FChaosVDDebugDrawShapeBase::_scalar_deleting_destructor_
          (FChaosVDDebugDrawShapeBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ce4c0

void * __thiscall
FChaosVDDebugDrawBoxDataWrapper::_scalar_deleting_destructor_
          (FChaosVDDebugDrawBoxDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ce530

void * __thiscall
FChaosVDDebugDrawSphereDataWrapper::_scalar_deleting_destructor_
          (FChaosVDDebugDrawSphereDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ce5a0

void * __thiscall
FChaosVDDebugDrawLineDataWrapper::_scalar_deleting_destructor_
          (FChaosVDDebugDrawLineDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ce610

void * __thiscall
FChaosVDDebugDrawImplicitObjectDataWrapper::_scalar_deleting_destructor_
          (FChaosVDDebugDrawImplicitObjectDataWrapper *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleContext @ 1436ce640

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleContext(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDParticleContext.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDParticleContext.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleContext_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDParticleContext.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase @ 1436ce6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawShapeBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawShapeBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawShapeBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawShapeBase.InnerSingleton;
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

// NewStructOps @ 1436ce740

void * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugShapeDataContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDDebugShapeDataContainer,&UE::CoreUObject::Private::Construct<FChaosVDDebugShapeDataContainer>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugShapeDataContainer>,&UE::CoreUObject::Private::Destruct<FChaosVDDebugShapeDataContainer>,&UE::CoreUObject::Private::Copy<FChaosVDDebugShapeDataContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDConstraintFlags_StaticEnum @ 1436ce780

UEnum * __cdecl EChaosVDConstraintFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags,(UObject *)pUVar1,
                       L"EChaosVDConstraintFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton;
}

// EChaosVDParticleContext_StaticEnum @ 1436ce8d0

UEnum * __cdecl EChaosVDParticleContext_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDParticleContext.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDParticleContext.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleContext,(UObject *)pUVar1,
                       L"EChaosVDParticleContext");
  }
  return Z_Registration_Info_UEnum_EChaosVDParticleContext.OuterSingleton;
}

// NewProp_bIsCurrent_SetBit @ 1436ce910

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsCurrent_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bDisabled_SetBit @ 1436ce920

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bDisabled_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// NewProp_bUseManifold_SetBit @ 1436ce930

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseManifold_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 4;
  return;
}

// NewProp_bUseIncrementalManifold_SetBit @ 1436ce940

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseIncrementalManifold_SetBit
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 8;
  return;
}

// NewProp_bCanRestoreManifold_SetBit @ 1436ce990

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCanRestoreManifold_SetBit
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x10;
  return;
}

// NewProp_bWasManifoldRestored_SetBit @ 1436ce9a0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bWasManifoldRestored_SetBit
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x20;
  return;
}

// EChaosVDKinematicTargetMode_StaticEnum @ 1436ce9b0

UEnum * __cdecl EChaosVDKinematicTargetMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDKinematicTargetMode,
                       (UObject *)pUVar1,L"EChaosVDKinematicTargetMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.OuterSingleton;
}

// NewProp_bIsQuadratic0_SetBit @ 1436ce9f0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic0_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x40;
  return;
}

// NewStructOps @ 1436cea00

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDMultiSolverDebugShapeDataContainer,&UE::CoreUObject::Private::Construct<FChaosVDMultiSolverDebugShapeDataContainer>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDMultiSolverDebugShapeDataContainer>,&UE::CoreUObject::Private::Destruct<FChaosVDMultiSolverDebugShapeDataContainer>,&UE::CoreUObject::Private::Copy<FChaosVDMultiSolverDebugShapeDataContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsQuadratic1_SetBit @ 1436cea40

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic1_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x80;
  return;
}

// NewProp_bIsProbe_SetBit @ 1436cea50

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsProbe_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 1;
  return;
}

// NewProp_bCCDEnabled_SetBit @ 1436cea60

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 2;
  return;
}

// NewProp_bCCDSweepEnabled_SetBit @ 1436cea70

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDSweepEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 4;
  return;
}

// NewProp_bModifierApplied_SetBit @ 1436cea80

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bModifierApplied_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 8;
  return;
}

// NewProp_bMaterialSet_SetBit @ 1436cea90

void __cdecl
Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bMaterialSet_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 0x10;
  return;
}

// NewStructOps @ 1436ceae0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDKinematicTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDKinematicTarget,&UE::CoreUObject::Private::Construct<FChaosVDKinematicTarget>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDKinematicTarget>,&UE::CoreUObject::Private::Destruct<FChaosVDKinematicTarget>,&UE::CoreUObject::Private::Copy<FChaosVDKinematicTarget>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cec40

void * __cdecl Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDConstraint,&UE::CoreUObject::Private::Construct<FChaosVDConstraint>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDConstraint>,&UE::CoreUObject::Private::Destruct<FChaosVDConstraint>,&UE::CoreUObject::Private::Copy<FChaosVDConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436ced90

void * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDDebugDrawShapeBase,&UE::CoreUObject::Private::Construct<FChaosVDDebugDrawShapeBase>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawShapeBase>,&UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawShapeBase>,&UE::CoreUObject::Private::Copy<FChaosVDDebugDrawShapeBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cf000

void * __cdecl Z_Construct_UScriptStruct_FChaosVDVSmooth_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDVSmooth,&UE::CoreUObject::Private::Construct<FChaosVDVSmooth>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDVSmooth>,&UE::CoreUObject::Private::Destruct<FChaosVDVSmooth>,&UE::CoreUObject::Private::Copy<FChaosVDVSmooth>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cf040

void * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDDebugDrawBoxDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDDebugDrawBoxDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawBoxDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawBoxDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDDebugDrawBoxDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cf110

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticleDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDParticleDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDParticleDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDParticleDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDMidPhaseFlags_StaticEnum @ 1436cf150

UEnum * __cdecl EChaosVDMidPhaseFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags,(UObject *)pUVar1,
                       L"EChaosVDMidPhaseFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton;
}

// NewStructOps @ 1436cf1f0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDDebugDrawSphereDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDDebugDrawSphereDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawSphereDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawSphereDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDDebugDrawSphereDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDMidPhaseType_StaticEnum @ 1436cf230

UEnum * __cdecl EChaosVDMidPhaseType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDMidPhaseType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDMidPhaseType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseType,(UObject *)pUVar1,
                       L"EChaosVDMidPhaseType");
  }
  return Z_Registration_Info_UEnum_EChaosVDMidPhaseType.OuterSingleton;
}

// NewProp_bIsActive_SetBit @ 1436cf2e0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsActive_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) | 1;
  return;
}

// NewProp_bIsCCD_SetBit @ 1436cf540

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCD_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) | 2;
  return;
}

// NewProp_bIsCCDActive_SetBit @ 1436cf550

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCDActive_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) | 4;
  return;
}

// NewProp_bIsSleeping_SetBit @ 1436cf560

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsSleeping_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) | 8;
  return;
}

// NewProp_bIsModified_SetBit @ 1436cf570

void __cdecl
Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsModified_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) | 0x10;
  return;
}

// NewStructOps @ 1436cf690

void * __cdecl Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDParticlePairMidPhase,&UE::CoreUObject::Private::Construct<FChaosVDParticlePairMidPhase>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDParticlePairMidPhase>,&UE::CoreUObject::Private::Destruct<FChaosVDParticlePairMidPhase>,&UE::CoreUObject::Private::Copy<FChaosVDParticlePairMidPhase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsArrow_SetBit @ 1436cf830

void __cdecl
Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_bIsArrow_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewStructOps @ 1436cf840

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDDebugDrawLineDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDDebugDrawLineDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawLineDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawLineDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDDebugDrawLineDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDCollisionTraceFlag_StaticEnum @ 1436cf9b0

UEnum * __cdecl EChaosVDCollisionTraceFlag_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag,(UObject *)pUVar1
                       ,L"EChaosVDCollisionTraceFlag");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton;
}

// NewStructOps @ 1436cf9f0

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDDebugDrawImplicitObjectDataWrapper,&UE::CoreUObject::Private::Construct<FChaosVDDebugDrawImplicitObjectDataWrapper>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawImplicitObjectDataWrapper>,&UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawImplicitObjectDataWrapper>,&UE::CoreUObject::Private::Copy<FChaosVDDebugDrawImplicitObjectDataWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436cfa30

void * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCollisionFilterData,&UE::CoreUObject::Private::Construct<FChaosVDCollisionFilterData>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionFilterData>,&UE::CoreUObject::Private::Destruct<FChaosVDCollisionFilterData>,&UE::CoreUObject::Private::Copy<FChaosVDCollisionFilterData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType @ 1436cfa70

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode @ 1436cfab0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType @ 1436cfaf0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDSceneQueryType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType @ 1436cfb30

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQVisitRejectReason @ 1436cfb70

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQVisitRejectReason(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQVisitRejectReason_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams @ 1436cfbb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionObjectQueryParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCollisionObjectQueryParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionObjectQueryParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCollisionObjectQueryParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams @ 1436cfc30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionQueryParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCollisionQueryParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionQueryParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCollisionQueryParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams @ 1436cfcb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionResponseParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCollisionResponseParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionResponseParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCollisionResponseParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDQueryFastData @ 1436cfd30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryFastData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryFastData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDQueryFastData.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryFastData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FChaosVDQueryFastData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDQueryHitData @ 1436cfdb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryHitData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryHitData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDQueryHitData.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryHitData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FChaosVDQueryHitData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDQueryVisitStep @ 1436cfe30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryVisitStep(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryVisitStep.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDQueryVisitStep.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryVisitStep.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDQueryVisitStep.InnerSingleton;
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

// EChaosVDSceneQueryType_StaticEnum @ 1436cfeb0

UEnum * __cdecl EChaosVDSceneQueryType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType,(UObject *)pUVar1,
                       L"EChaosVDSceneQueryType");
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton;
}

// EChaosVDSceneQueryMode_StaticEnum @ 1436cff50

UEnum * __cdecl EChaosVDSceneQueryMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode,(UObject *)pUVar1,
                       L"EChaosVDSceneQueryMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton;
}

// NewStructOps @ 1436cffc0

void * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCollisionResponseParams,&UE::CoreUObject::Private::Construct<FChaosVDCollisionResponseParams>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionResponseParams>,&UE::CoreUObject::Private::Destruct<FChaosVDCollisionResponseParams>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDCollisionResponseParams>,&UE::CoreUObject::Private::Copy<FChaosVDCollisionResponseParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EChaosVDCollisionShapeDataFlags_StaticEnum @ 1436d0080

UEnum * __cdecl EChaosVDCollisionShapeDataFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags,
                       (UObject *)pUVar1,L"EChaosVDCollisionShapeDataFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton;
}

// NewProp_bSimCollision_SetBit @ 1436d00c0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bSimCollision_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) | 1;
  return;
}

// NewProp_bQueryCollision_SetBit @ 1436d00d0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bQueryCollision_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) | 2;
  return;
}

// NewProp_bIsProbe_SetBit @ 1436d0170

void __cdecl
Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bIsProbe_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) | 4;
  return;
}

// NewProp_bIsComplex_SetBit @ 1436d01f0

void __cdecl
Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bIsComplex_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bIsValid_SetBit @ 1436d0210

void __cdecl
Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 1436d0220

void * __cdecl Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDShapeCollisionData,&UE::CoreUObject::Private::Construct<FChaosVDShapeCollisionData>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDShapeCollisionData>,&UE::CoreUObject::Private::Destruct<FChaosVDShapeCollisionData>,&UE::CoreUObject::Private::Copy<FChaosVDShapeCollisionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1436d0260

void * __cdecl
Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosVDCollisionObjectQueryParams,&UE::CoreUObject::Private::Construct<FChaosVDCollisionObjectQueryParams>,&UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionObjectQueryParams>,&UE::CoreUObject::Private::Destruct<FChaosVDCollisionObjectQueryParams>,&UE::CoreUObject::Private::SerializeArchive<FChaosVDCollisionObjectQueryParams>,&UE::CoreUObject::Private::Copy<FChaosVDCollisionObjectQueryParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// operator<<<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 1436d03f0

FArchive * __cdecl
operator<<<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<unsigned_char> FVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  ForElementType<unsigned_char> FVar7;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1000001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_char>)param_2;
        if (FVar3 != (ForElementType<unsigned_char>)0x0) {
          FVar7 = FVar3;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar7,(longlong)param_2->ArrayNum);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar4)();
        return pFVar6;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_> @ 1436d0400

FArchive * __cdecl
operator<<<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x58);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FChaosVDAABBTreeLeafDataWrapper,int>
                ((FChaosVDAABBTreeLeafDataWrapper *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2e8bb)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = uVar10;
          uVar12 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar12) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data;
              operator<<(param_1,(bool *)(pFVar9 + uVar11 + 8));
              if (pFVar9[uVar11 + 8] != (FScriptContainerElement)0x0) {
                TArrayPrivateFriend::
                Serialize<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>
                          (param_1,(TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>
                                    *)(pFVar9 + uVar11 + 0x10));
                UE::Math::operator<<(param_1,(TBox<double> *)(pFVar9 + uVar11 + 0x20));
              }
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar11 = uVar11 + 0x58;
              uVar12 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x858,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x58;
              DefaultConstructItems<FChaosVDAABBTreeLeafDataWrapper,int>(pFVar9,1);
              operator<<(param_1,(bool *)(pFVar9 + 8));
              if (pFVar9[8] != (FScriptContainerElement)0x0) {
                TArrayPrivateFriend::
                Serialize<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>
                          (param_1,(TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>
                                    *)(pFVar9 + 0x10));
                UE::Math::operator<<(param_1,(TBox<double> *)(pFVar9 + 0x20));
              }
              uVar12 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar12;
            } while ((int)uVar12 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_> @ 1436d0410

FArchive * __cdecl
operator<<<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChaosVDAABBTreeNodeDataWrapper *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x90);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1c71d)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              FChaosVDAABBTreeNodeDataWrapper::Serialize
                        ((FChaosVDAABBTreeNodeDataWrapper *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x90),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x890,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FChaosVDAABBTreeNodeDataWrapper *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x90);
              DefaultConstructItems<FChaosVDAABBTreeNodeDataWrapper,int>(this,1);
              FChaosVDAABBTreeNodeDataWrapper::Serialize(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_> @ 1436d0420

FArchive * __cdecl
operator<<<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChaosVDAABBTreePayloadBoundsElement *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x88);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1e1e2)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FChaosVDAABBTreePayloadBoundsElement *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x88));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x888,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChaosVDAABBTreePayloadBoundsElement *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x88);
              DefaultConstructItems<FChaosVDAABBTreePayloadBoundsElement,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> @ 1436d0430

FArchive * __cdecl
operator<<<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChaosVDBVCellElementDataWrapper *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x68);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x27628)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FChaosVDBVCellElementDataWrapper *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x68));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x868,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChaosVDBVCellElementDataWrapper *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x68);
              DefaultConstructItems<FChaosVDBVCellElementDataWrapper,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_> @ 1436d0440

FArchive * __cdecl
operator<<<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChaosVDBoundingVolumeDataWrapper *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FChaosVDBoundingVolumeDataWrapper,int>
                ((FChaosVDBoundingVolumeDataWrapper *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FChaosVDBoundingVolumeDataWrapper *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChaosVDBoundingVolumeDataWrapper *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FChaosVDBoundingVolumeDataWrapper,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> @ 1436d0450

FArchive * __cdecl
operator<<<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FChaosVDConnectivityEdge *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<(param_1,(FChaosVDConnectivityEdge *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
          ;
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FChaosVDConnectivityEdge *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8);
              DefaultConstructItems<FChaosVDConnectivityEdge,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDConstraint,TSizedDefaultAllocator<32>_> @ 1436d0460

FArchive * __cdecl
operator<<<FChaosVDConstraint,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FChaosVDConstraint,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChaosVDConstraint *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x280);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FChaosVDConstraint,int>
                ((FChaosVDConstraint *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x280,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x6667)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              FChaosVDConstraint::Serialize
                        ((FChaosVDConstraint *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x280),param_1)
              ;
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FChaosVDConstraint,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x280,0x10,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FChaosVDConstraint *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x280);
              DefaultConstructItems<FChaosVDConstraint,int>(this,1);
              FChaosVDConstraint::Serialize(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_> @ 1436d0470

FArchive * __cdecl
operator<<<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChaosVDManifoldPoint *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x130);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xd795)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              FChaosVDManifoldPoint::Serialize
                        ((FChaosVDManifoldPoint *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x130),param_1)
              ;
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x130,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FChaosVDManifoldPoint *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x130);
              DefaultConstructItems<FChaosVDManifoldPoint,int>(this,1);
              FChaosVDManifoldPoint::Serialize(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_> @ 1436d0480

FArchive * __cdecl
operator<<<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChaosVDShapeCollisionData *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x2c);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x5d175)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              FChaosVDShapeCollisionData::Serialize
                        ((FChaosVDShapeCollisionData *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x2c),param_1);
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x42c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FChaosVDShapeCollisionData *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x2c);
              DefaultConstructItems<FChaosVDShapeCollisionData,int>(this,1);
              FChaosVDShapeCollisionData::Serialize(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1436d0490

FArchive * __cdecl
operator<<<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            TArrayPrivateFriend::
            Serialize<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>
                                *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10)
                      );
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          TArrayPrivateFriend::
          Serialize<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ConstructItems<FChaosVDAABBTreeLeafDataWrapper,FChaosVDAABBTreeLeafDataWrapper,int> @ 1436d09c0

void __cdecl
ConstructItems<FChaosVDAABBTreeLeafDataWrapper,FChaosVDAABBTreeLeafDataWrapper,int>
          (void *param_1,FChaosVDAABBTreeLeafDataWrapper *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  uchar *puVar2;
  int iVar3;
  FChaosVDAABBTreePayloadBoundsElement *pFVar4;
  undefined8 uVar5;
  double dVar6;
  int *piVar7;
  longlong *plVar8;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0x1c);
    plVar8 = &param_2->_padding_;
    do {
      *(undefined ***)((longlong)plVar8 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           &___7FChaosVDWrapperDataBase__6B_;
      pFVar1 = (ForAnyElementType *)(piVar7 + -3);
      *(char *)(piVar7 + -5) = (char)*plVar8;
      *(undefined ***)((longlong)plVar8 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           &___7FChaosVDAABBTreeLeafDataWrapper__6B_;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(plVar8 + 2);
      pFVar4 = (FChaosVDAABBTreePayloadBoundsElement *)
               (((TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_> *)
                (plVar8 + 1))->AllocatorInstance).Data;
      piVar7[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,iVar3,0,pFVar1,iVar3,piVar7);
        ConstructItems<FChaosVDAABBTreePayloadBoundsElement,FChaosVDAABBTreePayloadBoundsElement,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
      uVar5 = plVar8[4];
      *(double *)(piVar7 + 1) = (((TBox<double> *)(plVar8 + 3))->Min).field0_0x0._s_0.X;
      *(undefined8 *)(piVar7 + 3) = uVar5;
      dVar6 = (((TVector<double> *)(plVar8 + 6))->field0_0x0)._s_0.X;
      *(longlong *)(piVar7 + 5) = plVar8[5];
      *(double *)(piVar7 + 7) = dVar6;
      uVar5 = plVar8[8];
      *(longlong *)(piVar7 + 9) = plVar8[7];
      *(undefined8 *)(piVar7 + 0xb) = uVar5;
      puVar2 = (uchar *)(plVar8 + 9);
      plVar8 = plVar8 + 0xb;
      *(undefined8 *)(piVar7 + 0xd) = *(undefined8 *)puVar2;
      piVar7 = piVar7 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChaosVDAABBTreeNodeDataWrapper,FChaosVDAABBTreeNodeDataWrapper,int> @ 1436d0ae0

void __cdecl
ConstructItems<FChaosVDAABBTreeNodeDataWrapper,FChaosVDAABBTreeNodeDataWrapper,int>
          (void *param_1,FChaosVDAABBTreeNodeDataWrapper *param_2,int param_3)

{
  double dVar1;
  TBox<double> *pTVar2;
  byte bVar3;
  double *pdVar4;
  
  if (param_3 != 0) {
    pTVar2 = param_2->ChildrenBounds;
    pdVar4 = (double *)((longlong)param_1 + 0x10);
    do {
      bVar3 = *(byte *)((longlong)pdVar4 + 0x7c);
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FChaosVDWrapperDataBase__6B_;
      *(undefined1 *)(pdVar4 + -1) = *(undefined1 *)((longlong)(pTVar2 + -1) + 0x30);
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
      dVar1 = (pTVar2->Min).field0_0x0._s_0.Y;
      *pdVar4 = (pTVar2->Min).field0_0x0._s_0.X;
      pdVar4[1] = dVar1;
      dVar1 = (pTVar2->Max).field0_0x0._s_0.X;
      pdVar4[2] = (pTVar2->Min).field0_0x0._s_0.Z;
      pdVar4[3] = dVar1;
      dVar1 = (pTVar2->Max).field0_0x0._s_0.Z;
      pdVar4[4] = (pTVar2->Max).field0_0x0._s_0.Y;
      pdVar4[5] = dVar1;
      dVar1 = pTVar2[1].Min.field0_0x0._s_0.X;
      pdVar4[6] = *(double *)&pTVar2->IsValid;
      pdVar4[7] = dVar1;
      dVar1 = pTVar2[1].Min.field0_0x0._s_0.Z;
      pdVar4[8] = pTVar2[1].Min.field0_0x0._s_0.Y;
      pdVar4[9] = dVar1;
      dVar1 = pTVar2[1].Max.field0_0x0._s_0.Y;
      pdVar4[10] = pTVar2[1].Max.field0_0x0._s_0.X;
      pdVar4[0xb] = dVar1;
      dVar1 = *(double *)&pTVar2[1].IsValid;
      pdVar4[0xc] = pTVar2[1].Max.field0_0x0._s_0.Z;
      pdVar4[0xd] = dVar1;
      pdVar4[0xe] = *(double *)(pTVar2 + 2);
      *(int *)(pdVar4 + 0xf) = *(int *)((longlong)(pTVar2 + 2) + 8);
      bVar3 = (bVar3 ^ ZPULL(*(undefined1 *)((longlong)(pTVar2 + 2) + 0xc),0,1)) & 1 ^
              *(byte *)((longlong)pdVar4 + 0x7c);
      *(byte *)((longlong)pdVar4 + 0x7c) = bVar3;
      *(byte *)((longlong)pdVar4 + 0x7c) =
           (bVar3 ^ *(undefined1 *)((longlong)(pTVar2 + 2) + 0xc)) & 2 ^ bVar3;
      param_3 = param_3 + -1;
      pTVar2 = (TBox<double> *)((longlong)(pTVar2 + 2) + 0x20);
      pdVar4 = pdVar4 + 0x12;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChaosVDAABBTreePayloadBoundsElement,FChaosVDAABBTreePayloadBoundsElement,int> @ 1436d0bc0

void __cdecl
ConstructItems<FChaosVDAABBTreePayloadBoundsElement,FChaosVDAABBTreePayloadBoundsElement,int>
          (void *param_1,FChaosVDAABBTreePayloadBoundsElement *param_2,int param_3)

{
  undefined8 uVar1;
  double dVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = &param_2->ParticleIndex;
    piVar4 = (int *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)piVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FChaosVDWrapperDataBase__6B_;
      *(char *)(piVar4 + -2) = (char)*(longlong *)(piVar3 + -2);
      *(undefined ***)((longlong)piVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FChaosVDAABBTreePayloadBoundsElement__6B_;
      *piVar4 = *piVar3;
      uVar1 = *(undefined8 *)(piVar3 + 4);
      *(double *)(piVar4 + 2) = (((TBox<double> *)(piVar3 + 2))->Min).field0_0x0._s_0.X;
      *(undefined8 *)(piVar4 + 4) = uVar1;
      dVar2 = (((TVector<double> *)(piVar3 + 8))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar4 + 6) = *(undefined8 *)(piVar3 + 6);
      *(double *)(piVar4 + 8) = dVar2;
      uVar1 = *(undefined8 *)(piVar3 + 0xc);
      *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar3 + 10);
      *(undefined8 *)(piVar4 + 0xc) = uVar1;
      *(undefined8 *)(piVar4 + 0xe) = *(undefined8 *)(piVar3 + 0xe);
      uVar1 = *(undefined8 *)(piVar3 + 0x12);
      *(double *)(piVar4 + 0x10) = (((TBox<double> *)(piVar3 + 0x10))->Min).field0_0x0._s_0.X;
      *(undefined8 *)(piVar4 + 0x12) = uVar1;
      dVar2 = (((TVector<double> *)(piVar3 + 0x16))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(piVar3 + 0x14);
      *(double *)(piVar4 + 0x16) = dVar2;
      uVar1 = *(undefined8 *)(piVar3 + 0x1a);
      *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(piVar3 + 0x18);
      *(undefined8 *)(piVar4 + 0x1a) = uVar1;
      *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(piVar3 + 0x1c);
      param_3 = param_3 + -1;
      piVar3 = piVar3 + 0x22;
      piVar4 = piVar4 + 0x22;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChaosVDBVCellElementDataWrapper,FChaosVDBVCellElementDataWrapper,int> @ 1436d0c80

void __cdecl
ConstructItems<FChaosVDBVCellElementDataWrapper,FChaosVDBVCellElementDataWrapper,int>
          (void *param_1,FChaosVDBVCellElementDataWrapper *param_2,int param_3)

{
  double dVar1;
  TBox<double> *pTVar2;
  double *pdVar3;
  
  if (param_3 != 0) {
    pTVar2 = &param_2->Bounds;
    pdVar3 = (double *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FChaosVDWrapperDataBase__6B_;
      *(undefined1 *)(pdVar3 + -1) = *(undefined1 *)((longlong)(pTVar2 + -1) + 0x30);
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FChaosVDBVCellElementDataWrapper__6B_;
      dVar1 = (pTVar2->Min).field0_0x0._s_0.Y;
      *pdVar3 = (pTVar2->Min).field0_0x0._s_0.X;
      pdVar3[1] = dVar1;
      dVar1 = (pTVar2->Max).field0_0x0._s_0.X;
      pdVar3[2] = (pTVar2->Min).field0_0x0._s_0.Z;
      pdVar3[3] = dVar1;
      dVar1 = (pTVar2->Max).field0_0x0._s_0.Z;
      pdVar3[4] = (pTVar2->Max).field0_0x0._s_0.Y;
      pdVar3[5] = dVar1;
      pdVar3[6] = *(double *)&pTVar2->IsValid;
      *(int *)(pdVar3 + 7) = *(int *)(pTVar2 + 1);
      *(undefined8 *)((longlong)pdVar3 + 0x3c) =
           *(undefined8 *)&((TIntVector3<int> *)((longlong)(pTVar2 + 1) + 4))->field0_0x0;
      *(undefined4 *)((longlong)pdVar3 + 0x44) = *(undefined4 *)((longlong)(pTVar2 + 1) + 0xc);
      pdVar3[9] = *(double *)&((TIntVector3<int> *)((longlong)(pTVar2 + 1) + 0x10))->field0_0x0;
      *(undefined4 *)(pdVar3 + 10) = *(undefined4 *)((longlong)(pTVar2 + 1) + 0x18);
      param_3 = param_3 + -1;
      pTVar2 = (TBox<double> *)((longlong)(pTVar2 + 1) + 0x30);
      pdVar3 = pdVar3 + 0xd;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChaosVDBoundingVolumeDataWrapper,FChaosVDBoundingVolumeDataWrapper,int> @ 1436d0d30

void __cdecl
ConstructItems<FChaosVDBoundingVolumeDataWrapper,FChaosVDBoundingVolumeDataWrapper,int>
          (void *param_1,FChaosVDBoundingVolumeDataWrapper *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  double *pdVar2;
  int iVar3;
  TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  
  if (param_3 != 0) {
    plVar5 = &param_2->_padding_;
    puVar6 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *(undefined ***)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)plVar5) =
           &___7FChaosVDWrapperDataBase__6B_;
      pFVar1 = (ForAnyElementType *)(puVar6 + 0x20);
      *puVar6 = (char)*plVar5;
      *(undefined ***)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)plVar5) =
           &___7FChaosVDAccelerationStructureBase__6B_;
      *(int *)(puVar6 + 8) = (int)plVar5[1];
      *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
      *(undefined ***)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)plVar5) =
           &___7FChaosVDBoundingVolumeDataWrapper__6B_;
      *(undefined8 *)(puVar6 + 0x10) =
           *(undefined8 *)&((TIntVector3<int> *)(plVar5 + 2))->field0_0x0;
      *(undefined4 *)(puVar6 + 0x18) = *(undefined4 *)(plVar5 + 3);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(plVar5 + 5);
      pTVar4 = (TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
               (((TArray<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(plVar5 + 4))->AllocatorInstance).Data;
      *(int *)(puVar6 + 0x28) = iVar3;
      if (iVar3 == 0) {
        *(int *)(puVar6 + 0x2c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,pFVar1,iVar3,(int *)(puVar6 + 0x2c));
        ConstructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
                  (pFVar1->Data,pTVar4,iVar3);
      }
      pdVar2 = (double *)(plVar5 + 6);
      plVar5 = plVar5 + 8;
      *(double *)(puVar6 + 0x30) = *pdVar2;
      puVar6 = puVar6 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChaosVDConstraint,FChaosVDConstraint,int> @ 1436d0e70

void __cdecl
ConstructItems<FChaosVDConstraint,FChaosVDConstraint,int>
          (void *param_1,FChaosVDConstraint *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FChaosVDConstraint::FChaosVDConstraint
                ((FChaosVDConstraint *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FChaosVDQueryVisitStep,FChaosVDQueryVisitStep,int> @ 1436d0ec0

void __cdecl
ConstructItems<FChaosVDQueryVisitStep,FChaosVDQueryVisitStep,int>
          (void *param_1,FChaosVDQueryVisitStep *param_2,int param_3)

{
  int *piVar1;
  double dVar2;
  undefined8 uVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar6 = &param_2->OwningQueryID;
    piVar5 = (int *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)piVar6) =
           &___7FChaosVDWrapperDataBase__6B_;
      *(char *)(piVar5 + -2) = (char)*(longlong *)(piVar6 + -2);
      *(undefined ***)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)piVar6) =
           &___7FChaosVDQueryVisitStep__6B_;
      *piVar5 = *piVar6;
      piVar5[1] = piVar6[1];
      piVar5[2] = piVar6[2];
      piVar5[3] = piVar6[3];
      dVar2 = *(double *)(piVar6 + 6);
      *(double *)(piVar5 + 4) = (((TTransform<double> *)(piVar6 + 4))->Rotation).XY.m128d_f64[0];
      *(double *)(piVar5 + 6) = dVar2;
      dVar2 = *(double *)(piVar6 + 10);
      *(double *)(piVar5 + 8) = ((__m128d *)(piVar6 + 8))->m128d_f64[0];
      *(double *)(piVar5 + 10) = dVar2;
      dVar2 = *(double *)(piVar6 + 0xe);
      *(double *)(piVar5 + 0xc) = (((VectorRegister4Double *)(piVar6 + 0xc))->XY).m128d_f64[0];
      *(double *)(piVar5 + 0xe) = dVar2;
      dVar2 = *(double *)(piVar6 + 0x12);
      *(double *)(piVar5 + 0x10) = ((__m128d *)(piVar6 + 0x10))->m128d_f64[0];
      *(double *)(piVar5 + 0x12) = dVar2;
      dVar2 = *(double *)(piVar6 + 0x16);
      *(double *)(piVar5 + 0x14) = (((VectorRegister4Double *)(piVar6 + 0x14))->XY).m128d_f64[0];
      *(double *)(piVar5 + 0x16) = dVar2;
      dVar2 = *(double *)(piVar6 + 0x1a);
      *(double *)(piVar5 + 0x18) = ((__m128d *)(piVar6 + 0x18))->m128d_f64[0];
      *(double *)(piVar5 + 0x1a) = dVar2;
      *(undefined ***)(piVar5 + 0x1c) = &___7FChaosVDWrapperDataBase__6B_;
      *(char *)(piVar5 + 0x1e) = (char)*(longlong *)(piVar6 + 0x1e);
      *(undefined ***)(piVar5 + 0x1c) = &___7FChaosVDQueryFastData__6B_;
      uVar3 = *(undefined8 *)(piVar6 + 0x22);
      *(double *)(piVar5 + 0x20) = (((TVector<double> *)(piVar6 + 0x20))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar5 + 0x22) = uVar3;
      *(undefined8 *)(piVar5 + 0x24) = *(undefined8 *)(piVar6 + 0x24);
      uVar3 = *(undefined8 *)(piVar6 + 0x28);
      *(double *)(piVar5 + 0x26) = (((TVector<double> *)(piVar6 + 0x26))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar5 + 0x28) = uVar3;
      *(undefined8 *)(piVar5 + 0x2a) = *(undefined8 *)(piVar6 + 0x2a);
      *(double *)(piVar5 + 0x2c) = *(double *)(piVar6 + 0x2c);
      *(double *)(piVar5 + 0x2e) = *(double *)(piVar6 + 0x2e);
      bVar4 = (*(byte *)(piVar5 + 0x30) ^ *(byte *)(piVar6 + 0x30)) & 1 ^ *(byte *)(piVar5 + 0x30);
      *(byte *)(piVar5 + 0x30) = bVar4;
      bVar4 = (bVar4 ^ *(byte *)(piVar6 + 0x30)) & 2 ^ bVar4;
      *(byte *)(piVar5 + 0x30) = bVar4;
      *(byte *)(piVar5 + 0x30) = (bVar4 ^ *(byte *)(piVar6 + 0x30)) & 4 ^ bVar4;
      piVar5[0x32] = piVar6[0x32];
      *(undefined ***)(piVar5 + 0x34) = &___7FChaosVDWrapperDataBase__6B_;
      *(char *)(piVar5 + 0x36) = (char)*(longlong *)(piVar6 + 0x36);
      *(undefined ***)(piVar5 + 0x34) = &___7FChaosVDQueryHitData__6B_;
      piVar5[0x38] = piVar6[0x38];
      piVar5[0x39] = piVar6[0x39];
      *(ushort *)(piVar5 + 0x3a) = *(ushort *)(piVar6 + 0x3a);
      uVar3 = *(undefined8 *)(piVar6 + 0x3e);
      *(double *)(piVar5 + 0x3c) = (((TVector<double> *)(piVar6 + 0x3c))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar5 + 0x3e) = uVar3;
      *(undefined8 *)(piVar5 + 0x40) = *(undefined8 *)(piVar6 + 0x40);
      uVar3 = *(undefined8 *)(piVar6 + 0x44);
      *(double *)(piVar5 + 0x42) = (((TVector<double> *)(piVar6 + 0x42))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar5 + 0x44) = uVar3;
      *(undefined8 *)(piVar5 + 0x46) = *(undefined8 *)(piVar6 + 0x46);
      uVar3 = *(undefined8 *)(piVar6 + 0x4a);
      *(double *)(piVar5 + 0x48) = (((TVector<double> *)(piVar6 + 0x48))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar5 + 0x4a) = uVar3;
      *(undefined8 *)(piVar5 + 0x4c) = *(undefined8 *)(piVar6 + 0x4c);
      piVar5[0x4e] = piVar6[0x4e];
      piVar1 = piVar6 + 0x4f;
      piVar6 = piVar6 + 0x54;
      piVar5[0x4f] = *piVar1;
      param_3 = param_3 + -1;
      piVar5 = piVar5 + 0x54;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int> @ 1436d1150

void __cdecl
ConstructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,
          TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FChaosVDBVCellElementDataWrapper *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar4 + 8 + (longlong)param_1);
      pFVar3 = *(FChaosVDBVCellElementDataWrapper **)(lVar4 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,iVar2,0,param_1,iVar2,piVar1);
        ConstructItems<FChaosVDBVCellElementDataWrapper,FChaosVDBVCellElementDataWrapper,int>
                  (((ForAnyElementType *)param_1)->Data,pFVar3,iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,int> @ 1436d1200

void __cdecl
ConstructItems<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,int>
          (void *param_1,TSharedPtr<FChaosVDAABBTreeDataWrapper,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FChaosVDAABBTreeDataWrapper **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int> @ 1436d1240

void __cdecl
ConstructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int>
          (void *param_1,TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FChaosVDDebugDrawBoxDataWrapper **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int> @ 1436d1280

void __cdecl
ConstructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int>
          (void *param_1,TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FChaosVDDebugDrawImplicitObjectDataWrapper **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int> @ 1436d12c0

void __cdecl
ConstructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int>
          (void *param_1,TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FChaosVDDebugDrawLineDataWrapper **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int> @ 1436d1300

void __cdecl
ConstructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int>
          (void *param_1,TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FChaosVDDebugDrawSphereDataWrapper **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DefaultConstructItems<FChaosVDAABBTreeLeafDataWrapper,int> @ 1436d1340

void __cdecl DefaultConstructItems<FChaosVDAABBTreeLeafDataWrapper,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -1) = 0;
      puVar1[-2] = &___7FChaosVDAABBTreeLeafDataWrapper__6B_;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 8) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x41) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x45) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x47) = 0;
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChaosVDAABBTreeNodeDataWrapper,int> @ 1436d13a0

void __cdecl DefaultConstructItems<FChaosVDAABBTreeNodeDataWrapper,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -1) = 0;
      puVar1[-2] = &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x35) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x37) = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x69) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x6d) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x6f) = 0;
      *(byte *)((longlong)puVar1 + 0x7c) = *(byte *)((longlong)puVar1 + 0x7c) & 0xfc;
      puVar1[0xe] = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChaosVDAABBTreePayloadBoundsElement,int> @ 1436d1440

void __cdecl
DefaultConstructItems<FChaosVDAABBTreePayloadBoundsElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -2) = 0;
      *(undefined ***)(puVar1 + -4) = &___7FChaosVDAABBTreePayloadBoundsElement__6B_;
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined1 *)(puVar1 + 0xe) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x39) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x3d) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x3f) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x1a) = 0;
      *(undefined1 *)(puVar1 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x71) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x75) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x77) = 0;
      puVar1 = puVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChaosVDBVCellElementDataWrapper,int> @ 1436d14d0

void __cdecl DefaultConstructItems<FChaosVDBVCellElementDataWrapper,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -1) = 0;
      puVar1[-2] = &___7FChaosVDBVCellElementDataWrapper__6B_;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x35) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x37) = 0;
      *(undefined4 *)(puVar1 + 7) = 0xffffffff;
      *(undefined8 *)((longlong)puVar1 + 0x3c) =
           UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      *(int *)((longlong)puVar1 + 0x44) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      puVar1[9] = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      *(int *)(puVar1 + 10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0xd;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChaosVDBoundingVolumeDataWrapper,int> @ 1436d1560

void __cdecl DefaultConstructItems<FChaosVDBoundingVolumeDataWrapper,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      puVar1[1] = 4;
      *(undefined ***)(puVar1 + -4) = &___7FChaosVDBoundingVolumeDataWrapper__6B_;
      *(undefined8 *)(puVar1 + 2) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      puVar1[4] = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x10;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChaosVDConnectivityEdge,int> @ 1436d15c0

void __cdecl DefaultConstructItems<FChaosVDConnectivityEdge,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FChaosVDConstraint,int> @ 1436d15f0

void __cdecl DefaultConstructItems<FChaosVDConstraint,int>(void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 1);
    do {
      pbVar1[3] = 0xff;
      pbVar1[4] = 0xff;
      pbVar1[5] = 0xff;
      pbVar1[6] = 0xff;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1[0x10] = 0;
      pbVar1[0x11] = 0;
      pbVar1[0x12] = 0;
      pbVar1[0x13] = 0;
      pbVar1[0x14] = 0;
      pbVar1[0x15] = 0;
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
      pbVar1[0x18] = 0;
      pbVar1[0x19] = 0;
      pbVar1[0x1a] = 0;
      pbVar1[0x1b] = 0;
      pbVar1[0x1c] = 0;
      pbVar1[0x1d] = 0;
      pbVar1[0x1e] = 0;
      pbVar1[0x1f] = 0;
      pbVar1[0x20] = 0;
      pbVar1[0x21] = 0;
      pbVar1[0x22] = 0;
      pbVar1[0x23] = 0;
      pbVar1[0x24] = 0;
      pbVar1[0x25] = 0;
      pbVar1[0x26] = 0;
      pbVar1[0x27] = 0;
      pbVar1[0x28] = 0;
      pbVar1[0x29] = 0;
      pbVar1[0x2a] = 0;
      pbVar1[0x2b] = 0;
      pbVar1[0x2c] = 0;
      pbVar1[0x2d] = 0;
      pbVar1[0x2e] = 0;
      pbVar1[0x2f] = 0;
      pbVar1[0x30] = 0;
      pbVar1[0x31] = 0;
      pbVar1[0x32] = 0;
      *pbVar1 = *pbVar1 & 0xe0;
      pbVar1[0x37] = 0;
      pbVar1[0x38] = 0;
      pbVar1[0x39] = 0;
      pbVar1[0x3a] = 0;
      pbVar1[0x3b] = 0;
      pbVar1[0x3c] = 0;
      pbVar1[0x3d] = 0;
      pbVar1[0x3e] = 0;
      pbVar1[0x3f] = 0;
      pbVar1[0x40] = 0;
      pbVar1[0x41] = 0;
      pbVar1[0x42] = 0;
      pbVar1[0x43] = 0;
      pbVar1[0x44] = 0;
      pbVar1[0x45] = 0;
      pbVar1[0x46] = 0;
      pbVar1[0x47] = 0;
      pbVar1[0x48] = 0;
      pbVar1[0x49] = 0;
      pbVar1[0x4a] = 0;
      pbVar1[0x4b] = 0;
      pbVar1[0x4c] = 0;
      pbVar1[0x4d] = 0;
      pbVar1[0x4e] = 0;
      pbVar1[-1] = 0;
      pbVar1[0x4f] = 0;
      pbVar1[0x50] = 0;
      pbVar1[0x51] = 0;
      pbVar1[0x52] = 0;
      *(double (*) [2])(pbVar1 + 0x5f) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x6f) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x7f) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x8f) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x9f) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
      ;
      *(double (*) [2])(pbVar1 + 0xaf) = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
      ;
      *(double (*) [2])(pbVar1 + 0xbf) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0xcf) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0xdf) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0xef) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0xff) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
      ;
      *(double (*) [2])(pbVar1 + 0x10f) =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x11f) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x12f) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x13f) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x14f) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x15f) =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x16f) =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x17f) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 399) = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      *(double (*) [2])(pbVar1 + 0x19f) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x1af) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x1bf) =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *(double (*) [2])(pbVar1 + 0x1cf) =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      pbVar1[0x1ef] = 0;
      pbVar1[0x1f0] = 0;
      pbVar1[0x1f1] = 0;
      pbVar1[0x1f2] = 0;
      pbVar1[499] = 0;
      pbVar1[500] = 0;
      pbVar1[0x1f5] = 0;
      pbVar1[0x1f6] = 0;
      pbVar1[0x207] = 0;
      pbVar1[0x208] = 0;
      pbVar1[0x209] = 0;
      pbVar1[0x20a] = 0;
      pbVar1[0x20b] = 0;
      pbVar1[0x20c] = 0;
      pbVar1[0x20d] = 0;
      pbVar1[0x20e] = 0;
      pbVar1[0x20f] = 0;
      pbVar1[0x210] = 0;
      pbVar1[0x211] = 0;
      pbVar1[0x212] = 0;
      pbVar1[0x213] = 0;
      pbVar1[0x214] = 0;
      pbVar1[0x215] = 0;
      pbVar1[0x216] = 0;
      pbVar1[0x217] = 0;
      pbVar1[0x218] = 0;
      pbVar1[0x219] = 0;
      pbVar1[0x21a] = 0;
      pbVar1[0x21b] = 0;
      pbVar1[0x21c] = 0;
      pbVar1[0x21d] = 0;
      pbVar1[0x21e] = 0;
      pbVar1[0x1e7] = 0;
      pbVar1[0x1e8] = 0;
      pbVar1[0x1e9] = 0;
      pbVar1[0x1ea] = 0;
      pbVar1[0x1eb] = 0;
      pbVar1[0x1ec] = 0;
      pbVar1[0x1ed] = 0;
      pbVar1[0x1ee] = 0;
      pbVar1[0x21f] = 0;
      pbVar1[0x220] = 0;
      pbVar1[0x221] = 0;
      pbVar1[0x222] = 0;
      pbVar1[0x223] = 0;
      pbVar1[0x224] = 0;
      pbVar1[0x225] = 0;
      pbVar1[0x226] = 0;
      pbVar1[0x227] = 0;
      pbVar1[0x228] = 0;
      pbVar1[0x229] = 0;
      pbVar1[0x22a] = 0;
      pbVar1[0x22b] = 0;
      pbVar1[0x22c] = 0;
      pbVar1[0x22d] = 0;
      pbVar1[0x22e] = 0;
      pbVar1[0x22f] = 0;
      pbVar1[0x230] = 0;
      pbVar1[0x231] = 0;
      pbVar1[0x232] = 0;
      pbVar1[0x233] = 0;
      pbVar1[0x234] = 0;
      pbVar1[0x235] = 0;
      pbVar1[0x236] = 0;
      pbVar1[0x1df] = 0;
      pbVar1[0x1e0] = 0;
      pbVar1[0x1e1] = 0;
      pbVar1[0x1e2] = 0;
      pbVar1[0x1f7] = 0;
      pbVar1[0x1f8] = 0;
      pbVar1[0x1f9] = 0;
      pbVar1[0x1fa] = 0;
      pbVar1[0x1fb] = 0;
      pbVar1[0x1fc] = 0;
      pbVar1[0x1fd] = 0;
      pbVar1[0x1fe] = 0;
      pbVar1[0x1ff] = 0;
      pbVar1[0x200] = 0;
      pbVar1[0x201] = 0;
      pbVar1[0x202] = 0;
      pbVar1[0x237] = 0;
      pbVar1[0x238] = 0;
      pbVar1[0x239] = 0;
      pbVar1[0x23a] = 0;
      pbVar1[0x23b] = 0;
      pbVar1[0x23c] = 0;
      pbVar1[0x23d] = 0xf0;
      pbVar1[0x23e] = 0x3f;
      pbVar1[0x23f] = 0;
      pbVar1[0x240] = 0;
      pbVar1[0x241] = 0;
      pbVar1[0x242] = 0;
      pbVar1[0x243] = 0;
      pbVar1[0x244] = 0;
      pbVar1[0x245] = 0;
      pbVar1[0x246] = 0;
      pbVar1[0x247] = 0;
      pbVar1[0x248] = 0;
      pbVar1[0x249] = 0x80;
      pbVar1[0x24a] = 0xbf;
      pbVar1[0x24b] = 0;
      pbVar1[0x24c] = 0;
      pbVar1[0x24d] = 0;
      pbVar1[0x24e] = 0;
      pbVar1[0x24f] = 0;
      pbVar1[0x250] = 0;
      pbVar1[0x251] = 0;
      pbVar1[0x252] = 0;
      pbVar1[0x253] = 0;
      pbVar1[0x254] = 0;
      pbVar1[0x255] = 0;
      pbVar1[0x256] = 0;
      pbVar1[0x25f] = 0;
      pbVar1[0x260] = 0;
      pbVar1[0x261] = 0;
      pbVar1[0x262] = 0;
      pbVar1[0x263] = 0;
      pbVar1[0x264] = 0;
      pbVar1[0x265] = 0;
      pbVar1[0x266] = 0;
      pbVar1[0x267] = 0xff;
      pbVar1[0x268] = 0xff;
      pbVar1[0x269] = 0xff;
      pbVar1[0x26a] = 0xff;
      pbVar1[0x26b] = 0xff;
      pbVar1[0x26c] = 0xff;
      pbVar1[0x26d] = 0xff;
      pbVar1[0x26e] = 0xff;
      pbVar1[0x26f] = 0xff;
      pbVar1[0x270] = 0xff;
      pbVar1[0x271] = 0xff;
      pbVar1[0x272] = 0xff;
      pbVar1[599] = 0;
      pbVar1[600] = 0;
      pbVar1[0x259] = 0;
      pbVar1[0x25a] = 0;
      pbVar1[0x25b] = 0;
      pbVar1[0x25c] = 0;
      pbVar1[0x25d] = 0;
      pbVar1[0x25e] = 0;
      pbVar1 = pbVar1 + 0x280;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChaosVDManifoldPoint,int> @ 1436d1840

void __cdecl DefaultConstructItems<FChaosVDManifoldPoint,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(byte *)(puVar1 + -2) = *(byte *)(puVar1 + -2) & 0xc0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0;
      *(undefined1 *)(puVar1 + 0x1c) = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1e] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x20] = 0;
      puVar1[0x21] = 0;
      puVar1[0x22] = 0;
      *(undefined1 *)(puVar1 + 0x23) = 0;
      puVar1 = puVar1 + 0x26;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChaosVDShapeCollisionData,int> @ 1436d1940

void __cdecl DefaultConstructItems<FChaosVDShapeCollisionData,int>(void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 4);
    do {
      *pbVar1 = *pbVar1 & 0xf8;
      pbVar1[-4] = 0;
      pbVar1[-3] = 0;
      pbVar1[-2] = 0;
      pbVar1[-1] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1[0x10] = 0;
      pbVar1[0x11] = 0;
      pbVar1[0x12] = 0;
      pbVar1[0x13] = 0;
      pbVar1[0x14] = 0;
      pbVar1[0x15] = 0;
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
      pbVar1[0x18] = 0;
      pbVar1[0x19] = 0;
      pbVar1[0x1a] = 0;
      pbVar1[0x1b] = 0;
      pbVar1[0x1c] = 0;
      pbVar1[0x1d] = 0;
      pbVar1[0x1e] = 0;
      pbVar1[0x1f] = 0;
      pbVar1[0x20] = 0;
      pbVar1[0x21] = 0;
      pbVar1[0x22] = 0;
      pbVar1[0x23] = 0;
      pbVar1[0x24] = 0;
      pbVar1[0x25] = 0;
      pbVar1 = pbVar1 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FChaosVDAABBTreeLeafDataWrapper,int> @ 1436d19a0

void __cdecl
DestructItems<FChaosVDAABBTreeLeafDataWrapper,int>
          (FChaosVDAABBTreeLeafDataWrapper *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Elements;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FChaosVDBoundingVolumeDataWrapper,int> @ 1436d19e0

void __cdecl
DestructItems<FChaosVDBoundingVolumeDataWrapper,int>
          (FChaosVDBoundingVolumeDataWrapper *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MElements;
    do {
      DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
                 (pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
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

// DestructItems<FChaosVDConstraint,int> @ 1436d1a30

void __cdecl DestructItems<FChaosVDConstraint,int>(FChaosVDConstraint *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->CollisionMargins;
    do {
      pFVar1 = (((TArray<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_> *)(pTVar2 + 7))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int> @ 1436d1a80

void __cdecl
DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
          (TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *param_1,int param_2
          )

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

// DestructItems<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,int> @ 1436d1ac0

void __cdecl
DestructItems<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,int>
          (TSharedPtr<FChaosVDAABBTreeDataWrapper,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int> @ 1436d1b00

void __cdecl
DestructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int>
          (TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int> @ 1436d1b40

void __cdecl
DestructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int>
          (TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int> @ 1436d1b80

void __cdecl
DestructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int>
          (TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int> @ 1436d1bc0

void __cdecl
DestructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int>
          (TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1> *param_1,int param_2)

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

// StaticEnum<enum_EChaosVDAABBTreeNodeFlags> @ 1436d3640

UEnum * __cdecl StaticEnum<enum_EChaosVDAABBTreeNodeFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags,(UObject *)pUVar1,
                       L"EChaosVDAABBTreeNodeFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDAccelerationStructureType> @ 1436d3680

UEnum * __cdecl StaticEnum<enum_EChaosVDAccelerationStructureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAccelerationStructureType,
                       (UObject *)pUVar1,L"EChaosVDAccelerationStructureType");
  }
  return Z_Registration_Info_UEnum_EChaosVDAccelerationStructureType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDCollisionQueryHitType> @ 1436d36c0

UEnum * __cdecl StaticEnum<enum_EChaosVDCollisionQueryHitType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType,
                       (UObject *)pUVar1,L"EChaosVDCollisionQueryHitType");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDCollisionQueryParamsFlags> @ 1436d3700

UEnum * __cdecl StaticEnum<enum_EChaosVDCollisionQueryParamsFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags,
                       (UObject *)pUVar1,L"EChaosVDCollisionQueryParamsFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDCollisionShapeDataFlags> @ 1436d3740

UEnum * __cdecl StaticEnum<enum_EChaosVDCollisionShapeDataFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags,
                       (UObject *)pUVar1,L"EChaosVDCollisionShapeDataFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDCollisionTraceFlag> @ 1436d3780

UEnum * __cdecl StaticEnum<enum_EChaosVDCollisionTraceFlag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag,(UObject *)pUVar1
                       ,L"EChaosVDCollisionTraceFlag");
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton;
}

// StaticEnum<enum_EChaosVDConstraintFlags> @ 1436d37c0

UEnum * __cdecl StaticEnum<enum_EChaosVDConstraintFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags,(UObject *)pUVar1,
                       L"EChaosVDConstraintFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDContactPointType> @ 1436d3800

UEnum * __cdecl StaticEnum<enum_EChaosVDContactPointType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType,(UObject *)pUVar1,
                       L"EChaosVDContactPointType");
  }
  return Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDContactShapesType> @ 1436d3840

UEnum * __cdecl StaticEnum<enum_EChaosVDContactShapesType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType,(UObject *)pUVar1,
                       L"EChaosVDContactShapesType");
  }
  return Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDGTJointStateFlags> @ 1436d3880

UEnum * __cdecl StaticEnum<enum_EChaosVDGTJointStateFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDGTJointStateFlags,(UObject *)pUVar1,
                       L"EChaosVDGTJointStateFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDJointForceMode> @ 1436d38c0

UEnum * __cdecl StaticEnum<enum_EChaosVDJointForceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode,(UObject *)pUVar1,
                       L"EChaosVDJointForceMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton;
}

// StaticEnum<enum_EChaosVDJointMotionType> @ 1436d3900

UEnum * __cdecl StaticEnum<enum_EChaosVDJointMotionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType,(UObject *)pUVar1,
                       L"EChaosVDJointMotionType");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDJointReSimType> @ 1436d3940

UEnum * __cdecl StaticEnum<enum_EChaosVDJointReSimType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType,(UObject *)pUVar1,
                       L"EChaosVDJointReSimType");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDJointSettingsFlags> @ 1436d3980

UEnum * __cdecl StaticEnum<enum_EChaosVDJointSettingsFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags,(UObject *)pUVar1
                       ,L"EChaosVDJointSettingsFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDJointSolverSettingsFlags> @ 1436d39c0

UEnum * __cdecl StaticEnum<enum_EChaosVDJointSolverSettingsFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags,
                       (UObject *)pUVar1,L"EChaosVDJointSolverSettingsFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDJointStateFlags> @ 1436d3a00

UEnum * __cdecl StaticEnum<enum_EChaosVDJointStateFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags,(UObject *)pUVar1,
                       L"EChaosVDJointStateFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDJointSyncType> @ 1436d3a40

UEnum * __cdecl StaticEnum<enum_EChaosVDJointSyncType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType,(UObject *)pUVar1,
                       L"EChaosVDJointSyncType");
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDKinematicTargetMode> @ 1436d3a80

UEnum * __cdecl StaticEnum<enum_EChaosVDKinematicTargetMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDKinematicTargetMode,
                       (UObject *)pUVar1,L"EChaosVDKinematicTargetMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDKinematicTargetMode.OuterSingleton;
}

// StaticEnum<enum_EChaosVDManifoldPointFlags> @ 1436d3ac0

UEnum * __cdecl StaticEnum<enum_EChaosVDManifoldPointFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags,(UObject *)pUVar1
                       ,L"EChaosVDManifoldPointFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDMidPhaseFlags> @ 1436d3b00

UEnum * __cdecl StaticEnum<enum_EChaosVDMidPhaseFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags,(UObject *)pUVar1,
                       L"EChaosVDMidPhaseFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDMidPhaseType> @ 1436d3b40

UEnum * __cdecl StaticEnum<enum_EChaosVDMidPhaseType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDMidPhaseType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDMidPhaseType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseType,(UObject *)pUVar1,
                       L"EChaosVDMidPhaseType");
  }
  return Z_Registration_Info_UEnum_EChaosVDMidPhaseType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDObjectStateType> @ 1436d3b80

UEnum * __cdecl StaticEnum<enum_EChaosVDObjectStateType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType,(UObject *)pUVar1,
                       L"EChaosVDObjectStateType");
  }
  return Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDParticleContext> @ 1436d3bc0

UEnum * __cdecl StaticEnum<enum_EChaosVDParticleContext>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDParticleContext.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDParticleContext.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleContext,(UObject *)pUVar1,
                       L"EChaosVDParticleContext");
  }
  return Z_Registration_Info_UEnum_EChaosVDParticleContext.OuterSingleton;
}

// StaticEnum<enum_EChaosVDParticleType> @ 1436d3c00

UEnum * __cdecl StaticEnum<enum_EChaosVDParticleType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType,(UObject *)pUVar1,
                       L"EChaosVDParticleType");
  }
  return Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDPlasticityType> @ 1436d3c40

UEnum * __cdecl StaticEnum<enum_EChaosVDPlasticityType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType,(UObject *)pUVar1,
                       L"EChaosVDPlasticityType");
  }
  return Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDQueryFastDataParallelFlags> @ 1436d3c80

UEnum * __cdecl StaticEnum<enum_EChaosVDQueryFastDataParallelFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags,
                       (UObject *)pUVar1,L"EChaosVDQueryFastDataParallelFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDRecordingMode> @ 1436d3cc0

UEnum * __cdecl StaticEnum<enum_EChaosVDRecordingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDRecordingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDRecordingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDRecordingMode,(UObject *)pUVar1,
                       L"EChaosVDRecordingMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDRecordingMode.OuterSingleton;
}

// StaticEnum<enum_EChaosVDSQHitFlags> @ 1436d3d00

UEnum * __cdecl StaticEnum<enum_EChaosVDSQHitFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSQHitFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSQHitFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQHitFlags,(UObject *)pUVar1,
                       L"EChaosVDSQHitFlags");
  }
  return Z_Registration_Info_UEnum_EChaosVDSQHitFlags.OuterSingleton;
}

// StaticEnum<enum_EChaosVDSQVisitRejectReason> @ 1436d3d40

UEnum * __cdecl StaticEnum<enum_EChaosVDSQVisitRejectReason>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQVisitRejectReason,
                       (UObject *)pUVar1,L"EChaosVDSQVisitRejectReason");
  }
  return Z_Registration_Info_UEnum_EChaosVDSQVisitRejectReason.OuterSingleton;
}

// StaticEnum<enum_EChaosVDSceneQueryMode> @ 1436d3d80

UEnum * __cdecl StaticEnum<enum_EChaosVDSceneQueryMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode,(UObject *)pUVar1,
                       L"EChaosVDSceneQueryMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton;
}

// StaticEnum<enum_EChaosVDSceneQueryType> @ 1436d3dc0

UEnum * __cdecl StaticEnum<enum_EChaosVDSceneQueryType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType,(UObject *)pUVar1,
                       L"EChaosVDSceneQueryType");
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDSceneQueryVisitorType> @ 1436d3e00

UEnum * __cdecl StaticEnum<enum_EChaosVDSceneQueryVisitorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType,
                       (UObject *)pUVar1,L"EChaosVDSceneQueryVisitorType");
  }
  return Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDSleepType> @ 1436d3e40

UEnum * __cdecl StaticEnum<enum_EChaosVDSleepType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType,(UObject *)pUVar1,
                       L"EChaosVDSleepType");
  }
  return Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton;
}

// StaticEnum<enum_EChaosVDTransportMode> @ 1436d3e80

UEnum * __cdecl StaticEnum<enum_EChaosVDTransportMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosVDTransportMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UEnum_EChaosVDTransportMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDTransportMode,(UObject *)pUVar1,
                       L"EChaosVDTransportMode");
  }
  return Z_Registration_Info_UEnum_EChaosVDTransportMode.OuterSingleton;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>_> @ 1436d3ec0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>_> @ 1436d3ed0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*> @ 1436d3ee0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// __builtin_array_init_helper<FChaosVDCollisionChannelInfo> @ 1436d3ef0

void __cdecl
__builtin_array_init_helper<FChaosVDCollisionChannelInfo>
          (FChaosVDCollisionChannelInfo *param_1,ulong64 param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = &(param_1->DisplayName).Data.ArrayMax;
    do {
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar1 + -3))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      *(undefined8 *)(piVar1 + -1) = 0;
      piVar1[1] = 0xffffffff;
      *(undefined1 *)(piVar1 + 2) = 0;
      piVar1 = piVar1 + 6;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// operator<< @ 1436d7560

FArchive * __cdecl operator<<(FArchive *param_1,FChaosVDAABBTreePayloadBoundsElement *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  operator<<(param_1,(bool *)&param_2->_padding_);
  if ((char)param_2->_padding_ != '\0') {
    piVar1 = &param_2->ParticleIndex;
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&param_2->Bounds);
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteSeasonBranchObjectVersion::GUID);
    iVar3 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteSeasonBranchObjectVersion::GUID);
    if (0xc < iVar3) {
      UE::Math::operator<<(param_1,&param_2->ActualBounds);
    }
  }
  return param_1;
}

// operator<< @ 1436d7630

FArchive * __cdecl operator<<(FArchive *param_1,FChaosVDBVCellElementDataWrapper *param_2)

{
  int *piVar1;
  int *piVar2;
  
  operator<<(param_1,(bool *)&param_2->_padding_);
  if ((char)param_2->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&param_2->Bounds);
    piVar1 = &param_2->ParticleIndex;
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&param_2->StartIdx);
    UE::Math::operator<<(param_1,&param_2->EndIdx);
  }
  return param_1;
}

// operator<< @ 1436d76e0

FArchive * __cdecl operator<<(FArchive *param_1,FChaosVDBoundingVolumeDataWrapper *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  operator<<(param_1,(bool *)&param_2->_padding_);
  if ((char)param_2->_padding_ != '\0') {
    plVar1 = &param_2->_padding_;
    puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
      }
    }
    else {
      *(undefined4 *)plVar1 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar2 = (uint *)((longlong)&param_2->_padding_ + 4);
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&param_2->MElementsCounts);
    TArrayPrivateFriend::
    Serialize<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->MElements);
    operator<<(param_1,&param_2->MaxPayloadBounds);
  }
  return param_1;
}

// operator<< @ 1436d77e0

FArchive * __cdecl operator<<(FArchive *param_1,FChaosVDConnectivityEdge *param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->SiblingParticleID = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Strain;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator() @ 1436d79b0

void __thiscall
<lambda_5>::operator()(<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  FChaosVDRuntimeModule *this_01;
  FName local_res10;
  undefined4 uStack_1c;
  TArrayView<FString_const_,int> local_18;
  
  FModuleManager::Get();
  pFVar5 = ::FName::FName(&local_res10,L"ChaosVDRuntime");
  FVar2 = *pFVar5;
  this_00 = FModuleManager::Get();
  this_01 = (FChaosVDRuntimeModule *)FModuleManager::LoadModuleChecked(this_00,FVar2);
  local_18.DataPtr = (FString *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  FChaosVDRuntimeModule::StartRecording(this_01,&local_18);
  return;
}

// `scalar_deleting_destructor' @ 1436d7a60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436d7a90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436d7ac0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436d7af0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDAccelerationStructureDataWrappers @ 1436d8d10

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDAccelerationStructureDataWrappers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDCharacterGroundConstraintDataWrappers @ 1436d8d20

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDCharacterGroundConstraintDataWrappers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDCollisionDataWrappers @ 1436d8d30

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDCollisionDataWrappers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDDebugShapeDataWrapper @ 1436d8d40

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDDebugShapeDataWrapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDJointDataWrappers @ 1436d8d50

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDJointDataWrappers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDParticleDataWrapper @ 1436d8d60

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDParticleDataWrapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDQueryDataWrappers @ 1436d8d70

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDQueryDataWrappers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDRecordingDetails @ 1436d8d80

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDRecordingDetails(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosVDRuntime_init @ 1436d8d90

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosVDRuntime_init(void)

{
  return;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags @ 1436e2630

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDAABBTreeNodeFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDAABBTreeNodeFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags @ 1436e2670

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags @ 1436e26b0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags @ 1436e26f0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDConstraintFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDConstraintFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDConstraintFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDGTJointStateFlags @ 1436e2730

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDGTJointStateFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDGTJointStateFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDGTJointStateFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags @ 1436e2770

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags @ 1436e27b0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags @ 1436e27f0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDJointStateFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDJointStateFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDJointStateFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags @ 1436e2830

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags @ 1436e2870

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags @ 1436e28b0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.InnerSingleton;
}

// Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQHitFlags @ 1436e28f0

UEnum * __cdecl Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQHitFlags(void)

{
  if (Z_Registration_Info_UEnum_EChaosVDSQHitFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosVDSQHitFlags.InnerSingleton,
               &Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSQHitFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosVDSQHitFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper @ 1436e2930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper @ 1436e29b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper @ 1436e2a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDAccelerationStructureContainer @ 1436e2ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDAccelerationStructureContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureContainer.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDAccelerationStructureContainer_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDAccelerationStructureContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper @ 1436e2b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDBVCellElementDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDBVCellElementDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDBVCellElementDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDBVCellElementDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper @ 1436e2bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDBoundingVolumeDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDBoundingVolumeDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDBoundingVolumeDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDBoundingVolumeDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint @ 1436e2c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraint.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraint.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDCollisionChannelsInfoContainer @ 1436e2cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDCollisionChannelsInfoContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelsInfoContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelsInfoContainer.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDCollisionChannelsInfoContainer_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelsInfoContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelsInfoContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper @ 1436e2d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper @ 1436e2db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper @ 1436e2e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawLineDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawLineDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawLineDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawLineDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper @ 1436e2eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDDebugShapeDataContainer @ 1436e2f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDDebugShapeDataContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugShapeDataContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDDebugShapeDataContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDDebugShapeDataContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugShapeDataContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDDebugShapeDataContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDJointConstraint @ 1436e2fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDJointConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointConstraint.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDJointConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointConstraint.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDJointConstraint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper @ 1436e3030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer @ 1436e30b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDMultiSolverDebugShapeDataContainer.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper @ 1436e3130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticleMetadata @ 1436e31b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticleMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticleMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticleMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticleMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase @ 1436e3230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticlePairMidPhase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDParticlePairMidPhase.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticlePairMidPhase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDParticlePairMidPhase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper @ 1436e32b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryDataWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDQueryDataWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryDataWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDQueryDataWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDSceneQueriesDataContainer @ 1436e3330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDSceneQueriesDataContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDSceneQueriesDataContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDSceneQueriesDataContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDSceneQueriesDataContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDSceneQueriesDataContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDSceneQueriesDataContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDStartRecordingCommandMessage @ 1436e33b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDStartRecordingCommandMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDStartRecordingCommandMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDStartRecordingCommandMessage.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDStartRecordingCommandMessage_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDStartRecordingCommandMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosVDStartRecordingCommandMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FChaosVDTraceDetails @ 1436e3430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosVDTraceDetails(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDTraceDetails.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosVDTraceDetails.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosVDTraceDetails_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosVDTraceDetails.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FChaosVDTraceDetails.InnerSingleton;
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

// IMPLEMENT_MODULE_ChaosVDRuntime @ 1436e34b0

void __cdecl IMPLEMENT_MODULE_ChaosVDRuntime(void)

{
  return;
}

// DelegatesRWLock'' @ 150361c90

void __cdecl `dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::DelegatesRWLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000150361cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerformFullCaptureDelegate'' @ 150361cf0

void __cdecl
`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::PerformFullCaptureDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FChaosVDRuntimeModule::PerformFullCaptureDelegate._8_8_,
             FChaosVDRuntimeModule::PerformFullCaptureDelegate._16_4_);
  if (FChaosVDRuntimeModule::PerformFullCaptureDelegate._8_8_ != 0) {
    FMemory::Free((void *)FChaosVDRuntimeModule::PerformFullCaptureDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FChaosVDRuntimeModule::PerformFullCaptureDelegate);
  return;
}

// PostRecordingStartedDelegate'' @ 150361d30

void __cdecl
`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::PostRecordingStartedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FChaosVDRuntimeModule::PostRecordingStartedDelegate._8_8_,
             FChaosVDRuntimeModule::PostRecordingStartedDelegate._16_4_);
  if (FChaosVDRuntimeModule::PostRecordingStartedDelegate._8_8_ != 0) {
    FMemory::Free((void *)FChaosVDRuntimeModule::PostRecordingStartedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FChaosVDRuntimeModule::PostRecordingStartedDelegate);
  return;
}

// RecordingStartFailedDelegate'' @ 150361d70

void __cdecl
`dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::RecordingStartFailedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FChaosVDRuntimeModule::RecordingStartFailedDelegate._8_8_,
             FChaosVDRuntimeModule::RecordingStartFailedDelegate._16_4_);
  if (FChaosVDRuntimeModule::RecordingStartFailedDelegate._8_8_ != 0) {
    FMemory::Free((void *)FChaosVDRuntimeModule::RecordingStartFailedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FChaosVDRuntimeModule::RecordingStartFailedDelegate);
  return;
}

// RecordingStartedDelegate'' @ 150361db0

void __cdecl `dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::RecordingStartedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FChaosVDRuntimeModule::RecordingStartedDelegate._8_8_,
             FChaosVDRuntimeModule::RecordingStartedDelegate._16_4_);
  if (FChaosVDRuntimeModule::RecordingStartedDelegate._8_8_ != 0) {
    FMemory::Free((void *)FChaosVDRuntimeModule::RecordingStartedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FChaosVDRuntimeModule::RecordingStartedDelegate);
  return;
}

// RecordingStopDelegate'' @ 150361df0

void __cdecl `dynamic_atexit_destructor_for_'FChaosVDRuntimeModule::RecordingStopDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FChaosVDRuntimeModule::RecordingStopDelegate._8_8_,
             FChaosVDRuntimeModule::RecordingStopDelegate._16_4_);
  if (FChaosVDRuntimeModule::RecordingStopDelegate._8_8_ != 0) {
    FMemory::Free((void *)FChaosVDRuntimeModule::RecordingStopDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FChaosVDRuntimeModule::RecordingStopDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosVDGTimeBetweenFullCaptures'' @ 150361e30

void __cdecl _dynamic_atexit_destructor_for__CVarChaosVDGTimeBetweenFullCaptures__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosVDGTimeBetweenFullCaptures);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosVDMaxBytesPerRelayChunk'' @ 150361e50

void __cdecl _dynamic_atexit_destructor_for__CVarChaosVDMaxBytesPerRelayChunk__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosVDMaxBytesPerRelayChunk);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosVDMaxTimeToWaitForDisconnect'' @ 150361e70

void __cdecl _dynamic_atexit_destructor_for__CVarChaosVDMaxTimeToWaitForDisconnect__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosVDMaxTimeToWaitForDisconnect);
  return;
}

// `dynamic_atexit_destructor_for_'ChaosVDStartRecordingCommand'' @ 150361e90

void __cdecl _dynamic_atexit_destructor_for__ChaosVDStartRecordingCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ChaosVDStartRecordingCommand);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultDebugName'' @ 150361eb0

void __cdecl
`FChaosVDParticleDataWrapper::GetDebugName'::__l2::
_dynamic_atexit_destructor_for__DefaultDebugName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultDebugName.Data.AllocatorInstance.Data;
  if (DefaultDebugName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultDebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogChaosVDRuntime'' @ 150361ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosVDRuntime__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosVDRuntime);
  return;
}

// `dynamic_atexit_destructor_for_'StopVDStartRecordingCommand'' @ 150361ef0

void __cdecl _dynamic_atexit_destructor_for__StopVDStartRecordingCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&StopVDStartRecordingCommand);
  return;
}

