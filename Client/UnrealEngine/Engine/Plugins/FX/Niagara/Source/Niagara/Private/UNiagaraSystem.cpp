// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 71

// operator() @ 1493373c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UNiagaraSystem::ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,UNiagaraScript *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  if (param_1 != (UNiagaraScript *)0x0) {
    iVar1 = (param_1->ResolvedDataInterfaces).ArrayNum;
    pFVar8 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = pFVar8 + (longlong)iVar1 * 0x50;
    for (; pFVar8 != pFVar10; pFVar8 = pFVar8 + 0x50) {
      if (*(longlong *)(pFVar8 + 0x40) != 0) {
        pUVar5 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)(pFVar8 + 0x40),pUVar5);
        if ((bVar4) && (lVar2 = *(longlong *)(pFVar8 + 0x40), lVar2 != 0)) {
          iVar1 = *(int *)(lVar2 + 0x50);
          plVar7 = *(longlong **)(lVar2 + 0x48);
          plVar9 = plVar7 + (longlong)iVar1 * 6;
          while( true ) {
            if (*(int *)(lVar2 + 0x50) != iVar1) {
              `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (plVar7 == plVar9) break;
            if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
                FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_1493374ca:
              plVar7 = plVar7 + 6;
            }
            else {
              FVar6.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
              do {
                if (*(longlong *)FVar6.Data == *plVar7) {
                  **(undefined1 **)this = 1;
                  goto LAB_1493374ca;
                }
                FVar6.Data = FVar6.Data + 8;
              } while (FVar6.Data !=
                       FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                       (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
              plVar7 = plVar7 + 6;
            }
          }
        }
      }
    }
  }
  return;
}

// GetEmitterHandle @ 1493a5f40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraEmitterHandle * __thiscall
UNiagaraSystem::GetEmitterHandle(UNiagaraSystem *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNiagaraEmitterHandle *pFVar4;
  
  if ((this->EmitterHandles).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Idx < EmitterHandles.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSystem.h"
                       ,0x15c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNiagaraEmitterHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->EmitterHandles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNiagaraEmitterHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FNiagaraEmitterHandle *)
         ((this->EmitterHandles).AllocatorInstance.Data + (longlong)param_1 * 0x48);
}

// StaticClass @ 1493c1dc0

UClass * __cdecl UNiagaraSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSystem",
               &Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton,
               StaticRegisterNativesUNiagaraSystem,0x5f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSystem>,InternalVTableHelperCtorCaller<UNiagaraSystem>,
               local_res8,UFXSystemAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton;
}

// UNiagaraSystem @ 1493d0240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraSystem * __thiscall
UNiagaraSystem::UNiagaraSystem(UNiagaraSystem *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FNiagaraSystemScalabilitySettings *this_00;
  FNiagaraSystemScalabilitySettings *pFVar2;
  
  UFXSystemAsset::UFXSystemAsset((UFXSystemAsset *)this,param_1);
  this->bDumpDebugSystemInfo = '\0';
  this->bFullyLoaded = '\0';
  this->bDumpDebugEmitterInfo = '\0';
  this->bInitialOwnerVelocityFromActor = '\x01';
  this->bRequireCurrentFrameData = '\x01';
  pFVar2 = (FNiagaraSystemScalabilitySettings *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraSystem__6B_;
  (this->LargeWorldCoordinateTileUpdateMode).bIsSet = false;
  (this->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)0x0;
  (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SystemScalabilityOverrides).Overrides.ArrayNum = 0;
  (this->SystemScalabilityOverrides).Overrides.ArrayMax = 0;
  this->CustomDepthStencilValue = 0;
  this->TranslucencySortPriority = 0;
  this->TranslucencySortDistanceOffset = 0.0;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  (this->EmitterHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterHandles).ArrayNum = 0;
  (this->EmitterHandles).ArrayMax = 0;
  (this->ParameterCollectionOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCollectionOverrides).ArrayNum = 0;
  (this->ParameterCollectionOverrides).ArrayMax = 0;
  (this->SystemSpawnScript).field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->SystemUpdateScript).field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->EmitterCompiledData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterCompiledData).ArrayNum = 0;
  (this->EmitterCompiledData).ArrayMax = 0;
  FNiagaraSystemCompiledData::FNiagaraSystemCompiledData(&this->SystemCompiledData);
  FNiagaraUserRedirectionParameterStore::FNiagaraUserRedirectionParameterStore
            (&this->ExposedParameters);
  (this->FixedBounds).IsValid = '\0';
  this->bUseInitialStreamingBounds = false;
  (this->InitialStreamingBounds).Min.field0_0x0._s_0.X = -100.0;
  (this->InitialStreamingBounds).Min.field0_0x0._s_0.Y = -100.0;
  (this->InitialStreamingBounds).Min.field0_0x0._s_0.Z = -100.0;
  (this->InitialStreamingBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->InitialStreamingBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->InitialStreamingBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->InitialStreamingBounds).IsValid = '\x01';
  (this->StatID_GT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_GT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_InstanceCount).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_InstanceCountSolo).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->bDeterminism = false;
  this->bFixedTickDelta = false;
  this->RandomSeed = 0;
  this->WarmupTime = 0.0;
  this->WarmupTickCount = 0;
  this->WarmupTickDelta = 0.06666667;
  this->FixedTickDeltaTime = 0.01667;
  (this->EmitterExecutionOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterExecutionOrder).ArrayNum = 0;
  (this->EmitterExecutionOrder).ArrayMax = 0;
  (this->RendererPostTickOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererPostTickOrder).ArrayNum = 0;
  (this->RendererPostTickOrder).ArrayMax = 0;
  (this->RendererCompletionOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererCompletionOrder).ArrayNum = 0;
  (this->RendererCompletionOrder).ArrayMax = 0;
  (this->RendererDrawOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererDrawOrder).ArrayNum = 0;
  (this->RendererDrawOrder).ArrayMax = 0;
  (this->MaxDeltaTime).bIsSet = false;
  this->SystemExecutionStateAccessor = (FNiagaraDataSetAccessor<ENiagaraExecutionState>)0xffffffff;
  (this->EmitterExecutionStateAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterExecutionStateAccessors).ArrayNum = 0;
  (this->EmitterExecutionStateAccessors).ArrayMax = 0;
  (this->EmitterSpawnInfoAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterSpawnInfoAccessors).ArrayNum = 0;
  (this->EmitterSpawnInfoAccessors).ArrayMax = 0;
  (this->PSOPrecacheCompletionEvent).Reference = (FBaseGraphTask *)0x0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x8 = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x20 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x28 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x2c = 0x80;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x34 = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x40 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x48 = 0;
  (this->StatDatabase).CriticalSection.Object = (FWindowsRecursiveMutex *)0x0;
  (this->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_00 = ::operator_new(0x98);
  if (this_00 != (FNiagaraSystemScalabilitySettings *)0x0) {
    pFVar2 = FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings(this_00);
  }
  this->bAllowCullingForLocalPlayers = 0;
  this->bAllowSystemStateFastPath = 1;
  this->bSystemStateFastPathEnabled = 1;
  this->CurrentScalabilitySettings = pFVar2;
  (this->CrashReporterTag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrashReporterTag).Data.ArrayNum = 0;
  (this->CrashReporterTag).Data.ArrayMax = 0;
  (this->StaticBuffers).Ptr = (FNiagaraSystemStaticBuffers *)0x0;
  FInstancedStruct::FInstancedStruct(&this->SystemStateDataStruct);
  FRenderCommandFence::FRenderCommandFence(&this->WaitRenderCommandsFence);
  return this;
}

// UNiagaraSystem @ 1493d04c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraSystem * __thiscall
UNiagaraSystem::UNiagaraSystem(UNiagaraSystem *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  FNiagaraSystemScalabilitySettings *this_00;
  FNiagaraSystemScalabilitySettings *pFVar3;
  UClass *this_01;
  byte bVar4;
  
  UFXSystemAsset::UFXSystemAsset((UFXSystemAsset *)this,param_1);
  this->bSupportLargeWorldCoordinates = '\x01';
  this->bInitialOwnerVelocityFromActor = '\x01';
  this->bFixedBounds = 0;
  pFVar3 = (FNiagaraSystemScalabilitySettings *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraSystem__6B_;
  *(undefined2 *)&(this->LargeWorldCoordinateTileUpdateMode).bIsSet = 0;
  this->bDumpDebugSystemInfo = '\0';
  this->bFullyLoaded = '\0';
  this->bDumpDebugEmitterInfo = '\0';
  this->bRequireCurrentFrameData = '\x01';
  (this->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)0x0;
  (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SystemScalabilityOverrides).Overrides.ArrayNum = 0;
  (this->SystemScalabilityOverrides).Overrides.ArrayMax = 0;
  this->CustomDepthStencilValue = 0;
  this->TranslucencySortPriority = 0;
  this->TranslucencySortDistanceOffset = 0.0;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  (this->EmitterHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterHandles).ArrayNum = 0;
  (this->EmitterHandles).ArrayMax = 0;
  (this->ParameterCollectionOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCollectionOverrides).ArrayNum = 0;
  (this->ParameterCollectionOverrides).ArrayMax = 0;
  (this->SystemSpawnScript).field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->SystemUpdateScript).field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->EmitterCompiledData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterCompiledData).ArrayNum = 0;
  (this->EmitterCompiledData).ArrayMax = 0;
  FNiagaraSystemCompiledData::FNiagaraSystemCompiledData(&this->SystemCompiledData);
  FNiagaraUserRedirectionParameterStore::FNiagaraUserRedirectionParameterStore
            (&this->ExposedParameters);
  (this->FixedBounds).Min.field0_0x0._s_0.X = -100.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Y = -100.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Z = -100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->FixedBounds).IsValid = '\x01';
  this->bUseInitialStreamingBounds = false;
  (this->InitialStreamingBounds).Min.field0_0x0._s_0.X = -100.0;
  (this->InitialStreamingBounds).Min.field0_0x0._s_0.Y = -100.0;
  (this->InitialStreamingBounds).Min.field0_0x0._s_0.Z = -100.0;
  (this->InitialStreamingBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->InitialStreamingBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->InitialStreamingBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->InitialStreamingBounds).IsValid = '\x01';
  (this->EmitterExecutionOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterExecutionOrder).ArrayNum = 0;
  (this->EmitterExecutionOrder).ArrayMax = 0;
  (this->RendererPostTickOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererPostTickOrder).ArrayNum = 0;
  (this->RendererPostTickOrder).ArrayMax = 0;
  (this->RendererCompletionOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererCompletionOrder).ArrayNum = 0;
  (this->RendererCompletionOrder).ArrayMax = 0;
  (this->RendererDrawOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererDrawOrder).ArrayNum = 0;
  (this->RendererDrawOrder).ArrayMax = 0;
  this->bNeedsAsyncOptimize = 1;
  (this->MaxDeltaTime).bIsSet = false;
  this->SystemExecutionStateAccessor = (FNiagaraDataSetAccessor<ENiagaraExecutionState>)0xffffffff;
  (this->EmitterExecutionStateAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterExecutionStateAccessors).ArrayNum = 0;
  (this->EmitterExecutionStateAccessors).ArrayMax = 0;
  (this->EmitterSpawnInfoAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterSpawnInfoAccessors).ArrayNum = 0;
  (this->EmitterSpawnInfoAccessors).ArrayMax = 0;
  (this->PSOPrecacheCompletionEvent).Reference = (FBaseGraphTask *)0x0;
  (this->StatID_GT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_GT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_RT_CNC).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_InstanceCount).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatID_InstanceCountSolo).StatIdPtr = &TStatId::TStatId_NAME_None;
  *(undefined8 *)&(this->StatDatabase).StatCaptures = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x8 = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x20 = 0;
  this->bNeedsGPUContextInitForDataInterfaces = false;
  this->bDeterminism = false;
  this->bFixedTickDelta = false;
  this->RandomSeed = 0;
  this->WarmupTime = 0.0;
  this->WarmupTickCount = 0;
  this->WarmupTickDelta = 0.06666667;
  this->FixedTickDeltaTime = 0.01667;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x28 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x2c = 0x80;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x34 = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x40 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x48 = 0;
  (this->StatDatabase).CriticalSection.Object = (FWindowsRecursiveMutex *)0x0;
  (this->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_00 = ::operator_new(0x98);
  if (this_00 != (FNiagaraSystemScalabilitySettings *)0x0) {
    pFVar3 = FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings(this_00);
  }
  this->bAllowCullingForLocalPlayers = 0;
  this->bNeedsSortedSignificanceCull = 0;
  this->bHasAnyGPUEmitters = 0;
  this->bHasDIsWithPostSimulateTick = 0;
  this->bAllDIsPostSimulateCanOverlapFrames = 1;
  this->bSystemStateFastPathEnabled = 1;
  this->bAllowSystemStateFastPath = 1;
  this->bAllDIsPostStageCanOverlapTickGroups = 1;
  this->CurrentScalabilitySettings = pFVar3;
  (this->CrashReporterTag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrashReporterTag).Data.ArrayNum = 0;
  (this->CrashReporterTag).Data.ArrayMax = 0;
  this->ActiveInstances = 0;
  (this->StaticBuffers).Ptr = (FNiagaraSystemStaticBuffers *)0x0;
  FInstancedStruct::FInstancedStruct(&this->SystemStateDataStruct);
  FRenderCommandFence::FRenderCommandFence(&this->WaitRenderCommandsFence);
  FNiagaraParameterStore::SetOwner
            ((FNiagaraParameterStore *)&this->ExposedParameters,(UObject *)this);
  this->bOverrideScalabilitySettings = '\0';
  *(undefined4 *)&this->_padding_ = 0x20;
  (this->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)0x0;
  FNiagaraStatDatabase::Init(&this->StatDatabase);
  this_01 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  pUVar2 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 == (UObject *)0x0) {
    bVar4 = 1;
  }
  else {
    bVar4 = pUVar2[1].field_0x10;
  }
  *(uint *)&this->field_0x4f0 =
       ((uint)bVar4 << 3 ^ *(uint *)&this->field_0x4f0) & 8 ^ *(uint *)&this->field_0x4f0;
  return this;
}

// ~UNiagaraSystem @ 1493d1e10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::~UNiagaraSystem(UNiagaraSystem *this)

{
  undefined1 *puVar1;
  int iVar2;
  FNiagaraSystemScalabilitySettings *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  FBaseGraphTask *pFVar6;
  
  pFVar3 = this->CurrentScalabilitySettings;
  this->_padding_ = (longlong)&___7UNiagaraSystem__6B_;
  if (pFVar3 != (FNiagaraSystemScalabilitySettings *)0x0) {
    pFVar4 = (pFVar3->Platforms).CVarConditions.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->Platforms).DeviceProfileStates.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x98);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->WaitRenderCommandsFence);
  FInstancedStruct::Reset(&this->SystemStateDataStruct);
  FStaticBuffersDeletor::operator()
            ((FStaticBuffersDeletor *)&this->StaticBuffers,(this->StaticBuffers).Ptr);
  pFVar4 = (this->CrashReporterTag).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x48 = 0;
  pvVar5 = *(void **)&(this->StatDatabase).StatCaptures.field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StatDatabase);
  pFVar6 = (this->PSOPrecacheCompletionEvent).Reference;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar6->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
  }
  DestructItems<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_> *)
             (this->EmitterSpawnInfoAccessors).AllocatorInstance.Data,
             (this->EmitterSpawnInfoAccessors).ArrayNum);
  pFVar4 = (this->EmitterSpawnInfoAccessors).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->EmitterExecutionStateAccessors).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RendererDrawOrder).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RendererCompletionOrder).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RendererPostTickOrder).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->EmitterExecutionOrder).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->ExposedParameters).UserParameterRedirects.field_0x48 = 0;
  pvVar5 = *(void **)&(this->ExposedParameters).UserParameterRedirects.field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ExposedParameters).UserParameterRedirects);
  FNiagaraParameterStore::~FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->ExposedParameters);
  FNiagaraSystemCompiledData::~FNiagaraSystemCompiledData(&this->SystemCompiledData);
  DestructItems<TSharedRef<FNiagaraEmitterCompiledData_const_,1>,int>
            ((TSharedRef<FNiagaraEmitterCompiledData_const_,1> *)
             (this->EmitterCompiledData).AllocatorInstance.Data,(this->EmitterCompiledData).ArrayNum
            );
  pFVar4 = (this->EmitterCompiledData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ParameterCollectionOverrides).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->EmitterHandles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Platforms).CVarConditions.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FNiagaraSystemScalabilityOverride,int>
            ((FNiagaraSystemScalabilityOverride *)
             (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data,
             (this->SystemScalabilityOverrides).Overrides.ArrayNum);
  pFVar4 = (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  UFXSystemAsset::~UFXSystemAsset((UFXSystemAsset *)this);
  return;
}

// operator() @ 1493d3180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UNiagaraSystem::UpdateDITickFlags'::__l2::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  UNiagaraDataInterface *pUVar4;
  FNiagaraScriptDataInterfaceCompileInfo *pFVar5;
  FNiagaraScriptDataInterfaceCompileInfo *this_00;
  undefined1 local_res10 [8];
  
  if (param_1 != (UNiagaraScript *)0x0) {
    this_00 = (FNiagaraScriptDataInterfaceCompileInfo *)
              (param_1->CachedScriptVM).DataInterfaceInfo.AllocatorInstance.Data;
    iVar1 = (param_1->CachedScriptVM).DataInterfaceInfo.ArrayNum;
    pFVar5 = this_00 + iVar1;
    while( true ) {
      if ((param_1->CachedScriptVM).DataInterfaceInfo.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraScriptDataInterfaceCompileInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (this_00 == pFVar5) break;
      pUVar4 = FNiagaraScriptDataInterfaceCompileInfo::GetDefaultDataInterface(this_00);
      if (pUVar4 != (UNiagaraDataInterface *)0x0) {
        cVar2 = (**(code **)(pUVar4->_padding_ + 0x350))(pUVar4);
        if (cVar2 != '\0') {
          *(uint *)(*(longlong *)this + 0x5d0) = *(uint *)(*(longlong *)this + 0x5d0) | 2;
          bVar3 = (**(code **)(pUVar4->_padding_ + 0x378))(pUVar4);
          *(uint *)(*(longlong *)this + 0x5d0) =
               *(uint *)(*(longlong *)this + 0x5d0) & ((uint)bVar3 * 4 | 0xfffffffb);
        }
        bVar3 = (**(code **)(pUVar4->_padding_ + 0x380))(pUVar4);
        *(uint *)(*(longlong *)this + 0x5d0) =
             *(uint *)(*(longlong *)this + 0x5d0) & ((uint)bVar3 * 8 | 0xfffffff7);
      }
      this_00 = this_00 + 1;
    }
  }
  return;
}

// operator() @ 1493d3280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UNiagaraSystem::UpdatePostCompileDIInfo'::__l2::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  iVar1 = (param_1->ResolvedDataInterfaces).ArrayNum;
  pFVar5 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x50;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x50) {
    plVar2 = *(longlong **)(pFVar5 + 0x40);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)this);
    }
  }
  return;
}

// operator() @ 1493d33d0

void __thiscall
`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>::operator()
          (void *this,UNiagaraRendererProperties *param_1,int param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  ForAnyElementType *pFVar8;
  undefined4 local_18;
  int iStack_14;
  undefined4 local_10;
  
  local_18 = **(undefined4 **)this;
  local_10 = **(undefined4 **)((longlong)this + 8);
  iStack_14 = param_2;
  cVar4 = (**(code **)(param_1->_padding_ + 0x338))(param_1);
  if (cVar4 != '\0') {
    lVar1 = *(longlong *)((longlong)this + 0x10);
    pFVar8 = (ForAnyElementType *)(lVar1 + 0x4c0);
    if ((pFVar8->Data <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar8->Data + (longlong)*(int *)(lVar1 + 0x4cc) * 0xc)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(lVar1 + 0x4c8);
    if (iVar6 == *(int *)(lVar1 + 0x4cc)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar8,(int *)(lVar1 + 0x4cc));
    }
    *(int *)(lVar1 + 0x4c8) = iVar6 + 1;
    pFVar2 = pFVar8->Data;
    *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_14,local_18);
    *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_10;
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0x340))(param_1);
  if (cVar4 == '\0') {
    piVar7 = *(int **)((longlong)this + 8);
  }
  else {
    lVar1 = *(longlong *)((longlong)this + 0x10);
    pFVar8 = (ForAnyElementType *)(lVar1 + 0x4d0);
    if ((pFVar8->Data <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar8->Data + (longlong)*(int *)(lVar1 + 0x4dc) * 0xc)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(lVar1 + 0x4d8);
    if (iVar6 == *(int *)(lVar1 + 0x4dc)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar8,(int *)(lVar1 + 0x4dc));
    }
    *(int *)(lVar1 + 0x4d8) = iVar6 + 1;
    pFVar2 = pFVar8->Data;
    *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_14,local_18);
    *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_10;
    piVar7 = *(int **)((longlong)this + 8);
  }
  *piVar7 = *piVar7 + 1;
  return;
}

// operator() @ 1493d4b80

bool __thiscall
`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l56::<lambda_2>::operator()
          (void *this,FNiagaraEmitterExecutionIndex param_1,FNiagaraEmitterExecutionIndex param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar2 = *(longlong *)this;
  uVar8 = param_1.EmitterIndex;
  if (*(int *)(lVar2 + 0x88) <= (int)uVar8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0x80);
  if (*(longlong *)(lVar2 + 0x80) == 0) {
    lVar7 = lVar2;
  }
  uVar4 = param_2.EmitterIndex;
  iVar1 = *(int *)(lVar7 + (ulonglong)uVar8 * 4);
  if (*(int *)(lVar2 + 0x88) <= (int)uVar4) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0x80);
  if (*(longlong *)(lVar2 + 0x80) == 0) {
    lVar7 = lVar2;
  }
  return iVar1 < *(int *)(lVar7 + (ulonglong)uVar4 * 4);
}

// operator() @ 1493d4c60

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l2::<lambda_3>::operator()
          (void *this,FNiagaraEmitterExecutionIndex param_1)

{
  FNiagaraEmitterHandle *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FVersionedNiagaraEmitter *pFVar5;
  uint uVar6;
  FVersionedNiagaraEmitter local_28;
  
  lVar1 = *(longlong *)this;
  uVar6 = param_1.EmitterIndex;
  if (*(int *)(lVar1 + 0xd0) <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 200);
  this_00 = (FNiagaraEmitterHandle *)(lVar1 + (ulonglong)uVar6 * 0x48);
  if (*(char *)(lVar1 + 0x21 + (ulonglong)uVar6 * 0x48) == '\x01') {
    return (this_00->StatelessEmitter).field0_0x0.DebugPtr == (UNiagaraStatelessEmitter *)0x0;
  }
  pFVar5 = FNiagaraEmitterHandle::GetInstance(this_00,&local_28);
  return (pFVar5->Emitter).field0_0x0.DebugPtr == (UNiagaraEmitter *)0x0;
}

// AddToInstanceCountStat @ 1493d6b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraSystem::AddToInstanceCountStat(UNiagaraSystem *this,int param_1,bool param_2)

{
  TAtomic<FMinimalName> TVar1;
  FName FVar2;
  TStatIdData *pTVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  TVar1 = ((this->StatID_GT).StatIdPtr)->Name;
  if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
    GenerateStatID(this);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    if (param_2) {
      pTVar3 = (this->StatID_InstanceCountSolo).StatIdPtr;
    }
    else {
      pTVar3 = (this->StatID_InstanceCount).StatIdPtr;
    }
    FVar2 = *(FName *)&pTVar3->Name;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar2;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res8 = FVar2;
      local_18.StatData.Pad = (uchar  [8])(longlong)param_1;
      local_18.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,(longlong)param_1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// AllowScalabilityForLocalPlayerFX @ 1493d7450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraSystem::AllowScalabilityForLocalPlayerFX(UNiagaraSystem *this)

{
  return this->bAllowCullingForLocalPlayers;
}

// BeginDestroy @ 1493d7660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::BeginDestroy(UNiagaraSystem *this)

{
  UObject::BeginDestroy((UObject *)this);
  FNiagaraWorldManager::DestroyAllSystemSimulations(this);
  FRenderCommandFence::BeginFence(&this->WaitRenderCommandsFence,RenderThread);
  return;
}

// CacheFromCompiledData @ 1493d7fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UNiagaraSystem::CacheFromCompiledData(UNiagaraSystem *this)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  FNiagaraDataSetCompiledData *pFVar3;
  TUniquePtr<FNiagaraSystemStaticBuffers,UNiagaraSystem::FStaticBuffersDeletor> *this_00;
  TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_01;
  TOptional<float> *pTVar4;
  TRefCountPtr<FBaseGraphTask> *pTVar5;
  float fVar6;
  atomic<unsigned_int> aVar7;
  ENiagaraSimTarget EVar8;
  longlong *plVar9;
  FName FVar10;
  longlong lVar11;
  UNiagaraScript *pUVar12;
  FNiagaraSystemStaticBuffers *pFVar13;
  code *pcVar14;
  longlong lVar15;
  UNiagaraSystem *pUVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  UClass *this_02;
  FTaskBase *pFVar23;
  FVersionedNiagaraEmitter *pFVar24;
  FString *pFVar25;
  void *pvVar26;
  FName *pFVar27;
  longlong lVar28;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar29;
  FThreadSafeStaticStat<_public:_void___cdecl_UNiagaraSystem::CacheFromCompiledData(void)_::_51_::FStat_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion>
  FVar30;
  undefined8 *puVar31;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar32;
  undefined ***pppuVar33;
  ulong64 uVar34;
  ForElementType<FSetElementId> FVar35;
  TObjectPtr<UNiagaraScript>_u_0 *pTVar36;
  FScriptContainerElement *pFVar37;
  FTaskBase *pFVar38;
  FScriptContainerElement *pFVar39;
  FTaskBase *this_05;
  ulonglong uVar40;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> _Src;
  FScriptContainerElement *pFVar41;
  int *piVar42;
  FName *pFVar43;
  TArray<FNiagaraDataSetAccessor<ENiagaraExecutionState>,TSizedDefaultAllocator<32>_> *pTVar44;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar45;
  uint uVar46;
  FVersionedNiagaraEmitterData *this_06;
  float fVar47;
  undefined1 auStackY_ba8 [32];
  undefined1 local_b48;
  undefined1 local_b47;
  EExtendedTaskPriority local_b46;
  ETaskPriority local_b45;
  EExtendedTaskPriority local_b44;
  ETaskPriority local_b43 [3];
  uint local_b40;
  longlong local_b38;
  FLLMScope local_b30 [2];
  TObjectPtr<UNiagaraScript>_u_0 *local_b28;
  FVersionedNiagaraEmitterData *local_b20;
  longlong local_b18;
  TRefCountPtr<FBaseGraphTask> local_b10;
  TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_b08;
  UNiagaraSystem *local_b00;
  float local_af8;
  undefined1 local_af4 [12];
  TObjectPtr<UObject>_u_0 local_ae8;
  TUniquePtr<FNiagaraSystemStaticBuffers,UNiagaraSystem::FStaticBuffersDeletor> *local_ae0;
  TArray<FNiagaraDataSetAccessor<ENiagaraExecutionState>,TSizedDefaultAllocator<32>_> *local_ad8;
  int *local_ad0;
  UNiagaraSystem *local_ac8;
  FMemScope local_ac0;
  TObjectPtr<UNiagaraScript>_u_0 local_ab8;
  UNiagaraScript *local_ab0;
  TObjectPtr<UNiagaraScript>_u_0 local_aa8;
  undefined4 local_aa0;
  void *local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined4 local_a80;
  void *local_a78;
  undefined8 local_a70;
  TObjectPtr<UNiagaraScript>_u_0 local_a68;
  TObjectPtr<UNiagaraScript>_u_0 local_a60;
  TObjectPtr<UNiagaraScript>_u_0 local_a58;
  TObjectPtr<UNiagaraScript>_u_0 local_a50;
  FName local_a48;
  longlong local_a40;
  FName local_a38;
  FVersionedNiagaraEmitter local_a30;
  FVersionedNiagaraEmitter local_a18;
  FVersionedNiagaraEmitter local_a00;
  FVersionedNiagaraEmitter local_9e8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_9d0;
  code *local_998 [2];
  undefined **local_988;
  FNiagaraSystemStaticBuffers *pFStack_980;
  undefined8 local_978;
  undefined ***local_970;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_968;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_918;
  undefined1 local_8e8 [16];
  undefined **local_8d8;
  FNiagaraSystemStaticBuffers *pFStack_8d0;
  undefined8 local_8c8;
  undefined ***local_8c0;
  byte local_8b8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_8a8;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_ba8;
  local_b00 = this;
  FLLMScope::FLLMScope(local_b30,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_ac0,Niagara,true);
  pFVar3 = &(this->SystemCompiledData).DataSetCompiledData;
  local_af4._4_8_ = pFVar3;
  this_02 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_02);
  }
  local_ae8 = (this_02->ClassDefaultObject).field0_0x0;
  this->bNeedsAsyncOptimize = 1;
  this_00 = &this->StaticBuffers;
  local_ae0 = this_00;
  pFVar23 = ::operator_new(0x50);
  this_05 = (FTaskBase *)0x0;
  pFVar38 = this_05;
  if (pFVar23 != (FTaskBase *)0x0) {
    *(bool *)&pFVar23->_padding_ = false;
    ((TResourceArray<float,0> *)&pFVar23->_padding_)->_padding_ =
         (longlong)&___7__TResourceArray_M_0A___6B_;
    (((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar23->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pFVar23->_padding_ = 0;
    pFVar23->_padding_ = 0;
    pFVar23->_padding_ = 0;
    (pFVar23->RefCount).field_0x0 = false;
    (((FReadBuffer *)&pFVar23->Pipe)->Buffer).Reference = (FRHIBuffer *)0x0;
    ((TRefCountPtr<FRHIShaderResourceView> *)&pFVar23->StateChangeEvent)->Reference =
         (FRHIShaderResourceView *)0x0;
    *(uint *)&(pFVar23->ExecutingThreadId).field_0x0 = 0;
    pFVar38 = pFVar23;
  }
  pFVar23 = (FTaskBase *)this_00->Ptr;
  if (pFVar23 != pFVar38) {
    this_00->Ptr = (FNiagaraSystemStaticBuffers *)pFVar38;
    FStaticBuffersDeletor::operator()
              ((FStaticBuffersDeletor *)this_00,(FNiagaraSystemStaticBuffers *)pFVar23);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_System_ExecutionState,"System.ExecutionState");
    _Init_thread_footer(&::_TSS0);
  }
  FNiagaraDataSetAccessorInt32<enum_ENiagaraExecutionState>::Init
            (&this->SystemExecutionStateAccessor,pFVar3,NAME_System_ExecutionState);
  this_01 = &this->EmitterSpawnInfoAccessors;
  local_b08 = this_01;
  TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::Reset(this_01,0);
  pTVar44 = &this->EmitterExecutionStateAccessors;
  piVar42 = &(this->EmitterExecutionStateAccessors).ArrayMax;
  (this->EmitterExecutionStateAccessors).ArrayNum = 0;
  local_ad8 = pTVar44;
  local_ad0 = piVar42;
  if ((this->EmitterExecutionStateAccessors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar44->AllocatorInstance,0,piVar42);
  }
  TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(this_01,(this->EmitterHandles).ArrayNum,Default);
  if ((this->MaxDeltaTime).bIsSet != false) {
    (this->MaxDeltaTime).bIsSet = false;
  }
  local_878.Base = local_858;
  local_9d0.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  local_9d0.ArrayNum = 0;
  local_9d0.ArrayMax = 4;
  local_968.Elements._0_8_ = 0;
  local_968.Elements._8_8_ = 0;
  local_968.Elements._32_8_ = 0;
  local_968.Elements._40_4_ = 0;
  local_968.Elements._44_4_ = 0x80;
  local_968.Elements._48_4_ = 0xffffffff;
  local_968.Elements._52_4_ = 0;
  local_968.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_968.HashSize = 0;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_b40 = 0;
  if ((this->EmitterHandles).ArrayNum < 1) goto LAB_1493d8cbf;
  local_b38 = 0;
  local_b18 = 0;
  pFVar38 = this_05;
  do {
    lVar15 = local_b18;
    uVar46 = ~(uint)pFVar38 >> 0x1f;
    uVar18 = 0;
    uVar22 = uVar18;
    if ((int)(uint)pFVar38 < (this->EmitterHandles).ArrayNum) {
      uVar22 = uVar46;
    }
    if ((uVar22 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pTVar36 = (TObjectPtr<UNiagaraScript>_u_0 *)
              ((this->EmitterHandles).AllocatorInstance.Data + lVar15);
    iVar19 = pTVar44->ArrayNum;
    local_b28 = pTVar36;
    if (iVar19 == *piVar42) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar44->AllocatorInstance,piVar42);
    }
    pTVar44->ArrayNum = iVar19 + 1;
    pFVar37 = (pTVar44->AllocatorInstance).Data + (longlong)iVar19 * 4;
    DefaultConstructItems<FNiagaraDataSetAccessor<enum_ENiagaraExecutionState>,int>(pFVar37,1);
    bVar17 = FNiagaraEmitterHandle::GetIsEnabled((FNiagaraEmitterHandle *)&pTVar36->ObjectPtr);
    if (bVar17) {
      if (*(ENiagaraEmitterMode *)((longlong)pTVar36 + 0x21) == Standard) {
        local_b20 = FNiagaraEmitterHandle::GetEmitterData
                              ((FNiagaraEmitterHandle *)&pTVar36->ObjectPtr);
        if (local_b20 != (FVersionedNiagaraEmitterData *)0x0) {
          local_878.CurPos = local_878.Base;
          pFVar24 = FNiagaraEmitterHandle::GetInstance
                              ((FNiagaraEmitterHandle *)&pTVar36->ObjectPtr,&local_a30);
          pFVar25 = UNiagaraEmitterBase::GetUniqueEmitterName
                              ((UNiagaraEmitterBase *)(pFVar24->Emitter).field0_0x0.DebugPtr);
          iVar19 = (pFVar25->Data).ArrayNum;
          pFVar41 = (pFVar25->Data).AllocatorInstance.Data;
          uVar22 = iVar19 - 1;
          if (iVar19 == 0) {
            uVar22 = uVar18;
          }
          uVar34 = (ulong64)(int)uVar22;
          if (local_878.End < local_878.CurPos + uVar34) {
            TStringBuilderBase<wchar_t>::Extend(&local_878,uVar34);
          }
          if (uVar22 != 0) {
            pvVar26 = FGenericPlatformString::Memcpy(local_878.CurPos,pFVar41,uVar34 * 2);
            local_878.CurPos = (wchar_t *)(uVar34 * 2 + (longlong)pvVar26);
          }
          if (local_878.End < local_878.CurPos + 0xf) {
            TStringBuilderBase<wchar_t>::Extend(&local_878,0xf);
          }
          pvVar26 = FGenericPlatformString::Memcpy(local_878.CurPos,L".ExecutionState",0x1e);
          local_878.CurPos = (wchar_t *)((longlong)pvVar26 + 0x1e);
          pFVar27 = ::FName::FName(&local_a38,
                                   (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1)
                                   ,local_878.Base,FNAME_Add);
          FNiagaraDataSetAccessorInt32<enum_ENiagaraExecutionState>::Init
                    (pFVar37,&(this->SystemCompiledData).DataSetCompiledData,*pFVar27);
          uVar22 = local_b40;
          pFVar38 = this_05;
          if ((-1 < (int)local_b40) && ((int)local_b40 < (this->EmitterCompiledData).ArrayNum)) {
            uVar20 = uVar18;
            if ((int)local_b40 < (this->EmitterCompiledData).ArrayNum) {
              uVar20 = uVar46;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            plVar9 = *(longlong **)((this->EmitterCompiledData).AllocatorInstance.Data + local_b38);
            pFVar43 = (FName *)*plVar9;
            lVar15 = plVar9[1];
            pFVar27 = pFVar43 + (int)lVar15;
            while( true ) {
              if ((int)plVar9[1] != (int)lVar15) {
                local_b48 = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_b48);
              }
              pUVar16 = local_b00;
              if (pFVar43 == pFVar27) break;
              uVar20 = uVar18;
              if ((int)uVar22 < local_b08->ArrayNum) {
                uVar20 = uVar46;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar37 = (local_b08->AllocatorInstance).Data + local_b38;
              iVar19 = *(int *)&pFVar37[8].field_0x0;
              if (iVar19 == *(int *)(pFVar37 + 0xc)) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,(ForAnyElementType *)pFVar37,(int *)(pFVar37 + 0xc));
              }
              *(int *)&pFVar37[8].field_0x0 = iVar19 + 1;
              FVar10 = *pFVar43;
              lVar28 = (longlong)iVar19;
              lVar11 = *(longlong *)&pFVar37->field_0x0;
              *(undefined1 *)(lVar11 + lVar28 * 0xc) = 0;
              *(undefined8 *)(lVar11 + lVar28 * 0xc + 4) = 0xffffffffffffffff;
              FNiagaraDataSetAccessorStruct<FNiagaraSpawnInfo>::Init
                        ((FNiagaraDataSetAccessorStruct<FNiagaraSpawnInfo> *)(lVar11 + lVar28 * 0xc)
                         ,(FNiagaraDataSetCompiledData *)local_af4._4_8_,FVar10);
              pFVar43 = pFVar43 + 1;
              uVar22 = local_b40;
            }
            if ((int)uVar22 < (local_b00->EmitterCompiledData).ArrayNum) {
              uVar18 = uVar46;
            }
            if ((uVar18 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar38 = (FTaskBase *)
                      (*(longlong *)
                        ((pUVar16->EmitterCompiledData).AllocatorInstance.Data + local_b38) + 0xf0);
            if (local_ae8.DebugPtr[1].field_0x1b != '\0') {
              fVar6 = *(float *)&local_ae8.DebugPtr[1].field_0x1c;
              pTVar4 = &pUVar16->MaxDeltaTime;
              fVar47 = fVar6;
              if (((pUVar16->MaxDeltaTime).bIsSet != false) &&
                 (fVar47 = pTVar4->TypedValue, fVar6 <= pTVar4->TypedValue)) {
                fVar47 = fVar6;
              }
              if ((TOptional<float> *)&local_af8 != pTVar4) {
                pTVar4->TypedValue = fVar47;
                (pUVar16->MaxDeltaTime).bIsSet = true;
              }
            }
          }
          pTVar36 = local_b28;
          pFVar24 = FNiagaraEmitterHandle::GetInstance
                              ((FNiagaraEmitterHandle *)&local_b28->ObjectPtr,&local_a18);
          UObject::ConditionalPostLoad((UObject *)(pFVar24->Emitter).field0_0x0.DebugPtr);
          pFVar24 = FNiagaraEmitterHandle::GetInstance
                              ((FNiagaraEmitterHandle *)&pTVar36->ObjectPtr,&local_a00);
          this_06 = local_b20;
          FVersionedNiagaraEmitterData::CacheFromCompiledData
                    (local_b20,(FNiagaraDataSetCompiledData *)pFVar38,
                     (pFVar24->Emitter).field0_0x0.DebugPtr);
          pFVar24 = FNiagaraEmitterHandle::GetInstance
                              ((FNiagaraEmitterHandle *)&pTVar36->ObjectPtr,&local_9e8);
          FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                   FVersionedNiagaraEmitterData::PrecacheComputePSOs
                             (this_06,&local_8a8,(pFVar24->Emitter).field0_0x0.DebugPtr);
          if (((ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_9d0 == FVar29) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x986,L""), bVar17)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar19 = *(int *)((longlong)FVar29 + 0x28);
          if (iVar19 != 0) {
            iVar21 = UE::Core::Private::
                     ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (8,8,iVar19,&local_9d0.AllocatorInstance,&local_9d0.ArrayNum,
                                &local_9d0.ArrayMax);
            _Src = FVar29;
            if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar29 + 0x20) !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              _Src = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar29 + 0x20);
            }
            FVar45 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_9d0;
            if (local_9d0.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar45 = local_9d0.AllocatorInstance.SecondaryData;
            }
            memmove((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar45 + (longlong)iVar21 * 8),
                    (void *)_Src,(longlong)iVar19 << 3);
            *(int *)((longlong)FVar29 + 0x28) = 0;
          }
          FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_8a8;
          if (local_8a8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar29 = local_8a8.AllocatorInstance.SecondaryData;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar29,local_8a8.ArrayNum);
          if (local_8a8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FMemory::Free((void *)local_8a8.AllocatorInstance.SecondaryData);
          }
          pTVar36 = &local_a68;
          local_a68 = (this_06->SpawnScriptProps).Script.field0_0x0;
          local_a60 = (this_06->UpdateScriptProps).Script.field0_0x0;
          local_a58 = (this_06->GPUComputeScript).field0_0x0;
          do {
            pUVar12 = pTVar36->DebugPtr;
            if (pUVar12 != (UNiagaraScript *)0x0) {
              EVar8 = this_06->SimTarget;
              iVar19 = (pUVar12->ResolvedDataInterfaces).ArrayNum;
              pFVar37 = (pUVar12->ResolvedDataInterfaces).AllocatorInstance.Data;
              local_b47 = EVar8 == GPUComputeSim;
              local_b28 = pTVar36;
              if ((iVar19 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar17)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar41 = pFVar37 + (longlong)iVar19 * 0x50;
              this_06 = local_b20;
              if (pFVar37 != pFVar41) {
                pFVar39 = pFVar37 + 0x20;
                do {
                  plVar9 = *(longlong **)(pFVar39 + 0x20);
                  if (plVar9 != (longlong *)0x0) {
                    local_aa0 = *(undefined4 *)(pFVar39 + 8);
                    local_aa8.DebugPtr = *(UNiagaraScript **)pFVar39;
                    local_a98 = (void *)0x0;
                    local_a90 = 0;
                    (**(code **)(*plVar9 + 0x2d0))(plVar9,local_ae0->Ptr,&local_aa8,EVar8 == CPUSim)
                    ;
                    if (local_a98 != (void *)0x0) {
                      FMemory::Free(local_a98);
                    }
                    if ((EVar8 == GPUComputeSim) && (pFVar39[0x18] == (FScriptContainerElement)0x0))
                    {
                      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                      Emplace<FName_const_&>(&local_968,(FName *)local_af4,(bool *)(pFVar39 + 0xc));
                    }
                  }
                  pFVar37 = pFVar37 + 0x50;
                  pFVar39 = pFVar39 + 0x50;
                  pTVar36 = local_b28;
                  this_06 = local_b20;
                } while (pFVar37 != pFVar41);
              }
            }
            pTVar36 = pTVar36 + 1;
            piVar42 = local_ad0;
            pTVar44 = local_ad8;
            this = local_b00;
            local_b28 = pTVar36;
          } while (pTVar36 != &local_a50);
        }
      }
      else {
        if ((*(ENiagaraEmitterMode *)((longlong)pTVar36 + 0x21) != Stateless) &&
           (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1601871244897023526>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystem.cpp"
                                ,0x9da,
                                "EmitterHandle.GetEmitterMode() == ENiagaraEmitterMode::Stateless"),
           bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if ((UNiagaraStatelessEmitter *)pTVar36[8].ObjectPtr.field0_0x0.Handle !=
            (UNiagaraStatelessEmitter *)0x0) {
          UNiagaraStatelessEmitter::CacheFromCompiledData
                    ((UNiagaraStatelessEmitter *)pTVar36[8].ObjectPtr.field0_0x0.Handle);
        }
      }
    }
    local_b40 = local_b40 + 1;
    pFVar38 = (FTaskBase *)(ulonglong)local_b40;
    local_b38 = local_b38 + 0x10;
    local_b18 = local_b18 + 0x48;
  } while ((int)local_b40 < (this->EmitterHandles).ArrayNum);
  if (local_9d0.ArrayNum < 1) goto LAB_1493d8cbf;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    StatPtr_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion =
         (FThreadSafeStaticStat<_public:_void___cdecl_UNiagaraSystem::CacheFromCompiledData(void)_::_51_::FStat_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion>
          )0x0;
    pFVar27 = ::FName::FName((FName *)&local_a50.ObjectPtr,
                             "STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion,*pFVar27,
               L"FNullGraphTask.NiagaraPSOPrecacheCompletion","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS4);
  }
  FVar30 = StatPtr_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion;
  if (StatPtr_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UNiagaraSystem::CacheFromCompiledData(void)_::_51_::FStat_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion>
       )0x0) {
    pFVar27 = ::FName::FName(&local_a48,"STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion");
    FVar30 = (FThreadSafeStaticStat<_public:_void___cdecl_UNiagaraSystem::CacheFromCompiledData(void)_::_51_::FStat_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FNullGraphTask_NiagaraPSOPrecacheCompletion,*pFVar27,
                          L"FNullGraphTask.NiagaraPSOPrecacheCompletion","STATGROUP_TaskGraphTasks",
                          "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  pFVar23 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  pFVar38 = this_05;
  if (pFVar23 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar23,&local_9d0);
    pFVar23->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
    pFVar38 = pFVar23;
  }
  pFVar38[1]._padding_ = (longlong)FVar30;
  *(undefined4 *)&pFVar38[1]._padding_ = 0xff;
  UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,&local_b45,&local_b46);
  UE::Tasks::Private::FTaskBase::Init(pFVar38,L"GraphTask",local_b45,local_b46,None);
  if (pFVar38 != (FTaskBase *)0x0) {
    LOCK();
    pFVar38->RefCount = (atomic<unsigned_int>)((int)pFVar38->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar38,0xe8);
  pTVar5 = &this->PSOPrecacheCompletionEvent;
  if (pTVar5 == (TRefCountPtr<FBaseGraphTask> *)&local_a40) {
    if (pFVar38 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar38->RefCount;
      aVar7 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar7 == (atomic<unsigned_int>)0x1) {
        puVar31 = (undefined8 *)pFVar38->_padding_;
        goto LAB_1493d8af0;
      }
    }
  }
  else {
    pFVar23 = (FTaskBase *)pTVar5->Reference;
    pTVar5->Reference = (FBaseGraphTask *)pFVar38;
    if (pFVar23 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar23->RefCount;
      aVar7 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar7 == (atomic<unsigned_int>)0x1) {
        puVar31 = (undefined8 *)pFVar23->_padding_;
        pFVar38 = pFVar23;
LAB_1493d8af0:
        (*(code *)*puVar31)(pFVar38,1);
      }
    }
  }
  local_b10.Reference = pTVar5->Reference;
  if (local_b10.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&(local_b10.Reference)->field_0x30 = *(int *)&(local_b10.Reference)->field_0x30 + 1;
    UNLOCK();
  }
  local_918.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_918.ArrayNum = 1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,1,0,&local_918.AllocatorInstance,1,&local_918.ArrayMax);
  FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_918;
  if (local_918.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar29 = local_918.AllocatorInstance.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar29,&local_b10,1);
  if (local_b10.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &(local_b10.Reference)->field_0x30;
    iVar19 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar19 == 1) {
      (*(code *)**(undefined8 **)local_b10.Reference)(local_b10.Reference,1);
    }
  }
  pFVar38 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  if (pFVar38 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar38,&local_918);
    pFVar38->_padding_ = (longlong)&___7__TGraphTask_VFNiagaraSystemNullCompletionTask____6B_;
    this_05 = pFVar38;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  this_05[1]._padding_ = 0;
  local_ac8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_05 + 1),(FObjectPtr)&local_ac8);
  this_05[1]._padding_ = (longlong)&this->PSOPrecacheCompletionEvent;
  this_05[1]._padding_ = (longlong)(this->PSOPrecacheCompletionEvent).Reference;
  UE::Tasks::Private::TranslatePriority(GameThread,local_b43,&local_b44);
  UE::Tasks::Private::FTaskBase::Init(this_05,L"GraphTask",local_b43[0],local_b44,None);
  if (this_05 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xf0);
  }
  else {
    LOCK();
    this_05->RefCount = (atomic<unsigned_int>)((int)this_05->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_05,0xf0);
    LOCK();
    paVar1 = &this_05->RefCount;
    aVar7 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar7 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_05->_padding_)(this_05,1);
    }
  }
  FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_918;
  if (local_918.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar29 = local_918.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar29,local_918.ArrayNum);
  if (local_918.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_918.AllocatorInstance.SecondaryData);
  }
LAB_1493d8cbf:
  local_ab8 = (TObjectPtr<UNiagaraScript>_u_0)(this->SystemSpawnScript).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_ab8.DebugPtr != (UNiagaraScript *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_ab8.DebugPtr);
  }
  local_ab0 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_ab0 != (UNiagaraScript *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_ab0);
  }
  pTVar36 = &local_ab8;
  do {
    pUVar12 = pTVar36->DebugPtr;
    if (pUVar12 != (UNiagaraScript *)0x0) {
      iVar19 = (pUVar12->ResolvedDataInterfaces).ArrayNum;
      pFVar37 = (pUVar12->ResolvedDataInterfaces).AllocatorInstance.Data;
      if ((iVar19 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar41 = pFVar37 + (longlong)iVar19 * 0x50;
      for (; pFVar37 != pFVar41; pFVar37 = pFVar37 + 0x50) {
        plVar9 = *(longlong **)(pFVar37 + 0x40);
        if (plVar9 != (longlong *)0x0) {
          lVar15 = *(longlong *)(pFVar37 + 0x2c);
          uVar22 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
          if (local_968.Elements._8_4_ != local_968.Elements._52_4_) {
            FVar35 = (ForElementType<FSetElementId>)&local_968.Hash;
            if (local_968.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar35 = local_968.Hash.SecondaryData;
            }
            iVar19 = *(int *)((longlong)FVar35 +
                             (ulonglong)
                             (local_968.HashSize - 1U & (int)((ulonglong)lVar15 >> 0x20) + uVar22) *
                             4);
            while ((iVar19 != -1 &&
                   (*(longlong *)(local_968.Elements._0_8_ + (longlong)iVar19 * 0x10) != lVar15))) {
              iVar19 = *(int *)(local_968.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
            }
          }
          local_a80 = *(undefined4 *)(pFVar37 + 0x28);
          local_a88 = *(undefined8 *)(pFVar37 + 0x20);
          local_a78 = (void *)0x0;
          local_a70 = 0;
          (**(code **)(*plVar9 + 0x2d0))(plVar9,(this->StaticBuffers).Ptr,&local_a88,1);
          if (local_a78 != (void *)0x0) {
            FMemory::Free(local_a78);
          }
        }
      }
    }
    pTVar36 = pTVar36 + 1;
  } while (pTVar36 != &local_aa8);
  pFVar13 = (this->StaticBuffers).Ptr;
  if ((pFVar13->bFinalized != false) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("bFinalized == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                          ,0xe,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar15 = (pFVar13->GpuFloatResource)._padding_;
  pFVar13->bFinalized = true;
  if (0 < (int)lVar15) {
    local_970 = (undefined ***)0x0;
    local_988 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::`12'::<lambda_1>,1,0>
                 ::_vftable_;
    local_998[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_980 = pFVar13;
    this_03 = FRenderCommandList::GetInstanceTLS();
    if (this_03 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraSystemStaticBuffers::Finalize_::__l12::TSTR_InitBuffers19>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_998);
    }
    else {
      this_04 = FRenderCommandList::GetRenderThread(this_03);
      local_8e8._0_8_ = local_998[0];
      local_8c0 = local_970;
      local_8d8 = local_988;
      pFStack_8d0 = pFStack_980;
      local_8c8 = local_978;
      local_998[0] = (code *)0x0;
      local_8b8 = 2;
      pFVar32 = (FRenderCommandTag *)
                TRenderCommandTag<`FNiagaraSystemStaticBuffers::Finalize'::__l12::TSTR_InitBuffers19>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_8e8,pFVar32);
      uVar40 = (ulonglong)local_8b8;
      if ((2 < uVar40) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar17)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar40] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_8e8._0_8_ != (code *)0x0) {
          pppuVar33 = (undefined ***)(local_8e8 + 0x10);
          if (local_8c0 != (undefined ***)0x0) {
            pppuVar33 = local_8c0;
          }
          (*(code *)(*pppuVar33)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar40])(local_8e8);
      }
    }
    if (local_998[0] != (code *)0x0) {
      pppuVar33 = &local_988;
      if (local_970 != (undefined ***)0x0) {
        pppuVar33 = local_970;
      }
      (*(code *)(*pppuVar33)[2])();
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  local_968.HashSize = 0;
  if (local_968.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_968.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_968.Elements);
  FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_9d0;
  if (local_9d0.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar29 = local_9d0.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar29,local_9d0.ArrayNum);
  if (local_9d0.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_9d0.AllocatorInstance.SecondaryData);
  }
  FMemScope::~FMemScope(&local_ac0);
  FLLMScope::~FLLMScope(local_b30);
  return;
}

// CanBeClusterRoot @ 1493d9ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraSystem::CanBeClusterRoot(UNiagaraSystem *this)

{
  return true;
}

// CanObtainEmitterAttribute @ 1493d9ae0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraSystem::CanObtainEmitterAttribute
          (UNiagaraSystem *this,FNiagaraVariableBase *param_1,FNiagaraTypeDefinition *param_2)

{
  FName *pFVar1;
  FName FVar2;
  UNiagaraScript *pUVar3;
  uint uVar4;
  FNiagaraTypeDefinition *pFVar5;
  FName *pFVar6;
  bool bVar7;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  if ((this->SystemSpawnScript).field0_0x0.DebugPtr == (UNiagaraScript *)0x0) {
    return false;
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  FNiagaraTypeDefinition::operator=(param_2,pFVar5);
  FVar2 = param_1->Name;
  pUVar3 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,param_2);
  pFVar6 = (FName *)(pUVar3->CachedScriptVM).Attributes.AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar6 + (longlong)(pUVar3->CachedScriptVM).Attributes.ArrayNum * 0xc
                    );
  for (; pFVar6 != pFVar1; pFVar6 = (FName *)&pFVar6[1].Number) {
    if ((*pFVar6 == FVar2) && (pFVar6[1].ComparisonIndex.Value == local_10[0].RegisteredTypeIndex))
    {
      bVar7 = pFVar6 != (FName *)0x0;
      if (pFVar6 != (FName *)0x0) {
        return bVar7;
      }
      goto LAB_1493d9b7f;
    }
  }
  bVar7 = false;
LAB_1493d9b7f:
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  if ((((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
        FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
      (pFVar5->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
     (pFVar5->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
    FNiagaraTypeDefinition::operator=(param_2,&FNiagaraTypeDefinition::Vec3Def);
    FVar2 = param_1->Name;
    pUVar3 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
    uVar4 = FNiagaraTypeDefinitionHandle::Register(local_10,param_2);
    pFVar6 = (FName *)(pUVar3->CachedScriptVM).Attributes.AllocatorInstance.Data;
    pFVar1 = (FName *)((longlong)pFVar6 +
                      (longlong)(pUVar3->CachedScriptVM).Attributes.ArrayNum * 0xc);
    for (; pFVar6 != pFVar1; pFVar6 = (FName *)&pFVar6[1].Number) {
      if ((*pFVar6 == FVar2) && (pFVar6[1].ComparisonIndex.Value == uVar4)) goto LAB_1493d9c15;
    }
    pFVar6 = (FName *)0x0;
LAB_1493d9c15:
    bVar7 = pFVar6 != (FName *)0x0;
  }
  return bVar7;
}

// CanObtainSystemAttribute @ 1493d9c70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraSystem::CanObtainSystemAttribute
          (UNiagaraSystem *this,FNiagaraVariableBase *param_1,FNiagaraTypeDefinition *param_2)

{
  FName *pFVar1;
  FName FVar2;
  UNiagaraScript *pUVar3;
  uint uVar4;
  FNiagaraTypeDefinition *pFVar5;
  FName *pFVar6;
  bool bVar7;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  if ((this->SystemSpawnScript).field0_0x0.DebugPtr == (UNiagaraScript *)0x0) {
    return false;
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  FNiagaraTypeDefinition::operator=(param_2,pFVar5);
  FVar2 = param_1->Name;
  pUVar3 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,param_2);
  pFVar6 = (FName *)(pUVar3->CachedScriptVM).Attributes.AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar6 + (longlong)(pUVar3->CachedScriptVM).Attributes.ArrayNum * 0xc
                    );
  for (; pFVar6 != pFVar1; pFVar6 = (FName *)&pFVar6[1].Number) {
    if ((*pFVar6 == FVar2) && (pFVar6[1].ComparisonIndex.Value == local_10[0].RegisteredTypeIndex))
    {
      bVar7 = pFVar6 != (FName *)0x0;
      if (pFVar6 != (FName *)0x0) {
        return bVar7;
      }
      goto LAB_1493d9d0f;
    }
  }
  bVar7 = false;
LAB_1493d9d0f:
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  if ((((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
        FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
      (pFVar5->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
     (pFVar5->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
    FNiagaraTypeDefinition::operator=(param_2,&FNiagaraTypeDefinition::Vec3Def);
    FVar2 = param_1->Name;
    pUVar3 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
    uVar4 = FNiagaraTypeDefinitionHandle::Register(local_10,param_2);
    pFVar6 = (FName *)(pUVar3->CachedScriptVM).Attributes.AllocatorInstance.Data;
    pFVar1 = (FName *)((longlong)pFVar6 +
                      (longlong)(pUVar3->CachedScriptVM).Attributes.ArrayNum * 0xc);
    for (; pFVar6 != pFVar1; pFVar6 = (FName *)&pFVar6[1].Number) {
      if ((*pFVar6 == FVar2) && (pFVar6[1].ComparisonIndex.Value == uVar4)) goto LAB_1493d9da5;
    }
    pFVar6 = (FName *)0x0;
LAB_1493d9da5:
    bVar7 = pFVar6 != (FName *)0x0;
  }
  return bVar7;
}

// CanObtainUserVariable @ 1493d9e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraSystem::CanObtainUserVariable(UNiagaraSystem *this,FNiagaraVariableBase *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)((this->ExposedParameters)._padding_ + 0x58))
                            (&this->ExposedParameters,param_1,0);
  if (piVar1 != (int *)0x0) {
    return *piVar1 != -1;
  }
  return false;
}

// ComputeEmitterPriority @ 1493db5d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraSystem::ComputeEmitterPriority
          (UNiagaraSystem *this,int param_1,
          TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_2,
          TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ForElementType<int> FVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  longlong lVar11;
  ForElementType<int> FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint uVar19;
  int local_68;
  int *local_58;
  
  uVar13 = 0;
  if (param_1 < param_2->ArrayNum) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  local_68 = 0;
  FVar12 = (ForElementType<int>)param_2;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar12 = FVar3;
  }
  *(undefined4 *)((longlong)FVar12 + (longlong)param_1 * 4) = 0;
  iVar2 = (this->EmitterHandles).ArrayNum;
  uVar8 = iVar2 * param_1;
  bVar10 = (byte)uVar8 & 0x1f;
  uVar13 = 1 << bVar10;
  uVar18 = -1 << bVar10;
  uVar16 = uVar8 & 0xffffffe0;
  iVar15 = (int)uVar8 >> 5;
  if ((((int)uVar8 < 0) || (param_3->NumBits < (int)uVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = param_3->NumBits;
  uVar14 = uVar8;
  if (uVar8 != uVar9) {
    FVar4 = (param_3->AllocatorInstance).SecondaryData;
    FVar17 = (ForElementType<unsigned_int>)param_3;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar4;
    }
    uVar14 = uVar18 & *(uint *)((longlong)FVar17 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1493db787;
      uVar18 = 0xffffffff;
      uVar14 = *(uint *)((uchar *)((longlong)FVar17 + 4) + lVar11 * 4);
    }
    uVar13 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar14) {
LAB_1493db787:
      uVar14 = uVar9;
    }
  }
  local_58 = &param_3->NumBits;
joined_r0x0001493db79b:
  do {
    if ((int)(uVar8 + iVar2) <= (int)uVar14) {
      uVar13 = 0;
      if (param_1 < param_2->ArrayNum) {
        uVar13 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<int>)0x0) {
        param_2 = (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
      }
      *(int *)((longlong)param_2 + (longlong)param_1 * 4) = local_68 + 1;
      return true;
    }
    uVar14 = uVar14 - uVar8;
    uVar19 = ~uVar14 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar14 < param_2->ArrayNum) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar12 = (ForElementType<int>)param_2;
    if (FVar3 != (ForElementType<int>)0x0) {
      FVar12 = FVar3;
    }
    if (*(int *)((longlong)(int)uVar14 * 4 + (longlong)FVar12) == 0) {
      return false;
    }
    uVar9 = 0;
    if ((int)uVar14 < param_2->ArrayNum) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar12 = (ForElementType<int>)param_2;
    if (FVar3 != (ForElementType<int>)0x0) {
      FVar12 = FVar3;
    }
    if ((*(int *)((longlong)(int)uVar14 * 4 + (longlong)FVar12) < 0) &&
       (bVar6 = ComputeEmitterPriority(this,uVar14,param_2,param_3), !bVar6)) {
      return false;
    }
    uVar9 = 0;
    if ((int)uVar14 < param_2->ArrayNum) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar12 = (ForElementType<int>)param_2;
    if (FVar3 != (ForElementType<int>)0x0) {
      FVar12 = FVar3;
    }
    if (local_68 < *(int *)((longlong)FVar12 + (longlong)(int)uVar14 * 4)) {
      uVar9 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<int>)param_2;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar12 = FVar3;
      }
      local_68 = *(int *)((longlong)FVar12 + (longlong)(int)uVar14 * 4);
    }
    uVar18 = uVar18 & ~uVar13;
    FVar4 = (param_3->AllocatorInstance).SecondaryData;
    FVar17 = (ForElementType<unsigned_int>)param_3;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar4;
    }
    uVar9 = *local_58;
    uVar14 = uVar18 & *(uint *)((longlong)FVar17 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto joined_r0x0001493db79b;
      uVar18 = 0xffffffff;
      uVar14 = *(uint *)((uchar *)((longlong)FVar17 + 4) + lVar11 * 4);
    }
    uVar13 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  } while( true );
}

// ComputeEmittersExecutionOrder @ 1493dbaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraSystem::ComputeEmittersExecutionOrder(UNiagaraSystem *this)

{
  uint *puVar1;
  FNiagaraDataInterfaceEmitterBinding *pFVar2;
  UNiagaraEmitter *pUVar3;
  UNiagaraScript *pUVar4;
  FNiagaraEmitterExecutionIndex *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FVersionedNiagaraEmitterData *pFVar11;
  FNiagaraEmitterHandle *this_00;
  FVersionedNiagaraEmitter *pFVar12;
  FName FVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<int> FVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  FNiagaraEmitterExecutionIndex *pFVar21;
  int iVar22;
  FNiagaraDataInterfaceEmitterBinding *this_01;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  uint uVar25;
  FNiagaraEmitterHandle *this_02;
  FNiagaraEmitterExecutionIndex *pFVar26;
  ForElementType<int> FVar27;
  uint uVar28;
  undefined1 auStackY_2a8 [32];
  FIdentityFunctor local_257 [3];
  uint local_254;
  TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> local_250;
  int local_240;
  undefined4 local_23c;
  longlong local_238;
  longlong local_230;
  FNiagaraEmitterHandle *local_228;
  UNiagaraSystem *local_220 [3];
  FString local_208;
  FString local_1f8;
  code *local_1e8 [5];
  undefined8 *local_1c0;
  FVersionedNiagaraEmitter local_1b8;
  FVersionedNiagaraEmitter local_1a0;
  FVersionedNiagaraEmitter local_188;
  FVersionedNiagaraEmitter local_170;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_158;
  TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iVar22 = (this->EmitterHandles).ArrayNum;
  local_158.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0x20;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.MaxBits = 0x400;
  local_240 = iVar22;
  TArray<FNiagaraEmitterExecutionIndex,TSizedDefaultAllocator<32>_>::SetNum
            (&this->EmitterExecutionOrder,iVar22,Default);
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_158,iVar22,Default);
  local_c8.NumBits = iVar22 * iVar22;
  uVar16 = local_c8.NumBits + 0x1fU >> 5;
  if (local_c8.NumBits + 0x1fU >> 5 != 0) {
    if (local_c8.MaxBits + 0x1fU >> 5 < uVar16) {
      TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_c8.AllocatorInstance,0,uVar16,4);
      local_c8.MaxBits = uVar16 << 5;
    }
    FVar14 = (ForElementType<unsigned_int>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_c8.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar14,0,(ulonglong)uVar16 << 2);
    uVar16 = local_c8.NumBits & 0x8000001f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
    }
    if (uVar16 != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_c8;
      if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_c8.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar14 +
                       (longlong)((int)(local_c8.NumBits + (local_c8.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
    }
  }
  uVar16 = iVar22 * 3;
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ArrayNum = 0;
  local_250.ArrayMax = 0;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar16,&local_250.AllocatorInstance,0,&local_250.ArrayMax);
  }
  (this->RendererPostTickOrder).ArrayNum = 0;
  if ((this->RendererPostTickOrder).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->RendererPostTickOrder).AllocatorInstance,0,
               &(this->RendererPostTickOrder).ArrayMax);
  }
  (this->RendererCompletionOrder).ArrayNum = 0;
  if ((this->RendererCompletionOrder).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->RendererCompletionOrder).AllocatorInstance,0,
               &(this->RendererCompletionOrder).ArrayMax);
  }
  local_23c = 0;
  bVar9 = false;
  local_254 = 0;
  if (0 < iVar22) {
    do {
      uVar16 = local_254;
      uVar18 = 0;
      if ((int)local_254 < (this->EmitterHandles).ArrayNum) {
        uVar18 = ~local_254 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar18 = local_254;
      this_02 = (FNiagaraEmitterHandle *)
                ((this->EmitterHandles).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x48);
      uVar16 = 0;
      if ((int)local_254 < (this->EmitterExecutionOrder).ArrayNum) {
        uVar16 = ~local_254 >> 0x1f;
      }
      local_228 = this_02;
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (this->EmitterExecutionOrder).AllocatorInstance.Data + (longlong)(int)uVar18 * 4;
      *(uint *)pFVar23 = *(uint *)pFVar23 & 0xfffffffe;
      lVar20 = (longlong)(int)local_254;
      uVar18 = 0;
      uVar16 = uVar18;
      if ((int)local_254 < (this->EmitterExecutionOrder).ArrayNum) {
        uVar16 = ~local_254 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (this->EmitterExecutionOrder).AllocatorInstance.Data;
      *(uint *)(pFVar23 + lVar20 * 4) = *(uint *)(pFVar23 + lVar20 * 4) & 1 | local_254 * 2;
      lVar20 = (longlong)(int)local_254;
      uVar16 = uVar18;
      if ((int)local_254 < local_158.ArrayNum) {
        uVar16 = ~local_254 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar15 = (ForElementType<int>)&local_158;
      if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar15 = local_158.AllocatorInstance.SecondaryData;
      }
      *(undefined4 *)((longlong)FVar15 + lVar20 * 4) = 0xffffffff;
      bVar8 = FNiagaraEmitterHandle::GetIsEnabled(this_02);
      if (bVar8) {
        if (local_250.ArrayNum < 0) {
          iVar17 = -local_250.ArrayNum;
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,iVar17,&local_250.AllocatorInstance,&local_250.ArrayNum,
                              &local_250.ArrayMax);
          DefaultConstructItems<FVersionedNiagaraEmitter,int>
                    (local_250.AllocatorInstance.Data + (longlong)iVar10 * 0x18,iVar17);
        }
        else {
          uVar16 = local_250.ArrayNum;
          if (0 < local_250.ArrayNum) {
            uVar16 = uVar18;
          }
          local_250.ArrayNum = uVar16;
        }
        pFVar11 = FNiagaraEmitterHandle::GetEmitterData(this_02);
        if (pFVar11 != (FVersionedNiagaraEmitterData *)0x0) {
          iVar22 = (pFVar11->EmitterDependencies).ArrayNum;
          this_01 = (FNiagaraDataInterfaceEmitterBinding *)
                    (pFVar11->EmitterDependencies).AllocatorInstance.Data;
          pFVar2 = this_01 + iVar22;
          while( true ) {
            if ((pFVar11->EmitterDependencies).ArrayNum != iVar22) {
              local_257[0] = (FIdentityFunctor)0x0;
              `TCheckedPointerIterator<FNiagaraDataInterfaceEmitterBinding,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_257);
            }
            if (this_01 == pFVar2) break;
            this_00 = FNiagaraDataInterfaceEmitterBinding::ResolveHandle(this_01,this,this_02);
            if (this_00 != (FNiagaraEmitterHandle *)0x0) {
              pFVar12 = FNiagaraEmitterHandle::GetInstance(this_00,&local_1b8);
              if (((local_250.AllocatorInstance.Data <= pFVar12) &&
                  (pFVar12 < (FVersionedNiagaraEmitter *)
                             (local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 0x18
                             ))) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar10 = local_250.ArrayNum;
              if (local_250.ArrayNum == local_250.ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_250.AllocatorInstance,&local_250.ArrayMax);
              }
              local_250.ArrayNum = iVar10 + 1;
              pFVar23 = local_250.AllocatorInstance.Data + (longlong)iVar10 * 0x18;
              pUVar3 = (pFVar12->Emitter).field0_0x0.DebugPtr;
              *(UNiagaraEmitter **)&pFVar23->field_0x0 = pUVar3;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar3 != (UNiagaraEmitter *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar3);
              }
              uVar7 = *(undefined8 *)&(pFVar12->Version).C;
              *(undefined8 *)(pFVar23 + 8) = *(undefined8 *)&pFVar12->Version;
              *(undefined8 *)(pFVar23 + 0x10) = uVar7;
              this_02 = local_228;
            }
            this_01 = this_01 + 1;
          }
          if ((pFVar11->SimTarget == GPUComputeSim) &&
             (pUVar4 = (pFVar11->GPUComputeScript).field0_0x0.DebugPtr,
             pUVar4 != (UNiagaraScript *)0x0)) {
            FindDataInterfaceDependencies(this,pFVar11,pUVar4,&local_250);
          }
          else {
            FindDataInterfaceDependencies
                      (this,pFVar11,(pFVar11->SpawnScriptProps).Script.field0_0x0.DebugPtr,
                       &local_250);
            FindDataInterfaceDependencies
                      (this,pFVar11,(pFVar11->UpdateScriptProps).Script.field0_0x0.DebugPtr,
                       &local_250);
            FindEventDependencies(this,pFVar11,&local_250);
          }
          uVar16 = 0;
          local_238 = 0;
          iVar22 = local_240;
          if (0 < local_250.ArrayNum) {
            local_230 = 0;
            do {
              uVar18 = 0;
              iVar22 = local_250.ArrayNum;
              while( true ) {
                lVar20 = local_230;
                uVar19 = 0;
                if ((int)uVar16 < iVar22) {
                  uVar19 = ~uVar16 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar23 = local_250.AllocatorInstance.Data + lVar20;
                uVar25 = ~uVar18 >> 0x1f;
                uVar19 = 0;
                if ((int)uVar18 < (this->EmitterHandles).ArrayNum) {
                  uVar19 = uVar25;
                }
                if ((uVar19 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar20 = (longlong)(int)uVar18;
                pFVar12 = FNiagaraEmitterHandle::GetInstance
                                    ((FNiagaraEmitterHandle *)
                                     ((this->EmitterHandles).AllocatorInstance.Data + lVar20 * 0x48)
                                     ,&local_1a0);
                if ((*(UNiagaraEmitter **)pFVar23 == (pFVar12->Emitter).field0_0x0.DebugPtr) &&
                   (((*(uint *)(pFVar23 + 0x14) == (pFVar12->Version).D &&
                     *(uint *)(pFVar23 + 0x10) == (pFVar12->Version).C) &&
                    *(uint *)(pFVar23 + 0xc) == (pFVar12->Version).B) &&
                    *(uint *)(pFVar23 + 8) == (pFVar12->Version).A)) break;
                uVar18 = uVar18 + 1;
                iVar22 = local_240;
                if (local_240 <= (int)uVar18) goto LAB_1493dc3f2;
                iVar22 = local_250.ArrayNum;
              }
              lVar24 = (longlong)(int)local_254;
              uVar28 = 0;
              uVar19 = uVar28;
              if ((int)local_254 < (this->EmitterHandles).ArrayNum) {
                uVar19 = ~local_254 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar12 = FNiagaraEmitterHandle::GetInstance
                                  ((FNiagaraEmitterHandle *)
                                   ((this->EmitterHandles).AllocatorInstance.Data + lVar24 * 0x48),
                                   &local_188);
              pUVar3 = (pFVar12->Emitter).field0_0x0.DebugPtr;
              uVar19 = uVar28;
              if ((int)uVar18 < (this->EmitterHandles).ArrayNum) {
                uVar19 = uVar25;
              }
              if ((uVar19 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar12 = FNiagaraEmitterHandle::GetInstance
                                  ((FNiagaraEmitterHandle *)
                                   ((this->EmitterHandles).AllocatorInstance.Data + lVar20 * 0x48),
                                   &local_170);
              if (((pUVar3 != (UNiagaraEmitter *)0x0) &&
                  ((pFVar12->Emitter).field0_0x0.DebugPtr == (UNiagaraEmitter *)0x0)) &&
                 (1 < (byte)LogNiagara._0_1_)) {
                uVar19 = uVar28;
                if ((int)uVar18 < (this->EmitterHandles).ArrayNum) {
                  uVar19 = uVar25;
                }
                if ((uVar19 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar13 = FNiagaraEmitterHandle::GetName
                                   ((FNiagaraEmitterHandle *)
                                    ((this->EmitterHandles).AllocatorInstance.Data + lVar20 * 0x48))
                ;
                ::FName::ToString((FName *)FVar13,&local_1f8);
                lVar20 = (longlong)(int)local_254;
                if ((int)local_254 < (this->EmitterHandles).ArrayNum) {
                  uVar28 = ~local_254 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar13 = FNiagaraEmitterHandle::GetName
                                   ((FNiagaraEmitterHandle *)
                                    ((this->EmitterHandles).AllocatorInstance.Data + lVar20 * 0x48))
                ;
                ::FName::ToString((FName *)FVar13,&local_208);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_208.Data.AllocatorInstance.Data);
                }
                if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                }
              }
              iVar22 = local_240;
              if (local_254 != uVar18) {
                TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetRange
                          (&local_c8,local_254 * local_240 + uVar18,1,true);
                bVar9 = true;
              }
LAB_1493dc3f2:
              uVar16 = uVar16 + 1;
              local_238 = local_238 + 1;
              local_230 = local_230 + 0x18;
              this_02 = local_228;
            } while ((int)uVar16 < local_250.ArrayNum);
          }
        }
        local_1e8[0] = (code *)0x0;
        local_1c0 = (undefined8 *)0x0;
        local_1c0 = FMemory::Malloc(0x20,8);
        *local_1c0 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::`4'::<lambda_1>,0,1>
                      ::_vftable_;
        local_1c0[1] = &local_254;
        local_1c0[2] = &local_23c;
        local_1c0[3] = this;
        if (local_1c0 + 1 != (longlong *)0x0) {
          local_1e8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,void,UNiagaraRendererProperties_const_*,int>
                         ::Call;
        }
        FNiagaraEmitterHandle::ForEachEnabledRendererWithIndex
                  (this_02,(TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> *)
                           local_1e8);
      }
      lVar20 = 0;
      uVar16 = 1;
      local_254 = local_254 + 1;
    } while ((int)local_254 < iVar22);
    if (bVar9) {
      uVar18 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar18 < local_158.ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar15 = (ForElementType<int>)&local_158;
        if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar15 = local_158.AllocatorInstance.SecondaryData;
        }
        if ((*(int *)(lVar20 + (longlong)FVar15) < 0) &&
           (bVar9 = ComputeEmitterPriority(this,uVar18,&local_158,&local_c8), !bVar9)) break;
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + 4;
      } while ((int)uVar18 < iVar22);
      AlgoImpl::
      StableSortInternal<FNiagaraEmitterExecutionIndex,FIdentityFunctor,_UNiagaraSystem::ComputeEmittersExecutionOrder_::__l56::<lambda_2>_>
                ((FNiagaraEmitterExecutionIndex *)
                 (this->EmitterExecutionOrder).AllocatorInstance.Data,
                 (this->EmitterExecutionOrder).ArrayNum,local_257[0],&local_158);
      if (((this->EmitterExecutionOrder).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (1 < (this->EmitterExecutionOrder).ArrayNum) {
        lVar20 = 4;
        uVar18 = *(uint *)(this->EmitterExecutionOrder).AllocatorInstance.Data >> 1;
        do {
          uVar19 = 0;
          if ((int)uVar16 < (this->EmitterExecutionOrder).ArrayNum) {
            uVar19 = ~uVar16 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = *(uint *)((this->EmitterExecutionOrder).AllocatorInstance.Data + lVar20) >> 1;
          if ((local_158.ArrayNum <= (int)uVar19) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar15 = (ForElementType<int>)&local_158;
          if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar15 = local_158.AllocatorInstance.SecondaryData;
          }
          if ((local_158.ArrayNum <= (int)uVar18) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar27 = (ForElementType<int>)&local_158;
          if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar27 = local_158.AllocatorInstance.SecondaryData;
          }
          if (*(int *)((longlong)FVar27 + (ulonglong)uVar18 * 4) !=
              *(int *)((longlong)FVar15 + (ulonglong)uVar19 * 4)) {
            uVar18 = 0;
            if ((int)uVar16 < (this->EmitterExecutionOrder).ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar23 = (this->EmitterExecutionOrder).AllocatorInstance.Data + lVar20;
            *(uint *)pFVar23 = *(uint *)pFVar23 | 1;
          }
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 4;
          uVar18 = uVar19;
        } while ((int)uVar16 < (this->EmitterExecutionOrder).ArrayNum);
      }
    }
  }
  pFVar5 = (FNiagaraEmitterExecutionIndex *)(this->EmitterExecutionOrder).AllocatorInstance.Data;
  iVar22 = (this->EmitterExecutionOrder).ArrayNum;
  pFVar26 = pFVar5;
  local_220[0] = this;
  do {
    pFVar21 = pFVar26;
    if (pFVar21 == pFVar5 + iVar22) goto LAB_1493dc7a2;
    pFVar26 = pFVar21 + 1;
    bVar9 = `UNiagaraSystem::ComputeEmittersExecutionOrder'::__l2::<lambda_3>::operator()
                      (local_220,*pFVar21);
  } while (!bVar9);
  for (; pFVar26 != pFVar5 + iVar22; pFVar26 = pFVar26 + 1) {
    bVar9 = `UNiagaraSystem::ComputeEmittersExecutionOrder'::__l2::<lambda_3>::operator()
                      (local_220,*pFVar26);
    if (!bVar9) {
      *pFVar21 = *pFVar26;
      pFVar21 = pFVar21 + 1;
    }
  }
LAB_1493dc7a2:
  TArray<FNiagaraEmitterExecutionIndex,TSizedDefaultAllocator<32>_>::SetNum
            (&this->EmitterExecutionOrder,(int)((longlong)pFVar21 - (longlong)pFVar5 >> 2),Default);
  if ((FVersionedNiagaraEmitter *)local_250.AllocatorInstance.Data !=
      (FVersionedNiagaraEmitter *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
  }
  return;
}

// ComputeRenderersDrawOrder @ 1493dc830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::ComputeRenderersDrawOrder(UNiagaraSystem *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FNiagaraEmitterHandle *pFVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FSortInfo *pFVar9;
  FNiagaraEmitterHandle *this_00;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStackY_118 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  FIdentityFunctor local_c6 [14];
  code *local_b8 [2];
  undefined **local_a8;
  FSortInfo *local_a0;
  undefined8 local_90;
  FSortInfo local_88 [8];
  FSortInfo *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  iVar11 = (this->EmitterHandles).ArrayNum;
  local_3c = 8;
  local_48 = (FSortInfo *)0x0;
  local_40 = 0;
  pFVar3 = this_00 + iVar11;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != iVar11) {
      local_c8 = 0;
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c8);
    }
    if (this_00 == pFVar3) break;
    bVar7 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
    if (bVar7) {
      local_a0 = local_88;
      local_90 = 0;
      local_a8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::`6'::<lambda_1>,0,0>
                  ::_vftable_;
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,void,UNiagaraRendererProperties_const_*,int>
                    ::Call;
      FNiagaraEmitterHandle::ForEachEnabledRendererWithIndex
                (this_00,(TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> *)local_b8
                );
    }
    this_00 = this_00 + 1;
  }
  pFVar9 = local_88;
  if (local_48 != (FSortInfo *)0x0) {
    pFVar9 = local_48;
  }
  AlgoImpl::
  IntroSortInternal<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,int,FIdentityFunctor,TDereferenceWrapper<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::<lambda_2>_>_>
            (pFVar9,local_40,local_c6[0],(<lambda_2> *)local_c6);
  uVar12 = (ulonglong)local_40;
  pTVar2 = &this->RendererDrawOrder;
  if ((int)local_40 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar12);
  }
  piVar1 = &(this->RendererDrawOrder).ArrayMax;
  (this->RendererDrawOrder).ArrayNum = 0;
  if (*piVar1 < (int)local_40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_40,&pTVar2->AllocatorInstance,0,piVar1);
    uVar12 = (ulonglong)local_40;
  }
  iVar11 = (int)uVar12;
  pFVar9 = local_88;
  if (local_48 != (FSortInfo *)0x0) {
    pFVar9 = local_48;
  }
  pFVar10 = (FScriptContainerElement *)&pFVar9->RendererIdx;
  while( true ) {
    if ((int)uVar12 != iVar11) {
      local_c7 = 0;
      `TCheckedPointerIterator<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::FSortInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_c7);
    }
    if ((FSortInfo *)(pFVar10 + -4) == pFVar9 + iVar11) break;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 4)) {
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
    iVar8 = (this->RendererDrawOrder).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->RendererDrawOrder).ArrayNum = iVar8 + 1;
    uVar4 = *(undefined4 *)pFVar10;
    pFVar10 = pFVar10 + 8;
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = uVar4;
    uVar12 = (ulonglong)local_40;
  }
  if (local_48 != (FSortInfo *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// EnsureFullyLoaded @ 1493e0370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::EnsureFullyLoaded(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  UNiagaraScript *pUVar3;
  bool bVar4;
  FVersionedNiagaraEmitter *pFVar5;
  FNiagaraEmitterHandle *this_00;
  undefined1 auStackX_8 [8];
  FVersionedNiagaraEmitter FStack_28;
  
  if (this->bFullyLoaded == '\0') {
    this->field_0x6c = this->field_0x6c | 4;
    pUVar3 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
    if (pUVar3 != (UNiagaraScript *)0x0) {
      UObject::ConditionalPostLoad((UObject *)pUVar3);
    }
    pUVar3 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
    if (pUVar3 != (UNiagaraScript *)0x0) {
      UObject::ConditionalPostLoad((UObject *)pUVar3);
    }
    iVar2 = (this->EmitterHandles).ArrayNum;
    this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if ((this->EmitterHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (this_00 == pFVar1) break;
      pFVar5 = FNiagaraEmitterHandle::GetInstance(this_00,&FStack_28);
      if ((pFVar5->Emitter).field0_0x0.DebugPtr != (UNiagaraEmitter *)0x0) {
        pFVar5 = FNiagaraEmitterHandle::GetInstance(this_00,&FStack_28);
        UNiagaraEmitter::UpdateEmitterAfterLoad((pFVar5->Emitter).field0_0x0.DebugPtr);
      }
      this_00 = this_00 + 1;
    }
    bVar4 = IsValidInternal(this);
    this->bIsValidCached = 0;
    *(uint *)&this->field_0x4f0 = *(uint *)&this->field_0x4f0 | (uint)bVar4;
    bVar4 = IsReadyToRunInternal(this);
    this->bIsReadyToRunCached = 0;
    *(uint *)&this->field_0x4f0 = *(uint *)&this->field_0x4f0 | (uint)bVar4 * 2;
    ResolveScalabilitySettings(this);
    ComputeEmittersExecutionOrder(this);
    ComputeRenderersDrawOrder(this);
    CacheFromCompiledData(this);
    UpdateDITickFlags(this);
    UpdateHasGPUEmitters(this);
    if ((*(int *)((longlong)&this->_padding_ + 4) != 0) && ((int)this->_padding_ != 0)) {
      FNiagaraWorldManager::PrimePoolForAllWorlds(this);
      return;
    }
  }
  return;
}

// FindDataInterfaceDependencies @ 1493e2b30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraSystem::FindDataInterfaceDependencies
          (UNiagaraSystem *this,FVersionedNiagaraEmitterData *param_1,UNiagaraScript *param_2,
          TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> *param_3)

{
  FNiagaraTypeDefinitionHandle *pFVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  UNiagaraScript *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNiagaraScriptExecutionParameterStore *pFVar9;
  FNiagaraTypeDefinition *this_00;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FNiagaraTypeDefinitionHandle *this_01;
  undefined1 local_res10 [8];
  FNiagaraTypeDefinitionHandle *local_38;
  int local_30;
  
  pFVar9 = UNiagaraScript::GetExecutionReadyParameterStore(param_2,param_1->SimTarget);
  if (pFVar9 != (FNiagaraScriptExecutionParameterStore *)0x0) {
    if (param_1->SimTarget == CPUSim) {
      plVar12 = (longlong *)pFVar9->_padding_;
      iVar2 = (int)pFVar9->_padding_;
      plVar11 = plVar12 + iVar2;
      while( true ) {
        if ((int)pFVar9->_padding_ != iVar2) {
          `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (plVar12 == plVar11) break;
        plVar4 = (longlong *)*plVar12;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x428))(plVar4,this,param_3);
        }
        plVar12 = plVar12 + 1;
      }
    }
    else if (0 < (int)pFVar9->_padding_) {
      (**(code **)pFVar9->_padding_)(pFVar9,&local_38);
      if (local_38 != local_38 + (longlong)local_30 * 10) {
        this_01 = local_38 + 2;
        do {
          this_00 = FNiagaraTypeDefinitionHandle::Resolve(this_01);
          bVar7 = FNiagaraTypeDefinition::IsDataInterface(this_00);
          if (bVar7) {
            pUVar5 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
            if (pUVar5 != (UNiagaraScript *)0x0) {
              iVar2 = (pUVar5->ResolvedDataInterfaces).ArrayNum;
              pFVar13 = (pUVar5->ResolvedDataInterfaces).AllocatorInstance.Data;
              if ((iVar2 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar10 = pFVar13 + (longlong)iVar2 * 0x50;
              if (pFVar13 != pFVar10) {
                do {
                  if ((*(longlong *)(pFVar13 + 0x2c) == *(longlong *)(this_01 + -2)) &&
                     (*(int *)(pFVar13 + 0x34) == this_01->RegisteredTypeIndex)) {
                    plVar11 = *(longlong **)(pFVar13 + 0x40);
                    if (plVar11 != (longlong *)0x0) goto LAB_1493e2dac;
                    break;
                  }
                  pFVar13 = pFVar13 + 0x50;
                } while (pFVar13 != pFVar10);
              }
            }
            pUVar5 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
            if (pUVar5 != (UNiagaraScript *)0x0) {
              iVar2 = (pUVar5->ResolvedDataInterfaces).ArrayNum;
              pFVar13 = (pUVar5->ResolvedDataInterfaces).AllocatorInstance.Data;
              if ((iVar2 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar10 = pFVar13 + (longlong)iVar2 * 0x50;
              if (pFVar13 != pFVar10) {
                do {
                  if ((*(longlong *)(pFVar13 + 0x2c) == *(longlong *)(this_01 + -2)) &&
                     (*(int *)(pFVar13 + 0x34) == this_01->RegisteredTypeIndex)) {
                    plVar11 = *(longlong **)(pFVar13 + 0x40);
                    if (plVar11 != (longlong *)0x0) goto LAB_1493e2dac;
                    break;
                  }
                  pFVar13 = pFVar13 + 0x50;
                } while (pFVar13 != pFVar10);
              }
            }
            uVar3 = this_01[1].RegisteredTypeIndex;
            uVar8 = 0;
            if ((int)uVar3 < (int)pFVar9->_padding_) {
              uVar8 = ~uVar3 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(longlong *)(pFVar9->_padding_ + (longlong)(int)uVar3 * 8) != 0) {
              uVar3 = this_01[1].RegisteredTypeIndex;
              uVar8 = 0;
              if ((int)uVar3 < (int)pFVar9->_padding_) {
                uVar8 = ~uVar3 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar11 = *(longlong **)(pFVar9->_padding_ + (longlong)(int)uVar3 * 8);
LAB_1493e2dac:
              (**(code **)(*plVar11 + 0x428))(plVar11,this,param_3);
            }
          }
          pFVar1 = this_01 + 8;
          this_01 = this_01 + 10;
        } while (pFVar1 != local_38 + (longlong)local_30 * 10);
      }
    }
  }
  return;
}

// FindEventDependencies @ 1493e2df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraSystem::FindEventDependencies
          (UNiagaraSystem *this,FVersionedNiagaraEmitterData *param_1,
          TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FVersionedNiagaraEmitter *pFVar3;
  UNiagaraEmitter *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  FVersionedNiagaraEmitter *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res20 [8];
  FName local_78;
  FString local_70;
  FString local_60;
  FVersionedNiagaraEmitter local_50;
  
  if (param_1 != (FVersionedNiagaraEmitterData *)0x0) {
    uVar2 = (param_1->EventHandlerScriptProps).ArrayNum;
    uVar12 = (ulonglong)(int)uVar2;
    pFVar15 = (param_1->EventHandlerScriptProps).AllocatorInstance.Data;
    pFVar14 = pFVar15 + uVar12 * 0x58;
    while( true ) {
      if ((param_1->EventHandlerScriptProps).ArrayNum != (int)uVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar15 == pFVar14) break;
      if (((*(int *)(pFVar15 + 0x40) != 0 || *(int *)(pFVar15 + 0x3c) != 0) ||
          *(int *)(pFVar15 + 0x38) != 0) || ((FGuid *)(pFVar15 + 0x34))->A != 0) {
        local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.Data.ArrayNum = 0;
        local_70.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(pFVar15 + 0x34),&local_70,Digits);
        uVar13 = 0;
        if (0 < (this->EmitterHandles).ArrayNum) {
          do {
            uVar8 = 0;
            if ((int)uVar13 < (this->EmitterHandles).ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FNiagaraEmitterHandle::GetIdName
                      ((FNiagaraEmitterHandle *)
                       ((this->EmitterHandles).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x48
                       ));
            pFVar10 = ::FName::ToString(&local_78,&local_60);
            iVar9 = (pFVar10->Data).ArrayNum;
            if (iVar9 == local_70.Data.ArrayNum) {
              if (iVar9 < 2) {
                bVar7 = true;
              }
              else {
                iVar9 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                                   (wchar_t *)local_70.Data.AllocatorInstance.Data);
                bVar7 = iVar9 == 0;
              }
            }
            else {
              bVar7 = local_70.Data.ArrayNum + iVar9 == 1;
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              uVar8 = 0;
              if ((int)uVar13 < (this->EmitterHandles).ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar11 = FNiagaraEmitterHandle::GetInstance
                                  ((FNiagaraEmitterHandle *)
                                   ((this->EmitterHandles).AllocatorInstance.Data +
                                   (longlong)(int)uVar13 * 0x48),&local_50);
              pFVar3 = (FVersionedNiagaraEmitter *)(param_2->AllocatorInstance).Data;
              if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + param_2->ArrayMax)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = param_2->ArrayNum;
              if (iVar9 == param_2->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar9 + 1;
              pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x18;
              pUVar4 = (pFVar11->Emitter).field0_0x0.DebugPtr;
              *(UNiagaraEmitter **)pFVar1 = pUVar4;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar4 != (UNiagaraEmitter *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar4);
              }
              uVar6 = *(undefined8 *)&(pFVar11->Version).C;
              *(undefined8 *)(pFVar1 + 8) = *(undefined8 *)&pFVar11->Version;
              *(undefined8 *)(pFVar1 + 0x10) = uVar6;
              break;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (this->EmitterHandles).ArrayNum);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      pFVar15 = pFVar15 + 0x58;
      uVar12 = (ulonglong)uVar2;
    }
  }
  return;
}

// GenerateStatID @ 1493e4de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::GenerateStatID(UNiagaraSystem *this)

{
  FString *pFVar1;
  FName *pFVar2;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  FName local_res20;
  TStatIdData *local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  FName *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
  ::FString::ConcatFC(&local_58,pFVar1,L" [GT]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_res8[0] = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName(&local_60,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_38 = &local_res20;
  local_30 = local_res18;
  local_28 = local_res8;
  local_20 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystems>'::__l2::<lambda_1>::
  operator()(&local_38);
  (this->StatID_GT).StatIdPtr = local_68;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
  ::FString::ConcatFC(&local_58,pFVar1,L" [GT_CNC]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_res8[0] = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName(&local_60,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_38 = &local_res20;
  local_30 = local_res18;
  local_28 = local_res8;
  local_20 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystems>'::__l2::<lambda_1>::
  operator()(&local_38);
  (this->StatID_GT_CNC).StatIdPtr = local_68;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
  ::FString::ConcatFC(&local_58,pFVar1,L" [RT]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_res8[0] = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName(&local_60,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_38 = &local_res20;
  local_30 = local_res18;
  local_28 = local_res8;
  local_20 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystems>'::__l2::<lambda_1>::
  operator()(&local_38);
  (this->StatID_RT).StatIdPtr = local_68;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
  ::FString::ConcatFC(&local_58,pFVar1,L" [RT_CNC]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_res8[0] = 1;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName(&local_60,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_38 = &local_res20;
  local_30 = local_res18;
  local_28 = local_res8;
  local_20 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystems>'::__l2::<lambda_1>::
  operator()(&local_38);
  (this->StatID_RT_CNC).StatIdPtr = local_68;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  local_res10[0] = 1;
  local_res8[0] = 0;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName(&local_60,pwVar4);
  local_res20 = *pFVar2;
  local_38 = &local_res20;
  local_30 = local_res18;
  local_28 = local_res8;
  local_20 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystemCounts>'::__l2::<lambda_1>
  ::operator()(&local_38);
  (this->StatID_InstanceCount).StatIdPtr = local_68;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
  ::FString::ConcatFC(&local_58,pFVar1,L" [SOLO]");
  local_res10[0] = 1;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_res8[0] = 0;
  local_res18[0] = 2;
  pFVar2 = ::FName::FName(&local_60,(wchar_t *)FVar3.Data);
  local_res20 = *pFVar2;
  local_38 = &local_res20;
  local_30 = local_res18;
  local_28 = local_res8;
  local_20 = local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystemCounts>'::__l2::<lambda_1>
  ::operator()(&local_38);
  (this->StatID_InstanceCountSolo).StatIdPtr = local_68;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAssetRegistryTags @ 1493e68b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraSystem::GetAssetRegistryTags
          (UNiagaraSystem *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UNiagaraSystem *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UNiagaraSystem **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UNiagaraSystem **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UNiagaraSystem **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1493e68c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraSystem::GetAssetRegistryTags(UNiagaraSystem *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res8 [4];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetCrashReporterTag @ 1493e6cd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall UNiagaraSystem::GetCrashReporterTag(UNiagaraSystem *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_28;
  FString local_18;
  
  pFVar1 = &this->CrashReporterTag;
  if ((this->CrashReporterTag).Data.ArrayNum < 2) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    ::FString::PrintfImpl(&local_28,L"| System: %s |");
    if (pFVar1 != &local_28) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->CrashReporterTag).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->CrashReporterTag).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// GetCullProxyMode @ 1493e6d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ENiagaraCullProxyMode __thiscall UNiagaraSystem::GetCullProxyMode(UNiagaraSystem *this)

{
  return this->CurrentScalabilitySettings->CullProxyMode;
}

// GetCurrentOverrideSettings @ 1493e6db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraSystemScalabilityOverride * __thiscall
UNiagaraSystem::GetCurrentOverrideSettings(UNiagaraSystem *this)

{
  int iVar1;
  bool bVar2;
  FNiagaraSystemScalabilityOverride *this_00;
  FNiagaraSystemScalabilityOverride *pFVar3;
  undefined1 local_res8 [8];
  
  if (this->bOverrideScalabilitySettings == '\0') {
LAB_1493e6e21:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      FNiagaraSystemScalabilityOverride::FNiagaraSystemScalabilityOverride(&::Dummy);
      atexit(`UNiagaraSystem::GetCurrentOverrideSettings'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS1);
    }
    this_00 = &::Dummy;
  }
  else {
    iVar1 = (this->SystemScalabilityOverrides).Overrides.ArrayNum;
    this_00 = (FNiagaraSystemScalabilityOverride *)
              (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data;
    pFVar3 = this_00 + iVar1;
    while( true ) {
      if ((this->SystemScalabilityOverrides).Overrides.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraSystemScalabilityOverride_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar3) goto LAB_1493e6e21;
      bVar2 = FNiagaraPlatformSet::IsActive((FNiagaraPlatformSet *)this_00);
      if (bVar2) break;
      this_00 = this_00 + 1;
    }
  }
  return this_00;
}

// GetEffectType @ 1493e74d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraEffectType * __thiscall UNiagaraSystem::GetEffectType(UNiagaraSystem *this)

{
  return (this->EffectType).field0_0x0.DebugPtr;
}

// GetEmitterHandles @ 1493e7810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraSystem::GetEmitterHandles(UNiagaraSystem *this)

{
  return &this->EmitterHandles;
}

// GetEmitterHandles @ 1493e7820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraSystem::GetEmitterHandles(UNiagaraSystem *this)

{
  return &this->EmitterHandles;
}

// GetFixedBounds @ 1493e7870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBox<double> * __thiscall
UNiagaraSystem::GetFixedBounds(UNiagaraSystem *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->FixedBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->FixedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->FixedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->FixedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->FixedBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->FixedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->FixedBounds).IsValid;
  uVar6 = (this->FixedBounds).Pad[0];
  uVar7 = (this->FixedBounds).Pad[1];
  uVar8 = (this->FixedBounds).Pad[2];
  uVar9 = (this->FixedBounds).Pad[3];
  uVar10 = (this->FixedBounds).Pad[4];
  uVar11 = (this->FixedBounds).Pad[5];
  uVar12 = (this->FixedBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetLargeWorldCoordinateTileUpdateMode @ 1493e7db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ENiagaraLwcTileUpdateMode __thiscall
UNiagaraSystem::GetLargeWorldCoordinateTileUpdateMode(UNiagaraSystem *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if ((this->LargeWorldCoordinateTileUpdateMode).bIsSet != false) {
    return (this->LargeWorldCoordinateTileUpdateMode).TypedValue;
  }
  return (this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x11;
}

// GetPrivateStaticClass @ 1493e88e0

UClass * __cdecl UNiagaraSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSystem",
               &Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton,
               StaticRegisterNativesUNiagaraSystem,0x5f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSystem>,InternalVTableHelperCtorCaller<UNiagaraSystem>,
               local_res8,UFXSystemAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton;
}

// GetResourceSizeEx @ 1493e9390

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::GetResourceSizeEx(UNiagaraSystem *this,FResourceSizeEx *param_1)

{
  FNiagaraSystemStaticBuffers *pFVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  UPackage *pUVar5;
  int iVar6;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->SystemScalabilityOverrides).Overrides.ArrayMax * 0xa0);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->EmitterHandles).ArrayMax * 0x48);
  pUVar4 = FVersionedNiagaraEmitterData::StaticStruct();
  if (pUVar4 != (UScriptStruct *)0x0) {
    iVar6 = (int)*(short *)((longlong)&pUVar4->_padding_ + 4);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)
                       (((int)pUVar4->_padding_ + -1 + iVar6 & -iVar6) *
                       (this->EmitterHandles).ArrayNum));
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->EmitterCompiledData).ArrayMax << 4);
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData,(UObject *)pUVar5,
                         L"NiagaraEmitterCompiledData");
    if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1493e9444;
  }
  else {
LAB_1493e9444:
    iVar6 = (int)*(short *)((longlong)
                            &(Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.
                             OuterSingleton)->_padding_ + 4);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)
                       (((int)(Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.
                              OuterSingleton)->_padding_ + -1 + iVar6 & -iVar6) *
                       (this->EmitterCompiledData).ArrayNum));
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData,(UObject *)pUVar5,
                         L"NiagaraSystemCompiledData");
    if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1493e94b9;
  }
  iVar6 = (int)*(short *)((longlong)
                          &(Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.
                           OuterSingleton)->_padding_ + 4);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)
                     ((int)(Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.
                           OuterSingleton)->_padding_ + -1 + iVar6 & -iVar6));
LAB_1493e94b9:
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->EmitterExecutionOrder).ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->RendererPostTickOrder).ArrayMax * 0xc);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->RendererCompletionOrder).ArrayMax * 0xc);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->RendererDrawOrder).ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->EmitterExecutionStateAccessors).ArrayMax << 2);
  pFVar1 = (this->StaticBuffers).Ptr;
  if (pFVar1 != (FNiagaraSystemStaticBuffers *)0x0) {
    iVar6 = (pFVar1->CpuFloatBuffer).ArrayNum;
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)iVar6 << 2);
  }
  return;
}

// GetStatID @ 1493e96f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TStatId __thiscall UNiagaraSystem::GetStatID(UNiagaraSystem *this,bool param_1,bool param_2)

{
  TAtomic<FMinimalName> TVar1;
  undefined7 in_register_00000011;
  char in_R9B;
  
  TVar1 = ((this->StatID_GT).StatIdPtr)->Name;
  if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
    GenerateStatID(this);
  }
  if (param_2) {
    if (in_R9B == '\0') {
      TVar1 = (TAtomic<FMinimalName>)(this->StatID_GT).StatIdPtr;
    }
    else {
      TVar1 = (TAtomic<FMinimalName>)(this->StatID_GT_CNC).StatIdPtr;
    }
  }
  else if (in_R9B == '\0') {
    TVar1 = (TAtomic<FMinimalName>)(this->StatID_RT).StatIdPtr;
  }
  else {
    TVar1 = (TAtomic<FMinimalName>)(this->StatID_RT_CNC).StatIdPtr;
  }
  ((TStatIdData *)CONCAT71(in_register_00000011,param_1))->Name = TVar1;
  return (TStatId)(TStatIdData *)CONCAT71(in_register_00000011,param_1);
}

// GetSystemSpawnScript @ 1493e9b60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall UNiagaraSystem::GetSystemSpawnScript(UNiagaraSystem *this)

{
  return (this->SystemSpawnScript).field0_0x0.DebugPtr;
}

// GetSystemSpawnScript @ 1493e9b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall UNiagaraSystem::GetSystemSpawnScript(UNiagaraSystem *this)

{
  return (this->SystemSpawnScript).field0_0x0.DebugPtr;
}

// GetSystemStateData @ 1493e9b80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraSystemStateData * __thiscall UNiagaraSystem::GetSystemStateData(UNiagaraSystem *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNiagaraSystemStateData *pFVar5;
  FNiagaraSystemStateData *pFVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultSystemStateData.bRecalculateDelayEachLoop = 0;
      DefaultSystemStateData.bDelayFirstLoopOnly = 0;
      DefaultSystemStateData.bLoopDelayEnabled = 0;
      DefaultSystemStateData.bRecalculateDurationEachLoop = 0;
      DefaultSystemStateData.bIgnoreSystemState = 1;
      DefaultSystemStateData.bRunUpdateScript = 1;
      DefaultSystemStateData.bRunSpawnScript = 1;
      FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
                (&DefaultSystemStateData.LoopDuration,0.0);
      DefaultSystemStateData.LoopCount = 1;
      FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
                (&DefaultSystemStateData.LoopDelay,0.0);
      atexit(`UNiagaraSystem::GetSystemStateData'::__l2::
             _dynamic_atexit_destructor_for__DefaultSystemStateData__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar6 = (FNiagaraSystemStateData *)(this->SystemStateDataStruct).StructMemory;
  if ((pFVar6 != (FNiagaraSystemStateData *)0x0) &&
     (pUVar2 = (this->SystemStateDataStruct).ScriptStruct.field0_0x0.DebugPtr,
     pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemStateData,(UObject *)pUVar4,
                           L"NiagaraSystemStateData");
    }
    if (pUVar2 == Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton)
    goto LAB_1493e9c59;
    if (Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemStateData,(UObject *)pUVar4,
                           L"NiagaraSystemStateData");
      if (Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1493e9c57;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1493e9c59;
  }
LAB_1493e9c57:
  pFVar6 = (FNiagaraSystemStateData *)0x0;
LAB_1493e9c59:
  pFVar5 = &DefaultSystemStateData;
  if (pFVar6 != (FNiagaraSystemStateData *)0x0) {
    pFVar5 = pFVar6;
  }
  return pFVar5;
}

// GetSystemStateModeString @ 1493e9cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

wchar_t * __thiscall UNiagaraSystem::GetSystemStateModeString(UNiagaraSystem *this)

{
  FNiagaraSystemStateData *pFVar1;
  wchar_t *pwVar2;
  
  pFVar1 = GetSystemStateData(this);
  if (pFVar1->bRunUpdateScript == 0) {
    pwVar2 = L"[Fast-SU]";
    if (pFVar1->bRunSpawnScript != 0) {
      pwVar2 = L"[Fast-U]";
    }
    return pwVar2;
  }
  return (wchar_t *)0x0;
}

// GetSystemUpdateScript @ 1493e9d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall UNiagaraSystem::GetSystemUpdateScript(UNiagaraSystem *this)

{
  return (this->SystemUpdateScript).field0_0x0.DebugPtr;
}

// GetSystemUpdateScript @ 1493e9d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall UNiagaraSystem::GetSystemUpdateScript(UNiagaraSystem *this)

{
  return (this->SystemUpdateScript).field0_0x0.DebugPtr;
}

// IsAllowedByScalability @ 1493ef200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraSystem::IsAllowedByScalability(UNiagaraSystem *this)

{
  bool bVar1;
  
  bVar1 = FNiagaraPlatformSet::IsActive(&this->Platforms);
  return bVar1;
}

// IsLooping @ 1493ef220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraSystem::IsLooping(UNiagaraSystem *this)

{
  return false;
}

// IsReadyForFinishDestroy @ 1493ef230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraSystem::IsReadyForFinishDestroy(UNiagaraSystem *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->WaitRenderCommandsFence);
  return bVar1;
}

// IsReadyToRun @ 1493ef340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraSystem::IsReadyToRun(UNiagaraSystem *this)

{
  FBaseGraphTask *pFVar1;
  
  pFVar1 = (this->PSOPrecacheCompletionEvent).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) && (pFVar1->field_0xd0 == '\0')) {
    return false;
  }
  return this->bIsReadyToRunCached;
}

// IsReadyToRunInternal @ 1493ef370

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UNiagaraSystem::IsReadyToRunInternal(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *this_00;
  int iVar1;
  UNiagaraScript *pUVar2;
  UNiagaraScript *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FVersionedNiagaraEmitterData *this_01;
  FVersionedNiagaraEmitter *pFVar8;
  wchar_t *pwVar9;
  uint uVar10;
  byte bVar11;
  FName local_res10;
  FName local_res18;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FVersionedNiagaraEmitter local_48;
  FVersionedNiagaraEmitter local_30;
  
  uVar10 = 0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar9 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar9,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return false;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return false;
  }
  UpdateSystemAfterLoad(this);
  pUVar2 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
  if ((pUVar2 == (UNiagaraScript *)0x0) ||
     ((this->SystemUpdateScript).field0_0x0.DebugPtr == (UNiagaraScript *)0x0)) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return false;
    }
    pUVar2 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
    bVar5 = pUVar2 != (UNiagaraScript *)0x0;
    if (bVar5) {
      local_res10 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res10,&local_88);
    }
    pUVar2 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
    bVar11 = bVar5;
    if (pUVar2 != (UNiagaraScript *)0x0) {
      local_res18 = (FName)pUVar2->_padding_;
      bVar11 = 2;
      ::FName::ToString(&local_res18,&local_98);
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (((bVar11 & 2) != 0) &&
       (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (!bVar5) {
      return false;
    }
  }
  else {
    bVar5 = UNiagaraScript::IsScriptCompilationPending(pUVar2,false);
    if (bVar5) {
      return false;
    }
    bVar5 = UNiagaraScript::IsScriptCompilationPending
                      ((this->SystemUpdateScript).field0_0x0.DebugPtr,false);
    if (bVar5) {
      return false;
    }
    iVar1 = (this->EmitterHandles).ArrayNum;
    if (0 < iVar1) {
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->EmitterHandles).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_00 = (FNiagaraEmitterHandle *)
                  ((this->EmitterHandles).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x48);
        this_01 = FNiagaraEmitterHandle::GetEmitterData(this_00);
        if ((this_01 != (FVersionedNiagaraEmitterData *)0x0) &&
           (bVar5 = FVersionedNiagaraEmitterData::IsReadyToRun(this_01), !bVar5)) {
          if ((byte)LogNiagara._0_1_ < 3) {
            return false;
          }
          pFVar8 = FNiagaraEmitterHandle::GetInstance(this_00,&local_48);
          if ((pFVar8->Emitter).field0_0x0.DebugPtr != (UNiagaraEmitter *)0x0) {
            pFVar8 = FNiagaraEmitterHandle::GetInstance(this_00,&local_30);
            UNiagaraEmitterBase::GetUniqueEmitterName
                      ((UNiagaraEmitterBase *)(pFVar8->Emitter).field0_0x0.DebugPtr);
          }
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
          goto LAB_1493ef706;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar1);
    }
    pUVar2 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
    pUVar3 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
    iVar1 = (pUVar2->CachedScriptVM).Attributes.ArrayNum;
    if ((iVar1 == (pUVar3->CachedScriptVM).Attributes.ArrayNum) &&
       (bVar5 = CompareItems<FNiagaraVariableBase,int>
                          ((FNiagaraVariableBase *)
                           (pUVar2->CachedScriptVM).Attributes.AllocatorInstance.Data,
                           (FNiagaraVariableBase *)
                           (pUVar3->CachedScriptVM).Attributes.AllocatorInstance.Data,iVar1), bVar5)
       ) {
      return true;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return false;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
LAB_1493ef706:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsValidInternal @ 1493ef8c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall UNiagaraSystem::IsValidInternal(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  UNiagaraScript *this_00;
  bool bVar3;
  FVersionedNiagaraEmitterData *this_01;
  FNiagaraEmitterHandle *this_02;
  undefined1 local_res8 [8];
  
  this_00 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
  if ((((this_00 != (UNiagaraScript *)0x0) &&
       ((this->SystemUpdateScript).field0_0x0.DebugPtr != (UNiagaraScript *)0x0)) &&
      ((bVar3 = UNiagaraScript::IsScriptCompilationPending(this_00,false), bVar3 ||
       (bVar3 = UNiagaraScript::DidScriptCompilationSucceed
                          ((this->SystemSpawnScript).field0_0x0.DebugPtr,false), bVar3)))) &&
     ((bVar3 = UNiagaraScript::IsScriptCompilationPending
                         ((this->SystemUpdateScript).field0_0x0.DebugPtr,false), bVar3 ||
      (bVar3 = UNiagaraScript::DidScriptCompilationSucceed
                         ((this->SystemUpdateScript).field0_0x0.DebugPtr,false), bVar3)))) {
    iVar2 = (this->EmitterHandles).ArrayNum;
    if (iVar2 != 0) {
      this_02 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
      pFVar1 = this_02 + iVar2;
      while( true ) {
        if ((this->EmitterHandles).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (this_02 == pFVar1) {
          return true;
        }
        bVar3 = FNiagaraEmitterHandle::GetIsEnabled(this_02);
        if ((((bVar3) &&
             (this_01 = FNiagaraEmitterHandle::GetEmitterData(this_02),
             this_01 != (FVersionedNiagaraEmitterData *)0x0)) &&
            (bVar3 = FVersionedNiagaraEmitterData::IsValid(this_01), !bVar3)) &&
           (bVar3 = FVersionedNiagaraEmitterData::IsAllowedByScalability(this_01), bVar3)) break;
        this_02 = this_02 + 1;
      }
    }
  }
  return false;
}

// PostDuplicate @ 1493f14b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::PostDuplicate(UNiagaraSystem *this,bool param_1)

{
  return;
}

// PostInitProperties @ 1493f1760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::PostInitProperties(UNiagaraSystem *this)

{
  FName *pFVar1;
  UNiagaraScript *pUVar2;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar1 = ::FName::FName(&local_res8,"SystemSpawnScript");
    pUVar2 = NewObject<UNiagaraScript>
                       ((UObject *)this,*pFVar1,RF_Transactional,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraScript *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->SystemSpawnScript).field0_0x0.DebugPtr = pUVar2;
    pUVar2->Usage = SystemSpawnScript;
    pFVar1 = ::FName::FName(&local_res8,"SystemUpdateScript");
    pUVar2 = NewObject<UNiagaraScript>
                       ((UObject *)this,*pFVar1,RF_Transactional,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraScript *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->SystemUpdateScript).field0_0x0.DebugPtr = pUVar2;
    pUVar2->Usage = SystemUpdateScript;
  }
  ResolveScalabilitySettings(this);
  UpdateDITickFlags(this);
  UpdateHasGPUEmitters(this);
  return;
}

// PostLoad @ 1493f18c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::PostLoad(UNiagaraSystem *this)

{
  FScriptContainerElement *pFVar1;
  FNiagaraEmitterHandle *pFVar2;
  int iVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObjectBase *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FModuleManager *this_01;
  UClass *pUVar10;
  UClass *pUVar11;
  UNiagaraEmitterBase *this_02;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar12;
  ForAnyElementType FVar13;
  FNiagaraSystemScalabilitySettings *this_03;
  FNiagaraEmitterHandle *pFVar14;
  FNiagaraSystemScalabilitySettings *pFVar15;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5 [5];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1d0;
  undefined8 local_1c0;
  FName local_1b8 [2];
  FGuid local_1a8;
  code *local_198 [2];
  undefined **local_188;
  undefined8 *local_180;
  TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_178;
  undefined8 local_170;
  TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  UObject::PostLoad((UObject *)this);
  if (bLoadChecked == false) {
    bVar7 = IsInGameThread();
    if (bVar7) {
      bLoadChecked = true;
      pFVar9 = ::FName::FName(local_1b8,"Niagara");
      FVar4 = *pFVar9;
      this_01 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_01,FVar4);
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1601871244897024750>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystem.cpp"
                         ,0x512,"IsInGameThread()");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  FNiagaraParameterStore::PostLoad
            ((FNiagaraParameterStore *)&this->ExposedParameters,(UObject *)this);
  (**(code **)((this->ExposedParameters)._padding_ + 0x40))(&this->ExposedParameters,1);
  FNiagaraParameterStore::PostLoad(&(this->SystemCompiledData).InstanceParamStore,(UObject *)this);
  pUVar5 = (UPackage *)this->_padding_;
  if (pUVar5 != (UPackage *)0x0) {
    pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if (((iVar8 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar8 * 8)
         == &pUVar10->_padding_)) && ((this->_padding_ & 3) != 0)) {
      local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.ArrayNum = 0;
      local_1d0.ArrayMax = 0;
      GetObjectsWithPackage(pUVar5,&local_1d0,true,RF_NoFlags,Borrowed);
      iVar8 = local_1d0.ArrayNum;
      pFVar1 = local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayNum * 8;
      FVar13.Data = local_1d0.AllocatorInstance.Data;
      while( true ) {
        if (local_1d0.ArrayNum != iVar8) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1d7);
        }
        if (FVar13.Data == pFVar1) break;
        this_00 = *(UObjectBase **)FVar13.Data;
        if (this_00 != (UObjectBase *)0x0) {
          pUVar11 = Z_Construct_UClass_UNiagaraEmitterBase_NoRegister();
          pUVar10 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar3 = (int)pUVar11->_padding_;
          if ((iVar3 <= (int)pUVar10->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) ==
              &pUVar11->_padding_)) {
            UObject::ConditionalPostLoad((UObject *)this_00);
            UObjectBase::AtomicallyClearFlags(this_00,RF_Standalone|RF_Public);
          }
        }
        FVar13.Data = FVar13.Data + 8;
      }
      if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
    }
  }
  local_1a8 = FNiagaraCustomVersion::GUID;
  iVar8 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_1a8);
  if (iVar8 < 0x52) {
    this->bInitialOwnerVelocityFromActor = '\0';
  }
  iVar3 = (this->SystemScalabilityOverrides).Overrides.ArrayNum;
  this_03 = (FNiagaraSystemScalabilitySettings *)
            (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data;
  pFVar15 = (FNiagaraSystemScalabilitySettings *)((longlong)this_03 + (longlong)iVar3 * 0xa0);
  while( true ) {
    if ((this->SystemScalabilityOverrides).Overrides.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraSystemScalabilityOverride,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1d6);
    }
    if (this_03 == pFVar15) break;
    FNiagaraSystemScalabilitySettings::PostLoad(this_03,iVar8);
    this_03 = (FNiagaraSystemScalabilitySettings *)
              &this_03[1].Platforms.DeviceProfileStates.ArrayNum;
  }
  iVar8 = (this->EmitterHandles).ArrayNum;
  pFVar14 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar2 = pFVar14 + iVar8;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1d8);
    }
    if (pFVar14 == pFVar2) break;
    this_02 = FNiagaraEmitterHandle::GetEmitterBase(pFVar14);
    if (this_02 != (UNiagaraEmitterBase *)0x0) {
      UObject::ConditionalPostLoad((UObject *)this_02);
    }
    pFVar14 = pFVar14 + 1;
  }
  ForEachPlatformSet<_UNiagaraSystem::PostLoad_::__l2::<lambda_1>_>(this,local_1d8);
  UpdateSystemAfterLoad(this);
  if ((GNiagaraPrecachePSOAtAssetLoadingTime != 0) && ((char)this->_padding_ == '\0')) {
    bVar7 = IsComponentPSOPrecachingEnabled();
    if ((!bVar7) && (bVar7 = IsResourcePSOPrecachingEnabled(), !bVar7)) {
      return;
    }
    iVar8 = (this->EmitterHandles).ArrayNum;
    pFVar14 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
    local_1c0 = 0;
    local_168.AllocatorInstance.SecondaryData =
         (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0;
    pFVar2 = pFVar14 + iVar8;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 4;
    while( true ) {
      if ((this->EmitterHandles).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1d5);
      }
      if (pFVar14 == pFVar2) break;
      bVar7 = FNiagaraEmitterHandle::GetIsEnabled(pFVar14);
      if (bVar7) {
        local_180 = &local_1c0;
        local_170 = 0;
        local_178 = &local_168;
        local_188 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::`9'::<lambda_1>,0,0>::
                     _vftable_;
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,void,UNiagaraRendererProperties_const_*,int>
                       ::Call;
        FNiagaraEmitterHandle::ForEachEnabledRendererWithIndex
                  (pFVar14,(TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> *)
                           local_198);
      }
      pFVar14 = pFVar14 + 1;
    }
    UFXSystemAsset::LaunchPSOPrecaching((UFXSystemAsset *)this,&local_168);
    FVar12 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData !=
        (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      FVar12 = local_168.AllocatorInstance.SecondaryData;
    }
    DestructItems<FMaterialInterfacePSOPrecacheParams,int>
              ((FMaterialInterfacePSOPrecacheParams *)FVar12,local_168.ArrayNum);
    if (local_168.AllocatorInstance.SecondaryData !=
        (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// PreSave @ 1493f2210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::PreSave(UNiagaraSystem *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res8 [4];
  
  local_res8[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8[0] + 0x9c) = *(int *)(local_res8[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res8);
  UpdateSystemAfterLoad(this);
  return;
}

// PrecachePSOs @ 1493f2250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::PrecachePSOs(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  bool bVar3;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar4;
  FNiagaraEmitterHandle *this_00;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  code *local_198 [2];
  undefined **local_188;
  undefined8 *local_180;
  TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_178;
  undefined8 local_170;
  TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((char)this->_padding_ == '\0') {
    bVar3 = IsComponentPSOPrecachingEnabled();
    if ((!bVar3) && (bVar3 = IsResourcePSOPrecachingEnabled(), !bVar3)) {
      return;
    }
    this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
    iVar2 = (this->EmitterHandles).ArrayNum;
    local_1a0 = 0;
    pFVar1 = this_00 + iVar2;
    local_168.AllocatorInstance.SecondaryData =
         (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 4;
    while( true ) {
      if ((this->EmitterHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a8);
      }
      if (this_00 == pFVar1) break;
      bVar3 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
      if (bVar3) {
        local_180 = &local_1a0;
        local_170 = 0;
        local_178 = &local_168;
        local_188 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::`9'::<lambda_1>,0,0>::
                     _vftable_;
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,void,UNiagaraRendererProperties_const_*,int>
                       ::Call;
        FNiagaraEmitterHandle::ForEachEnabledRendererWithIndex
                  (this_00,(TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> *)
                           local_198);
      }
      this_00 = this_00 + 1;
    }
    UFXSystemAsset::LaunchPSOPrecaching((UFXSystemAsset *)this,&local_168);
    FVar4 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData !=
        (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      FVar4 = local_168.AllocatorInstance.SecondaryData;
    }
    DestructItems<FMaterialInterfacePSOPrecacheParams,int>
              ((FMaterialInterfacePSOPrecacheParams *)FVar4,local_168.ArrayNum);
    if (local_168.AllocatorInstance.SecondaryData !=
        (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ResolveRequiresScripts @ 1493f7d20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::ResolveRequiresScripts(UNiagaraSystem *this)

{
  return;
}

// ResolveScalabilitySettings @ 1493f7d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::ResolveScalabilitySettings(UNiagaraSystem *this)

{
  undefined1 *puVar1;
  FNiagaraSystemVisibilityCullingSettings *pFVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  UNiagaraEffectType *this_00;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FNiagaraSystemScalabilitySettings *pFVar10;
  FNiagaraPlatformSet *this_01;
  FNiagaraPlatformSet *pFVar11;
  float fVar12;
  undefined1 local_res8 [8];
  
  FNiagaraSystemScalabilitySettings::Clear(this->CurrentScalabilitySettings);
  this_00 = (this->EffectType).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraEffectType *)0x0) {
    pFVar10 = UNiagaraEffectType::GetActiveSystemScalabilitySettings(this_00);
    FNiagaraSystemScalabilitySettings::operator=(this->CurrentScalabilitySettings,pFVar10);
    *(uint *)&this->field_0x5d0 =
         ((uint)this_00->bAllowCullingForLocalPlayers ^ ZPULL(*(undefined4 *)&this->field_0x5d0,0,1)
         ) & 1 ^ *(undefined4 *)&this->field_0x5d0;
  }
  if (this->bOverrideScalabilitySettings != '\0') {
    this_01 = (FNiagaraPlatformSet *)
              (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data;
    iVar5 = (this->SystemScalabilityOverrides).Overrides.ArrayNum;
    pFVar11 = (FNiagaraPlatformSet *)((longlong)this_01 + (longlong)iVar5 * 0xa0);
    while( true ) {
      if ((this->SystemScalabilityOverrides).Overrides.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FNiagaraSystemScalabilityOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_01 == pFVar11) goto LAB_1493f7f17;
      bVar9 = FNiagaraPlatformSet::IsActive(this_01);
      if (bVar9) break;
      this_01 = (FNiagaraPlatformSet *)&this_01[3].CVarConditions;
    }
    if ((this_01[3].DeviceProfileStates.ArrayNum & 1) != 0) {
      puVar1 = &this->CurrentScalabilitySettings->field_0x30;
      *(uint *)puVar1 =
           *(uint *)puVar1 ^
           (this->CurrentScalabilitySettings->bCullByDistance ^
           *(uint *)&this_01[1].DeviceProfileStates.AllocatorInstance.Data) & 1;
      this->CurrentScalabilitySettings->MaxDistance =
           *(float *)((longlong)&this_01[1].DeviceProfileStates.AllocatorInstance.Data + 4);
    }
    if ((this_01[3].DeviceProfileStates.ArrayNum & 2) != 0) {
      puVar1 = &this->CurrentScalabilitySettings->field_0x30;
      *(uint *)puVar1 =
           *(uint *)puVar1 ^
           (*(uint *)&this->CurrentScalabilitySettings->field_0x30 ^
           *(uint *)&this_01[1].DeviceProfileStates.AllocatorInstance.Data) & 2;
      this->CurrentScalabilitySettings->MaxInstances = this_01[1].DeviceProfileStates.ArrayMax;
    }
    if ((this_01[3].DeviceProfileStates.ArrayNum & 4) != 0) {
      puVar1 = &this->CurrentScalabilitySettings->field_0x30;
      *(uint *)puVar1 =
           *(uint *)puVar1 ^
           (*(uint *)&this->CurrentScalabilitySettings->field_0x30 ^
           *(uint *)&this_01[1].DeviceProfileStates.AllocatorInstance.Data) & 4;
      this->CurrentScalabilitySettings->MaxSystemInstances =
           *(int *)&this_01[1].CVarConditions.AllocatorInstance.Data;
    }
    if ((this_01[3].DeviceProfileStates.ArrayNum & 8) != 0) {
      pFVar2 = &this->CurrentScalabilitySettings->VisibilityCulling;
      *(uint *)pFVar2 =
           *(uint *)pFVar2 ^
           ((this->CurrentScalabilitySettings->VisibilityCulling).bCullWhenNotRendered ^
           this_01[1].QualityLevelMask) & 1;
      pFVar2 = &this->CurrentScalabilitySettings->VisibilityCulling;
      *(uint *)pFVar2 =
           *(uint *)pFVar2 ^
           (*(uint *)&this->CurrentScalabilitySettings->VisibilityCulling ^
           this_01[1].QualityLevelMask) & 2;
      pFVar2 = &this->CurrentScalabilitySettings->VisibilityCulling;
      *(uint *)pFVar2 =
           *(uint *)pFVar2 ^
           (*(uint *)&this->CurrentScalabilitySettings->VisibilityCulling ^
           this_01[1].QualityLevelMask) & 4;
      (this->CurrentScalabilitySettings->VisibilityCulling).MaxTimeWithoutRender =
           (float)this_01[1].LastBuiltFrame;
      (this->CurrentScalabilitySettings->VisibilityCulling).MaxTimeOutsideViewFrustum =
           *(float *)&this_01[1].field_0x24;
    }
    if ((this_01[3].DeviceProfileStates.ArrayNum & 0x10) != 0) {
      uVar4 = *(undefined8 *)((longlong)&this_01[2].DeviceProfileStates.AllocatorInstance.Data + 4);
      pFVar10 = this->CurrentScalabilitySettings;
      *(undefined8 *)&pFVar10->BudgetScaling = *(undefined8 *)&this_01[1].field_0x2c;
      (pFVar10->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartX = (float)(int)uVar4;
      (pFVar10->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.StartY =
           (float)(int)((ulonglong)uVar4 >> 0x20);
      uVar4 = *(undefined8 *)&this_01[2].DeviceProfileStates.ArrayMax;
      uVar7 = *(undefined8 *)((longlong)&this_01[2].CVarConditions.AllocatorInstance.Data + 4);
      (pFVar10->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndX = (float)(int)uVar4;
      (pFVar10->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse.EndY =
           (float)(int)((ulonglong)uVar4 >> 0x20);
      (pFVar10->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartX = (float)(int)uVar7;
      (pFVar10->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.StartY =
           (float)(int)((ulonglong)uVar7 >> 0x20);
      uVar4 = *(undefined8 *)&this_01[2].CVarConditions.ArrayMax;
      uVar8 = *(undefined4 *)&this_01[2].field_0x24;
      uVar6 = this_01[2].LastBuiltFrame;
      (pFVar10->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndX = (float)(int)uVar4;
      (pFVar10->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse.EndY =
           (float)(int)((ulonglong)uVar4 >> 0x20);
      (pFVar10->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartX = (float)uVar8;
      (pFVar10->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.StartY = (float)uVar6;
      uVar4 = *(undefined8 *)&this_01[2].field_0x2c;
      (pFVar10->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndX = (float)(int)uVar4
      ;
      (pFVar10->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse.EndY =
           (float)(int)((ulonglong)uVar4 >> 0x20);
    }
    if ((this_01[3].DeviceProfileStates.ArrayNum & 0x20) != 0) {
      this->CurrentScalabilitySettings->CullProxyMode = this_01[1].CVarConditions.ArrayNum;
      this->CurrentScalabilitySettings->MaxSystemProxies = this_01[1].CVarConditions.ArrayMax;
    }
LAB_1493f7f17:
    if (this->bOverrideAllowCullingForLocalPlayers != 0) {
      *(uint *)&this->field_0x5d0 =
           (this->bAllowCullingForLocalPlayersOverride ^
           ZPULL(*(undefined4 *)&this->field_0x5d0,0,1)) & 1 ^ *(undefined4 *)&this->field_0x5d0;
    }
  }
  fVar3 = this->CurrentScalabilitySettings->MaxDistance;
  fVar12 = GNiagaraScalabiltiyMinumumMaxDistance;
  if (GNiagaraScalabiltiyMinumumMaxDistance <= fVar3) {
    fVar12 = fVar3;
  }
  this->CurrentScalabilitySettings->MaxDistance = fVar12;
  uVar6 = *(uint *)&this->field_0x5d0;
  this->bNeedsSortedSignificanceCull = 0;
  if ((this->CurrentScalabilitySettings->bCullMaxInstanceCount == 0 &&
       this->CurrentScalabilitySettings->bCullPerSystemMaxInstanceCount == 0) &&
     (this->CurrentScalabilitySettings->CullProxyMode == None)) {
    ForEachScript<_UNiagaraSystem::ResolveScalabilitySettings_::__l41::<lambda_1>_>
              (this,(<lambda_1>)this);
    FNiagaraWorldManager::RequestInvalidateCachedSystemScalabilityDataForAllWorlds();
    return;
  }
  *(uint *)&this->field_0x5d0 = uVar6 & 0xffffffdf | 0x20;
  FNiagaraWorldManager::RequestInvalidateCachedSystemScalabilityDataForAllWorlds();
  return;
}

// ResolveWarmupTickCount @ 1493f84c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::ResolveWarmupTickCount(UNiagaraSystem *this)

{
  float fVar1;
  int iVar2;
  
  fVar1 = this->WarmupTickDelta;
  if ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    this->WarmupTickCount = 0;
    this->WarmupTickDelta = 0.0;
    return;
  }
  iVar2 = (int)ROUND((this->WarmupTime + this->WarmupTime) / fVar1 - __real_3f000000) >> 1;
  this->WarmupTime = (float)iVar2 * fVar1;
  this->WarmupTickCount = iVar2;
  return;
}

// Serialize @ 1493f87b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::Serialize(UNiagaraSystem *this,FArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  UNiagaraEmitter *pUVar3;
  FFastPathLoadBuffer *pFVar4;
  TSharedRef<FNiagaraEmitterCompiledData_const_,1> *pTVar5;
  undefined8 uVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  ForAnyElementType FVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FVersionedNiagaraEmitter *pFVar16;
  UPackage *pUVar17;
  TReferenceControllerBase<1> *pTVar18;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  TArray<TSharedRef<FNiagaraEmitterCompiledData_const_,1>,TSizedDefaultAllocator<32>_> *pTVar24;
  TReferenceControllerBase<1> *pTVar25;
  ulonglong uVar26;
  FNiagaraEmitterHandle *this_01;
  undefined1 auStackY_2a8 [32];
  uint local_258 [2];
  ForAnyElementType local_250;
  undefined8 local_248;
  longlong local_240;
  TReferenceControllerBase<1> *local_238;
  TReferenceControllerBase<1> *pTStack_230;
  FArchiveState *local_228;
  TObjectPtr<UNiagaraEmitter>_u_0 local_220;
  undefined8 local_218;
  undefined8 local_210;
  FVersionedNiagaraEmitter local_200;
  FStructuredArchiveFromArchive local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_228 = (FArchiveState *)param_1;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (iVar14 < 0x45) {
    this->bDeterminism = true;
  }
  uVar23 = 0;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  if ((((NiagaraSystemPrivate::GCleanStatelessEmitterHandles != false) &&
       ((param_1->field_0x28 & 4) != 0)) && (lVar2 = *(longlong *)&param_1->field_0x68, lVar2 != 0))
     && (((*(longlong *)(lVar2 + 0x10) != 0 && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) &&
         (cVar12 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x80))(lVar2 + 8), cVar12 == '\0')))) {
    iVar14 = (this->EmitterHandles).ArrayNum;
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,iVar14,&local_250,(int *)&local_248,(int *)((longlong)&local_248 + 4)
                       );
    DefaultConstructItems<FVersionedNiagaraEmitter,int>
              (local_250.Data + (longlong)iVar15 * 0x18,iVar14);
    if (0 < (this->EmitterHandles).ArrayNum) {
      local_240 = 0;
      uVar26 = uVar23;
      do {
        lVar2 = local_240;
        uVar21 = (uint)uVar23;
        uVar22 = 0;
        if ((int)uVar21 < (this->EmitterHandles).ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_01 = (FNiagaraEmitterHandle *)((this->EmitterHandles).AllocatorInstance.Data + lVar2);
        pFVar16 = FNiagaraEmitterHandle::GetInstance(this_01,&local_200);
        uVar22 = 0;
        if ((int)uVar21 < (int)local_248) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar11.Data = local_250.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 = (pFVar16->Emitter).field0_0x0.DebugPtr, pUVar3 != (UNiagaraEmitter *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        *(TObjectPtr<UNiagaraEmitter>_u_0 *)(FVar11.Data + uVar26) = (pFVar16->Emitter).field0_0x0;
        uVar6 = *(undefined8 *)&(pFVar16->Version).C;
        pFVar20 = FVar11.Data + uVar26 + 8;
        *(undefined8 *)pFVar20 = *(undefined8 *)&pFVar16->Version;
        *(undefined8 *)(pFVar20 + 8) = uVar6;
        if (this_01->EmitterMode == Stateless) {
          local_220.DebugPtr = (UNiagaraEmitter *)0x0;
          local_218 = 0;
          local_210 = 0;
          FNiagaraEmitterHandle::SetInstance
                    (this_01,(FVersionedNiagaraEmitter *)&local_220.ObjectPtr);
        }
        uVar23 = (ulonglong)(uVar21 + 1);
        local_240 = local_240 + 0x48;
        uVar26 = uVar26 + 0x18;
        param_1 = (FArchive *)local_228;
      } while ((int)(uVar21 + 1) < (this->EmitterHandles).ArrayNum);
    }
  }
  uVar22 = 0;
  UObject::Serialize((UObject *)this,param_1);
  if (0 < (int)local_248) {
    if (0 < (this->EmitterHandles).ArrayNum) {
      do {
        uVar21 = 0;
        if ((int)uVar22 < (this->EmitterHandles).ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar20 = (this->EmitterHandles).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar22 < (int)local_248) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FNiagaraEmitterHandle::SetInstance
                  ((FNiagaraEmitterHandle *)(pFVar20 + (longlong)(int)uVar22 * 0x48),
                   (FVersionedNiagaraEmitter *)(local_250.Data + (longlong)(int)uVar22 * 0x18));
        uVar22 = uVar22 + 1;
        param_1 = (FArchive *)local_228;
      } while ((int)uVar22 < (this->EmitterHandles).ArrayNum);
    }
    bVar13 = local_248._4_4_ != 0;
    local_248 = (ulonglong)local_248._4_4_ << 0x20;
    if (bVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_250,0,(int *)((longlong)&local_248 + 4));
    }
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (0x32 < iVar14) {
    if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar17 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData,(UObject *)pUVar17,
                           L"NiagaraEmitterCompiledData");
    }
    pUVar10 = Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.OuterSingleton;
    local_258[0] = 0;
    if (param_1->ArIsSaving != '\0') {
      local_258[0] = (this->EmitterCompiledData).ArrayNum;
    }
    pFVar4 = ((FArchiveState *)param_1)->ActiveFPLB;
    if (pFVar4->EndFastPathLoadBuffer < (uint *)((longlong)pFVar4->StartFastPathLoadBuffer + 4)) {
      if (param_1->ArForceByteSwapping == 0) {
        (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_258);
      }
    }
    else {
      local_258[0] = *(uint *)pFVar4->StartFastPathLoadBuffer;
      pFVar4->StartFastPathLoadBuffer = pFVar4->StartFastPathLoadBuffer + 4;
    }
    if (param_1->ArIsLoading != 0) {
      piVar1 = &(this->EmitterCompiledData).ArrayMax;
      pTVar5 = (TSharedRef<FNiagaraEmitterCompiledData_const_,1> *)
               (this->EmitterCompiledData).AllocatorInstance.Data;
      iVar14 = (this->EmitterCompiledData).ArrayNum;
      if ((this->EmitterCompiledData).ArrayMax < 0) {
        DestructItems<TSharedRef<FNiagaraEmitterCompiledData_const_,1>,int>(pTVar5,iVar14);
        (this->EmitterCompiledData).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->EmitterCompiledData).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TSharedRef<FNiagaraEmitterCompiledData_const_,1>,int>(pTVar5,iVar14);
        (this->EmitterCompiledData).ArrayNum = 0;
      }
    }
    pTVar9 = _UNK_150651568;
    pTVar8 = ___xmm_00000000000000000000000000000010;
    uVar22 = 0;
    if (0 < (int)local_258[0]) {
      local_240 = 0;
      pTVar24 = &this->EmitterCompiledData;
      do {
        pTVar25 = (TReferenceControllerBase<1> *)0x0;
        if (param_1->ArIsLoading != 0) {
          pTVar18 = ::operator_new(400);
          if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
            local_238 = pTVar8;
            pTStack_230 = pTVar9;
          }
          else {
            pTVar18->SharedReferenceCount = (atomic<int>)0x1;
            pTVar18->WeakReferenceCount = (atomic<int>)0x1;
            pTVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFNiagaraEmitterCompiledData___00_SharedPointerInternals__6B_
            ;
            FNiagaraEmitterCompiledData::FNiagaraEmitterCompiledData
                      ((FNiagaraEmitterCompiledData *)(pTVar18 + 1));
            if ((pTVar18 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            LOCK();
            pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
            UNLOCK();
            pTVar25 = pTVar18;
            local_238 = pTVar18 + 1;
            pTStack_230 = pTVar18;
          }
          pFVar20 = (pTVar24->AllocatorInstance).Data;
          if (((pFVar20 <= (FScriptContainerElement *)&local_238) &&
              ((FScriptContainerElement *)&local_238 <
               pFVar20 + (longlong)(this->EmitterCompiledData).ArrayMax * 0x10)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar14 = (this->EmitterCompiledData).ArrayNum;
          piVar1 = &(this->EmitterCompiledData).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar24->AllocatorInstance,piVar1);
          }
          (this->EmitterCompiledData).ArrayNum = iVar14 + 1;
          pFVar20 = (pTVar24->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar20 = local_238;
          *(TReferenceControllerBase<1> **)(pFVar20 + 8) = pTStack_230;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_230);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
        }
        lVar2 = local_240;
        uVar21 = 0;
        if ((int)uVar22 < (this->EmitterCompiledData).ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar20 = (pTVar24->AllocatorInstance).Data;
        pTVar25 = *(TReferenceControllerBase<1> **)(pFVar20 + lVar2 + 8);
        uVar6 = *(undefined8 *)(pFVar20 + lVar2);
        if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
        }
        pcVar7 = *(code **)(pUVar10->_padding_ + 0x2e0);
        this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1e8,param_1);
        FVar19 = FStructuredArchiveFromArchive::GetSlot(this_00);
        (*pcVar7)(pUVar10,*(undefined8 *)FVar19,uVar6,pUVar10);
        FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        local_240 = local_240 + 0x10;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)local_258[0]);
    }
  }
  if (local_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data);
  }
  return;
}

// Serialize @ 1493f8f20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::Serialize(UNiagaraSystem *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetWarmupTickDelta @ 1493fb850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::SetWarmupTickDelta(UNiagaraSystem *this,float param_1)

{
  int iVar1;
  
  this->WarmupTickDelta = param_1;
  if ((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    this->WarmupTickCount = 0;
    this->WarmupTickDelta = 0.0;
    return;
  }
  iVar1 = (int)ROUND((__real_40000000 / param_1) * this->WarmupTime - __real_3f000000) >> 1;
  this->WarmupTime = (float)iVar1 * param_1;
  this->WarmupTickCount = iVar1;
  return;
}

// SetWarmupTime @ 1493fb8c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::SetWarmupTime(UNiagaraSystem *this,float param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = this->WarmupTickDelta;
  this->WarmupTime = param_1;
  if ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    this->WarmupTickCount = 0;
    this->WarmupTickDelta = 0.0;
    return;
  }
  iVar2 = (int)ROUND((param_1 + param_1) / fVar1 - __real_3f000000) >> 1;
  this->WarmupTime = (float)iVar2 * fVar1;
  this->WarmupTickCount = iVar2;
  return;
}

// StaticRegisterNativesUNiagaraSystem @ 1493fe920

void __cdecl UNiagaraSystem::StaticRegisterNativesUNiagaraSystem(void)

{
  return;
}

// UpdateDITickFlags @ 149405e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::UpdateDITickFlags(UNiagaraSystem *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UNiagaraScript *pUVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  FVersionedNiagaraEmitterData *this_00;
  UNiagaraDataInterface *pUVar11;
  ulonglong uVar12;
  FNiagaraEmitterHandle *this_01;
  FNiagaraScriptDataInterfaceCompileInfo *this_02;
  FNiagaraEmitterHandle *pFVar13;
  ForAnyElementType FVar14;
  FNiagaraScriptDataInterfaceCompileInfo *pFVar15;
  UNiagaraSystem *local_res8;
  uint local_res10;
  FNiagaraEmitterHandle *local_res18;
  FNiagaraEmitterHandle *local_res20;
  TArray<UNiagaraScript_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  pUVar5 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
  puVar2 = &this->field_0x5d0;
  this->bHasDIsWithPostSimulateTick = 0;
  this->bAllDIsPostStageCanOverlapTickGroups = 1;
  this->bAllDIsPostSimulateCanOverlapFrames = 1;
  local_res8 = this;
  `UNiagaraSystem::UpdateDITickFlags'::__l2::<lambda_1>::operator()(&local_res8,pUVar5);
  `UNiagaraSystem::UpdateDITickFlags'::__l2::<lambda_1>::operator()
            (&local_res8,(this->SystemUpdateScript).field0_0x0.DebugPtr);
  local_res10 = (this->EmitterHandles).ArrayNum;
  uVar12 = (ulonglong)(int)local_res10;
  this_01 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar13 = this_01 + uVar12;
  local_res20 = pFVar13;
  while( true ) {
    local_res18 = this_01;
    if ((this->EmitterHandles).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_01 == pFVar13) break;
    bVar8 = FNiagaraEmitterHandle::GetIsEnabled(this_01);
    if ((bVar8) &&
       (this_00 = FNiagaraEmitterHandle::GetEmitterData(this_01),
       this_00 != (FVersionedNiagaraEmitterData *)0x0)) {
      local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60[0].ArrayNum = 0;
      local_60[0].ArrayMax = 0;
      FVersionedNiagaraEmitterData::GetScripts(this_00,local_60,true,false);
      iVar7 = local_60[0].ArrayNum;
      pFVar3 = local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 8;
      FVar14.Data = local_60[0].AllocatorInstance.Data;
      while( true ) {
        if (local_60[0].ArrayNum != iVar7) {
          `TCheckedPointerIterator<UNiagaraScript_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (FVar14.Data == pFVar3) break;
        lVar6 = *(longlong *)FVar14.Data;
        if (lVar6 != 0) {
          iVar4 = *(int *)(lVar6 + 0x228);
          this_02 = *(FNiagaraScriptDataInterfaceCompileInfo **)(lVar6 + 0x220);
          pFVar15 = this_02 + iVar4;
          while( true ) {
            if (*(int *)(lVar6 + 0x228) != iVar4) {
              `TCheckedPointerIterator<FNiagaraScriptDataInterfaceCompileInfo,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_res8);
            }
            if (this_02 == pFVar15) break;
            pUVar11 = FNiagaraScriptDataInterfaceCompileInfo::GetDefaultDataInterface(this_02);
            if (pUVar11 != (UNiagaraDataInterface *)0x0) {
              cVar9 = (**(code **)(pUVar11->_padding_ + 0x350))(pUVar11);
              if (cVar9 != '\0') {
                this->bHasDIsWithPostSimulateTick = 1;
                bVar10 = (**(code **)(pUVar11->_padding_ + 0x378))(pUVar11);
                *(uint *)&this->field_0x5d0 =
                     *(uint *)&this->field_0x5d0 & ((uint)bVar10 << 2 | 0xfffffffb);
              }
              bVar10 = (**(code **)(pUVar11->_padding_ + 0x380))(pUVar11);
              *(uint *)&this->field_0x5d0 =
                   *(uint *)&this->field_0x5d0 & ((uint)bVar10 << 3 | 0xfffffff7);
            }
            this_02 = this_02 + 1;
          }
        }
        FVar14.Data = FVar14.Data + 8;
      }
      this_01 = local_res18;
      pFVar13 = local_res20;
      if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].AllocatorInstance.Data);
        this_01 = local_res18;
        pFVar13 = local_res20;
      }
    }
    uVar12 = (ulonglong)local_res10;
    this_01 = this_01 + 1;
  }
  return;
}

// UpdateHasGPUEmitters @ 1494063b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::UpdateHasGPUEmitters(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  bool bVar3;
  FVersionedNiagaraEmitterData *pFVar4;
  uint uVar5;
  FNiagaraEmitterHandle *this_00;
  undefined1 local_res8 [8];
  
  this->bHasAnyGPUEmitters = 0;
  this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  iVar2 = (this->EmitterHandles).ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar3 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
    if (bVar3) {
      pFVar4 = FNiagaraEmitterHandle::GetEmitterData(this_00);
      if (pFVar4 != (FVersionedNiagaraEmitterData *)0x0) {
        uVar5 = 0;
        if (pFVar4->SimTarget == GPUComputeSim) {
          uVar5 = 0x10;
        }
        *(uint *)&this->field_0x5d0 =
             (uVar5 | *(uint *)&this->field_0x5d0 & 0x10) ^ *(uint *)&this->field_0x5d0 & 0xffffffef
        ;
      }
    }
    this_00 = this_00 + 1;
  }
  return;
}

// UpdatePostCompileDIInfo @ 149406fa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::UpdatePostCompileDIInfo(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  UNiagaraScript *pUVar3;
  bool bVar4;
  FVersionedNiagaraEmitterData *pFVar5;
  FNiagaraEmitterHandle *this_00;
  undefined1 local_res8 [8];
  
  this->bNeedsGPUContextInitForDataInterfaces = false;
  iVar2 = (this->EmitterHandles).ArrayNum;
  this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    pFVar5 = FNiagaraEmitterHandle::GetEmitterData(this_00);
    bVar4 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
    if ((((bVar4) && (pFVar5 != (FVersionedNiagaraEmitterData *)0x0)) &&
        (pFVar5->SimTarget == GPUComputeSim)) &&
       (pUVar3 = (pFVar5->GPUComputeScript).field0_0x0.DebugPtr, pUVar3 != (UNiagaraScript *)0x0)) {
      bVar4 = FNiagaraVMExecutableData::IsValid(&pUVar3->CachedScriptVM);
      if ((bVar4) && ((pUVar3->CachedScriptVM).bNeedsGPUContextInit != 0)) {
        this->bNeedsGPUContextInitForDataInterfaces = true;
      }
    }
    this_00 = this_00 + 1;
  }
  ForEachScript<_UNiagaraSystem::UpdatePostCompileDIInfo_::__l2::<lambda_1>_>(this,(<lambda_1>)this)
  ;
  return;
}

// UpdateScalability @ 149407080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::UpdateScalability(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  UNiagaraEmitter *this_00;
  FVersionedNiagaraEmitter *pFVar3;
  FNiagaraEmitterHandle *this_01;
  undefined1 local_res8 [8];
  FNiagaraSystemUpdateContext local_c8;
  FVersionedNiagaraEmitter local_30;
  
  CacheFromCompiledData(this);
  ResolveScalabilitySettings(this);
  iVar2 = (this->EmitterHandles).ArrayNum;
  this_01 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar1 = this_01 + iVar2;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_01 == pFVar1) break;
    pFVar3 = FNiagaraEmitterHandle::GetInstance(this_01,&local_30);
    this_00 = (pFVar3->Emitter).field0_0x0.DebugPtr;
    if (this_00 != (UNiagaraEmitter *)0x0) {
      UNiagaraEmitter::UpdateScalability(this_00);
    }
    this_01 = this_01 + 1;
  }
  local_c8.bOnlyActive = true;
  local_c8.bDestroySystemSim = true;
  local_c8.ComponentsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ComponentsToReset.ArrayNum = 0;
  local_c8.ComponentsToReset.ArrayMax = 0;
  local_c8.ComponentsToReInit.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ComponentsToReInit.ArrayNum = 0;
  local_c8.ComponentsToReInit.ArrayMax = 0;
  local_c8.ComponentsToNotifySimDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ComponentsToNotifySimDestroy.ArrayNum = 0;
  local_c8.ComponentsToNotifySimDestroy.ArrayMax = 0;
  local_c8.ComponentsToDestroyInstance.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ComponentsToDestroyInstance.ArrayNum = 0;
  local_c8.ComponentsToDestroyInstance.ArrayMax = 0;
  local_c8.SystemSimsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.SystemSimsToDestroy.ArrayNum = 0;
  local_c8.SystemSimsToDestroy.ArrayMax = 0;
  local_c8.SystemSimsToRecache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.SystemSimsToRecache.ArrayNum = 0;
  local_c8.SystemSimsToRecache.ArrayMax = 0;
  local_c8.PreWork._0_8_ = 0;
  local_c8.PreWork._8_8_ = 0;
  local_c8.PreWork._16_4_ = 0;
  local_c8.PostWork._0_8_ = 0;
  local_c8.PostWork._8_8_ = 0;
  local_c8.PostWork._16_4_ = 0;
  local_c8.bDestroyOnAdd = true;
  FNiagaraSystemUpdateContext::Add(&local_c8,this,true);
  FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(&local_c8);
  if ((*(int *)((longlong)&this->_padding_ + 4) != 0) && ((int)this->_padding_ != 0)) {
    FNiagaraWorldManager::PrimePoolForAllWorlds(this);
  }
  return;
}

// UpdateStatID @ 149407260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystem::UpdateStatID(UNiagaraSystem *this)

{
  TAtomic<FMinimalName> TVar1;
  
  TVar1 = ((this->StatID_GT).StatIdPtr)->Name;
  if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
    return;
  }
  GenerateStatID(this);
  return;
}

// UpdateSystemAfterLoad @ 149407290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall UNiagaraSystem::UpdateSystemAfterLoad(UNiagaraSystem *this)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  UNiagaraScript *pUVar3;
  bool bVar4;
  FVersionedNiagaraEmitter *pFVar5;
  FNiagaraEmitterHandle *this_00;
  undefined1 local_res8 [8];
  FVersionedNiagaraEmitter local_28;
  
  if (this->bFullyLoaded == '\0') {
    this->field_0x6c = this->field_0x6c | 4;
    pUVar3 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
    if (pUVar3 != (UNiagaraScript *)0x0) {
      UObject::ConditionalPostLoad((UObject *)pUVar3);
    }
    pUVar3 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
    if (pUVar3 != (UNiagaraScript *)0x0) {
      UObject::ConditionalPostLoad((UObject *)pUVar3);
    }
    iVar2 = (this->EmitterHandles).ArrayNum;
    this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if ((this->EmitterHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      pFVar5 = FNiagaraEmitterHandle::GetInstance(this_00,&local_28);
      if ((pFVar5->Emitter).field0_0x0.DebugPtr != (UNiagaraEmitter *)0x0) {
        pFVar5 = FNiagaraEmitterHandle::GetInstance(this_00,&local_28);
        UNiagaraEmitter::UpdateEmitterAfterLoad((pFVar5->Emitter).field0_0x0.DebugPtr);
      }
      this_00 = this_00 + 1;
    }
    bVar4 = IsValidInternal(this);
    this->bIsValidCached = 0;
    *(uint *)&this->field_0x4f0 = *(uint *)&this->field_0x4f0 | (uint)bVar4;
    bVar4 = IsReadyToRunInternal(this);
    this->bIsReadyToRunCached = 0;
    *(uint *)&this->field_0x4f0 = *(uint *)&this->field_0x4f0 | (uint)bVar4 * 2;
    ResolveScalabilitySettings(this);
    ComputeEmittersExecutionOrder(this);
    ComputeRenderersDrawOrder(this);
    CacheFromCompiledData(this);
    UpdateDITickFlags(this);
    UpdateHasGPUEmitters(this);
    if ((*(int *)((longlong)&this->_padding_ + 4) != 0) && ((int)this->_padding_ != 0)) {
      FNiagaraWorldManager::PrimePoolForAllWorlds(this);
      return;
    }
  }
  return;
}

// UsesCollection @ 1494084e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
UNiagaraSystem::UsesCollection(UNiagaraSystem *this,UNiagaraParameterCollection *param_1)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  UNiagaraStatelessEmitter *this_00;
  bool bVar3;
  FVersionedNiagaraEmitterData *this_01;
  FNiagaraEmitterHandle *this_02;
  undefined1 local_res8 [8];
  
  bVar3 = UNiagaraScript::UsesCollection((this->SystemSpawnScript).field0_0x0.DebugPtr,param_1);
  if ((bVar3) ||
     (bVar3 = UNiagaraScript::UsesCollection((this->SystemUpdateScript).field0_0x0.DebugPtr,param_1)
     , bVar3)) {
    return true;
  }
  iVar2 = (this->EmitterHandles).ArrayNum;
  this_02 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar1 = this_02 + iVar2;
  do {
    if ((this->EmitterHandles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_02 == pFVar1) {
      return false;
    }
    if (this_02->EmitterMode == Standard) {
      this_01 = FNiagaraEmitterHandle::GetEmitterData(this_02);
      if (this_01 != (FVersionedNiagaraEmitterData *)0x0) {
        bVar3 = FVersionedNiagaraEmitterData::UsesCollection(this_01,param_1);
LAB_149408588:
        if (bVar3 != false) {
          return true;
        }
      }
    }
    else {
      this_00 = (this_02->StatelessEmitter).field0_0x0.DebugPtr;
      if (this_00 != (UNiagaraStatelessEmitter *)0x0) {
        bVar3 = UNiagaraStatelessEmitter::UsesCollection(this_00,param_1);
        goto LAB_149408588;
      }
    }
    this_02 = this_02 + 1;
  } while( true );
}

