// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 169

// CreateSceneProxy @ 148105980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UParticleSystemComponent::CreateSceneProxy(UParticleSystemComponent *this)

{
  int *piVar1;
  undefined1 uVar2;
  UParticleSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  EPSOPrecacheProxyCreationStrategy EVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FParticleSystemSceneProxy_Create> FVar14;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT> FVar15;
  UWorld *pUVar16;
  FSceneInterface *pFVar17;
  FParticleSystemSceneProxyDesc *pFVar18;
  FParticleSystemSceneProxy *pFVar19;
  FPrimitiveSceneProxy *pFVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  FName FVar23;
  FName FVar24;
  FParticleSystemSceneProxy *pFVar25;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  LARGE_INTEGER local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a0;
  FName local_290;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  int local_278;
  FStatMessage local_270;
  FStatMessage local_260;
  FName local_250;
  FName local_248;
  FString local_240;
  FInGameScopedCycleCounter local_230;
  FParticleSystemSceneProxyDesc local_220;
  FParticleSystemSceneProxyDesc local_138;
  
  pFVar19 = (FParticleSystemSceneProxy *)0x0;
  FVar14 = StatPtr_STAT_FParticleSystemSceneProxy_Create;
  if (StatPtr_STAT_FParticleSystemSceneProxy_Create ==
      (FThreadSafeStaticStat<FStat_STAT_FParticleSystemSceneProxy_Create>)0x0) {
    pFVar13 = ::FName::FName(&local_250,"STAT_FParticleSystemSceneProxy_Create");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FParticleSystemSceneProxy_Create>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FParticleSystemSceneProxy_Create,
                        *pFVar13,L"ParticleSystemSceneProxy Create GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar14;
  bVar5 = false;
  bVar8 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  bVar9 = false;
  bVar6 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_148105aea:
    bVar8 = bVar6;
    bVar5 = bVar9;
    bVar9 = false;
    FVar24 = local_2b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar8 = true;
      bVar9 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_2c0.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0x20f);
        bVar5 = true;
        bVar8 = true;
        bVar9 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148105aea;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar9 = true;
  }
  FVar15 = StatPtr_STAT_ParticlesOverview_GT;
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar13 = ::FName::FName(&local_248,"STAT_ParticlesOverview_GT");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar13,
                        L"GT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar15;
  bVar7 = false;
  bVar6 = false;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_148105c27:
    bVar7 = bVar11;
    bVar6 = bVar10;
    bVar10 = false;
    FVar23 = local_2a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_2b8.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0x210);
        bVar7 = true;
        bVar6 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148105c27;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  if (((this->field_0x9a & 0x10) == 0) ||
     (pUVar3 = (this->Template).field0_0x0.DebugPtr, pUVar3 == (UParticleSystem *)0x0))
  goto LAB_148105ef5;
  if ((this->field_0x2a8 & 1) == 0) {
    if (GCascadePSOPrecachingTime == 3) {
      UParticleSystem::PrecachePSOs(pUVar3);
    }
    UFXSystemComponent::PrecacheAssetPSOs
              ((UFXSystemComponent *)this,(UFXSystemAsset *)(this->Template).field0_0x0.DebugPtr);
  }
  bVar11 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority((UPrimitiveComponent *)this,High)
  ;
  if ((bVar11) && (EVar12 = GetPSOPrecacheProxyCreationStrategy(), EVar12 != AlwaysCreate)) {
    if (5 < (byte)LogParticles._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_240,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      pFVar19 = (FParticleSystemSceneProxy *)0x0;
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148105ef5;
  }
  pUVar16 = *(UWorld **)&this->field_0xb0;
  if (pUVar16 == (UWorld *)0x0) {
    pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (&local_230,pUVar16,VFXSignificance,GameThread,this->bIsManagingSignificance);
  if (5 < (byte)LogParticles._0_1_) {
    pUVar3 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar3 == (UParticleSystem *)0x0) {
      local_2c8.QuadPart = (LONGLONG)&u_NULL;
      pFVar25 = pFVar19;
    }
    else {
      local_290 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_290,(FString *)&local_280.s);
      local_2c8.QuadPart = 0x15060d16c;
      pFVar25 = (FParticleSystemSceneProxy *)&DAT_00000001;
      if (local_278 != 0) {
        local_2c8 = local_280;
      }
    }
    if (*(longlong *)&this->field_0xb0 == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pFVar25 != (FParticleSystemSceneProxy *)0x0) &&
       ((FParticleDynamicData *)local_280.QuadPart != (FParticleDynamicData *)0x0)) {
      FMemory::Free((void *)local_280);
    }
  }
  if (0 < (this->EmitterInstances).ArrayNum) {
    CacheViewRelevanceFlags(this,(this->Template).field0_0x0.DebugPtr);
  }
  this->bParallelRenderThreadUpdate = '\x01';
  pFVar17 = UActorComponent::GetScene((UActorComponent *)this);
  local_2c8 = (LARGE_INTEGER)CreateDynamicData(this,pFVar17->FeatureLevel);
  this->bParallelRenderThreadUpdate = '\0';
  bVar11 = CanBeOccluded(this);
  if (bVar11) {
    (((this->Template).field0_0x0.DebugPtr)->CustomOcclusionBounds).IsValid = '\x01';
    pFVar25 = ::operator_new(0x3b0);
    if (pFVar25 != (FParticleSystemSceneProxy *)0x0) {
      pFVar18 = FParticleSystemSceneProxyDesc::FParticleSystemSceneProxyDesc
                          (&local_220,this,(FParticleDynamicData *)local_2c8,true);
      pFVar19 = FParticleSystemSceneProxy::FParticleSystemSceneProxy(pFVar25,pFVar18);
      pFVar18 = &local_220;
LAB_148105ec0:
      FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)pFVar18);
    }
  }
  else {
    pFVar25 = ::operator_new(0x3b0);
    if (pFVar25 != (FParticleSystemSceneProxy *)0x0) {
      pFVar18 = FParticleSystemSceneProxyDesc::FParticleSystemSceneProxyDesc
                          (&local_138,this,(FParticleDynamicData *)local_2c8,false);
      pFVar19 = FParticleSystemSceneProxy::FParticleSystemSceneProxy(pFVar25,pFVar18);
      pFVar18 = &local_138;
      goto LAB_148105ec0;
    }
  }
  if ((pFVar19 == (FParticleSystemSceneProxy *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                          ,0x242,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar20 = (FPrimitiveSceneProxy *)(*pcVar4)();
    return pFVar20;
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(&local_230);
LAB_148105ef5:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
      local_270.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_270.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2c8);
      local_270.StatData.Pad = (uchar  [8])(local_2c8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar21,&local_270);
      piVar1 = &pFVar21->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar21,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar21,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar24 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
      local_260.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_260.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_288);
      local_260.StatData.Pad[4] = '\0';
      local_260.StatData.Pad[5] = '\0';
      local_260.StatData.Pad[6] = '\0';
      local_260.StatData.Pad[7] = '\0';
      local_260.StatData.Pad[0] = local_288.s.LowPart._0_1_;
      local_260.StatData.Pad[1] = local_288.s.LowPart._1_1_;
      local_260.StatData.Pad[2] = local_288.s.LowPart._2_1_;
      local_260.StatData.Pad[3] = local_288.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar21,&local_260);
      piVar1 = &pFVar21->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar21,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar21,false,false);
      }
    }
  }
  return (FPrimitiveSceneProxy *)pFVar19;
}

// StaticClass @ 14814c640

UClass * __cdecl UParticleSystemComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystemComponent",
               &Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton,
               StaticRegisterNativesUParticleSystemComponent,0x890,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UParticleSystemComponent>,
               InternalVTableHelperCtorCaller<UParticleSystemComponent>,local_res8,
               UFXSystemComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton;
}

// UParticleSystemComponent @ 14815f170

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystemComponent * __thiscall
UParticleSystemComponent::UParticleSystemComponent
          (UParticleSystemComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UFXSystemComponent::UFXSystemComponent((UFXSystemComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  (this->Template).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->EmitterMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterMaterials).ArrayNum = 0;
  (this->EmitterMaterials).ArrayMax = 0;
  (this->SkelMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkelMeshComponents).ArrayNum = 0;
  (this->SkelMeshComponents).ArrayMax = 0;
  (this->InstanceParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceParameters).ArrayNum = 0;
  (this->InstanceParameters).ArrayMax = 0;
  *(undefined8 *)&this->OnParticleSpawn = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleBurst = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleDeath = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleCollide = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x10 = 0;
  (this->CachedViewRelevanceFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedViewRelevanceFlags).ArrayNum = 0;
  (this->CachedViewRelevanceFlags).ArrayMax = 0;
  (this->ReplayClips).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplayClips).ArrayNum = 0;
  (this->ReplayClips).ArrayMax = 0;
  (this->SpawnEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnEvents).ArrayNum = 0;
  (this->SpawnEvents).ArrayMax = 0;
  (this->DeathEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathEvents).ArrayNum = 0;
  (this->DeathEvents).ArrayMax = 0;
  (this->CollisionEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionEvents).ArrayNum = 0;
  (this->CollisionEvents).ArrayMax = 0;
  (this->BurstEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurstEvents).ArrayNum = 0;
  (this->BurstEvents).ArrayMax = 0;
  (this->KismetEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KismetEvents).ArrayNum = 0;
  (this->KismetEvents).ArrayMax = 0;
  (this->AutoAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AutoAttachSocketName).ComparisonIndex = 0;
  (this->AutoAttachSocketName).Number = 0;
  *(undefined8 *)&this->OnSystemFinished = 0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x10 = 0;
  (this->AsyncInstanceParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncInstanceParameters).ArrayNum = 0;
  (this->AsyncInstanceParameters).ArrayMax = 0;
  (this->PlayerLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerLocations).ArrayNum = 0;
  (this->PlayerLocations).ArrayMax = 0;
  (this->PlayerLODDistanceFactor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerLODDistanceFactor).ArrayNum = 0;
  (this->PlayerLODDistanceFactor).ArrayMax = 0;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&(this->LWCTile).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  (this->LWCTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->EmitterInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterInstances).ArrayNum = 0;
  (this->EmitterInstances).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  (this->InstanceOwner).Ptr = (FInstanceOwner *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->AsyncComponentToWorld).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->AsyncComponentToWorld).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->AsyncComponentToWorld).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->AsyncComponentToWorld).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->AsyncComponentToWorld).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->AsyncComponentToWorld).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->AsyncComponentToWorld).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->AsyncComponentToWorld).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->AsyncComponentToWorld).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->AsyncComponentToWorld).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->AsyncComponentToWorld).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->AsyncComponentToWorld).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->AsyncWork).Reference = (FBaseGraphTask *)0x0;
  return this;
}

// UParticleSystemComponent @ 14815f3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UParticleSystemComponent * __thiscall
UParticleSystemComponent::UParticleSystemComponent
          (UParticleSystemComponent *this,FObjectInitializer *param_1)

{
  FRandomStream *this_00;
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  FName FVar11;
  
  UFXSystemComponent::UFXSystemComponent((UFXSystemComponent *)this,param_1);
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  this_00 = &this->RandomStream;
  (this->Template).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->EmitterMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterMaterials).ArrayNum = 0;
  (this->EmitterMaterials).ArrayMax = 0;
  (this->SkelMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkelMeshComponents).ArrayNum = 0;
  (this->SkelMeshComponents).ArrayMax = 0;
  (this->InstanceParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceParameters).ArrayNum = 0;
  (this->InstanceParameters).ArrayMax = 0;
  *(undefined8 *)&this->OnParticleSpawn = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleSpawn).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleBurst = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleBurst).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleDeath = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleDeath).field_0x10 = 0;
  *(undefined8 *)&this->OnParticleCollide = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x8 = 0;
  *(undefined8 *)&(this->OnParticleCollide).field_0x10 = 0;
  (this->CachedViewRelevanceFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedViewRelevanceFlags).ArrayNum = 0;
  (this->CachedViewRelevanceFlags).ArrayMax = 0;
  (this->ReplayClips).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplayClips).ArrayNum = 0;
  (this->ReplayClips).ArrayMax = 0;
  (this->SpawnEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnEvents).ArrayNum = 0;
  (this->SpawnEvents).ArrayMax = 0;
  (this->DeathEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathEvents).ArrayNum = 0;
  (this->DeathEvents).ArrayMax = 0;
  (this->CollisionEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionEvents).ArrayNum = 0;
  (this->CollisionEvents).ArrayMax = 0;
  (this->BurstEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurstEvents).ArrayNum = 0;
  (this->BurstEvents).ArrayMax = 0;
  (this->KismetEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KismetEvents).ArrayNum = 0;
  (this->KismetEvents).ArrayMax = 0;
  (this->AutoAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AutoAttachSocketName).ComparisonIndex = 0;
  (this->AutoAttachSocketName).Number = 0;
  *(undefined8 *)&this->OnSystemFinished = 0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnSystemFinished).field_0x10 = 0;
  (this->AsyncInstanceParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncInstanceParameters).ArrayNum = 0;
  (this->AsyncInstanceParameters).ArrayMax = 0;
  (this->PlayerLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerLocations).ArrayNum = 0;
  (this->PlayerLocations).ArrayMax = 0;
  (this->PlayerLODDistanceFactor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerLODDistanceFactor).ArrayNum = 0;
  (this->PlayerLODDistanceFactor).ArrayMax = 0;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  this->FXSystem = (FFXSystem *)0x0;
  *(undefined8 *)&(this->LWCTile).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  (this->LWCTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->EmitterInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterInstances).ArrayNum = 0;
  (this->EmitterInstances).ArrayMax = 0;
  this_00->InitialSeed = 0;
  this_00->Seed = 0;
  (this->InstanceOwner).Ptr = (FInstanceOwner *)0x0;
  this->ReleaseResourcesFence = (FRenderCommandFence *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AsyncComponentToWorld).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->AsyncComponentToWorld).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AsyncComponentToWorld).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->AsyncComponentToWorld).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AsyncComponentToWorld).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->AsyncComponentToWorld).Scale3D.ZW.m128d_f64 = auVar9;
  (this->AsyncWork).Reference = (FBaseGraphTask *)0x0;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->field_0x9a = this->field_0x9a | 8;
  this->bResetOnDetach = '\0';
  this->field_0x40 = 2;
  this->MaxTimeBeforeForceUpdateTransform = 5.0;
  this->field_0x42 = this->field_0x42 & 0xf7 | 2;
  this->bOldPositionValid = false;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OldPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OldPosition).field0_0x0._s_0.Y = (double)uVar10;
  (this->OldPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (FApp::bUseFixedSeed != false) {
    FVar11.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    FVar11.Number = *(uint *)&this->field_0x1c;
  }
  FRandomStream::Initialize(this_00,FVar11);
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PartSysVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PartSysVelocity).field0_0x0._s_0.Y = (double)uVar10;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bSkipUpdateDynamicDataDuringTick = '\0';
  this->bIsViewRelevanceDirty = '\x01';
  this->bIsTransformDirty = '\0';
  this->field_0x9a = this->field_0x9a | 2;
  this->bWasActive = '\0';
  (this->PartSysVelocity).field0_0x0._s_0.Z = (double)uVar10;
  this->WarmupTime = 0.0;
  this->SecondsBeforeInactive = 1.0;
  this->CustomTimeDilation = 1.0;
  this->bAsyncWorkOutstanding = false;
  this->PoolingMethod = None;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  this->field_0x27e = this->field_0x27e | 0x80;
  this->field_0x27c = this->field_0x27c & 0xbf;
  this->field_0x1aa = this->field_0x1aa & 0xf7;
  (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X = 1.0;
  (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y = 1.0;
  (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = 1.0;
  this->bIsManagingSignificance = '\0';
  this->bWasManagingSignificance = '\0';
  this->bIsDuringRegister = '\0';
  this->field_0x280 = this->field_0x280 | 2;
  this->TimeSinceLastTick = 0;
  this->RequiredSignificance = Low;
  this->LastSignificantTime = 0.0;
  puVar1 = &this->field_0x580;
  this->ManagerHandle = -1;
  this->bPendingManagerRemove = 0;
  this->bPendingManagerAdd = 0;
  return this;
}

// ~UParticleSystemComponent @ 148160560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UParticleSystemComponent::~UParticleSystemComponent(UParticleSystemComponent *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FInstanceOwner *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar3 = (this->AsyncWork).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  pFVar4 = (this->InstanceOwner).Ptr;
  if (pFVar4 != (FInstanceOwner *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x188))(pFVar4,1);
  }
  pFVar5 = (this->EmitterInstances).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->PlayerLODDistanceFactor).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->PlayerLocations).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->AsyncInstanceParameters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pvVar6 = *(void **)&(this->OnSystemFinished).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSystemFinished);
  DestructItems<FParticleEventKismetData,int>
            ((FParticleEventKismetData *)(this->KismetEvents).AllocatorInstance.Data,
             (this->KismetEvents).ArrayNum);
  pFVar5 = (this->KismetEvents).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FParticleEventBurstData,int>
            ((FParticleEventBurstData *)(this->BurstEvents).AllocatorInstance.Data,
             (this->BurstEvents).ArrayNum);
  pFVar5 = (this->BurstEvents).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FParticleEventCollideData,int>
            ((FParticleEventCollideData *)(this->CollisionEvents).AllocatorInstance.Data,
             (this->CollisionEvents).ArrayNum);
  pFVar5 = (this->CollisionEvents).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FParticleEventDeathData,int>
            ((FParticleEventDeathData *)(this->DeathEvents).AllocatorInstance.Data,
             (this->DeathEvents).ArrayNum);
  pFVar5 = (this->DeathEvents).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FParticleEventSpawnData,int>
            ((FParticleEventSpawnData *)(this->SpawnEvents).AllocatorInstance.Data,
             (this->SpawnEvents).ArrayNum);
  pFVar5 = (this->SpawnEvents).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ReplayClips).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CachedViewRelevanceFlags).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pvVar6 = *(void **)&(this->OnParticleCollide).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleCollide);
  pvVar6 = *(void **)&(this->OnParticleDeath).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleDeath);
  pvVar6 = *(void **)&(this->OnParticleBurst).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleBurst);
  pvVar6 = *(void **)&(this->OnParticleSpawn).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnParticleSpawn);
  pFVar5 = (this->InstanceParameters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SkelMeshComponents).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->EmitterMaterials).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined ***)this = &UFXSystemComponent::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UFXSystemComponent::_vftable__for__IInterface_AssetUserData__
  ;
  *(undefined ***)&this->field_0x30 =
       &UFXSystemComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &UFXSystemComponent::_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 =
       &UFXSystemComponent::_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &UFXSystemComponent::_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// Activate @ 148164490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::Activate(UParticleSystemComponent *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  char cVar3;
  bool bVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  wchar_t *pwVar6;
  int *piVar7;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                 _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__ ==
     -1)) {
    pwVar6 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar6,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((this->Template).field0_0x0.DebugPtr != (UParticleSystem *)0x0)) {
    this->bDeactivateTriggered = '\0';
    if ((!param_1) && (cVar3 = (**(code **)(*(longlong *)this + 0x330))(this), cVar3 != '\x01')) {
      return;
    }
    (**(code **)(*(longlong *)this + 0xaf0))(this);
    if ((this->field_0x9a & 0x10) != 0) {
      local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this->field_0xba != '\0') {
        if ((*piVar7 < `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
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
        FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                ::__l2::DelegateFName;
        bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DelegateOwner->IsValidLowLevelFast(false)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                               ,0xd7,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_18,(UObject *)this,FVar2)
        ;
        local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
        local_38 = pTVar5->Object;
        if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
        if ((local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FActorComponentActivatedSignature_DelegateWrapper(local_38,(UActorComponent *)this,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
    }
  }
  return;
}

// ActivateSystem @ 148164770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ActivateSystem(UParticleSystemComponent *this,bool param_1)

{
  TAtomic<unsigned___int64> *pTVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  uchar uVar5;
  UParticleSystem *pUVar6;
  longlong lVar7;
  UObject *pUVar8;
  FName FVar9;
  longlong *plVar10;
  FBaseGraphTask *pFVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  LARGE_INTEGER LVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_ParticleActivateTime> FVar32;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT> FVar33;
  UWorld *pUVar34;
  FParticlePerfStats *pFVar35;
  FParticlePerfStats *pFVar36;
  TVector<float> *pTVar37;
  FCachedSystemScalabilityCVars *pFVar38;
  UObject *pUVar39;
  wchar_t *pwVar40;
  longlong *plVar41;
  ForElementType<FSetElementId> FVar42;
  undefined4 *puVar43;
  undefined7 uVar44;
  FName FVar45;
  FName FVar46;
  int iVar47;
  uint uVar48;
  FParticlePerfStats *pFVar49;
  longlong lVar50;
  undefined1 *puVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  FColor_u_0 local_1a8;
  FColor_u_0 local_1a4;
  FName local_1a0;
  FName local_198;
  LARGE_INTEGER local_190;
  FParticlePerfStats *local_188;
  FParticlePerfStats *local_180;
  FName local_178;
  FName local_168;
  LARGE_INTEGER local_158;
  FName local_150;
  LARGE_INTEGER local_148;
  FString local_140;
  FName local_130;
  FName local_128;
  FString local_120;
  FInGameScopedCycleCounter local_110;
  TVector<double>_u_0 local_f8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  TVector<float> local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  
  pFVar49 = (FParticlePerfStats *)0x0;
  if (!__CsvProfilerStat3081) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat3081 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FVar32 = StatPtr_STAT_ParticleActivateTime;
  if (StatPtr_STAT_ParticleActivateTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleActivateTime>)0x0) {
    pFVar31 = ::FName::FName(&local_130,"STAT_ParticleActivateTime");
    FVar32 = (FThreadSafeStaticStat<FStat_STAT_ParticleActivateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleActivateTime,*pFVar31,
                        L"Activate Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar32;
  bVar20 = false;
  bVar22 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar26 = false;
  bVar19 = false;
  if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_148164922:
    bVar22 = bVar19;
    bVar20 = bVar26;
    bVar26 = false;
    FVar45 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
      bVar20 = false;
      bVar22 = true;
      bVar26 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xc0a);
        bVar20 = true;
        bVar22 = true;
        bVar26 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148164922;
    FThreadStats::AddMessage(FVar45,CycleScopeStart);
    bVar26 = true;
  }
  FVar33 = StatPtr_STAT_ParticlesOverview_GT;
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar31 = ::FName::FName(&local_128,"STAT_ParticlesOverview_GT");
    FVar33 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar31,
                        L"GT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar46 = *(FName *)FVar33;
  bVar19 = false;
  bVar21 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar25 = false;
  bVar27 = false;
  if ((FVar46.ComparisonIndex.Value.Value == 0) && (FVar46.Number == 0)) {
LAB_148164a61:
    bVar21 = bVar27;
    bVar19 = bVar25;
    bVar25 = false;
    FVar46 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar19 = false;
      bVar21 = true;
      bVar25 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
        local_198.Number = FVar46.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xc0b);
        bVar19 = true;
        bVar21 = true;
        bVar25 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148164a61;
    FThreadStats::AddMessage(FVar46,CycleScopeStart);
    bVar25 = true;
  }
  pUVar34 = *(UWorld **)&this->field_0xb0;
  pUVar6 = (this->Template).field0_0x0.DebugPtr;
  pFVar35 = pFVar49;
  if ((((pUVar34 != (UWorld *)0x0) ||
       (pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar34 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar35 = FParticlePerfStatsManager::GetWorldPerfStats(pUVar34);
  }
  pFVar36 = pFVar49;
  if (((pUVar6 != (UParticleSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar36 = FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar6);
  }
  local_180 = pFVar49;
  local_188 = pFVar36;
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    local_180 = FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  local_190.QuadPart = -1;
  if (((pFVar35 != (FParticlePerfStats *)0x0) || (pFVar36 != (FParticlePerfStats *)0x0)) ||
     (local_180 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_158);
    local_190 = local_158;
  }
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  bVar27 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((bVar27) || ((this->field_0x98 & 1) == 0)) goto LAB_1481656c0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar40 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar40,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) goto LAB_1481656c0;
  if (CascadeLocal::bUseTemplateDenyList != false) {
    pUVar6 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar6 == (UParticleSystem *)0x0) {
LAB_148164c36:
      (this->Template).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
    }
    else {
      lVar50 = pUVar6->_padding_;
      uVar29 = ::GetTypeHash((FNameEntryId)(uint)lVar50);
      if (CascadeLocal::TemplateDenyList.Elements._8_4_ !=
          CascadeLocal::TemplateDenyList.Elements._52_4_) {
        FVar42 = (ForElementType<FSetElementId>)0x154c5f9a8;
        if (CascadeLocal::TemplateDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
        {
          FVar42 = CascadeLocal::TemplateDenyList.Hash.SecondaryData;
        }
        for (iVar47 = *(int *)((longlong)FVar42 +
                              (ulonglong)
                              (CascadeLocal::TemplateDenyList.HashSize - 1U &
                              (int)((ulonglong)lVar50 >> 0x20) + uVar29) * 4); iVar47 != -1;
            iVar47 = *(int *)(CascadeLocal::TemplateDenyList.Elements._0_8_ + 8 +
                             (longlong)iVar47 * 0x10)) {
          if (*(longlong *)(CascadeLocal::TemplateDenyList.Elements._0_8_ + (longlong)iVar47 * 0x10)
              == lVar50) goto LAB_148164c36;
        }
      }
    }
  }
  this->bOldPositionValid = false;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OldPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OldPosition).field0_0x0._s_0.Y = (double)uVar23;
  (this->OldPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PartSysVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PartSysVelocity).field0_0x0._s_0.Y = (double)uVar23;
  (this->PartSysVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_f8._s_0.X = (double)*(undefined8 *)&this->field_0x210;
  local_f8._s_0.Y = (double)*(undefined8 *)&this->field_0x218;
  local_f8._s_0.Z = (double)*(undefined8 *)&this->field_0x220;
  local_98 = local_f8._s_0.X;
  dStack_90 = local_f8._s_0.Y;
  local_88 = local_f8._s_0.Z;
  pTVar37 = TLargeWorldRenderScalar<double>::GetTileFor(&local_a8,(TVector<double> *)&local_f8._s_0)
  ;
  pUVar34 = *(UWorld **)&this->field_0xb0;
  *(undefined8 *)&(this->LWCTile).field0_0x0 = *(undefined8 *)&pTVar37->field0_0x0;
  (this->LWCTile).field0_0x0._s_0.Z = (pTVar37->field0_0x0)._s_0.Z;
  if (((pUVar34 == (UWorld *)0x0) &&
      (pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar34 == (UWorld *)0x0)) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0xc2d,L""), bVar27)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (5 < (byte)LogParticles._0_1_) {
    pUVar6 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar6 != (UParticleSystem *)0x0) {
      local_150 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_150,&local_140);
      pFVar49 = (FParticlePerfStats *)&DAT_00000001;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pFVar49 != (FParticlePerfStats *)0x0) &&
       (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  bVar27 = UWorld::IsGameWorld(pUVar34);
  if (((6 < (byte)LogParticles._0_1_) &&
      ((this->Template).field0_0x0.DebugPtr != (UParticleSystem *)0x0)) &&
     (0 < (this->EmitterInstances).ArrayNum)) {
    iVar47 = 0;
    uVar29 = 0;
    lVar50 = 0;
    do {
      uVar30 = 0;
      if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
        uVar30 = ~uVar29 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar7 = *(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar50);
      if (lVar7 != 0) {
        iVar47 = iVar47 + *(int *)(lVar7 + 0x18c);
      }
      uVar29 = uVar29 + 1;
      lVar50 = lVar50 + 8;
    } while ((int)uVar29 < (this->EmitterInstances).ArrayNum);
    if ((0 < iVar47) && (4 < (byte)LogParticles._0_1_)) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(this->Template).field0_0x0.DebugPtr,&local_120,
                 (UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar4 = this->field_0x1ac;
  pFVar38 = GetCachedScalabilityCVars();
  if (((GIsAllowingParticles != false) && ((int)(uint)bVar4 <= pFVar38->DetailMode)) &&
     ((this->Template).field0_0x0.DebugPtr != (UParticleSystem *)0x0)) {
    bVar4 = this->field_0x57b;
    this->bDidAutoAttach = '\0';
    if ((this->bAutoManageAttachment != '\0') && (bVar27)) {
      pUVar39 = FWeakObjectPtr::Get(&(this->AutoAttachParent).WeakPtr);
      if (pUVar39 == (UObject *)0x0) {
        CancelAutoAttachment(this,true,pUVar34);
      }
      else {
        pUVar8 = *(UObject **)&this->field_0xd0;
        if (((pUVar8 != (UObject *)0x0) && (pUVar8 == pUVar39)) &&
           (FVar9.ComparisonIndex.Value = *(uint *)&this->field_0xd8,
           FVar9.Number = *(uint *)&this->field_0xdc, FVar9 == this->AutoAttachSocketName)) {
          plVar41 = *(longlong **)&pUVar8[5].field_0x20;
          plVar10 = plVar41 + *(int *)(pUVar8 + 6);
          for (; plVar41 != plVar10; plVar41 = plVar41 + 1) {
            if ((UParticleSystemComponent *)*plVar41 == (UParticleSystemComponent *)0x0) {
              bVar28 = this == (UParticleSystemComponent *)0x0;
            }
            else {
              bVar28 = (UParticleSystemComponent *)*plVar41 == this;
            }
            if (bVar28) goto LAB_148165070;
          }
        }
        this->field_0x57b = (bVar4 & 0xfc ^ this->field_0x57b) & 4 ^ this->field_0x57b;
        CancelAutoAttachment(this,true,pUVar34);
        dVar17 = *(double *)&this->field_0x150;
        dVar3 = *(double *)&this->field_0x158;
        (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X = *(double *)&this->field_0x148;
        (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y = dVar17;
        dVar17 = *(double *)&this->field_0x160;
        dVar18 = *(double *)&this->field_0x168;
        (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z = dVar3;
        dVar3 = *(double *)&this->field_0x170;
        (this->SavedAutoAttachRelativeRotation).Pitch = dVar17;
        (this->SavedAutoAttachRelativeRotation).Yaw = dVar18;
        uVar13 = *(undefined4 *)&this->field_0x178;
        uVar14 = *(undefined4 *)&this->field_0x17c;
        uVar15 = *(undefined4 *)&this->field_0x180;
        uVar16 = *(undefined4 *)&this->field_0x184;
        lVar50 = *(longlong *)this;
        (this->SavedAutoAttachRelativeRotation).Roll = dVar3;
        dVar3 = *(double *)&this->field_0x188;
        *(undefined4 *)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 = uVar13;
        *(undefined4 *)((longlong)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 + 4) = uVar14;
        *(undefined4 *)((longlong)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 + 8) = uVar15;
        *(undefined4 *)((longlong)&(this->SavedAutoAttachRelativeScale3D).field0_0x0 + 0xc) = uVar16
        ;
        (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = dVar3;
        (**(code **)(lVar50 + 0x508))(this,pUVar39);
LAB_148165070:
        this->bDidAutoAttach = '\x01';
        param_1 = true;
      }
    }
    this->AccumTickTime = 0.0;
    if ((this->field_0x9a & 0x10) == 0) {
      dVar3 = pUVar34->TimeSeconds;
      this->RequiredSignificance = Low;
      this->LastSignificantTime = (float)dVar3;
      TMulticastDelegate<void___cdecl(UParticleSystemComponent_*,bool),FDefaultDelegateUserPolicy>::
      Broadcast(&OnSystemPreActivationChange,this,true);
    }
    FInGameScopedCycleCounter::FInGameScopedCycleCounter
              (&local_110,pUVar34,VFXSignificance,GameThread,this->bIsManagingSignificance);
    if (param_1 != false) {
      this->bJustRegistered = '\x01';
    }
    this->bWasCompleted = '\0';
    this->bWasDeactivated = '\0';
    this->bSuppressSpawning = '\0';
    UActorComponent::SetActiveFlag((UActorComponent *)this,true);
    this->bWasActive = '\0';
    (**(code **)(*(longlong *)this + 0x420))(this);
    if ((bVar27) && (GbEnableGameThreadLODCalculation == true)) {
      local_d8 = *(undefined4 *)&this->field_0x210;
      uStack_d4 = *(undefined4 *)&this->field_0x214;
      uStack_d0 = *(undefined4 *)&this->field_0x218;
      uStack_cc = *(undefined4 *)&this->field_0x21c;
      local_c8 = *(undefined4 *)&this->field_0x220;
      uStack_c4 = *(undefined4 *)&this->field_0x224;
      (**(code **)(*(longlong *)this + 0xbf0))(this,&local_d8);
      (**(code **)(*(longlong *)this + 0xbf8))(this);
    }
    else {
      this->bForceLODUpdateFromRenderer = '\x01';
    }
    iVar47 = (this->EmitterInstances).ArrayNum;
    if ((iVar47 == 0) ||
       ((bVar27 && (((this->field_0x9a & 8) == 0 || (this->bHasBeenActivated != '\0')))))) {
      InitializeSystem(this);
    }
    else if ((0 < iVar47) && (!bVar27)) {
      uVar29 = 0;
      lVar50 = 0;
      do {
        uVar48 = ~uVar29 >> 0x1f;
        uVar30 = 0;
        if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
          uVar30 = uVar48;
        }
        if ((uVar30 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (*(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar50) != 0) {
          uVar30 = 0;
          if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
            uVar30 = uVar48;
          }
          if ((uVar30 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(**(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar50) +
                      0x58))();
          uVar30 = 0;
          if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
            uVar30 = uVar48;
          }
          if ((uVar30 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          plVar10 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar50);
          (**(code **)(*plVar10 + 0xf8))(plVar10,0);
          uVar30 = 0;
          if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
            uVar30 = ~uVar29 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(**(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar50) +
                      0x100))();
        }
        uVar29 = uVar29 + 1;
        lVar50 = lVar50 + 8;
      } while ((int)uVar29 < (this->EmitterInstances).ArrayNum);
    }
    this->bHasBeenActivated = '\x01';
    this->TimeSinceLastTick = 0;
    if (this->bOverrideLODMethod == '\0') {
      pUVar6 = (this->Template).field0_0x0.DebugPtr;
      if (pUVar6 != (UParticleSystem *)0x0) {
        uVar5 = (pUVar6->LODMethod).Value;
        goto LAB_1481653a7;
      }
    }
    else {
      uVar5 = (this->LODMethod).Value;
LAB_1481653a7:
      if (uVar5 != '\x01') {
        local_c0 = *(undefined4 *)&this->field_0x210;
        uStack_bc = *(undefined4 *)&this->field_0x214;
        uStack_b8 = *(undefined4 *)&this->field_0x218;
        uStack_b4 = *(undefined4 *)&this->field_0x21c;
        puVar43 = &local_c0;
        local_b0 = *(undefined4 *)&this->field_0x220;
        uStack_ac = *(undefined4 *)&this->field_0x224;
        iVar47 = (**(code **)(*(longlong *)this + 0xbf0))(this);
        if (GbEnableGameThreadLODCalculation == true) {
          if (iVar47 != this->LODLevel) {
            uVar44 = (undefined7)((ulonglong)puVar43 >> 8);
            UActorComponent::SetActiveFlag((UActorComponent *)this,true);
            (**(code **)(*(longlong *)this + 0x420))(this,CONCAT71(uVar44,1));
          }
          (**(code **)(*(longlong *)this + 0xbf8))(this);
        }
      }
    }
    puVar51 = &this->field_0x57a;
    fVar52 = this->WarmupTime;
    if (fVar52 != 0.0) {
      bVar4 = *puVar51;
      pFVar11 = (this->AsyncWork).Reference;
      this->bWarmingUp = '\x01';
      this->bSkipUpdateDynamicDataDuringTick = '\x01';
      if (pFVar11 != (FBaseGraphTask *)0x0) {
        WaitForAsyncAndFinalize(this,STALL,true);
        fVar52 = this->WarmupTime;
      }
      uVar29 = 0;
      if (0 < (this->EmitterInstances).ArrayNum) {
        lVar50 = 0;
        do {
          uVar30 = 0;
          if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
            uVar30 = ~uVar29 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar50) != 0) {
            uVar30 = 0;
            if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            (**(code **)(**(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar50) +
                        0x90))();
          }
          uVar29 = uVar29 + 1;
          lVar50 = lVar50 + 8;
        } while ((int)uVar29 < (this->EmitterInstances).ArrayNum);
        fVar52 = this->WarmupTime;
      }
      fVar2 = this->WarmupTickRate;
      fVar53 = 0.0;
      fVar54 = __real_3d03126f;
      if ((0.0 < fVar2) && (fVar54 = fVar2, fVar52 <= fVar2)) {
        fVar54 = fVar52;
      }
      if (0.0 < fVar52) {
        do {
          (**(code **)(*(longlong *)this + 0x410))(this,fVar54,2);
          fVar53 = fVar53 + fVar54;
        } while (fVar53 < this->WarmupTime);
      }
      puVar51 = &this->field_0x57a;
      this->bWarmingUp = '\0';
      *puVar51 = *puVar51 ^ (bVar4 & 0xf0 ^ *puVar51) & 0x10;
      this->WarmupTime = 0.0;
    }
    if ((((this->bIsDuringRegister == '\0') && ((bool)this->bIsManagingSignificance)) &&
        (pUVar6 = (this->Template).field0_0x0.DebugPtr,
        pUVar6->HighestSignificance < this->RequiredSignificance)) &&
       (pUVar6->InsignificanceDelay == 0.0)) {
      OnSignificanceChanged(this,false,true,false);
    }
    FInGameScopedCycleCounter::~FInGameScopedCycleCounter(&local_110);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  pUVar34 = *(UWorld **)&this->field_0xb0;
  if (pUVar34 == (UWorld *)0x0) {
    pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (this->bWasCompleted == '\0' && this->bWasDeactivated == '\0') {
    if (pUVar34 == (UWorld *)0x0) {
      bVar27 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2966147252621406993>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0xcef,"World");
      if (bVar27) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else {
      UPrimitiveComponent::SetLastRenderTime
                ((UPrimitiveComponent *)this,(float)pUVar34->TimeSeconds);
    }
  }
LAB_1481656c0:
  LVar24 = local_190;
  if (local_190.QuadPart != -1) {
    QueryPerformanceCounter(&local_148);
    lVar50 = local_148.QuadPart - (longlong)LVar24;
    if (pFVar35 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(pFVar35->GameThreadStats).ActivationCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar50);
      UNLOCK();
    }
    if (local_188 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(local_188->GameThreadStats).ActivationCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar50);
      UNLOCK();
    }
    if (local_180 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(local_180->GameThreadStats).ActivationCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar50);
      UNLOCK();
    }
  }
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar25) {
    FThreadStats::AddMessage(FVar46,CycleScopeEnd);
  }
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar26) {
    FThreadStats::AddMessage(FVar45,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// AdditionalStatObject @ 148166100

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UParticleSystemComponent::AdditionalStatObject(UParticleSystemComponent *this)

{
  return (UObject *)(this->Template).field0_0x0.DebugPtr;
}

// ApplyWorldOffset @ 148166580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ApplyWorldOffset
          (UParticleSystemComponent *this,TVector<double> *param_1,bool param_2)

{
  USceneComponent::ApplyWorldOffset((USceneComponent *)this,param_1,param_2);
  this->bResetTriggered = '\x01';
  return;
}

// AutoPopulateInstanceProperties @ 1481671e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::AutoPopulateInstanceProperties(UParticleSystemComponent *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  UParticleSystem *pUVar6;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x12ae,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar6 = (this->Template).field0_0x0.DebugPtr;
  if ((pUVar6 != (UParticleSystem *)0x0) && (uVar4 = 0, 0 < (pUVar6->Emitters).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (pUVar6->Emitters).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UParticleEmitter::AutoPopulateInstanceProperties
                (*(UParticleEmitter **)((pUVar6->Emitters).AllocatorInstance.Data + lVar5),this);
      pUVar6 = (this->Template).field0_0x0.DebugPtr;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (pUVar6->Emitters).ArrayNum);
  }
  return;
}

// BeginDestroy @ 1481673b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UParticleSystemComponent::BeginDestroy(UParticleSystemComponent *this)

{
  byte bVar1;
  EPSCPoolMethod EVar2;
  UParticleSystem *pUVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  bVar7 = false;
  bVar4 = false;
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    bVar1 = this->field_0x57a;
    this->bSkipUpdateDynamicDataDuringTick = '\x01';
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
    this->field_0x57a = (this->field_0x57a ^ bVar1) & 0x10 ^ this->field_0x57a;
  }
  UPrimitiveComponent::BeginDestroy((UPrimitiveComponent *)this);
  EVar2 = this->PoolingMethod;
  if ((EVar2 == AutoRelease) || (EVar2 == ManualRelease)) {
    if ((byte)LogParticles._0_1_ < 3) goto LAB_148167578;
    pUVar3 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar3 != (UParticleSystem *)0x0) {
      pFVar6 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar3,&local_28,(UObject *)0x0);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar7 = true;
      }
      else {
        bVar7 = true;
      }
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    bVar4 = bVar7;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((EVar2 != FreeInPool) || ((byte)LogParticles._0_1_ < 3)) goto LAB_148167578;
    pUVar3 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar3 != (UParticleSystem *)0x0) {
      pFVar6 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar3,&local_18,(UObject *)0x0);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  if ((bVar4) && (FVar5.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar5.Data);
  }
LAB_148167578:
  TMulticastDelegate<void___cdecl(UParticleSystemComponent_*,bool),FDefaultDelegateUserPolicy>::
  Broadcast(&OnSystemPreActivationChange,this,false);
  ResetParticles(this,true);
  return;
}

// BeginTrails @ 1481675b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::BeginTrails
          (UParticleSystemComponent *this,FName param_1,FName param_2,ETrailWidthMode param_3,
          float param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)this + 0xaf0))(this,1);
  pFVar4 = (this->EmitterInstances).AllocatorInstance.Data;
  iVar2 = (this->EmitterInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x200))(plVar3);
      (**(code **)(*plVar3 + 0x210))(plVar3,param_1,param_2,param_3,param_4);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// CacheViewRelevanceFlags @ 1481678d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::CacheViewRelevanceFlags
          (UParticleSystemComponent *this,UParticleSystem *param_1)

{
  TArray<FMaterialRelevance,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  Type TVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  EShaderPlatform EVar14;
  code *pcVar15;
  longlong lVar16;
  uint local_res8;
  longlong local_res18;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  pTVar1 = &this->CachedViewRelevanceFlags;
  (this->CachedViewRelevanceFlags).ArrayNum = 0;
  if ((this->CachedViewRelevanceFlags).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->CachedViewRelevanceFlags).ArrayMax);
  }
  if (param_1 == (UParticleSystem *)0x0) {
    this->bIsViewRelevanceDirty = '\0';
    return;
  }
  local_res8 = 0;
  if (0 < (param_1->Emitters).ArrayNum) {
    local_res18 = 0;
    do {
      uVar12 = 0;
      if ((int)local_res8 < (param_1->Emitters).ArrayNum) {
        uVar12 = ~local_res8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar13 = (param_1->Emitters).AllocatorInstance.Data + local_res18;
      if (*(longlong *)pFVar13 != 0) {
        pUVar10 = Z_Construct_UClass_UParticleSpriteEmitter_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar13,pUVar10);
        if (((bVar6) && (lVar3 = *(longlong *)pFVar13, lVar3 != 0)) &&
           ((int)local_res8 < (this->EmitterInstances).ArrayNum)) {
          if (((int)local_res8 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          plVar4 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + local_res18);
          if ((plVar4 != (longlong *)0x0) && (uVar12 = 0, 0 < *(int *)(lVar3 + 0x48))) {
            lVar16 = 0;
            do {
              uVar7 = 0;
              if ((int)uVar12 < *(int *)(lVar3 + 0x48)) {
                uVar7 = ~uVar12 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              piVar2 = &(this->CachedViewRelevanceFlags).ArrayNum;
              lVar5 = *(longlong *)(lVar16 + *(longlong *)(lVar3 + 0x40));
              if (*piVar2 <= (int)uVar12) {
                iVar8 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,1,&pTVar1->AllocatorInstance,piVar2,
                                   &(this->CachedViewRelevanceFlags).ArrayMax);
                *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = 0;
              }
              uVar7 = 0;
              if ((int)uVar12 < (this->CachedViewRelevanceFlags).ArrayNum) {
                uVar7 = ~uVar12 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar13 = (pTVar1->AllocatorInstance).Data;
              if ((*(longlong *)(lVar5 + 0x30) == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("EmitterLODLevel->RequiredModule",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                     ,0xf82,L""), bVar6)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              if ((*(byte *)(lVar5 + 0x2c) & 1) != 0) {
                if (*(longlong *)&this->field_0xb0 == 0) {
                  pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
                  pcVar15 = *(code **)(*plVar4 + 0x168);
                  TVar9 = GMaxRHIFeatureLevel;
                  if (pUVar11 != (UWorld *)0x0) {
                    TVar9 = (uint)(pUVar11->FeatureLevel).Value;
                  }
                }
                else {
                  pcVar15 = *(code **)(*plVar4 + 0x168);
                  TVar9 = (uint)*(byte *)(*(longlong *)&this->field_0xb0 + 0x188);
                }
                if (TVar9 == Num) {
                  EVar14 = SP_NumPlatforms;
                }
                else {
                  EVar14 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar9];
                }
                (*pcVar15)(plVar4,pFVar13 + (longlong)(int)uVar12 * 8,lVar5,EVar14);
              }
              uVar12 = uVar12 + 1;
              lVar16 = lVar16 + 8;
            } while ((int)uVar12 < *(int *)(lVar3 + 0x48));
          }
        }
      }
      local_res8 = local_res8 + 1;
      local_res18 = local_res18 + 8;
    } while ((int)local_res8 < (param_1->Emitters).ArrayNum);
  }
  this->bIsViewRelevanceDirty = '\0';
  return;
}

// CalcBounds @ 148167c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UParticleSystemComponent::CalcBounds
          (UParticleSystemComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  int iVar1;
  UParticleSystem *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  TMatrix<double> *pTVar10;
  TBoxSphereBounds<double,double> *pTVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [16];
  ulonglong local_208;
  TVector<double>_u_0 local_190;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_158 [64];
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_208 = local_208 & 0xffffffffffffff00;
  local_238._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_238._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  auStack_218._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auStack_218._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auStack_220 = (undefined1  [8])UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_228 = (undefined1  [8])UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((((this->bAutoManageAttachment != '\0') && (*(longlong *)&this->field_0xd0 == 0)) &&
      (pUVar9 = FWeakObjectPtr::Get(&(this->AutoAttachParent).WeakPtr), pUVar9 != (UObject *)0x0))
     && ((this->field_0x9a & 0x10) == 0)) {
    dVar30 = *(double *)(pUVar9 + 7);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *(double *)&pUVar9[6].field_0x20;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar30;
    dVar30 = *(double *)&pUVar9[7].field_0x10;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = *(double *)&pUVar9[7].field_0x8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar30;
    dVar30 = *(double *)&pUVar9[7].field_0x20;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = *(double *)&pUVar9[7].field_0x18;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar30;
    __return_storage_ptr__->SphereRadius = *(double *)(pUVar9 + 8);
    return __return_storage_ptr__;
  }
  if (FXConsoleVariables::bAllowCulling == 0) {
    local_238._8_8_ = _UNK_151a30ea8;
    local_238._0_8_ = ___xmm_c290000000000000c290000000000000;
    auStack_220 = (undefined1  [8])_UNK_151a30e98;
    local_228 = (undefined1  [8])___xmm_4290000000000000c290000000000000;
    auStack_218._8_8_ = _UNK_151444fc8;
    auStack_218._0_8_ = ___xmm_42900000000000004290000000000000;
  }
  else {
    pUVar2 = (this->Template).field0_0x0.DebugPtr;
    if ((pUVar2 == (UParticleSystem *)0x0) || (pUVar2->bUseFixedRelativeBoundingBox == '\0')) {
      uVar13 = 0;
      if (0 < (this->EmitterInstances).ArrayNum) {
        uVar25 = auStack_218._8_4_;
        uVar28 = auStack_218._12_4_;
        uVar17 = auStack_218._0_4_;
        uVar22 = auStack_218._4_4_;
        uVar24 = local_228._8_4_;
        uVar27 = local_228._12_4_;
        uVar16 = local_228._0_4_;
        uVar21 = local_228._4_4_;
        uVar23 = local_238._8_4_;
        uVar26 = local_238._12_4_;
        uVar15 = local_238._0_4_;
        uVar20 = local_238._4_4_;
        lVar14 = 0;
        do {
          iVar1 = (this->EmitterInstances).ArrayNum;
          uVar8 = 0;
          if ((int)uVar13 < iVar1) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_248 = (longlong)(int)uVar13;
            local_240 = (longlong)iVar1;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
              return pTVar11;
            }
          }
          plVar3 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar14);
          if ((plVar3 != (longlong *)0x0) && (0 < *(int *)((longlong)plVar3 + 0x18c))) {
            pauVar12 = (undefined1 (*) [16])(**(code **)(*plVar3 + 0x60))(plVar3,local_158);
            if ((char)local_208 == '\0') {
              if (pauVar12[3][0] != '\0') {
                uVar15 = *(undefined4 *)*pauVar12;
                uVar20 = *(undefined4 *)(*pauVar12 + 4);
                uVar23 = *(undefined4 *)(*pauVar12 + 8);
                uVar26 = *(undefined4 *)(*pauVar12 + 0xc);
                local_238 = *pauVar12;
                uVar16 = *(undefined4 *)pauVar12[1];
                uVar21 = *(undefined4 *)(pauVar12[1] + 4);
                uVar24 = *(undefined4 *)(pauVar12[1] + 8);
                uVar27 = *(undefined4 *)(pauVar12[1] + 0xc);
                _local_228 = pauVar12[1];
                uVar17 = *(undefined4 *)pauVar12[2];
                uVar22 = *(undefined4 *)(pauVar12[2] + 4);
                uVar25 = *(undefined4 *)(pauVar12[2] + 8);
                uVar28 = *(undefined4 *)(pauVar12[2] + 0xc);
                auStack_218 = pauVar12[2];
                local_208 = *(ulonglong *)pauVar12[3];
              }
            }
            else if (pauVar12[3][0] != '\0') {
              local_238._0_8_ = *(undefined8 *)*pauVar12;
              local_238._8_8_ = *(undefined8 *)(*pauVar12 + 8);
              if ((double)CONCAT44(uVar20,uVar15) <= (double)local_238._0_8_) {
                local_238._0_8_ = CONCAT44(uVar20,uVar15);
              }
              if ((double)CONCAT44(uVar26,uVar23) <= (double)local_238._8_8_) {
                local_238._8_8_ = CONCAT44(uVar26,uVar23);
              }
              uVar15 = (undefined4)local_238._0_8_;
              uVar20 = (undefined4)((ulonglong)local_238._0_8_ >> 0x20);
              local_228 = *(undefined1 (*) [8])pauVar12[1];
              uVar23 = (undefined4)local_238._8_8_;
              uVar26 = (undefined4)((ulonglong)local_238._8_8_ >> 0x20);
              if ((double)CONCAT44(uVar21,uVar16) <= (double)local_228) {
                local_228 = (undefined1  [8])CONCAT44(uVar21,uVar16);
              }
              auStack_220 = *(undefined1 (*) [8])(pauVar12[1] + 8);
              if ((double)auStack_220 <= (double)CONCAT44(uVar27,uVar24)) {
                auStack_220 = (undefined1  [8])CONCAT44(uVar27,uVar24);
              }
              uVar16 = SUB84(local_228,0);
              uVar21 = (undefined4)((ulonglong)local_228 >> 0x20);
              auStack_218._0_8_ = *(undefined8 *)pauVar12[2];
              if ((double)auStack_218._0_8_ <= (double)CONCAT44(uVar22,uVar17)) {
                auStack_218._0_8_ = CONCAT44(uVar22,uVar17);
              }
              uVar24 = SUB84(auStack_220,0);
              uVar27 = (undefined4)((ulonglong)auStack_220 >> 0x20);
              auStack_218._8_8_ = *(undefined8 *)(pauVar12[2] + 8);
              if ((double)auStack_218._8_8_ <= (double)CONCAT44(uVar28,uVar25)) {
                auStack_218._8_8_ = CONCAT44(uVar28,uVar25);
              }
              uVar17 = (undefined4)auStack_218._0_8_;
              uVar22 = (undefined4)((ulonglong)auStack_218._0_8_ >> 0x20);
              uVar25 = (undefined4)auStack_218._8_8_;
              uVar28 = (undefined4)((ulonglong)auStack_218._8_8_ >> 0x20);
            }
          }
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 8;
        } while ((int)uVar13 < (this->EmitterInstances).ArrayNum);
        if ((char)local_208 != '\0') {
          dVar31 = ((double)CONCAT44(uVar27,uVar24) - (double)CONCAT44(uVar20,uVar15)) *
                   __real_3fa99999a0000000;
          dVar29 = ((double)CONCAT44(uVar22,uVar17) - (double)CONCAT44(uVar26,uVar23)) *
                   __real_3fa99999a0000000;
          dVar33 = ((double)CONCAT44(uVar28,uVar25) - (double)CONCAT44(uVar21,uVar16)) *
                   __real_3fa99999a0000000;
          dVar32 = (double)CONCAT44(uVar26,uVar23) - dVar29;
          dVar5 = (double)CONCAT44(uVar27,uVar24) + dVar31;
          dVar30 = (double)CONCAT44(uVar28,uVar25) + dVar33;
          local_238._8_4_ = SUB84(dVar32,0);
          local_238._0_8_ = (double)CONCAT44(uVar20,uVar15) - dVar31;
          local_238._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          unique0x100001c2 = SUB84(dVar5,0);
          local_228 = (undefined1  [8])((double)CONCAT44(uVar21,uVar16) - dVar33);
          unique0x100001c6 = (int)((ulonglong)dVar5 >> 0x20);
          auStack_218._8_4_ = SUB84(dVar30,0);
          auStack_218._0_8_ = (double)CONCAT44(uVar22,uVar17) + dVar29;
          auStack_218._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          goto LAB_14816803e;
        }
      }
      dVar5 = (param_1->Translation).XY.m128d_f64[1];
      dVar30 = (param_1->Translation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar5;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar30;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar6;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      __return_storage_ptr__->SphereRadius = 0.0;
      return __return_storage_ptr__;
    }
    pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_118);
    UE::Math::TBox<double>::TransformBy
              (&pUVar2->FixedRelativeBoundingBox,(TBox<double> *)&local_190._s_0,pTVar10);
    local_238._8_8_ = local_190._s_0.Y;
    local_238._0_8_ = local_190._s_0.X;
    auStack_220 = (undefined1  [8])uStack_178;
    local_228 = (undefined1  [8])local_190._s_0.Z;
    auStack_218._8_8_ = uStack_168;
    auStack_218._0_8_ = local_170;
  }
LAB_14816803e:
  dVar5 = (double)auStack_218._8_8_ - (double)local_228;
  auStack_218._0_8_ = (double)auStack_218._0_8_ - (double)local_238._8_8_;
  dVar30 = dVar5 * __real_3fe0000000000000;
  dVar33 = ((double)auStack_220 - (double)local_238._0_8_) * __real_3fe0000000000000;
  dVar32 = (double)auStack_218._0_8_ * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (double)local_238._0_8_ + dVar33;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)local_238._8_8_ + dVar32;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)local_228 + dVar30;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar33;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar32;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar30;
  dVar30 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar18._0_8_ = dVar30 * dVar30;
  auVar18._8_8_ = 0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ =
       (dVar5 * dVar5 + (double)auStack_218._0_8_ * (double)auStack_218._0_8_) *
       __real_3fd0000000000000 + auVar18._0_8_;
  auVar19 = sqrtpd(auVar18,auVar19);
  __return_storage_ptr__->SphereRadius = auVar19._0_8_;
  return __return_storage_ptr__;
}

// CanBeOccluded @ 148168770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::CanBeOccluded(UParticleSystemComponent *this)

{
  uchar uVar1;
  UParticleSystem *pUVar2;
  
  pUVar2 = (this->Template).field0_0x0.DebugPtr;
  uVar1 = (pUVar2->OcclusionBoundsMethod).Value;
  if ((uVar1 != '\0') && (((pUVar2->FixedRelativeBoundingBox).IsValid != '\0' || (uVar1 == '\x02')))
     ) {
    return true;
  }
  return false;
}

// CanConsiderInvisible @ 1481687b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::CanConsiderInvisible(UParticleSystemComponent *this)

{
  UParticleSystem *pUVar1;
  bool bVar2;
  UWorld *this_00;
  float fVar3;
  float fVar4;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  if (((this_00 != (UWorld *)0x0) ||
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_00 != (UWorld *)0x0)) &&
     (pUVar1 = (this->Template).field0_0x0.DebugPtr, pUVar1 != (UParticleSystem *)0x0)) {
    fVar4 = pUVar1->SecondsBeforeInactive;
    if (fVar4 <= this->SecondsBeforeInactive) {
      fVar4 = this->SecondsBeforeInactive;
    }
    if (0.0 < fVar4) {
      if (fVar4 <= __real_3dcccccd) {
        fVar4 = __real_3dcccccd;
      }
      if (((0.0 < fVar4) && (fVar4 < this->AccumTickTime)) &&
         ((bVar2 = UWorld::IsGameWorld(this_00), bVar2 &&
          ((fVar3 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this), 0.0 < fVar3
           && (fVar3 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this),
              (double)(fVar3 + fVar4) < this_00->TimeSeconds)))))) {
        return true;
      }
    }
  }
  return false;
}

// CanSkipTickDueToVisibility @ 148168870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::CanSkipTickDueToVisibility(UParticleSystemComponent *this)

{
  int *piVar1;
  UParticleSystem *pUVar2;
  bool bVar3;
  
  pUVar2 = (this->Template).field0_0x0.DebugPtr;
  if ((pUVar2 != (UParticleSystem *)0x0) && (pUVar2->bAnyEmitterLoopsForever != 0)) {
    bVar3 = CanConsiderInvisible(this);
    if ((bVar3) && (this->bWasDeactivated == '\0')) {
      this->bForcedInActive = '\x01';
      DestructItems<FParticleEventSpawnData,int>
                ((FParticleEventSpawnData *)(this->SpawnEvents).AllocatorInstance.Data,
                 (this->SpawnEvents).ArrayNum);
      piVar1 = &(this->SpawnEvents).ArrayMax;
      (this->SpawnEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&(this->SpawnEvents).AllocatorInstance,0,piVar1);
      }
      DestructItems<FParticleEventDeathData,int>
                ((FParticleEventDeathData *)(this->DeathEvents).AllocatorInstance.Data,
                 (this->DeathEvents).ArrayNum);
      piVar1 = &(this->DeathEvents).ArrayMax;
      (this->DeathEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,0,&(this->DeathEvents).AllocatorInstance,0,piVar1);
      }
      DestructItems<FParticleEventCollideData,int>
                ((FParticleEventCollideData *)(this->CollisionEvents).AllocatorInstance.Data,
                 (this->CollisionEvents).ArrayNum);
      piVar1 = &(this->CollisionEvents).ArrayMax;
      (this->CollisionEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,0,&(this->CollisionEvents).AllocatorInstance,0,piVar1);
      }
      DestructItems<FParticleEventKismetData,int>
                ((FParticleEventKismetData *)(this->KismetEvents).AllocatorInstance.Data,
                 (this->KismetEvents).ArrayNum);
      piVar1 = &(this->KismetEvents).ArrayMax;
      (this->KismetEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&(this->KismetEvents).AllocatorInstance,0,piVar1);
      }
      if (((bool)this->bIsManagingSignificance) &&
         (((this->Template).field0_0x0.DebugPtr)->HighestSignificance < this->RequiredSignificance))
      {
        OnSignificanceChanged(this,false,true,false);
      }
      return true;
    }
  }
  return false;
}

// CancelAutoAttachment @ 148168af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::CancelAutoAttachment
          (UParticleSystemComponent *this,bool param_1,UWorld *param_2)

{
  bool bVar1;
  UWorld *this_00;
  undefined4 local_res8 [2];
  TVector<double>_u_0 local_28;
  
  if (this->bAutoManageAttachment == '\0') {
    return;
  }
  if (param_2 == (UWorld *)0x0) {
    return;
  }
  bVar1 = UWorld::IsGameWorld(param_2);
  if (!bVar1) {
    return;
  }
  if (this->bDidAutoAttach != '\0') {
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
    this->bDidAutoAttach = '\0';
  }
  if (param_1) {
    this_00 = *(UWorld **)&this->field_0xb0;
    if (((this_00 != (UWorld *)0x0) ||
        (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        this_00 != (UWorld *)0x0)) && (bVar1 = UWorld::IsGameWorld(this_00), !bVar1)) {
      return;
    }
    local_res8[0] = 0;
    (**(code **)(*(longlong *)this + 0x518))(this,local_res8);
    return;
  }
  return;
}

// ClearDynamicData @ 148168c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::ClearDynamicData(UParticleSystemComponent *this)

{
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  if (*(FParticleSystemSceneProxy **)&this->field_0x530 != (FParticleSystemSceneProxy *)0x0) {
    FParticleSystemSceneProxy::UpdateData
              (*(FParticleSystemSceneProxy **)&this->field_0x530,(FParticleDynamicData *)0x0);
    return;
  }
  return;
}

// ClearParameter @ 148168c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ClearParameter
          (UParticleSystemComponent *this,FName param_1,EParticleSysParamType param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x12a1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0;
  if (0 < (this->InstanceParameters).ArrayNum) {
    pTVar9 = &this->InstanceParameters;
    lVar6 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar8;
      if (*(FName *)((pTVar9->AllocatorInstance).Data + lVar6) == param_1) {
        if (param_2 != PSPT_None) {
          uVar4 = 0;
          if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
            uVar4 = uVar10;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((byte)(pTVar9->AllocatorInstance).Data[lVar6 + 8] != param_2) goto LAB_148168e25;
        }
        uVar7 = uVar8 - 1;
        lVar6 = lVar6 + -0xe0;
        uVar4 = 0;
        if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
          uVar4 = uVar10;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Dst = (pTVar9->AllocatorInstance).Data + (longlong)(int)uVar8 * 0xe0;
        iVar5 = (this->InstanceParameters).ArrayNum + ~uVar8;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 0xe0,(longlong)iVar5 * 0xe0);
        }
        piVar1 = &(this->InstanceParameters).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,0x10,&pTVar9->AllocatorInstance,(this->InstanceParameters).ArrayNum,
                   &(this->InstanceParameters).ArrayMax);
      }
LAB_148168e25:
      uVar8 = uVar7 + 1;
      lVar6 = lVar6 + 0xe0;
    } while ((int)uVar8 < (this->InstanceParameters).ArrayNum);
  }
  return;
}

// Complete @ 14816a3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::Complete(UParticleSystemComponent *this)

{
  UParticleSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  FName local_res8;
  UParticleSystemComponent *local_res10;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar4 = *(UWorld **)&this->field_0xb0;
  if (((pUVar4 == (UWorld *)0x0) &&
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 == (UWorld *)0x0
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("World",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                ,0xcf8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (5 < (byte)LogParticles._0_1_) {
    pUVar1 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar1 != (UParticleSystem *)0x0) {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    if (*(longlong *)&this->field_0xb0 == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pUVar1 != (UParticleSystem *)0x0) &&
       (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  local_res10 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSystemFinished,
             &local_res10);
  ResetParticles(this,false);
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  (**(code **)(*(longlong *)this + 0x420))(this,0);
  if (this->PoolingMethod != AutoRelease) {
    if (this->PoolingMethod != ManualRelease_OnComplete) {
      if (this->bAutoDestroy == 0) {
        if (this->bAutoManageAttachment != '\0') {
          CancelAutoAttachment(this,true,pUVar4);
        }
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014816a546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x4a0))(this,0);
      return;
    }
    this->PoolingMethod = ManualRelease;
  }
  FWorldPSCPool::ReclaimWorldParticleSystem(&pUVar4->PSCPool,this);
  return;
}

// ComputeCanTickInAnyThread @ 14816aa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::ComputeCanTickInAnyThread(UParticleSystemComponent *this)

{
  byte bVar1;
  UParticleSystem *this_00;
  code *pcVar2;
  bool bVar3;
  
  if (this->bIsElligibleForAsyncTickComputed != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsElligibleForAsyncTickComputed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                       ,0xd9d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar1 = this->field_0x578;
  this_00 = (this->Template).field0_0x0.DebugPtr;
  this->bIsElligibleForAsyncTick = '\0';
  if (this_00 != (UParticleSystem *)0x0) {
    this->field_0x578 = bVar1 & 0xfb | 8;
    if (!(bool)this_00->bIsElligibleForAsyncTickComputed) {
      UParticleSystem::ComputeCanTickInAnyThread(this_00);
    }
    this->field_0x578 = ((byte)this_00->field_0xf4 >> 4 ^ this->field_0x578) & 4 ^ this->field_0x578
    ;
  }
  return;
}

// ComputeTickComponent_Concurrent @ 14816aae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ComputeTickComponent_Concurrent(UParticleSystemComponent *this)

{
  int *piVar1;
  TAtomic<unsigned___int64> *pTVar2;
  undefined1 uVar3;
  UParticleSystem *pUVar4;
  FParticleEmitterInstance *pFVar5;
  UParticleEmitter *this_00;
  TAtomic<FMinimalName> TVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  LARGE_INTEGER LVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  UWorld *pUVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_ParticleComputeTickTime> FVar22;
  TStatId TVar23;
  UObjectBaseUtility *pUVar24;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC> FVar25;
  FParticlePerfStats *pFVar26;
  FParticlePerfStats *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester> FVar28;
  UParticleLODLevel *pUVar29;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar30;
  TStatIdData *pTVar31;
  FParticlePerfStats *pFVar32;
  FName FVar33;
  FName FVar34;
  FNameEntryId FVar35;
  uint uVar36;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  longlong local_148;
  FColor_u_0 local_140 [2];
  FName local_138;
  FName local_128;
  byte local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  uint local_100;
  uint uStack_fc;
  FName local_f8;
  FName local_f0;
  FParticlePerfStats *local_e8;
  LARGE_INTEGER local_e0;
  FParticlePerfStats *local_d8;
  FParticlePerfStats *local_d0;
  FName local_c8;
  FName local_b8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FInGameScopedCycleCounter local_58;
  
  bVar16 = IsInGameThread();
  pUVar20 = *(UWorld **)&this->field_0xb0;
  if (pUVar20 == (UWorld *)0x0) {
    pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (&local_58,pUVar20,VFXSignificance,!bVar16 * '\x02',this->bIsManagingSignificance);
  pFVar32 = (FParticlePerfStats *)0x0;
  FVar22 = StatPtr_STAT_ParticleComputeTickTime;
  if (StatPtr_STAT_ParticleComputeTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleComputeTickTime>)0x0) {
    pFVar21 = ::FName::FName(&local_78,"STAT_ParticleComputeTickTime");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_ParticleComputeTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleComputeTickTime,*pFVar21,
                        L"Particle Compute Time GT,AT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar22;
  bVar16 = false;
  bVar12 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar14 = false;
  bVar10 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_14816aca0:
    bVar12 = bVar10;
    bVar16 = bVar14;
    bVar14 = false;
    local_f0 = local_c8;
    FVar33 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar16 = false;
      bVar12 = true;
      bVar14 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_118.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x9bc);
        bVar16 = true;
        bVar12 = true;
        bVar14 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14816aca0;
    local_f0 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar14 = true;
  }
  TVar23.StatIdPtr = (TStatIdData *)StatPtr_STAT_ParticleComputeTickTime;
  if (StatPtr_STAT_ParticleComputeTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleComputeTickTime>)0x0) {
    pFVar21 = ::FName::FName(&local_70,"STAT_ParticleComputeTickTime");
    TVar23.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleComputeTickTime,*pFVar21,
                    L"Particle Compute Time GT,AT","STATGROUP_Particles","STATCAT_Advanced",
                    L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  pUVar24 = (UObjectBaseUtility *)(**(code **)(*(longlong *)this + 0x480))(this);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_128,pUVar24,TVar23);
  FVar25 = StatPtr_STAT_ParticlesOverview_GT_CNC;
  if (StatPtr_STAT_ParticlesOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)0x0) {
    pFVar21 = ::FName::FName(&local_68,"STAT_ParticlesOverview_GT_CNC");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT_CNC,*pFVar21
                        ,L"GT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar25;
  bVar11 = false;
  bVar10 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar17 = false;
  bVar15 = false;
  if ((FVar34.ComparisonIndex.Value.Value != 0) || (FVar34.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar17 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_110.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x9be);
        bVar11 = true;
        bVar10 = true;
        bVar17 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8 = FVar34;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      bVar15 = true;
      goto LAB_14816ae82;
    }
  }
  bVar11 = bVar17;
  bVar10 = bVar15;
  bVar15 = false;
  local_f8 = local_b8;
  FVar34 = local_b8;
LAB_14816ae82:
  pUVar20 = *(UWorld **)&this->field_0xb0;
  pUVar4 = (this->Template).field0_0x0.DebugPtr;
  pFVar26 = pFVar32;
  if ((((pUVar20 != (UWorld *)0x0) ||
       (pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar20 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar26 = FParticlePerfStatsManager::GetWorldPerfStats(pUVar20);
  }
  pFVar27 = pFVar32;
  local_e8 = pFVar26;
  if (((pUVar4 != (UParticleSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar27 = FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar4);
  }
  local_d0 = pFVar32;
  local_d8 = pFVar27;
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    local_d0 = FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  local_e0.QuadPart = -1;
  if (((pFVar26 != (FParticlePerfStats *)0x0) || (pFVar27 != (FParticlePerfStats *)0x0)) ||
     (local_d0 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_a0);
    local_e0 = local_a0;
  }
  this->NumSignificantEmitters = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    local_148 = 0;
    do {
      uVar36 = (uint)pFVar32;
      uVar19 = 0;
      if ((int)uVar36 < (this->EmitterInstances).ArrayNum) {
        uVar19 = ~uVar36 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = false;
      bVar17 = false;
      bVar9 = false;
      local_138.ComparisonIndex.Value = 0;
      local_138.Number = 0;
      pFVar5 = *(FParticleEmitterInstance **)
                ((this->EmitterInstances).AllocatorInstance.Data + local_148);
      if (pFVar5 != (FParticleEmitterInstance *)0x0) {
        this_00 = pFVar5->SpriteTemplate;
        FVar28 = StatPtr_STAT_EmittersStatGroupTester;
        if (StatPtr_STAT_EmittersStatGroupTester ==
            (FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester>)0x0) {
          pFVar21 = ::FName::FName(&local_60,"STAT_EmittersStatGroupTester");
          FVar28 = (FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EmittersStatGroupTester,
                              *pFVar21,L"STAT_EmittersStatGroupTester","STATGROUP_Emitters",
                              "STATCAT_Advanced",L"Emitters",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        if ((((int)*(undefined8 *)FVar28 == 0) &&
            ((int)((ulonglong)*(undefined8 *)FVar28 >> 0x20) == 0)) ||
           (FThreadStats::bPrimaryEnable == false)) {
          pTVar31 = &TStatId::TStatId_NAME_None;
        }
        else {
          TVar6 = ((this_00->StatID).StatIdPtr)->Name;
          if ((TVar6._0_4_ == 0) && (TVar6._4_4_ == 0)) {
            UParticleEmitter::CreateStatID(this_00);
          }
          pTVar31 = (this_00->StatID).StatIdPtr;
        }
        if (((SUB84(pTVar31->Name,0) != 0) || (SUB84(pTVar31->Name,4) != 0)) &&
           (FThreadStats::bPrimaryEnable != false)) {
          FVar33 = *(FName *)&pTVar31->Name;
          FVar35 = FVar33.ComparisonIndex.Value;
          uVar19 = FVar33.Number;
          if ((FVar35.Value != 0) || (uVar19 != 0)) {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_140[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_140[0]._s_0,(pTVar31->StatDescriptionAnsi).Ptr);
              bVar17 = false;
              bVar9 = true;
              if (-1 < CpuChannel->Enabled) {
                local_108.ComparisonIndex.Value = FVar35.Value;
                local_108.Number = uVar19;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_108,(pTVar31->StatDescriptionWide).Ptr,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleEmitterInstances.h"
                           ,0x31c);
                bVar17 = true;
                bVar9 = true;
              }
            }
            bVar8 = false;
            if (FThreadStats::bPrimaryEnable != false) {
              local_138 = FVar33;
              local_100 = FVar35.Value;
              uStack_fc = uVar19;
              FThreadStats::AddMessage(FVar33,CycleScopeStart);
              bVar8 = true;
            }
          }
        }
      }
      uVar36 = uVar36 + 1;
      if ((((int)uVar36 < (this->EmitterInstances).ArrayNum) && ((int)uVar36 < 0)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar5 != (FParticleEmitterInstance *)0x0) &&
         (pFVar5->SpriteTemplate != (UParticleEmitter *)0x0)) {
        if (((pFVar5->SpriteTemplate->LODLevels).ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Instance->SpriteTemplate->LODLevels.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                ,0x9d4,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar29 = UParticleEmitter::GetCurrentLODLevel(pFVar5->SpriteTemplate,pFVar5);
        if ((pUVar29 != (UParticleLODLevel *)0x0) && (pUVar29->bEnabled != 0)) {
          if ((bool)this->bIsManagingSignificance) {
            bVar18 = UParticleEmitter::IsSignificant
                               (pFVar5->SpriteTemplate,this->RequiredSignificance);
            if (bVar18) {
              this->NumSignificantEmitters = this->NumSignificantEmitters + 1;
              (**(code **)(pFVar5->_padding_ + 0xf8))(pFVar5,0);
              pFVar5->bFakeBurstsWhenSpawningSupressed = '\0';
              pFVar5->bEnabled = '\x01';
            }
            else {
              (**(code **)(pFVar5->_padding_ + 0xf8))(pFVar5,1);
              pFVar5->bFakeBurstsWhenSpawningSupressed = '\x01';
              if (pFVar5->SpriteTemplate->bDisableWhenInsignficant != 0) {
                pFVar5->bEnabled = '\0';
              }
            }
          }
          else {
            this->NumSignificantEmitters = this->NumSignificantEmitters + 1;
          }
          (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5,this->DeltaTimeTick);
          (**(code **)(pFVar5->_padding_ + 0x218))(pFVar5,pFVar32);
          this->TotalActiveParticles = this->TotalActiveParticles + pFVar5->ActiveParticles;
        }
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (local_138 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
          ) && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_88.NameAndInfo.Index.Value = local_138.ComparisonIndex.Value;
          local_88.NameAndInfo.Number = local_138.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_98);
          local_88.StatData.Pad[4] = '\0';
          local_88.StatData.Pad[5] = '\0';
          local_88.StatData.Pad[6] = '\0';
          local_88.StatData.Pad[7] = '\0';
          local_88.StatData.Pad[0] = local_98.s.LowPart._0_1_;
          local_88.StatData.Pad[1] = local_98.s.LowPart._1_1_;
          local_88.StatData.Pad[2] = local_98.s.LowPart._2_1_;
          local_88.StatData.Pad[3] = local_98.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_88);
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
      local_148 = local_148 + 8;
      pFVar32 = (FParticlePerfStats *)(ulonglong)uVar36;
      FVar33 = local_f0;
      FVar34 = local_f8;
      pFVar26 = local_e8;
    } while ((int)uVar36 < (this->EmitterInstances).ArrayNum);
  }
  LVar13 = local_e0;
  if (this->bAsyncWorkOutstanding != false) {
    this->bAsyncWorkOutstanding = false;
  }
  if (local_e0.QuadPart != -1) {
    QueryPerformanceCounter(&local_90);
    lVar30 = local_90.QuadPart - (longlong)LVar13;
    if (pFVar26 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar2 = &(pFVar26->GameThreadStats).TickConcurrentCycles;
      *pTVar2 = (TAtomic<unsigned___int64>)((longlong)*pTVar2 + lVar30);
      UNLOCK();
    }
    if (local_d8 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar2 = &(local_d8->GameThreadStats).TickConcurrentCycles;
      *pTVar2 = (TAtomic<unsigned___int64>)((longlong)*pTVar2 + lVar30);
      UNLOCK();
    }
    if (local_d0 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar2 = &(local_d0->GameThreadStats).TickConcurrentCycles;
      *pTVar2 = (TAtomic<unsigned___int64>)((longlong)*pTVar2 + lVar30);
      UNLOCK();
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  if ((local_120 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_120 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_120 & 4) != 0) {
    FThreadStats::AddMessage(local_128,CycleScopeEnd);
  }
  local_120 = 0;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(&local_58);
  return;
}

// ConditionalCacheViewRelevanceFlags @ 14816b530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ConditionalCacheViewRelevanceFlags
          (UParticleSystemComponent *this,UParticleSystem *param_1)

{
  UParticleSystem *pUVar1;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  if ((param_1 != (UParticleSystem *)0x0) &&
     ((pUVar1 = (this->Template).field0_0x0.DebugPtr, pUVar1 == (UParticleSystem *)0x0 ||
      (pUVar1 != param_1)))) {
    this->bIsViewRelevanceDirty = '\x01';
  }
  if ((bool)this->bIsViewRelevanceDirty) {
    pUVar1 = (this->Template).field0_0x0.DebugPtr;
    if (param_1 != (UParticleSystem *)0x0) {
      pUVar1 = param_1;
    }
    CacheViewRelevanceFlags(this,pUVar1);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// CreateDynamicData @ 14816c000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FParticleDynamicData * __thiscall
UParticleSystemComponent::CreateDynamicData(UParticleSystemComponent *this,Type param_1)

{
  uint *puVar1;
  int *piVar2;
  TArray<TObjectPtr<UParticleSystemReplay>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 uVar4;
  uchar uVar5;
  UParticleSystem *pUVar6;
  UParticleEmitter *this_00;
  TAtomic<FMinimalName> TVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  FDynamicEmitterReplayDataBase *pFVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  UWorld *pUVar28;
  FParticleDynamicData *pFVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_DynamicPSysCompCount> FVar31;
  FThreadStats *pFVar32;
  FThreadStatsPool *pFVar33;
  FThreadSafeStaticStat<FStat_STAT_DynamicPSysCompMem> FVar34;
  FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Replay> FVar35;
  UParticleSystemReplay *pUVar36;
  FName FVar37;
  TStatId TVar38;
  UClass *pUVar39;
  FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester> FVar40;
  FName FVar41;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar42;
  uint uVar43;
  longlong *plVar44;
  undefined ***pppuVar45;
  FNameEntryId FVar46;
  FName FVar47;
  FScriptContainerElement *pFVar48;
  undefined8 *puVar49;
  FNameEntryId FVar50;
  TStatIdData *pTVar51;
  ulonglong uVar52;
  FDynamicEmitterReplayDataBase *pFVar53;
  FName FVar54;
  longlong lVar55;
  FName FVar56;
  FName FVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auStackY_3a8 [32];
  FName local_338;
  longlong local_330;
  FName local_328;
  FDynamicEmitterReplayDataBase *local_320;
  Type local_318;
  FDynamicEmitterDataBase *local_310;
  UParticleSystemReplay *local_308;
  FCycleCounter local_300;
  FCycleCounter local_2f0;
  FColor_u_0 local_2e0;
  FColor_u_0 local_2dc;
  FName local_2d8;
  FName local_2d0;
  uint local_2c8;
  uint uStack_2c4;
  FName local_2c0;
  FName local_2b0;
  FName local_2a0;
  FName local_298;
  longlong local_290;
  FStatMessage local_288;
  FStatMessage local_278;
  FName local_268;
  FName FStack_260;
  FName local_258;
  FSourceLocation local_248;
  FSourceLocation local_228;
  FName local_208 [2];
  FName local_1f8;
  undefined1 local_1f0 [8];
  FInGameScopedCycleCounter local_1e8;
  FName local_1d0;
  FName local_1c8;
  undefined1 local_1c0 [16];
  FName local_1b0;
  undefined4 local_19c;
  undefined1 local_198 [16];
  undefined1 local_178 [128];
  code *local_f8 [2];
  undefined **local_e8;
  longlong lStack_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined ***local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  byte local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pUVar28 = *(UWorld **)&this->field_0xb0;
  local_318 = param_1;
  if (pUVar28 == (UWorld *)0x0) {
    pUVar28 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (&local_1e8,pUVar28,VFXSignificance,GameThread,this->bIsManagingSignificance);
  FVar54.ComparisonIndex.Value = 0;
  FVar54.Number = 0;
  FVar47 = FVar54;
  FVar56 = FVar54;
  FVar57 = FVar54;
  if (0 < (this->EmitterInstances).ArrayNum) {
    do {
      FVar50 = FVar47.ComparisonIndex.Value;
      uVar23 = 0;
      if ((int)FVar50.Value < (this->EmitterInstances).ArrayNum) {
        uVar23 = ~FVar50.Value >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FParticleDynamicData *)(*pcVar9)();
        return pFVar29;
      }
      lVar55 = *(longlong *)((this->EmitterInstances).AllocatorInstance.Data + (longlong)FVar56);
      if ((lVar55 != 0) && (0 < *(int *)(lVar55 + 0x18c))) {
        FVar57.ComparisonIndex.Value = FVar57.ComparisonIndex.Value.Value + 1;
        FVar57.Number = 0;
      }
      FVar47.ComparisonIndex.Value = FVar50.Value + 1;
      FVar47.Number = 0;
      FVar56 = (FName)((longlong)FVar56 + 8);
    } while ((int)FVar47.ComparisonIndex.Value < (this->EmitterInstances).ArrayNum);
    if (((this->bForceLODUpdateFromRenderer == '\0') && (FVar57.ComparisonIndex.Value.Value == 0))
       && (FVar47 = FVar54, (this->ReplayState).Value == '\0')) goto LAB_14816d5a8;
  }
  local_328 = (FName)FParticleDynamicData::operator_new(0xb0);
  if (local_328 == (FName)0x0) {
    local_328.ComparisonIndex.Value = 0;
    local_328.Number = 0;
  }
  else {
    ((FName *)((longlong)local_328 + 0x68))->ComparisonIndex = 0;
    ((FName *)((longlong)local_328 + 0x68))->Number = 0;
    (((FName *)((longlong)local_328 + 0x70))->ComparisonIndex).Value = 0;
    *(uint *)((longlong)local_328 + 0x74) = 0xc;
    ((FName *)((longlong)local_328 + 0x98))->ComparisonIndex = 0;
    ((FName *)((longlong)local_328 + 0x98))->Number = 0;
    ((FName *)((longlong)local_328 + 0xa0))->ComparisonIndex = 0;
    ((FName *)((longlong)local_328 + 0xa0))->Number = 0;
    ((FName *)((longlong)local_328 + 0xa8))->ComparisonIndex = 0;
    ((FName *)((longlong)local_328 + 0xa8))->Number = 0;
  }
  FVar47 = local_328;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar31 = StatPtr_STAT_DynamicPSysCompCount;
    if (StatPtr_STAT_DynamicPSysCompCount ==
        (FThreadSafeStaticStat<FStat_STAT_DynamicPSysCompCount>)0x0) {
      pFVar30 = ::FName::FName(&local_1d0,"STAT_DynamicPSysCompCount");
      FVar31 = (FThreadSafeStaticStat<FStat_STAT_DynamicPSysCompCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicPSysCompCount,*pFVar30,
                          L"DynPSysComp Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                          L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar56 = *(FName *)FVar31;
    if (((FVar56 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar32 == (FThreadStats *)0x0) {
        pFVar33 = FThreadStatsPool::Get();
        pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
      }
      local_288.NameAndInfo.Number = FVar56.Number & 0xffffafff | 0xa000;
      local_288.StatData.Pad[0] = '\x01';
      local_288.StatData.Pad[1] = '\0';
      local_288.StatData.Pad[2] = '\0';
      local_288.StatData.Pad[3] = '\0';
      local_288.StatData.Pad[4] = '\0';
      local_288.StatData.Pad[5] = '\0';
      local_288.StatData.Pad[6] = '\0';
      local_288.StatData.Pad[7] = '\0';
      local_2a0 = FVar56;
      local_288.NameAndInfo.Index.Value = FVar56.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar32,&local_288);
      FStatsTrace::Add(&local_2a0,1);
      if (pFVar32->ScopeCount == 0) {
        FThreadStats::Flush(pFVar32,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar32,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar34 = StatPtr_STAT_DynamicPSysCompMem;
      if (StatPtr_STAT_DynamicPSysCompMem ==
          (FThreadSafeStaticStat<FStat_STAT_DynamicPSysCompMem>)0x0) {
        pFVar30 = ::FName::FName(&local_1c8,"STAT_DynamicPSysCompMem");
        FVar34 = (FThreadSafeStaticStat<FStat_STAT_DynamicPSysCompMem>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicPSysCompMem,*pFVar30,
                            L"DynPSysComp Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar56 = *(FName *)FVar34;
      if (((FVar56 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar32 == (FThreadStats *)0x0) {
          pFVar33 = FThreadStatsPool::Get();
          pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
        }
        local_278.NameAndInfo.Number = FVar56.Number & 0xffffafff | 0xa000;
        local_278.StatData.Pad[0] = 0xb0;
        local_278.StatData.Pad[1] = '\0';
        local_278.StatData.Pad[2] = '\0';
        local_278.StatData.Pad[3] = '\0';
        local_278.StatData.Pad[4] = '\0';
        local_278.StatData.Pad[5] = '\0';
        local_278.StatData.Pad[6] = '\0';
        local_278.StatData.Pad[7] = '\0';
        local_298 = FVar56;
        local_278.NameAndInfo.Index.Value = FVar56.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar32,&local_278);
        FStatsTrace::Add(&local_298,0xb0);
        if (pFVar32->ScopeCount == 0) {
          FThreadStats::Flush(pFVar32,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar32,false,false);
        }
      }
    }
  }
  pUVar6 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar6 != (UParticleSystem *)0x0) {
    auVar65 = *(undefined1 (*) [16])&this->field_0x200;
    local_198 = *(undefined1 (*) [16])&this->field_0x1f0;
    dVar16 = *(double *)&this->field_0x208;
    dVar12 = (pUVar6->MacroUVPosition).field0_0x0._s_0.X * *(double *)&this->field_0x230;
    dVar13 = (pUVar6->MacroUVPosition).field0_0x0._s_0.Y * *(double *)&this->field_0x238;
    uVar66 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar14 = (pUVar6->MacroUVPosition).field0_0x0._s_0.Z * *(double *)&this->field_0x240;
    dVar15 = *(double *)&this->field_0x248 * 0.0;
    auVar60 = blendpd(local_198,auVar65,2);
    auVar68._8_4_ = SUB84(dVar13,0);
    auVar68._0_8_ = dVar12;
    auVar68._12_4_ = uVar66;
    dVar10 = auVar65._0_8_;
    auVar69._0_8_ = auVar68._8_8_ * local_198._0_8_ - local_198._8_8_ * dVar12;
    auVar69._8_8_ = dVar14 * local_198._8_8_ - dVar10 * dVar13;
    auVar70._8_4_ = SUB84(dVar13,0);
    auVar70._0_8_ = dVar12;
    auVar70._12_4_ = uVar66;
    auVar58._8_4_ = SUB84(dVar15,0);
    auVar58._0_8_ = dVar14;
    auVar58._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    auVar58 = blendpd(auVar70,auVar58,2);
    auVar59._0_8_ = auVar58._0_8_ * dVar10 - auVar60._0_8_ * dVar14;
    auVar59._8_8_ = auVar58._8_8_ * auVar65._8_8_ - auVar60._8_8_ * dVar15;
    auVar58 = *(undefined1 (*) [16])&this->field_0x1f0;
    auVar70 = blendpd(auVar69,auVar59,2);
    auVar71._0_8_ = auVar70._0_8_ + auVar70._0_8_;
    auVar71._8_8_ = auVar70._8_8_ + auVar70._8_8_;
    dVar15 = auVar69._8_8_ + auVar69._8_8_;
    dVar11 = auVar59._0_8_ + auVar59._0_8_;
    uVar66 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar63._8_4_ = SUB84(dVar11,0);
    auVar63._0_8_ = dVar15;
    auVar63._12_4_ = uVar66;
    auVar61._8_4_ = SUB84(dVar11,0);
    auVar61._0_8_ = dVar15;
    auVar61._12_4_ = uVar66;
    auVar70 = blendpd(auVar61,auVar71,2);
    auVar64._0_8_ = auVar63._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar15;
    auVar64._8_8_ = auVar71._0_8_ * auVar58._8_8_ - dVar10 * dVar11;
    auVar60._8_4_ = SUB84(auVar64._8_8_,0);
    auVar60._0_8_ = auVar64._0_8_;
    auVar60._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
    auVar58 = blendpd(auVar58,auVar65,2);
    auVar62._0_8_ = auVar70._0_8_ * dVar10 - auVar58._0_8_ * auVar71._0_8_;
    auVar62._8_8_ = auVar70._8_8_ * auVar65._8_8_ - auVar58._8_8_ * auVar71._8_8_;
    auVar65 = blendpd(auVar64,auVar62,2);
    local_1b0 = (FName)(auVar71._0_8_ * dVar16 + dVar14 + auVar65._0_8_ +
                       *(double *)&this->field_0x220);
    dVar10 = dVar15 * dVar16 + dVar12 + auVar60._8_8_ + *(double *)&this->field_0x210;
    dVar15 = dVar11 * dVar16 + dVar13 + auVar62._0_8_ + *(double *)&this->field_0x218;
    uVar66 = SUB84(dVar15,0);
    uVar67 = (undefined4)((ulonglong)dVar15 >> 0x20);
    auVar65._8_4_ = uVar66;
    auVar65._0_8_ = dVar10;
    auVar65._12_4_ = uVar67;
    *(undefined1 (*) [16])((longlong)FVar47 + 0x78) = auVar65;
    *(FName *)((longlong)FVar47 + 0x88) = local_1b0;
    local_1c0._8_4_ = uVar66;
    local_1c0._0_8_ = dVar10;
    local_1c0._12_4_ = uVar67;
    (((FName *)((longlong)FVar47 + 0x90))->ComparisonIndex).Value =
         (uint)((this->Template).field0_0x0.DebugPtr)->MacroUVRadius;
  }
  pUVar28 = *(UWorld **)&this->field_0xb0;
  pUVar6 = (this->Template).field0_0x0.DebugPtr;
  local_268 = FVar54;
  if ((((pUVar28 != (UWorld *)0x0) ||
       (pUVar28 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar28 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    local_268 = (FName)FParticlePerfStatsManager::GetWorldPerfStats(pUVar28);
  }
  FStack_260 = FVar54;
  if (((pUVar6 != (UParticleSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    FStack_260 = (FName)FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar6);
  }
  local_258 = FVar54;
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    local_258 = (FName)FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  *(FName *)((longlong)FVar47 + 0x98) = local_268;
  *(FName *)((longlong)FVar47 + 0xa0) = FStack_260;
  *(FName *)((longlong)FVar47 + 0xa8) = local_258;
  uVar5 = (this->ReplayState).Value;
  uVar23 = 0;
  if (uVar5 != '\x02') {
    FVar56 = FVar54;
    if (uVar5 == '\x01') {
      TVar38 = FThreadSafeStaticStatInner<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Capture,1>
               ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Capture,1>
                            *)&StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Capture);
      local_248.Impl._Line = 0x582;
      local_248.Impl._Column = 4;
      local_248.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
      ;
      local_300.StatId.ComparisonIndex.Value = 0;
      local_300.StatId.Number = 0;
      local_300.EmittedEvent = 0;
      local_248.Impl._Function =
           "class FParticleDynamicData *__cdecl UParticleSystemComponent::CreateDynamicData(enum ERHIFeatureLevel::Type)"
      ;
      FCycleCounter::Start
                (&local_300,*(TStatIdData **)&(TVar38.StatIdPtr)->Name,CycleStat|ClearEveryFrame,
                 false,&local_248);
      if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
        WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
      }
      bVar20 = IsInGameThread();
      if ((!bVar20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                              ,0x584,L""), bVar20)) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FParticleDynamicData *)(*pcVar9)();
        return pFVar29;
      }
      pUVar36 = FindReplayClipForIDNumber(this,this->ReplayClipIDNumber);
      if (pUVar36 == (UParticleSystemReplay *)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar39 = Z_Construct_UClass_UParticleSystemReplay_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_178,pUVar39);
        local_178._8_8_ = this;
        pUVar36 = (UParticleSystemReplay *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_178);
        if (local_178._64_8_ != 0) {
          plVar44 = (longlong *)(local_178 + 0x50);
          if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
            plVar44 = (longlong *)local_178._104_8_;
          }
          (**(code **)(*plVar44 + 0x10))();
        }
        pTVar3 = &this->ReplayClips;
        pUVar36->ClipIDNumber = this->ReplayClipIDNumber;
        local_308 = pUVar36;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar36);
        }
        pFVar48 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar48 <= (FScriptContainerElement *)&local_308) &&
            ((FScriptContainerElement *)&local_308 <
             pFVar48 + (longlong)(this->ReplayClips).ArrayMax * 8)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          pFVar29 = (FParticleDynamicData *)(*pcVar9)();
          return pFVar29;
        }
        iVar25 = (this->ReplayClips).ArrayNum;
        piVar2 = &(this->ReplayClips).ArrayMax;
        if (iVar25 == *piVar2) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->ReplayClips).ArrayNum = iVar25 + 1;
        *(UParticleSystemReplay **)((pTVar3->AllocatorInstance).Data + (longlong)iVar25 * 8) =
             local_308;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_308 != (UParticleSystemReplay *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_308);
        }
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      }
      uVar24 = (pUVar36->Frames).ArrayNum;
      piVar2 = &(pUVar36->Frames).ArrayMax;
      uVar26 = uVar24;
      if (uVar24 == *piVar2) {
        uVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pUVar36->Frames).AllocatorInstance,piVar2);
        (pUVar36->Frames).ArrayNum = uVar26;
      }
      (pUVar36->Frames).ArrayNum = uVar26 + 1;
      uVar27 = uVar23;
      if ((int)uVar26 < (int)(uVar26 + 1)) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FParticleDynamicData *)(*pcVar9)();
        return pFVar29;
      }
      pFVar48 = (pUVar36->Frames).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10;
      if (pFVar48 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)pFVar48 = 0;
        *(undefined8 *)(pFVar48 + 8) = 0;
      }
      uVar26 = uVar23;
      if ((int)uVar24 < (pUVar36->Frames).ArrayNum) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FParticleDynamicData *)(*pcVar9)();
        return pFVar29;
      }
      FVar56 = (FName)((longlong)(int)uVar24 * 0x10 +
                      (longlong)(pUVar36->Frames).AllocatorInstance.Data);
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      if ((local_300.EmittedEvent & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_300.EmittedEvent & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_300.EmittedEvent & 4) != 0) {
        FThreadStats::AddMessage(local_300.StatId,CycleScopeEnd);
      }
      local_300.EmittedEvent = '\0';
      FVar47 = local_328;
    }
    if (this->bForcedInActive == '\0') {
      FVar57 = (FName)((longlong)FVar47 + 8);
      uVar24 = *(uint *)((longlong)FVar47 + 0x74);
      (((FName *)((longlong)FVar47 + 0x70))->ComparisonIndex).Value = 0;
      if ((int)uVar24 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                  (8,8,0,(ForElementType<FDynamicEmitterDataBase_*> *)FVar57,0,
                   (int *)((longlong)FVar47 + 0x74));
      }
      uVar24 = (this->EmitterInstances).ArrayNum;
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
      if ((int)*(uint *)((longlong)FVar47 + 0x74) < (int)uVar24) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                  (8,8,uVar24,(ForElementType<FDynamicEmitterDataBase_*> *)FVar57,
                   (((FName *)((longlong)FVar47 + 0x70))->ComparisonIndex).Value,
                   (int *)((longlong)FVar47 + 0x74));
      }
      FVar37 = FVar47;
      FVar50.Value = uVar23;
      if (0 < (this->EmitterInstances).ArrayNum) {
        local_320 = (FDynamicEmitterReplayDataBase *)0x0;
        FVar41 = FVar54;
        uVar24 = 0;
        do {
          pFVar53 = local_320;
          FVar46 = FVar54.ComparisonIndex.Value;
          FVar50.Value = FVar41.ComparisonIndex.Value.Value + 1;
          if (*(longlong *)&this->field_0x530 == 0) {
            FVar50.Value = FVar41.ComparisonIndex.Value.Value;
          }
          local_330 = 0;
          uVar26 = uVar23;
          if ((int)FVar46.Value < (this->EmitterInstances).ArrayNum) {
            uVar26 = ~FVar46.Value >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             FVar46.Value = uVar24, bVar20)) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FParticleDynamicData *)(*pcVar9)();
            return pFVar29;
          }
          plVar44 = *(longlong **)
                     ((this->EmitterInstances).AllocatorInstance.Data + (longlong)pFVar53);
          if (plVar44 != (longlong *)0x0) {
            this_00 = (UParticleEmitter *)plVar44[1];
            local_2b0.ComparisonIndex.Value = 0;
            local_2b0.Number = 0;
            bVar19 = false;
            bVar20 = false;
            FVar40 = StatPtr_STAT_EmittersStatGroupTester;
            if (StatPtr_STAT_EmittersStatGroupTester ==
                (FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester>)0x0) {
              pFVar30 = ::FName::FName(&local_1f8,"STAT_EmittersStatGroupTester");
              FVar40 = (FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EmittersStatGroupTester
                                  ,*pFVar30,L"STAT_EmittersStatGroupTester","STATGROUP_Emitters",
                                  "STATCAT_Advanced",L"Emitters",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            if ((((int)*(undefined8 *)FVar40 == 0) &&
                ((int)((ulonglong)*(undefined8 *)FVar40 >> 0x20) == 0)) ||
               (FThreadStats::bPrimaryEnable == false)) {
              pTVar51 = &TStatId::TStatId_NAME_None;
            }
            else {
              TVar7 = ((this_00->StatID).StatIdPtr)->Name;
              if ((TVar7._0_4_ == 0) && (TVar7._4_4_ == 0)) {
                UParticleEmitter::CreateStatID(this_00);
              }
              pTVar51 = (this_00->StatID).StatIdPtr;
            }
            if (((SUB84(pTVar51->Name,0) == 0) && (SUB84(pTVar51->Name,4) == 0)) ||
               (FThreadStats::bPrimaryEnable == false)) {
LAB_14816d0b1:
              bVar17 = false;
              FVar54 = local_2b0;
            }
            else {
              FVar54 = *(FName *)&pTVar51->Name;
              FVar46 = FVar54.ComparisonIndex.Value;
              uVar26 = FVar54.Number;
              if ((FVar46.Value == 0) && (uVar26 == 0)) goto LAB_14816d0b1;
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_2dc.Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_2dc._s_0,(pTVar51->StatDescriptionAnsi).Ptr);
                bVar19 = false;
                bVar20 = true;
                if (-1 < CpuChannel->Enabled) {
                  local_2d0.ComparisonIndex.Value = FVar46.Value;
                  local_2d0.Number = uVar26;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_2d0,(pTVar51->StatDescriptionWide).Ptr,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleEmitterInstances.h"
                             ,0x31c);
                  bVar19 = true;
                  bVar20 = true;
                }
              }
              if (FThreadStats::bPrimaryEnable == false) goto LAB_14816d0b1;
              local_2c8 = FVar46.Value;
              uStack_2c4 = uVar26;
              local_2b0 = FVar54;
              FThreadStats::AddMessage(FVar54,CycleScopeStart);
              bVar17 = true;
            }
            local_330 = (**(code **)(*plVar44 + 0x120))(plVar44,0,local_318);
            if (local_330 != 0) {
              TVar38 = UParticleEmitter::GetStatIDRT
                                 ((UParticleEmitter *)plVar44[1],SUB81(local_1f0,0));
              *(TAtomic<FMinimalName> *)(local_330 + 8) = (TVar38.StatIdPtr)->Name;
              *(uint *)(local_330 + 0x10) = *(uint *)(local_330 + 0x10) | 2;
              FVar37 = *(FName *)((longlong)FVar47 + 0x68);
              FVar41 = FVar57;
              if (FVar37 != (FName)0x0) {
                FVar41 = FVar37;
              }
              if ((ulonglong)FVar41 <= &local_330) {
                FVar41 = FVar57;
                if (FVar37 != (FName)0x0) {
                  FVar41 = FVar37;
                }
                if ((&local_330 <
                     (longlong *)
                     ((longlong)FVar41 + (longlong)(int)*(uint *)((longlong)FVar47 + 0x74) * 8)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  pFVar29 = (FParticleDynamicData *)(*pcVar9)();
                  return pFVar29;
                }
              }
              uVar26 = (((FName *)((longlong)FVar47 + 0x70))->ComparisonIndex).Value;
              if (uVar26 == *(uint *)((longlong)FVar47 + 0x74)) {
                uVar26 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                                   (0x808,(ForElementType<FDynamicEmitterDataBase_*> *)FVar57,
                                    (int *)((longlong)FVar47 + 0x74));
              }
              (((FName *)((longlong)FVar47 + 0x70))->ComparisonIndex).Value = uVar26 + 1;
              FVar37 = FVar57;
              if (*(FName *)((longlong)FVar47 + 0x68) != (FName)0x0) {
                FVar37 = *(FName *)((longlong)FVar47 + 0x68);
              }
              *(longlong *)((longlong)FVar37 + (longlong)(int)uVar26 * 8) = local_330;
              *(uint *)(local_330 + 0x14) = uVar24;
              *(uint *)(local_330 + 0x14) = uVar24;
              if ((this->ReplayState).Value == '\x01') {
                TVar38 = FThreadSafeStaticStatInner<FStat_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture,1>
                         ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture,1>
                                      *)&
                                        StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture
                                    );
                local_228.Impl._Line = 0x5d6;
                local_228.Impl._Column = 8;
                local_228.Impl._File =
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                ;
                local_2f0.StatId.ComparisonIndex.Value = 0;
                local_2f0.StatId.Number = 0;
                local_228.Impl._Function =
                     "class FParticleDynamicData *__cdecl UParticleSystemComponent::CreateDynamicData(enum ERHIFeatureLevel::Type)"
                ;
                local_2f0.EmittedEvent = 0;
                FCycleCounter::Start
                          (&local_2f0,*(TStatIdData **)&(TVar38.StatIdPtr)->Name,
                           CycleStat|ClearEveryFrame,false,&local_228);
                local_290 = (**(code **)(*plVar44 + 0x128))(plVar44);
                if ((local_290 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NewEmitterReplayData != 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                        ,0x5da,L""), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  pFVar29 = (FParticleDynamicData *)(*pcVar9)();
                  return pFVar29;
                }
                if ((FVar56 == (FName)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NewReplayFrame != 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                        ,0x5e1,L""), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  pFVar29 = (FParticleDynamicData *)(*pcVar9)();
                  return pFVar29;
                }
                uVar26 = *(uint *)((longlong)FVar56 + 8);
                lVar55 = (longlong)(int)uVar26;
                uVar27 = uVar26;
                if (uVar26 == *(uint *)((longlong)FVar56 + 0xc)) {
                  uVar27 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,(ForAnyElementType *)FVar56,
                                      (int *)((longlong)FVar56 + 0xc));
                }
                *(uint *)((longlong)FVar56 + 8) = uVar27 + 1;
                uVar43 = uVar23;
                if ((int)uVar27 < (int)(uVar27 + 1)) {
                  uVar43 = ~uVar27 >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  pFVar29 = (FParticleDynamicData *)(*pcVar9)();
                  return pFVar29;
                }
                puVar49 = (undefined8 *)((longlong)(int)uVar27 * 0x10 + *(longlong *)FVar56);
                if (puVar49 != (undefined8 *)0x0) {
                  *puVar49 = 0;
                  puVar49[1] = 0;
                }
                uVar27 = uVar23;
                if ((int)uVar26 < *(int *)((longlong)FVar56 + 8)) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  pFVar29 = (FParticleDynamicData *)(*pcVar9)();
                  return pFVar29;
                }
                lVar8 = *(longlong *)FVar56;
                *(undefined4 *)(lVar8 + lVar55 * 0x10) = *(undefined4 *)(local_290 + 8);
                *(uint *)(lVar8 + 4 + lVar55 * 0x10) = uVar24;
                *(longlong *)(lVar8 + 8 + lVar55 * 0x10) = local_290;
                if ((local_2f0.EmittedEvent & 1) != 0) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                if ((local_2f0.EmittedEvent & 2) != 0) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if ((local_2f0.EmittedEvent & 4) != 0) {
                  FThreadStats::AddMessage(local_2f0.StatId,CycleScopeEnd);
                }
                local_2f0.EmittedEvent = '\0';
              }
            }
            if (bVar20) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar19) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            FVar46.Value = uVar24;
            if (bVar17) {
              FThreadStats::AddMessage(FVar54,CycleScopeEnd);
            }
          }
          FVar41.Number = 0;
          FVar41.ComparisonIndex.Value = FVar50.Value;
          FVar54.ComparisonIndex.Value = FVar46.Value + 1;
          FVar54.Number = 0;
          local_320 = (FDynamicEmitterReplayDataBase *)((longlong)local_320 + 8);
          FVar37 = local_328;
          uVar24 = FVar54.ComparisonIndex.Value;
        } while ((int)FVar54.ComparisonIndex.Value < (this->EmitterInstances).ArrayNum);
      }
      FVar47 = FVar37;
      lVar55 = *(longlong *)&this->field_0x530;
      if ((lVar55 != 0) && (*(uint *)(lVar55 + 0x288) != FVar50.Value)) {
        uStack_d4 = local_19c;
        local_f8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UParticleSystemComponent::CreateDynamicData'::__l105::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        local_d0 = (undefined ***)0x0;
        local_e8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UParticleSystemComponent::CreateDynamicData'::`105'::<lambda_1>,1,0>
                    ::_vftable_;
        lStack_e0 = lVar55;
        local_d8 = FVar50.Value;
        this_01 = FRenderCommandList::GetInstanceTLS();
        if (this_01 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UParticleSystemComponent::CreateDynamicData_::__l105::TSTR_UpdateMeshEmitterLODIndicesCmd1526>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
        }
        else {
          this_02 = FRenderCommandList::GetRenderThread(this_01);
          local_a8._4_4_ = uStack_d4;
          local_a8._0_4_ = local_d8;
          local_c8._0_8_ = local_f8[0];
          local_a0 = local_d0;
          local_b8 = local_e8;
          lStack_b0 = lStack_e0;
          local_f8[0] = (code *)0x0;
          local_98 = 2;
          pFVar42 = (FRenderCommandTag *)
                    TRenderCommandTag<`UParticleSystemComponent::CreateDynamicData'::__l105::TSTR_UpdateMeshEmitterLODIndicesCmd1526>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_c8,pFVar42);
          uVar52 = (ulonglong)local_98;
          if ((2 < uVar52) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FParticleDynamicData *)(*pcVar9)();
            return pFVar29;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar52] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_c8._0_8_ != (code *)0x0) {
              pppuVar45 = (undefined ***)(local_c8 + 0x10);
              if (local_a0 != (undefined ***)0x0) {
                pppuVar45 = local_a0;
              }
              (*(code *)(*pppuVar45)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar52])(local_c8);
          }
        }
        if (local_f8[0] != (code *)0x0) {
          pppuVar45 = &local_e8;
          if (local_d0 != (undefined ***)0x0) {
            pppuVar45 = local_d0;
          }
          (*(code *)(*pppuVar45)[2])();
        }
      }
    }
    goto LAB_14816d5a8;
  }
  FVar35 = StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Replay;
  if (StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Replay ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Replay>)0x0) {
    pFVar30 = ::FName::FName(local_208,"STAT_ParticleSystemComponent_CreateDynamicData_Replay");
    FVar35 = (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Replay>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Replay,*pFVar30,
                        L"ParticleComponent CreateDynamicData Replay GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_338 = *(FName *)FVar35;
  bVar20 = false;
  bVar17 = false;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  bVar19 = false;
  bVar21 = false;
  if ((local_338.ComparisonIndex.Value.Value == 0) && (local_338.Number == 0)) {
LAB_14816c77c:
    bVar17 = bVar21;
    bVar20 = bVar19;
    bVar19 = false;
    local_338 = local_2c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e0._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar20 = false;
      bVar17 = true;
      bVar19 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d8.ComparisonIndex.Value = local_338.ComparisonIndex.Value.Value;
        local_2d8.Number = local_338.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d8,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x553);
        bVar20 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14816c77c;
    FThreadStats::AddMessage(local_338,CycleScopeStart);
    bVar19 = true;
  }
  pUVar36 = FindReplayClipForIDNumber(this,this->ReplayClipIDNumber);
  if (pUVar36 != (UParticleSystemReplay *)0x0) {
    uVar24 = this->ReplayFrameIndex;
    if ((-1 < (int)uVar24) && ((int)uVar24 < (pUVar36->Frames).ArrayNum)) {
      uVar26 = uVar23;
      if ((int)uVar24 < (pUVar36->Frames).ArrayNum) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FParticleDynamicData *)(*pcVar9)();
        return pFVar29;
      }
      FVar56 = local_328;
      pFVar48 = (pUVar36->Frames).AllocatorInstance.Data;
      FVar57 = (FName)((longlong)local_328 + 8);
      pFVar53 = (FDynamicEmitterReplayDataBase *)((longlong)(int)uVar24 * 0x10);
      uVar24 = *(uint *)((longlong)local_328 + 0x74);
      puVar1 = (uint *)((longlong)local_328 + 0x74);
      (((FName *)((longlong)local_328 + 0x70))->ComparisonIndex).Value = 0;
      local_320 = pFVar53;
      if ((int)uVar24 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                  (8,8,0,(ForElementType<FDynamicEmitterDataBase_*> *)FVar57,0,(int *)puVar1);
      }
      uVar24 = *(uint *)((longlong)&pFVar53->eEmitterType + (longlong)pFVar48);
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
      if ((int)*puVar1 < (int)uVar24) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                  (8,8,uVar24,(ForElementType<FDynamicEmitterDataBase_*> *)FVar57,
                   (((FName *)((longlong)FVar56 + 0x70))->ComparisonIndex).Value,(int *)puVar1);
      }
      pFVar18 = local_320;
      iVar25 = *(int *)((longlong)&pFVar53->eEmitterType + (longlong)pFVar48);
      FVar47 = local_328;
      FVar37 = FVar54;
      if (0 < iVar25) {
        do {
          FVar50 = FVar37.ComparisonIndex.Value;
          uVar24 = uVar23;
          if ((int)FVar50.Value < iVar25) {
            uVar24 = ~FVar50.Value >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FParticleDynamicData *)(*pcVar9)();
            return pFVar29;
          }
          lVar55 = *(longlong *)((longlong)&pFVar18->_padding_ + (longlong)pFVar48);
          local_320 = *(FDynamicEmitterReplayDataBase **)((longlong)FVar54 + 8 + lVar55);
          if ((local_320 == (FDynamicEmitterReplayDataBase *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurEmitterReplay != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                  ,0x568,L""), bVar21)) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FParticleDynamicData *)(*pcVar9)();
            return pFVar29;
          }
          iVar25 = *(int *)((longlong)FVar54 + 4 + lVar55);
          if ((-1 < iVar25) && (iVar25 < (this->EmitterInstances).ArrayNum)) {
            bVar21 = UActorComponent::IsOwnerSelected((UActorComponent *)this);
            uVar24 = *(uint *)((longlong)FVar54 + 4 + lVar55);
            uVar26 = uVar23;
            if ((int)uVar24 < (this->EmitterInstances).ArrayNum) {
              uVar26 = ~uVar24 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              pFVar29 = (FParticleDynamicData *)(*pcVar9)();
              return pFVar29;
            }
            local_310 = CreateDynamicDataFromReplay
                                  (*(FParticleEmitterInstance **)
                                    ((this->EmitterInstances).AllocatorInstance.Data +
                                    (longlong)(int)uVar24 * 8),local_320,bVar21,local_318);
            if (local_310 != (FDynamicEmitterDataBase *)0x0) {
              FVar47 = *(FName *)((longlong)FVar56 + 0x68);
              puVar1 = (uint *)((longlong)FVar56 + 0x74);
              FVar37 = FVar57;
              if (FVar47 != (FName)0x0) {
                FVar37 = FVar47;
              }
              if ((ulonglong)FVar37 <= &local_310) {
                FVar37 = FVar57;
                if (FVar47 != (FName)0x0) {
                  FVar37 = FVar47;
                }
                if ((&local_310 <
                     (FDynamicEmitterDataBase **)((longlong)FVar37 + (longlong)(int)*puVar1 * 8)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  pFVar29 = (FParticleDynamicData *)(*pcVar9)();
                  return pFVar29;
                }
              }
              uVar24 = (((FName *)((longlong)FVar56 + 0x70))->ComparisonIndex).Value;
              if (uVar24 == *puVar1) {
                uVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                                   (0x808,(ForElementType<FDynamicEmitterDataBase_*> *)FVar57,
                                    (int *)puVar1);
              }
              (((FName *)((longlong)FVar56 + 0x70))->ComparisonIndex).Value = uVar24 + 1;
              FVar47 = FVar57;
              if (*(FName *)((longlong)FVar56 + 0x68) != (FName)0x0) {
                FVar47 = *(FName *)((longlong)FVar56 + 0x68);
              }
              *(FDynamicEmitterDataBase **)((longlong)FVar47 + (longlong)(int)uVar24 * 8) =
                   local_310;
              local_310->EmitterIndex = FVar50.Value;
            }
          }
          FVar37.ComparisonIndex.Value = FVar50.Value + 1;
          FVar37.Number = 0;
          FVar54 = (FName)((longlong)FVar54 + 0x10);
          iVar25 = *(int *)((longlong)&pFVar18->eEmitterType + (longlong)pFVar48);
          FVar47 = local_328;
        } while ((int)FVar37.ComparisonIndex.Value < iVar25);
      }
    }
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(local_338,CycleScopeEnd);
  }
LAB_14816d5a8:
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(&local_1e8);
  return (FParticleDynamicData *)FVar47;
}

// CreateDynamicDataFromReplay @ 14816d610

/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicEmitterDataBase * __cdecl
UParticleSystemComponent::CreateDynamicDataFromReplay
          (FParticleEmitterInstance *param_1,FDynamicEmitterReplayDataBase *param_2,bool param_3,
          Type param_4)

{
  int *piVar1;
  uchar **ppuVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  EDynamicEmitterType EVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar *_Src;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  FDynamicEmitterDataBase *pFVar11;
  FDynamicSpriteEmitterData *pFVar12;
  FDynamicMeshEmitterData *this;
  FDynamicSpriteEmitterData *pFVar13;
  TStatId TVar14;
  undefined1 local_res10 [8];
  FName local_38;
  byte local_30;
  
  if ((param_2 == (FDynamicEmitterReplayDataBase *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("EmitterReplayData != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x4a1,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar11 = (FDynamicEmitterDataBase *)(*pcVar9)();
    return pFVar11;
  }
  FScopeCycleCounterEmitter::FScopeCycleCounterEmitter<FParticleEmitterInstance>
            ((FScopeCycleCounterEmitter *)&local_38,param_1);
  EVar4 = param_2->eEmitterType;
  pFVar13 = (FDynamicSpriteEmitterData *)0x0;
  pFVar12 = pFVar13;
  if (EVar4 == DET_Sprite) {
    pFVar13 = FDynamicEmitterDataBase::operator_new(0x1b0);
    if (pFVar13 != (FDynamicSpriteEmitterData *)0x0) {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase
                ((FDynamicEmitterDataBase *)pFVar13,
                 (param_1->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr);
      *(uint *)&pFVar13->_padding_ = (uint)pFVar13->_padding_ & 0xfffffffe;
      pFVar13->_padding_ = (longlong)&___7FDynamicSpriteEmitterData__6B_;
      pFVar13->_padding_ = 0;
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
                ((FDynamicSpriteEmitterReplayDataBase *)&pFVar13->Source);
      *(undefined ***)&pFVar13->Source = &___7FDynamicSpriteEmitterReplayData__6B_;
      *(undefined8 *)&(pFVar13->UniformParameters).AxisLockRight.field0_0x0 = 0;
      (pFVar13->UniformParameters).AxisLockRight.field0_0x0._s_0.Z = 0.0;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).AxisLockUp.field0_0x0 + 4) = 0;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).TangentSelector.field0_0x0 + 4) = 0;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).NormalsSphereCenter.field0_0x0 + 4) =
           0;
      *(undefined8 *)
       ((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 4) = 0;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).SubImageSize.field0_0x0 + 4) = 0;
      *(undefined8 *)&(pFVar13->UniformParameters).MacroUVParameters.field0_0x0 = 0;
      (pFVar13->UniformParameters).MacroUVParameters.field0_0x0._s_0.Z = 0.0;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).AxisLockRight.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).AxisLockUp.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).TangentSelector.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)((longlong)&(pFVar13->UniformParameters).NormalsSphereCenter.field0_0x0 + 0xc)
           = 0x3f800000;
      *(undefined8 *)
       ((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 0xc) =
           0x3f800000;
      (pFVar13->UniformParameters).SubImageSize.field0_0x0._s_0.W = 1.0;
      (pFVar13->UniformParameters).MacroUVParameters.field0_0x0._s_0.W = 1.0;
      pFVar12 = pFVar13;
    }
    FDynamicSpriteEmitterReplayDataBase::operator=
              ((FDynamicSpriteEmitterReplayDataBase *)&pFVar12->Source,
               (FDynamicSpriteEmitterReplayDataBase *)param_2);
    FDynamicSpriteEmitterData::Init(pFVar12,param_3);
  }
  else if (EVar4 == DET_Mesh) {
    this = ::operator_new(0x180);
    if (this != (FDynamicMeshEmitterData *)0x0) {
      pFVar12 = (FDynamicSpriteEmitterData *)
                FDynamicMeshEmitterData::FDynamicMeshEmitterData
                          (this,(param_1->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr);
    }
    FDynamicMeshEmitterReplayData::operator=
              ((FDynamicMeshEmitterReplayData *)&pFVar12->Source,
               (FDynamicMeshEmitterReplayData *)param_2);
    if (param_1 == (FParticleEmitterInstance *)0x0) goto LAB_14816dc5e;
    lVar8 = param_1[1]._padding_;
    FDynamicMeshEmitterData::Init
              ((FDynamicMeshEmitterData *)pFVar12,param_3,(FParticleMeshEmitterInstance *)param_1,
               *(UStaticMesh **)(lVar8 + 0x30),(bool)(*(byte *)(lVar8 + 0x44) & 1),
               *(float *)(lVar8 + 0x40),param_4);
  }
  else if (EVar4 == DET_Beam2) {
    pFVar12 = FDynamicEmitterDataBase::operator_new(0x198);
    if (pFVar12 != (FDynamicSpriteEmitterData *)0x0) {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase
                ((FDynamicEmitterDataBase *)pFVar12,
                 (param_1->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr);
      *(uint *)&pFVar12->_padding_ = (uint)pFVar12->_padding_ & 0xfffffffe;
      pFVar12->_padding_ = (longlong)&___7FDynamicBeam2EmitterData__6B_;
      pFVar12->_padding_ = 0;
      FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData
                ((FDynamicBeam2EmitterReplayData *)&pFVar12->Source);
      (pFVar12->UniformParameters).LWCTile.field0_0x0._s_0.X = -NAN;
      pFVar13 = pFVar12;
    }
    FDynamicSpriteEmitterReplayDataBase::operator=
              ((FDynamicSpriteEmitterReplayDataBase *)&pFVar13->Source,
               (FDynamicSpriteEmitterReplayDataBase *)param_2);
    ppuVar2 = &param_2[2].DataContainer.ParticleData;
    (pFVar13->UniformParameters).AxisLockRight.field0_0x0._s_0.X =
         (float)param_2[2].DataContainer.MemBlockSize;
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)&(pFVar13->UniformParameters).AxisLockUp;
    (pFVar13->UniformParameters).AxisLockRight.field0_0x0._s_0.Y =
         (float)param_2[2].DataContainer.ParticleDataNumBytes;
    (pFVar13->UniformParameters).AxisLockRight.field0_0x0._s_0.Z =
         (float)param_2[2].DataContainer.ParticleIndicesNumShorts;
    if (pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)ppuVar2) {
      iVar6 = *(int *)&param_2[2].DataContainer.ParticleIndices;
      piVar1 = &((TArray<int,TSizedDefaultAllocator<32>_> *)&(pFVar13->UniformParameters).AxisLockUp
                )->ArrayMax;
      iVar7 = *piVar1;
      _Src = *ppuVar2;
      ((TArray<int,TSizedDefaultAllocator<32>_> *)&(pFVar13->UniformParameters).AxisLockUp)->
      ArrayNum = iVar6;
      if ((iVar6 == 0) && (iVar7 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar6,iVar7,(ForAnyElementType *)pTVar3,iVar6,piVar1);
        if (iVar6 != 0) {
          memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar6 << 2);
        }
      }
    }
    (pFVar13->UniformParameters).TangentSelector.field0_0x0._s_0.X =
         param_2[2].Scale.field0_0x0._s_0.X;
    (pFVar13->UniformParameters).TangentSelector.field0_0x0._s_0.Y =
         param_2[2].Scale.field0_0x0._s_0.Y;
    (pFVar13->UniformParameters).TangentSelector.field0_0x0._s_0.Z =
         param_2[2].Scale.field0_0x0._s_0.Z;
    (pFVar13->UniformParameters).TangentSelector.field0_0x0._s_0.W = (float)param_2[2].SortMode;
    (pFVar13->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.X =
         *(float *)&param_2[2].MacroUVOverride;
    (pFVar13->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Y =
         param_2[2].MacroUVOverride.Radius;
    (pFVar13->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Z =
         param_2[2].MacroUVOverride.Position.field0_0x0._s_0.X;
    (pFVar13->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.W =
         param_2[2].MacroUVOverride.Position.field0_0x0._s_0.Y;
    (pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.X =
         param_2[2].MacroUVOverride.Position.field0_0x0._s_0.Z;
    *(undefined1 *)
     ((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 4) =
         param_2[2].field_0x5c;
    *(undefined1 *)
     ((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 5) =
         param_2[2].field_0x5d;
    *(undefined1 *)
     ((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 6) =
         param_2[2].field_0x5e;
    *(undefined1 *)
     ((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 7) =
         param_2[2].field_0x5f;
    *(bool *)((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 8) =
         SUB81(param_2[3]._padding_,0);
    *(bool *)((longlong)&(pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 9) =
         *(bool *)((longlong)&param_2[3]._padding_ + 1);
    (pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.W =
         *(float *)((longlong)&param_2[3]._padding_ + 4);
    (pFVar13->UniformParameters).SubImageSize.field0_0x0._s_0.X = (float)param_2[3].eEmitterType;
    (pFVar13->UniformParameters).SubImageSize.field0_0x0._s_0.Y =
         (float)param_2[3].ActiveParticleCount;
    (pFVar13->UniformParameters).SubImageSize.field0_0x0._s_0.Z = (float)param_2[3].ParticleStride;
    (pFVar13->UniformParameters).SubImageSize.field0_0x0._s_0.W = *(float *)&param_2[3].field_0x14;
    *(undefined8 *)&(pFVar13->UniformParameters).CameraFacingBlend.field0_0x0 =
         *(undefined8 *)&param_2[3].DataContainer;
    (pFVar13->UniformParameters).CameraFacingBlend.field0_0x0._s_0.Z =
         (float)param_2[3].DataContainer.ParticleIndicesNumShorts;
    (pFVar13->UniformParameters).RemoveHMDRoll = *(float *)&param_2[3].DataContainer.field_0xc;
    (pFVar13->UniformParameters).MacroUVParameters.field0_0x0._s_0.X =
         *(float *)&param_2[3].DataContainer.ParticleData;
    (pFVar13->UniformParameters).MacroUVParameters.field0_0x0._s_0.Y =
         *(float *)((longlong)&param_2[3].DataContainer.ParticleData + 4);
    (pFVar13->UniformParameters).MacroUVParameters.field0_0x0._s_0.Z =
         *(float *)&param_2[3].DataContainer.ParticleIndices;
    (pFVar13->UniformParameters).MacroUVParameters.field0_0x0._s_0.W =
         *(float *)((longlong)&param_2[3].DataContainer.ParticleIndices + 4);
    *(uchar *)&(pFVar13->UniformParameters).RotationScale = *(uchar *)&param_2[3].Scale.field0_0x0;
    (pFVar13->UniformParameters).RotationBias = param_2[3].Scale.field0_0x0._s_0.Y;
    *(bool *)&(pFVar13->UniformParameters).NormalsType =
         *(bool *)((longlong)&param_2[3].Scale.field0_0x0 + 8);
    *(bool *)((longlong)&(pFVar13->UniformParameters).NormalsType + 1) =
         *(bool *)((longlong)&param_2[3].Scale.field0_0x0 + 9);
    *(bool *)((longlong)&(pFVar13->UniformParameters).NormalsType + 2) =
         *(bool *)((longlong)&param_2[3].Scale.field0_0x0 + 10);
    *(bool *)((longlong)&(pFVar13->UniformParameters).NormalsType + 3) =
         *(bool *)((longlong)&param_2[3].Scale.field0_0x0 + 0xb);
    FDynamicBeam2EmitterData::Init((FDynamicBeam2EmitterData *)pFVar13,param_3);
    pFVar12 = pFVar13;
  }
  else if (EVar4 == DET_Ribbon) {
    pFVar12 = FDynamicEmitterDataBase::operator_new(0x150);
    if (pFVar12 != (FDynamicSpriteEmitterData *)0x0) {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase
                ((FDynamicEmitterDataBase *)pFVar12,
                 (param_1->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr);
      uVar5 = *(uint *)((longlong)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ +
                       4);
      *(uint *)&pFVar12->_padding_ = (uint)pFVar12->_padding_ & 0xfffffffe;
      pFVar12->_padding_ = 0;
      *(uint *)((longlong)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ + 4) =
           uVar5 & 0xffffffc2 | 2;
      pFVar12->_padding_ = (longlong)&___7FDynamicRibbonEmitterData__6B_;
      *(undefined4 *)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ = 0xffffffff;
      *(undefined4 *)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ = 0x41480000;
      *(undefined8 *)
       ((longlong)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ + 4) = 0x41c80000
      ;
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
                ((FDynamicSpriteEmitterReplayDataBase *)
                 &((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_);
      *(undefined8 *)&(pFVar12->UniformParameters).TangentSelector.field0_0x0 = 0;
      *(undefined8 *)((longlong)&(pFVar12->UniformParameters).TangentSelector.field0_0x0 + 8) = 0;
      (pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Y = 0.0;
      ((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ =
           (longlong)&___7FDynamicRibbonEmitterReplayData__6B_;
      (pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.X = -NAN;
      (pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Z = 1.4013e-45;
      *(undefined8 *)((longlong)&(pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0 + 0xc)
           = 1;
      pFVar13 = pFVar12;
    }
    FDynamicTrailsEmitterReplayData::operator=
              ((FDynamicTrailsEmitterReplayData *)
               &((FDynamicBeam2EmitterReplayData *)&pFVar13->Source)->_padding_,
               (FDynamicTrailsEmitterReplayData *)param_2);
    (pFVar13->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.X =
         param_2[2].Scale.field0_0x0._s_0.X;
    (**(code **)(pFVar13->_padding_ + 0x70))(pFVar13,param_3);
    pFVar12 = pFVar13;
  }
  else {
    if (EVar4 != DET_AnimTrail) goto LAB_14816dc5e;
    pFVar12 = FDynamicEmitterDataBase::operator_new(0x140);
    if (pFVar12 != (FDynamicSpriteEmitterData *)0x0) {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase
                ((FDynamicEmitterDataBase *)pFVar12,
                 (param_1->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr);
      uVar5 = *(uint *)((longlong)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ +
                       4);
      *(uint *)&pFVar12->_padding_ = (uint)pFVar12->_padding_ & 0xfffffffe;
      pFVar12->_padding_ = 0;
      *(uint *)((longlong)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ + 4) =
           uVar5 & 0xffffffc2 | 2;
      pFVar12->_padding_ = (longlong)&___7FDynamicAnimTrailEmitterData__6B_;
      *(undefined4 *)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ = 0xffffffff;
      *(undefined4 *)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ = 0x41480000;
      *(undefined8 *)
       ((longlong)&((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ + 4) = 0x41c80000
      ;
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
                ((FDynamicSpriteEmitterReplayDataBase *)
                 &((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_);
      *(undefined8 *)&(pFVar12->UniformParameters).TangentSelector.field0_0x0 = 0;
      *(undefined8 *)((longlong)&(pFVar12->UniformParameters).TangentSelector.field0_0x0 + 8) = 0;
      (pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Y = 0.0;
      ((FDynamicBeam2EmitterReplayData *)&pFVar12->Source)->_padding_ =
           (longlong)&___7FDynamicTrailsEmitterReplayData__6B_;
      (pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.X = -NAN;
      (pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Z = 1.4013e-45;
      (pFVar12->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.W = 1.4013e-45;
      pFVar13 = pFVar12;
    }
    FDynamicTrailsEmitterReplayData::operator=
              ((FDynamicTrailsEmitterReplayData *)
               &((FDynamicBeam2EmitterReplayData *)&pFVar13->Source)->_padding_,
               (FDynamicTrailsEmitterReplayData *)param_2);
    (**(code **)(pFVar13->_padding_ + 0x70))(pFVar13,param_3);
    pFVar12 = pFVar13;
  }
  pFVar13 = pFVar12;
  if (pFVar12 != (FDynamicSpriteEmitterData *)0x0) {
    TVar14 = UParticleEmitter::GetStatIDRT(param_1->SpriteTemplate,SUB81(local_res10,0));
    ((TStatId *)&pFVar12->_padding_)->StatIdPtr = (TStatIdData *)(TVar14.StatIdPtr)->Name;
  }
LAB_14816dc5e:
  if ((local_30 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_30 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_30 & 4) != 0) {
    FThreadStats::AddMessage(local_38,CycleScopeEnd);
  }
  return (FDynamicEmitterDataBase *)pFVar13;
}

// CreateNamedDynamicMaterialInstance @ 14816df60

/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall
UParticleSystemComponent::CreateNamedDynamicMaterialInstance
          (UParticleSystemComponent *this,FName param_1,UMaterialInterface *param_2)

{
  int iVar1;
  int iVar2;
  UMaterialInstanceDynamic *pUVar3;
  UClass *pUVar4;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  local_res10 = param_1;
  iVar2 = (**(code **)(*(longlong *)this + 0xbc0))();
  if (iVar2 == -1) {
    if (2 < (byte)LogParticles._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (UMaterialInstanceDynamic *)0x0;
  }
  if (param_2 != (UMaterialInterface *)0x0) {
    (**(code **)(*(longlong *)this + 0x6b8))(this,iVar2);
  }
  pUVar3 = (UMaterialInstanceDynamic *)(**(code **)(*(longlong *)this + 0x690))(this,iVar2);
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar4 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar3;
    }
  }
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar3 = UMaterialInstanceDynamic::Create
                       ((UMaterialInterface *)pUVar3,(UObject *)this,(FName)0x0);
    (**(code **)(*(longlong *)this + 0x6b8))(this,iVar2,pUVar3);
    return pUVar3;
  }
  if (2 < (byte)LogParticles._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// CreateRenderState_Concurrent @ 14816e120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::CreateRenderState_Concurrent
          (UParticleSystemComponent *this,FRegisterComponentContext *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FName FVar4;
  UParticleSystem *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateRenderState_Concurrent> FVar16;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC> FVar17;
  UWorld *pUVar18;
  UClass *pUVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  uint uVar22;
  FColor_u_0 FVar23;
  undefined4 local_res8 [2];
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20;
  uint uStackX_24;
  FName local_c8;
  FName local_b8;
  FName local_a8;
  FColor_u_0 local_a0;
  uint local_9c;
  FName local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FMemScope local_80;
  FString local_78;
  FStatMessage local_68;
  FStatMessage local_58;
  FName local_48;
  FName local_40;
  
  local_res8[0] = 0;
  FLLMScope::FLLMScope((FLLMScope *)local_res8,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_80,Particles,true);
  FVar16 = StatPtr_STAT_ParticleSystemComponent_CreateRenderState_Concurrent;
  if (StatPtr_STAT_ParticleSystemComponent_CreateRenderState_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateRenderState_Concurrent>)0x0) {
    pFVar15 = ::FName::FName(&local_48,"STAT_ParticleSystemComponent_CreateRenderState_Concurrent");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateRenderState_Concurrent>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ParticleSystemComponent_CreateRenderState_Concurrent,*pFVar15
                         ,L"ParticleComponent CreateRenderState Concurrent GT","STATGROUP_Particles"
                         ,"STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  FVar4 = *(FName *)FVar16;
  FVar23.Bits = (uint)FVar4.ComparisonIndex.Value;
  uVar22 = FVar4.Number;
  if ((FVar23.Bits != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.Bits = FVar23.Bits;
        local_9c = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_a0._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x423);
        bVar12 = true;
        bVar11 = true;
      }
    }
    bVar13 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.Bits = FVar23.Bits;
      uStackX_24 = uVar22;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar13 = true;
      local_b8 = FVar4;
    }
  }
  FVar17 = StatPtr_STAT_ParticlesOverview_GT_CNC;
  if (StatPtr_STAT_ParticlesOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)0x0) {
    pFVar15 = ::FName::FName(&local_40,"STAT_ParticlesOverview_GT_CNC");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT_CNC,*pFVar15
                        ,L"GT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar4 = *(FName *)FVar17;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_98.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x424);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar10 = true;
      local_c8 = FVar4;
    }
  }
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    bVar2 = this->field_0x57a;
    this->bSkipUpdateDynamicDataDuringTick = '\x01';
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,false);
    this->field_0x57a = (this->field_0x57a ^ bVar2) & 0x10 ^ this->field_0x57a;
  }
  if (((*(longlong *)&this->field_0xb0 == 0) &&
      (pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar18 == (UWorld *)0x0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetWorld()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x42f,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (5 < (byte)LogParticles._0_1_) {
    pUVar5 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar5 != (UParticleSystem *)0x0) {
      local_a8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_a8,&local_78);
    }
    if (*(longlong *)&this->field_0xb0 == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pUVar5 != (UParticleSystem *)0x0) &&
       (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (GIsAllowingParticles == false) {
    (this->Template).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  }
  pUVar5 = (this->Template).field0_0x0.DebugPtr;
  if ((pUVar5 != (UParticleSystem *)0x0) && (pUVar5->bHasPhysics != '\0')) {
    lVar6 = *(longlong *)&this->field_0xa8;
    this->field_0x40 = 0;
    if (lVar6 != 0) {
      pUVar19 = Z_Construct_UClass_AEmitter_NoRegister();
      iVar3 = (int)pUVar19->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar19->_padding_)) {
        *(undefined1 *)(lVar6 + 0x30) = 0;
      }
    }
  }
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  this->bJustRegistered = '\x01';
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_c8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_68.NameAndInfo.Index = local_c8.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = local_c8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_68);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar13) && (local_b8 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_58.NameAndInfo.Index = local_b8.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = local_b8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_58);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope((FLLMScope *)local_res8);
  return;
}

// Deactivate @ 14816e930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::Deactivate(UParticleSystemComponent *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x330))();
  if (cVar1 == '\0') {
    if (GbDeferrPSCDeactivation != 0) {
      this->bDeactivateTriggered = '\x01';
      return;
    }
    DeactivateSystem(this);
    if (this->bWasDeactivated != '\0') {
      TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
      ::Broadcast<UParticleSystemComponent_*>
                ((TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
                  *)&this->field_0xbb,this);
      return;
    }
  }
  return;
}

// DeactivateImmediate @ 14816e9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::DeactivateImmediate(UParticleSystemComponent *this)

{
  UParticleSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  FName FStackX_8;
  UParticleSystemComponent *pUStackX_10;
  FString FStack_28;
  
  FStackX_8 = (FName)((ulonglong)FStackX_8 & 0xffffffff00000000);
  pUVar4 = *(UWorld **)&this->field_0xb0;
  if (((pUVar4 == (UWorld *)0x0) &&
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 == (UWorld *)0x0
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("World",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                ,0xcf8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (5 < (byte)LogParticles._0_1_) {
    pUVar1 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar1 != (UParticleSystem *)0x0) {
      FStackX_8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&FStackX_8,&FStack_28);
    }
    if (*(longlong *)&this->field_0xb0 == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pUVar1 != (UParticleSystem *)0x0) &&
       (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  pUStackX_10 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSystemFinished,
             &pUStackX_10);
  ResetParticles(this,false);
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  (**(code **)(*(longlong *)this + 0x420))(this,0);
  if (this->PoolingMethod != AutoRelease) {
    if (this->PoolingMethod != ManualRelease_OnComplete) {
      if (this->bAutoDestroy == 0) {
        if (this->bAutoManageAttachment != '\0') {
          CancelAutoAttachment(this,true,pUVar4);
        }
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014816a546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x4a0))(this,0);
      return;
    }
    this->PoolingMethod = ManualRelease;
  }
  FWorldPSCPool::ReclaimWorldParticleSystem(&pUVar4->PSCPool,this);
  return;
}

// DeactivateSystem @ 14816e9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::DeactivateSystem(UParticleSystemComponent *this)

{
  undefined1 *puVar1;
  UParticleSystem *pUVar2;
  FParticleEmitterInstance *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  UWorld *pUVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT> FVar13;
  FName FVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  FName local_b8;
  UWorld *local_b0;
  FName local_a8;
  FName local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FName local_68;
  FInGameScopedCycleCounter local_60 [2];
  
  pUVar11 = *(UWorld **)&this->field_0xb0;
  if (pUVar11 == (UWorld *)0x0) {
    local_b0 = pUVar11;
    pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_b0 = pUVar11;
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (local_60,pUVar11,VFXSignificance,GameThread,this->bIsManagingSignificance);
  FVar13 = StatPtr_STAT_ParticlesOverview_GT;
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ParticlesOverview_GT");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar12,
                        L"GT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar13;
  bVar6 = false;
  bVar5 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_b8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xd1c);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_14816ebaf;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  FVar14 = local_a8;
LAB_14816ebaf:
  bVar8 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar8) {
    if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      WaitForAsyncAndFinalize(this,STALL,true);
    }
    if (pUVar11 == (UWorld *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0xd2c,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (1 < (byte)LogParticles._0_1_) {
        pUVar2 = (this->Template).field0_0x0.DebugPtr;
        if (pUVar2 != (UParticleSystem *)0x0) {
          local_98 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_98,&local_88);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        if ((pUVar2 != (UParticleSystem *)0x0) &&
           (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      ResetParticles(this,true);
      this->bSuppressSpawning = '\0';
      this->bDeactivateTriggered = '\0';
      this->bWasDeactivated = '\0';
      this->bSuppressSpawning = '\x01';
      this->bWasDeactivated = '\x01';
    }
    else {
      if (5 < (byte)LogParticles._0_1_) {
        pUVar2 = (this->Template).field0_0x0.DebugPtr;
        if (pUVar2 != (UParticleSystem *)0x0) {
          local_90 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_90,&local_78);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        if ((pUVar2 != (UParticleSystem *)0x0) &&
           (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      if ((this->field_0x9a & 0x10) != 0) {
        TMulticastDelegate<void___cdecl(UParticleSystemComponent_*,bool),FDefaultDelegateUserPolicy>
        ::Broadcast(&OnSystemPreActivationChange,this,false);
      }
      this->bSuppressSpawning = '\0';
      this->bDeactivateTriggered = '\0';
      this->bWasDeactivated = '\0';
      bVar8 = false;
      this->bSuppressSpawning = '\x01';
      this->bWasDeactivated = '\x01';
      uVar18 = 0;
      if (0 < (this->EmitterInstances).ArrayNum) {
        lVar17 = 0;
        do {
          local_res20 = ~uVar18 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar18 < (this->EmitterInstances).ArrayNum) {
            uVar16 = local_res20;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = *(FParticleEmitterInstance **)
                     ((this->EmitterInstances).AllocatorInstance.Data + lVar17 * 8);
          if (this_00 != (FParticleEmitterInstance *)0x0) {
            if (this_00->bKillOnDeactivate == '\0') {
              (**(code **)(this_00->_padding_ + 0x148))();
            }
            else {
              FParticleEmitterInstance::PreDestructorCall(this_00);
              uVar16 = 0;
              lVar15 = 0;
              if (0 < (this->EmitterInstances).ArrayNum) {
                do {
                  if (lVar15 != lVar17) {
                    uVar10 = 0;
                    if ((int)uVar16 < (this->EmitterInstances).ArrayNum) {
                      uVar10 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (*(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar15 * 8)
                        != 0) {
                      uVar10 = 0;
                      if ((int)uVar16 < (this->EmitterInstances).ArrayNum) {
                        uVar10 = ~uVar16 >> 0x1f;
                      }
                      if ((uVar10 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      plVar3 = *(longlong **)
                                ((this->EmitterInstances).AllocatorInstance.Data + lVar15 * 8);
                      (**(code **)(*plVar3 + 0x178))(plVar3,this_00);
                    }
                  }
                  uVar16 = uVar16 + 1;
                  lVar15 = lVar15 + 1;
                } while ((int)uVar16 < (this->EmitterInstances).ArrayNum);
              }
              (**(code **)this_00->_padding_)(this_00);
              uVar16 = 0;
              if ((int)uVar18 < (this->EmitterInstances).ArrayNum) {
                uVar16 = local_res20;
              }
              if ((uVar16 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar8 = true;
              *(undefined8 *)((this->EmitterInstances).AllocatorInstance.Data + lVar17 * 8) = 0;
            }
          }
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 1;
        } while ((int)uVar18 < (this->EmitterInstances).ArrayNum);
        if (bVar8) {
          if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
            WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
          }
          if (*(FParticleSystemSceneProxy **)&this->field_0x530 != (FParticleSystemSceneProxy *)0x0)
          {
            FParticleSystemSceneProxy::UpdateData
                      (*(FParticleSystemSceneProxy **)&this->field_0x530,(FParticleDynamicData *)0x0
                      );
          }
          UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
        }
      }
      (**(code **)(*(longlong *)this + 0x420))(this,1);
      UPrimitiveComponent::SetLastRenderTime
                ((UPrimitiveComponent *)this,(float)local_b0->TimeSeconds);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(local_60);
  return;
}

// DestroyRenderState_Concurrent @ 14816f980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::DestroyRenderState_Concurrent(UParticleSystemComponent *this)

{
  int *piVar1;
  byte bVar2;
  UParticleSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent> FVar13;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC> FVar14;
  UWorld *pUVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  uint uVar18;
  FColor_u_0 FVar19;
  FName FVar20;
  FName FVar21;
  FColor_u_0 local_res8 [2];
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FName local_res20;
  FName local_c8;
  FName local_c0;
  FName local_b0;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  FString local_90;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  local_res8[0].Bits = 0;
  FVar13 = StatPtr_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent;
  if (StatPtr_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent>)0x0)
  {
    pFVar12 = ::FName::FName(&local_60,"STAT_ParticleSystemComponent_DestroyRenderState_Concurrent")
    ;
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent,
                          *pFVar12,L"ParticleComponent DestroyRenderState Concurrent GT",
                          "STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,ST_int64,
                          true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar13;
  bVar7 = false;
  bVar10 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar19.Bits = (uint)FVar21.ComparisonIndex.Value;
  uVar18 = FVar21.Number;
  if ((FVar19.Bits == 0) && (uVar18 == 0)) {
LAB_14816fab7:
    bVar8 = false;
    FVar21 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar19.Bits;
        local_res1c = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x486);
        bVar7 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14816fab7;
    local_res10.Bits = FVar19.Bits;
    uStackX_14 = uVar18;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar8 = true;
  }
  FVar14 = StatPtr_STAT_ParticlesOverview_GT_CNC;
  if (StatPtr_STAT_ParticlesOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)0x0) {
    pFVar12 = ::FName::FName(local_58,"STAT_ParticlesOverview_GT_CNC");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT_CNC,*pFVar12
                        ,L"GT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar5 = false;
  bVar9 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_res20.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x487);
        bVar5 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar6 = true;
      goto LAB_14816fbcf;
    }
  }
  bVar6 = false;
  FVar20 = local_b0;
LAB_14816fbcf:
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    bVar2 = this->field_0x57a;
    this->bSkipUpdateDynamicDataDuringTick = '\x01';
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,false);
    this->field_0x57a = (this->field_0x57a ^ bVar2) & 0x10 ^ this->field_0x57a;
  }
  if (((*(longlong *)&this->field_0xb0 == 0) &&
      (pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar15 == (UWorld *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetWorld()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x48b,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (5 < (byte)LogParticles._0_1_) {
    pUVar3 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar3 != (UParticleSystem *)0x0) {
      local_c8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_c8,&local_90);
    }
    if (*(longlong *)&this->field_0xb0 == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pUVar3 != (UParticleSystem *)0x0) &&
       (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (this->bResetOnDetach != 0) {
    ResetParticles(this,false);
  }
  if ((this->field_0x98 & 2) != 0) {
    UPrimitiveComponent::DestroyRenderState_Concurrent((UPrimitiveComponent *)this);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_80.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_80);
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
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_70.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_70);
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
  return;
}

// DetermineLODLevelForLocation @ 1481703c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UParticleSystemComponent::DetermineLODLevelForLocation
          (UParticleSystemComponent *this,TVector<double> *param_1)

{
  uchar *puVar1;
  ForElementType<UE::Math::TVector<double>_> FVar2;
  float fVar3;
  code *pcVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UWorld *this_00;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  *pTVar11;
  UObject *pUVar12;
  uint uVar13;
  ForElementType<UE::Math::TVector<double>_> FVar14;
  longlong lVar15;
  UParticleSystem *pUVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_150;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_140;
  undefined1 local_130 [24];
  ForElementType<UE::Math::TVector<double>_> local_118;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar16 = (this->Template).field0_0x0.DebugPtr;
  if (((pUVar16 == (UParticleSystem *)0x0) || ((pUVar16->LODDistances).ArrayNum < 2)) ||
     ((pUVar16->LODMethod).Value == '\x01')) {
    iVar8 = 0;
  }
  else {
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x107d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    this_00 = *(UWorld **)&this->field_0xb0;
    iVar8 = 0;
    if ((this_00 != (UWorld *)0x0) ||
       (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       this_00 != (UWorld *)0x0)) {
      local_118.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
      local_50 = 0;
      local_4c = 8;
      pTVar11 = UWorld::GetPlayerControllerIterator(this_00,&local_140);
      if ((pTVar11->Index < 0) || (pTVar11->Container->ArrayNum <= pTVar11->Index)) {
        if ((&local_118 ==
             (ForElementType<UE::Math::TVector<double>_> *)&this_00->ViewLocationsRenderedLastFrame)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        iVar8 = (this_00->ViewLocationsRenderedLastFrame).ArrayNum;
        if (iVar8 != 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                             (0x18,8,iVar8,&local_118,(int *)&local_50,(int *)&local_4c);
          FVar14 = (ForElementType<UE::Math::TVector<double>_>)&local_118;
          if (local_118.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
            FVar14 = local_118.SecondaryData;
          }
          memcpy((double *)((longlong)FVar14 + (longlong)iVar10 * 0x18),
                 (this_00->ViewLocationsRenderedLastFrame).AllocatorInstance.Data,
                 (longlong)iVar8 * 0x18);
        }
      }
      else {
        UWorld::GetPlayerControllerIterator(this_00,&local_150);
        for (; (iVar8 = local_150.Index, pTVar5 = local_150.Container, -1 < local_150.Index &&
               (local_150.Index < (local_150.Container)->ArrayNum));
            local_150.Index = local_150.Index + 1) {
          uVar9 = 0;
          if (local_150.Index < (local_150.Container)->ArrayNum) {
            uVar9 = (uint)~local_150.Index >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((pTVar5->AllocatorInstance).Data + (longlong)iVar8 * 8));
          if (((pUVar12 != (UObject *)0x0) && ((pUVar12[0x15].field_0x20 & 2) != 0)) &&
             (cVar7 = (**(code **)(*(longlong *)pUVar12 + 0x7f0))(), cVar7 != '\0')) {
            uVar9 = local_50;
            if (local_50 == local_4c) {
              uVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                                (0x818,&local_118,(int *)&local_4c);
            }
            local_50 = uVar9 + 1;
            uVar13 = 0;
            if ((int)uVar9 < (int)local_50) {
              uVar13 = ~uVar9 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar8 = (*pcVar4)();
              return iVar8;
            }
            FVar14 = (ForElementType<UE::Math::TVector<double>_>)&local_118;
            if (local_118.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
              FVar14 = local_118.SecondaryData;
            }
            (**(code **)(*(longlong *)pUVar12 + 0x840))
                      (pUVar12,(double *)((longlong)FVar14 + (longlong)(int)uVar9 * 0x18),local_130)
            ;
          }
        }
      }
      uVar9 = local_50;
      uVar17 = (ulonglong)(int)local_50;
      if (local_50 == 0) {
        uVar21 = 0;
        uVar22 = 0;
      }
      else {
        uVar21 = (undefined4)__real_4550000000000000;
        uVar22 = (undefined4)((ulonglong)__real_4550000000000000 >> 0x20);
      }
      FVar14 = (ForElementType<UE::Math::TVector<double>_>)&local_118;
      if (local_118.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar14 = local_118.SecondaryData;
      }
      FVar2 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar14 + uVar17 * 0x18);
      while( true ) {
        if ((uint)uVar17 != uVar9) {
          local_158[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_158);
          uVar17 = (ulonglong)local_50;
        }
        if (FVar14 == FVar2) break;
        dVar20 = *(double *)((longlong)FVar14 + 8) - (param_1->field0_0x0)._s_0.Y;
        dVar19 = *(double *)FVar14;
        puVar1 = (uchar *)((longlong)FVar14 + 0x10);
        FVar14 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar14 + 0x18);
        dVar19 = dVar19 - (param_1->field0_0x0)._s_0.X;
        dVar18 = *(double *)puVar1 - (param_1->field0_0x0)._s_0.Z;
        dVar19 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if ((double)CONCAT44(uVar22,uVar21) <= dVar19) {
          dVar19 = (double)CONCAT44(uVar22,uVar21);
        }
        uVar21 = SUB84(dVar19,0);
        uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      }
      pUVar16 = (this->Template).field0_0x0.DebugPtr;
      uVar9 = 1;
      iVar10 = (pUVar16->LODDistances).ArrayNum;
      iVar8 = iVar10 + -1;
      if (1 < iVar10) {
        lVar15 = 4;
        do {
          uVar13 = 0;
          if ((int)uVar9 < (pUVar16->LODDistances).ArrayNum) {
            uVar13 = ~uVar9 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          fVar3 = *(float *)((pUVar16->LODDistances).AllocatorInstance.Data + lVar15);
          if ((double)CONCAT44(uVar22,uVar21) < (double)(fVar3 * fVar3)) {
            iVar8 = uVar9 - 1;
            break;
          }
          pUVar16 = (this->Template).field0_0x0.DebugPtr;
          uVar9 = uVar9 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar9 < (pUVar16->LODDistances).ArrayNum);
      }
      if (local_118.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FMemory::Free((void *)local_118.SecondaryData);
      }
    }
  }
  return iVar8;
}

// EndTrails @ 148172680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::EndTrails(UParticleSystemComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EmitterInstances).AllocatorInstance.Data;
  iVar2 = (this->EmitterInstances).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x208))();
    }
    pFVar3 = pFVar3 + 8;
  }
  DeactivateSystem(this);
  return;
}

// FinalizeTickComponent @ 148173c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::FinalizeTickComponent(UParticleSystemComponent *this)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  UParticleSystem *pUVar8;
  FBaseGraphTask *pFVar9;
  FParticleEmitterInstance *pFVar10;
  AParticleEventManager *pAVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  LARGE_INTEGER LVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  UWorld *pUVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_ParticleFinalizeTickTime> FVar26;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT> FVar27;
  FParticlePerfStats *pFVar28;
  FParticlePerfStats *pFVar29;
  FParticlePerfStats *pFVar30;
  UParticleLODLevel *pUVar31;
  double *pdVar32;
  longlong lVar33;
  FColor_u_0 FVar34;
  FName FVar35;
  FName FVar36;
  ulonglong uVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  ulonglong uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  double dVar46;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStackY_258 [32];
  undefined1 local_1f6 [6];
  LARGE_INTEGER local_1f0;
  FColor_u_0 local_1e8;
  uint uStack_1e4;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double local_1b0;
  FColor_u_0 local_1a8 [2];
  FColor_u_0 local_1a0;
  uint local_19c;
  FName local_198;
  FParticlePerfStats *local_190;
  FParticlePerfStats *local_188;
  FParticlePerfStats *local_180;
  FName local_178;
  FName local_168;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  FName local_148;
  FName local_140;
  FInGameScopedCycleCounter local_138 [6];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar21 = IsInGameThread();
  pUVar24 = *(UWorld **)&this->field_0xb0;
  if (pUVar24 == (UWorld *)0x0) {
    pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (local_138,pUVar24,VFXSignificance,!bVar21 * '\x02',this->bIsManagingSignificance);
  pFVar30 = (FParticlePerfStats *)0x0;
  FVar26 = StatPtr_STAT_ParticleFinalizeTickTime;
  if (StatPtr_STAT_ParticleFinalizeTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleFinalizeTickTime>)0x0) {
    pFVar25 = ::FName::FName(&local_148,"STAT_ParticleFinalizeTickTime");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_ParticleFinalizeTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleFinalizeTickTime,*pFVar25
                        ,L"Particle Finalize Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar26;
  bVar21 = false;
  bVar17 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar20 = false;
  bVar15 = false;
  FVar34.Bits = (uint)FVar36.ComparisonIndex.Value;
  uVar23 = FVar36.Number;
  if ((FVar34.Bits == 0) && (uVar23 == 0)) {
LAB_148173dd1:
    bVar17 = bVar15;
    bVar21 = bVar20;
    bVar20 = false;
    FVar36 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar21 = false;
      bVar17 = true;
      bVar20 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.Bits = FVar34.Bits;
        local_19c = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1a0._s_0,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xa09);
        bVar21 = true;
        bVar17 = true;
        bVar20 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148173dd1;
    local_1e8.Bits = FVar34.Bits;
    uStack_1e4 = uVar23;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar20 = true;
  }
  FVar27 = StatPtr_STAT_ParticlesOverview_GT;
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar25 = ::FName::FName(&local_140,"STAT_ParticlesOverview_GT");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar25,
                        L"GT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar27;
  bVar15 = false;
  bVar16 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar19 = false;
  bVar22 = false;
  if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar15 = false;
      bVar16 = true;
      bVar19 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_198.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xa0a);
        bVar15 = true;
        bVar16 = true;
        bVar19 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1f0 = (LARGE_INTEGER)FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar19 = true;
      goto LAB_148173eff;
    }
  }
  bVar16 = bVar22;
  bVar15 = bVar19;
  bVar19 = false;
  FVar35 = local_168;
LAB_148173eff:
  pUVar24 = *(UWorld **)&this->field_0xb0;
  pUVar8 = (this->Template).field0_0x0.DebugPtr;
  pFVar28 = pFVar30;
  if ((((pUVar24 != (UWorld *)0x0) ||
       (pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar24 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar28 = FParticlePerfStatsManager::GetWorldPerfStats(pUVar24);
  }
  pFVar29 = pFVar30;
  local_190 = pFVar28;
  if (((pUVar8 != (UParticleSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar29 = FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar8);
  }
  local_188 = pFVar29;
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar30 = FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  local_1f0.QuadPart = -1;
  local_180 = pFVar30;
  if (((pFVar28 != (FParticlePerfStats *)0x0) || (pFVar29 != (FParticlePerfStats *)0x0)) ||
     (pFVar30 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_158);
    local_1f0 = local_158;
  }
  if (this->bAsyncDataCopyIsValid != '\0') {
    iVar7 = (this->AsyncInstanceParameters).ArrayNum;
    pFVar38 = (this->AsyncInstanceParameters).AllocatorInstance.Data;
    pFVar40 = pFVar38 + (longlong)iVar7 * 0xe0;
    while( true ) {
      if ((this->AsyncInstanceParameters).ArrayNum != iVar7) {
        local_1f6[0] = 0;
        `TCheckedPointerIterator<FParticleSysParam,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1f6);
      }
      if (pFVar38 == pFVar40) break;
      bVar22 = IsInGameThread();
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticleSystemComponent.h"
                              ,0xb1,L""), bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar38[0xd8] = (FScriptContainerElement)0x0;
      pFVar38 = pFVar38 + 0xe0;
    }
  }
  uVar37 = 0;
  this->bAsyncDataCopyIsValid = '\0';
  pFVar9 = (this->AsyncWork).Reference;
  if (pFVar9 != (FBaseGraphTask *)0x0) {
    (this->AsyncWork).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar9->field_0x30;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
    }
  }
  if (this->bNeedsFinalize != '\0') {
    this->field_0x57b = this->field_0x57b & 0xdf;
    if (FXConsoleVariables::bFreezeParticleSimulation == 0) {
      uVar41 = uVar37;
      if (0 < (this->EmitterInstances).ArrayNum) {
        do {
          uVar39 = (uint)uVar41;
          uVar23 = 0;
          if ((int)uVar39 < (this->EmitterInstances).ArrayNum) {
            uVar23 = ~uVar39 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar10 = *(FParticleEmitterInstance **)
                     ((this->EmitterInstances).AllocatorInstance.Data + uVar37);
          if ((pFVar10 != (FParticleEmitterInstance *)0x0) && (pFVar10->bEnabled != 0)) {
            if (((int)(uVar39 + 1) < (this->EmitterInstances).ArrayNum) &&
               (((int)(uVar39 + 1) < 0 &&
                (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                bVar22)))) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (((pFVar10->SpriteTemplate != (UParticleEmitter *)0x0) &&
                (pUVar31 = UParticleEmitter::GetCurrentLODLevel(pFVar10->SpriteTemplate,pFVar10),
                pUVar31 != (UParticleLODLevel *)0x0)) && (pUVar31->bEnabled != 0)) {
              (**(code **)(pFVar10->_padding_ + 0x140))(pFVar10,this->DeltaTimeTick);
            }
          }
          uVar41 = (ulonglong)(uVar39 + 1);
          uVar37 = uVar37 + 8;
        } while ((int)(uVar39 + 1) < (this->EmitterInstances).ArrayNum);
      }
      pUVar24 = *(UWorld **)&this->field_0xb0;
      if (((pUVar24 != (UWorld *)0x0) ||
          (pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
          pUVar24 != (UWorld *)0x0)) &&
         (pAVar11 = (pUVar24->MyParticleEventManager).field0_0x0.DebugPtr,
         pAVar11 != (AParticleEventManager *)0x0)) {
        if (0 < (this->SpawnEvents).ArrayNum) {
          (**(code **)(*(longlong *)pAVar11 + 0x760))(pAVar11,this);
        }
        if (0 < (this->DeathEvents).ArrayNum) {
          (**(code **)(*(longlong *)pAVar11 + 0x768))(pAVar11,this);
        }
        if (0 < (this->CollisionEvents).ArrayNum) {
          (**(code **)(*(longlong *)pAVar11 + 0x770))(pAVar11,this);
        }
        if (0 < (this->BurstEvents).ArrayNum) {
          (**(code **)(*(longlong *)pAVar11 + 0x778))(pAVar11,this);
        }
      }
    }
    uVar37 = 0;
    DestructItems<FParticleEventKismetData,int>
              ((FParticleEventKismetData *)(this->KismetEvents).AllocatorInstance.Data,
               (this->KismetEvents).ArrayNum);
    piVar3 = &(this->KismetEvents).ArrayMax;
    (this->KismetEvents).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->KismetEvents).AllocatorInstance,0,piVar3);
    }
    this->bJustRegistered = '\0';
    pUVar24 = *(UWorld **)&this->field_0xb0;
    if (pUVar24 == (UWorld *)0x0) {
      pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((((this->field_0x9a & 0x10) == 0) || (this->bWasDeactivated != '\0')) ||
       ((!(bool)this->bIsManagingSignificance ||
        ((this->NumSignificantEmitters != 0 ||
         ((float)pUVar24->TimeSeconds <
          ((this->Template).field0_0x0.DebugPtr)->InsignificanceDelay + this->LastSignificantTime)))
        ))) {
      this->LastSignificantTime = (float)pUVar24->TimeSeconds;
      bVar22 = HasCompleted(this);
      if ((bVar22) && (this->bWasCompleted == 0)) {
        Complete(this);
      }
      this->bWasCompleted = '\0';
      this->field_0x578 = this->field_0x578 | bVar22;
    }
    else {
      OnSignificanceChanged(this,false,true,false);
    }
    if ((((this->bWarmingUp == '\0') && (this->bWasCompleted == 0)) &&
        (((this->Template).field0_0x0.DebugPtr)->bUseFixedRelativeBoundingBox == '\0')) &&
       (this->bIsTransformDirty == '\0')) {
      fVar42 = this->DeltaTimeTick + this->TimeSinceLastForceUpdateTransform;
      this->TimeSinceLastForceUpdateTransform = fVar42;
      if (this->MaxTimeBeforeForceUpdateTransform <= fVar42 &&
          fVar42 != this->MaxTimeBeforeForceUpdateTransform) {
        this->field_0x57b = this->field_0x57b | 2;
      }
      else {
        local_1b0 = (double)((ulonglong)local_1b0 & 0xffffffffffffff00);
        dStack_1c8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        dStack_1c0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        local_1e0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        dStack_1d8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        dStack_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar44 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar48 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar41 = uVar37;
        uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar57 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar59 = uVar44;
        uVar60 = uVar48;
        uVar52 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar55 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        if (0 < (this->EmitterInstances).ArrayNum) {
          do {
            uVar39 = (uint)uVar41;
            uVar23 = 0;
            if ((int)uVar39 < (this->EmitterInstances).ArrayNum) {
              uVar23 = ~uVar39 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = *(FParticleEmitterInstance **)
                       ((this->EmitterInstances).AllocatorInstance.Data + uVar37);
            if (((pFVar10 != (FParticleEmitterInstance *)0x0) &&
                (pFVar10->SpriteTemplate != (UParticleEmitter *)0x0)) &&
               ((pUVar31 = UParticleEmitter::GetCurrentLODLevel(pFVar10->SpriteTemplate,pFVar10),
                pUVar31 != (UParticleLODLevel *)0x0 && (pUVar31->bEnabled != 0)))) {
              pdVar32 = (double *)(**(code **)(pFVar10->_padding_ + 0x60))(pFVar10);
              if (local_1b0._0_1_ == '\0') {
                if (*(char *)(pdVar32 + 6) != '\0') {
                  uVar43 = *(undefined4 *)pdVar32;
                  uVar47 = *(undefined4 *)((longlong)pdVar32 + 4);
                  local_1e0 = *pdVar32;
                  uVar57 = *(undefined4 *)(pdVar32 + 1);
                  uVar58 = *(undefined4 *)((longlong)pdVar32 + 0xc);
                  dStack_1d8 = pdVar32[1];
                  uVar44 = *(undefined4 *)(pdVar32 + 2);
                  uVar48 = *(undefined4 *)((longlong)pdVar32 + 0x14);
                  local_1d0 = pdVar32[2];
                  uVar52 = *(undefined4 *)(pdVar32 + 3);
                  uVar55 = *(undefined4 *)((longlong)pdVar32 + 0x1c);
                  dStack_1c8 = pdVar32[3];
                  uVar45 = *(undefined4 *)(pdVar32 + 4);
                  uVar49 = *(undefined4 *)((longlong)pdVar32 + 0x24);
                  dStack_1c0 = pdVar32[4];
                  uVar59 = *(undefined4 *)(pdVar32 + 5);
                  uVar60 = *(undefined4 *)((longlong)pdVar32 + 0x2c);
                  dStack_1b8 = pdVar32[5];
                  local_1b0 = pdVar32[6];
                }
              }
              else if (*(char *)(pdVar32 + 6) != '\0') {
                local_1e0 = *pdVar32;
                dVar4 = pdVar32[1];
                if ((double)CONCAT44(uVar47,uVar43) <= local_1e0) {
                  local_1e0 = (double)CONCAT44(uVar47,uVar43);
                }
                uVar50 = SUB84(dVar4,0);
                uVar53 = (int)((ulonglong)dVar4 >> 0x20);
                if ((double)CONCAT44(uVar58,uVar57) <= dVar4) {
                  uVar50 = uVar57;
                  uVar53 = uVar58;
                }
                uVar43 = SUB84(local_1e0,0);
                uVar47 = (undefined4)((ulonglong)local_1e0 >> 0x20);
                local_1d0 = pdVar32[2];
                dStack_1d8 = (double)CONCAT44(uVar53,uVar50);
                if ((double)CONCAT44(uVar48,uVar44) <= local_1d0) {
                  local_1d0 = (double)CONCAT44(uVar48,uVar44);
                }
                dVar4 = pdVar32[3];
                uVar51 = SUB84(dVar4,0);
                uVar54 = (int)((ulonglong)dVar4 >> 0x20);
                if (dVar4 <= (double)CONCAT44(uVar55,uVar52)) {
                  uVar51 = uVar52;
                  uVar54 = uVar55;
                }
                uVar44 = SUB84(local_1d0,0);
                uVar48 = (undefined4)((ulonglong)local_1d0 >> 0x20);
                dStack_1c0 = pdVar32[4];
                dStack_1c8 = (double)CONCAT44(uVar54,uVar51);
                if (dStack_1c0 <= (double)CONCAT44(uVar49,uVar45)) {
                  dStack_1c0 = (double)CONCAT44(uVar49,uVar45);
                }
                dVar4 = pdVar32[5];
                uVar52 = SUB84(dVar4,0);
                uVar55 = (int)((ulonglong)dVar4 >> 0x20);
                if (dVar4 <= (double)CONCAT44(uVar60,uVar59)) {
                  uVar52 = uVar59;
                  uVar55 = uVar60;
                }
                uVar45 = SUB84(dStack_1c0,0);
                uVar49 = (undefined4)((ulonglong)dStack_1c0 >> 0x20);
                dStack_1b8 = (double)CONCAT44(uVar55,uVar52);
                uVar57 = uVar50;
                uVar58 = uVar53;
                uVar59 = uVar52;
                uVar60 = uVar55;
                uVar52 = uVar51;
                uVar55 = uVar54;
              }
            }
            uVar41 = (ulonglong)(uVar39 + 1);
            uVar37 = uVar37 + 8;
          } while ((int)(uVar39 + 1) < (this->EmitterInstances).ArrayNum);
        }
        dVar14 = *(double *)&this->field_0x110 - *(double *)&this->field_0x128;
        dVar4 = *(double *)&this->field_0x110 + *(double *)&this->field_0x128;
        dVar5 = *(double *)&this->field_0x118 + *(double *)&this->field_0x130;
        dVar46 = *(double *)&this->field_0x118 - *(double *)&this->field_0x130;
        dVar13 = *(double *)&this->field_0x120 + *(double *)&this->field_0x138;
        dVar56 = *(double *)&this->field_0x120 - *(double *)&this->field_0x138;
        if (((((((double)CONCAT44(uVar47,uVar43) < dVar14 ||
                 (double)CONCAT44(uVar47,uVar43) == dVar14) ||
               (dVar4 <= (double)CONCAT44(uVar47,uVar43))) ||
              ((double)CONCAT44(uVar58,uVar57) < dVar46 || (double)CONCAT44(uVar58,uVar57) == dVar46
              )) || ((dVar5 <= (double)CONCAT44(uVar58,uVar57) ||
                     ((double)CONCAT44(uVar48,uVar44) < dVar56 ||
                      (double)CONCAT44(uVar48,uVar44) == dVar56)))) ||
            (((dVar13 <= (double)CONCAT44(uVar48,uVar44) ||
              (((double)CONCAT44(uVar55,uVar52) < dVar14 ||
                (double)CONCAT44(uVar55,uVar52) == dVar14 ||
               (dVar4 <= (double)CONCAT44(uVar55,uVar52))))) ||
             ((double)CONCAT44(uVar49,uVar45) < dVar46 || (double)CONCAT44(uVar49,uVar45) == dVar46)
             ))) || (((dVar5 <= (double)CONCAT44(uVar49,uVar45) ||
                      ((double)CONCAT44(uVar60,uVar59) < dVar56 ||
                       (double)CONCAT44(uVar60,uVar59) == dVar56)) ||
                     (dVar13 <= (double)CONCAT44(uVar60,uVar59))))) {
          this->bIsTransformDirty = '\x01';
        }
      }
    }
    if (this->bIsTransformDirty != '\0') {
      USceneComponent::UpdateComponentToWorld((USceneComponent *)this,None,None);
      this->bIsTransformDirty = '\0';
      this->TimeSinceLastForceUpdateTransform = 0.0;
    }
    uVar57 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    if (this->bOldPositionValid == false) {
      *(undefined4 *)&(this->PartSysVelocity).field0_0x0 =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      *(undefined4 *)((longlong)&(this->PartSysVelocity).field0_0x0 + 4) = uVar43;
      *(undefined4 *)((longlong)&(this->PartSysVelocity).field0_0x0 + 8) = uVar47;
      *(undefined4 *)((longlong)&(this->PartSysVelocity).field0_0x0 + 0xc) = uVar57;
      (this->PartSysVelocity).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      fVar42 = 0.0;
      if (0.0 < this->DeltaTimeTick) {
        fVar42 = __real_3f800000 / this->DeltaTimeTick;
      }
      dVar13 = *(double *)&this->field_0x218;
      dVar14 = *(double *)&this->field_0x220;
      dVar4 = (this->OldPosition).field0_0x0._s_0.Z;
      dVar5 = (this->OldPosition).field0_0x0._s_0.Y;
      dVar46 = (double)fVar42;
      (this->PartSysVelocity).field0_0x0._s_0.X =
           (*(double *)&this->field_0x210 - (this->OldPosition).field0_0x0._s_0.X) * dVar46;
      (this->PartSysVelocity).field0_0x0._s_0.Y = (dVar13 - dVar5) * dVar46;
      (this->PartSysVelocity).field0_0x0._s_0.Z = (dVar14 - dVar4) * dVar46;
    }
    this->bOldPositionValid = true;
    dVar5 = *(double *)&this->field_0x218;
    dVar4 = *(double *)&this->field_0x220;
    (this->OldPosition).field0_0x0._s_0.X = *(double *)&this->field_0x210;
    (this->OldPosition).field0_0x0._s_0.Y = dVar5;
    (this->OldPosition).field0_0x0._s_0.Z = dVar4;
    if (((bool)this->bIsViewRelevanceDirty) &&
       (((this->AsyncWork).Reference == (FBaseGraphTask *)0x0 ||
        (WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true), (bool)this->bIsViewRelevanceDirty))))
    {
      CacheViewRelevanceFlags(this,(this->Template).field0_0x0.DebugPtr);
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    if (this->bSkipUpdateDynamicDataDuringTick == '\0') {
      UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
    }
  }
  LVar18 = local_1f0;
  if (local_1f0.QuadPart != -1) {
    QueryPerformanceCounter(&local_150);
    lVar33 = local_150.QuadPart - (longlong)LVar18;
    if (local_190 != (FParticlePerfStats *)0x0) {
      puVar2 = &(local_190->GameThreadStats).FinalizeCycles;
      *puVar2 = *puVar2 + lVar33;
    }
    if (local_188 != (FParticlePerfStats *)0x0) {
      puVar2 = &(local_188->GameThreadStats).FinalizeCycles;
      *puVar2 = *puVar2 + lVar33;
    }
    if (local_180 != (FParticlePerfStats *)0x0) {
      puVar2 = &(local_180->GameThreadStats).FinalizeCycles;
      *puVar2 = *puVar2 + lVar33;
    }
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar36,CycleScopeEnd);
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(local_138);
  return;
}

// FindReplayClipForIDNumber @ 148174960

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystemReplay * __thiscall
UParticleSystemComponent::FindReplayClipForIDNumber(UParticleSystemComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UParticleSystemReplay *pUVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ReplayClips).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ReplayClips).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UParticleSystemReplay *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(UParticleSystemReplay **)((this->ReplayClips).AllocatorInstance.Data + lVar6);
      if ((pUVar4 != (UParticleSystemReplay *)0x0) && (pUVar4->ClipIDNumber == param_1)) {
        return pUVar4;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ReplayClips).ArrayNum);
  }
  return (UParticleSystemReplay *)0x0;
}

// FinishDestroy @ 148174a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UParticleSystemComponent::FinishDestroy(UParticleSystemComponent *this)

{
  byte bVar1;
  FParticleEmitterInstance *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    bVar1 = this->field_0x57a;
    this->bSkipUpdateDynamicDataDuringTick = '\x01';
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
    this->field_0x57a = (this->field_0x57a ^ bVar1) & 0x10 ^ this->field_0x57a;
  }
  uVar5 = 0;
  uVar7 = uVar5;
  if (0 < (this->EmitterInstances).ArrayNum) {
    do {
      uVar6 = (uint)uVar5;
      uVar4 = 0;
      if ((int)uVar6 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FParticleEmitterInstance **)
                 ((this->EmitterInstances).AllocatorInstance.Data + uVar7);
      if (this_00 != (FParticleEmitterInstance *)0x0) {
        FParticleEmitterInstance::PreDestructorCall(this_00);
        (**(code **)this_00->_padding_)(this_00,1);
        uVar4 = 0;
        if ((int)uVar6 < (this->EmitterInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined8 *)((this->EmitterInstances).AllocatorInstance.Data + uVar7) = 0;
      }
      uVar5 = (ulonglong)(uVar6 + 1);
      uVar7 = uVar7 + 8;
    } while ((int)(uVar6 + 1) < (this->EmitterInstances).ArrayNum);
  }
  UPrimitiveComponent::FinishDestroy((UPrimitiveComponent *)this);
  return;
}

// ForceReset @ 148174e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::ForceReset(UParticleSystemComponent *this)

{
  byte bVar1;
  
  bVar1 = this->field_0x9a;
  ResetParticles(this,true);
  if ((bVar1 & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148174eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0xaf0))(this,0);
    return;
  }
  InitializeSystem(this);
  return;
}

// ForceUpdateBounds @ 148174ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::ForceUpdateBounds(UParticleSystemComponent *this)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0 [56];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  uVar13 = 0;
  lVar14 = (longlong)(this->EmitterInstances).ArrayNum;
  dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar19 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8 = (double)((ulonglong)local_e8 & 0xffffffffffffff00);
  dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar17 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar20 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar18 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar31 = uVar17;
  uVar32 = uVar20;
  uVar33 = uVar16;
  uVar34 = uVar19;
  uVar23 = uVar15;
  uVar26 = uVar18;
  if (0 < lVar14) {
    lVar12 = 0;
    do {
      iVar2 = (this->EmitterInstances).ArrayNum;
      uVar10 = 0;
      if ((int)uVar13 < iVar2) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_128 = (longlong)(int)uVar13;
        local_120 = (longlong)iVar2;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar3 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar12 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x70))(plVar3);
        pdVar11 = (double *)(**(code **)(*plVar3 + 0x60))(plVar3,local_e0);
        if (local_e8._0_1_ == '\0') {
          if (*(char *)(pdVar11 + 6) != '\0') {
            uVar15 = *(undefined4 *)pdVar11;
            uVar18 = *(undefined4 *)((longlong)pdVar11 + 4);
            local_118 = *pdVar11;
            uVar31 = *(undefined4 *)(pdVar11 + 1);
            uVar32 = *(undefined4 *)((longlong)pdVar11 + 0xc);
            dStack_110 = pdVar11[1];
            uVar16 = *(undefined4 *)(pdVar11 + 2);
            uVar19 = *(undefined4 *)((longlong)pdVar11 + 0x14);
            local_108 = pdVar11[2];
            uVar23 = *(undefined4 *)(pdVar11 + 3);
            uVar26 = *(undefined4 *)((longlong)pdVar11 + 0x1c);
            dStack_100 = pdVar11[3];
            uVar17 = *(undefined4 *)(pdVar11 + 4);
            uVar20 = *(undefined4 *)((longlong)pdVar11 + 0x24);
            dStack_f8 = pdVar11[4];
            uVar33 = *(undefined4 *)(pdVar11 + 5);
            uVar34 = *(undefined4 *)((longlong)pdVar11 + 0x2c);
            dStack_f0 = pdVar11[5];
            local_e8 = pdVar11[6];
          }
        }
        else if (*(char *)(pdVar11 + 6) != '\0') {
          local_118 = *pdVar11;
          dVar1 = pdVar11[1];
          if ((double)CONCAT44(uVar18,uVar15) <= local_118) {
            local_118 = (double)CONCAT44(uVar18,uVar15);
          }
          uVar21 = SUB84(dVar1,0);
          uVar24 = (int)((ulonglong)dVar1 >> 0x20);
          if ((double)CONCAT44(uVar32,uVar31) <= dVar1) {
            uVar21 = uVar31;
            uVar24 = uVar32;
          }
          uVar15 = SUB84(local_118,0);
          uVar18 = (undefined4)((ulonglong)local_118 >> 0x20);
          local_108 = pdVar11[2];
          dStack_110 = (double)CONCAT44(uVar24,uVar21);
          if ((double)CONCAT44(uVar19,uVar16) <= local_108) {
            local_108 = (double)CONCAT44(uVar19,uVar16);
          }
          dVar1 = pdVar11[3];
          uVar22 = SUB84(dVar1,0);
          uVar25 = (int)((ulonglong)dVar1 >> 0x20);
          if (dVar1 <= (double)CONCAT44(uVar26,uVar23)) {
            uVar22 = uVar23;
            uVar25 = uVar26;
          }
          uVar16 = SUB84(local_108,0);
          uVar19 = (undefined4)((ulonglong)local_108 >> 0x20);
          dStack_f8 = pdVar11[4];
          dStack_100 = (double)CONCAT44(uVar25,uVar22);
          if (dStack_f8 <= (double)CONCAT44(uVar20,uVar17)) {
            dStack_f8 = (double)CONCAT44(uVar20,uVar17);
          }
          dVar1 = pdVar11[5];
          uVar23 = SUB84(dVar1,0);
          uVar26 = (int)((ulonglong)dVar1 >> 0x20);
          if (dVar1 <= (double)CONCAT44(uVar34,uVar33)) {
            uVar23 = uVar33;
            uVar26 = uVar34;
          }
          uVar17 = SUB84(dStack_f8,0);
          uVar20 = (undefined4)((ulonglong)dStack_f8 >> 0x20);
          dStack_f0 = (double)CONCAT44(uVar26,uVar23);
          uVar31 = uVar21;
          uVar32 = uVar24;
          uVar33 = uVar23;
          uVar34 = uVar26;
          uVar23 = uVar22;
          uVar26 = uVar25;
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar14);
  }
  dVar1 = ((double)CONCAT44(uVar26,uVar23) - (double)CONCAT44(uVar18,uVar15)) *
          __real_3fa99999a0000000;
  dVar5 = ((double)CONCAT44(uVar20,uVar17) - (double)CONCAT44(uVar32,uVar31)) *
          __real_3fa99999a0000000;
  dVar29 = ((double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar19,uVar16)) *
           __real_3fa99999a0000000;
  dVar6 = (double)CONCAT44(uVar18,uVar15) - dVar1;
  dVar8 = (double)CONCAT44(uVar32,uVar31) - dVar5;
  dVar7 = (double)CONCAT44(uVar19,uVar16) - dVar29;
  dVar5 = (dVar5 + (double)CONCAT44(uVar20,uVar17)) - dVar8;
  dVar1 = (dVar1 + (double)CONCAT44(uVar26,uVar23)) - dVar6;
  dVar30 = (dVar29 + (double)CONCAT44(uVar34,uVar33)) - dVar7;
  dVar27 = dVar5 * __real_3fe0000000000000;
  dVar28 = dVar1 * __real_3fe0000000000000;
  dVar29 = dVar30 * __real_3fe0000000000000;
  *(double *)&this->field_0x110 = dVar28 + dVar6;
  *(double *)&this->field_0x118 = dVar27 + dVar8;
  *(double *)&this->field_0x120 = dVar29 + dVar7;
  *(double *)&this->field_0x128 = dVar28;
  *(double *)&this->field_0x130 = dVar27;
  *(double *)&this->field_0x138 = dVar29;
  *(double *)&this->field_0x140 =
       SQRT((dVar5 * dVar5 + dVar1 * dVar1 + dVar30 * dVar30) * __real_3fd0000000000000);
  return;
}

// GenerateParticleEvent @ 148175a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::GenerateParticleEvent
          (UParticleSystemComponent *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar7 = (this->KismetEvents).ArrayNum;
  piVar1 = &(this->KismetEvents).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->KismetEvents).AllocatorInstance,piVar1);
  }
  (this->KismetEvents).ArrayNum = uVar7 + 1;
  uVar8 = 0;
  if ((int)uVar7 < (int)(uVar7 + 1)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = (this->KismetEvents).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x50;
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    pFVar9 = (FScriptContainerElement *)0x0;
  }
  else {
    *(undefined8 *)(pFVar9 + 0x40) = 0;
    *(undefined8 *)(pFVar9 + 0x48) = 0;
  }
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  *(double *)(pFVar9 + 0x10) = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 0x18) = dVar4;
  *(FName *)(pFVar9 + 4) = param_1;
  dVar4 = (param_5->field0_0x0)._s_0.X;
  dVar5 = (param_5->field0_0x0)._s_0.Y;
  *(double *)(pFVar9 + 0x20) = dVar2;
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  *(double *)(pFVar9 + 0x28) = dVar4;
  *(double *)(pFVar9 + 0x30) = dVar5;
  *(undefined4 *)pFVar9 = 5;
  *(float *)(pFVar9 + 0xc) = param_2;
  *(double *)(pFVar9 + 0x38) = dVar2;
  return;
}

// GetActorParameter @ 148176960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetActorParameter
          (UParticleSystemComponent *this,FName param_1,AActor **param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  if (param_1 != (FName)0x0) {
    pTVar6 = GetAsyncInstanceParameters(this);
    uVar9 = 0;
    iVar7 = pTVar6->ArrayNum;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (pTVar6->AllocatorInstance).Data;
        if ((*(FName *)(pFVar1 + lVar8) == param_1) &&
           (pFVar1[lVar8 + 8] == (FScriptContainerElement)0x6)) {
          *param_2 = *(AActor **)(pFVar1 + lVar8 + 0x50);
          return true;
        }
        iVar7 = pTVar6->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xe0;
      } while ((int)uVar9 < iVar7);
    }
  }
  return false;
}

// GetAnyVectorParameter @ 148176aa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetAnyVectorParameter
          (UParticleSystemComponent *this,FName param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement FVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  double dVar19;
  
  if (param_1 != (FName)0x0) {
    pTVar15 = GetAsyncInstanceParameters(this);
    uVar17 = 0;
    iVar16 = pTVar15->ArrayNum;
    if (0 < iVar16) {
      lVar18 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar17 < iVar16) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        fVar1 = __real_3f800000;
        pFVar9 = (pTVar15->AllocatorInstance).Data;
        if (*(FName *)(pFVar9 + lVar18) == param_1) {
          FVar8 = pFVar9[lVar18 + 8];
          if (FVar8 == (FScriptContainerElement)0x3) {
            dVar19 = *(double *)(pFVar9 + lVar18 + 0x18 + 8);
            (param_2->field0_0x0)._s_0.X = *(double *)(pFVar9 + lVar18 + 0x18);
            (param_2->field0_0x0)._s_0.Y = dVar19;
            (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar9 + lVar18 + 0x28);
            return true;
          }
          if (FVar8 == (FScriptContainerElement)0x4) {
            uVar17 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
            uVar13 = uVar17 * 0xbb38435 + 0x3619636b;
            uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
            (this->RandomStream).Seed = uVar14;
            dVar19 = *(double *)(pFVar9 + lVar18 + 0x38);
            dVar3 = *(double *)(pFVar9 + lVar18 + 0x20);
            dVar4 = *(double *)(pFVar9 + lVar18 + 0x40);
            dVar5 = *(double *)(pFVar9 + lVar18 + 0x28);
            dVar6 = *(double *)(pFVar9 + lVar18 + 0x20);
            dVar7 = *(double *)(pFVar9 + lVar18 + 0x28);
            (param_2->field0_0x0)._s_0.X =
                 (*(double *)(pFVar9 + lVar18 + 0x30) - *(double *)(pFVar9 + lVar18 + 0x18)) *
                 (double)((float)(uVar14 >> 9 | 0x3f800000) - fVar1) +
                 *(double *)(pFVar9 + lVar18 + 0x18);
            (param_2->field0_0x0)._s_0.Y =
                 (dVar19 - dVar3) * (double)((float)(uVar13 >> 9 | 0x3f800000) - fVar1) + dVar6;
            (param_2->field0_0x0)._s_0.Z =
                 (dVar4 - dVar5) * (double)((float)(uVar17 >> 9 | 0x3f800000) - fVar1) + dVar7;
            return true;
          }
          if (FVar8 == (FScriptContainerElement)0x8) {
            return true;
          }
          if (FVar8 == (FScriptContainerElement)0x1) {
            dVar19 = (double)*(float *)(pFVar9 + lVar18 + 0xc);
            (param_2->field0_0x0)._s_0.X = dVar19;
            (param_2->field0_0x0)._s_0.Y = dVar19;
            (param_2->field0_0x0)._s_0.Z = dVar19;
            return true;
          }
          if (FVar8 == (FScriptContainerElement)0x2) {
            uVar17 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
            (this->RandomStream).Seed = uVar17;
            dVar19 = (double)((*(float *)(pFVar9 + lVar18 + 0x10) -
                              *(float *)(pFVar9 + lVar18 + 0xc)) *
                              ((float)(uVar17 >> 9 | 0x3f800000) - __real_3f800000) +
                             *(float *)(pFVar9 + lVar18 + 0xc));
            (param_2->field0_0x0)._s_0.X = dVar19;
            (param_2->field0_0x0)._s_0.Y = dVar19;
            (param_2->field0_0x0)._s_0.Z = dVar19;
            return true;
          }
          if (FVar8 == (FScriptContainerElement)0x5) {
            fVar1 = FLinearColor::sRGBToLinearTable[(byte)pFVar9[lVar18 + 0x49]];
            fVar2 = FLinearColor::sRGBToLinearTable[(byte)pFVar9[lVar18 + 0x48]];
            (param_2->field0_0x0)._s_0.X =
                 (double)FLinearColor::sRGBToLinearTable[(byte)pFVar9[lVar18 + 0x4a]];
            (param_2->field0_0x0)._s_0.Y = (double)fVar1;
            (param_2->field0_0x0)._s_0.Z = (double)fVar2;
            return true;
          }
        }
        iVar16 = pTVar15->ArrayNum;
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 0xe0;
      } while ((int)uVar17 < iVar16);
    }
  }
  return false;
}

// GetApproxDistanceSquared @ 148176d50

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UParticleSystemComponent::GetApproxDistanceSquared
          (UParticleSystemComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = *(double *)&this->field_0x120 - *(double *)&this->field_0x138;
  dVar6 = *(double *)&this->field_0x120 + *(double *)&this->field_0x138;
  dVar4 = *(double *)&this->field_0x110 - *(double *)&this->field_0x128;
  dVar5 = 0.0;
  dVar3 = *(double *)&this->field_0x118 - *(double *)&this->field_0x130;
  dVar8 = *(double *)&this->field_0x118 + *(double *)&this->field_0x130;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar7 = *(double *)&this->field_0x110 + *(double *)&this->field_0x128;
  if ((dVar1 < dVar4) || (dVar4 = dVar7, dVar7 < dVar1)) {
    dVar5 = (dVar1 - dVar4) * (dVar1 - dVar4);
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if ((dVar1 < dVar3) || (dVar3 = dVar8, dVar8 < dVar1)) {
    dVar5 = dVar5 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  if ((dVar1 < dVar2) || (dVar2 = dVar6, dVar6 < dVar1)) {
    dVar5 = dVar5 + (dVar1 - dVar2) * (dVar1 - dVar2);
  }
  return (float)dVar5;
}

// GetApproxMemoryUsage @ 148176e60

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall UParticleSystemComponent::GetApproxMemoryUsage(UParticleSystemComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [16];
  
  pFVar4 = (this->EmitterInstances).AllocatorInstance.Data;
  iVar2 = (this->EmitterInstances).ArrayNum;
  uVar5 = 0x890;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FParticleEmitterInstance_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x130))(plVar3,local_res18,local_res10);
      uVar5 = uVar5 + local_res10[0];
    }
    pFVar4 = pFVar4 + 8;
  }
  return uVar5;
}

// GetAsyncComponentToWorld @ 1481779f0

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UParticleSystemComponent::GetAsyncComponentToWorld(UParticleSystemComponent *this)

{
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  
  if (this->bParallelRenderThreadUpdate == '\0') {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      if (this->bAsyncDataCopyIsValid == '\0') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bAsyncDataCopyIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticleSystemComponent.h"
                           ,0x397,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TTransform<double> *)(*pcVar1)();
          return pTVar3;
        }
      }
      return &this->AsyncComponentToWorld;
    }
  }
  return (TTransform<double> *)&this->field_0x1f0;
}

// GetAsyncInstanceParameters @ 148177ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> * __thiscall
UParticleSystemComponent::GetAsyncInstanceParameters(UParticleSystemComponent *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->bParallelRenderThreadUpdate == '\0') {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      if (this->bAsyncDataCopyIsValid == '\0') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bAsyncDataCopyIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticleSystemComponent.h"
                           ,0x3a1,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar3;
        }
      }
      return &this->AsyncInstanceParameters;
    }
  }
  return &this->InstanceParameters;
}

// GetBeamEndPoint @ 1481780b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetBeamEndPoint
          (UParticleSystemComponent *this,int param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
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
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148178134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBeamSourcePoint @ 148178160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetBeamSourcePoint
          (UParticleSystemComponent *this,int param_1,int param_2,TVector<double> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar1 + 0x1c0))(plVar1,param_2,param_3);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBeamSourceStrength @ 148178210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetBeamSourceStrength
          (UParticleSystemComponent *this,int param_1,int param_2,float *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar1 + 0x1d0))(plVar1,param_2,param_3);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBeamSourceTangent @ 1481782c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetBeamSourceTangent
          (UParticleSystemComponent *this,int param_1,int param_2,TVector<double> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2,param_3);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBeamTargetPoint @ 148178370

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetBeamTargetPoint
          (UParticleSystemComponent *this,int param_1,int param_2,TVector<double> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar1 + 0x1d8))(plVar1,param_2,param_3);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBeamTargetStrength @ 148178420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetBeamTargetStrength
          (UParticleSystemComponent *this,int param_1,int param_2,float *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1,param_2,param_3);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBeamTargetTangent @ 1481784d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetBeamTargetTangent
          (UParticleSystemComponent *this,int param_1,int param_2,TVector<double> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2,param_3);
      return (bool)uVar4;
    }
  }
  return false;
}

// GetBodyInstance @ 148178580

/* WARNING: Enum "Type": Some values do not have unique names */

FBodyInstance * __thiscall
UParticleSystemComponent::GetBodyInstance
          (UParticleSystemComponent *this,FName param_1,bool param_2,int param_3)

{
  return (FBodyInstance *)0x0;
}

// GetColorParameter @ 148178940

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetColorParameter
          (UParticleSystemComponent *this,FName param_1,FLinearColor *param_2)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  
  if (param_1 != (FName)0x0) {
    pTVar8 = GetAsyncInstanceParameters(this);
    uVar11 = 0;
    iVar9 = pTVar8->ArrayNum;
    if (0 < iVar9) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < iVar9) {
          uVar7 = ~uVar11 >> 0x1f;
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
        pFVar3 = (pTVar8->AllocatorInstance).Data;
        if ((*(FName *)(pFVar3 + lVar10) == param_1) &&
           (pFVar3[lVar10 + 8] == (FScriptContainerElement)0x5)) {
          fVar1 = FLinearColor::sRGBToLinearTable[(byte)pFVar3[lVar10 + 0x49]];
          fVar2 = FLinearColor::sRGBToLinearTable[(byte)pFVar3[lVar10 + 0x48]];
          fVar12 = (float)(byte)pFVar3[lVar10 + 0x4b] * __real_3b808081;
          (param_2->field0_0x0)._s_0.R =
               FLinearColor::sRGBToLinearTable[(byte)pFVar3[lVar10 + 0x4a]];
          (param_2->field0_0x0)._s_0.G = fVar1;
          (param_2->field0_0x0)._s_0.B = fVar2;
          (param_2->field0_0x0)._s_0.A = fVar12;
          return true;
        }
        iVar9 = pTVar8->ArrayNum;
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0xe0;
      } while ((int)uVar11 < iVar9);
    }
  }
  return false;
}

// GetCurrentDetailMode @ 148178e70

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UParticleSystemComponent::GetCurrentDetailMode(UParticleSystemComponent *this)

{
  FCachedSystemScalabilityCVars *pFVar1;
  
  pFVar1 = GetCachedScalabilityCVars();
  return pFVar1->DetailMode;
}

// GetDetailedInfoInternal @ 148179890

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UParticleSystemComponent::GetDetailedInfoInternal
          (UParticleSystemComponent *this,FString *__return_storage_ptr__)

{
  UParticleSystem *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->Template).field0_0x0.DebugPtr;
  if (this_00 == (UParticleSystem *)0x0) {
    ::FString::operator=(__return_storage_ptr__,L"No_ParticleSystem");
  }
  else {
    pFVar2 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0)
    ;
    if (__return_storage_ptr__ != pFVar2) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetFXSystemAsset @ 148179dd0

/* WARNING: Enum "Type": Some values do not have unique names */

UFXSystemAsset * __thiscall
UParticleSystemComponent::GetFXSystemAsset(UParticleSystemComponent *this)

{
  return (UFXSystemAsset *)(this->Template).field0_0x0.DebugPtr;
}

// GetFloatParameter @ 148179e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetFloatParameter
          (UParticleSystemComponent *this,FName param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  if (param_1 != (FName)0x0) {
    pTVar6 = GetAsyncInstanceParameters(this);
    uVar9 = 0;
    iVar7 = pTVar6->ArrayNum;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (pTVar6->AllocatorInstance).Data;
        if (*(FName *)(pFVar1 + lVar8) == param_1) {
          if (pFVar1[lVar8 + 8] == (FScriptContainerElement)0x1) {
            *param_2 = *(float *)(pFVar1 + lVar8 + 0xc);
            return true;
          }
          if (pFVar1[lVar8 + 8] == (FScriptContainerElement)0x2) {
            uVar9 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
            (this->RandomStream).Seed = uVar9;
            *param_2 = (*(float *)(pFVar1 + lVar8 + 0x10) - *(float *)(pFVar1 + lVar8 + 0xc)) *
                       ((float)(uVar9 >> 9 | 0x3f800000) - __real_3f800000) +
                       *(float *)(pFVar1 + lVar8 + 0xc);
            return true;
          }
        }
        iVar7 = pTVar6->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xe0;
      } while ((int)uVar9 < iVar7);
    }
  }
  return false;
}

// GetLODLevel @ 14817a2b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UParticleSystemComponent::GetLODLevel(UParticleSystemComponent *this)

{
  return this->LODLevel;
}

// GetManagerTickData @ 14817a380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPSCTickData * __thiscall
UParticleSystemComponent::GetManagerTickData(UParticleSystemComponent *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleSystemWorldManager *pFVar4;
  FPSCTickData *pFVar5;
  uint uVar6;
  
  pFVar4 = GetWorldManager(this);
  uVar6 = this->ManagerHandle;
  uVar3 = 0;
  if ((int)uVar6 < (pFVar4->PSCTickData).ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPSCTickData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FPSCTickData *)
         ((pFVar4->PSCTickData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
}

// GetMaterial @ 14817a410

/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInterface * __thiscall
UParticleSystemComponent::GetMaterial(UParticleSystemComponent *this,int param_1)

{
  UParticleSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->EmitterMaterials).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->EmitterMaterials).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
    if (*(longlong *)((this->EmitterMaterials).AllocatorInstance.Data + lVar6 * 8) != 0) {
      uVar4 = 0;
      if (param_1 < (this->EmitterMaterials).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      return *(UMaterialInterface **)((this->EmitterMaterials).AllocatorInstance.Data + lVar6 * 8);
    }
  }
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (((pUVar1 != (UParticleSystem *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->Emitters).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (pUVar1->Emitters).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
    lVar6 = *(longlong *)((pUVar1->Emitters).AllocatorInstance.Data + lVar6 * 8);
    if (((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x48))) &&
       ((**(longlong **)(lVar6 + 0x40) != 0 &&
        (lVar6 = *(longlong *)(**(longlong **)(lVar6 + 0x40) + 0x30), lVar6 != 0)))) {
      return *(UMaterialInterface **)(lVar6 + 0x30);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialByName @ 14817a5a0

/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInterface * __thiscall
UParticleSystemComponent::GetMaterialByName(UParticleSystemComponent *this,FName param_1)

{
  UMaterialInterface *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014817a5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMaterialInterface *)(**(code **)(*(longlong *)this + 3000))();
  return pUVar1;
}

// GetMaterialParameter @ 14817a5b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetMaterialParameter
          (UParticleSystemComponent *this,FName param_1,UMaterialInterface **param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  if (param_1 != (FName)0x0) {
    pTVar6 = GetAsyncInstanceParameters(this);
    uVar9 = 0;
    iVar7 = pTVar6->ArrayNum;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (pTVar6->AllocatorInstance).Data;
        if ((*(FName *)(pFVar1 + lVar8) == param_1) &&
           (pFVar1[lVar8 + 8] == (FScriptContainerElement)0x7)) {
          *param_2 = *(UMaterialInterface **)(pFVar1 + lVar8 + 0x58);
          return true;
        }
        iVar7 = pTVar6->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xe0;
      } while ((int)uVar9 < iVar7);
    }
  }
  return false;
}

// GetNameForMaterial @ 14817ab10

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
UParticleSystemComponent::GetNameForMaterial
          (UParticleSystemComponent *this,UMaterialInterface *param_1)

{
  UParticleSystem *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong in_R8;
  
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  uVar9 = 0;
  if ((pUVar1 != (UParticleSystem *)0x0) &&
     (iVar7 = (pUVar1->NamedMaterialSlots).ArrayNum, uVar10 = uVar9, 0 < iVar7)) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar6 = (FName)(*pcVar3)();
        return FVar6;
      }
      lVar2 = *(longlong *)((pUVar1->NamedMaterialSlots).AllocatorInstance.Data + uVar10 + 8);
      if (lVar2 == 0) {
        bVar4 = in_R8 == 0;
      }
      else {
        bVar4 = lVar2 == in_R8;
      }
      iVar7 = (pUVar1->NamedMaterialSlots).ArrayNum;
      if (bVar4) {
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          FVar6 = (FName)(*pcVar3)();
          return FVar6;
        }
        param_1->_padding_ =
             *(longlong *)
              ((pUVar1->NamedMaterialSlots).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10);
        return (FName)param_1;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// GetNamedMaterial @ 14817ac50

/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInterface * __thiscall
UParticleSystemComponent::GetNamedMaterial(UParticleSystemComponent *this,FName param_1)

{
  UParticleSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UMaterialInterface *pUVar6;
  longlong lVar7;
  
  uVar4 = (**(code **)(*(longlong *)this + 0xbc0))();
  lVar7 = (longlong)(int)uVar4;
  if (uVar4 == 0xffffffff) {
    return (UMaterialInterface *)0x0;
  }
  pUVar6 = (UMaterialInterface *)0x0;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->EmitterMaterials).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar4 < (this->EmitterMaterials).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UMaterialInterface *)(*pcVar2)();
      return pUVar6;
    }
    if (*(longlong *)((this->EmitterMaterials).AllocatorInstance.Data + lVar7 * 8) != 0) {
      uVar5 = 0;
      if ((int)uVar4 < (this->EmitterMaterials).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UMaterialInterface *)(*pcVar2)();
        return pUVar6;
      }
      return *(UMaterialInterface **)((this->EmitterMaterials).AllocatorInstance.Data + lVar7 * 8);
    }
  }
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystem *)0x0) {
    uVar5 = 0;
    if ((int)uVar4 < (pUVar1->NamedMaterialSlots).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UMaterialInterface *)(*pcVar2)();
      return pUVar6;
    }
    pUVar6 = *(UMaterialInterface **)
              ((pUVar1->NamedMaterialSlots).AllocatorInstance.Data + lVar7 * 0x10 + 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  return pUVar6;
}

// GetNamedMaterialIndex @ 14817ae00

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UParticleSystemComponent::GetNamedMaterialIndex(UParticleSystemComponent *this,FName param_1)

{
  UParticleSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystem *)0x0) {
    iVar5 = (pUVar1->NamedMaterialSlots).ArrayNum;
    uVar7 = 0;
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (param_1 == *(FName *)((pUVar1->NamedMaterialSlots).AllocatorInstance.Data + lVar6)) {
          return uVar7;
        }
        iVar5 = (pUVar1->NamedMaterialSlots).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while ((int)uVar7 < iVar5);
    }
  }
  return -1;
}

// GetNumActiveParticles @ 14817aec0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UParticleSystemComponent::GetNumActiveParticles(UParticleSystemComponent *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  iVar5 = 0;
  uVar6 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      lVar1 = *(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar7);
      if (lVar1 != 0) {
        iVar5 = iVar5 + *(int *)(lVar1 + 0x18c);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->EmitterInstances).ArrayNum);
  }
  return iVar5;
}

// GetNumMaterials @ 14817af90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UParticleSystemComponent::GetNumMaterials(UParticleSystemComponent *this)

{
  UParticleSystem *pUVar1;
  
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystem *)0x0) {
    return (pUVar1->Emitters).ArrayNum;
  }
  return 0;
}

// GetOwnedTrailEmitters @ 14817afd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::GetOwnedTrailEmitters
          (UParticleSystemComponent *this,
          TArray<FParticleAnimTrailEmitterInstance_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1,void *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  ForElementType<FParticleAnimTrailEmitterInstance_*> FVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FParticleAnimTrailEmitterInstance_*> FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong *local_38 [2];
  
  pFVar10 = (this->EmitterInstances).AllocatorInstance.Data;
  iVar2 = (this->EmitterInstances).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    if ((this->EmitterInstances).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    plVar3 = *(longlong **)pFVar10;
    if ((plVar3 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar3 + 0x1f8))(plVar3), cVar6 != '\0')) {
      local_38[0] = plVar3;
      if (param_3) {
        plVar3[0x62] = (longlong)param_2;
      }
      else if ((void *)plVar3[0x62] != param_2) goto LAB_14817b13a;
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<FParticleAnimTrailEmitterInstance_*>)param_1;
      if (FVar4 != (ForElementType<FParticleAnimTrailEmitterInstance_*>)0x0) {
        FVar9 = FVar4;
      }
      if ((ulonglong)FVar9 <= local_38) {
        FVar9 = (ForElementType<FParticleAnimTrailEmitterInstance_*>)param_1;
        if (FVar4 != (ForElementType<FParticleAnimTrailEmitterInstance_*>)0x0) {
          FVar9 = FVar4;
        }
        if ((local_38 < (longlong **)((longlong)FVar9 + (longlong)param_1->ArrayMax * 8)) &&
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
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FParticleAnimTrailEmitterInstance_*>_>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<FParticleAnimTrailEmitterInstance_*>)param_1;
      if (FVar4 != (ForElementType<FParticleAnimTrailEmitterInstance_*>)0x0) {
        FVar9 = FVar4;
      }
      *(longlong **)((longlong)FVar9 + (longlong)iVar8 * 8) = local_38[0];
    }
LAB_14817b13a:
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14817d260

UClass * __cdecl UParticleSystemComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystemComponent",
               &Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton,
               StaticRegisterNativesUParticleSystemComponent,0x890,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UParticleSystemComponent>,
               InternalVTableHelperCtorCaller<UParticleSystemComponent>,local_res8,
               UFXSystemComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton;
}

// GetResourceSizeEx @ 14817d520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::GetResourceSizeEx(UParticleSystemComponent *this,FResourceSizeEx *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  UPrimitiveComponent::GetResourceSizeEx((UPrimitiveComponent *)this,param_1);
  uVar5 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar6);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->EmitterInstances).ArrayNum);
  }
  return;
}

// GetStreamingRenderAssetInfo @ 14817f060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::GetStreamingRenderAssetInfo
          (UParticleSystemComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UParticleLODLevel *this_00;
  UParticleModuleRequired *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  FStreamingTextureLevelContext *this_01;
  bool bVar8;
  uint uVar9;
  ForElementType<TTuple<UMaterialInterface_const_*,float>_> FVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  UParticleSystem *pUVar14;
  ulonglong uVar15;
  ForElementType<TTuple<UMaterialInterface_const_*,float>_> FVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [4];
  uint local_154;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_150;
  longlong local_140;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *local_138;
  FStreamingTextureLevelContext *local_130;
  FPrimitiveMaterialInfo local_128;
  TArray<TTuple<UMaterialInterface_const_*,float>,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_110;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar11 = 0;
  pUVar14 = (this->Template).field0_0x0.DebugPtr;
  local_110.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0xc;
  local_138 = param_2;
  local_130 = param_1;
  if (pUVar14 != (UParticleSystem *)0x0) {
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    local_154 = 0;
    if (0 < (pUVar14->Emitters).ArrayNum) {
      local_140 = 0;
      uVar15 = uVar11;
      do {
        lVar12 = local_140;
        uVar17 = (uint)uVar15;
        uVar9 = 0;
        if ((int)uVar17 < (pUVar14->Emitters).ArrayNum) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar7 = local_138;
        lVar3 = *(longlong *)((pUVar14->Emitters).AllocatorInstance.Data + lVar12);
        if ((lVar3 != 0) && (uVar15 = uVar11, uVar18 = uVar11, 0 < *(int *)(lVar3 + 0x48))) {
          do {
            uVar13 = (uint)uVar15;
            uVar9 = 0;
            if ((int)uVar13 < *(int *)(lVar3 + 0x48)) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar6 = local_150._8_8_;
            this_00 = *(UParticleLODLevel **)(uVar18 + *(longlong *)(lVar3 + 0x40));
            if ((this_00 != (UParticleLODLevel *)0x0) &&
               ((this_00->RequiredModule).field0_0x0.DebugPtr != (UParticleModuleRequired *)0x0)) {
              local_150._8_8_ = local_150._8_8_ & 0xffffffff00000000;
              if ((longlong)uVar6 < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,0,&local_150.AllocatorInstance,0,&local_150.ArrayMax);
              }
              UParticleLODLevel::GetUsedMaterials
                        (this_00,&local_150,
                         &((this->Template).field0_0x0.DebugPtr)->NamedMaterialSlots,
                         (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                         &this->EmitterMaterials);
              pUVar4 = (this_00->RequiredModule).field0_0x0.DebugPtr;
              iVar1 = pUVar4->SubImages_Horizontal;
              iVar2 = pUVar4->SubImages_Vertical;
              if (iVar2 < iVar1) {
                iVar2 = iVar1;
              }
              AddMaterials(&local_110,&local_150,(float)iVar2);
              UParticleLODLevel::GetStreamingMeshInfo
                        (this_00,(TBoxSphereBounds<double,double> *)&this->field_0x110,pTVar7);
            }
            lVar12 = local_140;
            uVar15 = (ulonglong)(uVar13 + 1);
            uVar18 = uVar18 + 8;
            uVar17 = local_154;
          } while ((int)(uVar13 + 1) < *(int *)(lVar3 + 0x48));
        }
        pUVar14 = (this->Template).field0_0x0.DebugPtr;
        local_154 = uVar17 + 1;
        uVar15 = (ulonglong)local_154;
        local_140 = lVar12 + 8;
      } while ((int)local_154 < (pUVar14->Emitters).ArrayNum);
    }
    pTVar7 = local_138;
    AddMaterials(&local_110,
                 (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)&this->EmitterMaterials
                 ,__real_3f800000);
    iVar1 = local_110.ArrayNum;
    this_01 = local_130;
    uVar11 = (ulonglong)local_110.ArrayNum;
    if (local_110.ArrayNum != 0) {
      local_128.UVChannelData = &UVChannelData;
      local_128.Material = (UMaterialInterface *)0x0;
      FVar16 = (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)&local_110;
      if (local_110.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0) {
        FVar16 = local_110.AllocatorInstance.SecondaryData;
      }
      local_128.PackedRelativeBox = 0xffff0000;
      FVar10 = (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)&local_110;
      if (local_110.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0) {
        FVar10 = local_110.AllocatorInstance.SecondaryData;
      }
      lVar12 = uVar11 * 0x10;
      while( true ) {
        if ((uint)uVar11 != iVar1) {
          `TCheckedPointerIterator<TTuple<UMaterialInterface_const_*,float>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_158);
        }
        if (FVar16 == (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)
                      (lVar12 + (longlong)FVar10)) break;
        local_128.Material = *(UMaterialInterface **)FVar16;
        FStreamingTextureLevelContext::ProcessMaterial
                  (this_01,(TBoxSphereBounds<double,double> *)&this->field_0x110,&local_128,
                   (float)((double)*(float *)((longlong)FVar16 + 8) * *(double *)&this->field_0x140)
                   ,pTVar7,false,(UPrimitiveComponent *)0x0);
        uVar11 = (ulonglong)(uint)local_110.ArrayNum;
        FVar16 = (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)
                 ((longlong)FVar16 + 0x10);
      }
    }
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  if (local_110.AllocatorInstance.SecondaryData !=
      (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0) {
    FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetUsedMaterials @ 148180190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::GetUsedMaterials
          (UParticleSystemComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  longlong lVar2;
  UParticleLODLevel *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  UParticleSystem *pUVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  pUVar8 = (this->Template).field0_0x0.DebugPtr;
  if ((pUVar8 != (UParticleSystem *)0x0) && (uVar11 = 0, 0 < (pUVar8->Emitters).ArrayNum)) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (pUVar8->Emitters).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((pUVar8->Emitters).AllocatorInstance.Data + lVar10);
      if ((lVar2 != 0) && (uVar7 = 0, 0 < *(int *)(lVar2 + 0x48))) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar7 < *(int *)(lVar2 + 0x48)) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = *(UParticleLODLevel **)(lVar9 + *(longlong *)(lVar2 + 0x40));
          if (this_00 != (UParticleLODLevel *)0x0) {
            UParticleLODLevel::GetUsedMaterials
                      (this_00,param_1,&((this->Template).field0_0x0.DebugPtr)->NamedMaterialSlots,
                       (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                       &this->EmitterMaterials);
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar7 < *(int *)(lVar2 + 0x48));
      }
      pUVar8 = (this->Template).field0_0x0.DebugPtr;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar11 < (pUVar8->Emitters).ArrayNum);
  }
  if ((param_1 ==
       (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)&this->EmitterMaterials) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->EmitterMaterials).ArrayNum;
  if (iVar1 == 0) {
    return;
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int>
            ((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8,
             (TObjectPtr<UMaterialInterface> *)(this->EmitterMaterials).AllocatorInstance.Data,iVar1
            );
  return;
}

// GetVectorParameter @ 148180390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::GetVectorParameter
          (UParticleSystemComponent *this,FName param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  
  if (param_1 != (FName)0x0) {
    pTVar15 = GetAsyncInstanceParameters(this);
    uVar18 = 0;
    iVar16 = pTVar15->ArrayNum;
    if (0 < iVar16) {
      lVar17 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar18 < iVar16) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        fVar10 = __real_3f800000;
        pFVar8 = (pTVar15->AllocatorInstance).Data;
        if (*(FName *)(pFVar8 + lVar17) == param_1) {
          FVar7 = pFVar8[lVar17 + 8];
          if (FVar7 == (FScriptContainerElement)0x3) {
            dVar1 = *(double *)(pFVar8 + lVar17 + 0x18 + 8);
            (param_2->field0_0x0)._s_0.X = *(double *)(pFVar8 + lVar17 + 0x18);
            (param_2->field0_0x0)._s_0.Y = dVar1;
            (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar8 + lVar17 + 0x28);
            return true;
          }
          if (FVar7 == (FScriptContainerElement)0x4) {
            uVar18 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
            uVar13 = uVar18 * 0xbb38435 + 0x3619636b;
            uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
            (this->RandomStream).Seed = uVar14;
            dVar1 = *(double *)(pFVar8 + lVar17 + 0x38);
            dVar2 = *(double *)(pFVar8 + lVar17 + 0x20);
            dVar3 = *(double *)(pFVar8 + lVar17 + 0x40);
            dVar4 = *(double *)(pFVar8 + lVar17 + 0x28);
            dVar5 = *(double *)(pFVar8 + lVar17 + 0x20);
            dVar6 = *(double *)(pFVar8 + lVar17 + 0x28);
            (param_2->field0_0x0)._s_0.X =
                 (*(double *)(pFVar8 + lVar17 + 0x30) - *(double *)(pFVar8 + lVar17 + 0x18)) *
                 (double)((float)(uVar14 >> 9 | 0x3f800000) - fVar10) +
                 *(double *)(pFVar8 + lVar17 + 0x18);
            (param_2->field0_0x0)._s_0.Y =
                 (dVar1 - dVar2) * (double)((float)(uVar13 >> 9 | 0x3f800000) - fVar10) + dVar5;
            (param_2->field0_0x0)._s_0.Z =
                 (dVar3 - dVar4) * (double)((float)(uVar18 >> 9 | 0x3f800000) - fVar10) + dVar6;
            return true;
          }
          if (FVar7 == (FScriptContainerElement)0x8) {
            return true;
          }
        }
        iVar16 = pTVar15->ArrayNum;
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0xe0;
      } while ((int)uVar18 < iVar16);
    }
  }
  return false;
}

// GetWorldManager @ 148180680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FParticleSystemWorldManager * __thiscall
UParticleSystemComponent::GetWorldManager(UParticleSystemComponent *this)

{
  int iVar1;
  UWorld *pUVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  
  pUVar2 = *(UWorld **)&this->field_0xb0;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  uVar4 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (FParticleSystemWorldManager::WorldManagers._8_4_ !=
      FParticleSystemWorldManager::WorldManagers._52_4_) {
    lVar5 = 0x154c5fb18;
    if (FParticleSystemWorldManager::WorldManagers._64_8_ != 0) {
      lVar5 = FParticleSystemWorldManager::WorldManagers._64_8_;
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (FParticleSystemWorldManager::WorldManagers._72_4_ - 1 &
                             (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar1 != -1) {
      lVar5 = FParticleSystemWorldManager::WorldManagers._0_8_ + (longlong)iVar1 * 0x18;
      if (*(UWorld **)(FParticleSystemWorldManager::WorldManagers._0_8_ + (longlong)iVar1 * 0x18) ==
          pUVar2) {
        puVar3 = (undefined8 *)(lVar5 + 8);
        if (lVar5 == 0) {
          puVar3 = (undefined8 *)0x0;
        }
        if (puVar3 == (undefined8 *)0x0) {
          return (FParticleSystemWorldManager *)0x0;
        }
        return (FParticleSystemWorldManager *)*puVar3;
      }
      iVar1 = *(int *)(lVar5 + 0x10);
    }
  }
  return (FParticleSystemWorldManager *)0x0;
}

// HasCompleted @ 1481812d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::HasCompleted(UParticleSystemComponent *this)

{
  int iVar1;
  FParticleEmitterInstance *this_00;
  UParticleLODLevel *pUVar2;
  UParticleSystem *pUVar3;
  longlong *plVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  UClass *pUVar12;
  FString *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  uint local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  bVar20 = true;
  bVar7 = true;
  if ((this->ReplayState).Value != '\0') {
    return false;
  }
  uVar18 = 0;
  bVar11 = false;
  local_res8 = 0;
  uVar15 = uVar18;
  if (0 < (this->EmitterInstances).ArrayNum) {
    do {
      uVar19 = (uint)uVar15;
      uVar14 = 0;
      if ((int)uVar19 < (this->EmitterInstances).ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      this_00 = *(FParticleEmitterInstance **)
                 ((this->EmitterInstances).AllocatorInstance.Data + uVar18 * 8);
      if (((this_00 != (FParticleEmitterInstance *)0x0) &&
          (pUVar2 = this_00->CurrentLODLevel, pUVar2 != (UParticleLODLevel *)0x0)) &&
         (this_00->bEnabled != 0)) {
        if (this_00->bEmitterIsDone == '\0') {
          bVar7 = false;
        }
        if (pUVar2->bEnabled == 0) {
          pUVar5 = (UObject *)pUVar2->_padding_;
          if (pUVar5 == (UObject *)0x0) {
            pFVar13 = GetTypeName<UParticleEmitter>(&local_48);
            if ((pFVar13->Data).ArrayNum == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar17);
          }
          pUVar12 = Z_Construct_UClass_UParticleEmitter_NoRegister();
          iVar1 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar12->_padding_)) {
            pFVar13 = GetTypeName<UParticleEmitter>(&local_68);
            pwVar17 = L"";
            if ((pFVar13->Data).ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
            pFVar13 = GetFullNameForCastLogError<UObject>(&local_58,pUVar5);
            if ((pFVar13->Data).ArrayNum != 0) {
              pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar17,pwVar16);
          }
          if ((char)pUVar5[1].field_0xf < '\0') {
            bVar20 = false;
          }
        }
        else if ((((pUVar2->RequiredModule).field0_0x0.DebugPtr)->EmitterLoops < 1) &&
                (cVar10 = (**(code **)(this_00->_padding_ + 0x1f8))(this_00), cVar10 == '\0')) {
          if (this->bWasDeactivated != '\0') {
LAB_148181414:
            if (this_00->ActiveParticles == 0) goto LAB_148181423;
          }
LAB_14818141e:
          bVar20 = false;
        }
        else {
          if (this->bSuppressSpawning == '\x01' && this->bWasDeactivated == '\x01')
          goto LAB_148181414;
          cVar10 = (**(code **)(this_00->_padding_ + 0xd8))(this_00);
          if (cVar10 == '\0') goto LAB_14818141e;
          if (this_00->bKillOnCompleted != '\0') {
            FParticleEmitterInstance::PreDestructorCall(this_00);
            uVar14 = 0;
            uVar15 = 0;
            if (0 < (this->EmitterInstances).ArrayNum) {
              do {
                if (uVar15 != uVar18) {
                  uVar19 = 0;
                  if ((int)uVar14 < (this->EmitterInstances).ArrayNum) {
                    uVar19 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    uVar9 = (*pcVar6)();
                    return (bool)uVar9;
                  }
                  if (*(longlong *)((this->EmitterInstances).AllocatorInstance.Data + uVar15 * 8) !=
                      0) {
                    uVar19 = 0;
                    if ((int)uVar14 < (this->EmitterInstances).ArrayNum) {
                      uVar19 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar6 = (code *)swi(3);
                      uVar9 = (*pcVar6)();
                      return (bool)uVar9;
                    }
                    plVar4 = *(longlong **)
                              ((this->EmitterInstances).AllocatorInstance.Data + uVar15 * 8);
                    (**(code **)(*plVar4 + 0x178))(plVar4,this_00);
                  }
                }
                uVar14 = uVar14 + 1;
                uVar15 = uVar15 + 1;
                uVar19 = local_res8;
              } while ((int)uVar14 < (this->EmitterInstances).ArrayNum);
            }
            (**(code **)this_00->_padding_)(this_00,1);
            uVar14 = 0;
            if ((int)uVar19 < (this->EmitterInstances).ArrayNum) {
              uVar14 = ~uVar19 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            bVar11 = true;
            *(undefined8 *)((this->EmitterInstances).AllocatorInstance.Data + uVar18 * 8) = 0;
          }
        }
      }
LAB_148181423:
      local_res8 = uVar19 + 1;
      uVar18 = uVar18 + 1;
      uVar15 = (ulonglong)local_res8;
    } while ((int)local_res8 < (this->EmitterInstances).ArrayNum);
    if (!bVar7) goto LAB_148181460;
  }
  pUVar3 = (this->Template).field0_0x0.DebugPtr;
  if ((pUVar3 != (UParticleSystem *)0x0) && (pUVar3->bAutoDeactivate != '\0')) {
    DeactivateSystem(this);
  }
LAB_148181460:
  if (bVar11) {
    if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
    }
    if (*(FParticleSystemSceneProxy **)&this->field_0x530 != (FParticleSystemSceneProxy *)0x0) {
      FParticleSystemSceneProxy::UpdateData
                (*(FParticleSystemSceneProxy **)&this->field_0x530,(FParticleDynamicData *)0x0);
    }
  }
  return bVar20;
}

// InitParticles @ 148181940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::InitParticles(UParticleSystemComponent *this)

{
  int *piVar1;
  TArray<FParticleEmitterInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TUniquePtr<UParticleSystemComponent::FInstanceOwner,TDefaultDelete<UParticleSystemComponent::FInstanceOwner>_>
  *pTVar3;
  FScriptContainerElement *_Dst;
  float fVar4;
  int iVar5;
  UParticleSystem *pUVar6;
  UParticleEmitter *this_00;
  FInstanceOwner *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_InitParticles> FVar20;
  UWorld *pUVar21;
  FCachedSystemScalabilityCVars *pFVar22;
  FInstanceOwner *pFVar23;
  longlong lVar24;
  FParticleEmitterInstance *this_01;
  byte bVar25;
  FName FVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  int iVar31;
  undefined1 local_b7 [3];
  int local_b4;
  int local_b0;
  FLLMScope local_ac;
  FColor_u_0 local_a8;
  int local_a4;
  uint local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_78;
  longlong local_70;
  FMemScope local_68;
  FString local_60;
  FName local_50;
  longlong local_48 [2];
  
  FLLMScope::FLLMScope(&local_ac,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_68,Particles,true);
  FVar20 = StatPtr_STAT_ParticleSystemComponent_InitParticles;
  if (StatPtr_STAT_ParticleSystemComponent_InitParticles ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_InitParticles>)0x0) {
    pFVar19 = ::FName::FName(&local_50,"STAT_ParticleSystemComponent_InitParticles");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_InitParticles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ParticleSystemComponent_InitParticles,*pFVar19,
                        L"ParticleComponent InitParticles GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar20;
  bVar10 = false;
  bVar12 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar12 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_98.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xae0);
        bVar10 = true;
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar13 = true;
      goto LAB_148181afc;
    }
  }
  bVar12 = bVar14;
  bVar10 = bVar13;
  bVar13 = false;
  local_90 = local_88;
  FVar26 = local_88;
LAB_148181afc:
  bVar14 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar14) {
    if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
    }
    if (((*(longlong *)&this->field_0xb0 == 0) &&
        (pUVar21 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar21 == (UWorld *)0x0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetWorld()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                            ,0xae8,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (5 < (byte)LogParticles._0_1_) {
      pUVar6 = (this->Template).field0_0x0.DebugPtr;
      if (pUVar6 != (UParticleSystem *)0x0) {
        local_78 = (FName)pUVar6->_padding_;
        ::FName::ToString(&local_78,&local_60);
      }
      if (*(longlong *)&this->field_0xb0 == 0) {
        UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if ((pUVar6 != (UParticleSystem *)0x0) &&
         (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar6 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar6 != (UParticleSystem *)0x0) {
      this->WarmupTime = pUVar6->WarmupTime;
      fVar4 = pUVar6->WarmupTickRate;
      this->bIsViewRelevanceDirty = '\x01';
      this->WarmupTickRate = fVar4;
      pFVar22 = GetCachedScalabilityCVars();
      iVar5 = pFVar22->DetailMode;
      local_b0 = iVar5;
      bVar14 = USceneComponent::CanEverRender((USceneComponent *)this);
      piVar1 = &(this->EmitterInstances).ArrayNum;
      iVar31 = *piVar1;
      pTVar2 = &this->EmitterInstances;
      uVar29 = (((this->Template).field0_0x0.DebugPtr)->Emitters).ArrayNum;
      lVar30 = (longlong)(int)uVar29;
      local_a4 = iVar31;
      if (iVar31 < (int)uVar29) {
        iVar18 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar29 - iVar31,&pTVar2->AllocatorInstance,piVar1,
                            &(this->EmitterInstances).ArrayMax);
        memset((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 8,0,
               (longlong)(int)(uVar29 - iVar31) << 3);
      }
      else {
        if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
        }
        if ((int)uVar29 < iVar31) {
          uVar27 = iVar31 - uVar29;
          if (((int)(uVar29 | uVar27) < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (uVar27 != 0) {
            _Dst = (pTVar2->AllocatorInstance).Data + lVar30 * 8;
            iVar18 = ((this->EmitterInstances).ArrayNum - uVar29) - uVar27;
            if (iVar18 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar27 * 8,(longlong)iVar18 << 3);
            }
            piVar1 = &(this->EmitterInstances).ArrayNum;
            *piVar1 = *piVar1 - uVar27;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&pTVar2->AllocatorInstance,(this->EmitterInstances).ArrayNum,
                       &(this->EmitterInstances).ArrayMax);
          }
        }
      }
      iVar18 = local_a4;
      if (iVar31 == 0) {
        bVar25 = 0;
      }
      else {
        bVar25 = this->field_0x578;
      }
      bVar17 = false;
      iVar31 = this->LODLevel;
      bVar11 = false;
      this->field_0x578 = (bVar25 ^ this->bWasCompleted) & 1 ^ this->field_0x578;
      bVar15 = 0 < iVar31;
      uVar27 = 0;
      local_b4 = iVar31;
      local_70 = lVar30;
      if (0 < (int)uVar29) {
        bVar25 = (byte)iVar5 & 0x1f;
        local_a0 = 1 << bVar25 | 1U >> 0x20 - bVar25;
        lVar30 = 0;
        do {
          pUVar6 = (this->Template).field0_0x0.DebugPtr;
          uVar28 = ~uVar27 >> 0x1f;
          uVar29 = 0;
          if ((int)uVar27 < (pUVar6->Emitters).ArrayNum) {
            uVar29 = uVar28;
          }
          if ((uVar29 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17 = bVar11, bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this_00 = *(UParticleEmitter **)((pUVar6->Emitters).AllocatorInstance.Data + lVar30 * 8);
          if (this_00 != (UParticleEmitter *)0x0) {
            if (iVar18 == 0) {
              this_01 = (FParticleEmitterInstance *)0x0;
            }
            else {
              uVar29 = 0;
              if ((int)uVar27 < (this->EmitterInstances).ArrayNum) {
                uVar29 = uVar28;
              }
              if ((uVar29 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              this_01 = *(FParticleEmitterInstance **)
                         ((pTVar2->AllocatorInstance).Data + lVar30 * 8);
            }
            if ((3 < local_b0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("GlobalDetailMode < EParticleDetailMode::PDM_MAX",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                    ,0xb07,L""), bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((((local_b0 < (int)(uint)(byte)this->field_0x1ac) ||
                 ((this_00->DetailModeBitmask & local_a0) == 0)) ||
                (bVar17 = UParticleEmitter::HasAnyEnabledLODs(this_00), !bVar17)) || (!bVar14)) {
              bVar17 = bVar11;
              if (this_01 != (FParticleEmitterInstance *)0x0) {
                FParticleEmitterInstance::PreDestructorCall(this_01);
                (**(code **)this_01->_padding_)(this_01,1);
                uVar29 = 0;
                if ((int)uVar27 < (this->EmitterInstances).ArrayNum) {
                  uVar29 = uVar28;
                }
                if ((uVar29 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                bVar11 = true;
                *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar30 * 8) = 0;
                bVar17 = true;
              }
            }
            else {
              if (this_01 == (FParticleEmitterInstance *)0x0) {
                pTVar3 = &this->InstanceOwner;
                if (pTVar3->Ptr == (FInstanceOwner *)0x0) {
                  pFVar23 = ::operator_new(0x10);
                  if (pFVar23 == (FInstanceOwner *)0x0) {
                    pFVar23 = (FInstanceOwner *)0x0;
                  }
                  else {
                    pFVar23->Component = this;
                    pFVar23->_padding_ = (longlong)&___7FInstanceOwner_UParticleSystemComponent__6B_
                    ;
                  }
                  if (pTVar3 == (TUniquePtr<UParticleSystemComponent::FInstanceOwner,TDefaultDelete<UParticleSystemComponent::FInstanceOwner>_>
                                 *)local_48) {
                    if (pFVar23 != (FInstanceOwner *)0x0) {
                      lVar24 = pFVar23->_padding_;
                      goto LAB_148181f99;
                    }
                  }
                  else {
                    pFVar7 = pTVar3->Ptr;
                    pTVar3->Ptr = pFVar23;
                    if (pFVar7 != (FInstanceOwner *)0x0) {
                      lVar24 = pFVar7->_padding_;
                      pFVar23 = pFVar7;
LAB_148181f99:
                      (**(code **)(lVar24 + 0x188))(pFVar23,1);
                    }
                  }
                }
                this_01 = (FParticleEmitterInstance *)
                          (**(code **)(this_00->_padding_ + 0x2b0))(this_00,pTVar3->Ptr);
                uVar29 = 0;
                if ((int)uVar27 < (this->EmitterInstances).ArrayNum) {
                  uVar29 = uVar28;
                }
                if ((uVar29 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(FParticleEmitterInstance **)((pTVar2->AllocatorInstance).Data + lVar30 * 8) =
                     this_01;
                bVar17 = bVar11;
                if (this_01 == (FParticleEmitterInstance *)0x0) goto LAB_1481820d1;
              }
              else {
                (**(code **)(this_01->_padding_ + 0xf8))(this_01,0);
                (**(code **)(this_01->_padding_ + 0x100))(this_01,0);
              }
              this_01->bEnabled = '\x01';
              (**(code **)(this_01->_padding_ + 8))(this_01,this_00);
              (**(code **)(this_01->_padding_ + 0x10))(this_01);
              iVar5 = (this_00->LODLevels).ArrayNum;
              if (local_b4 < iVar5) {
                iVar5 = local_b4;
              }
              bVar15 = (bool)(bVar15 | iVar18 != 0);
              local_b4 = iVar5;
              bVar17 = bVar11;
            }
          }
LAB_1481820d1:
          FVar26 = local_90;
          iVar31 = local_b4;
          uVar27 = uVar27 + 1;
          lVar30 = lVar30 + 1;
        } while (lVar30 < local_70);
        if (bVar17) {
          if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
            WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
          }
          if (*(FParticleSystemSceneProxy **)&this->field_0x530 != (FParticleSystemSceneProxy *)0x0)
          {
            FParticleSystemSceneProxy::UpdateData
                      (*(FParticleSystemSceneProxy **)&this->field_0x530,(FParticleDynamicData *)0x0
                      );
          }
        }
      }
      if (bVar15) {
        if (iVar31 != this->LODLevel) {
          if ((this->LODLevel <= iVar31) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PreferredLODLevel < LODLevel",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                  ,0xb40,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this->LODLevel = iVar31;
        }
        uVar29 = 0;
        if (0 < (this->EmitterInstances).ArrayNum) {
          lVar30 = 0;
          do {
            uVar27 = 0;
            if ((int)uVar29 < (this->EmitterInstances).ArrayNum) {
              uVar27 = ~uVar29 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar24 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar30);
            if (lVar24 != 0) {
              iVar5 = this->LODLevel;
              *(int *)(lVar24 + 0x20) = iVar5;
              iVar31 = *(int *)(*(longlong *)(lVar24 + 8) + 0x48);
              if (iVar31 <= iVar5) {
                local_b7[0] = 0;
                *(int *)(lVar24 + 0x20) = iVar31 + -1;
                `UParticleSystemComponent::InitParticles'::__l88::<lambda_1>::operator()(local_b7);
              }
              uVar27 = *(uint *)(lVar24 + 0x20);
              lVar8 = *(longlong *)(lVar24 + 8);
              uVar28 = 0;
              if ((int)uVar27 < *(int *)(lVar8 + 0x48)) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined8 *)(lVar24 + 0x18) =
                   *(undefined8 *)(*(longlong *)(lVar8 + 0x40) + (longlong)(int)uVar27 * 8);
            }
            uVar29 = uVar29 + 1;
            lVar30 = lVar30 + 8;
          } while ((int)uVar29 < (this->EmitterInstances).ArrayNum);
        }
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(&local_ac);
  return;
}

// InitializeSystem @ 148185430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::InitializeSystem(UParticleSystemComponent *this)

{
  int *piVar1;
  byte bVar2;
  UParticleSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ParticleInitializeTime> FVar11;
  UWorld *pUVar12;
  FCachedSystemScalabilityCVars *pFVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_98;
  FName local_90;
  FString local_80;
  FStatMessage local_70;
  FString local_60;
  FString local_50;
  
  local_res8[0].Bits = 0;
  FVar11 = StatPtr_STAT_ParticleInitializeTime;
  if (StatPtr_STAT_ParticleInitializeTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleInitializeTime>)0x0) {
    pFVar10 = ::FName::FName(&local_98,"STAT_ParticleInitializeTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ParticleInitializeTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleInitializeTime,*pFVar10,
                        L"Initialize Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_res10.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xef5);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_148185598;
    }
  }
  bVar6 = false;
  FVar14 = local_90;
LAB_148185598:
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if (((this->field_0x98 & 1) == 0) || (this->FXSystem == (FFXSystem *)0x0)) {
    if (((PRIVATE_GIsRunningCommandlet == false) &&
        (((pUVar12 = *(UWorld **)&this->field_0xb0, pUVar12 == (UWorld *)0x0 &&
          (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
          pUVar12 == (UWorld *)0x0)) || ((pUVar12->WorldType).Value != '\a')))) &&
       (2 < (byte)LogParticles._0_1_)) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0);
      pUVar3 = (this->Template).field0_0x0.DebugPtr;
      if (pUVar3 != (UParticleSystem *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar3,&local_60,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if ((pUVar3 != (UParticleSystem *)0x0) &&
         (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (((*(longlong *)&this->field_0xb0 == 0) &&
        (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar12 == (UWorld *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0xf0d,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (5 < (byte)LogParticles._0_1_) {
      pUVar3 = (this->Template).field0_0x0.DebugPtr;
      if (pUVar3 != (UParticleSystem *)0x0) {
        local_res18 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res18,&local_80);
      }
      if (*(longlong *)&this->field_0xb0 == 0) {
        UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if ((pUVar3 != (UParticleSystem *)0x0) &&
         (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = this->field_0x1ac;
    pFVar13 = GetCachedScalabilityCVars();
    if (((GIsAllowingParticles != false) && ((int)(uint)bVar2 <= pFVar13->DetailMode)) &&
       (bVar8 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
       !bVar8)) {
      pUVar3 = (this->Template).field0_0x0.DebugPtr;
      if ((pUVar3 != (UParticleSystem *)0x0) &&
         (this->EmitterDelay = pUVar3->Delay, pUVar3->bUseDelayRange != 0)) {
        uVar9 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
        (this->RandomStream).Seed = uVar9;
        this->EmitterDelay =
             (pUVar3->Delay - pUVar3->DelayLow) *
             ((float)(uVar9 >> 9 | 0x3f800000) - __real_3f800000) + pUVar3->DelayLow;
      }
      (**(code **)(*(longlong *)this + 0xbe0))(this);
      if ((((this->field_0x98 & 1) != 0) &&
          (this->AccumTickTime = 0.0, (this->field_0x9a & 0x18) == 8)) &&
         (this->bWasDeactivated == '\0')) {
        (**(code **)(*(longlong *)this + 0x2c8))(this,1);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// IsComponentTickEnabled @ 148185a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::IsComponentTickEnabled(UParticleSystemComponent *this)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsComponentTickEnabled((UActorComponent *)this);
  if ((!bVar1) && ((this->ManagerHandle == -1 || ((BADTYPE)this->bPendingManagerRemove)))) {
    return false;
  }
  return true;
}

// IsReadyForOwnerToAutoDestroy @ 148185c60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::IsReadyForOwnerToAutoDestroy(UParticleSystemComponent *this)

{
  if (((this->field_0x9a & 0x10) == 0) && (this->bWasCompleted != 0)) {
    return true;
  }
  return false;
}

// KillParticlesForced @ 148185fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::KillParticlesForced(UParticleSystemComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  uVar5 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->EmitterInstances).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar6);
        (**(code **)(*plVar1 + 0xf0))(plVar1,0);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->EmitterInstances).ArrayNum);
  }
  return;
}

// MarshalParamsForAsyncTick @ 1481862f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::MarshalParamsForAsyncTick(UParticleSystemComponent *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_Marshall> FVar21;
  TTransform<double> *pTVar22;
  double *pdVar23;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar24;
  FNameEntryId FVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  undefined1 local_60 [32];
  
  FVar21 = StatPtr_STAT_UParticleSystemComponent_Marshall;
  if (StatPtr_STAT_UParticleSystemComponent_Marshall ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_Marshall>)0x0) {
    pFVar20 = ::FName::FName(&local_88,"STAT_UParticleSystemComponent_Marshall");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_Marshall>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleSystemComponent_Marshall
                        ,*pFVar20,L"PSys Comp Marshall Time GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar15 = false;
  bVar17 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar24 = FVar26.Number;
  if ((FVar25.Value != 0) || (uVar24 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar25.Value;
        local_res18.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x2ee);
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar25.Value;
      uStackX_c = uVar24;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar16 = true;
      goto LAB_148186445;
    }
  }
  bVar16 = false;
  FVar26 = local_80;
LAB_148186445:
  this->bAsyncDataCopyIsValid = '\x01';
  if (this->bParallelRenderThreadUpdate != '\0') {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bParallelRenderThreadUpdate",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                        ,0x2f0,L"");
    if (bVar18) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dVar4 = *(double *)&this->field_0x1f8;
  pTVar3 = &this->AsyncInstanceParameters;
  dVar11 = *(double *)&this->field_0x200;
  dVar12 = *(double *)&this->field_0x208;
  piVar2 = &(this->AsyncInstanceParameters).ArrayMax;
  (this->AsyncComponentToWorld).Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
  (this->AsyncComponentToWorld).Rotation.XY.m128d_f64[1] = dVar4;
  piVar1 = &(this->AsyncInstanceParameters).ArrayNum;
  dVar4 = *(double *)&this->field_0x210;
  dVar13 = *(double *)&this->field_0x218;
  (this->AsyncComponentToWorld).Rotation.ZW.m128d_f64[0] = dVar11;
  (this->AsyncComponentToWorld).Rotation.ZW.m128d_f64[1] = dVar12;
  dVar11 = *(double *)&this->field_0x220;
  dVar12 = *(double *)&this->field_0x228;
  (this->AsyncComponentToWorld).Translation.XY.m128d_f64[0] = dVar4;
  (this->AsyncComponentToWorld).Translation.XY.m128d_f64[1] = dVar13;
  dVar4 = *(double *)&this->field_0x230;
  dVar13 = *(double *)&this->field_0x238;
  (this->AsyncComponentToWorld).Translation.ZW.m128d_f64[0] = dVar11;
  (this->AsyncComponentToWorld).Translation.ZW.m128d_f64[1] = dVar12;
  dVar11 = *(double *)&this->field_0x240;
  dVar12 = *(double *)&this->field_0x248;
  (this->AsyncComponentToWorld).Scale3D.XY.m128d_f64[0] = dVar4;
  (this->AsyncComponentToWorld).Scale3D.XY.m128d_f64[1] = dVar13;
  (this->AsyncComponentToWorld).Scale3D.ZW.m128d_f64[0] = dVar11;
  (this->AsyncComponentToWorld).Scale3D.ZW.m128d_f64[1] = dVar12;
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,0x10,0,&pTVar3->AllocatorInstance,0,piVar2);
  }
  if (pTVar3 == &this->InstanceParameters) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar18) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar5 = (this->InstanceParameters).ArrayNum;
  if (iVar5 != 0) {
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xe0,0x10,iVar5,&pTVar3->AllocatorInstance,piVar1,piVar2);
    ConstructItems<FParticleSysParam,FParticleSysParam,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0xe0,
               (FParticleSysParam *)(this->InstanceParameters).AllocatorInstance.Data,iVar5);
  }
  dVar4 = *(double *)&this->field_0x118;
  dVar11 = *(double *)&this->field_0x120;
  dVar12 = *(double *)&this->field_0x128;
  (this->AsyncBounds).Origin.field0_0x0._s_0.X = *(double *)&this->field_0x110;
  (this->AsyncBounds).Origin.field0_0x0._s_0.Y = dVar4;
  dVar13 = *(double *)&this->field_0x130;
  dVar14 = *(double *)&this->field_0x138;
  (this->AsyncBounds).Origin.field0_0x0._s_0.Z = dVar11;
  (this->AsyncBounds).BoxExtent.field0_0x0._s_0.X = dVar12;
  dVar4 = *(double *)&this->field_0x140;
  (this->AsyncBounds).BoxExtent.field0_0x0._s_0.Y = dVar13;
  (this->AsyncBounds).BoxExtent.field0_0x0._s_0.Z = dVar14;
  dVar11 = (this->PartSysVelocity).field0_0x0._s_0.X;
  dVar12 = (this->PartSysVelocity).field0_0x0._s_0.Y;
  (this->AsyncBounds).SphereRadius = dVar4;
  dVar4 = (this->PartSysVelocity).field0_0x0._s_0.Z;
  (this->AsyncPartSysVelocity).field0_0x0._s_0.X = dVar11;
  (this->AsyncPartSysVelocity).field0_0x0._s_0.Y = dVar12;
  (this->AsyncPartSysVelocity).field0_0x0._s_0.Z = dVar4;
  pFVar27 = (pTVar3->AllocatorInstance).Data;
  iVar5 = *piVar1;
  pFVar28 = pFVar27 + 0x60;
  pFVar29 = pFVar27 + (longlong)iVar5 * 0xe0;
  while( true ) {
    if (*piVar1 != iVar5) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<FParticleSysParam,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar27 == pFVar29) break;
    bVar18 = IsInGameThread();
    if (!bVar18) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticleSystemComponent.h"
                          ,0xa5,L"");
      if (bVar18) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar6 = *(longlong **)(pFVar28 + -0x10);
    if (plVar6 != (longlong *)0x0) {
      if (plVar6[0x37] == 0) {
        pTVar22 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar22 = (TTransform<double> *)(plVar6[0x37] + 0x1f0);
      }
      dVar4 = (pTVar22->Rotation).XY.m128d_f64[1];
      *(double *)pFVar28 = (pTVar22->Rotation).XY.m128d_f64[0];
      *(double *)(pFVar28 + 8) = dVar4;
      dVar4 = (pTVar22->Rotation).ZW.m128d_f64[1];
      *(double *)(pFVar28 + 0x10) = (pTVar22->Rotation).ZW.m128d_f64[0];
      *(double *)(pFVar28 + 0x18) = dVar4;
      dVar4 = (pTVar22->Translation).XY.m128d_f64[1];
      *(double *)(pFVar28 + 0x20) = (pTVar22->Translation).XY.m128d_f64[0];
      *(double *)(pFVar28 + 0x28) = dVar4;
      dVar4 = (pTVar22->Translation).ZW.m128d_f64[1];
      *(double *)(pFVar28 + 0x30) = (pTVar22->Translation).ZW.m128d_f64[0];
      *(double *)(pFVar28 + 0x38) = dVar4;
      uVar8 = *(undefined4 *)((longlong)(pTVar22->Scale3D).XY.m128d_f64 + 4);
      uVar9 = *(undefined4 *)((pTVar22->Scale3D).XY.m128d_f64 + 1);
      uVar10 = *(undefined4 *)((longlong)(pTVar22->Scale3D).XY.m128d_f64 + 0xc);
      *(undefined4 *)(pFVar28 + 0x40) = *(undefined4 *)(pTVar22->Scale3D).XY.m128d_f64;
      *(undefined4 *)(pFVar28 + 0x44) = uVar8;
      *(undefined4 *)(pFVar28 + 0x48) = uVar9;
      *(undefined4 *)(pFVar28 + 0x4c) = uVar10;
      uVar8 = *(undefined4 *)((longlong)(pTVar22->Scale3D).ZW.m128d_f64 + 4);
      uVar9 = *(undefined4 *)((pTVar22->Scale3D).ZW.m128d_f64 + 1);
      uVar10 = *(undefined4 *)((longlong)(pTVar22->Scale3D).ZW.m128d_f64 + 0xc);
      *(undefined4 *)(pFVar28 + 0x50) = *(undefined4 *)(pTVar22->Scale3D).ZW.m128d_f64;
      *(undefined4 *)(pFVar28 + 0x54) = uVar8;
      *(undefined4 *)(pFVar28 + 0x58) = uVar9;
      *(undefined4 *)(pFVar28 + 0x5c) = uVar10;
      pdVar23 = (double *)(**(code **)(*plVar6 + 0x360))(plVar6,local_60);
      dVar4 = pdVar23[1];
      *(double *)(pFVar28 + 0x60) = *pdVar23;
      *(double *)(pFVar28 + 0x68) = dVar4;
      *(double *)(pFVar28 + 0x70) = pdVar23[2];
    }
    pFVar27 = pFVar27 + 0xe0;
    pFVar28[0x78] = (FScriptContainerElement)0x1;
    pFVar28 = pFVar28 + 0xe0;
  }
  this->bAsyncWorkOutstanding = true;
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// OnAttachmentChanged @ 148186c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UParticleSystemComponent::OnAttachmentChanged(UParticleSystemComponent *this)

{
  FParticleSystemWorldManager *this_00;
  
  UPrimitiveComponent::OnAttachmentChanged((UPrimitiveComponent *)this);
  if (((this->ManagerHandle != -1) && (!(BADTYPE)this->bPendingManagerRemove)) &&
     (this_00 = GetWorldManager(this), this_00 != (FParticleSystemWorldManager *)0x0)) {
    FParticleSystemWorldManager::UnregisterComponent(this_00,this);
    FParticleSystemWorldManager::RegisterComponent(this_00,this);
  }
  return;
}

// OnChildAttached @ 148186fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::OnChildAttached(UParticleSystemComponent *this,USceneComponent *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x430))(this,(char)param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148186fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x420))(this,1);
    return;
  }
  return;
}

// OnChildDetached @ 148187000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::OnChildDetached(UParticleSystemComponent *this,USceneComponent *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x430))(this,(char)param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148187023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x420))(this,1);
    return;
  }
  return;
}

// OnEndOfFrameUpdateDuringTick @ 1481870e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::OnEndOfFrameUpdateDuringTick(UParticleSystemComponent *this)

{
  WaitForAsyncAndFinalize(this,STALL,true);
  return;
}

// OnRegister @ 1481870f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::OnRegister(UParticleSystemComponent *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  byte bVar3;
  USceneComponent *pUVar4;
  UParticleSystem *pUVar5;
  FSceneInterface *pFVar6;
  FName FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  bool bVar12;
  UWorld *this_00;
  undefined8 *puVar13;
  FFXSystem *pFVar14;
  ULevel *pUVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  undefined ***pppuVar18;
  FLevelCollection *pFVar19;
  FLevelCollection *pFVar20;
  undefined1 auStack_108 [32];
  UWorld *local_e8;
  FSceneInterface *local_e0;
  FFXSystem *local_d8;
  byte local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  UObject *local_b8;
  FName local_b0;
  FString local_a8;
  code *local_98;
  undefined **local_88;
  UParticleSystemComponent *pUStack_80;
  byte *local_78;
  undefined ***local_70;
  undefined **local_58;
  UParticleSystemComponent *pUStack_50;
  byte *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar20 = (FLevelCollection *)0x0;
  local_c4 = 0;
  local_c8[0] = this->bIsDuringRegister;
  this->bIsDuringRegister = '\x01';
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UParticleSystemComponent::OnRegister'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_78 = local_c8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`UParticleSystemComponent::OnRegister'::__l2::<lambda_1>,void>::Call
  ;
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UParticleSystemComponent::OnRegister'::`2'::<lambda_1>,0,0>::
              _vftable_;
  pUStack_80 = this;
  pUStack_50 = this;
  local_48 = local_78;
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((this->FXSystem != (FFXSystem *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FXSystem == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x3b1,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = *(UWorld **)&this->field_0xb0;
  if (((this_00 == (UWorld *)0x0) &&
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_00 == (UWorld *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("World != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x3b4,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this_00->Scene != (FSceneInterface *)0x0) &&
     (puVar13 = (undefined8 *)(**(code **)(this_00->Scene->_padding_ + 0x478))(),
     puVar13 != (undefined8 *)0x0)) {
    pFVar14 = (FFXSystem *)(**(code **)*puVar13)(puVar13,&FFXSystem::Name);
    this->FXSystem = pFVar14;
  }
  if ((this->bAutoManageAttachment != '\0') && ((this->field_0x9a & 0x10) == 0)) {
    if (*(longlong *)&this->field_0xd0 != 0) {
      bVar12 = FWeakObjectPtr::IsValid(&(this->AutoAttachParent).WeakPtr);
      if (!bVar12) {
        local_b8 = *(UObject **)&this->field_0xd0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_b8);
        }
        FWeakObjectPtr::operator=(&(this->AutoAttachParent).WeakPtr,(FObjectPtr)&local_b8);
      }
      if (this->AutoAttachSocketName == (FName)0x0) {
        uVar11 = *(undefined4 *)&this->field_0xdc;
        (this->AutoAttachSocketName).ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&this->field_0xd8;
        (this->AutoAttachSocketName).Number = uVar11;
      }
      bVar12 = UWorld::IsGameWorld(this_00);
      if (bVar12) {
        pUVar4 = *(USceneComponent **)&this->field_0xd0;
        pFVar17 = (pUVar4->AttachChildren).AllocatorInstance.Data;
        pFVar1 = pFVar17 + (longlong)(pUVar4->AttachChildren).ArrayNum * 8;
        for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 8) {
          if (*(UParticleSystemComponent **)pFVar17 == (UParticleSystemComponent *)0x0) {
            bVar12 = this == (UParticleSystemComponent *)0x0;
          }
          else {
            bVar12 = *(UParticleSystemComponent **)pFVar17 == this;
          }
          if (bVar12) {
            if ((((this->field_0x9a & 8) == 0) ||
                (((this->AutoAttachLocationRule != KeepRelative &&
                  (this->AutoAttachRotationRule != KeepRelative)) &&
                 (this->AutoAttachScaleRule != KeepRelative)))) ||
               ((FVar7.ComparisonIndex.Value = *(uint *)&this->field_0xd8,
                FVar7.Number = *(uint *)&this->field_0xdc, this->AutoAttachSocketName != FVar7 ||
                (bVar12 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::
                          UEOpEquals<USceneComponent,bool>(&this->AutoAttachParent,pUVar4), !bVar12)
                ))) {
              local_c4 = 0;
              (**(code **)(*(longlong *)this + 0x518))(this,&local_c4);
            }
            goto LAB_148187325;
          }
        }
        local_c0 = 0;
        USceneComponent::SetupAttachment((USceneComponent *)this,(USceneComponent *)0x0,(FName)0x0);
      }
    }
LAB_148187325:
    dVar9 = *(double *)&this->field_0x150;
    dVar2 = *(double *)&this->field_0x158;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X = *(double *)&this->field_0x148;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y = dVar9;
    dVar9 = *(double *)&this->field_0x160;
    dVar10 = *(double *)&this->field_0x168;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z = dVar2;
    dVar2 = *(double *)&this->field_0x170;
    (this->SavedAutoAttachRelativeRotation).Pitch = dVar9;
    (this->SavedAutoAttachRelativeRotation).Yaw = dVar10;
    dVar9 = *(double *)&this->field_0x178;
    dVar10 = *(double *)&this->field_0x180;
    (this->SavedAutoAttachRelativeRotation).Roll = dVar2;
    dVar2 = *(double *)&this->field_0x188;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X = dVar9;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y = dVar10;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = dVar2;
  }
  if (((GbEnablePSCWorldManager != 0) &&
      (pUVar5 = (this->Template).field0_0x0.DebugPtr, pUVar5 != (UParticleSystem *)0x0)) &&
     ((pUVar5->bAllowManagedTicking != '\0' &&
      ((*(int *)&this->field_0x50 < 2 && (*(int *)&this->field_0xf0 == 0)))))) {
    this->field_0x42 = this->field_0x42 & 0xfb;
  }
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  if ((this->bWasActive != '\0') && ((this->field_0x9a & 0x10) == 0)) {
    (**(code **)(*(longlong *)this + 0x2b8))(this,1);
  }
  if (5 < (byte)LogParticles._0_1_) {
    local_e8 = *(UWorld **)&this->field_0xb0;
    pFVar14 = this->FXSystem;
    pFVar6 = this_00->Scene;
    if (local_e8 == (UWorld *)0x0) {
      local_e8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pUVar5 = (this->Template).field0_0x0.DebugPtr;
    pFVar19 = pFVar20;
    if (pUVar5 != (UParticleSystem *)0x0) {
      local_b0 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_b0,&local_a8);
      pFVar19 = (FLevelCollection *)&DAT_00000001;
    }
    local_e0 = pFVar6;
    local_d8 = pFVar14;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pFVar19 != (FLevelCollection *)0x0) &&
       (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (this->LODLevel == -1) {
    this->LODLevel = 0;
  }
  if ((((*(longlong *)&this->field_0xc0 == 0) && (*(longlong *)&this->field_0xa8 == 0)) &&
      (*(longlong *)&this->field_0xd0 != 0)) &&
     ((*(uint *)(*(longlong *)&this->field_0xd0 + 8) >> 0x1e & 1) == 0)) {
    pUVar15 = UActorComponent::GetComponentLevel(*(UActorComponent **)&this->field_0xd0);
    if (pUVar15 != (ULevel *)0x0) {
      pFVar20 = pUVar15->CachedLevelCollection;
    }
    *(FLevelCollection **)&this->field_0xc0 = pFVar20;
  }
  UE::Core::Private::Function::CheckCallable(local_98);
  pcVar8 = local_98;
  pppuVar18 = &local_88;
  if (local_70 != (undefined ***)0x0) {
    pppuVar18 = local_70;
  }
  plVar16 = (longlong *)(*(code *)(*pppuVar18)[1])();
  if (pcVar8 == UE::Core::Private::Function::
                TFunctionRefCaller<`UParticleSystemComponent::OnRegister'::__l2::<lambda_1>,void>::
                Call) {
    bVar3 = *(byte *)(*plVar16 + 0x57a);
    *(byte *)(*plVar16 + 0x57a) = (*(char *)plVar16[1] * '\x02' ^ bVar3) & 2 ^ bVar3;
  }
  else {
    (*pcVar8)(plVar16);
  }
  if (local_98 != (code *)0x0) {
    pppuVar18 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar18 = local_70;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  return;
}

// OnSignificanceChanged @ 1481877f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::OnSignificanceChanged
          (UParticleSystemComponent *this,bool param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FParticleEmitterInstance *pFVar4;
  UParticleSystem *pUVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  EParticleSystemInsignificanceReaction EVar9;
  uint uVar10;
  UParticleLODLevel *pUVar11;
  uint uVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,false);
  }
  uVar12 = 0;
  bVar7 = (**(code **)(*(longlong *)this + 0x430))(this);
  if (param_1) {
    bVar13 = 1;
    if (param_2) {
      iVar2 = (this->EmitterInstances).ArrayNum;
      if (0 < iVar2) {
        pFVar14 = (this->EmitterInstances).AllocatorInstance.Data;
        pFVar1 = pFVar14 + (longlong)iVar2 * 8;
        while( true ) {
          if ((this->EmitterInstances).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_88);
          }
          if (pFVar14 == pFVar1) break;
          plVar3 = *(longlong **)pFVar14;
          if (plVar3 == (longlong *)0x0) {
LAB_1481878d0:
            uVar12 = uVar12 + 1;
          }
          else {
            bVar8 = UParticleEmitter::IsSignificant
                              ((UParticleEmitter *)plVar3[1],this->RequiredSignificance);
            if (bVar8) {
              *(byte *)(plVar3 + 0x2c) = *(byte *)(plVar3 + 0x2c) | 1;
              (**(code **)(*plVar3 + 0xf8))(plVar3,0);
              *(byte *)((longlong)plVar3 + 0x161) = *(byte *)((longlong)plVar3 + 0x161) & 0xfb;
              goto LAB_1481878d0;
            }
          }
          pFVar14 = pFVar14 + 8;
        }
        if ((uVar12 == 0) && (2 < (byte)LogParticles._0_1_)) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)(this->Template).field0_0x0.DebugPtr,&local_70,
                     (UObject *)0x0,None);
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_80,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        this->NumSignificantEmitters = uVar12;
      }
    }
    goto LAB_148187bf7;
  }
  bVar13 = 0;
  if (param_2) {
    iVar2 = (this->EmitterInstances).ArrayNum;
    if (0 < iVar2) {
      pFVar14 = (this->EmitterInstances).AllocatorInstance.Data;
      pFVar1 = pFVar14 + (longlong)iVar2 * 8;
LAB_148187998:
      do {
        if ((this->EmitterInstances).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar14 == pFVar1) goto LAB_148187a17;
        pFVar4 = *(FParticleEmitterInstance **)pFVar14;
        if (((pFVar4 != (FParticleEmitterInstance *)0x0) &&
            (pUVar11 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4),
            pUVar11 != (UParticleLODLevel *)0x0)) && (pUVar11->bEnabled != 0)) {
          bVar8 = UParticleEmitter::IsSignificant(pFVar4->SpriteTemplate,this->RequiredSignificance)
          ;
          if (bVar8) {
            uVar12 = uVar12 + 1;
            pFVar14 = pFVar14 + 8;
            goto LAB_148187998;
          }
          pFVar4->bEnabled = '\0';
          (**(code **)(pFVar4->_padding_ + 0xf8))(pFVar4);
          pFVar4->bFakeBurstsWhenSpawningSupressed = '\x01';
        }
        pFVar14 = pFVar14 + 8;
      } while( true );
    }
  }
  goto LAB_148187ab1;
LAB_148187a17:
  if ((0 < (int)uVar12) && (2 < (byte)LogParticles._0_1_)) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(this->Template).field0_0x0.DebugPtr,&local_50,(UObject *)0x0,
               None);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_60,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  this->NumSignificantEmitters = uVar12;
LAB_148187ab1:
  pUVar5 = (this->Template).field0_0x0.DebugPtr;
  EVar9 = pUVar5->InsignificantReaction;
  if (EVar9 == Auto) {
    EVar9 = pUVar5->bAnyEmitterLoopsForever + Complete;
  }
  if (EVar9 == Complete) {
    Complete(this);
  }
  else if ((EVar9 != DisableTick) && (EVar9 == DisableTickAndKill)) {
    if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      WaitForAsyncAndFinalize(this,STALL,true);
    }
    uVar12 = 0;
    if (0 < (this->EmitterInstances).ArrayNum) {
      lVar15 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < (this->EmitterInstances).ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar15) != 0) {
          uVar10 = 0;
          if ((int)uVar12 < (this->EmitterInstances).ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          plVar3 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar15);
          (**(code **)(*plVar3 + 0xf0))(plVar3,0);
        }
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar12 < (this->EmitterInstances).ArrayNum);
    }
  }
LAB_148187bf7:
  bVar13 = bVar13 | this->bWasDeactivated;
  if (bVar7 != bVar13) {
    if (param_3) {
                    /* WARNING: Could not recover jumptable at 0x000148187c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x428))();
      return;
    }
    (**(code **)(*(longlong *)this + 0x420))(this,bVar13);
  }
  return;
}

// OnUnregister @ 148187d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::OnUnregister(UParticleSystemComponent *this)

{
  undefined1 *puVar1;
  UParticleSystem *pUVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  byte bVar6;
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if (5 < (byte)LogParticles._0_1_) {
    if (*(longlong *)&this->field_0xb0 == 0) {
      UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pUVar2 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar2 != (UParticleSystem *)0x0) {
      local_res8 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res8,&local_18);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pUVar2 != (UParticleSystem *)0x0) &&
       (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  puVar1 = &this->field_0x578;
  if (((this->field_0x9a & 0x10) == 0) || (this->bWasDeactivated != '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0x20;
  }
  this->bWasActive = '\0';
  *puVar1 = *puVar1 | bVar6;
  if (((*(longlong *)&this->field_0xb0 == 0) &&
      (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 == (UWorld *)0x0
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetWorld()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                ,0x40f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(*(longlong *)this + 0x420))(this);
  if (this->bAllowRecycling != '\0') {
    pUVar5 = *(UWorld **)&this->field_0xb0;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar5->bIsTearingDown == '\0') {
      bVar4 = false;
      goto LAB_148187e91;
    }
  }
  bVar4 = true;
LAB_148187e91:
  ResetParticles(this,bVar4);
  this->FXSystem = (FFXSystem *)0x0;
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  if ((this->FXSystem != (FFXSystem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FXSystem == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x418,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// OrientZAxisTowardCamera @ 148187ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::OrientZAxisTowardCamera(UParticleSystemComponent *this)

{
  int *piVar1;
  APlayerCameraManager *pAVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_OrientZAxisTowardCamera> FVar14;
  UWorld *pUVar15;
  APlayerController *pAVar16;
  double *pdVar17;
  TRotator<double> *pTVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar19;
  LARGE_INTEGER LVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_148 [12];
  uint uStack_13c;
  undefined8 local_138;
  LARGE_INTEGER local_130;
  TRotator<double> local_120;
  TVector<double>_u_0 local_108;
  TQuat<double> local_e8;
  undefined1 local_c8 [160];
  
  uVar21 = 0;
  FVar14 = StatPtr_STAT_UParticleSystemComponent_OrientZAxisTowardCamera;
  if (StatPtr_STAT_UParticleSystemComponent_OrientZAxisTowardCamera ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_OrientZAxisTowardCamera>)0x0) {
    pFVar13 = ::FName::FName(&local_res10,"STAT_UParticleSystemComponent_OrientZAxisTowardCamera");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_OrientZAxisTowardCamera>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UParticleSystemComponent_OrientZAxisTowardCamera,*pFVar13,
                        L"ParticleComponent OrientZAxisTowardCamera GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar20 = *(LARGE_INTEGER *)FVar14;
  bVar10 = false;
  bVar12 = false;
  local_130.s.LowPart = 0;
  local_130.s.HighPart = 0;
  if ((LVar20.s.LowPart == 0) && (LVar20.s.HighPart == 0)) {
LAB_14818804e:
    bVar11 = false;
    LVar20 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x6bb);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14818804e;
    local_res8 = LVar20;
    local_130 = LVar20;
    FThreadStats::AddMessage((FName)LVar20.s,CycleScopeStart);
    bVar11 = true;
    uVar21 = local_130._0_4_;
  }
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  if (*(longlong *)&this->field_0xb0 == 0) {
    pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar15 == (UWorld *)0x0) goto LAB_1481883fe;
  }
  pUVar15 = *(UWorld **)&this->field_0xb0;
  if (pUVar15 == (UWorld *)0x0) {
    pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((pUVar15->OwningGameInstance).field0_0x0.DebugPtr == (UGameInstance *)0x0) goto LAB_1481883fe;
  pUVar15 = *(UWorld **)&this->field_0xb0;
  if (pUVar15 == (UWorld *)0x0) {
    pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pAVar16 = UGameInstance::GetFirstLocalPlayerController
                      ((pUVar15->OwningGameInstance).field0_0x0.DebugPtr,(UWorld *)0x0);
  if ((pAVar16 == (APlayerController *)0x0) ||
     (pAVar2 = (pAVar16->PlayerCameraManager).field0_0x0.DebugPtr,
     pAVar2 == (APlayerCameraManager *)0x0)) goto LAB_1481883fe;
  pdVar17 = (double *)(**(code **)(pAVar2->_padding_ + 0x848))(pAVar2,local_c8);
  local_138 = pdVar17[2] - *(double *)&this->field_0x220;
  local_148._0_8_ = *pdVar17 - *(double *)&this->field_0x210;
  unique0x100005b9 = pdVar17[1] - *(double *)&this->field_0x218;
  dVar26 = (double)local_148._0_8_ * (double)local_148._0_8_ +
           (double)unique0x100005b9 * (double)unique0x100005b9 +
           (double)local_138 * (double)local_138;
  if (__real_3e45798ee0000000 < dVar26) {
    local_res8 = (LARGE_INTEGER)(__real_3ff0000000000000 / SQRT(dVar26));
    local_138 = (double)local_res8 * (double)local_138;
    stack0xfffffffffffffec0 = (double)local_res8 * (double)unique0x100005b9;
    local_148._0_8_ = (double)local_148._0_8_ * (double)local_res8;
  }
  dVar5 = *(double *)&this->field_0x1f0 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar6 = *(double *)&this->field_0x1f8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar7 = *(double *)&this->field_0x200 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = *(double *)&this->field_0x208 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar33 = local_148._8_8_;
  dVar26 = local_148._0_8_;
  auVar29._8_4_ = SUB84(dVar6,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_108._s_0.Z = __real_3ff0000000000000;
  auVar31._0_8_ = dVar33 * dVar5 - dVar26 * dVar6;
  auVar31._8_8_ = (double)local_138 * dVar6 - dVar33 * dVar7;
  auVar22._8_4_ = SUB84(dVar8,0);
  auVar22._0_8_ = dVar7;
  auVar22._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar29 = blendpd(auVar29,auVar22,2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_138;
  auVar22 = blendpd(_local_148,auVar9,2);
  auVar23._0_8_ = auVar22._0_8_ * dVar7 - auVar29._0_8_ * (double)local_138;
  auVar23._8_8_ = auVar22._8_8_ * dVar8 - auVar29._8_8_ * 0.0;
  auVar22 = blendpd(auVar31,auVar23,2);
  dVar3 = auVar31._8_8_ + auVar31._8_8_;
  dVar4 = auVar23._0_8_ + auVar23._0_8_;
  uVar30 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar32._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar32._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar27._8_4_ = SUB84(dVar4,0);
  auVar27._0_8_ = dVar3;
  auVar27._12_4_ = uVar30;
  auVar24._8_4_ = SUB84(dVar4,0);
  auVar24._0_8_ = dVar3;
  auVar24._12_4_ = uVar30;
  auVar22 = blendpd(auVar24,auVar32,2);
  auVar28._0_8_ = auVar27._8_8_ * dVar5 - dVar3 * dVar6;
  auVar28._8_8_ = auVar32._0_8_ * dVar6 - dVar4 * dVar7;
  auVar25._0_8_ = auVar22._0_8_ * dVar7 - auVar32._0_8_ * auVar29._0_8_;
  auVar25._8_8_ = auVar22._8_8_ * dVar8 - auVar32._8_8_ * auVar29._8_8_;
  dVar4 = dVar4 * dVar8 + dVar33 + auVar25._0_8_;
  auVar22 = blendpd(auVar28,auVar25,2);
  local_138 = auVar32._0_8_ * dVar8 + (double)local_138 + auVar22._0_8_;
  local_148._8_4_ = SUB84(dVar4,0);
  local_148._0_8_ = dVar3 * dVar8 + dVar26 + auVar28._8_8_;
  uStack_13c = (int)((ulonglong)dVar4 >> 0x20);
  local_108._s_0.X = 0.0;
  local_108._s_0.Y = 0.0;
  UE::Math::TQuat<double>::FindBetweenNormals
            (&local_e8,(TVector<double> *)&local_108._s_0,(TVector<double> *)local_148);
  UE::Math::TRotator<double>::TRotator<double>(&local_120,&local_e8);
  pTVar18 = USceneComponent::GetRelativeRotation_DirectMutable((USceneComponent *)this);
  dVar3 = __real_4076800000000000;
  pTVar18->Pitch = local_120.Pitch + pTVar18->Pitch;
  pTVar18->Yaw = local_120.Yaw + pTVar18->Yaw;
  pTVar18->Roll = local_120.Roll + pTVar18->Roll;
  dVar26 = FGenericPlatformMath::Fmod(local_120.Pitch,dVar3);
  if (dVar26 < 0.0) {
    dVar26 = dVar26 + dVar3;
  }
  if (dVar26 == 0.0) {
    dVar26 = FGenericPlatformMath::Fmod(local_120.Yaw,dVar3);
    if (dVar26 < 0.0) {
      dVar26 = dVar26 + dVar3;
    }
    if (dVar26 != 0.0) goto LAB_1481883d6;
    dVar26 = FGenericPlatformMath::Fmod(local_120.Roll,dVar3);
    if (dVar26 < 0.0) {
      dVar26 = dVar26 + dVar3;
    }
    if (dVar26 != 0.0) goto LAB_1481883d6;
    bVar19 = 0;
  }
  else {
LAB_1481883d6:
    bVar19 = 2;
  }
  this->field_0x57b = (bVar19 | this->field_0x57b & 2) ^ this->field_0x57b & 0xfd;
LAB_1481883fe:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && ((FName)LVar20.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_148._8_4_ = uVar21;
      uStack_13c = LVar20.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_148._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_148);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ParticleLineCheck @ 148188500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::ParticleLineCheck
          (UParticleSystemComponent *this,FHitResult *param_1,AActor *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          FCollisionObjectQueryParams *param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UWorld *pUVar5;
  FName *pFVar6;
  undefined1 auStackY_248 [32];
  FCollisionShape local_1c8;
  TStatId local_1b8;
  TStatId local_1b0;
  AActor *local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188 [2];
  FCollisionQueryParams local_178;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1a8 = param_2;
  if (((*(longlong *)&this->field_0xb0 == 0) &&
      (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 == (UWorld *)0x0
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetWorld()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                ,0x39c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((((param_5->field0_0x0)._s_0.X == 0.0) && ((param_5->field0_0x0)._s_0.Y == 0.0)) &&
     ((param_5->field0_0x0)._s_0.Z == 0.0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_ParticleCollision =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UParticleSystemComponent::ParticleLineCheck(FHitResult_&,AActor_*,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionObjectQueryParams_const_&)_::_12_::<lambda_2>::operator()(void)const_::_2_::FStat_ParticleCollision>
            )0x0;
      pFVar6 = ::FName::FName(&local_1a0,"ParticleCollision");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_ParticleCollision,*pFVar6,
                 L"ParticleCollision","STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",
                 true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_1b8.StatIdPtr = (TStatIdData *)StatPtr_ParticleCollision;
    if (StatPtr_ParticleCollision ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UParticleSystemComponent::ParticleLineCheck(FHitResult_&,AActor_*,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionObjectQueryParams_const_&)_::_12_::<lambda_2>::operator()(void)const_::_2_::FStat_ParticleCollision>
         )0x0) {
      pFVar6 = ::FName::FName(&local_198,"ParticleCollision");
      local_1b8.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_ParticleCollision,*pFVar6,
                      L"ParticleCollision","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"ParticleCollision");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_e8,::StaticName,&local_1b8,true,param_2);
    pUVar5 = *(UWorld **)&this->field_0xb0;
    local_e8.bReturnPhysicalMaterial = true;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    bVar3 = UWorld::LineTraceSingleByObjectType(pUVar5,param_1,param_4,param_3,param_6,&local_e8);
    local_178.IgnoreComponents.AllocatorInstance.SecondaryData =
         local_e8.IgnoreComponents.AllocatorInstance.SecondaryData;
    if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      local_178.IgnoreComponents.AllocatorInstance.SecondaryData =
           local_e8.IgnoreComponents.AllocatorInstance.SecondaryData;
    }
  }
  else {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_ParticleCollision =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UParticleSystemComponent::ParticleLineCheck(FHitResult_&,AActor_*,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionObjectQueryParams_const_&)_::_14_::<lambda_4>::operator()(void)const_::_2_::FStat_ParticleCollision>
            )0x0;
      pFVar6 = ::FName::FName(&local_190,"ParticleCollision");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_ParticleCollision,*pFVar6,
                 L"ParticleCollision","STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",
                 true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_1b0.StatIdPtr = (TStatIdData *)StatPtr_ParticleCollision;
    if (StatPtr_ParticleCollision ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UParticleSystemComponent::ParticleLineCheck(FHitResult_&,AActor_*,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FCollisionObjectQueryParams_const_&)_::_14_::<lambda_4>::operator()(void)const_::_2_::FStat_ParticleCollision>
         )0x0) {
      pFVar6 = ::FName::FName(local_188,"ParticleCollision");
      local_1b0.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_ParticleCollision,*pFVar6,
                      L"ParticleCollision","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"ParticleCollision");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_178,::StaticName,&local_1b0,false,(AActor *)0x0);
    FCollisionQueryParams::AddIgnoredActor(&local_178,local_1a8);
    pUVar5 = *(UWorld **)&this->field_0xb0;
    local_178.bReturnPhysicalMaterial = true;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    local_1c8.field1_0x4.Box.HalfExtentX = (float)(param_5->field0_0x0)._s_0.X;
    local_1c8.ShapeType = Box;
    local_1c8.field1_0x4.Box.HalfExtentY = (float)(param_5->field0_0x0)._s_0.Y;
    local_1c8.field1_0x4.Box.HalfExtentZ = (float)(param_5->field0_0x0)._s_0.Z;
    bVar3 = UWorld::SweepSingleByObjectType
                      (pUVar5,param_1,param_4,param_3,&UE::Math::TQuat<double>::Identity,param_6,
                       &local_1c8,&local_178);
    if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
  }
  if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// PostLoad @ 14818ce10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UParticleSystemComponent::PostLoad(UParticleSystemComponent *this)

{
  UParticleSystem *this_00;
  UParticleSystem *this_01;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  this_00 = (this->Template).field0_0x0.DebugPtr;
  this_01 = (UParticleSystem *)0x0;
  if (this_00 != (UParticleSystem *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    this_01 = (this->Template).field0_0x0.DebugPtr;
  }
  this->bIsViewRelevanceDirty = '\x01';
  if ((((GbEnablePSCWorldManager != 0) && (this_01 != (UParticleSystem *)0x0)) &&
      (this_01->bAllowManagedTicking != '\0')) &&
     ((*(int *)&this->field_0x50 < 2 && (*(int *)&this->field_0xf0 == 0)))) {
    this->field_0x42 = this->field_0x42 & 0xfb;
  }
  if ((this_01 != (UParticleSystem *)0x0) && (GCascadePSOPrecachingTime == 2)) {
    UObject::ConditionalPostLoad((UObject *)this_01);
    UParticleSystem::PrecachePSOs((this->Template).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// ReleaseToPool @ 14818f220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::ReleaseToPool(UParticleSystemComponent *this)

{
  UParticleSystem *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FString local_28;
  FString local_18;
  
  if (this->PoolingMethod == ManualRelease) {
    if (this->bWasCompleted == 0) {
      this->PoolingMethod = ManualRelease_OnComplete;
      (**(code **)(*(longlong *)this + 0x2c0))();
    }
    else {
      pUVar3 = *(UWorld **)&this->field_0xb0;
      if (((pUVar3 == (UWorld *)0x0) &&
          (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
          pUVar3 == (UWorld *)0x0)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                             ,0xe7f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FWorldPSCPool::ReclaimWorldParticleSystem(&pUVar3->PSCPool,this);
    }
  }
  else if (2 < (byte)LogParticles._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    this_00 = (this->Template).field0_0x0.DebugPtr;
    if (this_00 != (UParticleSystem *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((this_00 != (UParticleSystem *)0x0) &&
       (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ReportEventBurst @ 148190d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ReportEventBurst
          (UParticleSystemComponent *this,FName param_1,float param_2,int param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar7 = (this->BurstEvents).ArrayNum;
  piVar1 = &(this->BurstEvents).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(this->BurstEvents).AllocatorInstance,piVar1);
  }
  (this->BurstEvents).ArrayNum = uVar7 + 1;
  uVar8 = 0;
  if ((int)uVar7 < (int)(uVar7 + 1)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = (this->BurstEvents).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x58;
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    pFVar9 = (FScriptContainerElement *)0x0;
  }
  else {
    *(undefined8 *)(pFVar9 + 0x40) = 0;
    *(undefined8 *)(pFVar9 + 0x48) = 0;
  }
  *(float *)(pFVar9 + 0xc) = param_2;
  *(undefined4 *)pFVar9 = 4;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  *(FName *)(pFVar9 + 4) = param_1;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  *(double *)(pFVar9 + 0x10) = dVar4;
  *(double *)(pFVar9 + 0x18) = dVar5;
  *(int *)(pFVar9 + 0x50) = param_3;
  *(double *)(pFVar9 + 0x20) = dVar2;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)(pFVar9 + 0x40)
             ,param_5);
  return;
}

// ReportEventCollision @ 1481910d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ReportEventCollision
          (UParticleSystemComponent *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_6,
          float param_7,TVector<double> *param_8,float param_9,int param_10,FName param_11,
          UPhysicalMaterial *param_12)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  uVar7 = (this->CollisionEvents).ArrayNum;
  piVar1 = &(this->CollisionEvents).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&(this->CollisionEvents).AllocatorInstance,piVar1);
  }
  pFVar10 = (FScriptContainerElement *)0x0;
  (this->CollisionEvents).ArrayNum = uVar7 + 1;
  uVar8 = 0;
  if ((int)uVar7 < (int)(uVar7 + 1)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (this->CollisionEvents).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xa0;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar9 + 0x40) = 0;
    *(undefined8 *)(pFVar9 + 0x48) = 0;
    *(undefined4 *)(pFVar9 + 0x50) = 0;
    *(undefined8 *)(pFVar9 + 0x70) = 0;
    *(undefined8 *)(pFVar9 + 0x78) = 0;
    *(undefined8 *)(pFVar9 + 0x80) = 0;
    *(undefined8 *)(pFVar9 + 0x88) = 0;
    *(undefined8 *)(pFVar9 + 0x90) = 0;
    pFVar10 = pFVar9;
  }
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  *(double *)(pFVar10 + 0x10) = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar10 + 0x18) = dVar4;
  *(undefined4 *)pFVar10 = 3;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  *(FName *)(pFVar10 + 4) = param_1;
  *(double *)(pFVar10 + 0x20) = dVar2;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  *(double *)(pFVar10 + 0x58) = dVar4;
  *(double *)(pFVar10 + 0x60) = dVar5;
  *(double *)(pFVar10 + 0x68) = dVar2;
  dVar4 = (param_5->field0_0x0)._s_0.Y;
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  *(double *)(pFVar10 + 0x28) = (param_5->field0_0x0)._s_0.X;
  *(double *)(pFVar10 + 0x30) = dVar4;
  *(double *)(pFVar10 + 0x38) = dVar2;
  *(float *)(pFVar10 + 0xc) = param_2;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)
             (pFVar10 + 0x40),param_6);
  dVar2 = (param_8->field0_0x0)._s_0.Z;
  *(float *)(pFVar10 + 0x50) = param_7;
  dVar4 = (param_8->field0_0x0)._s_0.X;
  dVar5 = (param_8->field0_0x0)._s_0.Y;
  *(int *)(pFVar10 + 0x8c) = param_10;
  *(double *)(pFVar10 + 0x70) = dVar4;
  *(double *)(pFVar10 + 0x78) = dVar5;
  *(FName *)(pFVar10 + 0x90) = param_11;
  *(UPhysicalMaterial **)(pFVar10 + 0x98) = param_12;
  *(float *)(pFVar10 + 0x88) = param_9;
  *(double *)(pFVar10 + 0x80) = dVar2;
  return;
}

// ReportEventDeath @ 148191420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ReportEventDeath
          (UParticleSystemComponent *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5,
          float param_6)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  uVar7 = (this->DeathEvents).ArrayNum;
  piVar1 = &(this->DeathEvents).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&(this->DeathEvents).AllocatorInstance,piVar1);
  }
  pFVar10 = (FScriptContainerElement *)0x0;
  (this->DeathEvents).ArrayNum = uVar7 + 1;
  uVar8 = 0;
  if ((int)uVar7 < (int)(uVar7 + 1)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (this->DeathEvents).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x70;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar9 + 0x40) = 0;
    *(undefined8 *)(pFVar9 + 0x48) = 0;
    *(undefined4 *)(pFVar9 + 0x50) = 0;
    *(undefined8 *)(pFVar9 + 0x58) = 0;
    *(undefined8 *)(pFVar9 + 0x60) = 0;
    *(undefined8 *)(pFVar9 + 0x68) = 0;
    pFVar10 = pFVar9;
  }
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  *(double *)(pFVar10 + 0x10) = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar10 + 0x18) = dVar4;
  *(undefined4 *)pFVar10 = 2;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  *(FName *)(pFVar10 + 4) = param_1;
  *(double *)(pFVar10 + 0x20) = dVar2;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  *(double *)(pFVar10 + 0x28) = dVar4;
  *(double *)(pFVar10 + 0x30) = dVar5;
  *(double *)(pFVar10 + 0x38) = dVar2;
  *(float *)(pFVar10 + 0xc) = param_2;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)
             (pFVar10 + 0x40),param_5);
  *(float *)(pFVar10 + 0x50) = param_6;
  return;
}

// ReportEventSpawn @ 1481916c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ReportEventSpawn
          (UParticleSystemComponent *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar7 = (this->SpawnEvents).ArrayNum;
  piVar1 = &(this->SpawnEvents).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->SpawnEvents).AllocatorInstance,piVar1);
  }
  (this->SpawnEvents).ArrayNum = uVar7 + 1;
  uVar8 = 0;
  if ((int)uVar7 < (int)(uVar7 + 1)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = (this->SpawnEvents).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x50;
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    pFVar9 = (FScriptContainerElement *)0x0;
  }
  else {
    *(undefined8 *)(pFVar9 + 0x40) = 0;
    *(undefined8 *)(pFVar9 + 0x48) = 0;
  }
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  *(double *)(pFVar9 + 0x10) = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 0x18) = dVar4;
  *(undefined4 *)pFVar9 = 1;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  *(FName *)(pFVar9 + 4) = param_1;
  *(double *)(pFVar9 + 0x20) = dVar2;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  *(double *)(pFVar9 + 0x28) = dVar4;
  *(double *)(pFVar9 + 0x30) = dVar5;
  *(double *)(pFVar9 + 0x38) = dVar2;
  *(float *)(pFVar9 + 0xc) = param_2;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)(pFVar9 + 0x40)
             ,param_5);
  return;
}

// ResetBurstLists @ 148192890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::ResetBurstLists(UParticleSystemComponent *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  uVar4 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->EmitterInstances).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar5) != 0) {
        uVar3 = 0;
        if ((int)uVar4 < (this->EmitterInstances).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(**(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar5) + 0x90
                    ))();
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->EmitterInstances).ArrayNum);
  }
  return;
}

// ResetParticles @ 148192cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::ResetParticles(UParticleSystemComponent *this,bool param_1)

{
  TArray<FParticleEmitterInstance_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UParticleSystem *pUVar3;
  longlong *plVar4;
  FParticleEmitterInstance *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  UWorld *pUVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  FName local_res8;
  FString local_38;
  
  uVar11 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  if (5 < (byte)LogParticles._0_1_) {
    pUVar3 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar3 != (UParticleSystem *)0x0) {
      local_res8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_res8,&local_38);
    }
    if (*(longlong *)&this->field_0xb0 == 0) {
      pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      if ((pUVar8 != (UWorld *)0x0) && (*(longlong *)&this->field_0xb0 == 0)) {
        UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pUVar3 != (UParticleSystem *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pUVar8 = *(UWorld **)&this->field_0xb0;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((this->field_0x9a & 0x10) != 0) {
    TMulticastDelegate<void___cdecl(UParticleSystemComponent_*,bool),FDefaultDelegateUserPolicy>::
    Broadcast(&OnSystemPreActivationChange,this,false);
  }
  if (pUVar8 == (UWorld *)0x0) {
    bVar6 = true;
  }
  else {
    bVar6 = UWorld::IsGameWorld(pUVar8);
  }
  pTVar1 = &this->EmitterInstances;
  uVar12 = uVar11;
  if (0 < (this->EmitterInstances).ArrayNum) {
    do {
      uVar9 = (uint)uVar11;
      uVar10 = 0;
      if ((int)uVar9 < (this->EmitterInstances).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = *(longlong *)((pTVar1->AllocatorInstance).Data + uVar12);
      if ((((lVar13 != 0) && (GbEnableGameThreadLODCalculation == false)) && (bVar6 != false)) &&
         (!param_1)) {
        *(undefined8 *)(lVar13 + 8) = 0;
      }
      uVar11 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar9 + 1) < (this->EmitterInstances).ArrayNum);
  }
  piVar2 = &(this->EmitterInstances).ArrayNum;
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  if ((bVar6 == false) || (param_1)) {
    uVar12 = 0;
    uVar11 = uVar12;
    if (0 < *piVar2) {
      do {
        uVar9 = (uint)uVar12;
        uVar10 = 0;
        if ((int)uVar9 < (this->EmitterInstances).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = *(FParticleEmitterInstance **)((pTVar1->AllocatorInstance).Data + uVar11);
        if (this_00 != (FParticleEmitterInstance *)0x0) {
          FParticleEmitterInstance::PreDestructorCall(this_00);
          (**(code **)this_00->_padding_)(this_00);
          uVar10 = 0;
          if ((int)uVar9 < (this->EmitterInstances).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 *)((pTVar1->AllocatorInstance).Data + uVar11) = 0;
        }
        uVar12 = (ulonglong)(uVar9 + 1);
        uVar11 = uVar11 + 8;
      } while ((int)(uVar9 + 1) < *piVar2);
    }
    piVar2 = &(this->EmitterInstances).ArrayMax;
    (this->EmitterInstances).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->EmitterInstances).AllocatorInstance,0,piVar2);
    }
    if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
    }
    if (*(FParticleSystemSceneProxy **)&this->field_0x530 != (FParticleSystemSceneProxy *)0x0) {
      FParticleSystemSceneProxy::UpdateData
                (*(FParticleSystemSceneProxy **)&this->field_0x530,(FParticleDynamicData *)0x0);
    }
  }
  else {
    uVar10 = 0;
    if (0 < (this->EmitterInstances).ArrayNum) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar10 < (this->EmitterInstances).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar4 = *(longlong **)((pTVar1->AllocatorInstance).Data + lVar13);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x58))();
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar10 < *piVar2);
    }
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// ResetToDefaults @ 148193230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::ResetToDefaults(UParticleSystemComponent *this)

{
  int iVar1;
  FField *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  void *_Dst;
  void *_Src;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    DeactivateSystem(this);
    SetTemplate(this,(UParticleSystem *)0x0);
    if ((this->field_0x98 & 1) != 0) {
      UActorComponent::UnregisterComponent((UActorComponent *)this);
    }
    pUVar4 = UObject::GetArchetype((UObject *)this);
    for (this_00 = *(FField **)(*(longlong *)&this->field_0x10 + 0x70); this_00 != (FField *)0x0;
        this_00 = this_00[1].Next) {
      if ((((ulonglong)this_00[1].ClassPrivate >> 0x15 & 1) == 0) &&
         (((ulonglong)this_00[1].ClassPrivate & 0x8000080000) == 0)) {
        pUVar5 = FField::GetOwnerClass(this_00);
        pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar6 != (UClass *)0x0) {
          iVar1 = (int)pUVar6->_padding_;
          if (((int)pUVar5->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (((int)this_00[1]._padding_ < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((pUVar4 == (UObject *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            _Src = &pUVar4->field_0x0 + *(int *)((longlong)&this_00[1].Owner.Container + 4);
            if (((int)this_00[1]._padding_ < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            _Dst = &this->field_0x0 + *(int *)((longlong)&this_00[1].Owner.Container + 4);
            if (_Dst != _Src) {
              if ((*(uint *)&this_00[1].ClassPrivate >> 0x1e & 1) == 0) {
                (**(code **)(this_00->_padding_ + 0xf0))
                          (this_00,_Dst,_Src,(int)this_00[1]._padding_);
              }
              else {
                memcpy(_Dst,_Src,
                       (longlong)*(int *)((longlong)&this_00[1]._padding_ + 4) *
                       (longlong)(int)this_00[1]._padding_);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// RewindEmitterInstances @ 148193910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::RewindEmitterInstances(UParticleSystemComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  uVar5 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar6);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x58))();
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->EmitterInstances).ArrayNum);
  }
  return;
}

// SendRenderDynamicData_Concurrent @ 148193ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SendRenderDynamicData_Concurrent(UParticleSystemComponent *this)

{
  int *piVar1;
  byte bVar2;
  UParticleSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  LARGE_INTEGER LVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent> FVar14;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC> FVar15;
  UWorld *pUVar16;
  LARGE_INTEGER LVar17;
  LARGE_INTEGER LVar18;
  LARGE_INTEGER LVar19;
  longlong lVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  uint uVar23;
  FNameEntryId FVar24;
  FName FVar25;
  FName FVar26;
  FColor_u_0 local_res10 [2];
  FColor_u_0 local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  LARGE_INTEGER local_d8;
  FName local_d0;
  FName local_c8;
  LARGE_INTEGER local_c0;
  FName local_b8;
  FName local_a8;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  LVar19.QuadPart = 0;
  FVar14 = StatPtr_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent;
  if (StatPtr_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent>)
      0x0) {
    pFVar13 = ::FName::FName(&local_60,
                             "STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent,
                          *pFVar13,L"ParticleComponent SendRenderDynamicData GT",
                          "STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,ST_int64,
                          true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar14;
  bVar9 = false;
  bVar8 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar5 = false;
  bVar11 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_148193c23:
    bVar9 = bVar5;
    bVar8 = bVar11;
    bVar11 = false;
    FVar26 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar5 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_d0.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x460);
        bVar9 = true;
        bVar8 = true;
        bVar5 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148193c23;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar11 = true;
  }
  FVar15 = StatPtr_STAT_ParticlesOverview_GT_CNC;
  if (StatPtr_STAT_ParticlesOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)0x0) {
    pFVar13 = ::FName::FName(local_58,"STAT_ParticlesOverview_GT_CNC");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT_CNC,*pFVar13
                        ,L"GT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar15;
  bVar5 = false;
  bVar7 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FVar24 = FVar25.ComparisonIndex.Value;
  uVar23 = FVar25.Number;
  if ((FVar24.Value != 0) || (uVar23 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar24.Value;
        local_c8.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x461);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar24.Value;
      uStackX_24 = uVar23;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar6 = true;
      goto LAB_148193d3b;
    }
  }
  bVar6 = false;
  FVar25 = local_a8;
LAB_148193d3b:
  if (__CsvProfilerStat1122 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1122 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  if (__CsvProfilerStat1123 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_CascadeSendRenderDynamicData",_GCsvCategory_Particles.Index);
    __CsvProfilerStat1123 = true;
  }
  local_res20 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_CascadeSendRenderDynamicData",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_CascadeSendRenderDynamicData");
  pUVar16 = *(UWorld **)&this->field_0xb0;
  pUVar3 = (this->Template).field0_0x0.DebugPtr;
  LVar17.QuadPart = LVar19.QuadPart;
  if ((((pUVar16 != (UWorld *)0x0) ||
       (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar16 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    LVar17 = (LARGE_INTEGER)FParticlePerfStatsManager::GetWorldPerfStats(pUVar16);
  }
  LVar18.QuadPart = LVar19.QuadPart;
  local_d8 = LVar17;
  if (((pUVar3 != (UParticleSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    LVar18 = (LARGE_INTEGER)FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar3);
  }
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    LVar19 = (LARGE_INTEGER)
             FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  local_c0.QuadPart = -1;
  if ((((FParticlePerfStats *)LVar17.QuadPart != (FParticlePerfStats *)0x0) ||
      ((FParticlePerfStats *)LVar18.QuadPart != (FParticlePerfStats *)0x0)) ||
     ((FParticlePerfStats *)LVar19.QuadPart != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_98);
    local_c0 = local_98;
  }
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    bVar2 = this->field_0x57a;
    this->bSkipUpdateDynamicDataDuringTick = '\x01';
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,false);
    this->field_0x57a = (bVar2 ^ this->field_0x57a) & 0x10 ^ this->field_0x57a;
    LVar17 = local_d8;
  }
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  if ((this->bAsyncDataCopyIsValid != '\0') &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bAsyncDataCopyIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x469,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->bParallelRenderThreadUpdate != '\0') &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bParallelRenderThreadUpdate",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x46a,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->bParallelRenderThreadUpdate = '\x01';
  if (*(FParticleSystemSceneProxy **)&this->field_0x530 != (FParticleSystemSceneProxy *)0x0) {
    if ((this->field_0x9a & 0x10) == 0) {
      if (this->bWasCompleted != '\0' || this->bWasDeactivated != '\0') {
        FParticleSystemSceneProxy::UpdateData
                  (*(FParticleSystemSceneProxy **)&this->field_0x530,(FParticleDynamicData *)0x0);
      }
    }
    else {
      (**(code **)(*(longlong *)this + 0xbd8))(this);
    }
  }
  LVar10 = local_c0;
  this->bParallelRenderThreadUpdate = '\0';
  if (local_c0.QuadPart != -1) {
    QueryPerformanceCounter(&local_d8);
    lVar20 = local_d8.QuadPart - (longlong)LVar10;
    if ((FParticlePerfStats *)LVar17.QuadPart != (FParticlePerfStats *)0x0) {
      LOCK();
      *(TAtomic<unsigned___int64> *)(LVar17.QuadPart + 0x20) =
           (TAtomic<unsigned___int64>)
           ((longlong)*(TAtomic<unsigned___int64> *)(LVar17.QuadPart + 0x20) + lVar20);
      UNLOCK();
    }
    if ((FParticlePerfStats *)LVar18.QuadPart != (FParticlePerfStats *)0x0) {
      LOCK();
      *(TAtomic<unsigned___int64> *)(LVar18.QuadPart + 0x20) =
           (TAtomic<unsigned___int64>)
           ((longlong)*(TAtomic<unsigned___int64> *)(LVar18.QuadPart + 0x20) + lVar20);
      UNLOCK();
    }
    if ((FParticlePerfStats *)LVar19.QuadPart != (FParticlePerfStats *)0x0) {
      LOCK();
      *(TAtomic<unsigned___int64> *)(LVar19.QuadPart + 0x20) =
           (TAtomic<unsigned___int64>)
           ((longlong)*(TAtomic<unsigned___int64> *)(LVar19.QuadPart + 0x20) + lVar20);
      UNLOCK();
    }
  }
  FCsvProfiler::EndStat("CoreSystems_CascadeSendRenderDynamicData",local_res20);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
      local_80.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar21,&local_80);
      piVar1 = &pFVar21->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar21,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar21,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
      local_70.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar21,&local_70);
      piVar1 = &pFVar21->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar21,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar21,false,false);
      }
    }
  }
  return;
}

// SendRenderTransform_Concurrent @ 148194160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SendRenderTransform_Concurrent(UParticleSystemComponent *this)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent> FVar11;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent;
  if (StatPtr_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent>)0x0)
  {
    pFVar10 = ::FName::FName(&local_res10,
                             "STAT_ParticleSystemComponent_SendRenderTransform_Concurrent");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent,
                          *pFVar10,L"ParticleComponent SendRenderTransform Concurrent GT",
                          "STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,ST_int64,
                          true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar5 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar9 == 0)) {
LAB_14819429a:
    bVar6 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x44e);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14819429a;
    local_res8.s.LowPart = FVar15.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
    local_58 = FVar16;
  }
  FVar12 = StatPtr_STAT_ParticlesOverview_GT_CNC;
  if (StatPtr_STAT_ParticlesOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)0x0) {
    pFVar10 = ::FName::FName(&local_res10,"STAT_ParticlesOverview_GT_CNC");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT_CNC,*pFVar10
                        ,L"GT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar3 = false;
  bVar7 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x44f);
        bVar3 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      FVar17.Value = FVar15.Value;
      goto LAB_1481943b7;
    }
  }
  bVar4 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
LAB_1481943b7:
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    bVar2 = this->field_0x57a;
    this->bSkipUpdateDynamicDataDuringTick = '\x01';
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,false);
    this->field_0x57a = (bVar2 ^ this->field_0x57a) & 0x10 ^ this->field_0x57a;
  }
  if (((this->field_0x9a & 0x10) == 0) || (this->bSkipUpdateDynamicDataDuringTick != '\0')) {
    UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  }
  else {
    UPrimitiveComponent::SendRenderTransform_Concurrent((UPrimitiveComponent *)this);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_48);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (local_58 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_48);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return;
}

// Serialize @ 148194b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::Serialize(UParticleSystemComponent *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  uVar5 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar6);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x130))(plVar1,local_res10,local_res8);
        (**(code **)(*(longlong *)param_1 + 0x10))
                  (param_1,(longlong)local_res10[0],(longlong)local_res8[0]);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->EmitterInstances).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x000148194c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  return;
}

// Serialize @ 148194c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::Serialize(UParticleSystemComponent *this,FStructuredArchiveRecord param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FArchive *pFVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  int local_res10 [2];
  FSlotBase local_res18;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar5);
  uVar6 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar7);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x130))(plVar1,local_res10,local_res8);
        (**(code **)(*(longlong *)pFVar5 + 0x10))
                  (pFVar5,(longlong)local_res10[0],(longlong)local_res8[0]);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->EmitterInstances).ArrayNum);
  }
  (**(code **)(*(longlong *)pFVar5 + 0x230))(pFVar5,&FFrameworkObjectVersion::GUID);
  return;
}

// SetActorParameter @ 148194e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetActorParameter
          (UParticleSystemComponent *this,FName param_1,AActor *param_2)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FLLMScope local_res10 [5];
  longlong local_res20;
  FMemScope local_48 [2];
  
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(local_48,Particles,true);
  if (param_1 != (FName)0x0) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x11af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = 0;
    pTVar2 = &this->InstanceParameters;
    if (0 < (this->InstanceParameters).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if ((*(FName *)(pFVar3 + lVar9) == param_1) &&
           (pFVar3[lVar9 + 8] == (FScriptContainerElement)0x6)) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(AActor **)(pFVar3 + lVar9 + 0x50) = param_2;
          goto LAB_14819510d;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0xe0;
      } while ((int)uVar8 < (this->InstanceParameters).ArrayNum);
    }
    uVar8 = (this->InstanceParameters).ArrayNum;
    piVar1 = &(this->InstanceParameters).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      (this->InstanceParameters).ArrayNum = uVar8;
    }
    local_res20 = (longlong)(int)uVar8 * 0xe0;
    (this->InstanceParameters).ArrayNum = uVar8 + 1;
    memset((pTVar2->AllocatorInstance).Data + local_res20,0,0xe0);
    uVar7 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(FName *)((pTVar2->AllocatorInstance).Data + local_res20) = param_1;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[local_res20 + 8] = (FScriptContainerElement)0x6;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    *(AActor **)(pFVar3 + (longlong)(int)uVar8 * 0xe0 + 0x50) = param_2;
  }
LAB_14819510d:
  FMemScope::~FMemScope(local_48);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetAutoAttachmentParameters @ 148195170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetAutoAttachmentParameters
          (UParticleSystemComponent *this,USceneComponent *param_1,FName param_2,
          EAttachmentRule param_3,EAttachmentRule param_4,EAttachmentRule param_5)

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

// SetBeamEndPoint @ 1481951f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBeamEndPoint
          (UParticleSystemComponent *this,int param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      local_28 = *(undefined4 *)&param_2->field0_0x0;
      uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      local_18 = (param_2->field0_0x0)._s_0.Z;
      (**(code **)(*plVar1 + 0x180))(plVar1,&local_28);
    }
  }
  return;
}

// SetBeamSourcePoint @ 1481952b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBeamSourcePoint
          (UParticleSystemComponent *this,int param_1,TVector<double> *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      local_28 = *(undefined4 *)&param_2->field0_0x0;
      uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      local_18 = (param_2->field0_0x0)._s_0.Z;
      (**(code **)(*plVar1 + 0x188))(plVar1,&local_28,param_3);
    }
  }
  return;
}

// SetBeamSourceStrength @ 148195380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBeamSourceStrength
          (UParticleSystemComponent *this,int param_1,float param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,param_2,param_3);
    }
  }
  return;
}

// SetBeamSourceTangent @ 148195440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBeamSourceTangent
          (UParticleSystemComponent *this,int param_1,TVector<double> *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      local_28 = *(undefined4 *)&param_2->field0_0x0;
      uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      local_18 = (param_2->field0_0x0)._s_0.Z;
      (**(code **)(*plVar1 + 400))(plVar1,&local_28,param_3);
    }
  }
  return;
}

// SetBeamTargetPoint @ 148195510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBeamTargetPoint
          (UParticleSystemComponent *this,int param_1,TVector<double> *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      local_28 = *(undefined4 *)&param_2->field0_0x0;
      uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      local_18 = (param_2->field0_0x0)._s_0.Z;
      (**(code **)(*plVar1 + 0x1a0))(plVar1,&local_28,param_3);
    }
  }
  return;
}

// SetBeamTargetStrength @ 1481955e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBeamTargetStrength
          (UParticleSystemComponent *this,int param_1,float param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2,param_3);
    }
  }
  return;
}

// SetBeamTargetTangent @ 1481956a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBeamTargetTangent
          (UParticleSystemComponent *this,int param_1,TVector<double> *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((-1 < param_1) && (param_1 < (this->EmitterInstances).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 != (longlong *)0x0) {
      local_28 = *(undefined4 *)&param_2->field0_0x0;
      uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      local_18 = (param_2->field0_0x0)._s_0.Z;
      (**(code **)(*plVar1 + 0x1a8))(plVar1,&local_28,param_3);
    }
  }
  return;
}

// SetBoolParameter @ 148195780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetBoolParameter
          (UParticleSystemComponent *this,FName param_1,bool param_2)

{
  if (param_2) {
                    /* WARNING: Could not recover jumptable at 0x000148195790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0xaa0))(this,param_1,__real_3f800000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014819579a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xaa0))(this,param_1,0);
  return;
}

// SetColorParameter @ 1481957c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetColorParameter
          (UParticleSystemComponent *this,FName param_1,FLinearColor *param_2)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  FLLMScope local_res10 [5];
  undefined4 local_res20;
  FMemScope local_48 [2];
  
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(local_48,Particles,true);
  if (param_1 != (FName)0x0) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x1190,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FLinearColor::ToFColorSRGB(param_2);
    pTVar2 = &this->InstanceParameters;
    uVar8 = 0;
    if (0 < (this->InstanceParameters).ArrayNum) {
      lVar7 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if ((*(FName *)(pFVar3 + lVar7) == param_1) &&
           (pFVar3[lVar7 + 8] == (FScriptContainerElement)0x5)) {
          *(undefined4 *)(pFVar3 + lVar7 + 0x48) = local_res20;
          goto LAB_148195a58;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0xe0;
      } while ((int)uVar8 < (this->InstanceParameters).ArrayNum);
    }
    uVar8 = (this->InstanceParameters).ArrayNum;
    piVar1 = &(this->InstanceParameters).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      (this->InstanceParameters).ArrayNum = uVar8;
    }
    (this->InstanceParameters).ArrayNum = uVar8 + 1;
    lVar7 = (longlong)(int)uVar8 * 0xe0;
    memset((pTVar2->AllocatorInstance).Data + lVar7,0,0xe0);
    uVar9 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(FName *)((pTVar2->AllocatorInstance).Data + lVar7) = param_1;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[lVar7 + 8] = (FScriptContainerElement)0x5;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0xe0 + 0x48) =
         local_res20;
  }
LAB_148195a58:
  FMemScope::~FMemScope(local_48);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetComponentTickEnabled @ 148195a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetComponentTickEnabled(UParticleSystemComponent *this,bool param_1)

{
  UParticleSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UWorld *pUVar5;
  FParticleSystemWorldManager *this_00;
  bool bVar6;
  
  bVar6 = (bool)(param_1 & this->field_0x98);
  if ((((bVar6 != false) && (*(longlong *)&this->field_0xb0 == 0)) &&
      (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 == (UWorld *)0x0
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bEnabled || GetWorld()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                ,0x84d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((GbEnablePSCWorldManager == 0) ||
      (pUVar1 = (this->Template).field0_0x0.DebugPtr, pUVar1 == (UParticleSystem *)0x0)) ||
     ((pUVar1->bAllowManagedTicking == '\0' ||
      ((1 < *(int *)&this->field_0x50 || (*(int *)&this->field_0xf0 != 0)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((this->ManagerHandle == -1) || ((BADTYPE)this->bPendingManagerRemove)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((bVar4) || (bVar3)) && ((this_00 = GetWorldManager(this), bVar4 || (bVar3)))) &&
     (this_00 != (FParticleSystemWorldManager *)0x0)) {
    if (bVar4) {
      UActorComponent::SetComponentTickEnabled((UActorComponent *)this,false);
      if (bVar6 == false) {
        if (!bVar3) {
          return;
        }
        FParticleSystemWorldManager::UnregisterComponent(this_00,this);
        return;
      }
      bVar6 = FParticleSystemWorldManager::RegisterComponent(this_00,this);
      if (bVar6) {
        return;
      }
      if ((byte)LogParticles._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      return;
    }
    if (bVar3) {
      FParticleSystemWorldManager::UnregisterComponent(this_00,this);
    }
  }
  UActorComponent::SetComponentTickEnabled((UActorComponent *)this,bVar6);
  return;
}

// SetEmitterEnable @ 148195c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetEmitterEnable
          (UParticleSystemComponent *this,FName param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  uVar5 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->EmitterInstances).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar6);
      if (((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) &&
         (*(FName *)(plVar1[1] + 0x28) == param_1)) {
        (**(code **)(*plVar1 + 0x100))(plVar1,!param_2);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->EmitterInstances).ArrayNum);
  }
  return;
}

// SetFloatParameter @ 148195d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetFloatParameter
          (UParticleSystemComponent *this,FName param_1,float param_2)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  FLLMScope local_res10 [5];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Particles,true);
  if (param_1 != (FName)0x0) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x10fa,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = 0;
    pTVar2 = &this->InstanceParameters;
    if (0 < (this->InstanceParameters).ArrayNum) {
      lVar7 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if ((*(FName *)(pFVar3 + lVar7) == param_1) &&
           (pFVar3[lVar7 + 8] == (FScriptContainerElement)0x1)) {
          *(float *)(pFVar3 + lVar7 + 0xc) = param_2;
          goto LAB_148196026;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0xe0;
      } while ((int)uVar8 < (this->InstanceParameters).ArrayNum);
    }
    uVar8 = (this->InstanceParameters).ArrayNum;
    piVar1 = &(this->InstanceParameters).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      (this->InstanceParameters).ArrayNum = uVar8;
    }
    (this->InstanceParameters).ArrayNum = uVar8 + 1;
    lVar7 = (longlong)(int)uVar8 * 0xe0;
    memset((pTVar2->AllocatorInstance).Data + lVar7,0,0xe0);
    uVar9 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(FName *)((pTVar2->AllocatorInstance).Data + lVar7) = param_1;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[lVar7 + 8] = (FScriptContainerElement)0x1;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(float *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0xe0 + 0xc) = param_2;
  }
LAB_148196026:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetFloatRandParameter @ 148196060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetFloatRandParameter
          (UParticleSystemComponent *this,FName param_1,float param_2,float param_3)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  FLLMScope local_res10 [2];
  FMemScope local_58 [6];
  
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(local_58,Particles,true);
  if (param_1 != (FName)0x0) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x1117,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = 0;
    pTVar2 = &this->InstanceParameters;
    if (0 < (this->InstanceParameters).ArrayNum) {
      lVar7 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if ((*(FName *)(pFVar3 + lVar7) == param_1) &&
           (pFVar3[lVar7 + 8] == (FScriptContainerElement)0x2)) {
          *(float *)(pFVar3 + lVar7 + 0xc) = param_2;
          *(float *)(pFVar3 + lVar7 + 0x10) = param_3;
          goto LAB_148196353;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0xe0;
      } while ((int)uVar8 < (this->InstanceParameters).ArrayNum);
    }
    uVar8 = (this->InstanceParameters).ArrayNum;
    piVar1 = &(this->InstanceParameters).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      (this->InstanceParameters).ArrayNum = uVar8;
    }
    (this->InstanceParameters).ArrayNum = uVar8 + 1;
    lVar7 = (longlong)(int)uVar8 * 0xe0;
    memset((pTVar2->AllocatorInstance).Data + lVar7,0,0xe0);
    uVar9 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(FName *)((pTVar2->AllocatorInstance).Data + lVar7) = param_1;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[lVar7 + 8] = (FScriptContainerElement)0x2;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(float *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0xe0 + 0xc) = param_2;
    uVar6 = 0;
    if ((int)uVar8 < (this->InstanceParameters).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(float *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0xe0 + 0x10) = param_3;
  }
LAB_148196353:
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetIntParameter @ 1481963a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetIntParameter(UParticleSystemComponent *this,FName param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001481963ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xaa0))();
  return;
}

// SetLODLevel @ 148196460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::SetLODLevel(UParticleSystemComponent *this,int param_1)

{
  UParticleSystem *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if ((pUVar1 != (UParticleSystem *)0x0) && ((pUVar1->LODDistances).ArrayNum != 0)) {
    iVar6 = (**(code **)(pUVar1->_padding_ + 0x2c0))();
    iVar4 = iVar6 + -1;
    if (GParticleLODBias + param_1 < iVar6 + -1) {
      iVar4 = GParticleLODBias + param_1;
    }
    iVar6 = 0;
    if (0 < iVar4) {
      iVar6 = iVar4;
    }
    if (this->LODLevel != iVar6) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      this->LODLevel = iVar6;
      uVar9 = 0;
      if (0 < (this->EmitterInstances).ArrayNum) {
        lVar8 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar9 < (this->EmitterInstances).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar2 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x50))(plVar2,this->LODLevel,1);
          }
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar9 < (this->EmitterInstances).ArrayNum);
      }
    }
  }
  return;
}

// SetMaterial @ 1481966c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetMaterial
          (UParticleSystemComponent *this,int param_1,UMaterialInterface *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  UParticleSystem *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  pUVar3 = (this->Template).field0_0x0.DebugPtr;
  if (((pUVar3 != (UParticleSystem *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar3->Emitters).ArrayNum)) {
    piVar1 = &(this->EmitterMaterials).ArrayNum;
    iVar8 = *piVar1;
    pTVar2 = &this->EmitterMaterials;
    if (iVar8 <= param_1) {
      iVar10 = (param_1 - iVar8) + 1;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar10,&pTVar2->AllocatorInstance,piVar1,
                         &(this->EmitterMaterials).ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)iVar10 << 3);
    }
    uVar11 = 0;
    if (param_1 < (this->EmitterMaterials).ArrayNum) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    *(UMaterialInterface **)(pFVar4 + (longlong)param_1 * 8) = param_2;
    this->bIsViewRelevanceDirty = '\x01';
  }
  uVar11 = 0;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->EmitterInstances).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      plVar5 = *(longlong **)((this->EmitterInstances).AllocatorInstance.Data + lVar12);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x218))(plVar5,uVar11);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < (this->EmitterInstances).ArrayNum);
  }
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetMaterialByName @ 148196890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetMaterialByName
          (UParticleSystemComponent *this,FName param_1,UMaterialInterface *param_2)

{
  int iVar1;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  iVar1 = (**(code **)(*(longlong *)this + 0xbc0))();
  if (iVar1 == -1) {
    if (2 < (byte)LogParticles._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else if (param_2 != (UMaterialInterface *)0x0) {
    (**(code **)(*(longlong *)this + 0x6b8))(this,iVar1,param_2);
  }
  return;
}

// SetMaterialParameter @ 148196980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetMaterialParameter
          (UParticleSystemComponent *this,FName param_1,UMaterialInterface *param_2)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  UMaterialInterface *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  FName *pFVar10;
  uint uVar11;
  longlong lVar12;
  FLLMScope local_res10 [5];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Particles,true);
  if (param_1 == (FName)0x0) goto LAB_148196cf3;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x11cc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = 0;
  if (0 < (this->InstanceParameters).ArrayNum) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = (FName *)((this->InstanceParameters).AllocatorInstance.Data + lVar12);
      if ((*pFVar10 == param_1) && ((char)pFVar10[1].ComparisonIndex.Value == '\a')) {
        if ((bool)this->bIsViewRelevanceDirty) {
LAB_148196c23:
          bVar8 = 0x80;
        }
        else {
          if (pFVar10[0xb] == (FName)0x0) {
            bVar6 = param_2 == (UMaterialInterface *)0x0;
          }
          else {
            bVar6 = pFVar10[0xb] == (FName)param_2;
          }
          if (!bVar6) goto LAB_148196c23;
          bVar8 = 0;
        }
        this->field_0x57a = this->field_0x57a & 0x7f | bVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        pFVar10[0xb] = (FName)param_2;
        goto LAB_148196cf3;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xe0;
    } while ((int)uVar11 < (this->InstanceParameters).ArrayNum);
  }
  pTVar2 = &this->InstanceParameters;
  uVar11 = (this->InstanceParameters).ArrayNum;
  piVar1 = &(this->InstanceParameters).ArrayMax;
  if (uVar11 == *piVar1) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10e0,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->InstanceParameters).ArrayNum = uVar11 + 1;
  lVar12 = (longlong)(int)uVar11 * 0xe0;
  memset((pTVar2->AllocatorInstance).Data + lVar12,0,0xe0);
  uVar9 = ~uVar11 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
    uVar7 = uVar9;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(FName *)((pTVar2->AllocatorInstance).Data + lVar12) = param_1;
  uVar7 = 0;
  if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
    uVar7 = uVar9;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (pTVar2->AllocatorInstance).Data[lVar12 + 8] = (FScriptContainerElement)0x7;
  if ((bool)this->bIsViewRelevanceDirty) {
LAB_148196c5c:
    bVar8 = 0x80;
  }
  else {
    uVar7 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar7 = uVar9;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = *(UMaterialInterface **)
              ((this->InstanceParameters).AllocatorInstance.Data +
              (longlong)(int)uVar11 * 0xe0 + 0x58);
    if (pUVar3 == (UMaterialInterface *)0x0) {
      bVar6 = param_2 == (UMaterialInterface *)0x0;
    }
    else {
      bVar6 = pUVar3 == param_2;
    }
    if (!bVar6) goto LAB_148196c5c;
    bVar8 = 0;
  }
  this->bIsViewRelevanceDirty = bVar8 >> 7;
  uVar7 = 0;
  if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
    uVar7 = uVar9;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->InstanceParameters).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UMaterialInterface **)(pFVar4 + (longlong)(int)uVar11 * 0xe0 + 0x58) = param_2;
LAB_148196cf3:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetRequiredSignificance @ 148197150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetRequiredSignificance
          (UParticleSystemComponent *this,EParticleSignificanceLevel param_1)

{
  UParticleSystem *pUVar1;
  char cVar2;
  EParticleSystemInsignificanceReaction EVar3;
  
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystem *)0x0) {
    this->RequiredSignificance = param_1;
    EVar3 = pUVar1->InsignificantReaction;
    if (EVar3 == Auto) {
      EVar3 = pUVar1->bAnyEmitterLoopsForever + Complete;
    }
    cVar2 = (**(code **)(*(longlong *)this + 0x430))();
    if (((cVar2 == '\0') && (EVar3 == DisableTick)) &&
       (param_1 <= ((this->Template).field0_0x0.DebugPtr)->HighestSignificance)) {
      OnSignificanceChanged(this,true,true,true);
    }
  }
  return;
}

// SetTemplate @ 148197210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetTemplate(UParticleSystemComponent *this,UParticleSystem *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  UParticleSystem *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ParticleSetTemplateTime> FVar12;
  byte bVar13;
  FName FVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  uVar16 = 0;
  FVar12 = StatPtr_STAT_ParticleSetTemplateTime;
  if (StatPtr_STAT_ParticleSetTemplateTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSetTemplateTime>)0x0) {
    pFVar11 = ::FName::FName(&local_88,"STAT_ParticleSetTemplateTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ParticleSetTemplateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSetTemplateTime,*pFVar11,
                        L"SetTemplate Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_res18.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xbae);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_148197373;
    }
  }
  bVar7 = false;
  FVar14 = local_80;
LAB_148197373:
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,STALL,true);
  }
  if ((this->PoolingMethod != None) && (2 < (byte)LogParticles._0_1_)) {
    if ((param_1 == (UParticleSystem *)0x0) || (param_1->_padding_ == 0)) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_60,(UObject *)0x0,None);
    }
    pUVar3 = (this->Template).field0_0x0.DebugPtr;
    if ((pUVar3 == (UParticleSystem *)0x0) || (pUVar3->_padding_ == 0)) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_70,(UObject *)0x0,None);
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (GIsAllowingParticles == false) {
    (this->Template).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  }
  else {
    this->bIsViewRelevanceDirty = '\x01';
    bVar9 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    uVar2 = this->field_0x578;
    if (((this->field_0x9a & 0x10) == 0) || (this->bWasDeactivated != '\0')) {
      bVar13 = 0;
    }
    else {
      bVar13 = 0x20;
    }
    this->field_0x578 = uVar2 & 0xde | bVar13;
    pUVar3 = (this->Template).field0_0x0.DebugPtr;
    if (pUVar3 == (UParticleSystem *)0x0) {
      bVar18 = param_1 == (UParticleSystem *)0x0;
    }
    else {
      bVar18 = pUVar3 == param_1;
    }
    if (!bVar18) {
      this->field_0x578 = uVar2 & 0xd2 | bVar13;
    }
    if (!bVar9) {
      ResetParticles(this,!bVar18);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UParticleSystem *)0x0))
    {
      (this->Template).field0_0x0.DebugPtr = param_1;
      if (param_1 == (UParticleSystem *)0x0) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = param_1->WarmupTime;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->Template).field0_0x0.DebugPtr = param_1;
      fVar19 = param_1->WarmupTime;
    }
    this->WarmupTime = fVar19;
    this->LODLevel = 0;
    (**(code **)(*(longlong *)this + 0x420))(this,0);
    if ((param_1 != (UParticleSystem *)0x0) && ((this->field_0x98 & 1) != 0)) {
      if ((((this->field_0x9a & 8) == 0) && (this->bWasActive == '\0')) || (bVar9)) {
        InitializeSystem(this);
      }
      else {
        (**(code **)(*(longlong *)this + 0xaf0))(this,0);
      }
      if ((*(longlong *)&this->field_0x530 == 0) || (!bVar18)) {
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      }
    }
  }
  if ((((this->field_0x99 & 1) == 0) && ((this->EmitterMaterials).ArrayNum != 0)) &&
     (local_res20 = (FName)this,
     bVar9 = `UParticleSystemComponent::SetTemplate'::__l51::<lambda_1>::operator()(&local_res20),
     !bVar9)) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  piVar1 = &(this->EmitterMaterials).ArrayMax;
  (this->EmitterMaterials).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EmitterMaterials).AllocatorInstance,0,piVar1);
  }
  uVar17 = uVar16;
  if (0 < (this->EmitterInstances).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar10 = 0;
      if ((int)uVar15 < (this->EmitterInstances).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)((this->EmitterInstances).AllocatorInstance.Data + uVar17);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x20) = 0;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar15 + 1) < (this->EmitterInstances).ArrayNum);
  }
  if (((GbEnablePSCWorldManager != 0) &&
      (pUVar3 = (this->Template).field0_0x0.DebugPtr, pUVar3 != (UParticleSystem *)0x0)) &&
     ((pUVar3->bAllowManagedTicking != '\0' &&
      ((*(int *)&this->field_0x50 < 2 && (*(int *)&this->field_0xf0 == 0)))))) {
    this->field_0x42 = this->field_0x42 & 0xfb;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// SetTrailSourceData @ 148198300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetTrailSourceData
          (UParticleSystemComponent *this,FName param_1,FName param_2,ETrailWidthMode param_3,
          float param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->EmitterInstances).AllocatorInstance.Data;
  iVar2 = (this->EmitterInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EmitterInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x210))(plVar3,param_1,param_2,param_3,param_4);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// SetUseAutoManageAttachment @ 1481983c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetUseAutoManageAttachment(UParticleSystemComponent *this,bool param_1)

{
  this->bAutoManageAttachment = '\0';
  this->field_0x579 = this->field_0x579 | param_1 << 5;
  return;
}

// SetVectorParameter @ 1481983f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetVectorParameter
          (UParticleSystemComponent *this,FName param_1,TVector<double> *param_2)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FLLMScope local_res10 [2];
  TVector<double> *local_res18;
  double local_res20;
  FMemScope local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_res18 = param_2;
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_58,Particles,true);
  if (param_1 != (FName)0x0) {
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x1136,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar2 = &this->InstanceParameters;
    uVar11 = 0;
    if (0 < (this->InstanceParameters).ArrayNum) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar10 = (FName *)((pTVar2->AllocatorInstance).Data + lVar13);
        if ((*pFVar10 == param_1) && ((char)pFVar10[1].ComparisonIndex.Value == '\x03')) {
          FVar7 = (FName)(param_2->field0_0x0)._s_0.Y;
          FVar4 = (FName)(param_2->field0_0x0)._s_0.Z;
          pFVar10[3] = (FName)(param_2->field0_0x0)._s_0.X;
          pFVar10[4] = FVar7;
          pFVar10[5] = FVar4;
          goto LAB_1481986bc;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0xe0;
      } while ((int)uVar11 < (this->InstanceParameters).ArrayNum);
    }
    uVar11 = (this->InstanceParameters).ArrayNum;
    piVar1 = &(this->InstanceParameters).ArrayMax;
    if (uVar11 == *piVar1) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      (this->InstanceParameters).ArrayNum = uVar11;
    }
    local_res20 = (double)((longlong)(int)uVar11 * 0xe0);
    (this->InstanceParameters).ArrayNum = uVar11 + 1;
    memset((pTVar2->AllocatorInstance).Data + (longlong)local_res20,0,0xe0);
    uVar12 = ~uVar11 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)local_res20) = param_1;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[(longlong)local_res20 + 8] = (FScriptContainerElement)0x3;
    local_50 = *(undefined4 *)&local_res18->field0_0x0;
    uStack_4c = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 4);
    uStack_48 = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 8);
    uStack_44 = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 0xc);
    local_res20 = (local_res18->field0_0x0)._s_0.Z;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x18;
    *(undefined4 *)pFVar3 = local_50;
    *(undefined4 *)(pFVar3 + 4) = uStack_4c;
    *(undefined4 *)(pFVar3 + 8) = uStack_48;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_44;
    *(double *)(pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x28) = local_res20;
  }
LAB_1481986bc:
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetVectorRandParameter @ 148198700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetVectorRandParameter
          (UParticleSystemComponent *this,FName param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FLLMScope local_res10 [2];
  TVector<double> *local_res18;
  TVector<double> *local_res20;
  FMemScope local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res18 = param_2;
  local_res20 = param_3;
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_50,Particles,true);
  if (param_1 != (FName)0x0) {
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x1153,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar2 = &this->InstanceParameters;
    uVar11 = 0;
    if (0 < (this->InstanceParameters).ArrayNum) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar10 = (FName *)((pTVar2->AllocatorInstance).Data + lVar13);
        if ((*pFVar10 == param_1) && ((char)pFVar10[1].ComparisonIndex.Value == '\x04')) {
          FVar7 = (FName)(param_2->field0_0x0)._s_0.Y;
          pFVar10[3] = (FName)(param_2->field0_0x0)._s_0.X;
          pFVar10[4] = FVar7;
          pFVar10[5] = (FName)(param_2->field0_0x0)._s_0.Z;
          FVar7 = (FName)(param_3->field0_0x0)._s_0.Y;
          pFVar10[6] = (FName)(param_3->field0_0x0)._s_0.X;
          pFVar10[7] = FVar7;
          pFVar10[8] = (FName)(param_3->field0_0x0)._s_0.Z;
          goto LAB_148198a39;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0xe0;
      } while ((int)uVar11 < (this->InstanceParameters).ArrayNum);
    }
    uVar11 = (this->InstanceParameters).ArrayNum;
    piVar1 = &(this->InstanceParameters).ArrayMax;
    if (uVar11 == *piVar1) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      (this->InstanceParameters).ArrayNum = uVar11;
    }
    lVar13 = (longlong)(int)uVar11 * 0xe0;
    (this->InstanceParameters).ArrayNum = uVar11 + 1;
    memset((pTVar2->AllocatorInstance).Data + lVar13,0,0xe0);
    uVar12 = ~uVar11 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(FName *)((pTVar2->AllocatorInstance).Data + lVar13) = param_1;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[lVar13 + 8] = (FScriptContainerElement)0x4;
    local_48 = *(undefined4 *)&local_res18->field0_0x0;
    uStack_44 = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 4);
    uStack_40 = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 8);
    uStack_3c = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 0xc);
    dVar4 = (local_res18->field0_0x0)._s_0.Z;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x18;
    *(undefined4 *)pFVar3 = local_48;
    *(undefined4 *)(pFVar3 + 4) = uStack_44;
    *(undefined4 *)(pFVar3 + 8) = uStack_40;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_3c;
    *(double *)(pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x28) = dVar4;
    local_48 = *(undefined4 *)&local_res20->field0_0x0;
    uStack_44 = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 4);
    uStack_40 = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 8);
    uStack_3c = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 0xc);
    dVar4 = (local_res20->field0_0x0)._s_0.Z;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x30;
    *(undefined4 *)pFVar3 = local_48;
    *(undefined4 *)(pFVar3 + 4) = uStack_44;
    *(undefined4 *)(pFVar3 + 8) = uStack_40;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_3c;
    *(double *)(pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x40) = dVar4;
  }
LAB_148198a39:
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetVectorUnitRandParameter @ 148198a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::SetVectorUnitRandParameter
          (UParticleSystemComponent *this,FName param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FLLMScope local_res10 [2];
  TVector<double> *local_res18;
  TVector<double> *local_res20;
  FMemScope local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res18 = param_2;
  local_res20 = param_3;
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_50,Particles,true);
  if (param_1 != (FName)0x0) {
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x1171,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar2 = &this->InstanceParameters;
    uVar11 = 0;
    if (0 < (this->InstanceParameters).ArrayNum) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar10 = (FName *)((pTVar2->AllocatorInstance).Data + lVar13);
        if ((*pFVar10 == param_1) && ((char)pFVar10[1].ComparisonIndex.Value == '\b')) {
          FVar7 = (FName)(param_2->field0_0x0)._s_0.Y;
          pFVar10[3] = (FName)(param_2->field0_0x0)._s_0.X;
          pFVar10[4] = FVar7;
          pFVar10[5] = (FName)(param_2->field0_0x0)._s_0.Z;
          FVar7 = (FName)(param_3->field0_0x0)._s_0.Y;
          pFVar10[6] = (FName)(param_3->field0_0x0)._s_0.X;
          pFVar10[7] = FVar7;
          pFVar10[8] = (FName)(param_3->field0_0x0)._s_0.Z;
          goto LAB_148198dc9;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0xe0;
      } while ((int)uVar11 < (this->InstanceParameters).ArrayNum);
    }
    uVar11 = (this->InstanceParameters).ArrayNum;
    piVar1 = &(this->InstanceParameters).ArrayMax;
    if (uVar11 == *piVar1) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      (this->InstanceParameters).ArrayNum = uVar11;
    }
    lVar13 = (longlong)(int)uVar11 * 0xe0;
    (this->InstanceParameters).ArrayNum = uVar11 + 1;
    memset((pTVar2->AllocatorInstance).Data + lVar13,0,0xe0);
    uVar12 = ~uVar11 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(FName *)((pTVar2->AllocatorInstance).Data + lVar13) = param_1;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pTVar2->AllocatorInstance).Data[lVar13 + 8] = (FScriptContainerElement)0x8;
    local_48 = *(undefined4 *)&local_res18->field0_0x0;
    uStack_44 = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 4);
    uStack_40 = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 8);
    uStack_3c = *(undefined4 *)((longlong)&local_res18->field0_0x0 + 0xc);
    dVar4 = (local_res18->field0_0x0)._s_0.Z;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x18;
    *(undefined4 *)pFVar3 = local_48;
    *(undefined4 *)(pFVar3 + 4) = uStack_44;
    *(undefined4 *)(pFVar3 + 8) = uStack_40;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_3c;
    *(double *)(pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x28) = dVar4;
    local_48 = *(undefined4 *)&local_res20->field0_0x0;
    uStack_44 = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 4);
    uStack_40 = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 8);
    uStack_3c = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 0xc);
    dVar4 = (local_res20->field0_0x0)._s_0.Z;
    uVar9 = 0;
    if ((int)uVar11 < (this->InstanceParameters).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x30;
    *(undefined4 *)pFVar3 = local_48;
    *(undefined4 *)(pFVar3 + 4) = uStack_44;
    *(undefined4 *)(pFVar3 + 8) = uStack_40;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_3c;
    *(double *)(pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x40) = dVar4;
  }
LAB_148198dc9:
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShouldActivate @ 148199180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::ShouldActivate(UParticleSystemComponent *this)

{
  bool bVar1;
  
  bVar1 = UActorComponent::ShouldActivate((UActorComponent *)this);
  if ((!bVar1) && (this->bWasCompleted == '\0' && this->bWasDeactivated == '\0')) {
    return false;
  }
  return true;
}

// ShouldBeTickManaged @ 1481991c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::ShouldBeTickManaged(UParticleSystemComponent *this)

{
  UParticleSystem *pUVar1;
  
  if ((((GbEnablePSCWorldManager != 0) &&
       (pUVar1 = (this->Template).field0_0x0.DebugPtr, pUVar1 != (UParticleSystem *)0x0)) &&
      (pUVar1->bAllowManagedTicking != '\0')) &&
     ((*(int *)&this->field_0x50 < 2 && (*(int *)&this->field_0xf0 == 0)))) {
    return true;
  }
  return false;
}

// ShouldComputeLODFromGameThread @ 148199260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::ShouldComputeLODFromGameThread(UParticleSystemComponent *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UWorld *this_00;
  UObject *pUVar7;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return false;
  }
  bVar4 = UWorld::IsGameWorld(this_00);
  if ((bVar4) && (GbEnableGameThreadLODCalculation != false)) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x1392,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    while( true ) {
      iVar3 = local_18.Index;
      pTVar2 = local_18.Container;
      if (local_18.Index < 0) {
        return false;
      }
      if ((local_18.Container)->ArrayNum <= local_18.Index) {
        return false;
      }
      if ((local_18.Index < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if (((pUVar7 != (UObject *)0x0) && ((pUVar7[0x15].field_0x20 & 2) != 0)) &&
         (cVar6 = (**(code **)(*(longlong *)pUVar7 + 0x7f0))(pUVar7), cVar6 != '\0')) break;
      local_18.Index = local_18.Index + 1;
    }
    return true;
  }
  return false;
}

// ShouldManageSignificance @ 1481993b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::ShouldManageSignificance(UParticleSystemComponent *this)

{
  UParticleSystem *pUVar1;
  
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystem *)0x0) {
    return pUVar1->bShouldManageSignificance;
  }
  return false;
}

// StaticRegisterNativesUParticleSystemComponent @ 1481a1bf0

void __cdecl UParticleSystemComponent::StaticRegisterNativesUParticleSystemComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_UParticleSystemComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1481a3a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::TickComponent
          (UParticleSystemComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  float *pfVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TRefCountPtr<FBaseGraphTask> *pTVar6;
  atomic<unsigned_int> aVar7;
  uchar uVar8;
  UParticleSystem *pUVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FParticleEventSpawnData *pFVar12;
  FParticleEventDeathData *pFVar13;
  FParticleEventCollideData *pFVar14;
  FParticleEventBurstData *pFVar15;
  FBaseGraphTask *pFVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  TConsoleVariableData<int> *pTVar23;
  TRefCountPtr<FBaseGraphTask> TVar24;
  LARGE_INTEGER LVar25;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  char cVar34;
  bool bVar35;
  undefined1 uVar36;
  undefined4 uVar37;
  int iVar38;
  Type TVar39;
  UWorld *pUVar40;
  FName *pFVar41;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT> FVar42;
  TStatId TVar43;
  UObjectBaseUtility *pUVar44;
  FName FVar45;
  FName FVar46;
  FString *pFVar47;
  FThreadSafeStaticStat<FStat_STAT_PSysCompTickTime> FVar48;
  FCachedSystemScalabilityCVars *pFVar49;
  UObject *pUVar50;
  FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueTasks> FVar51;
  FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueAsync> FVar52;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar53;
  FTaskBase *this_00;
  TRefCountPtr<FBaseGraphTask> TVar54;
  FThreadStats *pFVar55;
  FThreadStatsPool *pFVar56;
  longlong lVar57;
  byte bVar58;
  uint uVar59;
  undefined1 *puVar60;
  FName FVar61;
  FName FVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  uint uVar67;
  float fVar68;
  EExtendedTaskPriority local_335;
  ETaskPriority local_334 [4];
  FName local_330;
  FName local_328;
  FColor_u_0 local_320 [2];
  FCycleCounter local_318;
  FLLMScope local_308;
  FColor_u_0 local_304;
  FColor_u_0 local_300;
  FColor_u_0 local_2fc;
  FName local_2f8;
  byte local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  TRefCountPtr<FBaseGraphTask> local_2c8;
  FThreadSafeCounter *local_2c0;
  LARGE_INTEGER local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_290;
  TVector<float>_u_0 local_280;
  FName local_270;
  FName local_260;
  FString local_250;
  FString local_240;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_230;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_220;
  FBaseGraphTask *local_210;
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  undefined8 local_1f8;
  LARGE_INTEGER local_1e8;
  FMemScope local_1e0;
  undefined8 *local_1d8;
  LARGE_INTEGER local_1d0;
  FStatMessage local_1c8;
  FStatMessage local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  FSourceLocation local_188;
  FName local_168;
  FName local_160 [2];
  FName local_150;
  FName local_148;
  longlong local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FInGameScopedCycleCounter local_108;
  FName local_f8;
  undefined1 local_f0 [16];
  double local_e0;
  TVector<double>_u_0 local_d8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  double local_88;
  undefined1 local_78 [64];
  
  FVar61.ComparisonIndex.Value = 0;
  FVar61.Number = 0;
  local_320[0].Bits = 0;
  if (!__CsvProfilerStat2212) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat2212 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(&local_308,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_1e0,Particles,true);
  pUVar40 = *(UWorld **)&this->field_0xb0;
  if (pUVar40 == (UWorld *)0x0) {
    pUVar40 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (&local_108,pUVar40,VFXSignificance,GameThread,this->bIsManagingSignificance);
  FVar42 = StatPtr_STAT_ParticlesOverview_GT;
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar41 = ::FName::FName(&local_168,"STAT_ParticlesOverview_GT");
    FVar42 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar41,
                        L"GT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar62 = *(FName *)FVar42;
  bVar18 = false;
  bVar22 = false;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  bVar27 = false;
  bVar32 = false;
  if ((FVar62.ComparisonIndex.Value.Value == 0) && (FVar62.Number == 0)) {
LAB_1481a3c6e:
    bVar22 = bVar32;
    bVar18 = bVar27;
    bVar27 = false;
    FVar62 = local_2a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_304.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_304._s_0,(char *)*(FName *)((longlong)FVar42 + 0x10));
      bVar18 = false;
      bVar22 = true;
      bVar27 = false;
      bVar32 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e8.ComparisonIndex.Value = FVar62.ComparisonIndex.Value.Value;
        local_2e8.Number = FVar62.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e8,(wchar_t *)*(FName *)((longlong)FVar42 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x8a7);
        bVar18 = true;
        bVar22 = true;
        bVar27 = true;
        bVar32 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481a3c6e;
    local_328 = FVar62;
    FThreadStats::AddMessage(FVar62,CycleScopeStart);
    bVar27 = true;
  }
  TVar43.StatIdPtr = (TStatIdData *)StatPtr_STAT_ParticlesOverview_GT;
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar41 = ::FName::FName(&local_f8,"STAT_ParticlesOverview_GT");
    TVar43.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar41,
                    L"GT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                    L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  pUVar44 = (UObjectBaseUtility *)(**(code **)(*(longlong *)this + 0x480))(this);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_2f8,pUVar44,TVar43);
  pUVar9 = (this->Template).field0_0x0.DebugPtr;
  if ((pUVar9 == (UParticleSystem *)0x0) || ((pUVar9->Emitters).ArrayNum == 0)) {
    (**(code **)(*(longlong *)this + 0x420))(this,0);
    goto LAB_1481a5378;
  }
  pUVar40 = *(UWorld **)&this->field_0xb0;
  FVar45 = FVar61;
  if ((((pUVar40 != (UWorld *)0x0) ||
       (pUVar40 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar40 != (UWorld *)0x0)) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    FVar45 = (FName)FParticlePerfStatsManager::GetWorldPerfStats(pUVar40);
  }
  FVar46 = FVar61;
  local_328 = FVar45;
  if ((0 < (int)FParticlePerfStats::SystemStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    FVar46 = (FName)FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar9);
  }
  local_2a8 = FVar61;
  local_2b0 = FVar46;
  if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    local_2a8 = (FName)FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
  }
  local_2b8.QuadPart = -1;
  if (((FVar45 != (FName)0x0) || (FVar46 != (FName)0x0)) || (local_2a8 != (FName)0x0)) {
    QueryPerformanceCounter(&local_1d0);
    local_2b8 = local_1d0;
  }
  if (((this->ManagerHandle != -1) && (!(BADTYPE)this->bPendingManagerRemove)) &&
     ((this->field_0x43 & 0xc) != 0)) {
    if (*(UObjectBaseUtility **)&this->field_0xd0 != (UObjectBaseUtility *)0x0) {
      pFVar47 = UObjectBaseUtility::GetFullName
                          (*(UObjectBaseUtility **)&this->field_0xd0,&local_118,(UObject *)0x0,None)
      ;
      if ((pFVar47->Data).ArrayNum == 0) {
        FVar61.ComparisonIndex.Value = 1;
        FVar61.Number = 0;
      }
      else {
        FVar61.ComparisonIndex.Value = 1;
        FVar61.Number = 0;
      }
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_128,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(this->Template).field0_0x0.DebugPtr,&local_138,(UObject *)0x0,
               None);
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsTickManaged() || !PrimaryComponentTick.IsTickFunctionEnabled()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                        ,0x8b4,
                        L"PSC has enabled tick funciton and is also ticking via the tick manager.\nTemplate:%s\nPSC: %s\nParent:%s"
                       );
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if ((FVar61 != (FName)0x0) &&
       (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (bVar32) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  uVar67 = this->TimeSinceLastTick;
  uVar59 = (int)(longlong)(param_1 * __real_447a0000) + uVar67;
  if (uVar59 < ((this->Template).field0_0x0.DebugPtr)->MinTimeBetweenTicks) {
    this->TimeSinceLastTick = uVar59;
  }
  else {
    this->TimeSinceLastTick = 0;
    fVar68 = param_1 + (float)uVar67 * __real_3a83126f;
    if (((bool)this->bDeactivateTriggered) &&
       (DeactivateSystem(this), this->bWasDeactivated != '\0')) {
      TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
      ::Broadcast<UParticleSystemComponent_*>
                ((TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
                  *)&this->field_0xbb,this);
    }
    if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
    }
    FVar48 = StatPtr_STAT_PSysCompTickTime;
    if (StatPtr_STAT_PSysCompTickTime == (FThreadSafeStaticStat<FStat_STAT_PSysCompTickTime>)0x0) {
      pFVar41 = ::FName::FName(local_160,"STAT_PSysCompTickTime");
      FVar48 = (FThreadSafeStaticStat<FStat_STAT_PSysCompTickTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSysCompTickTime,*pFVar41,
                          L"PSys Comp Tick Time GT","STATGROUP_Particles","STATCAT_Advanced",
                          L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar61 = *(FName *)FVar48;
    bVar32 = false;
    bVar21 = false;
    local_290.ComparisonIndex.Value = 0;
    local_290.Number = 0;
    bVar28 = false;
    bVar33 = false;
    if ((FVar61.ComparisonIndex.Value.Value == 0) && (FVar61.Number == 0)) {
LAB_1481a40e2:
      bVar21 = bVar33;
      bVar32 = bVar28;
      bVar28 = false;
      FVar61 = local_290;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_300.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_300._s_0,(char *)*(FName *)((longlong)FVar48 + 0x10));
        bVar32 = false;
        bVar21 = true;
        bVar28 = false;
        bVar33 = true;
        if (-1 < CpuChannel->Enabled) {
          local_2e0.ComparisonIndex.Value = FVar61.ComparisonIndex.Value.Value;
          local_2e0.Number = FVar61.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_2e0,(wchar_t *)*(FName *)((longlong)FVar48 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                     ,0x8cc);
          bVar32 = true;
          bVar21 = true;
          bVar28 = true;
          bVar33 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1481a40e2;
      local_330 = FVar61;
      FThreadStats::AddMessage(FVar61,CycleScopeStart);
      bVar28 = true;
    }
    bVar58 = this->bIsManagingSignificance;
    if (this->bWasManagingSignificance != bVar58) {
      this->field_0x57a = this->field_0x57a & 0xfe | bVar58;
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    if ((this->field_0x9a & 0x18) == 0) {
      (**(code **)(*(longlong *)this + 0x420))(this,0);
    }
    else {
      FVar45.ComparisonIndex.Value = *(uint *)&this->field_0xb0;
      FVar45.Number = *(uint *)&this->field_0xb4;
      this->DeltaTimeTick = fVar68;
      local_330 = FVar45;
      if (((FVar45 == (FName)0x0) &&
          (FVar45 = (FName)UActorComponent::GetWorld_Uncached((UActorComponent *)this),
          local_330 = FVar45, FVar45 == (FName)0x0)) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("World",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                              ,0x8ef,L""), bVar33)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      this->bResetTriggered = '\0';
      pFVar49 = GetCachedScalabilityCVars();
      fVar64 = GFXLWCTileRecache;
      if (pFVar49->DetailMode < (int)(uint)(byte)this->field_0x1ac) {
        if ((this->field_0x9a & 0x10) != 0) {
          DeactivateSystem(this);
          UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
        }
      }
      else {
        local_e0 = *(double *)&this->field_0x220;
        local_f0 = *(undefined1 (*) [16])&this->field_0x210;
        fVar65 = (this->LWCTile).field0_0x0._s_0.Z;
        local_1f8 = *(undefined8 *)&(this->LWCTile).field0_0x0;
        local_88 = local_e0;
        if (GFXLWCTileRecache <= 0.0) {
LAB_1481a4384:
          if (this->bResetTriggered != '\0') goto LAB_1481a4389;
        }
        else {
          local_d8._0_16_ = local_f0;
          local_d8._s_0.Z = local_e0;
          TLargeWorldRenderScalar<double>::GetTileFor
                    ((TVector<float> *)&local_280._s_0,(TVector<double> *)&local_d8._s_0);
          fVar66 = (float)((uint)((float)local_1f8 - local_280._s_0.X) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar63 = (float)((uint)(local_1f8._4_4_ - local_280._s_0.Y) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
          if (fVar66 <= fVar63) {
            fVar66 = fVar63;
          }
          fVar65 = (float)((uint)(fVar65 - local_280._s_0.Z) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
          if (fVar66 <= fVar65) {
            fVar66 = fVar65;
          }
          if (fVar66 < fVar64) goto LAB_1481a4384;
          if (2 < (byte)LogParticles._0_1_) {
            pUVar9 = (this->Template).field0_0x0.DebugPtr;
            if ((pUVar9 == (UParticleSystem *)0x0) || (pUVar9->_padding_ == 0)) {
              ::FString::FString(&local_240,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar9,&local_240,(UObject *)0x0,None);
            }
            if (*(longlong *)&this->field_0x10 == 0) {
              ::FString::FString(&local_250,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_250,(UObject *)0x0,None);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
          }
LAB_1481a4389:
          bVar58 = this->field_0x9a;
          ResetParticles(this,true);
          if ((bVar58 & 0x10) == 0) {
            InitializeSystem(this);
          }
          else {
            (**(code **)(*(longlong *)this + 0xaf0))();
          }
        }
        uVar67 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        if (this->bWarmingUp == '\0') {
          pUVar9 = (this->Template).field0_0x0.DebugPtr;
          if (((pUVar9 != (UParticleSystem *)0x0) && (pUVar9->bAnyEmitterLoopsForever != 0)) &&
             ((bVar33 = CanConsiderInvisible(this), bVar33 && (this->bWasDeactivated == '\0')))) {
            this->bForcedInActive = '\x01';
            TArray<FParticleEventSpawnData,TSizedDefaultAllocator<32>_>::Empty(&this->SpawnEvents,0)
            ;
            TArray<FParticleEventDeathData,TSizedDefaultAllocator<32>_>::Empty(&this->DeathEvents,0)
            ;
            TArray<FParticleEventCollideData,TSizedDefaultAllocator<32>_>::Empty
                      (&this->CollisionEvents,0);
            TArray<FParticleEventKismetData,TSizedDefaultAllocator<32>_>::Empty
                      (&this->KismetEvents,0);
            if (((bool)this->bIsManagingSignificance) &&
               (((this->Template).field0_0x0.DebugPtr)->HighestSignificance <
                this->RequiredSignificance)) {
              OnSignificanceChanged(this,false,true,false);
            }
            goto LAB_1481a52ea;
          }
          uVar67 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          pUVar9 = (this->Template).field0_0x0.DebugPtr;
          fVar64 = fVar68 + this->AccumLODDistanceCheckTime;
          this->AccumLODDistanceCheckTime = fVar64;
          pfVar3 = &pUVar9->LODDistanceCheckTime;
          if (*pfVar3 <= fVar64 && fVar64 != *pfVar3) {
            TVar43 = FThreadSafeStaticStatInner<FStat_STAT_UParticleSystemComponent_LOD,1>::
                     GetStatId((FThreadSafeStaticStatInner<FStat_STAT_UParticleSystemComponent_LOD,1>
                                *)&StatPtr_STAT_UParticleSystemComponent_LOD);
            local_188.Impl._Line = 0x91c;
            local_188.Impl._Column = 4;
            local_188.Impl._File =
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
            ;
            local_318.StatId.ComparisonIndex.Value = 0;
            local_318.StatId.Number = 0;
            local_188.Impl._Function =
                 "void __cdecl UParticleSystemComponent::TickComponent(float,enum ELevelTick,struct FActorComponentTickFunction *)"
            ;
            local_318.EmittedEvent = 0;
            FCycleCounter::Start
                      (&local_318,*(TStatIdData **)&(TVar43.StatIdPtr)->Name,
                       CycleStat|ClearEveryFrame,false,&local_188);
            pUVar40 = *(UWorld **)&this->field_0xb0;
            this->AccumLODDistanceCheckTime = 0.0;
            if ((((pUVar40 != (UWorld *)0x0) ||
                 (pUVar40 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
                 pUVar40 != (UWorld *)0x0)) && (bVar33 = UWorld::IsGameWorld(pUVar40), bVar33)) &&
               (GbEnableGameThreadLODCalculation != false)) {
              bVar33 = IsInGameThread();
              if ((!bVar33) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsInGameThread()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                      ,0x1392,L""), bVar33)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              UWorld::GetPlayerControllerIterator(pUVar40,&local_230);
              for (; (iVar38 = local_230.Index, pTVar26 = local_230.Container, -1 < local_230.Index
                     && (local_230.Index < (local_230.Container)->ArrayNum));
                  local_230.Index = local_230.Index + 1) {
                if ((local_230.Index < 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pUVar50 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              ((pTVar26->AllocatorInstance).Data +
                                              (longlong)iVar38 * 8));
                if (((pUVar50 != (UObject *)0x0) && ((pUVar50[0x15].field_0x20 & 2) != 0)) &&
                   (cVar34 = (**(code **)(*(longlong *)pUVar50 + 0x7f0))(pUVar50), cVar34 != '\0'))
                {
                  if (this->bOverrideLODMethod == '\0') {
                    uVar8 = (((this->Template).field0_0x0.DebugPtr)->LODMethod).Value;
                  }
                  else {
                    uVar8 = (this->LODMethod).Value;
                  }
                  if (uVar8 == '\0') {
                    local_b8 = *(undefined4 *)&this->field_0x210;
                    uStack_b4 = *(undefined4 *)&this->field_0x214;
                    uStack_b0 = *(undefined4 *)&this->field_0x218;
                    uStack_ac = *(undefined4 *)&this->field_0x21c;
                    local_a8 = SUB168(*(undefined1 (*) [16])&this->field_0x220,0);
                    uVar37 = (**(code **)(*(longlong *)this + 0xbf0))(this,&local_b8);
                    (**(code **)(*(longlong *)this + 0xbf8))(this,uVar37);
                  }
                  goto LAB_1481a46e2;
                }
              }
            }
            this->bForceLODUpdateFromRenderer = '\x01';
            (**(code **)(*(longlong *)this + 0xbd0))(this);
            FVar45 = local_330;
LAB_1481a46e2:
            local_330 = FVar45;
            if ((local_318.EmittedEvent & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_318.EmittedEvent & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((local_318.EmittedEvent & 4) != 0) {
              FThreadStats::AddMessage(local_318.StatId,CycleScopeEnd);
            }
            local_318.EmittedEvent = '\0';
            uVar67 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          }
        }
        fVar68 = fVar68 * this->CustomTimeDilation;
        this->bForcedInActive = '\0';
        this->DeltaTimeTick = fVar68;
        if ((__real_322bcc77 < (float)((uint)fVar68 & uVar67)) || (GFXSkipZeroDeltaTime == false)) {
          pTVar4 = &this->PlayerLocations;
          piVar2 = &(this->PlayerLocations).ArrayMax;
          this->AccumTickTime = fVar68 + this->AccumTickTime;
          (this->PlayerLocations).ArrayNum = 0;
          if (*piVar2 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&pTVar4->AllocatorInstance,0,piVar2);
          }
          pTVar5 = &this->PlayerLODDistanceFactor;
          (this->PlayerLODDistanceFactor).ArrayNum = 0;
          if ((this->PlayerLODDistanceFactor).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&pTVar5->AllocatorInstance,0,&(this->PlayerLODDistanceFactor).ArrayMax)
            ;
          }
          FVar45 = local_330;
          bVar33 = UWorld::IsGameWorld((UWorld *)local_330);
          if (bVar33) {
            UWorld::GetPlayerControllerIterator((UWorld *)FVar45,&local_220);
            for (; (iVar38 = local_220.Index, pTVar26 = local_220.Container, -1 < local_220.Index &&
                   (local_220.Index < (local_220.Container)->ArrayNum));
                local_220.Index = local_220.Index + 1) {
              if ((local_220.Index < 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              pUVar50 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((pTVar26->AllocatorInstance).Data +
                                            (longlong)iVar38 * 8));
              if (((pUVar50 != (UObject *)0x0) && ((pUVar50[0x15].field_0x20 & 2) != 0)) &&
                 (cVar34 = (**(code **)(*(longlong *)pUVar50 + 0x7f0))(pUVar50), cVar34 != '\0')) {
                (**(code **)(*(longlong *)pUVar50 + 0x840))(pUVar50,&local_1a8,local_78);
                pFVar10 = (pTVar4->AllocatorInstance).Data;
                if (((pFVar10 <= (FScriptContainerElement *)&local_1a8) &&
                    ((FScriptContainerElement *)&local_1a8 <
                     pFVar10 + (longlong)(this->PlayerLocations).ArrayMax * 0x18)) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar33)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                iVar38 = (this->PlayerLocations).ArrayNum;
                if (iVar38 == (this->PlayerLocations).ArrayMax) {
                  iVar38 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar4->AllocatorInstance,
                                      &(this->PlayerLocations).ArrayMax);
                }
                puVar60 = &pUVar50[0x18].field_0x1c;
                (this->PlayerLocations).ArrayNum = iVar38 + 1;
                piVar2 = &(this->PlayerLODDistanceFactor).ArrayMax;
                pFVar11 = (pTVar4->AllocatorInstance).Data;
                pFVar10 = pFVar11 + (longlong)iVar38 * 0x18;
                *(undefined8 *)pFVar10 = local_1a8;
                *(undefined8 *)(pFVar10 + 8) = uStack_1a0;
                *(undefined8 *)(pFVar11 + (longlong)iVar38 * 0x18 + 0x10) = local_198;
                pFVar10 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar10 <= puVar60) && (puVar60 < pFVar10 + (longlong)*piVar2 * 4)) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar33)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                iVar38 = (this->PlayerLODDistanceFactor).ArrayNum;
                if (iVar38 == *piVar2) {
                  iVar38 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar5->AllocatorInstance,piVar2);
                }
                (this->PlayerLODDistanceFactor).ArrayNum = iVar38 + 1;
                *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar38 * 4) =
                     *(undefined4 *)puVar60;
              }
            }
          }
          if (((this->Template).field0_0x0.DebugPtr)->bOrientZAxisTowardCamera != 0) {
            OrientZAxisTowardCamera(this);
          }
          pUVar9 = (this->Template).field0_0x0.DebugPtr;
          if ((pUVar9->SystemUpdateMode).Value == '\x01') {
            this->DeltaTimeTick = pUVar9->UpdateTime_Delta;
          }
          piVar2 = &(this->SpawnEvents).ArrayMax;
          pFVar12 = (FParticleEventSpawnData *)(this->SpawnEvents).AllocatorInstance.Data;
          iVar38 = (this->SpawnEvents).ArrayNum;
          if ((this->SpawnEvents).ArrayMax < 0) {
            DestructItems<FParticleEventSpawnData,int>(pFVar12,iVar38);
            (this->SpawnEvents).ArrayNum = 0;
            if (*piVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,0,&(this->SpawnEvents).AllocatorInstance,0,piVar2);
            }
          }
          else {
            DestructItems<FParticleEventSpawnData,int>(pFVar12,iVar38);
            (this->SpawnEvents).ArrayNum = 0;
          }
          piVar2 = &(this->DeathEvents).ArrayMax;
          pFVar13 = (FParticleEventDeathData *)(this->DeathEvents).AllocatorInstance.Data;
          iVar38 = (this->DeathEvents).ArrayNum;
          if ((this->DeathEvents).ArrayMax < 0) {
            DestructItems<FParticleEventDeathData,int>(pFVar13,iVar38);
            (this->DeathEvents).ArrayNum = 0;
            if (*piVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x70,8,0,&(this->DeathEvents).AllocatorInstance,0,piVar2);
            }
          }
          else {
            DestructItems<FParticleEventDeathData,int>(pFVar13,iVar38);
            (this->DeathEvents).ArrayNum = 0;
          }
          piVar2 = &(this->CollisionEvents).ArrayMax;
          pFVar14 = (FParticleEventCollideData *)(this->CollisionEvents).AllocatorInstance.Data;
          iVar38 = (this->CollisionEvents).ArrayNum;
          if ((this->CollisionEvents).ArrayMax < 0) {
            DestructItems<FParticleEventCollideData,int>(pFVar14,iVar38);
            (this->CollisionEvents).ArrayNum = 0;
            if (*piVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xa0,8,0,&(this->CollisionEvents).AllocatorInstance,0,piVar2);
            }
          }
          else {
            DestructItems<FParticleEventCollideData,int>(pFVar14,iVar38);
            (this->CollisionEvents).ArrayNum = 0;
          }
          piVar2 = &(this->BurstEvents).ArrayMax;
          pFVar15 = (FParticleEventBurstData *)(this->BurstEvents).AllocatorInstance.Data;
          iVar38 = (this->BurstEvents).ArrayNum;
          if ((this->BurstEvents).ArrayMax < 0) {
            DestructItems<FParticleEventBurstData,int>(pFVar15,iVar38);
            (this->BurstEvents).ArrayNum = 0;
            if (*piVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,8,0,&(this->BurstEvents).AllocatorInstance,0,piVar2);
            }
          }
          else {
            DestructItems<FParticleEventBurstData,int>(pFVar15,iVar38);
            (this->BurstEvents).ArrayNum = 0;
          }
          this->bNeedsFinalize = '\x01';
          this->TotalActiveParticles = 0;
          if (((this->ManagerHandle == -1) || ((BADTYPE)this->bPendingManagerRemove)) ||
             (this->bWarmingUp != '\0')) {
            if ((param_3 == (FActorComponentTickFunction *)0x0) ||
               (bVar33 = FTickFunction::IsCompletionHandleValid((FTickFunction *)param_3), !bVar33))
            {
LAB_1481a52d6:
              if (FXConsoleVariables::bFreezeParticleSimulation == 0) {
                ComputeTickComponent_Concurrent(this);
              }
            }
            else {
              bVar58 = this->field_0x578;
              if (this->bIsElligibleForAsyncTickComputed == '\0') {
                pUVar9 = (this->Template).field0_0x0.DebugPtr;
                bVar58 = bVar58 & 0xfb;
                this->field_0x578 = bVar58;
                if (pUVar9 != (UParticleSystem *)0x0) {
                  this->field_0x578 = bVar58 | 8;
                  if (!(bool)pUVar9->bIsElligibleForAsyncTickComputed) {
                    UParticleSystem::ComputeCanTickInAnyThread(pUVar9);
                  }
                  bVar58 = ((byte)pUVar9->field_0xf4 >> 4 ^ this->field_0x578) & 4 ^
                           this->field_0x578;
                  this->field_0x578 = bVar58;
                }
              }
              if ((bVar58 & 4) == 0) goto LAB_1481a52d6;
              if (FXConsoleVariables::bFreezeParticleSimulation == 0) {
                if (((FXConsoleVariables::bAllowAsyncTick == 0) ||
                    (bVar33 = FApp::ShouldUseThreadingForPerformance(), !bVar33)) ||
                   (GDistributionType == 0)) goto LAB_1481a52d6;
                FVar51 = StatPtr_STAT_UParticleSystemComponent_QueueTasks;
                if (StatPtr_STAT_UParticleSystemComponent_QueueTasks ==
                    (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueTasks>)0x0) {
                  pFVar41 = ::FName::FName(&local_150,"STAT_UParticleSystemComponent_QueueTasks");
                  FVar51 = (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueTasks>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_UParticleSystemComponent_QueueTasks,*pFVar41,
                                      L"ParticleComponent QueueTasksGT","STATGROUP_Particles",
                                      "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,
                                      MCR_Invalid);
                }
                FVar45 = *(FName *)FVar51;
                bVar33 = false;
                bVar20 = false;
                local_270.ComparisonIndex.Value = 0;
                local_270.Number = 0;
                bVar29 = false;
                bVar35 = false;
                if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_1481a4daf:
                  bVar20 = bVar35;
                  bVar33 = bVar29;
                  bVar29 = false;
                  FVar45 = local_270;
                }
                else {
                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                    local_2fc.Bits = 0;
                    FGenericPlatformMisc::BeginNamedEvent
                              ((FColor *)&local_2fc._s_0,(char *)*(FName *)((longlong)FVar51 + 0x10)
                              );
                    bVar33 = false;
                    bVar20 = true;
                    bVar29 = false;
                    bVar35 = true;
                    if (-1 < CpuChannel->Enabled) {
                      local_2d8.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
                      local_2d8.Number = FVar45.Number;
                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                (&local_2d8,(wchar_t *)*(FName *)((longlong)FVar51 + 8),
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                 ,0x986);
                      bVar33 = true;
                      bVar20 = true;
                      bVar29 = true;
                      bVar35 = true;
                    }
                  }
                  if (FThreadStats::bPrimaryEnable == false) goto LAB_1481a4daf;
                  FThreadStats::AddMessage(FVar45,CycleScopeStart);
                  bVar29 = true;
                }
                MarshalParamsForAsyncTick(this);
                FVar52 = StatPtr_STAT_UParticleSystemComponent_QueueAsync;
                if (StatPtr_STAT_UParticleSystemComponent_QueueAsync ==
                    (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueAsync>)0x0) {
                  pFVar41 = ::FName::FName(&local_148,"STAT_UParticleSystemComponent_QueueAsync");
                  FVar52 = (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueAsync>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_UParticleSystemComponent_QueueAsync,*pFVar41,
                                      L"ParticleComponent QueueAsyncGT","STATGROUP_Particles",
                                      "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,
                                      MCR_Invalid);
                }
                FVar46 = *(FName *)FVar52;
                bVar19 = false;
                bVar35 = false;
                local_260.ComparisonIndex.Value = 0;
                local_260.Number = 0;
                bVar31 = false;
                bVar30 = false;
                if ((FVar46.ComparisonIndex.Value.Value == 0) && (FVar46.Number == 0)) {
LAB_1481a4efa:
                  bVar19 = bVar31;
                  bVar35 = bVar30;
                  bVar30 = false;
                  FVar46 = local_260;
                }
                else {
                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                    local_320[0].Bits = 0;
                    FGenericPlatformMisc::BeginNamedEvent
                              ((FColor *)&local_320[0]._s_0,
                               (char *)*(FName *)((longlong)FVar52 + 0x10));
                    bVar19 = false;
                    bVar35 = true;
                    bVar31 = false;
                    bVar30 = true;
                    if (-1 < CpuChannel->Enabled) {
                      local_2d0.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
                      local_2d0.Number = FVar46.Number;
                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar52 + 8),
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                 ,0x98a);
                      bVar19 = true;
                      bVar35 = true;
                      bVar31 = true;
                      bVar30 = true;
                    }
                  }
                  if (FThreadStats::bPrimaryEnable == false) goto LAB_1481a4efa;
                  FThreadStats::AddMessage(FVar46,CycleScopeStart);
                  bVar30 = true;
                }
                local_2c8.Reference = (FBaseGraphTask *)0x0;
                local_2c0 = (FThreadSafeCounter *)0x0;
                pTVar53 = FFXAsyncBatcher::GetAsyncPrereq(&FXAsyncBatcher,&local_2c8,&local_2c0);
                this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
                if (this_00 == (FTaskBase *)0x0) {
                  this_00 = (FTaskBase *)0x0;
                }
                else {
                  FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,pTVar53);
                  this_00->_padding_ = (longlong)&___7__TGraphTask_VFParticleAsyncTask____6B_;
                }
                TVar24.Reference = local_2c8.Reference;
                this_00[1]._padding_ = (longlong)this;
                this_00[1]._padding_ = (longlong)local_2c8.Reference;
                if (local_2c8.Reference != (FBaseGraphTask *)0x0) {
                  LOCK();
                  *(int *)&(local_2c8.Reference)->field_0x30 =
                       *(int *)&(local_2c8.Reference)->field_0x30 + 1;
                  UNLOCK();
                }
                this_00[1]._padding_ = (longlong)local_2c0;
                TVar39 = FParticleAsyncTask::GetDesiredThread((FParticleAsyncTask *)(this_00 + 1));
                UE::Tasks::Private::TranslatePriority(TVar39,local_334,&local_335);
                UE::Tasks::Private::FTaskBase::Init
                          (this_00,L"GraphTask",local_334[0],local_335,None);
                if (this_00 != (FTaskBase *)0x0) {
                  LOCK();
                  this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
                  UNLOCK();
                }
                UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xf0);
                pTVar6 = &this->AsyncWork;
                if (pTVar6 == (TRefCountPtr<FBaseGraphTask> *)&local_140) {
                  if (this_00 != (FTaskBase *)0x0) {
                    LOCK();
                    paVar1 = &this_00->RefCount;
                    aVar7 = *paVar1;
                    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar7 == (atomic<unsigned_int>)0x1) {
                      (**(code **)this_00->_padding_)(this_00,1);
                    }
                  }
                }
                else {
                  pFVar16 = pTVar6->Reference;
                  pTVar6->Reference = (FBaseGraphTask *)this_00;
                  if (pFVar16 != (FBaseGraphTask *)0x0) {
                    LOCK();
                    puVar60 = &pFVar16->field_0x30;
                    iVar38 = *(int *)puVar60;
                    *(int *)puVar60 = *(int *)puVar60 + -1;
                    UNLOCK();
                    if (iVar38 == 1) {
                      (*(code *)**(undefined8 **)pFVar16)(pFVar16,1);
                    }
                  }
                }
                TVar54 = FTickFunction::GetCompletionHandle((FTickFunction *)param_3);
                    /* WARNING: Load size is inaccurate */
                pFVar16 = *TVar54.Reference;
                local_210 = (this->AsyncWork).Reference;
                if (local_210 != (FBaseGraphTask *)0x0) {
                  LOCK();
                  *(int *)&local_210->field_0x30 = *(int *)&local_210->field_0x30 + 1;
                  UNLOCK();
                }
                FBaseGraphTask::DontCompleteUntil(pFVar16,(FBaseGraphTask *)&local_210);
                if (local_1d8 != (undefined8 *)0x0) {
                  LOCK();
                  piVar2 = (int *)(local_1d8 + 6);
                  iVar38 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if ((iVar38 == 1) && (local_1d8 != (undefined8 *)0x0)) {
                    (**(code **)*local_1d8)();
                  }
                }
                if (TVar24.Reference != (FBaseGraphTask *)0x0) {
                  LOCK();
                  puVar60 = &(TVar24.Reference)->field_0x30;
                  iVar38 = *(int *)puVar60;
                  *(int *)puVar60 = *(int *)puVar60 + -1;
                  UNLOCK();
                  if (iVar38 == 1) {
                    (*(code *)**(undefined8 **)TVar24.Reference)(TVar24.Reference);
                  }
                }
                if (bVar35) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                if (bVar19) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if ((((bVar30) && (FVar46 != (FName)0x0)) &&
                    (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar55 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar55 == (FThreadStats *)0x0) {
                    pFVar56 = FThreadStatsPool::Get();
                    pFVar55 = FThreadStatsPool::GetFromPool(pFVar56);
                  }
                  if (pFVar55->bWaitForExplicitFlush < pFVar55->ScopeCount) {
                    local_1c8.NameAndInfo.Index = FVar46.ComparisonIndex.Value;
                    local_1c8.NameAndInfo.Number = FVar46.Number & 0xffff6fff | 0x6000;
                    QueryPerformanceCounter(&local_208);
                    local_1c8.StatData.Pad[4] = '\0';
                    local_1c8.StatData.Pad[5] = '\0';
                    local_1c8.StatData.Pad[6] = '\0';
                    local_1c8.StatData.Pad[7] = '\0';
                    local_1c8.StatData.Pad[0] = local_208.s.LowPart._0_1_;
                    local_1c8.StatData.Pad[1] = local_208.s.LowPart._1_1_;
                    local_1c8.StatData.Pad[2] = local_208.s.LowPart._2_1_;
                    local_1c8.StatData.Pad[3] = local_208.s.LowPart._3_1_;
                    FThreadStats::AddStatMessage(pFVar55,&local_1c8);
                    piVar2 = &pFVar55->ScopeCount;
                    *piVar2 = *piVar2 + -1;
                    if (*piVar2 == 0) {
                      FThreadStats::Flush(pFVar55,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar55,false,false);
                    }
                  }
                }
                pTVar23 = CVarFXEarlySchedule.Ref;
                bVar35 = IsInParallelGameThread();
                if (((!bVar35) && (bVar35 = IsInGameThread(), !bVar35)) &&
                   (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007945>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6c9,"GetShadowIndex() == 0"), bVar35)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                if (pTVar23->ShadowedValue[0] == 0) {
                  uVar36 = 2;
                }
                else {
                  this->field_0x41 = 4;
                  uVar36 = 0;
                }
                this->field_0x40 = uVar36;
                if (bVar20) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                if (bVar33) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if (((bVar29) && (FVar45 != (FName)0x0)) &&
                   ((FThreadStats::bPrimaryDisableForever == false &&
                    (FThreadStats::TlsSlot != 0xffffffff)))) {
                  pFVar55 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar55 == (FThreadStats *)0x0) {
                    pFVar56 = FThreadStatsPool::Get();
                    pFVar55 = FThreadStatsPool::GetFromPool(pFVar56);
                  }
                  if (pFVar55->bWaitForExplicitFlush < pFVar55->ScopeCount) {
                    local_1b8.NameAndInfo.Index = FVar45.ComparisonIndex.Value;
                    local_1b8.NameAndInfo.Number = FVar45.Number & 0xffff6fff | 0x6000;
                    QueryPerformanceCounter(&local_200);
                    local_1b8.StatData.Pad[4] = '\0';
                    local_1b8.StatData.Pad[5] = '\0';
                    local_1b8.StatData.Pad[6] = '\0';
                    local_1b8.StatData.Pad[7] = '\0';
                    local_1b8.StatData.Pad[0] = local_200.s.LowPart._0_1_;
                    local_1b8.StatData.Pad[1] = local_200.s.LowPart._1_1_;
                    local_1b8.StatData.Pad[2] = local_200.s.LowPart._2_1_;
                    local_1b8.StatData.Pad[3] = local_200.s.LowPart._3_1_;
                    FThreadStats::AddStatMessage(pFVar55,&local_1b8);
                    piVar2 = &pFVar55->ScopeCount;
                    *piVar2 = *piVar2 + -1;
                    if (*piVar2 == 0) {
                      FThreadStats::Flush(pFVar55,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar55,false,false);
                    }
                  }
                }
                goto LAB_1481a52ea;
              }
            }
            FinalizeTickComponent(this);
          }
        }
      }
    }
LAB_1481a52ea:
    if (bVar21) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar32) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FVar45 = local_328;
    if (bVar28) {
      FThreadStats::AddMessage(FVar61,CycleScopeEnd);
      FVar45 = local_328;
    }
  }
  LVar25 = local_2b8;
  if (local_2b8.QuadPart != -1) {
    QueryPerformanceCounter(&local_1e8);
    lVar57 = local_1e8.QuadPart - (longlong)LVar25;
    if (FVar45 != (FName)0x0) {
      *(longlong *)((longlong)FVar45 + 8) = *(longlong *)((longlong)FVar45 + 8) + lVar57;
      *(longlong *)FVar45 = *(longlong *)FVar45 + 1;
    }
    if (local_2b0 != (FName)0x0) {
      *(longlong *)((longlong)local_2b0 + 8) = *(longlong *)((longlong)local_2b0 + 8) + lVar57;
      *(longlong *)local_2b0 = *(longlong *)local_2b0 + 1;
    }
    if (local_2a8 != (FName)0x0) {
      *(longlong *)((longlong)local_2a8 + 8) = *(longlong *)((longlong)local_2a8 + 8) + lVar57;
      *(longlong *)local_2a8 = *(longlong *)local_2a8 + 1;
    }
  }
LAB_1481a5378:
  if ((local_2f0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2f0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2f0 & 4) != 0) {
    FThreadStats::AddMessage(local_2f8,CycleScopeEnd);
  }
  local_2f0 = 0;
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar62,CycleScopeEnd);
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(&local_108);
  FMemScope::~FMemScope(&local_1e0);
  FLLMScope::~FLLMScope(&local_308);
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// UpdateDynamicData @ 1481b2600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::UpdateDynamicData(UParticleSystemComponent *this)

{
  FParticleSystemSceneProxy *this_00;
  FParticleDynamicData *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,Particles,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Particles,true);
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  if (*(longlong *)&this->field_0x530 != 0) {
    pFVar1 = CreateDynamicData(this,*(Type *)(*(longlong *)(*(longlong *)&this->field_0x530 + 0x220)
                                             + 8));
    this_00 = *(FParticleSystemSceneProxy **)&this->field_0x530;
    this_00->LastDynamicData = this_00->DynamicData;
    this_00->VisualizeLODIndex = this->LODLevel;
    FParticleSystemSceneProxy::UpdateData(this_00,pFVar1);
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// UpdateInstances @ 1481b2a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::UpdateInstances(UParticleSystemComponent *this,bool param_1)

{
  return;
}

// UpdateLODInformation @ 1481b2a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleSystemComponent::UpdateLODInformation(UParticleSystemComponent *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  UWorld *this_00;
  longlong lVar6;
  UParticleSystem *pUVar7;
  uint uVar8;
  uint uVar9;
  
  if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
    WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
  }
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar3 = UWorld::IsGameWorld(this_00);
  if (((bVar3) && (lVar1 = *(longlong *)&this->field_0x530, lVar1 != 0)) &&
     (0 < (this->EmitterInstances).ArrayNum)) {
    if (this->bOverrideLODMethod == '\0') {
      pUVar7 = (this->Template).field0_0x0.DebugPtr;
      if (pUVar7 == (UParticleSystem *)0x0) {
        return;
      }
      uVar4 = (pUVar7->LODMethod).Value;
    }
    else {
      uVar4 = (this->LODMethod).Value;
    }
    if ((uVar4 == '\0') && (0.0 < *(float *)(lVar1 + 0x2c4))) {
      pUVar7 = (this->Template).field0_0x0.DebugPtr;
      uVar9 = 0;
      if (1 < (pUVar7->LODDistances).ArrayNum) {
        lVar6 = 4;
        uVar5 = 1;
        uVar9 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = 0;
          if ((int)uVar8 < (pUVar7->LODDistances).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(float *)(lVar1 + 0x2c4) <
              *(float *)((pUVar7->LODDistances).AllocatorInstance.Data + lVar6)) break;
          pUVar7 = (this->Template).field0_0x0.DebugPtr;
          lVar6 = lVar6 + 4;
          uVar5 = uVar8 + 1;
          uVar9 = uVar8;
        } while ((int)(uVar8 + 1) < (pUVar7->LODDistances).ArrayNum);
      }
      if (uVar9 != this->LODLevel) {
        (**(code **)(*(longlong *)this + 0xbf8))(this,uVar9);
      }
    }
  }
  return;
}

// WaitForAsyncAndFinalize @ 1481b4e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::WaitForAsyncAndFinalize
          (UParticleSystemComponent *this,EForceAsyncWorkCompletion param_1,bool param_2)

{
  ulong64 *puVar1;
  int *piVar2;
  char cVar3;
  FBaseGraphTask *pFVar4;
  UParticleSystem *pUVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize> FVar16;
  FThreadSafeStaticStat<FStat_STAT_GTSTallTime> FVar17;
  UWorld *pUVar18;
  FParticlePerfStats *pFVar19;
  FParticlePerfStats *pFVar20;
  longlong lVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  uint uVar24;
  FNameEntryId FVar25;
  FName FVar26;
  FName FVar27;
  LARGE_INTEGER LVar28;
  LARGE_INTEGER local_170;
  FColor_u_0 local_168 [2];
  FName local_160;
  FName local_158;
  FName local_150;
  FColor_u_0 local_148;
  FColor_u_0 local_144;
  EForceAsyncWorkCompletion local_140;
  FName local_138;
  FName local_128;
  FName local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50;
  FName local_48 [4];
  
  pFVar4 = (this->AsyncWork).Reference;
  if (pFVar4 == (FBaseGraphTask *)0x0) {
    return;
  }
  if (pFVar4->field_0xd0 != '\0') {
    return;
  }
  local_140 = param_1;
  if ((param_2) || (bVar14 = IsInGameThread(), bVar14)) {
    FFXAsyncBatcher::Flush(&FXAsyncBatcher);
    QueryPerformanceCounter(&local_170);
    bVar14 = true;
    dVar7 = (double)local_170.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (!param_2) goto LAB_1481b4f0e;
    bVar14 = IsInGameThread();
    if ((!bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                            ,0xaac,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar20 = (FParticlePerfStats *)0x0;
    FVar17 = StatPtr_STAT_GTSTallTime;
    if (StatPtr_STAT_GTSTallTime == (FThreadSafeStaticStat<FStat_STAT_GTSTallTime>)0x0) {
      pFVar15 = ::FName::FName(&local_58,"STAT_GTSTallTime");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_GTSTallTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GTSTallTime,*pFVar15,
                          L"Particle GT Stall Time","STATGROUP_Particles","STATCAT_Advanced",
                          L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar27 = *(FName *)FVar17;
    bVar8 = false;
    bVar13 = false;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    bVar14 = false;
    bVar9 = false;
    FVar25 = FVar27.ComparisonIndex.Value;
    uVar24 = FVar27.Number;
    if ((FVar25.Value == 0) && (uVar24 == 0)) {
LAB_1481b51de:
      bVar13 = bVar9;
      bVar8 = bVar14;
      bVar9 = false;
      FVar27 = local_128;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_148.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar8 = false;
        bVar13 = true;
        bVar14 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_160.ComparisonIndex.Value = FVar25.Value;
          local_160.Number = uVar24;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_160,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                     ,0xaad);
          bVar8 = true;
          bVar13 = true;
          bVar14 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1481b51de;
      local_160.ComparisonIndex.Value = FVar25.Value;
      local_160.Number = uVar24;
      local_128 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar9 = true;
    }
    FVar16 = StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize;
    if (StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize ==
        (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize>)0x0) {
      pFVar15 = ::FName::FName(&local_50,"STAT_UParticleSystemComponent_WaitForAsyncAndFinalize");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize,*pFVar15,
                          L"ParticleComponent WaitForAsyncAndFinalize GT","STATGROUP_Particles",
                          "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    FVar26 = *(FName *)FVar16;
    bVar10 = false;
    bVar12 = false;
    local_138.ComparisonIndex.Value = 0;
    local_138.Number = 0;
    bVar14 = false;
    bVar11 = false;
    FVar25 = FVar26.ComparisonIndex.Value;
    uVar24 = FVar26.Number;
    if ((FVar25.Value == 0) && (uVar24 == 0)) {
LAB_1481b5300:
      bVar12 = bVar11;
      bVar10 = bVar14;
      bVar11 = false;
      FVar26 = local_138;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_144.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_144._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
        bVar10 = false;
        bVar12 = true;
        bVar14 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_158.ComparisonIndex.Value = FVar25.Value;
          local_158.Number = uVar24;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_158,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                     ,0xaae);
          bVar10 = true;
          bVar12 = true;
          bVar14 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1481b5300;
      local_158.ComparisonIndex.Value = FVar25.Value;
      local_158.Number = uVar24;
      local_138 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar11 = true;
    }
    pUVar18 = *(UWorld **)&this->field_0xb0;
    pUVar5 = (this->Template).field0_0x0.DebugPtr;
    if ((((pUVar18 == (UWorld *)0x0) &&
         (pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar18 == (UWorld *)0x0)) || ((int)FParticlePerfStats::WorldStatsReaders < 1)) ||
       (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
      local_170.QuadPart = 0;
    }
    else {
      local_170 = (LARGE_INTEGER)FParticlePerfStatsManager::GetWorldPerfStats(pUVar18);
    }
    pFVar19 = pFVar20;
    if (((pUVar5 != (UParticleSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pFVar19 = FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar5);
    }
    if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pFVar20 = FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
    }
    if ((((FParticlePerfStats *)local_170.QuadPart != (FParticlePerfStats *)0x0) ||
        (pFVar19 != (FParticlePerfStats *)0x0)) ||
       (LVar28.QuadPart = -1, pFVar20 != (FParticlePerfStats *)0x0)) {
      QueryPerformanceCounter(&local_c8);
      LVar28 = local_c8;
    }
    cVar3 = this->bAsyncWorkOutstanding;
    while (cVar3 != '\0') {
      FWindowsPlatformProcess::SleepNoStats(0.0);
      cVar3 = this->bAsyncWorkOutstanding;
    }
    bVar14 = true;
    if (LVar28.QuadPart != -1) {
      QueryPerformanceCounter(&local_c0);
      lVar21 = local_c0.QuadPart - (longlong)LVar28;
      if ((FParticlePerfStats *)local_170.QuadPart != (FParticlePerfStats *)0x0) {
        *(ulong64 *)(local_170.QuadPart + 0x30) = *(ulong64 *)(local_170.QuadPart + 0x30) + lVar21;
      }
      if (pFVar19 != (FParticlePerfStats *)0x0) {
        puVar1 = &(pFVar19->GameThreadStats).WaitCycles;
        *puVar1 = *puVar1 + lVar21;
      }
      if (pFVar20 != (FParticlePerfStats *)0x0) {
        puVar1 = &(pFVar20->GameThreadStats).WaitCycles;
        *puVar1 = *puVar1 + lVar21;
      }
    }
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar11) && (FVar26 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
        local_88.NameAndInfo.Index.Value = local_138.ComparisonIndex.Value;
        local_88.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_b8);
        local_88.StatData.Pad[4] = '\0';
        local_88.StatData.Pad[5] = '\0';
        local_88.StatData.Pad[6] = '\0';
        local_88.StatData.Pad[7] = '\0';
        local_88.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
        local_88.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
        local_88.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
        local_88.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar22,&local_88);
        piVar2 = &pFVar22->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(pFVar22,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar22,false,false);
        }
      }
    }
    if (bVar13) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar9) && (FVar27 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      if (pFVar22->ScopeCount <= pFVar22->bWaitForExplicitFlush) goto LAB_1481b57b0;
      local_78.NameAndInfo.Index.Value = local_128.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar22,&local_78);
      piVar2 = &pFVar22->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar22,false,false);
        goto LAB_1481b57b0;
      }
      if (FThreadStats::bIsRawStatsActive == false) goto LAB_1481b57b0;
LAB_1481b57a6:
      FThreadStats::FlushRawStats(pFVar22,false,false);
    }
  }
  else {
    QueryPerformanceCounter(&local_170);
    dVar7 = (double)local_170.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    bVar14 = false;
LAB_1481b4f0e:
    pFVar20 = (FParticlePerfStats *)0x0;
    FVar16 = StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize;
    if (StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize ==
        (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize>)0x0) {
      pFVar15 = ::FName::FName(local_48,"STAT_UParticleSystemComponent_WaitForAsyncAndFinalize");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize,*pFVar15,
                          L"ParticleComponent WaitForAsyncAndFinalize GT","STATGROUP_Particles",
                          "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    FVar27 = *(FName *)FVar16;
    bVar8 = false;
    bVar13 = false;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    FVar25 = FVar27.ComparisonIndex.Value;
    uVar24 = FVar27.Number;
    if ((FVar25.Value == 0) && (uVar24 == 0)) {
LAB_1481b55c8:
      bVar9 = false;
      FVar27 = local_118;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_168[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_168[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
        bVar8 = false;
        bVar13 = true;
        if (-1 < CpuChannel->Enabled) {
          local_150.ComparisonIndex.Value = FVar25.Value;
          local_150.Number = uVar24;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_150,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                     ,0xabf);
          bVar8 = true;
          bVar13 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1481b55c8;
      local_150.ComparisonIndex.Value = FVar25.Value;
      local_150.Number = uVar24;
      local_118 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar9 = true;
    }
    pUVar18 = *(UWorld **)&this->field_0xb0;
    pUVar5 = (this->Template).field0_0x0.DebugPtr;
    if ((((pUVar18 == (UWorld *)0x0) &&
         (pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar18 == (UWorld *)0x0)) || ((int)FParticlePerfStats::WorldStatsReaders < 1)) ||
       (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
      local_170.QuadPart = 0;
    }
    else {
      local_170 = (LARGE_INTEGER)FParticlePerfStatsManager::GetWorldPerfStats(pUVar18);
    }
    pFVar19 = pFVar20;
    if (((pUVar5 != (UParticleSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pFVar19 = FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar5);
    }
    if ((0 < (int)FParticlePerfStats::ComponentStatsReaders) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pFVar20 = FParticlePerfStatsManager::GetComponentPerfStats((UFXSystemComponent *)this);
    }
    if ((((FParticlePerfStats *)local_170.QuadPart != (FParticlePerfStats *)0x0) ||
        (pFVar19 != (FParticlePerfStats *)0x0)) ||
       (LVar28.QuadPart = -1, pFVar20 != (FParticlePerfStats *)0x0)) {
      QueryPerformanceCounter(&local_a8);
      LVar28 = local_a8;
    }
    cVar3 = this->bAsyncWorkOutstanding;
    while (cVar3 != '\0') {
      FWindowsPlatformProcess::SleepNoStats(0.0);
      cVar3 = this->bAsyncWorkOutstanding;
    }
    if (LVar28.QuadPart != -1) {
      QueryPerformanceCounter(&local_a0);
      lVar21 = local_a0.QuadPart - (longlong)LVar28;
      if ((FParticlePerfStats *)local_170.QuadPart != (FParticlePerfStats *)0x0) {
        *(ulong64 *)(local_170.QuadPart + 0x30) = *(ulong64 *)(local_170.QuadPart + 0x30) + lVar21;
      }
      if (pFVar19 != (FParticlePerfStats *)0x0) {
        puVar1 = &(pFVar19->GameThreadStats).WaitCycles;
        *puVar1 = *puVar1 + lVar21;
      }
      if (pFVar20 != (FParticlePerfStats *)0x0) {
        puVar1 = &(pFVar20->GameThreadStats).WaitCycles;
        *puVar1 = *puVar1 + lVar21;
      }
    }
    if (bVar13) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar9) && (FVar27 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
        local_68.NameAndInfo.Index.Value = local_118.ComparisonIndex.Value;
        local_68.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_98);
        local_68.StatData.Pad[4] = '\0';
        local_68.StatData.Pad[5] = '\0';
        local_68.StatData.Pad[6] = '\0';
        local_68.StatData.Pad[7] = '\0';
        local_68.StatData.Pad[0] = local_98.s.LowPart._0_1_;
        local_68.StatData.Pad[1] = local_98.s.LowPart._1_1_;
        local_68.StatData.Pad[2] = local_98.s.LowPart._2_1_;
        local_68.StatData.Pad[3] = local_98.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar22,&local_68);
        piVar2 = &pFVar22->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(pFVar22,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) goto LAB_1481b57a6;
      }
    }
  }
LAB_1481b57b0:
  QueryPerformanceCounter(&local_90);
  if ((local_140 != SILENT) &&
     (__real_40400000 <=
      (float)((double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7) *
      __real_447a0000)) {
    if (bVar14) {
      if ((byte)LogParticles._0_1_ < 3) goto LAB_1481b5998;
      pUVar5 = (this->Template).field0_0x0.DebugPtr;
      if ((pUVar5 == (UParticleSystem *)0x0) || (pUVar5->_padding_ == 0)) {
        ::FString::FString(&local_f8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar5,&local_f8,(UObject *)0x0,None);
      }
      if (*(longlong *)&this->field_0x10 == 0) {
        ::FString::FString(&local_108,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_108,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      local_d8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        local_d8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((byte)LogParticles._0_1_ < 3) goto LAB_1481b5998;
      pUVar5 = (this->Template).field0_0x0.DebugPtr;
      if ((pUVar5 == (UParticleSystem *)0x0) || (pUVar5->_padding_ == 0)) {
        ::FString::FString(&local_d8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar5,&local_d8,(UObject *)0x0,None);
      }
      if (*(longlong *)&this->field_0x10 == 0) {
        ::FString::FString(&local_e8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_e8,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
LAB_1481b5998:
  FinalizeTickComponent(this);
  return;
}

// execBeginTrails @ 1481b5c40

void __cdecl
UParticleSystemComponent::execBeginTrails(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  undefined8 local_58;
  undefined8 local_50 [3];
  
  local_50[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  local_58 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  uVar8 = local_50[0];
  uVar7 = local_58;
  uVar6 = local_res20[0];
  uVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xaf0))(param_1,1);
  plVar9 = *(longlong **)&param_1[0x32].field_0x20;
  iVar2 = *(int *)(param_1 + 0x33);
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if (*(int *)(param_1 + 0x33) != iVar2) {
      `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (plVar9 == plVar1) break;
    plVar4 = (longlong *)*plVar9;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x200))(plVar4);
      (**(code **)(*plVar4 + 0x210))(plVar4,uVar8,uVar7,uVar5,uVar6);
    }
    plVar9 = plVar9 + 1;
  }
  return;
}

// execCreateNamedDynamicMaterialInstance @ 1481b5fd0

void __cdecl
UParticleSystemComponent::execCreateNamedDynamicMaterialInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xbb0))(param_1,local_res8,local_res10);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execEndTrails @ 1481b60b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UParticleSystemComponent::execEndTrails(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar3 = *(longlong **)&param_1[0x32].field_0x20;
  iVar2 = *(int *)(param_1 + 0x33);
  plVar1 = plVar3 + iVar2;
  while( true ) {
    if (*(int *)(param_1 + 0x33) != iVar2) {
      `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar3 == plVar1) break;
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 0x208))();
    }
    plVar3 = plVar3 + 1;
  }
  DeactivateSystem((UParticleSystemComponent *)param_1);
  return;
}

// execGenerateParticleEvent @ 1481b6140

void __cdecl
UParticleSystemComponent::execGenerateParticleEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [112];
  
  puVar9 = (undefined4 *)0x0;
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  uVar4 = local_res10;
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = *(uint *)&param_1[0x2b].field_0x18;
  if (uVar6 == *(uint *)&param_1[0x2b].field_0x1c) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)&param_1[0x2b].field_0x10,
                       (int *)&param_1[0x2b].field_0x1c);
  }
  *(uint *)&param_1[0x2b].field_0x18 = uVar6 + 1;
  uVar7 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar8 = (undefined4 *)((longlong)(int)uVar6 * 0x50 + *(longlong *)&param_1[0x2b].field_0x10);
  if (puVar8 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 0x12) = 0;
    puVar9 = puVar8;
  }
  puVar9[3] = uVar3;
  *(undefined8 *)(puVar9 + 4) = local_a0;
  *(undefined8 *)(puVar9 + 6) = uStack_98;
  *(undefined8 *)(puVar9 + 1) = uVar4;
  *(undefined8 *)(puVar9 + 10) = local_b8;
  *(undefined8 *)(puVar9 + 0xc) = uStack_b0;
  *puVar9 = 5;
  *(undefined8 *)(puVar9 + 8) = local_90;
  *(undefined8 *)(puVar9 + 0xe) = local_a8;
  return;
}

// execGetBeamEndPoint @ 1481b63e0

void __cdecl
UParticleSystemComponent::execGetBeamEndPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 local_res8 [2];
  uchar local_28 [32];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb38))(param_1,local_res8[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetBeamSourcePoint @ 1481b64d0

void __cdecl
UParticleSystemComponent::execGetBeamSourcePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  uchar local_38 [32];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb40))(param_1,local_res10[0],local_res8[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetBeamSourceStrength @ 1481b65f0

void __cdecl
UParticleSystemComponent::execGetBeamSourceStrength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
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
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb50))(param_1,local_res18[0],local_res10[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetBeamSourceTangent @ 1481b6720

void __cdecl
UParticleSystemComponent::execGetBeamSourceTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  uchar local_38 [32];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb48))(param_1,local_res10[0],local_res8[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetBeamTargetPoint @ 1481b6840

void __cdecl
UParticleSystemComponent::execGetBeamTargetPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  uchar local_38 [32];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb58))(param_1,local_res10[0],local_res8[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetBeamTargetStrength @ 1481b6960

void __cdecl
UParticleSystemComponent::execGetBeamTargetStrength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
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
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb68))(param_1,local_res18[0],local_res10[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetBeamTargetTangent @ 1481b6a90

void __cdecl
UParticleSystemComponent::execGetBeamTargetTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  uchar local_38 [32];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb60))(param_1,local_res10[0],local_res8[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetNamedMaterial @ 1481b6bf0

void __cdecl
UParticleSystemComponent::execGetNamedMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 3000))(param_1,local_res8);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetNumActiveParticles @ 1481b6ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UParticleSystemComponent::execGetNumActiveParticles(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetNumActiveParticles((UParticleSystemComponent *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSetAutoAttachParams @ 1481b6df0

void __cdecl
UParticleSystemComponent::execSetAutoAttachParams(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  Type TVar3;
  byte local_res8 [8];
  undefined8 local_res10 [2];
  UObject *local_res20;
  UObject *local_28 [2];
  
  local_res20 = (UObject *)0x0;
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
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res10[0];
  local_28[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar3 = (Type)local_res8[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0x2b].field_0x20,(FObjectPtr)local_28);
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  USceneComponent::ConvertAttachLocation
            (TVar3,&param_1[0x2c].field_0x8,&param_1[0x2c].field_0x9,&param_1[0x2c].field_0xa);
  return;
}

// execSetBeamEndPoint @ 1481b70e0

void __cdecl
UParticleSystemComponent::execSetBeamEndPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb00))(param_1,local_res8[0],&local_28);
  return;
}

// execSetBeamSourcePoint @ 1481b71d0

void __cdecl
UParticleSystemComponent::execSetBeamSourcePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_38;
  (**(code **)(*(longlong *)param_1 + 0xb08))(param_1,local_res10[0],&local_28,local_res8[0]);
  return;
}

// execSetBeamSourceStrength @ 1481b7300

void __cdecl
UParticleSystemComponent::execSetBeamSourceStrength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb18))(param_1,local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execSetBeamSourceTangent @ 1481b7410

void __cdecl
UParticleSystemComponent::execSetBeamSourceTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_38;
  (**(code **)(*(longlong *)param_1 + 0xb10))(param_1,local_res10[0],&local_28,local_res8[0]);
  return;
}

// execSetBeamTargetPoint @ 1481b7540

void __cdecl
UParticleSystemComponent::execSetBeamTargetPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_38;
  (**(code **)(*(longlong *)param_1 + 0xb20))(param_1,local_res10[0],&local_28,local_res8[0]);
  return;
}

// execSetBeamTargetStrength @ 1481b7670

void __cdecl
UParticleSystemComponent::execSetBeamTargetStrength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb30))(param_1,local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execSetBeamTargetTangent @ 1481b7780

void __cdecl
UParticleSystemComponent::execSetBeamTargetTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_38;
  (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,local_res10[0],&local_28,local_res8[0]);
  return;
}

// execSetMaterialParameter @ 1481b7d10

void __cdecl
UParticleSystemComponent::execSetMaterialParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  FLLMScope local_res10 [5];
  longlong local_res20;
  UObject *local_48;
  FMemScope local_40;
  
  uVar12 = 0;
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pUVar6 = local_48;
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLLMScope::FLLMScope(local_res10,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_40,Particles,true);
  if (lVar4 == 0) goto LAB_1481b8123;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x11cc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = 0;
  uVar14 = uVar12;
  if (0 < *(int *)&param_1[0x23].field_0x18) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = uVar16;
      if ((int)uVar11 < *(int *)&param_1[0x23].field_0x18) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar10 = (longlong *)(*(longlong *)&param_1[0x23].field_0x10 + uVar14);
      if ((*plVar10 == lVar4) && ((char)plVar10[1] == '\a')) {
        if ((char)param_1[0x23].field_0x2 < '\0') {
LAB_1481b805a:
          bVar9 = 0x80;
        }
        else {
          if ((UObject *)plVar10[0xb] == (UObject *)0x0) {
            bVar7 = pUVar6 == (UObject *)0x0;
          }
          else {
            bVar7 = (UObject *)plVar10[0xb] == pUVar6;
          }
          if (!bVar7) goto LAB_1481b805a;
          bVar9 = 0;
        }
        param_1[0x23].field_0x2 = param_1[0x23].field_0x2 & 0x7f | bVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        plVar10[0xb] = (longlong)pUVar6;
        goto LAB_1481b8123;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 + 0xe0;
    } while ((int)(uVar11 + 1) < *(int *)&param_1[0x23].field_0x18);
  }
  puVar1 = &param_1[0x23].field_0x10;
  uVar8 = *(uint *)&param_1[0x23].field_0x18;
  if (uVar8 == *(uint *)&param_1[0x23].field_0x1c) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10e0,(ForAnyElementType *)puVar1,(int *)&param_1[0x23].field_0x1c);
  }
  *(uint *)&param_1[0x23].field_0x18 = uVar8 + 1;
  lVar15 = (longlong)(int)uVar8 * 0xe0;
  memset((void *)(*(longlong *)puVar1 + lVar15),0,0xe0);
  uVar13 = ~uVar8 >> 0x1f;
  uVar11 = uVar16;
  if ((int)uVar8 < *(int *)&param_1[0x23].field_0x18) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(longlong *)(*(longlong *)puVar1 + lVar15) = lVar4;
  if ((int)uVar8 < *(int *)&param_1[0x23].field_0x18) {
    uVar16 = uVar13;
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
  *(undefined1 *)(*(longlong *)puVar1 + lVar15 + 8) = 7;
  if ((char)param_1[0x23].field_0x2 < '\0') {
LAB_1481b8093:
    bVar9 = 0x80;
  }
  else {
    uVar16 = 0;
    if ((int)uVar8 < *(int *)&param_1[0x23].field_0x18) {
      uVar16 = uVar13;
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
    pUVar3 = *(UObject **)
              ((longlong)(int)uVar8 * 0xe0 + 0x58 + *(longlong *)&param_1[0x23].field_0x10);
    if (pUVar3 == (UObject *)0x0) {
      bVar7 = pUVar6 == (UObject *)0x0;
    }
    else {
      bVar7 = pUVar3 == pUVar6;
    }
    if (!bVar7) goto LAB_1481b8093;
    bVar9 = 0;
  }
  param_1[0x23].field_0x2 = param_1[0x23].field_0x2 & 0x7f | bVar9;
  uVar16 = 0;
  if ((int)uVar8 < *(int *)&param_1[0x23].field_0x18) {
    uVar16 = uVar13;
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
  lVar4 = *(longlong *)&param_1[0x23].field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)((longlong)(int)uVar8 * 0xe0 + lVar4 + 0x58) = pUVar6;
LAB_1481b8123:
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// execSetTemplate @ 1481b8150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UParticleSystemComponent::execSetTemplate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UParticleSystem *local_res10;
  
  local_res10 = (UParticleSystem *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTemplate((UParticleSystemComponent *)param_1,local_res10);
  return;
}

// execSetTrailSourceData @ 1481b81e0

void __cdecl
UParticleSystemComponent::execSetTrailSourceData(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined8 local_58;
  undefined8 local_50 [3];
  
  local_50[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  local_58 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  uVar8 = local_50[0];
  uVar7 = local_58;
  uVar6 = local_res20[0];
  uVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar9 = *(longlong **)&param_1[0x32].field_0x20;
  iVar2 = *(int *)(param_1 + 0x33);
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if (*(int *)(param_1 + 0x33) != iVar2) {
      `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (plVar9 == plVar1) break;
    plVar4 = (longlong *)*plVar9;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x210))(plVar4,uVar8,uVar7,uVar5,uVar6);
    }
    plVar9 = plVar9 + 1;
  }
  return;
}

// operator() @ 1505268b0

bool __thiscall `UParticleSystemComponent::SetTemplate'::__l51::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2966147252621407248>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0xa8) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2966147252621407248>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052692c;
    }
  }
  bVar2 = false;
LAB_15052692c:
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

// operator() @ 150526960

bool __thiscall `UParticleSystemComponent::InitParticles'::__l88::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2966147252621407408>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2966147252621407408>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

