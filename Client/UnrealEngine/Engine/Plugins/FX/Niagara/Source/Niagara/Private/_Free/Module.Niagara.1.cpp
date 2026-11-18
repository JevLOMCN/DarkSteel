// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 527

// `dynamic_initializer_for_'CVarDebugDumpWriterDI'' @ 14116e7c0

void __cdecl _dynamic_initializer_for__CVarDebugDumpWriterDI__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugDumpWriterDI,L"fx.Niagara.DataChannels.DebugDumpWriterDI",&GbDebugDumpWriter,
             L" \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugDumpWriterDI__);
  return;
}

// `dynamic_initializer_for_'CVarNDCReadForcePrevFrame'' @ 14116e810

void __cdecl _dynamic_initializer_for__CVarNDCReadForcePrevFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNDCReadForcePrevFrame,L"fx.Niagara.DataChannels.ForceReadPrevFrame",
             &GNDCReadForcePrevFrame,
             L"When true this will force Niagara systems with NDC read DIs to read from the previous frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNDCReadForcePrevFrame__);
  return;
}

// `dynamic_initializer_for_'CVarNDCReadForceTG'' @ 14116e860

void __cdecl _dynamic_initializer_for__CVarNDCReadForceTG__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNDCReadForceTG,L"fx.Niagara.DataChannels.ForceReadTickGroup",&GNDCReadForceTG,
             L"When >= 0 this will force Niagara systems with NDC read DIs to tick in the given Tick Group."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNDCReadForceTG__);
  return;
}

// `dynamic_initializer_for_'CVarNDCWriteDIZeroCPUBufferMode'' @ 14116e8b0

void __cdecl _dynamic_initializer_for__CVarNDCWriteDIZeroCPUBufferMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNDCWriteDIZeroCPUBufferMode,L"fx.Niagara.DataChannels.WriteDIZeroCPUBuffersMode",
             &GbNDCWriteDIZeroCPUBufferMode,
             L"Controls how CPU buffers are zeroed for the NDC Write DI\n0 = Do not Zero CPU buffers.\n1 = Zero only when calling \"Write\" function.\n2 = Zero always.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNDCWriteDIZeroCPUBufferMode__);
  return;
}

// `dynamic_initializer_for_'CreateAsyncRayTraceName'' @ 14116e900

void __cdecl NDIAsyncGpuTraceLocal::_dynamic_initializer_for__CreateAsyncRayTraceName__(void)

{
  ::FName::FName(&CreateAsyncRayTraceName,L"CreateAsyncRayTraceGpu");
  return;
}

// `dynamic_initializer_for_'DummyUAVFloat'' @ 14116e920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl NDIDataChannelUtilities::_dynamic_initializer_for__DummyUAVFloat__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&DummyUAVFloat);
  DummyUAVFloat._32_1_ = 0xd;
  DummyUAVFloat._40_8_ = 0;
  DummyUAVFloat._64_8_ = 0;
  DummyUAVFloat._72_8_ = 0;
  DummyUAVFloat._80_4_ = 0;
  DummyUAVFloat._0_8_ = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  DummyUAVFloat._36_4_ = 4;
  DummyUAVFloat._48_8_ = 0;
  DummyUAVFloat._56_8_ = 0;
  if (DummyUAVFloat._24_4_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyUAVFloat._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyUAVFloat._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyUAVFloat,pFVar3);
    atexit(_dynamic_atexit_destructor_for__DummyUAVFloat__);
    return;
  }
  BeginInitResource((FRenderResource *)&DummyUAVFloat,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__DummyUAVFloat__);
  return;
}

// `dynamic_initializer_for_'DummyUAVHalf'' @ 14116ea10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl NDIDataChannelUtilities::_dynamic_initializer_for__DummyUAVHalf__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&DummyUAVHalf);
  DummyUAVHalf._32_1_ = 0x15;
  DummyUAVHalf._40_8_ = 0;
  DummyUAVHalf._64_8_ = 0;
  DummyUAVHalf._72_8_ = 0;
  DummyUAVHalf._80_4_ = 0;
  DummyUAVHalf._0_8_ = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  DummyUAVHalf._36_4_ = 2;
  DummyUAVHalf._48_8_ = 0;
  DummyUAVHalf._56_8_ = 0;
  if (DummyUAVHalf._24_4_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyUAVHalf._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyUAVHalf._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyUAVHalf,pFVar3);
    atexit(_dynamic_atexit_destructor_for__DummyUAVHalf__);
    return;
  }
  BeginInitResource((FRenderResource *)&DummyUAVHalf,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__DummyUAVHalf__);
  return;
}

// `dynamic_initializer_for_'DummyUAVInt32'' @ 14116eb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl NDIDataChannelUtilities::_dynamic_initializer_for__DummyUAVInt32__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&DummyUAVInt32);
  DummyUAVInt32._32_1_ = 0x1d;
  DummyUAVInt32._40_8_ = 0;
  DummyUAVInt32._64_8_ = 0;
  DummyUAVInt32._72_8_ = 0;
  DummyUAVInt32._80_4_ = 0;
  DummyUAVInt32._0_8_ = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  DummyUAVInt32._36_4_ = 4;
  DummyUAVInt32._48_8_ = 0;
  DummyUAVInt32._56_8_ = 0;
  if (DummyUAVInt32._24_4_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyUAVInt32._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyUAVInt32._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyUAVInt32,pFVar3);
    atexit(_dynamic_atexit_destructor_for__DummyUAVInt32__);
    return;
  }
  BeginInitResource((FRenderResource *)&DummyUAVInt32,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__DummyUAVInt32__);
  return;
}

// `dynamic_initializer_for_'GetConsoleVariableBool'' @ 14116ebf0

void __cdecl NDIConsoleVariableLocal::_dynamic_initializer_for__GetConsoleVariableBool__(void)

{
  ::FName::FName(&GetConsoleVariableBool,"GetConsoleVariableBool");
  return;
}

// `dynamic_initializer_for_'GetConsoleVariableFloat'' @ 14116ec10

void __cdecl NDIConsoleVariableLocal::_dynamic_initializer_for__GetConsoleVariableFloat__(void)

{
  ::FName::FName(&GetConsoleVariableFloat,"GetConsoleVariableFloat");
  return;
}

// `dynamic_initializer_for_'GetConsoleVariableInt'' @ 14116ec30

void __cdecl NDIConsoleVariableLocal::_dynamic_initializer_for__GetConsoleVariableInt__(void)

{
  ::FName::FName(&GetConsoleVariableInt,"GetConsoleVariableInt");
  return;
}

// `dynamic_initializer_for_'GetMatrixName'' @ 14116ec50

void __cdecl NDIActorComponentLocal::_dynamic_initializer_for__GetMatrixName__(void)

{
  ::FName::FName(&GetMatrixName,L"GetMatrix");
  return;
}

// `dynamic_initializer_for_'GetNDCSpawnDataName'' @ 14116ec70

void __cdecl NDIDataChannelUtilities::_dynamic_initializer_for__GetNDCSpawnDataName__(void)

{
  ::FName::FName(&GetNDCSpawnDataName,L"GetNDCSpawnData");
  return;
}

// `dynamic_initializer_for_'GetTransformName'' @ 14116ec90

void __cdecl NDIActorComponentLocal::_dynamic_initializer_for__GetTransformName__(void)

{
  ::FName::FName(&GetTransformName,L"GetTransform");
  return;
}

// `dynamic_initializer_for_'GetVelocityName'' @ 14116ecb0

void __cdecl NDIActorComponentLocal::_dynamic_initializer_for__GetVelocityName__(void)

{
  ::FName::FName(&GetVelocityName,L"GetVelocity");
  return;
}

// `dynamic_initializer_for_'IssueAsyncRayTraceName'' @ 14116ecd0

void __cdecl NDIAsyncGpuTraceLocal::_dynamic_initializer_for__IssueAsyncRayTraceName__(void)

{
  ::FName::FName(&IssueAsyncRayTraceName,L"IssueAsyncRayTraceGpu");
  return;
}

// `dynamic_initializer_for_'MatrixString'' @ 14116ecf0

void __cdecl NDIActorComponentLocal::_dynamic_initializer_for__MatrixString__(void)

{
  ::FString::FString(&MatrixString,L"Matrix");
  atexit(_dynamic_atexit_destructor_for__MatrixString__);
  return;
}

// `dynamic_initializer_for_'NAME_Consume'' @ 14116ed20

void __cdecl NDIDataChannelReadLocal::_dynamic_initializer_for__NAME_Consume__(void)

{
  ::FName::FName(&NAME_Consume,"Consume");
  return;
}

// `dynamic_initializer_for_'NAME_GetProbabilityAlias'' @ 14116ed40

void __cdecl
NDIArrayDistributionIntPrivate::_dynamic_initializer_for__NAME_GetProbabilityAlias__(void)

{
  ::FName::FName(&NAME_GetProbabilityAlias,"GetProbabilityAlias");
  return;
}

// `dynamic_initializer_for_'NAME_GetRandomValue'' @ 14116ed60

void __cdecl NDIArrayDistributionIntPrivate::_dynamic_initializer_for__NAME_GetRandomValue__(void)

{
  ::FName::FName(&NAME_GetRandomValue,"GetRandomValue");
  return;
}

// `dynamic_initializer_for_'NAME_Num'' @ 14116ed80

void __cdecl NDIDataChannelReadLocal::_dynamic_initializer_for__NAME_Num__(void)

{
  ::FName::FName(&NAME_Num,"Num");
  return;
}

// `dynamic_initializer_for_'NAME_Read'' @ 14116eda0

void __cdecl NDIDataChannelReadLocal::_dynamic_initializer_for__NAME_Read__(void)

{
  ::FName::FName(&NAME_Read,"Read");
  return;
}

// `dynamic_initializer_for_'NAME_ScaleSpawnCount'' @ 14116edc0

void __cdecl NDIDataChannelReadLocal::_dynamic_initializer_for__NAME_ScaleSpawnCount__(void)

{
  ::FName::FName(&NAME_ScaleSpawnCount,"ScaleSpawnCount");
  return;
}

// `dynamic_initializer_for_'NAME_SpawnConditional'' @ 14116ede0

void __cdecl NDIDataChannelReadLocal::_dynamic_initializer_for__NAME_SpawnConditional__(void)

{
  ::FName::FName(&NAME_SpawnConditional,"SpawnConditional");
  return;
}

// `dynamic_initializer_for_'NAME_SpawnDirect'' @ 14116ee00

void __cdecl NDIDataChannelReadLocal::_dynamic_initializer_for__NAME_SpawnDirect__(void)

{
  ::FName::FName(&NAME_SpawnDirect,"SpawnDirect");
  return;
}

// `dynamic_initializer_for_'ReadAsyncRayTraceName'' @ 14116ee20

void __cdecl NDIAsyncGpuTraceLocal::_dynamic_initializer_for__ReadAsyncRayTraceName__(void)

{
  ::FName::FName(&ReadAsyncRayTraceName,L"ReadAsyncRayTraceGpu");
  return;
}

// `dynamic_initializer_for_'ReserveAsyncRayTraceName'' @ 14116ee40

void __cdecl NDIAsyncGpuTraceLocal::_dynamic_initializer_for__ReserveAsyncRayTraceName__(void)

{
  ::FName::FName(&ReserveAsyncRayTraceName,L"ReserveAsyncRayTraceGpu");
  return;
}

// `dynamic_initializer_for_'ResetDataChannelLayouts'' @ 14116ee60

void __cdecl _dynamic_initializer_for__ResetDataChannelLayouts__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"fx.Niagara.DataChannels.ResetLayoutInfo",
                      L"Resets all data channel layout info used by data interfaces to access data channels."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&ResetDataChannelLayouts,pIVar5);
  ResetDataChannelLayouts._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__ResetDataChannelLayouts__);
  return;
}

// `dynamic_initializer_for_'RotationString'' @ 14116eff0

void __cdecl NDIActorComponentLocal::_dynamic_initializer_for__RotationString__(void)

{
  ::FString::FString(&RotationString,L"Rotation");
  atexit(_dynamic_atexit_destructor_for__RotationString__);
  return;
}

// `dynamic_initializer_for_'ScaleString'' @ 14116f020

void __cdecl NDIActorComponentLocal::_dynamic_initializer_for__ScaleString__(void)

{
  ::FString::FString(&ScaleString,L"Scale");
  atexit(_dynamic_atexit_destructor_for__ScaleString__);
  return;
}

// `dynamic_initializer_for_'SpawnConditionalName'' @ 14116f050

void __cdecl NDIDataChannelUtilities::_dynamic_initializer_for__SpawnConditionalName__(void)

{
  ::FName::FName(&SpawnConditionalName,L"SpawnConditional");
  return;
}

// `dynamic_initializer_for_'SpawnDirectName'' @ 14116f070

void __cdecl NDIDataChannelUtilities::_dynamic_initializer_for__SpawnDirectName__(void)

{
  ::FName::FName(&SpawnDirectName,L"SpawnDirect");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelRead_Consume'' @ 14116f090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelRead_Consume__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelRead_Consume ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Consume>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelRead_Consume");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Consume,*pFVar1,
               L"NDIDataChannelRead Consume","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelRead_PostTick'' @ 14116f120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelRead_PostTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelRead_PostTick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_PostTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelRead_PostTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_PostTick,*pFVar1,
               L"NDIDataChannelRead PostTick","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelRead_Read'' @ 14116f1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelRead_Read__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelRead_Read ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Read>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelRead_Read");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Read,*pFVar1,
               L"NDIDataChannelRead Read","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelRead_Spawn'' @ 14116f240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelRead_Spawn__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelRead_Spawn ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Spawn>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelRead_Spawn");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Spawn,*pFVar1,
               L"NDIDataChannelRead Spawn","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelRead_Tick'' @ 14116f2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelRead_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelRead_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelRead_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelRead_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelRead_Tick,*pFVar1,
               L"NDIDataChannelRead Tick","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelWrite_Append'' @ 14116f360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelWrite_Append__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelWrite_Append ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Append>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelWrite_Append");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_Append,*pFVar1,
               L"NDIDataChannelWrite Append","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelWrite_PostStageTick'' @ 14116f3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelWrite_PostStageTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelWrite_PostStageTick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_PostStageTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelWrite_PostStageTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_PostStageTick,*pFVar1,
               L"NDIDataChannelWrite PostStageTick","STATGROUP_NiagaraDataChannels",
               "STATCAT_Niagara",L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelWrite_PostTick'' @ 14116f480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelWrite_PostTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelWrite_PostTick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_PostTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelWrite_PostTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_PostTick,*pFVar1,
               L"NDIDataChannelWrite PostTick","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelWrite_PreStageTick'' @ 14116f510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelWrite_PreStageTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelWrite_PreStageTick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_PreStageTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelWrite_PreStageTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_PreStageTick,*pFVar1,
               L"NDIDataChannelWrite PreStageTick","STATGROUP_NiagaraDataChannels","STATCAT_Niagara"
               ,L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelWrite_Tick'' @ 14116f5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelWrite_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelWrite_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelWrite_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_Tick,*pFVar1,
               L"NDIDataChannelWrite Tick","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NDIDataChannelWrite_Write'' @ 14116f630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NDIDataChannelWrite_Write__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NDIDataChannelWrite_Write ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Write>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NDIDataChannelWrite_Write");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_Write,*pFVar1,
               L"NDIDataChannelWrite Write","STATGROUP_NiagaraDataChannels","STATCAT_Niagara",
               L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'ValidString'' @ 14116f6c0

void __cdecl NDIActorComponentLocal::_dynamic_initializer_for__ValidString__(void)

{
  ::FString::FString(&ValidString,L"Valid");
  atexit(_dynamic_atexit_destructor_for__ValidString__);
  return;
}

// `dynamic_initializer_for_'VarNameKey'' @ 14116f6f0

void __cdecl _dynamic_initializer_for__VarNameKey__(void)

{
  FName::FName(&VarNameKey,L"VarName");
  return;
}

// `dynamic_initializer_for_'VarTypeKey'' @ 14116f710

void __cdecl _dynamic_initializer_for__VarTypeKey__(void)

{
  FName::FName(&VarTypeKey,L"VarType");
  return;
}

// `dynamic_initializer_for_'WriteName'' @ 14116f730

void __cdecl NDIDataChannelUtilities::_dynamic_initializer_for__WriteName__(void)

{
  ::FName::FName(&WriteName,L"Write");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h__Script_Niagara_1054676924'' @ 14116f750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h__Script_Niagara_1054676924__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h__Script_Niagara_2630966010'' @ 14116f790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h__Script_Niagara_2630966010__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h__Script_Niagara_3281020523'' @ 14116f7d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h__Script_Niagara_3281020523__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h__Script_Niagara_3453546692'' @ 14116f820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h__Script_Niagara_3453546692__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h__Script_Niagara_2587792247'' @ 14116f860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h__Script_Niagara_2587792247__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h__Script_Niagara_345435679'' @ 14116f8a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h__Script_Niagara_345435679__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h__Script_Niagara_3392921874'' @ 14116f8e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h__Script_Niagara_3392921874__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h__Script_Niagara_1874325693'' @ 14116f920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h__Script_Niagara_1874325693__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NDIRenderTargetSimCacheData_h__Script_Niagara_4191372953'' @ 14116f960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NDIRenderTargetSimCacheData_h__Script_Niagara_4191372953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NDIRenderTargetSimCacheData_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NDIRenderTargetSimCacheData_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h__Script_Niagara_1238180703'' @ 14116f9b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h__Script_Niagara_1238180703__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h__Script_Niagara_4248341366'' @ 14116fa00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h__Script_Niagara_4248341366__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h__Script_Niagara_1573631510'' @ 14116fa50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h__Script_Niagara_1573631510__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h__Script_Niagara_3957975371'' @ 14116fa90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h__Script_Niagara_3957975371__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h__Script_Niagara_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h__Script_Niagara_3449089124'' @ 14116fae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h__Script_Niagara_3449089124__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h__Script_Niagara_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h__Script_Niagara_1079608791'' @ 14116fb30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h__Script_Niagara_1079608791__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h__Script_Niagara_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h__Script_Niagara_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMeshSimCacheData_h__Script_Niagara_453598953'' @ 14116fb80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMeshSimCacheData_h__Script_Niagara_453598953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMeshSimCacheData_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMeshSimCacheData_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h__Script_Niagara_1499129068'' @ 14116fbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h__Script_Niagara_1499129068__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h__Script_Niagara_2483589977'' @ 14116fc10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h__Script_Niagara_2483589977__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h__Script_Niagara_2771180250'' @ 14116fc60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h__Script_Niagara_2771180250__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererMeshProperties_h__Script_Niagara_3573854998'' @ 14116fca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererMeshProperties_h__Script_Niagara_3573854998__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererMeshProperties_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererMeshProperties_h__Script_Niagara_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h__Script_Niagara_548874017'' @ 14116fcf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h__Script_Niagara_548874017__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshArrayInterface_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h__Script_Niagara_2403214113'' @ 14116fd30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h__Script_Niagara_2403214113__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityState_h__Script_Niagara_1693804762'' @ 14116fd70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityState_h__Script_Niagara_1693804762__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityState_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h__Script_Niagara_1585316186'' @ 14116fdb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h__Script_Niagara_1585316186__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraStackSection_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h__Script_Niagara_21020187'' @ 14116fdf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h__Script_Niagara_21020187__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Niagara'' @ 14116fe40

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Niagara__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x1027f59c;
  local_res8[0].DeclarationsHash = 0x185f6cc0;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Niagara,L"/Script/Niagara",
             &Z_Registration_Info_UPackage__Script_Niagara,local_res8);
  return;
}

// NewProp_bRequiresPersistentIDs_SetBit @ 148e3fcc0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewStructOps @ 148e3fcd0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDataSetCompiledData,&UE::CoreUObject::Private::Construct<FNiagaraDataSetCompiledData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDataSetCompiledData>,&UE::CoreUObject::Private::Destruct<FNiagaraDataSetCompiledData>,&UE::CoreUObject::Private::Copy<FNiagaraDataSetCompiledData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAppendToSimCache_SetBit @ 148e3fd40

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::
NewProp_bAppendToSimCache_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// `scalar_deleting_destructor' @ 148e3fe00

void * __thiscall
TGlobalResource<FNDIDummyUAV,1>::_scalar_deleting_destructor_
          (TGlobalResource<FNDIDummyUAV,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->field_0x28);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// NewProp_bCaptureFixedNumberOfFrames_SetBit @ 148e3fe60

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::
NewProp_bCaptureFixedNumberOfFrames_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bUseTimeout_SetBit @ 148e3fe70

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bUseTimeout_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 1;
  return;
}

// NewProp_bCaptureAllFramesImmediatly_SetBit @ 148e3fe80

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::
NewProp_bCaptureAllFramesImmediatly_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 1;
  return;
}

// NewStructOps @ 148e3fe90

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheCaptureParameters,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheCaptureParameters>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheCaptureParameters>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheCaptureParameters>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheCaptureParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceActorComponent @ 148e3ff90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceActorComponent(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode @ 148e3ffd0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode(void)

{
  if (Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton;
}

// ENDIActorComponentSourceMode_StaticEnum @ 148e40010

UEnum * __cdecl ENDIActorComponentSourceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode,(UObject *)pUVar1,
                       L"ENDIActorComponentSourceMode");
  }
  return Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton;
}

// NewProp_bRequireCurrentFrameData_SetBit @ 148e40140

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::
NewProp_bRequireCurrentFrameData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UClass_UNDIDataChannelWriteSimCacheData @ 148e40220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNDIDataChannelWriteSimCacheData(void)

{
  if (Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.OuterSingleton,
               &Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite @ 148e40260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData @ 148e402a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteCompiledData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteCompiledData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteCompiledData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteCompiledData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame @ 148e40320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer @ 148e403a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer.InnerSingleton;
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

// NewStructOps @ 148e40420

void * __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDataChannelWriteCompiledData,&UE::CoreUObject::Private::Construct<FNDIDataChannelWriteCompiledData>,&UE::CoreUObject::Private::ConstructForTests<FNDIDataChannelWriteCompiledData>,&UE::CoreUObject::Private::Destruct<FNDIDataChannelWriteCompiledData>,&UE::CoreUObject::Private::Copy<FNDIDataChannelWriteCompiledData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead @ 148e40460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton;
}

// ENDIDataChannelSpawnMode_StaticEnum @ 148e404a0

UEnum * __cdecl ENDIDataChannelSpawnMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode,(UObject *)pUVar1,
                       L"ENDIDataChannelSpawnMode");
  }
  return Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton;
}

// ENDIDataChannelSpawnScaleMode_StaticEnum @ 148e404e0

UEnum * __cdecl ENDIDataChannelSpawnScaleMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnScaleMode,(UObject *)pUVar1,
                       L"ENDIDataChannelSpawnScaleMode");
  }
  return Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt @ 148e40520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.OuterSingleton;
}

// NewProp_bAutoLinkToSpawningNDC_SetBit @ 148e40560

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::
NewProp_bAutoLinkToSpawningNDC_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UScriptStruct_FNDIDistributionIntArrayEntry @ 148e40570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDistributionIntArrayEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDistributionIntArrayEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDistributionIntArrayEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDistributionIntArrayEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDistributionIntArrayEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDistributionIntArrayEntry.InnerSingleton;
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

// NewProp_bReadCurrentFrame_SetBit @ 148e405f0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_bUpdateSourceDataEveryTick_SetBit @ 148e40600

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::
NewProp_bUpdateSourceDataEveryTick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// NewStructOps @ 148e40610

void * __cdecl Z_Construct_UScriptStruct_FNDIDistributionIntArrayEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDistributionIntArrayEntry,&UE::CoreUObject::Private::Construct<FNDIDistributionIntArrayEntry>,&UE::CoreUObject::Private::ConstructForTests<FNDIDistributionIntArrayEntry>,&UE::CoreUObject::Private::Destruct<FNDIDistributionIntArrayEntry>,&UE::CoreUObject::Private::Copy<FNDIDistributionIntArrayEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit @ 148e40650

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::
NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x53) = 1;
  return;
}

// NewStructOps @ 148e40660

void * __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDataChannelWriteSimCacheFrameBuffer,&UE::CoreUObject::Private::Construct<FNDIDataChannelWriteSimCacheFrameBuffer>,&UE::CoreUObject::Private::ConstructForTests<FNDIDataChannelWriteSimCacheFrameBuffer>,&UE::CoreUObject::Private::Destruct<FNDIDataChannelWriteSimCacheFrameBuffer>,&UE::CoreUObject::Private::Copy<FNDIDataChannelWriteSimCacheFrameBuffer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOnlySpawnOnceOnSubticks_SetBit @ 148e406a0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::
NewProp_bOnlySpawnOnceOnSubticks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// Z_Construct_UPackage__Script_Niagara @ 148e407b0

UPackage * __cdecl Z_Construct_UPackage__Script_Niagara(void)

{
  if (Z_Registration_Info_UPackage__Script_Niagara.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Niagara.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Niagara.OuterSingleton;
}

// NewProp_bVisibleToGame_SetBit @ 148e40830

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGame_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bVisibleToCPUSims_SetBit @ 148e40840

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::
NewProp_bVisibleToCPUSims_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bVisibleToGPUSims_SetBit @ 148e40850

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::
NewProp_bVisibleToGPUSims_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewStructOps @ 148e40860

void * __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDataChannelWriteSimCacheFrame,&UE::CoreUObject::Private::Construct<FNDIDataChannelWriteSimCacheFrame>,&UE::CoreUObject::Private::ConstructForTests<FNDIDataChannelWriteSimCacheFrame>,&UE::CoreUObject::Private::Destruct<FNDIDataChannelWriteSimCacheFrame>,&UE::CoreUObject::Private::Copy<FNDIDataChannelWriteSimCacheFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENCPoolMethod_StaticEnum @ 148e408a0

UEnum * __cdecl ENCPoolMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENCPoolMethod,(UObject *)pUVar1,L"ENCPoolMethod");
  }
  return Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceArrayDistributionInt_SetNiagaraArrayDistributionInt @ 148e408e0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraDataInterfaceArrayDistributionInt_SetNiagaraArrayDistributionInt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceArrayDistributionInt_SetNiagaraArrayDistributionInt_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable @ 148e409d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase @ 148e40a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148e40e50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bPublishToGame_SetBit @ 148e40e80

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bPublishToCPU_SetBit @ 148e40e90

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bPublishToGPU_SetBit @ 148e40ea0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewProp_bUpdateDestinationDataEveryTick_SetBit @ 148e40eb0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::
NewProp_bUpdateDestinationDataEveryTick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
  return;
}

// NewProp_bOnlyWriteOnceOnSubticks_SetBit @ 148e40ec0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::
NewProp_bOnlyWriteOnceOnSubticks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraScriptSourceBase @ 148e40f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraScriptSourceBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraScriptSourceBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraScriptSourceBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraScriptSourceBase.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface @ 148e413f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 148e41600

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewStructOps @ 148e41620

void * __cdecl Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStackSection,&UE::CoreUObject::Private::Construct<FNiagaraStackSection>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStackSection>,&UE::CoreUObject::Private::Destruct<FNiagaraStackSection>,&UE::CoreUObject::Private::Copy<FNiagaraStackSection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister @ 148e41830

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataChannelWrite",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton,
               UNiagaraDataInterfaceDataChannelWrite::
               StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataChannelWrite>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelWrite>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton;
}

// ENiagaraTickBehavior_StaticEnum @ 148e41930

UEnum * __cdecl ENiagaraTickBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraTickBehavior,(UObject *)pUVar1,
                       L"ENiagaraTickBehavior");
  }
  return Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148e422e0

void * __thiscall FNDIDummyUAV::_scalar_deleting_destructor_(FNDIDummyUAV *this,uint param_1)

{
  FRWBuffer::~FRWBuffer(&this->Buffer);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// Z_Construct_UClass_UNDIRenderTargetSimCacheData @ 148e42330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNDIRenderTargetSimCacheData(void)

{
  if (Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.OuterSingleton,
               &Z_Construct_UClass_UNDIRenderTargetSimCacheData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNDIRenderTargetSimCacheFrame @ 148e42370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIRenderTargetSimCacheFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIRenderTargetSimCacheFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIRenderTargetSimCacheFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIRenderTargetSimCacheFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIRenderTargetSimCacheFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIRenderTargetSimCacheFrame.InnerSingleton;
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

// NewStructOps @ 148e423f0

void * __cdecl Z_Construct_UScriptStruct_FNDIRenderTargetSimCacheFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIRenderTargetSimCacheFrame,&UE::CoreUObject::Private::Construct<FNDIRenderTargetSimCacheFrame>,&UE::CoreUObject::Private::ConstructForTests<FNDIRenderTargetSimCacheFrame>,&UE::CoreUObject::Private::Destruct<FNDIRenderTargetSimCacheFrame>,&UE::CoreUObject::Private::Copy<FNDIRenderTargetSimCacheFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraValidationRuleSet @ 148e42430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraValidationRuleSet(void)

{
  if (Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton,
               &Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode @ 148e42580

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraMeshLODMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraMeshLODMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshLODMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace @ 148e425c0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase @ 148e42600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase.InnerSingleton;
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

// ENiagaraMeshPivotOffsetSpace_StaticEnum @ 148e426c0

UEnum * __cdecl ENiagaraMeshPivotOffsetSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace,(UObject *)pUVar1,
                       L"ENiagaraMeshPivotOffsetSpace");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace @ 148e42700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.OuterSingleton;
}

// ENiagaraMeshLODMode_StaticEnum @ 148e42740

UEnum * __cdecl ENiagaraMeshLODMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode,(UObject *)pUVar1,
                       L"ENiagaraMeshLODMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton;
}

// ENiagaraSortMode_StaticEnum @ 148e42780

UEnum * __cdecl ENiagaraSortMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSortMode,(UObject *)pUVar1,
                       L"ENiagaraSortMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton;
}

// NewStructOps @ 148e427c0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshPropertiesBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraMeshRendererMeshPropertiesBase,&UE::CoreUObject::Private::Construct<FNiagaraMeshRendererMeshPropertiesBase>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraMeshRendererMeshPropertiesBase>,&UE::CoreUObject::Private::Destruct<FNiagaraMeshRendererMeshPropertiesBase>,&UE::CoreUObject::Private::Copy<FNiagaraMeshRendererMeshPropertiesBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh @ 148e42800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceArrayMesh_SetNiagaraArrayMesh @ 148e42840

UFunction * __cdecl Z_Construct_UFunction_UNiagaraDataInterfaceArrayMesh_SetNiagaraArrayMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceArrayMesh_SetNiagaraArrayMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseLODRange_SetBit @ 148e42880

void __cdecl
Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_bUseLODRange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  return;
}

// NewStructOps @ 148e42890

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraMeshRendererMeshProperties,&UE::CoreUObject::Private::Construct<FNiagaraMeshRendererMeshProperties>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraMeshRendererMeshProperties>,&UE::CoreUObject::Private::Destruct<FNiagaraMeshRendererMeshProperties>,&UE::CoreUObject::Private::Copy<FNiagaraMeshRendererMeshProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraParameterDefinitionsBase @ 148e42ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraParameterDefinitionsBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceArrayMesh_SetNiagaraArrayMeshSM @ 148e42b10

UFunction * __cdecl Z_Construct_UFunction_UNiagaraDataInterfaceArrayMesh_SetNiagaraArrayMeshSM(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceArrayMesh_SetNiagaraArrayMeshSM_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface @ 148e42c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface(void)

{
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.OuterSingleton,
               &Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraRenderableMeshInterface @ 148e42c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraRenderableMeshInterface(void)

{
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton,
               &Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton;
}

// NewProp_bNewlyRegistered_SetBit @ 148e42c90

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegistered_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 1;
  return;
}

// NewProp_bNewlyRegisteredDirty_SetBit @ 148e42ca0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegisteredDirty_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 2;
  return;
}

// NewProp_bCulled_SetBit @ 148e42cb0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 4;
  return;
}

// NewProp_bPreviousCulled_SetBit @ 148e42cc0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 8;
  return;
}

// NewProp_bCulledByDistance_SetBit @ 148e42cd0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 0x10;
  return;
}

// NewProp_bCulledByInstanceCount_SetBit @ 148e42ce0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 0x20;
  return;
}

// NewProp_bCulledByVisibility_SetBit @ 148e42da0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 0x40;
  return;
}

// NewProp_bCulledByGlobalBudget_SetBit @ 148e42de0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 0x80;
  return;
}

// NewStructOps @ 148e42e10

void * __cdecl Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraScalabilityState,&UE::CoreUObject::Private::Construct<FNiagaraScalabilityState>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraScalabilityState>,&UE::CoreUObject::Private::Destruct<FNiagaraScalabilityState>,&UE::CoreUObject::Private::Copy<FNiagaraScalabilityState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData @ 148e43090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheFrame @ 148e430d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheSection @ 148e43150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheSection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheSection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheSection.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheSection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheSection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheSection.InnerSingleton;
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

// NewStructOps @ 148e431d0

void * __cdecl Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheSection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDynamicMeshSimCacheSection,&UE::CoreUObject::Private::Construct<FNDIDynamicMeshSimCacheSection>,&UE::CoreUObject::Private::ConstructForTests<FNDIDynamicMeshSimCacheSection>,&UE::CoreUObject::Private::Destruct<FNDIDynamicMeshSimCacheSection>,&UE::CoreUObject::Private::Copy<FNDIDynamicMeshSimCacheSection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode @ 148e43210

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo @ 148e43250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo.
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

// Z_Construct_UScriptStruct_FNDIDataChannelCompiledData @ 148e432d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDataChannelCompiledData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelCompiledData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDataChannelCompiledData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelCompiledData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDataChannelCompiledData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo @ 148e43350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelFunctionInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNDIDataChannelFunctionInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelFunctionInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNDIDataChannelFunctionInfo.InnerSingleton;
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

// ENiagaraDataChannelAllocationMode_StaticEnum @ 148e433d0

UEnum * __cdecl ENiagaraDataChannelAllocationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode,(UObject *)pUVar1
                       ,L"ENiagaraDataChannelAllocationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton;
}

// NewStructOps @ 148e43410

void * __cdecl Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDataChannelFunctionInfo,&UE::CoreUObject::Private::Construct<FNDIDataChannelFunctionInfo>,&UE::CoreUObject::Private::ConstructForTests<FNDIDataChannelFunctionInfo>,&UE::CoreUObject::Private::Destruct<FNDIDataChannelFunctionInfo>,&UE::CoreUObject::Private::Copy<FNDIDataChannelFunctionInfo>,&UE::CoreUObject::Private::GetStructTypeHash<FNDIDataChannelFunctionInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148e43540

void * __cdecl Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDynamicMeshSimCacheFrame,&UE::CoreUObject::Private::Construct<FNDIDynamicMeshSimCacheFrame>,&UE::CoreUObject::Private::ConstructForTests<FNDIDynamicMeshSimCacheFrame>,&UE::CoreUObject::Private::Destruct<FNDIDynamicMeshSimCacheFrame>,&UE::CoreUObject::Private::Copy<FNDIDynamicMeshSimCacheFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148e43630

void * __cdecl
Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDataChannel_GPUScriptParameterAccessInfo,&UE::CoreUObject::Private::Construct<FNDIDataChannel_GPUScriptParameterAccessInfo>,&UE::CoreUObject::Private::ConstructForTests<FNDIDataChannel_GPUScriptParameterAccessInfo>,&UE::CoreUObject::Private::Destruct<FNDIDataChannel_GPUScriptParameterAccessInfo>,&UE::CoreUObject::Private::Copy<FNDIDataChannel_GPUScriptParameterAccessInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUsedByCPU_SetBit @ 148e43870

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByCPU_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return;
}

// NewProp_bUsedByGPU_SetBit @ 148e43880

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByGPU_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x65) = 1;
  return;
}

// NewProp_bNeedsSpawnDataTable_SetBit @ 148e43890

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bNeedsSpawnDataTable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x66) = 1;
  return;
}

// NewProp_bSpawnsParticles_SetBit @ 148e438a0

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bSpawnsParticles_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x67) = 1;
  return;
}

// NewProp_bCallsWrite_SetBit @ 148e438b0

void __cdecl
Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bCallsWrite_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewStructOps @ 148e438c0

void * __cdecl Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNDIDataChannelCompiledData,&UE::CoreUObject::Private::Construct<FNDIDataChannelCompiledData>,&UE::CoreUObject::Private::ConstructForTests<FNDIDataChannelCompiledData>,&UE::CoreUObject::Private::Destruct<FNDIDataChannelCompiledData>,&UE::CoreUObject::Private::Copy<FNDIDataChannelCompiledData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData @ 148e43bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataSetCompiledData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDataSetCompiledData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataSetCompiledData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDataSetCompiledData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo @ 148e43c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableLayoutInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVariableLayoutInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableLayoutInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVariableLayoutInfo.InnerSingleton;
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

// NewStructOps @ 148e43cb0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVariableLayoutInfo,&UE::CoreUObject::Private::Construct<FNiagaraVariableLayoutInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVariableLayoutInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraVariableLayoutInfo>,&UE::CoreUObject::Private::Copy<FNiagaraVariableLayoutInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// AddPass<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_> @ 148e44310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const_&)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x288,8);
  pTVar3 = TRDGEmptyLambdaPass<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// CastChecked<UNiagaraDataInterfaceActorComponent_const_,UNiagaraDataInterface_const_> @ 148e44670

UNiagaraDataInterfaceActorComponent * __cdecl
CastChecked<UNiagaraDataInterfaceActorComponent_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceActorComponent_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceActorComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceActorComponent *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceActorComponent_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceArrayDistributionInt_const_,UNiagaraDataInterface_const_> @ 148e44730

UNiagaraDataInterfaceArrayDistributionInt * __cdecl
CastChecked<UNiagaraDataInterfaceArrayDistributionInt_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceArrayDistributionInt::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceArrayDistributionInt *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceAsyncGpuTrace_const_,UNiagaraDataInterface_const_> @ 148e447f0

UNiagaraDataInterfaceAsyncGpuTrace * __cdecl
CastChecked<UNiagaraDataInterfaceAsyncGpuTrace_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceAsyncGpuTrace::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceAsyncGpuTrace *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceActorComponent,UNiagaraDataInterface> @ 148e448b0

UNiagaraDataInterfaceActorComponent * __cdecl
CastChecked<UNiagaraDataInterfaceActorComponent,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceActorComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceActorComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceActorComponent *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceActorComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceArrayDistributionInt,UNiagaraDataInterface> @ 148e44970

UNiagaraDataInterfaceArrayDistributionInt * __cdecl
CastChecked<UNiagaraDataInterfaceArrayDistributionInt,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceArrayDistributionInt::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceArrayDistributionInt *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceAsyncGpuTrace,UNiagaraDataInterface> @ 148e44a30

UNiagaraDataInterfaceAsyncGpuTrace * __cdecl
CastChecked<UNiagaraDataInterfaceAsyncGpuTrace,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceAsyncGpuTrace::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceAsyncGpuTrace *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceDataChannelRead,UNiagaraDataInterface_const_> @ 148e44af0

UNiagaraDataInterfaceDataChannelRead * __cdecl
CastChecked<UNiagaraDataInterfaceDataChannelRead,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceDataChannelRead::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceDataChannelRead *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceDataChannelRead,UNiagaraDataInterface> @ 148e44bb0

UNiagaraDataInterfaceDataChannelRead * __cdecl
CastChecked<UNiagaraDataInterfaceDataChannelRead,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceDataChannelRead::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceDataChannelRead *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelRead>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceDataChannelWrite,UNiagaraDataInterface_const_> @ 148e44c70

UNiagaraDataInterfaceDataChannelWrite * __cdecl
CastChecked<UNiagaraDataInterfaceDataChannelWrite,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceDataChannelWrite::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceDataChannelWrite *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceDataChannelWrite,UNiagaraDataInterface> @ 148e44d30

UNiagaraDataInterfaceDataChannelWrite * __cdecl
CastChecked<UNiagaraDataInterfaceDataChannelWrite,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceDataChannelWrite::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceDataChannelWrite *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UObject,UObject> @ 148e44df0

UObject * __cdecl CastChecked<UObject,UObject>(UObject *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UObject *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UObject>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CompareItems<FNDIDistributionIntArrayEntry,int> @ 148e44e30

bool __cdecl
CompareItems<FNDIDistributionIntArrayEntry,int>
          (FNDIDistributionIntArrayEntry *param_1,FNDIDistributionIntArrayEntry *param_2,int param_3
          )

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(int *)(lVar1 + (longlong)param_2) != param_2->Value) ||
         (__real_322bcc77 <
          (float)((uint)(*(float *)(lVar1 + 4 + (longlong)param_2) - param_2->Weight) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FNiagaraMeshRendererMeshPropertiesBase,int> @ 148e44e80

bool __cdecl
CompareItems<FNiagaraMeshRendererMeshPropertiesBase,int>
          (FNiagaraMeshRendererMeshPropertiesBase *param_1,
          FNiagaraMeshRendererMeshPropertiesBase *param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  
  fVar1 = __real_38d1b717;
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar2 = FNiagaraMeshRendererMeshPropertiesBase::IsNearlyEqual
                        ((FNiagaraMeshRendererMeshPropertiesBase *)(lVar3 + (longlong)param_2),
                         param_2,fVar1);
      if (!bVar2) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FNiagaraVariableBase,int> @ 148e44ef0

bool __cdecl
CompareItems<FNiagaraVariableBase,int>
          (FNiagaraVariableBase *param_1,FNiagaraVariableBase *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(FName *)(lVar1 + (longlong)param_2) != param_2->Name) ||
         (*(int *)(lVar1 + 8 + (longlong)param_2) != (param_2->TypeDefHandle).RegisteredTypeIndex))
      {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FNDIDataChannelFunctionInfo,FNDIDataChannelFunctionInfo,int> @ 148e44f70

void __cdecl
ConstructItems<FNDIDataChannelFunctionInfo,FNDIDataChannelFunctionInfo,int>
          (void *param_1,FNDIDataChannelFunctionInfo *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x14);
    piVar4 = &(param_2->Outputs).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar3 + -3);
      *(undefined8 *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)piVar4) =
           *(undefined8 *)(piVar4 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar4[-4];
      _Src = *(void **)(piVar4 + -6);
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0xc);
      }
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar2 = *piVar4;
      _Src_00 = (((TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
                AllocatorInstance).Data;
      piVar3[3] = iVar2;
      if (iVar2 == 0) {
        piVar3[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,(ForAnyElementType *)(piVar3 + 1),iVar2,piVar3 + 4);
        memcpy(((ForAnyElementType *)(piVar3 + 1))->Data,_Src_00,(longlong)iVar2 * 0xc);
      }
      piVar3 = piVar3 + 10;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNDIDataChannelWriteSimCacheFrameBuffer,FNDIDataChannelWriteSimCacheFrameBuffer,int> @ 148e450a0

void __cdecl
ConstructItems<FNDIDataChannelWriteSimCacheFrameBuffer,FNDIDataChannelWriteSimCacheFrameBuffer,int>
          (void *param_1,FNDIDataChannelWriteSimCacheFrameBuffer *param_2,int param_3)

{
  FNiagaraTypeDefinitionHandle *pFVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    piVar5 = &param_2->Size;
    lVar6 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar6 + (longlong)piVar5) = 0;
      pFVar2 = (ForAnyElementType *)(lVar6 + (longlong)piVar5);
      iVar3 = piVar5[-2];
      _Src = (((FNDIDataChannelWriteSimCacheFrameBuffer *)(piVar5 + -4))->Data).AllocatorInstance.
             Data;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,0,pFVar2,iVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3);
      }
      piVar4[1] = *piVar5;
      *(FName *)(piVar4 + 2) = ((FNiagaraVariableBase *)(piVar5 + 1))->Name;
      pFVar1 = (FNiagaraTypeDefinitionHandle *)(piVar5 + 3);
      piVar5 = piVar5 + 8;
      piVar4[4] = pFVar1->RegisteredTypeIndex;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNDIDynamicMeshSimCacheSection,FNDIDynamicMeshSimCacheSection,int> @ 148e45190

void __cdecl
ConstructItems<FNDIDynamicMeshSimCacheSection,FNDIDynamicMeshSimCacheSection,int>
          (void *param_1,FNDIDynamicMeshSimCacheSection *param_2,int param_3)

{
  TObjectPtr<UMaterialInterface> TVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    puVar2 = (uint *)((longlong)param_1 + 8);
    puVar3 = &param_2->AllocatedTriangles;
    do {
      puVar2[-2] = *(uint *)((longlong)puVar2 + (longlong)param_2 + (-8 - (longlong)param_1));
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      TVar1.field0_0x0 =
           (TObjectPtr<UMaterialInterface>_u_0)
           ((TObjectPtr<UMaterialInterface>_u_0 *)(puVar3 + 2))->DebugPtr;
      ((TObjectPtr<UMaterialInterface>_u_0 *)(puVar2 + 2))->DebugPtr =
           (UMaterialInterface *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      puVar3 = puVar3 + 6;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraMeshRendererMeshPropertiesBase,FNiagaraMeshRendererMeshPropertiesBase,int> @ 148e45220

void __cdecl
ConstructItems<FNiagaraMeshRendererMeshPropertiesBase,FNiagaraMeshRendererMeshPropertiesBase,int>
          (void *param_1,FNiagaraMeshRendererMeshPropertiesBase *param_2,int param_3)

{
  ENiagaraMeshPivotOffsetSpace *pEVar1;
  UObject *pUVar2;
  double dVar3;
  double *pdVar4;
  TRotator<double> *pTVar5;
  
  if (param_3 != 0) {
    pdVar4 = (double *)((longlong)param_1 + 0x20);
    pTVar5 = &param_2->Rotation;
    do {
      pUVar2 = *(UObject **)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)pdVar4);
      pdVar4[-4] = (double)pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      dVar3 = (((TVector<double> *)(pTVar5 + -1))->field0_0x0)._s_0.Y;
      pdVar4[-3] = (((TVector<double> *)(pTVar5 + -1))->field0_0x0)._s_0.X;
      pdVar4[-2] = dVar3;
      pdVar4[-1] = (((TVector<double> *)(pTVar5 + -1))->field0_0x0)._s_0.Z;
      dVar3 = pTVar5->Yaw;
      *pdVar4 = pTVar5->Pitch;
      pdVar4[1] = dVar3;
      pdVar4[2] = pTVar5->Roll;
      dVar3 = (((TVector<double> *)(pTVar5 + 1))->field0_0x0)._s_0.Y;
      pdVar4[3] = (((TVector<double> *)(pTVar5 + 1))->field0_0x0)._s_0.X;
      pdVar4[4] = dVar3;
      pdVar4[5] = (((TVector<double> *)(pTVar5 + 1))->field0_0x0)._s_0.Z;
      pEVar1 = (ENiagaraMeshPivotOffsetSpace *)(pTVar5 + 2);
      pTVar5 = (TRotator<double> *)((longlong)(pTVar5 + 3) + 0x10);
      *(ENiagaraMeshPivotOffsetSpace *)(pdVar4 + 6) = *pEVar1;
      pdVar4 = pdVar4 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraVariableLayoutInfo,FNiagaraVariableLayoutInfo,int> @ 148e452d0

void __cdecl
ConstructItems<FNiagaraVariableLayoutInfo,FNiagaraVariableLayoutInfo,int>
          (void *param_1,FNiagaraVariableLayoutInfo *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ushort *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ushort *puVar4;
  ushort *puVar5;
  
  if (param_3 != 0) {
    puVar4 = &param_2->HalfComponentStart;
    puVar5 = (ushort *)((longlong)param_1 + 2);
    do {
      pFVar1 = (ForAnyElementType *)(puVar5 + 7);
      *(ushort *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)puVar4) =
           ((FNiagaraVariableLayoutInfo *)(puVar4 + -2))->FloatComponentStart;
      *puVar5 = puVar4[-1];
      puVar5[1] = *puVar4;
      puVar5[3] = ((FNiagaraTypeLayoutInfo *)(puVar4 + 2))->NumFloatComponents;
      puVar5[4] = puVar4[3];
      puVar5[5] = puVar4[4];
      puVar2 = puVar5 + 0xd;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(puVar4 + 10);
      _Src = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar4 + 6))->AllocatorInstance)
             .Data;
      *(int *)(puVar5 + 0xb) = iVar3;
      if (iVar3 == 0) {
        puVar2[0] = 0;
        puVar2[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar1,iVar3,(int *)puVar2);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 2);
      }
      puVar5 = puVar5 + 0x10;
      puVar4 = puVar4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FNDIArraySimCacheDataFrame,int> @ 148e454e0

void __cdecl DefaultConstructItems<FNDIArraySimCacheDataFrame,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FNDIDataChannelFunctionInfo,int> @ 148e45510

void __cdecl DefaultConstructItems<FNDIDataChannelFunctionInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNDIDataChannelRead_EmitterSpawnInfo,int> @ 148e45550

void __cdecl
DefaultConstructItems<FNDIDataChannelRead_EmitterSpawnInfo,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FNDIDataChannelWriteSimCacheFrame,int> @ 148e45580

void __cdecl DefaultConstructItems<FNDIDataChannelWriteSimCacheFrame,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 10) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNDIDataChannelWriteSimCacheFrameBuffer,int> @ 148e455c0

void __cdecl
DefaultConstructItems<FNDIDataChannelWriteSimCacheFrameBuffer,int>(void *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      *(undefined4 *)(lVar2 + 0xc) = 0;
      iVar1 = FNiagaraTypeDefinitionHandle::Register
                        ((FNiagaraTypeDefinitionHandle *)(lVar2 + 0x10),
                         &FNiagaraTypeDefinition::Vec4Def);
      *(int *)(lVar2 + 0x10) = iVar1;
      lVar2 = lVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNDIRenderTargetSimCacheFrame,int> @ 148e45630

void __cdecl DefaultConstructItems<FNDIRenderTargetSimCacheFrame,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0x13;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1d) = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0x21) = 0xff;
      *(undefined8 *)(puVar1 + 10) = FIoChunkId::InvalidChunkId.Id._0_8_;
      puVar1[0xc] = FIoChunkId::InvalidChunkId.Id._8_4_;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x10;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraMeshRendererMeshPropertiesBase,int> @ 148e45690

void __cdecl
DefaultConstructItems<FNiagaraMeshRendererMeshPropertiesBase,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  double *pdVar3;
  
  if (param_2 != 0) {
    pdVar3 = (double *)((longlong)param_1 + 0x20);
    do {
      pdVar3[-4] = 0.0;
      uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      pdVar3[-3] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      pdVar3[-2] = (double)uVar1;
      pdVar3[-1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *pdVar3 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      pdVar3[1] = dVar2;
      pdVar3[2] = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar3[3] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar3[4] = (double)uVar1;
      pdVar3[5] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined1 *)(pdVar3 + 6) = 0;
      param_2 = param_2 + -1;
      pdVar3 = pdVar3 + 0xb;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNDIDataChannelFunctionInfo,int> @ 148e45740

void __cdecl
DestructItems<FNDIDataChannelFunctionInfo,int>(FNDIDataChannelFunctionInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Inputs;
    pFVar1 = pTVar2[1].AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FNDIDataChannelFunctionInfo *)(pTVar2 + 2);
  }
  return;
}

// DestructItems<FNDIDataChannelWriteSimCacheFrame,int> @ 148e45790

void __cdecl
DestructItems<FNDIDataChannelWriteSimCacheFrame,int>
          (FNDIDataChannelWriteSimCacheFrame *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNDIDataChannelWriteSimCacheFrameBuffer,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->VariableData;
    do {
      DestructItems<FNDIDataChannelWriteSimCacheFrameBuffer,int>
                ((FNDIDataChannelWriteSimCacheFrameBuffer *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNDIDataChannelWriteSimCacheFrameBuffer,int> @ 148e457e0

void __cdecl
DestructItems<FNDIDataChannelWriteSimCacheFrameBuffer,int>
          (FNDIDataChannelWriteSimCacheFrameBuffer *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNDIDynamicMeshSimCacheFrame,int> @ 148e45820

void __cdecl
DestructItems<FNDIDynamicMeshSimCacheFrame,int>(FNDIDynamicMeshSimCacheFrame *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->VertexData;
    do {
      pFVar1 = (((TArray<FNDIDynamicMeshSimCacheSection,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNDIRenderTargetSimCacheFrame,int> @ 148e45880

void __cdecl
DestructItems<FNDIRenderTargetSimCacheFrame,int>(FNDIRenderTargetSimCacheFrame *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FBulkData::~FBulkData((FBulkData *)&param_1->BulkData);
    param_1 = (FNDIRenderTargetSimCacheFrame *)(&param_1->BulkData + 1);
  }
  return;
}

// DestructItems<FNiagaraDataChannelVariableBuffer,int> @ 148e458c0

void __cdecl
DestructItems<FNiagaraDataChannelVariableBuffer,int>
          (FNiagaraDataChannelVariableBuffer *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PrevData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraVariable,int> @ 148e45910

void __cdecl DestructItems<FNiagaraVariable,int>(FNiagaraVariable *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->VarData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraVariableLayoutInfo,int> @ 148e45950

void __cdecl
DestructItems<FNiagaraVariableLayoutInfo,int>(FNiagaraVariableLayoutInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->LayoutInfo).ComponentsOffsets;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int> @ 148e45990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
          (TRefCountPtr<FNiagaraDataBuffer> *param_1,int param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  do {
    if (param_2 == 0) {
      return;
    }
    pFVar1 = param_1->Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      if (((int)pFVar1->_padding_ < 1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

// DestructItems<TSharedPtr<EditorExposedVectorConstant,1>,int> @ 148e45a10

void __cdecl
DestructItems<TSharedPtr<EditorExposedVectorConstant,1>,int>
          (TSharedPtr<EditorExposedVectorConstant,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<EditorExposedVectorCurveConstant,1>,int> @ 148e45a50

void __cdecl
DestructItems<TSharedPtr<EditorExposedVectorCurveConstant,1>,int>
          (TSharedPtr<EditorExposedVectorCurveConstant,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int> @ 148e45a90

void __cdecl
DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int>
          (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FNiagaraDataBufferReadback,1>,int> @ 148e45ad0

void __cdecl
DestructItems<TSharedPtr<FNiagaraDataBufferReadback,1>,int>
          (TSharedPtr<FNiagaraDataBufferReadback,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData201>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e47710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData201>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData201>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e47861;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e47a55;
  }
LAB_148e47861:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e4793f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e4793f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e47a55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::TSTR_FUpdateData176>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e47a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData_::__l29::TSTR_FUpdateData176>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::TSTR_FUpdateData176>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e47be1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e47dd5;
  }
LAB_148e47be1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e47cbf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e47cbf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e47dd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::TSTR_FUpdateData501>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e47e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl_::__l2::TSTR_FUpdateData501>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::TSTR_FUpdateData501>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e47f61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e48155;
  }
LAB_148e47f61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e4803f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e4803f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e48155:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::TSTR_NDIConsoleVariable_InitRT219>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e48190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData_::__l5::TSTR_NDIConsoleVariable_InitRT219>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::TSTR_NDIConsoleVariable_InitRT219>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e482e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e484d5;
  }
LAB_148e482e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e483bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e483bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e484d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::TSTR_NDISimCacheGPUBeginWrite868>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e48510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite_::__l5::TSTR_NDISimCacheGPUBeginWrite868>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::TSTR_NDISimCacheGPUBeginWrite868>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e48661;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e48855;
  }
LAB_148e48661:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e4873f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e4873f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e48855:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::TSTR_NDISimCacheGPUBeginWrite892>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e48890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite_::__l11::TSTR_NDISimCacheGPUBeginWrite892>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::TSTR_NDISimCacheGPUBeginWrite892>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e489e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e48bd5;
  }
LAB_148e489e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e48abf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e48abf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e48bd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::TSTR_NDISimCacheGPUWriteFrame957>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e48c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame_::__l23::TSTR_NDISimCacheGPUWriteFrame957>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::TSTR_NDISimCacheGPUWriteFrame957>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e48d61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e48f55;
  }
LAB_148e48d61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e48e3f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e48e3f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e48f55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy324>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e48f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy324>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy324>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e490e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e492d5;
  }
LAB_148e490e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e491bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e491bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e492d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy533>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e49310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy533>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy533>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e49461;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e49655;
  }
LAB_148e49461:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e4953f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e4953f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e49655:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy722>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148e49690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy722>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy722>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148e497e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148e499d5;
  }
LAB_148e497e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148e498bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e498bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148e499d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EvalConditional<int> @ 148e49a10

bool __cdecl EvalConditional<int>(ENiagaraConditionalOperator param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_1) {
  case Equals:
    return *param_2 == *param_3;
  case NotEqual:
    return *param_2 != *param_3;
  case LessThan:
    return *param_2 < *param_3;
  case LessThanOrEqual:
    return *param_2 <= *param_3;
  case GreaterThan:
    return *param_3 < *param_2;
  case GreaterThanOrEqual:
    return *param_3 <= *param_2;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraCommon.h"
                     ,0x788,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// EvalConditional<float> @ 148e49ad0

bool __cdecl
EvalConditional<float>(ENiagaraConditionalOperator param_1,float *param_2,float *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_1) {
  case Equals:
    if (*param_3 == *param_2) {
      return true;
    }
    break;
  case NotEqual:
    if (*param_3 != *param_2) {
      return true;
    }
    break;
  case LessThan:
    return *param_2 < *param_3;
  case LessThanOrEqual:
    return *param_2 < *param_3 || *param_2 == *param_3;
  case GreaterThan:
    return *param_3 < *param_2;
  case GreaterThanOrEqual:
    return *param_3 < *param_2 || *param_3 == *param_2;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraCommon.h"
                       ,0x788,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// EvalConditional<FFloat16> @ 148e49ba0

bool __cdecl
EvalConditional<FFloat16>(ENiagaraConditionalOperator param_1,FFloat16 *param_2,FFloat16 *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  
  switch(param_1) {
  case Equals:
    fVar4 = FGenericPlatformMath::LoadHalf(&param_3->Encoded);
    fVar5 = FGenericPlatformMath::LoadHalf(&param_2->Encoded);
    if (fVar5 == fVar4) {
      return true;
    }
    break;
  case NotEqual:
    fVar4 = FGenericPlatformMath::LoadHalf(&param_3->Encoded);
    fVar5 = FGenericPlatformMath::LoadHalf(&param_2->Encoded);
    if (fVar5 != fVar4) {
      return true;
    }
    break;
  case LessThan:
    fVar4 = FGenericPlatformMath::LoadHalf(&param_2->Encoded);
    fVar5 = FGenericPlatformMath::LoadHalf(&param_3->Encoded);
    return fVar4 < fVar5;
  case LessThanOrEqual:
    fVar4 = FGenericPlatformMath::LoadHalf(&param_2->Encoded);
    fVar5 = FGenericPlatformMath::LoadHalf(&param_3->Encoded);
    return fVar4 <= fVar5;
  case GreaterThan:
    fVar4 = FGenericPlatformMath::LoadHalf(&param_2->Encoded);
    fVar5 = FGenericPlatformMath::LoadHalf(&param_3->Encoded);
    return fVar5 < fVar4;
  case GreaterThanOrEqual:
    fVar4 = FGenericPlatformMath::LoadHalf(&param_2->Encoded);
    fVar5 = FGenericPlatformMath::LoadHalf(&param_3->Encoded);
    return fVar5 <= fVar4;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraCommon.h"
                       ,0x788,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// GetFullNameForCastLogError<UNiagaraDataInterface_const_> @ 148e4a2e0

FString * __cdecl
GetFullNameForCastLogError<UNiagaraDataInterface_const_>
          (FString *__return_storage_ptr__,UNiagaraDataInterface *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UNiagaraDataInterface> @ 148e4a310

FString * __cdecl
GetFullNameForCastLogError<UNiagaraDataInterface>
          (FString *__return_storage_ptr__,UNiagaraDataInterface *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceActorComponent_const_> @ 148e4a3e0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceActorComponent_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceActorComponent::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceArrayDistributionInt_const_> @ 148e4a420

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceArrayDistributionInt_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceArrayDistributionInt::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace_const_> @ 148e4a460

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceAsyncGpuTrace::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceActorComponent> @ 148e4a4a0

FString * __cdecl GetTypeName<UNiagaraDataInterfaceActorComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceActorComponent::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceArrayDistributionInt> @ 148e4a4e0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceArrayDistributionInt>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceArrayDistributionInt::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace> @ 148e4a520

FString * __cdecl GetTypeName<UNiagaraDataInterfaceAsyncGpuTrace>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceAsyncGpuTrace::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceDataChannelRead> @ 148e4a560

FString * __cdecl GetTypeName<UNiagaraDataInterfaceDataChannelRead>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceDataChannelRead::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceDataChannelWrite> @ 148e4a5a0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceDataChannelWrite::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UObject> @ 148e4a5e0

FString * __cdecl GetTypeName<UObject>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableBase,`NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>_>_> @ 148e4a620

void __cdecl
AlgoImpl::
HeapSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableBase,_NDIDataChannelUtilities::SortParameters_::__l2::<lambda_1>_>_>
          (FNiagaraVariableBase *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNiagaraVariableBase,_void___cdecl_NDIDataChannelUtilities::SortParameters(TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FNiagaraVariableBase *pFVar1;
  FNiagaraVariableBase *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FNiagaraVariableBase *pFVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar12 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_148e4a761:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar11 = param_1 + lVar10;
          do {
            FVar3 = param_1->Name;
            iVar12 = (param_1->TypeDefHandle).RegisteredTypeIndex;
            param_1->Name = pFVar11->Name;
            (param_1->TypeDefHandle).RegisteredTypeIndex =
                 (pFVar11->TypeDefHandle).RegisteredTypeIndex;
            pFVar11->Name = FVar3;
            (pFVar11->TypeDefHandle).RegisteredTypeIndex = iVar12;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar9 = iVar12 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar12;
                bVar5 = `NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,pFVar2,pFVar1);
                if (!bVar5) break;
                FVar3 = pFVar2->Name;
                iVar12 = (pFVar2->TypeDefHandle).RegisteredTypeIndex;
                pFVar2->Name = pFVar1->Name;
                (pFVar2->TypeDefHandle).RegisteredTypeIndex =
                     (pFVar1->TypeDefHandle).RegisteredTypeIndex;
                pFVar1->Name = FVar3;
                (pFVar1->TypeDefHandle).RegisteredTypeIndex = iVar12;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pFVar11 = pFVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar11 = param_1 + iVar8;
    pFVar1 = param_1 + iVar6;
    bVar5 = `NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pFVar1,pFVar11);
    if (!bVar5) goto LAB_148e4a761;
    FVar3 = pFVar1->Name;
    iVar6 = (pFVar1->TypeDefHandle).RegisteredTypeIndex;
    pFVar1->Name = pFVar11->Name;
    (pFVar1->TypeDefHandle).RegisteredTypeIndex = (pFVar11->TypeDefHandle).RegisteredTypeIndex;
    iVar7 = iVar8 * 2 + 1;
    pFVar11->Name = FVar3;
    (pFVar11->TypeDefHandle).RegisteredTypeIndex = iVar6;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<UNDIDataChannelWriteSimCacheData> @ 148e4a890

void __cdecl InternalConstructor<UNDIDataChannelWriteSimCacheData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNDIDataChannelWriteSimCacheData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNDIRenderTargetSimCacheData> @ 148e4a8e0

void __cdecl InternalConstructor<UNDIRenderTargetSimCacheData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNDIRenderTargetSimCacheData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraConvertInPlaceUtilityBase> @ 148e4a930

void __cdecl InternalConstructor<UNiagaraConvertInPlaceUtilityBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraConvertInPlaceUtilityBase__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceActorComponent> @ 148e4a960

void __cdecl InternalConstructor<UNiagaraDataInterfaceActorComponent>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar3 = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceActorComponent__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    *(undefined1 *)&this[2]._padding_ = 1;
    pFVar2 = operator_new(0x60);
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar2[2]._padding_ = 0;
      pFVar2[2].SourceDIName.ComparisonIndex = 0;
      pFVar2[2].SourceDIName.Number = 0;
      pFVar2[4].SourceDIName.ComparisonIndex = 0;
      pFVar2[4].SourceDIName.Number = 0;
      pFVar2[5].SourceDIName.ComparisonIndex = 0;
      pFVar2[5].SourceDIName.Number = 0;
      pFVar2->_padding_ = (longlong)&___7FNDIProxy_NDIActorComponentLocal__6B_;
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2[1]._padding_ = 0;
      pFVar2[1].SourceDIName.ComparisonIndex = 0;
      pFVar2[1].SourceDIName.Number = 0;
      pFVar2[3]._padding_ = 0;
      pFVar2[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar2[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar2[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar2[4]._padding_ + 4) = 0;
      pFVar2[5]._padding_ = 0;
      pFVar3 = pFVar2;
    }
    pFVar2 = (this->Proxy).Ptr;
    if ((pFVar2 != pFVar3) &&
       ((this->Proxy).Ptr = pFVar3, pFVar2 != (FNiagaraDataInterfaceProxy *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&this[1].Proxy.Ptr = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceArrayDistributionInt> @ 148e4aaa0

void __cdecl
InternalConstructor<UNiagaraDataInterfaceArrayDistributionInt>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNiagaraDataInterfaceProxy *pFVar4;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar4 = (FNiagaraDataInterfaceProxy *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayDistributionInt__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar3 = operator_new(0x38);
    if (pFVar3 != (FNiagaraDataInterfaceProxy *)0x0) {
      *(undefined2 *)((longlong)&pFVar3[1].SourceDIName.ComparisonIndex.Value + 1) = 0;
      *(undefined1 *)((longlong)&pFVar3[1].SourceDIName.ComparisonIndex.Value + 3) = 0;
      pFVar3[3]._padding_ = 0;
      (pFVar3->SourceDIName).ComparisonIndex = 0;
      (pFVar3->SourceDIName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FNDIProxy_NDIArrayDistributionIntPrivate__6B_;
      pFVar3[1]._padding_ = 0;
      *(undefined1 *)&pFVar3[1].SourceDIName.ComparisonIndex.Value = 1;
      pFVar3[1].SourceDIName.Number = 0;
      pFVar3[2]._padding_ = 0;
      pFVar3[2].SourceDIName.ComparisonIndex = 0;
      pFVar3[2].SourceDIName.Number = 0;
      pFVar4 = pFVar3;
    }
    pFVar3 = (this->Proxy).Ptr;
    if ((pFVar3 != pFVar4) &&
       ((this->Proxy).Ptr = pFVar4, pFVar3 != (FNiagaraDataInterfaceProxy *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
    pFVar4 = (this->Proxy).Ptr;
    if ((pFVar4 == (FNiagaraDataInterfaceProxy *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4[1]._padding_ = (longlong)this;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceArrayMesh> @ 148e4ab90

void __cdecl InternalConstructor<UNiagaraDataInterfaceArrayMesh>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceArray *this;
  
  this = (UNiagaraDataInterfaceArray *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceArray *)0x0) {
    UNiagaraDataInterfaceArray::UNiagaraDataInterfaceArray(this,param_1);
    this->_padding_ =
         (longlong)&UNiagaraDataInterfaceArrayMesh::_vftable__for__UNiagaraDataInterfaceRWBase__;
    this->_padding_ =
         (longlong)
         &UNiagaraDataInterfaceArrayMesh::_vftable__for__INiagaraSimCacheCustomStorageInterface__;
    this[1]._padding_ = (longlong)&___7UNiagaraDataInterfaceArrayMesh__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceAsyncGpuTrace> @ 148e4abe0

void __cdecl InternalConstructor<UNiagaraDataInterfaceAsyncGpuTrace>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAsyncGpuTrace__6B_;
    pFVar2 = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined1 *)&this[1]._padding_ = 0;
    pFVar1 = operator_new(0x60);
    if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar1[2]._padding_ = 0;
      pFVar1[2].SourceDIName.ComparisonIndex = 0;
      pFVar1[2].SourceDIName.Number = 0;
      pFVar1[4].SourceDIName.ComparisonIndex = 0;
      pFVar1[4].SourceDIName.Number = 0;
      pFVar1[5].SourceDIName.ComparisonIndex = 0;
      pFVar1[5].SourceDIName.Number = 0;
      pFVar1->_padding_ = (longlong)&___7FNiagaraDataIntefaceProxyAsyncGpuTrace__6B_;
      (pFVar1->SourceDIName).ComparisonIndex = 0;
      (pFVar1->SourceDIName).Number = 0;
      pFVar1[1]._padding_ = 0;
      pFVar1[1].SourceDIName.ComparisonIndex = 0;
      pFVar1[1].SourceDIName.Number = 0;
      pFVar1[3]._padding_ = 0;
      pFVar1[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar1[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar1[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar1[4]._padding_ + 4) = 0;
      pFVar1[5]._padding_ = 0;
      pFVar2 = pFVar1;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148e4ac95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceConsoleVariable> @ 148e4acb0

void __cdecl InternalConstructor<UNiagaraDataInterfaceConsoleVariable>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceConsoleVariable__6B_;
    pFVar1 = operator_new(0x60);
    pFVar2 = (FNiagaraDataInterfaceProxy *)0x0;
    if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar1[2]._padding_ = 0;
      pFVar1[2].SourceDIName.ComparisonIndex = 0;
      pFVar1[2].SourceDIName.Number = 0;
      pFVar1[4].SourceDIName.ComparisonIndex = 0;
      pFVar1[4].SourceDIName.Number = 0;
      pFVar1[5].SourceDIName.ComparisonIndex = 0;
      pFVar1[5].SourceDIName.Number = 0;
      (pFVar1->SourceDIName).ComparisonIndex = 0;
      (pFVar1->SourceDIName).Number = 0;
      pFVar1->_padding_ = (longlong)&___7FNDIProxy_NDIConsoleVariableLocal__6B_;
      pFVar1[1]._padding_ = 0;
      pFVar1[1].SourceDIName.ComparisonIndex = 0;
      pFVar1[1].SourceDIName.Number = 0;
      pFVar1[3]._padding_ = 0;
      pFVar1[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar1[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar1[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar1[4]._padding_ + 4) = 0;
      pFVar1[5]._padding_ = 0;
      pFVar2 = pFVar1;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148e4ad4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceDataChannelRead> @ 148e4ad60

void __cdecl InternalConstructor<UNiagaraDataInterfaceDataChannelRead>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceRWBase *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this = (UNiagaraDataInterfaceRWBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    puVar2 = (undefined8 *)0x0;
    *(undefined ***)this = &___7UNiagaraDataInterfaceDataChannelRead__6B_;
    *(undefined8 *)(this + 1) = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1].field_0x8);
    *(undefined4 *)&this[1].field_0x18 = 0x10001;
    this[1].field_0x1c = 1;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x24 = 0x80;
    *(undefined4 *)&this[2].field_0x28 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x2c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x10000;
    this[3].field_0x18 = 0;
    puVar1 = operator_new(0x60);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[9] = 0;
      puVar1[0xb] = 0;
      *puVar1 = &___7FNiagaraDataInterfaceProxy_DataChannelRead__6B_;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      puVar1[10] = 0;
      puVar2 = puVar1;
    }
    puVar1 = *(undefined8 **)&this->field_0x28;
    if ((puVar1 != puVar2) &&
       (*(undefined8 **)&this->field_0x28 = puVar2, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148e4ae7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceDataChannelWrite> @ 148e4ae90

void __cdecl InternalConstructor<UNiagaraDataInterfaceDataChannelWrite>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNiagaraDataInterfaceDataChannelWrite::_vftable__for__UNiagaraDataInterface__;
    *(undefined4 *)&this[1]._padding_ = 0x1000000;
    pFVar2 = (FNiagaraDataInterfaceProxy *)0x0;
    this[1]._padding_ =
         (longlong)
         &UNiagaraDataInterfaceDataChannelWrite::
          _vftable__for__INiagaraSimCacheCustomStorageInterface__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    this[1]._padding_ = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined4 *)&this[2].field_0x30 = 0;
    *(undefined4 *)&this[2].field_0x34 = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x10000;
    *(undefined1 *)&this[3].Proxy.Ptr = 0;
    FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData
              ((FNiagaraDataSetCompiledData *)&this[3].field_0x30);
    pFVar1 = operator_new(0x60);
    if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
      (pFVar1->SourceDIName).ComparisonIndex = 0;
      (pFVar1->SourceDIName).Number = 0;
      pFVar1->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy_DataChannelWrite__6B_;
      pFVar1[1]._padding_ = 0;
      pFVar1[1].SourceDIName.ComparisonIndex = 0;
      pFVar1[1].SourceDIName.Number = 0;
      pFVar1[3]._padding_ = 0;
      pFVar1[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar1[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar1[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar1[4]._padding_ + 4) = 0;
      pFVar1[5]._padding_ = 0;
      pFVar1[5].SourceDIName.ComparisonIndex.Value = 0;
      pFVar2 = pFVar1;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148e4afbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceDynamicMeshSimCacheData> @ 148e4afd0

void __cdecl
InternalConstructor<UNiagaraDataInterfaceDynamicMeshSimCacheData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceDynamicMeshSimCacheData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UNiagaraParameterDefinitionsBase> @ 148e4b020

void __cdecl InternalConstructor<UNiagaraParameterDefinitionsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraParameterDefinitionsBase__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraRenderableMeshArrayInterface> @ 148e4b050

void __cdecl InternalConstructor<UNiagaraRenderableMeshArrayInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNiagaraRenderableMeshArrayInterface__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraRenderableMeshInterface> @ 148e4b080

void __cdecl InternalConstructor<UNiagaraRenderableMeshInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNiagaraRenderableMeshInterface__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraScriptSourceBase> @ 148e4b0b0

void __cdecl InternalConstructor<UNiagaraScriptSourceBase>(FObjectInitializer *param_1)

{
  if ((UNiagaraScriptSourceBase *)param_1->Obj != (UNiagaraScriptSourceBase *)0x0) {
    UNiagaraScriptSourceBase::UNiagaraScriptSourceBase
              ((UNiagaraScriptSourceBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraSimCacheCustomStorageInterface> @ 148e4b0d0

void __cdecl
InternalConstructor<UNiagaraSimCacheCustomStorageInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNiagaraSimCacheCustomStorageInterface__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraValidationRuleSet> @ 148e4b100

void __cdecl InternalConstructor<UNiagaraValidationRuleSet>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraValidationRuleSet__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNDIDataChannelWriteSimCacheData> @ 148e4b140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNDIDataChannelWriteSimCacheData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNDIDataChannelWriteSimCacheData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNDIDataChannelWriteSimCacheData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNDIRenderTargetSimCacheData> @ 148e4b210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNDIRenderTargetSimCacheData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNDIRenderTargetSimCacheData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNDIRenderTargetSimCacheData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraConvertInPlaceUtilityBase> @ 148e4b2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraConvertInPlaceUtilityBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraConvertInPlaceUtilityBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraConvertInPlaceUtilityBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceActorComponent> @ 148e4b380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceActorComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceActorComponent::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceActorComponent__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    *(undefined1 *)&this[2]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayDistributionInt> @ 148e4b450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayDistributionInt>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceArrayDistributionInt::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayDistributionInt__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayMesh> @ 148e4b510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayMesh>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceArray *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceArrayMesh::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceArray *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceArray *)0x0) {
    UNiagaraDataInterfaceArray::UNiagaraDataInterfaceArray(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNiagaraDataInterfaceArrayMesh::_vftable__for__UNiagaraDataInterfaceRWBase__;
    this->_padding_ =
         (longlong)
         &UNiagaraDataInterfaceArrayMesh::_vftable__for__INiagaraSimCacheCustomStorageInterface__;
    this[1]._padding_ = (longlong)&___7UNiagaraDataInterfaceArrayMesh__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAsyncGpuTrace> @ 148e4b5e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAsyncGpuTrace>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceAsyncGpuTrace::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAsyncGpuTrace__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceConsoleVariable> @ 148e4b6a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceConsoleVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceConsoleVariable::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceConsoleVariable__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelRead> @ 148e4b750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelRead>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceDataChannelRead::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceDataChannelRead__6B_;
    *(undefined8 *)(this + 1) = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1].field_0x8);
    *(undefined4 *)&this[1].field_0x18 = 0x10001;
    this[1].field_0x1c = 1;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x24 = 0x80;
    *(undefined4 *)&this[2].field_0x28 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x2c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x10000;
    this[3].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelWrite> @ 148e4b880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelWrite>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceDataChannelWrite::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNiagaraDataInterfaceDataChannelWrite::_vftable__for__UNiagaraDataInterface__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ =
         (longlong)
         &UNiagaraDataInterfaceDataChannelWrite::
          _vftable__for__INiagaraSimCacheCustomStorageInterface__;
    *(undefined4 *)&this[1]._padding_ = 0x1000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    this[1]._padding_ = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined4 *)&this[2].field_0x30 = 0;
    *(undefined4 *)&this[2].field_0x34 = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x10000;
    *(undefined1 *)&this[3].Proxy.Ptr = 0;
    FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData
              ((FNiagaraDataSetCompiledData *)&this[3].field_0x30);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDynamicMeshSimCacheData> @ 148e4b9d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDynamicMeshSimCacheData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceDynamicMeshSimCacheData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraDataInterfaceDynamicMeshSimCacheData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraParameterDefinitionsBase> @ 148e4baa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraParameterDefinitionsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraParameterDefinitionsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraParameterDefinitionsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraRenderableMeshArrayInterface> @ 148e4bb50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraRenderableMeshArrayInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraRenderableMeshArrayInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraRenderableMeshArrayInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraRenderableMeshInterface> @ 148e4bc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraRenderableMeshInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraRenderableMeshInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraRenderableMeshInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraScriptSourceBase> @ 148e4bcb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraScriptSourceBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraScriptSourceBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraScriptSourceBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSimCacheCustomStorageInterface> @ 148e4bd70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSimCacheCustomStorageInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSimCacheCustomStorageInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraSimCacheCustomStorageInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraValidationRuleSet> @ 148e4be20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraValidationRuleSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraValidationRuleSet::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraValidationRuleSet__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableBase,`NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>_>_> @ 148e4bee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableBase,_NDIDataChannelUtilities::SortParameters_::__l2::<lambda_1>_>_>
          (FNiagaraVariableBase *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNiagaraVariableBase,_void___cdecl_NDIDataChannelUtilities::SortParameters(TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  FNiagaraVariableBase *pFVar6;
  FNiagaraVariableBase *pFVar7;
  FNiagaraVariableBase *pFVar8;
  FNiagaraVariableBase **ppFVar9;
  int iVar10;
  FNiagaraVariableBase *pFVar11;
  FNiagaraVariableBase *pFVar12;
  FNiagaraVariableBase *pFVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  FNiagaraVariableBase *local_358;
  FNiagaraVariableBase *local_348;
  FNiagaraVariableBase *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppFVar9 = &local_348;
    do {
      pFVar13 = ppFVar9[1];
      pFVar12 = *ppFVar9;
      local_358 = ppFVar9[2];
      iVar5 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0xc) + 1;
      pFVar11 = pFVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148e4bfc0:
        if (8 < iVar5) {
          pFVar6 = pFVar13 + 1;
          iVar5 = iVar5 / 2;
          FVar1 = pFVar11[iVar5].Name;
          iVar2 = pFVar11[iVar5].TypeDefHandle.RegisteredTypeIndex;
          pFVar11[iVar5].Name = pFVar11->Name;
          pFVar11[iVar5].TypeDefHandle.RegisteredTypeIndex =
               (pFVar11->TypeDefHandle).RegisteredTypeIndex;
          pFVar11->Name = FVar1;
          (pFVar11->TypeDefHandle).RegisteredTypeIndex = iVar2;
          pFVar12 = pFVar11;
LAB_148e4c006:
          pFVar8 = pFVar12;
          pFVar12 = pFVar8 + 1;
          if (pFVar12 <= pFVar13) goto code_r0x000148e4c00f;
          goto LAB_148e4c021;
        }
        for (; pFVar6 = pFVar11, pFVar12 = pFVar11, pFVar11 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar8 = pFVar6, pFVar12 = pFVar12 + 1, pFVar12 <= pFVar13) {
            bVar3 = `NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,pFVar8,pFVar12);
            pFVar6 = pFVar12;
            if (!bVar3) {
              pFVar6 = pFVar8;
            }
          }
          FVar1 = pFVar8->Name;
          iVar10 = (pFVar8->TypeDefHandle).RegisteredTypeIndex;
          pFVar8->Name = pFVar13->Name;
          (pFVar8->TypeDefHandle).RegisteredTypeIndex = (pFVar13->TypeDefHandle).RegisteredTypeIndex
          ;
          pFVar13->Name = FVar1;
          (pFVar13->TypeDefHandle).RegisteredTypeIndex = iVar10;
        }
        goto LAB_148e4c153;
      }
LAB_148e4c13a:
      HeapSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableBase,_NDIDataChannelUtilities::SortParameters_::__l2::<lambda_1>_>_>
                (pFVar12,iVar5,param_3,param_4);
LAB_148e4c153:
      ppFVar9 = ppFVar9 + -3;
    } while (&local_348 <= ppFVar9);
  }
  return;
code_r0x000148e4c00f:
  bVar3 = `NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,pFVar11,pFVar12);
  if (!bVar3) goto LAB_148e4c006;
LAB_148e4c021:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar11) break;
    bVar3 = `NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pFVar6,pFVar11);
  } while (!bVar3);
  if (pFVar12 <= pFVar6) {
    FVar1 = pFVar12->Name;
    iVar5 = pFVar8[1].TypeDefHandle.RegisteredTypeIndex;
    pFVar12->Name = pFVar6->Name;
    pFVar8[1].TypeDefHandle.RegisteredTypeIndex = pFVar7[-1].TypeDefHandle.RegisteredTypeIndex;
    pFVar6->Name = FVar1;
    pFVar7[-1].TypeDefHandle.RegisteredTypeIndex = iVar5;
    goto LAB_148e4c006;
  }
  iVar5 = (pFVar11->TypeDefHandle).RegisteredTypeIndex;
  FVar1 = pFVar11->Name;
  iVar10 = iVar10 + -1;
  pFVar11->Name = pFVar6->Name;
  (pFVar11->TypeDefHandle).RegisteredTypeIndex = pFVar7[-1].TypeDefHandle.RegisteredTypeIndex;
  pFVar6->Name = FVar1;
  pFVar7[-1].TypeDefHandle.RegisteredTypeIndex = iVar5;
  lVar4 = (longlong)pFVar6 + (-0xc - (longlong)pFVar11);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)pFVar13 - (longlong)pFVar12) / 0xc) {
    if (pFVar12 < pFVar13) {
      *ppFVar9 = pFVar12;
      ppFVar9[1] = pFVar13;
      *(int *)(ppFVar9 + 2) = iVar10;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar6 <= pFVar11 + 1) goto LAB_148e4c153;
    pFVar13 = pFVar7 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar6) {
      *ppFVar9 = pFVar11;
      ppFVar9[1] = pFVar7 + -2;
      *(int *)(ppFVar9 + 2) = iVar10;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar13 <= pFVar12) goto LAB_148e4c153;
  }
  iVar5 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0xc) + 1;
  pFVar11 = pFVar12;
  if (iVar10 == 0) goto LAB_148e4c13a;
  goto LAB_148e4bfc0;
}

// NDCValueDefault<int> @ 148e4c340

int __cdecl NDCValueDefault<int>(void)

{
  return 1;
}

// NDCValueDefault<float> @ 148e4c350

float __cdecl NDCValueDefault<float>(void)

{
  return __real_3f800000;
}

// NDCValueDefault<UE::Math::TVector2<float>_> @ 148e4c360

TVector2<float> __cdecl NDCValueDefault<UE::Math::TVector2<float>_>(void)

{
  TVector2<float>_u_0 in_RCX;
  
  *(undefined4 *)in_RCX = 0x3f800000;
  *(undefined4 *)((longlong)in_RCX + 4) = 0x3f800000;
  return (TVector2<float>)in_RCX;
}

// NDCValueDefault<UE::Math::TVector4<float>_> @ 148e4c380

TVector4<float> * __cdecl
NDCValueDefault<UE::Math::TVector4<float>_>(TVector4<float> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// NDCValueDefault<UE::Math::TVector<float>_> @ 148e4c3a0

TVector<float> * __cdecl
NDCValueDefault<UE::Math::TVector<float>_>(TVector<float> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  return __return_storage_ptr__;
}

// NDCValueSize<int> @ 148e4c3c0

float __cdecl NDCValueSize<int>(int *param_1)

{
  int iVar1;
  
  iVar1 = -*param_1;
  if (-*param_1 < 0) {
    iVar1 = *param_1;
  }
  return (float)iVar1;
}

// NDCValueSize<float> @ 148e4c3e0

float __cdecl NDCValueSize<float>(float *param_1)

{
  return (float)((uint)*param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// NDCValueSize<UE::Math::TVector2<float>_> @ 148e4c400

float __cdecl NDCValueSize<UE::Math::TVector2<float>_>(TVector2<float> *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

// NDCValueSize<UE::Math::TVector4<float>_> @ 148e4c430

float __cdecl NDCValueSize<UE::Math::TVector4<float>_>(TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.W;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.Y;
  return SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
}

// NDCValueSize<UE::Math::TVector<float>_> @ 148e4c470

float __cdecl NDCValueSize<UE::Math::TVector<float>_>(TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
}

// NewObject<UNDIDataChannelWriteSimCacheData> @ 148e4c4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNDIDataChannelWriteSimCacheData * __cdecl
NewObject<UNDIDataChannelWriteSimCacheData>(UObject *param_1)

{
  UClass *pUVar1;
  UNDIDataChannelWriteSimCacheData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNDIDataChannelWriteSimCacheData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNDIDataChannelWriteSimCacheData *)
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

// Process<`UNiagaraDataInterfaceDataChannelRead::Read'::__l7::<lambda_1>,`UNiagaraDataInterfaceDataChannelRead::Read'::__l7::<lambda_2>,`UNiagaraDataInterfaceDataChannelRead::Read'::__l7::<lambda_3>_> @ 148e4c540

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNDIVariadicOutputHandler<16>::
Process<_UNiagaraDataInterfaceDataChannelRead::Read_::__l7::<lambda_1>,_UNiagaraDataInterfaceDataChannelRead::Read_::__l7::<lambda_2>,_UNiagaraDataInterfaceDataChannelRead::Read_::__l7::<lambda_3>_>
          (FNDIVariadicOutputHandler<16> *this,bool param_1,int param_2,
          FNDIDataChannel_FunctionToDataSetBinding *param_3,<lambda_1> *param_4,<lambda_2> *param_5,
          <lambda_3> *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar7;
  undefined4 *puVar8;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar9;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar19;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar20;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar21;
  undefined1 local_res20 [8];
  
  if ((param_3 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) || (!param_1)) {
    Fallback(this,param_2);
    return false;
  }
  uVar3 = (param_3->VMRegisterBindings).ArrayNum;
  uVar17 = (ulonglong)(int)uVar3;
  pFVar18 = (param_3->VMRegisterBindings).AllocatorInstance.Data;
  pFVar1 = pFVar18 + uVar17 * 8;
  do {
    while( true ) {
      if ((param_3->VMRegisterBindings).ArrayNum != (int)uVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar18 == pFVar1) {
        return true;
      }
      uVar4 = *(uint *)(pFVar18 + 4);
      uVar16 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e == 0) break;
      if (uVar16 == 1) {
        if ((this->FloatOutputs).ArrayNum <= (int)(uVar4 & 0x3fffffff)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        FVar9 = (this->FloatOutputs).AllocatorInstance.SecondaryData;
        uVar17 = (ulonglong)(uVar4 & 0x3fffffff);
        FVar21 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)this;
        if (FVar9 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
          FVar21 = FVar9;
        }
        iVar5 = *(int *)pFVar18;
        if (iVar5 == -1) {
          pFVar18 = pFVar18 + 8;
          *param_4->bAllReadsSuccess = false;
          puVar8 = *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar21 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = 0;
        }
        else {
          pFVar18 = pFVar18 + 8;
          uVar6 = *(undefined4 *)
                   ((param_4->Data->FloatData).AllocatorInstance.Data +
                   (ulonglong)(iVar5 * param_4->Data->FloatStride) +
                   (ulonglong)(uint)param_4->Index * 4);
          puVar8 = *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar21 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = uVar6;
        }
      }
      else if ((uVar16 == 2) || (uVar16 == 3)) {
        if ((this->IntOutputs).ArrayNum <= (int)(uVar4 & 0x3fffffff)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        FVar7 = (this->IntOutputs).AllocatorInstance.SecondaryData;
        uVar17 = (ulonglong)(uVar4 & 0x3fffffff);
        FVar19 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)&this->IntOutputs;
        if (FVar7 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
          FVar19 = FVar7;
        }
        iVar5 = *(int *)pFVar18;
        if (iVar5 == -1) {
          pFVar18 = pFVar18 + 8;
          *param_5->bAllReadsSuccess = false;
          puVar8 = *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar19 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = 0;
        }
        else {
          pFVar18 = pFVar18 + 8;
          uVar6 = *(undefined4 *)
                   ((param_5->Data->Int32Data).AllocatorInstance.Data +
                   (ulonglong)(iVar5 * param_5->Data->Int32Stride) +
                   (ulonglong)(uint)param_5->Index * 4);
          puVar8 = *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar19 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = uVar6;
        }
      }
      else {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                            ,0x179,L"");
        if (bVar14) {
          pcVar13 = (code *)swi(3);
          uVar15 = (*pcVar13)();
          return (bool)uVar15;
        }
LAB_148e4c8ac:
        uVar17 = (ulonglong)uVar3;
        pFVar18 = pFVar18 + 8;
      }
    }
    if ((this->HalfOutputs).ArrayNum <= (int)(uVar4 & 0x3fffffff)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        uVar15 = (*pcVar13)();
        return (bool)uVar15;
      }
    }
    FVar10 = (this->HalfOutputs).AllocatorInstance.SecondaryData;
    uVar17 = (ulonglong)(uVar4 & 0x3fffffff);
    FVar20 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)&this->HalfOutputs;
    if (FVar10 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
      FVar20 = FVar10;
    }
    iVar5 = *(int *)pFVar18;
    if (iVar5 == -1) {
      *param_6->bAllReadsSuccess = false;
      puVar12 = *(ushort **)((longlong)FVar20 + uVar17 * 0x10);
      *(ushort **)((longlong)FVar20 + uVar17 * 0x10) =
           puVar12 + *(int *)((uchar *)((longlong)FVar20 + 8) + uVar17 * 0x10);
      FGenericPlatformMath::StoreHalf(puVar12,0.0);
      goto LAB_148e4c8ac;
    }
    pFVar18 = pFVar18 + 8;
    uVar2 = *(undefined2 *)
             ((param_6->Data->HalfData).AllocatorInstance.Data +
             (ulonglong)(iVar5 * param_6->Data->HalfStride) + (ulonglong)(uint)param_6->Index * 2);
    puVar11 = *(undefined2 **)((longlong)FVar20 + uVar17 * 0x10);
    *(undefined2 **)((longlong)FVar20 + uVar17 * 0x10) =
         puVar11 + *(int *)((uchar *)((longlong)FVar20 + 8) + uVar17 * 0x10);
    uVar17 = (ulonglong)uVar3;
    *puVar11 = uVar2;
  } while( true );
}

// Process<`UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_1>,`UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_2>,`UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_3>_> @ 148e4c910

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNDIVariadicInputHandler<16>::
Process<_UNiagaraDataInterfaceDataChannelRead::SpawnConditional_::__l20::<lambda_1>,_UNiagaraDataInterfaceDataChannelRead::SpawnConditional_::__l20::<lambda_2>,_UNiagaraDataInterfaceDataChannelRead::SpawnConditional_::__l20::<lambda_3>_>
          (FNDIVariadicInputHandler<16> *this,bool param_1,int param_2,
          FNDIDataChannel_FunctionToDataSetBinding *param_3,<lambda_1> *param_4,<lambda_2> *param_5,
          <lambda_3> *param_6)

{
  undefined1 *puVar1;
  FNDIDataChannelRegisterBinding *pFVar2;
  float fVar3;
  uint uVar4;
  ENiagaraConditionalOperator EVar5;
  ForElementType<FNDIInputParam<int>_> FVar6;
  ForElementType<FNDIInputParam<float>_> FVar7;
  bool *pbVar8;
  float *pfVar9;
  ForElementType<FNDIInputParam<FFloat16>_> FVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  ulonglong uVar15;
  FNDIDataChannelRegisterBinding *pFVar16;
  ForElementType<FNDIInputParam<int>_> FVar17;
  ForElementType<FNDIInputParam<FFloat16>_> FVar18;
  ForElementType<FNDIInputParam<float>_> FVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  
  if ((param_3 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) || (!param_1)) {
    Advance(this,param_2);
    return false;
  }
  uVar4 = (param_3->VMRegisterBindings).ArrayNum;
  uVar15 = (ulonglong)(int)uVar4;
  pFVar16 = (FNDIDataChannelRegisterBinding *)(param_3->VMRegisterBindings).AllocatorInstance.Data;
  pFVar2 = pFVar16 + uVar15;
LAB_148e4c970:
  do {
    while( true ) {
      if ((param_3->VMRegisterBindings).ArrayNum != (int)uVar15) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar16 == pFVar2) {
        return true;
      }
      uVar14 = pFVar16->DataType;
      if (pFVar16->DataType != 0) break;
      uVar14 = pFVar16->FunctionRegisterIndex;
      if (((this->HalfInputs).ArrayNum <= (int)uVar14) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar13 = (*pcVar11)();
        return (bool)uVar13;
      }
      FVar10 = (this->HalfInputs).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FNDIInputParam<FFloat16>_>)&this->HalfInputs;
      if (FVar10 != (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
        FVar18 = FVar10;
      }
      `UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_3>::operator()
                (param_6,pFVar16,
                 (FNDIInputParam<FFloat16> *)((longlong)FVar18 + (ulonglong)uVar14 * 0x18));
LAB_148e4cd35:
      uVar15 = (ulonglong)uVar4;
      pFVar16 = pFVar16 + 1;
    }
    if (uVar14 == 1) {
      uVar14 = pFVar16->FunctionRegisterIndex;
      uVar15 = (ulonglong)uVar14;
      if (((this->FloatInputs).ArrayNum <= (int)uVar14) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar13 = (*pcVar11)();
        return (bool)uVar13;
      }
      FVar7 = (this->FloatInputs).AllocatorInstance.SecondaryData;
      pbVar8 = param_4->bConditionsPass;
      FVar19 = (ForElementType<FNDIInputParam<float>_>)this;
      if (FVar7 != (ForElementType<FNDIInputParam<float>_>)0x0) {
        FVar19 = FVar7;
      }
      if (pFVar16->DataSetRegisterIndex == 0xffffffff) {
        uVar15 = (ulonglong)uVar4;
        pFVar16 = pFVar16 + 1;
        *pbVar8 = false;
        goto LAB_148e4c970;
      }
      bVar12 = *pbVar8;
      pFVar20 = (param_4->Data->FloatData).AllocatorInstance.Data +
                (ulonglong)(pFVar16->DataSetRegisterIndex * param_4->Data->FloatStride) +
                (ulonglong)(uint)param_4->DataChannelIdx * 4;
      pfVar9 = *(float **)((longlong)FVar19 + uVar15 * 0x18);
      EVar5 = param_4->Op;
      *(float **)((longlong)FVar19 + uVar15 * 0x18) =
           pfVar9 + *(int *)((uchar *)((longlong)FVar19 + 0x10) + uVar15 * 0x18);
      fVar3 = *pfVar9;
      switch(EVar5) {
      case Equals:
        if (fVar3 == *(float *)pFVar20) {
          uVar15 = (ulonglong)uVar4;
          *pbVar8 = (bool)(bVar12 & 1);
          pFVar16 = pFVar16 + 1;
          goto LAB_148e4c970;
        }
        break;
      case NotEqual:
        if (fVar3 != *(float *)pFVar20) {
          uVar15 = (ulonglong)uVar4;
          *pbVar8 = (bool)(bVar12 & 1);
          pFVar16 = pFVar16 + 1;
          goto LAB_148e4c970;
        }
        break;
      case LessThan:
        uVar15 = (ulonglong)uVar4;
        *pbVar8 = (bool)(bVar12 & fVar3 < *(float *)pFVar20);
        pFVar16 = pFVar16 + 1;
        goto LAB_148e4c970;
      case LessThanOrEqual:
        uVar15 = (ulonglong)uVar4;
        *pbVar8 = (bool)(bVar12 & (fVar3 < *(float *)pFVar20 || fVar3 == *(float *)pFVar20));
        pFVar16 = pFVar16 + 1;
        goto LAB_148e4c970;
      case GreaterThan:
        uVar15 = (ulonglong)uVar4;
        *pbVar8 = (bool)(bVar12 & (*(float *)pFVar20 <= fVar3 && fVar3 != *(float *)pFVar20));
        pFVar16 = pFVar16 + 1;
        goto LAB_148e4c970;
      case GreaterThanOrEqual:
        uVar15 = (ulonglong)uVar4;
        *pbVar8 = (bool)(bVar12 & *(float *)pFVar20 <= fVar3);
        pFVar16 = pFVar16 + 1;
        goto LAB_148e4c970;
      default:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraCommon.h"
                            ,0x788,L"");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          uVar13 = (*pcVar11)();
          return (bool)uVar13;
        }
      }
      uVar15 = (ulonglong)uVar4;
      *pbVar8 = false;
      pFVar16 = pFVar16 + 1;
      goto LAB_148e4c970;
    }
    if (uVar14 == 2) {
      uVar14 = pFVar16->FunctionRegisterIndex;
      if (((this->IntInputs).ArrayNum <= (int)uVar14) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar13 = (*pcVar11)();
        return (bool)uVar13;
      }
      FVar6 = (this->IntInputs).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<FNDIInputParam<int>_>)&this->IntInputs;
      if (FVar6 != (ForElementType<FNDIInputParam<int>_>)0x0) {
        FVar17 = FVar6;
      }
      `UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_2>::operator()
                (param_5,pFVar16,
                 (FNDIInputParam<int> *)((longlong)FVar17 + (ulonglong)uVar14 * 0x18));
      uVar15 = (ulonglong)uVar4;
      pFVar16 = pFVar16 + 1;
    }
    else {
      if (uVar14 != 3) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                            ,0x142,L"");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          uVar13 = (*pcVar11)();
          return (bool)uVar13;
        }
        goto LAB_148e4cd35;
      }
      uVar14 = pFVar16->FunctionRegisterIndex;
      if (((this->IntInputs).ArrayNum <= (int)uVar14) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar13 = (*pcVar11)();
        return (bool)uVar13;
      }
      FVar6 = (this->IntInputs).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<FNDIInputParam<int>_>)&this->IntInputs;
      if (FVar6 != (ForElementType<FNDIInputParam<int>_>)0x0) {
        FVar17 = FVar6;
      }
      `UNiagaraDataInterfaceDataChannelRead::SpawnConditional'::__l20::<lambda_2>::operator()
                (param_5,pFVar16,
                 (FNDIInputParam<int> *)((longlong)FVar17 + (ulonglong)uVar14 * 0x18));
      uVar15 = (ulonglong)uVar4;
      pFVar16 = pFVar16 + 1;
    }
  } while( true );
}

// Process<`UNiagaraDataInterfaceDataChannelWrite::Append'::__l27::<lambda_1>,`UNiagaraDataInterfaceDataChannelWrite::Append'::__l27::<lambda_2>,`UNiagaraDataInterfaceDataChannelWrite::Append'::__l27::<lambda_3>_> @ 148e4cdb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNDIVariadicInputHandler<16>::
Process<_UNiagaraDataInterfaceDataChannelWrite::Append_::__l27::<lambda_1>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l27::<lambda_2>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l27::<lambda_3>_>
          (FNDIVariadicInputHandler<16> *this,bool param_1,int param_2,
          FNDIDataChannel_FunctionToDataSetBinding *param_3,<lambda_1> *param_4,<lambda_2> *param_5,
          <lambda_3> *param_6)

{
  undefined1 *puVar1;
  FNDIDataChannelRegisterBinding *pFVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  ForElementType<FNDIInputParam<int>_> FVar6;
  ForElementType<FNDIInputParam<float>_> FVar7;
  undefined4 *_Src;
  ForElementType<FNDIInputParam<FFloat16>_> FVar8;
  undefined2 *_Src_00;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForElementType<FNDIInputParam<int>_> FVar14;
  ForElementType<FNDIInputParam<FFloat16>_> FVar15;
  FNDIDataChannelRegisterBinding *pFVar16;
  ulonglong uVar17;
  ForElementType<FNDIInputParam<float>_> FVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res20 [8];
  
  if ((param_3 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) || (!param_1)) {
    Advance(this,param_2);
    return false;
  }
  pFVar16 = (FNDIDataChannelRegisterBinding *)(param_3->VMRegisterBindings).AllocatorInstance.Data;
  iVar5 = (param_3->VMRegisterBindings).ArrayNum;
  pFVar2 = pFVar16 + iVar5;
LAB_148e4ce10:
  while( true ) {
    if ((param_3->VMRegisterBindings).ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar16 == pFVar2) {
      return true;
    }
    uVar12 = pFVar16->DataType;
    if (pFVar16->DataType == 0) break;
    if (uVar12 == 1) {
      uVar12 = pFVar16->FunctionRegisterIndex;
      uVar17 = (ulonglong)uVar12;
      if (((this->FloatInputs).ArrayNum <= (int)uVar12) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar7 = (this->FloatInputs).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FNDIInputParam<float>_>)this;
      if (FVar7 != (ForElementType<FNDIInputParam<float>_>)0x0) {
        FVar18 = FVar7;
      }
      if (pFVar16->DataSetRegisterIndex == 0xffffffff) {
        pFVar16 = pFVar16 + 1;
        *param_4->bAllWritesSuccess = false;
      }
      else {
        uVar12 = param_4->LocalNumToEmit;
        uVar13 = (ulonglong)uVar12;
        pFVar19 = (param_4->Data->FloatData).AllocatorInstance.Data +
                  (ulonglong)(pFVar16->DataSetRegisterIndex * param_4->Data->FloatStride) +
                  (ulonglong)param_4->Index * 4;
        _Src = *(undefined4 **)((longlong)FVar18 + uVar17 * 0x18);
        if (*(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar17 * 0x18) < 1) {
          *(undefined4 **)((longlong)FVar18 + uVar17 * 0x18) =
               _Src + *(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar17 * 0x18);
          uVar3 = *_Src;
          if (uVar12 == 0) goto LAB_148e4d153;
          pFVar16 = pFVar16 + 1;
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pFVar19 = uVar3;
            pFVar19 = pFVar19 + 4;
          }
        }
        else {
          memcpy(pFVar19,_Src,uVar13 << 2);
          pFVar16 = pFVar16 + 1;
        }
      }
    }
    else if (uVar12 == 2) {
      uVar12 = pFVar16->FunctionRegisterIndex;
      if (((this->IntInputs).ArrayNum <= (int)uVar12) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar6 = (this->IntInputs).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<FNDIInputParam<int>_>)&this->IntInputs;
      if (FVar6 != (ForElementType<FNDIInputParam<int>_>)0x0) {
        FVar14 = FVar6;
      }
      `UNiagaraDataInterfaceDataChannelWrite::Append'::__l27::<lambda_2>::operator()
                (param_5,pFVar16,
                 (FNDIInputParam<int> *)((longlong)FVar14 + (ulonglong)uVar12 * 0x18));
      pFVar16 = pFVar16 + 1;
    }
    else {
      if (uVar12 != 3) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                            ,0x142,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        goto LAB_148e4d153;
      }
      uVar12 = pFVar16->FunctionRegisterIndex;
      if (((this->IntInputs).ArrayNum <= (int)uVar12) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar6 = (this->IntInputs).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<FNDIInputParam<int>_>)&this->IntInputs;
      if (FVar6 != (ForElementType<FNDIInputParam<int>_>)0x0) {
        FVar14 = FVar6;
      }
      `UNiagaraDataInterfaceDataChannelWrite::Append'::__l27::<lambda_2>::operator()
                (param_5,pFVar16,
                 (FNDIInputParam<int> *)((longlong)FVar14 + (ulonglong)uVar12 * 0x18));
      pFVar16 = pFVar16 + 1;
    }
  }
  uVar12 = pFVar16->FunctionRegisterIndex;
  uVar17 = (ulonglong)uVar12;
  if (((this->HalfInputs).ArrayNum <= (int)uVar12) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar8 = (this->HalfInputs).AllocatorInstance.SecondaryData;
  FVar15 = (ForElementType<FNDIInputParam<FFloat16>_>)&this->HalfInputs;
  if (FVar8 != (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
    FVar15 = FVar8;
  }
  if (pFVar16->DataSetRegisterIndex == 0xffffffff) {
    *param_6->bAllWritesSuccess = false;
  }
  else {
    uVar12 = param_6->LocalNumToEmit;
    uVar13 = (ulonglong)uVar12;
    pFVar19 = (param_6->Data->HalfData).AllocatorInstance.Data +
              (ulonglong)(pFVar16->DataSetRegisterIndex * param_6->Data->HalfStride) +
              (ulonglong)param_6->Index * 2;
    _Src_00 = *(undefined2 **)((longlong)FVar15 + uVar17 * 0x18);
    if (0 < *(int *)((uchar *)((longlong)FVar15 + 0x10) + uVar17 * 0x18)) {
      memcpy(pFVar19,_Src_00,uVar13 * 2);
      pFVar16 = pFVar16 + 1;
      goto LAB_148e4ce10;
    }
    *(undefined2 **)((longlong)FVar15 + uVar17 * 0x18) =
         _Src_00 + *(int *)((uchar *)((longlong)FVar15 + 0x10) + uVar17 * 0x18);
    if (uVar12 != 0) {
      uVar4 = *_Src_00;
      pFVar16 = pFVar16 + 1;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined2 *)pFVar19 = uVar4;
        pFVar19 = pFVar19 + 2;
      }
      goto LAB_148e4ce10;
    }
  }
LAB_148e4d153:
  pFVar16 = pFVar16 + 1;
  goto LAB_148e4ce10;
}

// Process<`UNiagaraDataInterfaceDataChannelRead::Consume'::__l13::<lambda_1>,`UNiagaraDataInterfaceDataChannelRead::Consume'::__l13::<lambda_2>,`UNiagaraDataInterfaceDataChannelRead::Consume'::__l13::<lambda_3>_> @ 148e4d1b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNDIVariadicOutputHandler<16>::
Process<_UNiagaraDataInterfaceDataChannelRead::Consume_::__l13::<lambda_1>,_UNiagaraDataInterfaceDataChannelRead::Consume_::__l13::<lambda_2>,_UNiagaraDataInterfaceDataChannelRead::Consume_::__l13::<lambda_3>_>
          (FNDIVariadicOutputHandler<16> *this,bool param_1,int param_2,
          FNDIDataChannel_FunctionToDataSetBinding *param_3,<lambda_1> *param_4,<lambda_2> *param_5,
          <lambda_3> *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar7;
  undefined4 *puVar8;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar9;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar19;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar20;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar21;
  undefined1 local_res20 [8];
  
  if ((param_3 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) || (!param_1)) {
    Fallback(this,param_2);
    return false;
  }
  uVar3 = (param_3->VMRegisterBindings).ArrayNum;
  uVar17 = (ulonglong)(int)uVar3;
  pFVar18 = (param_3->VMRegisterBindings).AllocatorInstance.Data;
  pFVar1 = pFVar18 + uVar17 * 8;
  do {
    while( true ) {
      if ((param_3->VMRegisterBindings).ArrayNum != (int)uVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar18 == pFVar1) {
        return true;
      }
      uVar4 = *(uint *)(pFVar18 + 4);
      uVar16 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e == 0) break;
      if (uVar16 == 1) {
        if ((this->FloatOutputs).ArrayNum <= (int)(uVar4 & 0x3fffffff)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        FVar9 = (this->FloatOutputs).AllocatorInstance.SecondaryData;
        uVar17 = (ulonglong)(uVar4 & 0x3fffffff);
        FVar21 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)this;
        if (FVar9 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
          FVar21 = FVar9;
        }
        iVar5 = *(int *)pFVar18;
        if (iVar5 == -1) {
          pFVar18 = pFVar18 + 8;
          *param_4->bAllReadsSuccess = false;
          puVar8 = *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar21 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = 0;
        }
        else {
          pFVar18 = pFVar18 + 8;
          uVar6 = *(undefined4 *)
                   ((param_4->Data->FloatData).AllocatorInstance.Data +
                   (ulonglong)(iVar5 * param_4->Data->FloatStride) +
                   (ulonglong)(uint)param_4->Index * 4);
          puVar8 = *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar21 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar21 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = uVar6;
        }
      }
      else if ((uVar16 == 2) || (uVar16 == 3)) {
        if ((this->IntOutputs).ArrayNum <= (int)(uVar4 & 0x3fffffff)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        FVar7 = (this->IntOutputs).AllocatorInstance.SecondaryData;
        uVar17 = (ulonglong)(uVar4 & 0x3fffffff);
        FVar19 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)&this->IntOutputs;
        if (FVar7 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
          FVar19 = FVar7;
        }
        iVar5 = *(int *)pFVar18;
        if (iVar5 == -1) {
          pFVar18 = pFVar18 + 8;
          *param_5->bAllReadsSuccess = false;
          puVar8 = *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar19 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = 0;
        }
        else {
          pFVar18 = pFVar18 + 8;
          uVar6 = *(undefined4 *)
                   ((param_5->Data->Int32Data).AllocatorInstance.Data +
                   (ulonglong)(iVar5 * param_5->Data->Int32Stride) +
                   (ulonglong)(uint)param_5->Index * 4);
          puVar8 = *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10);
          *(undefined4 **)((longlong)FVar19 + uVar17 * 0x10) =
               puVar8 + *(int *)((uchar *)((longlong)FVar19 + 8) + uVar17 * 0x10);
          uVar17 = (ulonglong)uVar3;
          *puVar8 = uVar6;
        }
      }
      else {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                            ,0x179,L"");
        if (bVar14) {
          pcVar13 = (code *)swi(3);
          uVar15 = (*pcVar13)();
          return (bool)uVar15;
        }
LAB_148e4d51c:
        uVar17 = (ulonglong)uVar3;
        pFVar18 = pFVar18 + 8;
      }
    }
    if ((this->HalfOutputs).ArrayNum <= (int)(uVar4 & 0x3fffffff)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        uVar15 = (*pcVar13)();
        return (bool)uVar15;
      }
    }
    FVar10 = (this->HalfOutputs).AllocatorInstance.SecondaryData;
    uVar17 = (ulonglong)(uVar4 & 0x3fffffff);
    FVar20 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)&this->HalfOutputs;
    if (FVar10 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
      FVar20 = FVar10;
    }
    iVar5 = *(int *)pFVar18;
    if (iVar5 == -1) {
      *param_6->bAllReadsSuccess = false;
      puVar12 = *(ushort **)((longlong)FVar20 + uVar17 * 0x10);
      *(ushort **)((longlong)FVar20 + uVar17 * 0x10) =
           puVar12 + *(int *)((uchar *)((longlong)FVar20 + 8) + uVar17 * 0x10);
      FGenericPlatformMath::StoreHalf(puVar12,0.0);
      goto LAB_148e4d51c;
    }
    pFVar18 = pFVar18 + 8;
    uVar2 = *(undefined2 *)
             ((param_6->Data->HalfData).AllocatorInstance.Data +
             (ulonglong)(iVar5 * param_6->Data->HalfStride) + (ulonglong)(uint)param_6->Index * 2);
    puVar11 = *(undefined2 **)((longlong)FVar20 + uVar17 * 0x10);
    *(undefined2 **)((longlong)FVar20 + uVar17 * 0x10) =
         puVar11 + *(int *)((uchar *)((longlong)FVar20 + 8) + uVar17 * 0x10);
    uVar17 = (ulonglong)uVar3;
    *puVar11 = uVar2;
  } while( true );
}

// Process<`UNiagaraDataInterfaceDataChannelWrite::Write'::__l13::<lambda_1>,`UNiagaraDataInterfaceDataChannelWrite::Write'::__l13::<lambda_2>,`UNiagaraDataInterfaceDataChannelWrite::Write'::__l13::<lambda_3>_> @ 148e4d580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNDIVariadicInputHandler<16>::
Process<_UNiagaraDataInterfaceDataChannelWrite::Write_::__l13::<lambda_1>,_UNiagaraDataInterfaceDataChannelWrite::Write_::__l13::<lambda_2>,_UNiagaraDataInterfaceDataChannelWrite::Write_::__l13::<lambda_3>_>
          (FNDIVariadicInputHandler<16> *this,bool param_1,int param_2,
          FNDIDataChannel_FunctionToDataSetBinding *param_3,<lambda_1> *param_4,<lambda_2> *param_5,
          <lambda_3> *param_6)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FNDIInputParam<int>_> FVar5;
  FNiagaraDataBuffer *pFVar6;
  ForElementType<FNDIInputParam<float>_> FVar7;
  ForElementType<FNDIInputParam<FFloat16>_> FVar8;
  undefined2 *puVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ForElementType<FNDIInputParam<int>_> FVar17;
  ForElementType<FNDIInputParam<FFloat16>_> FVar18;
  FScriptContainerElement *pFVar19;
  ForElementType<FNDIInputParam<float>_> FVar20;
  undefined4 *puVar21;
  undefined1 local_res20 [8];
  
  if ((param_3 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) || (!param_1)) {
    Advance(this,param_2);
    return false;
  }
  uVar2 = (param_3->VMRegisterBindings).ArrayNum;
  uVar14 = (ulonglong)(int)uVar2;
  pFVar19 = (param_3->VMRegisterBindings).AllocatorInstance.Data;
  pFVar1 = pFVar19 + uVar14 * 8;
LAB_148e4d5e5:
  while( true ) {
    if ((param_3->VMRegisterBindings).ArrayNum != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar19 == pFVar1) {
      return true;
    }
    uVar3 = *(uint *)(pFVar19 + 4);
    uVar13 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e != 0) break;
    uVar14 = (ulonglong)(uVar3 & 0x3fffffff);
    if ((this->HalfInputs).ArrayNum <= (int)(uVar3 & 0x3fffffff)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    FVar8 = (this->HalfInputs).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FNDIInputParam<FFloat16>_>)&this->HalfInputs;
    if (FVar8 != (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
      FVar18 = FVar8;
    }
    if (*(int *)pFVar19 == -1) {
      *param_6->bAllWritesSuccess = false;
LAB_148e4d876:
      uVar14 = (ulonglong)uVar2;
      pFVar19 = pFVar19 + 8;
    }
    else {
      pFVar6 = param_6->Data;
      puVar9 = *(undefined2 **)((longlong)FVar18 + uVar14 * 0x18);
      uVar3 = param_6->Index;
      *(undefined2 **)((longlong)FVar18 + uVar14 * 0x18) =
           puVar9 + *(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar14 * 0x18);
      iVar4 = *(int *)pFVar19;
      pFVar19 = pFVar19 + 8;
      *(undefined2 *)
       ((pFVar6->HalfData).AllocatorInstance.Data +
       (ulonglong)(pFVar6->HalfStride * iVar4) + (ulonglong)uVar3 * 2) = *puVar9;
      uVar14 = (ulonglong)uVar2;
    }
  }
  if (uVar13 == 1) {
    uVar14 = (ulonglong)(uVar3 & 0x3fffffff);
    if ((this->FloatInputs).ArrayNum <= (int)(uVar3 & 0x3fffffff)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    FVar7 = (this->FloatInputs).AllocatorInstance.SecondaryData;
    FVar20 = (ForElementType<FNDIInputParam<float>_>)this;
    if (FVar7 != (ForElementType<FNDIInputParam<float>_>)0x0) {
      FVar20 = FVar7;
    }
    if (*(int *)pFVar19 == -1) {
      pFVar19 = pFVar19 + 8;
      uVar14 = (ulonglong)uVar2;
      *param_4->bAllWritesSuccess = false;
      goto LAB_148e4d5e5;
    }
    puVar21 = *(undefined4 **)((longlong)FVar20 + uVar14 * 0x18);
    uVar3 = param_4->Index;
    *(undefined4 **)((longlong)FVar20 + uVar14 * 0x18) =
         puVar21 + *(int *)((uchar *)((longlong)FVar20 + 0x10) + uVar14 * 0x18);
    lVar16 = (ulonglong)(param_4->Data->FloatStride * *(int *)pFVar19) + (ulonglong)uVar3 * 4;
    pFVar15 = (param_4->Data->FloatData).AllocatorInstance.Data;
  }
  else {
    if ((uVar13 != 2) && (uVar13 != 3)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                          ,0x142,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      goto LAB_148e4d876;
    }
    uVar14 = (ulonglong)(uVar3 & 0x3fffffff);
    if ((this->IntInputs).ArrayNum <= (int)(uVar3 & 0x3fffffff)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    FVar5 = (this->IntInputs).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FNDIInputParam<int>_>)&this->IntInputs;
    if (FVar5 != (ForElementType<FNDIInputParam<int>_>)0x0) {
      FVar17 = FVar5;
    }
    if (*(int *)pFVar19 == -1) {
      pFVar19 = pFVar19 + 8;
      uVar14 = (ulonglong)uVar2;
      *param_5->bAllWritesSuccess = false;
      goto LAB_148e4d5e5;
    }
    pFVar6 = param_5->Data;
    puVar21 = *(undefined4 **)((longlong)FVar17 + uVar14 * 0x18);
    uVar3 = param_5->Index;
    *(undefined4 **)((longlong)FVar17 + uVar14 * 0x18) =
         puVar21 + *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar14 * 0x18);
    lVar16 = (ulonglong)(pFVar6->Int32Stride * *(int *)pFVar19) + (ulonglong)uVar3 * 4;
    pFVar15 = (pFVar6->Int32Data).AllocatorInstance.Data;
  }
  pFVar19 = pFVar19 + 8;
  *(undefined4 *)(pFVar15 + lVar16) = *puVar21;
  uVar14 = (ulonglong)uVar2;
  goto LAB_148e4d5e5;
}

// Process<`UNiagaraDataInterfaceDataChannelWrite::Append'::__l36::<lambda_4>,`UNiagaraDataInterfaceDataChannelWrite::Append'::__l36::<lambda_5>,`UNiagaraDataInterfaceDataChannelWrite::Append'::__l36::<lambda_6>_> @ 148e4d8d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNDIVariadicInputHandler<16>::
Process<_UNiagaraDataInterfaceDataChannelWrite::Append_::__l36::<lambda_4>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l36::<lambda_5>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l36::<lambda_6>_>
          (FNDIVariadicInputHandler<16> *this,bool param_1,int param_2,
          FNDIDataChannel_FunctionToDataSetBinding *param_3,<lambda_4> *param_4,<lambda_5> *param_5,
          <lambda_6> *param_6)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FNDIInputParam<int>_> FVar5;
  FNiagaraDataBuffer *pFVar6;
  ForElementType<FNDIInputParam<float>_> FVar7;
  ForElementType<FNDIInputParam<FFloat16>_> FVar8;
  undefined2 *puVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ForElementType<FNDIInputParam<int>_> FVar17;
  ForElementType<FNDIInputParam<FFloat16>_> FVar18;
  FScriptContainerElement *pFVar19;
  ForElementType<FNDIInputParam<float>_> FVar20;
  undefined4 *puVar21;
  undefined1 local_res20 [8];
  
  if ((param_3 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0) || (!param_1)) {
    Advance(this,param_2);
    return false;
  }
  uVar2 = (param_3->VMRegisterBindings).ArrayNum;
  uVar14 = (ulonglong)(int)uVar2;
  pFVar19 = (param_3->VMRegisterBindings).AllocatorInstance.Data;
  pFVar1 = pFVar19 + uVar14 * 8;
LAB_148e4d935:
  while( true ) {
    if ((param_3->VMRegisterBindings).ArrayNum != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar19 == pFVar1) {
      return true;
    }
    uVar3 = *(uint *)(pFVar19 + 4);
    uVar13 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e != 0) break;
    uVar14 = (ulonglong)(uVar3 & 0x3fffffff);
    if ((this->HalfInputs).ArrayNum <= (int)(uVar3 & 0x3fffffff)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    FVar8 = (this->HalfInputs).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FNDIInputParam<FFloat16>_>)&this->HalfInputs;
    if (FVar8 != (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
      FVar18 = FVar8;
    }
    if (*(int *)pFVar19 == -1) {
      *param_6->bAllWritesSuccess = false;
LAB_148e4dbc6:
      uVar14 = (ulonglong)uVar2;
      pFVar19 = pFVar19 + 8;
    }
    else {
      pFVar6 = param_6->Data;
      puVar9 = *(undefined2 **)((longlong)FVar18 + uVar14 * 0x18);
      uVar3 = param_6->Index;
      *(undefined2 **)((longlong)FVar18 + uVar14 * 0x18) =
           puVar9 + *(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar14 * 0x18);
      iVar4 = *(int *)pFVar19;
      pFVar19 = pFVar19 + 8;
      *(undefined2 *)
       ((pFVar6->HalfData).AllocatorInstance.Data +
       (ulonglong)(pFVar6->HalfStride * iVar4) + (ulonglong)uVar3 * 2) = *puVar9;
      uVar14 = (ulonglong)uVar2;
    }
  }
  if (uVar13 == 1) {
    uVar14 = (ulonglong)(uVar3 & 0x3fffffff);
    if ((this->FloatInputs).ArrayNum <= (int)(uVar3 & 0x3fffffff)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    FVar7 = (this->FloatInputs).AllocatorInstance.SecondaryData;
    FVar20 = (ForElementType<FNDIInputParam<float>_>)this;
    if (FVar7 != (ForElementType<FNDIInputParam<float>_>)0x0) {
      FVar20 = FVar7;
    }
    if (*(int *)pFVar19 == -1) {
      pFVar19 = pFVar19 + 8;
      uVar14 = (ulonglong)uVar2;
      *param_4->bAllWritesSuccess = false;
      goto LAB_148e4d935;
    }
    puVar21 = *(undefined4 **)((longlong)FVar20 + uVar14 * 0x18);
    uVar3 = param_4->Index;
    *(undefined4 **)((longlong)FVar20 + uVar14 * 0x18) =
         puVar21 + *(int *)((uchar *)((longlong)FVar20 + 0x10) + uVar14 * 0x18);
    lVar16 = (ulonglong)(param_4->Data->FloatStride * *(int *)pFVar19) + (ulonglong)uVar3 * 4;
    pFVar15 = (param_4->Data->FloatData).AllocatorInstance.Data;
  }
  else {
    if ((uVar13 != 2) && (uVar13 != 3)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                          ,0x142,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      goto LAB_148e4dbc6;
    }
    uVar14 = (ulonglong)(uVar3 & 0x3fffffff);
    if ((this->IntInputs).ArrayNum <= (int)(uVar3 & 0x3fffffff)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    FVar5 = (this->IntInputs).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FNDIInputParam<int>_>)&this->IntInputs;
    if (FVar5 != (ForElementType<FNDIInputParam<int>_>)0x0) {
      FVar17 = FVar5;
    }
    if (*(int *)pFVar19 == -1) {
      pFVar19 = pFVar19 + 8;
      uVar14 = (ulonglong)uVar2;
      *param_5->bAllWritesSuccess = false;
      goto LAB_148e4d935;
    }
    pFVar6 = param_5->Data;
    puVar21 = *(undefined4 **)((longlong)FVar17 + uVar14 * 0x18);
    uVar3 = param_5->Index;
    *(undefined4 **)((longlong)FVar17 + uVar14 * 0x18) =
         puVar21 + *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar14 * 0x18);
    lVar16 = (ulonglong)(pFVar6->Int32Stride * *(int *)pFVar19) + (ulonglong)uVar3 * 4;
    pFVar15 = (pFVar6->Int32Data).AllocatorInstance.Data;
  }
  pFVar19 = pFVar19 + 8;
  *(undefined4 *)(pFVar15 + lVar16) = *puVar21;
  uVar14 = (ulonglong)uVar2;
  goto LAB_148e4d935;
}

// StaticEnum<enum_ENCPoolMethod> @ 148e522b0

UEnum * __cdecl StaticEnum<enum_ENCPoolMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENCPoolMethod,(UObject *)pUVar1,L"ENCPoolMethod");
  }
  return Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton;
}

// StaticEnum<enum_ENDIActorComponentSourceMode> @ 148e522f0

UEnum * __cdecl StaticEnum<enum_ENDIActorComponentSourceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode,(UObject *)pUVar1,
                       L"ENDIActorComponentSourceMode");
  }
  return Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton;
}

// StaticEnum<enum_ENDIDataChannelSpawnMode> @ 148e52330

UEnum * __cdecl StaticEnum<enum_ENDIDataChannelSpawnMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode,(UObject *)pUVar1,
                       L"ENDIDataChannelSpawnMode");
  }
  return Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton;
}

// StaticEnum<enum_ENDIDataChannelSpawnScaleMode> @ 148e52370

UEnum * __cdecl StaticEnum<enum_ENDIDataChannelSpawnScaleMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnScaleMode,(UObject *)pUVar1,
                       L"ENDIDataChannelSpawnScaleMode");
  }
  return Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDataChannelAllocationMode> @ 148e523b0

UEnum * __cdecl StaticEnum<enum_ENiagaraDataChannelAllocationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode,(UObject *)pUVar1
                       ,L"ENiagaraDataChannelAllocationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraMeshLODMode> @ 148e523f0

UEnum * __cdecl StaticEnum<enum_ENiagaraMeshLODMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode,(UObject *)pUVar1,
                       L"ENiagaraMeshLODMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraMeshPivotOffsetSpace> @ 148e52430

UEnum * __cdecl StaticEnum<enum_ENiagaraMeshPivotOffsetSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace,(UObject *)pUVar1,
                       L"ENiagaraMeshPivotOffsetSpace");
  }
  return Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton;
}

// StaticEnum<enum_ENiagaraSortMode> @ 148e52470

UEnum * __cdecl StaticEnum<enum_ENiagaraSortMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSortMode,(UObject *)pUVar1,
                       L"ENiagaraSortMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSortMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraTickBehavior> @ 148e524b0

UEnum * __cdecl StaticEnum<enum_ENiagaraTickBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraTickBehavior,(UObject *)pUVar1,
                       L"ENiagaraTickBehavior");
  }
  return Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton;
}

// VMGetConsoleVariable<int> @ 148e524f0

void __cdecl
NDIConsoleVariableLocal::VMGetConsoleVariable<int>
          (FVectorVMExternalFunctionContext *param_1,uint param_2,bool param_3)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> local_38;
  
  VectorVM::FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar10 = 0;
  local_50[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar3 = local_50[0];
  local_40[0] = 0;
  iVar11 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0];
  iVar9 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  uVar6 = 0;
  if ((int)param_2 < ((local_38.Ptr)->ConsoleVariableData).ArrayNum) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_48 = pfVar8 + iVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar1 = *(float *)(((local_38.Ptr)->ConsoleVariableData).AllocatorInstance.Data +
                    (longlong)(int)param_2 * 4);
  if (0 < param_1->NumInstances) {
    pfVar8 = pfVar8 + iVar9;
    pfVar7 = pfVar7 + iVar11;
    do {
      iVar10 = iVar10 + 1;
      *pfVar7 = (float)((param_3 ^ 1) - 1);
      *pfVar8 = fVar1;
      pfVar8 = pfVar8 + iVar4;
      pfVar7 = pfVar7 + iVar3;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// VMGetConsoleVariable<float> @ 148e52650

void __cdecl
NDIConsoleVariableLocal::VMGetConsoleVariable<float>
          (FVectorVMExternalFunctionContext *param_1,uint param_2,bool param_3)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> local_38;
  
  VectorVM::FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar10 = 0;
  local_50[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar3 = local_50[0];
  local_40[0] = 0;
  iVar11 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0];
  iVar9 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  uVar6 = 0;
  if ((int)param_2 < ((local_38.Ptr)->ConsoleVariableData).ArrayNum) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_48 = pfVar8 + iVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar1 = *(float *)(((local_38.Ptr)->ConsoleVariableData).AllocatorInstance.Data +
                    (longlong)(int)param_2 * 4);
  if (0 < param_1->NumInstances) {
    pfVar8 = pfVar8 + iVar9;
    pfVar7 = pfVar7 + iVar11;
    do {
      iVar10 = iVar10 + 1;
      *pfVar7 = (float)((param_3 ^ 1) - 1);
      *pfVar8 = fVar1;
      pfVar8 = pfVar8 + iVar4;
      pfVar7 = pfVar7 + iVar3;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// VMGetConsoleVariable<bool> @ 148e527b0

void __cdecl
NDIConsoleVariableLocal::VMGetConsoleVariable<bool>
          (FVectorVMExternalFunctionContext *param_1,uint param_2,bool param_3)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> local_38;
  
  VectorVM::FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar10 = 0;
  local_50[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar3 = local_50[0];
  local_40[0] = 0;
  iVar11 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0];
  iVar9 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  uVar6 = 0;
  if ((int)param_2 < ((local_38.Ptr)->ConsoleVariableData).ArrayNum) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_48 = pfVar8 + iVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = ((local_38.Ptr)->ConsoleVariableData).AllocatorInstance.Data[(longlong)(int)param_2 * 4];
  if (0 < param_1->NumInstances) {
    pfVar8 = pfVar8 + iVar9;
    pfVar7 = pfVar7 + iVar11;
    do {
      iVar10 = iVar10 + 1;
      *pfVar7 = (float)((param_3 ^ 1) - 1);
      *pfVar8 = (float)-(uint)(FVar1 != (FScriptContainerElement)0x0);
      pfVar8 = pfVar8 + iVar4;
      pfVar7 = pfVar7 + iVar3;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// TRDGEmptyLambdaPass<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_> @ 148e53a70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

TRDGEmptyLambdaPass<_public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const_&)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>
::
TRDGEmptyLambdaPass<_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FEmptyShaderParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_28);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FEmptyShaderParameters",L"FEmptyShaderParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                 ,0x7a7,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FEmptyShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>
  ::
  TRDGLambdaPass<FEmptyShaderParameters,_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate_::__l2::<lambda_1>_>
            (this,param_1,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,
             &TRDGEmptyLambdaPass<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::`2'::<lambda_1>_>
              ::EmptyShaderParameters,param_2,param_3);
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z___6B_
  ;
  return this;
}

// TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_> @ 148e53c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGLambdaPass<FEmptyShaderParameters,_public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const_&)_::_2_::<lambda_1>_>
* __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>
::
TRDGLambdaPass<FEmptyShaderParameters,_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FEmptyShaderParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TRDGLambdaPass<FEmptyShaderParameters,_public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const_&)_::_2_::<lambda_1>_>
  *pTVar6;
  undefined8 *puVar7;
  FRHITransitionInfo *pFVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FRDGParameterStruct local_28;
  
  local_28.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TRDGLambdaPass<FEmptyShaderParameters,_public:_virtual_void___cdecl_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate(FNDIGpuComputePostSimulateContext_const_&)_::_2_::<lambda_1>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_28.Layout.Reference = (param_2->Layout).Reference;
  if (local_28.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_28.Layout.Reference);
  }
  local_28.Metadata = param_2;
  FRDGPass::FRDGPass(this,param_1,&local_28,param_4,Inline);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z___6B_
  ;
  lVar10 = 2;
  uVar4 = *(undefined8 *)&param_5->BufferRequests[0].Offset;
  pFVar8 = param_5->TransitionsBefore;
  lVar11 = 2;
  *(undefined8 *)((longlong)this + 0x180) = param_5->BufferRequests[0].Buffer;
  *(undefined8 *)((longlong)this + 0x188) = uVar4;
  puVar7 = (undefined8 *)((longlong)this + 0x1a8);
  uVar4 = *(undefined8 *)&param_5->BufferRequests[1].Offset;
  lVar9 = (longlong)param_5 - ((longlong)this + 0x180);
  *(FRHIBuffer **)((longlong)this + 400) = param_5->BufferRequests[1].Buffer;
  *(undefined8 *)((longlong)this + 0x198) = uVar4;
  do {
    lVar11 = lVar11 + -1;
    *(int *)(puVar7 + -1) = (int)pFVar8->_padding_;
    *(undefined2 *)((longlong)puVar7 + -4) = *(undefined2 *)((longlong)&pFVar8->_padding_ + 4);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)((longlong)puVar7 + lVar9 + 8);
    *(undefined4 *)((longlong)puVar7 + 0xc) = *(undefined4 *)((longlong)puVar7 + lVar9 + 0xc);
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)((longlong)puVar7 + lVar9 + 0x10);
    uVar1 = *(undefined1 *)((longlong)puVar7 + lVar9 + 0x14);
    *(undefined1 *)(puVar7 + 4) = 0;
    *(undefined1 *)((longlong)puVar7 + 0x14) = uVar1;
    cVar2 = *(char *)((longlong)puVar7 + lVar9 + 0x20);
    *(char *)(puVar7 + 4) = cVar2;
    if (cVar2 != '\0') {
      puVar7[3] = *(undefined8 *)((longlong)puVar7 + lVar9 + 0x18);
    }
    pFVar8 = pFVar8 + 1;
    puVar7 = puVar7 + 6;
  } while (lVar11 != 0);
  pFVar8 = param_5->TransitionsAfter;
  puVar7 = (undefined8 *)((longlong)this + 0x208);
  do {
    lVar10 = lVar10 + -1;
    *(int *)(puVar7 + -1) = (int)pFVar8->_padding_;
    *(undefined2 *)((longlong)puVar7 + -4) = *(undefined2 *)((longlong)&pFVar8->_padding_ + 4);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *puVar7 = *(undefined8 *)((longlong)puVar7 + lVar9);
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)((longlong)puVar7 + lVar9 + 8);
    *(undefined4 *)((longlong)puVar7 + 0xc) = *(undefined4 *)((longlong)puVar7 + lVar9 + 0xc);
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)((longlong)puVar7 + lVar9 + 0x10);
    uVar1 = *(undefined1 *)((longlong)puVar7 + lVar9 + 0x14);
    *(undefined1 *)(puVar7 + 4) = 0;
    *(undefined1 *)((longlong)puVar7 + 0x14) = uVar1;
    cVar2 = *(char *)((longlong)puVar7 + lVar9 + 0x20);
    *(char *)(puVar7 + 4) = cVar2;
    if (cVar2 != '\0') {
      puVar7[3] = *(undefined8 *)((longlong)puVar7 + lVar9 + 0x18);
    }
    pFVar8 = pFVar8 + 1;
    puVar7 = puVar7 + 6;
  } while (lVar10 != 0);
  *(ulong64 *)((longlong)this + 0x260) = param_5->SystemInstanceID;
  *(FWeakObjectPtr *)((longlong)this + 0x268) = (param_5->WeakOwner).WeakPtr;
  *(FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh> **)
   ((longlong)this + 0x270) = param_5->Proxy;
  *(FNiagaraGpuReadbackManager **)((longlong)this + 0x278) = param_5->ReadbackManager;
  *(FEmptyShaderParameters **)((longlong)this + 0x280) = param_3;
  return this;
}

// ~TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1> @ 148e55760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<___FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z_QEBA_V__TArrayView___CBU__TTuple_PEAXI__H___Z__00_00_Function_Private_Core_UE__6B_
  ;
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

// ~TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 148e55780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 148e557a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 148e557c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 148e557e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 148e55800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,0,0> @ 148e55820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNDIDataChannelCompiledData::GatherAccessInfo_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,0,0> @ 148e55840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1> @ 148e55860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0> @ 148e55880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__DestroyPerInstanceData___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXPEAXPEAVFNiagaraSystemInstance___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0> @ 148e558a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_1>,0,0> @ 148e558c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,1,0> @ 148e558e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,1,1> @ 148e55900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame_::__l23::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::`23'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,1,0> @ 148e55920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite_::__l11::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1> @ 148e55940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__M___SimCacheWriteFrame___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEBA_NPEAVUNDIArraySimCacheData__HPEAVFNiagaraSystemInstance___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,0,0> @ 148e55960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FNDIDataChannelCompiledData::GatherAccessInfo_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_2>,1,1> @ 148e55980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData_::__l5::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,1,1> @ 148e559a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData_::__l29::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::`29'::<lambda_2>,1,1>
        ::_vftable_;
  return;
}

// operator() @ 148e57750

void __thiscall
```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)this;
    lVar2 = *(longlong *)((longlong)this + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *
                       )(lVar6 + 0x18),
                       (TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *
                       )(lVar3 + 0x58));
          }
          TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *)
                     (lVar6 + 0x18),
                     (TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *)
                     ((longlong)this + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// operator() @ 148e57870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<void_*,unsigned_int> *pTVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType local_68;
  int local_60 [2];
  code *local_58 [5];
  undefined8 *local_30;
  
  if (param_1->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = **(int **)param_1->DataPtr;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  FVar8.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  iVar10 = 0;
  if (0 < iVar1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,&local_68,local_60,local_60 + 1);
    pTVar7 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[](param_1,1);
    memcpy(local_68.Data,*(void **)pTVar7,(longlong)iVar1 * 0x58);
    FVar8.Data = local_68.Data;
    iVar9 = local_60[0];
    iVar10 = local_60[1];
  }
  uVar2 = *(undefined8 *)this;
  uVar3 = *(undefined8 *)((longlong)this + 8);
  uVar4 = *(undefined8 *)((longlong)this + 0x10);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x30,8);
  local_30[2] = FVar8.Data;
  local_30[1] = uVar2;
  *local_30 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z_QEBA_V__TArrayView___CBU__TTuple_PEAXI__H___Z__00_00_Function_Private_Core_UE__6B_
  ;
  *(int *)(local_30 + 3) = iVar9;
  *(int *)((longlong)local_30 + 0x1c) = iVar10;
  local_30[4] = uVar3;
  local_30[5] = uVar4;
  if (local_30 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_58);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// operator() @ 148e57dc0

bool __thiscall
`NDIDataChannelUtilities::SortParameters'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraVariableBase *param_1,FNiagaraVariableBase *param_2)

{
  int iVar1;
  FNiagaraTypeDefinition *pFVar2;
  FName local_res10;
  FName local_res18 [2];
  
  iVar1 = ::FName::Compare(&param_1->Name,&param_2->Name);
  if (iVar1 == 0) {
    pFVar2 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    if ((pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
    }
    else {
      local_res18[0] = UE::CoreUObject::Private::GetFName((UObject *)(local_res18 + 1));
      local_res18[0] = *(FName *)local_res18[0];
    }
    pFVar2 = FNiagaraTypeDefinitionHandle::Resolve(&param_2->TypeDefHandle);
    if ((pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      local_res10 = UE::CoreUObject::Private::GetFName((UObject *)(local_res18 + 1));
      local_res10 = *(FName *)local_res10;
    }
    iVar1 = ::FName::Compare(local_res18,&local_res10);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// `vector_deleting_destructor'`adjustor{56}' @ 148e5960c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraDataInterfaceArrayMesh::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraDataInterfaceArrayMesh::_vector_deleting_destructor__adjustor_56__
          (UNiagaraDataInterfaceArrayMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraDataInterfaceArrayMesh *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 148e5961c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraDataInterfaceArrayMesh::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraDataInterfaceArrayMesh::_vector_deleting_destructor__adjustor_80__
          (UNiagaraDataInterfaceArrayMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraDataInterfaceArrayMesh *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 148e5962c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraDataInterfaceDataChannelWrite::`vector
   deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraDataInterfaceDataChannelWrite::_vector_deleting_destructor__adjustor_56__
          (UNiagaraDataInterfaceDataChannelWrite *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraDataInterfaceDataChannelWrite *)
                      &this[-1].CompiledData.DataLayout.VariableLayouts,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148e59640

void * __thiscall
FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
_scalar_deleting_destructor_
          (FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->PerInstanceData_RenderThread).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerInstanceData_RenderThread).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerInstanceData_RenderThread);
  *(undefined4 *)&(this->PerInstanceData_GameThread).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerInstanceData_GameThread).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerInstanceData_GameThread);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e596d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59700

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l80::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59730

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l83::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59760

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'[::A]::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59790

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'[::E]::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e597c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'[::I]::<lambda_14>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e597f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceActorComponent::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59820

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59850

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59880

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e598b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::GetVMExternalFunction_Internal'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e598e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceActorComponent::GetVMExternalFunction'::__l9::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59910

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l9::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59940

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction'::__l10::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59970

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::GetVMExternalFunction_Internal'::__l16::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e599a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::__l12::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e599d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceConsoleVariable::GetVMExternalFunction'::__l19::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59a00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::GetVMExternalFunction_Internal'::__l27::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59a30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceActorComponent::GetVMExternalFunction'::__l13::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59a60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction'::__l14::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59a90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l19::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59ac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l68::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59af0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l71::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59b20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l74::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59b50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelRead::GetVMExternalFunction'::__l77::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59b80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheCapture,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59bb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59be0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z_QEBA_V__TArrayView___CBU__TTuple_PEAXI__H___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__DestroyPerInstanceData___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXPEAXPEAVFNiagaraSystemInstance___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::`23'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e59ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__M___SimCacheWriteFrame___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEBA_NPEAVUNDIArraySimCacheData__HPEAVFNiagaraSystemInstance___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::`29'::<lambda_2>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a0f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNDIDataChannel_FunctionToDataSetBinding,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNDIDataChannel_FunctionToDataSetBinding,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a130

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataChannelGameData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraDataChannelGameData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a170

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataBufferReadback,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraDataBufferReadback,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a1b0

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a210

void * __thiscall
TRDGEmptyLambdaPass<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a270

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a2d0

void * __thiscall
`UNiagaraDataInterfaceArrayDistributionInt::BuildTableData'::__l2::FArrayWeightedSampler::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FWeightedRandomSampler::~FWeightedRandomSampler(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FNDIDataChannelReadInstanceData::_scalar_deleting_destructor_
          (FNDIDataChannelReadInstanceData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar4;
  
  this->_padding_ = (longlong)&___7FNDIDataChannelReadInstanceData__6B_;
  if ((this->DataChannelData).Object != (FNiagaraDataChannelData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataChannelData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                       ,0x14a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  *(undefined4 *)&(this->EmitterInstanceData).field_0x48 = 0;
  pvVar3 = *(void **)&(this->EmitterInstanceData).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EmitterInstanceData);
  FVar4 = (this->FuncToDataSetBindingInfo).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
    FVar4 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
            &this->FuncToDataSetBindingInfo;
  }
  DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int>
            ((TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)FVar4,
             (this->FuncToDataSetBindingInfo).ArrayNum);
  FVar4 = (this->FuncToDataSetBindingInfo).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataChannelData).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a3f0

void * __thiscall
NDIActorComponentLocal::FNDIProxy::_scalar_deleting_destructor_(FNDIProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToInstanceData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToInstanceData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToInstanceData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a460

void * __thiscall
NDIArrayDistributionIntPrivate::FNDIProxy::_scalar_deleting_destructor_
          (FNDIProxy *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->BuiltTableData).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BuiltTableData).Buffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a4c0

void * __thiscall
NDIConsoleVariableLocal::FNDIProxy::_scalar_deleting_destructor_(FNDIProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->PerInstanceData_RenderThread).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerInstanceData_RenderThread).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerInstanceData_RenderThread);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a530

void * __thiscall
FNiagaraDataIntefaceProxyAsyncGpuTrace::_scalar_deleting_destructor_
          (FNiagaraDataIntefaceProxyAsyncGpuTrace *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FNiagaraDataIntefaceProxyAsyncGpuTrace__6B_;
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a5b0

void * __thiscall
FNiagaraDataInterfaceProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a5f0

void * __thiscall
FNiagaraDataInterfaceProxyRW::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyRW *this,uint param_1)

{
  *(undefined ***)this = &___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a630

void * __thiscall
FNiagaraDataInterfaceProxy_DataChannelRead::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxy_DataChannelRead *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a6a0

void * __thiscall
FNiagaraDataInterfaceProxy_DataChannelWrite::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxy_DataChannelWrite *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a710

void * __thiscall
INDIArrayProxyBase::_scalar_deleting_destructor_(INDIArrayProxyBase *this,uint param_1)

{
  *(undefined ***)this = &___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a750

void * __thiscall
INiagaraRenderableMeshArrayInterface::_scalar_deleting_destructor_
          (INiagaraRenderableMeshArrayInterface *this,uint param_1)

{
  *this = (INiagaraRenderableMeshArrayInterface)&___7INiagaraRenderableMeshArrayInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a790

void * __thiscall
INiagaraSimCacheCustomStorageInterface::_scalar_deleting_destructor_
          (INiagaraSimCacheCustomStorageInterface *this,uint param_1)

{
  *this = (INiagaraSimCacheCustomStorageInterface)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a7d0

void * __thiscall
UNDIDataChannelWriteSimCacheData::_scalar_deleting_destructor_
          (UNDIDataChannelWriteSimCacheData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDIDataChannelWriteSimCacheData__6B_;
  pFVar1 = (this->DataChannelReference).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNDIDataChannelWriteSimCacheFrame,int>
            ((FNDIDataChannelWriteSimCacheFrame *)(this->FrameData).AllocatorInstance.Data,
             (this->FrameData).ArrayNum);
  pFVar1 = (this->FrameData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a860

void * __thiscall
UNDIRenderTargetSimCacheData::_scalar_deleting_destructor_
          (UNDIRenderTargetSimCacheData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDIRenderTargetSimCacheData__6B_;
  pFVar1 = (this->PixelDataFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNDIRenderTargetSimCacheFrame,int>
            ((FNDIRenderTargetSimCacheFrame *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a8f0

void * __thiscall
UNiagaraConvertInPlaceUtilityBase::_scalar_deleting_destructor_
          (UNiagaraConvertInPlaceUtilityBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraConvertInPlaceUtilityBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a950

void * __thiscall
UNiagaraDataInterfaceActorComponent::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceActorComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceActorComponent__6B_;
  pFVar1 = (this->ActorOrComponentParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5a9c0

void * __thiscall
UNiagaraDataInterfaceArrayDistributionInt::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceArrayDistributionInt *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayDistributionInt__6B_;
  pFVar1 = (this->BuiltTableData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->BuiltTableDataGuard);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->BuiltTableDataGuard);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5aa90

void * __thiscall
UNiagaraDataInterfaceArrayMesh::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceArrayMesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayMesh__6B_;
  pFVar1 = (this->MeshData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INiagaraRenderableMeshArrayInterface__6B_;
  UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray((UNiagaraDataInterfaceArray *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5ab20

void * __thiscall
UNiagaraDataInterfaceAsyncGpuTrace::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceAsyncGpuTrace *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAsyncGpuTrace__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5ab80

void * __thiscall
UNiagaraDataInterfaceConsoleVariable::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceConsoleVariable *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceConsoleVariable__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5abe0

void * __thiscall
UNiagaraDataInterfaceDataChannelRead::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceDataChannelRead *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDataChannelRead__6B_;
  *(undefined4 *)&(this->CompiledData).GPUScriptParameterInfos.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompiledData).GPUScriptParameterInfos.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CompiledData).GPUScriptParameterInfos);
  DestructItems<FNDIDataChannelFunctionInfo,int>
            ((FNDIDataChannelFunctionInfo *)(this->CompiledData).FunctionInfo.AllocatorInstance.Data
             ,(this->CompiledData).FunctionInfo.ArrayNum);
  pFVar2 = (this->CompiledData).FunctionInfo.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5aca0

void * __thiscall
UNiagaraDataInterfaceDataChannelWrite::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceDataChannelWrite *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  FNDIDataChannelWriteCompiledData::~FNDIDataChannelWriteCompiledData(&this->CompiledData);
  FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5ad30

void * __thiscall
UNiagaraDataInterfaceDynamicMeshSimCacheData::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceDynamicMeshSimCacheData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDynamicMeshSimCacheData__6B_;
  pFVar1 = (this->GpuFrameIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CpuFrameIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNDIDynamicMeshSimCacheFrame,int>
            ((FNDIDynamicMeshSimCacheFrame *)(this->UniqueFrames).AllocatorInstance.Data,
             (this->UniqueFrames).ArrayNum);
  pFVar1 = (this->UniqueFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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

// `scalar_deleting_destructor' @ 148e5add0

void * __thiscall
UNiagaraParameterDefinitionsBase::_scalar_deleting_destructor_
          (UNiagaraParameterDefinitionsBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraParameterDefinitionsBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5ae30

void * __thiscall
UNiagaraRenderableMeshArrayInterface::_scalar_deleting_destructor_
          (UNiagaraRenderableMeshArrayInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5ae90

void * __thiscall
UNiagaraRenderableMeshInterface::_scalar_deleting_destructor_
          (UNiagaraRenderableMeshInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5aef0

void * __thiscall
UNiagaraScriptSourceBase::_scalar_deleting_destructor_(UNiagaraScriptSourceBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraScriptSourceBase__6B_;
  DestructItems<TSharedPtr<EditorExposedVectorCurveConstant,1>,int>
            ((TSharedPtr<EditorExposedVectorCurveConstant,1> *)
             (this->ExposedVectorCurveConstants).AllocatorInstance.Data,
             (this->ExposedVectorCurveConstants).ArrayNum);
  pFVar1 = (this->ExposedVectorCurveConstants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<EditorExposedVectorConstant,1>,int>
            ((TSharedPtr<EditorExposedVectorConstant,1> *)
             (this->ExposedVectorConstants).AllocatorInstance.Data,
             (this->ExposedVectorConstants).ArrayNum);
  pFVar1 = (this->ExposedVectorConstants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5af90

void * __thiscall
UNiagaraSimCacheCustomStorageInterface::_scalar_deleting_destructor_
          (UNiagaraSimCacheCustomStorageInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148e5aff0

void * __thiscall
UNiagaraValidationRuleSet::_scalar_deleting_destructor_
          (UNiagaraValidationRuleSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraValidationRuleSet__6B_;
  pFVar1 = (this->ValidationRules).AllocatorInstance.Data;
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

// BuildFunctionTemplateMap @ 148e5bf50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
NDIDataChannelReadLocal::BuildFunctionTemplateMap
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TKeyInitializer<FName_const_&> local_res8;
  FName *local_res10;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pwVar1 = TemplateShaderFile_Common;
  pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)&pFVar3->field_0x0 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  LoadShaderSourceFile
            (pwVar1,SP_PCD3D_SM5,(FString *)pFVar3,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pwVar1 = TemplateShaderFile_ReadCommon;
  pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)&pFVar3->field_0x0 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  LoadShaderSourceFile
            (pwVar1,SP_PCD3D_SM5,(FString *)pFVar3,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  local_res10 = &NAME_Read;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)param_2,&local_res8,(bool *)&local_res10);
  LoadShaderSourceFile
            (TemplateShaderFile_Read,SP_PCD3D_SM5,
             (FString *)(*(longlong *)param_2 + (longlong)(int)local_res8.Key * 0x20 + 8),
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  local_res10 = &NAME_Consume;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)param_2,&local_res8,(bool *)&local_res10);
  LoadShaderSourceFile
            (TemplateShaderFile_Consume,SP_PCD3D_SM5,
             (FString *)(*(longlong *)param_2 + (longlong)(int)local_res8.Key * 0x20 + 8),
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  return;
}

// BuildFunctionTemplateMap @ 148e5c0b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
NDIDataChannelWriteLocal::BuildFunctionTemplateMap
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TKeyInitializer<FName_const_&> local_res8;
  FNiagaraFunctionSignature *local_res10;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pwVar1 = TemplateShaderFile_Common;
  pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)&pFVar3->field_0x0 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  LoadShaderSourceFile
            (pwVar1,SP_PCD3D_SM5,(FString *)pFVar3,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pwVar1 = TemplateShaderFile_WriteCommon;
  pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)&pFVar3->field_0x0 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  LoadShaderSourceFile
            (pwVar1,SP_PCD3D_SM5,(FString *)pFVar3,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  local_res10 = GetFunctionSig_Append();
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)param_2,&local_res8,(bool *)&local_res10);
  LoadShaderSourceFile
            (TemplateShaderFile_Append,SP_PCD3D_SM5,
             (FString *)(*(longlong *)param_2 + (longlong)(int)local_res8.Key * 0x20 + 8),
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  return;
}

// CanConvertPixelFormat @ 148e5cf50

bool __cdecl NDIRenderTargetSimCacheDataPrivate::CanConvertPixelFormat(EPixelFormat param_1)

{
  if (((param_1 != PF_FloatRGBA) && (param_1 != PF_G16R16F)) && (param_1 != PF_G16R16F_FILTER)) {
    return false;
  }
  return true;
}

// ConvertPixel @ 148e5ec60

FLinearColor * __cdecl
NDIRenderTargetSimCacheDataPrivate::ConvertPixel
          (FLinearColor *__return_storage_ptr__,uchar *param_1,EPixelFormat param_2)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  if (param_2 == PF_FloatRGBA) {
    fVar1 = FGenericPlatformMath::LoadHalf((ushort *)param_1);
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar1;
    fVar1 = FGenericPlatformMath::LoadHalf((ushort *)(param_1 + 2));
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
    fVar1 = FGenericPlatformMath::LoadHalf((ushort *)(param_1 + 4));
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar1;
    fVar1 = FGenericPlatformMath::LoadHalf((ushort *)(param_1 + 6));
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar1;
    return __return_storage_ptr__;
  }
  if ((param_2 != PF_G16R16F) && (param_2 != PF_G16R16F_FILTER)) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar1;
    return __return_storage_ptr__;
  }
  fVar1 = FGenericPlatformMath::LoadHalf((ushort *)param_1);
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar1;
  fVar1 = FGenericPlatformMath::LoadHalf((ushort *)(param_1 + 2));
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
  fVar1 = __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar1;
  return __return_storage_ptr__;
}

// DecodeTableDirect @ 148e61df0

void __cdecl
NDIArrayDistributionIntPrivate::DecodeTableDirect
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int param_2,int *param_3,
          float *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x10;
  if (param_1->ArrayNum < iVar4 + 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableData.Num() >= Offset + EntrySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                       ,0x33,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *param_3 = *(int *)(pFVar1 + (longlong)iVar4 + 8);
  *param_4 = *(float *)(pFVar1 + (longlong)iVar4 + 0xc);
  return;
}

// DecodeTableIndirect @ 148e61e70

void __cdecl
NDIArrayDistributionIntPrivate::DecodeTableIndirect
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int param_2,float param_3,
          int *param_4,float *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = param_2 * 0x10;
  if (param_1->ArrayNum < iVar5 + 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableData.Num() >= Offset + EntrySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                       ,0x47,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + iVar5;
  if (*(float *)pFVar1 <= param_3 && param_3 != *(float *)pFVar1) {
    param_2 = *(int *)(pFVar2 + (longlong)iVar5 + 4);
  }
  iVar5 = (int)(float)param_2 * 0x10;
  if (param_1->ArrayNum < iVar5 + 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableData.Num() >= Offset + EntrySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                       ,0x33,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *param_4 = *(int *)(pFVar1 + (longlong)iVar5 + 8);
  *param_5 = *(float *)(pFVar1 + (longlong)iVar5 + 0xc);
  return;
}

// DecodeTableProbAlias @ 148e61f50

void __cdecl
NDIArrayDistributionIntPrivate::DecodeTableProbAlias
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int param_2,float *param_3,
          int *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x10;
  if (param_1->ArrayNum < iVar4 + 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableData.Num() >= Offset + EntrySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                       ,0x3d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *param_3 = *(float *)(pFVar1 + iVar4);
  *param_4 = *(int *)(pFVar1 + (longlong)iVar4 + 4);
  return;
}

// DecodeVariableFromSpecifiers @ 148e61fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraVariableBase * __cdecl
DecodeVariableFromSpecifiers
          (FNiagaraVariableBase *__return_storage_ptr__,FVMExternalFunctionBindingInfo *param_1)

{
  int iVar1;
  UScriptStruct *this;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  FName local_res10;
  FString local_88;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  undefined4 local_54;
  FOutputDevice local_50;
  FString local_40;
  
  pFVar5 = (FName *)(param_1->FunctionSpecifiers).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)(param_1->FunctionSpecifiers).ArrayNum * 2;
  for (pFVar7 = pFVar5; pFVar6 = (FName *)0x0, pFVar7 != pFVar4; pFVar7 = pFVar7 + 2) {
    if (*pFVar7 == VarNameKey) goto LAB_148e62024;
  }
  for (; pFVar7 = pFVar6, pFVar6 = (FName *)0x0, pFVar5 != pFVar4; pFVar5 = pFVar5 + 2) {
LAB_148e62024:
    pFVar6 = pFVar5;
    if (*pFVar5 == VarTypeKey) break;
    pFVar6 = pFVar7;
  }
  if ((pFVar7 != (FName *)0x0) && (pFVar6 != (FName *)0x0)) {
    FString::FString(&local_40,L"");
    FOutputDevice::FOutputDevice(&local_50);
    local_50.bAutoEmitLineTerminator = false;
    local_50._padding_ = (longlong)&___7FStringOutputDevice__6B_;
    this = FNiagaraTypeDefinition::StaticStruct();
    local_68.DebugPtr = (UObject *)0x0;
    local_60 = 0;
    local_5e = 0;
    local_5c = 0xffffffffffffffff;
    local_54 = 0xffffffff;
    local_res10 = (FName)this->_padding_;
    FName::ToString(&local_res10,&local_88);
    pFVar2 = FName::ToString(pFVar6 + 1,&local_78);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pwVar3 = UScriptStruct::ImportText
                       (this,pwVar3,&local_68,(UObject *)0x0,0,&local_50,&local_88,true);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (pwVar3 != (wchar_t *)0x0) {
      __return_storage_ptr__->Name = pFVar7[1];
      iVar1 = FNiagaraTypeDefinitionHandle::Register
                        (&__return_storage_ptr__->TypeDefHandle,
                         (FNiagaraTypeDefinition *)&local_68.ObjectPtr);
      (__return_storage_ptr__->TypeDefHandle).RegisteredTypeIndex = iVar1;
      FOutputDevice::~FOutputDevice(&local_50);
      if (local_40.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    FOutputDevice::~FOutputDevice(&local_50);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&__return_storage_ptr__->TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (__return_storage_ptr__->TypeDefHandle).RegisteredTypeIndex = iVar1;
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeNDIRenderTargetSimCacheData @ 148e63af0

void __cdecl EmptyLinkFunctionForGeneratedCodeNDIRenderTargetSimCacheData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraComponentPoolMethodEnum @ 148e63b00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraComponentPoolMethodEnum(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraConvertInPlaceUtilityBase @ 148e63b10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraConvertInPlaceUtilityBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceActorComponent @ 148e63b20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceActorComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayDistributionInt @ 148e63b30

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayDistributionInt(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayMesh @ 148e63b40

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAsyncGpuTrace @ 148e63b50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAsyncGpuTrace(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceConsoleVariable @ 148e63b60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceConsoleVariable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelCommon @ 148e63b70

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelRead @ 148e63b80

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelRead(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelWrite @ 148e63b90

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelWrite(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDynamicMeshSimCacheData @ 148e63ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDynamicMeshSimCacheData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataSetCompiledData @ 148e63bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataSetCompiledData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraGPUSortInfo @ 148e63bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraGPUSortInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererMeshProperties @ 148e63bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererMeshProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsBase @ 148e63be0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraRenderableMeshArrayInterface @ 148e63bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraRenderableMeshArrayInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraRenderableMeshInterface @ 148e63c00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraRenderableMeshInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityState @ 148e63c10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraScriptSourceBase @ 148e63c20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraScriptSourceBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheCapture @ 148e63c30

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheCustomStorageInterface @ 148e63c40

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheCustomStorageInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStackSection @ 148e63c50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStackSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraTickBehaviorEnum @ 148e63c60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraTickBehaviorEnum(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraValidationRuleSet @ 148e63c70

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraValidationRuleSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagara_init @ 148e63c80

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagara_init(void)

{
  return;
}

// EncodeBuiltTableEntry @ 148e63c90

void __cdecl
NDIArrayDistributionIntPrivate::EncodeBuiltTableEntry
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int param_2,float param_3,
          int param_4,int param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x10;
  if (param_1->ArrayNum < iVar4 + 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableData.Num() >= Offset + EntrySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                       ,0x27,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(float *)(pFVar1 + iVar4) = param_3;
  *(int *)(pFVar1 + (longlong)iVar4 + 4) = param_4;
  *(float *)(pFVar1 + (longlong)iVar4 + 0xc) = param_6;
  *(int *)(pFVar1 + (longlong)iVar4 + 8) = param_5;
  return;
}

// FindLocalPlayer @ 148e658a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USceneComponent * __cdecl NDIActorComponentLocal::FindLocalPlayer(UWorld *param_1,int param_2)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int iVar4;
  USceneComponent *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  if (param_1 != (UWorld *)0x0) {
    UWorld::GetPlayerControllerIterator(param_1,&local_18);
    for (; iVar4 = local_18.Index, pTVar2 = local_18.Container, -1 < local_18.Index;
        local_18.Index = local_18.Index + 1) {
      if ((local_18.Container)->ArrayNum <= local_18.Index) {
        return (USceneComponent *)0x0;
      }
      if ((local_18.Index < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (USceneComponent *)(*pcVar1)();
        return pUVar5;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if ((pUVar6 != (UObject *)0x0) && (*(longlong *)&pUVar6[0x16].field_0x8 != 0)) {
        pUVar7 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&pUVar6[0x16].field_0x8,pUVar7);
        if ((bVar3) &&
           ((*(longlong **)&pUVar6[0x16].field_0x8 != (longlong *)0x0 &&
            (iVar4 = (**(code **)(**(longlong **)&pUVar6[0x16].field_0x8 + 0x340))(),
            param_2 == iVar4)))) {
          pUVar6 = *(UObject **)&pUVar6[0x13].field_0x18;
          if (pUVar6 == (UObject *)0x0) {
            return (USceneComponent *)0x0;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          return *(USceneComponent **)(pUVar6 + 0xb);
        }
      }
    }
  }
  return (USceneComponent *)0x0;
}

// GetDummyUAVFloat @ 148e68dc0

TGlobalResource<FNDIDummyUAV,1> * __cdecl NDIDataChannelUtilities::GetDummyUAVFloat(void)

{
  return &DummyUAVFloat;
}

// GetDummyUAVHalf @ 148e68dd0

TGlobalResource<FNDIDummyUAV,1> * __cdecl NDIDataChannelUtilities::GetDummyUAVHalf(void)

{
  return &DummyUAVHalf;
}

// GetDummyUAVInt32 @ 148e68de0

TGlobalResource<FNDIDummyUAV,1> * __cdecl NDIDataChannelUtilities::GetDummyUAVInt32(void)

{
  return &DummyUAVInt32;
}

// GetFunctionSig_Append @ 148e68e60

FNiagaraFunctionSignature * __cdecl NDIDataChannelWriteLocal::GetFunctionSig_Append(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  short sVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  FNiagaraFunctionSignature *pFVar6;
  FText *pFVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  size_t _Size;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TObjectPtr<UObject>_u_0 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined8 local_bc;
  undefined4 local_b4;
  FName local_b0;
  undefined1 local_a8 [8];
  FNiagaraTypeDefinitionHandle local_a0 [2];
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  FNiagaraTypeDefinitionHandle local_80 [2];
  ForAnyElementType local_78;
  undefined8 local_70;
  FText local_68;
  FText local_58;
  FText local_48;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar9 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelWriteLocal::GetFunctionSig_Append'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  if (*piVar9 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&local_res10,L"Emit");
      EmitVar._padding_._0_4_ = local_res10.ComparisonIndex.Value;
      EmitVar._padding_._4_4_ = local_res10.Number;
      EmitVar._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&EmitVar._padding_,
                      &FNiagaraTypeDefinition::BoolDef);
      EmitVar.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      EmitVar.VarData.ArrayNum = 0;
      EmitVar.VarData.ArrayMax = 0;
      atexit(`NDIDataChannelWriteLocal::GetFunctionSig_Append'::__l5::
             _dynamic_atexit_destructor_for__EmitVar__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  local_res8[0] = 0xffffffff;
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&EmitVar._padding_);
  iVar5 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar5 != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar2)();
      return pFVar6;
    }
  }
  FNiagaraVariable::AllocateData(&EmitVar);
  memcpy(EmitVar.VarData.AllocatorInstance.Data,local_res8,(longlong)EmitVar.VarData.ArrayNum);
  ::FName::FName(&local_res18,L"Append");
  Sig.bWriteFunction = 1;
  Sig.bMemberFunction = 1;
  Sig.bRequiresExecPin = 1;
  Sig.Name = local_res18;
  pFVar7 = FText::FText(&local_68);
  ::FName::FName(&local_res20,L"DataChannel interface");
  local_c8.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelWrite::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_c8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_c8.DebugPtr);
  }
  local_be = 0;
  local_c0 = 1;
  local_bc = 0xffffffffffffffff;
  local_b4 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_c8.ObjectPtr);
  local_a8._0_4_ = local_res20.ComparisonIndex.Value;
  local_a8._4_4_ = local_res20.Number;
  local_a0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_a0,(FNiagaraTypeDefinition *)&local_c8.ObjectPtr);
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_a8,pFVar7);
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_58,L"NiagaraDataInterfaceDataChannelWrite",L"ExecuteAppendFlagTooltip",
             L"If true then the append is executed, if false then this call is skipped and no append occurs."
            );
  if ((Sig.Inputs.AllocatorInstance.Data <
       (FScriptContainerElement *)((longlong)&EmitVar._padding_ + 1)) &&
     (&EmitVar <
      (FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar2)();
      return pFVar6;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  pFVar8 = Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayNum * 0x20;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  *(longlong *)pFVar8 = EmitVar._padding_;
  pFVar1 = pFVar8 + 0x10;
  *(int *)(pFVar8 + 8) = (int)EmitVar._padding_;
  *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
  _Src = EmitVar.VarData.AllocatorInstance;
  iVar5 = EmitVar.VarData.ArrayNum;
  _Size = (size_t)EmitVar.VarData.ArrayNum;
  *(int *)(pFVar8 + 0x18) = EmitVar.VarData.ArrayNum;
  if (iVar5 == 0) {
    *(int *)(pFVar8 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,(ForAnyElementType *)pFVar1,iVar5,(int *)(pFVar8 + 0x1c));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar1,_Src.Data,_Size);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar7 = FText::FText(&local_48);
  ::FName::FName(&local_b0,L"Success");
  local_88._0_4_ = local_b0.ComparisonIndex.Value;
  local_88._4_4_ = local_b0.Number;
  local_80[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_80,&FNiagaraTypeDefinition::BoolDef);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_88,pFVar7);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  sVar3 = (short)Sig.Inputs.ArrayNum;
  if (Sig.Inputs.ArrayNum != (short)Sig.Inputs.ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar2)();
      return pFVar6;
    }
  }
  Sig.RequiredInputs = sVar3;
  return &Sig;
}

// GetFunctionSig_Consume @ 148e69340

FNiagaraFunctionSignature * __cdecl NDIDataChannelReadLocal::GetFunctionSig_Consume(void)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  void *_Src;
  bool bVar5;
  FText *pFVar6;
  FNiagaraFunctionSignature *pFVar7;
  FNiagaraVariable *this;
  size_t _Size;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_128;
  FNiagaraTypeDefinitionHandle local_120 [2];
  void *local_118;
  undefined8 local_110;
  TObjectPtr<UObject>_u_0 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined8 local_fc;
  undefined4 local_f4;
  FName local_f0;
  undefined1 local_e8 [8];
  FNiagaraTypeDefinitionHandle local_e0 [2];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  FNiagaraTypeDefinitionHandle local_c0 [2];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  FNiagaraTypeDefinitionHandle local_a0 [2];
  ForAnyElementType local_98;
  undefined8 local_90;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelReadLocal::GetFunctionSig_Consume'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  Sig.bReadFunction = 1;
  Sig.bMemberFunction = 1;
  Sig.Name = NAME_Consume;
  pFVar6 = FText::FText(&local_88);
  ::FName::FName(&local_res10,L"DataChannel interface");
  local_108.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelRead::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_108.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_108.DebugPtr);
  }
  local_fe = 0;
  local_100 = 1;
  local_fc = 0xffffffffffffffff;
  local_f4 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_108.ObjectPtr);
  local_e8._0_4_ = local_res10.ComparisonIndex.Value;
  local_e8._4_4_ = local_res10.Number;
  local_e0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_e0,(FNiagaraTypeDefinition *)&local_108.ObjectPtr);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = 0;
  local_d0._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_e8,pFVar6);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_78,L"NiagaraDataInterfaceDataChannelRead",L"ConsumeInputDesc",
             L"True if this instance (particle/emitter etc) should consume data from the Data Channel in this call."
            );
  local_res8[0] = 0xffffffff;
  ::FName::FName(&local_res18,L"Consume");
  local_128 = local_res18;
  local_120[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_120,&FNiagaraTypeDefinition::BoolDef);
  local_118 = (void *)0x0;
  local_110 = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= &local_128) &&
     (&local_128 <
      (FName *)(Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FNiagaraFunctionSignature *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  _Src = local_118;
  this = (FNiagaraVariable *)
         (Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayNum * 0x20);
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  this->_padding_ = (longlong)local_128;
  pTVar1 = &this->VarData;
  *(int *)&this->_padding_ = local_120[0].RegisteredTypeIndex;
  piVar2 = &(this->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Size = (size_t)(int)local_110;
  (this->VarData).ArrayNum = (int)local_110;
  if ((int)local_110 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_110,0,&pTVar1->AllocatorInstance,(int)local_110,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,_Size);
  }
  FNiagaraVariable::AllocateData(this);
  memcpy((pTVar1->AllocatorInstance).Data,local_res8,(longlong)(this->VarData).ArrayNum);
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"NiagaraDataInterfaceDataChannelRead",L"ConsumeSuccessOutputDesc",
                      L"True if all reads succeeded.");
  ::FName::FName(&local_res20,L"Success");
  local_c8._0_4_ = local_res20.ComparisonIndex.Value;
  local_c8._4_4_ = local_res20.Number;
  local_c0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_c0,&FNiagaraTypeDefinition::BoolDef);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_c8,pFVar6);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"NiagaraDataInterfaceDataChannelRead",L"ConsumeIndexOutputDesc",
                      L"The index we actually read from. If reading failed this can be -1. This allows subsequent reads of the Data Channel at this index."
                     );
  ::FName::FName(&local_f0,L"Index");
  local_a8._0_4_ = local_f0.ComparisonIndex.Value;
  local_a8._4_4_ = local_f0.Number;
  local_a0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_a0,&FNiagaraTypeDefinition::IntDef);
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_a8,pFVar6);
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  sVar4 = (short)Sig.Outputs.ArrayNum;
  if (Sig.Outputs.ArrayNum != (short)Sig.Outputs.ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FNiagaraFunctionSignature *)(*pcVar3)();
      return pFVar7;
    }
  }
  Sig.RequiredOutputs = sVar4;
  return &Sig;
}

// GetFunctionSig_GetNDCSpawnData @ 148e69860

FNiagaraFunctionSignature * __cdecl NDIDataChannelReadLocal::GetFunctionSig_GetNDCSpawnData(void)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  FText *pFVar5;
  FNiagaraFunctionSignature *pFVar6;
  FNiagaraVariable *this;
  size_t _Size;
  undefined4 local_res8 [2];
  TObjectPtr<UObject>_u_0 local_res10;
  FName local_res18;
  TObjectPtr<UObject>_u_0 *local_res20;
  FName local_1c8;
  FNiagaraTypeDefinitionHandle local_1c0 [2];
  void *local_1b8;
  undefined8 local_1b0;
  TObjectPtr<UObject>_u_0 local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_19c;
  undefined4 local_194;
  TObjectPtr<UObject>_u_0 local_190;
  undefined2 local_188;
  undefined1 local_186;
  undefined8 local_184;
  undefined4 local_17c;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  undefined1 local_150 [8];
  FNiagaraTypeDefinitionHandle local_148 [2];
  ForAnyElementType local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  FNiagaraTypeDefinitionHandle local_128 [2];
  ForAnyElementType local_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  FNiagaraTypeDefinitionHandle local_108 [2];
  ForAnyElementType local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  FNiagaraTypeDefinitionHandle local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  FNiagaraTypeDefinitionHandle local_c8 [2];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelReadLocal::GetFunctionSig_GetNDCSpawnData'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  Sig.bMemberFunction = 1;
  Sig.Name = NDIDataChannelUtilities::GetNDCSpawnDataName;
  Sig.ModuleUsageBitmask = 0x1ff;
  pFVar5 = FText::FText(&local_b0);
  ::FName::FName(&local_res18,L"DataChannel interface");
  local_1a8.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelRead::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1a8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_1a8.DebugPtr);
  }
  local_19e = 0;
  local_1a0 = 1;
  local_19c = 0xffffffffffffffff;
  local_194 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_1a8.ObjectPtr);
  local_150._0_4_ = local_res18.ComparisonIndex.Value;
  local_150._4_4_ = local_res18.Number;
  local_148[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_148,(FNiagaraTypeDefinition *)&local_1a8.ObjectPtr);
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138._0_4_ = 0;
  local_138._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_150,pFVar5);
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  if (local_b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_a0,L"NiagaraDataInterfaceDataChannelRead",L"EmitterIDDesc",
                      L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                     );
  ::FName::FName(&local_178,L"Emitter ID");
  local_res10.DebugPtr = (UObject *)FNiagaraEmitterID::StaticStruct();
  local_190.DebugPtr = local_res10.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res10.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res10.DebugPtr);
  }
  local_186 = 0;
  local_188 = 2;
  local_184 = 0xffffffffffffffff;
  local_17c = 0xffffffff;
  bVar4 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res10.DebugPtr,UserFacing);
  if (!bVar4) {
    local_res20 = &local_res10;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res20);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_190.ObjectPtr);
  local_130._0_4_ = local_178.ComparisonIndex.Value;
  local_130._4_4_ = local_178.Number;
  local_128[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_128,(FNiagaraTypeDefinition *)&local_190.ObjectPtr);
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  FNiagaraFunctionSignature::AddInputWithoutDefault(&Sig,(FNiagaraVariable *)local_130,pFVar5);
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_90,L"NiagaraDataInterfaceDataChannelRead",L"GetNDCSpawnData_InExecIndexDesc",
             L"The execution index of the spawned particle.");
  local_res8[0] = 0;
  ::FName::FName(&local_170,L"Spawned Particle Exec Index");
  local_1c8 = local_170;
  local_1c0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1c0,&FNiagaraTypeDefinition::IntDef);
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= &local_1c8) &&
     (&local_1c8 <
      (FName *)(Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  _Src = local_1b8;
  this = (FNiagaraVariable *)
         (Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayNum * 0x20);
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  this->_padding_ = (longlong)local_1c8;
  pTVar1 = &this->VarData;
  *(int *)&this->_padding_ = local_1c0[0].RegisteredTypeIndex;
  piVar2 = &(this->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Size = (size_t)(int)local_1b0;
  (this->VarData).ArrayNum = (int)local_1b0;
  if ((int)local_1b0 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_1b0,0,&pTVar1->AllocatorInstance,(int)local_1b0,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,_Size);
  }
  FNiagaraVariable::AllocateData(this);
  memcpy((pTVar1->AllocatorInstance).Data,local_res8,(longlong)(this->VarData).ArrayNum);
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_80,L"NiagaraDataInterfaceDataChannelRead",
                      L"GetNDCSpawnData_OutNDCIndexDesc",
                      L"Index of the NDC item that spawned this particle. Can be used to read the NDC data and initialize the spawning particle with data from the NDC."
                     );
  ::FName::FName(&local_168,L"NDC Index");
  local_110._0_4_ = local_168.ComparisonIndex.Value;
  local_110._4_4_ = local_168.Number;
  local_108[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_108,&FNiagaraTypeDefinition::IntDef);
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_110,pFVar5);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_70,L"NiagaraDataInterfaceDataChannelRead",
                      L"GetNDCSpawnData_OutNDCSpawnIndexDesc",
                      L"The index of this particle in relation to all the particle spawned by the same NDC item. Similar to Exec Index but for particles spawned by the same NDC item."
                     );
  ::FName::FName(&local_160,L"NDC Spawn Index");
  local_f0._0_4_ = local_160.ComparisonIndex.Value;
  local_f0._4_4_ = local_160.Number;
  local_e8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_e8,&FNiagaraTypeDefinition::IntDef);
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_f0,pFVar5);
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (local_60,L"NiagaraDataInterfaceDataChannelRead",
                      L"GetNDCSpawnData_OutNDCSpawnCountDesc",
                      L"The number of particles spawned by the same NDC item.");
  ::FName::FName(&local_158,L"NDC Spawn Count");
  local_d0._0_4_ = local_158.ComparisonIndex.Value;
  local_d0._4_4_ = local_158.Number;
  local_c8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_c8,&FNiagaraTypeDefinition::IntDef);
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_d0,pFVar5);
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if (local_60[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
  }
  return &Sig;
}

// GetFunctionSig_Num @ 148e69ec0

FNiagaraFunctionSignature * __cdecl NDIDataChannelReadLocal::GetFunctionSig_Num(void)

{
  FText *pFVar1;
  FName local_res8;
  FText local_58;
  TObjectPtr<UObject>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30 [8];
  FNiagaraTypeDefinitionHandle local_28 [2];
  ForAnyElementType local_20;
  undefined8 local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelReadLocal::GetFunctionSig_Num'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  Sig.bMemberFunction = 1;
  Sig.Name = NAME_Num;
  pFVar1 = FText::FText(&local_58);
  ::FName::FName(&local_res8,L"DataChannel interface");
  local_48.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelRead::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_48.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_48.DebugPtr);
  }
  local_3e = 0;
  local_40 = 1;
  local_3c = 0xffffffffffffffff;
  local_34 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_48.ObjectPtr);
  local_30._0_4_ = local_res8.ComparisonIndex.Value;
  local_30._4_4_ = local_res8.Number;
  local_28[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_28,(FNiagaraTypeDefinition *)&local_48.ObjectPtr);
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_30,pFVar1);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar1 = FText::FText(&local_58);
  ::FName::FName(&local_res8,L"Num");
  local_30._0_4_ = local_res8.ComparisonIndex.Value;
  local_30._4_4_ = local_res8.Number;
  local_28[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_28,&FNiagaraTypeDefinition::IntDef);
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_30,pFVar1);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return &Sig;
}

// GetFunctionSig_Num @ 148e6a0e0

FNiagaraFunctionSignature * __cdecl NDIDataChannelWriteLocal::GetFunctionSig_Num(void)

{
  FText *pFVar1;
  FName local_res8;
  FText local_58;
  TObjectPtr<UObject>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30 [8];
  FNiagaraTypeDefinitionHandle local_28 [2];
  ForAnyElementType local_20;
  undefined8 local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelWriteLocal::GetFunctionSig_Num'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  ::FName::FName(&local_res8,L"Num");
  Sig.bMemberFunction = 1;
  Sig.Name = local_res8;
  pFVar1 = FText::FText(&local_58);
  ::FName::FName(&local_res8,L"DataChannel interface");
  local_48.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelWrite::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_48.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_48.DebugPtr);
  }
  local_3e = 0;
  local_40 = 1;
  local_3c = 0xffffffffffffffff;
  local_34 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_48.ObjectPtr);
  local_30._0_4_ = local_res8.ComparisonIndex.Value;
  local_30._4_4_ = local_res8.Number;
  local_28[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_28,(FNiagaraTypeDefinition *)&local_48.ObjectPtr);
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_30,pFVar1);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar1 = FText::FText(&local_58);
  ::FName::FName(&local_res8,L"Num");
  local_30._0_4_ = local_res8.ComparisonIndex.Value;
  local_30._4_4_ = local_res8.Number;
  local_28[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_28,&FNiagaraTypeDefinition::IntDef);
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_30,pFVar1);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return &Sig;
}

// GetFunctionSig_Read @ 148e6a310

FNiagaraFunctionSignature * __cdecl NDIDataChannelReadLocal::GetFunctionSig_Read(void)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  void *_Src;
  bool bVar5;
  FText *pFVar6;
  FNiagaraFunctionSignature *pFVar7;
  FNiagaraVariable *this;
  size_t _Size;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_f8;
  FNiagaraTypeDefinitionHandle local_f0 [2];
  void *local_e8;
  undefined8 local_e0;
  TObjectPtr<UObject>_u_0 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  FNiagaraTypeDefinitionHandle local_b8 [2];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  FNiagaraTypeDefinitionHandle local_98 [2];
  ForAnyElementType local_90;
  undefined8 local_88;
  FText local_80;
  FText local_70;
  FText local_60 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelReadLocal::GetFunctionSig_Read'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  Sig.bReadFunction = 1;
  Sig.bMemberFunction = 1;
  Sig.Name = NAME_Read;
  pFVar6 = FText::FText(&local_80);
  ::FName::FName(&local_res10,L"DataChannel interface");
  local_d8.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelRead::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_d8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_d8.DebugPtr);
  }
  local_ce = 0;
  local_d0 = 1;
  local_cc = 0xffffffffffffffff;
  local_c4 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_d8.ObjectPtr);
  local_c0._0_4_ = local_res10.ComparisonIndex.Value;
  local_c0._4_4_ = local_res10.Number;
  local_b8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_b8,(FNiagaraTypeDefinition *)&local_d8.ObjectPtr);
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_c0,pFVar6);
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_70,L"NiagaraDataInterfaceDataChannelRead",L"ConsumeIndexInputDesc",
             L"The index to read.");
  local_res8[0] = 0;
  ::FName::FName(&local_res18,L"Index");
  local_f8 = local_res18;
  local_f0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_f0,&FNiagaraTypeDefinition::IntDef);
  local_e8 = (void *)0x0;
  local_e0 = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= &local_f8) &&
     (&local_f8 <
      (FName *)(Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FNiagaraFunctionSignature *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  _Src = local_e8;
  this = (FNiagaraVariable *)
         (Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayNum * 0x20);
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  this->_padding_ = (longlong)local_f8;
  pTVar1 = &this->VarData;
  *(int *)&this->_padding_ = local_f0[0].RegisteredTypeIndex;
  piVar2 = &(this->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Size = (size_t)(int)local_e0;
  (this->VarData).ArrayNum = (int)local_e0;
  if ((int)local_e0 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_e0,0,&pTVar1->AllocatorInstance,(int)local_e0,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,_Size);
  }
  FNiagaraVariable::AllocateData(this);
  memcpy((pTVar1->AllocatorInstance).Data,local_res8,(longlong)(this->VarData).ArrayNum);
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (local_60,L"NiagaraDataInterfaceDataChannelRead",L"ConsumeSuccessOutputDesc",
                      L"True if all reads succeeded.");
  ::FName::FName(&local_res20,L"Success");
  local_a0._0_4_ = local_res20.ComparisonIndex.Value;
  local_a0._4_4_ = local_res20.Number;
  local_98[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_98,&FNiagaraTypeDefinition::BoolDef);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_a0,pFVar6);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_60[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
  }
  sVar4 = (short)Sig.Outputs.ArrayNum;
  if (Sig.Outputs.ArrayNum != (short)Sig.Outputs.ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FNiagaraFunctionSignature *)(*pcVar3)();
      return pFVar7;
    }
  }
  Sig.RequiredOutputs = sVar4;
  return &Sig;
}

// GetFunctionSig_ScaleSpawnCount @ 148e6a790

FNiagaraFunctionSignature * __cdecl NDIDataChannelReadLocal::GetFunctionSig_ScaleSpawnCount(void)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  UPackage *pUVar4;
  FNiagaraFunctionSignature *pFVar5;
  FNiagaraVariable *pFVar6;
  longlong lVar7;
  FNiagaraBool local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_268 [2];
  TObjectPtr<UObject>_u_0 local_260;
  TObjectPtr<UObject>_u_0 local_258;
  undefined2 local_250;
  undefined1 local_24e;
  undefined8 local_24c;
  undefined4 local_244;
  TObjectPtr<UObject>_u_0 local_240;
  undefined2 local_238;
  undefined1 local_236;
  undefined8 local_234;
  undefined4 local_22c;
  TObjectPtr<UObject>_u_0 local_228;
  undefined2 local_220;
  undefined1 local_21e;
  undefined8 local_21c;
  undefined4 local_214;
  undefined1 local_210 [8];
  FNiagaraTypeDefinitionHandle local_208 [2];
  ForAnyElementType local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [8];
  FNiagaraTypeDefinitionHandle local_1e8 [2];
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [8];
  FNiagaraTypeDefinitionHandle local_1c8 [2];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [8];
  FNiagaraTypeDefinitionHandle local_1a8 [2];
  ForAnyElementType local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  FName *local_188;
  FName *local_180;
  FName local_178;
  FName local_170;
  TObjectPtr<UObject>_u_0 *local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  undefined1 local_130 [8];
  FNiagaraTypeDefinitionHandle local_128 [2];
  ForAnyElementType local_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  FNiagaraTypeDefinitionHandle local_108 [2];
  ForAnyElementType local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  FNiagaraTypeDefinitionHandle local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  FNiagaraTypeDefinitionHandle local_c8 [2];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelReadLocal::GetFunctionSig_ScaleSpawnCount'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  Sig.Name = NAME_ScaleSpawnCount;
  local_188 = &VarNameKey;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&Sig.FunctionSpecifiers,(TKeyInitializer<FName_const_&> *)local_190,
             (bool *)&local_188);
  local_180 = &VarTypeKey;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&Sig.FunctionSpecifiers,(TKeyInitializer<FName_const_&> *)(local_190 + 4),
             (bool *)&local_180);
  Sig.bMemberFunction = 1;
  Sig.bRequiresExecPin = 1;
  Sig.ModuleUsageBitmask = 0x1e07;
  pFVar3 = FText::FText(&local_60);
  ::FName::FName(&local_178,L"DataChannel interface");
  local_240.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelRead::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_240.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_240.DebugPtr);
  }
  local_236 = 0;
  local_238 = 1;
  local_234 = 0xffffffffffffffff;
  local_22c = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_240.ObjectPtr);
  local_130._0_4_ = local_178.ComparisonIndex.Value;
  local_130._4_4_ = local_178.Number;
  local_128[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_128,(FNiagaraTypeDefinition *)&local_240.ObjectPtr);
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_130,pFVar3);
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_70,L"NiagaraDataInterfaceDataChannelRead",L"SpawnEnableInputDesc",
                      L"Enable or disable this function call. If false, this call with have no effect."
                     );
  local_res8[0].Value = -1;
  ::FName::FName(&local_170,L"Enable");
  local_d0._0_4_ = local_170.ComparisonIndex.Value;
  local_d0._4_4_ = local_170.Number;
  local_c8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_c8,&FNiagaraTypeDefinition::BoolDef);
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInputWithDefault<FNiagaraBool>
            (&Sig,(FNiagaraVariable *)local_d0,local_res8,pFVar3);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"NiagaraDataInterfaceDataChannelRead",L"EmitterIDDesc",
                      L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                     );
  ::FName::FName(&local_160,L"Emitter ID");
  local_260.DebugPtr = (UObject *)FNiagaraEmitterID::StaticStruct();
  local_258.DebugPtr = local_260.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_260.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_260.DebugPtr);
  }
  local_24e = 0;
  local_250 = 2;
  local_24c = 0xffffffffffffffff;
  local_244 = 0xffffffff;
  bVar2 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_260.DebugPtr,UserFacing);
  if (!bVar2) {
    local_168 = &local_260;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_168);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_258.ObjectPtr);
  local_110._0_4_ = local_160.ComparisonIndex.Value;
  local_110._4_4_ = local_160.Number;
  local_108[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_108,(FNiagaraTypeDefinition *)&local_258.ObjectPtr);
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInputWithoutDefault(&Sig,(FNiagaraVariable *)local_110,pFVar3);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"NiagaraDataInterfaceDataChannelRead",L"SpawnScaleModeInputDesc",
                      L"Control whether to override or combine this scale with previously set scales when calling this function multiple times."
                     );
  ::FName::FName(&local_158,L"Mode");
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnScaleMode,(UObject *)pUVar4,
                       L"ENDIDataChannelSpawnScaleMode");
  }
  local_228 = (TObjectPtr<UObject>_u_0)
              Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.OuterSingleton);
  }
  local_21e = 0;
  local_220 = 3;
  local_21c = 0xffffffffffffffff;
  local_214 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_228.ObjectPtr);
  local_f0._0_4_ = local_158.ComparisonIndex.Value;
  local_f0._4_4_ = local_158.Number;
  local_e8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_e8,(FNiagaraTypeDefinition *)&local_228.ObjectPtr);
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_f0,pFVar3);
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_b0,L"NiagaraDataInterfaceDataChannelRead",
             L"ScaleSpawnCountRandomScaleMinInputDesc",
             L"Minimum value for a random additional scale applied to each NDC spawn.");
  local_res10[0] = 0x3f800000;
  ::FName::FName(&local_150,L"RandomScaleMin");
  local_210._0_4_ = local_150.ComparisonIndex.Value;
  local_210._4_4_ = local_150.Number;
  local_208[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_208,&FNiagaraTypeDefinition::FloatDef);
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8._0_4_ = 0;
  local_1f8._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_210) &&
     ((FScriptContainerElement *)local_210 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_210);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_res10,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_200.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data);
  }
  if (local_b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_a0,L"NiagaraDataInterfaceDataChannelRead",
             L"ScaleSpawnCountRandomScaleMaxInputDesc",
             L"Maximum value for a random additional scale applied to each NDC spawn.");
  local_res18[0] = 0x3f800000;
  ::FName::FName(&local_148,L"RandomScaleMax");
  local_1f0._0_4_ = local_148.ComparisonIndex.Value;
  local_1f0._4_4_ = local_148.Number;
  local_1e8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1e8,&FNiagaraTypeDefinition::FloatDef);
  local_1e0.Data = (FScriptContainerElement *)0x0;
  local_1d8._0_4_ = 0;
  local_1d8._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_1f0) &&
     ((FScriptContainerElement *)local_1f0 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_1f0);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_res18,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_1e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data);
  }
  if (local_a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_90,L"NiagaraDataInterfaceDataChannelRead",L"ScaleSpawnCountClampMinInputDesc",
             L"A minimum value for the scale value. If < 0 then no minimum is applied to the final scale."
            );
  local_res20[0] = 0;
  ::FName::FName(&local_140,L"ClampMin");
  local_1d0._0_4_ = local_140.ComparisonIndex.Value;
  local_1d0._4_4_ = local_140.Number;
  local_1c8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1c8,&FNiagaraTypeDefinition::FloatDef);
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8._0_4_ = 0;
  local_1b8._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_1d0) &&
     ((FScriptContainerElement *)local_1d0 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_1d0);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_res20,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_80,L"NiagaraDataInterfaceDataChannelRead",L"ScaleSpawnCountClampMaxInputDesc",
             L"A maximum value for the scale value. If < 0 then no maximum is applied to the final scale."
            );
  local_268[0] = 0x3f800000;
  ::FName::FName(&local_138,L"ClampMax");
  local_1b0._0_4_ = local_138.ComparisonIndex.Value;
  local_1b0._4_4_ = local_138.Number;
  local_1a8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1a8,&FNiagaraTypeDefinition::FloatDef);
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198._0_4_ = 0;
  local_198._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_1b0) &&
     ((FScriptContainerElement *)local_1b0 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_1b0);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_268,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  return &Sig;
}

// GetFunctionSig_SpawnConditional @ 148e6b1f0

FNiagaraFunctionSignature * __cdecl NDIDataChannelReadLocal::GetFunctionSig_SpawnConditional(void)

{
  code *pcVar1;
  short sVar2;
  bool bVar3;
  FText *pFVar4;
  UPackage *pUVar5;
  FNiagaraFunctionSignature *pFVar6;
  FNiagaraVariable *pFVar7;
  longlong lVar8;
  FNiagaraBool local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  TObjectPtr<UObject>_u_0 local_res20;
  TObjectPtr<UObject>_u_0 local_228;
  undefined2 local_220;
  undefined1 local_21e;
  undefined8 local_21c;
  undefined4 local_214;
  TObjectPtr<UObject>_u_0 local_210;
  undefined2 local_208;
  undefined1 local_206;
  undefined8 local_204;
  undefined4 local_1fc;
  TObjectPtr<UObject>_u_0 local_1f8;
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined8 local_1ec;
  undefined4 local_1e4;
  TObjectPtr<UObject>_u_0 local_1e0;
  undefined2 local_1d8;
  undefined1 local_1d6;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined1 local_1c8 [8];
  FNiagaraTypeDefinitionHandle local_1c0 [2];
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  FNiagaraTypeDefinitionHandle local_1a0 [2];
  ForAnyElementType local_198;
  undefined8 local_190;
  FName local_188;
  FName local_180;
  TObjectPtr<UObject>_u_0 *local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  undefined1 local_148 [8];
  FNiagaraTypeDefinitionHandle local_140 [2];
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined1 local_128 [8];
  FNiagaraTypeDefinitionHandle local_120 [2];
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  FNiagaraTypeDefinitionHandle local_100 [2];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  FNiagaraTypeDefinitionHandle local_e0 [2];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  FNiagaraTypeDefinitionHandle local_c0 [2];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelReadLocal::GetFunctionSig_SpawnConditional'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  Sig.bMemberFunction = 1;
  Sig.bRequiresExecPin = 1;
  Sig.Name = NAME_SpawnConditional;
  Sig.ModuleUsageBitmask = 0x1e07;
  pFVar4 = FText::FText(&local_a8);
  ::FName::FName(&local_188,L"DataChannel interface");
  local_228.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelRead::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_228.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_228.DebugPtr);
  }
  local_21e = 0;
  local_220 = 1;
  local_21c = 0xffffffffffffffff;
  local_214 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_228.ObjectPtr);
  local_148._0_4_ = local_188.ComparisonIndex.Value;
  local_148._4_4_ = local_188.Number;
  local_140[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_140,(FNiagaraTypeDefinition *)&local_228.ObjectPtr);
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = 0;
  local_130._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_148,pFVar4);
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_98,L"NiagaraDataInterfaceDataChannelRead",L"SpawnEnableInputDesc",
                      L"Enable or disable this function call. If false, this call with have no effect."
                     );
  local_res8[0].Value = -1;
  ::FName::FName(&local_180,L"Enable");
  local_c8._0_4_ = local_180.ComparisonIndex.Value;
  local_c8._4_4_ = local_180.Number;
  local_c0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_c0,&FNiagaraTypeDefinition::BoolDef);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  FNiagaraFunctionSignature::AddInputWithDefault<FNiagaraBool>
            (&Sig,(FNiagaraVariable *)local_c8,local_res8,pFVar4);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_88,L"NiagaraDataInterfaceDataChannelRead",L"EmitterIDDesc",
                      L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                     );
  ::FName::FName(&local_170,L"Emitter ID");
  local_res20.DebugPtr = (UObject *)FNiagaraEmitterID::StaticStruct();
  local_210.DebugPtr = local_res20.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res20.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res20.DebugPtr);
  }
  local_206 = 0;
  local_208 = 2;
  local_204 = 0xffffffffffffffff;
  local_1fc = 0xffffffff;
  bVar3 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res20.DebugPtr,UserFacing);
  if (!bVar3) {
    local_178 = &local_res20;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_178);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_210.ObjectPtr);
  local_128._0_4_ = local_170.ComparisonIndex.Value;
  local_128._4_4_ = local_170.Number;
  local_120[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_120,(FNiagaraTypeDefinition *)&local_210.ObjectPtr);
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110._0_4_ = 0;
  local_110._4_4_ = 0;
  FNiagaraFunctionSignature::AddInputWithoutDefault(&Sig,(FNiagaraVariable *)local_128,pFVar4);
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"NiagaraDataInterfaceDataChannelRead",L"SpawnCondModeInputDesc",
                      L"Controls how this function will interact with other calls to spawn functions. Spawn counts for each NDC can be accumulated or overwritten."
                     );
  ::FName::FName(&local_168,L"Mode");
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton == (UEnum *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode,(UObject *)pUVar5,
                       L"ENDIDataChannelSpawnMode");
  }
  local_1f8 = (TObjectPtr<UObject>_u_0)
              Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton);
  }
  local_1ee = 0;
  local_1f0 = 3;
  local_1ec = 0xffffffffffffffff;
  local_1e4 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_1f8.ObjectPtr);
  local_108._0_4_ = local_168.ComparisonIndex.Value;
  local_108._4_4_ = local_168.Number;
  local_100[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_100,(FNiagaraTypeDefinition *)&local_1f8.ObjectPtr);
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0._0_4_ = 0;
  local_f0._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_108,pFVar4);
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"NiagaraDataInterfaceDataChannelRead",L"SpawnCondOpInputDesc",
                      L"Compare the input against the Data Channel value:\n\n[Input] [Condition] [Data Channel Value]\n\nFor example:\nSpawn if [100] is [greater than] [Data Channel \'Height\' Variable]"
                     );
  ::FName::FName(&local_160,L"Operator");
  local_1e0.DebugPtr = (UObject *)StaticEnum<enum_ENiagaraConditionalOperator>();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UEnum *)local_1e0.DebugPtr != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable(local_1e0.DebugPtr);
  }
  local_1d8 = 3;
  local_1d6 = 0;
  local_1d4 = 0xffffffffffffffff;
  local_1cc = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_1e0.ObjectPtr);
  local_e8._0_4_ = local_160.ComparisonIndex.Value;
  local_e8._4_4_ = local_160.Number;
  local_e0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_e0,(FNiagaraTypeDefinition *)&local_1e0.ObjectPtr);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = 0;
  local_d0._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_e8,pFVar4);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_58,L"NiagaraDataInterfaceDataChannelRead",L"MinSpawnCountInputDesc",
             L"Minimum number of particles to spawn for each element in the Data Channel.");
  local_res10[0] = 1;
  ::FName::FName(&local_158,L"Min Spawn Count");
  local_1c8._0_4_ = local_158.ComparisonIndex.Value;
  local_1c8._4_4_ = local_158.Number;
  local_1c0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1c0,&FNiagaraTypeDefinition::IntDef);
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_1c8) &&
     ((FScriptContainerElement *)local_1c8 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar6;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar8 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar7 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar8 * 0x20),
                      (FNiagaraVariable *)local_1c8);
  FNiagaraVariable::AllocateData(pFVar7);
  memcpy((pFVar7->VarData).AllocatorInstance.Data,local_res10,(longlong)(pFVar7->VarData).ArrayNum);
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_48,L"NiagaraDataInterfaceDataChannelRead",L"MaxSpawnCountInputDesc",
             L"Maximum number of particles to spawn for each element in the Data Channel.");
  local_res18[0] = 1;
  ::FName::FName(&local_150,L"Max Spawn Count");
  local_1a8._0_4_ = local_150.ComparisonIndex.Value;
  local_1a8._4_4_ = local_150.Number;
  local_1a0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1a0,&FNiagaraTypeDefinition::IntDef);
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190._0_4_ = 0;
  local_190._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_1a8) &&
     ((FScriptContainerElement *)local_1a8 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar6;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar8 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar7 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar8 * 0x20),
                      (FNiagaraVariable *)local_1a8);
  FNiagaraVariable::AllocateData(pFVar7);
  memcpy((pFVar7->VarData).AllocatorInstance.Data,local_res18,(longlong)(pFVar7->VarData).ArrayNum);
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  sVar2 = (short)Sig.Inputs.ArrayNum;
  if (Sig.Inputs.ArrayNum != (short)Sig.Inputs.ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar6;
    }
  }
  Sig.RequiredInputs = sVar2;
  return &Sig;
}

// GetFunctionSig_SpawnDirect @ 148e6ba60

FNiagaraFunctionSignature * __cdecl NDIDataChannelReadLocal::GetFunctionSig_SpawnDirect(void)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  UPackage *pUVar4;
  FNiagaraFunctionSignature *pFVar5;
  FNiagaraVariable *pFVar6;
  longlong lVar7;
  FNiagaraBool local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_278 [2];
  TObjectPtr<UObject>_u_0 local_270;
  TObjectPtr<UObject>_u_0 local_268;
  undefined2 local_260;
  undefined1 local_25e;
  undefined8 local_25c;
  undefined4 local_254;
  TObjectPtr<UObject>_u_0 local_250;
  undefined2 local_248;
  undefined1 local_246;
  undefined8 local_244;
  undefined4 local_23c;
  TObjectPtr<UObject>_u_0 local_238;
  undefined2 local_230;
  undefined1 local_22e;
  undefined8 local_22c;
  undefined4 local_224;
  undefined1 local_220 [8];
  FNiagaraTypeDefinitionHandle local_218 [2];
  ForAnyElementType local_210;
  undefined8 local_208;
  undefined1 local_200 [8];
  FNiagaraTypeDefinitionHandle local_1f8 [2];
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  FNiagaraTypeDefinitionHandle local_1d8 [2];
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  FNiagaraTypeDefinitionHandle local_1b8 [2];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  FName *local_198;
  FName *local_190;
  FName local_188;
  FName local_180;
  TObjectPtr<UObject>_u_0 *local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  undefined1 local_140 [8];
  FNiagaraTypeDefinitionHandle local_138 [2];
  ForAnyElementType local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  FNiagaraTypeDefinitionHandle local_118 [2];
  ForAnyElementType local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  FNiagaraTypeDefinitionHandle local_f8 [2];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  FNiagaraTypeDefinitionHandle local_d8 [2];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelReadLocal::GetFunctionSig_SpawnDirect'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  Sig.Name = NAME_SpawnDirect;
  local_198 = &VarNameKey;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&Sig.FunctionSpecifiers,(TKeyInitializer<FName_const_&> *)local_1a0,
             (bool *)&local_198);
  local_190 = &VarTypeKey;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&Sig.FunctionSpecifiers,(TKeyInitializer<FName_const_&> *)(local_1a0 + 4),
             (bool *)&local_190);
  Sig.bMemberFunction = 1;
  Sig.bRequiresExecPin = 1;
  Sig.ModuleUsageBitmask = 0x1e07;
  pFVar3 = FText::FText(&local_70);
  ::FName::FName(&local_188,L"DataChannel interface");
  local_250.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelRead::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_250.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_250.DebugPtr);
  }
  local_246 = 0;
  local_248 = 1;
  local_244 = 0xffffffffffffffff;
  local_23c = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_250.ObjectPtr);
  local_140._0_4_ = local_188.ComparisonIndex.Value;
  local_140._4_4_ = local_188.Number;
  local_138[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_138,(FNiagaraTypeDefinition *)&local_250.ObjectPtr);
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_140,pFVar3);
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_80,L"NiagaraDataInterfaceDataChannelRead",L"SpawnEnableInputDesc",
                      L"Enable or disable this function call. If false, this call with have no effect."
                     );
  local_res8[0].Value = -1;
  ::FName::FName(&local_180,L"Enable");
  local_e0._0_4_ = local_180.ComparisonIndex.Value;
  local_e0._4_4_ = local_180.Number;
  local_d8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_d8,&FNiagaraTypeDefinition::BoolDef);
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInputWithDefault<FNiagaraBool>
            (&Sig,(FNiagaraVariable *)local_e0,local_res8,pFVar3);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (local_50,L"NiagaraDataInterfaceDataChannelRead",L"EmitterIDDesc",
                      L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                     );
  ::FName::FName(&local_170,L"Emitter ID");
  local_270.DebugPtr = (UObject *)FNiagaraEmitterID::StaticStruct();
  local_268.DebugPtr = local_270.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_270.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_270.DebugPtr);
  }
  local_25e = 0;
  local_260 = 2;
  local_25c = 0xffffffffffffffff;
  local_254 = 0xffffffff;
  bVar2 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_270.DebugPtr,UserFacing);
  if (!bVar2) {
    local_178 = &local_270;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_178);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_268.ObjectPtr);
  local_120._0_4_ = local_170.ComparisonIndex.Value;
  local_120._4_4_ = local_170.Number;
  local_118[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_118,(FNiagaraTypeDefinition *)&local_268.ObjectPtr);
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  FNiagaraFunctionSignature::AddInputWithoutDefault(&Sig,(FNiagaraVariable *)local_120,pFVar3);
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_50[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50[0].TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_60,L"NiagaraDataInterfaceDataChannelRead",L"SpawnCondModeInputDesc",
                      L"Controls how this function will interact with other calls to spawn functions. Spawn counts for each NDC can be accumulated or overwritten."
                     );
  ::FName::FName(&local_168,L"Mode");
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode,(UObject *)pUVar4,
                       L"ENDIDataChannelSpawnMode");
  }
  local_238 = (TObjectPtr<UObject>_u_0)
              Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton);
  }
  local_22e = 0;
  local_230 = 3;
  local_22c = 0xffffffffffffffff;
  local_224 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_238.ObjectPtr);
  local_100._0_4_ = local_168.ComparisonIndex.Value;
  local_100._4_4_ = local_168.Number;
  local_f8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_f8,(FNiagaraTypeDefinition *)&local_238.ObjectPtr);
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_100,pFVar3);
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_c0,L"NiagaraDataInterfaceDataChannelRead",L"SpawnDirectRandomScaleMinInputDesc",
             L"Minimum value for an additional random scale applied to each NDC spawn count.");
  local_res10[0] = 0x3f800000;
  ::FName::FName(&local_160,L"RandomScaleMin");
  local_220._0_4_ = local_160.ComparisonIndex.Value;
  local_220._4_4_ = local_160.Number;
  local_218[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_218,&FNiagaraTypeDefinition::FloatDef);
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208._0_4_ = 0;
  local_208._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_220) &&
     ((FScriptContainerElement *)local_220 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_220);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_res10,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data);
  }
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_b0,L"NiagaraDataInterfaceDataChannelRead",L"SpawnDirectRandomScaleMaxInputDesc",
             L"Maximum value for an additional random scale applied to each NDC spawn count.");
  local_res18[0] = 0x3f800000;
  ::FName::FName(&local_158,L"RandomScaleMax");
  local_200._0_4_ = local_158.ComparisonIndex.Value;
  local_200._4_4_ = local_158.Number;
  local_1f8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1f8,&FNiagaraTypeDefinition::FloatDef);
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8._0_4_ = 0;
  local_1e8._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_200) &&
     ((FScriptContainerElement *)local_200 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_200);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_res18,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  if (local_b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_a0,L"NiagaraDataInterfaceDataChannelRead",L"SpawnDirectClampMinInputDesc",
             L"Minimum Spawn Count to use after random scale is applied.");
  local_res20[0] = 0;
  ::FName::FName(&local_150,L"ClampMin");
  local_1e0._0_4_ = local_150.ComparisonIndex.Value;
  local_1e0._4_4_ = local_150.Number;
  local_1d8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1d8,&FNiagaraTypeDefinition::IntDef);
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8._0_4_ = 0;
  local_1c8._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_1e0) &&
     ((FScriptContainerElement *)local_1e0 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_1e0);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_res20,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_1d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data);
  }
  if (local_a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_90,L"NiagaraDataInterfaceDataChannelRead",L"SpawnDirectClampMaxInputDesc",
             L"Maximum Spawn Count to use after random scale is applied. If < 0, No max clamp is applied."
            );
  local_278[0] = 1;
  ::FName::FName(&local_148,L"ClampMax");
  local_1c0._0_4_ = local_148.ComparisonIndex.Value;
  local_1c0._4_4_ = local_148.Number;
  local_1b8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_1b8,&FNiagaraTypeDefinition::IntDef);
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8._0_4_ = 0;
  local_1a8._4_4_ = 0;
  if ((Sig.Inputs.AllocatorInstance.Data <= (FScriptContainerElement *)local_1c0) &&
     ((FScriptContainerElement *)local_1c0 <
      Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraFunctionSignature *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  lVar7 = (longlong)Sig.Inputs.ArrayNum;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  pFVar6 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + lVar7 * 0x20),
                      (FNiagaraVariable *)local_1c0);
  FNiagaraVariable::AllocateData(pFVar6);
  memcpy((pFVar6->VarData).AllocatorInstance.Data,local_278,(longlong)(pFVar6->VarData).ArrayNum);
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  return &Sig;
}

// GetFunctionSig_Write @ 148e6c4d0

FNiagaraFunctionSignature * __cdecl NDIDataChannelWriteLocal::GetFunctionSig_Write(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  short sVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  FNiagaraFunctionSignature *pFVar6;
  FText *pFVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  size_t _Size;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TObjectPtr<UObject>_u_0 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined8 local_fc;
  undefined4 local_f4;
  FName local_f0;
  FName local_e8;
  undefined1 local_e0 [8];
  FNiagaraTypeDefinitionHandle local_d8 [2];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  FNiagaraTypeDefinitionHandle local_b8 [2];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  FNiagaraTypeDefinitionHandle local_98 [2];
  ForAnyElementType local_90;
  undefined8 local_88;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar9 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Sig.bHidden = 0;
      Sig.bIsCompileTagGenerator = 0;
      Sig.bSoftDeprecatedFunction = 0;
      Sig.bReadFunction = 0;
      Sig.bWriteFunction = 0;
      Sig.bSupportsGPU = 1;
      Sig.bSupportsCPU = 1;
      Sig.bExperimental = 0;
      Sig.bMemberFunction = 0;
      Sig.bRequiresExecPin = 0;
      Sig.bRequiresContext = 0;
      atexit(`NDIDataChannelWriteLocal::GetFunctionSig_Write'::__l2::
             _dynamic_atexit_destructor_for__Sig__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((Sig.Name != (FName)0x0) && ((0 < Sig.Inputs.ArrayNum || (0 < Sig.Outputs.ArrayNum)))) {
    return &Sig;
  }
  if (*piVar9 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&local_res10,L"Emit");
      EmitVar._padding_._0_4_ = local_res10.ComparisonIndex.Value;
      EmitVar._padding_._4_4_ = local_res10.Number;
      EmitVar._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&EmitVar._padding_,
                      &FNiagaraTypeDefinition::BoolDef);
      EmitVar.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      EmitVar.VarData.ArrayNum = 0;
      EmitVar.VarData.ArrayMax = 0;
      atexit(`NDIDataChannelWriteLocal::GetFunctionSig_Write'::__l5::
             _dynamic_atexit_destructor_for__EmitVar__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  local_res8[0] = 0xffffffff;
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&EmitVar._padding_);
  iVar5 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar5 != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar2)();
      return pFVar6;
    }
  }
  FNiagaraVariable::AllocateData(&EmitVar);
  memcpy(EmitVar.VarData.AllocatorInstance.Data,local_res8,(longlong)EmitVar.VarData.ArrayNum);
  ::FName::FName(&local_res18,L"Write");
  Sig.Name = local_res18;
  Sig.bWriteFunction = 1;
  Sig.bSupportsGPU = 0;
  Sig.bMemberFunction = 1;
  Sig.bRequiresExecPin = 1;
  pFVar7 = FText::FText(&local_80);
  ::FName::FName(&local_res20,L"DataChannel interface");
  local_108.DebugPtr = (UObject *)UNiagaraDataInterfaceDataChannelWrite::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_108.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_108.DebugPtr);
  }
  local_fe = 0;
  local_100 = 1;
  local_fc = 0xffffffffffffffff;
  local_f4 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_108.ObjectPtr);
  local_e0._0_4_ = local_res20.ComparisonIndex.Value;
  local_e0._4_4_ = local_res20.Number;
  local_d8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_d8,(FNiagaraTypeDefinition *)&local_108.ObjectPtr);
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_e0,pFVar7);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_70,L"NiagaraDataInterfaceDataChannelWrite",L"ExecuteWriteFlagTooltip",
             L"If true then the write is executed, if false then this call is ignored and no write occurs."
            );
  if ((Sig.Inputs.AllocatorInstance.Data <
       (FScriptContainerElement *)((longlong)&EmitVar._padding_ + 1)) &&
     (&EmitVar <
      (FNiagaraVariable *)(Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayMax * 0x20)
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar2)();
      return pFVar6;
    }
  }
  if (Sig.Inputs.ArrayNum == Sig.Inputs.ArrayMax) {
    Sig.Inputs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&Sig.Inputs.AllocatorInstance,&Sig.Inputs.ArrayMax);
  }
  pFVar8 = Sig.Inputs.AllocatorInstance.Data + (longlong)Sig.Inputs.ArrayNum * 0x20;
  Sig.Inputs.ArrayNum = Sig.Inputs.ArrayNum + 1;
  *(longlong *)pFVar8 = EmitVar._padding_;
  pFVar1 = pFVar8 + 0x10;
  *(int *)(pFVar8 + 8) = (int)EmitVar._padding_;
  *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
  _Src = EmitVar.VarData.AllocatorInstance;
  iVar5 = EmitVar.VarData.ArrayNum;
  _Size = (size_t)EmitVar.VarData.ArrayNum;
  *(int *)(pFVar8 + 0x18) = EmitVar.VarData.ArrayNum;
  if (iVar5 == 0) {
    *(int *)(pFVar8 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,(ForAnyElementType *)pFVar1,iVar5,(int *)(pFVar8 + 0x1c));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar1,_Src.Data,_Size);
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pFVar7 = FText::FText(&local_60);
  ::FName::FName(&local_f0,L"Index");
  local_c0._0_4_ = local_f0.ComparisonIndex.Value;
  local_c0._4_4_ = local_f0.Number;
  local_b8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_b8,&FNiagaraTypeDefinition::IntDef);
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  FNiagaraFunctionSignature::AddInput(&Sig,(FNiagaraVariable *)local_c0,pFVar7);
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  pFVar7 = FText::FText(&local_50);
  ::FName::FName(&local_e8,L"Success");
  local_a0._0_4_ = local_e8.ComparisonIndex.Value;
  local_a0._4_4_ = local_e8.Number;
  local_98[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_98,&FNiagaraTypeDefinition::BoolDef);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  FNiagaraFunctionSignature::AddOutput(&Sig,(FNiagaraVariable *)local_a0,pFVar7);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  sVar3 = (short)Sig.Inputs.ArrayNum;
  if (Sig.Inputs.ArrayNum != (short)Sig.Inputs.ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraFunctionSignature *)(*pcVar2)();
      return pFVar6;
    }
  }
  Sig.RequiredInputs = sVar3;
  return &Sig;
}

// GetTypeHash @ 148e6f5b0

uint __cdecl GetTypeHash(FNDIDataChannelFunctionInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  FName FVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  FNiagaraTypeDefinition *pFVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  FVar5 = param_1->FunctionName;
  uVar7 = GetTypeHash(FVar5.ComparisonIndex.Value);
  iVar4 = (param_1->Inputs).ArrayNum;
  pFVar14 = (param_1->Inputs).AllocatorInstance.Data;
  uVar7 = FVar5.Number + uVar7;
  pFVar1 = pFVar14 + (longlong)iVar4 * 0xc;
  while( true ) {
    if ((param_1->Inputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar14 == pFVar1) break;
    uVar6 = *(undefined8 *)pFVar14;
    uVar8 = GetTypeHash((FNameEntryId)(uint)uVar6);
    uVar8 = (int)((ulonglong)uVar6 >> 0x20) + uVar8;
    pFVar9 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar14 + 8));
    uVar3 = pFVar9->UnderlyingType;
    bVar2 = pFVar9->Flags;
    uVar12 = pFVar9->UnderlyingTypePathNameHash - (uint)uVar3 ^ (uint)(uVar3 >> 0xd);
    uVar10 = (-0x61c88647 - uVar12) - (uint)uVar3 ^ uVar12 << 8;
    uVar13 = (uVar3 - uVar10) - uVar12 ^ uVar10 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar10 ^ uVar13 >> 0xc;
    uVar10 = (uVar10 - uVar12) - uVar13 ^ uVar12 << 0x10;
    uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar10 ^ uVar13 >> 3;
    uVar10 = (uVar10 - uVar12) - uVar13 ^ uVar12 << 10;
    uVar10 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 0xf;
    iVar11 = uVar10 - bVar2;
    uVar12 = iVar11 * 0x100 ^ 0x9e3779b9 - uVar10;
    uVar13 = (((uint)bVar2 + (uint)bVar2) - uVar12) - uVar10 ^ uVar12 >> 0xd;
    uVar10 = (iVar11 - uVar13) - uVar12 ^ uVar13 >> 0xc;
    uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar10 << 0x10;
    uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar12 >> 5;
    uVar10 = (uVar10 - uVar13) - uVar12 ^ uVar13 >> 3;
    uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar10 << 10;
    uVar13 = ((uVar13 - uVar12) - uVar10 ^ uVar12 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
    uVar10 = (-0x61c88647 - uVar8) - uVar13 ^ uVar13 << 8;
    uVar12 = (uVar8 - uVar10) - uVar13 ^ uVar10 >> 0xd;
    uVar13 = (uVar13 - uVar12) - uVar10 ^ uVar12 >> 0xc;
    uVar8 = (uVar10 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar10 = (uVar12 - uVar8) - uVar13 ^ uVar8 >> 5;
    uVar12 = (uVar13 - uVar10) - uVar8 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar12) - uVar10 ^ uVar12 << 10;
    uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 >> 0xf;
    uVar7 = uVar7 - uVar10 ^ uVar10 >> 0xd;
    uVar8 = (-0x61c88647 - uVar7) - uVar10 ^ uVar7 << 8;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xd;
    uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf;
    pFVar14 = pFVar14 + 0xc;
  }
  iVar4 = (param_1->Outputs).ArrayNum;
  pFVar14 = (param_1->Outputs).AllocatorInstance.Data;
  pFVar1 = pFVar14 + (longlong)iVar4 * 0xc;
  while( true ) {
    if ((param_1->Outputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar14 == pFVar1) break;
    uVar6 = *(undefined8 *)pFVar14;
    uVar8 = GetTypeHash((FNameEntryId)(uint)uVar6);
    uVar8 = (int)((ulonglong)uVar6 >> 0x20) + uVar8;
    pFVar9 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar14 + 8));
    uVar3 = pFVar9->UnderlyingType;
    bVar2 = pFVar9->Flags;
    uVar12 = pFVar9->UnderlyingTypePathNameHash - (uint)uVar3 ^ (uint)(uVar3 >> 0xd);
    uVar10 = (-0x61c88647 - uVar12) - (uint)uVar3 ^ uVar12 << 8;
    uVar13 = (uVar3 - uVar10) - uVar12 ^ uVar10 >> 0xd;
    uVar12 = (uVar12 - uVar13) - uVar10 ^ uVar13 >> 0xc;
    uVar10 = (uVar10 - uVar12) - uVar13 ^ uVar12 << 0x10;
    uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar10 ^ uVar13 >> 3;
    uVar10 = (uVar10 - uVar12) - uVar13 ^ uVar12 << 10;
    uVar10 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 0xf;
    iVar11 = uVar10 - bVar2;
    uVar12 = iVar11 * 0x100 ^ 0x9e3779b9 - uVar10;
    uVar13 = (((uint)bVar2 + (uint)bVar2) - uVar12) - uVar10 ^ uVar12 >> 0xd;
    uVar10 = (iVar11 - uVar13) - uVar12 ^ uVar13 >> 0xc;
    uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar10 << 0x10;
    uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar12 >> 5;
    uVar10 = (uVar10 - uVar13) - uVar12 ^ uVar13 >> 3;
    uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar10 << 10;
    uVar13 = ((uVar13 - uVar12) - uVar10 ^ uVar12 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
    uVar10 = (-0x61c88647 - uVar8) - uVar13 ^ uVar13 << 8;
    uVar12 = (uVar8 - uVar10) - uVar13 ^ uVar10 >> 0xd;
    uVar13 = (uVar13 - uVar12) - uVar10 ^ uVar12 >> 0xc;
    uVar8 = (uVar10 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar10 = (uVar12 - uVar8) - uVar13 ^ uVar8 >> 5;
    uVar12 = (uVar13 - uVar10) - uVar8 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar12) - uVar10 ^ uVar12 << 10;
    uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 >> 0xf;
    uVar7 = uVar7 - uVar10 ^ uVar10 >> 0xd;
    uVar8 = (-0x61c88647 - uVar7) - uVar10 ^ uVar7 << 8;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xd;
    uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf;
    pFVar14 = pFVar14 + 0xc;
  }
  return uVar7;
}

// IsPluginAsset @ 148e75320

bool __cdecl NiagaraAnalytics::IsPluginAsset(UObject *param_1)

{
  char cVar1;
  bool bVar2;
  UPackage *pUVar3;
  FName local_res8 [4];
  FString local_18;
  
  if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    return false;
  }
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x1c0))();
  if (cVar1 == '\0') {
    return false;
  }
  pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if (pUVar3 != (UPackage *)0x0) {
    pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    local_res8[0] = (FName)pUVar3->_padding_;
    ::FName::ToString(local_res8,&local_18);
    bVar2 = ::FString::StartsWith(&local_18,L"/Niagara/",9,CaseSensitive);
    if ((bVar2) ||
       (bVar2 = ::FString::StartsWith(&local_18,L"/NiagaraFluids/",0xf,CaseSensitive), bVar2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar2;
  }
  return false;
}

// IsPluginClass @ 148e753f0

bool __cdecl NiagaraAnalytics::IsPluginClass(UClass *param_1)

{
  int iVar1;
  UPackage *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FName local_res8 [4];
  FString local_18;
  
  if (param_1 == (UClass *)0x0) {
    return false;
  }
  pUVar2 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_res8[0] = (FName)pUVar2->_padding_;
  ::FName::ToString(local_res8,&local_18);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,L"/Script/Niagara");
  if (iVar1 != 0) {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,L"/Script/NiagaraFluids");
    if (iVar1 != 0) {
      bVar4 = false;
      goto LAB_148e75468;
    }
  }
  bVar4 = true;
LAB_148e75468:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// RecordEvent @ 148e7a170

/* WARNING: Removing unreachable block (ram,0x000148e7a35c) */
/* WARNING: Removing unreachable block (ram,0x000148e7a36a) */

void __cdecl NiagaraAnalytics::RecordEvent(FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  IAnalyticsProviderET *pIVar7;
  wchar_t *pwVar8;
  ForAnyElementType local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  FAnalyticsEventAttribute local_38;
  
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  pFVar5 = ::FString::FString(&local_48,param_2);
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 != 0) goto LAB_148e7a20f;
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
LAB_148e7a20f:
  local_38.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_38.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_38.AttrValueString,param_3);
  local_38.AttrValueBool = false;
  local_38.AttrValueNumber = 0.0;
  local_38.AttrType = String;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_68.Data <= &local_38) &&
      (&local_38 < (FAnalyticsEventAttribute *)(local_68.Data + (longlong)local_60._4_4_ * 0x30)))
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
  iVar4 = (int)local_60;
  if ((int)local_60 == local_60._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_68,(int *)((longlong)&local_60 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_60 = CONCAT44(local_60._4_4_,iVar4 + 1);
  *(undefined8 *)&local_68.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_68.Data[lVar6 * 0x30].field_0x0 =
       local_38.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_68.Data + lVar6 * 0x30 + 8) = local_38.AttrName.Data.ArrayNum;
  *(int *)(local_68.Data + lVar6 * 0x30 + 0xc) = local_38.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_68.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_68.Data + lVar6 * 0x30 + 0x10) =
       local_38.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_68.Data + lVar6 * 0x30 + 0x18) = local_38.AttrValueString.Data.ArrayNum;
  *(int *)(local_68.Data + lVar6 * 0x30 + 0x1c) = local_38.AttrValueString.Data.ArrayMax;
  *(double *)(local_68.Data + lVar6 * 0x30 + 0x20) = local_38.AttrValueNumber;
  local_68.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_38.AttrValueBool;
  *(AttrTypeEnum *)(local_68.Data + lVar6 * 0x30 + 0x2c) = local_38.AttrType;
  local_38.AttrValueString.Data.ArrayNum = 0;
  local_38.AttrValueString.Data.ArrayMax = 0;
  local_38.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AttrName.Data.ArrayNum = 0;
  local_38.AttrName.Data.ArrayMax = 0;
  local_38.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
    pIVar7 = FEngineAnalytics::GetProvider();
    pcVar2 = *(code **)(pIVar7->_padding_ + 0x100);
    ::FString::ConcatCF(&local_58,L"Editor.Usage.Niagara.",param_1);
    (*pcVar2)(pIVar7,&local_58,&local_68);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_68.Data,(int)local_60);
  if ((FAnalyticsEventAttribute *)local_68.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// RecordEvent @ 148e7a400

void __cdecl
NiagaraAnalytics::RecordEvent
          (FString *param_1,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  IAnalyticsProviderET *pIVar2;
  FString local_18;
  
  if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
    pIVar2 = FEngineAnalytics::GetProvider();
    pcVar1 = *(code **)(pIVar2->_padding_ + 0x100);
    ::FString::ConcatCF(&local_18,L"Editor.Usage.Niagara.",param_1);
    (*pcVar1)(pIVar2,&local_18,param_2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SortParameters @ 148e80ae0

void __cdecl
NDIDataChannelUtilities::SortParameters
          (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableBase,_NDIDataChannelUtilities::SortParameters_::__l2::<lambda_1>_>_>
            ((FNiagaraVariableBase *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_NoRegister @ 148e858c0

UClass * __cdecl Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIDataChannelWriteSimCacheData",
               &Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton,
               UNDIDataChannelWriteSimCacheData::
               StaticRegisterNativesUNDIDataChannelWriteSimCacheData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDIDataChannelWriteSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIDataChannelWriteSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton;
}

// Z_Construct_UClass_UNDIRenderTargetSimCacheData_NoRegister @ 148e85970

UClass * __cdecl Z_Construct_UClass_UNDIRenderTargetSimCacheData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIRenderTargetSimCacheData",
               &Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton,
               UNDIRenderTargetSimCacheData::StaticRegisterNativesUNDIRenderTargetSimCacheData,0x50,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNDIRenderTargetSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIRenderTargetSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister @ 148e85a20

UClass * __cdecl Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraConvertInPlaceUtilityBase",
               &Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton,
               UNiagaraConvertInPlaceUtilityBase::
               StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraConvertInPlaceUtilityBase>,
               InternalVTableHelperCtorCaller<UNiagaraConvertInPlaceUtilityBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister @ 148e85ad0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceActorComponent",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton,
               UNiagaraDataInterfaceActorComponent::
               StaticRegisterNativesUNiagaraDataInterfaceActorComponent,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceActorComponent>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceActorComponent>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_NoRegister @ 148e85b90

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayDistributionInt",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton,
               UNiagaraDataInterfaceArrayDistributionInt::
               StaticRegisterNativesUNiagaraDataInterfaceArrayDistributionInt,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceArrayDistributionInt>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayDistributionInt>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_NoRegister @ 148e85c50

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton,
               UNiagaraDataInterfaceArrayMesh::StaticRegisterNativesUNiagaraDataInterfaceArrayMesh,
               0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceArrayMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayMesh>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_NoRegister @ 148e85d10

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAsyncGpuTrace",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton,
               UNiagaraDataInterfaceAsyncGpuTrace::
               StaticRegisterNativesUNiagaraDataInterfaceAsyncGpuTrace,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAsyncGpuTrace>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAsyncGpuTrace>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_NoRegister @ 148e85dd0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceConsoleVariable",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton,
               UNiagaraDataInterfaceConsoleVariable::
               StaticRegisterNativesUNiagaraDataInterfaceConsoleVariable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceConsoleVariable>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceConsoleVariable>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister @ 148e85e90

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataChannelRead",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton,
               UNiagaraDataInterfaceDataChannelRead::
               StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataChannelRead>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelRead>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData_NoRegister @ 148e85f50

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDynamicMeshSimCacheData",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.
                InnerSingleton,
               UNiagaraDataInterfaceDynamicMeshSimCacheData::
               StaticRegisterNativesUNiagaraDataInterfaceDynamicMeshSimCacheData,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceDynamicMeshSimCacheData>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDynamicMeshSimCacheData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister @ 148e86000

UClass * __cdecl Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterDefinitionsBase",
               &Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton,
               UNiagaraParameterDefinitionsBase::
               StaticRegisterNativesUNiagaraParameterDefinitionsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraParameterDefinitionsBase>,
               InternalVTableHelperCtorCaller<UNiagaraParameterDefinitionsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister @ 148e860b0

UClass * __cdecl Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRenderableMeshArrayInterface",
               &Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton,
               UNiagaraRenderableMeshArrayInterface::
               StaticRegisterNativesUNiagaraRenderableMeshArrayInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraRenderableMeshArrayInterface>,
               InternalVTableHelperCtorCaller<UNiagaraRenderableMeshArrayInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister @ 148e86170

UClass * __cdecl Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRenderableMeshInterface",
               &Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton,
               UNiagaraRenderableMeshInterface::StaticRegisterNativesUNiagaraRenderableMeshInterface
               ,0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraRenderableMeshInterface>,
               InternalVTableHelperCtorCaller<UNiagaraRenderableMeshInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister @ 148e86230

UClass * __cdecl Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScriptSourceBase",
               &Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton,
               UNiagaraScriptSourceBase::StaticRegisterNativesUNiagaraScriptSourceBase,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraScriptSourceBase>,
               InternalVTableHelperCtorCaller<UNiagaraScriptSourceBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScriptSourceBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister @ 148e862e0

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheCustomStorageInterface",
               &Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton,
               UNiagaraSimCacheCustomStorageInterface::
               StaticRegisterNativesUNiagaraSimCacheCustomStorageInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimCacheCustomStorageInterface>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheCustomStorageInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister @ 148e863a0

UClass * __cdecl Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraValidationRuleSet",
               &Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton,
               UNiagaraValidationRuleSet::StaticRegisterNativesUNiagaraValidationRuleSet,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraValidationRuleSet>,
               InternalVTableHelperCtorCaller<UNiagaraValidationRuleSet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENCPoolMethod @ 148e86450

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENCPoolMethod(void)

{
  if (Z_Registration_Info_UEnum_ENCPoolMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENCPoolMethod.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENCPoolMethod.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode @ 148e86490

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode(void)

{
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnScaleMode @ 148e864d0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnScaleMode(void)

{
  if (Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnScaleMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDIDataChannelSpawnScaleMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraSortMode @ 148e86510

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraSortMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraSortMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraSortMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraSortMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraSortMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraTickBehavior @ 148e86550

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraTickBehavior(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraTickBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraTickBehavior.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraTickBehavior.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties @ 148e86590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshProperties.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraScalabilityState @ 148e86610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraScalabilityState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScalabilityState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraScalabilityState.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraScalabilityState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraScalabilityState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters @ 148e86690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCaptureParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCaptureParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCaptureParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCaptureParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStackSection @ 148e86710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStackSection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStackSection.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStackSection.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStackSection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStackSection.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraStackSection.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CVarDebugDumpWriterDI'' @ 15040eaa0

void __cdecl _dynamic_atexit_destructor_for__CVarDebugDumpWriterDI__(void)

{
  CVarDebugDumpWriterDI._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugDumpWriterDI);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNDCReadForcePrevFrame'' @ 15040eac0

void __cdecl _dynamic_atexit_destructor_for__CVarNDCReadForcePrevFrame__(void)

{
  CVarNDCReadForcePrevFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNDCReadForcePrevFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNDCReadForceTG'' @ 15040eae0

void __cdecl _dynamic_atexit_destructor_for__CVarNDCReadForceTG__(void)

{
  CVarNDCReadForceTG._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNDCReadForceTG);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNDCWriteDIZeroCPUBufferMode'' @ 15040eb00

void __cdecl _dynamic_atexit_destructor_for__CVarNDCWriteDIZeroCPUBufferMode__(void)

{
  CVarNDCWriteDIZeroCPUBufferMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNDCWriteDIZeroCPUBufferMode);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15040eb20

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'DummyUAVFloat'' @ 15040eb50

void __cdecl NDIDataChannelUtilities::_dynamic_atexit_destructor_for__DummyUAVFloat__(void)

{
  DummyUAVFloat._0_8_ = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyUAVFloat);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&DummyUAVFloat.field_0x28);
  FRenderResource::~FRenderResource((FRenderResource *)&DummyUAVFloat);
  return;
}

// `dynamic_atexit_destructor_for_'DummyUAVHalf'' @ 15040eb90

void __cdecl NDIDataChannelUtilities::_dynamic_atexit_destructor_for__DummyUAVHalf__(void)

{
  DummyUAVHalf._0_8_ = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyUAVHalf);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&DummyUAVHalf.field_0x28);
  FRenderResource::~FRenderResource((FRenderResource *)&DummyUAVHalf);
  return;
}

// `dynamic_atexit_destructor_for_'DummyUAVInt32'' @ 15040ebd0

void __cdecl NDIDataChannelUtilities::_dynamic_atexit_destructor_for__DummyUAVInt32__(void)

{
  DummyUAVInt32._0_8_ = &___7__TGlobalResource_VFNDIDummyUAV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyUAVInt32);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&DummyUAVInt32.field_0x28);
  FRenderResource::~FRenderResource((FRenderResource *)&DummyUAVInt32);
  return;
}

// `dynamic_atexit_destructor_for_'EmitVar'' @ 15040ec10

void __cdecl
`NDIDataChannelWriteLocal::GetFunctionSig_Append'::__l5::_dynamic_atexit_destructor_for__EmitVar__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmitVar.VarData.AllocatorInstance.Data;
  if (EmitVar.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmitVar.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmitVar'' @ 15040ec30

void __cdecl
`NDIDataChannelWriteLocal::GetFunctionSig_Write'::__l5::_dynamic_atexit_destructor_for__EmitVar__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmitVar.VarData.AllocatorInstance.Data;
  if (EmitVar.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmitVar.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'MatrixString'' @ 15040ec50

void __cdecl NDIActorComponentLocal::_dynamic_atexit_destructor_for__MatrixString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MatrixString.Data.AllocatorInstance.Data;
  if (MatrixString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MatrixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ResetDataChannelLayouts'' @ 15040ec70

void __cdecl _dynamic_atexit_destructor_for__ResetDataChannelLayouts__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ResetDataChannelLayouts);
  return;
}

// `dynamic_atexit_destructor_for_'RotationString'' @ 15040ec90

void __cdecl NDIActorComponentLocal::_dynamic_atexit_destructor_for__RotationString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RotationString.Data.AllocatorInstance.Data;
  if (RotationString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RotationString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ScaleString'' @ 15040ecb0

void __cdecl NDIActorComponentLocal::_dynamic_atexit_destructor_for__ScaleString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ScaleString.Data.AllocatorInstance.Data;
  if (ScaleString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ScaleString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Sig'' @ 15040ecd0

void __cdecl
`NDIDataChannelWriteLocal::GetFunctionSig_Append'::__l2::_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040ed40

void __cdecl
`NDIDataChannelReadLocal::GetFunctionSig_Consume'::__l2::_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040edb0

void __cdecl
`NDIDataChannelReadLocal::GetFunctionSig_GetNDCSpawnData'::__l2::
_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040ee20

void __cdecl
`NDIDataChannelReadLocal::GetFunctionSig_Num'::__l2::_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040ee90

void __cdecl
`NDIDataChannelWriteLocal::GetFunctionSig_Num'::__l2::_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040ef00

void __cdecl
`NDIDataChannelReadLocal::GetFunctionSig_Read'::__l2::_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040ef70

void __cdecl
`NDIDataChannelReadLocal::GetFunctionSig_ScaleSpawnCount'::__l2::
_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040efe0

void __cdecl
`NDIDataChannelReadLocal::GetFunctionSig_SpawnConditional'::__l2::
_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040f050

void __cdecl
`NDIDataChannelReadLocal::GetFunctionSig_SpawnDirect'::__l2::_dynamic_atexit_destructor_for__Sig__
          (void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Sig'' @ 15040f0c0

void __cdecl
`NDIDataChannelWriteLocal::GetFunctionSig_Write'::__l2::_dynamic_atexit_destructor_for__Sig__(void)

{
  Sig.FunctionSpecifiers._72_4_ = 0;
  if (Sig.FunctionSpecifiers._64_8_ != 0) {
    FMemory::Free((void *)Sig.FunctionSpecifiers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Sig.FunctionSpecifiers);
  if (Sig.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)Sig.Inputs.AllocatorInstance.Data,Sig.Inputs.ArrayNum);
  if (Sig.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Sig.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15040f130

void __cdecl
`TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  TLazySingleton<FNDIDataChannelLayoutManager>::Reset
            ((TLazySingleton<FNDIDataChannelLayoutManager> *)
             &`private:_static_class_TLazySingleton<struct_FNDIDataChannelLayoutManager>&___ptr64___cdecl_TLazySingleton<FNDIDataChannelLayoutManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15040f150

void __cdecl
`NDIArrayDistributionIntPrivate::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIArrayDistributionIntPrivate::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15040f170

void __cdecl
`NDIAsyncGpuTraceLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIAsyncGpuTraceLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15040f190

void __cdecl
`NDIDataChannelReadLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIDataChannelReadLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15040f1b0

void __cdecl
`NDIDataChannelWriteLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIDataChannelWriteLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15040f1d0

void __cdecl
`UNiagaraDataInterfaceActorComponent::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceActorComponent::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15040f1f0

void __cdecl
`UNiagaraDataInterfaceConsoleVariable::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceConsoleVariable::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'ValidString'' @ 15040f210

void __cdecl NDIActorComponentLocal::_dynamic_atexit_destructor_for__ValidString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ValidString.Data.AllocatorInstance.Data;
  if (ValidString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ValidString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

