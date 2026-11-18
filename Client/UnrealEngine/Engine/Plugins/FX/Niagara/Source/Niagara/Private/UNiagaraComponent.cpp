// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 266

// StaticClass @ 148fe6b80

UClass * __cdecl UNiagaraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraComponent",
               &Z_Registration_Info_UClass_UNiagaraComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraComponent,0x800,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraComponent>,
               InternalVTableHelperCtorCaller<UNiagaraComponent>,local_res8,
               UFXSystemComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraComponent.InnerSingleton;
}

// UNiagaraComponent @ 149023f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
UNiagaraComponent::UNiagaraComponent(UNiagaraComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UFXSystemComponent::UFXSystemComponent((UFXSystemComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Asset).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->TickBehavior = UsePrereqs;
  FNiagaraUserRedirectionParameterStore::FNiagaraUserRedirectionParameterStore
            (&this->OverrideParameters);
  this->WarmupTickCount = 0;
  (this->SystemInstanceController).Object = (FNiagaraSystemInstanceController *)0x0;
  (this->SystemInstanceController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsLifeTimeCheckingEnabled = false;
  this->OcclusionQueryMode = Default;
  *(undefined8 *)&this->OnSystemFinished = 0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x10 = 0;
  (this->AutoAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AutoAttachSocketName).ComparisonIndex = 0;
  (this->AutoAttachSocketName).Number = 0;
  (this->DebugCachedScalabilityState).Significance = 1.0;
  (this->DebugCachedScalabilityState).LastVisibleTime = 0.0;
  (this->DebugCachedScalabilityState).SystemDataIndex = -1;
  puVar1 = &(this->DebugCachedScalabilityState).field_0xa;
  (this->DebugCachedScalabilityState).bNewlyRegistered = '\x01';
  (this->DebugCachedScalabilityState).bCulledByGlobalBudget = '\0';
  (this->DebugCachedScalabilityState).bCulledByVisibility = '\0';
  (this->DebugCachedScalabilityState).bCulledByInstanceCount = '\0';
  (this->DebugCachedScalabilityState).bCulledByDistance = '\0';
  (this->DebugCachedScalabilityState).bPreviousCulled = '\0';
  (this->DebugCachedScalabilityState).bCulled = '\0';
  (this->DebugCachedScalabilityState).bNewlyRegisteredDirty = '\0';
  (this->AssetExposedParametersChangedHandle).ID = 0;
  this->ScalabilityEffectType = (UNiagaraEffectType *)0x0;
  (this->CurrLocalBounds).IsValid = '\0';
  (this->SystemFixedBounds).IsValid = '\0';
  (this->EmitterOverrideInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterOverrideInfos).ArrayNum = 0;
  (this->EmitterOverrideInfos).ArrayMax = 0;
  this->CustomTimeDilation = 1.0;
  *(undefined8 *)&this->CreateSceneComponentUtilsFunction = 0;
  *(undefined8 *)&(this->CreateSceneComponentUtilsFunction).field_0x28 = 0;
  (this->SimCache).field0_0x0.DebugPtr = (UNiagaraSimCache *)0x0;
  (this->CullProxy).field0_0x0.DebugPtr = (UNiagaraCullProxyComponent *)0x0;
  return this;
}

// UNiagaraComponent @ 149024070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
UNiagaraComponent::UNiagaraComponent(UNiagaraComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  
  UFXSystemComponent::UFXSystemComponent((UFXSystemComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Asset).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->TickBehavior = UsePrereqs;
  FNiagaraUserRedirectionParameterStore::FNiagaraUserRedirectionParameterStore
            (&this->OverrideParameters);
  this->bForceSolo = 0;
  this->bOverrideWarmupSettings = 0;
  this->bEnablePreviewLODDistance = 0;
  puVar2 = &this->field_0x6cc;
  this->bAwaitingActivationDueToNotReady = 0;
  this->bRecachePSOs = 0;
  this->bDesiredPauseState = 0;
  this->bDuringUpdateContextReset = 0;
  this->bIsFullyComplete = 1;
  this->bIsCulledByScalability = 0;
  this->bForceLocalPlayerEffect = 0;
  this->bAllowScalability = 1;
  this->bDidAutoAttach = 0;
  this->bActivateShouldResetWhenReady = 0;
  this->WarmupTickCount = 0;
  this->WarmupTickDelta = 0.06666667;
  this->AgeUpdateMode = TickDeltaTime;
  this->DesiredAge = 0.0;
  this->LastHandledDesiredAge = 0.0;
  this->bCanRenderWhileSeeking = true;
  this->SeekDelta = 0.033333335;
  this->bLockDesiredAgeDeltaTimeToSeekDelta = true;
  this->MaxSimTime = 0.033;
  this->bIsSeeking = false;
  this->bIsLifeTimeCheckingEnabled = false;
  this->MaxTimeBeforeForceUpdateTransform = 5.0;
  this->OcclusionQueryMode = Default;
  this->PreviewLODDistance = 0.0;
  this->PreviewMaxDistance = 1.0;
  this->ScalabilityEffectType = (UNiagaraEffectType *)0x0;
  this->ScalabilityManagerHandle = -1;
  this->ForceUpdateTransformTime = 0.0;
  (this->SystemInstanceController).Object = (FNiagaraSystemInstanceController *)0x0;
  (this->SystemInstanceController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bAutoDestroy = 0;
  *(undefined8 *)&this->OnSystemFinished = 0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x10 = 0;
  (this->AutoAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AutoAttachSocketName).ComparisonIndex = 0;
  (this->AutoAttachSocketName).Number = 0;
  (this->DebugCachedScalabilityState).Significance = 1.0;
  (this->DebugCachedScalabilityState).LastVisibleTime = 0.0;
  (this->DebugCachedScalabilityState).SystemDataIndex = -1;
  puVar1 = &(this->DebugCachedScalabilityState).field_0xa;
  (this->DebugCachedScalabilityState).bNewlyRegistered = '\x01';
  (this->DebugCachedScalabilityState).bCulledByGlobalBudget = '\0';
  (this->DebugCachedScalabilityState).bCulledByVisibility = '\0';
  (this->DebugCachedScalabilityState).bCulledByInstanceCount = '\0';
  (this->DebugCachedScalabilityState).bCulledByDistance = '\0';
  (this->DebugCachedScalabilityState).bPreviousCulled = '\0';
  (this->DebugCachedScalabilityState).bCulled = '\0';
  (this->DebugCachedScalabilityState).bNewlyRegisteredDirty = '\0';
  (this->AssetExposedParametersChangedHandle).ID = 0;
  (this->CurrLocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CurrLocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CurrLocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CurrLocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CurrLocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CurrLocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x8 = 0;
  (this->CurrLocalBounds).IsValid = '\0';
  (this->CurrLocalBounds).Pad[0] = '\0';
  (this->CurrLocalBounds).Pad[1] = '\0';
  (this->CurrLocalBounds).Pad[2] = '\0';
  (this->CurrLocalBounds).Pad[3] = '\0';
  (this->CurrLocalBounds).Pad[4] = '\0';
  (this->CurrLocalBounds).Pad[5] = '\0';
  (this->CurrLocalBounds).Pad[6] = '\0';
  (this->SystemFixedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->SystemFixedBounds).IsValid = '\0';
  (this->SystemFixedBounds).Pad[0] = '\0';
  (this->SystemFixedBounds).Pad[1] = '\0';
  (this->SystemFixedBounds).Pad[2] = '\0';
  (this->SystemFixedBounds).Pad[3] = '\0';
  (this->SystemFixedBounds).Pad[4] = '\0';
  (this->SystemFixedBounds).Pad[5] = '\0';
  (this->SystemFixedBounds).Pad[6] = '\0';
  (this->EmitterOverrideInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterOverrideInfos).ArrayNum = 0;
  (this->EmitterOverrideInfos).ArrayMax = 0;
  this->CustomTimeDilation = 1.0;
  *(undefined8 *)&this->CreateSceneComponentUtilsFunction = 0;
  *(undefined8 *)&(this->CreateSceneComponentUtilsFunction).field_0x28 = 0;
  (this->SimCache).field0_0x0.DebugPtr = (UNiagaraSimCache *)0x0;
  (this->CullProxy).field0_0x0.DebugPtr = (UNiagaraCullProxyComponent *)0x0;
  FNiagaraParameterStore::SetOwner
            ((FNiagaraParameterStore *)&this->OverrideParameters,(UObject *)this);
  bVar4 = *(byte *)((longlong)&this->_padding_ + 2);
  *(undefined2 *)&this->_padding_ = 0x600;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar4 & 0xf3 | 2;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  pbVar3 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar3 = *pbVar3 | 0x80;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar3 = *pbVar3 | 8;
  this->bRenderingEnabled = 1;
  (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X = 1.0;
  (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y = 1.0;
  (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = 1.0;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  pbVar3 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar3 = *pbVar3 & 0xbf;
  return this;
}

// ~UNiagaraComponent @ 149026740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::~UNiagaraComponent(UNiagaraComponent *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  if (*(longlong *)&this->CreateSceneComponentUtilsFunction != 0) {
    plVar1 = *(longlong **)&(this->CreateSceneComponentUtilsFunction).field_0x28;
    plVar4 = (longlong *)&(this->CreateSceneComponentUtilsFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (this->EmitterOverrideInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = *(void **)&(this->OnSystemFinished).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSystemFinished);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SystemInstanceController).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->OverrideParameters).UserParameterRedirects.field_0x48 = 0;
  pvVar3 = *(void **)&(this->OverrideParameters).UserParameterRedirects.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OverrideParameters).UserParameterRedirects);
  FNiagaraParameterStore::~FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->OverrideParameters);
  UFXSystemComponent::~UFXSystemComponent((UFXSystemComponent *)this);
  return;
}

// operator() @ 1490280a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSetDynamicData> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  longlong lVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_78 [2];
  longlong local_58;
  
  FVar18.Value = 0;
  FVar13 = StatPtr_STAT_NiagaraSetDynamicData;
  if (StatPtr_STAT_NiagaraSetDynamicData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSetDynamicData>)0x0) {
    pFVar12 = ::FName::FName(&local_res10,"STAT_NiagaraSetDynamicData");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSetDynamicData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSetDynamicData,*pFVar12,
                        L"Set Dynamic Data (RT)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar9 = false;
  bVar11 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x95a);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar10 = true;
      FVar18.Value = FVar15.Value;
      goto LAB_14902820e;
    }
  }
  bVar10 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
LAB_14902820e:
  lVar2 = *(longlong *)((longlong)this + 0xb0);
  lVar17 = -1;
  lVar3 = *(longlong *)((longlong)this + 0xa0);
  lVar4 = *(longlong *)((longlong)this + 0xa8);
  local_58 = lVar2;
  if (((lVar3 != 0) || (lVar4 != 0)) || (lVar2 != 0)) {
    QueryPerformanceCounter(&local_res8);
    lVar17 = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
  }
  FNiagaraSystemRenderData::ExecuteDynamicDataCommands_RenderThread
            ((TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)((longlong)this + 8));
  lVar5 = *(longlong *)this;
  uVar6 = *(undefined4 *)((longlong)this + 0x9c);
  uVar7 = *(undefined4 *)((longlong)this + 0xa0);
  uVar8 = *(undefined4 *)((longlong)this + 0xa4);
  *(undefined4 *)(lVar5 + 0x378) = *(undefined4 *)((longlong)this + 0x98);
  *(undefined4 *)(lVar5 + 0x37c) = uVar6;
  *(undefined4 *)(lVar5 + 0x380) = uVar7;
  *(undefined4 *)(lVar5 + 900) = uVar8;
  uVar6 = *(undefined4 *)((longlong)this + 0xac);
  uVar7 = *(undefined4 *)((longlong)this + 0xb0);
  uVar8 = *(undefined4 *)((longlong)this + 0xb4);
  *(undefined4 *)(lVar5 + 0x388) = *(undefined4 *)((longlong)this + 0xa8);
  *(undefined4 *)(lVar5 + 0x38c) = uVar6;
  *(undefined4 *)(lVar5 + 0x390) = uVar7;
  *(undefined4 *)(lVar5 + 0x394) = uVar8;
  if (lVar17 != -1) {
    QueryPerformanceCounter(&local_res8);
    lVar17 = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) - lVar17;
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + lVar17;
      *(longlong *)(lVar3 + 0x38) = *(longlong *)(lVar3 + 0x38) + 1;
    }
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + lVar17;
      *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + 1;
    }
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + lVar17;
      *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + 1;
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78[0].NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_78[0].NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_res8);
      local_78[0].StatData.Pad[4] = '\0';
      local_78[0].StatData.Pad[5] = '\0';
      local_78[0].StatData.Pad[6] = '\0';
      local_78[0].StatData.Pad[7] = '\0';
      local_78[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_78[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_78[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_78[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_78);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Activate @ 14902a1e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::Activate(UNiagaraComponent *this,bool param_1)

{
  ActivateInternal(this,param_1,false);
  return;
}

// ActivateInternal @ 14902a1f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::ActivateInternal(UNiagaraComponent *this,bool param_1,bool param_2)

{
  TAtomic<unsigned___int64> *pTVar1;
  byte *pbVar2;
  TSharedPtr<FNiagaraSystemInstanceController,1> *this_00;
  longlong *plVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  UNiagaraSystem *pUVar7;
  UNiagaraSystem *pUVar8;
  UObject *pUVar9;
  FName FVar10;
  code *pcVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  LARGE_INTEGER LVar22;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  uint uVar27;
  ENiagaraExecutionState EVar28;
  ETickingGroup EVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentActivate> FVar31;
  UWorld *pUVar32;
  FParticlePerfStats *pFVar33;
  FParticlePerfStats *pFVar34;
  FParticlePerfStats *pFVar35;
  wchar_t *pwVar36;
  FNiagaraGpuComputeDispatchInterface *pFVar37;
  FNiagaraWorldManager *pFVar38;
  UObject *pUVar39;
  UNiagaraEffectType *pUVar40;
  FCsvProfiler *this_01;
  longlong lVar41;
  FNiagaraSystemInstanceController *pFVar42;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar43;
  longlong *plVar44;
  ForElementType<FSetElementId> FVar45;
  int iVar46;
  FName FVar47;
  float fVar48;
  EAttachmentRule local_res8;
  EAttachmentRule EStackX_9;
  EAttachmentRule EStackX_a;
  byte bStackX_b;
  uint uStackX_c;
  bool local_res10;
  char local_res18;
  FColor_u_0 local_res20 [2];
  FName local_d0;
  LARGE_INTEGER local_c8;
  FParticlePerfStats *local_c0;
  FParticlePerfStats *local_b8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_b0;
  FSharedReferencer<1> FStack_a8;
  FName local_a0;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  undefined8 local_80;
  FSharedReferencer<1> local_78;
  FName local_70;
  FString local_68;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_58;
  
  this->bAwaitingActivationDueToNotReady = 0;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  cVar25 = '\0';
  if (param_1) {
    (this->CurrLocalBounds).Max.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->CurrLocalBounds).Max.field0_0x0._s_0.Y = (double)uVar21;
    (this->CurrLocalBounds).Max.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar14 = (this->CurrLocalBounds).Max.field0_0x0._s_0.X;
    dVar15 = (this->CurrLocalBounds).Max.field0_0x0._s_0.Y;
    (this->CurrLocalBounds).IsValid = '\0';
    dVar4 = (this->CurrLocalBounds).Max.field0_0x0._s_0.Z;
    (this->CurrLocalBounds).Min.field0_0x0._s_0.X = dVar14;
    (this->CurrLocalBounds).Min.field0_0x0._s_0.Y = dVar15;
    (this->CurrLocalBounds).Min.field0_0x0._s_0.Z = dVar4;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if (NiagaraComponentPrivate::GbComponentsEnabled == false) {
    UnregisterWithScalabilityManager(this);
    OnSystemComplete(this,true);
    goto LAB_14902ab77;
  }
  pFVar35 = (FParticlePerfStats *)0x0;
  FVar31 = StatPtr_STAT_NiagaraComponentActivate;
  if (StatPtr_STAT_NiagaraComponentActivate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentActivate>)0x0) {
    pFVar30 = ::FName::FName(&local_70,"STAT_NiagaraComponentActivate");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentActivate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraComponentActivate,*pFVar30
                        ,L"Activate (GT)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar47 = *(FName *)FVar31;
  bVar16 = false;
  bVar18 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  uVar27 = FVar47.Number;
  if ((FVar47.ComparisonIndex.Value.Value == 0) && (uVar27 == 0)) {
LAB_14902a3b9:
    bVar17 = false;
    FVar47 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar16 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar47.ComparisonIndex.Value.Value;
        local_d0.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x510);
        bVar16 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14902a3b9;
    local_res8 = (EAttachmentRule)FVar47.ComparisonIndex.Value;
    EStackX_9 = FVar47.ComparisonIndex.Value._1_1_;
    EStackX_a = FVar47.ComparisonIndex.Value._2_1_;
    bStackX_b = FVar47.ComparisonIndex.Value._3_1_;
    uStackX_c = uVar27;
    FThreadStats::AddMessage(FVar47,CycleScopeStart);
    bVar17 = true;
  }
  pUVar32 = (UWorld *)this->_padding_;
  pUVar7 = (this->Asset).field0_0x0.DebugPtr;
  pFVar33 = pFVar35;
  if ((((pUVar32 != (UWorld *)0x0) ||
       (pUVar32 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar32 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar33 = FParticlePerfStats::GetWorldPerfStats(pUVar32);
  }
  pFVar34 = pFVar35;
  if (((pUVar7 != (UNiagaraSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar34 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar7);
  }
  local_c0 = pFVar34;
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar35 = FParticlePerfStats::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  local_c8.QuadPart = -1;
  local_b8 = pFVar35;
  if (((pFVar33 != (FParticlePerfStats *)0x0) || (pFVar34 != (FParticlePerfStats *)0x0)) ||
     (pFVar35 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_90);
    local_c8 = local_90;
  }
  if ((this->Asset).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) {
    DestroyInstance(this);
    if (((NiagaraComponentPrivate::GWarnNullAsset == 0) || ((this->_padding_ & 0x40030) != 0)) ||
       ((byte)LogNiagara._0_1_ < 3)) goto LAB_14902aae3;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
LAB_14902aae0:
    cVar25 = '\0';
  }
  else {
    pUVar32 = (UWorld *)this->_padding_;
    if (pUVar32 == (UWorld *)0x0) {
      pUVar32 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar36 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar36,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       ((`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
         false && ((pUVar32 != (UWorld *)0x0 && (pUVar32->bIsTearingDown == '\0')))))) {
      if ((this->_padding_ & 1) != 0) {
        pUVar7 = (this->Asset).field0_0x0.DebugPtr;
        if ((pUVar7 == (UNiagaraSystem *)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("System != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentSettings.cpp"
                                ,299,L""), bVar24)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (FNiagaraComponentSettings::bUseSystemDenyList != false) {
          lVar41 = pUVar7->_padding_;
          uVar27 = ::GetTypeHash((FNameEntryId)(uint)lVar41);
          iVar46 = -1;
          if (FNiagaraComponentSettings::SystemDenyList.Elements._8_4_ !=
              FNiagaraComponentSettings::SystemDenyList.Elements._52_4_) {
            FVar45 = (ForElementType<FSetElementId>)0x154c7d1c8;
            if (FNiagaraComponentSettings::SystemDenyList.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar45 = FNiagaraComponentSettings::SystemDenyList.Hash.SecondaryData;
            }
            iVar5 = *(int *)((longlong)FVar45 +
                            (ulonglong)
                            (FNiagaraComponentSettings::SystemDenyList.HashSize - 1U &
                            uVar27 + (int)((ulonglong)lVar41 >> 0x20)) * 4);
            while ((iVar46 = -1, iVar5 != -1 &&
                   (iVar46 = iVar5,
                   *(longlong *)
                    (FNiagaraComponentSettings::SystemDenyList.Elements._0_8_ +
                    (longlong)iVar5 * 0x10) != lVar41))) {
              iVar5 = *(int *)(FNiagaraComponentSettings::SystemDenyList.Elements._0_8_ + 8 +
                              (longlong)iVar5 * 0x10);
            }
          }
          if (iVar46 != -1) goto LAB_14902aae0;
        }
        this_00 = &this->SystemInstanceController;
        pFVar42 = this_00->Object;
        if (pFVar42 != (FNiagaraSystemInstanceController *)0x0) {
          if ((pFVar42->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
            bVar24 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4531953176097587084>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                ,0x74,"IsValid()");
            if (bVar24) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (((pFVar42->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar24)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pUVar7 = ((pFVar42->SystemInstance).Object)->System;
          pUVar8 = (this->Asset).field0_0x0.DebugPtr;
          if (pUVar8 == (UNiagaraSystem *)0x0) {
            bVar24 = pUVar7 == (UNiagaraSystem *)0x0;
          }
          else {
            bVar24 = pUVar8 == pUVar7;
          }
          if (!bVar24) {
            UnregisterWithScalabilityManager(this);
            OnSystemComplete(this,true);
          }
        }
        bVar24 = UNiagaraSystem::IsReadyToRun((this->Asset).field0_0x0.DebugPtr);
        if ((bVar24) &&
           ((((pUVar32 = (UWorld *)this->_padding_, pUVar32 != (UWorld *)0x0 ||
              (pUVar32 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
              pUVar32 != (UWorld *)0x0)) &&
             (pFVar37 = FNiagaraGpuComputeDispatchInterface::Get(pUVar32),
             pFVar37 != (FNiagaraGpuComputeDispatchInterface *)0x0)) &&
            (pFVar38 = FNiagaraWorldManager::Get(pUVar32), pFVar38 != (FNiagaraWorldManager *)0x0)))
           ) {
          if (local_res10 != false) {
            UnregisterWithScalabilityManager(this);
          }
          cVar25 = local_res18;
          if (((local_res18 == '\0') && (this->bIsCulledByScalability != 0)) &&
             (this->ScalabilityManagerHandle != -1)) goto LAB_14902aae0;
          bVar24 = UNiagaraSystem::IsAllowedByScalability((this->Asset).field0_0x0.DebugPtr);
          if (bVar24) {
            uVar27 = *(uint *)&this->field_0x6cc;
            this->bIsCulledByScalability = 0;
            this->bIsFullyComplete = 0;
            if (cVar25 == '\0') {
              *(uint *)&this->field_0x6cc = uVar27 & 0xfffffd3f;
              SetPausedInternal(this,false,false);
            }
            ResolveOwnerAllowsScalability(this,false);
            pUVar32 = (UWorld *)this->_padding_;
            if (pUVar32 == (UWorld *)0x0) {
              pUVar32 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
            }
            UPrimitiveComponent::SetLastRenderTime
                      ((UPrimitiveComponent *)this,(float)pUVar32->TimeSeconds);
            uVar27 = *(uint *)&this->field_0x6cc;
            this->bDidAutoAttach = 0;
            if (this->bAutoManageAttachment != 0) {
              pUVar39 = FWeakObjectPtr::Get(&(this->AutoAttachParent).WeakPtr);
              if (pUVar39 == (UObject *)0x0) {
                CancelAutoAttachment(this,true);
              }
              else {
                pUVar9 = (UObject *)this->_padding_;
                if (((pUVar9 != (UObject *)0x0) && (pUVar9 == pUVar39)) &&
                   ((FName)this->_padding_ == this->AutoAttachSocketName)) {
                  plVar44 = *(longlong **)&pUVar9[5].field_0x20;
                  plVar3 = plVar44 + *(int *)(pUVar9 + 6);
                  for (; plVar44 != plVar3; plVar44 = plVar44 + 1) {
                    if ((UNiagaraComponent *)*plVar44 == (UNiagaraComponent *)0x0) {
                      bVar24 = this == (UNiagaraComponent *)0x0;
                    }
                    else {
                      bVar24 = (UNiagaraComponent *)*plVar44 == this;
                    }
                    if (bVar24) goto LAB_14902a9aa;
                  }
                }
                *(uint *)&this->field_0x6cc =
                     ((uVar27 >> 2 & 0xff) << 2 ^ *(uint *)&this->field_0x6cc) & 4 ^
                     *(uint *)&this->field_0x6cc;
                CancelAutoAttachment(this,true);
                local_res8 = this->AutoAttachLocationRule;
                dVar14 = (double)this->_padding_;
                FVar10 = this->AutoAttachSocketName;
                dVar4 = (double)this->_padding_;
                EStackX_9 = this->AutoAttachRotationRule;
                EStackX_a = this->AutoAttachScaleRule;
                (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X = (double)this->_padding_;
                (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y = dVar14;
                dVar14 = (double)this->_padding_;
                dVar15 = (double)this->_padding_;
                bStackX_b = this->bAutoAttachWeldSimulatedBodies;
                (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z = dVar4;
                dVar4 = (double)this->_padding_;
                (this->SavedAutoAttachRelativeRotation).Pitch = dVar14;
                (this->SavedAutoAttachRelativeRotation).Yaw = dVar15;
                lVar19 = this->_padding_;
                uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
                lVar20 = this->_padding_;
                uVar13 = *(undefined4 *)((longlong)&this->_padding_ + 4);
                lVar41 = this->_padding_;
                (this->SavedAutoAttachRelativeRotation).Roll = dVar4;
                dVar4 = (double)this->_padding_;
                *(int *)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 = (int)lVar19;
                *(undefined4 *)((longlong)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 + 4) =
                     uVar6;
                *(int *)((longlong)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 + 8) =
                     (int)lVar20;
                *(undefined4 *)((longlong)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 + 0xc)
                     = uVar13;
                (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = dVar4;
                (**(code **)(lVar41 + 0x508))(this,pUVar39,&local_res8,FVar10);
LAB_14902a9aa:
                this->bDidAutoAttach = 1;
              }
            }
            if (((this->bAllowScalability == 1 && this->bOwnerAllowsScalabiltiy == 1) &&
                (pUVar7 = (this->Asset).field0_0x0.DebugPtr, pUVar7 != (UNiagaraSystem *)0x0)) &&
               (pUVar40 = UNiagaraSystem::GetEffectType(pUVar7),
               pUVar40 != (UNiagaraEffectType *)0x0)) {
              pUVar32 = (UWorld *)this->_padding_;
              if (pUVar32 == (UWorld *)0x0) {
                pUVar32 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              pFVar38 = FNiagaraWorldManager::Get(pUVar32);
              if (((pFVar38 != (FNiagaraWorldManager *)0x0) &&
                  (pUVar40->UpdateFrequency == SpawnOnly)) &&
                 (bVar24 = FNiagaraWorldManager::ShouldPreCull
                                     (pFVar38,(this->Asset).field0_0x0.DebugPtr,this), bVar24)) {
                this_01 = FCsvProfiler::Get();
                if (((this_01 != (FCsvProfiler *)0x0) &&
                    (bVar24 = FCsvProfiler::IsCapturing(this_01), bVar24)) &&
                   (FParticlePerfStats::bCSVStatsEnabled != (TAtomic<bool>)0x0)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    ::FName::FName(&PreCullStatName,L"NiagaraCulled/PreCull");
                    _Init_thread_footer(&::_TSS0);
                  }
                  FCsvProfiler::RecordCustomStat
                            (&PreCullStatName,_GCsvCategory_Particles.Index,1,Accumulate);
                }
                goto LAB_14902aad1;
              }
            }
            bVar24 = local_res10;
            if (((local_res10 == false) && ((this->_padding_ & 0x100000) != 0)) &&
               (this_00->Object != (FNiagaraSystemInstanceController *)0x0)) {
              pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
              EVar28 = FNiagaraSystemInstanceController::GetRequestedExecutionState<>(pFVar42);
              if (EVar28 == Active) {
                pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
                EVar28 = FNiagaraSystemInstanceController::GetActualExecutionState<>(pFVar42);
                if (EVar28 == Active) {
                  pcVar11 = *(code **)(this->_padding_ + 0x430);
                  pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
                  bVar24 = FNiagaraSystemInstanceController::IsSolo<>(pFVar42);
                  cVar25 = (*pcVar11)(this);
                  if ((bVar24 != (bool)cVar25) &&
                     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<6771089081142085037>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                                          ,0x5ad,
                                          "SystemInstanceController->IsSolo() == IsComponentTickEnabled()"
                                         ), bVar24)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  cVar25 = (**(code **)(this->_padding_ + 0x430))(this);
                  goto LAB_14902aae3;
                }
              }
            }
            if (((this->bIsCulledByScalability != 0) && (bVar26 = IsPaused(this), bVar26)) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!(bIsCulledByScalability && IsPaused())",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                                    ,0x5b3,
                                    L"We should never be paused when being re-activated by scalability. We unregister from the manager when paused so we should never get here."
                                   ), bVar26)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            SetPausedInternal(this,false,false);
            DestroyCullProxy(this);
            if ((bVar24 != false) ||
               (cVar25 = (**(code **)(this->_padding_ + 0x330))(this), cVar25 == '\x01')) {
              UActorComponent::SetActiveFlag((UActorComponent *)this,true);
              local_b0 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
              FStack_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) <
                     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                     ::__l2::_thread_safe_static_guard_0__) &&
                   (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                         ::__l2::_thread_safe_static_guard_0__),
                   `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                   ::__l2::_thread_safe_static_guard_0__ == -1)) {
                  ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                  ::__l2::DelegateFName,"OnComponentActivated");
                  _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                       ::__l2::_thread_safe_static_guard_0__);
                }
                FVar10 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::DelegateFName;
                bVar26 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
                if ((!bVar26) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("DelegateOwner->IsValidLowLevelFast(false)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                                        ,0xd7,L""), bVar26)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pTVar43 = FSparseDelegateStorage::GetSharedMulticastDelegate
                                    (&local_58,(UObject *)this,FVar10);
                local_78.ReferenceController = (pTVar43->SharedReferenceCount).ReferenceController;
                local_b0 = pTVar43->Object;
                if (local_78.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_78.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(local_78.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_80 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a8,&local_78);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_78.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_58.SharedReferenceCount.ReferenceController);
              }
              pTVar23 = local_b0;
              if (local_b0 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
                if ((local_b0 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar26)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                FActorComponentActivatedSignature_DelegateWrapper
                          (pTVar23,(UActorComponent *)this,bVar24);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FStack_a8.ReferenceController);
            }
            bVar24 = InitializeSystem(this);
            if (this_00->Object != (FNiagaraSystemInstanceController *)0x0) {
              pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
              fVar48 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this);
              FNiagaraSystemInstanceController::SetLastRenderTime<float>(pFVar42,fVar48);
              RegisterWithScalabilityManager(this);
              if ((this->_padding_ & 2) == 0) {
                (**(code **)(this->_padding_ + 0x388))(this);
              }
              pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
              if (((pFVar42->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                 (bVar26 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_4531953176097587055>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                      ,0x91,"IsValid()"), bVar26)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (((pFVar42->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar26)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FNiagaraSystemInstance::Activate
                        ((pFVar42->SystemInstance).Object,bVar24 * '\x02' + ResetSystem);
              if (this_00->Object == (FNiagaraSystemInstanceController *)0x0) {
LAB_14902af08:
                cVar25 = '\0';
              }
              else {
                pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
                bVar24 = FNiagaraSystemInstanceController::IsComplete<>(pFVar42);
                if (bVar24) {
                  OnSystemComplete(this,true);
                  goto LAB_14902af08;
                }
                pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
                bVar24 = FNiagaraSystemInstanceController::IsSolo<>(pFVar42);
                if (!bVar24) goto LAB_14902af08;
                pFVar42 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
                if (((pFVar42->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                   (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_4531953176097587053>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                        ,0x93,"IsValid()"), bVar24)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (((pFVar42->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar24)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                EVar29 = FNiagaraSystemInstance::CalculateTickGroup
                                   ((pFVar42->SystemInstance).Object);
                *(undefined1 *)((longlong)&this->_padding_ + 1) = 6;
                uVar12 = (char)EVar29;
                if ((int)EVar29 < 0) {
                  uVar12 = 0;
                }
                cVar25 = '\x01';
                *(undefined1 *)&this->_padding_ = uVar12;
              }
              if (local_res18 != '\0') {
                SetPausedInternal(this,this->bDesiredPauseState,false);
              }
              goto LAB_14902aae3;
            }
          }
LAB_14902aad1:
          OnSystemComplete(this,true);
          goto LAB_14902aae0;
        }
        cVar25 = '\x01';
        *(uint *)&this->field_0x6cc =
             (uint)local_res10 * 2 | *(uint *)&this->field_0x6cc & 0xfffffffd | 1;
      }
    }
    else if (this->bAutoDestroy != 0) {
      (**(code **)(this->_padding_ + 0x4a0))(this,0);
    }
  }
LAB_14902aae3:
  LVar22 = local_c8;
  if (local_c8.QuadPart != -1) {
    QueryPerformanceCounter(&local_88);
    lVar41 = local_88.QuadPart - (longlong)LVar22;
    if (pFVar33 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(pFVar33->GameThreadStats).ActivationCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar41);
      UNLOCK();
    }
    if (local_c0 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(local_c0->GameThreadStats).ActivationCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar41);
      UNLOCK();
    }
    if (local_b8 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(local_b8->GameThreadStats).ActivationCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar41);
      UNLOCK();
    }
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar47,CycleScopeEnd);
  }
LAB_14902ab77:
  pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar2 = *pbVar2 & (cVar25 << 2 | 0xfbU);
  (**(code **)(this->_padding_ + 0x420))(this,cVar25);
  return;
}

// ActivateSystem @ 14902b030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::ActivateSystem(UNiagaraComponent *this,bool param_1)

{
  if ((this->_padding_ & 0x100000) != 0) {
    ActivateInternal(this,true,false);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014902b048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  return;
}

// AdditionalStatObject @ 14902bf40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UObject * __thiscall UNiagaraComponent::AdditionalStatObject(UNiagaraComponent *this)

{
  return (UObject *)(this->Asset).field0_0x0.DebugPtr;
}

// AdvanceSimulation @ 14902c0b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::AdvanceSimulation(UNiagaraComponent *this,int param_1,float param_2)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->SystemInstanceController).Object;
  if ((pFVar1 != (FNiagaraSystemInstanceController *)0x0) && (__real_322bcc77 < param_2)) {
    if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587059>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x8d,"IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FNiagaraSystemInstance::AdvanceSimulation((pFVar1->SystemInstance).Object,param_1,param_2);
    return;
  }
  return;
}

// AdvanceSimulationByTime @ 14902c0d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::AdvanceSimulationByTime(UNiagaraComponent *this,float param_1,float param_2)

{
  FNiagaraSystemInstanceController *this_00;
  
  this_00 = (this->SystemInstanceController).Object;
  if ((this_00 != (FNiagaraSystemInstanceController *)0x0) && (__real_322bcc77 < param_2)) {
    FNiagaraSystemInstanceController::AdvanceSimulation<int,float>
              (this_00,(int)ROUND((__real_40000000 / param_2) * param_1 - __real_3f000000) >> 1,
               param_2);
    return;
  }
  return;
}

// ApplyWorldOffset @ 14902db30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::ApplyWorldOffset(UNiagaraComponent *this,TVector<double> *param_1,bool param_2)

{
  USceneComponent::ApplyWorldOffset((USceneComponent *)this,param_1,param_2);
  if ((this->_padding_ & 0x100000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014902db54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2b8))(this,1);
    return;
  }
  return;
}

// AssetExposedParametersChanged @ 14902db80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::AssetExposedParametersChanged(UNiagaraComponent *this)

{
  undefined1 uVar1;
  ENCPoolMethod EVar2;
  UNiagaraSystem *pUVar3;
  longlong lVar4;
  
  if (((uint)this->_padding_ >> 0xc & 1) == 0) {
    this->bAutoDestroy = 0;
    EVar2 = this->PoolingMethod;
    lVar4 = this->_padding_;
    this->PoolingMethod = None;
    DestroyInstance(this);
    this->PoolingMethod = EVar2;
    pUVar3 = (this->Asset).field0_0x0.DebugPtr;
    *(uint *)&this->field_0x678 = *(uint *)&this->field_0x678 & 0xfffffffe | this->bAutoDestroy;
    if (pUVar3 != (UNiagaraSystem *)0x0) {
      FNiagaraParameterStore::Rebind((FNiagaraParameterStore *)&this->OverrideParameters);
    }
    if ((lVar4 & 0x100000) != 0) {
      ReinitializeSystem(this);
      return;
    }
  }
  return;
}

// BeginDestroy @ 14902dc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::BeginDestroy(UNiagaraComponent *this)

{
  UNiagaraSystem *pUVar1;
  UNiagaraComponentPool *this_00;
  UWorld *pUVar2;
  FNiagaraWorldManager *pFVar3;
  FString local_28;
  FString local_18;
  
  if (this->PoolingMethod != None) {
    pUVar2 = (UWorld *)this->_padding_;
    if ((pUVar2 == (UWorld *)0x0) &&
       (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar2 == (UWorld *)0x0)) {
      if ((GNiagaraLogVerboseWarnings != 0) && (2 < (byte)LogNiagara._0_1_)) {
        pUVar1 = (this->Asset).field0_0x0.DebugPtr;
        if ((pUVar1 == (UNiagaraSystem *)0x0) || (pUVar1->_padding_ == 0)) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar1,&local_28,(UObject *)0x0,None);
        }
        if (this->_padding_ == 0) {
          ::FString::FString(&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((GNiagaraLogVerboseWarnings != 0) && (2 < (byte)LogNiagara._0_1_)) {
        pUVar1 = (this->Asset).field0_0x0.DebugPtr;
        if ((pUVar1 == (UNiagaraSystem *)0x0) || (pUVar1->_padding_ == 0)) {
          ::FString::FString(&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar1,&local_18,(UObject *)0x0,None);
        }
        if (this->_padding_ == 0) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = FNiagaraWorldManager::Get(pUVar2);
      if ((pFVar3 != (FNiagaraWorldManager *)0x0) &&
         (this_00 = (pFVar3->ComponentPool).field0_0x0.DebugPtr,
         this_00 != (UNiagaraComponentPool *)0x0)) {
        UNiagaraComponentPool::PooledComponentDestroyed(this_00,this);
      }
    }
    this->PoolingMethod = None;
  }
  UnregisterWithScalabilityManager(this);
  DestroyInstance(this);
  UPrimitiveComponent::BeginDestroy((UPrimitiveComponent *)this);
  return;
}

// CalcBounds @ 149030f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UNiagaraComponent::CalcBounds
          (UNiagaraComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  int *piVar1;
  UNiagaraSystem *pUVar2;
  UNiagaraCullProxyComponent *pUVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  TStatId TVar21;
  UObject *pUVar22;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar23;
  TBoxSphereBounds<double,double> *pTVar24;
  FStatMessage *pFVar25;
  uint uVar26;
  TStatIdData *pTVar27;
  FName FVar28;
  double *pdVar29;
  FNameEntryId FVar30;
  double *pdVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_348 [32];
  FColor_u_0 local_328 [2];
  LARGE_INTEGER local_320;
  FName local_318;
  FName local_310;
  double local_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  LARGE_INTEGER local_2c8;
  UNiagaraComponent *local_2c0;
  UNiagaraComponent *local_2b8;
  UNiagaraComponent *local_2b0;
  LARGE_INTEGER local_2a8;
  FStatMessage local_2a0;
  FStatMessage local_290;
  FStatMessage local_280;
  undefined1 local_270 [8];
  double local_268;
  double dStack_260;
  double local_258;
  undefined1 local_238 [16];
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  TMatrix<double> local_1d8;
  TBoxSphereBounds<double,double> local_158;
  TVector<double>_u_0 local_120;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_348;
  pUVar2 = (this->Asset).field0_0x0.DebugPtr;
  if (pUVar2 == (UNiagaraSystem *)0x0) {
    pTVar27 = &TStatId::TStatId_NAME_None;
  }
  else {
    TVar21 = UNiagaraSystem::GetStatID(pUVar2,SUB81(local_270,0),true);
    pTVar27 = *(TStatIdData **)&(TVar21.StatIdPtr)->Name;
  }
  FVar28 = *(FName *)pTVar27;
  bVar16 = false;
  bVar18 = false;
  local_310.ComparisonIndex.Value = 0;
  local_310.Number = 0;
  FVar30 = FVar28.ComparisonIndex.Value;
  uVar26 = FVar28.Number;
  if ((FVar30.Value != 0) || (uVar26 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_328[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_328[0]._s_0,(char *)*(FName *)((longlong)pTVar27 + 0x10));
      bVar16 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_318.ComparisonIndex.Value = FVar30.Value;
        local_318.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_318,(wchar_t *)*(FName *)((longlong)pTVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x96f);
        bVar16 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_320.s.LowPart = FVar30.Value;
      local_320.s.HighPart = uVar26;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar17 = true;
      goto LAB_14903104c;
    }
  }
  bVar17 = false;
  FVar28 = local_310;
LAB_14903104c:
  FVar30 = FVar28.ComparisonIndex.Value;
  uVar26 = FVar28.Number;
  if ((((this->bAutoManageAttachment == 0) || (this->_padding_ != 0)) ||
      (pUVar22 = FWeakObjectPtr::Get(&(this->AutoAttachParent).WeakPtr), pUVar22 == (UObject *)0x0))
     || ((this->_padding_ & 0x100000) != 0)) {
    if ((this->bIsCulledByScalability == 0) ||
       (pUVar3 = (this->CullProxy).field0_0x0.DebugPtr, pUVar3 == (UNiagaraCullProxyComponent *)0x0)
       ) {
      if ((this->CurrLocalBounds).IsValid == '\0') {
        if ((this->SystemFixedBounds).IsValid == '\0') {
          pUVar2 = (this->Asset).field0_0x0.DebugPtr;
          if ((pUVar2 == (UNiagaraSystem *)0x0) || (pUVar2->bFixedBounds == 0)) {
            local_200 = ___xmm_3ff00000000000003ff0000000000000;
            dStack_1f8 = _UNK_150689688;
            local_1f0 = ___xmm_3ff00000000000003ff0000000000000;
            dStack_1e8 = _UNK_150689688;
            local_2f0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
            dStack_2e8 = ___xmm_3ff00000000000003ff0000000000000;
            dStack_2e0 = _UNK_150689688;
            dStack_2d8 = ___xmm_3ff00000000000003ff0000000000000;
            dVar34 = _UNK_150689688;
            uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          else {
            UNiagaraSystem::GetFixedBounds(pUVar2,(TBox<double> *)&local_120._s_0);
            iVar20 = _finite(local_120._s_0.X);
            if (((((iVar20 == 0) || (iVar20 = _finite(local_120._s_0.Y), iVar20 == 0)) ||
                 (iVar20 = _finite(local_120._s_0.Z), iVar20 == 0)) ||
                ((iVar20 = _finite(local_108), iVar20 == 0 ||
                 (iVar20 = _finite(local_100), iVar20 == 0)))) ||
               (iVar20 = _finite(local_f8), iVar20 == 0)) {
              local_2b0 = this;
              `UNiagaraComponent::CalcBounds'::__l27::<lambda_3>::operator()(&local_2b0);
            }
            local_108 = local_108 - local_120._s_0.X;
            local_100 = local_100 - local_120._s_0.Y;
            local_f8 = local_f8 - local_120._s_0.Z;
            dStack_2e8 = local_108 * __real_3fe0000000000000;
            dStack_2e0 = local_100 * __real_3fe0000000000000;
            dStack_2d8 = local_f8 * __real_3fe0000000000000;
            local_2f0 = local_120._s_0.Z + dStack_2d8;
            auVar35._8_8_ = 0;
            auVar35._0_8_ =
                 (local_100 * local_100 + local_108 * local_108 + local_f8 * local_f8) *
                 __real_3fd0000000000000;
            auVar35 = sqrtpd(unaff_XMM15,auVar35);
            dVar34 = auVar35._0_8_;
            uVar14 = dStack_2e8 + local_120._s_0.X;
            uVar15 = local_120._s_0.Y + dStack_2e0;
          }
        }
        else {
          bVar19 = UE::Math::TVector<double>::ContainsNaN(&(this->SystemFixedBounds).Min);
          if ((bVar19) ||
             (bVar19 = UE::Math::TVector<double>::ContainsNaN(&(this->SystemFixedBounds).Max),
             bVar19)) {
            local_2b8 = this;
            `UNiagaraComponent::CalcBounds'::__l23::<lambda_2>::operator()(&local_2b8);
          }
          pTVar24 = UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
                              (&local_158,&this->SystemFixedBounds);
          local_2f0 = (pTVar24->Origin).field0_0x0._s_0.Z;
          dStack_2e8 = (pTVar24->BoxExtent).field0_0x0._s_0.X;
          dStack_2e0 = (pTVar24->BoxExtent).field0_0x0._s_0.Y;
          dStack_2d8 = (pTVar24->BoxExtent).field0_0x0._s_0.Z;
          dVar34 = pTVar24->SphereRadius;
          uVar14 = (pTVar24->Origin).field0_0x0._s_0.X;
          uVar15 = (pTVar24->Origin).field0_0x0._s_0.Y;
        }
      }
      else {
        iVar20 = _finite((this->CurrLocalBounds).Min.field0_0x0._s_0.X);
        if ((((iVar20 == 0) ||
             (iVar20 = _finite((this->CurrLocalBounds).Min.field0_0x0._s_0.Y), iVar20 == 0)) ||
            (iVar20 = _finite((this->CurrLocalBounds).Min.field0_0x0._s_0.Z), iVar20 == 0)) ||
           (bVar19 = UE::Math::TVector<double>::ContainsNaN(&(this->CurrLocalBounds).Max), bVar19))
        {
          local_2c0 = this;
          `UNiagaraComponent::CalcBounds'::__l18::<lambda_1>::operator()(&local_2c0);
        }
        pdVar31 = &(this->CurrLocalBounds).Min.field0_0x0._s_0.Y;
        pdVar29 = &(this->CurrLocalBounds).Min.field0_0x0._s_0.Z;
        dVar32 = (this->CurrLocalBounds).Min.field0_0x0._s_0.X;
        dVar12 = (this->CurrLocalBounds).Max.field0_0x0._s_0.Y - *pdVar31;
        dVar10 = (this->CurrLocalBounds).Max.field0_0x0._s_0.X - dVar32;
        dVar8 = (this->CurrLocalBounds).Max.field0_0x0._s_0.Z - *pdVar29;
        dVar34 = (double)*(float *)((longlong)&this->_padding_ + 4);
        dStack_2e8 = dVar10 * __real_3fe0000000000000 * dVar34;
        dStack_2e0 = dVar12 * __real_3fe0000000000000 * dVar34;
        local_2f0 = dVar8 * __real_3fe0000000000000 + *pdVar29;
        dStack_2d8 = dVar8 * __real_3fe0000000000000 * dVar34;
        auVar11._8_8_ = 0;
        auVar11._0_8_ =
             (dVar12 * dVar12 + dVar10 * dVar10 + dVar8 * dVar8) * __real_3fd0000000000000;
        auVar35 = sqrtpd(unaff_XMM15,auVar11);
        dVar34 = auVar35._0_8_ * dVar34;
        uVar14 = dVar10 * __real_3fe0000000000000 + dVar32;
        uVar15 = dVar12 * __real_3fe0000000000000 + *pdVar31;
      }
      UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_1d8);
      dVar10 = (double)CONCAT44((uint)((ulonglong)(local_1d8.M[1][0] * dStack_2e0) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_1d8.M[1][0] * dStack_2e0,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(local_1d8.M[0][0] * dStack_2e8) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_1d8.M[0][0] * dStack_2e8,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(local_1d8.M[2][0] * dStack_2d8) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_1d8.M[2][0] * dStack_2d8,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar12 = (double)CONCAT44((uint)((ulonglong)(local_1d8.M[1][1] * dStack_2e0) >> 0x20) &
                                _UNK_15061cc8c,
                                SUB84(local_1d8.M[1][1] * dStack_2e0,0) & _UNK_15061cc88) +
               (double)CONCAT44((uint)((ulonglong)(local_1d8.M[0][1] * dStack_2e8) >> 0x20) &
                                _UNK_15061cc8c,
                                SUB84(local_1d8.M[0][1] * dStack_2e8,0) & _UNK_15061cc88) +
               (double)CONCAT44((uint)((ulonglong)(local_1d8.M[2][1] * dStack_2d8) >> 0x20) &
                                _UNK_15061cc8c,
                                SUB84(local_1d8.M[2][1] * dStack_2d8,0) & _UNK_15061cc88);
      dVar8 = (double)CONCAT44((uint)((ulonglong)(local_1d8.M[1][2] * dStack_2e0) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_1d8.M[1][2] * dStack_2e0,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
              (double)CONCAT44((uint)((ulonglong)(local_1d8.M[0][2] * dStack_2e8) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_1d8.M[0][2] * dStack_2e8,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
              (double)CONCAT44((uint)((ulonglong)(local_1d8.M[2][2] * dStack_2d8) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_1d8.M[2][2] * dStack_2d8,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      local_1d8.M[3][1] =
           local_1d8.M[1][1] * (double)uVar15 + local_1d8.M[0][1] * (double)uVar14 +
           local_1d8.M[2][1] * local_2f0 + local_1d8.M[3][1];
      auVar33._0_8_ =
           local_1d8.M[1][0] * local_1d8.M[1][0] + local_1d8.M[0][0] * local_1d8.M[0][0] +
           local_1d8.M[2][0] * local_1d8.M[2][0];
      auVar33._8_8_ =
           local_1d8.M[1][1] * local_1d8.M[1][1] + local_1d8.M[0][1] * local_1d8.M[0][1] +
           local_1d8.M[2][1] * local_1d8.M[2][1];
      auVar5._8_4_ = SUB84(auVar33._8_8_,0);
      auVar5._0_8_ = auVar33._8_8_;
      auVar5._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
      auVar35 = maxpd(auVar33,auVar5);
      auVar13._8_4_ = SUB84(dVar12,0);
      auVar13._0_8_ = dVar10;
      auVar13._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      dVar32 = local_1d8.M[1][2] * local_1d8.M[1][2] + local_1d8.M[0][2] * local_1d8.M[0][2] +
               local_1d8.M[2][2] * local_1d8.M[2][2];
      auVar9._8_4_ = SUB84(dVar32,0);
      auVar9._0_8_ = dVar32;
      auVar9._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      auVar35 = maxpd(auVar35,auVar9);
      dVar32 = SQRT(dVar8 * dVar8 + dVar10 * dVar10 + dVar12 * dVar12);
      dVar34 = SQRT(auVar35._0_8_) * dVar34;
      if (dVar34 <= dVar32) {
        dVar32 = dVar34;
      }
      local_238._0_4_ = SUB84(dVar10,0);
      local_238._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar7._8_4_ = SUB84(local_1d8.M[3][1],0);
      auVar7._0_8_ = local_1d8.M[1][0] * (double)uVar15 + local_1d8.M[0][0] * (double)uVar14 +
                     local_1d8.M[2][0] * local_2f0 + local_1d8.M[3][0];
      auVar7._12_4_ = (int)((ulonglong)local_1d8.M[3][1] >> 0x20);
      *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar7;
      auVar6._8_4_ = local_238._0_4_;
      auVar6._0_8_ = local_1d8.M[1][2] * (double)uVar15 + local_1d8.M[0][2] * (double)uVar14 +
                     local_1d8.M[2][2] * local_2f0 + local_1d8.M[3][2];
      auVar6._12_4_ = local_238._4_4_;
      *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar6
      ;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar12;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar8;
      __return_storage_ptr__->SphereRadius = dVar32;
      local_238 = auVar13;
      if (bVar18) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar17) {
        return __return_storage_ptr__;
      }
      if (FVar28 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_280.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
      local_280.NameAndInfo.Index.Value = FVar30.Value;
      QueryPerformanceCounter(&local_2a8);
      local_280.StatData.Pad[4] = '\0';
      local_280.StatData.Pad[5] = '\0';
      local_280.StatData.Pad[6] = '\0';
      local_280.StatData.Pad[7] = '\0';
      local_280.StatData.Pad[0] = local_2a8.s.LowPart._0_1_;
      local_280.StatData.Pad[1] = local_2a8.s.LowPart._1_1_;
      local_280.StatData.Pad[2] = local_2a8.s.LowPart._2_1_;
      local_280.StatData.Pad[3] = local_2a8.s.LowPart._3_1_;
      pFVar25 = &local_280;
    }
    else {
      local_268 = *(double *)&pUVar3->field_0x210;
      dStack_260 = *(double *)&pUVar3->field_0x218;
      local_258 = *(double *)&pUVar3->field_0x220;
      if ((((local_268 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
           (dStack_260 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
          (local_258 !=
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("CullProxy->GetComponentLocation() == FVector::ZeroVector",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                              ,0x97c,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar24 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
        return pTVar24;
      }
      pUVar3 = (this->CullProxy).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar3 + 0x598))(pUVar3,__return_storage_ptr__);
      if (bVar18) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar17) {
        return __return_storage_ptr__;
      }
      if (FVar28 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_290.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
      local_290.NameAndInfo.Index.Value = FVar30.Value;
      QueryPerformanceCounter(&local_2c8);
      local_290.StatData.Pad[4] = '\0';
      local_290.StatData.Pad[5] = '\0';
      local_290.StatData.Pad[6] = '\0';
      local_290.StatData.Pad[7] = '\0';
      local_290.StatData.Pad[0] = local_2c8.s.LowPart._0_1_;
      local_290.StatData.Pad[1] = local_2c8.s.LowPart._1_1_;
      local_290.StatData.Pad[2] = local_2c8.s.LowPart._2_1_;
      local_290.StatData.Pad[3] = local_2c8.s.LowPart._3_1_;
      pFVar25 = &local_290;
    }
  }
  else {
    dVar34 = *(double *)(pUVar22 + 7);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *(double *)&pUVar22[6].field_0x20;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar34;
    dVar34 = *(double *)&pUVar22[7].field_0x10;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = *(double *)&pUVar22[7].field_0x8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar34;
    dVar34 = *(double *)&pUVar22[7].field_0x20;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = *(double *)&pUVar22[7].field_0x18;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar34;
    __return_storage_ptr__->SphereRadius = *(double *)(pUVar22 + 8);
    if (bVar18) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar17) {
      return __return_storage_ptr__;
    }
    if (FVar28 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_2a0.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
    local_2a0.NameAndInfo.Index.Value = FVar30.Value;
    QueryPerformanceCounter(&local_320);
    local_2a0.StatData.Pad[4] = '\0';
    local_2a0.StatData.Pad[5] = '\0';
    local_2a0.StatData.Pad[6] = '\0';
    local_2a0.StatData.Pad[7] = '\0';
    local_2a0.StatData.Pad[0] = local_320.s.LowPart._0_1_;
    local_2a0.StatData.Pad[1] = local_320.s.LowPart._1_1_;
    local_2a0.StatData.Pad[2] = local_320.s.LowPart._2_1_;
    local_2a0.StatData.Pad[3] = local_320.s.LowPart._3_1_;
    pFVar25 = &local_2a0;
  }
  FThreadStats::AddStatMessage(this_00,pFVar25);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// CancelAutoAttachment @ 149031bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::CancelAutoAttachment(UNiagaraComponent *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  undefined4 local_res8 [2];
  TVector<double>_u_0 local_28;
  
  if (this->bAutoManageAttachment == 0) {
    return;
  }
  if (this->bDidAutoAttach != 0) {
    local_28._s_0.X = (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X;
    local_28._s_0.Y = (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y;
    local_28._s_0.Z = (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z;
    USceneComponent::SetRelativeLocation_Direct
              ((USceneComponent *)this,(TVector<double> *)&local_28._s_0);
    local_28._s_0.X = (this->SavedAutoAttachRelativeRotation).Pitch;
    local_28._s_0.Y = (this->SavedAutoAttachRelativeRotation).Yaw;
    local_28._s_0.Z = (this->SavedAutoAttachRelativeRotation).Roll;
    USceneComponent::SetRelativeRotation_Direct
              ((USceneComponent *)this,(TRotator<double> *)&local_28._s_0);
    local_28._s_0.X = (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X;
    local_28._s_0.Y = (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y;
    local_28._s_0.Z = (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z;
    USceneComponent::SetRelativeScale3D_Direct
              ((USceneComponent *)this,(TVector<double> *)&local_28._s_0);
    this->bDidAutoAttach = 0;
  }
  if (param_1) {
    this_00 = (UWorld *)this->_padding_;
    if (((this_00 != (UWorld *)0x0) ||
        (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        this_00 != (UWorld *)0x0)) && (bVar1 = UWorld::IsGameWorld(this_00), !bVar1)) {
      return;
    }
    local_res8[0] = 0;
    (**(code **)(this->_padding_ + 0x518))(this,local_res8);
    return;
  }
  return;
}

// ClearEmitterFixedBounds @ 1490328f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::ClearEmitterFixedBounds(UNiagaraComponent *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  FNiagaraSystemInstanceController *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 uStack_9f;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  TVector<double>_u_0 local_58;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  iVar2 = (this->EmitterOverrideInfos).ArrayNum;
  pFVar6 = (FName *)(this->EmitterOverrideInfos).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 9;
  while( true ) {
    if ((this->EmitterOverrideInfos).ArrayNum != iVar2) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d8);
    }
    if (pFVar6 == pFVar1) goto LAB_149032992;
    if (*pFVar6 == param_1) break;
    pFVar6 = pFVar6 + 9;
  }
  local_a0 = 0;
  pFVar6[2].ComparisonIndex = 0;
  pFVar6[2].Number = 0;
  pFVar6[3].ComparisonIndex = 0;
  pFVar6[3].Number = 0;
  uStack_9f = 0;
  uStack_9b = 0;
  pFVar6[4].ComparisonIndex = 0;
  pFVar6[4].Number = 0;
  pFVar6[5].ComparisonIndex = 0;
  pFVar6[5].Number = 0;
  uStack_99 = 0;
  pFVar6[6].ComparisonIndex = 0;
  pFVar6[6].Number = 0;
  pFVar6[7].ComparisonIndex = 0;
  pFVar6[7].Number = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  pFVar6[8].ComparisonIndex = 0;
  pFVar6[8].Number = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
LAB_149032992:
  pFVar3 = (this->SystemInstanceController).Object;
  if (pFVar3 != (FNiagaraSystemInstanceController *)0x0) {
    local_68 = 0;
    uStack_67 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_63 = 0;
    uStack_61 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    local_58._s_0.X = 0.0;
    local_58._s_0.Y = 0.0;
    local_58._s_0.Z = 0.0;
    uStack_40 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    if ((pFVar3->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587049>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x97,"IsValid()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((pFVar3->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstance::SetEmitterFixedBounds
              ((pFVar3->SystemInstance).Object,param_1,(TBox<double> *)&local_58._s_0);
  }
  return;
}

// ClearSystemFixedBounds @ 149032c10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::ClearSystemFixedBounds(UNiagaraComponent *this)

{
  double dVar1;
  FNiagaraSystemInstanceController *this_00;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Y = (double)uVar4;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = (this->SystemFixedBounds).Max.field0_0x0._s_0.X;
  dVar3 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Y;
  (this->SystemFixedBounds).IsValid = '\0';
  dVar1 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Z;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.X = dVar2;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Y = dVar3;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Z = dVar1;
  this_00 = (this->SystemInstanceController).Object;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    local_48._s_0.X = 0.0;
    local_48._s_0.Y = 0.0;
    local_48._s_0.Z = 0.0;
    uStack_30 = 0;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    FNiagaraSystemInstanceController::SetSystemFixedBounds<UE::Math::TBox<double>_>
              (this_00,(TBox<double> *)&local_48._s_0);
  }
  return;
}

// CollectPSOPrecacheData @ 149032e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::CollectPSOPrecacheData
          (UNiagaraComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FNiagaraSystemInstanceController *pFVar3;
  FNiagaraSystemInstance *pFVar4;
  longlong *plVar5;
  UNiagaraRendererProperties *this_00;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puStack_28;
  int iStack_20;
  
  pFVar3 = (this->SystemInstanceController).Object;
  if (pFVar3 == (FNiagaraSystemInstanceController *)0x0) {
    return;
  }
  pFVar4 = (pFVar3->SystemInstance).Object;
  if (pFVar4 != (FNiagaraSystemInstance *)0x0) {
    iVar2 = (pFVar4->Emitters).ArrayNum;
    pFVar10 = (pFVar4->Emitters).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar12 = pFVar10 + (longlong)iVar2 * 0x10;
    for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 0x10) {
      plVar5 = *(longlong **)pFVar10;
      (**(code **)(*plVar5 + 0x78))(plVar5,&puStack_28);
      puVar11 = puStack_28;
      lVar9 = (longlong)iStack_20;
      if ((iStack_20 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = puVar11 + lVar9;
      for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
        this_00 = (UNiagaraRendererProperties *)*puVar11;
        if (((this_00 != (UNiagaraRendererProperties *)0x0) &&
            (cVar8 = (**(code **)(this_00->_padding_ + 0x318))(this_00), cVar8 != '\0')) &&
           (cVar8 = (**(code **)(this_00->_padding_ + 0x2e8))
                              (this_00,*(undefined1 *)((longlong)plVar5 + 0xd1)), cVar8 != '\0')) {
          UNiagaraRendererProperties::CollectPSOPrecacheData
                    (this_00,*(FNiagaraEmitterInstance **)pFVar10,param_2);
        }
      }
    }
  }
  return;
}

// CopyParametersFromAsset @ 149033d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UNiagaraComponent::CopyParametersFromAsset(UNiagaraComponent *this,bool param_1)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  UNiagaraSystem *pUVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  void *pvVar27;
  bool bVar28;
  uint uVar29;
  FNiagaraTypeDefinition *pFVar30;
  uint *puVar31;
  UClass *pUVar32;
  UClass *pUVar33;
  UNiagaraDataInterface *pUVar34;
  FNiagaraVariableBase *this_01;
  int iVar35;
  FScriptContainerElement **ppFVar36;
  longlong lVar37;
  UScriptStruct *pUVar38;
  UObject *pUVar39;
  UNiagaraDataInterface *this_02;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  ulonglong uVar42;
  FNiagaraParameterStore *this_03;
  bool bVar43;
  UScriptStruct *pUVar44;
  ulonglong uVar45;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  EObjectFlags local_2c8;
  undefined8 local_2c0;
  FNiagaraParameterStore *local_2b8;
  FString local_2b0;
  UObject *local_2a0;
  FName local_298;
  undefined8 local_290;
  undefined4 local_288;
  void *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  void *local_260;
  undefined8 local_258;
  FNiagaraVariable local_250;
  FNiagaraVariable local_230;
  FString local_210;
  undefined1 local_1f8 [40];
  UObject *pUStack_1d0;
  FObjectInstancingGraph *local_1c8;
  UPackage *pUStack_1c0;
  FScriptContainerElement *local_1b8;
  longlong lStack_1b0;
  FScriptContainerElement *local_1a8;
  longlong lStack_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement **ppFStack_190;
  FScriptContainerElement *local_188;
  FOverrides *pFStack_180;
  longlong local_178;
  TMap<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
  TStack_170;
  undefined1 local_118 [136];
  undefined1 auStack_90 [72];
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  pUVar3 = (this->Asset).field0_0x0.DebugPtr;
  bVar43 = false;
  this_03 = (FNiagaraParameterStore *)&pUVar3->ExposedParameters;
  local_2c8 = 0;
  local_2b8 = this_03;
  FNiagaraUserRedirectionParameterStore::FNiagaraUserRedirectionParameterStore
            ((FNiagaraUserRedirectionParameterStore *)local_118);
  this_00 = &this->OverrideParameters;
  local_1f8._0_8_ = local_118._0_8_;
  local_1f8._8_8_ = local_118._8_8_;
  local_1f8._16_8_ = local_118._16_8_;
  local_1f8._24_8_ = local_118._24_8_;
  local_1f8._32_8_ = local_118._32_8_;
  pUStack_1d0 = (UObject *)local_118._40_8_;
  local_1c8 = (FObjectInstancingGraph *)local_118._48_8_;
  pUStack_1c0 = (UPackage *)local_118._56_8_;
  local_1b8 = (FScriptContainerElement *)local_118._64_8_;
  lStack_1b0 = local_118._72_8_;
  local_1a8 = (FScriptContainerElement *)local_118._80_8_;
  lStack_1a0 = local_118._88_8_;
  local_198 = (FScriptContainerElement *)local_118._96_8_;
  ppFStack_190 = (FScriptContainerElement **)local_118._104_8_;
  local_188 = (FScriptContainerElement *)local_118._112_8_;
  pFStack_180 = (FOverrides *)local_118._120_8_;
  local_178 = local_118._128_8_;
  TStack_170._0_8_ = auStack_90._0_8_;
  TStack_170._8_8_ = auStack_90._8_8_;
  TStack_170._16_8_ = auStack_90._16_8_;
  TStack_170._24_8_ = auStack_90._24_8_;
  TStack_170._32_8_ = auStack_90._32_8_;
  TStack_170._40_8_ = auStack_90._40_8_;
  TStack_170._48_8_ = auStack_90._48_8_;
  lVar37 = this_00->_padding_;
  FVar5 = (FWeakObjectPtr)(this->OverrideParameters)._padding_;
  TStack_170._56_8_ = auStack_90._56_8_;
  TStack_170._64_8_ = auStack_90._64_8_;
  TStack_170._72_8_ = local_48;
  pFVar41 = (FScriptContainerElement *)(this->OverrideParameters)._padding_;
  lVar6 = (this->OverrideParameters)._padding_;
  pFVar2 = (FScriptContainerElement *)(this->OverrideParameters)._padding_;
  lVar7 = (this->OverrideParameters)._padding_;
  pFVar8 = (FScriptContainerElement *)(this->OverrideParameters)._padding_;
  lVar9 = (this->OverrideParameters)._padding_;
  pFVar10 = (FScriptContainerElement *)(this->OverrideParameters)._padding_;
  lVar11 = (this->OverrideParameters)._padding_;
  pFVar12 = (FScriptContainerElement *)(this->OverrideParameters)._padding_;
  lVar13 = (this->OverrideParameters)._padding_;
  pFVar14 = (FScriptContainerElement *)(this->OverrideParameters)._padding_;
  lVar15 = (this->OverrideParameters)._padding_;
  pFVar16 = (FScriptContainerElement *)(this->OverrideParameters)._padding_;
  lVar17 = (this->OverrideParameters)._padding_;
  lVar18 = (this->OverrideParameters)._padding_;
  uVar19 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects;
  uVar20 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x8;
  uVar21 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x10;
  uVar22 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x18;
  uVar23 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x20;
  uVar24 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x28;
  uVar25 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x30;
  uVar26 = *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x38;
  pvVar27 = *(void **)&(this->OverrideParameters).UserParameterRedirects.field_0x40;
  uVar45 = *(ulonglong *)&(this->OverrideParameters).UserParameterRedirects.field_0x48;
  this_00->_padding_ = local_118._0_8_;
  (this->OverrideParameters)._padding_ = local_118._8_8_;
  (this->OverrideParameters)._padding_ = local_118._16_8_;
  (this->OverrideParameters)._padding_ = local_118._24_8_;
  (this->OverrideParameters)._padding_ = local_118._32_8_;
  (this->OverrideParameters)._padding_ = local_118._40_8_;
  (this->OverrideParameters)._padding_ = local_118._48_8_;
  (this->OverrideParameters)._padding_ = local_118._56_8_;
  (this->OverrideParameters)._padding_ = local_118._64_8_;
  (this->OverrideParameters)._padding_ = local_118._72_8_;
  (this->OverrideParameters)._padding_ = local_118._80_8_;
  (this->OverrideParameters)._padding_ = local_118._88_8_;
  (this->OverrideParameters)._padding_ = local_118._96_8_;
  (this->OverrideParameters)._padding_ = local_118._104_8_;
  (this->OverrideParameters)._padding_ = local_118._112_8_;
  (this->OverrideParameters)._padding_ = local_118._120_8_;
  (this->OverrideParameters)._padding_ = local_118._128_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects = auStack_90._0_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x8 = auStack_90._8_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x10 = auStack_90._16_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x18 = auStack_90._24_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x20 = auStack_90._32_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x28 = auStack_90._40_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x30 = auStack_90._48_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x38 = auStack_90._56_8_;
  *(undefined8 *)&(this->OverrideParameters).UserParameterRedirects.field_0x40 = auStack_90._64_8_;
  *(ulonglong *)&(this->OverrideParameters).UserParameterRedirects.field_0x48 = local_48;
  local_118._0_8_ = lVar37;
  local_118._8_8_ = FVar5;
  local_118._16_8_ = pFVar41;
  local_118._24_8_ = lVar6;
  local_118._32_8_ = pFVar2;
  local_118._40_8_ = lVar7;
  local_118._48_8_ = pFVar8;
  local_118._56_8_ = lVar9;
  local_118._64_8_ = pFVar10;
  local_118._72_8_ = lVar11;
  local_118._80_8_ = pFVar12;
  local_118._88_8_ = lVar13;
  local_118._96_8_ = pFVar14;
  local_118._104_8_ = lVar15;
  local_118._112_8_ = pFVar16;
  local_118._120_8_ = lVar17;
  local_118._128_8_ = lVar18;
  auStack_90._0_8_ = uVar19;
  auStack_90._8_8_ = uVar20;
  auStack_90._16_8_ = uVar21;
  auStack_90._24_8_ = uVar22;
  auStack_90._32_8_ = uVar23;
  auStack_90._40_8_ = uVar24;
  auStack_90._48_8_ = uVar25;
  auStack_90._56_8_ = uVar26;
  auStack_90._64_8_ = pvVar27;
  local_48 = uVar45;
  FNiagaraParameterStore::operator=((FNiagaraParameterStore *)this_00,this_03);
  TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
               *)&(this->OverrideParameters).UserParameterRedirects,
              (TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
               *)&(pUVar3->ExposedParameters).UserParameterRedirects);
  FNiagaraParameterStore::SetOwner((FNiagaraParameterStore *)this_00,(UObject *)this);
  FNiagaraParameterStore::TransferBindings
            ((FNiagaraParameterStore *)local_118,(FNiagaraParameterStore *)this_00);
  pFVar41 = (FScriptContainerElement *)local_118._16_8_;
  if (!param_1) {
    lVar37 = (longlong)(int)local_118._24_4_;
    if (((int)local_118._24_4_ < 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar28)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (FScriptContainerElement *)((undefined8)pFVar41 + lVar37 * 0x28);
    for (; pFVar41 != pFVar2; pFVar41 = pFVar41 + 0x28) {
      pUVar44 = (UScriptStruct *)0x0;
      local_288 = *(undefined4 *)(pFVar41 + 8);
      local_290 = *(undefined8 *)pFVar41;
      local_280 = (void *)0x0;
      local_278 = 0;
      local_2d8 = 0;
      (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_290,1);
      if (local_280 != (void *)0x0) {
        FMemory::Free(local_280);
      }
      pFVar30 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar41 + 8))
      ;
      bVar28 = FNiagaraTypeDefinition::IsDataInterface(pFVar30);
      if (bVar28) {
        uVar40 = *(uint *)(pFVar41 + 0xc);
        if (-1 < (int)uVar40) {
          if ((int)uVar40 < (int)local_118._56_4_) {
            uVar29 = 0;
            if ((int)uVar40 < (int)local_118._56_4_) {
              uVar29 = ~uVar40 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (local_2d8 = (longlong)(int)uVar40, local_2d0 = (longlong)(int)local_118._56_4_,
               bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar44 = *(UScriptStruct **)(local_118._48_8_ + (longlong)(int)uVar40 * 8);
          }
        }
        local_268 = *(undefined4 *)(pFVar41 + 8);
        local_270 = *(undefined8 *)pFVar41;
        local_260 = (void *)0x0;
        local_258 = 0;
        puVar31 = (uint *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_270,0);
        if (puVar31 != (uint *)0x0) {
          uVar40 = *puVar31;
          if (uVar40 != 0xffffffff) {
            iVar35 = (int)(this->OverrideParameters)._padding_;
            uVar29 = 0;
            if ((int)uVar40 < iVar35) {
              uVar29 = ~uVar40 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (local_2d8 = (longlong)(int)uVar40, local_2d0 = (longlong)iVar35,
               bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar37 = (this->OverrideParameters)._padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar44 != (UScriptStruct *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar44);
            }
            *(UScriptStruct **)(lVar37 + (longlong)(int)uVar40 * 8) = pUVar44;
            plVar1 = &(this->OverrideParameters)._padding_;
            *(uint *)plVar1 = (uint)*plVar1 | 2;
          }
        }
        if (local_260 != (void *)0x0) {
          FMemory::Free(local_260);
        }
      }
      else {
        pFVar30 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pFVar41 + 8));
        pUVar38 = FNiagaraTypeDefinition::IntStruct;
        if ((pFVar30->UnderlyingType != 3) &&
           (pUVar38 = pUVar44, (pFVar30->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0))
        {
          pUVar32 = Z_Construct_UClass_UStruct_NoRegister();
          bVar28 = FObjectPtr::IsA((FObjectPtr *)pFVar30,pUVar32);
          if (bVar28) {
            pUVar38 = (UScriptStruct *)(pFVar30->ClassStructOrEnum).field0_0x0.DebugPtr;
          }
        }
        if (pUVar38 != (UScriptStruct *)0x0) {
          pUVar32 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar32 == (UClass *)0x0) {
LAB_14903424b:
            bVar28 = false;
          }
          else {
            iVar35 = (int)pUVar32->_padding_;
            if (((int)pUVar38->_padding_ < iVar35) ||
               ((longlong *)*(undefined1 **)(pUVar38->_padding_ + (longlong)iVar35 * 8) !=
                &pUVar32->_padding_)) goto LAB_14903424b;
            bVar28 = true;
          }
          if (bVar28) {
            uVar40 = *(uint *)(pFVar41 + 0xc);
            if ((int)uVar40 < 0) {
LAB_1490342d5:
              pUVar39 = (UObject *)0x0;
            }
            else {
              if ((int)local_118._72_4_ <= (int)uVar40) goto LAB_1490342d5;
              uVar29 = 0;
              if ((int)uVar40 < (int)local_118._72_4_) {
                uVar29 = ~uVar40 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (local_2d8 = (longlong)(int)uVar40, local_2d0 = (longlong)(int)local_118._72_4_,
                 bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar28)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pUVar39 = *(UObject **)(local_118._64_8_ + (longlong)(int)uVar40 * 8);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar39 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar39);
              }
            }
            local_250._padding_ = *(longlong *)pFVar41;
            local_250._padding_._0_4_ = *(undefined4 *)(pFVar41 + 8);
            local_250.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_250.VarData.ArrayNum = 0;
            local_250.VarData.ArrayMax = 0;
            local_2a0 = pUVar39;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar39 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar39);
            }
            FNiagaraParameterStore::SetUObject
                      ((FNiagaraParameterStore *)this_00,(TObjectPtr<UObject>)&local_2a0,&local_250)
            ;
            if (local_250.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.VarData.AllocatorInstance.Data);
            }
            goto LAB_149034142;
          }
        }
        local_230._padding_ = *(longlong *)pFVar41;
        local_230._padding_._0_4_ = *(undefined4 *)(pFVar41 + 8);
        local_230.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.VarData.ArrayNum = 0;
        local_230.VarData.ArrayMax = 0;
        FNiagaraParameterStore::CopyParameterData
                  ((FNiagaraParameterStore *)local_118,(FNiagaraParameterStore *)this_00,&local_230)
        ;
        if (local_230.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.VarData.AllocatorInstance.Data);
        }
      }
LAB_149034142:
      this_03 = local_2b8;
    }
  }
  uVar42 = 0;
  local_2c8 = UNiagaraDataInterface::BuildObjectFlagsForOwner((UObject *)this,RF_Transactional);
  iVar35 = (int)*(longlong *)&(this_03->DataInterfaces).ArrayNum;
  uVar45 = uVar42;
  if (0 < iVar35) {
    do {
      uVar40 = (uint)uVar42;
      if (((int)uVar40 < 0) || (iVar35 <= (int)uVar40)) {
        this_02 = (UNiagaraDataInterface *)0x0;
        if (-1 < (int)uVar40) goto LAB_149034379;
LAB_1490343cf:
        pUVar34 = (UNiagaraDataInterface *)0x0;
      }
      else {
        iVar35 = (this_03->DataInterfaces).ArrayNum;
        uVar29 = 0;
        if ((int)uVar40 < iVar35) {
          uVar29 = ~uVar40 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2d8 = (longlong)(int)uVar40;
          local_2d0 = (longlong)iVar35;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_02 = *(UNiagaraDataInterface **)
                   ((this_03->DataInterfaces).AllocatorInstance.Data + uVar45);
LAB_149034379:
        iVar35 = (int)(this->OverrideParameters)._padding_;
        if (iVar35 <= (int)uVar40) goto LAB_1490343cf;
        if ((int)uVar40 < 0) {
          local_2d8 = (longlong)(int)uVar40;
          local_2d0 = (longlong)iVar35;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pUVar34 = *(UNiagaraDataInterface **)(uVar45 + (this->OverrideParameters)._padding_);
      }
      if ((this_02 == (UNiagaraDataInterface *)0x0) || (pUVar34 == (UNiagaraDataInterface *)0x0)) {
        this_01 = FNiagaraParameterStore::FindVariableFromDataInterfaceIndex(this_03,uVar40);
        if (1 < (byte)LogNiagara._0_1_) {
          pUVar3 = (this->Asset).field0_0x0.DebugPtr;
          if (pUVar3 == (UNiagaraSystem *)0x0) {
            ::FString::FString(&local_2b0,L"None");
          }
          else {
            local_298 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_298,&local_2b0);
          }
          if (this_01 != (FNiagaraVariableBase *)0x0) {
            bVar43 = true;
            ::FName::ToString(&this_01->Name,&local_210);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if ((bVar43) &&
             (bVar43 = false,
             local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (this_02 == pUVar34) {
        pUVar32 = (UClass *)this_02->_padding_;
        local_2c0 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar33 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
        CheckIsClassChildOf_Internal(pUVar33,pUVar32);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1f8,pUVar32);
        local_1c8 = (FObjectInstancingGraph *)0x0;
        pUStack_1c0 = (UPackage *)0x0;
        local_1f8._16_4_ = 0;
        local_1f8._20_4_ = 0;
        local_1f8._24_4_ = local_2c8;
        pUStack_1d0 = (UObject *)0x0;
        local_1f8._32_8_ = local_1f8._32_8_ & 0xffffffffffffff00;
        local_1f8._8_8_ = this;
        pUVar34 = (UNiagaraDataInterface *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1f8);
        if (local_1b8 != (FScriptContainerElement *)0x0) {
          ppFVar36 = &local_1a8;
          if (ppFStack_190 != (FScriptContainerElement **)0x0) {
            ppFVar36 = ppFStack_190;
          }
          (**(code **)(*ppFVar36 + 0x10))();
        }
        UNiagaraDataInterface::CopyTo(this_02,pUVar34);
        iVar35 = (int)(this->OverrideParameters)._padding_;
        uVar29 = 0;
        if ((int)uVar40 < iVar35) {
          uVar29 = ~uVar40 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2d8 = (longlong)(int)uVar40;
          local_2d0 = (longlong)iVar35;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar37 = (this->OverrideParameters)._padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar34 != (UNiagaraDataInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar34);
        }
        *(UNiagaraDataInterface **)(lVar37 + uVar45) = pUVar34;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 2;
        this_03 = local_2b8;
      }
      else {
        UNiagaraDataInterface::CopyTo(this_02,pUVar34);
      }
      iVar35 = (int)*(longlong *)&(this_03->DataInterfaces).ArrayNum;
      uVar42 = (ulonglong)(uVar40 + 1);
      uVar45 = uVar45 + 8;
    } while ((int)(uVar40 + 1) < iVar35);
  }
  local_48 = local_48 & 0xffffffff00000000;
  if ((void *)auStack_90._64_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_90._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_90);
  FNiagaraParameterStore::~FNiagaraParameterStore((FNiagaraParameterStore *)local_118);
  return;
}

// CreateCullProxy @ 14903b180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::CreateCullProxy(UNiagaraComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  ENiagaraCullProxyMode EVar3;
  UWorld *pUVar4;
  FNiagaraWorldManager *this_00;
  UNiagaraCullProxyComponent *this_01;
  
  EVar3 = UNiagaraSystem::GetCullProxyMode((this->Asset).field0_0x0.DebugPtr);
  if ((EVar3 != None) &&
     ((this->CullProxy).field0_0x0.DebugPtr == (UNiagaraCullProxyComponent *)0x0)) {
    pUVar4 = (UWorld *)this->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = FNiagaraWorldManager::Get(pUVar4);
    if ((this_00 == (FNiagaraWorldManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorldMan",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                           ,0x8ea,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_01 = FNiagaraWorldManager::GetCullProxy(this_00,this);
    if ((this_01 != (UNiagaraCullProxyComponent *)0x0) &&
       (bVar2 = UNiagaraCullProxyComponent::RegisterCulledComponent(this_01,this,param_1), bVar2)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      (this->CullProxy).field0_0x0.DebugPtr = this_01;
    }
  }
  return;
}

// CreateRenderState_Concurrent @ 14903b7f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::CreateRenderState_Concurrent
          (UNiagaraComponent *this,FRegisterComponentContext *param_1)

{
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  FRegisterComponentContext::SendRenderDynamicData(param_1,(UPrimitiveComponent *)this);
  return;
}

// CreateSceneComponentUtils @ 14903b8a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

INiagaraSceneComponentUtils * __thiscall
UNiagaraComponent::CreateSceneComponentUtils(UNiagaraComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  undefined8 uVar2;
  INiagaraSceneComponentUtils *pIVar3;
  FNiagaraActorSceneComponentUtils *pFVar4;
  longlong *plVar5;
  
  if (*(void **)&this->CreateSceneComponentUtilsFunction != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateSceneComponentUtilsFunction);
    UNRECOVERED_JUMPTABLE = *(code **)&this->CreateSceneComponentUtilsFunction;
    plVar1 = *(longlong **)&(this->CreateSceneComponentUtilsFunction).field_0x28;
    plVar5 = (longlong *)&(this->CreateSceneComponentUtilsFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar2 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014903b8ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar3 = (INiagaraSceneComponentUtils *)(*UNRECOVERED_JUMPTABLE)(uVar2);
    return pIVar3;
  }
  pFVar4 = ::operator_new(0x10);
  if (pFVar4 != (FNiagaraActorSceneComponentUtils *)0x0) {
    pFVar4 = FNiagaraActorSceneComponentUtils::FNiagaraActorSceneComponentUtils(pFVar4,this);
    return (INiagaraSceneComponentUtils *)pFVar4;
  }
  return (INiagaraSceneComponentUtils *)0x0;
}

// CreateSceneProxy @ 14903b920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UNiagaraComponent::CreateSceneProxy(UNiagaraComponent *this)

{
  int *piVar1;
  UNiagaraSystem *pUVar2;
  FStatNameAndInfo FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EPSOPrecacheProxyCreationStrategy EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraCreateSceneProxy> FVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar14;
  FNiagaraSceneProxy *pFVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  LARGE_INTEGER LVar18;
  LARGE_INTEGER LVar19;
  FNiagaraSceneProxy *pFVar20;
  undefined4 local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_158;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_138;
  FNiagaraSceneProxyDesc local_128;
  
  pFVar15 = (FNiagaraSceneProxy *)0x0;
  local_res8[0] = 0;
  FLLMScope::FLLMScope((FLLMScope *)local_res8,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Niagara,true);
  FVar13 = StatPtr_STAT_NiagaraCreateSceneProxy;
  if (StatPtr_STAT_NiagaraCreateSceneProxy ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraCreateSceneProxy>)0x0) {
    pFVar12 = ::FName::FName(&local_res20,"STAT_NiagaraCreateSceneProxy");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraCreateSceneProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCreateSceneProxy,*pFVar12,
                        L"Sceneproxy create (GT)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar19 = *(LARGE_INTEGER *)FVar13;
  bVar6 = false;
  bVar9 = false;
  local_138.s.LowPart = 0;
  local_138.s.HighPart = 0;
  if ((LVar19.s.LowPart == 0) && (LVar19.s.HighPart == 0)) {
LAB_14903baa8:
    bVar7 = false;
    LVar19 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.QuadPart = local_res10.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10 = LVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x9a2);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14903baa8;
    local_res10 = LVar19;
    local_138 = LVar19;
    FThreadStats::AddMessage((FName)LVar19.s,CycleScopeStart);
    bVar7 = true;
  }
  FVar14 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar12 = ::FName::FName(&local_res20,"STAT_NiagaraOverview_GT");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar12,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar18 = *(LARGE_INTEGER *)FVar14;
  bVar4 = false;
  bVar8 = false;
  local_148.s.LowPart = 0;
  local_148.s.HighPart = 0;
  if ((LVar18.s.LowPart == 0) && (LVar18.s.HighPart == 0)) {
LAB_14903bbda:
    bVar5 = false;
    LVar18 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.QuadPart = local_res10.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10 = LVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x9a3);
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14903bbda;
    local_res10 = LVar18;
    local_148 = LVar18;
    FThreadStats::AddMessage((FName)LVar18.s,CycleScopeStart);
    bVar5 = true;
  }
  pUVar2 = (this->Asset).field0_0x0.DebugPtr;
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    if ((this->_padding_ & 1) == 0) {
      UFXSystemComponent::PrecacheAssetPSOs((UFXSystemComponent *)this,(UFXSystemAsset *)pUVar2);
    }
    bVar10 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority
                       ((UPrimitiveComponent *)this,
                        (NiagaraComponentPrivate::GBoostPSOPrecacheHighest != false) + High);
    if ((bVar10) && (EVar11 = GetPSOPrecacheProxyCreationStrategy(), EVar11 != AlwaysCreate)) {
      if (5 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this,(FString *)&local_158,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_158.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_158.StatData.Pad);
        }
      }
      goto LAB_14903bd69;
    }
  }
  local_res10 = (LARGE_INTEGER)::operator_new(0x3a0);
  pFVar20 = pFVar15;
  if ((FName)local_res10.QuadPart != (FName)0x0) {
    FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc
              ((FPrimitiveSceneProxyDesc *)&local_128,(UPrimitiveComponent *)this);
    local_128.SystemAsset = *(UNiagaraSystem **)&(this->Asset).field0_0x0;
    FVar3 = (FStatNameAndInfo)
            (this->SystemInstanceController).SharedReferenceCount.ReferenceController;
    local_128.OcclusionQueryMode = this->OcclusionQueryMode;
    local_128._padding_ = (longlong)&___7FNiagaraSceneProxyDesc__6B_;
    local_128.SystemInstanceController.Object = (this->SystemInstanceController).Object;
    local_128.SystemInstanceController.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar3 != (FStatNameAndInfo)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar3 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar3 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
      UNLOCK();
    }
    local_158.StatData.Pad[0] = '\0';
    local_158.StatData.Pad[1] = '\0';
    local_158.StatData.Pad[2] = '\0';
    local_158.StatData.Pad[3] = '\0';
    local_158.StatData.Pad[4] = '\0';
    local_158.StatData.Pad[5] = '\0';
    local_158.StatData.Pad[6] = '\0';
    local_158.StatData.Pad[7] = '\0';
    local_158.NameAndInfo = FVar3;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_128.SystemInstanceController.SharedReferenceCount,
               (FSharedReferencer<1> *)&local_158.NameAndInfo);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_158.NameAndInfo);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar3);
    pFVar15 = FNiagaraSceneProxy::FNiagaraSceneProxy((FNiagaraSceneProxy *)local_res10,&local_128);
    pFVar20 = (FNiagaraSceneProxy *)&DAT_00000001;
  }
  if (pFVar20 != (FNiagaraSceneProxy *)0x0) {
    local_128._padding_ = (longlong)&___7FNiagaraSceneProxyDesc__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SystemInstanceController.SharedReferenceCount.ReferenceController);
    FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_128);
  }
LAB_14903bd69:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar18.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_158.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(LVar18.s.HighPart,local_148.s.LowPart) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_158.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar16,&local_158);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && ((FName)LVar19.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_158.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(LVar19.s.HighPart,local_138.s.LowPart) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_158.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar16,&local_158);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope((FLLMScope *)local_res8);
  return (FPrimitiveSceneProxy *)pFVar15;
}

// Deactivate @ 14903c5e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::Deactivate(UNiagaraComponent *this)

{
  DeactivateInternal(this,false);
  return;
}

// DeactivateImmediate @ 14903c5f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::DeactivateImmediate(UNiagaraComponent *this)

{
  DeactivateImmediateInternal(this,false);
  return;
}

// DeactivateImmediateInternal @ 14903c600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::DeactivateImmediateInternal(UNiagaraComponent *this,bool param_1)

{
  int *piVar1;
  UNiagaraSystem *this_00;
  FNiagaraSystemInstance *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentDeactivate> FVar7;
  UNiagaraEffectType *pUVar8;
  UWorld *pUVar9;
  FNiagaraSystemInstanceController *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FStatMessage local_38;
  
  FVar7 = StatPtr_STAT_NiagaraComponentDeactivate;
  if (StatPtr_STAT_NiagaraComponentDeactivate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentDeactivate>)0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_NiagaraComponentDeactivate");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentDeactivate>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraComponentDeactivate,*pFVar6
                       ,L"Deactivate (GT)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
LAB_14903c756:
    bVar4 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x64f);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14903c756;
    local_res8.s.LowPart = FVar12.Value;
    local_res8.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar4 = true;
  }
  if (__CsvProfilerStat1616 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1616 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  this_00 = (this->Asset).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraSystem *)0x0) {
    pUVar8 = UNiagaraSystem::GetEffectType(this_00);
    if ((pUVar8 != (UNiagaraEffectType *)0x0) && (pUVar8->CullReaction == DeactivateResumeWithDelta)
       ) {
      if (this->_padding_ == 0) {
        pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        if (pUVar9 == (UWorld *)0x0) goto LAB_14903c857;
      }
      pFVar10 = (this->SystemInstanceController).Object;
      if ((pFVar10 != (FNiagaraSystemInstanceController *)0x0) &&
         ((pFVar10->SystemInstance).Object != (FNiagaraSystemInstance *)0x0)) {
        pFVar2 = (pFVar10->SystemInstance).Object;
        pUVar9 = (UWorld *)this->_padding_;
        if (pUVar9 == (UWorld *)0x0) {
          pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        pFVar2->LastTickTime = pUVar9->TimeSeconds;
        pFVar10 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                            (&this->SystemInstanceController);
        pFVar2 = (pFVar10->SystemInstance).Object;
        pFVar10 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                            (&this->SystemInstanceController);
        pFVar2->LastAge = ((pFVar10->SystemInstance).Object)->Age;
        pFVar10 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                            (&this->SystemInstanceController);
        ((pFVar10->SystemInstance).Object)->bSkipTick = true;
        pFVar10 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                            (&this->SystemInstanceController);
        pFVar2 = (pFVar10->SystemInstance).Object;
        pFVar2->CachedRandomSeed = pFVar2->RandomSeed;
      }
    }
  }
LAB_14903c857:
  UActorComponent::Deactivate((UActorComponent *)this);
  if (param_1) {
    this->bIsCulledByScalability = 1;
  }
  else {
    UnregisterWithScalabilityManager(this);
  }
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  pFVar10 = (this->SystemInstanceController).Object;
  if (pFVar10 != (FNiagaraSystemInstanceController *)0x0) {
    FNiagaraSystemInstanceController::Deactivate<bool>(pFVar10,true);
  }
  if (this->bIsFullyComplete == 0) {
    OnSystemComplete(this,true);
  }
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// DeactivateInternal @ 14903c9b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::DeactivateInternal(UNiagaraComponent *this,bool param_1)

{
  int *piVar1;
  TSharedPtr<FNiagaraSystemInstanceController,1> *this_00;
  undefined4 uVar2;
  UNiagaraSystem *this_01;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ENiagaraCullProxyMode EVar8;
  UWorld *pUVar9;
  FNiagaraWorldManager *this_02;
  UNiagaraCullProxyComponent *this_03;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentDeactivate> FVar11;
  FNiagaraSystemInstanceController *pFVar12;
  FThreadStats *this_04;
  FThreadStatsPool *this_05;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  uint local_res18;
  uint uStackX_1c;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  uVar2 = *(undefined4 *)&this->field_0x6cc;
  if (param_1) {
    *(uint *)&this->field_0x6cc = uVar2 | 0x40;
    this_01 = (this->Asset).field0_0x0.DebugPtr;
    if (((this_01->bNeedsSortedSignificanceCull == 0) &&
        (EVar8 = UNiagaraSystem::GetCullProxyMode(this_01), EVar8 != None)) &&
       ((this->CullProxy).field0_0x0.DebugPtr == (UNiagaraCullProxyComponent *)0x0)) {
      pUVar9 = (UWorld *)this->_padding_;
      if (pUVar9 == (UWorld *)0x0) {
        pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_02 = FNiagaraWorldManager::Get(pUVar9);
      if ((this_02 == (FNiagaraWorldManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorldMan",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                             ,0x8ea,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_03 = FNiagaraWorldManager::GetCullProxy(this_02,this);
      if ((this_03 != (UNiagaraCullProxyComponent *)0x0) &&
         (bVar6 = UNiagaraCullProxyComponent::RegisterCulledComponent(this_03,this,false), bVar6)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_03);
        }
        (this->CullProxy).field0_0x0.DebugPtr = this_03;
      }
    }
  }
  else {
    UnregisterWithScalabilityManager(this);
    this->bDesiredPauseState = 0;
    SetPausedInternal(this,false,false);
  }
  if (((this->_padding_ & 0x100000) == 0) ||
     (this_00 = &this->SystemInstanceController,
     this_00->Object == (FNiagaraSystemInstanceController *)0x0)) {
    UActorComponent::Deactivate((UActorComponent *)this);
    if ((ZPULL(uVar2,6,1) != 0) && (this->bIsCulledByScalability == 0)) {
      OnSystemComplete(this,true);
    }
    UActorComponent::SetActiveFlag((UActorComponent *)this,false);
    return;
  }
  FVar11 = StatPtr_STAT_NiagaraComponentDeactivate;
  if (StatPtr_STAT_NiagaraComponentDeactivate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentDeactivate>)0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_NiagaraComponentDeactivate");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentDeactivate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraComponentDeactivate,
                        *pFVar10,L"Deactivate (GT)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar6 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar14.Value;
        local_res8.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x61b);
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar14.Value;
      uStackX_1c = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_14903cc26;
    }
  }
  bVar4 = false;
  FVar15 = local_60;
LAB_14903cc26:
  if (__CsvProfilerStat1564 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1564 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  if ((this_00->Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = FNiagaraSystemInstanceController::IsSolo<>(this_00->Object);
  if (!bVar7) {
    UActorComponent::Deactivate((UActorComponent *)this);
  }
  if ((this_00->Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = this_00->Object;
  if ((pFVar12->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587054>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x92,"IsValid()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pFVar12->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraSystemInstance::Deactivate((pFVar12->SystemInstance).Object,false);
  if (this_00->Object == (FNiagaraSystemInstanceController *)0x0) {
    bVar7 = false;
  }
  else {
    pFVar12 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
    bVar7 = FNiagaraSystemInstanceController::IsComplete<>(pFVar12);
    bVar7 = !bVar7;
  }
  UActorComponent::SetActiveFlag((UActorComponent *)this,bVar7);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_04 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_04 == (FThreadStats *)0x0) {
      this_05 = FThreadStatsPool::Get();
      this_04 = FThreadStatsPool::GetFromPool(this_05);
    }
    if (this_04->bWaitForExplicitFlush < this_04->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_04,local_50);
      piVar1 = &this_04->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_04,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_04,false,false);
      }
    }
  }
  return;
}

// DestroyCullProxy @ 14903cf40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::DestroyCullProxy(UNiagaraComponent *this)

{
  UNiagaraCullProxyComponent *this_00;
  
  this_00 = (this->CullProxy).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraCullProxyComponent *)0x0) {
    UNiagaraCullProxyComponent::UnregisterCulledComponent(this_00,this);
    (this->CullProxy).field0_0x0.DebugPtr = (UNiagaraCullProxyComponent *)0x0;
  }
  return;
}

// DestroyInstance @ 14903d9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::DestroyInstance(UNiagaraComponent *this)

{
  TSharedPtr<FNiagaraSystemInstanceController,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  UnregisterWithScalabilityManager(this);
  pTVar1 = &this->SystemInstanceController;
  if (pTVar1->Object != (FNiagaraSystemInstanceController *)0x0) {
    FNiagaraSystemInstanceController::Deactivate<bool>(pTVar1->Object,true);
    if (pTVar1->Object != (FNiagaraSystemInstanceController *)0x0) {
      FNiagaraSystemInstanceController::Release(pTVar1->Object);
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FNiagaraSystemInstanceController,1> *)&local_18) {
        pTVar1->Object = (FNiagaraSystemInstanceController *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SystemInstanceController).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DestroyInstanceNotComponent @ 14903da70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::DestroyInstanceNotComponent(UNiagaraComponent *this)

{
  undefined1 uVar1;
  ENCPoolMethod EVar2;
  
  EVar2 = this->PoolingMethod;
  this->bAutoDestroy = 0;
  this->PoolingMethod = None;
  DestroyInstance(this);
  this->PoolingMethod = EVar2;
  *(uint *)&this->field_0x678 = *(uint *)&this->field_0x678 & 0xfffffffe | this->bAutoDestroy;
  return;
}

// DestroyRenderState_Concurrent @ 14903db10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::DestroyRenderState_Concurrent(UNiagaraComponent *this)

{
  FNiagaraSystemRenderData *this_00;
  
  if ((this->_padding_ != 0) &&
     (this_00 = *(FNiagaraSystemRenderData **)(this->_padding_ + 0x2d8),
     this_00 != (FNiagaraSystemRenderData *)0x0)) {
    FNiagaraSystemRenderData::DestroyRenderState_Concurrent(this_00);
  }
  UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  return;
}

// FindEmitterOverrideInfo @ 149041970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FEmitterOverrideInfo * __thiscall
UNiagaraComponent::FindEmitterOverrideInfo(UNiagaraComponent *this,FName param_1)

{
  FEmitterOverrideInfo *pFVar1;
  int iVar2;
  FEmitterOverrideInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->EmitterOverrideInfos).ArrayNum;
  pFVar3 = (FEmitterOverrideInfo *)(this->EmitterOverrideInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->EmitterOverrideInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->EmitterName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FEmitterOverrideInfo *)0x0;
}

// FindEmitterOverrideInfo @ 1490419f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FEmitterOverrideInfo * __thiscall
UNiagaraComponent::FindEmitterOverrideInfo(UNiagaraComponent *this,FName param_1)

{
  FEmitterOverrideInfo *pFVar1;
  int iVar2;
  FEmitterOverrideInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->EmitterOverrideInfos).ArrayNum;
  pFVar3 = (FEmitterOverrideInfo *)(this->EmitterOverrideInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->EmitterOverrideInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->EmitterName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FEmitterOverrideInfo *)0x0;
}

// FindOrAddEmitterOverrideInfo @ 149041db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FEmitterOverrideInfo * __thiscall
UNiagaraComponent::FindOrAddEmitterOverrideInfo(UNiagaraComponent *this,FName param_1)

{
  int *piVar1;
  TArray<UNiagaraComponent::FEmitterOverrideInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FEmitterOverrideInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  longlong lVar6;
  FEmitterOverrideInfo *pFVar7;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->EmitterOverrideInfos;
  iVar5 = (this->EmitterOverrideInfos).ArrayNum;
  pFVar7 = (FEmitterOverrideInfo *)(pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar7 + iVar5;
  while( true ) {
    if ((this->EmitterOverrideInfos).ArrayNum != iVar5) {
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    if (pFVar7->EmitterName == param_1) {
      return pFVar7;
    }
    pFVar7 = pFVar7 + 1;
  }
  iVar5 = (this->EmitterOverrideInfos).ArrayNum;
  piVar1 = &(this->EmitterOverrideInfos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar6 = (longlong)iVar5;
  (this->EmitterOverrideInfos).ArrayNum = iVar5 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar4 + lVar6 * 0x48) = param_1;
  pFVar4[lVar6 * 0x48 + 8] = (FScriptContainerElement)0x1;
  pFVar3 = (FEmitterOverrideInfo *)(pFVar4 + lVar6 * 0x48);
  (pFVar3->FixedBounds).Min.field0_0x0._s_0.X = 0.0;
  (pFVar3->FixedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (pFVar3->FixedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (pFVar3->FixedBounds).Max.field0_0x0._s_0.X = 0.0;
  (pFVar3->FixedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (pFVar3->FixedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (pFVar3->FixedBounds).IsValid = '\0';
  (pFVar3->FixedBounds).Pad[0] = '\0';
  (pFVar3->FixedBounds).Pad[1] = '\0';
  (pFVar3->FixedBounds).Pad[2] = '\0';
  (pFVar3->FixedBounds).Pad[3] = '\0';
  (pFVar3->FixedBounds).Pad[4] = '\0';
  (pFVar3->FixedBounds).Pad[5] = '\0';
  (pFVar3->FixedBounds).Pad[6] = '\0';
  return pFVar3;
}

// GetAgeUpdateMode @ 1490430e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ENiagaraAgeUpdateMode __thiscall UNiagaraComponent::GetAgeUpdateMode(UNiagaraComponent *this)

{
  return this->AgeUpdateMode;
}

// GetAllowScalability @ 149043130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::GetAllowScalability(UNiagaraComponent *this)

{
  return this->bAllowScalability;
}

// GetApproxMemoryUsage @ 149043150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

uint __thiscall UNiagaraComponent::GetApproxMemoryUsage(UNiagaraComponent *this)

{
  uint uVar1;
  FNiagaraSystemInstanceController *this_00;
  ulong64 uVar2;
  
  this_00 = (this->SystemInstanceController).Object;
  uVar1 = *(int *)((longlong)&(this->OverrideParameters)._padding_ + 4) +
          ((*(int *)((longlong)&(this->OverrideParameters)._padding_ + 4) + 0x27) * 7 +
           *(int *)((longlong)&(this->OverrideParameters)._padding_ + 4) * 4 +
           *(int *)((longlong)&(this->OverrideParameters)._padding_ + 4) * 5 +
           *(int *)((longlong)&(this->OverrideParameters)._padding_ + 4) +
           *(int *)((longlong)&(this->OverrideParameters)._padding_ + 4) +
          *(int *)((longlong)&(this->OverrideParameters)._padding_ + 4)) * 8;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    uVar2 = FNiagaraSystemInstanceController::GetTotalBytesUsed(this_00);
    return (int)uVar2 + uVar1;
  }
  return uVar1;
}

// GetDataInterface @ 149045a40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataInterface * __thiscall
UNiagaraComponent::GetDataInterface(UNiagaraComponent *this,FString *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UNiagaraDataInterface *pUVar4;
  wchar_t *pwVar5;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(local_res10,pwVar5);
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
  pUVar4 = UNiagaraFunctionLibrary::GetDataInterface(pUVar3,this,FVar1);
  return pUVar4;
}

// GetDesiredAge @ 149045c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

float __thiscall UNiagaraComponent::GetDesiredAge(UNiagaraComponent *this)

{
  return this->DesiredAge;
}

// GetEmitterFixedBounds @ 149046450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TBox<double> * __thiscall
UNiagaraComponent::GetEmitterFixedBounds
          (UNiagaraComponent *this,TBox<double> *__return_storage_ptr__,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->EmitterOverrideInfos).ArrayNum;
  pFVar4 = (FName *)(this->EmitterOverrideInfos).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 9;
  while( true ) {
    if ((this->EmitterOverrideInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*pFVar4 == param_1) {
      FVar3 = pFVar4[3];
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)pFVar4[2];
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)FVar3;
      FVar3 = pFVar4[5];
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)pFVar4[4];
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)FVar3;
      FVar3 = pFVar4[7];
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)pFVar4[6];
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)FVar3;
      *(FName *)&__return_storage_ptr__->IsValid = pFVar4[8];
      return __return_storage_ptr__;
    }
    pFVar4 = pFVar4 + 9;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetExecutionState @ 1490466b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ENiagaraExecutionState __thiscall UNiagaraComponent::GetExecutionState(UNiagaraComponent *this)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  bool bVar3;
  ENiagaraExecutionState EVar4;
  
  pFVar1 = (this->SystemInstanceController).Object;
  if (pFVar1 == (FNiagaraSystemInstanceController *)0x0) {
    return Complete;
  }
  if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587078>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x7a,"IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return ((pFVar1->SystemInstance).Object)->ActualExecutionState;
}

// GetFNameForStatID @ 149046870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FName __thiscall UNiagaraComponent::GetFNameForStatID(UNiagaraComponent *this)

{
  UNiagaraSystem *pUVar1;
  undefined8 *puVar2;
  FName FVar3;
  FName in_RDX;
  undefined1 local_res8 [32];
  
  pUVar1 = (this->Asset).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraSystem *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x18))(pUVar1,local_res8);
    *(undefined8 *)in_RDX = *puVar2;
    return in_RDX;
  }
  FVar3 = UObjectBase::GetFNameForStatID((UObjectBase *)this);
  *(undefined8 *)in_RDX = *(undefined8 *)FVar3;
  return in_RDX;
}

// GetFXSystemAsset @ 149046cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UFXSystemAsset * __thiscall UNiagaraComponent::GetFXSystemAsset(UNiagaraComponent *this)

{
  return (UFXSystemAsset *)(this->Asset).field0_0x0.DebugPtr;
}

// GetForceLocalPlayerEffect @ 149046d00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::GetForceLocalPlayerEffect(UNiagaraComponent *this)

{
  return this->bForceLocalPlayerEffect;
}

// GetLockDesiredAgeDeltaTimeToSeekDelta @ 149047000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta(UNiagaraComponent *this)

{
  return this->bLockDesiredAgeDeltaTimeToSeekDelta;
}

// GetMaxSimTime @ 149047020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

float __thiscall UNiagaraComponent::GetMaxSimTime(UNiagaraComponent *this)

{
  return this->MaxSimTime;
}

// GetNumMaterials @ 149047070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __thiscall UNiagaraComponent::GetNumMaterials(UNiagaraComponent *this)

{
  return 0;
}

// GetPerfStatsContext @ 149047aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FParticlePerfStatsContext * __thiscall
UNiagaraComponent::GetPerfStatsContext
          (UNiagaraComponent *this,FParticlePerfStatsContext *__return_storage_ptr__)

{
  UNiagaraSystem *pUVar1;
  UWorld *pUVar2;
  FParticlePerfStats *pFVar3;
  FParticlePerfStats *pFVar4;
  
  pUVar1 = (this->Asset).field0_0x0.DebugPtr;
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    __return_storage_ptr__->WorldStats = (FParticlePerfStats *)0x0;
    __return_storage_ptr__->SystemStats = (FParticlePerfStats *)0x0;
    __return_storage_ptr__->ComponentStats = (FParticlePerfStats *)0x0;
    if (pUVar2 != (UWorld *)0x0) goto LAB_149047af9;
  }
  else {
    __return_storage_ptr__->WorldStats = (FParticlePerfStats *)0x0;
    __return_storage_ptr__->SystemStats = (FParticlePerfStats *)0x0;
    __return_storage_ptr__->ComponentStats = (FParticlePerfStats *)0x0;
LAB_149047af9:
    if ((0 < (int)FParticlePerfStats::WorldStatsReaders) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pFVar3 = FParticlePerfStats::GetWorldPerfStats(pUVar2);
      goto LAB_149047b18;
    }
  }
  pFVar3 = (FParticlePerfStats *)0x0;
LAB_149047b18:
  pFVar4 = (FParticlePerfStats *)0x0;
  __return_storage_ptr__->WorldStats = pFVar3;
  if (((pUVar1 != (UNiagaraSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar4 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar1);
  }
  __return_storage_ptr__->SystemStats = pFVar4;
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar3 = FParticlePerfStats::GetComponentPerfStats((UFXSystemComponent *)this);
    __return_storage_ptr__->ComponentStats = pFVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ComponentStats = (FParticlePerfStats *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149048230

UClass * __cdecl UNiagaraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraComponent",
               &Z_Registration_Info_UClass_UNiagaraComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraComponent,0x800,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraComponent>,
               InternalVTableHelperCtorCaller<UNiagaraComponent>,local_res8,
               UFXSystemComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraComponent.InnerSingleton;
}

// GetRenderingEnabled @ 1490487b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::GetRenderingEnabled(UNiagaraComponent *this)

{
  return this->bRenderingEnabled;
}

// GetRequestedExecutionState @ 1490487d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ENiagaraExecutionState __thiscall
UNiagaraComponent::GetRequestedExecutionState(UNiagaraComponent *this)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  bool bVar3;
  ENiagaraExecutionState EVar4;
  
  pFVar1 = (this->SystemInstanceController).Object;
  if (pFVar1 == (FNiagaraSystemInstanceController *)0x0) {
    return Complete;
  }
  if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587079>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x79,"IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return ((pFVar1->SystemInstance).Object)->RequestedExecutionState;
}

// GetResourceSizeEx @ 1490487f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::GetResourceSizeEx(UNiagaraComponent *this,FResourceSizeEx *param_1)

{
  FNiagaraSystemInstanceController *this_00;
  ulong64 uVar1;
  
  UPrimitiveComponent::GetResourceSizeEx((UPrimitiveComponent *)this,param_1);
  this_00 = (this->SystemInstanceController).Object;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    uVar1 = FNiagaraSystemInstanceController::GetTotalBytesUsed(this_00);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar1);
  }
  return;
}

// GetSeekDelta @ 149049440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

float __thiscall UNiagaraComponent::GetSeekDelta(UNiagaraComponent *this)

{
  return this->SeekDelta;
}

// GetSimCache @ 149049450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraSimCache * __thiscall UNiagaraComponent::GetSimCache(UNiagaraComponent *this)

{
  return (this->SimCache).field0_0x0.DebugPtr;
}

// GetStreamingRenderAssetInfo @ 149049560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::GetStreamingRenderAssetInfo
          (UNiagaraComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  FNiagaraSystemInstanceController *this_00;
  UNiagaraSystem *pUVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TMatrix<double> *pTVar5;
  TBoxSphereBounds<double,double> *pTVar6;
  ForElementType<FNiagaraMaterialAndScale> FVar7;
  ulonglong uVar8;
  ForElementType<FNiagaraMaterialAndScale> FVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStackY_3b8 [32];
  undefined1 local_378 [8];
  TVector<double>_u_0 local_370;
  double dStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  FPrimitiveMaterialInfo local_338;
  TVector<double>_u_0 local_320;
  double local_308;
  double local_300;
  double local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8;
  uint7 uStack_2b7;
  TBoxSphereBounds<double,double> local_2b0;
  TVector<double>_u_0 local_278;
  double local_260;
  double local_258;
  double local_250;
  TVector<double>_u_0 local_240;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  longlong local_210;
  TArray<FNiagaraMaterialAndScale,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_208;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this_00 = (this->SystemInstanceController).Object;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    local_208.ArrayMax = 0x10;
    local_208.AllocatorInstance.SecondaryData = (ForElementType<FNiagaraMaterialAndScale>)0x0;
    local_208.ArrayNum = 0;
    FNiagaraSystemInstanceController::GetMaterialStreamingInfo(this_00,&local_208);
    FStreamingTextureLevelContext::BindBuildData
              (param_1,(TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0);
    local_370._s_0.X = (double)this->_padding_;
    local_370._s_0.Y = (double)this->_padding_;
    pUVar1 = (this->Asset).field0_0x0.DebugPtr;
    local_370._s_0.Z = (double)this->_padding_;
    dStack_358 = (double)this->_padding_;
    local_350 = (double)this->_padding_;
    dStack_348 = (double)this->_padding_;
    local_340 = (double)this->_padding_;
    if (pUVar1 != (UNiagaraSystem *)0x0) {
      if (pUVar1->bUseInitialStreamingBounds == false) {
        local_2b8 = 0;
        local_2f0 = (ulonglong)uStack_2b7 << 8;
      }
      else {
        local_2e8 = *(undefined4 *)&(pUVar1->InitialStreamingBounds).Min.field0_0x0;
        uStack_2e4 = *(undefined4 *)((longlong)&(pUVar1->InitialStreamingBounds).Min.field0_0x0 + 4)
        ;
        uStack_2e0 = *(undefined4 *)((longlong)&(pUVar1->InitialStreamingBounds).Min.field0_0x0 + 8)
        ;
        uStack_2dc = *(undefined4 *)
                      ((longlong)&(pUVar1->InitialStreamingBounds).Min.field0_0x0 + 0xc);
        local_2d8 = *(undefined4 *)
                     ((longlong)&(pUVar1->InitialStreamingBounds).Min.field0_0x0 + 0x10);
        uStack_2d4 = *(undefined4 *)
                      ((longlong)&(pUVar1->InitialStreamingBounds).Min.field0_0x0 + 0x14);
        uStack_2d0 = *(undefined4 *)&(pUVar1->InitialStreamingBounds).Max.field0_0x0;
        uStack_2cc = *(undefined4 *)((longlong)&(pUVar1->InitialStreamingBounds).Max.field0_0x0 + 4)
        ;
        local_2c8 = *(undefined4 *)((longlong)&(pUVar1->InitialStreamingBounds).Max.field0_0x0 + 8);
        uStack_2c4 = *(undefined4 *)
                      ((longlong)&(pUVar1->InitialStreamingBounds).Max.field0_0x0 + 0xc);
        uStack_2c0 = *(undefined4 *)
                      ((longlong)&(pUVar1->InitialStreamingBounds).Max.field0_0x0 + 0x10);
        uStack_2bc = *(undefined4 *)
                      ((longlong)&(pUVar1->InitialStreamingBounds).Max.field0_0x0 + 0x14);
        local_2f0._0_1_ = (pUVar1->InitialStreamingBounds).IsValid;
        local_2f0._1_1_ = (pUVar1->InitialStreamingBounds).Pad[0];
        local_2f0._2_1_ = (pUVar1->InitialStreamingBounds).Pad[1];
        local_2f0._3_1_ = (pUVar1->InitialStreamingBounds).Pad[2];
        local_2f0._4_1_ = (pUVar1->InitialStreamingBounds).Pad[3];
        local_2f0._5_1_ = (pUVar1->InitialStreamingBounds).Pad[4];
        local_2f0._6_1_ = (pUVar1->InitialStreamingBounds).Pad[5];
        local_2f0._7_1_ = (pUVar1->InitialStreamingBounds).Pad[6];
      }
      local_240._0_4_ = local_2e8;
      local_240._4_4_ = uStack_2e4;
      local_240._8_4_ = uStack_2e0;
      local_240._12_4_ = uStack_2dc;
      local_240._16_4_ = local_2d8;
      local_240._20_4_ = uStack_2d4;
      uStack_228 = uStack_2d0;
      uStack_224 = uStack_2cc;
      local_220 = local_2c8;
      uStack_21c = uStack_2c4;
      uStack_218 = uStack_2c0;
      uStack_214 = uStack_2bc;
      local_210 = local_2f0;
      if ((char)local_2f0 != '\0') {
        pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale
                           ((TTransform<double> *)&this->_padding_,&local_f8);
        UE::Math::TBox<double>::TransformBy
                  ((TBox<double> *)&local_240._s_0,(TBox<double> *)&local_278._s_0,pTVar5);
        local_260 = local_260 - local_278._s_0.X;
        local_258 = local_258 - local_278._s_0.Y;
        local_250 = local_250 - local_278._s_0.Z;
        local_308 = local_260 * __real_3fe0000000000000;
        local_300 = local_258 * __real_3fe0000000000000;
        local_2f8 = local_250 * __real_3fe0000000000000;
        local_320._s_0.X = local_308 + local_278._s_0.X;
        local_320._s_0.Y = local_300 + local_278._s_0.Y;
        auVar11._0_8_ = local_2f8 + local_278._s_0.Z;
        auVar11._8_8_ = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ =
             (local_260 * local_260 + local_258 * local_258 + local_250 * local_250) *
             __real_3fd0000000000000;
        auVar12 = sqrtpd(auVar11,auVar12);
        local_2f0 = auVar12._0_8_;
        local_320._s_0.Z = auVar11._0_8_;
        pTVar6 = UE::Math::TBoxSphereBounds<double,double>::operator+
                           ((TBoxSphereBounds<double,double> *)&local_370._s_0,&local_2b0,
                            (TBoxSphereBounds<double,double> *)&local_320._s_0);
        local_370._s_0.X = (pTVar6->Origin).field0_0x0._s_0.X;
        local_370._s_0.Y = (pTVar6->Origin).field0_0x0._s_0.Y;
        local_370._s_0.Z = (pTVar6->Origin).field0_0x0._s_0.Z;
        dStack_358 = (pTVar6->BoxExtent).field0_0x0._s_0.X;
        local_350 = (pTVar6->BoxExtent).field0_0x0._s_0.Y;
        dStack_348 = (pTVar6->BoxExtent).field0_0x0._s_0.Z;
        local_340 = pTVar6->SphereRadius;
      }
    }
    iVar3 = local_208.ArrayNum;
    uVar8 = (ulonglong)local_208.ArrayNum;
    if (0 < local_208.ArrayNum) {
      local_338.UVChannelData = &UVChannelData;
      local_338.Material = (UMaterialInterface *)0x0;
      FVar7 = (ForElementType<FNiagaraMaterialAndScale>)&local_208;
      if (local_208.AllocatorInstance.SecondaryData != (ForElementType<FNiagaraMaterialAndScale>)0x0
         ) {
        FVar7 = local_208.AllocatorInstance.SecondaryData;
      }
      local_338.PackedRelativeBox = 0xffff0000;
      FVar9 = (ForElementType<FNiagaraMaterialAndScale>)&local_208;
      if (local_208.AllocatorInstance.SecondaryData != (ForElementType<FNiagaraMaterialAndScale>)0x0
         ) {
        FVar9 = local_208.AllocatorInstance.SecondaryData;
      }
      lVar10 = uVar8 * 0x10;
      while( true ) {
        if ((uint)uVar8 != iVar3) {
          local_378[0] = 0;
          `TCheckedPointerIterator<FNiagaraMaterialAndScale,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_378);
        }
        if (FVar9 == (ForElementType<FNiagaraMaterialAndScale>)(lVar10 + (longlong)FVar7)) break;
        if ((*(longlong *)FVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaterialAndScale.Material != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                               ,0x9f0,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_338.Material = *(UMaterialInterface **)FVar9;
        FStreamingTextureLevelContext::ProcessMaterial
                  (param_1,(TBoxSphereBounds<double,double> *)&local_370._s_0,&local_338,
                   (float)((double)*(float *)((longlong)FVar9 + 8) * local_340),param_2,
                   (bool)(*(byte *)((longlong)&this->_padding_ + 2) >> 2 & 1),
                   (UPrimitiveComponent *)this);
        uVar8 = (ulonglong)(uint)local_208.ArrayNum;
        FVar9 = (ForElementType<FNiagaraMaterialAndScale>)((longlong)FVar9 + 0x10);
      }
    }
    if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FNiagaraSystemInstanceController::GetStreamingMeshInfo
              ((this->SystemInstanceController).Object,
               (TBoxSphereBounds<double,double> *)&local_370._s_0,param_1,param_2);
    if (local_208.AllocatorInstance.SecondaryData != (ForElementType<FNiagaraMaterialAndScale>)0x0)
    {
      FMemory::Free((void *)local_208.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetSystemFixedBounds @ 149049b80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TBox<double> * __thiscall
UNiagaraComponent::GetSystemFixedBounds
          (UNiagaraComponent *this,TBox<double> *__return_storage_ptr__)

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
  
  dVar1 = (this->SystemFixedBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->SystemFixedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->SystemFixedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->SystemFixedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->SystemFixedBounds).IsValid;
  uVar6 = (this->SystemFixedBounds).Pad[0];
  uVar7 = (this->SystemFixedBounds).Pad[1];
  uVar8 = (this->SystemFixedBounds).Pad[2];
  uVar9 = (this->SystemFixedBounds).Pad[3];
  uVar10 = (this->SystemFixedBounds).Pad[4];
  uVar11 = (this->SystemFixedBounds).Pad[5];
  uVar12 = (this->SystemFixedBounds).Pad[6];
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

// GetSystemInstance @ 149049bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraSystemInstance * __thiscall UNiagaraComponent::GetSystemInstance(UNiagaraComponent *this)

{
  FNiagaraSystemInstanceController *pFVar1;
  
  pFVar1 = (this->SystemInstanceController).Object;
  if (pFVar1 != (FNiagaraSystemInstanceController *)0x0) {
    return (pFVar1->SystemInstance).Object;
  }
  return (FNiagaraSystemInstance *)0x0;
}

// GetSystemSimulation @ 149049be0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TSharedPtr<FNiagaraSystemSimulation,1> * __thiscall
UNiagaraComponent::GetSystemSimulation
          (UNiagaraComponent *this,TSharedPtr<FNiagaraSystemSimulation,1> *__return_storage_ptr__)

{
  FNiagaraSystemInstanceController *pFVar1;
  FNiagaraSystemInstance *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FNiagaraSystemSimulation,1> *pTVar6;
  
  pFVar1 = (this->SystemInstanceController).Object;
  if (pFVar1 == (FNiagaraSystemInstanceController *)0x0) {
    __return_storage_ptr__->Object = (FNiagaraSystemSimulation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FNiagaraSystemSimulation,1> *)(*pcVar4)();
        return pTVar6;
      }
    }
    pFVar2 = (pFVar1->SystemInstance).Object;
    __return_storage_ptr__->Object = (pFVar2->SystemSimulation).Object;
    pTVar3 = (pFVar2->SystemSimulation).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetUsedMaterials @ 14904aae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::GetUsedMaterials
          (UNiagaraComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1
          ,bool param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UNiagaraCullProxyComponent *pUVar3;
  FNiagaraSystemInstanceController *pFVar4;
  FNiagaraSystemInstance *pFVar5;
  longlong *plVar6;
  UNiagaraRendererProperties *pUVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  undefined7 in_register_00000081;
  FScriptContainerElement *pFVar14;
  undefined8 *puStack_58;
  int iStack_50;
  FScriptContainerElement *pFStack_48;
  FNiagaraSystemInstanceController *pFStack_40;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTStack_38;
  
  pUVar3 = (this->CullProxy).field0_0x0.DebugPtr;
  if (pUVar3 != (UNiagaraCullProxyComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014904aaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar3 + 0x7f0))
              (pUVar3,param_1,CONCAT71(in_register_00000081,param_2));
    return;
  }
  pFVar4 = (this->SystemInstanceController).Object;
  if (pFVar4 != (FNiagaraSystemInstanceController *)0x0) {
    pFVar5 = (pFVar4->SystemInstance).Object;
    if (pFVar5 != (FNiagaraSystemInstance *)0x0) {
      iVar2 = (pFVar5->Emitters).ArrayNum;
      pFVar14 = (pFVar5->Emitters).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar12 = pFVar14 + (longlong)iVar2 * 0x10;
      for (; pFVar14 != pFVar12; pFVar14 = pFVar14 + 0x10) {
        plVar6 = *(longlong **)pFVar14;
        pFStack_48 = pFVar14;
        pFStack_40 = pFVar4;
        pTStack_38 = param_1;
        (**(code **)(*plVar6 + 0x78))(plVar6,&puStack_58);
        puVar13 = puStack_58;
        lVar11 = (longlong)iStack_50;
        if ((iStack_50 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar1 = puVar13 + lVar11;
        for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
          pUVar7 = (UNiagaraRendererProperties *)*puVar13;
          if (((pUVar7 != (UNiagaraRendererProperties *)0x0) &&
              (cVar10 = (**(code **)(pUVar7->_padding_ + 0x318))(pUVar7), cVar10 != '\0')) &&
             (cVar10 = (**(code **)(pUVar7->_padding_ + 0x2e8))
                                 (pUVar7,*(undefined1 *)((longlong)plVar6 + 0xd1)), cVar10 != '\0'))
          {
            `FNiagaraSystemInstanceController::GetUsedMaterials'::__l9::<lambda_1>::operator()
                      (&pFStack_48,pUVar7);
          }
        }
      }
    }
    return;
  }
  return;
}

// GetVariableBool @ 14904ab50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraComponent::GetVariableBool(UNiagaraComponent *this,FName param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_00;
  int *piVar5;
  FName local_18;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  local_18 = param_1;
  local_10[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::BoolDef);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_10);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar4 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  piVar5 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                            (&this->OverrideParameters,&local_18,0);
  if (piVar5 != (int *)0x0) {
    iVar4 = *piVar5;
    if (iVar4 != -1) {
      if ((iVar4 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < (longlong)iVar4 + 4U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      iVar4 = *(int *)((longlong)iVar4 + (this->OverrideParameters)._padding_);
      *param_2 = true;
      return iVar4 != 0;
    }
  }
  *param_2 = false;
  return false;
}

// GetVariableColor @ 14904ac60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FLinearColor * __thiscall
UNiagaraComponent::GetVariableColor
          (UNiagaraComponent *this,FLinearColor *__return_storage_ptr__,FName param_1,bool *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_00;
  FLinearColor *pFVar6;
  int *piVar7;
  FName local_38;
  FNiagaraTypeDefinitionHandle local_30 [2];
  FLinearColor_u_0 local_28;
  undefined1 local_18;
  
  local_38 = param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::ColorDef);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_30);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_18 = 0;
  piVar7 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                            (&this->OverrideParameters,&local_38,0);
  bVar4 = false;
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    if (iVar5 != -1) {
      if ((iVar5 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < (longlong)iVar5 + 0x10U))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FLinearColor *)(*pcVar2)();
          return pFVar6;
        }
      }
      bVar4 = true;
      local_18 = 1;
      puVar1 = (undefined8 *)((this->OverrideParameters)._padding_ + (longlong)iVar5);
      local_28._0_8_ = *puVar1;
      local_28._8_8_ = puVar1[1];
    }
  }
  *param_2 = bVar4;
  pFVar6 = (FLinearColor *)&local_28;
  if (bVar4 == false) {
    pFVar6 = &FLinearColor::White;
  }
  uVar3 = *(undefined8 *)&((FLinearColor_u_0_s_0 *)pFVar6)->B;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&((FLinearColor_u_0_s_0 *)pFVar6)->R;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// GetVariableFloat @ 14904ad90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

float __thiscall
UNiagaraComponent::GetVariableFloat(UNiagaraComponent *this,FName param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  int *piVar4;
  float fVar5;
  FName local_18;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  local_18 = param_1;
  local_10[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_10);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  piVar4 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                            (&this->OverrideParameters,&local_18,0);
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
    if (iVar3 != -1) {
      if ((iVar3 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < (longlong)iVar3 + 4U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar5 = (float)(*pcVar1)();
          return fVar5;
        }
      }
      fVar5 = *(float *)((longlong)iVar3 + (this->OverrideParameters)._padding_);
      *param_2 = true;
      return fVar5;
    }
  }
  *param_2 = false;
  return 0.0;
}

// GetVariableInt @ 14904aea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __thiscall
UNiagaraComponent::GetVariableInt(UNiagaraComponent *this,FName param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  int *piVar4;
  FName local_18;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  local_18 = param_1;
  local_10[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::IntDef);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_10);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  piVar4 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                            (&this->OverrideParameters,&local_18,0);
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
    if (iVar3 != -1) {
      if ((iVar3 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < (longlong)iVar3 + 4U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      iVar3 = *(int *)((longlong)iVar3 + (this->OverrideParameters)._padding_);
      *param_2 = true;
      return iVar3;
    }
  }
  *param_2 = false;
  return 0;
}

// GetVariableMatrix @ 14904afb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TMatrix<double> * __thiscall
UNiagaraComponent::GetVariableMatrix
          (UNiagaraComponent *this,TMatrix<double> *__return_storage_ptr__,FName param_1,
          bool *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  int iVar26;
  FNiagaraTypeDefinition *this_00;
  TMatrix<double> *pTVar27;
  int *piVar28;
  longlong lVar29;
  float (*pafVar30) [4];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  FName local_78;
  FNiagaraTypeDefinitionHandle local_70 [6];
  float local_58 [2];
  float afStack_50 [2];
  float local_48 [2];
  float afStack_40 [2];
  float local_38 [2];
  float afStack_30 [2];
  undefined1 local_28;
  
  local_78 = param_1;
  local_70[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_70,&FNiagaraTypeDefinition::Matrix4Def);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_70);
  iVar26 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar26 != 0x40) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("Parameter.GetSizeInBytes() == sizeof(T)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                        ,0x1a1,L"");
    if (bVar25) {
      pcVar4 = (code *)swi(3);
      pTVar27 = (TMatrix<double> *)(*pcVar4)();
      return pTVar27;
    }
  }
  local_28 = 0;
  piVar28 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                             (&this->OverrideParameters,&local_78,0);
  if (piVar28 != (int *)0x0) {
    iVar26 = *piVar28;
    lVar29 = (longlong)iVar26;
    if (iVar26 != -1) {
      if ((iVar26 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < lVar29 + 0x40U)) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                            ,0x17f,L"");
        if (bVar25) {
          pcVar4 = (code *)swi(3);
          pTVar27 = (TMatrix<double> *)(*pcVar4)();
          return pTVar27;
        }
      }
      lVar3 = (this->OverrideParameters)._padding_;
      bVar25 = true;
      local_28 = 1;
      pfVar2 = (float *)(lVar3 + 0x10 + lVar29);
      pfVar1 = (float *)(lVar3 + lVar29);
      fVar31 = *pfVar1;
      fVar32 = pfVar1[1];
      fVar33 = pfVar1[2];
      fVar34 = pfVar1[3];
      pfVar1 = (float *)(lVar3 + 0x20 + lVar29);
      local_58 = (float  [2])*(undefined8 *)pfVar2;
      afStack_50 = (float  [2])*(undefined8 *)(pfVar2 + 2);
      pfVar2 = (float *)(lVar3 + 0x30 + lVar29);
      local_38 = (float  [2])*(undefined8 *)pfVar2;
      afStack_30 = (float  [2])*(undefined8 *)(pfVar2 + 2);
      local_48 = (float  [2])*(undefined8 *)pfVar1;
      afStack_40 = (float  [2])*(undefined8 *)(pfVar1 + 2);
      *param_2 = true;
      goto LAB_14904b0df;
    }
  }
  bVar25 = false;
  *param_2 = false;
  fVar31 = UE::Math::TMatrix<float>::Identity.M[0][0];
  fVar32 = UE::Math::TMatrix<float>::Identity.M[0][1];
  fVar33 = UE::Math::TMatrix<float>::Identity.M[0][2];
  fVar34 = UE::Math::TMatrix<float>::Identity.M[0][3];
LAB_14904b0df:
  pafVar30 = (float (*) [4])local_58;
  if (!bVar25) {
    pafVar30 = UE::Math::TMatrix<float>::Identity.M + 1;
  }
  fVar13 = (*pafVar30)[0];
  fVar14 = (*pafVar30)[1];
  fVar15 = (*pafVar30)[2];
  fVar16 = (*pafVar30)[3];
  pafVar30 = (float (*) [4])local_48;
  if (!bVar25) {
    pafVar30 = UE::Math::TMatrix<float>::Identity.M + 2;
  }
  fVar17 = (*pafVar30)[0];
  fVar18 = (*pafVar30)[1];
  fVar19 = (*pafVar30)[2];
  fVar20 = (*pafVar30)[3];
  pafVar30 = (float (*) [4])local_38;
  if (!bVar25) {
    pafVar30 = UE::Math::TMatrix<float>::Identity.M + 3;
  }
  fVar21 = (*pafVar30)[0];
  fVar22 = (*pafVar30)[1];
  fVar23 = (*pafVar30)[2];
  fVar24 = (*pafVar30)[3];
  auVar5._8_4_ = SUB84((double)fVar34,0);
  auVar5._0_8_ = (double)fVar33;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[0] + 2) = auVar5;
  auVar9._8_4_ = SUB84((double)fVar32,0);
  auVar9._0_8_ = (double)fVar31;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar32 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar9;
  auVar11._8_4_ = SUB84((double)fVar14,0);
  auVar11._0_8_ = (double)fVar13;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar11;
  auVar6._8_4_ = SUB84((double)fVar16,0);
  auVar6._0_8_ = (double)fVar15;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[1] + 2) = auVar6;
  auVar10._8_4_ = SUB84((double)fVar18,0);
  auVar10._0_8_ = (double)fVar17;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar10;
  auVar7._8_4_ = SUB84((double)fVar20,0);
  auVar7._0_8_ = (double)fVar19;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar20 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[2] + 2) = auVar7;
  auVar12._8_4_ = SUB84((double)fVar22,0);
  auVar12._0_8_ = (double)fVar21;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar22 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[3] = auVar12;
  auVar8._8_4_ = SUB84((double)fVar24,0);
  auVar8._0_8_ = (double)fVar23;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar24 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar8;
  return __return_storage_ptr__;
}

// GetVariablePosition @ 14904b180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector<double> * __thiscall
UNiagaraComponent::GetVariablePosition
          (UNiagaraComponent *this,TVector<double> *__return_storage_ptr__,FName param_1,
          bool *param_2)

{
  double dVar1;
  double dVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  pTVar3 = (TVector<double> *)
           (**(code **)((this->OverrideParameters)._padding_ + 0x68))
                     (&this->OverrideParameters,local_res18);
  *param_2 = pTVar3 != (TVector<double> *)0x0;
  pTVar4 = &UE::Math::TVector<double>::ZeroVector;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  dVar2 = (pTVar4->field0_0x0)._s_0.Y;
  dVar1 = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetVariableQuat @ 14904b1f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TQuat<double> * __thiscall
UNiagaraComponent::GetVariableQuat
          (UNiagaraComponent *this,TQuat<double> *__return_storage_ptr__,FName param_1,bool *param_2
          )

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  FNiagaraTypeDefinition *this_00;
  TQuat<double> *pTVar11;
  int *piVar12;
  TQuat<float> *pTVar13;
  FName local_38;
  FNiagaraTypeDefinitionHandle local_30 [2];
  TQuat<float> local_28;
  undefined1 local_18;
  
  local_38 = param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::QuatDef);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_30);
  iVar10 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar10 != 0x10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TQuat<double> *)(*pcVar6)();
      return pTVar11;
    }
  }
  local_18 = 0;
  piVar12 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                             (&this->OverrideParameters,&local_38,0);
  bVar9 = false;
  if (piVar12 != (int *)0x0) {
    iVar10 = *piVar12;
    if (iVar10 != -1) {
      if ((iVar10 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < (longlong)iVar10 + 0x10U)
         ) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TQuat<double> *)(*pcVar6)();
          return pTVar11;
        }
      }
      bVar9 = true;
      local_18 = 1;
      puVar1 = (undefined8 *)((this->OverrideParameters)._padding_ + (longlong)iVar10);
      local_28._0_8_ = *puVar1;
      local_28._8_8_ = puVar1[1];
    }
  }
  *param_2 = bVar9;
  pTVar13 = &local_28;
  if (bVar9 == false) {
    pTVar13 = &UE::Math::TQuat<float>::Identity;
  }
  uVar2 = pTVar13->X;
  uVar4 = pTVar13->Y;
  auVar7._8_4_ = SUB84((double)(float)uVar4,0);
  auVar7._0_8_ = (double)(float)uVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)(float)uVar4 >> 0x20);
  __return_storage_ptr__->X = (double)(float)uVar2;
  __return_storage_ptr__->Y = (double)auVar7._8_8_;
  uVar3 = pTVar13->Z;
  uVar5 = pTVar13->W;
  auVar8._8_4_ = SUB84((double)(float)uVar5,0);
  auVar8._0_8_ = (double)(float)uVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)(float)uVar5 >> 0x20);
  __return_storage_ptr__->Z = (double)(float)uVar3;
  __return_storage_ptr__->W = (double)auVar8._8_8_;
  return __return_storage_ptr__;
}

// GetVariableVec2 @ 14904b330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector2<double> * __thiscall
UNiagaraComponent::GetVariableVec2
          (UNiagaraComponent *this,TVector2<double> *__return_storage_ptr__,FName param_1,
          bool *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_00;
  TVector2<double> *pTVar5;
  int *piVar6;
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  undefined8 local_18;
  
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec2Def);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar4 != 8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  piVar6 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                            (&this->OverrideParameters,&local_28,0);
  if (piVar6 != (int *)0x0) {
    iVar4 = *piVar6;
    if (iVar4 != -1) {
      if ((iVar4 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < (longlong)iVar4 + 8U)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TVector2<double> *)(*pcVar1)();
          return pTVar5;
        }
      }
      local_18 = *(undefined8 *)((longlong)iVar4 + (this->OverrideParameters)._padding_);
      bVar3 = true;
      *param_2 = true;
      uVar2 = (float)local_18;
      goto LAB_14904b433;
    }
  }
  bVar3 = false;
  *param_2 = false;
  uVar2 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
LAB_14904b433:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar2;
  if (!bVar3) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_18._4_4_;
  return __return_storage_ptr__;
}

// GetVariableVec3 @ 14904b480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector<double> * __thiscall
UNiagaraComponent::GetVariableVec3
          (UNiagaraComponent *this,TVector<double> *__return_storage_ptr__,FName param_1,
          bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_00;
  TVector<double> *pTVar5;
  int *piVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  undefined8 local_18;
  float local_10;
  
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec3Def);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar4 = FNiagaraTypeDefinition::GetSize(this_00);
  if ((iVar4 != 0xc) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameter.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x1a1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TVector<double> *)(*pcVar2)();
    return pTVar5;
  }
  piVar6 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                            (&this->OverrideParameters,&local_28,0);
  if (piVar6 != (int *)0x0) {
    iVar4 = *piVar6;
    lVar7 = (longlong)iVar4;
    if (iVar4 != -1) {
      if (((iVar4 < 0) ||
          ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < lVar7 + 0xcU)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x17f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
      lVar1 = (this->OverrideParameters)._padding_;
      uVar9 = *(ulonglong *)(lVar1 + lVar7);
      local_10 = *(float *)(lVar1 + 8 + lVar7);
      bVar3 = true;
      *param_2 = true;
      local_18 = uVar9;
      goto LAB_14904b584;
    }
  }
  bVar3 = false;
  *param_2 = false;
  uVar9 = (ulonglong)(uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
LAB_14904b584:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar9;
  uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    uVar8 = local_18._4_4_;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)uVar8;
  if (!bVar3) {
    local_10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_10;
  return __return_storage_ptr__;
}

// GetVariableVec4 @ 14904b5f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector4<double> * __thiscall
UNiagaraComponent::GetVariableVec4
          (UNiagaraComponent *this,TVector4<double> *__return_storage_ptr__,FName param_1,
          bool *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this_00;
  TVector4<double> *pTVar7;
  int *piVar8;
  undefined8 *puVar9;
  bool bVar10;
  FName local_48;
  FNiagaraTypeDefinitionHandle local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_48 = param_1;
  local_40[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::Vec4Def);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_40);
  iVar6 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar6 != 0x10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TVector4<double> *)(*pcVar1)();
      return pTVar7;
    }
  }
  bVar5 = false;
  local_18 = 0;
  piVar8 = (int *)(**(code **)((this->OverrideParameters)._padding_ + 0x58))
                            (&this->OverrideParameters,&local_48,0);
  bVar10 = false;
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
    bVar10 = false;
    if (iVar6 != -1) {
      if ((iVar6 < 0) ||
         ((ulonglong)(longlong)(int)(this->OverrideParameters)._padding_ < (longlong)iVar6 + 0x10U))
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TVector4<double> *)(*pcVar1)();
          return pTVar7;
        }
      }
      puVar9 = (undefined8 *)((this->OverrideParameters)._padding_ + (longlong)iVar6);
      bVar5 = true;
      local_18 = 1;
      bVar10 = true;
      local_28 = *puVar9;
      uStack_20 = puVar9[1];
    }
  }
  *param_2 = bVar10;
  local_38 = 0;
  uStack_30 = 0;
  puVar9 = &local_38;
  if (bVar5) {
    puVar9 = &local_28;
  }
  dVar4 = (double)(float)((ulonglong)*puVar9 >> 0x20);
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (double)(float)*puVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  dVar4 = (double)(float)((ulonglong)puVar9[1] >> 0x20);
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (double)(float)puVar9[1];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
  return __return_storage_ptr__;
}

// InitForPerformanceBaseline @ 149058040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::InitForPerformanceBaseline(UNiagaraComponent *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->bAllowScalability = 0;
  UnregisterWithScalabilityManager(this);
  SetPreviewLODDistance(this,true,__real_3f800000,__real_461c4000);
  return;
}

// InitializeSystem @ 149058620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::InitializeSystem(UNiagaraComponent *this)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  ENCPoolMethod EVar4;
  longlong *plVar5;
  UNiagaraSystem *pUVar6;
  FName FVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  undefined1 uVar11;
  UWorld *pUVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this_00;
  FName *pFVar16;
  int iVar17;
  FNiagaraSystemInstanceController *pFVar18;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  UNiagaraComponent *local_res18;
  UNiagaraComponent *local_res20;
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  undefined1 local_1f0 [8];
  ForAnyElementType local_1e8;
  int local_1e0;
  FNiagaraSystemInstanceController *local_1d8;
  FSharedReferencer<1> local_1d0;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  undefined1 local_1b0 [8];
  FDelegateAllocation local_1a8;
  FString local_198;
  UNiagaraComponent *local_188;
  FMemScope local_180;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  TVector<double>_u_0 local_a8;
  FName FStack_90;
  FName local_88;
  FName FStack_80;
  FName local_78;
  FReadAccessScope local_68;
  
  if ((this->SystemInstanceController).Object != (FNiagaraSystemInstanceController *)0x0) {
    return false;
  }
  FLLMScope::FLLMScope(local_res10,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_180,Niagara,true);
  if (__CsvProfilerStat1204 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1204 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  pUVar12 = (UWorld *)this->_padding_;
  if (((pUVar12 == (UWorld *)0x0) &&
      (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar12 == (UWorld *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                          ,0x4b7,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (((this->Asset).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Asset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                          ,0x4b8,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  EVar4 = this->PoolingMethod;
  plVar5 = &(this->OverrideParameters)._padding_;
  *(uint *)plVar5 = (uint)*plVar5 | 1;
  pTVar13 = ::operator_new(0x80);
  iVar17 = -1;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    pFVar18 = (FNiagaraSystemInstanceController *)&DAT_00000010;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSystemInstanceController___00_SharedPointerInternals__6B_
    ;
    FNiagaraSystemInstanceController::FNiagaraSystemInstanceController
              ((FNiagaraSystemInstanceController *)(pTVar13 + 1));
    pFVar18 = (FNiagaraSystemInstanceController *)(pTVar13 + 1);
    if (pFVar18 == (FNiagaraSystemInstanceController *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      goto LAB_14905881a;
    }
  }
  if (((pFVar18->_padding_ == 0) || (pFVar18->_padding_ == 0)) ||
     (*(int *)(pFVar18->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar18->_padding_ = (longlong)pFVar18;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar18->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar18->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar18->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14905881a:
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d8 = pFVar18;
  local_1d0.ReferenceController = pTVar13;
  if (&this->SystemInstanceController !=
      (TSharedPtr<FNiagaraSystemInstanceController,1> *)&local_1d8) {
    (this->SystemInstanceController).Object = pFVar18;
    local_1d8 = (FNiagaraSystemInstanceController *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SystemInstanceController).SharedReferenceCount,&local_1d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (this->bOverrideWarmupSettings != 0) {
    iVar17 = this->WarmupTickCount;
  }
  if ((((this->bForceSolo != 0) || ((this->SimCache).field0_0x0.DebugPtr != (UNiagaraSimCache *)0x0)
       ) || (__real_322bcc77 <
             (float)((uint)(this->CustomTimeDilation - __real_3f800000) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     ((pUVar6 = (this->Asset).field0_0x0.DebugPtr, pUVar6 != (UNiagaraSystem *)0x0 &&
      (pUVar6->bFixedTickDelta != false)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FNiagaraSystemInstanceController::Initialize
            ((this->SystemInstanceController).Object,pUVar12,(this->Asset).field0_0x0.DebugPtr,
             &this->OverrideParameters,(USceneComponent *)this,this->TickBehavior,EVar4 != None,
             this->RandomSeedOffset,bVar10,iVar17,this->WarmupTickDelta);
  if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  iVar17 = local_198.Data.ArrayMax;
  pFVar18 = (this->SystemInstanceController).Object;
  local_1b0 = (undefined1  [8])0x0;
  local_1a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b0,
             (FWriteAccessScope *)&local_148);
  local_130 = &local_1a8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_1a8);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_res18);
    puVar14[4] = PostSystemTick_GameThread;
    puVar14[5] = (ulonglong)(uint)iVar17 << 0x20;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if ((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4531953176097587082>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                        ,0x76,"IsValid()");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    if (((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&((pFVar18->SystemInstance).Object)->OnPostTickDelegate,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b0);
  if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  iVar17 = local_198.Data.ArrayMax;
  pFVar18 = (this->SystemInstanceController).Object;
  local_1c8 = (undefined1  [8])0x0;
  local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
             (FWriteAccessScope *)&local_128);
  local_110 = &local_1c0;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_1c0);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_res20);
    puVar14[4] = OnSystemComplete;
    puVar14[5] = (ulonglong)(uint)iVar17 << 0x20;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  if ((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4531953176097587081>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                        ,0x77,"IsValid()");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    if (((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  this_00 = &((pFVar18->SystemInstance).Object)->OnCompleteDelegate;
  if ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_1c8 != this_00) {
    local_1f0 = (undefined1  [8])0x0;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,&local_68);
    if ((local_1c0.DelegateSize != 0) &&
       (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_1c0.DelegateAllocator + 0x50))
                (local_1c0.DelegateAllocator,local_1f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
               (FWriteAccessScope *)&local_178);
    if ((local_1e0 != 0) && (local_1e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,0,0x10);
      local_1e0 = 0;
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
  if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pFVar18 = (this->SystemInstanceController).Object;
  local_208 = (undefined1  [8])0x0;
  local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_200.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
             (FWriteAccessScope *)&local_108);
  local_f0 = &local_200;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_200);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_188 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_188);
    puVar14[4] = UActorComponent::MarkRenderStateDirty;
    puVar14[5] = (ulonglong)(uint)local_198.Data.ArrayMax << 0x20;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar18->OnMaterialsUpdatedDelegate,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_208);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
             (FWriteAccessScope *)&local_160);
  if ((local_200.DelegateSize != 0) &&
     (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_200.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_200,0,0,0x10);
    local_200.DelegateSize = 0;
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  if (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_200.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_208);
  if (this->bEnableGpuComputeDebug != 0) {
    if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    FNiagaraSystemInstanceController::SetGpuComputeDebug<bool>
              ((this->SystemInstanceController).Object,this->bEnableGpuComputeDebug);
  }
  if (this->bEnablePreviewLODDistance != 0) {
    if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    FNiagaraSystemInstanceController::SetLODDistance<float,float,bool>
              ((this->SystemInstanceController).Object,this->PreviewLODDistance,
               this->PreviewMaxDistance,true);
  }
  if ((this->SystemFixedBounds).IsValid != '\0') {
    if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    local_e8._s_0.X = (this->SystemFixedBounds).Min.field0_0x0._s_0.X;
    local_e8._s_0.Y = (this->SystemFixedBounds).Min.field0_0x0._s_0.Y;
    local_e8._s_0.Z = (this->SystemFixedBounds).Min.field0_0x0._s_0.Z;
    dStack_d0 = (this->SystemFixedBounds).Max.field0_0x0._s_0.X;
    local_c8 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Y;
    dStack_c0 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Z;
    local_b8._0_1_ = (this->SystemFixedBounds).IsValid;
    local_b8._1_1_ = (this->SystemFixedBounds).Pad[0];
    local_b8._2_1_ = (this->SystemFixedBounds).Pad[1];
    local_b8._3_1_ = (this->SystemFixedBounds).Pad[2];
    local_b8._4_1_ = (this->SystemFixedBounds).Pad[3];
    local_b8._5_1_ = (this->SystemFixedBounds).Pad[4];
    local_b8._6_1_ = (this->SystemFixedBounds).Pad[5];
    local_b8._7_1_ = (this->SystemFixedBounds).Pad[6];
    FNiagaraSystemInstanceController::SetSystemFixedBounds<UE::Math::TBox<double>_>
              ((this->SystemInstanceController).Object,(TBox<double> *)&local_e8._s_0);
  }
  iVar17 = (this->EmitterOverrideInfos).ArrayNum;
  pFVar16 = (FName *)(this->EmitterOverrideInfos).AllocatorInstance.Data;
  pFVar2 = pFVar16 + (longlong)iVar17 * 9;
  do {
    if ((this->EmitterOverrideInfos).ArrayNum != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar16 == pFVar2) {
      (**(code **)(this->_padding_ + 0x378))(this);
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      if (((GIsAutomationTesting != false) &&
          (pUVar6 = (this->Asset).field0_0x0.DebugPtr, pUVar6 != (UNiagaraSystem *)0x0)) &&
         (4 < (byte)LogNiagara._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_198,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      FCsvProfiler::EndExclusiveStat("Effects");
      FMemScope::~FMemScope(&local_180);
      FLLMScope::~FLLMScope(local_res10);
      return true;
    }
    if ((char)pFVar16[1].ComparisonIndex.Value == '\0') {
      if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      pFVar18 = (this->SystemInstanceController).Object;
      uVar9 = pFVar16[1].ComparisonIndex.Value;
      FVar7 = *pFVar16;
      if ((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4531953176097587077>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                            ,0x7b,"IsValid()");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if (((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      FNiagaraSystemInstance::SetEmitterEnable
                ((pFVar18->SystemInstance).Object,FVar7,SUB41(uVar9,0));
    }
    if ((char)pFVar16[8].ComparisonIndex.Value != '\0') {
      if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      local_a8._s_0.X = (double)pFVar16[2];
      local_a8._s_0.Y = (double)pFVar16[3];
      pFVar18 = (this->SystemInstanceController).Object;
      local_a8._s_0.Z = (double)pFVar16[4];
      FStack_90 = pFVar16[5];
      FVar7 = *pFVar16;
      local_88 = pFVar16[6];
      FStack_80 = pFVar16[7];
      local_78 = pFVar16[8];
      if ((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4531953176097587049>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                            ,0x97,"IsValid()");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if (((pFVar18->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      FNiagaraSystemInstance::SetEmitterFixedBounds
                ((pFVar18->SystemInstance).Object,FVar7,(TBox<double> *)&local_a8._s_0);
    }
    pFVar16 = pFVar16 + 9;
  } while( true );
}

// IsActiveForUpdateContext @ 149059220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::IsActiveForUpdateContext(UNiagaraComponent *this)

{
  FNiagaraSystemInstanceController *this_00;
  ENiagaraExecutionState EVar1;
  
  if ((((this->_padding_ & 0x100000) != 0) &&
      (this_00 = (this->SystemInstanceController).Object,
      this_00 != (FNiagaraSystemInstanceController *)0x0)) &&
     (EVar1 = FNiagaraSystemInstanceController::GetRequestedExecutionState<>(this_00),
     EVar1 == Active)) {
    return true;
  }
  if (((this->bAwaitingActivationDueToNotReady == 0) || ((this->_padding_ & 0xc000000) == 0)) &&
     (this->ScalabilityManagerHandle == -1)) {
    return false;
  }
  return true;
}

// IsComplete @ 1490592d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::IsComplete(UNiagaraComponent *this)

{
  ENiagaraExecutionState EVar1;
  FNiagaraSystemInstanceController *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pFVar2 = (this->SystemInstanceController).Object;
  if (pFVar2 == (FNiagaraSystemInstanceController *)0x0) {
    return true;
  }
  if ((pFVar2->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587067>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x85,"IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((pFVar2->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EVar1 = ((pFVar2->SystemInstance).Object)->ActualExecutionState;
  if ((EVar1 != Complete) && (EVar1 != Disabled)) {
    return false;
  }
  return true;
}

// IsLocalPlayerEffect @ 14905a320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::IsLocalPlayerEffect(UNiagaraComponent *this)

{
  bool bVar1;
  
  if (this->bForceLocalPlayerEffect == 0) {
    bVar1 = FNiagaraWorldManager::IsComponentLocalPlayerLinked((USceneComponent *)this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsPaused @ 14905a5f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::IsPaused(UNiagaraComponent *this)

{
  ENiagaraSystemInstanceState EVar1;
  FNiagaraSystemInstanceController *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ENiagaraExecutionState EVar6;
  uint uVar7;
  
  pFVar2 = (this->SystemInstanceController).Object;
  if ((pFVar2 != (FNiagaraSystemInstanceController *)0x0) &&
     (EVar6 = FNiagaraSystemInstanceController::GetRequestedExecutionState<>(pFVar2),
     EVar6 == Active)) {
    if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    EVar6 = FNiagaraSystemInstanceController::GetActualExecutionState<>
                      ((this->SystemInstanceController).Object);
    if ((EVar6 == Active) && (this->bIsCulledByScalability == 0)) {
      if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->SystemInstanceController).Object;
      if ((pFVar2->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4531953176097587057>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                           ,0x8f,"IsValid()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((pFVar2->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      EVar1 = ((pFVar2->SystemInstance).Object)->SystemInstanceState;
      if ((EVar1 == PendingSpawnPaused) || (EVar1 == Paused)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      if ((uVar7 != this->bDesiredPauseState) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6771089081142084719>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                             ,0x46f,
                             "bIsInstanceRunning == false || bIsCulledByScalability || SystemInstanceController->IsPaused() == bDesiredPauseState"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  return this->bDesiredPauseState;
}

// IsReadyForOwnerToAutoDestroy @ 14905a7a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::IsReadyForOwnerToAutoDestroy(UNiagaraComponent *this)

{
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 2) >> 4 & 1);
}

// IsVisible @ 14905b170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::IsVisible(UNiagaraComponent *this)

{
  longlong lVar1;
  bool bVar2;
  
  if ((((this->PoolingMethod != None) && (this->_padding_ != 0)) &&
      (lVar1 = *(longlong *)(this->_padding_ + 0xc0), lVar1 != 0)) && (*(char *)(lVar1 + 1) == '\0')
     ) {
    return false;
  }
  bVar2 = USceneComponent::IsVisible((USceneComponent *)this);
  return bVar2;
}

// IsWorldReadyToRun @ 14905b1b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::IsWorldReadyToRun(UNiagaraComponent *this)

{
  UWorld *pUVar1;
  FNiagaraGpuComputeDispatchInterface *pFVar2;
  FNiagaraWorldManager *pFVar3;
  
  pUVar1 = (UWorld *)this->_padding_;
  if ((pUVar1 == (UWorld *)0x0) &&
     (pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar1 == (UWorld *)0x0)
     ) {
    return false;
  }
  pFVar2 = FNiagaraGpuComputeDispatchInterface::Get(pUVar1);
  if (pFVar2 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
    return false;
  }
  pFVar3 = FNiagaraWorldManager::Get(pUVar1);
  return pFVar3 != (FNiagaraWorldManager *)0x0;
}

// OnAttachmentChanged @ 14905bd80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnAttachmentChanged(UNiagaraComponent *this)

{
  ResolveOwnerAllowsScalability(this,true);
  UPrimitiveComponent::OnAttachmentChanged((UPrimitiveComponent *)this);
  return;
}

// OnChildAttached @ 14905bdb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnChildAttached(UNiagaraComponent *this,USceneComponent *param_1)

{
  return;
}

// OnChildDetached @ 14905bdc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnChildDetached(UNiagaraComponent *this,USceneComponent *param_1)

{
  return;
}

// OnComponentCreated @ 14905bdd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnComponentCreated(UNiagaraComponent *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->_padding_ & 0x4000000) == 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 | 4;
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2595971593406515309>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x86d,"!bHasBeenCreated");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 4;
  return;
}

// OnComponentDestroyed @ 14905bde0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnComponentDestroyed(UNiagaraComponent *this,bool param_1)

{
  UNiagaraSystem *pUVar1;
  UNiagaraComponentPool *this_00;
  UWorld *pUVar2;
  FNiagaraWorldManager *pFVar3;
  FString local_38;
  FString local_28;
  
  if (this->PoolingMethod != None) {
    pUVar2 = (UWorld *)this->_padding_;
    if ((pUVar2 == (UWorld *)0x0) &&
       (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar2 == (UWorld *)0x0)) {
      if ((GNiagaraLogVerboseWarnings != 0) && (2 < (byte)LogNiagara._0_1_)) {
        pUVar1 = (this->Asset).field0_0x0.DebugPtr;
        if ((pUVar1 == (UNiagaraSystem *)0x0) || (pUVar1->_padding_ == 0)) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar1,&local_38,(UObject *)0x0,None);
        }
        if (this->_padding_ == 0) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((GNiagaraLogVerboseWarnings != 0) && (2 < (byte)LogNiagara._0_1_)) {
        pUVar1 = (this->Asset).field0_0x0.DebugPtr;
        if ((pUVar1 == (UNiagaraSystem *)0x0) || (pUVar1->_padding_ == 0)) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar1,&local_28,(UObject *)0x0,None);
        }
        if (this->_padding_ == 0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = FNiagaraWorldManager::Get(pUVar2);
      if ((pFVar3 != (FNiagaraWorldManager *)0x0) &&
         (this_00 = (pFVar3->ComponentPool).field0_0x0.DebugPtr,
         this_00 != (UNiagaraComponentPool *)0x0)) {
        UNiagaraComponentPool::PooledComponentDestroyed(this_00,this);
      }
    }
    this->PoolingMethod = None;
  }
  UnregisterWithScalabilityManager(this);
  UPrimitiveComponent::OnComponentDestroyed((UPrimitiveComponent *)this,param_1);
  return;
}

// OnEndOfFrameUpdateDuringTick @ 14905c070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnEndOfFrameUpdateDuringTick(UNiagaraComponent *this)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->SystemInstanceController).Object;
  if (pFVar1 == (FNiagaraSystemInstanceController *)0x0) {
    return;
  }
  if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587047>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x99,"IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraSystemInstance::WaitForConcurrentTickAndFinalize((pFVar1->SystemInstance).Object,false);
  return;
}

// OnPooledReuse @ 14905c0c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnPooledReuse(UNiagaraComponent *this,UWorld *param_1)

{
  int *piVar1;
  double dVar2;
  FNiagaraSystemInstanceController *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  UWorld *pUVar9;
  float fVar10;
  
  if (this == (UNiagaraComponent *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidChecked(this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                       ,0x7ad,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SetUserParametersToDefaultValues(this);
  USceneComponent::SetVisibility((USceneComponent *)this,true,DirtyOnly);
  USceneComponent::SetHiddenInGame((USceneComponent *)this,false,DirtyOnly);
  pUVar9 = (UWorld *)this->_padding_;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (pUVar9 != param_1) {
    (**(code **)(this->_padding_ + 0x170))(this,0,param_1,0);
  }
  pUVar9 = (UWorld *)this->_padding_;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  UPrimitiveComponent::SetLastRenderTime((UPrimitiveComponent *)this,(float)pUVar9->TimeSeconds);
  this->ForceUpdateTransformTime = 0.0;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  piVar1 = &(this->EmitterOverrideInfos).ArrayMax;
  (this->CurrLocalBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrLocalBounds).Max.field0_0x0._s_0.Y = (double)uVar7;
  (this->CurrLocalBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = (this->CurrLocalBounds).Max.field0_0x0._s_0.X;
  dVar6 = (this->CurrLocalBounds).Max.field0_0x0._s_0.Y;
  (this->CurrLocalBounds).IsValid = '\0';
  dVar2 = (this->CurrLocalBounds).Max.field0_0x0._s_0.Z;
  (this->CurrLocalBounds).Min.field0_0x0._s_0.X = dVar5;
  (this->CurrLocalBounds).Min.field0_0x0._s_0.Y = dVar6;
  (this->CurrLocalBounds).Min.field0_0x0._s_0.Z = dVar2;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Y = (double)uVar7;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = (this->SystemFixedBounds).Max.field0_0x0._s_0.X;
  dVar6 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Y;
  (this->SystemFixedBounds).IsValid = '\0';
  dVar2 = (this->SystemFixedBounds).Max.field0_0x0._s_0.Z;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.X = dVar5;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Y = dVar6;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Z = dVar2;
  (this->EmitterOverrideInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->EmitterOverrideInfos).AllocatorInstance,0,piVar1);
  }
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  if ((this->SystemInstanceController).Object != (FNiagaraSystemInstanceController *)0x0) {
    UpdateInstanceSoloMode(this);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->SystemInstanceController).Object;
    if ((pFVar3->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstance::OnPooledReuse((pFVar3->SystemInstance).Object,param_1);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->SystemInstanceController).Object;
    fVar10 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this);
    FNiagaraSystemInstanceController::SetLastRenderTime<float>(pFVar3,fVar10);
  }
  return;
}

// OnRegister @ 14905c370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnRegister(UNiagaraComponent *this)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  ULevel *pUVar7;
  longlong *plVar8;
  FLevelCollection *pFVar9;
  UObject *local_res8;
  
  if (((this->_padding_ & 0x100000) != 0) &&
     ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0)) {
    UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  }
  pFVar9 = (FLevelCollection *)0x0;
  if ((this->bAutoManageAttachment != 0) && ((this->_padding_ & 0x100000) == 0)) {
    if (this->_padding_ != 0) {
      bVar6 = FWeakObjectPtr::IsValid(&(this->AutoAttachParent).WeakPtr);
      if (!bVar6) {
        local_res8 = (UObject *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        FWeakObjectPtr::operator=(&(this->AutoAttachParent).WeakPtr,(FObjectPtr)&local_res8);
      }
      if (this->AutoAttachSocketName == (FName)0x0) {
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (this->AutoAttachSocketName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_
        ;
        (this->AutoAttachSocketName).Number = uVar5;
      }
      plVar8 = *(longlong **)(this->_padding_ + 0xe8);
      plVar1 = plVar8 + *(int *)(this->_padding_ + 0xf0);
      for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
        if ((UNiagaraComponent *)*plVar8 == (UNiagaraComponent *)0x0) {
          bVar6 = this == (UNiagaraComponent *)0x0;
        }
        else {
          bVar6 = (UNiagaraComponent *)*plVar8 == this;
        }
        if (bVar6) {
          if (((this->_padding_ & 0x80000) == 0) ||
             ((((this->AutoAttachLocationRule != KeepRelative &&
                (this->AutoAttachRotationRule != KeepRelative)) &&
               (this->AutoAttachScaleRule != KeepRelative)) ||
              ((this->AutoAttachSocketName != (FName)this->_padding_ ||
               (bVar6 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::
                        UEOpEquals<USceneComponent,bool>
                                  (&this->AutoAttachParent,(USceneComponent *)this->_padding_),
               !bVar6)))))) {
            local_res8 = (UObject *)((ulonglong)local_res8 & 0xffffffff00000000);
            (**(code **)(this->_padding_ + 0x518))(this,&local_res8);
          }
          goto LAB_14905c476;
        }
      }
      local_res8 = (UObject *)0x0;
      USceneComponent::SetupAttachment((USceneComponent *)this,(USceneComponent *)0x0,(FName)0x0);
    }
LAB_14905c476:
    dVar3 = (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X = (double)this->_padding_;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y = dVar3;
    dVar3 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z = dVar2;
    dVar2 = (double)this->_padding_;
    (this->SavedAutoAttachRelativeRotation).Pitch = dVar3;
    (this->SavedAutoAttachRelativeRotation).Yaw = dVar4;
    dVar3 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    (this->SavedAutoAttachRelativeRotation).Roll = dVar2;
    dVar2 = (double)this->_padding_;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X = dVar3;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y = dVar4;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = dVar2;
  }
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  if (((this->_padding_ == 0) && (this->_padding_ == 0)) &&
     ((this->_padding_ != 0 && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)))) {
    pUVar7 = UActorComponent::GetComponentLevel((UActorComponent *)this->_padding_);
    if (pUVar7 != (ULevel *)0x0) {
      pFVar9 = pUVar7->CachedLevelCollection;
    }
    this->_padding_ = (longlong)pFVar9;
  }
  return;
}

// OnSystemComplete @ 14905c5a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnSystemComplete(UNiagaraComponent *this,bool param_1)

{
  undefined4 uVar1;
  FNiagaraSystemRenderData *pFVar2;
  UNiagaraCullProxyComponent *this_00;
  UNiagaraSystem *pUVar3;
  UWorld *pUVar4;
  FNiagaraWorldManager *pFVar5;
  FNiagaraSystemInstanceController *this_01;
  UNiagaraEffectType *pUVar6;
  IConsoleManager *pIVar7;
  float fVar8;
  UNiagaraComponent *local_res18;
  FString local_28;
  FString local_18;
  
  if (((!param_1) && (this->bIsCulledByScalability == 0)) &&
     ((this->_padding_ != 0 ||
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 != (UWorld *)0x0
      )))) {
    pUVar4 = (UWorld *)this->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pFVar5 = FNiagaraWorldManager::Get(pUVar4);
    if (pFVar5->DebugPlaybackMode == Loop) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar7 = IConsoleManager::Get();
        CVarGlobalLoopTime =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"fx.Niagara.Debug.GlobalLoopTime",1);
        _Init_thread_footer(&::_TSS0);
      }
      if (CVarGlobalLoopTime == (IConsoleVariable *)0x0) {
        return;
      }
      fVar8 = (float)(**(code **)(*(longlong *)CVarGlobalLoopTime + 0xd0))();
      if (0.0 < fVar8) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014905c660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2b8))(this,1);
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x420))(this);
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  if ((((this->SystemInstanceController).Object != (FNiagaraSystemInstanceController *)0x0) &&
      (this->_padding_ != 0)) &&
     (pFVar2 = *(FNiagaraSystemRenderData **)(this->_padding_ + 0x2d8),
     pFVar2 != (FNiagaraSystemRenderData *)0x0)) {
    this_01 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                        (&this->SystemInstanceController);
    FNiagaraSystemInstanceController::NotifyRenderersComplete(this_01,pFVar2);
  }
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  uVar1 = *(undefined4 *)&this->field_0x6cc;
  if (ZPULL(uVar1,6,1) != 0 || this->bDuringUpdateContextReset != 0) goto LAB_14905c89d;
  this_00 = (this->CullProxy).field0_0x0.DebugPtr;
  *(uint *)&this->field_0x6cc = uVar1 | 0x80;
  if (this_00 != (UNiagaraCullProxyComponent *)0x0) {
    UNiagaraCullProxyComponent::UnregisterCulledComponent(this_00,this);
    (this->CullProxy).field0_0x0.DebugPtr = (UNiagaraCullProxyComponent *)0x0;
  }
  local_res18 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSystemFinished,
             &local_res18);
  if (this->PoolingMethod == AutoRelease) {
LAB_14905c733:
    pUVar4 = (UWorld *)this->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pFVar5 = FNiagaraWorldManager::Get(pUVar4);
    if (pFVar5 != (FNiagaraWorldManager *)0x0) {
      UNiagaraComponentPool::ReclaimWorldParticleSystem
                ((pFVar5->ComponentPool).field0_0x0.DebugPtr,this);
    }
  }
  else {
    if (this->PoolingMethod == ManualRelease_OnComplete) {
      this->PoolingMethod = ManualRelease;
      goto LAB_14905c733;
    }
    if (this->bAutoDestroy == 0) {
      if (this->bAutoManageAttachment != 0) {
        CancelAutoAttachment(this,true);
      }
      if ((this->_padding_ & 2) != 0) {
        (**(code **)(this->_padding_ + 0x3a8))(this);
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x4a0))(this,0);
    }
  }
  if (this->ScalabilityManagerHandle != -1) {
    if (((((!param_1) &&
          (pUVar6 = UNiagaraSystem::GetEffectType((this->Asset).field0_0x0.DebugPtr),
          pUVar6 != (UNiagaraEffectType *)0x0)) &&
         ((pUVar6->CullReaction == DeactivateImmediateResume ||
          (pUVar6->CullReaction == DeactivateResume)))) &&
        ((NiagaraComponentPrivate::GWarnAsleepCullReaction == 1 &&
         (pUVar3 = (this->Asset).field0_0x0.DebugPtr, pUVar3 != (UNiagaraSystem *)0x0)))) &&
       (2 < (byte)LogNiagara._0_1_)) {
      if (pUVar3->_padding_ == 0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_28,(UObject *)0x0,None);
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    UnregisterWithScalabilityManager(this);
  }
LAB_14905c89d:
  if (((GIsAutomationTesting != false) &&
      (pUVar3 = (this->Asset).field0_0x0.DebugPtr, pUVar3 != (UNiagaraSystem *)0x0)) &&
     (4 < (byte)LogNiagara._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar3,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnUnregister @ 14905ca00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::OnUnregister(UNiagaraComponent *this)

{
  TSharedPtr<FNiagaraSystemInstanceController,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  UnregisterWithScalabilityManager(this);
  pTVar1 = &this->SystemInstanceController;
  if (pTVar1->Object != (FNiagaraSystemInstanceController *)0x0) {
    FNiagaraSystemInstanceController::Deactivate<bool>(pTVar1->Object,true);
    if (this->PoolingMethod == None) {
      if (pTVar1->Object == (FNiagaraSystemInstanceController *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FNiagaraSystemInstanceController::Release(pTVar1->Object);
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FNiagaraSystemInstanceController,1> *)&local_18) {
        pTVar1->Object = (FNiagaraSystemInstanceController *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SystemInstanceController).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
  }
  return;
}

// PostApplyToComponent @ 14905dc80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::PostApplyToComponent(UNiagaraComponent *this)

{
  FComponentReregisterContext FStack_28;
  
  if (((this->_padding_ & 1) != 0) && ((this->_padding_ & 0x4000) != 0)) {
    FComponentReregisterContext::FComponentReregisterContext
              (&FStack_28,(UActorComponent *)this,
               (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)
               0x0);
    FComponentReregisterContext::~FComponentReregisterContext(&FStack_28);
  }
  return;
}

// PostLoad @ 14905e800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::PostLoad(UNiagaraComponent *this)

{
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  FNiagaraParameterStore::PostLoad
            ((FNiagaraParameterStore *)&this->OverrideParameters,(UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x00014905e83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->OverrideParameters)._padding_ + 0x40))(&this->OverrideParameters,1);
  return;
}

// PostSystemTick_GameThread @ 14905ee90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::PostSystemTick_GameThread(UNiagaraComponent *this)

{
  TSharedPtr<FNiagaraSystemInstanceController,1> *this_00;
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  uchar uVar4;
  FNiagaraSystemInstance *pFVar5;
  FNiagaraSystemRenderData *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  bool bVar22;
  uint *puVar23;
  FTlsAutoCleanup *pFVar24;
  UWorld *pUVar25;
  TQuat<double> *pTVar26;
  FNiagaraSystemInstanceController *pFVar27;
  float fVar28;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_c8;
  code *local_b8;
  undefined1 *local_b0;
  FString local_a8;
  TRotator<double> local_98;
  TQuat<double> local_78 [3];
  
  this_00 = &this->SystemInstanceController;
  if ((this_00->Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstanceController.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                          ,0x6bd,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar23 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_b0 = local_res8;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar24 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar23);
  if (*(char *)(pFVar24 + 4) != '\0') {
    if (2 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_a8,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    ::FDebug::DumpStackTraceToLog(Warning);
    return;
  }
  if ((this_00->Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar27 = this_00->Object;
  fVar28 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this);
  FNiagaraSystemInstanceController::SetLastRenderTime<float>(pFVar27,fVar28);
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  if ((this_00->Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar27 = this_00->Object;
  if ((pFVar27->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar22 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4531953176097587052>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                        ,0x94,"IsValid()");
    if (bVar22) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pFVar27->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (pFVar27->SystemInstance).Object;
  dVar8 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.X;
  dVar9 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.Y;
  dVar10 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.Z;
  dVar11 = (pFVar5->LocalBounds).Max.field0_0x0._s_0.X;
  dVar12 = (pFVar5->LocalBounds).Max.field0_0x0._s_0.Y;
  dVar13 = (pFVar5->LocalBounds).Max.field0_0x0._s_0.Z;
  uVar14 = (pFVar5->LocalBounds).IsValid;
  uVar15 = (pFVar5->LocalBounds).Pad[0];
  uVar16 = (pFVar5->LocalBounds).Pad[1];
  uVar17 = (pFVar5->LocalBounds).Pad[2];
  uVar18 = (pFVar5->LocalBounds).Pad[3];
  uVar19 = (pFVar5->LocalBounds).Pad[4];
  uVar20 = (pFVar5->LocalBounds).Pad[5];
  uVar21 = (pFVar5->LocalBounds).Pad[6];
  pUVar25 = (UWorld *)this->_padding_;
  if (pUVar25 == (UWorld *)0x0) {
    pUVar25 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  uVar4 = (this->CurrLocalBounds).IsValid;
  fVar28 = pUVar25->DeltaTimeSeconds + this->ForceUpdateTransformTime;
  this->ForceUpdateTransformTime = fVar28;
  if ((((((uVar4 == '\0') || (dVar3 = (this->CurrLocalBounds).Min.field0_0x0._s_0.X, dVar8 < dVar3))
        || (pTVar1 = &(this->CurrLocalBounds).Max,
           (pTVar1->field0_0x0)._s_0.X <= dVar8 && dVar8 != (pTVar1->field0_0x0)._s_0.X)) ||
       ((dVar9 < (this->CurrLocalBounds).Min.field0_0x0._s_0.Y ||
        (pdVar2 = &(this->CurrLocalBounds).Max.field0_0x0._s_0.Y,
        *pdVar2 <= dVar9 && dVar9 != *pdVar2)))) ||
      ((dVar10 < (this->CurrLocalBounds).Min.field0_0x0._s_0.Z ||
       ((pdVar2 = &(this->CurrLocalBounds).Max.field0_0x0._s_0.Z,
        *pdVar2 <= dVar10 && dVar10 != *pdVar2 || (dVar11 < dVar3)))))) ||
     ((pTVar1 = &(this->CurrLocalBounds).Max,
      (pTVar1->field0_0x0)._s_0.X <= dVar11 && dVar11 != (pTVar1->field0_0x0)._s_0.X ||
      ((((dVar12 < (this->CurrLocalBounds).Min.field0_0x0._s_0.Y ||
         (pdVar2 = &(this->CurrLocalBounds).Max.field0_0x0._s_0.Y,
         *pdVar2 <= dVar12 && dVar12 != *pdVar2)) ||
        (dVar13 < (this->CurrLocalBounds).Min.field0_0x0._s_0.Z)) ||
       ((pdVar2 = &(this->CurrLocalBounds).Max.field0_0x0._s_0.Z,
        *pdVar2 <= dVar13 && dVar13 != *pdVar2 ||
        (this->MaxTimeBeforeForceUpdateTransform <= fVar28 &&
         fVar28 != this->MaxTimeBeforeForceUpdateTransform)))))))) {
    local_98.Pitch = (double)this->_padding_;
    local_98.Yaw = (double)this->_padding_;
    this->ForceUpdateTransformTime = 0.0;
    local_98.Roll = (double)this->_padding_;
    (this->CurrLocalBounds).Min.field0_0x0._s_0.X = dVar8;
    (this->CurrLocalBounds).Min.field0_0x0._s_0.Y = dVar9;
    (this->CurrLocalBounds).Min.field0_0x0._s_0.Z = dVar10;
    (this->CurrLocalBounds).Max.field0_0x0._s_0.X = dVar11;
    (this->CurrLocalBounds).Max.field0_0x0._s_0.Y = dVar12;
    (this->CurrLocalBounds).Max.field0_0x0._s_0.Z = dVar13;
    (this->CurrLocalBounds).IsValid = uVar14;
    (this->CurrLocalBounds).Pad[0] = uVar15;
    (this->CurrLocalBounds).Pad[1] = uVar16;
    (this->CurrLocalBounds).Pad[2] = uVar17;
    (this->CurrLocalBounds).Pad[3] = uVar18;
    (this->CurrLocalBounds).Pad[4] = uVar19;
    (this->CurrLocalBounds).Pad[5] = uVar20;
    (this->CurrLocalBounds).Pad[6] = uVar21;
    pTVar26 = FRotationConversionCache::RotatorToQuat
                        ((FRotationConversionCache *)&this->_padding_,local_78,&local_98);
    USceneComponent::UpdateComponentToWorldWithParent
              ((USceneComponent *)this,(USceneComponent *)this->_padding_,(FName)this->_padding_,
               None,pTVar26,None);
  }
  if ((this->_padding_ != 0) &&
     (pFVar6 = *(FNiagaraSystemRenderData **)(this->_padding_ + 0x2d8),
     pFVar6 != (FNiagaraSystemRenderData *)0x0)) {
    pFVar27 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
    FNiagaraSystemInstanceController::PostTickRenderers(pFVar27,pFVar6);
  }
  if (this->bIsLifeTimeCheckingEnabled != false) {
    if ((this_00->Object == (FNiagaraSystemInstanceController *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar28 = FNiagaraSystemInstanceController::GetAge<>(this_00->Object);
    if (__real_42700000 < fVar28) {
      pFVar27 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(this_00);
      if (2 < (byte)LogNiagara._0_1_) {
        local_res10 = (FName)((pFVar27->SystemInstance).Object)->System->_padding_;
        ::FName::ToString(&local_res10,&local_c8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      this->bIsLifeTimeCheckingEnabled = false;
    }
  }
  if (this->bRecachePSOs != 0) {
    (**(code **)(this->_padding_ + 0x378))(this);
    this->bRecachePSOs = 0;
  }
  return;
}

// RegisterWithScalabilityManager @ 1490607f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::RegisterWithScalabilityManager(UNiagaraComponent *this)

{
  UNiagaraSystem *this_00;
  UNiagaraEffectType *pUVar1;
  UWorld *pUVar2;
  FNiagaraWorldManager *this_01;
  
  if ((((this->ScalabilityManagerHandle == -1) &&
       (this->bAllowScalability == 1 && this->bOwnerAllowsScalabiltiy == 1)) &&
      (this_00 = (this->Asset).field0_0x0.DebugPtr, this_00 != (UNiagaraSystem *)0x0)) &&
     (pUVar1 = UNiagaraSystem::GetEffectType(this_00), pUVar1 != (UNiagaraEffectType *)0x0)) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_01 = FNiagaraWorldManager::Get(pUVar2);
    if (this_01 != (FNiagaraWorldManager *)0x0) {
      this->ScalabilityEffectType = pUVar1;
      FNiagaraWorldManager::RegisterWithScalabilityManager(this_01,this,pUVar1);
    }
  }
  return;
}

// ReinitializeSystem @ 1490626e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::ReinitializeSystem(UNiagaraComponent *this)

{
  undefined1 uVar1;
  ENCPoolMethod EVar2;
  
  EVar2 = this->PoolingMethod;
  this->bAutoDestroy = 0;
  this->PoolingMethod = None;
  DestroyInstance(this);
  this->PoolingMethod = EVar2;
  *(uint *)&this->field_0x678 = *(uint *)&this->field_0x678 & 0xfffffffe | this->bAutoDestroy;
                    /* WARNING: Could not recover jumptable at 0x000149062746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,1);
  return;
}

// ReleaseToPool @ 1490629f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::ReleaseToPool(UNiagaraComponent *this)

{
  UNiagaraSystem *this_00;
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  UEnum *this_01;
  UWorld *pUVar4;
  FNiagaraWorldManager *pFVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((this == (UNiagaraComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
     , ((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
    if (this->PoolingMethod == ManualRelease) {
      if ((this->_padding_ & 0x100000) == 0) {
        UnregisterWithScalabilityManager(this);
        pUVar4 = (UWorld *)this->_padding_;
        if (((pUVar4 == (UWorld *)0x0) &&
            (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
            pUVar4 == (UWorld *)0x0)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("World",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                               ,0x33b,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar5 = FNiagaraWorldManager::Get(pUVar4);
        if (pFVar5 == (FNiagaraWorldManager *)0x0) {
          (**(code **)(this->_padding_ + 0x4a0))(this,0);
        }
        else {
          UNiagaraComponentPool::ReclaimWorldParticleSystem
                    ((pFVar5->ComponentPool).field0_0x0.DebugPtr,this);
        }
      }
      else {
        this->PoolingMethod = ManualRelease_OnComplete;
        (**(code **)(this->_padding_ + 0x2c0))();
      }
    }
    else if (((GbEnableNiagaraSystemPooling != 0) && (GNiagaraLogVerboseWarnings != 0)) &&
            (2 < (byte)LogNiagara._0_1_)) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      this_00 = (this->Asset).field0_0x0.DebugPtr;
      if (this_00 == (UNiagaraSystem *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0);
      }
      this_01 = StaticEnum<enum_ENCPoolMethod>();
      UEnum::GetNameStringByValue(this_01,&local_28,(ulonglong)this->PoolingMethod);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RequiresGameThreadEndOfFrameRecreate @ 149063c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::RequiresGameThreadEndOfFrameRecreate(UNiagaraComponent *this)

{
  return false;
}

// RequiresSoloMode @ 149063d20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::RequiresSoloMode(UNiagaraComponent *this)

{
  UNiagaraSystem *pUVar1;
  
  if ((((this->bForceSolo == 0) && ((this->SimCache).field0_0x0.DebugPtr == (UNiagaraSimCache *)0x0)
       ) && ((float)((uint)(this->CustomTimeDilation - __real_3f800000) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
     ((pUVar1 = (this->Asset).field0_0x0.DebugPtr, pUVar1 == (UNiagaraSystem *)0x0 ||
      (pUVar1->bFixedTickDelta == false)))) {
    return false;
  }
  return true;
}

// ResetSystem @ 149064520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::ResetSystem(UNiagaraComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149064525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,1);
  return;
}

// ResolveOwnerAllowsScalability @ 149064d80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraComponent::ResolveOwnerAllowsScalability(UNiagaraComponent *this,bool param_1)

{
  UNiagaraSystem *this_00;
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  this->bOwnerAllowsScalabiltiy = 1;
  if (((NiagaraComponentPrivate::GCanPreventScalabilityCullingOnPlayerFX != 0) &&
      (this_00 = (this->Asset).field0_0x0.DebugPtr, this_00 != (UNiagaraSystem *)0x0)) &&
     (bVar1 = UNiagaraSystem::AllowScalabilityForLocalPlayerFX(this_00), !bVar1)) {
    if ((this->bForceLocalPlayerEffect != 0) ||
       (bVar1 = FNiagaraWorldManager::IsComponentLocalPlayerLinked((USceneComponent *)this), bVar1))
    {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x20;
    }
    this->bOwnerAllowsScalabiltiy = uVar2 >> 5;
  }
  if (param_1) {
    if (this->bOwnerAllowsScalabiltiy == 0) {
      if (this->bIsCulledByScalability != 0) {
        ActivateInternal(this,false,true);
      }
      UnregisterWithScalabilityManager(this);
    }
    else if ((this->_padding_ & 0x100000) != 0) {
      RegisterWithScalabilityManager(this);
    }
  }
  return this->bOwnerAllowsScalabiltiy;
}

// SeekToDesiredAge @ 1490652b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SeekToDesiredAge(UNiagaraComponent *this,float param_1)

{
  this->DesiredAge = param_1;
  this->bIsSeeking = true;
  return;
}

// SendRenderDynamicData_Concurrent @ 1490652d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SendRenderDynamicData_Concurrent(UNiagaraComponent *this)

{
  TAtomic<unsigned___int64> *pTVar1;
  int *piVar2;
  UNiagaraSystem *pUVar3;
  FNiagaraSystemRenderData *pFVar4;
  FNiagaraSystemInstance *pFVar5;
  UNiagaraCullProxyComponent *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraSystemInstance *pFVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  LARGE_INTEGER LVar14;
  ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> FVar15;
  int iVar16;
  bool bVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentSendRenderData> FVar19;
  UWorld *pUVar20;
  FParticlePerfStats *pFVar21;
  FParticlePerfStats *pFVar22;
  FParticlePerfStats *pFVar23;
  FNiagaraSystemInstanceController *pFVar24;
  FNiagaraSystemInstanceController *pFVar25;
  code **ppcVar26;
  FRenderCommandList *this_00;
  longlong lVar27;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar28;
  uchar auVar29 [4];
  uchar auVar30 [4];
  uchar auVar31 [4];
  uchar auVar32 [4];
  uchar auVar33 [4];
  uchar auVar34 [4];
  uchar auVar35 [4];
  uchar auVar36 [4];
  uchar auVar37 [4];
  uchar auVar38 [4];
  uchar auVar39 [4];
  uchar auVar40 [4];
  uchar auVar41 [4];
  uchar auVar42 [4];
  uchar auVar43 [4];
  uchar auVar44 [4];
  uchar auVar45 [4];
  uchar auVar46 [4];
  uchar auVar47 [4];
  uchar auVar48 [4];
  uchar auVar49 [4];
  uchar auVar50 [4];
  uchar auVar51 [4];
  uchar auVar52 [4];
  uchar auVar53 [4];
  uchar auVar54 [4];
  uchar auVar55 [4];
  uchar auVar56 [4];
  uchar auVar57 [4];
  uchar auVar58 [4];
  uchar auVar59 [4];
  undefined4 uVar60;
  undefined1 auStackY_378 [32];
  FParticlePerfStats *local_318;
  FColor_u_0 local_310 [2];
  FName local_308;
  FLLMScope local_300;
  uint local_2fc;
  FName local_2f8;
  TSharedPtr<FNiagaraSystemInstanceController,1> *local_2f0;
  FNiagaraSystemRenderData *local_2e8;
  LARGE_INTEGER local_2e0;
  FName local_2d8;
  LARGE_INTEGER local_2c8;
  UNiagaraComponent *local_2c0;
  LARGE_INTEGER local_2b8;
  LARGE_INTEGER local_2b0;
  FMemScope local_2a8;
  FStatMessage local_2a0;
  uint local_290;
  float fStack_28c;
  FParticlePerfStats *pFStack_288;
  FParticlePerfStats *local_280;
  FParticlePerfStats *pFStack_278;
  FName local_270 [2];
  uchar local_260 [4];
  uchar auStack_25c [4];
  uchar auStack_258 [4];
  uchar auStack_254 [4];
  uchar local_250 [4];
  uchar auStack_24c [4];
  uchar auStack_248 [4];
  uchar auStack_244 [4];
  uchar local_240 [4];
  uchar auStack_23c [4];
  uchar auStack_238 [4];
  uchar auStack_234 [4];
  uchar local_230 [4];
  uchar auStack_22c [4];
  uchar auStack_228 [4];
  uchar auStack_224 [4];
  uchar local_220 [4];
  uchar auStack_21c [4];
  uchar auStack_218 [4];
  uchar auStack_214 [4];
  uchar local_210 [4];
  uchar auStack_20c [4];
  uchar auStack_208 [4];
  uchar auStack_204 [4];
  uchar local_200 [4];
  uchar auStack_1fc [4];
  uchar auStack_1f8 [4];
  uchar auStack_1f4 [4];
  uchar local_1f0 [4];
  uchar auStack_1ec [4];
  uchar auStack_1e8 [4];
  uchar auStack_1e4 [60];
  code *local_1a8 [2];
  code *local_198 [3];
  code **local_180;
  code *local_178 [2];
  code *local_168 [3];
  code **local_150;
  TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  FLLMScope::FLLMScope(&local_300,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_2a8,Niagara,true);
  if (__CsvProfilerStat2350 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat2350 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  if (__CsvProfilerStat2351 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_NiagaraSendRenderDynamicData",_GCsvCategory_Particles.Index);
    __CsvProfilerStat2351 = true;
  }
  local_2fc = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_NiagaraSendRenderDynamicData",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_NiagaraSendRenderDynamicData");
  pFVar23 = (FParticlePerfStats *)0x0;
  FVar19 = StatPtr_STAT_NiagaraComponentSendRenderData;
  if (StatPtr_STAT_NiagaraComponentSendRenderData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentSendRenderData>)0x0) {
    pFVar18 = ::FName::FName(local_270,"STAT_NiagaraComponentSendRenderData");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentSendRenderData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraComponentSendRenderData,
                        *pFVar18,L"Send Render Data (GT)","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar19;
  bVar11 = false;
  bVar13 = false;
  local_2d8.ComparisonIndex.Value = 0;
  local_2d8.Number = 0;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_1490654be:
    bVar12 = false;
    FVar28 = local_2d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_310[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_310[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2f8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_2f8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2f8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x930);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1490654be;
    local_308 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar12 = true;
  }
  pUVar20 = (UWorld *)this->_padding_;
  pUVar3 = (this->Asset).field0_0x0.DebugPtr;
  pFVar21 = pFVar23;
  if ((((pUVar20 != (UWorld *)0x0) ||
       (pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar20 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar21 = FParticlePerfStats::GetWorldPerfStats(pUVar20);
  }
  pFVar22 = pFVar23;
  if (((pUVar3 != (UNiagaraSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar22 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar3);
  }
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar23 = FParticlePerfStats::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  local_2e0.QuadPart = -1;
  if (((pFVar21 != (FParticlePerfStats *)0x0) || (pFVar22 != (FParticlePerfStats *)0x0)) ||
     (pFVar23 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_2c8);
    local_2e0 = local_2c8;
  }
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  local_308 = (FName)this->_padding_;
  if ((local_308 == (FName)0x0) ||
     (pFVar4 = ((FNiagaraSceneProxy *)local_308)->RenderData, local_2e8 = pFVar4,
     pFVar4 == (FNiagaraSystemRenderData *)0x0)) goto LAB_149065b56;
  local_2f0 = &this->SystemInstanceController;
  if ((local_2f0->Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_290 = local_290 & 0xffffff00;
  pFVar5 = (((this->SystemInstanceController).Object)->SystemInstance).Object;
  *(undefined8 *)&(pFVar4->LWCRenderTile).field0_0x0 = *(undefined8 *)&(pFVar5->LWCTile).field0_0x0;
  (pFVar4->LWCRenderTile).field0_0x0._s_0.Z = (pFVar5->LWCTile).field0_0x0._s_0.Z;
  if (this->bEnablePreviewLODDistance == 0) {
    fStack_28c = 0.0;
  }
  else {
    fStack_28c = this->PreviewLODDistance;
  }
  pUVar20 = (UWorld *)this->_padding_;
  pUVar3 = (this->Asset).field0_0x0.DebugPtr;
  if (((pUVar20 == (UWorld *)0x0) &&
      (pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar20 == (UWorld *)0x0)) ||
     (((int)FParticlePerfStats::WorldStatsReaders < 1 ||
      (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)))) {
    local_318 = (FParticlePerfStats *)0x0;
  }
  else {
    local_318 = FParticlePerfStats::GetWorldPerfStats(pUVar20);
  }
  if (((pUVar3 == (UNiagaraSystem *)0x0) || ((int)FParticlePerfStats::SystemStatsReaders < 1)) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    local_280 = (FParticlePerfStats *)0x0;
  }
  else {
    local_280 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar3);
  }
  if (((int)FParticlePerfStats::ComponentStatsReaders < 1) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    pFStack_278 = (FParticlePerfStats *)0x0;
  }
  else {
    pFStack_278 = FParticlePerfStats::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  pFStack_288 = local_318;
  local_148.AllocatorInstance.SecondaryData =
       (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 8;
  if ((this->bIsCulledByScalability == 0) ||
     (pUVar6 = (this->CullProxy).field0_0x0.DebugPtr, pUVar6 == (UNiagaraCullProxyComponent *)0x0))
  {
    pFVar25 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(local_2f0);
    FNiagaraSystemInstanceController::GenerateSetDynamicDataCommands
              (pFVar25,&local_148,local_2e8,(FNiagaraSceneProxy *)local_308);
  }
  else {
    pFVar25 = *(FNiagaraSystemInstanceController **)&pUVar6->field_0x648;
    pTVar7 = *(TReferenceControllerBase<1> **)&pUVar6->field_0x650;
    local_290 = CONCAT31(local_290._1_3_,1);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar25 == (FNiagaraSystemInstanceController *)0x0) {
      local_2c0 = this;
      bVar17 = `UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l18::<lambda_1>::operator()
                         (&local_2c0);
      if (bVar17) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar17) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        goto LAB_14906576f;
      }
    }
    else {
LAB_14906576f:
      pFVar5 = (pFVar25->SystemInstance).Object;
      pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->(local_2f0);
      pFVar8 = (pFVar24->SystemInstance).Object;
      dVar10 = (pFVar8->WorldTransform).Rotation.XY.m128d_f64[1];
      (pFVar5->WorldTransform).Rotation.XY.m128d_f64[0] =
           (pFVar8->WorldTransform).Rotation.XY.m128d_f64[0];
      (pFVar5->WorldTransform).Rotation.XY.m128d_f64[1] = dVar10;
      dVar10 = (pFVar8->WorldTransform).Rotation.ZW.m128d_f64[1];
      (pFVar5->WorldTransform).Rotation.ZW.m128d_f64[0] =
           (pFVar8->WorldTransform).Rotation.ZW.m128d_f64[0];
      (pFVar5->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar10;
      dVar10 = (pFVar8->WorldTransform).Translation.XY.m128d_f64[1];
      (pFVar5->WorldTransform).Translation.XY.m128d_f64[0] =
           (pFVar8->WorldTransform).Translation.XY.m128d_f64[0];
      (pFVar5->WorldTransform).Translation.XY.m128d_f64[1] = dVar10;
      dVar10 = (pFVar8->WorldTransform).Translation.ZW.m128d_f64[1];
      (pFVar5->WorldTransform).Translation.ZW.m128d_f64[0] =
           (pFVar8->WorldTransform).Translation.ZW.m128d_f64[0];
      (pFVar5->WorldTransform).Translation.ZW.m128d_f64[1] = dVar10;
      dVar10 = (pFVar8->WorldTransform).Scale3D.XY.m128d_f64[1];
      (pFVar5->WorldTransform).Scale3D.XY.m128d_f64[0] =
           (pFVar8->WorldTransform).Scale3D.XY.m128d_f64[0];
      (pFVar5->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar10;
      dVar10 = (pFVar8->WorldTransform).Scale3D.ZW.m128d_f64[1];
      (pFVar5->WorldTransform).Scale3D.ZW.m128d_f64[0] =
           (pFVar8->WorldTransform).Scale3D.ZW.m128d_f64[0];
      (pFVar5->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
      FNiagaraSystemInstanceController::GenerateSetDynamicDataCommands
                (pFVar25,&local_148,local_2e8,(FNiagaraSceneProxy *)local_308);
      pFVar5 = (pFVar25->SystemInstance).Object;
      *&(pFVar5->WorldTransform).Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(pFVar5->WorldTransform).Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(pFVar5->WorldTransform).Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(pFVar5->WorldTransform).Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(pFVar5->WorldTransform).Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(pFVar5->WorldTransform).Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  iVar16 = local_148.ArrayMax;
  local_310[0] = (FColor_u_0)local_148.ArrayNum;
  FVar15 = local_148.AllocatorInstance.SecondaryData;
  auVar29 = local_260;
  auVar30 = auStack_25c;
  auVar31 = auStack_258;
  auVar32 = auStack_254;
  auVar33 = local_250;
  auVar34 = auStack_24c;
  auVar35 = auStack_248;
  auVar36 = auStack_244;
  auVar37 = local_240;
  auVar38 = auStack_23c;
  auVar39 = auStack_238;
  auVar40 = auStack_234;
  auVar41 = local_230;
  auVar42 = auStack_22c;
  auVar43 = auStack_228;
  auVar44 = auStack_224;
  auVar45 = local_220;
  auVar46 = auStack_21c;
  auVar47 = auStack_218;
  auVar48 = auStack_214;
  auVar49 = local_210;
  auVar50 = auStack_20c;
  auVar51 = auStack_208;
  auVar52 = auStack_204;
  auVar53 = local_200;
  auVar54 = auStack_1fc;
  auVar55 = auStack_1f8;
  auVar56 = auStack_1f4;
  auVar57 = local_1f0;
  auVar58 = auStack_1ec;
  auVar59 = auStack_1e8;
  uVar60 = auStack_1e4._0_4_;
  if (local_148.AllocatorInstance.SecondaryData ==
      (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
    auVar29 = (uchar  [4])local_148.AllocatorInstance.InlineData._0_4_;
    auVar30 = (uchar  [4])local_148.AllocatorInstance.InlineData._4_4_;
    auVar31 = (uchar  [4])local_148.AllocatorInstance.InlineData._8_4_;
    auVar32 = (uchar  [4])local_148.AllocatorInstance.InlineData._12_4_;
    auVar33 = (uchar  [4])local_148.AllocatorInstance.InlineData._16_4_;
    auVar34 = (uchar  [4])local_148.AllocatorInstance.InlineData._20_4_;
    auVar35 = (uchar  [4])local_148.AllocatorInstance.InlineData._24_4_;
    auVar36 = (uchar  [4])local_148.AllocatorInstance.InlineData._28_4_;
    auVar37 = (uchar  [4])local_148.AllocatorInstance.InlineData._32_4_;
    auVar38 = (uchar  [4])local_148.AllocatorInstance.InlineData._36_4_;
    auVar39 = (uchar  [4])local_148.AllocatorInstance.InlineData._40_4_;
    auVar40 = (uchar  [4])local_148.AllocatorInstance.InlineData._44_4_;
    auVar41 = (uchar  [4])local_148.AllocatorInstance.InlineData._48_4_;
    auVar42 = (uchar  [4])local_148.AllocatorInstance.InlineData._52_4_;
    auVar43 = (uchar  [4])local_148.AllocatorInstance.InlineData._56_4_;
    auVar44 = (uchar  [4])local_148.AllocatorInstance.InlineData._60_4_;
    auVar45 = (uchar  [4])local_148.AllocatorInstance.InlineData._64_4_;
    auVar46 = (uchar  [4])local_148.AllocatorInstance.InlineData._68_4_;
    auVar47 = (uchar  [4])local_148.AllocatorInstance.InlineData._72_4_;
    auVar48 = (uchar  [4])local_148.AllocatorInstance.InlineData._76_4_;
    auVar49 = (uchar  [4])local_148.AllocatorInstance.InlineData._80_4_;
    auVar50 = (uchar  [4])local_148.AllocatorInstance.InlineData._84_4_;
    auVar51 = (uchar  [4])local_148.AllocatorInstance.InlineData._88_4_;
    auVar52 = (uchar  [4])local_148.AllocatorInstance.InlineData._92_4_;
    auVar53 = (uchar  [4])local_148.AllocatorInstance.InlineData._96_4_;
    auVar54 = (uchar  [4])local_148.AllocatorInstance.InlineData._100_4_;
    auVar55 = (uchar  [4])local_148.AllocatorInstance.InlineData._104_4_;
    auVar56 = (uchar  [4])local_148.AllocatorInstance.InlineData._108_4_;
    auVar57 = (uchar  [4])local_148.AllocatorInstance.InlineData._112_4_;
    auVar58 = (uchar  [4])local_148.AllocatorInstance.InlineData._116_4_;
    auVar59 = (uchar  [4])local_148.AllocatorInstance.InlineData._120_4_;
    uVar60 = local_148.AllocatorInstance.InlineData._124_4_;
  }
  local_148.AllocatorInstance.SecondaryData =
       (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0;
  local_148.ArrayNum = 0;
  local_1a8[0] = (code *)0x0;
  local_148.ArrayMax = 8;
  ppcVar26 = FMemory::Malloc(0xc0,8);
  *ppcVar26 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::`14'::<lambda_2>,1,1>
                       ::_vftable_;
  ppcVar26[1] = (code *)local_308;
  ppcVar26[0x12] = (code *)0x0;
  if (FVar15 == (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
    *(uchar (*) [4])(ppcVar26 + 2) = auVar29;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x14) = auVar30;
    *(uchar (*) [4])(ppcVar26 + 3) = auVar31;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x1c) = auVar32;
    *(uchar (*) [4])(ppcVar26 + 4) = auVar33;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x24) = auVar34;
    *(uchar (*) [4])(ppcVar26 + 5) = auVar35;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x2c) = auVar36;
    *(uchar (*) [4])(ppcVar26 + 6) = auVar37;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x34) = auVar38;
    *(uchar (*) [4])(ppcVar26 + 7) = auVar39;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x3c) = auVar40;
    *(uchar (*) [4])(ppcVar26 + 8) = auVar41;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x44) = auVar42;
    *(uchar (*) [4])(ppcVar26 + 9) = auVar43;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x4c) = auVar44;
    *(uchar (*) [4])(ppcVar26 + 10) = auVar45;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x54) = auVar46;
    *(uchar (*) [4])(ppcVar26 + 0xb) = auVar47;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x5c) = auVar48;
    *(uchar (*) [4])(ppcVar26 + 0xc) = auVar49;
    *(uchar (*) [4])((longlong)ppcVar26 + 100) = auVar50;
    *(uchar (*) [4])(ppcVar26 + 0xd) = auVar51;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x6c) = auVar52;
    *(uchar (*) [4])(ppcVar26 + 0xe) = auVar53;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x74) = auVar54;
    *(uchar (*) [4])(ppcVar26 + 0xf) = auVar55;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x7c) = auVar56;
    *(uchar (*) [4])(ppcVar26 + 0x10) = auVar57;
    *(uchar (*) [4])((longlong)ppcVar26 + 0x84) = auVar58;
    *(uchar (*) [4])(ppcVar26 + 0x11) = auVar59;
    *(undefined4 *)((longlong)ppcVar26 + 0x8c) = uVar60;
  }
  local_180 = ppcVar26;
  if (ppcVar26[0x12] != (code *)0x0) {
    FMemory::Free(ppcVar26[0x12]);
  }
  *(ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand> *)(ppcVar26 + 0x12) = FVar15;
  *(FColor_u_0 *)(ppcVar26 + 0x13) = local_310[0];
  *(int *)((longlong)ppcVar26 + 0x9c) = iVar16;
  ppcVar26[0x14] = (code *)CONCAT44(fStack_28c,local_290);
  ppcVar26[0x15] = (code *)pFStack_288;
  ppcVar26[0x16] = (code *)local_280;
  ppcVar26[0x17] = (code *)pFStack_278;
  if (ppcVar26 + 1 != (code **)0x0) {
    local_1a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::<lambda_2>,void>
                   ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode != All) ||
       (bVar17 = FRenderCommandPipe::
                 Enqueue<TRenderCommandTag<_UNiagaraComponent::SendRenderDynamicData_Concurrent_::__l14::TSTR_NiagaraSetDynamicData2391>_>
                           (&UE::RenderCommandPipe::NiagaraDynamicData,
                            (TUniqueFunction<void___cdecl(void)> *)local_1a8), !bVar17)) {
      local_178[0] = local_1a8[0];
      local_150 = local_180;
      local_180 = (code **)0x0;
      local_1a8[0] = (code *)0x0;
      local_168[0] = local_198[0];
      local_168[1] = local_198[1];
      local_168[2] = local_198[2];
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraComponent::SendRenderDynamicData_Concurrent_::__l14::TSTR_NiagaraSetDynamicData2391>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_UNiagaraComponent::SendRenderDynamicData_Concurrent_::__l14::TSTR_NiagaraSetDynamicData2391>_>_::__l2::<lambda_1>_>
                ((<lambda_1> *)local_178);
      if (local_178[0] != (code *)0x0) {
        ppcVar26 = local_178 + 2;
        if (local_150 != (code **)0x0) {
          ppcVar26 = local_150;
        }
        (**(code **)(*ppcVar26 + 0x10))();
      }
    }
  }
  else {
    FRenderCommandList::
    Enqueue<TRenderCommandTag<_UNiagaraComponent::SendRenderDynamicData_Concurrent_::__l14::TSTR_NiagaraSetDynamicData2391>,TUniqueFunction<void___cdecl(void)>_>
              (this_00,&UE::RenderCommandPipe::NiagaraDynamicData,
               (TUniqueFunction<void___cdecl(void)> *)local_1a8);
  }
  if (local_1a8[0] != (code *)0x0) {
    ppcVar26 = local_1a8 + 2;
    if (local_180 != (code **)0x0) {
      ppcVar26 = local_180;
    }
    (**(code **)(*ppcVar26 + 0x10))();
  }
  if (local_148.AllocatorInstance.SecondaryData !=
      (ForElementType<FNiagaraSystemRenderData::FSetDynamicDataCommand>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
LAB_149065b56:
  LVar14 = local_2e0;
  if (local_2e0.QuadPart != -1) {
    QueryPerformanceCounter(&local_2b8);
    lVar27 = local_2b8.QuadPart - (longlong)LVar14;
    if (pFVar21 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(pFVar21->GameThreadStats).EndOfFrameCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar27);
      UNLOCK();
    }
    if (pFVar22 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(pFVar22->GameThreadStats).EndOfFrameCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar27);
      UNLOCK();
    }
    if (pFVar23 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(pFVar23->GameThreadStats).EndOfFrameCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar27);
      UNLOCK();
    }
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_2a0.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_2a0.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2b0);
      local_2a0.StatData.Pad[4] = '\0';
      local_2a0.StatData.Pad[5] = '\0';
      local_2a0.StatData.Pad[6] = '\0';
      local_2a0.StatData.Pad[7] = '\0';
      local_2a0.StatData.Pad[0] = local_2b0.s.LowPart._0_1_;
      local_2a0.StatData.Pad[1] = local_2b0.s.LowPart._1_1_;
      local_2a0.StatData.Pad[2] = local_2b0.s.LowPart._2_1_;
      local_2a0.StatData.Pad[3] = local_2b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_2a0);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("CoreSystems_NiagaraSendRenderDynamicData",local_2fc);
  FCsvProfiler::EndExclusiveStat("Effects");
  FMemScope::~FMemScope(&local_2a8);
  FLLMScope::~FLLMScope(&local_300);
  return;
}

// Serialize @ 149065dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::Serialize(UNiagaraComponent *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// Serialize @ 149065e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::Serialize(UNiagaraComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase aFStackX_10 [3];
  
  aFStackX_10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(aFStackX_10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  return;
}

// SetActorParameter @ 149065e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetActorParameter(UNiagaraComponent *this,FName param_1,AActor *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr FStackX_8;
  AActor *pAStackX_10;
  AActor *pAStackX_20;
  undefined1 auStack_38 [8];
  FNiagaraTypeDefinitionHandle aFStack_30 [2];
  ForAnyElementType FStack_28;
  undefined8 uStack_20;
  
  auStack_38 = (undefined1  [8])param_1;
  aFStack_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(aFStack_30,&FNiagaraTypeDefinition::UObjectDef);
  FStack_28.Data = (FScriptContainerElement *)0x0;
  uStack_20._0_4_ = 0;
  uStack_20._4_4_ = 0;
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    pAStackX_20 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)&this->OverrideParameters,(TObjectPtr<UObject>)&pAStackX_20
               ,(FNiagaraVariable *)auStack_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    pAStackX_10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pAStackX_10);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              ((this->SystemInstanceController).Object,param_1,
               (TWeakObjectPtr<UObject,FWeakObjectPtr>)FStackX_8);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  return;
}

// SetAgeUpdateMode @ 149065e60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetAgeUpdateMode(UNiagaraComponent *this,ENiagaraAgeUpdateMode param_1)

{
  this->AgeUpdateMode = param_1;
  return;
}

// SetAllowScalability @ 149065e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetAllowScalability(UNiagaraComponent *this,bool param_1)

{
  this->bAllowScalability = 0;
  *(uint *)&this->field_0x6cc = *(uint *)&this->field_0x6cc | (uint)param_1 << 3;
  if (!param_1) {
    UnregisterWithScalabilityManager(this);
    return;
  }
  if ((this->_padding_ & 0x100000) != 0) {
    RegisterWithScalabilityManager(this);
    return;
  }
  return;
}

// SetAsset @ 149066980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetAsset(UNiagaraComponent *this,UNiagaraSystem *param_1,bool param_2)

{
  byte bVar1;
  UNiagaraSystem *pUVar2;
  UNiagaraCullProxyComponent *this_00;
  FNiagaraSystemInstanceController *this_01;
  longlong lVar3;
  ERendererStencilMask EVar4;
  ENiagaraExecutionState EVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  float fVar9;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar2 = (this->Asset).field0_0x0.DebugPtr;
  if (pUVar2 == (UNiagaraSystem *)0x0) {
    bVar8 = param_1 == (UNiagaraSystem *)0x0;
  }
  else {
    bVar8 = pUVar2 == param_1;
  }
  if (bVar8) {
    return;
  }
  if (((GNiagaraLogVerboseWarnings != 0) && (this->PoolingMethod != None)) &&
     (2 < (byte)LogNiagara._0_1_)) {
    if ((param_1 == (UNiagaraSystem *)0x0) || (param_1->_padding_ == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None);
    }
    pUVar2 = (this->Asset).field0_0x0.DebugPtr;
    if ((pUVar2 == (UNiagaraSystem *)0x0) || (pUVar2->_padding_ == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,&local_38,(UObject *)0x0,None);
    }
    if (this->_padding_ == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this_00 = (this->CullProxy).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraCullProxyComponent *)0x0) {
    UNiagaraCullProxyComponent::UnregisterCulledComponent(this_00,this);
    (this->CullProxy).field0_0x0.DebugPtr = (UNiagaraCullProxyComponent *)0x0;
  }
  UnregisterWithScalabilityManager(this);
  this_01 = (this->SystemInstanceController).Object;
  if ((this_01 == (FNiagaraSystemInstanceController *)0x0) ||
     (EVar5 = FNiagaraSystemInstanceController::GetRequestedExecutionState<>(this_01),
     EVar5 != Active)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  DestroyInstanceNotComponent(this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UNiagaraSystem *)0x0)) {
    (this->Asset).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UNiagaraSystem *)0x0) goto LAB_149066b9d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Asset).field0_0x0.DebugPtr = param_1;
  }
  CopyParametersFromAsset(this,param_2);
  FNiagaraParameterStore::Rebind((FNiagaraParameterStore *)&this->OverrideParameters);
LAB_149066b9d:
  pUVar2 = (this->Asset).field0_0x0.DebugPtr;
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    if (pUVar2->bOverrideCastShadow == '\0') {
      bVar7 = *(byte *)((longlong)&this->_padding_ + 6);
    }
    else {
      bVar7 = pUVar2->field_0x59;
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 6);
    *(byte *)((longlong)&this->_padding_ + 6) = (bVar1 ^ bVar7) & 1 ^ bVar1;
    if (pUVar2->bOverrideReceivesDecals == '\0') {
      bVar7 = *(byte *)((longlong)&this->_padding_ + 4) >> 6;
    }
    else {
      bVar7 = (byte)pUVar2->field_0x59 >> 1;
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    *(byte *)((longlong)&this->_padding_ + 4) = (bVar7 << 6 ^ bVar1) & 0x40 ^ bVar1;
    if (pUVar2->bOverrideRenderCustomDepth == '\0') {
      bVar7 = *(byte *)((longlong)&this->_padding_ + 1) >> 6;
    }
    else {
      bVar7 = (byte)pUVar2->field_0x59 >> 2;
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
    *(byte *)((longlong)&this->_padding_ + 1) = (bVar7 << 6 ^ bVar1) & 0x40 ^ bVar1;
    if (pUVar2->bOverrideCustomDepthStencilValue == '\0') {
      EVar4 = *(ERendererStencilMask *)((longlong)&this->_padding_ + 2);
    }
    else {
      EVar4 = pUVar2->CustomDepthStencilWriteMask;
    }
    *(ERendererStencilMask *)((longlong)&this->_padding_ + 2) = EVar4;
    if (pUVar2->bOverrideCustomDepthStencilWriteMask == '\0') {
      iVar6 = *(int *)((longlong)&this->_padding_ + 4);
    }
    else {
      iVar6 = pUVar2->CustomDepthStencilValue;
    }
    *(int *)((longlong)&this->_padding_ + 4) = iVar6;
    if (pUVar2->bOverrideTranslucencySortPriority == '\0') {
      iVar6 = (int)this->_padding_;
    }
    else {
      iVar6 = pUVar2->TranslucencySortPriority;
    }
    *(int *)&this->_padding_ = iVar6;
    if ((bool)pUVar2->bOverrideTranslucencySortDistanceOffset) {
      fVar9 = pUVar2->TranslucencySortDistanceOffset;
    }
    else {
      fVar9 = *(float *)((longlong)&this->_padding_ + 4);
    }
    lVar3 = this->_padding_;
    *(float *)((longlong)&this->_padding_ + 4) = fVar9;
    if (((lVar3 & 1) != 0) && (((this->_padding_ & 0x80000) != 0 || (bVar8)))) {
      (**(code **)(this->_padding_ + 0x2b8))(this,0);
    }
  }
  return;
}

// SetAutoAttachmentParameters @ 149066ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetAutoAttachmentParameters
          (UNiagaraComponent *this,USceneComponent *param_1,FName param_2,EAttachmentRule param_3,
          EAttachmentRule param_4,EAttachmentRule param_5)

{
  USceneComponent *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->AutoAttachParent).WeakPtr,(FObjectPtr)&local_res8);
  this->AutoAttachRotationRule = param_4;
  this->AutoAttachSocketName = param_2;
  this->AutoAttachLocationRule = param_3;
  this->AutoAttachScaleRule = param_5;
  return;
}

// SetAutoDestroy @ 149066d60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetAutoDestroy(UNiagaraComponent *this,bool param_1)

{
  bool bVar1;
  UNiagaraComponent *local_res18 [2];
  
  if (((param_1) && (this->PoolingMethod != None)) &&
     (local_res18[0] = this,
     bVar1 = `UNiagaraComponent::SetAutoDestroy'::__l3::<lambda_1>::operator()(local_res18), !bVar1)
     ) {
    return;
  }
  this->bAutoDestroy = 0;
  *(uint *)&this->field_0x678 = *(uint *)&this->field_0x678 | (uint)param_1;
  return;
}

// SetBoolParameter @ 149066db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetBoolParameter(UNiagaraComponent *this,FName param_1,bool param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_02;
  int *piVar5;
  int iVar6;
  int aiStackX_18 [2];
  FName FStack_28;
  FNiagaraTypeDefinitionHandle aFStack_20 [2];
  void *pvStack_18;
  undefined8 uStack_10;
  
  FStack_28 = param_1;
  aFStack_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(aFStack_20,&FNiagaraTypeDefinition::BoolDef);
  this_01 = (this->SystemInstanceController).Object;
  iVar6 = (param_2 ^ 1) - 1;
  pvStack_18 = (void *)0x0;
  uStack_10 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(aFStack_20);
    iVar4 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar4 != 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar5 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&FStack_28,0);
    if (piVar5 == (int *)0x0) {
      aiStackX_18[0] = -1;
    }
    else {
      aiStackX_18[0] = *piVar5;
      if (aiStackX_18[0] != -1) {
        *(int *)((longlong)aiStackX_18[0] + (this->OverrideParameters)._padding_) = iVar6;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149068c08;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&FStack_28,0,0,aiStackX_18);
    if (aiStackX_18[0] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(int *)((longlong)aiStackX_18[0] + (this->OverrideParameters)._padding_) = iVar6;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,param_2);
  }
LAB_149068c08:
  if (pvStack_18 != (void *)0x0) {
    FMemory::Free(pvStack_18);
  }
  return;
}

// SetCanRenderWhileSeeking @ 149066dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetCanRenderWhileSeeking(UNiagaraComponent *this,bool param_1)

{
  this->bCanRenderWhileSeeking = param_1;
  return;
}

// SetColorParameter @ 149066dd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetColorParameter(UNiagaraComponent *this,FName param_1,FLinearColor *param_2)

{
  SetVariableLinearColor(this,param_1,param_2);
  return;
}

// SetCustomTimeDilation @ 149066df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetCustomTimeDilation(UNiagaraComponent *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(this->CustomTimeDilation - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    this->CustomTimeDilation = param_1;
    UpdateInstanceSoloMode(this);
    return;
  }
  return;
}

// SetDesiredAge @ 149066ef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetDesiredAge(UNiagaraComponent *this,float param_1)

{
  this->DesiredAge = param_1;
  this->bIsSeeking = false;
  return;
}

// SetEmitterEnable @ 149066f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetEmitterEnable(UNiagaraComponent *this,FName param_1,bool param_2)

{
  FNiagaraSystemInstanceController *this_00;
  code *pcVar1;
  bool bVar2;
  FEmitterOverrideInfo *pFVar3;
  
  pFVar3 = FindOrAddEmitterOverrideInfo(this,param_1);
  pFVar3->bEnabled = param_2;
  this_00 = (this->SystemInstanceController).Object;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    bVar2 = FNiagaraSystemInstanceController::IsComplete<>(this_00);
    if (!bVar2) {
      if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FNiagaraSystemInstanceController::SetEmitterEnable<FName,bool>
                ((this->SystemInstanceController).Object,param_1,param_2);
    }
  }
  return;
}

// SetEmitterFixedBounds @ 149066fc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetEmitterFixedBounds
          (UNiagaraComponent *this,FName param_1,TBox<double> *param_2)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  bool bVar15;
  FEmitterOverrideInfo *pFVar16;
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  
  pFVar16 = FindOrAddEmitterOverrideInfo(this,param_1);
  dVar3 = (param_2->Min).field0_0x0._s_0.Y;
  dVar4 = (param_2->Min).field0_0x0._s_0.Z;
  dVar5 = (param_2->Max).field0_0x0._s_0.X;
  (pFVar16->FixedBounds).Min.field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  (pFVar16->FixedBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_2->Max).field0_0x0._s_0.Y;
  dVar6 = (param_2->Max).field0_0x0._s_0.Z;
  (pFVar16->FixedBounds).Min.field0_0x0._s_0.Z = dVar4;
  (pFVar16->FixedBounds).Max.field0_0x0._s_0.X = dVar5;
  uVar7 = param_2->IsValid;
  uVar8 = param_2->Pad[0];
  uVar9 = param_2->Pad[1];
  uVar10 = param_2->Pad[2];
  uVar11 = param_2->Pad[3];
  uVar12 = param_2->Pad[4];
  uVar13 = param_2->Pad[5];
  uVar14 = param_2->Pad[6];
  (pFVar16->FixedBounds).Max.field0_0x0._s_0.Y = dVar3;
  (pFVar16->FixedBounds).Max.field0_0x0._s_0.Z = dVar6;
  (pFVar16->FixedBounds).IsValid = uVar7;
  (pFVar16->FixedBounds).Pad[0] = uVar8;
  (pFVar16->FixedBounds).Pad[1] = uVar9;
  (pFVar16->FixedBounds).Pad[2] = uVar10;
  (pFVar16->FixedBounds).Pad[3] = uVar11;
  (pFVar16->FixedBounds).Pad[4] = uVar12;
  (pFVar16->FixedBounds).Pad[5] = uVar13;
  (pFVar16->FixedBounds).Pad[6] = uVar14;
  pFVar1 = (this->SystemInstanceController).Object;
  if (pFVar1 != (FNiagaraSystemInstanceController *)0x0) {
    local_48._s_0.X = (param_2->Min).field0_0x0._s_0.X;
    local_48._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
    local_48._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
    dStack_30 = (param_2->Max).field0_0x0._s_0.X;
    local_28 = (param_2->Max).field0_0x0._s_0.Y;
    dStack_20 = (param_2->Max).field0_0x0._s_0.Z;
    local_18._0_1_ = param_2->IsValid;
    local_18._1_1_ = param_2->Pad[0];
    local_18._2_1_ = param_2->Pad[1];
    local_18._3_1_ = param_2->Pad[2];
    local_18._4_1_ = param_2->Pad[3];
    local_18._5_1_ = param_2->Pad[4];
    local_18._6_1_ = param_2->Pad[5];
    local_18._7_1_ = param_2->Pad[6];
    if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4531953176097587049>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                          ,0x97,"IsValid()");
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar15) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    FNiagaraSystemInstance::SetEmitterFixedBounds
              ((pFVar1->SystemInstance).Object,param_1,(TBox<double> *)&local_48._s_0);
  }
  return;
}

// SetFloatParameter @ 1490670c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetFloatParameter(UNiagaraComponent *this,FName param_1,float param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_02;
  int *piVar5;
  int aiStackX_8 [2];
  FName FStack_38;
  FNiagaraTypeDefinitionHandle aFStack_30 [2];
  void *pvStack_28;
  undefined8 uStack_20;
  
  FStack_38 = param_1;
  aFStack_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(aFStack_30,&FNiagaraTypeDefinition::FloatDef);
  this_01 = (this->SystemInstanceController).Object;
  pvStack_28 = (void *)0x0;
  uStack_20 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(aFStack_30);
    iVar4 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar4 != 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar5 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&FStack_38,0);
    if (piVar5 == (int *)0x0) {
      aiStackX_8[0] = -1;
    }
    else {
      aiStackX_8[0] = *piVar5;
      if (aiStackX_8[0] != -1) {
        *(float *)((longlong)aiStackX_8[0] + (this->OverrideParameters)._padding_) = param_2;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149068d7c;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&FStack_38,0,0,aiStackX_8);
    if (aiStackX_8[0] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)((longlong)aiStackX_8[0] + (this->OverrideParameters)._padding_) = param_2;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,param_2);
  }
LAB_149068d7c:
  if (pvStack_28 != (void *)0x0) {
    FMemory::Free(pvStack_28);
  }
  return;
}

// SetForceLocalPlayerEffect @ 1490670d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetForceLocalPlayerEffect(UNiagaraComponent *this,bool param_1)

{
  this->bForceLocalPlayerEffect = 0;
  *(uint *)&this->field_0x6cc = *(uint *)&this->field_0x6cc | (uint)param_1 << 4;
  ResolveOwnerAllowsScalability(this,true);
  return;
}

// SetForceSolo @ 1490670f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetForceSolo(UNiagaraComponent *this,bool param_1)

{
  if (ZPULL(*(undefined4 *)&this->field_0x638,0,1) != (uint)param_1) {
    *(uint *)&this->field_0x638 = *(undefined4 *)&this->field_0x638 & 0xfffffffe | (uint)param_1;
    UpdateInstanceSoloMode(this);
    return;
  }
  return;
}

// SetGpuComputeDebug @ 149067120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetGpuComputeDebug(UNiagaraComponent *this,bool param_1)

{
  FNiagaraSystemInstanceController *this_00;
  uint uVar1;
  
  if (ZPULL(*(undefined4 *)&this->field_0x638,1,1) != (uint)param_1) {
    uVar1 = *(undefined4 *)&this->field_0x638 & 0xfffffffd | (uint)param_1 + (uint)param_1;
    *(uint *)&this->field_0x638 = uVar1;
    this_00 = (this->SystemInstanceController).Object;
    if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
      FNiagaraSystemInstanceController::SetGpuComputeDebug<bool>
                (this_00,(bool)((byte)(uVar1 >> 1) & 1));
      return;
    }
  }
  return;
}

// SetIntParameter @ 149067170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetIntParameter(UNiagaraComponent *this,FName param_1,int param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_02;
  int *piVar5;
  int aiStackX_8 [2];
  FName FStack_28;
  FNiagaraTypeDefinitionHandle aFStack_20 [2];
  void *pvStack_18;
  undefined8 uStack_10;
  
  FStack_28 = param_1;
  aFStack_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(aFStack_20,&FNiagaraTypeDefinition::IntDef);
  this_01 = (this->SystemInstanceController).Object;
  pvStack_18 = (void *)0x0;
  uStack_10 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(aFStack_20);
    iVar4 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar4 != 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar5 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&FStack_28,0);
    if (piVar5 == (int *)0x0) {
      aiStackX_8[0] = -1;
    }
    else {
      aiStackX_8[0] = *piVar5;
      if (aiStackX_8[0] != -1) {
        *(int *)((longlong)aiStackX_8[0] + (this->OverrideParameters)._padding_) = param_2;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149068eea;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&FStack_28,0,0,aiStackX_8);
    if (aiStackX_8[0] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(int *)((longlong)aiStackX_8[0] + (this->OverrideParameters)._padding_) = param_2;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,param_2);
  }
LAB_149068eea:
  if (pvStack_18 != (void *)0x0) {
    FMemory::Free(pvStack_18);
  }
  return;
}

// SetLODDistance @ 149067180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetLODDistance(UNiagaraComponent *this,float param_1,float param_2)

{
  FNiagaraSystemInstanceController *this_00;
  
  if ((this->bEnablePreviewLODDistance == 0) &&
     (this_00 = (this->SystemInstanceController).Object,
     this_00 != (FNiagaraSystemInstanceController *)0x0)) {
    FNiagaraSystemInstanceController::SetLODDistance<float,float,bool>
              (this_00,param_1,param_2,false);
    return;
  }
  return;
}

// SetLockDesiredAgeDeltaTimeToSeekDelta @ 1490671b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(UNiagaraComponent *this,bool param_1)

{
  this->bLockDesiredAgeDeltaTimeToSeekDelta = param_1;
  return;
}

// SetMaxSimTime @ 1490671c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetMaxSimTime(UNiagaraComponent *this,float param_1)

{
  this->MaxSimTime = param_1;
  return;
}

// SetNiagaraVariableActor @ 1490671f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableActor(UNiagaraComponent *this,FString *param_1,AActor *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableObject(this,*pFVar1,(UObject *)param_2);
  return;
}

// SetNiagaraVariableBool @ 149067240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableBool(UNiagaraComponent *this,FString *param_1,bool param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableBool(this,*pFVar1,param_2);
  return;
}

// SetNiagaraVariableFloat @ 149067290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableFloat(UNiagaraComponent *this,FString *param_1,float param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableFloat(this,*pFVar1,param_2);
  return;
}

// SetNiagaraVariableInt @ 1490672e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableInt(UNiagaraComponent *this,FString *param_1,int param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableInt(this,*pFVar1,param_2);
  return;
}

// SetNiagaraVariableLinearColor @ 149067330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableLinearColor
          (UNiagaraComponent *this,FString *param_1,FLinearColor *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableLinearColor(this,*pFVar1,param_2);
  return;
}

// SetNiagaraVariableMatrix @ 149067380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableMatrix
          (UNiagaraComponent *this,FString *param_1,TMatrix<double> *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableMatrix(this,*pFVar1,param_2);
  return;
}

// SetNiagaraVariableObject @ 1490673d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableObject
          (UNiagaraComponent *this,FString *param_1,UObject *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableObject(this,*pFVar1,param_2);
  return;
}

// SetNiagaraVariablePosition @ 149067420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariablePosition
          (UNiagaraComponent *this,FString *param_1,TVector<double> *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  TVector<double>_u_0 local_28;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  SetVariablePosition(this,*pFVar1,(TVector<double> *)&local_28._s_0);
  return;
}

// SetNiagaraVariableQuat @ 149067480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableQuat
          (UNiagaraComponent *this,FString *param_1,TQuat<double> *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableQuat(this,*pFVar1,param_2);
  return;
}

// SetNiagaraVariableVec2 @ 1490674d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableVec2
          (UNiagaraComponent *this,FString *param_1,TVector2<double> *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  TVector2<double>_u_0 local_18;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  SetVariableVec2(this,*pFVar1,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetNiagaraVariableVec3 @ 149067530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableVec3
          (UNiagaraComponent *this,FString *param_1,TVector<double> *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  TVector<double>_u_0 local_28;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  SetVariableVec3(this,*pFVar1,(TVector<double> *)&local_28._s_0);
  return;
}

// SetNiagaraVariableVec4 @ 149067590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetNiagaraVariableVec4
          (UNiagaraComponent *this,FString *param_1,TVector4<double> *param_2)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res10 [3];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res10,pwVar2);
  SetVariableVec4(this,*pFVar1,param_2);
  return;
}

// SetOcclusionQueryMode @ 1490675e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetOcclusionQueryMode(UNiagaraComponent *this,ENiagaraOcclusionQueryMode param_1)

{
  if (param_1 != this->OcclusionQueryMode) {
    this->OcclusionQueryMode = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetPaused @ 149067600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetPaused(UNiagaraComponent *this,bool param_1)

{
  FNiagaraSystemInstanceController *this_00;
  code *pcVar1;
  bool bVar2;
  ENiagaraExecutionState EVar3;
  
  this->bDesiredPauseState = 0;
  *(uint *)&this->field_0x6cc = *(uint *)&this->field_0x6cc | (uint)param_1 << 9;
  this_00 = (this->SystemInstanceController).Object;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    EVar3 = FNiagaraSystemInstanceController::GetRequestedExecutionState<>(this_00);
    if (EVar3 == Active) {
      if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      EVar3 = FNiagaraSystemInstanceController::GetActualExecutionState<>
                        ((this->SystemInstanceController).Object);
      if (EVar3 == Active) {
        if (param_1) {
          UnregisterWithScalabilityManager(this);
        }
        else {
          RegisterWithScalabilityManager(this);
        }
        SetPausedInternal(this,this->bDesiredPauseState,false);
      }
    }
  }
  return;
}

// SetPausedInternal @ 1490676c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetPausedInternal(UNiagaraComponent *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  FNiagaraSystemInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UNiagaraEffectType *pUVar6;
  UWorld *pUVar7;
  FNiagaraSystemInstanceController *pFVar8;
  byte bVar9;
  
  puVar1 = &this->field_0x6cc;
  if (param_2) {
    this->bIsCulledByScalability = 0;
    *(uint *)puVar1 = *(uint *)puVar1 | (uint)param_1 << 6;
  }
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    return;
  }
  if (((this->Asset).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetAsset()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                         ,0x47d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = UNiagaraSystem::GetEffectType((this->Asset).field0_0x0.DebugPtr);
  bVar9 = 0;
  if (pUVar6 != (UNiagaraEffectType *)0x0) {
    if ((pUVar6->CullReaction == PauseResume) && (this->bIsCulledByScalability != 0)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
      if ((pUVar6->CullReaction == PauseResumeWithDelta) &&
         ((((bVar9 = this->bIsCulledByScalability, this->_padding_ != 0 ||
            (pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
            pUVar7 != (UWorld *)0x0)) && (param_1)) &&
          (pFVar8 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                              (&this->SystemInstanceController),
          (pFVar8->SystemInstance).Object != (FNiagaraSystemInstance *)0x0)))) {
        pFVar8 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                           (&this->SystemInstanceController);
        pFVar2 = (pFVar8->SystemInstance).Object;
        pUVar7 = (UWorld *)this->_padding_;
        if (pUVar7 == (UWorld *)0x0) {
          pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        pFVar2->LastTickTime = pUVar7->TimeSeconds;
      }
    }
  }
  if (((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (this->SystemInstanceController).Object;
  if ((bVar9 == 0) && (this->bDesiredPauseState == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((pFVar8->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x8e,"IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pFVar8->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraSystemInstance::SetPaused((pFVar8->SystemInstance).Object,bVar4);
  return;
}

// SetPreviewLODDistance @ 1490678b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetPreviewLODDistance
          (UNiagaraComponent *this,bool param_1,float param_2,float param_3)

{
  undefined1 *puVar1;
  FNiagaraSystemInstanceController *this_00;
  FNiagaraSystemInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this_00 = (this->SystemInstanceController).Object;
  this->PreviewLODDistance = param_2;
  *(uint *)&this->field_0x6bc = *(uint *)&this->field_0x6bc & 0xfffffffe | (uint)param_1;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    if (param_1) {
      FNiagaraSystemInstanceController::SetLODDistance<float,float,bool>
                (this_00,param_2,param_3,true);
      return;
    }
    if ((this_00->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587074>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x7e,"IsValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this_00->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    pFVar2 = (this_00->SystemInstance).Object;
    pFVar2->bLODDistanceIsValid = '\0';
    pFVar2->bLODDistanceIsOverridden = '\0';
    pFVar2->LODDistance = 0.0;
    pFVar2->MaxLODDistance = 1.0;
  }
  return;
}

// SetRandomSeedOffset @ 149067bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetRandomSeedOffset(UNiagaraComponent *this,int param_1)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->SystemInstanceController).Object;
  this->RandomSeedOffset = param_1;
  if (pFVar1 != (FNiagaraSystemInstanceController *)0x0) {
    if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587083>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x75,"IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    ((pFVar1->SystemInstance).Object)->RandomSeedOffset = param_1;
  }
  return;
}

// SetRenderingEnabled @ 149067c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetRenderingEnabled(UNiagaraComponent *this,bool param_1)

{
  this->bRenderingEnabled = 0;
  *(uint *)&this->field_0x678 = *(uint *)&this->field_0x678 | (uint)param_1 * 2;
  return;
}

// SetSeekDelta @ 149067cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetSeekDelta(UNiagaraComponent *this,float param_1)

{
  this->SeekDelta = param_1;
  return;
}

// SetSimCache @ 149067cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetSimCache(UNiagaraComponent *this,UNiagaraSimCache *param_1,bool param_2)

{
  UNiagaraSimCache *pUVar1;
  bool bVar2;
  
  if (((this->_padding_ & 0x100000) == 0) ||
     (pUVar1 = (this->SimCache).field0_0x0.DebugPtr, pUVar1 == (UNiagaraSimCache *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = (pUVar1->CreateParameters).AttributeCaptureMode != All;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSimCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SimCache).field0_0x0.DebugPtr = param_1;
  UpdateInstanceSoloMode(this);
  if ((param_2) || (bVar2)) {
    ReinitializeSystem(this);
  }
  return;
}

// SetSystemFixedBounds @ 149067d60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetSystemFixedBounds(UNiagaraComponent *this,TBox<double> *param_1)

{
  FNiagaraSystemInstanceController *this_00;
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
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  dVar3 = (param_1->Max).field0_0x0._s_0.X;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  dVar4 = (param_1->Max).field0_0x0._s_0.Z;
  (this->SystemFixedBounds).Min.field0_0x0._s_0.Z = dVar2;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.X = dVar3;
  uVar5 = param_1->IsValid;
  uVar6 = param_1->Pad[0];
  uVar7 = param_1->Pad[1];
  uVar8 = param_1->Pad[2];
  uVar9 = param_1->Pad[3];
  uVar10 = param_1->Pad[4];
  uVar11 = param_1->Pad[5];
  uVar12 = param_1->Pad[6];
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Y = dVar1;
  (this->SystemFixedBounds).Max.field0_0x0._s_0.Z = dVar4;
  (this->SystemFixedBounds).IsValid = uVar5;
  (this->SystemFixedBounds).Pad[0] = uVar6;
  (this->SystemFixedBounds).Pad[1] = uVar7;
  (this->SystemFixedBounds).Pad[2] = uVar8;
  (this->SystemFixedBounds).Pad[3] = uVar9;
  (this->SystemFixedBounds).Pad[4] = uVar10;
  (this->SystemFixedBounds).Pad[5] = uVar11;
  (this->SystemFixedBounds).Pad[6] = uVar12;
  this_00 = (this->SystemInstanceController).Object;
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    local_48._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    local_48._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
    local_48._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    dStack_30 = (param_1->Max).field0_0x0._s_0.X;
    local_28 = (param_1->Max).field0_0x0._s_0.Y;
    dStack_20 = (param_1->Max).field0_0x0._s_0.Z;
    local_18._0_1_ = param_1->IsValid;
    local_18._1_1_ = param_1->Pad[0];
    local_18._2_1_ = param_1->Pad[1];
    local_18._3_1_ = param_1->Pad[2];
    local_18._4_1_ = param_1->Pad[3];
    local_18._5_1_ = param_1->Pad[4];
    local_18._6_1_ = param_1->Pad[5];
    local_18._7_1_ = param_1->Pad[6];
    FNiagaraSystemInstanceController::SetSystemFixedBounds<UE::Math::TBox<double>_>
              (this_00,(TBox<double> *)&local_48._s_0);
  }
  return;
}

// SetSystemSignificanceIndex @ 149067de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetSystemSignificanceIndex(UNiagaraComponent *this,int param_1)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->SystemInstanceController).Object;
  if (pFVar1 != (FNiagaraSystemInstanceController *)0x0) {
    if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587076>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x7c,"IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    ((pFVar1->SystemInstance).Object)->SignificanceIndex = param_1;
  }
  return;
}

// SetTickBehavior @ 149067e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetTickBehavior(UNiagaraComponent *this,ENiagaraTickBehavior param_1)

{
  FNiagaraSystemInstanceController *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->SystemInstanceController).Object;
  this->TickBehavior = param_1;
  if (pFVar1 != (FNiagaraSystemInstanceController *)0x0) {
    if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587061>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x8b,"IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    FNiagaraSystemInstance::SetTickBehavior((pFVar1->SystemInstance).Object,param_1);
  }
  return;
}

// SetUseAutoManageAttachment @ 149068010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetUseAutoManageAttachment(UNiagaraComponent *this,bool param_1)

{
  this->bAutoManageAttachment = 0;
  *(uint *)&this->field_0x678 = *(uint *)&this->field_0x678 | (uint)param_1 << 2;
  return;
}

// SetUserParametersToDefaultValues @ 149068030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetUserParametersToDefaultValues(UNiagaraComponent *this)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  int iVar2;
  UNiagaraSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  FNiagaraTypeDefinition *pFVar9;
  UNiagaraDataInterface *pUVar10;
  UNiagaraDataInterface *pUVar11;
  TObjectPtr<UObject> TVar12;
  uchar *_Src;
  longlong lVar13;
  uint uVar14;
  uchar *_Dst;
  ForElementType<FNiagaraVariableBase> FVar15;
  ForElementType<FNiagaraVariableBase> FVar16;
  uint uVar17;
  FNiagaraParameterStore *pFVar18;
  undefined1 auStack_138 [32];
  ForElementType<FNiagaraVariableBase> local_118;
  ForElementType<FNiagaraVariableBase> local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  char local_e8;
  undefined1 local_e7 [7];
  FNiagaraParameterStore *local_e0;
  longlong local_d8;
  longlong local_c8;
  int local_c0;
  undefined1 local_b8 [16];
  ForElementType<FNiagaraVariableBase> local_a8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar3 = (this->Asset).field0_0x0.DebugPtr;
  this_00 = &this->OverrideParameters;
  if (pUVar3 == (UNiagaraSystem *)0x0) {
    (*(code *)((undefined8 *)this_00->_padding_)[6])();
  }
  else {
    pFVar18 = (FNiagaraParameterStore *)&pUVar3->ExposedParameters;
    local_e0 = pFVar18;
    (**(code **)this_00->_padding_)(this_00,&local_c8);
    uVar17 = 0;
    local_a8.SecondaryData = (ForElementType<FNiagaraVariableBase>)0x0;
    local_e8 = '\0';
    local_40 = 0;
    local_3c = 8;
    if (0 < local_c0) {
      local_d8 = 0;
      do {
        lVar13 = local_d8;
        uVar6 = 0;
        if ((int)uVar17 < local_c0) {
          uVar6 = ~uVar17 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_110 = (ForElementType<FNiagaraVariableBase>)(longlong)local_c0;
          local_118 = (ForElementType<FNiagaraVariableBase>)(longlong)(int)uVar17;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar15 = (ForElementType<FNiagaraVariableBase>)(lVar13 + local_c8);
        uVar6 = (((FNiagaraVariableBase *)((longlong)FVar15 + 0xc))->Name).ComparisonIndex.Value;
        FVar16 = (ForElementType<FNiagaraVariableBase>)(longlong)(int)uVar6;
        piVar8 = (int *)(**(code **)(pFVar18->_padding_ + 0x58))(pFVar18,FVar15,0);
        if ((piVar8 == (int *)0x0) || (iVar2 = *piVar8, pFVar18 = local_e0, iVar2 == -1)) {
          FVar16 = (ForElementType<FNiagaraVariableBase>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FNiagaraVariableBase>)0x0) {
            FVar16 = local_a8.SecondaryData;
          }
          if ((ulonglong)FVar16 <= (ulonglong)FVar15) {
            FVar16 = (ForElementType<FNiagaraVariableBase>)&local_a8;
            if (local_a8.SecondaryData != (ForElementType<FNiagaraVariableBase>)0x0) {
              FVar16 = local_a8.SecondaryData;
            }
            if ((ulonglong)FVar15 < (ulonglong)((longlong)FVar16 + (longlong)local_3c * 0xc)) {
              local_100 = (longlong)local_40;
              local_f8 = 0xc;
              local_110 = (ForElementType<FNiagaraVariableBase>)&local_a8;
              if (local_a8.SecondaryData != (ForElementType<FNiagaraVariableBase>)0x0) {
                local_110 = local_a8.SecondaryData;
              }
              local_118 = FVar15;
              local_108 = (longlong)local_3c;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraVariableBase>_>
                                 (0x40c,&local_a8,&local_3c);
          }
          FVar16 = (ForElementType<FNiagaraVariableBase>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FNiagaraVariableBase>)0x0) {
            FVar16 = local_a8.SecondaryData;
          }
          lVar13 = (longlong)local_40;
          local_40 = local_40 + 1;
          ((FNiagaraVariableBase *)((longlong)FVar16 + lVar13 * 0xc))->Name = *(FName *)FVar15;
          ((FNiagaraTypeDefinitionHandle *)((longlong)FVar16 + 8))[lVar13 * 3].RegisteredTypeIndex =
               ((FNiagaraTypeDefinitionHandle *)((longlong)FVar15 + 8))->RegisteredTypeIndex;
        }
        else {
          pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)((longlong)FVar15 + 8));
          bVar5 = FNiagaraTypeDefinition::IsDataInterface(pFVar9);
          if (bVar5) {
            pUVar10 = FNiagaraParameterStore::GetDataInterface
                                ((FNiagaraParameterStore *)this_00,uVar6);
            if ((pUVar10 == (UNiagaraDataInterface *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OverrideParameters.GetDataInterface(DestIndex) != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                                   ,0xd84,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar18 = local_e0;
            pUVar10 = FNiagaraParameterStore::GetDataInterface(local_e0,iVar2);
            pUVar11 = FNiagaraParameterStore::GetDataInterface
                                ((FNiagaraParameterStore *)this_00,uVar6);
            UNiagaraDataInterface::CopyTo(pUVar10,pUVar11);
            local_e8 = '\x01';
          }
          else {
            bVar5 = FNiagaraVariableBase::IsUObject((FNiagaraVariableBase *)FVar15);
            if (bVar5) {
              TVar12 = FNiagaraParameterStore::GetUObject(local_e0,(int)local_b8);
              iVar2 = (int)(this->OverrideParameters)._padding_;
              uVar14 = 0;
              if ((int)uVar6 < iVar2) {
                uVar14 = ~uVar6 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (local_118 = FVar16,
                 local_110 = (ForElementType<FNiagaraVariableBase>)(longlong)iVar2,
                 bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar13 = (this->OverrideParameters)._padding_;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (*(UObject **)TVar12.field0_0x0 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(*(UObject **)TVar12.field0_0x0);
              }
              *(undefined8 *)(lVar13 + (longlong)FVar16 * 8) = *(undefined8 *)TVar12.field0_0x0;
              plVar1 = &(this->OverrideParameters)._padding_;
              *(uint *)plVar1 = (uint)*plVar1 | 4;
              pFVar18 = local_e0;
            }
            else {
              pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                                 ((FNiagaraTypeDefinitionHandle *)((longlong)FVar15 + 8));
              iVar7 = FNiagaraTypeDefinition::GetSize(pFVar9);
              pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                                 ((FNiagaraTypeDefinitionHandle *)((longlong)FVar15 + 8));
              pFVar18 = local_e0;
              _Src = FNiagaraParameterStore::GetParameterData(local_e0,iVar2,pFVar9);
              if ((_Src == (uchar *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Data != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                     ,0x255,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((((int)uVar6 < 0) ||
                  ((int)(this->OverrideParameters)._padding_ < (int)(uVar6 + iVar7))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                     ,0x256,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              _Dst = (uchar *)((longlong)FVar16 + (this->OverrideParameters)._padding_);
              if (_Dst != _Src) {
                memcpy(_Dst,_Src,(longlong)iVar7);
              }
              plVar1 = &(this->OverrideParameters)._padding_;
              *(uint *)plVar1 = (uint)*plVar1 | 1;
            }
          }
        }
        uVar17 = uVar17 + 1;
        local_d8 = local_d8 + 0x28;
      } while ((int)uVar17 < local_c0);
    }
    iVar2 = local_40;
    FVar15 = (ForElementType<FNiagaraVariableBase>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FNiagaraVariableBase>)0x0) {
      FVar15 = local_a8.SecondaryData;
    }
    FVar16 = (ForElementType<FNiagaraVariableBase>)((longlong)FVar15 + (longlong)local_40 * 0xc);
    while( true ) {
      if (local_40 != iVar2) {
        `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e7);
      }
      if (FVar15 == FVar16) break;
      (**(code **)(this_00->_padding_ + 0x18))(this_00,FVar15);
      FVar15 = (ForElementType<FNiagaraVariableBase>)((longlong)FVar15 + 0xc);
    }
    if (local_e8 != '\0') {
      plVar1 = &(this->OverrideParameters)._padding_;
      *(uint *)plVar1 = (uint)*plVar1 | 2;
    }
    FNiagaraParameterStore::Rebind((FNiagaraParameterStore *)this_00);
    if (local_a8.SecondaryData != (ForElementType<FNiagaraVariableBase>)0x0) {
      FMemory::Free((void *)local_a8.SecondaryData);
    }
  }
  return;
}

// SetVariableActor @ 149068ab0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableActor(UNiagaraComponent *this,FName param_1,AActor *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr FStackX_8;
  AActor *pAStackX_10;
  AActor *pAStackX_20;
  undefined1 auStack_38 [8];
  FNiagaraTypeDefinitionHandle aFStack_30 [2];
  ForAnyElementType FStack_28;
  undefined8 uStack_20;
  
  auStack_38 = (undefined1  [8])param_1;
  aFStack_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(aFStack_30,&FNiagaraTypeDefinition::UObjectDef);
  FStack_28.Data = (FScriptContainerElement *)0x0;
  uStack_20._0_4_ = 0;
  uStack_20._4_4_ = 0;
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    pAStackX_20 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)&this->OverrideParameters,(TObjectPtr<UObject>)&pAStackX_20
               ,(FNiagaraVariable *)auStack_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    pAStackX_10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pAStackX_10);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              ((this->SystemInstanceController).Object,param_1,
               (TWeakObjectPtr<UObject,FWeakObjectPtr>)FStackX_8);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  return;
}

// SetVariableBool @ 149068ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableBool(UNiagaraComponent *this,FName param_1,bool param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_02;
  int *piVar5;
  int iVar6;
  int local_res18 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::BoolDef);
  this_01 = (this->SystemInstanceController).Object;
  iVar6 = (param_2 ^ 1) - 1;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
    iVar4 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar4 != 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar5 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
    if (piVar5 == (int *)0x0) {
      local_res18[0] = -1;
    }
    else {
      local_res18[0] = *piVar5;
      if (local_res18[0] != -1) {
        *(int *)((longlong)local_res18[0] + (this->OverrideParameters)._padding_) = iVar6;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149068c08;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res18);
    if (local_res18[0] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(int *)((longlong)local_res18[0] + (this->OverrideParameters)._padding_) = iVar6;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,param_2);
  }
LAB_149068c08:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariableFloat @ 149068c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableFloat(UNiagaraComponent *this,FName param_1,float param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_02;
  int *piVar5;
  int local_res8 [2];
  FName local_38;
  FNiagaraTypeDefinitionHandle local_30 [2];
  void *local_28;
  undefined8 local_20;
  
  local_38 = param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::FloatDef);
  this_01 = (this->SystemInstanceController).Object;
  local_28 = (void *)0x0;
  local_20 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_30);
    iVar4 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar4 != 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar5 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_38,0);
    if (piVar5 == (int *)0x0) {
      local_res8[0] = -1;
    }
    else {
      local_res8[0] = *piVar5;
      if (local_res8[0] != -1) {
        *(float *)((longlong)local_res8[0] + (this->OverrideParameters)._padding_) = param_2;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149068d7c;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_38,0,0,local_res8);
    if (local_res8[0] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)((longlong)local_res8[0] + (this->OverrideParameters)._padding_) = param_2;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,param_2);
  }
LAB_149068d7c:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// SetVariableInt @ 149068db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SetVariableInt(UNiagaraComponent *this,FName param_1,int param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this_02;
  int *piVar5;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::IntDef);
  this_01 = (this->SystemInstanceController).Object;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
    iVar4 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar4 != 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar5 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
    if (piVar5 == (int *)0x0) {
      local_res8[0] = -1;
    }
    else {
      local_res8[0] = *piVar5;
      if (local_res8[0] != -1) {
        *(int *)((longlong)local_res8[0] + (this->OverrideParameters)._padding_) = param_2;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149068eea;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
    if (local_res8[0] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(int *)((longlong)local_res8[0] + (this->OverrideParameters)._padding_) = param_2;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,param_2);
  }
LAB_149068eea:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariableLinearColor @ 149068f10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableLinearColor
          (UNiagaraComponent *this,FName param_1,FLinearColor *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  undefined8 *puVar2;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this_02;
  int *piVar7;
  int local_res8 [2];
  FLinearColor_u_0 local_38;
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::ColorDef);
  this_01 = (this->SystemInstanceController).Object;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
    iVar6 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar6 != 0x10) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    piVar7 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
    if (piVar7 == (int *)0x0) {
      local_res8[0] = -1;
    }
    else {
      local_res8[0] = *piVar7;
      if (local_res8[0] != -1) {
        uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
        puVar2 = (undefined8 *)((this->OverrideParameters)._padding_ + (longlong)local_res8[0]);
        *puVar2 = *(undefined8 *)&param_2->field0_0x0;
        puVar2[1] = uVar4;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_14906905c;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
    if (local_res8[0] == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    puVar2 = (undefined8 *)((this->OverrideParameters)._padding_ + (longlong)local_res8[0]);
    *puVar2 = *(undefined8 *)&param_2->field0_0x0;
    puVar2[1] = uVar4;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    local_38._0_8_ = *(undefined8 *)&param_2->field0_0x0;
    local_38._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,(FLinearColor *)&local_38._s_0);
  }
LAB_14906905c:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariableMaterial @ 149069090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableMaterial
          (UNiagaraComponent *this,FName param_1,UMaterialInterface *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  UMaterialInterface *local_res10;
  UMaterialInterface *local_res20;
  undefined1 local_38 [8];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_38 = (undefined1  [8])param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::UMaterialDef);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    local_res20 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)&this->OverrideParameters,(TObjectPtr<UObject>)&local_res20
               ,(FNiagaraVariable *)local_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              ((this->SystemInstanceController).Object,param_1,
               (TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>)local_res8);
  }
  this->bRecachePSOs = 1;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetVariableMatrix @ 1490691d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableMatrix(UNiagaraComponent *this,FName param_1,TMatrix<double> *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  float *pfVar2;
  undefined8 *puVar3;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this_02;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_f8 [2];
  FName local_f0;
  FNiagaraTypeDefinitionHandle local_e8 [2];
  void *local_e0;
  undefined8 local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  TMatrix<float> local_88 [2];
  
  fVar10 = (float)param_2->M[0][2];
  fVar14 = (float)param_2->M[0][3];
  fVar18 = (float)param_2->M[0][0];
  fVar19 = (float)param_2->M[0][1];
  fVar11 = (float)param_2->M[1][2];
  fVar15 = (float)param_2->M[1][3];
  fVar20 = (float)param_2->M[1][0];
  fVar21 = (float)param_2->M[1][1];
  fVar12 = (float)param_2->M[2][2];
  fVar16 = (float)param_2->M[2][3];
  fVar22 = (float)param_2->M[2][0];
  fVar23 = (float)param_2->M[2][1];
  fVar24 = (float)param_2->M[3][0];
  fVar25 = (float)param_2->M[3][1];
  fVar13 = (float)param_2->M[3][2];
  fVar17 = (float)param_2->M[3][3];
  local_f0 = param_1;
  local_c8 = fVar18;
  fStack_c4 = fVar19;
  fStack_c0 = fVar10;
  fStack_bc = fVar14;
  local_b8 = fVar20;
  fStack_b4 = fVar21;
  fStack_b0 = fVar11;
  fStack_ac = fVar15;
  local_a8 = fVar22;
  fStack_a4 = fVar23;
  fStack_a0 = fVar12;
  fStack_9c = fVar16;
  local_98 = fVar24;
  fStack_94 = fVar25;
  fStack_90 = fVar13;
  fStack_8c = fVar17;
  local_e8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_e8,&FNiagaraTypeDefinition::Matrix4Def);
  this_01 = (this->SystemInstanceController).Object;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_e8);
    iVar6 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar6 != 0x40) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar7 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_f0,0);
    if (piVar7 == (int *)0x0) {
      local_f8[0] = -1;
    }
    else {
      local_f8[0] = *piVar7;
      lVar8 = (longlong)local_f8[0];
      if (local_f8[0] != -1) {
        lVar9 = (this->OverrideParameters)._padding_;
        pfVar2 = (float *)(lVar9 + lVar8);
        *pfVar2 = fVar18;
        pfVar2[1] = fVar19;
        pfVar2[2] = fVar10;
        pfVar2[3] = fVar14;
        pfVar2 = (float *)(lVar9 + 0x10 + lVar8);
        *pfVar2 = fVar20;
        pfVar2[1] = fVar21;
        pfVar2[2] = fVar11;
        pfVar2[3] = fVar15;
        pfVar2 = (float *)(lVar9 + 0x20 + lVar8);
        *pfVar2 = fVar22;
        pfVar2[1] = fVar23;
        pfVar2[2] = fVar12;
        pfVar2[3] = fVar16;
        pfVar2 = (float *)(lVar9 + 0x30 + lVar8);
        *pfVar2 = fVar24;
        pfVar2[1] = fVar25;
        pfVar2[2] = fVar13;
        pfVar2[3] = fVar17;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_1490693d6;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_f0,0,0,local_f8);
    if (local_f8[0] == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar9 = (longlong)local_f8[0];
    lVar8 = (this->OverrideParameters)._padding_;
    *(undefined8 *)(lVar8 + lVar9) = CONCAT44(fStack_c4,local_c8);
    ((undefined8 *)(lVar8 + lVar9))[1] = CONCAT44(fStack_bc,fStack_c0);
    puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    *puVar3 = CONCAT44(fStack_b4,local_b8);
    puVar3[1] = CONCAT44(fStack_ac,fStack_b0);
    puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar9);
    *puVar3 = CONCAT44(fStack_a4,local_a8);
    puVar3[1] = CONCAT44(fStack_9c,fStack_a0);
    puVar3 = (undefined8 *)(lVar8 + 0x30 + lVar9);
    *puVar3 = CONCAT44(fStack_94,local_98);
    puVar3[1] = CONCAT44(fStack_8c,fStack_90);
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    local_88[0].M[0][0] = fVar18;
    local_88[0].M[0][1] = fVar19;
    local_88[0].M[0][2] = fVar10;
    local_88[0].M[0][3] = fVar14;
    local_88[0].M[1][0] = fVar20;
    local_88[0].M[1][1] = fVar21;
    local_88[0].M[1][2] = fVar11;
    local_88[0].M[1][3] = fVar15;
    local_88[0].M[2][0] = fVar22;
    local_88[0].M[2][1] = fVar23;
    local_88[0].M[2][2] = fVar12;
    local_88[0].M[2][3] = fVar16;
    local_88[0].M[3][0] = fVar24;
    local_88[0].M[3][1] = fVar25;
    local_88[0].M[3][2] = fVar13;
    local_88[0].M[3][3] = fVar17;
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,local_88);
  }
LAB_1490693d6:
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// SetVariableObject @ 149069420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableObject(UNiagaraComponent *this,FName param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  UObject *local_res20;
  undefined1 local_38 [8];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_38 = (undefined1  [8])param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::UObjectDef);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    local_res20 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)&this->OverrideParameters,(TObjectPtr<UObject>)&local_res20
               ,(FNiagaraVariable *)local_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              ((this->SystemInstanceController).Object,param_1,
               (TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res8);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetVariablePosition @ 149069550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariablePosition
          (UNiagaraComponent *this,FName param_1,TVector<double> *param_2)

{
  FNiagaraSystemInstanceController *this_00;
  longlong lVar1;
  FName local_res10;
  TVector<double>_u_0 local_48;
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  local_res10 = param_1;
  lVar1 = (**(code **)((this->OverrideParameters)._padding_ + 0x68))
                    (&this->OverrideParameters,&local_res10);
  if (lVar1 == 0) {
    local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    SetVariableVec3(this,local_res10,(TVector<double> *)&local_48._s_0);
    return;
  }
  local_28 = local_res10;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::PositionDef);
  this_00 = (this->SystemInstanceController).Object;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (this_00 == (FNiagaraSystemInstanceController *)0x0) {
    (**(code **)((this->OverrideParameters)._padding_ + 0x60))
              (&this->OverrideParameters,param_2,&local_res10,1);
  }
  else {
    local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    FNiagaraSystemInstanceController::SetVariable
              (this_00,local_res10,(TVector<double> *)&local_48._s_0);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariableQuat @ 149069660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableQuat(UNiagaraComponent *this,FName param_1,TQuat<double> *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  undefined8 *puVar2;
  FNiagaraSystemInstanceController *this_01;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this_02;
  int *piVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  TQuat<float> local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  FName local_68;
  FNiagaraTypeDefinitionHandle local_60 [2];
  void *local_58;
  undefined8 local_50;
  
  fVar12 = (float)param_2->W;
  fVar9 = (float)param_2->X;
  fVar10 = (float)param_2->Y;
  fVar11 = (float)param_2->Z;
  local_78 = fVar9;
  fStack_74 = fVar10;
  fStack_70 = fVar11;
  fStack_6c = fVar12;
  local_68 = param_1;
  local_60[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_60,&FNiagaraTypeDefinition::QuatDef);
  this_01 = (this->SystemInstanceController).Object;
  local_58 = (void *)0x0;
  local_50 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_60);
    iVar6 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar6 != 0x10) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar7 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_68,0);
    if (piVar7 == (int *)0x0) {
      local_res8[0] = -1;
    }
    else {
      local_res8[0] = *piVar7;
      lVar8 = (longlong)local_res8[0];
      if (local_res8[0] != -1) {
        lVar3 = (this->OverrideParameters)._padding_;
        *(float *)(lVar3 + lVar8) = fVar9;
        *(float *)(lVar3 + 4 + lVar8) = fVar10;
        *(float *)(lVar3 + 8 + lVar8) = fVar11;
        *(float *)(lVar3 + 0xc + lVar8) = fVar12;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149069815;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_68,0,0,local_res8);
    if (local_res8[0] == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar2 = (undefined8 *)((this->OverrideParameters)._padding_ + (longlong)local_res8[0]);
    *puVar2 = CONCAT44(fStack_74,local_78);
    puVar2[1] = CONCAT44(fStack_6c,fStack_70);
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    local_88.X = fVar9;
    local_88.Y = fVar10;
    local_88.Z = fVar11;
    local_88.W = fVar12;
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,&local_88);
  }
LAB_149069815:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// SetVariableStaticMesh @ 149069860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableStaticMesh(UNiagaraComponent *this,FName param_1,UStaticMesh *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  UStaticMesh *local_res10;
  UStaticMesh *local_res20;
  undefined1 local_38 [8];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_38 = (undefined1  [8])param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::UStaticMeshDef);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    local_res20 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)&this->OverrideParameters,(TObjectPtr<UObject>)&local_res20
               ,(FNiagaraVariable *)local_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              ((this->SystemInstanceController).Object,param_1,
               (TWeakObjectPtr<UStaticMesh,FWeakObjectPtr>)local_res8);
  }
  this->bRecachePSOs = 1;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetVariableTexture @ 1490699a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableTexture(UNiagaraComponent *this,FName param_1,UTexture *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  UTexture *local_res10;
  UTexture *local_res20;
  undefined1 local_38 [8];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_38 = (undefined1  [8])param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::UTextureDef);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    local_res20 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)&this->OverrideParameters,(TObjectPtr<UObject>)&local_res20
               ,(FNiagaraVariable *)local_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              ((this->SystemInstanceController).Object,param_1,
               (TWeakObjectPtr<UTexture,FWeakObjectPtr>)local_res8);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetVariableTextureRenderTarget @ 149069ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableTextureRenderTarget
          (UNiagaraComponent *this,FName param_1,UTextureRenderTarget *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  UTextureRenderTarget *local_res10;
  UTextureRenderTarget *local_res20;
  undefined1 local_38 [8];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_38 = (undefined1  [8])param_1;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_30,&FNiagaraTypeDefinition::UTextureRenderTargetDef);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
    local_res20 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UTextureRenderTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)&this->OverrideParameters,(TObjectPtr<UObject>)&local_res20
               ,(FNiagaraVariable *)local_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UTextureRenderTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UTextureRenderTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    if ((this->SystemInstanceController).Object == (FNiagaraSystemInstanceController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              ((this->SystemInstanceController).Object,param_1,
               (TWeakObjectPtr<UTextureRenderTarget,FWeakObjectPtr>)local_res8);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetVariableVec2 @ 149069c00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableVec2(UNiagaraComponent *this,FName param_1,TVector2<double> *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  code *pcVar2;
  TVector2<float> TVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_02;
  int *piVar6;
  int local_res8 [2];
  float local_res10;
  float fStackX_14;
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  local_res10 = (float)(param_2->field0_0x0)._s_0.X;
  fStackX_14 = (float)(param_2->field0_0x0)._s_0.Y;
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec2Def);
  this_01 = (this->SystemInstanceController).Object;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
    iVar5 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar5 != 8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar6 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
    if (piVar6 == (int *)0x0) {
      local_res8[0] = -1;
    }
    else {
      local_res8[0] = *piVar6;
      if (local_res8[0] != -1) {
        *(ulonglong *)((longlong)local_res8[0] + (this->OverrideParameters)._padding_) =
             CONCAT44(fStackX_14,local_res10);
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_149069d5f;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
    if (local_res8[0] == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(ulonglong *)((longlong)local_res8[0] + (this->OverrideParameters)._padding_) =
         CONCAT44(fStackX_14,local_res10);
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    TVar3.field0_0x0._s_0.Y = fStackX_14;
    TVar3.field0_0x0._s_0.X = local_res10;
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,TVar3);
  }
LAB_149069d5f:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariableVec3 @ 149069d80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableVec3(UNiagaraComponent *this,FName param_1,TVector<double> *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  FNiagaraSystemInstanceController *this_01;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FNiagaraTypeDefinition *this_02;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  FName local_res10;
  TVector<float>_u_0 local_b8;
  FString local_a8;
  FString local_98;
  TVector<double>_u_0 local_88;
  FName local_68;
  FNiagaraTypeDefinitionHandle local_60 [2];
  void *local_58;
  undefined8 local_50;
  
  this_00 = &this->OverrideParameters;
  local_res10 = param_1;
  lVar8 = (**(code **)(this_00->_padding_ + 0x68))(this_00,&local_res10);
  if (lVar8 != 0) {
    local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    SetVariablePosition(this,local_res10,(TVector<double> *)&local_88._s_0);
    return;
  }
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if ((((((__real_4130000000000000 <= dVar4) || (dVar4 <= __real_c130000000000000)) ||
        (__real_4130000000000000 <= dVar5)) ||
       ((dVar5 <= __real_c130000000000000 || (__real_4130000000000000 <= local_88._s_0.Z)))) ||
      (local_88._s_0.Z <= __real_c130000000000000)) && (2 < (byte)LogNiagara._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0);
    ::FName::ToString(&local_res10,&local_a8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  fVar10 = (float)(param_2->field0_0x0)._s_0.X;
  local_68 = local_res10;
  fVar11 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar12 = (float)(param_2->field0_0x0)._s_0.Z;
  local_60[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_60,&FNiagaraTypeDefinition::Vec3Def);
  this_01 = (this->SystemInstanceController).Object;
  local_58 = (void *)0x0;
  local_50 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_60);
    iVar7 = FNiagaraTypeDefinition::GetSize(this_02);
    if ((iVar7 != 0xc) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Param.GetSizeInBytes() == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x232,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar9 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_68,0);
    if (piVar9 == (int *)0x0) {
      local_res8[0] = -1;
    }
    else {
      local_res8[0] = *piVar9;
      lVar8 = (longlong)local_res8[0];
      if (local_res8[0] != -1) {
        lVar2 = (this->OverrideParameters)._padding_;
        *(float *)(lVar2 + lVar8) = fVar10;
        *(float *)(lVar2 + 4 + lVar8) = fVar11;
        *(float *)(lVar2 + 8 + lVar8) = fVar12;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_14906a066;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_68,0,0,local_res8);
    if ((local_res8[0] == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x249,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar8 = (this->OverrideParameters)._padding_;
    *(ulonglong *)(lVar8 + local_res8[0]) = CONCAT44(fVar11,fVar10);
    *(float *)(lVar8 + 8 + (longlong)local_res8[0]) = fVar12;
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    local_b8._s_0.X = fVar10;
    local_b8._s_0.Y = fVar11;
    local_b8._s_0.Z = fVar12;
    FNiagaraSystemInstanceController::SetVariable
              (this_01,local_res10,(TVector<float> *)&local_b8._s_0);
  }
LAB_14906a066:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// SetVariableVec4 @ 14906a0b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVariableVec4(UNiagaraComponent *this,FName param_1,TVector4<double> *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  longlong *plVar1;
  undefined8 *puVar2;
  FNiagaraSystemInstanceController *this_01;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this_02;
  int *piVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  TVector4<float>_u_0 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  FName local_68;
  FNiagaraTypeDefinitionHandle local_60 [2];
  void *local_58;
  undefined8 local_50;
  
  fVar12 = (float)(param_2->field0_0x0)._s_0.W;
  fVar9 = (float)(param_2->field0_0x0)._s_0.X;
  fVar10 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar11 = (float)(param_2->field0_0x0)._s_0.Z;
  local_78 = fVar9;
  fStack_74 = fVar10;
  fStack_70 = fVar11;
  fStack_6c = fVar12;
  local_68 = param_1;
  local_60[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_60,&FNiagaraTypeDefinition::Vec4Def);
  this_01 = (this->SystemInstanceController).Object;
  local_58 = (void *)0x0;
  local_50 = 0;
  if (this_01 == (FNiagaraSystemInstanceController *)0x0) {
    this_00 = &this->OverrideParameters;
    this_02 = FNiagaraTypeDefinitionHandle::Resolve(local_60);
    iVar6 = FNiagaraTypeDefinition::GetSize(this_02);
    if (iVar6 != 0x10) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar7 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_68,0);
    if (piVar7 == (int *)0x0) {
      local_res8[0] = -1;
    }
    else {
      local_res8[0] = *piVar7;
      lVar8 = (longlong)local_res8[0];
      if (local_res8[0] != -1) {
        lVar3 = (this->OverrideParameters)._padding_;
        *(float *)(lVar3 + lVar8) = fVar9;
        *(float *)(lVar3 + 4 + lVar8) = fVar10;
        *(float *)(lVar3 + 8 + lVar8) = fVar11;
        *(float *)(lVar3 + 0xc + lVar8) = fVar12;
        plVar1 = &(this->OverrideParameters)._padding_;
        *(uint *)plVar1 = (uint)*plVar1 | 1;
        goto LAB_14906a265;
      }
    }
    (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_68,0,0,local_res8);
    if (local_res8[0] == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar2 = (undefined8 *)((this->OverrideParameters)._padding_ + (longlong)local_res8[0]);
    *puVar2 = CONCAT44(fStack_74,local_78);
    puVar2[1] = CONCAT44(fStack_6c,fStack_70);
    FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
  }
  else {
    local_88._s_0.X = fVar9;
    local_88._s_0.Y = fVar10;
    local_88._s_0.Z = fVar11;
    local_88._s_0.W = fVar12;
    FNiagaraSystemInstanceController::SetVariable(this_01,param_1,(TVector4<float> *)&local_88._s_0)
    ;
  }
LAB_14906a265:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// SetVectorParameter @ 14906a2b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::SetVectorParameter
          (UNiagaraComponent *this,FName param_1,TVector<double> *param_2)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  SetVariableVec3(this,param_1,(TVector<double> *)&local_28._s_0);
  return;
}

// ShouldPreCull @ 14906a360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraComponent::ShouldPreCull(UNiagaraComponent *this)

{
  UNiagaraSystem *this_00;
  bool bVar1;
  UNiagaraEffectType *pUVar2;
  UWorld *pUVar3;
  FNiagaraWorldManager *this_01;
  
  if ((this->bAllowScalability == 1 && this->bOwnerAllowsScalabiltiy == 1) &&
     (this_00 = (this->Asset).field0_0x0.DebugPtr, this_00 != (UNiagaraSystem *)0x0)) {
    pUVar2 = UNiagaraSystem::GetEffectType(this_00);
    if (pUVar2 != (UNiagaraEffectType *)0x0) {
      pUVar3 = (UWorld *)this->_padding_;
      if (pUVar3 == (UWorld *)0x0) {
        pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_01 = FNiagaraWorldManager::Get(pUVar3);
      if ((this_01 != (FNiagaraWorldManager *)0x0) && (pUVar2->UpdateFrequency == SpawnOnly)) {
        bVar1 = FNiagaraWorldManager::ShouldPreCull(this_01,(this->Asset).field0_0x0.DebugPtr,this);
        return bVar1;
      }
    }
  }
  return false;
}

// StaticRegisterNativesUNiagaraComponent @ 14906a4c0

void __cdecl UNiagaraComponent::StaticRegisterNativesUNiagaraComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x59;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeWithSourceSystem @ 14906a6f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::SynchronizeWithSourceSystem(UNiagaraComponent *this)

{
  undefined1 uVar1;
  ENCPoolMethod EVar2;
  UNiagaraSystem *pUVar3;
  
  EVar2 = this->PoolingMethod;
  this->bAutoDestroy = 0;
  this->PoolingMethod = None;
  DestroyInstance(this);
  this->PoolingMethod = EVar2;
  pUVar3 = (this->Asset).field0_0x0.DebugPtr;
  *(uint *)&this->field_0x678 = *(uint *)&this->field_0x678 & 0xfffffffe | this->bAutoDestroy;
  if (pUVar3 != (UNiagaraSystem *)0x0) {
    FNiagaraParameterStore::Rebind((FNiagaraParameterStore *)&this->OverrideParameters);
  }
  return;
}

// TickComponent @ 14906b260

/* WARNING: Removing unreachable block (ram,0x00014906bc30) */
/* WARNING: Removing unreachable block (ram,0x00014906bc3d) */
/* WARNING: Removing unreachable block (ram,0x00014906beaf) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraComponent::TickComponent
          (UNiagaraComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  ENiagaraAgeUpdateMode EVar4;
  undefined4 uVar5;
  UNiagaraSystem *pUVar6;
  TAtomic<FMinimalName> TVar7;
  UNiagaraSimCache *pUVar8;
  FNiagaraSystemSimulation *pFVar9;
  FNiagaraSystemRenderData *this_00;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentTick> FVar22;
  TStatId TVar23;
  FNiagaraSystemInstanceController *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances> FVar25;
  FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo> FVar26;
  UWorld *pUVar27;
  FNiagaraWorldManager *pFVar28;
  TRefCountPtr<FBaseGraphTask> TVar29;
  TSharedPtr<FNiagaraSystemSimulation,1> *pTVar30;
  undefined8 **ppuVar31;
  undefined8 *puVar32;
  FThreadStats *pFVar33;
  FThreadStatsPool *pFVar34;
  FBaseGraphTask *pFVar35;
  FName FVar36;
  FName FVar37;
  FBaseGraphTask *pFVar38;
  byte bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  FLLMScope local_188;
  FColor_u_0 local_184;
  FColor_u_0 local_180 [2];
  FName local_178;
  FName local_170;
  TRefCountPtr<FBaseGraphTask> local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  TRefCountPtr<FBaseGraphTask> local_150;
  FName local_148;
  FName local_138;
  FBaseGraphTask *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  FBaseGraphTask *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  FBaseGraphTask *local_e8;
  FBaseGraphTask *local_e0;
  FBaseGraphTask *local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  FMemScope local_c0;
  FBaseGraphTask *local_b8;
  undefined1 local_b0 [8];
  FStatMessage local_a8;
  FStatMessage local_98;
  FName local_88;
  undefined1 local_80 [8];
  FName local_78;
  FName local_70;
  TSharedPtr<FNiagaraSystemSimulation,1> local_68 [4];
  
  bVar14 = false;
  bVar13 = false;
  FLLMScope::FLLMScope(&local_188,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,Niagara,true);
  if (__CsvProfilerStat895 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat895 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  bVar11 = false;
  bVar19 = true;
  FVar22 = StatPtr_STAT_NiagaraComponentTick;
  if (StatPtr_STAT_NiagaraComponentTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentTick>)0x0) {
    pFVar21 = ::FName::FName(&local_88,"STAT_NiagaraComponentTick");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraComponentTick,*pFVar21,
                        L"Component Tick (GT)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar22;
  bVar12 = false;
  bVar15 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_14906b42e:
    bVar15 = bVar17;
    bVar12 = bVar16;
    bVar16 = false;
    FVar37 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_184.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar12 = false;
      bVar15 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_178.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x380);
        bVar12 = true;
        bVar15 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14906b42e;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar16 = true;
  }
  pUVar6 = (this->Asset).field0_0x0.DebugPtr;
  if ((pUVar6 == (UNiagaraSystem *)0x0) || (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0))
  goto LAB_14906c101;
  TVar23 = UNiagaraSystem::GetStatID((this->Asset).field0_0x0.DebugPtr,SUB81(local_80,0),true);
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  bVar18 = false;
  bVar17 = false;
  TVar7 = (TVar23.StatIdPtr)->Name;
  FVar36 = *(FName *)TVar7;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_14906b52e:
    bVar14 = bVar18;
    bVar13 = bVar17;
    bVar17 = false;
    FVar36 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)TVar7 + 0x10));
      bVar14 = false;
      bVar13 = true;
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_170.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)TVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x388);
        bVar14 = true;
        bVar13 = true;
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14906b52e;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar17 = true;
  }
  uVar5 = *(undefined4 *)&this->field_0x6cc;
  if (ZPULL(uVar5,0,1) == 0) {
    if ((this->SystemInstanceController).Object != (FNiagaraSystemInstanceController *)0x0) {
      pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                          (&this->SystemInstanceController);
      bVar18 = FNiagaraSystemInstanceController::IsSolo<>(pFVar24);
      if (bVar18) {
        pUVar6 = (this->Asset).field0_0x0.DebugPtr;
        if ((pUVar6->bFixedTickDelta == false) || (0.0 < pUVar6->FixedTickDeltaTime)) {
          if ((this->_padding_ & 0x180000) == 0x80000) {
            pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                (&this->SystemInstanceController);
            if (((pFVar24->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
               (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4531953176097587072>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                    ,0x80,"IsValid()"), bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((pFVar24->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((pFVar24->SystemInstance).Object)->bDataInterfacesInitialized != 0) {
              (**(code **)(this->_padding_ + 0x2b8))(this,0);
            }
          }
          if (((this->_padding_ & 0x100000) != 0) &&
             ((this->SystemInstanceController).Object != (FNiagaraSystemInstanceController *)0x0)) {
            pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                (&this->SystemInstanceController);
            bVar18 = FNiagaraSystemInstanceController::IsComplete<>(pFVar24);
            if (!bVar18) {
              if (((this->Asset).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Asset != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                                      ,0x3ab,L""), bVar18)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              UNiagaraSystem::AddToInstanceCountStat((this->Asset).field0_0x0.DebugPtr,1,true);
              if (FThreadStats::bPrimaryEnable != false) {
                FVar25 = StatPtr_STAT_TotalNiagaraSystemInstances;
                if (StatPtr_STAT_TotalNiagaraSystemInstances ==
                    (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)0x0) {
                  pFVar21 = ::FName::FName(&local_78,"STAT_TotalNiagaraSystemInstances");
                  FVar25 = (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_TotalNiagaraSystemInstances,*pFVar21,
                                      L"Total System Instances","STATGROUP_NiagaraSystemCounts",
                                      "STATCAT_Niagara",L"Niagara System Counts",true,true,ST_int64,
                                      false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar25,Add,1,false);
              }
              if (FThreadStats::bPrimaryEnable != false) {
                FVar26 = StatPtr_STAT_TotalNiagaraSystemInstancesSolo;
                if (StatPtr_STAT_TotalNiagaraSystemInstancesSolo ==
                    (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo>)0x0) {
                  pFVar21 = ::FName::FName(&local_70,"STAT_TotalNiagaraSystemInstancesSolo");
                  FVar26 = (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_TotalNiagaraSystemInstancesSolo,*pFVar21,
                                      L"Total Solo System Instances","STATGROUP_NiagaraSystemCounts"
                                      ,"STATCAT_Niagara",L"Niagara System Counts",true,true,ST_int64
                                      ,false,false,MCR_Invalid);
                }
                FThreadStats::AddMessage<__int64>(*(FName *)FVar26,Add,1,false);
              }
              pUVar27 = (UWorld *)this->_padding_;
              if (pUVar27 == (UWorld *)0x0) {
                pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              }
              pFVar28 = FNiagaraWorldManager::Get(pUVar27);
              if (pFVar28 != (FNiagaraWorldManager *)0x0) {
                if (pFVar28->DebugPlaybackMode == Paused) goto LAB_14906c034;
                param_1 = param_1 * pFVar28->DebugPlaybackRate;
              }
              if ((this->SimCache).field0_0x0.DebugPtr == (UNiagaraSimCache *)0x0) {
                EVar4 = this->AgeUpdateMode;
                if (EVar4 == TickDeltaTime) {
                  pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                      (&this->SystemInstanceController);
                  if ((param_3 == (FActorComponentTickFunction *)0x0) ||
                     (bVar19 = FTickFunction::IsCompletionHandleValid((FTickFunction *)param_3),
                     !bVar19)) {
                    local_158 = (undefined8 *)0x0;
                    TVar29.Reference = (FBaseGraphTask *)&local_158;
                    bVar11 = false;
                    bVar19 = true;
                  }
                  else {
                    TVar29 = FTickFunction::GetCompletionHandle((FTickFunction *)param_3);
                    bVar11 = true;
                    bVar19 = false;
                  }
                  local_b0 = *(undefined1 (*) [8])TVar29.Reference;
                  *(undefined8 *)TVar29.Reference = 0;
                  FNiagaraSystemInstanceController::ManualTick<float,TRefCountPtr<FBaseGraphTask>_>
                            (pFVar24,param_1 * this->CustomTimeDilation,(FBaseGraphTask *)local_b0);
                  if ((bVar19) && (local_158 != (undefined8 *)0x0)) {
                    LOCK();
                    piVar2 = (int *)(local_158 + 6);
                    iVar20 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar20 == 1) {
                      (**(code **)*local_158)();
                    }
                  }
                  if (bVar11) goto LAB_14906ba14;
                  goto LAB_14906bfe2;
                }
                if (EVar4 == DesiredAge) {
                  fVar40 = this->DesiredAge;
                  if (fVar40 <= 0.0) {
                    fVar40 = 0.0;
                  }
                  pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                      (&this->SystemInstanceController);
                  fVar41 = FNiagaraSystemInstanceController::GetAge<>(pFVar24);
                  fVar40 = fVar40 - fVar41;
                  this->bIsSeeking = false;
                  if (__real_38d1b717 <=
                      (float)((uint)fVar40 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
                    if (fVar40 < 0.0) {
                      pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                          (&this->SystemInstanceController);
                      FNiagaraSystemInstanceController::
                      Reset<enum_FNiagaraSystemInstance::EResetMode>(pFVar24,ResetAll);
                      fVar40 = this->DesiredAge;
                      pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                          (&this->SystemInstanceController);
                      fVar41 = FNiagaraSystemInstanceController::GetAge<>(pFVar24);
                      fVar40 = fVar40 - fVar41;
                    }
                    pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                        (&this->SystemInstanceController);
                    pTVar30 = FNiagaraSystemInstanceController::GetSoloSystemSimulation
                                        (pFVar24,local_68);
                    pFVar9 = pTVar30->Object;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_68[0].SharedReferenceCount.ReferenceController);
                    if (pFVar9 != (FNiagaraSystemSimulation *)0x0) {
                      if ((param_3 == (FActorComponentTickFunction *)0x0) ||
                         (bVar19 = FTickFunction::IsCompletionHandleValid((FTickFunction *)param_3),
                         !bVar19)) {
                        local_118 = 0;
                        pFVar38 = (FBaseGraphTask *)0x0;
                      }
                      else {
                        TVar29 = FTickFunction::GetCompletionHandle((FTickFunction *)param_3);
                    /* WARNING: Load size is inaccurate */
                        pFVar38 = *TVar29.Reference;
                        *(undefined8 *)TVar29.Reference = 0;
                        if (local_120 != (undefined8 *)0x0) {
                          LOCK();
                          piVar2 = (int *)(local_120 + 6);
                          iVar20 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if ((iVar20 == 1) && (local_120 != (undefined8 *)0x0)) {
                            (**(code **)*local_120)(local_120);
                          }
                        }
                      }
                      pUVar6 = (this->Asset).field0_0x0.DebugPtr;
                      bVar19 = pUVar6->bFixedTickDelta;
                      if (bVar19 == false) {
                        fVar41 = this->SeekDelta;
                      }
                      else {
                        fVar41 = pUVar6->FixedTickDeltaTime;
                      }
                      if ((this->bLockDesiredAgeDeltaTimeToSeekDelta != false) || (fVar41 < fVar40))
                      {
                        iVar20 = (int)ROUND((fVar40 + fVar40) / fVar41 - __real_3f000000) >> 1;
                        if (iVar20 == 1) {
                          bVar39 = 0x40;
                          if (pFVar38 != (FBaseGraphTask *)0x0) {
                            LOCK();
                            *(int *)&pFVar38->field_0x30 = *(int *)&pFVar38->field_0x30 + 1;
                            UNLOCK();
                          }
                          ppuVar31 = &local_100;
                          pFVar35 = pFVar38;
                        }
                        else {
                          bVar39 = 0x80;
                          ppuVar31 = &local_108;
                          pFVar35 = (FBaseGraphTask *)0x0;
                        }
                        *ppuVar31 = (undefined8 *)0x0;
                        if (pFVar38 != (FBaseGraphTask *)0x0) {
                          LOCK();
                          puVar1 = &pFVar38->field_0x30;
                          iVar3 = *(int *)puVar1;
                          *(int *)puVar1 = *(int *)puVar1 + -1;
                          UNLOCK();
                          if (iVar3 == 1) {
                            (*(code *)**(undefined8 **)pFVar38)(pFVar38);
                          }
                        }
                        if (((char)bVar39 < '\0') &&
                           (bVar39 = bVar39 & 0x7f, local_108 != (undefined8 *)0x0)) {
                          LOCK();
                          piVar2 = (int *)(local_108 + 6);
                          iVar3 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (iVar3 == 1) {
                            (**(code **)*local_108)();
                          }
                        }
                        if (((bVar39 & 0x40) != 0) && (local_100 != (undefined8 *)0x0)) {
                          LOCK();
                          piVar2 = (int *)(local_100 + 6);
                          iVar3 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (iVar3 == 1) {
                            (**(code **)*local_100)();
                          }
                        }
                        pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                            (&this->SystemInstanceController);
                        if (pFVar35 != (FBaseGraphTask *)0x0) {
                          LOCK();
                          *(int *)&pFVar35->field_0x30 = *(int *)&pFVar35->field_0x30 + 1;
                          UNLOCK();
                        }
                        fVar40 = this->MaxSimTime;
                        local_150.Reference = pFVar35;
                        if (((pFVar24->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                               (&bGEnsureHasExecuted<_4531953176097587063>,false,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                                ,0x89,"IsValid()"), bVar19)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        if (((pFVar24->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar19)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        bVar19 = FNiagaraSystemInstance::MultiTick
                                           ((pFVar24->SystemInstance).Object,iVar20,fVar41,fVar40,
                                            &local_150);
                        if (local_150.Reference != (FBaseGraphTask *)0x0) {
                          LOCK();
                          puVar1 = &(local_150.Reference)->field_0x30;
                          iVar20 = *(int *)puVar1;
                          *(int *)puVar1 = *(int *)puVar1 + -1;
                          UNLOCK();
                          if (iVar20 == 1) {
                            (*(code *)**(undefined8 **)local_150.Reference)();
                          }
                        }
                        this->bIsSeeking = bVar19;
                        local_128 = pFVar35;
                      }
                      else {
                        local_128 = pFVar38;
                        if ((bVar19 == false) || (fVar41 <= fVar40)) {
                          pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                              (&this->SystemInstanceController);
                          if (pFVar38 != (FBaseGraphTask *)0x0) {
                            LOCK();
                            *(int *)&pFVar38->field_0x30 = *(int *)&pFVar38->field_0x30 + 1;
                            UNLOCK();
                          }
                          local_110 = pFVar38;
                          FNiagaraSystemInstanceController::
                          ManualTick<float,TRefCountPtr<FBaseGraphTask>_>
                                    (pFVar24,fVar40,(FBaseGraphTask *)&local_110);
                        }
                      }
                      goto LAB_14906bfc2;
                    }
                  }
                }
                else {
                  if (EVar4 != DesiredAgeNoSeek) goto LAB_14906bfe2;
                  if ((param_3 == (FActorComponentTickFunction *)0x0) ||
                     (bVar19 = FTickFunction::IsCompletionHandleValid((FTickFunction *)param_3),
                     !bVar19)) {
                    pFVar38 = (FBaseGraphTask *)0x0;
                    local_f0 = 0;
                  }
                  else {
                    TVar29 = FTickFunction::GetCompletionHandle((FTickFunction *)param_3);
                    /* WARNING: Load size is inaccurate */
                    pFVar38 = *TVar29.Reference;
                    *(undefined8 *)TVar29.Reference = 0;
                    if (local_f8 != (undefined8 *)0x0) {
                      LOCK();
                      piVar2 = (int *)(local_f8 + 6);
                      iVar20 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if ((iVar20 == 1) && (local_f8 != (undefined8 *)0x0)) {
                        (**(code **)*local_f8)();
                      }
                    }
                  }
                  pUVar6 = (this->Asset).field0_0x0.DebugPtr;
                  fVar40 = this->DesiredAge - this->LastHandledDesiredAge;
                  if (pUVar6->bFixedTickDelta == false) {
                    fVar41 = this->SeekDelta;
                  }
                  else {
                    fVar41 = pUVar6->FixedTickDeltaTime;
                  }
                  fVar42 = fVar41;
                  if (0.0 <= fVar40) {
                    if (fVar41 * __real_40a00000 <= fVar40) {
                      pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                          (&this->SystemInstanceController);
                      FNiagaraSystemInstanceController::
                      Reset<enum_FNiagaraSystemInstance::EResetMode>(pFVar24,ResetAll);
                      pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                          (&this->SystemInstanceController);
                      if (pFVar38 != (FBaseGraphTask *)0x0) {
                        LOCK();
                        *(int *)&pFVar38->field_0x30 = *(int *)&pFVar38->field_0x30 + 1;
                        UNLOCK();
                      }
                      TVar29.Reference = (FBaseGraphTask *)&local_d8;
                      local_d8 = pFVar38;
                    }
                    else {
                      pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                          (&this->SystemInstanceController);
                      if (pFVar38 != (FBaseGraphTask *)0x0) {
                        LOCK();
                        *(int *)&pFVar38->field_0x30 = *(int *)&pFVar38->field_0x30 + 1;
                        UNLOCK();
                      }
                      TVar29.Reference = (FBaseGraphTask *)&local_e0;
                      fVar42 = fVar41 + fVar41;
                      local_e0 = pFVar38;
                      if (fVar40 <= fVar41 + fVar41) {
                        fVar42 = fVar40;
                      }
                    }
LAB_14906bfa9:
                    FNiagaraSystemInstanceController::
                    ManualTick<float,TRefCountPtr<FBaseGraphTask>_>(pFVar24,fVar42,TVar29);
                  }
                  else if (fVar41 <= (float)((uint)fVar40 & __xmm_7fffffff7fffffff7fffffff7fffffff))
                  {
                    pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                        (&this->SystemInstanceController);
                    FNiagaraSystemInstanceController::Reset<enum_FNiagaraSystemInstance::EResetMode>
                              (pFVar24,ResetAll);
                    pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                        (&this->SystemInstanceController);
                    if (pFVar38 != (FBaseGraphTask *)0x0) {
                      LOCK();
                      *(int *)&pFVar38->field_0x30 = *(int *)&pFVar38->field_0x30 + 1;
                      UNLOCK();
                    }
                    TVar29.Reference = (FBaseGraphTask *)&local_e8;
                    local_e8 = pFVar38;
                    goto LAB_14906bfa9;
                  }
                  this->LastHandledDesiredAge = this->DesiredAge;
                  local_128 = pFVar38;
LAB_14906bfc2:
                  if (local_128 != (FBaseGraphTask *)0x0) {
                    LOCK();
                    puVar1 = &local_128->field_0x30;
                    iVar20 = *(int *)puVar1;
                    *(int *)puVar1 = *(int *)puVar1 + -1;
                    UNLOCK();
                    if (iVar20 == 1) {
                      puVar32 = *(undefined8 **)local_128;
                      goto LAB_14906bfdb;
                    }
                  }
                }
              }
              else {
                pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                    (&this->SystemInstanceController);
                fVar40 = FNiagaraSystemInstanceController::GetAge<>(pFVar24);
                if ((this->AgeUpdateMode == DesiredAge) || (this->AgeUpdateMode == DesiredAgeNoSeek)
                   ) {
                  if (this->DesiredAge <= fVar40 && fVar40 != this->DesiredAge) {
                    pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                        (&this->SystemInstanceController);
                    FNiagaraSystemInstanceController::Reset<enum_FNiagaraSystemInstance::EResetMode>
                              (pFVar24,ResetAll);
                  }
                  fVar40 = this->DesiredAge;
                }
                else {
                  fVar40 = fVar40 + param_1;
                }
                pFVar24 = TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
                                    (&this->SystemInstanceController);
                if ((param_3 == (FActorComponentTickFunction *)0x0) ||
                   (bVar18 = FTickFunction::IsCompletionHandleValid((FTickFunction *)param_3),
                   !bVar18)) {
                  local_160 = (undefined8 *)0x0;
                  TVar29.Reference = (FBaseGraphTask *)&local_160;
                }
                else {
                  TVar29 = FTickFunction::GetCompletionHandle((FTickFunction *)param_3);
                  bVar11 = true;
                  bVar19 = false;
                }
                    /* WARNING: Load size is inaccurate */
                local_168.Reference = *TVar29.Reference;
                *(undefined8 *)TVar29.Reference = 0;
                pUVar8 = (this->SimCache).field0_0x0.DebugPtr;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar8 != (UNiagaraSimCache *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar8);
                }
                if ((pFVar24->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
                  bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_4531953176097587062>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                      ,0x8a,"IsValid()");
                  if (bVar18) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  if (((pFVar24->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar18)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                FNiagaraSystemInstance::SimCacheTick_GameThread
                          ((pFVar24->SystemInstance).Object,pUVar8,fVar40,param_1,&local_168);
                if (local_168.Reference != (FBaseGraphTask *)0x0) {
                  LOCK();
                  puVar1 = &(local_168.Reference)->field_0x30;
                  iVar20 = *(int *)puVar1;
                  *(int *)puVar1 = *(int *)puVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    (*(code *)**(undefined8 **)local_168.Reference)();
                  }
                }
                if ((bVar19) && (local_160 != (undefined8 *)0x0)) {
                  LOCK();
                  piVar2 = (int *)(local_160 + 6);
                  iVar20 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    (**(code **)*local_160)();
                  }
                }
                local_128 = local_b8;
                if (bVar11) {
LAB_14906ba14:
                  if (local_128 != (FBaseGraphTask *)0x0) {
                    LOCK();
                    puVar1 = &local_128->field_0x30;
                    iVar20 = *(int *)puVar1;
                    *(int *)puVar1 = *(int *)puVar1 + -1;
                    UNLOCK();
                    if ((iVar20 == 1) && (local_128 != (FBaseGraphTask *)0x0)) {
                      puVar32 = *(undefined8 **)local_128;
LAB_14906bfdb:
                      (*(code *)*puVar32)(local_128);
                    }
                  }
                }
              }
LAB_14906bfe2:
              if (this->_padding_ != 0) {
                if ((this->bRenderingEnabled == 0) ||
                   ((this->bCanRenderWhileSeeking == false && (this->bIsSeeking != false)))) {
                  bVar19 = false;
                }
                else {
                  bVar19 = true;
                }
                this_00 = *(FNiagaraSystemRenderData **)(this->_padding_ + 0x2d8);
                if (this_00 != (FNiagaraSystemRenderData *)0x0) {
                  FNiagaraSystemRenderData::SetRenderingEnabled_GT(this_00,bVar19);
                }
              }
            }
          }
        }
      }
      else {
        (**(code **)(this->_padding_ + 0x420))(this,0);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))
              (this,CONCAT31(SUB43(uVar5,1) >> 1,(char)((uint)uVar5 >> 1)) & 0xffffff01);
  }
LAB_14906c034:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar17) && (FVar36 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar33 == (FThreadStats *)0x0) {
      pFVar34 = FThreadStatsPool::Get();
      pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
    }
    if (pFVar33->bWaitForExplicitFlush < pFVar33->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar36.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar33,&local_a8);
      piVar2 = &pFVar33->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar33,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar33,false,false);
      }
    }
  }
LAB_14906c101:
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar16) && (FVar37 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar33 == (FThreadStats *)0x0) {
      pFVar34 = FThreadStatsPool::Get();
      pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
    }
    if (pFVar33->bWaitForExplicitFlush < pFVar33->ScopeCount) {
      local_98.NameAndInfo.Index = FVar37.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar37.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar33,&local_98);
      piVar2 = &pFVar33->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar33,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar33,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Effects");
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(&local_188);
  return;
}

// UnregisterWithScalabilityManager @ 14906e860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::UnregisterWithScalabilityManager(UNiagaraComponent *this)

{
  UWorld *pUVar1;
  FNiagaraWorldManager *this_00;
  
  if (this->ScalabilityManagerHandle != -1) {
    pUVar1 = (UWorld *)this->_padding_;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = FNiagaraWorldManager::Get(pUVar1);
    if (this_00 != (FNiagaraWorldManager *)0x0) {
      FNiagaraWorldManager::UnregisterWithScalabilityManager
                (this_00,this,this->ScalabilityEffectType);
    }
  }
  this->bIsCulledByScalability = 0;
  this->ScalabilityEffectType = (UNiagaraEffectType *)0x0;
  this->ScalabilityManagerHandle = -1;
  return;
}

// UpdateInstanceSoloMode @ 14906eaf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraComponent::UpdateInstanceSoloMode(UNiagaraComponent *this)

{
  UNiagaraSystem *pUVar1;
  FNiagaraSystemInstanceController *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  
  if ((((this->bForceSolo != 0) || ((this->SimCache).field0_0x0.DebugPtr != (UNiagaraSimCache *)0x0)
       ) || (__real_322bcc77 <
             (float)((uint)(this->CustomTimeDilation - __real_3f800000) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     ((pUVar1 = (this->Asset).field0_0x0.DebugPtr, pUVar1 != (UNiagaraSystem *)0x0 &&
      (pUVar1->bFixedTickDelta != false)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  pFVar2 = (this->SystemInstanceController).Object;
  if (pFVar2 != (FNiagaraSystemInstanceController *)0x0) {
    if ((pFVar2->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587068>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x84,"IsValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar2->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    FNiagaraSystemInstance::SetForceSolo((pFVar2->SystemInstance).Object,bVar5);
  }
  if ((this->_padding_ & 0x100000) != 0) {
    (**(code **)(this->_padding_ + 0x420))(this,bVar5);
  }
  return;
}

// execAdvanceSimulation @ 149071670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execAdvanceSimulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8 !=
       (FNiagaraSystemInstanceController *)0x0) && (__real_322bcc77 < local_res8[0])) {
    FNiagaraSystemInstanceController::AdvanceSimulation<int,float>
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,local_res10[0],
               local_res8[0]);
  }
  return;
}

// execAdvanceSimulationByTime @ 149071750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execAdvanceSimulationByTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8 !=
       (FNiagaraSystemInstanceController *)0x0) && (__real_322bcc77 < local_res8[0])) {
    FNiagaraSystemInstanceController::AdvanceSimulation<int,float>
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,
               (int)ROUND((local_res10[0] / local_res8[0] + local_res10[0] / local_res8[0]) -
                          __real_3f000000) >> 1,local_res8[0]);
  }
  return;
}

// execClearEmitterFixedBounds @ 149071850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execClearEmitterFixedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FName *pFVar8;
  undefined1 local_e8 [8];
  FName local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 uStack_a7;
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  FVar6 = local_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(param_1 + 0x31);
  pFVar8 = *(FName **)&param_1[0x30].field_0x20;
  pFVar1 = pFVar8 + (longlong)iVar2 * 9;
  while( true ) {
    if (*(int *)(param_1 + 0x31) != iVar2) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_e8);
    }
    if (pFVar8 == pFVar1) goto LAB_149071943;
    if (*pFVar8 == FVar6) break;
    pFVar8 = pFVar8 + 9;
  }
  local_a8 = 0;
  pFVar8[2].ComparisonIndex = 0;
  pFVar8[2].Number = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  uStack_a7 = 0;
  uStack_a3 = 0;
  pFVar8[4].ComparisonIndex = 0;
  pFVar8[4].Number = 0;
  pFVar8[5].ComparisonIndex = 0;
  pFVar8[5].Number = 0;
  uStack_a1 = 0;
  pFVar8[6].ComparisonIndex = 0;
  pFVar8[6].Number = 0;
  pFVar8[7].ComparisonIndex = 0;
  pFVar8[7].Number = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  pFVar8[8].ComparisonIndex = 0;
  pFVar8[8].Number = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
LAB_149071943:
  lVar4 = *(longlong *)&param_1[0x28].field_0x8;
  if (lVar4 != 0) {
    local_70 = 0;
    uStack_6f = 0;
    local_48 = 0;
    uStack_40 = 0;
    uStack_6b = 0;
    uStack_69 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_38 = 0;
    local_68._s_0.X = 0.0;
    local_68._s_0.Y = 0.0;
    local_68._s_0.Z = 0.0;
    uStack_50 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587049>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x97,"IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FNiagaraSystemInstance::SetEmitterFixedBounds
              (*(FNiagaraSystemInstance **)(lVar4 + 0x30),FVar6,(TBox<double> *)&local_68._s_0);
  }
  return;
}

// execClearSimCache @ 149071a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execClearSimCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[3].field_0x22 & 0x10) == 0) ||
     (lVar2 = *(longlong *)&param_1[0x32].field_0x20, lVar2 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(lVar2 + 0x68) != '\0';
  }
  *(undefined8 *)&param_1[0x32].field_0x20 = 0;
  UpdateInstanceSoloMode((UNiagaraComponent *)param_1);
  if ((bVar3) || (bVar4)) {
    ReinitializeSystem((UNiagaraComponent *)param_1);
  }
  return;
}

// execClearSystemFixedBounds @ 149071af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execClearSystemFixedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&param_1[0x30].field_0x8 = uVar1;
  *(double *)&param_1[0x30].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)&param_1[0x30].field_0x8;
  param_1[0x30].field_0x18 = 0;
  uVar1 = *(undefined8 *)&param_1[0x30].field_0x10;
  *(undefined8 *)&param_1[0x2f].field_0x10 = uVar2;
  *(undefined8 *)&param_1[0x2f].field_0x18 = uVar3;
  *(undefined8 *)&param_1[0x2f].field_0x20 = uVar1;
  if (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8 !=
      (FNiagaraSystemInstanceController *)0x0) {
    local_48._s_0.X = 0.0;
    local_48._s_0.Y = 0.0;
    local_48._s_0.Z = 0.0;
    uStack_30 = 0;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    FNiagaraSystemInstanceController::SetSystemFixedBounds<UE::Math::TBox<double>_>
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,
               (TBox<double> *)&local_48._s_0);
  }
  return;
}

// execGetAgeUpdateMode @ 149071bb0

void __cdecl UNiagaraComponent::execGetAgeUpdateMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x28].field_0x18;
  return;
}

// execGetAllowScalability @ 149071be0

void __cdecl
UNiagaraComponent::execGetAllowScalability(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)&param_1[0x2b].field_0x14 >> 3) & 1;
  return;
}

// execGetAsset @ 149071c10

void __cdecl UNiagaraComponent::execGetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x22);
  return;
}

// execGetCustomTimeDilation @ 149071c40

void __cdecl
UNiagaraComponent::execGetCustomTimeDilation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x31].field_0x8;
  return;
}

// execGetDataInterface @ 149071c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execGetDataInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  wchar_t *pwVar6;
  FName local_res10;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar6 = L"";
  if ((int)local_10 != 0) {
    pwVar6 = local_18;
  }
  pFVar3 = ::FName::FName(&local_res10,pwVar6);
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,(UNiagaraComponent *)param_1,FVar2);
  *(UNiagaraDataInterface **)param_3 = pUVar5;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetDesiredAge @ 149071d50

void __cdecl UNiagaraComponent::execGetDesiredAge(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x28].field_0x1c;
  return;
}

// execGetEmitterFixedBounds @ 149071db0

void __cdecl
UNiagaraComponent::execGetEmitterFixedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined1 local_78 [8];
  longlong local_70 [9];
  
  local_70[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  lVar17 = local_70[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(param_1 + 0x31);
  plVar4 = *(longlong **)&param_1[0x30].field_0x20;
  plVar1 = plVar4 + (longlong)iVar2 * 9;
  while( true ) {
    if (*(int *)(param_1 + 0x31) != iVar2) {
      `TCheckedPointerIterator<UNiagaraComponent::FEmitterOverrideInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_78);
    }
    if (plVar4 == plVar1) break;
    if (*plVar4 == lVar17) {
      uVar5 = (undefined4)plVar4[2];
      uVar6 = *(undefined4 *)((longlong)plVar4 + 0x14);
      uVar7 = (undefined4)plVar4[3];
      uVar8 = *(undefined4 *)((longlong)plVar4 + 0x1c);
      uVar9 = (undefined4)plVar4[4];
      uVar10 = *(undefined4 *)((longlong)plVar4 + 0x24);
      uVar11 = (undefined4)plVar4[5];
      uVar12 = *(undefined4 *)((longlong)plVar4 + 0x2c);
      uVar13 = (undefined4)plVar4[6];
      uVar14 = *(undefined4 *)((longlong)plVar4 + 0x34);
      uVar15 = (undefined4)plVar4[7];
      uVar16 = *(undefined4 *)((longlong)plVar4 + 0x3c);
      lVar17 = plVar4[8];
LAB_149071e8f:
      *(undefined4 *)param_3 = uVar5;
      *(undefined4 *)((longlong)param_3 + 4) = uVar6;
      *(undefined4 *)((longlong)param_3 + 8) = uVar7;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar8;
      *(undefined4 *)((longlong)param_3 + 0x10) = uVar9;
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar10;
      *(undefined4 *)((longlong)param_3 + 0x18) = uVar11;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar12;
      *(undefined4 *)((longlong)param_3 + 0x20) = uVar13;
      *(undefined4 *)((longlong)param_3 + 0x24) = uVar14;
      *(undefined4 *)((longlong)param_3 + 0x28) = uVar15;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uVar16;
      *(longlong *)((longlong)param_3 + 0x30) = lVar17;
      return;
    }
    plVar4 = plVar4 + 9;
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  lVar17 = 0;
  goto LAB_149071e8f;
}

// execGetForceLocalPlayerEffect @ 149071ec0

void __cdecl
UNiagaraComponent::execGetForceLocalPlayerEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)&param_1[0x2b].field_0x14 >> 4) & 1;
  return;
}

// execGetForceSolo @ 149071ef0

void __cdecl UNiagaraComponent::execGetForceSolo(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[0x27].field_0x20 & 1;
  return;
}

// execGetLockDesiredAgeDeltaTimeToSeekDelta @ 149071f20

void __cdecl
UNiagaraComponent::execGetLockDesiredAgeDeltaTimeToSeekDelta
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x29].field_0x4;
  return;
}

// execGetMaxSimTime @ 149071f50

void __cdecl UNiagaraComponent::execGetMaxSimTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x29].field_0x8;
  return;
}

// execGetOcclusionQueryMode @ 149071f80

void __cdecl
UNiagaraComponent::execGetOcclusionQueryMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x29].field_0x19;
  return;
}

// execGetPreviewLODDistance @ 149071fb0

void __cdecl
UNiagaraComponent::execGetPreviewLODDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x2b].field_0x4 & 1) != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2a].field_0x24;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetPreviewLODDistanceEnabled @ 149071ff0

void __cdecl
UNiagaraComponent::execGetPreviewLODDistanceEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[0x2b].field_0x4 & 1;
  return;
}

// execGetRandomSeedOffset @ 149072020

void __cdecl
UNiagaraComponent::execGetRandomSeedOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x22].field_0xc;
  return;
}

// execGetSeekDelta @ 149072050

void __cdecl UNiagaraComponent::execGetSeekDelta(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x29);
  return;
}

// execGetSimCache @ 149072080

void __cdecl UNiagaraComponent::execGetSimCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x32].field_0x20;
  return;
}

// execGetSystemFixedBounds @ 1490720b0

void __cdecl
UNiagaraComponent::execGetSystemFixedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x2f].field_0x18;
  uVar3 = *(undefined8 *)&param_1[0x2f].field_0x20;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)&param_1[0x30].field_0x8;
  uVar6 = *(undefined8 *)&param_1[0x30].field_0x10;
  uVar1 = *(undefined8 *)&param_1[0x30].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2f].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar1;
  return;
}

// execGetTickBehavior @ 149072100

void __cdecl UNiagaraComponent::execGetTickBehavior(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x8;
  return;
}

// execGetVariableBool @ 149072130

void __cdecl UNiagaraComponent::execGetVariableBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this;
  int *piVar5;
  uchar *puVar6;
  int iVar7;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_38;
  FNiagaraTypeDefinitionHandle local_30 [2];
  
  iVar7 = 0;
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar6 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_res10;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::BoolDef);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_30);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar4 != 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar5 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_38,0);
  if (piVar5 != (int *)0x0) {
    iVar4 = *piVar5;
    if (iVar4 != -1) {
      if ((iVar4 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < (longlong)iVar4 + 4U)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = *(int *)((longlong)iVar4 + *(longlong *)&param_1[0x23].field_0x8);
      *puVar6 = '\x01';
      goto LAB_1490722c1;
    }
  }
  *puVar6 = '\0';
LAB_1490722c1:
  *(bool *)param_3 = iVar7 != 0;
  return;
}

// execGetVariableColor @ 1490722e0

void __cdecl UNiagaraComponent::execGetVariableColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this;
  int *piVar7;
  FLinearColor *pFVar8;
  uchar uVar9;
  uchar *puVar10;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_58;
  FNiagaraTypeDefinitionHandle local_50 [2];
  FLinearColor_u_0 local_48;
  undefined1 local_38;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar10 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  local_58 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_50,&FNiagaraTypeDefinition::ColorDef);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_50);
  iVar6 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar6 != 0x10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = 0;
  piVar7 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_58,0);
  uVar9 = '\0';
  if (piVar7 != (int *)0x0) {
    iVar6 = *piVar7;
    if (iVar6 != -1) {
      if ((iVar6 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < (longlong)iVar6 + 0x10U)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar9 = '\x01';
      local_38 = 1;
      puVar1 = (undefined8 *)(*(longlong *)&param_1[0x23].field_0x8 + (longlong)iVar6);
      local_48._0_8_ = *puVar1;
      local_48._8_8_ = puVar1[1];
    }
  }
  *puVar10 = uVar9;
  pFVar8 = (FLinearColor *)&local_48;
  if (uVar9 == '\0') {
    pFVar8 = &FLinearColor::White;
  }
  uVar4 = *(undefined8 *)&((FLinearColor_u_0_s_0 *)pFVar8)->B;
  *(undefined8 *)param_3 = *(undefined8 *)&((FLinearColor_u_0_s_0 *)pFVar8)->R;
  *(undefined8 *)((longlong)param_3 + 8) = uVar4;
  return;
}

// execGetVariableFloat @ 1490724d0

void __cdecl UNiagaraComponent::execGetVariableFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  int *piVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_38;
  FNiagaraTypeDefinitionHandle local_30 [2];
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  local_38 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::FloatDef);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_30);
  iVar5 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar5 != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_38,0);
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    if (iVar5 != -1) {
      if ((iVar5 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < (longlong)iVar5 + 4U)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar1 = *(undefined4 *)((longlong)iVar5 + *(longlong *)&param_1[0x23].field_0x8);
      *puVar7 = '\x01';
      *(undefined4 *)param_3 = uVar1;
      return;
    }
  }
  *puVar7 = '\0';
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetVariableInt @ 149072690

void __cdecl UNiagaraComponent::execGetVariableInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  int *piVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_38;
  FNiagaraTypeDefinitionHandle local_30 [2];
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_res10;
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::IntDef);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_30);
  iVar5 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar5 != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1a1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_38,0);
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    if (iVar5 != -1) {
      if ((iVar5 < 0) ||
         ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < (longlong)iVar5 + 4U)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar1 = *(undefined4 *)((longlong)iVar5 + *(longlong *)&param_1[0x23].field_0x8);
      *puVar7 = '\x01';
      *(undefined4 *)param_3 = uVar1;
      return;
    }
  }
  *puVar7 = '\0';
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetVariableMatrix @ 149072850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execGetVariableMatrix(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TMatrix<double> *pTVar3;
  bool *pbVar4;
  bool local_res10 [8];
  FName local_res18 [2];
  TMatrix<double> local_98;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetVariableMatrix((UNiagaraComponent *)param_1,&local_98,local_res18[0],pbVar4);
  dVar2 = pTVar3->M[0][1];
  *(double *)param_3 = pTVar3->M[0][0];
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = pTVar3->M[0][3];
  *(double *)((longlong)param_3 + 0x10) = pTVar3->M[0][2];
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = pTVar3->M[1][1];
  *(double *)((longlong)param_3 + 0x20) = pTVar3->M[1][0];
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = pTVar3->M[1][3];
  *(double *)((longlong)param_3 + 0x30) = pTVar3->M[1][2];
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = pTVar3->M[2][1];
  *(double *)((longlong)param_3 + 0x40) = pTVar3->M[2][0];
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = pTVar3->M[2][3];
  *(double *)((longlong)param_3 + 0x50) = pTVar3->M[2][2];
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  dVar2 = pTVar3->M[3][1];
  *(double *)((longlong)param_3 + 0x60) = pTVar3->M[3][0];
  *(double *)((longlong)param_3 + 0x68) = dVar2;
  dVar2 = pTVar3->M[3][3];
  *(double *)((longlong)param_3 + 0x70) = pTVar3->M[3][2];
  *(double *)((longlong)param_3 + 0x78) = dVar2;
  return;
}

// execGetVariablePosition @ 149072990

void __cdecl
UNiagaraComponent::execGetVariablePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  double dVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  uchar *puVar6;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar6 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = (TVector<double> *)
           (**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x68))
                     (&param_1[0x22].field_0x10,local_res18);
  *puVar6 = pTVar4 != (TVector<double> *)0x0;
  pTVar5 = &UE::Math::TVector<double>::ZeroVector;
  if (pTVar4 != (TVector<double> *)0x0) {
    pTVar5 = pTVar4;
  }
  dVar3 = (pTVar5->field0_0x0)._s_0.Y;
  dVar1 = (pTVar5->field0_0x0)._s_0.Z;
  *(double *)param_3 = (pTVar5->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execGetVariableQuat @ 149072aa0

void __cdecl UNiagaraComponent::execGetVariableQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  int *piVar6;
  uchar *puVar7;
  float fVar8;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_58;
  FNiagaraTypeDefinitionHandle local_50 [3];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  local_58 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_50,&FNiagaraTypeDefinition::QuatDef);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_50);
  iVar5 = FNiagaraTypeDefinition::GetSize(this);
  if ((iVar5 != 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameter.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x1a1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_58,0);
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    if (iVar5 != -1) {
      if (((iVar5 < 0) ||
          ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < (longlong)iVar5 + 0x10U)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x17f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar1 = (float *)(*(longlong *)&param_1[0x23].field_0x8 + (longlong)iVar5);
      fVar8 = *pfVar1;
      fStack_44 = pfVar1[1];
      fStack_40 = pfVar1[2];
      fStack_3c = pfVar1[3];
      bVar4 = true;
      *puVar7 = '\x01';
      goto LAB_149072c57;
    }
  }
  bVar4 = false;
  *puVar7 = '\0';
  fVar8 = UE::Math::TQuat<float>::Identity.X;
LAB_149072c57:
  if (!bVar4) {
    fStack_44 = UE::Math::TQuat<float>::Identity.Y;
  }
  if (!bVar4) {
    fStack_40 = UE::Math::TQuat<float>::Identity.Z;
  }
  if (!bVar4) {
    fStack_3c = UE::Math::TQuat<float>::Identity.W;
  }
  *(double *)param_3 = (double)fVar8;
  *(double *)((longlong)param_3 + 8) = (double)fStack_44;
  *(double *)((longlong)param_3 + 0x10) = (double)fStack_40;
  *(double *)((longlong)param_3 + 0x18) = (double)fStack_3c;
  return;
}

// execGetVariableVec2 @ 149072ce0

void __cdecl UNiagaraComponent::execGetVariableVec2(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this;
  int *piVar5;
  uchar *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_48;
  FNiagaraTypeDefinitionHandle local_40 [2];
  undefined8 local_38;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar6 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  local_48 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::Vec2Def);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_40);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if ((iVar4 != 8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameter.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x1a1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar5 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_48,0);
  if (piVar5 != (int *)0x0) {
    iVar4 = *piVar5;
    if (iVar4 != -1) {
      if (((iVar4 < 0) ||
          ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < (longlong)iVar4 + 8U)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x17f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38 = *(undefined8 *)((longlong)iVar4 + *(longlong *)&param_1[0x23].field_0x8);
      bVar3 = true;
      *puVar6 = '\x01';
      uVar8 = (float)local_38;
      goto LAB_149072e83;
    }
  }
  bVar3 = false;
  *puVar6 = '\0';
  uVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
LAB_149072e83:
  uVar7 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    uVar7 = local_38._4_4_;
  }
  *(double *)param_3 = (double)(float)uVar8;
  *(double *)((longlong)param_3 + 8) = (double)(float)uVar7;
  return;
}

// execGetVariableVec3 @ 149072ed0

void __cdecl UNiagaraComponent::execGetVariableVec3(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this;
  int *piVar5;
  longlong lVar6;
  uchar *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_48;
  FNiagaraTypeDefinitionHandle local_40 [2];
  undefined8 local_38;
  float local_30;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  local_48 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::Vec3Def);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_40);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if ((iVar4 != 0xc) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameter.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x1a1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar5 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_48,0);
  if (piVar5 != (int *)0x0) {
    iVar4 = *piVar5;
    lVar6 = (longlong)iVar4;
    if (iVar4 != -1) {
      if (((iVar4 < 0) || ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < lVar6 + 0xcU))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                ,0x17f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = *(ulonglong *)(*(longlong *)&param_1[0x23].field_0x8 + lVar6);
      local_30 = *(float *)(*(longlong *)&param_1[0x23].field_0x8 + 8 + lVar6);
      bVar3 = true;
      *puVar7 = '\x01';
      local_38 = uVar8;
      goto LAB_149073079;
    }
  }
  bVar3 = false;
  *puVar7 = '\0';
  uVar8 = (ulonglong)(uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
LAB_149073079:
  uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    uVar9 = local_38._4_4_;
  }
  if (!bVar3) {
    local_30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  *(double *)param_3 = (double)(float)uVar8;
  *(double *)((longlong)param_3 + 8) = (double)(float)uVar9;
  *(double *)((longlong)param_3 + 0x10) = (double)local_30;
  return;
}

// execGetVariableVec4 @ 1490730e0

void __cdecl UNiagaraComponent::execGetVariableVec4(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  int *piVar6;
  uchar *puVar7;
  float fVar8;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_68;
  FNiagaraTypeDefinitionHandle local_60 [3];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  local_68 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_60,&FNiagaraTypeDefinition::Vec4Def);
  this = FNiagaraTypeDefinitionHandle::Resolve(local_60);
  iVar5 = FNiagaraTypeDefinition::GetSize(this);
  if ((iVar5 != 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameter.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x1a1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&local_68,0);
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    if (iVar5 != -1) {
      if (((iVar5 < 0) ||
          ((ulonglong)(longlong)*(int *)&param_1[0x23].field_0x10 < (longlong)iVar5 + 0x10U)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x17f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar1 = (float *)(*(longlong *)&param_1[0x23].field_0x8 + (longlong)iVar5);
      fVar8 = *pfVar1;
      fStack_54 = pfVar1[1];
      fStack_50 = pfVar1[2];
      fStack_4c = pfVar1[3];
      *puVar7 = '\x01';
      bVar4 = true;
      goto LAB_14907329c;
    }
  }
  bVar4 = false;
  *puVar7 = '\0';
  fVar8 = 0.0;
LAB_14907329c:
  *(double *)param_3 = (double)fVar8;
  if (!bVar4) {
    fStack_54 = 0.0;
  }
  *(double *)((longlong)param_3 + 8) = (double)fStack_54;
  if (!bVar4) {
    fStack_50 = 0.0;
  }
  *(double *)((longlong)param_3 + 0x10) = (double)fStack_50;
  fVar8 = 0.0;
  if (bVar4) {
    fVar8 = fStack_4c;
  }
  *(double *)((longlong)param_3 + 0x18) = (double)fVar8;
  return;
}

// execInitForPerformanceBaseline @ 149073310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execInitForPerformanceBaseline(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0x22 = param_1[0xf].field_0x22 | 8;
  *(uint *)&param_1[0x2b].field_0x14 = *(uint *)&param_1[0x2b].field_0x14 & 0xfffffff7;
  UnregisterWithScalabilityManager((UNiagaraComponent *)param_1);
  SetPreviewLODDistance((UNiagaraComponent *)param_1,true,__real_3f800000,__real_461c4000);
  return;
}

// execIsPaused @ 149073370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execIsPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPaused((UNiagaraComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execReinitializeSystem @ 149073450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execReinitializeSystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReinitializeSystem((UNiagaraComponent *)param_1);
  return;
}

// execResetSystem @ 149073470

void __cdecl UNiagaraComponent::execResetSystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014907348a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,1);
  return;
}

// execSeekToDesiredAge @ 1490734a0

void __cdecl UNiagaraComponent::execSeekToDesiredAge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x28].field_0x1c = local_res8[0];
  param_1[0x29].field_0xc = 1;
  return;
}

// execSetAgeUpdateMode @ 149073530

void __cdecl UNiagaraComponent::execSetAgeUpdateMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x28].field_0x18 = local_res8[0];
  return;
}

// execSetAllowScalability @ 1490735b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetAllowScalability(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x2b].field_0x14 = *(uint *)&param_1[0x2b].field_0x14 & 0xfffffff7;
  *(uint *)&param_1[0x2b].field_0x14 =
       *(uint *)&param_1[0x2b].field_0x14 | -(uint)(local_res8[0] != 0) & 8;
  if (local_res8[0] == 0) {
    UnregisterWithScalabilityManager((UNiagaraComponent *)param_1);
  }
  else if ((param_1[3].field_0x22 & 0x10) != 0) {
    RegisterWithScalabilityManager((UNiagaraComponent *)param_1);
    return;
  }
  return;
}

// execSetAsset @ 149073680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UNiagaraSystem *local_res20;
  
  local_res20 = (UNiagaraSystem *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAsset((UNiagaraComponent *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execSetAutoDestroy @ 149073760

void __cdecl UNiagaraComponent::execSetAutoDestroy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [4];
  UObject *local_res20;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res10[0] != 0) && (param_1[0x29].field_0x18 != '\0')) &&
     (local_res20 = param_1,
     bVar2 = `UNiagaraComponent::SetAutoDestroy'::__l3::<lambda_1>::operator()(&local_res20), !bVar2
     )) {
    return;
  }
  *(uint *)&param_1[0x29].field_0x10 = *(uint *)&param_1[0x29].field_0x10 & 0xfffffffe;
  *(uint *)&param_1[0x29].field_0x10 = *(uint *)&param_1[0x29].field_0x10 | (uint)bVar3;
  return;
}

// execSetCanRenderWhileSeeking @ 149073820

void __cdecl
UNiagaraComponent::execSetCanRenderWhileSeeking(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x28].field_0x24 = local_res8[0] != 0;
  return;
}

// execSetCustomTimeDilation @ 1490738b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetCustomTimeDilation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (__real_322bcc77 <
      (float)((uint)(*(float *)&param_1[0x31].field_0x8 - local_res8[0]) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)&param_1[0x31].field_0x8 = local_res8[0];
    UpdateInstanceSoloMode((UNiagaraComponent *)param_1);
  }
  return;
}

// execSetDesiredAge @ 149073960

void __cdecl UNiagaraComponent::execSetDesiredAge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x28].field_0x1c = local_res8[0];
  param_1[0x29].field_0xc = 0;
  return;
}

// execSetEmitterFixedBounds @ 149073a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetEmitterFixedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FEmitterOverrideInfo *pFVar6;
  undefined1 auStackY_108 [32];
  FName local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar4 = local_d8;
  local_d0 = CONCAT71(uStack_17,local_18);
  local_b8 = local_48;
  dStack_b0 = dStack_40;
  local_a8 = local_38;
  dStack_a0 = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = local_28;
  dStack_90 = dStack_20;
  local_c8 = local_d0;
  pFVar6 = FindOrAddEmitterOverrideInfo((UNiagaraComponent *)param_1,local_d8);
  (pFVar6->FixedBounds).Min.field0_0x0._s_0.X = local_b8;
  (pFVar6->FixedBounds).Min.field0_0x0._s_0.Y = dStack_b0;
  (pFVar6->FixedBounds).Min.field0_0x0._s_0.Z = local_a8;
  (pFVar6->FixedBounds).Max.field0_0x0._s_0.X = dStack_a0;
  (pFVar6->FixedBounds).Max.field0_0x0._s_0.Y = local_98;
  (pFVar6->FixedBounds).Max.field0_0x0._s_0.Z = dStack_90;
  (pFVar6->FixedBounds).IsValid = (undefined1)local_d0;
  (pFVar6->FixedBounds).Pad[0] = local_d0._1_1_;
  (pFVar6->FixedBounds).Pad[1] = local_d0._2_1_;
  (pFVar6->FixedBounds).Pad[2] = local_d0._3_1_;
  (pFVar6->FixedBounds).Pad[3] = local_d0._4_1_;
  (pFVar6->FixedBounds).Pad[4] = local_d0._5_1_;
  (pFVar6->FixedBounds).Pad[5] = local_d0._6_1_;
  (pFVar6->FixedBounds).Pad[6] = local_d0._7_1_;
  lVar2 = *(longlong *)&param_1[0x28].field_0x8;
  if (lVar2 != 0) {
    local_58 = local_c8;
    local_88._s_0.X = local_b8;
    local_88._s_0.Y = dStack_b0;
    local_88._s_0.Z = local_a8;
    dStack_70 = dStack_a0;
    local_68 = local_98;
    dStack_60 = dStack_90;
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587049>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x97,"IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    FNiagaraSystemInstance::SetEmitterFixedBounds
              (*(FNiagaraSystemInstance **)(lVar2 + 0x30),FVar4,(TBox<double> *)&local_88._s_0);
  }
  return;
}

// execSetForceLocalPlayerEffect @ 149073ca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetForceLocalPlayerEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x2b].field_0x14 = *(uint *)&param_1[0x2b].field_0x14 & 0xffffffef;
  *(uint *)&param_1[0x2b].field_0x14 =
       *(uint *)&param_1[0x2b].field_0x14 | -(uint)(local_res8[0] != 0) & 0x10;
  ResolveOwnerAllowsScalability((UNiagaraComponent *)param_1,true);
  return;
}

// execSetForceSolo @ 149073d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetForceSolo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1[0x27].field_0x20 & 1) != (uint)(local_res8[0] != 0)) {
    *(uint *)&param_1[0x27].field_0x20 =
         *(uint *)&param_1[0x27].field_0x20 & 0xfffffffe | (uint)(local_res8[0] != 0);
    UpdateInstanceSoloMode((UNiagaraComponent *)param_1);
  }
  return;
}

// execSetGpuComputeDebug @ 149073df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetGpuComputeDebug(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FNiagaraSystemInstanceController *this;
  uint uVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1[0x27].field_0x20 >> 1 & 1) != (uint)(local_res8[0] != 0)) {
    this = *(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8;
    uVar2 = *(uint *)&param_1[0x27].field_0x20 & 0xfffffffd | (uint)(local_res8[0] != 0) * 2;
    *(uint *)&param_1[0x27].field_0x20 = uVar2;
    if (this != (FNiagaraSystemInstanceController *)0x0) {
      FNiagaraSystemInstanceController::SetGpuComputeDebug<bool>
                (this,(bool)((byte)(uVar2 >> 1) & 1));
    }
  }
  return;
}

// execSetLockDesiredAgeDeltaTimeToSeekDelta @ 149073eb0

void __cdecl
UNiagaraComponent::execSetLockDesiredAgeDeltaTimeToSeekDelta
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x29].field_0x4 = local_res8[0] != 0;
  return;
}

// execSetMaxSimTime @ 149073f40

void __cdecl UNiagaraComponent::execSetMaxSimTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x29].field_0x8 = local_res8[0];
  return;
}

// execSetNiagaraVariableActor @ 149073fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  UObject *local_res10;
  FName local_res20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar4 = L"";
  if ((int)local_10 != 0) {
    pwVar4 = local_18;
  }
  pFVar3 = ::FName::FName(&local_res20,pwVar4);
  SetVariableObject((UNiagaraComponent *)param_1,*pFVar3,pUVar2);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetNiagaraVariableBool @ 1490740d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int local_res10 [4];
  FName local_res20;
  wchar_t *local_28;
  undefined8 local_20;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_20 != 0) {
    pwVar3 = local_28;
  }
  pFVar2 = ::FName::FName(&local_res20,pwVar3);
  SetVariableBool((UNiagaraComponent *)param_1,*pFVar2,bVar4);
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraVariableFloat @ 1490741d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  float local_res10 [2];
  FName local_res20;
  wchar_t *local_28;
  undefined8 local_20;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar4 = L"";
  if ((int)local_20 != 0) {
    pwVar4 = local_28;
  }
  pFVar3 = ::FName::FName(&local_res20,pwVar4);
  SetVariableFloat((UNiagaraComponent *)param_1,*pFVar3,fVar2);
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraVariableInt @ 1490742e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  int local_res10 [2];
  FName local_res20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar4 = L"";
  if ((int)local_10 != 0) {
    pwVar4 = local_18;
  }
  pFVar3 = ::FName::FName(&local_res20,pwVar4);
  SetVariableInt((UNiagaraComponent *)param_1,*pFVar3,iVar2);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetNiagaraVariableLinearColor @ 1490743e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableLinearColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  FLinearColor *pFVar4;
  FName local_res10;
  wchar_t *local_28;
  undefined8 local_20;
  FLinearColor local_18;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar4 = &local_18;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar4 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_20 != 0) {
    pwVar3 = local_28;
  }
  pFVar2 = ::FName::FName(&local_res10,pwVar3);
  SetVariableLinearColor((UNiagaraComponent *)param_1,*pFVar2,pFVar4);
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraVariableMatrix @ 149074500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableMatrix(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  TMatrix<double> *pTVar4;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  FName local_b8 [2];
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = (wchar_t *)0x0;
  local_c0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pTVar4 = &local_a8;
  if ((TMatrix<double> *)param_2->MostRecentPropertyAddress != (TMatrix<double> *)0x0) {
    pTVar4 = (TMatrix<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_c0 != 0) {
    pwVar3 = local_c8;
  }
  pFVar2 = ::FName::FName(local_b8,pwVar3);
  SetVariableMatrix((UNiagaraComponent *)param_1,*pFVar2,pTVar4);
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execSetNiagaraVariableObject @ 149074630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  UObject *local_res10;
  FName local_res20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar4 = L"";
  if ((int)local_10 != 0) {
    pwVar4 = local_18;
  }
  pFVar3 = ::FName::FName(&local_res20,pwVar4);
  SetVariableObject((UNiagaraComponent *)param_1,*pFVar3,pUVar2);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetNiagaraVariablePosition @ 149074730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariablePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  FName local_res20;
  wchar_t *local_58;
  undefined8 local_50;
  TVector<double>_u_0 local_48;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48._s_0.X = local_28;
  local_48._s_0.Y = dStack_20;
  pwVar3 = L"";
  if ((int)local_50 != 0) {
    pwVar3 = local_58;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = ::FName::FName(&local_res20,pwVar3);
  local_48._s_0.Z = local_18;
  SetVariablePosition((UNiagaraComponent *)param_1,*pFVar2,(TVector<double> *)&local_48._s_0);
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execSetNiagaraVariableQuat @ 149074860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  TQuat<double> *pTVar4;
  FName local_res10;
  wchar_t *local_38;
  undefined8 local_30;
  TQuat<double> local_28;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar4 = &local_28;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar4 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_30 != 0) {
    pwVar3 = local_38;
  }
  pFVar2 = ::FName::FName(&local_res10,pwVar3);
  SetVariableQuat((UNiagaraComponent *)param_1,*pFVar2,pTVar4);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetNiagaraVariableVec2 @ 149074980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableVec2(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  FName local_res10;
  wchar_t *local_38;
  undefined8 local_30;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_30 != 0) {
    pwVar3 = local_38;
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  pFVar2 = ::FName::FName(&local_res10,pwVar3);
  SetVariableVec2((UNiagaraComponent *)param_1,*pFVar2,(TVector2<double> *)&local_18._s_0);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetNiagaraVariableVec3 @ 149074a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableVec3(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  FName local_res20;
  wchar_t *local_58;
  undefined8 local_50;
  TVector<double>_u_0 local_48;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48._s_0.X = local_28;
  local_48._s_0.Y = dStack_20;
  pwVar3 = L"";
  if ((int)local_50 != 0) {
    pwVar3 = local_58;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = ::FName::FName(&local_res20,pwVar3);
  local_48._s_0.Z = local_18;
  SetVariableVec3((UNiagaraComponent *)param_1,*pFVar2,(TVector<double> *)&local_48._s_0);
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execSetNiagaraVariableVec4 @ 149074bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetNiagaraVariableVec4(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  TVector4<double>_u_0 *pTVar4;
  FName local_res10;
  wchar_t *local_38;
  undefined8 local_30;
  TVector4<double>_u_0 local_28;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.W = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar4 = &local_28;
  if ((TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector4<double>_u_0 *)0x0) {
    pTVar4 = (TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_30 != 0) {
    pwVar3 = local_38;
  }
  pFVar2 = ::FName::FName(&local_res10,pwVar3);
  SetVariableVec4((UNiagaraComponent *)param_1,*pFVar2,(TVector4<double> *)&pTVar4->_s_0);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetOcclusionQueryMode @ 149074cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetOcclusionQueryMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != param_1[0x29].field_0x19) {
    param_1[0x29].field_0x19 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetPaused @ 149074d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FNiagaraSystemInstanceController *this;
  code *pcVar2;
  bool bVar3;
  ENiagaraExecutionState EVar4;
  bool bVar5;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar5 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x2b].field_0x14 = *(uint *)&param_1[0x2b].field_0x14 & 0xfffffdff;
  this = *(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8;
  *(uint *)&param_1[0x2b].field_0x14 = *(uint *)&param_1[0x2b].field_0x14 | (uint)bVar5 << 9;
  if (this != (FNiagaraSystemInstanceController *)0x0) {
    EVar4 = FNiagaraSystemInstanceController::GetRequestedExecutionState<>(this);
    if (EVar4 == Active) {
      if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      EVar4 = FNiagaraSystemInstanceController::GetActualExecutionState<>
                        (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8);
      if (EVar4 == Active) {
        if (bVar5) {
          UnregisterWithScalabilityManager((UNiagaraComponent *)param_1);
        }
        else {
          RegisterWithScalabilityManager((UNiagaraComponent *)param_1);
        }
        SetPausedInternal((UNiagaraComponent *)param_1,
                          (bool)((byte)(*(uint *)&param_1[0x2b].field_0x14 >> 9) & 1),false);
      }
    }
  }
  return;
}

// execSetPreviewLODDistance @ 149074eb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetPreviewLODDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  float local_res20 [2];
  float local_28 [4];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_28[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPreviewLODDistance((UNiagaraComponent *)param_1,bVar2,local_28[0],local_res20[0]);
  return;
}

// execSetRandomSeedOffset @ 149074fd0

void __cdecl
UNiagaraComponent::execSetRandomSeedOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x28].field_0x8;
  *(undefined4 *)&param_1[0x22].field_0xc = local_res8[0];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587083>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x75,"IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    *(undefined4 *)(*(longlong *)(lVar2 + 0x30) + 0x100) = uVar4;
  }
  return;
}

// execSetRenderingEnabled @ 1490750d0

void __cdecl
UNiagaraComponent::execSetRenderingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x29].field_0x10 = *(uint *)&param_1[0x29].field_0x10 & 0xfffffffd;
  *(uint *)&param_1[0x29].field_0x10 =
       *(uint *)&param_1[0x29].field_0x10 | -(uint)(local_res8[0] != 0) & 2;
  return;
}

// execSetSeekDelta @ 149075170

void __cdecl UNiagaraComponent::execSetSeekDelta(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 0x29) = local_res8[0];
  return;
}

// execSetSimCache @ 149075200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetSimCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pUVar3 = local_res10;
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[3].field_0x22 & 0x10) == 0) ||
     (lVar2 = *(longlong *)&param_1[0x32].field_0x20, lVar2 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(lVar2 + 0x68) != '\0';
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  *(UObject **)&param_1[0x32].field_0x20 = pUVar3;
  UpdateInstanceSoloMode((UNiagaraComponent *)param_1);
  if ((bVar4) || (bVar5)) {
    ReinitializeSystem((UNiagaraComponent *)param_1);
  }
  return;
}

// execSetSystemFixedBounds @ 149075340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetSystemFixedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FNiagaraSystemInstanceController *this;
  undefined1 auStack_a8 [32];
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = CONCAT71(uStack_17,local_18);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8;
  *(double *)&param_1[0x2f].field_0x10 = local_48;
  *(double *)&param_1[0x2f].field_0x18 = dStack_40;
  *(double *)&param_1[0x2f].field_0x20 = local_38;
  *(undefined8 *)(param_1 + 0x30) = uStack_30;
  *(undefined8 *)&param_1[0x30].field_0x8 = local_28;
  *(undefined8 *)&param_1[0x30].field_0x10 = uStack_20;
  *(undefined8 *)&param_1[0x30].field_0x18 = local_58;
  if (this != (FNiagaraSystemInstanceController *)0x0) {
    local_88._s_0.X = local_48;
    local_88._s_0.Y = dStack_40;
    local_88._s_0.Z = local_38;
    uStack_70 = uStack_30;
    local_68 = local_28;
    uStack_60 = uStack_20;
    FNiagaraSystemInstanceController::SetSystemFixedBounds<UE::Math::TBox<double>_>
              (this,(TBox<double> *)&local_88._s_0);
  }
  return;
}

// execSetTickBehavior @ 149075450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetTickBehavior(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  ENiagaraTickBehavior EVar4;
  bool bVar5;
  ENiagaraTickBehavior local_res8 [8];
  
  local_res8[0] = UsePrereqs;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  EVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x28].field_0x8;
  param_1[0x22].field_0x8 = local_res8[0];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587061>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x8b,"IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    FNiagaraSystemInstance::SetTickBehavior(*(FNiagaraSystemInstance **)(lVar2 + 0x30),EVar4);
  }
  return;
}

// execSetVariableActor @ 149075550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  UObject *pUVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  FName local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  uint local_50;
  uint local_4c;
  FNiagaraTypeDefinitionHandle local_48 [2];
  void *local_40;
  undefined8 local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  FVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_res8.ComparisonIndex.Value;
  local_4c = local_res8.Number;
  local_48[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_48,&FNiagaraTypeDefinition::UObjectDef);
  local_40 = (void *)0x0;
  local_38 = 0;
  if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    puVar8 = (uint *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                               (&param_1[0x22].field_0x10,&local_50,0);
    if (puVar8 != (uint *)0x0) {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar1 < *(int *)&param_1[0x24].field_0x8) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x24);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(lVar3 + (longlong)(int)uVar1 * 8) = pUVar6;
        *(uint *)&param_1[0x25].field_0x18 = *(uint *)&param_1[0x25].field_0x18 | 4;
      }
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,FVar5,
               (TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res20);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSetVariableBool @ 1490757a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableBool((UNiagaraComponent *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execSetVariableFloat @ 149075880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableFloat((UNiagaraComponent *)param_1,local_res20,local_res10[0]);
  return;
}

// execSetVariableInt @ 149075950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableInt((UNiagaraComponent *)param_1,local_res20,local_res10[0]);
  return;
}

// execSetVariableLinearColor @ 149075a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariableLinearColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLinearColor *pFVar2;
  FName local_res10;
  FLinearColor local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar2 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableLinearColor((UNiagaraComponent *)param_1,local_res10,pFVar2);
  return;
}

// execSetVariableMaterial @ 149075b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariableMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  UObject *pUVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  FName local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  uint local_50;
  uint local_4c;
  FNiagaraTypeDefinitionHandle local_48 [2];
  void *local_40;
  undefined8 local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  FVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_res8.ComparisonIndex.Value;
  local_4c = local_res8.Number;
  local_48[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_48,&FNiagaraTypeDefinition::UMaterialDef);
  local_40 = (void *)0x0;
  local_38 = 0;
  if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    puVar8 = (uint *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                               (&param_1[0x22].field_0x10,&local_50,0);
    if (puVar8 != (uint *)0x0) {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar1 < *(int *)&param_1[0x24].field_0x8) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x24);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(lVar3 + (longlong)(int)uVar1 * 8) = pUVar6;
        *(uint *)&param_1[0x25].field_0x18 = *(uint *)&param_1[0x25].field_0x18 | 4;
      }
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,FVar5,
               (TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>)local_res20);
  }
  *(uint *)&param_1[0x2b].field_0x14 = *(uint *)&param_1[0x2b].field_0x14 | 0x400;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSetVariableMatrix @ 149075d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariableMatrix(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0].ComparisonIndex.Value = 0;
  local_a8[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar2 = &local_98;
  if ((TMatrix<double> *)param_2->MostRecentPropertyAddress != (TMatrix<double> *)0x0) {
    pTVar2 = (TMatrix<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableMatrix((UNiagaraComponent *)param_1,local_a8[0],pTVar2);
  return;
}

// execSetVariableObject @ 149075e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariableObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  UObject *pUVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  FName local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  uint local_50;
  uint local_4c;
  FNiagaraTypeDefinitionHandle local_48 [2];
  void *local_40;
  undefined8 local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  FVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_res8.ComparisonIndex.Value;
  local_4c = local_res8.Number;
  local_48[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_48,&FNiagaraTypeDefinition::UObjectDef);
  local_40 = (void *)0x0;
  local_38 = 0;
  if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    puVar8 = (uint *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                               (&param_1[0x22].field_0x10,&local_50,0);
    if (puVar8 != (uint *)0x0) {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar1 < *(int *)&param_1[0x24].field_0x8) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x24);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(lVar3 + (longlong)(int)uVar1 * 8) = pUVar6;
        *(uint *)&param_1[0x25].field_0x18 = *(uint *)&param_1[0x25].field_0x18 | 4;
      }
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,FVar5,
               (TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res20);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSetVariablePosition @ 1490760b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariablePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariablePosition((UNiagaraComponent *)param_1,local_res10,(TVector<double> *)&local_28._s_0);
  return;
}

// execSetVariableQuat @ 1490761a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TQuat<double> *pTVar2;
  FName local_res10;
  TQuat<double> local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar2 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableQuat((UNiagaraComponent *)param_1,local_res10,pTVar2);
  return;
}

// execSetVariableStaticMesh @ 149076280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariableStaticMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  UObject *pUVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  FName local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  uint local_50;
  uint local_4c;
  FNiagaraTypeDefinitionHandle local_48 [2];
  void *local_40;
  undefined8 local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  FVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_res8.ComparisonIndex.Value;
  local_4c = local_res8.Number;
  local_48[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_48,&FNiagaraTypeDefinition::UStaticMeshDef);
  local_40 = (void *)0x0;
  local_38 = 0;
  if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    puVar8 = (uint *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                               (&param_1[0x22].field_0x10,&local_50,0);
    if (puVar8 != (uint *)0x0) {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar1 < *(int *)&param_1[0x24].field_0x8) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x24);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(lVar3 + (longlong)(int)uVar1 * 8) = pUVar6;
        *(uint *)&param_1[0x25].field_0x18 = *(uint *)&param_1[0x25].field_0x18 | 4;
      }
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,FVar5,
               (TWeakObjectPtr<UStaticMesh,FWeakObjectPtr>)local_res20);
  }
  *(uint *)&param_1[0x2b].field_0x14 = *(uint *)&param_1[0x2b].field_0x14 | 0x400;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSetVariableTexture @ 1490764d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariableTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  UObject *pUVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  FName local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  uint local_50;
  uint local_4c;
  FNiagaraTypeDefinitionHandle local_48 [2];
  void *local_40;
  undefined8 local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  FVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_res8.ComparisonIndex.Value;
  local_4c = local_res8.Number;
  local_48[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_48,&FNiagaraTypeDefinition::UTextureDef);
  local_40 = (void *)0x0;
  local_38 = 0;
  if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    puVar8 = (uint *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                               (&param_1[0x22].field_0x10,&local_50,0);
    if (puVar8 != (uint *)0x0) {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar1 < *(int *)&param_1[0x24].field_0x8) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x24);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(lVar3 + (longlong)(int)uVar1 * 8) = pUVar6;
        *(uint *)&param_1[0x25].field_0x18 = *(uint *)&param_1[0x25].field_0x18 | 4;
      }
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,FVar5,
               (TWeakObjectPtr<UTexture,FWeakObjectPtr>)local_res20);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSetVariableTextureRenderTarget @ 149076720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraComponent::execSetVariableTextureRenderTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  UObject *pUVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  FName local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  uint local_50;
  uint local_4c;
  FNiagaraTypeDefinitionHandle local_48 [2];
  void *local_40;
  undefined8 local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  FVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_res8.ComparisonIndex.Value;
  local_4c = local_res8.Number;
  local_48[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_48,&FNiagaraTypeDefinition::UTextureRenderTargetDef);
  local_40 = (void *)0x0;
  local_38 = 0;
  if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    puVar8 = (uint *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                               (&param_1[0x22].field_0x10,&local_50,0);
    if (puVar8 != (uint *)0x0) {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar1 < *(int *)&param_1[0x24].field_0x8) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x24);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(lVar3 + (longlong)(int)uVar1 * 8) = pUVar6;
        *(uint *)&param_1[0x25].field_0x18 = *(uint *)&param_1[0x25].field_0x18 | 4;
      }
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    if (*(longlong *)&param_1[0x28].field_0x8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemInstanceController::SetVariable
              (*(FNiagaraSystemInstanceController **)&param_1[0x28].field_0x8,FVar5,
               (TWeakObjectPtr<UTextureRenderTarget,FWeakObjectPtr>)local_res20);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execSetVariableVec2 @ 149076970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableVec2(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableVec2((UNiagaraComponent *)param_1,local_res10,(TVector2<double> *)&local_18._s_0);
  return;
}

// execSetVariableVec3 @ 149076a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableVec3(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableVec3((UNiagaraComponent *)param_1,local_res10,(TVector<double> *)&local_28._s_0);
  return;
}

// execSetVariableVec4 @ 149076b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraComponent::execSetVariableVec4(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector4<double>_u_0 *pTVar2;
  FName local_res10;
  TVector4<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.W = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector4<double>_u_0 *)0x0) {
    pTVar2 = (TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVariableVec4((UNiagaraComponent *)param_1,local_res10,(TVector4<double> *)&pTVar2->_s_0);
  return;
}

// operator() @ 15053cc10

bool __thiscall `UNiagaraComponent::SetAutoDestroy'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6771089081142087935>);
  if (bVar4) {
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0x550) != (UObjectBaseUtility *)0x0) {
      pFVar6 = UObjectBaseUtility::GetPathName
                         (*(UObjectBaseUtility **)(*(longlong *)this + 0x550),&local_18,
                          (UObject *)0x0);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    bVar2 = true;
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_28,(UObject *)0x0,None);
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6771089081142087935>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15053ccd3;
    }
  }
  bVar4 = false;
LAB_15053ccd3:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15053cd70

bool __thiscall `UNiagaraComponent::CalcBounds'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6771089081142086019>);
  if (bVar2) {
    if (*(longlong *)(*(longlong *)this + 0x550) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x550) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6771089081142086019>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053ce04;
    }
  }
  bVar2 = false;
LAB_15053ce04:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053ce40

bool __thiscall
`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l18::<lambda_1>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6771089081142085963>);
  if (bVar4) {
    this_00 = *(UObjectBaseUtility **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    if (*(longlong *)(*(longlong *)this + 0x550) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0x550) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6771089081142085963>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15053cf34;
    }
  }
  bVar4 = false;
LAB_15053cf34:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15053cfc0

bool __thiscall `UNiagaraComponent::CalcBounds'::__l23::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6771089081142086029>);
  if (bVar2) {
    if (*(longlong *)(*(longlong *)this + 0x550) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x550) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6771089081142086029>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053d054;
    }
  }
  bVar2 = false;
LAB_15053d054:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053d1d0

bool __thiscall `UNiagaraComponent::CalcBounds'::__l27::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6771089081142086035>);
  if (bVar2) {
    if (*(longlong *)(*(longlong *)this + 0x550) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x550) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6771089081142086035>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053d264;
    }
  }
  bVar2 = false;
LAB_15053d264:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

