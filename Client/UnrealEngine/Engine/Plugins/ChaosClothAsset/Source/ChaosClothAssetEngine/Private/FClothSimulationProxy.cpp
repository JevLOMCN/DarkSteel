// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 28

// FClothSimulationProxy @ 14dc344a0

FClothSimulationProxy * __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::FClothSimulationProxy
          (FClothSimulationProxy *this,IClothComponentAdapter *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  float fVar3;
  UObject *pUVar4;
  FClothSimulationContext *this_00;
  FClothSimulationContext *pFVar5;
  FCollisionSources *pFVar6;
  FCollisionSourcesProxy *this_01;
  FClothSimulationContext *pFVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_28;
  FString local_18;
  
  FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy((FDataflowPhysicsSolverProxy *)this);
  pFVar7 = (FClothSimulationContext *)0x0;
  this->_padding_ = (longlong)&___7FClothSimulationProxy_ClothAsset_Chaos_UE__6B_;
  (this->ParallelTask).Reference = (FBaseGraphTask *)0x0;
  (this->ParallelInitializationTask).Reference = (FBaseGraphTask *)0x0;
  *(undefined8 *)&this->CurrentSimulationData = 0;
  *(undefined8 *)&(this->CurrentSimulationData).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentSimulationData).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentSimulationData).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentSimulationData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentSimulationData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentSimulationData).field_0x34 = 0;
  *(undefined8 *)&(this->CurrentSimulationData).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentSimulationData).field_0x48 = 0;
  this->ClothComponentAdapter = param_1;
  this_00 = ::operator_new(0x180);
  pFVar5 = pFVar7;
  if (this_00 != (FClothSimulationContext *)0x0) {
    memset(this_00,0,0x180);
    pFVar5 = FClothSimulationContext::FClothSimulationContext(this_00);
  }
  (this->ClothSimulationContext).Ptr = pFVar5;
  pFVar6 = (FCollisionSources *)(**(code **)((longlong)*param_1 + 8))(param_1);
  this_01 = ::operator_new(0x110);
  if (this_01 != (FCollisionSourcesProxy *)0x0) {
    pFVar7 = (FClothSimulationContext *)
             FCollisionSourcesProxy::FCollisionSourcesProxy(this_01,pFVar6);
  }
  (this->CollisionSourcesProxy).Ptr = (FCollisionSourcesProxy *)pFVar7;
  (this->ClothSimulationModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothSimulationModels).ArrayNum = 0;
  (this->ClothSimulationModels).ArrayMax = 0;
  (this->Solver).Ptr = (FClothingSimulationSolver *)0x0;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->Cloths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cloths).ArrayNum = 0;
  (this->Cloths).ArrayMax = 0;
  (this->Configs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configs).ArrayNum = 0;
  (this->Configs).ArrayMax = 0;
  (this->Colliders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Colliders).ArrayNum = 0;
  (this->Colliders).ArrayMax = 0;
  (this->Visualization).Ptr = (FClothVisualizationNoGC *)0x0;
  (this->CacheData).Ptr = (FClothingSimulationCacheData *)0x0;
  this->SolverMode = Default;
  this->NumCloths = (atomic<int>)0x0;
  this->NumKinematicParticles = (atomic<int>)0x0;
  this->NumDynamicParticles = (atomic<int>)0x0;
  this->NumIterations = (atomic<int>)0x0;
  this->NumSubsteps = (atomic<int>)0x0;
  this->SimulationTime = (atomic<float>)0x0;
  this->bIsTeleported = (atomic<bool>)0x0;
  this->LastLinearSolveIterations = (atomic<int>)0x0;
  this->LastLinearSolveError = (atomic<float>)0x0;
  pUVar8 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar4 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UPhysicsSettings>(&local_28);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar8 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
  iVar2 = (int)pUVar8->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      == &pUVar8->_padding_)) {
    fVar3 = *(float *)(pUVar4 + 10);
    this->bHasInvalidReferenceBoneTransforms = false;
    this->bIsPreProcessed = false;
    this->bIsInitialized = false;
    this->bIsSimulating = false;
    this->bNeedResetClothFromNanCheck = false;
    this->bHasNonMatchingReferenceBones = false;
    this->MaxDeltaTime = fVar3;
    return this;
  }
  pFVar9 = GetTypeName<UPhysicsSettings>(&local_28);
  pwVar10 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UObject>(&local_18,pUVar4);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar11);
}

// ~FClothSimulationProxy @ 14dc35d00

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::~FClothSimulationProxy(FClothSimulationProxy *this)

{
  undefined1 *puVar1;
  int iVar2;
  FClothingSimulationCacheData *pFVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  FClothVisualizationNoGC *pFVar6;
  FClothingSimulationSolver *this_00;
  FCollisionSourcesProxy *this_01;
  FBaseGraphTask *pFVar7;
  
  this->_padding_ = (longlong)&___7FClothSimulationProxy_ClothAsset_Chaos_UE__6B_;
  WaitForParallelInitialization_GameThread(this);
  CompleteParallelSimulation_GameThread(this);
  pFVar3 = (this->CacheData).Ptr;
  if (pFVar3 != (FClothingSimulationCacheData *)0x0) {
    *(undefined4 *)&(pFVar3->CachedReferenceSpaceTransforms).field_0x48 = 0;
    pvVar4 = *(void **)&(pFVar3->CachedReferenceSpaceTransforms).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar3->CachedReferenceSpaceTransforms);
    pFVar5 = (pFVar3->CacheIndices).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar3->CachedVelocities).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar3->CachedPositions).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar3,0x80);
  }
  pFVar6 = (this->Visualization).Ptr;
  if (pFVar6 != (FClothVisualizationNoGC *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>
              *)(this->Colliders).AllocatorInstance.Data,(this->Colliders).ArrayNum);
  pFVar5 = (this->Colliders).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>
              *)(this->Configs).AllocatorInstance.Data,(this->Configs).ArrayNum);
  pFVar5 = (this->Configs).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>
              *)(this->Cloths).AllocatorInstance.Data,(this->Cloths).ArrayNum);
  pFVar5 = (this->Cloths).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>
              *)(this->Meshes).AllocatorInstance.Data,(this->Meshes).ArrayNum);
  pFVar5 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this_00 = (this->Solver).Ptr;
  if (this_00 != (FClothingSimulationSolver *)0x0) {
    ::Chaos::FClothingSimulationSolver::~FClothingSimulationSolver(this_00);
    ::operator_delete(this_00,0x530);
  }
  DestructItems<TSharedPtr<FChaosClothSimulationModel_const_,1>,int>
            ((TSharedPtr<FChaosClothSimulationModel_const_,1> *)
             (this->ClothSimulationModels).AllocatorInstance.Data,
             (this->ClothSimulationModels).ArrayNum);
  pFVar5 = (this->ClothSimulationModels).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this_01 = (this->CollisionSourcesProxy).Ptr;
  if (this_01 != (FCollisionSourcesProxy *)0x0) {
    FCollisionSourcesProxy::~FCollisionSourcesProxy(this_01);
    ::operator_delete(this_01,0x110);
  }
  TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationContext>::operator()
            ((TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationContext> *)
             &this->ClothSimulationContext,(this->ClothSimulationContext).Ptr);
  *(undefined4 *)&(this->CurrentSimulationData).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CurrentSimulationData).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentSimulationData);
  pFVar7 = (this->ParallelInitializationTask).Reference;
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar7->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
    }
  }
  pFVar7 = (this->ParallelTask).Reference;
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar7->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
    }
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AdvanceSolverDatas @ 14dc38860

/* WARNING: Type propagation algorithm not settling */
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
UE::Chaos::ClothAsset::FClothSimulationProxy::AdvanceSolverDatas
          (FClothSimulationProxy *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  atomic<bool> aVar4;
  int iVar5;
  FClothSimulationContext *pFVar6;
  FClothingSimulationSolver *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  bool bVar14;
  char cVar15;
  atomic<int> aVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics> FVar19;
  IConsoleManager *pIVar20;
  FClothSimulationContext *pFVar21;
  UActorComponent *this_00;
  UWorld *pUVar22;
  longlong *plVar23;
  TConsoleVariableData<bool> *pTVar24;
  longlong lVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  atomic<float> aVar32;
  atomic<float> aVar33;
  double dVar34;
  float fVar35;
  undefined1 auStackX_20 [8];
  undefined1 auStack_128 [4];
  FColor_u_0 FStack_124;
  int iStack_120;
  FName FStack_118;
  FName FStack_110;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  LARGE_INTEGER LStack_f0;
  LARGE_INTEGER LStack_e8;
  longlong lStack_e0;
  FName FStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  
  if (!this->bIsPreProcessed) {
    return;
  }
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId557,"FClothSimulationProxy_TickPhysics",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0x22d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId557);
  }
  FVar19 = StatPtr_STAT_ClothSimulationProxy_TickPhysics;
  if (StatPtr_STAT_ClothSimulationProxy_TickPhysics ==
      (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics>)0x0) {
    pFVar18 = ::FName::FName(&FStack_d8,"STAT_ClothSimulationProxy_TickPhysics");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSimulationProxy_TickPhysics,
                        *pFVar18,L"ClothSimulationProxy Tick Physics","STATGROUP_ChaosClothAsset",
                        "STATCAT_Advanced",L"ChaosClothAsset",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar26 = *(FName *)FVar19;
  bVar12 = false;
  bVar11 = false;
  FStack_110.ComparisonIndex.Value = 0;
  FStack_110.Number = 0;
  bVar30 = false;
  bVar14 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_124._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar30 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_118.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        FStack_118.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_118,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                   ,0x22e);
        bVar12 = true;
        bVar11 = true;
        bVar30 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar14 = true;
      goto LAB_14dc5af13;
    }
  }
  bVar12 = bVar30;
  bVar11 = bVar14;
  bVar14 = false;
  FVar26 = FStack_110;
LAB_14dc5af13:
  pFVar6 = (this->ClothSimulationContext).Ptr;
  iStack_120 = (pFVar6->CacheData).CacheIndices.ArrayNum;
  if ((pFVar6->DeltaTime != 0.0) || (0 < iStack_120)) {
    lStack_e0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lStack_e0 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
    {
      pIVar20 = IConsoleManager::Get();
      UseTimeStepSmoothingCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar20 + 0xc0))(pIVar20,L"p.ChaosCloth.UseTimeStepSmoothing",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (UseTimeStepSmoothingCVar == (IConsoleVariable *)0x0) {
      cVar15 = '\x01';
    }
    else {
      cVar15 = (**(code **)(*(longlong *)UseTimeStepSmoothingCVar + 0xc0))();
    }
    pFVar6 = (this->ClothSimulationContext).Ptr;
    pFVar21 = (FClothSimulationContext *)&((this->Solver).Ptr)->DeltaTime;
    fVar2 = pFVar6->DeltaTime;
    if (*(float *)pFVar21 <= 0.0) {
      pFVar21 = pFVar6;
    }
    fVar35 = __real_3f800000;
    if (cVar15 != '\0') {
      fVar35 = DeltaTimeDecay;
    }
    fVar35 = (fVar2 - pFVar21->DeltaTime) * fVar35 + pFVar21->DeltaTime;
    QueryPerformanceCounter(&LStack_f0);
    aVar32 = this->SimulationTime;
    dVar9 = (double)LStack_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (((this->bNeedResetClothFromNanCheck) ||
        (((this->ClothSimulationContext).Ptr)->bReset != false)) || ((float)aVar32 == 0.0)) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    aVar4 = (atomic<bool>)((this->ClothSimulationContext).Ptr)->bTeleport;
    LOCK();
    this->bIsTeleported = aVar4;
    UNLOCK();
    pFVar6 = (this->ClothSimulationContext).Ptr;
    dStack_d0 = (pFVar6->ComponentTransform).Translation.XY.m128d_f64[0];
    dStack_c8 = (pFVar6->ComponentTransform).Translation.XY.m128d_f64[1];
    dStack_c0 = (pFVar6->ComponentTransform).Translation.ZW.m128d_f64[0];
    dStack_b8 = dStack_d0;
    dStack_b0 = dStack_c8;
    dStack_a8 = dStack_c0;
    ::Chaos::FClothingSimulationSolver::SetLocalSpaceLocation
              ((this->Solver).Ptr,(TVector<double,3> *)&dStack_d0,bVar30);
    pFVar6 = (this->ClothSimulationContext).Ptr;
    dVar34 = (pFVar6->ComponentTransform).Rotation.XY.m128d_f64[1];
    dVar3 = (pFVar6->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar10 = (pFVar6->ComponentTransform).Rotation.ZW.m128d_f64[1];
    pFVar7 = (this->Solver).Ptr;
    *(double *)&pFVar7->LocalSpaceRotation = (pFVar6->ComponentTransform).Rotation.XY.m128d_f64[0];
    *(double *)&(pFVar7->LocalSpaceRotation).field_0x8 = dVar34;
    *(double *)&(pFVar7->LocalSpaceRotation).field_0x10 = dVar3;
    *(double *)&(pFVar7->LocalSpaceRotation).field_0x18 = dVar10;
    pFVar6 = (this->ClothSimulationContext).Ptr;
    fStack_f8 = (float)(pFVar6->WindVelocity).field0_0x0._s_0.Z;
    fStack_fc = (float)(pFVar6->WindVelocity).field0_0x0._s_0.Y;
    fStack_100 = (float)(pFVar6->WindVelocity).field0_0x0._s_0.X;
    ::Chaos::FClothingSimulationSolver::SetWindVelocity
              ((this->Solver).Ptr,(TVector<float,3> *)&fStack_100,0.0);
    pFVar6 = (this->ClothSimulationContext).Ptr;
    pFVar7 = (this->Solver).Ptr;
    dVar34 = (pFVar6->WorldGravity).field0_0x0._s_0.Y;
    dVar3 = (pFVar6->WorldGravity).field0_0x0._s_0.Z;
    *(float *)&pFVar7->Gravity = (float)(pFVar6->WorldGravity).field0_0x0._s_0.X;
    *(float *)&(pFVar7->Gravity).field_0x4 = (float)dVar34;
    *(float *)&(pFVar7->Gravity).field_0x8 = (float)dVar3;
    ((this->Solver).Ptr)->bIsClothGravityOverrideEnabled = true;
    dVar34 = __real_3ff0000000000000;
    if (bVar30 == false) {
      dVar34 = ((double)((this->ClothSimulationContext).Ptr)->VelocityScale * (double)fVar35) /
               (double)fVar2;
    }
    ((this->Solver).Ptr)->VelocityScale = dVar34;
    pFVar27 = (this->Cloths).AllocatorInstance.Data;
    iVar5 = (this->Cloths).ArrayNum;
    pFVar1 = pFVar27 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->Cloths).ArrayNum != iVar5) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
      }
      if (pFVar27 == pFVar1) break;
      if (bVar30 != false) {
        *(undefined1 *)(*(longlong *)pFVar27 + 0x44) = 1;
      }
      if (aVar4 != (atomic<bool>)0x0) {
        *(undefined1 *)(*(longlong *)pFVar27 + 0x45) = 1;
      }
      pFVar6 = (this->ClothSimulationContext).Ptr;
      if (pFVar6->bResetRestLengthsWithMorphTarget != false) {
        lVar29 = *(longlong *)pFVar27;
        *(undefined1 *)(lVar29 + 0x46) = 1;
        ::FString::operator=((FString *)(lVar29 + 0x48),&pFVar6->ResetRestLengthsMorphTargetName);
      }
      pFVar27 = pFVar27 + 8;
    }
    pFVar7 = (this->Solver).Ptr;
    if ((pFVar7->bEnableSolver == false) && (0 < iStack_120)) {
      ::Chaos::FClothingSimulationSolver::UpdateFromCache
                (pFVar7,&((this->ClothSimulationContext).Ptr)->CacheData);
    }
    else {
      ::Chaos::FClothingSimulationSolver::Update(pFVar7,fVar35);
    }
    aVar16 = (atomic<int>)
             ::Chaos::FClothingSimulationSolver::GetNumUsedIterations((this->Solver).Ptr);
    LOCK();
    this->NumIterations = aVar16;
    UNLOCK();
    LOCK();
    this->NumSubsteps = (atomic<int>)((this->Solver).Ptr)->NumUsedSubsteps;
    UNLOCK();
    QueryPerformanceCounter(&LStack_e8);
    aVar33 = (atomic<float>)
             (float)(((double)LStack_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar9) *
                    __real_408f400000000000);
    if ((float)aVar32 != 0.0) {
      aVar33 = (atomic<float>)(((float)aVar33 - (float)aVar32) * __real_3cf5c28f + (float)aVar32);
    }
    iVar17 = -1;
    LOCK();
    this->SimulationTime = aVar33;
    UNLOCK();
    LOCK();
    this->NumKinematicParticles = (atomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->NumDynamicParticles = (atomic<int>)0x0;
    UNLOCK();
    pFVar27 = (this->Cloths).AllocatorInstance.Data;
    iVar5 = (this->Cloths).ArrayNum;
    pFVar1 = pFVar27 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->Cloths).ArrayNum != iVar5) {
        auStack_128[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStack_128);
      }
      if (pFVar27 == pFVar1) break;
      LOCK();
      this->NumKinematicParticles =
           (atomic<int>)((int)this->NumKinematicParticles + *(int *)(*(longlong *)pFVar27 + 0x150));
      UNLOCK();
      LOCK();
      this->NumDynamicParticles =
           (atomic<int>)((int)this->NumDynamicParticles + *(int *)(*(longlong *)pFVar27 + 0x154));
      UNLOCK();
      if ((iVar17 == -1) && (0 < (*(FClothingSimulationCloth **)pFVar27)->NumActiveDynamicParticles)
         ) {
        iVar17 = ::Chaos::FClothingSimulationCloth::GetParticleRangeId
                           (*(FClothingSimulationCloth **)pFVar27,(this->Solver).Ptr);
      }
      pFVar27 = pFVar27 + 8;
    }
    if (iVar17 == -1) {
      LOCK();
      this->LastLinearSolveError = (atomic<float>)0x0;
      UNLOCK();
      aVar16 = (atomic<int>)0x0;
    }
    else {
      aVar32 = (atomic<float>)
               ::Chaos::FClothingSimulationSolver::GetLinearSolverError((this->Solver).Ptr,iVar17);
      LOCK();
      this->LastLinearSolveError = aVar32;
      UNLOCK();
      aVar16 = (atomic<int>)
               ::Chaos::FClothingSimulationSolver::GetNumLinearSolverIterations
                         ((this->Solver).Ptr,iVar17);
    }
    LOCK();
    this->LastLinearSolveIterations = aVar16;
    UNLOCK();
    this->bNeedResetClothFromNanCheck = false;
    this_00 = (UActorComponent *)(**(code **)*this->ClothComponentAdapter)();
    pUVar22 = this_00->WorldPrivate;
    if (((pUVar22 != (UWorld *)0x0) ||
        (pUVar22 = UActorComponent::GetWorld_Uncached(this_00), pUVar22 != (UWorld *)0x0)) &&
       ((pUVar22->WorldType).Value != '\x04')) {
      if ((*(int *)(lStack_e0 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)
         ) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawLocalSpaceCVar = pTVar24;
        _Init_thread_footer(&::_TSS3);
      }
      uVar13 = _tls_index;
      uVar28 = (ulonglong)_tls_index;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBoundsCVar = pTVar24;
        _Init_thread_footer(&::_TSS4);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawGravityCVar = pTVar24;
        _Init_thread_footer(&::_TSS5);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawPhysMeshWiredCVar = pTVar24;
        _Init_thread_footer(&::_TSS6);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawAnimMeshWiredCVar = pTVar24;
        _Init_thread_footer(&::_TSS7);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawPointVelocitiesCVar = pTVar24;
        _Init_thread_footer(&::_TSS8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawAnimNormalsCVar = pTVar24;
        _Init_thread_footer(&::_TSS9);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawPointNormalsCVar = pTVar24;
        _Init_thread_footer(&::_TSS10);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawCollisionCVar = pTVar24;
        _Init_thread_footer(&::_TSS11);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBackstopsCVar = pTVar24;
        _Init_thread_footer(&::_TSS12);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBackstopDistancesCVar = pTVar24;
        _Init_thread_footer(&::_TSS13);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawMaxDistancesCVar = pTVar24;
        _Init_thread_footer(&::_TSS14);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawMaxDistanceValuesCVar = pTVar24;
        _Init_thread_footer(&::_TSS15);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawAnimDriveCVar = pTVar24;
        _Init_thread_footer(&_TSS16);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawEdgeConstraintCVar = pTVar24;
        _Init_thread_footer(&_TSS17);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBendingConstraintCVar = pTVar24;
        _Init_thread_footer(&_TSS18);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawLongRangeConstraintCVar = pTVar24;
        _Init_thread_footer(&_TSS19);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawWindForcesCVar = pTVar24;
        _Init_thread_footer(&_TSS20);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawWindVelocityCVar = pTVar24;
        _Init_thread_footer(&_TSS21);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawSelfCollisionCVar = pTVar24;
        _Init_thread_footer(&_TSS22);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS23) && (_Init_thread_header(&_TSS23), _TSS23 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawSelfIntersectionCVar = pTVar24;
        _Init_thread_footer(&_TSS23);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawParticleIndicesCVar = pTVar24;
        _Init_thread_footer(&_TSS24);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawElementIndicesCVar = pTVar24;
        _Init_thread_footer(&_TSS25);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS26) && (_Init_thread_header(&_TSS26), _TSS26 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawClothClothConstraintsCVar = pTVar24;
        _Init_thread_footer(&_TSS26);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS27) && (_Init_thread_header(&_TSS27), _TSS27 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawTeleportResetCVar = pTVar24;
        _Init_thread_footer(&_TSS27);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS28) && (_Init_thread_header(&_TSS28), _TSS28 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawExtremlyDeformedEdgesCVar = pTVar24;
        _Init_thread_footer(&_TSS28);
      }
      pTVar24 = DebugDrawLocalSpaceCVar;
      lVar29 = 1;
      if (DebugDrawLocalSpaceCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawLocalSpace
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawBoundsCVar;
      if (DebugDrawBoundsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBounds
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawGravityCVar;
      if (DebugDrawGravityCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawGravity
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawPhysMeshWiredCVar;
      if (DebugDrawPhysMeshWiredCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPhysMeshWired
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawAnimMeshWiredCVar;
      if (DebugDrawAnimMeshWiredCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimMeshWired
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawPointVelocitiesCVar;
      if (DebugDrawPointVelocitiesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPointVelocities
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawAnimNormalsCVar;
      dVar9 = __real_4034000000000000;
      if (DebugDrawAnimNormalsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimNormals
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,dVar9);
        }
      }
      pTVar24 = DebugDrawPointNormalsCVar;
      if (DebugDrawPointNormalsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPointNormals
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,dVar9);
        }
      }
      pTVar24 = DebugDrawCollisionCVar;
      if (DebugDrawCollisionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawCollision
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,false);
        }
      }
      pTVar24 = DebugDrawBackstopsCVar;
      if (DebugDrawBackstopsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBackstops
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawBackstopDistancesCVar;
      if (DebugDrawBackstopDistancesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBackstopDistances
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawMaxDistancesCVar;
      if (DebugDrawMaxDistancesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawMaxDistances
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawMaxDistanceValuesCVar;
      if (DebugDrawMaxDistanceValuesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawMaxDistanceValues
                    ((this->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar24 = DebugDrawAnimDriveCVar;
      if (DebugDrawAnimDriveCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimDrive
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawEdgeConstraintCVar;
      if (DebugDrawEdgeConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawEdgeConstraint
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawBendingConstraintCVar;
      if (DebugDrawBendingConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBendingConstraint
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawLongRangeConstraintCVar;
      if (DebugDrawLongRangeConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawLongRangeConstraint
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawWindForcesCVar;
      if (DebugDrawWindForcesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawWindAndPressureForces
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,
                     __real_4024000000000000);
        }
      }
      pTVar24 = DebugDrawWindVelocityCVar;
      if (DebugDrawWindVelocityCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawWindVelocity
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,
                     __real_3fb999999999999a);
        }
      }
      pTVar24 = DebugDrawSelfCollisionCVar;
      if (DebugDrawSelfCollisionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawSelfCollision
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawSelfIntersectionCVar;
      if (DebugDrawSelfIntersectionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawSelfIntersection
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawParticleIndicesCVar;
      if (DebugDrawParticleIndicesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawParticleIndices
                    ((this->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar24 = DebugDrawElementIndicesCVar;
      if (DebugDrawElementIndicesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawElementIndices
                    ((this->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar24 = DebugDrawClothClothConstraintsCVar;
      if (DebugDrawClothClothConstraintsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawClothClothConstraints
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawTeleportResetCVar;
      if (DebugDrawTeleportResetCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawTeleportReset
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawExtremlyDeformedEdgesCVar;
      if (DebugDrawExtremlyDeformedEdgesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar29 = 0;
        }
        if (pTVar24->ShadowedValue[lVar29] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawExtremlyDeformedEdges
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BeginInitialization_GameThread @ 14dc390f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::BeginInitialization_GameThread
          (FClothSimulationProxy *this)

{
  int *piVar1;
  TArray<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TUniquePtr<Chaos::FClothingSimulationSolver,TDefaultDelete<Chaos::FClothingSimulationSolver>_>
  *pTVar6;
  TUniquePtr<Chaos::FClothVisualizationNoGC,TDefaultDelete<Chaos::FClothVisualizationNoGC>_> *pTVar7
  ;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FClothSimulationContext *pFVar10;
  undefined8 uVar11;
  FClothingSimulationMesh *pFVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  FChaosClothSimulationModel *pFVar28;
  bool bVar29;
  bool bVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar36;
  FClothingSimulationConfig *pFVar37;
  FClothingSimulationSolver *pFVar38;
  FClothingSimulationSolver *pFVar39;
  FClothVisualizationNoGC *this_00;
  FClothingSimulationSolver *pFVar40;
  undefined8 *puVar41;
  longlong lVar42;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar43;
  FClothSimulationMesh *this_01;
  FClothSimulationMesh *pFVar44;
  FReferenceSkeleton *pFVar45;
  UPhysicsAsset *pUVar46;
  FClothingSimulationCollider *pFVar47;
  FClothingSimulationCloth *pFVar48;
  ulonglong uVar49;
  wchar_t *pwVar50;
  FString *__return_storage_ptr__;
  longlong *plVar51;
  longlong *plVar52;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *pTVar53;
  int iVar54;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> *pTVar55;
  longlong *plVar56;
  float fVar57;
  undefined1 auStackY_318 [32];
  undefined1 local_2d8 [4];
  int local_2d4;
  uint local_2d0;
  FLLMScope local_2cc;
  TArray<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,TSizedDefaultAllocator<32>_>
  *local_2c8;
  FClothSimulationProxy *local_2c0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_2a8;
  FString local_298;
  uint local_288;
  int local_284;
  TArray<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,TSizedDefaultAllocator<32>_>
  *local_280;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> local_278;
  TArray<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,TSizedDefaultAllocator<32>_>
  *local_268;
  longlong *local_260;
  longlong *local_258;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> local_250;
  longlong *local_240;
  uint local_238;
  longlong local_230;
  TArray<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,TSizedDefaultAllocator<32>_>
  *local_228;
  longlong *local_220;
  FName local_218;
  FName local_210;
  FMemScope local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  longlong local_1e8;
  FChaosClothSimulationModel *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  FString local_1d0;
  longlong local_1c0 [2];
  longlong local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  FStringFormatArg local_118;
  FStringFormatArg local_f8;
  FStringFormatArg local_d8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  bVar27 = false;
  bVar26 = false;
  bVar25 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  local_2d0 = 0;
  local_2c0 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name161,L"Physics/Cloth");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_2cc,LLMScope_Name161,false,None,Default,true);
  FMemScope::FMemScope(&local_208,&LLMScope_Name161,true);
  bVar29 = IsInGameThread();
  if ((!bVar29) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                          ,0xa4,L""), bVar29)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar2 = &this->Configs;
  piVar8 = &(this->Configs).ArrayMax;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  iVar32 = (this->Configs).ArrayNum;
  local_280 = pTVar2;
  if (*piVar8 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>
                *)pFVar9,iVar32);
    (this->Configs).ArrayNum = 0;
    if (*piVar8 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar8);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>
                *)pFVar9,iVar32);
    (this->Configs).ArrayNum = 0;
  }
  pTVar3 = &this->Meshes;
  piVar1 = &(this->Meshes).ArrayMax;
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  iVar32 = (this->Meshes).ArrayNum;
  local_268 = pTVar3;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>
                *)pFVar9,iVar32);
    (this->Meshes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>
                *)pFVar9,iVar32);
    (this->Meshes).ArrayNum = 0;
  }
  pTVar4 = &this->Colliders;
  piVar1 = &(this->Colliders).ArrayMax;
  pFVar9 = (pTVar4->AllocatorInstance).Data;
  iVar32 = (this->Colliders).ArrayNum;
  local_2c8 = pTVar4;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>
                *)pFVar9,iVar32);
    (this->Colliders).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>
                *)pFVar9,iVar32);
    (this->Colliders).ArrayNum = 0;
  }
  pTVar5 = &this->Cloths;
  piVar1 = &(this->Cloths).ArrayMax;
  pFVar9 = (pTVar5->AllocatorInstance).Data;
  iVar32 = (this->Cloths).ArrayNum;
  local_228 = pTVar5;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>
                *)pFVar9,iVar32);
    (this->Cloths).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar5->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>
                *)pFVar9,iVar32);
    (this->Cloths).ArrayNum = 0;
  }
  pTVar36 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
            (**(code **)((longlong)*this->ClothComponentAdapter + 0x60))();
  pFVar37 = ::operator_new(0x28);
  if (pFVar37 == (FClothingSimulationConfig *)0x0) {
    pFVar37 = (FClothingSimulationConfig *)0x0;
  }
  else {
    pFVar37 = ::Chaos::FClothingSimulationConfig::FClothingSimulationConfig(pFVar37,pTVar36);
  }
  pFVar40 = (FClothingSimulationSolver *)0x0;
  uVar31 = (this->Configs).ArrayNum;
  if (uVar31 == *piVar8) {
    uVar31 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar8);
  }
  (this->Configs).ArrayNum = uVar31 + 1;
  *(FClothingSimulationConfig **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar31 * 8) =
       pFVar37;
  uVar33 = 0;
  if ((int)uVar31 < (this->Configs).ArrayNum) {
    uVar33 = ~uVar31 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar37 = *(FClothingSimulationConfig **)
             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar31 * 8);
  pFVar38 = ::operator_new(0x530);
  pFVar39 = pFVar40;
  if (pFVar38 != (FClothingSimulationSolver *)0x0) {
    pFVar39 = ::Chaos::FClothingSimulationSolver::FClothingSimulationSolver(pFVar38,pFVar37,false);
  }
  pTVar6 = &this->Solver;
  if (pTVar6 == (TUniquePtr<Chaos::FClothingSimulationSolver,TDefaultDelete<Chaos::FClothingSimulationSolver>_>
                 *)&local_1b0) {
    if (pFVar39 != (FClothingSimulationSolver *)0x0) {
      ::Chaos::FClothingSimulationSolver::~FClothingSimulationSolver(pFVar39);
      ::operator_delete(pFVar39,0x530);
    }
  }
  else {
    pFVar38 = pTVar6->Ptr;
    pTVar6->Ptr = pFVar39;
    this = local_2c0;
    if (pFVar38 != (FClothingSimulationSolver *)0x0) {
      ::Chaos::FClothingSimulationSolver::~FClothingSimulationSolver(pFVar38);
      ::operator_delete(pFVar38,0x530);
      this = local_2c0;
    }
  }
  pFVar39 = pTVar6->Ptr;
  this_00 = ::operator_new(0x10);
  if (this_00 != (FClothVisualizationNoGC *)0x0) {
    pFVar40 = (FClothingSimulationSolver *)
              ::Chaos::FClothVisualizationNoGC::FClothVisualizationNoGC(this_00,pFVar39);
  }
  pTVar7 = &this->Visualization;
  if (pTVar7 == (TUniquePtr<Chaos::FClothVisualizationNoGC,TDefaultDelete<Chaos::FClothVisualizationNoGC>_>
                 *)local_1c0) {
    if (pFVar40 == (FClothingSimulationSolver *)0x0) goto LAB_14dc3948a;
    puVar41 = *(undefined8 **)&pFVar40->field_0x0;
  }
  else {
    pFVar39 = (FClothingSimulationSolver *)pTVar7->Ptr;
    pTVar7->Ptr = (FClothVisualizationNoGC *)pFVar40;
    if (pFVar39 == (FClothingSimulationSolver *)0x0) goto LAB_14dc3948a;
    puVar41 = *(undefined8 **)&pFVar39->field_0x0;
    pFVar40 = pFVar39;
  }
  (*(code *)*puVar41)(pFVar40,1);
LAB_14dc3948a:
  FClothSimulationContext::Fill
            ((this->ClothSimulationContext).Ptr,this->ClothComponentAdapter,0.0,this->MaxDeltaTime,
             true,(FClothingSimulationCacheData *)0x0);
  fVar57 = ((this->ClothSimulationContext).Ptr)->SolverGeometryScale;
  if (fVar57 <= __real_322bcc77) {
    fVar57 = __real_322bcc77;
  }
  ::Chaos::FClothingSimulationSolver::SetLocalSpaceScale
            (pTVar6->Ptr,__real_3ff0000000000000 / (double)fVar57,true);
  pFVar10 = (this->ClothSimulationContext).Ptr;
  local_148 = (pFVar10->ComponentTransform).Translation.XY.m128d_f64[0];
  dStack_140 = (pFVar10->ComponentTransform).Translation.XY.m128d_f64[1];
  local_138 = (pFVar10->ComponentTransform).Translation.ZW.m128d_f64[0];
  local_130 = local_148;
  dStack_128 = dStack_140;
  local_120 = local_138;
  ::Chaos::FClothingSimulationSolver::SetLocalSpaceLocation
            (pTVar6->Ptr,(TVector<double,3> *)&local_148,true);
  pFVar10 = (this->ClothSimulationContext).Ptr;
  uVar18 = *(undefined4 *)((longlong)(pFVar10->ComponentTransform).Rotation.XY.m128d_f64 + 4);
  uVar19 = *(undefined4 *)((pFVar10->ComponentTransform).Rotation.XY.m128d_f64 + 1);
  uVar20 = *(undefined4 *)((longlong)(pFVar10->ComponentTransform).Rotation.XY.m128d_f64 + 0xc);
  uVar21 = *(undefined4 *)(pFVar10->ComponentTransform).Rotation.ZW.m128d_f64;
  uVar22 = *(undefined4 *)((longlong)(pFVar10->ComponentTransform).Rotation.ZW.m128d_f64 + 4);
  uVar23 = *(undefined4 *)((pFVar10->ComponentTransform).Rotation.ZW.m128d_f64 + 1);
  uVar24 = *(undefined4 *)((longlong)(pFVar10->ComponentTransform).Rotation.ZW.m128d_f64 + 0xc);
  pFVar40 = pTVar6->Ptr;
  *(undefined4 *)&pFVar40->LocalSpaceRotation =
       *(undefined4 *)(pFVar10->ComponentTransform).Rotation.XY.m128d_f64;
  *(undefined4 *)&(pFVar40->LocalSpaceRotation).field_0x4 = uVar18;
  *(undefined4 *)&(pFVar40->LocalSpaceRotation).field_0x8 = uVar19;
  *(undefined4 *)&(pFVar40->LocalSpaceRotation).field_0xc = uVar20;
  *(undefined4 *)&(pFVar40->LocalSpaceRotation).field_0x10 = uVar21;
  *(undefined4 *)&(pFVar40->LocalSpaceRotation).field_0x14 = uVar22;
  *(undefined4 *)&(pFVar40->LocalSpaceRotation).field_0x18 = uVar23;
  *(undefined4 *)&(pFVar40->LocalSpaceRotation).field_0x1c = uVar24;
  (**(code **)((longlong)*this->ClothComponentAdapter + 0x10))
            (this->ClothComponentAdapter,&local_240);
  uVar49 = (ulonglong)(int)local_238;
  local_2d0 = local_238;
  plVar52 = local_240 + uVar49;
  plVar51 = local_240;
  local_260 = plVar52;
  do {
    local_258 = plVar51;
    if (local_238 != (uint)uVar49) {
      local_2d8[0] = 0;
      `TCheckedPointerIterator<UChaosClothAssetBase_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2d8);
    }
    if (plVar51 == plVar52) {
      if (local_240 != (longlong *)0x0) {
        FMemory::Free(local_240);
      }
      FMemScope::~FMemScope(&local_208);
      FLLMScope::~FLLMScope(&local_2cc);
      return;
    }
    plVar56 = (longlong *)*plVar51;
    local_220 = plVar56;
    if (plVar56 != (longlong *)0x0) {
      iVar32 = (**(code **)(*plVar56 + 0x4c8))(plVar56);
      local_2d4 = 0;
      plVar52 = local_260;
      if (0 < iVar32) {
        do {
          iVar54 = local_2d4;
          pFVar44 = (FClothSimulationMesh *)0x0;
          local_288 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x18))
                                (this->ClothComponentAdapter,plVar56,local_2d4);
          if (local_288 != 0xffffffff) {
            (**(code **)(*plVar56 + 0x4d0))(plVar56,&local_1e0,iVar54);
            local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_298.Data.ArrayNum = 0;
            local_298.Data.ArrayMax = 0;
            lVar42 = (**(code **)*this->ClothComponentAdapter)();
            if (*(longlong *)(lVar42 + 0xa8) == 0) {
              lVar42 = (**(code **)*this->ClothComponentAdapter)();
              local_1f0 = *(FName *)(lVar42 + 0x18);
              ::FName::ToString(&local_1f0,&local_188);
              FStringFormatArg::FStringFormatArg(&local_118,&local_188);
              local_218 = *(FName *)(plVar56 + 3);
              ::FName::ToString(&local_218,&local_178);
              FStringFormatArg::FStringFormatArg(&local_f8,&local_178);
              FStringFormatArg::FStringFormatArg(&local_d8,iVar54);
              local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2a8.ArrayNum = 3;
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,3,0,&local_2a8.AllocatorInstance,3,&local_2a8.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_2a8.AllocatorInstance.Data,&local_118,3);
              pwVar50 = L"{0}|{1}|Model[{2}]";
              bVar17 = true;
              bVar16 = true;
              bVar15 = true;
              pTVar53 = &local_2a8;
              __return_storage_ptr__ = &local_168;
            }
            else {
              lVar42 = (**(code **)*this->ClothComponentAdapter)();
              lVar42 = *(longlong *)(lVar42 + 0xa8);
              if (*(int *)(lVar42 + 0x1f0) < 2) {
                local_210 = *(FName *)(lVar42 + 0x18);
                ::FName::ToString(&local_210,&local_1d0);
              }
              else {
                ::FString::FString(&local_1d0,(FString *)(lVar42 + 0x1e8));
              }
              FStringFormatArg::FStringFormatArg(&local_b8,&local_1d0);
              lVar42 = (**(code **)*this->ClothComponentAdapter)();
              local_200 = *(FName *)(lVar42 + 0x18);
              ::FName::ToString(&local_200,&local_1a8);
              FStringFormatArg::FStringFormatArg(&local_98,&local_1a8);
              local_1f8 = *(FName *)(plVar56 + 3);
              ::FName::ToString(&local_1f8,&local_198);
              FStringFormatArg::FStringFormatArg(&local_78,&local_198);
              FStringFormatArg::FStringFormatArg(&local_58,iVar54);
              local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2b8.ArrayNum = 4;
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,4,0,&local_2b8.AllocatorInstance,4,&local_2b8.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_2b8.AllocatorInstance.Data,&local_b8,4);
              pTVar53 = &local_2b8;
              bVar27 = true;
              bVar26 = true;
              bVar25 = true;
              pwVar50 = L"{0}|{1}|{2}|Model[{3}]";
              __return_storage_ptr__ = &local_158;
            }
            ::FString::FormatImpl(__return_storage_ptr__,pwVar50,pTVar53);
            local_284 = iVar32;
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            local_298.Data.AllocatorInstance.Data =
                 (__return_storage_ptr__->Data).AllocatorInstance.Data;
            (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_298.Data.ArrayNum = (__return_storage_ptr__->Data).ArrayNum;
            local_298.Data.ArrayMax = (__return_storage_ptr__->Data).ArrayMax;
            (__return_storage_ptr__->Data).ArrayNum = 0;
            (__return_storage_ptr__->Data).ArrayMax = 0;
            if ((bVar15) &&
               (bVar15 = false,
               local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            if (bVar16) {
              bVar16 = false;
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum);
              if ((FStringFormatArg *)local_2a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_2a8.AllocatorInstance.Data);
              }
            }
            if (bVar17) {
              bVar17 = false;
              if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_f8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_f8.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_118.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.StringValue.Data.AllocatorInstance.Data);
              }
            }
            if ((bVar25) &&
               (bVar25 = false,
               local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            if (bVar26) {
              bVar26 = false;
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum);
              if ((FStringFormatArg *)local_2b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_2b8.AllocatorInstance.Data);
              }
            }
            if (bVar27) {
              bVar27 = false;
              if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
              }
            }
            pTVar43 = (TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>
                       *)(**(code **)(*plVar56 + 0x4e0))(plVar56,iVar54);
            pFVar10 = (this->ClothSimulationContext).Ptr;
            if ((local_1e0 == (FChaosClothSimulationModel *)0x0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar29)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar28 = local_1e0;
            this_01 = ::operator_new(0x58);
            if (this_01 != (FClothSimulationMesh *)0x0) {
              pFVar44 = FClothSimulationMesh::FClothSimulationMesh
                                  (this_01,pFVar28,pFVar10,pTVar43,&local_298);
            }
            pTVar3 = local_268;
            uVar31 = local_268->ArrayNum;
            if (uVar31 == local_268->ArrayMax) {
              uVar31 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_268->AllocatorInstance,&local_268->ArrayMax);
            }
            local_1e8 = (longlong)(int)uVar31;
            pTVar3->ArrayNum = uVar31 + 1;
            *(FClothSimulationMesh **)((pTVar3->AllocatorInstance).Data + local_1e8 * 8) = pFVar44;
            pFVar45 = (FReferenceSkeleton *)(**(code **)(*plVar56 + 0x318))(plVar56);
            pUVar46 = (UPhysicsAsset *)(**(code **)(*plVar56 + 0x4e8))(plVar56,iVar54);
            pFVar47 = ::operator_new(0x88);
            if (pFVar47 == (FClothingSimulationCollider *)0x0) {
              pFVar47 = (FClothingSimulationCollider *)0x0;
            }
            else {
              pFVar47 = ::Chaos::FClothingSimulationCollider::FClothingSimulationCollider
                                  (pFVar47,pUVar46,pFVar45);
            }
            uVar33 = local_2c8->ArrayNum;
            if (uVar33 == local_2c8->ArrayMax) {
              uVar33 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_2c8->AllocatorInstance,&local_2c8->ArrayMax);
            }
            lVar42 = (longlong)(int)uVar33;
            local_2c8->ArrayNum = uVar33 + 1;
            *(FClothingSimulationCollider **)((local_2c8->AllocatorInstance).Data + lVar42 * 8) =
                 pFVar47;
            uVar34 = 0;
            if ((int)uVar33 < local_2c8->ArrayNum) {
              uVar34 = ~uVar33 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(FClothCollisionData **)
             (*(longlong *)((local_2c8->AllocatorInstance).Data + lVar42 * 8) + 0x10) =
                 &((local_2c0->CollisionSourcesProxy).Ptr)->CollisionData;
            pTVar36 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>
                       *)(**(code **)((longlong)*local_2c0->ClothComponentAdapter + 0x58))
                                   (local_2c0->ClothComponentAdapter,plVar56,local_2d4);
            pFVar37 = ::operator_new(0x28);
            if (pFVar37 == (FClothingSimulationConfig *)0x0) {
              pFVar37 = (FClothingSimulationConfig *)0x0;
            }
            else {
              pFVar37 = ::Chaos::FClothingSimulationConfig::FClothingSimulationConfig
                                  (pFVar37,pTVar36);
            }
            uVar34 = local_280->ArrayNum;
            if (uVar34 == local_280->ArrayMax) {
              uVar34 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_280->AllocatorInstance,&local_280->ArrayMax);
            }
            pTVar4 = local_2c8;
            local_230 = (longlong)(int)uVar34;
            local_280->ArrayNum = uVar34 + 1;
            *(FClothingSimulationConfig **)((local_280->AllocatorInstance).Data + local_230 * 8) =
                 pFVar37;
            if (uVar33 == 0xffffffff) {
              pTVar55 = &local_250;
              local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_250.ArrayNum = 0;
              local_250.ArrayMax = 0;
              bVar14 = false;
              bVar29 = true;
            }
            else {
              uVar35 = 0;
              if ((int)uVar33 < local_2c8->ArrayNum) {
                uVar35 = ~uVar33 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar11 = *(undefined8 *)((pTVar4->AllocatorInstance).Data + lVar42 * 8);
              local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_278.ArrayNum = 1;
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,1,0,&local_278.AllocatorInstance,1,&local_278.ArrayMax);
              pTVar55 = &local_278;
              *(undefined8 *)local_278.AllocatorInstance.Data = uVar11;
              bVar14 = true;
              bVar29 = false;
            }
            pTVar3 = local_268;
            uVar33 = 0;
            if ((int)uVar31 < local_268->ArrayNum) {
              uVar33 = ~uVar31 >> 0x1f;
            }
            lVar42 = local_1e8;
            if (uVar33 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              lVar42 = (longlong)(int)uVar31;
              if (bVar30) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            pTVar2 = local_280;
            pFVar12 = *(FClothingSimulationMesh **)((pTVar3->AllocatorInstance).Data + lVar42 * 8);
            uVar31 = 0;
            if ((int)uVar34 < local_280->ArrayNum) {
              uVar31 = ~uVar34 >> 0x1f;
            }
            lVar42 = local_230;
            if (uVar31 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              lVar42 = (longlong)(int)uVar34;
              if (bVar30) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            pFVar37 = *(FClothingSimulationConfig **)((pTVar2->AllocatorInstance).Data + lVar42 * 8)
            ;
            pFVar48 = ::operator_new(0x160);
            if (pFVar48 == (FClothingSimulationCloth *)0x0) {
              pFVar48 = (FClothingSimulationCloth *)0x0;
            }
            else {
              pFVar48 = ::Chaos::FClothingSimulationCloth::FClothingSimulationCloth
                                  (pFVar48,pFVar37,pFVar12,pTVar55,local_288);
            }
            pTVar5 = local_228;
            iVar32 = local_228->ArrayNum;
            if (iVar32 == local_228->ArrayMax) {
              iVar32 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_228->AllocatorInstance,&local_228->ArrayMax);
            }
            pTVar5->ArrayNum = iVar32 + 1;
            *(FClothingSimulationCloth **)((pTVar5->AllocatorInstance).Data + (longlong)iVar32 * 8)
                 = pFVar48;
            if ((bVar29) && (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_250.AllocatorInstance.Data);
            }
            if ((bVar14) && (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_278.AllocatorInstance.Data);
            }
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d8);
            this = local_2c0;
            plVar56 = local_220;
            iVar54 = local_2d4;
            iVar32 = local_284;
          }
          local_2d4 = iVar54 + 1;
          plVar51 = local_258;
          plVar52 = local_260;
        } while (local_2d4 < iVar32);
      }
    }
    uVar49 = (ulonglong)local_2d0;
    plVar51 = plVar51 + 1;
  } while( true );
}

// CalculateBounds_AnyThread @ 14dc3c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::CalculateBounds_AnyThread
          (FClothSimulationProxy *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  int *piVar1;
  FBaseGraphTask *pFVar2;
  FClothingSimulationSolver *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_CalculateBounds> FVar20;
  TBoxSphereBounds<double,double> *pTVar21;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar22;
  uint uVar23;
  FClothingSimulationSolver *this_01;
  FStatMessage *pFVar24;
  FNameEntryId FVar25;
  FName FVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar35;
  undefined1 auVar32 [16];
  double dVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  FColor_u_0 local_2d8 [2];
  LARGE_INTEGER local_2d0;
  FName local_2c8;
  FName local_2c0;
  LARGE_INTEGER local_2b0;
  FStatMessage local_2a8;
  FStatMessage local_298;
  TVector<double>_u_0 local_280;
  double dStack_268;
  undefined8 uStack_260;
  double dStack_258;
  double local_250;
  FName local_248 [4];
  undefined1 local_228 [16];
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TMatrix<double> local_148 [2];
  
  FVar20 = StatPtr_STAT_ClothSimulationProxy_CalculateBounds;
  if (StatPtr_STAT_ClothSimulationProxy_CalculateBounds ==
      (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_CalculateBounds>)0x0) {
    pFVar19 = ::FName::FName(local_248,"STAT_ClothSimulationProxy_CalculateBounds");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_CalculateBounds>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClothSimulationProxy_CalculateBounds,*pFVar19,
                        L"ClothSimulationProxy Calculate Bounds","STATGROUP_ChaosClothAsset",
                        "STATCAT_Advanced",L"ChaosClothAsset",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar26 = *(FName *)FVar20;
  bVar10 = false;
  bVar12 = false;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar17 = FVar26.Number;
  if ((FVar25.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d8[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c8.ComparisonIndex.Value = FVar25.Value;
        local_2c8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                   ,0x3ef);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2d0.s.LowPart = FVar25.Value;
      local_2d0.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar11 = true;
      goto LAB_14dc3c5ce;
    }
  }
  bVar11 = false;
  FVar26 = local_2c0;
LAB_14dc3c5ce:
  if ((this->bIsPreProcessed) &&
     ((pFVar2 = (this->ParallelTask).Reference, pFVar2 == (FBaseGraphTask *)0x0 ||
      (pFVar2->field_0xd0 != '\0')))) {
    if (((this->Solver).Ptr == (FClothingSimulationSolver *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Solver",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                            ,0x3f3,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
      return pTVar21;
    }
    this_01 = (this->Solver).Ptr;
    ::Chaos::FClothingSimulationSolver::CalculateBounds
              (this_01,(TBoxSphereBounds<double,double> *)&local_280._s_0);
    uVar15 = _UNK_15061cc8c;
    uVar14 = _UNK_15061cc88;
    uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar3 = (this->Solver).Ptr;
    local_1a8.Translation.XY.m128d_f64[0] = *(double *)&pFVar3->LocalSpaceLocation;
    local_1a8.Translation.XY.m128d_f64[1] = *(double *)&(pFVar3->LocalSpaceLocation).field_0x8;
    local_1a8.Rotation.XY.m128d_f64[0] = *(double *)&pFVar3->LocalSpaceRotation;
    local_1a8.Rotation.XY.m128d_f64[1] = *(double *)&(pFVar3->LocalSpaceRotation).field_0x8;
    local_1a8.Rotation.ZW.m128d_f64[0] = *(double *)&(pFVar3->LocalSpaceRotation).field_0x10;
    local_1a8.Rotation.ZW.m128d_f64[1] = *(double *)&(pFVar3->LocalSpaceRotation).field_0x18;
    local_1a8.Translation.ZW.m128d_f64[0] = *(double *)&(pFVar3->LocalSpaceLocation).field_0x10;
    local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_ = ___xmm_00000000000000003ff0000000000000;
    local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_ = _UNK_150689514;
    local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = _UNK_150689518;
    local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = _UNK_15068951c;
    local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
    local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ = _UNK_150689684;
    local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = _UNK_150689688;
    local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = _UNK_15068968c;
    lVar27 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c & _UNK_15068951c,_UNK_15061cc88 & _UNK_150689518));
    auVar39._8_4_ = (int)lVar27;
    auVar39._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689514,
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           ___xmm_00000000000000003ff0000000000000));
    auVar39._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar23 = movmskpd((int)this_01,auVar39);
    auVar30._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(_UNK_15061cc8c & _UNK_15068968c,_UNK_15061cc88 & _UNK_150689688));
    auVar30._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689684,
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           ___xmm_3ff00000000000003ff0000000000000));
    iVar18 = movmskpd((int)pFVar3,auVar30);
    if ((uVar23 & 0x3fffffff) == 0 && iVar18 == 0) {
      local_208.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_208.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_208.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_208.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_208.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_208.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(&local_1a8,&local_208);
    }
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_208,local_148);
    auVar9._8_4_ = (undefined4)uStack_260;
    auVar9._0_8_ = dStack_268;
    auVar9._12_4_ = uStack_260._4_4_;
    dVar29 = auVar9._8_8_;
    auVar31._8_4_ = SUB84(dStack_268,0);
    auVar31._0_8_ = dStack_268;
    auVar31._12_4_ = (int)((ulonglong)dStack_268 >> 0x20);
    dVar35 = auVar31._8_8_ * local_148[0].M[0][1];
    auVar32._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dStack_268 * local_148[0].M[0][0]) >> 0x20) & uVar13,
                          SUB84(dStack_268 * local_148[0].M[0][0],0) & uVar17);
    auVar32._8_4_ = SUB84(dVar35,0) & uVar14;
    auVar32._12_4_ = (uint)((ulonglong)dVar35 >> 0x20) & uVar15;
    dVar37 = local_148[0].M[1][2] * local_280._s_0.Y;
    dVar36 = local_148[0].M[0][1] * local_280._s_0.X;
    dVar35 = (double)CONCAT44((uint)((ulonglong)(dVar29 * local_148[0].M[1][0]) >> 0x20) & uVar13,
                              SUB84(dVar29 * local_148[0].M[1][0],0) & uVar17) + auVar32._0_8_ +
             (double)CONCAT44((uint)((ulonglong)(dStack_258 * local_148[0].M[2][0]) >> 0x20) &
                              uVar13,SUB84(dStack_258 * local_148[0].M[2][0],0) & uVar17);
    uStack_260 = (double)CONCAT44((uint)((ulonglong)(dVar29 * local_148[0].M[1][1]) >> 0x20) &
                                  uVar15,SUB84(dVar29 * local_148[0].M[1][1],0) & uVar14) +
                 auVar32._8_8_ +
                 (double)CONCAT44((uint)((ulonglong)(dStack_258 * local_148[0].M[2][1]) >> 0x20) &
                                  uVar15,SUB84(dStack_258 * local_148[0].M[2][1],0) & uVar14);
    dVar28 = local_148[0].M[0][2] * local_280._s_0.X;
    local_280._s_0.X =
         local_148[0].M[1][0] * local_280._s_0.Y + local_148[0].M[0][0] * local_280._s_0.X +
         local_148[0].M[2][0] * local_280._s_0.Z + local_148[0].M[3][0];
    local_280._s_0.Y =
         local_148[0].M[1][1] * local_280._s_0.Y + dVar36 + local_148[0].M[2][1] * local_280._s_0.Z
         + local_148[0].M[3][1];
    dStack_258 = (double)CONCAT44((uint)((ulonglong)(dVar29 * local_148[0].M[1][2]) >> 0x20) &
                                  uVar13,SUB84(dVar29 * local_148[0].M[1][2],0) & uVar17) +
                 (double)CONCAT44((uint)((ulonglong)(local_148[0].M[0][2] * dStack_268) >> 0x20) &
                                  uVar13,SUB84(local_148[0].M[0][2] * dStack_268,0) & uVar17) +
                 (double)CONCAT44((uint)((ulonglong)(dStack_258 * local_148[0].M[2][2]) >> 0x20) &
                                  uVar13,SUB84(dStack_258 * local_148[0].M[2][2],0) & uVar17);
    auVar8._8_4_ = SUB84(uStack_260,0);
    auVar8._0_8_ = dVar35;
    auVar8._12_4_ = (int)((ulonglong)uStack_260 >> 0x20);
    auVar38._0_8_ =
         local_148[0].M[1][0] * local_148[0].M[1][0] + local_148[0].M[0][0] * local_148[0].M[0][0] +
         local_148[0].M[2][0] * local_148[0].M[2][0];
    auVar38._8_8_ =
         local_148[0].M[1][1] * local_148[0].M[1][1] + local_148[0].M[0][1] * local_148[0].M[0][1] +
         local_148[0].M[2][1] * local_148[0].M[2][1];
    auVar33._8_4_ = SUB84(auVar38._8_8_,0);
    auVar33._0_8_ = auVar38._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar34._8_8_ = auVar38._8_8_;
    auVar34._0_8_ = auVar33._8_8_;
    auVar39 = maxpd(auVar38,auVar34);
    dVar29 = local_148[0].M[1][2] * local_148[0].M[1][2] +
             local_148[0].M[0][2] * local_148[0].M[0][2] +
             local_148[0].M[2][2] * local_148[0].M[2][2];
    local_280._s_0.Z =
         dVar37 + dVar28 + local_148[0].M[2][2] * local_280._s_0.Z + local_148[0].M[3][2];
    auVar7._8_4_ = SUB84(dVar29,0);
    auVar7._0_8_ = dVar29;
    auVar7._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar39 = maxpd(auVar39,auVar7);
    dVar28 = SQRT(dStack_258 * dStack_258 + dVar35 * dVar35 + uStack_260 * uStack_260);
    dVar29 = SQRT(auVar39._0_8_) * local_250;
    local_228._0_4_ = SUB84(dVar35,0);
    local_228._4_4_ = (undefined4)((ulonglong)dVar35 >> 0x20);
    local_250 = dVar28;
    if (dVar29 <= dVar28) {
      local_250 = dVar29;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_280._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_280._s_0.Y;
    auVar5._8_4_ = local_228._0_4_;
    auVar5._0_8_ = local_280._s_0.Z;
    auVar5._12_4_ = local_228._4_4_;
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar5;
    *(double *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = uStack_260;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_258;
    __return_storage_ptr__->SphereRadius = local_250;
    auVar6._8_4_ = local_228._0_4_;
    auVar6._0_8_ = local_280._s_0.Z;
    auVar6._12_4_ = local_228._4_4_;
    dStack_268 = auVar6._8_8_;
    local_228 = auVar8;
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar11) {
      return __return_storage_ptr__;
    }
    if (FVar26 == (FName)0x0) {
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
      pFVar22 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_2a8.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
    local_2a8.NameAndInfo.Index.Value = FVar26.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_2d0);
    local_2a8.StatData.Pad[4] = '\0';
    local_2a8.StatData.Pad[5] = '\0';
    local_2a8.StatData.Pad[6] = '\0';
    local_2a8.StatData.Pad[7] = '\0';
    local_2a8.StatData.Pad[0] = local_2d0.s.LowPart._0_1_;
    local_2a8.StatData.Pad[1] = local_2d0.s.LowPart._1_1_;
    local_2a8.StatData.Pad[2] = local_2d0.s.LowPart._2_1_;
    local_2a8.StatData.Pad[3] = local_2d0.s.LowPart._3_1_;
    pFVar24 = &local_2a8;
  }
  else {
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->SphereRadius = 0.0;
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar11) {
      return __return_storage_ptr__;
    }
    if (FVar26 == (FName)0x0) {
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
      pFVar22 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_298.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
    local_298.NameAndInfo.Index.Value = FVar26.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_2b0);
    local_298.StatData.Pad[4] = '\0';
    local_298.StatData.Pad[5] = '\0';
    local_298.StatData.Pad[6] = '\0';
    local_298.StatData.Pad[7] = '\0';
    local_298.StatData.Pad[0] = local_2b0.s.LowPart._0_1_;
    local_298.StatData.Pad[1] = local_2b0.s.LowPart._1_1_;
    local_298.StatData.Pad[2] = local_2b0.s.LowPart._2_1_;
    local_298.StatData.Pad[3] = local_2b0.s.LowPart._3_1_;
    pFVar24 = &local_298;
  }
  FThreadStats::AddStatMessage(this_00,pFVar24);
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

// CompleteInitialization_GameThread @ 14dc40eb0

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::CompleteInitialization_GameThread
          (FClothSimulationProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                       ,0x11a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  WaitForParallelInitialization_GameThread(this);
  FClothSimulationContext::Fill
            ((this->ClothSimulationContext).Ptr,this->ClothComponentAdapter,0.0,this->MaxDeltaTime,
             false,(FClothingSimulationCacheData *)0x0);
  ::Chaos::FClothingSimulationSolver::Update
            ((this->Solver).Ptr,((this->ClothSimulationContext).Ptr)->DeltaTime);
  this->bIsInitialized = true;
  return;
}

// CompleteParallelSimulation_GameThread @ 14dc40f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::CompleteParallelSimulation_GameThread
          (FClothSimulationProxy *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_EndParallelClothTask> FVar10;
  FTaskGraphInterface *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  FColor_u_0 FVar14;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                         ,0x2d3,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->ParallelTask).Reference == (FBaseGraphTask *)0x0) {
    return;
  }
  FVar14.Bits = 0;
  FVar10 = StatPtr_STAT_ClothSimulationProxy_EndParallelClothTask;
  if (StatPtr_STAT_ClothSimulationProxy_EndParallelClothTask ==
      (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_EndParallelClothTask>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_ClothSimulationProxy_EndParallelClothTask");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_EndParallelClothTask>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClothSimulationProxy_EndParallelClothTask,*pFVar9,
                        L"ClothSimulationProxy End Parallel Cloth Task","STATGROUP_ChaosClothAsset",
                        "STATCAT_Advanced",L"ChaosClothAsset",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar8 = false;
  bVar7 = false;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar12.Bits;
        local_res14 = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                   ,0x2d7);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar12.Bits;
      uStackX_c = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      FVar14.Bits = FVar12.Bits;
      goto LAB_14dc4110c;
    }
  }
  bVar6 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_14dc4110c:
  if (__CsvProfilerStat728 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Cloth");
    __CsvProfilerStat728 = true;
  }
  FCsvProfiler::BeginSetWaitStat
            ("EventWait/Cloth","CsvEventWait/Cloth","CsvEventWait/Cloth (Non-CP)");
  this_00 = FTaskGraphInterface::Get();
  FTaskGraphInterface::WaitUntilTaskCompletes(this_00,&this->ParallelTask,GameThread);
  pFVar4 = (this->ParallelTask).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    (this->ParallelTask).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  if (this->bIsSimulating) {
    WriteSimulationData(this);
  }
  PostProcess_GameThread(this);
  FCsvProfiler::EndSetWaitStat();
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar14.Bits;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
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
  return;
}

// ExecuteInitialization @ 14dc45af0

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::ExecuteInitialization(FClothSimulationProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId244,"ClothSimulationProxy_ExecuteInitialization",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0xf4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name245,L"Physics/Cloth");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name245,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name245,true);
  pFVar4 = (this->Cloths).AllocatorInstance.Data;
  aVar3 = (atomic<int>)0x0;
  iVar2 = (this->Cloths).ArrayNum;
  aVar5 = (atomic<int>)0x0;
  aVar6 = (atomic<int>)0x0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    ::Chaos::FClothingSimulationSolver::AddCloth
              ((this->Solver).Ptr,*(FClothingSimulationCloth **)pFVar4);
    aVar3 = (atomic<int>)((int)aVar3 + 1);
    *(undefined1 *)(*(longlong *)pFVar4 + 0x44) = 1;
    aVar5 = (atomic<int>)((int)aVar5 + *(int *)(*(longlong *)pFVar4 + 0x150));
    aVar6 = (atomic<int>)((int)aVar6 + *(int *)(*(longlong *)pFVar4 + 0x154));
    pFVar4 = pFVar4 + 8;
  }
  LOCK();
  this->NumCloths = aVar3;
  UNLOCK();
  LOCK();
  this->NumKinematicParticles = aVar5;
  UNLOCK();
  LOCK();
  this->NumDynamicParticles = aVar6;
  UNLOCK();
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FillSimulationContext @ 14dc47bc0

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::FillSimulationContext
          (FClothSimulationProxy *this,float param_1,bool param_2)

{
  FClothingSimulationCacheData *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  FClothSimulationContext::Fill
            ((this->ClothSimulationContext).Ptr,this->ClothComponentAdapter,param_1,
             this->MaxDeltaTime,param_2,(this->CacheData).Ptr);
  pFVar1 = (this->CacheData).Ptr;
  if (pFVar1 != (FClothingSimulationCacheData *)0x0) {
    (this->CacheData).Ptr = (FClothingSimulationCacheData *)0x0;
    *(undefined4 *)&(pFVar1->CachedReferenceSpaceTransforms).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->CachedReferenceSpaceTransforms).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->CachedReferenceSpaceTransforms);
    pFVar3 = (pFVar1->CacheIndices).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar1->CachedVelocities).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar1->CachedPositions).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x80);
  }
  return;
}

// ForcePendingReset_GameThread @ 14dc48060

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::ForcePendingReset_GameThread
          (FClothSimulationProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ParallelInitializationTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    if ((!bWaitForAsyncClothInitialization) && (pFVar3->field_0xd0 == '\0')) {
      return;
    }
    CompleteInitialization_GameThread(this);
  }
  if ((!this->bIsInitialized) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                         ,0x205,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  CompleteParallelSimulation_GameThread(this);
  pFVar7 = (this->Cloths).AllocatorInstance.Data;
  iVar2 = (this->Cloths).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    lVar4 = *(longlong *)pFVar7;
    pFVar7 = pFVar7 + 8;
    *(undefined1 *)(lVar4 + 0x44) = 1;
  }
  return;
}

// GetClothVisualization @ 14dc4b190

FClothVisualizationNoGC * __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::GetClothVisualization(FClothSimulationProxy *this)

{
  return (this->Visualization).Ptr;
}

// GetCurrentSimulationData_AnyThread @ 14dc4b390

TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_> *
__thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::GetCurrentSimulationData_AnyThread
          (FClothSimulationProxy *this)

{
  FBaseGraphTask *pFVar1;
  
  if ((this->bIsPreProcessed) &&
     ((pFVar1 = (this->ParallelTask).Reference, pFVar1 == (FBaseGraphTask *)0x0 ||
      (pFVar1->field_0xd0 != '\0')))) {
    return &this->CurrentSimulationData;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Chaos::ClothAsset::FClothSimulationProxy::GetCurrentSimulationData_AnyThread'::
             __l2::_dynamic_atexit_destructor_for__EmptyClothSimulationData__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyClothSimulationData;
}

// HardResetSimulation_GameThread @ 14dc51210

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::HardResetSimulation_GameThread
          (FClothSimulationProxy *this)

{
  FScriptContainerElement *pFVar1;
  FClothSimulationContext *pFVar2;
  FClothingSimulationSolver *pFVar3;
  undefined8 *puVar4;
  FClothingSimulationMesh *pFVar5;
  void *_Src;
  FClothingSimulationConfig *this_00;
  FClothingSimulationCloth *this_01;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  FClothingSimulationCloth *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  atomic<int> aVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  float fVar24;
  atomic<int> aVar25;
  atomic<int> aVar26;
  undefined1 local_res8 [8];
  atomic<int> local_res10;
  int local_res18;
  uint local_res20;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> local_d8;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  uint local_a0;
  FScriptContainerElement local_98 [8];
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                          ,0x133,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FClothSimulationContext::Fill
            ((this->ClothSimulationContext).Ptr,this->ClothComponentAdapter,0.0,this->MaxDeltaTime,
             true,(FClothingSimulationCacheData *)0x0);
  fVar24 = ((this->ClothSimulationContext).Ptr)->SolverGeometryScale;
  if (fVar24 <= __real_322bcc77) {
    fVar24 = __real_322bcc77;
  }
  ::Chaos::FClothingSimulationSolver::SetLocalSpaceScale
            ((this->Solver).Ptr,__real_3ff0000000000000 / (double)fVar24,true);
  pFVar2 = (this->ClothSimulationContext).Ptr;
  local_90 = (pFVar2->ComponentTransform).Translation.XY.m128d_f64[0];
  dStack_88 = (pFVar2->ComponentTransform).Translation.XY.m128d_f64[1];
  local_80 = (pFVar2->ComponentTransform).Translation.ZW.m128d_f64[0];
  local_78 = local_90;
  dStack_70 = dStack_88;
  local_68 = local_80;
  ::Chaos::FClothingSimulationSolver::SetLocalSpaceLocation
            ((this->Solver).Ptr,(TVector<double,3> *)&local_90,true);
  pFVar2 = (this->ClothSimulationContext).Ptr;
  aVar20 = (atomic<int>)0x0;
  local_res10 = (atomic<int>)0x0;
  aVar25 = (atomic<int>)0x0;
  aVar26 = (atomic<int>)0x0;
  uVar7 = *(undefined4 *)((longlong)(pFVar2->ComponentTransform).Rotation.XY.m128d_f64 + 4);
  uVar8 = *(undefined4 *)((pFVar2->ComponentTransform).Rotation.XY.m128d_f64 + 1);
  uVar9 = *(undefined4 *)((longlong)(pFVar2->ComponentTransform).Rotation.XY.m128d_f64 + 0xc);
  dVar10 = (pFVar2->ComponentTransform).Rotation.ZW.m128d_f64[0];
  dVar11 = (pFVar2->ComponentTransform).Rotation.ZW.m128d_f64[1];
  pFVar3 = (this->Solver).Ptr;
  *(undefined4 *)&pFVar3->LocalSpaceRotation =
       *(undefined4 *)(pFVar2->ComponentTransform).Rotation.XY.m128d_f64;
  *(undefined4 *)&(pFVar3->LocalSpaceRotation).field_0x4 = uVar7;
  *(undefined4 *)&(pFVar3->LocalSpaceRotation).field_0x8 = uVar8;
  *(undefined4 *)&(pFVar3->LocalSpaceRotation).field_0xc = uVar9;
  *(double *)&(pFVar3->LocalSpaceRotation).field_0x10 = dVar10;
  *(double *)&(pFVar3->LocalSpaceRotation).field_0x18 = dVar11;
  ::Chaos::FClothingSimulationSolver::RemoveCloths((this->Solver).Ptr);
  uVar18 = 0;
  (**(code **)((longlong)*this->ClothComponentAdapter + 0x10))
            (this->ClothComponentAdapter,&local_a8);
  uVar17 = (ulonglong)(int)local_a0;
  lVar19 = 0;
  local_res20 = local_a0;
  plVar23 = local_a8 + uVar17;
  plVar21 = local_a8;
  local_b8 = plVar23;
  do {
    local_b0 = plVar21;
    if (local_a0 != (uint)uVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UChaosClothAssetBase_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar21 == plVar23) {
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free(local_a8);
      }
      if ((uVar18 != (this->Cloths).ArrayNum) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ClothIndex == Cloths.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                              ,0x171,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      this->NumCloths = aVar20;
      UNLOCK();
      LOCK();
      this->NumKinematicParticles = aVar25;
      UNLOCK();
      LOCK();
      this->NumDynamicParticles = aVar26;
      UNLOCK();
      return;
    }
    plVar21 = (longlong *)*plVar21;
    local_c0 = plVar21;
    if (plVar21 != (longlong *)0x0) {
      local_res18 = (**(code **)(*plVar21 + 0x4c8))(plVar21);
      iVar22 = 0;
      plVar23 = local_b8;
      if (0 < local_res18) {
        do {
          uVar13 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x18))
                             (this->ClothComponentAdapter,plVar21,iVar22);
          if (uVar13 != 0xffffffff) {
            if ((((int)uVar18 < 0) || ((this->Cloths).ArrayNum <= (int)uVar18)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Cloths.IsValidIndex(ClothIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                    ,0x154,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar14 = 0;
            if ((int)uVar18 < (this->Cloths).ArrayNum) {
              uVar14 = ~uVar18 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar18 = uVar18 + 1;
            pFVar1 = (this->Cloths).AllocatorInstance.Data + lVar19 * 8;
            local_c8 = lVar19 + 1;
            if ((uVar13 != *(uint *)(*(longlong *)pFVar1 + 0x20)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SimulationGroupId == Cloth->GetGroupId()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                    ,0x157,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar4 = *(undefined8 **)pFVar1;
            pFVar5 = (FClothingSimulationMesh *)*puVar4;
            local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ArrayNum = *(int *)(puVar4 + 3);
            lVar19 = (longlong)local_d8.ArrayNum;
            _Src = (void *)puVar4[2];
            if (local_d8.ArrayNum == 0) {
              local_d8.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
                         &local_d8.ArrayMax);
              memcpy(local_d8.AllocatorInstance.Data,_Src,lVar19 << 3);
            }
            this_00 = *(FClothingSimulationConfig **)(*(longlong *)pFVar1 + 8);
            pTVar15 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>
                       *)(**(code **)((longlong)*this->ClothComponentAdapter + 0x58))
                                   (this->ClothComponentAdapter,local_c0,iVar22);
            ::Chaos::FClothingSimulationConfig::Initialize(this_00,pTVar15);
            pFVar16 = ::operator_new(0x160);
            if (pFVar16 == (FClothingSimulationCloth *)0x0) {
              pFVar16 = (FClothingSimulationCloth *)0x0;
            }
            else {
              pFVar16 = ::Chaos::FClothingSimulationCloth::FClothingSimulationCloth
                                  (pFVar16,this_00,pFVar5,&local_d8,uVar13);
            }
            if (pFVar1 == local_98) {
              if (pFVar16 != (FClothingSimulationCloth *)0x0) {
                ::Chaos::FClothingSimulationCloth::~FClothingSimulationCloth(pFVar16);
                goto LAB_14dc515ac;
              }
            }
            else {
              this_01 = *(FClothingSimulationCloth **)pFVar1;
              *(FClothingSimulationCloth **)pFVar1 = pFVar16;
              if (this_01 != (FClothingSimulationCloth *)0x0) {
                ::Chaos::FClothingSimulationCloth::~FClothingSimulationCloth(this_01);
                pFVar16 = this_01;
LAB_14dc515ac:
                ::operator_delete(pFVar16,0x160);
              }
            }
            ::Chaos::FClothingSimulationSolver::AddCloth
                      ((this->Solver).Ptr,*(FClothingSimulationCloth **)pFVar1);
            aVar20 = (atomic<int>)((int)local_res10 + 1);
            aVar25 = (atomic<int>)((int)aVar25 + (int)*(undefined8 *)(*(longlong *)pFVar1 + 0x150));
            aVar26 = (atomic<int>)
                     ((int)aVar26 +
                     (int)((ulonglong)*(undefined8 *)(*(longlong *)pFVar1 + 0x150) >> 0x20));
            lVar19 = local_c8;
            local_res10 = aVar20;
            if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.AllocatorInstance.Data);
              lVar19 = local_c8;
            }
          }
          iVar22 = iVar22 + 1;
          plVar21 = local_c0;
          plVar23 = local_b8;
        } while (iVar22 < local_res18);
      }
    }
    uVar17 = (ulonglong)local_res20;
    plVar21 = local_b0 + 1;
  } while( true );
}

// InitializeConfigs @ 14dc523f0

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::InitializeConfigs(FClothSimulationProxy *this)

{
  FClothingSimulationConfig *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  longlong *local_res20;
  longlong *local_58;
  uint local_50;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1033,"FClothSimulationProxy_InitializeConfigs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0x409);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1033);
  }
  iVar5 = (this->Configs).ArrayNum;
  if (iVar5 != 0) {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = 1;
    pFVar1 = *(FClothingSimulationConfig **)(this->Configs).AllocatorInstance.Data;
    pTVar7 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*this->ClothComponentAdapter + 0x60))();
    ::Chaos::FClothingSimulationConfig::Initialize(pFVar1,pTVar7);
    (**(code **)((longlong)*this->ClothComponentAdapter + 0x10))
              (this->ClothComponentAdapter,&local_58);
    uVar8 = (ulonglong)(int)local_50;
    lVar12 = 1;
    local_res18 = local_50;
    plVar10 = local_58 + uVar8;
    plVar13 = local_58;
    local_res20 = plVar10;
    while( true ) {
      if (local_50 != (uint)uVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UChaosClothAssetBase_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (plVar13 == plVar10) break;
      plVar2 = (longlong *)*plVar13;
      if (plVar2 != (longlong *)0x0) {
        iVar9 = 0;
        iVar5 = (**(code **)(*plVar2 + 0x4c8))(plVar2);
        if (0 < iVar5) {
          do {
            iVar5 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x18))
                              (this->ClothComponentAdapter,plVar2,iVar9);
            if (iVar5 != -1) {
              if (((int)uVar11 < 0) || ((this->Configs).ArrayNum <= (int)uVar11)) {
                bVar4 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_2610671844826545127>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                   ,0x419,"Configs.IsValidIndex(ConfigIndex)");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                uVar6 = 0;
                if ((int)uVar11 < (this->Configs).ArrayNum) {
                  uVar6 = ~uVar11 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar11 = uVar11 + 1;
                pFVar1 = *(FClothingSimulationConfig **)
                          ((this->Configs).AllocatorInstance.Data + lVar12 * 8);
                pTVar7 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>
                          *)(**(code **)((longlong)*this->ClothComponentAdapter + 0x58))
                                      (this->ClothComponentAdapter,plVar2,iVar9);
                ::Chaos::FClothingSimulationConfig::Initialize(pFVar1,pTVar7);
                lVar12 = lVar12 + 1;
              }
            }
            iVar9 = iVar9 + 1;
            iVar5 = (**(code **)(*plVar2 + 0x4c8))(plVar2);
          } while (iVar9 < iVar5);
          uVar8 = (ulonglong)local_res18;
          plVar10 = local_res20;
        }
      }
      plVar13 = plVar13 + 1;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  ((this->Solver).Ptr)->SolverLOD = ((this->ClothSimulationContext).Ptr)->LodIndex;
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostConstructor @ 14dc535b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::PostConstructor(FClothSimulationProxy *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  longlong lVar5;
  bool bVar6;
  Type TVar7;
  TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *pTVar8;
  TRefCountPtr<FBaseGraphTask> *pTVar9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  longlong local_18 [2];
  
  bVar6 = bEnableAsyncClothInitialization;
  BeginInitialization_GameThread(this);
  if (!bVar6) {
    ExecuteInitialization(this);
    CompleteInitialization_GameThread(this);
    return;
  }
  pTVar8 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  if (pTVar8 == (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
    pTVar8 = (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0;
  }
  else {
    pTVar8 = TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>::
             TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>
                       (pTVar8,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                *)0x0);
  }
  *(FClothSimulationProxy **)(pTVar8->TaskStorage).Pad = this;
  (pTVar8->TaskStorage).Pad[8] = '\x01';
  TVar7 = FClothSimulationProxyParallelTask::GetDesiredThread();
  Tasks::Private::TranslatePriority(TVar7,local_res18,local_res10);
  Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar8,L"GraphTask",local_res18[0],local_res10[0],None);
  if (pTVar8 != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar8,0xe8);
  pTVar9 = &this->ParallelInitializationTask;
  if (pTVar9 == (TRefCountPtr<FBaseGraphTask> *)local_18) {
    if (pTVar8 != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
      LOCK();
      plVar2 = &pTVar8->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014dc536c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pTVar8->_padding_)(pTVar8,1);
        return;
      }
    }
  }
  else {
    pFVar4 = pTVar9->Reference;
    pTVar9->Reference = (FBaseGraphTask *)pTVar8;
    if (pFVar4 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar4->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      }
    }
  }
  return;
}

// PostConstructorInternal @ 14dc536f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::PostConstructorInternal
          (FClothSimulationProxy *this,bool param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  longlong lVar5;
  Type TVar6;
  TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *pTVar7;
  TRefCountPtr<FBaseGraphTask> *pTVar8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  longlong local_18 [2];
  
  BeginInitialization_GameThread(this);
  if (!param_1) {
    ExecuteInitialization(this);
    CompleteInitialization_GameThread(this);
    return;
  }
  pTVar7 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  if (pTVar7 == (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
    pTVar7 = (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0;
  }
  else {
    pTVar7 = TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>::
             TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>
                       (pTVar7,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                *)0x0);
  }
  *(FClothSimulationProxy **)(pTVar7->TaskStorage).Pad = this;
  (pTVar7->TaskStorage).Pad[8] = '\x01';
  TVar6 = FClothSimulationProxyParallelTask::GetDesiredThread();
  Tasks::Private::TranslatePriority(TVar6,local_res18,local_res10);
  Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar7,L"GraphTask",local_res18[0],local_res10[0],None);
  if (pTVar7 != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
    LOCK();
    *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar7,0xe8);
  pTVar8 = &this->ParallelInitializationTask;
  if (pTVar8 == (TRefCountPtr<FBaseGraphTask> *)local_18) {
    if (pTVar7 != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
      LOCK();
      plVar2 = &pTVar7->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014dc53804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pTVar7->_padding_)(pTVar7,1);
        return;
      }
    }
  }
  else {
    pFVar4 = pTVar8->Reference;
    pTVar8->Reference = (FBaseGraphTask *)pTVar7;
    if (pFVar4 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar4->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      }
    }
  }
  return;
}

// PostProcess_GameThread @ 14dc538b0

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::PostProcess_GameThread(FClothSimulationProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  if (this->bIsPreProcessed) {
    if (this->bIsSimulating) {
      return;
    }
    cVar4 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x30))();
    if (cVar4 != '\0') {
      if ((this->ParallelInitializationTask).Reference != (FBaseGraphTask *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsValidRef(ParallelInitializationTask)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                           ,0x2e9,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (!this->bIsPreProcessed) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsPreProcessed",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                           ,0x2ea,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar9 = (this->Cloths).AllocatorInstance.Data;
      bVar5 = false;
      iVar2 = (this->Cloths).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Cloths).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar1) break;
        if ((longlong *)**(longlong **)pFVar9 != (longlong *)0x0) {
          iVar7 = (**(code **)(*(longlong *)**(longlong **)pFVar9 + 0x10))();
          pTVar8 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                           *)(*(longlong *)pFVar9 + 0x100),(this->Solver).Ptr);
          if (pTVar8 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (iVar7 != *(int *)&pTVar8->field_0x8) {
            cVar4 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x30))();
            if (cVar4 == '\0') {
              *(undefined1 *)(*(longlong *)pFVar9 + 0x44) = 1;
            }
            bVar5 = true;
          }
        }
        pFVar9 = pFVar9 + 8;
      }
      if (bVar5) {
        ::Chaos::FClothingSimulationSolver::Update((this->Solver).Ptr,0.0);
      }
      WriteSimulationData(this);
      return;
    }
  }
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
           *)&this->CurrentSimulationData);
  return;
}

// PostSimulate_GameThread @ 14dc53a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::PostSimulate_GameThread(FClothSimulationProxy *this)

{
  ForElementType<int> FVar1;
  undefined8 uVar2;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  longlong *plVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  TStatId TVar27;
  FName *pFVar28;
  USkinnedMeshComponent *pUVar29;
  UObject *pUVar30;
  USkinnedAsset *pUVar31;
  TTransform<double> *pTVar32;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar33;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar34;
  uint uVar35;
  ForElementType<int> FVar36;
  ulonglong uVar37;
  undefined1 *puVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  FScriptContainerElement *pFVar41;
  longlong lVar42;
  FClothSimulData *pFVar43;
  ulonglong uVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
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
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  double dVar85;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined4 uVar107;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  double dVar119;
  uint uVar124;
  uint uVar126;
  undefined1 auVar120 [16];
  double dVar125;
  undefined4 uVar127;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  double dVar137;
  double dVar144;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  uint uVar145;
  uint uVar148;
  uint uVar149;
  uint uVar150;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auStackY_5a8 [32];
  char cStack_548;
  undefined1 uStack_540;
  undefined1 uStack_53f;
  undefined1 auStack_53e [2];
  uint uStack_53c;
  USkinnedMeshComponent *pUStack_538;
  uint uStack_530;
  uint uStack_52c;
  FCycleCounter FStack_528;
  FCycleCounter FStack_518;
  double dStack_508;
  int aiStack_500 [2];
  uint auStack_4f8 [2];
  uint uStack_4f0;
  uint uStack_4ec;
  longlong *plStack_4e8;
  double dStack_4e0;
  FClothSimulationProxy *pFStack_4d8;
  ForElementType<int> FStack_4d0;
  FClothingSimulationSolver *pFStack_4c8;
  FScriptContainerElement *pFStack_4c0;
  FName FStack_4b8;
  FName FStack_4b0;
  FName FStack_4a8;
  FName FStack_4a0;
  FName FStack_498;
  ForElementType<int> FStack_490;
  FString FStack_488;
  UObject *pUStack_478;
  FString FStack_470;
  FString FStack_460;
  FString FStack_450;
  FString FStack_440;
  FSourceLocation FStack_428;
  FSourceLocation FStack_408;
  undefined1 auStack_3e8 [12];
  uint uStack_3dc;
  longlong lStack_3d8;
  uint uStack_3d0;
  int iStack_3cc;
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  *pTStack_3c0;
  bool bStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  uint uStack_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_37c;
  FName aFStack_370 [2];
  double dStack_360;
  double dStack_358;
  double dStack_350;
  undefined1 auStack_348 [16];
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  undefined1 auStack_300 [16];
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined1 auStack_2a0 [16];
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  TArrayView<Chaos::TVector<float,3>_const_,int> TStack_270;
  TArrayView<Chaos::TVector<float,3>_const_,int> TStack_260;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  undefined1 auStack_228 [16];
  double dStack_218;
  double dStack_210;
  undefined1 auStack_208 [16];
  double dStack_1f8;
  double dStack_1f0;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> TStack_1e8;
  TTransform<double> TStack_198;
  TTransform<double> TStack_138;
  ulonglong uStack_d8;
  
  if (!this->bIsSimulating) {
    return;
  }
  uStack_d8 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  bVar15 = false;
  bVar14 = false;
  bVar11 = false;
  bVar10 = false;
  pFStack_4d8 = this;
  if (((this->ParallelInitializationTask).Reference != (FBaseGraphTask *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsValidRef(ParallelInitializationTask)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                          ,0x30b,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((!this->bIsPreProcessed) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsPreProcessed",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                          ,0x30c,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (__CsvProfilerStat782 == false) {
    FCsvProfilerTrace::OutputInlineStat("Cloth",_GCsvCategory_Animation.Index);
    __CsvProfilerStat782 = true;
  }
  uVar24 = _GCsvCategory_Animation.Index;
  uStack_52c = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("Cloth",_GCsvCategory_Animation.Index,"CSV_Cloth");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId783,"FClothSimulationProxy_WriteSimulationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0x30f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId783);
  }
  TVar27 = FThreadSafeStaticStatInner<FStat_STAT_ClothSimulationProxy_WriteSimulationData,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ClothSimulationProxy_WriteSimulationData,1>
                      *)&StatPtr_STAT_ClothSimulationProxy_WriteSimulationData);
  FStack_428.Impl._Line = 0x310;
  FStack_428.Impl._Column = 3;
  FStack_428.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
  ;
  FStack_518.StatId.ComparisonIndex.Value = 0;
  FStack_518.StatId.Number = 0;
  FStack_518.EmittedEvent = 0;
  FStack_428.Impl._Function =
       "void __cdecl UE::Chaos::ClothAsset::FClothSimulationProxy::WriteSimulationData(void)";
  FCycleCounter::Start
            (&FStack_518,*(TStatIdData **)&(TVar27.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &FStack_428);
  TVar27.StatIdPtr = (TStatIdData *)StatPtr_STAT_ClothWriteback;
  if (StatPtr_STAT_ClothWriteback == (FThreadSafeStaticStat<FStat_STAT_ClothWriteback>)0x0) {
    pFVar28 = ::FName::FName(aFStack_370,"STAT_ClothWriteback");
    TVar27.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothWriteback,*pFVar28,
                    L"Cloth Writeback","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  FStack_528.StatId.ComparisonIndex.Value = 0;
  FStack_528.StatId.Number = 0;
  FStack_528.EmittedEvent = 0;
  FStack_408.Impl._Line = 0x311;
  FStack_408.Impl._Column = 3;
  FStack_408.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
  ;
  FStack_408.Impl._Function =
       "void __cdecl UE::Chaos::ClothAsset::FClothSimulationProxy::WriteSimulationData(void)";
  FCycleCounter::Start(&FStack_528,TVar27,CycleStat|ClearEveryFrame,false,&FStack_408);
  pUVar29 = (USkinnedMeshComponent *)(**(code **)*this->ClothComponentAdapter)();
  pUStack_538 = pUVar29;
  pUVar30 = FWeakObjectPtr::Get(&(pUVar29->LeaderPoseComponent).WeakPtr);
  pUStack_478 = pUVar30;
  if ((pUVar30 == (UObject *)0x0) || ((pUVar29->LeaderBoneMap).ArrayNum != 0)) {
    uVar24 = (this->Cloths).ArrayNum;
    TStack_1e8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    TStack_1e8.ArrayNum = 0;
    TStack_1e8.ArrayMax = 0x10;
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    if (0x10 < (int)uVar24) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,uVar24,&TStack_1e8.AllocatorInstance,0,&TStack_1e8.ArrayMax);
    }
    pFVar41 = (this->Cloths).AllocatorInstance.Data;
    iVar25 = (this->Cloths).ArrayNum;
    pFVar40 = pFVar41 + (longlong)iVar25 * 8;
    while( true ) {
      if ((this->Cloths).ArrayNum != iVar25) {
        uStack_540 = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&uStack_540);
      }
      if (pFVar41 == pFVar40) break;
      this_00 = *(FClothingSimulationCloth **)pFVar41;
      if (((this_00 != (FClothingSimulationCloth *)0x0) &&
          (this_00->Mesh != (FClothingSimulationMesh *)0x0)) &&
         ((iVar23 = ::Chaos::FClothingSimulationCloth::GetParticleRangeId
                              (this_00,(this->Solver).Ptr), iVar23 != -1 &&
          (uVar24 = ::Chaos::FClothingSimulationCloth::GetLODIndex
                              (*(FClothingSimulationCloth **)pFVar41,(this->Solver).Ptr),
          uVar24 != 0xffffffff)))) {
        aiStack_500[0] = *(int *)(*(longlong *)pFVar41 + 0x20);
        TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<int>
                  (&TStack_1e8,aiStack_500);
      }
      pFVar41 = pFVar41 + 8;
    }
    if (TStack_1e8.ArrayNum == 0) {
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
               *)&this->CurrentSimulationData);
    }
    else {
      TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
      ::TIterator::TIterator
                ((TIterator *)auStack_3e8,
                 (TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                  *)&this->CurrentSimulationData,false);
      if (iStack_3cc < *(int *)(lStack_3d8 + 0x18)) {
        do {
          FVar36 = (ForElementType<int>)&TStack_1e8;
          if (TStack_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar36 = TStack_1e8.AllocatorInstance.SecondaryData;
          }
          FVar1 = (ForElementType<int>)((longlong)FVar36 + (longlong)TStack_1e8.ArrayNum * 4);
          if (FVar36 != FVar1) {
            do {
              if (*(uint *)FVar36 ==
                  *(uint *)((longlong)iStack_3cc * 0x110 + *(longlong *)auStack_3e8._0_8_))
              goto LAB_14dc5f1d0;
              FVar36 = (ForElementType<int>)((longlong)FVar36 + 4);
            } while (FVar36 != FVar1);
          }
          TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_3c0,iStack_3cc);
          bStack_3b0 = true;
LAB_14dc5f1d0:
          uStack_3d0 = uStack_3d0 & ~uStack_3dc;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(auStack_3e8 + 8));
        } while (iStack_3cc < *(int *)(lStack_3d8 + 0x18));
      }
      TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
      ::TIterator::~TIterator((TIterator *)auStack_3e8);
      pFStack_4c8 = (this->Solver).Ptr;
      dVar128 = pFStack_4c8->LocalSpaceScale;
      if (pUVar30 == (UObject *)0x0) {
        plStack_4e8 = &pUVar29->_padding_ + (longlong)pUVar29->CurrentReadComponentTransforms * 2;
      }
      else {
        plStack_4e8 = (longlong *)
                      (&pUVar30->field_0x0 + (longlong)*(int *)&pUVar30[0x28].field_0x20 * 0x10);
      }
      uVar37 = (ulonglong)TStack_1e8.ArrayNum;
      dStack_4e0 = __real_3ff0000000000000;
      uStack_4ec = TStack_1e8.ArrayNum;
      FStack_490 = (ForElementType<int>)&TStack_1e8;
      if (TStack_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FStack_490 = TStack_1e8.AllocatorInstance.SecondaryData;
      }
      uStack_398 = (uint)__xmm_80000000000000008000000000000000;
      uStack_394 = __xmm_80000000000000008000000000000000._4_4_;
      uStack_390 = _UNK_15066df78;
      uStack_38c = _UNK_15066df7c;
      FVar36 = (ForElementType<int>)&TStack_1e8;
      if (TStack_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar36 = TStack_1e8.AllocatorInstance.SecondaryData;
      }
      dStack_3a8 = ___xmm_3ff00000000000003ff0000000000000;
      dStack_3a0 = _UNK_150689688;
      FStack_490 = (ForElementType<int>)((longlong)FStack_490 + uVar37 * 4);
      uVar44 = uVar37;
      dVar74 = __real_3ff0000000000000;
      uVar24 = (uint)__xmm_80000000000000008000000000000000;
      uVar45 = __xmm_80000000000000008000000000000000._4_4_;
      uVar124 = _UNK_15066df78;
      uVar126 = _UNK_15066df7c;
      uVar145 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar148 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar149 = _UNK_15061cc88;
      uVar150 = _UNK_15061cc8c;
      dVar85 = ___xmm_3ff00000000000003ff0000000000000;
      dVar119 = _UNK_150689688;
      dStack_508 = dVar128;
      bVar22 = bVar10;
      bVar12 = bVar11;
      bVar13 = bVar14;
      bVar16 = bVar15;
      while( true ) {
        FVar1 = FStack_490;
        FStack_4d0 = FVar36;
        if ((int)uVar37 != (int)uVar44) {
          uStack_53f = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&uStack_53f);
        }
        if (FVar36 == FVar1) break;
        bVar20 = false;
        uStack_53c = *(uint *)FVar36;
        uVar39 = 0xffffffff;
        dStack_248 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dStack_240 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        bVar19 = false;
        uStack_530 = 0xffffffff;
        dStack_238 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dStack_230 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        dStack_218 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_210 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        auStack_228._8_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        auStack_228._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        auStack_208._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        auStack_208._8_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        dStack_1f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        auStack_4f8[0] = uStack_53c;
        iVar25 = TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<int>
                           ((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                             *)&this->CurrentSimulationData,uStack_53c,(int *)auStack_4f8);
        if (iVar25 == -1) {
          pFVar43 = (FClothSimulData *)0x0;
        }
        else {
          lVar42 = (longlong)iVar25 * 0x110 + *(longlong *)&this->CurrentSimulationData;
          pFVar43 = (FClothSimulData *)(lVar42 + 0x10);
          if (lVar42 == 0) {
            pFVar43 = (FClothSimulData *)0x0;
          }
          if (pFVar43 != (FClothSimulData *)0x0) {
            (pFVar43->Positions).ArrayNum = 0;
            if ((pFVar43->Positions).ArrayMax < 0) {
              Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)pFVar43,0,&(pFVar43->Positions).ArrayMax);
            }
            (pFVar43->Normals).ArrayNum = 0;
            if ((pFVar43->Normals).ArrayMax < 0) {
              Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (0xc,4,0,&(pFVar43->Normals).AllocatorInstance,0,
                         &(pFVar43->Normals).ArrayMax);
            }
            pFVar43->LODIndex = -1;
          }
        }
        uStack_4f0 = (this->Cloths).ArrayNum;
        uVar37 = (ulonglong)(int)uStack_4f0;
        pFVar41 = (this->Cloths).AllocatorInstance.Data;
        pFVar40 = pFVar41 + uVar37 * 8;
        pFStack_4c0 = pFVar40;
LAB_14dc5f411:
        if ((this->Cloths).ArrayNum != (int)uVar37) {
          auStack_53e[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(auStack_53e);
        }
        if (pFVar41 == pFVar40) goto LAB_14dc5fb04;
        if ((*(FClothingSimulationCloth **)pFVar41)->GroupId != uStack_53c) goto LAB_14dc5f973;
        uVar26 = ::Chaos::FClothingSimulationCloth::GetReferenceBoneIndex
                           (*(FClothingSimulationCloth **)pFVar41);
        if (pUStack_478 != (UObject *)0x0) {
          uVar35 = 0;
          if ((int)uVar26 < (pUStack_538->LeaderBoneMap).ArrayNum) {
            uVar35 = ~uVar26 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar26 = *(uint *)((pUStack_538->LeaderBoneMap).AllocatorInstance.Data +
                            (longlong)(int)uVar26 * 4);
        }
        plVar17 = plStack_4e8;
        if (bVar20) {
          if (uVar26 != uVar39) {
            if ((2 < (byte)LogChaosClothAsset._0_1_) && (this->bHasNonMatchingReferenceBones)) {
              pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(pUStack_538);
              if (pUVar31 == (USkinnedAsset *)0x0) {
                bVar22 = true;
                FStack_4b0 = (FName)pUStack_538->_padding_;
                ::FName::ToString(&FStack_4b0,&FStack_470);
                bVar11 = bVar12;
              }
              else {
                pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(pUStack_538);
                bVar11 = true;
                FStack_4b8.ComparisonIndex.Value = *(uint *)&pUVar31->field_0x18;
                FStack_4b8.Number = *(uint *)&pUVar31->field_0x1c;
                ::FName::ToString(&FStack_4b8,&FStack_460);
              }
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
              if ((bVar22) &&
                 (bVar22 = false,
                 FStack_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(FStack_470.Data.AllocatorInstance.Data);
              }
              bVar10 = bVar22;
              bVar12 = bVar11;
              bVar14 = bVar13;
              bVar15 = bVar16;
              if ((bVar11) &&
                 (bVar11 = false, bVar12 = bVar11,
                 FStack_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(FStack_460.Data.AllocatorInstance.Data);
              }
            }
            this->bHasNonMatchingReferenceBones = true;
            cVar21 = '\x01';
            bVar20 = false;
            goto LAB_14dc607ce;
          }
LAB_14dc5f811:
          pTVar34 = ::Chaos::FClothingSimulationCloth::GetParticlePositions
                              (*(FClothingSimulationCloth **)pFVar41,&TStack_270,(this->Solver).Ptr)
          ;
          iVar25 = pTVar34->ArrayNum;
          if (iVar25 < 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar20) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
LAB_14dc5f861:
            iVar23 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                               (0xc,4,iVar25,(ForAnyElementType *)pFVar43,
                                &(pFVar43->Positions).ArrayNum,&(pFVar43->Positions).ArrayMax);
            ConstructItems<UE::Math::TVector<float>,Chaos::TVector<float,3>,int>
                      ((pFVar43->Positions).AllocatorInstance.Data + (longlong)iVar23 * 0xc,
                       pTVar34->DataPtr,iVar25);
          }
          else if (iVar25 != 0) goto LAB_14dc5f861;
          pTVar34 = ::Chaos::FClothingSimulationCloth::GetParticleNormals
                              (*(FClothingSimulationCloth **)pFVar41,&TStack_260,(this->Solver).Ptr)
          ;
          iVar25 = pTVar34->ArrayNum;
          if (iVar25 < 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar20) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
LAB_14dc5f8f1:
            iVar23 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                               (0xc,4,iVar25,&(pFVar43->Normals).AllocatorInstance,
                                &(pFVar43->Normals).ArrayNum,&(pFVar43->Normals).ArrayMax);
            ConstructItems<UE::Math::TVector<float>,Chaos::TVector<float,3>,int>
                      ((pFVar43->Normals).AllocatorInstance.Data + (longlong)iVar23 * 0xc,
                       pTVar34->DataPtr,iVar25);
          }
          else if (iVar25 != 0) goto LAB_14dc5f8f1;
          if (((pFVar43->Positions).ArrayNum != (pFVar43->Normals).ArrayNum) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Data->Positions.Num() == Data->Normals.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                  ,0x392,L""), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar20 = true;
          bVar19 = true;
          pFVar40 = pFStack_4c0;
          uVar39 = uStack_530;
LAB_14dc5f973:
          uVar37 = (ulonglong)uStack_4f0;
          pFVar41 = pFVar41 + 8;
          goto LAB_14dc5f411;
        }
        uStack_530 = uVar26;
        if ((-1 < (int)uVar26) && ((int)uVar26 < *(int *)(plStack_4e8 + 0xc4))) {
          if (((int)uVar26 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar40 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                     (plVar17 + 0xc3))->AllocatorInstance).Data;
          lVar42 = (longlong)(int)uVar26 * 0x60;
          TStack_198.Rotation.XY.m128d_f64[0] = *(double *)(pFVar40 + lVar42);
          TStack_198.Rotation.XY.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 8);
          TStack_198.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x10);
          TStack_198.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x10 + 8);
          TStack_198.Translation.XY.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x20);
          TStack_198.Translation.XY.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x20 + 8);
          TStack_198.Translation.ZW.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x30);
          TStack_198.Translation.ZW.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x30 + 8);
          TStack_198.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x40);
          TStack_198.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x40 + 8);
          TStack_198.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x50);
          TStack_198.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x50 + 8);
          UE::Math::TTransform<double>::Multiply
                    (&TStack_198,&TStack_198,
                     &((this->ClothSimulationContext).Ptr)->ComponentTransform);
          TStack_198.Scale3D.ZW.m128d_f64[1] = 0.0;
          dStack_360 = dVar85;
          dStack_358 = dVar119;
          dStack_350 = dVar74;
          TStack_198.Scale3D.XY.m128d_f64[0] = dVar85;
          TStack_198.Scale3D.XY.m128d_f64[1] = dVar119;
          TStack_198.Scale3D.ZW.m128d_f64[0] = dVar74;
          if (pFVar43 == (FClothSimulData *)0x0) {
            pFVar43 = TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                      ::Emplace<int_const_&>
                                ((TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                                  *)&this->CurrentSimulationData,(int *)&uStack_53c);
          }
          (pFVar43->Transform).Rotation.XY.m128d_f64[0] = TStack_198.Rotation.XY.m128d_f64[0];
          (pFVar43->Transform).Rotation.XY.m128d_f64[1] = TStack_198.Rotation.XY.m128d_f64[1];
          (pFVar43->Transform).Rotation.ZW.m128d_f64[0] = TStack_198.Rotation.ZW.m128d_f64[0];
          (pFVar43->Transform).Rotation.ZW.m128d_f64[1] = TStack_198.Rotation.ZW.m128d_f64[1];
          (pFVar43->Transform).Translation.XY.m128d_f64[0] = TStack_198.Translation.XY.m128d_f64[0];
          (pFVar43->Transform).Translation.XY.m128d_f64[1] = TStack_198.Translation.XY.m128d_f64[1];
          (pFVar43->Transform).Translation.ZW.m128d_f64[0] = TStack_198.Translation.ZW.m128d_f64[0];
          (pFVar43->Transform).Translation.ZW.m128d_f64[1] = TStack_198.Translation.ZW.m128d_f64[1];
          (pFVar43->Transform).Scale3D.XY.m128d_f64[0] = TStack_198.Scale3D.XY.m128d_f64[0];
          (pFVar43->Transform).Scale3D.XY.m128d_f64[1] = TStack_198.Scale3D.XY.m128d_f64[1];
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[0] = TStack_198.Scale3D.ZW.m128d_f64[0];
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[1] = TStack_198.Scale3D.ZW.m128d_f64[1];
          pTVar32 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&TStack_198,&TStack_138,
                               &((this->ClothSimulationContext).Ptr)->ComponentTransform);
          dVar125 = (pTVar32->Rotation).XY.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
               (pTVar32->Rotation).XY.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Rotation).ZW.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
               (pTVar32->Rotation).ZW.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Translation).XY.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
               (pTVar32->Translation).XY.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Translation).ZW.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
               (pTVar32->Translation).ZW.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Scale3D).XY.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
               (pTVar32->Scale3D).XY.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Scale3D).ZW.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] =
               (pTVar32->Scale3D).ZW.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar125;
          iVar25 = (**(code **)(*(longlong *)**(undefined8 **)pFVar41 + 0x10))();
          pTVar33 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                            *)(*(longlong *)pFVar41 + 0x100),(this->Solver).Ptr);
          if ((pTVar33 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((iVar25 != *(int *)&pTVar33->field_0x8) &&
             (bVar20 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2610671844826545276>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                  ,900,"LODIndex == Cloth->GetLODIndex(Solver.Get())"), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar25 = (**(code **)(*(longlong *)**(undefined8 **)pFVar41 + 0x20))
                             ((longlong *)**(undefined8 **)pFVar41,iVar25);
          pFVar43->LODIndex = iVar25;
          lVar42 = *(longlong *)pFVar41;
          dStack_248 = *(double *)(lVar42 + 0x60);
          dStack_240 = *(double *)(lVar42 + 0x68);
          dStack_238 = *(double *)(lVar42 + 0x70);
          dStack_230 = *(double *)(lVar42 + 0x78);
          auStack_208 = *(undefined1 (*) [16])(lVar42 + 0xa0);
          dStack_1f8 = *(double *)(lVar42 + 0xb0);
          dStack_1f0 = *(double *)(lVar42 + 0xb8);
          uVar2 = *(undefined8 *)&(pFStack_4c8->LocalSpaceLocation).field_0x10;
          auStack_348._0_8_ =
               (double)CONCAT44(*(uint *)&(pFStack_4c8->LocalSpaceLocation).field_0x4 ^ uVar45,
                                *(uint *)&pFStack_4c8->LocalSpaceLocation ^ uVar24);
          auStack_348._8_4_ = *(uint *)&(pFStack_4c8->LocalSpaceLocation).field_0x8 ^ uVar124;
          auStack_348._12_4_ = *(uint *)&(pFStack_4c8->LocalSpaceLocation).field_0xc ^ uVar126;
          dStack_338 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar45,
                                        (uint)uVar2 ^ uVar24);
          dVar125 = *(double *)(lVar42 + 0x88) + auStack_348._8_8_;
          auStack_228._8_4_ = SUB84(dVar125,0);
          auStack_228._0_8_ = *(double *)(lVar42 + 0x80) + auStack_348._0_8_;
          auStack_228._12_4_ = (int)((ulonglong)dVar125 >> 0x20);
          dStack_218 = *(double *)(lVar42 + 0x90) + dStack_338;
          dStack_210 = *(double *)(lVar42 + 0x98) + 0.0;
          goto LAB_14dc5f811;
        }
        if ((2 < (byte)LogChaosClothAsset._0_1_) && (!this->bHasInvalidReferenceBoneTransforms)) {
          pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(pUStack_538);
          if (pUVar31 == (USkinnedAsset *)0x0) {
            bVar13 = true;
            FStack_4a0 = (FName)pUStack_538->_padding_;
            ::FName::ToString(&FStack_4a0,&FStack_488);
            bVar15 = bVar16;
          }
          else {
            pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(pUStack_538);
            bVar15 = true;
            FStack_4a8.ComparisonIndex.Value = *(uint *)&pUVar31->field_0x18;
            FStack_4a8.Number = *(uint *)&pUVar31->field_0x1c;
            ::FName::ToString(&FStack_4a8,&FStack_450);
          }
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
          if ((bVar13) &&
             (bVar13 = false,
             FStack_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(FStack_488.Data.AllocatorInstance.Data);
          }
          bVar10 = bVar22;
          bVar11 = bVar12;
          bVar14 = bVar13;
          bVar16 = bVar15;
          if ((bVar15) &&
             (bVar15 = false, bVar16 = bVar15,
             FStack_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(FStack_450.Data.AllocatorInstance.Data);
          }
        }
        this->bHasInvalidReferenceBoneTransforms = true;
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                 *)&this->CurrentSimulationData);
        bVar20 = false;
        bVar19 = false;
LAB_14dc5fb04:
        cVar21 = '\x01';
        cStack_548 = '\x01';
        if ((bVar20) && (pFVar43 != (FClothSimulData *)0x0)) {
          if (bTransformClothSimulData_ISPC_Enabled != false) {
            if (bSimulationDataCheckFinite == false) {
              TransformClothSimulData
                        ((pFVar43->Positions).AllocatorInstance.Data,
                         (pFVar43->Normals).AllocatorInstance.Data,&dStack_248);
            }
            else {
              cVar21 = TransformClothSimulDataAndCheckFinite();
            }
            goto LAB_14dc607ce;
          }
          iVar25 = (pFVar43->Positions).ArrayNum;
          uVar39 = 0;
          if (bSimulationDataCheckFinite != false) {
            if (0 < iVar25) {
              cVar21 = '\x01';
              uVar26 = 0;
              lVar42 = 0;
              do {
                uVar45 = ~uVar39 >> 0x1f;
                uVar24 = uVar26;
                if ((int)uVar39 < iVar25) {
                  uVar24 = uVar45;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
                dVar74 = dStack_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar85 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                auVar71._8_4_ = SUB84(dVar85,0);
                auVar71._0_8_ = dVar74;
                auVar71._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
                auVar86._0_8_ =
                     dStack_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                auVar86._8_8_ =
                     dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                dStack_328 = (double)*(float *)(pFVar40 + lVar42 + 4) * dVar128;
                dStack_330 = (double)*(float *)(pFVar40 + lVar42) * dVar128;
                auVar72 = blendpd(auVar71,auVar86,2);
                dStack_320 = (double)*(float *)(pFVar40 + lVar42 + 8) * dVar128;
                dVar137 = dStack_330 - (double)auStack_228._0_8_;
                dVar144 = dStack_328 - (double)auStack_228._8_8_;
                dVar128 = dStack_320 - dStack_218;
                auVar129._8_4_ = SUB84(dVar144,0);
                auVar129._0_8_ = dVar137;
                uVar107 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar129._12_4_ = uVar107;
                auVar61._8_4_ = SUB84(dVar144,0);
                auVar61._0_8_ = dVar137;
                auVar61._12_4_ = uVar107;
                auVar62._8_8_ = 0;
                auVar62._0_8_ = dVar128;
                auVar62 = blendpd(auVar61,auVar62,2);
                auVar111._8_4_ = SUB84(auVar86._0_8_,0);
                auVar111._0_8_ = dVar85;
                auVar111._12_4_ = (int)((ulonglong)auVar86._0_8_ >> 0x20);
                auVar130._0_8_ = auVar129._8_8_ * dVar74 - dVar85 * dVar137;
                auVar130._8_8_ = dVar128 * dVar85 - auVar111._8_8_ * dVar144;
                auVar120._8_4_ = SUB84(auVar130._8_8_,0);
                auVar120._0_8_ = auVar130._0_8_;
                auVar120._12_4_ = (int)((ulonglong)auVar130._8_8_ >> 0x20);
                auVar63._0_8_ = auVar62._0_8_ * auVar86._0_8_ - auVar72._0_8_ * dVar128;
                auVar63._8_8_ = auVar62._8_8_ * auVar86._8_8_ - auVar72._8_8_ * 0.0;
                dVar119 = auVar120._8_8_ + auVar120._8_8_;
                dVar125 = auVar63._0_8_ + auVar63._0_8_;
                auVar62 = blendpd(auVar130,auVar63,2);
                uVar107 = SUB84(dVar125,0);
                auVar109._8_4_ = uVar107;
                auVar109._0_8_ = dVar119;
                uVar127 = (undefined4)((ulonglong)dVar125 >> 0x20);
                auVar109._12_4_ = uVar127;
                auVar49._8_4_ = uVar107;
                auVar49._0_8_ = dVar119;
                auVar49._12_4_ = uVar127;
                auVar99._8_4_ = uVar107;
                auVar99._0_8_ = dVar119;
                auVar99._12_4_ = uVar127;
                auVar131._0_8_ = auVar62._0_8_ + auVar62._0_8_;
                auVar131._8_8_ = auVar62._8_8_ + auVar62._8_8_;
                auVar110._0_8_ = auVar109._8_8_ * dVar74 - dVar119 * dVar85;
                auVar110._8_8_ = auVar131._0_8_ * dVar85 - auVar49._8_8_ * auVar86._0_8_;
                auVar75._0_8_ =
                     (double)CONCAT44(auStack_208._4_4_ & uVar148,auStack_208._0_4_ & uVar145);
                auVar75._8_4_ = auStack_208._8_4_ & uVar149;
                auVar75._12_4_ = auStack_208._12_4_ & uVar150;
                auVar50._8_4_ = SUB84(auVar131._8_8_,0);
                auVar50._0_8_ = auVar131._0_8_;
                auVar50._12_4_ = (int)((ulonglong)auVar131._8_8_ >> 0x20);
                auVar62 = blendpd(auVar99,auVar131,2);
                auVar6._4_8_ = auVar86._8_8_;
                auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                auVar87._0_8_ = auVar6._0_8_ << 0x20;
                auVar87._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                auVar87._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                auVar100._0_8_ = auVar62._0_8_ * auVar86._0_8_ - auVar131._0_8_ * auVar72._0_8_;
                auVar100._8_8_ = auVar62._8_8_ * auVar86._8_8_ - auVar50._8_8_ * auVar72._8_8_;
                auVar88._8_8_ = auVar87._8_8_;
                auVar88._0_8_ = dStack_1f8;
                lVar46 = -(ulonglong)
                          (auVar75._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                lVar48 = -(ulonglong)
                          (auVar75._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auStack_208);
                lVar47 = -(ulonglong)
                          ((double)CONCAT44((uint)((ulonglong)dStack_1f8 >> 0x20) & uVar148,
                                            SUB84(dStack_1f8,0) & uVar145) <=
                          (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                auVar76._0_8_ =
                     (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                      ~(uint)lVar46 & auVar62._0_4_);
                auVar76._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
                auVar76._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
                auVar72._8_4_ = SUB84(auVar110._8_8_,0);
                auVar72._0_8_ = auVar110._0_8_;
                auVar72._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
                dStack_318 = auVar76._0_8_ * (dVar119 * auVar86._8_8_ + dVar137 + auVar72._8_8_);
                dStack_310 = auVar76._8_8_ * (dVar125 * auVar86._8_8_ + dVar144 + auVar100._0_8_);
                auVar111 = blendpd(auVar110,auVar100,2);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar88);
                uVar24 = uVar26;
                if ((int)uVar39 < (pFVar43->Positions).ArrayNum) {
                  uVar24 = uVar45;
                }
                fVar98 = (float)dStack_318;
                dStack_308 = (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                              ~(uint)lVar47 & auVar62._0_4_) *
                             (auVar131._0_8_ * auVar86._8_8_ + dVar128 + auVar111._0_8_);
                fVar108 = (float)dStack_310;
                fVar118 = (float)dStack_308;
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
                *(float *)(pFVar40 + lVar42) = fVar98;
                *(float *)(pFVar40 + lVar42 + 4) = fVar108;
                *(float *)(pFVar40 + lVar42 + 8) = fVar118;
                uVar24 = uVar26;
                if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                  uVar24 = uVar45;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
                dVar119 = dStack_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar125 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                auVar121._0_8_ =
                     dStack_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                auVar121._8_8_ =
                     dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                dVar85 = (double)(float)(*(uint *)(pFVar40 + lVar42) ^
                                        __xmm_80000000800000008000000080000000);
                auVar89._8_4_ = SUB84(dVar125,0);
                auVar89._0_8_ = dVar119;
                uVar107 = (undefined4)((ulonglong)dVar125 >> 0x20);
                auVar89._12_4_ = uVar107;
                dVar128 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 4) ^
                                         __xmm_80000000800000008000000080000000);
                auVar77._8_4_ = SUB84(dVar125,0);
                auVar77._0_8_ = dVar119;
                auVar77._12_4_ = uVar107;
                dStack_2f0 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 8) ^
                                            __xmm_80000000800000008000000080000000);
                uVar107 = SUB84(dVar128,0);
                uVar127 = (undefined4)((ulonglong)dVar128 >> 0x20);
                auVar146._8_8_ = 0;
                auVar146._0_8_ = dStack_2f0;
                auVar138._8_4_ = uVar107;
                auVar138._0_8_ = dVar85;
                auVar138._12_4_ = uVar127;
                auVar51._8_4_ = uVar107;
                auVar51._0_8_ = dVar85;
                auVar51._12_4_ = uVar127;
                auVar64._8_4_ = uVar107;
                auVar64._0_8_ = dVar85;
                auVar64._12_4_ = uVar127;
                auVar139._0_8_ = auVar138._8_8_ * dVar119 - dVar85 * auVar77._8_8_;
                auVar139._8_8_ = dStack_2f0 * dVar125 - auVar51._8_8_ * auVar121._0_8_;
                auVar111 = blendpd(auVar89,auVar121,2);
                dVar74 = auVar111._8_8_;
                auVar62 = blendpd(auVar64,auVar146,2);
                auVar132._8_4_ = SUB84(auVar139._8_8_,0);
                auVar132._0_8_ = auVar139._0_8_;
                auVar132._12_4_ = (int)((ulonglong)auVar139._8_8_ >> 0x20);
                auStack_300._8_4_ = uVar107;
                auStack_300._0_8_ = dVar85;
                auStack_300._12_4_ = uVar127;
                auVar65._0_8_ = auVar62._0_8_ * auVar121._0_8_ - auVar111._0_8_ * dStack_2f0;
                auVar65._8_8_ = auVar62._8_8_ * auVar121._8_8_ - dVar74 * 0.0;
                dVar137 = auVar132._8_8_ + auVar132._8_8_;
                dVar144 = auVar65._0_8_ + auVar65._0_8_;
                auVar62 = blendpd(auVar139,auVar65,2);
                uVar107 = SUB84(dVar144,0);
                auVar112._8_4_ = uVar107;
                auVar112._0_8_ = dVar137;
                uVar127 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar112._12_4_ = uVar127;
                auVar52._8_4_ = uVar107;
                auVar52._0_8_ = dVar137;
                auVar52._12_4_ = uVar127;
                auVar78._0_8_ =
                     (double)CONCAT44(auStack_208._4_4_ &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      auStack_208._0_4_ &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                auVar78._8_4_ = auStack_208._8_4_ & _UNK_15061cc88;
                auVar78._12_4_ = auStack_208._12_4_ & _UNK_15061cc8c;
                auVar140._0_8_ = auVar62._0_8_ + auVar62._0_8_;
                auVar140._8_8_ = auVar62._8_8_ + auVar62._8_8_;
                auVar101._8_4_ = uVar107;
                auVar101._0_8_ = dVar137;
                auVar101._12_4_ = uVar127;
                auVar113._0_8_ = auVar112._8_8_ * dVar119 - dVar137 * auVar77._8_8_;
                auVar113._8_8_ = auVar140._0_8_ * dVar125 - auVar52._8_8_ * auVar121._0_8_;
                auVar62 = blendpd(auVar101,auVar140,2);
                auVar53._8_4_ = SUB84(auVar140._8_8_,0);
                auVar53._0_8_ = auVar140._0_8_;
                auVar53._12_4_ = (int)((ulonglong)auVar140._8_8_ >> 0x20);
                auVar7._4_8_ = dVar74;
                auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                auVar90._0_8_ = auVar7._0_8_ << 0x20;
                auVar90._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                auVar90._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                auVar102._0_8_ = auVar62._0_8_ * auVar121._0_8_ - auVar140._0_8_ * auVar111._0_8_;
                auVar102._8_8_ = auVar62._8_8_ * auVar121._8_8_ - auVar53._8_8_ * dVar74;
                auVar91._8_8_ = auVar90._8_8_;
                auVar91._0_8_ = dStack_1f8;
                lVar46 = -(ulonglong)
                          (auVar78._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                lVar48 = -(ulonglong)
                          (auVar78._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auStack_208);
                lVar47 = -(ulonglong)
                          ((double)CONCAT44((uint)((ulonglong)dStack_1f8 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dStack_1f8,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                          (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                auVar79._0_8_ =
                     (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                      ~(uint)lVar46 & auVar62._0_4_);
                auVar79._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
                auVar79._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
                auVar54._8_4_ = SUB84(auVar113._8_8_,0);
                auVar54._0_8_ = auVar113._0_8_;
                auVar54._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
                dStack_2e8 = auVar79._0_8_ * (dVar137 * auVar121._8_8_ + dVar85 + auVar54._8_8_);
                dStack_2e0 = auVar79._8_8_ * (dVar144 * auVar121._8_8_ + dVar128 + auVar102._0_8_);
                auVar111 = blendpd(auVar113,auVar102,2);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar91);
                uVar24 = uVar26;
                if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                  uVar24 = ~uVar39 >> 0x1f;
                }
                fVar98 = (float)dStack_2e8;
                dStack_2d8 = (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                              ~(uint)lVar47 & auVar62._0_4_) *
                             (auVar140._0_8_ * auVar121._8_8_ + dStack_2f0 + auVar111._0_8_);
                fVar108 = (float)dStack_2e0;
                fVar118 = (float)dStack_2d8;
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
                *(float *)(pFVar40 + lVar42) = fVar98;
                *(float *)(pFVar40 + lVar42 + 4) = fVar108;
                *(float *)(pFVar40 + lVar42 + 8) = fVar118;
                if (cVar21 == '\0') {
LAB_14dc60201:
                  cVar21 = '\0';
                }
                else {
                  uVar24 = uVar26;
                  if ((int)uVar39 < (pFVar43->Positions).ArrayNum) {
                    uVar24 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
                  uStack_388 = *(undefined8 *)(pFVar40 + lVar42);
                  fVar98 = *(float *)(pFVar40 + lVar42 + 8);
                  iVar25 = _finite((double)(float)uStack_388);
                  if (iVar25 == 0) goto LAB_14dc60201;
                  iVar25 = _finite((double)uStack_388._4_4_);
                  if ((iVar25 == 0) || (iVar25 = _finite((double)fVar98), iVar25 == 0))
                  goto LAB_14dc60201;
                  uVar24 = uVar26;
                  if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                    uVar24 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
                  uStack_37c = *(undefined8 *)(pFVar40 + lVar42);
                  fVar98 = *(float *)(pFVar40 + lVar42 + 8);
                  iVar25 = _finite((double)(float)uStack_37c);
                  if (iVar25 == 0) goto LAB_14dc60201;
                  iVar25 = _finite((double)uStack_37c._4_4_);
                  if ((iVar25 == 0) || (iVar25 = _finite((double)fVar98), iVar25 == 0))
                  goto LAB_14dc60201;
                  cVar21 = '\x01';
                }
                iVar25 = (pFVar43->Positions).ArrayNum;
                uVar39 = uVar39 + 1;
                lVar42 = lVar42 + 0xc;
                this = pFStack_4d8;
                dVar74 = dStack_4e0;
                uVar24 = uStack_398;
                uVar45 = uStack_394;
                uVar124 = uStack_390;
                uVar126 = uStack_38c;
                dVar128 = dStack_508;
                uVar145 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar148 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                uVar149 = _UNK_15061cc88;
                uVar150 = _UNK_15061cc8c;
                dVar85 = dStack_3a8;
                dVar119 = dStack_3a0;
                bVar20 = bVar19;
                bVar22 = bVar10;
                bVar12 = bVar11;
                bVar13 = bVar14;
                bVar16 = bVar15;
              } while ((int)uVar39 < iVar25);
            }
            goto LAB_14dc607ce;
          }
          if (0 < iVar25) {
            lVar42 = 0;
            do {
              uVar45 = ~uVar39 >> 0x1f;
              uVar24 = 0;
              if ((int)uVar39 < iVar25) {
                uVar24 = uVar45;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
              dVar74 = dStack_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar85 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              auVar73._8_4_ = SUB84(dVar85,0);
              auVar73._0_8_ = dVar74;
              auVar73._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
              auVar92._0_8_ =
                   dStack_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              auVar92._8_8_ =
                   dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              dStack_2c8 = (double)*(float *)(pFVar40 + lVar42 + 4) * dVar128;
              dStack_2d0 = (double)*(float *)(pFVar40 + lVar42) * dVar128;
              auVar111 = blendpd(auVar73,auVar92,2);
              dStack_2c0 = (double)*(float *)(pFVar40 + lVar42 + 8) * dVar128;
              dVar137 = dStack_2d0 - (double)auStack_228._0_8_;
              dVar144 = dStack_2c8 - (double)auStack_228._8_8_;
              dVar128 = dStack_2c0 - dStack_218;
              uVar107 = SUB84(dVar144,0);
              auVar133._8_4_ = uVar107;
              auVar133._0_8_ = dVar137;
              uVar127 = (undefined4)((ulonglong)dVar144 >> 0x20);
              auVar133._12_4_ = uVar127;
              auVar55._8_4_ = uVar107;
              auVar55._0_8_ = dVar137;
              auVar55._12_4_ = uVar127;
              auVar66._8_4_ = uVar107;
              auVar66._0_8_ = dVar137;
              auVar66._12_4_ = uVar127;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = dVar128;
              auVar62 = blendpd(auVar66,auVar5,2);
              auVar134._0_8_ = auVar133._8_8_ * dVar74 - dVar137 * dVar85;
              auVar134._8_8_ = dVar128 * dVar85 - auVar55._8_8_ * auVar92._0_8_;
              auVar122._8_4_ = SUB84(auVar134._8_8_,0);
              auVar122._0_8_ = auVar134._0_8_;
              auVar122._12_4_ = (int)((ulonglong)auVar134._8_8_ >> 0x20);
              auVar67._0_8_ = auVar62._0_8_ * auVar92._0_8_ - dVar128 * auVar111._0_8_;
              auVar67._8_8_ = auVar62._8_8_ * auVar92._8_8_ - auVar111._8_8_ * 0.0;
              dVar119 = auVar122._8_8_ + auVar122._8_8_;
              dVar125 = auVar67._0_8_ + auVar67._0_8_;
              auVar62 = blendpd(auVar134,auVar67,2);
              uVar107 = SUB84(dVar125,0);
              auVar114._8_4_ = uVar107;
              auVar114._0_8_ = dVar119;
              uVar127 = (undefined4)((ulonglong)dVar125 >> 0x20);
              auVar114._12_4_ = uVar127;
              auVar56._8_4_ = uVar107;
              auVar56._0_8_ = dVar119;
              auVar56._12_4_ = uVar127;
              auVar103._8_4_ = uVar107;
              auVar103._0_8_ = dVar119;
              auVar103._12_4_ = uVar127;
              auVar135._0_8_ = auVar62._0_8_ + auVar62._0_8_;
              auVar135._8_8_ = auVar62._8_8_ + auVar62._8_8_;
              auVar62 = blendpd(auVar103,auVar135,2);
              auVar115._0_8_ = auVar114._8_8_ * dVar74 - dVar119 * dVar85;
              auVar115._8_8_ = auVar135._0_8_ * dVar85 - auVar56._8_8_ * auVar92._0_8_;
              auVar8._4_8_ = auVar92._8_8_;
              auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
              auVar93._0_8_ = auVar8._0_8_ << 0x20;
              auVar93._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar93._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar57._8_4_ = SUB84(auVar135._8_8_,0);
              auVar57._0_8_ = auVar135._0_8_;
              auVar57._12_4_ = (int)((ulonglong)auVar135._8_8_ >> 0x20);
              auVar80._0_8_ =
                   (double)CONCAT44(uVar148 & auStack_208._4_4_,uVar145 & auStack_208._0_4_);
              auVar80._8_4_ = uVar149 & auStack_208._8_4_;
              auVar80._12_4_ = uVar150 & auStack_208._12_4_;
              auVar104._0_8_ = auVar62._0_8_ * auVar92._0_8_ - auVar135._0_8_ * auVar111._0_8_;
              auVar104._8_8_ = auVar62._8_8_ * auVar92._8_8_ - auVar57._8_8_ * auVar111._8_8_;
              auVar94._8_8_ = auVar93._8_8_;
              auVar94._0_8_ = dStack_1f8;
              lVar46 = -(ulonglong)
                        (auVar80._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar48 = -(ulonglong)
                        (auVar80._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auStack_208);
              lVar47 = -(ulonglong)
                        ((double)CONCAT44(uVar148 & (uint)((ulonglong)dStack_1f8 >> 0x20),
                                          uVar145 & SUB84(dStack_1f8,0)) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              auVar81._0_8_ =
                   (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                    ~(uint)lVar46 & auVar62._0_4_);
              auVar81._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
              auVar81._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
              auVar58._8_4_ = SUB84(auVar115._8_8_,0);
              auVar58._0_8_ = auVar115._0_8_;
              auVar58._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
              dStack_2b8 = auVar81._0_8_ * (dVar119 * auVar92._8_8_ + dVar137 + auVar58._8_8_);
              dStack_2b0 = auVar81._8_8_ * (dVar125 * auVar92._8_8_ + dVar144 + auVar104._0_8_);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar94);
              uVar24 = 0;
              if ((int)uVar39 < (pFVar43->Positions).ArrayNum) {
                uVar24 = uVar45;
              }
              auVar111 = blendpd(auVar115,auVar104,2);
              fVar98 = (float)dStack_2b8;
              dStack_2a8 = (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                            ~(uint)lVar47 & auVar62._0_4_) *
                           (auVar135._0_8_ * auVar92._8_8_ + dVar128 + auVar111._0_8_);
              fVar108 = (float)dStack_2b0;
              fVar118 = (float)dStack_2a8;
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
              *(float *)(pFVar40 + lVar42) = fVar98;
              *(float *)(pFVar40 + lVar42 + 4) = fVar108;
              *(float *)(pFVar40 + lVar42 + 8) = fVar118;
              uVar24 = 0;
              if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                uVar24 = uVar45;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
              dVar119 = dStack_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar125 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              auVar136._0_8_ =
                   dStack_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              auVar136._8_8_ =
                   dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              dVar74 = (double)(float)(*(uint *)(pFVar40 + lVar42) ^
                                      __xmm_80000000800000008000000080000000);
              auVar95._8_4_ = SUB84(dVar125,0);
              auVar95._0_8_ = dVar119;
              uVar107 = (undefined4)((ulonglong)dVar125 >> 0x20);
              auVar95._12_4_ = uVar107;
              dVar128 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 4) ^
                                       __xmm_80000000800000008000000080000000);
              auVar82._8_4_ = SUB84(dVar125,0);
              auVar82._0_8_ = dVar119;
              auVar82._12_4_ = uVar107;
              dStack_290 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 8) ^
                                          __xmm_80000000800000008000000080000000);
              auVar147._8_8_ = 0;
              auVar147._0_8_ = dStack_290;
              uVar107 = SUB84(dVar128,0);
              uVar127 = (undefined4)((ulonglong)dVar128 >> 0x20);
              auVar141._8_4_ = uVar107;
              auVar141._0_8_ = dVar74;
              auVar141._12_4_ = uVar127;
              auVar59._8_4_ = uVar107;
              auVar59._0_8_ = dVar74;
              auVar59._12_4_ = uVar127;
              auVar111 = blendpd(auVar95,auVar136,2);
              auVar142._0_8_ = auVar141._8_8_ * dVar119 - dVar74 * auVar82._8_8_;
              auVar142._8_8_ = dStack_290 * dVar125 - auVar59._8_8_ * auVar136._0_8_;
              auVar123._8_4_ = SUB84(auVar142._8_8_,0);
              auVar123._0_8_ = auVar142._0_8_;
              auVar123._12_4_ = (int)((ulonglong)auVar142._8_8_ >> 0x20);
              auVar68._8_4_ = uVar107;
              auVar68._0_8_ = dVar74;
              auVar68._12_4_ = uVar127;
              auVar62 = blendpd(auVar68,auVar147,2);
              auStack_2a0._8_4_ = uVar107;
              auStack_2a0._0_8_ = dVar74;
              auStack_2a0._12_4_ = uVar127;
              auVar69._0_8_ = auVar62._0_8_ * auVar136._0_8_ - auVar111._0_8_ * dStack_290;
              auVar69._8_8_ = auVar62._8_8_ * auVar136._8_8_ - auVar111._8_8_ * 0.0;
              auVar62 = blendpd(auVar142,auVar69,2);
              dVar137 = auVar123._8_8_ + auVar123._8_8_;
              dVar144 = auVar69._0_8_ + auVar69._0_8_;
              auVar143._0_8_ = auVar62._0_8_ + auVar62._0_8_;
              auVar143._8_8_ = auVar62._8_8_ + auVar62._8_8_;
              dVar85 = auVar111._8_8_ * auVar143._8_8_;
              auVar116._8_4_ = SUB84(dVar144,0);
              auVar116._0_8_ = dVar137;
              uVar107 = (undefined4)((ulonglong)dVar144 >> 0x20);
              auVar116._12_4_ = uVar107;
              auVar105._8_4_ = SUB84(dVar144,0);
              auVar105._0_8_ = dVar137;
              auVar105._12_4_ = uVar107;
              auVar117._0_8_ = auVar116._8_8_ * dVar119 - auVar82._8_8_ * dVar137;
              auVar117._8_8_ = auVar143._0_8_ * dVar125 - auVar136._0_8_ * dVar144;
              auVar83._0_8_ =
                   (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auStack_208._4_4_
                                    ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     auStack_208._0_4_);
              auVar83._8_4_ = _UNK_15061cc88 & auStack_208._8_4_;
              auVar83._12_4_ = _UNK_15061cc8c & auStack_208._12_4_;
              auVar62 = blendpd(auVar105,auVar143,2);
              auVar106._0_8_ = auVar62._0_8_ * auVar136._0_8_ - auVar111._0_8_ * auVar143._0_8_;
              auVar106._8_8_ = auVar62._8_8_ * auVar136._8_8_ - dVar85;
              auVar9._4_8_ = dVar85;
              auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
              auVar96._0_8_ = auVar9._0_8_ << 0x20;
              auVar96._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar96._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar97._8_8_ = auVar96._8_8_;
              auVar97._0_8_ = dStack_1f8;
              lVar46 = -(ulonglong)
                        ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                          (uint)((ulonglong)dStack_1f8 >> 0x20),
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                          SUB84(dStack_1f8,0)) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              lVar47 = -(ulonglong)
                        (auVar83._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar48 = -(ulonglong)
                        (auVar83._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              auVar70._8_4_ = SUB84(auVar136._8_8_,0);
              auVar70._0_8_ = auVar136._8_8_;
              auVar70._12_4_ = (int)((ulonglong)auVar136._8_8_ >> 0x20);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auStack_208);
              auVar84._0_8_ =
                   (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                    ~(uint)lVar47 & auVar62._0_4_);
              auVar84._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
              auVar84._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
              auVar60._8_4_ = SUB84(auVar117._8_8_,0);
              auVar60._0_8_ = auVar117._0_8_;
              auVar60._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
              dStack_288 = auVar84._0_8_ * (auVar136._8_8_ * dVar137 + dVar74 + auVar60._8_8_);
              dStack_280 = auVar84._8_8_ * (auVar70._8_8_ * dVar144 + dVar128 + auVar106._0_8_);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar97);
              uVar24 = 0;
              if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                uVar24 = ~uVar39 >> 0x1f;
              }
              auVar111 = blendpd(auVar117,auVar106,2);
              fVar98 = (float)dStack_288;
              dStack_278 = (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                            ~(uint)lVar46 & auVar62._0_4_) *
                           (auVar136._8_8_ * auVar143._0_8_ + dStack_290 + auVar111._0_8_);
              fVar108 = (float)dStack_280;
              fVar118 = (float)dStack_278;
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
              uVar39 = uVar39 + 1;
              *(float *)(pFVar40 + lVar42) = fVar98;
              *(float *)(pFVar40 + lVar42 + 4) = fVar108;
              *(float *)(pFVar40 + lVar42 + 8) = fVar118;
              lVar42 = lVar42 + 0xc;
              iVar25 = (pFVar43->Positions).ArrayNum;
              this = pFStack_4d8;
              cVar21 = cStack_548;
              dVar74 = dStack_4e0;
              uVar24 = uStack_398;
              uVar45 = uStack_394;
              uVar124 = uStack_390;
              uVar126 = uStack_38c;
              dVar128 = dStack_508;
              uVar145 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar148 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar149 = _UNK_15061cc88;
              uVar150 = _UNK_15061cc8c;
              dVar85 = dStack_3a8;
              dVar119 = dStack_3a0;
              bVar20 = bVar19;
            } while ((int)uVar39 < iVar25);
            goto LAB_14dc607ce;
          }
        }
        else {
LAB_14dc607ce:
          if ((bSimulationDataCheckFinite != false) && (cVar21 == '\0')) {
            if (2 < (byte)LogChaosClothAsset._0_1_) {
              FStack_498 = (FName)pUStack_538->_padding_;
              ::FName::ToString(&FStack_498,&FStack_440);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
              if (FStack_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_440.Data.AllocatorInstance.Data);
              }
            }
            bVar19 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2610671844826545199>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                ,0x3d1,"bSimDataIsFinite");
            if (bVar19) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (bSimulationDataResetOnNonFinite != false) {
              this->bNeedResetClothFromNanCheck = true;
            }
          }
        }
        if ((pFVar43 != (FClothSimulData *)0x0) &&
           (((!bVar20 || (cVar21 == '\0')) &&
            (*(int *)&(this->CurrentSimulationData).field_0x8 !=
             *(int *)&(this->CurrentSimulationData).field_0x34)))) {
          puVar3 = *(undefined1 **)&(this->CurrentSimulationData).field_0x40;
          puVar38 = &(this->CurrentSimulationData).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar38 = puVar3;
          }
          iVar25 = *(int *)(puVar38 +
                           ((longlong)*(int *)&(this->CurrentSimulationData).field_0x48 - 1U &
                           (longlong)(int)uStack_53c) * 4);
          if (iVar25 != -1) {
            do {
              if (*(uint *)((longlong)iVar25 * 0x110 + *(longlong *)&this->CurrentSimulationData) ==
                  uStack_53c) {
                TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                                 *)&this->CurrentSimulationData,iVar25);
                break;
              }
              iVar25 = *(int *)((longlong)iVar25 * 0x110 + 0x100 +
                               *(longlong *)&this->CurrentSimulationData);
            } while (iVar25 != -1);
          }
        }
        uVar37 = (ulonglong)(uint)TStack_1e8.ArrayNum;
        FVar36 = (ForElementType<int>)((longlong)FStack_4d0 + 4);
        uVar44 = (ulonglong)uStack_4ec;
      }
    }
    uVar24 = uStack_52c;
    if (TStack_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)TStack_1e8.AllocatorInstance.SecondaryData);
      uVar24 = uStack_52c;
    }
  }
  else {
    TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
             *)&this->CurrentSimulationData);
  }
  if ((FStack_528.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FStack_528.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FStack_528.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(FStack_528.StatId,CycleScopeEnd);
  }
  FStack_528.EmittedEvent = '\0';
  if ((FStack_518.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FStack_518.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FStack_518.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(FStack_518.StatId,CycleScopeEnd);
  }
  FStack_518.EmittedEvent = '\0';
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("Cloth",uVar24);
  return;
}

// PreProcess_GameThread @ 14dc53ad0

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::PreProcess_GameThread
          (FClothSimulationProxy *this,float param_1,bool param_2)

{
  undefined1 *puVar1;
  ESolverMode EVar2;
  FBaseGraphTask *pFVar3;
  FClothingSimulationCacheData *pFVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  FClothingSimulationSolver *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId379,"FClothSimulationProxy_PreProcess_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0x17b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId379);
  }
  this->bIsSimulating = false;
  this->bIsPreProcessed = false;
  pFVar3 = (this->ParallelInitializationTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    if (((!param_2) && (bWaitForAsyncClothInitialization == false)) && (pFVar3->field_0xd0 == '\0'))
    goto LAB_14dc53cd4;
    CompleteInitialization_GameThread(this);
  }
  if ((!this->bIsInitialized) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                         ,0x18e,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->bIsPreProcessed = true;
  cVar10 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x30))();
  if (cVar10 == '\0') goto LAB_14dc53cd4;
  FClothSimulationContext::Fill
            ((this->ClothSimulationContext).Ptr,this->ClothComponentAdapter,param_1,
             this->MaxDeltaTime,false,(this->CacheData).Ptr);
  pFVar4 = (this->CacheData).Ptr;
  if (pFVar4 != (FClothingSimulationCacheData *)0x0) {
    (this->CacheData).Ptr = (FClothingSimulationCacheData *)0x0;
    *(undefined4 *)&(pFVar4->CachedReferenceSpaceTransforms).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar4->CachedReferenceSpaceTransforms).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar4->CachedReferenceSpaceTransforms);
    pFVar6 = (pFVar4->CacheIndices).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar4->CachedVelocities).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar4->CachedPositions).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pFVar4,0x80);
  }
  EVar2 = this->SolverMode;
  if (EVar2 == Default) {
LAB_14dc53c8b:
    pFVar7 = (this->Solver).Ptr;
    if ((((this->ClothSimulationContext).Ptr)->CacheData).CacheIndices.ArrayNum < 1) {
      bVar9 = pFVar7->bEnableSolver;
      pFVar7->bEnableSolver = bVar9;
      if (bVar9 != false) goto LAB_14dc53cd4;
    }
    else {
      pFVar7->bEnableSolver = false;
    }
  }
  else {
    if (EVar2 == EnableSolverForSimulateRecord) {
      ((this->Solver).Ptr)->bEnableSolver = true;
      goto LAB_14dc53cd4;
    }
    if (EVar2 != DisableSolverForPlayback) goto LAB_14dc53c8b;
    ((this->Solver).Ptr)->bEnableSolver = false;
  }
  if (0 < (((this->ClothSimulationContext).Ptr)->CacheData).CacheIndices.ArrayNum) {
    Tick(this);
  }
LAB_14dc53cd4:
  if (!bVar11) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// PreProcess_Internal @ 14dc53d00

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::PreProcess_Internal
          (FClothSimulationProxy *this,float param_1)

{
  ESolverMode EVar1;
  FClothingSimulationCacheData *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FClothingSimulationSolver *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  
  if ((!this->bIsInitialized) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                         ,0x18e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->bIsPreProcessed = true;
  cVar8 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x30))();
  if (cVar8 == '\0') {
    return;
  }
  FClothSimulationContext::Fill
            ((this->ClothSimulationContext).Ptr,this->ClothComponentAdapter,param_1,
             this->MaxDeltaTime,false,(this->CacheData).Ptr);
  pFVar2 = (this->CacheData).Ptr;
  if (pFVar2 != (FClothingSimulationCacheData *)0x0) {
    (this->CacheData).Ptr = (FClothingSimulationCacheData *)0x0;
    *(undefined4 *)&(pFVar2->CachedReferenceSpaceTransforms).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar2->CachedReferenceSpaceTransforms).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar2->CachedReferenceSpaceTransforms);
    pFVar4 = (pFVar2->CacheIndices).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar2->CachedVelocities).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar2->CachedPositions).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar2,0x80);
  }
  EVar1 = this->SolverMode;
  if (EVar1 != Default) {
    if (EVar1 == EnableSolverForSimulateRecord) {
      ((this->Solver).Ptr)->bEnableSolver = true;
      return;
    }
    if (EVar1 == DisableSolverForPlayback) {
      ((this->Solver).Ptr)->bEnableSolver = false;
      goto LAB_14dc53e73;
    }
  }
  pFVar5 = (this->Solver).Ptr;
  if ((((this->ClothSimulationContext).Ptr)->CacheData).CacheIndices.ArrayNum < 1) {
    bVar7 = pFVar5->bEnableSolver;
    pFVar5->bEnableSolver = bVar7;
    if (bVar7 != false) {
      return;
    }
  }
  else {
    pFVar5->bEnableSolver = false;
  }
LAB_14dc53e73:
  if (0 < (((this->ClothSimulationContext).Ptr)->CacheData).CacheIndices.ArrayNum) {
    Tick(this);
  }
  return;
}

// PreSimulate_GameThread @ 14dc53ea0

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

bool __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::PreSimulate_GameThread
          (FClothSimulationProxy *this,float param_1)

{
  bool bVar1;
  UPhysicsFieldComponent *this_00;
  FClothingSimulationSolver *pFVar2;
  char cVar3;
  UActorComponent *this_01;
  UWorld *pUVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  longlong lVar6;
  TMatrix<double> *pTVar7;
  undefined1 auStackY_198 [32];
  TBoxSphereBounds<double,double> local_168;
  TVector<double>_u_0 local_130;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_100;
  TBox<double> local_f8;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((this->bIsPreProcessed) &&
     (((bVar1 = ((this->Solver).Ptr)->bEnableSolver, bVar1 != false ||
       ((((this->ClothSimulationContext).Ptr)->CacheData).CacheIndices.ArrayNum < 1)) &&
      (cVar3 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x68))
                         (this->ClothComponentAdapter,((this->ClothSimulationContext).Ptr)->LodIndex
                         ), cVar3 != '\0')))) {
    if (((0.0 < param_1) &&
        (cVar3 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x38))(), cVar3 == '\0')) &&
       (bVar1 != false)) {
      this->bIsSimulating = true;
      InitializeConfigs(this);
      this_01 = (UActorComponent *)(**(code **)*this->ClothComponentAdapter)();
      pUVar4 = this_01->WorldPrivate;
      if (((pUVar4 != (UWorld *)0x0) ||
          (pUVar4 = UActorComponent::GetWorld_Uncached(this_01), pUVar4 != (UWorld *)0x0)) &&
         (this_00 = (pUVar4->PhysicsField).field0_0x0.DebugPtr,
         this_00 != (UPhysicsFieldComponent *)0x0)) {
        pTVar5 = CalculateBounds_AnyThread(this,&local_168);
        local_100 = 1;
        local_118 = (pTVar5->BoxExtent).field0_0x0._s_0.X;
        local_110 = (pTVar5->BoxExtent).field0_0x0._s_0.Y;
        local_130._s_0.X = (pTVar5->Origin).field0_0x0._s_0.X - local_118;
        local_108 = (pTVar5->BoxExtent).field0_0x0._s_0.Z;
        local_118 = local_118 + (pTVar5->Origin).field0_0x0._s_0.X;
        local_130._s_0.Y = (pTVar5->Origin).field0_0x0._s_0.Y - local_110;
        local_110 = local_110 + (pTVar5->Origin).field0_0x0._s_0.Y;
        local_130._s_0.Z = (pTVar5->Origin).field0_0x0._s_0.Z - local_108;
        local_108 = local_108 + (pTVar5->Origin).field0_0x0._s_0.Z;
        lVar6 = (**(code **)*this->ClothComponentAdapter)();
        pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale
                           ((TTransform<double> *)(lVar6 + 0x1f0),&local_b8);
        UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_130._s_0,&local_f8,pTVar7);
        pFVar2 = (this->Solver).Ptr;
        UPhysicsFieldComponent::FillTransientCommands
                  (this_00,false,&local_f8,pFVar2->Time,&(pFVar2->PerSolverField).TransientCommands)
        ;
        pFVar2 = (this->Solver).Ptr;
        UPhysicsFieldComponent::FillPersistentCommands
                  (this_00,false,&local_f8,pFVar2->Time,&(pFVar2->PerSolverField).PersistentCommands
                  );
      }
      FCollisionSourcesProxy::ExtractCollisionData((this->CollisionSourcesProxy).Ptr);
      return this->bIsSimulating;
    }
    this->bIsSimulating = false;
  }
  return false;
}

// SetupSimulationData @ 14dc5a0e0

bool __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::SetupSimulationData
          (FClothSimulationProxy *this,float param_1)

{
  PreProcess_GameThread(this,param_1,false);
  PreSimulate_GameThread(this,param_1);
  PostProcess_GameThread(this);
  return this->bIsSimulating;
}

// ShouldEnableSolver @ 14dc5a130

bool __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::ShouldEnableSolver
          (FClothSimulationProxy *this,bool param_1)

{
  ESolverMode EVar1;
  
  EVar1 = this->SolverMode;
  if (EVar1 != Default) {
    if (EVar1 == EnableSolverForSimulateRecord) {
      return true;
    }
    if (EVar1 == DisableSolverForPlayback) {
      return false;
    }
  }
  if (0 < (((this->ClothSimulationContext).Ptr)->CacheData).CacheIndices.ArrayNum) {
    param_1 = false;
  }
  return param_1;
}

// Tick @ 14dc5ad40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Chaos::ClothAsset::FClothSimulationProxy::Tick(FClothSimulationProxy *this)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  atomic<bool> aVar4;
  int iVar5;
  FClothSimulationContext *pFVar6;
  FClothingSimulationSolver *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  bool bVar14;
  char cVar15;
  atomic<int> aVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics> FVar19;
  IConsoleManager *pIVar20;
  FClothSimulationContext *pFVar21;
  UActorComponent *this_00;
  UWorld *pUVar22;
  longlong *plVar23;
  TConsoleVariableData<bool> *pTVar24;
  longlong lVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  atomic<float> aVar32;
  atomic<float> aVar33;
  double dVar34;
  float fVar35;
  undefined1 local_res20 [8];
  undefined1 local_128 [4];
  FColor_u_0 local_124;
  int local_120;
  FName local_118;
  FName local_110;
  float local_100;
  float local_fc;
  float local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  longlong local_e0;
  FName local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  if (!this->bIsPreProcessed) {
    return;
  }
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId557,"FClothSimulationProxy_TickPhysics",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0x22d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId557);
  }
  FVar19 = StatPtr_STAT_ClothSimulationProxy_TickPhysics;
  if (StatPtr_STAT_ClothSimulationProxy_TickPhysics ==
      (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics>)0x0) {
    pFVar18 = ::FName::FName(&local_d8,"STAT_ClothSimulationProxy_TickPhysics");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSimulationProxy_TickPhysics,
                        *pFVar18,L"ClothSimulationProxy Tick Physics","STATGROUP_ChaosClothAsset",
                        "STATCAT_Advanced",L"ChaosClothAsset",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar26 = *(FName *)FVar19;
  bVar12 = false;
  bVar11 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar30 = false;
  bVar14 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_124._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar30 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_118.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                   ,0x22e);
        bVar12 = true;
        bVar11 = true;
        bVar30 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar14 = true;
      goto LAB_14dc5af13;
    }
  }
  bVar12 = bVar30;
  bVar11 = bVar14;
  bVar14 = false;
  FVar26 = local_110;
LAB_14dc5af13:
  pFVar6 = (this->ClothSimulationContext).Ptr;
  local_120 = (pFVar6->CacheData).CacheIndices.ArrayNum;
  if ((pFVar6->DeltaTime != 0.0) || (0 < local_120)) {
    local_e0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(local_e0 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar20 = IConsoleManager::Get();
      UseTimeStepSmoothingCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar20 + 0xc0))(pIVar20,L"p.ChaosCloth.UseTimeStepSmoothing",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (UseTimeStepSmoothingCVar == (IConsoleVariable *)0x0) {
      cVar15 = '\x01';
    }
    else {
      cVar15 = (**(code **)(*(longlong *)UseTimeStepSmoothingCVar + 0xc0))();
    }
    pFVar6 = (this->ClothSimulationContext).Ptr;
    pFVar21 = (FClothSimulationContext *)&((this->Solver).Ptr)->DeltaTime;
    fVar2 = pFVar6->DeltaTime;
    if (*(float *)pFVar21 <= 0.0) {
      pFVar21 = pFVar6;
    }
    fVar35 = __real_3f800000;
    if (cVar15 != '\0') {
      fVar35 = DeltaTimeDecay;
    }
    fVar35 = (fVar2 - pFVar21->DeltaTime) * fVar35 + pFVar21->DeltaTime;
    QueryPerformanceCounter(&local_f0);
    aVar32 = this->SimulationTime;
    dVar9 = (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (((this->bNeedResetClothFromNanCheck) ||
        (((this->ClothSimulationContext).Ptr)->bReset != false)) || ((float)aVar32 == 0.0)) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    aVar4 = (atomic<bool>)((this->ClothSimulationContext).Ptr)->bTeleport;
    LOCK();
    this->bIsTeleported = aVar4;
    UNLOCK();
    pFVar6 = (this->ClothSimulationContext).Ptr;
    local_d0 = (pFVar6->ComponentTransform).Translation.XY.m128d_f64[0];
    dStack_c8 = (pFVar6->ComponentTransform).Translation.XY.m128d_f64[1];
    local_c0 = (pFVar6->ComponentTransform).Translation.ZW.m128d_f64[0];
    local_b8 = local_d0;
    dStack_b0 = dStack_c8;
    local_a8 = local_c0;
    ::Chaos::FClothingSimulationSolver::SetLocalSpaceLocation
              ((this->Solver).Ptr,(TVector<double,3> *)&local_d0,bVar30);
    pFVar6 = (this->ClothSimulationContext).Ptr;
    dVar34 = (pFVar6->ComponentTransform).Rotation.XY.m128d_f64[1];
    dVar3 = (pFVar6->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar10 = (pFVar6->ComponentTransform).Rotation.ZW.m128d_f64[1];
    pFVar7 = (this->Solver).Ptr;
    *(double *)&pFVar7->LocalSpaceRotation = (pFVar6->ComponentTransform).Rotation.XY.m128d_f64[0];
    *(double *)&(pFVar7->LocalSpaceRotation).field_0x8 = dVar34;
    *(double *)&(pFVar7->LocalSpaceRotation).field_0x10 = dVar3;
    *(double *)&(pFVar7->LocalSpaceRotation).field_0x18 = dVar10;
    pFVar6 = (this->ClothSimulationContext).Ptr;
    local_f8 = (float)(pFVar6->WindVelocity).field0_0x0._s_0.Z;
    local_fc = (float)(pFVar6->WindVelocity).field0_0x0._s_0.Y;
    local_100 = (float)(pFVar6->WindVelocity).field0_0x0._s_0.X;
    ::Chaos::FClothingSimulationSolver::SetWindVelocity
              ((this->Solver).Ptr,(TVector<float,3> *)&local_100,0.0);
    pFVar6 = (this->ClothSimulationContext).Ptr;
    pFVar7 = (this->Solver).Ptr;
    dVar34 = (pFVar6->WorldGravity).field0_0x0._s_0.Y;
    dVar3 = (pFVar6->WorldGravity).field0_0x0._s_0.Z;
    *(float *)&pFVar7->Gravity = (float)(pFVar6->WorldGravity).field0_0x0._s_0.X;
    *(float *)&(pFVar7->Gravity).field_0x4 = (float)dVar34;
    *(float *)&(pFVar7->Gravity).field_0x8 = (float)dVar3;
    ((this->Solver).Ptr)->bIsClothGravityOverrideEnabled = true;
    dVar34 = __real_3ff0000000000000;
    if (bVar30 == false) {
      dVar34 = ((double)((this->ClothSimulationContext).Ptr)->VelocityScale * (double)fVar35) /
               (double)fVar2;
    }
    ((this->Solver).Ptr)->VelocityScale = dVar34;
    pFVar27 = (this->Cloths).AllocatorInstance.Data;
    iVar5 = (this->Cloths).ArrayNum;
    pFVar1 = pFVar27 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->Cloths).ArrayNum != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar27 == pFVar1) break;
      if (bVar30 != false) {
        *(undefined1 *)(*(longlong *)pFVar27 + 0x44) = 1;
      }
      if (aVar4 != (atomic<bool>)0x0) {
        *(undefined1 *)(*(longlong *)pFVar27 + 0x45) = 1;
      }
      pFVar6 = (this->ClothSimulationContext).Ptr;
      if (pFVar6->bResetRestLengthsWithMorphTarget != false) {
        lVar29 = *(longlong *)pFVar27;
        *(undefined1 *)(lVar29 + 0x46) = 1;
        ::FString::operator=((FString *)(lVar29 + 0x48),&pFVar6->ResetRestLengthsMorphTargetName);
      }
      pFVar27 = pFVar27 + 8;
    }
    pFVar7 = (this->Solver).Ptr;
    if ((pFVar7->bEnableSolver == false) && (0 < local_120)) {
      ::Chaos::FClothingSimulationSolver::UpdateFromCache
                (pFVar7,&((this->ClothSimulationContext).Ptr)->CacheData);
    }
    else {
      ::Chaos::FClothingSimulationSolver::Update(pFVar7,fVar35);
    }
    aVar16 = (atomic<int>)
             ::Chaos::FClothingSimulationSolver::GetNumUsedIterations((this->Solver).Ptr);
    LOCK();
    this->NumIterations = aVar16;
    UNLOCK();
    LOCK();
    this->NumSubsteps = (atomic<int>)((this->Solver).Ptr)->NumUsedSubsteps;
    UNLOCK();
    QueryPerformanceCounter(&local_e8);
    aVar33 = (atomic<float>)
             (float)(((double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar9) *
                    __real_408f400000000000);
    if ((float)aVar32 != 0.0) {
      aVar33 = (atomic<float>)(((float)aVar33 - (float)aVar32) * __real_3cf5c28f + (float)aVar32);
    }
    iVar17 = -1;
    LOCK();
    this->SimulationTime = aVar33;
    UNLOCK();
    LOCK();
    this->NumKinematicParticles = (atomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->NumDynamicParticles = (atomic<int>)0x0;
    UNLOCK();
    pFVar27 = (this->Cloths).AllocatorInstance.Data;
    iVar5 = (this->Cloths).ArrayNum;
    pFVar1 = pFVar27 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->Cloths).ArrayNum != iVar5) {
        local_128[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (pFVar27 == pFVar1) break;
      LOCK();
      this->NumKinematicParticles =
           (atomic<int>)((int)this->NumKinematicParticles + *(int *)(*(longlong *)pFVar27 + 0x150));
      UNLOCK();
      LOCK();
      this->NumDynamicParticles =
           (atomic<int>)((int)this->NumDynamicParticles + *(int *)(*(longlong *)pFVar27 + 0x154));
      UNLOCK();
      if ((iVar17 == -1) && (0 < (*(FClothingSimulationCloth **)pFVar27)->NumActiveDynamicParticles)
         ) {
        iVar17 = ::Chaos::FClothingSimulationCloth::GetParticleRangeId
                           (*(FClothingSimulationCloth **)pFVar27,(this->Solver).Ptr);
      }
      pFVar27 = pFVar27 + 8;
    }
    if (iVar17 == -1) {
      LOCK();
      this->LastLinearSolveError = (atomic<float>)0x0;
      UNLOCK();
      aVar16 = (atomic<int>)0x0;
    }
    else {
      aVar32 = (atomic<float>)
               ::Chaos::FClothingSimulationSolver::GetLinearSolverError((this->Solver).Ptr,iVar17);
      LOCK();
      this->LastLinearSolveError = aVar32;
      UNLOCK();
      aVar16 = (atomic<int>)
               ::Chaos::FClothingSimulationSolver::GetNumLinearSolverIterations
                         ((this->Solver).Ptr,iVar17);
    }
    LOCK();
    this->LastLinearSolveIterations = aVar16;
    UNLOCK();
    this->bNeedResetClothFromNanCheck = false;
    this_00 = (UActorComponent *)(**(code **)*this->ClothComponentAdapter)();
    pUVar22 = this_00->WorldPrivate;
    if (((pUVar22 != (UWorld *)0x0) ||
        (pUVar22 = UActorComponent::GetWorld_Uncached(this_00), pUVar22 != (UWorld *)0x0)) &&
       ((pUVar22->WorldType).Value != '\x04')) {
      if ((*(int *)(local_e0 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1))
      {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawLocalSpaceCVar = pTVar24;
        _Init_thread_footer(&::_TSS3);
      }
      uVar13 = _tls_index;
      uVar28 = (ulonglong)_tls_index;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBoundsCVar = pTVar24;
        _Init_thread_footer(&::_TSS4);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawGravityCVar = pTVar24;
        _Init_thread_footer(&::_TSS5);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawPhysMeshWiredCVar = pTVar24;
        _Init_thread_footer(&::_TSS6);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawAnimMeshWiredCVar = pTVar24;
        _Init_thread_footer(&::_TSS7);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawPointVelocitiesCVar = pTVar24;
        _Init_thread_footer(&::_TSS8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawAnimNormalsCVar = pTVar24;
        _Init_thread_footer(&::_TSS9);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawPointNormalsCVar = pTVar24;
        _Init_thread_footer(&::_TSS10);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawCollisionCVar = pTVar24;
        _Init_thread_footer(&::_TSS11);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBackstopsCVar = pTVar24;
        _Init_thread_footer(&::_TSS12);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBackstopDistancesCVar = pTVar24;
        _Init_thread_footer(&::_TSS13);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawMaxDistancesCVar = pTVar24;
        _Init_thread_footer(&::_TSS14);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawMaxDistanceValuesCVar = pTVar24;
        _Init_thread_footer(&::_TSS15);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawAnimDriveCVar = pTVar24;
        _Init_thread_footer(&_TSS16);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawEdgeConstraintCVar = pTVar24;
        _Init_thread_footer(&_TSS17);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawBendingConstraintCVar = pTVar24;
        _Init_thread_footer(&_TSS18);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) <
           _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawLongRangeConstraintCVar = pTVar24;
        _Init_thread_footer(&_TSS19);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawWindForcesCVar = pTVar24;
        _Init_thread_footer(&_TSS20);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawWindVelocityCVar = pTVar24;
        _Init_thread_footer(&_TSS21);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawSelfCollisionCVar = pTVar24;
        _Init_thread_footer(&_TSS22);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS23) && (_Init_thread_header(&_TSS23), _TSS23 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawSelfIntersectionCVar = pTVar24;
        _Init_thread_footer(&_TSS23);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawParticleIndicesCVar = pTVar24;
        _Init_thread_footer(&_TSS24);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawElementIndicesCVar = pTVar24;
        _Init_thread_footer(&_TSS25);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS26) && (_Init_thread_header(&_TSS26), _TSS26 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawClothClothConstraintsCVar = pTVar24;
        _Init_thread_footer(&_TSS26);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS27) && (_Init_thread_header(&_TSS27), _TSS27 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawTeleportResetCVar = pTVar24;
        _Init_thread_footer(&_TSS27);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                   0x9d4c) < _TSS28) && (_Init_thread_header(&_TSS28), _TSS28 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar30)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar24 = (TConsoleVariableData<bool> *)0x0;
        if (plVar23 != (longlong *)0x0) {
          pTVar24 = (TConsoleVariableData<bool> *)(**(code **)(*plVar23 + 0x60))(plVar23);
        }
        DebugDrawExtremlyDeformedEdgesCVar = pTVar24;
        _Init_thread_footer(&_TSS28);
      }
      pTVar24 = DebugDrawLocalSpaceCVar;
      lVar29 = 1;
      if (DebugDrawLocalSpaceCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawLocalSpace
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawBoundsCVar;
      if (DebugDrawBoundsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBounds
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawGravityCVar;
      if (DebugDrawGravityCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawGravity
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawPhysMeshWiredCVar;
      if (DebugDrawPhysMeshWiredCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPhysMeshWired
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawAnimMeshWiredCVar;
      if (DebugDrawAnimMeshWiredCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimMeshWired
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawPointVelocitiesCVar;
      if (DebugDrawPointVelocitiesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPointVelocities
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawAnimNormalsCVar;
      dVar9 = __real_4034000000000000;
      if (DebugDrawAnimNormalsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimNormals
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,dVar9);
        }
      }
      pTVar24 = DebugDrawPointNormalsCVar;
      if (DebugDrawPointNormalsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPointNormals
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,dVar9);
        }
      }
      pTVar24 = DebugDrawCollisionCVar;
      if (DebugDrawCollisionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawCollision
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,false);
        }
      }
      pTVar24 = DebugDrawBackstopsCVar;
      if (DebugDrawBackstopsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBackstops
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawBackstopDistancesCVar;
      if (DebugDrawBackstopDistancesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBackstopDistances
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawMaxDistancesCVar;
      if (DebugDrawMaxDistancesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawMaxDistances
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawMaxDistanceValuesCVar;
      if (DebugDrawMaxDistanceValuesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawMaxDistanceValues
                    ((this->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar24 = DebugDrawAnimDriveCVar;
      if (DebugDrawAnimDriveCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimDrive
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawEdgeConstraintCVar;
      if (DebugDrawEdgeConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawEdgeConstraint
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawBendingConstraintCVar;
      if (DebugDrawBendingConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBendingConstraint
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawLongRangeConstraintCVar;
      if (DebugDrawLongRangeConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawLongRangeConstraint
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawWindForcesCVar;
      if (DebugDrawWindForcesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawWindAndPressureForces
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,
                     __real_4024000000000000);
        }
      }
      pTVar24 = DebugDrawWindVelocityCVar;
      if (DebugDrawWindVelocityCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawWindVelocity
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,
                     __real_3fb999999999999a);
        }
      }
      pTVar24 = DebugDrawSelfCollisionCVar;
      if (DebugDrawSelfCollisionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawSelfCollision
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawSelfIntersectionCVar;
      if (DebugDrawSelfIntersectionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawSelfIntersection
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawParticleIndicesCVar;
      if (DebugDrawParticleIndicesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawParticleIndices
                    ((this->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar24 = DebugDrawElementIndicesCVar;
      if (DebugDrawElementIndicesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawElementIndices
                    ((this->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar24 = DebugDrawClothClothConstraintsCVar;
      if (DebugDrawClothClothConstraintsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawClothClothConstraints
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawTeleportResetCVar;
      if (DebugDrawTeleportResetCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 1;
        }
        if (pTVar24->ShadowedValue[lVar25] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawTeleportReset
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar24 = DebugDrawExtremlyDeformedEdgesCVar;
      if (DebugDrawExtremlyDeformedEdgesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar30 = IsInParallelGameThread();
        if ((bVar30) || (bVar30 = IsInGameThread(), bVar30)) {
          lVar29 = 0;
        }
        if (pTVar24->ShadowedValue[lVar29] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawExtremlyDeformedEdges
                    ((this->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Tick_GameThread @ 14dc5d320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::Tick_GameThread
          (FClothSimulationProxy *this,float param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  Type TVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickGame> FVar12;
  TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *this_00;
  TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  bool bVar17;
  TRefCountPtr<FBaseGraphTask> *pTVar18;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  longlong local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  this_01 = (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0;
  FVar16.Value = 0;
  FVar12 = StatPtr_STAT_ClothSimulationProxy_TickGame;
  if (StatPtr_STAT_ClothSimulationProxy_TickGame ==
      (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickGame>)0x0) {
    pFVar11 = ::FName::FName(local_res18,"STAT_ClothSimulationProxy_TickGame");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickGame>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSimulationProxy_TickGame,
                        *pFVar11,L"ClothSimulationProxy Tick Game","STATGROUP_ChaosClothAsset",
                        "STATCAT_Advanced",L"ChaosClothAsset",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar13 == 0)) {
LAB_14dc5d480:
    bVar7 = false;
    FVar15 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                   ,0x212);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc5d480;
    local_res8.s.LowPart = FVar14.Value;
    local_res8.s.HighPart = uVar13;
    local_60 = FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar7 = true;
    FVar16.Value = local_60.ComparisonIndex.Value;
  }
  PreProcess_GameThread(this,param_1,false);
  PreSimulate_GameThread(this,param_1);
  if (this->bIsSimulating) {
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
    if (this_00 != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
      this_01 = TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>::
                TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>
                          (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                    *)0x0);
    }
    *(FClothSimulationProxy **)(this_01->TaskStorage).Pad = this;
    (this_01->TaskStorage).Pad[8] = '\0';
    TVar10 = FClothSimulationProxyParallelTask::GetDesiredThread();
    Tasks::Private::TranslatePriority
              (TVar10,(ETaskPriority *)local_res18,(EExtendedTaskPriority *)&local_res8.QuadPart);
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)this_01,L"GraphTask",(ETaskPriority)local_res18[0].ComparisonIndex.Value
               ,local_res8.s.LowPart._0_1_,None);
    if (this_01 != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
      LOCK();
      *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
      UNLOCK();
    }
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0xe8);
    pTVar18 = &this->ParallelTask;
    if (pTVar18 == (TRefCountPtr<FBaseGraphTask> *)&local_68) {
      if (this_01 != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
        LOCK();
        plVar2 = &this_01->_padding_;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)this_01->_padding_)(this_01,1);
        }
      }
    }
    else {
      pFVar5 = pTVar18->Reference;
      pTVar18->Reference = (FBaseGraphTask *)this_01;
      if (pFVar5 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar5->field_0x30;
        iVar4 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
          bVar17 = true;
          goto LAB_14dc5d5ac;
        }
      }
    }
    bVar17 = true;
  }
  else {
    PostProcess_GameThread(this);
    bVar17 = this->bIsSimulating;
  }
LAB_14dc5d5ac:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_50[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_50[0].NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,local_50);
      piVar3 = &this_02->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return bVar17;
}

// UpdateClothLODs @ 14dc5de30

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::UpdateClothLODs(FClothSimulationProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  if ((this->ParallelInitializationTask).Reference != (FBaseGraphTask *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValidRef(ParallelInitializationTask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                       ,0x2e9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!this->bIsPreProcessed) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsPreProcessed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                       ,0x2ea,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = (this->Cloths).AllocatorInstance.Data;
  bVar4 = false;
  iVar2 = (this->Cloths).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if ((longlong *)**(longlong **)pFVar9 != (longlong *)0x0) {
      iVar7 = (**(code **)(*(longlong *)**(longlong **)pFVar9 + 0x10))();
      pTVar8 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                       *)(*(longlong *)pFVar9 + 0x100),(this->Solver).Ptr);
      if (pTVar8 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iVar7 != *(int *)&pTVar8->field_0x8) {
        cVar6 = (**(code **)((longlong)*this->ClothComponentAdapter + 0x30))();
        if (cVar6 == '\0') {
          *(undefined1 *)(*(longlong *)pFVar9 + 0x44) = 1;
        }
        bVar4 = true;
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  if (bVar4) {
    ::Chaos::FClothingSimulationSolver::Update((this->Solver).Ptr,0.0);
    return;
  }
  return;
}

// WaitForParallelInitialization_GameThread @ 14dc5eb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::WaitForParallelInitialization_GameThread
          (FClothSimulationProxy *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTaskGraphInterface *this_00;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                         ,0x10a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->ParallelInitializationTask).Reference != (FBaseGraphTask *)0x0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId270,"ClothSimulationProxy_CompleteInitialization",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                 ,0x10e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId270);
    }
    if (__CsvProfilerStat271 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Cloth");
      __CsvProfilerStat271 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/Cloth","CsvEventWait/Cloth","CsvEventWait/Cloth (Non-CP)");
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (this_00,&this->ParallelInitializationTask,GameThread);
    pFVar3 = (this->ParallelInitializationTask).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      (this->ParallelInitializationTask).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    FCsvProfiler::EndSetWaitStat();
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// WriteSimulationData @ 14dc5ed70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationProxy::WriteSimulationData(FClothSimulationProxy *this)

{
  ForElementType<int> FVar1;
  undefined8 uVar2;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  longlong *plVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  TStatId TVar27;
  FName *pFVar28;
  USkinnedMeshComponent *pUVar29;
  UObject *pUVar30;
  USkinnedAsset *pUVar31;
  TTransform<double> *pTVar32;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar33;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar34;
  uint uVar35;
  ForElementType<int> FVar36;
  ulonglong uVar37;
  undefined1 *puVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  FScriptContainerElement *pFVar41;
  longlong lVar42;
  FClothSimulData *pFVar43;
  ulonglong uVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
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
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  double dVar85;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined4 uVar107;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  double dVar119;
  uint uVar124;
  uint uVar126;
  undefined1 auVar120 [16];
  double dVar125;
  undefined4 uVar127;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  double dVar137;
  double dVar144;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  uint uVar145;
  uint uVar148;
  uint uVar149;
  uint uVar150;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auStackY_5a8 [32];
  char local_548;
  undefined1 local_540;
  undefined1 local_53f;
  undefined1 local_53e [2];
  uint local_53c;
  USkinnedMeshComponent *local_538;
  uint local_530;
  uint local_52c;
  FCycleCounter local_528;
  FCycleCounter local_518;
  double local_508;
  int local_500 [2];
  uint local_4f8 [2];
  uint local_4f0;
  uint local_4ec;
  longlong *local_4e8;
  double local_4e0;
  FClothSimulationProxy *local_4d8;
  ForElementType<int> local_4d0;
  FClothingSimulationSolver *local_4c8;
  FScriptContainerElement *local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FName local_4a0;
  FName local_498;
  ForElementType<int> local_490;
  FString local_488;
  UObject *local_478;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FSourceLocation local_428;
  FSourceLocation local_408;
  undefined1 local_3e8 [12];
  uint local_3dc;
  longlong local_3d8;
  uint local_3d0;
  int local_3cc;
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  *local_3c0;
  bool local_3b0;
  double local_3a8;
  double dStack_3a0;
  uint local_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  undefined8 local_388;
  undefined8 local_37c;
  FName local_370 [2];
  double local_360;
  double dStack_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_300 [16];
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined1 local_2a0 [16];
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_270;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_260;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_1e8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  bVar15 = false;
  bVar14 = false;
  bVar11 = false;
  bVar10 = false;
  local_4d8 = this;
  if (((this->ParallelInitializationTask).Reference != (FBaseGraphTask *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsValidRef(ParallelInitializationTask)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                          ,0x30b,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((!this->bIsPreProcessed) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsPreProcessed",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                          ,0x30c,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (__CsvProfilerStat782 == false) {
    FCsvProfilerTrace::OutputInlineStat("Cloth",_GCsvCategory_Animation.Index);
    __CsvProfilerStat782 = true;
  }
  uVar24 = _GCsvCategory_Animation.Index;
  local_52c = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("Cloth",_GCsvCategory_Animation.Index,"CSV_Cloth");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId783,"FClothSimulationProxy_WriteSimulationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0x30f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId783);
  }
  TVar27 = FThreadSafeStaticStatInner<FStat_STAT_ClothSimulationProxy_WriteSimulationData,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ClothSimulationProxy_WriteSimulationData,1>
                      *)&StatPtr_STAT_ClothSimulationProxy_WriteSimulationData);
  local_428.Impl._Line = 0x310;
  local_428.Impl._Column = 3;
  local_428.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
  ;
  local_518.StatId.ComparisonIndex.Value = 0;
  local_518.StatId.Number = 0;
  local_518.EmittedEvent = 0;
  local_428.Impl._Function =
       "void __cdecl UE::Chaos::ClothAsset::FClothSimulationProxy::WriteSimulationData(void)";
  FCycleCounter::Start
            (&local_518,*(TStatIdData **)&(TVar27.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_428);
  TVar27.StatIdPtr = (TStatIdData *)StatPtr_STAT_ClothWriteback;
  if (StatPtr_STAT_ClothWriteback == (FThreadSafeStaticStat<FStat_STAT_ClothWriteback>)0x0) {
    pFVar28 = ::FName::FName(local_370,"STAT_ClothWriteback");
    TVar27.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothWriteback,*pFVar28,
                    L"Cloth Writeback","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  local_528.StatId.ComparisonIndex.Value = 0;
  local_528.StatId.Number = 0;
  local_528.EmittedEvent = 0;
  local_408.Impl._Line = 0x311;
  local_408.Impl._Column = 3;
  local_408.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
  ;
  local_408.Impl._Function =
       "void __cdecl UE::Chaos::ClothAsset::FClothSimulationProxy::WriteSimulationData(void)";
  FCycleCounter::Start(&local_528,TVar27,CycleStat|ClearEveryFrame,false,&local_408);
  pUVar29 = (USkinnedMeshComponent *)(**(code **)*this->ClothComponentAdapter)();
  local_538 = pUVar29;
  pUVar30 = FWeakObjectPtr::Get(&(pUVar29->LeaderPoseComponent).WeakPtr);
  local_478 = pUVar30;
  if ((pUVar30 == (UObject *)0x0) || ((pUVar29->LeaderBoneMap).ArrayNum != 0)) {
    uVar24 = (this->Cloths).ArrayNum;
    local_1e8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0x10;
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    if (0x10 < (int)uVar24) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,uVar24,&local_1e8.AllocatorInstance,0,&local_1e8.ArrayMax);
    }
    pFVar41 = (this->Cloths).AllocatorInstance.Data;
    iVar25 = (this->Cloths).ArrayNum;
    pFVar40 = pFVar41 + (longlong)iVar25 * 8;
    while( true ) {
      if ((this->Cloths).ArrayNum != iVar25) {
        local_540 = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_540);
      }
      if (pFVar41 == pFVar40) break;
      this_00 = *(FClothingSimulationCloth **)pFVar41;
      if (((this_00 != (FClothingSimulationCloth *)0x0) &&
          (this_00->Mesh != (FClothingSimulationMesh *)0x0)) &&
         ((iVar23 = ::Chaos::FClothingSimulationCloth::GetParticleRangeId
                              (this_00,(this->Solver).Ptr), iVar23 != -1 &&
          (uVar24 = ::Chaos::FClothingSimulationCloth::GetLODIndex
                              (*(FClothingSimulationCloth **)pFVar41,(this->Solver).Ptr),
          uVar24 != 0xffffffff)))) {
        local_500[0] = *(int *)(*(longlong *)pFVar41 + 0x20);
        TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<int>
                  (&local_1e8,local_500);
      }
      pFVar41 = pFVar41 + 8;
    }
    if (local_1e8.ArrayNum == 0) {
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
               *)&this->CurrentSimulationData);
    }
    else {
      TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
      ::TIterator::TIterator
                ((TIterator *)local_3e8,
                 (TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                  *)&this->CurrentSimulationData,false);
      if (local_3cc < *(int *)(local_3d8 + 0x18)) {
        do {
          FVar36 = (ForElementType<int>)&local_1e8;
          if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar36 = local_1e8.AllocatorInstance.SecondaryData;
          }
          FVar1 = (ForElementType<int>)((longlong)FVar36 + (longlong)local_1e8.ArrayNum * 4);
          if (FVar36 != FVar1) {
            do {
              if (*(uint *)FVar36 ==
                  *(uint *)((longlong)local_3cc * 0x110 + *(longlong *)local_3e8._0_8_))
              goto LAB_14dc5f1d0;
              FVar36 = (ForElementType<int>)((longlong)FVar36 + 4);
            } while (FVar36 != FVar1);
          }
          TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(local_3c0,local_3cc);
          local_3b0 = true;
LAB_14dc5f1d0:
          local_3d0 = local_3d0 & ~local_3dc;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3e8 + 8));
        } while (local_3cc < *(int *)(local_3d8 + 0x18));
      }
      TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
      ::TIterator::~TIterator((TIterator *)local_3e8);
      local_4c8 = (this->Solver).Ptr;
      dVar128 = local_4c8->LocalSpaceScale;
      if (pUVar30 == (UObject *)0x0) {
        local_4e8 = &pUVar29->_padding_ + (longlong)pUVar29->CurrentReadComponentTransforms * 2;
      }
      else {
        local_4e8 = (longlong *)
                    (&pUVar30->field_0x0 + (longlong)*(int *)&pUVar30[0x28].field_0x20 * 0x10);
      }
      uVar37 = (ulonglong)local_1e8.ArrayNum;
      local_4e0 = __real_3ff0000000000000;
      local_4ec = local_1e8.ArrayNum;
      local_490 = (ForElementType<int>)&local_1e8;
      if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        local_490 = local_1e8.AllocatorInstance.SecondaryData;
      }
      local_398 = (uint)__xmm_80000000000000008000000000000000;
      uStack_394 = __xmm_80000000000000008000000000000000._4_4_;
      uStack_390 = _UNK_15066df78;
      uStack_38c = _UNK_15066df7c;
      FVar36 = (ForElementType<int>)&local_1e8;
      if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar36 = local_1e8.AllocatorInstance.SecondaryData;
      }
      local_3a8 = ___xmm_3ff00000000000003ff0000000000000;
      dStack_3a0 = _UNK_150689688;
      local_490 = (ForElementType<int>)((longlong)local_490 + uVar37 * 4);
      uVar44 = uVar37;
      dVar74 = __real_3ff0000000000000;
      uVar24 = (uint)__xmm_80000000000000008000000000000000;
      uVar45 = __xmm_80000000000000008000000000000000._4_4_;
      uVar124 = _UNK_15066df78;
      uVar126 = _UNK_15066df7c;
      uVar145 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar148 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar149 = _UNK_15061cc88;
      uVar150 = _UNK_15061cc8c;
      dVar85 = ___xmm_3ff00000000000003ff0000000000000;
      dVar119 = _UNK_150689688;
      local_508 = dVar128;
      bVar22 = bVar10;
      bVar12 = bVar11;
      bVar13 = bVar14;
      bVar16 = bVar15;
      while( true ) {
        FVar1 = local_490;
        local_4d0 = FVar36;
        if ((int)uVar37 != (int)uVar44) {
          local_53f = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_53f)
          ;
        }
        if (FVar36 == FVar1) break;
        bVar20 = false;
        local_53c = *(uint *)FVar36;
        uVar39 = 0xffffffff;
        local_248 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dStack_240 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        bVar19 = false;
        local_530 = 0xffffffff;
        local_238 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dStack_230 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_218 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_210 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_228._8_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_228._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_208._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_208._8_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_1f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_4f8[0] = local_53c;
        iVar25 = TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<int>
                           ((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                             *)&this->CurrentSimulationData,local_53c,(int *)local_4f8);
        if (iVar25 == -1) {
          pFVar43 = (FClothSimulData *)0x0;
        }
        else {
          lVar42 = (longlong)iVar25 * 0x110 + *(longlong *)&this->CurrentSimulationData;
          pFVar43 = (FClothSimulData *)(lVar42 + 0x10);
          if (lVar42 == 0) {
            pFVar43 = (FClothSimulData *)0x0;
          }
          if (pFVar43 != (FClothSimulData *)0x0) {
            (pFVar43->Positions).ArrayNum = 0;
            if ((pFVar43->Positions).ArrayMax < 0) {
              Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)pFVar43,0,&(pFVar43->Positions).ArrayMax);
            }
            (pFVar43->Normals).ArrayNum = 0;
            if ((pFVar43->Normals).ArrayMax < 0) {
              Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (0xc,4,0,&(pFVar43->Normals).AllocatorInstance,0,
                         &(pFVar43->Normals).ArrayMax);
            }
            pFVar43->LODIndex = -1;
          }
        }
        local_4f0 = (this->Cloths).ArrayNum;
        uVar37 = (ulonglong)(int)local_4f0;
        pFVar41 = (this->Cloths).AllocatorInstance.Data;
        pFVar40 = pFVar41 + uVar37 * 8;
        local_4c0 = pFVar40;
LAB_14dc5f411:
        if ((this->Cloths).ArrayNum != (int)uVar37) {
          local_53e[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_53e);
        }
        if (pFVar41 == pFVar40) goto LAB_14dc5fb04;
        if ((*(FClothingSimulationCloth **)pFVar41)->GroupId != local_53c) goto LAB_14dc5f973;
        uVar26 = ::Chaos::FClothingSimulationCloth::GetReferenceBoneIndex
                           (*(FClothingSimulationCloth **)pFVar41);
        if (local_478 != (UObject *)0x0) {
          uVar35 = 0;
          if ((int)uVar26 < (local_538->LeaderBoneMap).ArrayNum) {
            uVar35 = ~uVar26 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar26 = *(uint *)((local_538->LeaderBoneMap).AllocatorInstance.Data +
                            (longlong)(int)uVar26 * 4);
        }
        plVar17 = local_4e8;
        if (bVar20) {
          if (uVar26 != uVar39) {
            if ((2 < (byte)LogChaosClothAsset._0_1_) && (this->bHasNonMatchingReferenceBones)) {
              pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(local_538);
              if (pUVar31 == (USkinnedAsset *)0x0) {
                bVar22 = true;
                local_4b0 = (FName)local_538->_padding_;
                ::FName::ToString(&local_4b0,&local_470);
                bVar11 = bVar12;
              }
              else {
                pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(local_538);
                bVar11 = true;
                local_4b8.ComparisonIndex.Value = *(uint *)&pUVar31->field_0x18;
                local_4b8.Number = *(uint *)&pUVar31->field_0x1c;
                ::FName::ToString(&local_4b8,&local_460);
              }
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
              if ((bVar22) &&
                 (bVar22 = false,
                 local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_470.Data.AllocatorInstance.Data);
              }
              bVar10 = bVar22;
              bVar12 = bVar11;
              bVar14 = bVar13;
              bVar15 = bVar16;
              if ((bVar11) &&
                 (bVar11 = false, bVar12 = bVar11,
                 local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_460.Data.AllocatorInstance.Data);
              }
            }
            this->bHasNonMatchingReferenceBones = true;
            cVar21 = '\x01';
            bVar20 = false;
            goto LAB_14dc607ce;
          }
LAB_14dc5f811:
          pTVar34 = ::Chaos::FClothingSimulationCloth::GetParticlePositions
                              (*(FClothingSimulationCloth **)pFVar41,&local_270,(this->Solver).Ptr);
          iVar25 = pTVar34->ArrayNum;
          if (iVar25 < 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar20) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
LAB_14dc5f861:
            iVar23 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                               (0xc,4,iVar25,(ForAnyElementType *)pFVar43,
                                &(pFVar43->Positions).ArrayNum,&(pFVar43->Positions).ArrayMax);
            ConstructItems<UE::Math::TVector<float>,Chaos::TVector<float,3>,int>
                      ((pFVar43->Positions).AllocatorInstance.Data + (longlong)iVar23 * 0xc,
                       pTVar34->DataPtr,iVar25);
          }
          else if (iVar25 != 0) goto LAB_14dc5f861;
          pTVar34 = ::Chaos::FClothingSimulationCloth::GetParticleNormals
                              (*(FClothingSimulationCloth **)pFVar41,&local_260,(this->Solver).Ptr);
          iVar25 = pTVar34->ArrayNum;
          if (iVar25 < 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar20) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
LAB_14dc5f8f1:
            iVar23 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                               (0xc,4,iVar25,&(pFVar43->Normals).AllocatorInstance,
                                &(pFVar43->Normals).ArrayNum,&(pFVar43->Normals).ArrayMax);
            ConstructItems<UE::Math::TVector<float>,Chaos::TVector<float,3>,int>
                      ((pFVar43->Normals).AllocatorInstance.Data + (longlong)iVar23 * 0xc,
                       pTVar34->DataPtr,iVar25);
          }
          else if (iVar25 != 0) goto LAB_14dc5f8f1;
          if (((pFVar43->Positions).ArrayNum != (pFVar43->Normals).ArrayNum) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Data->Positions.Num() == Data->Normals.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                  ,0x392,L""), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar20 = true;
          bVar19 = true;
          pFVar40 = local_4c0;
          uVar39 = local_530;
LAB_14dc5f973:
          uVar37 = (ulonglong)local_4f0;
          pFVar41 = pFVar41 + 8;
          goto LAB_14dc5f411;
        }
        local_530 = uVar26;
        if ((-1 < (int)uVar26) && ((int)uVar26 < *(int *)(local_4e8 + 0xc4))) {
          if (((int)uVar26 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar40 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                     (plVar17 + 0xc3))->AllocatorInstance).Data;
          lVar42 = (longlong)(int)uVar26 * 0x60;
          local_198.Rotation.XY.m128d_f64[0] = *(double *)(pFVar40 + lVar42);
          local_198.Rotation.XY.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 8);
          local_198.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x10);
          local_198.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x10 + 8);
          local_198.Translation.XY.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x20);
          local_198.Translation.XY.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x20 + 8);
          local_198.Translation.ZW.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x30);
          local_198.Translation.ZW.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x30 + 8);
          local_198.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x40);
          local_198.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x40 + 8);
          local_198.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar40 + lVar42 + 0x50);
          local_198.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar40 + lVar42 + 0x50 + 8);
          UE::Math::TTransform<double>::Multiply
                    (&local_198,&local_198,&((this->ClothSimulationContext).Ptr)->ComponentTransform
                    );
          local_198.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_360 = dVar85;
          dStack_358 = dVar119;
          local_350 = dVar74;
          local_198.Scale3D.XY.m128d_f64[0] = dVar85;
          local_198.Scale3D.XY.m128d_f64[1] = dVar119;
          local_198.Scale3D.ZW.m128d_f64[0] = dVar74;
          if (pFVar43 == (FClothSimulData *)0x0) {
            pFVar43 = TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                      ::Emplace<int_const_&>
                                ((TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                                  *)&this->CurrentSimulationData,(int *)&local_53c);
          }
          (pFVar43->Transform).Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
          (pFVar43->Transform).Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
          (pFVar43->Transform).Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
          (pFVar43->Transform).Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
          (pFVar43->Transform).Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
          (pFVar43->Transform).Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
          (pFVar43->Transform).Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
          (pFVar43->Transform).Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
          (pFVar43->Transform).Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
          (pFVar43->Transform).Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
          (pFVar43->Transform).Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
          pTVar32 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_198,&local_138,
                               &((this->ClothSimulationContext).Ptr)->ComponentTransform);
          dVar125 = (pTVar32->Rotation).XY.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
               (pTVar32->Rotation).XY.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Rotation).ZW.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
               (pTVar32->Rotation).ZW.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Translation).XY.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
               (pTVar32->Translation).XY.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Translation).ZW.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
               (pTVar32->Translation).ZW.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Scale3D).XY.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
               (pTVar32->Scale3D).XY.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar125;
          dVar125 = (pTVar32->Scale3D).ZW.m128d_f64[1];
          (pFVar43->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] =
               (pTVar32->Scale3D).ZW.m128d_f64[0];
          (pFVar43->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar125;
          iVar25 = (**(code **)(*(longlong *)**(undefined8 **)pFVar41 + 0x10))();
          pTVar33 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                            *)(*(longlong *)pFVar41 + 0x100),(this->Solver).Ptr);
          if ((pTVar33 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((iVar25 != *(int *)&pTVar33->field_0x8) &&
             (bVar20 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2610671844826545276>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                  ,900,"LODIndex == Cloth->GetLODIndex(Solver.Get())"), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar25 = (**(code **)(*(longlong *)**(undefined8 **)pFVar41 + 0x20))
                             ((longlong *)**(undefined8 **)pFVar41,iVar25);
          pFVar43->LODIndex = iVar25;
          lVar42 = *(longlong *)pFVar41;
          local_248 = *(double *)(lVar42 + 0x60);
          dStack_240 = *(double *)(lVar42 + 0x68);
          local_238 = *(double *)(lVar42 + 0x70);
          dStack_230 = *(double *)(lVar42 + 0x78);
          local_208 = *(undefined1 (*) [16])(lVar42 + 0xa0);
          local_1f8 = *(double *)(lVar42 + 0xb0);
          dStack_1f0 = *(double *)(lVar42 + 0xb8);
          uVar2 = *(undefined8 *)&(local_4c8->LocalSpaceLocation).field_0x10;
          local_348._0_8_ =
               (double)CONCAT44(*(uint *)&(local_4c8->LocalSpaceLocation).field_0x4 ^ uVar45,
                                *(uint *)&local_4c8->LocalSpaceLocation ^ uVar24);
          local_348._8_4_ = *(uint *)&(local_4c8->LocalSpaceLocation).field_0x8 ^ uVar124;
          local_348._12_4_ = *(uint *)&(local_4c8->LocalSpaceLocation).field_0xc ^ uVar126;
          local_338 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar45,
                                       (uint)uVar2 ^ uVar24);
          dVar125 = *(double *)(lVar42 + 0x88) + local_348._8_8_;
          local_228._8_4_ = SUB84(dVar125,0);
          local_228._0_8_ = *(double *)(lVar42 + 0x80) + local_348._0_8_;
          local_228._12_4_ = (int)((ulonglong)dVar125 >> 0x20);
          local_218 = *(double *)(lVar42 + 0x90) + local_338;
          dStack_210 = *(double *)(lVar42 + 0x98) + 0.0;
          goto LAB_14dc5f811;
        }
        if ((2 < (byte)LogChaosClothAsset._0_1_) && (!this->bHasInvalidReferenceBoneTransforms)) {
          pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(local_538);
          if (pUVar31 == (USkinnedAsset *)0x0) {
            bVar13 = true;
            local_4a0 = (FName)local_538->_padding_;
            ::FName::ToString(&local_4a0,&local_488);
            bVar15 = bVar16;
          }
          else {
            pUVar31 = USkinnedMeshComponent::GetSkinnedAsset(local_538);
            bVar15 = true;
            local_4a8.ComparisonIndex.Value = *(uint *)&pUVar31->field_0x18;
            local_4a8.Number = *(uint *)&pUVar31->field_0x1c;
            ::FName::ToString(&local_4a8,&local_450);
          }
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
          if ((bVar13) &&
             (bVar13 = false,
             local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          bVar10 = bVar22;
          bVar11 = bVar12;
          bVar14 = bVar13;
          bVar16 = bVar15;
          if ((bVar15) &&
             (bVar15 = false, bVar16 = bVar15,
             local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_450.Data.AllocatorInstance.Data);
          }
        }
        this->bHasInvalidReferenceBoneTransforms = true;
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                 *)&this->CurrentSimulationData);
        bVar20 = false;
        bVar19 = false;
LAB_14dc5fb04:
        cVar21 = '\x01';
        local_548 = '\x01';
        if ((bVar20) && (pFVar43 != (FClothSimulData *)0x0)) {
          if (bTransformClothSimulData_ISPC_Enabled != false) {
            if (bSimulationDataCheckFinite == false) {
              TransformClothSimulData
                        ((pFVar43->Positions).AllocatorInstance.Data,
                         (pFVar43->Normals).AllocatorInstance.Data,&local_248);
            }
            else {
              cVar21 = TransformClothSimulDataAndCheckFinite();
            }
            goto LAB_14dc607ce;
          }
          iVar25 = (pFVar43->Positions).ArrayNum;
          uVar39 = 0;
          if (bSimulationDataCheckFinite != false) {
            if (0 < iVar25) {
              cVar21 = '\x01';
              uVar26 = 0;
              lVar42 = 0;
              do {
                uVar45 = ~uVar39 >> 0x1f;
                uVar24 = uVar26;
                if ((int)uVar39 < iVar25) {
                  uVar24 = uVar45;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
                dVar74 = local_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar85 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                auVar71._8_4_ = SUB84(dVar85,0);
                auVar71._0_8_ = dVar74;
                auVar71._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
                auVar86._0_8_ =
                     local_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                auVar86._8_8_ =
                     dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                dStack_328 = (double)*(float *)(pFVar40 + lVar42 + 4) * dVar128;
                local_330 = (double)*(float *)(pFVar40 + lVar42) * dVar128;
                auVar72 = blendpd(auVar71,auVar86,2);
                local_320 = (double)*(float *)(pFVar40 + lVar42 + 8) * dVar128;
                dVar137 = local_330 - (double)local_228._0_8_;
                dVar144 = dStack_328 - (double)local_228._8_8_;
                dVar128 = local_320 - local_218;
                auVar129._8_4_ = SUB84(dVar144,0);
                auVar129._0_8_ = dVar137;
                uVar107 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar129._12_4_ = uVar107;
                auVar61._8_4_ = SUB84(dVar144,0);
                auVar61._0_8_ = dVar137;
                auVar61._12_4_ = uVar107;
                auVar62._8_8_ = 0;
                auVar62._0_8_ = dVar128;
                auVar62 = blendpd(auVar61,auVar62,2);
                auVar111._8_4_ = SUB84(auVar86._0_8_,0);
                auVar111._0_8_ = dVar85;
                auVar111._12_4_ = (int)((ulonglong)auVar86._0_8_ >> 0x20);
                auVar130._0_8_ = auVar129._8_8_ * dVar74 - dVar85 * dVar137;
                auVar130._8_8_ = dVar128 * dVar85 - auVar111._8_8_ * dVar144;
                auVar120._8_4_ = SUB84(auVar130._8_8_,0);
                auVar120._0_8_ = auVar130._0_8_;
                auVar120._12_4_ = (int)((ulonglong)auVar130._8_8_ >> 0x20);
                auVar63._0_8_ = auVar62._0_8_ * auVar86._0_8_ - auVar72._0_8_ * dVar128;
                auVar63._8_8_ = auVar62._8_8_ * auVar86._8_8_ - auVar72._8_8_ * 0.0;
                dVar119 = auVar120._8_8_ + auVar120._8_8_;
                dVar125 = auVar63._0_8_ + auVar63._0_8_;
                auVar62 = blendpd(auVar130,auVar63,2);
                uVar107 = SUB84(dVar125,0);
                auVar109._8_4_ = uVar107;
                auVar109._0_8_ = dVar119;
                uVar127 = (undefined4)((ulonglong)dVar125 >> 0x20);
                auVar109._12_4_ = uVar127;
                auVar49._8_4_ = uVar107;
                auVar49._0_8_ = dVar119;
                auVar49._12_4_ = uVar127;
                auVar99._8_4_ = uVar107;
                auVar99._0_8_ = dVar119;
                auVar99._12_4_ = uVar127;
                auVar131._0_8_ = auVar62._0_8_ + auVar62._0_8_;
                auVar131._8_8_ = auVar62._8_8_ + auVar62._8_8_;
                auVar110._0_8_ = auVar109._8_8_ * dVar74 - dVar119 * dVar85;
                auVar110._8_8_ = auVar131._0_8_ * dVar85 - auVar49._8_8_ * auVar86._0_8_;
                auVar75._0_8_ =
                     (double)CONCAT44(local_208._4_4_ & uVar148,local_208._0_4_ & uVar145);
                auVar75._8_4_ = local_208._8_4_ & uVar149;
                auVar75._12_4_ = local_208._12_4_ & uVar150;
                auVar50._8_4_ = SUB84(auVar131._8_8_,0);
                auVar50._0_8_ = auVar131._0_8_;
                auVar50._12_4_ = (int)((ulonglong)auVar131._8_8_ >> 0x20);
                auVar62 = blendpd(auVar99,auVar131,2);
                auVar6._4_8_ = auVar86._8_8_;
                auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                auVar87._0_8_ = auVar6._0_8_ << 0x20;
                auVar87._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                auVar87._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                auVar100._0_8_ = auVar62._0_8_ * auVar86._0_8_ - auVar131._0_8_ * auVar72._0_8_;
                auVar100._8_8_ = auVar62._8_8_ * auVar86._8_8_ - auVar50._8_8_ * auVar72._8_8_;
                auVar88._8_8_ = auVar87._8_8_;
                auVar88._0_8_ = local_1f8;
                lVar46 = -(ulonglong)
                          (auVar75._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                lVar48 = -(ulonglong)
                          (auVar75._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                local_208);
                lVar47 = -(ulonglong)
                          ((double)CONCAT44((uint)((ulonglong)local_1f8 >> 0x20) & uVar148,
                                            SUB84(local_1f8,0) & uVar145) <=
                          (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                auVar76._0_8_ =
                     (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                      ~(uint)lVar46 & auVar62._0_4_);
                auVar76._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
                auVar76._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
                auVar72._8_4_ = SUB84(auVar110._8_8_,0);
                auVar72._0_8_ = auVar110._0_8_;
                auVar72._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
                local_318 = auVar76._0_8_ * (dVar119 * auVar86._8_8_ + dVar137 + auVar72._8_8_);
                dStack_310 = auVar76._8_8_ * (dVar125 * auVar86._8_8_ + dVar144 + auVar100._0_8_);
                auVar111 = blendpd(auVar110,auVar100,2);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar88);
                uVar24 = uVar26;
                if ((int)uVar39 < (pFVar43->Positions).ArrayNum) {
                  uVar24 = uVar45;
                }
                fVar98 = (float)local_318;
                local_308 = (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                             ~(uint)lVar47 & auVar62._0_4_) *
                            (auVar131._0_8_ * auVar86._8_8_ + dVar128 + auVar111._0_8_);
                fVar108 = (float)dStack_310;
                fVar118 = (float)local_308;
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
                *(float *)(pFVar40 + lVar42) = fVar98;
                *(float *)(pFVar40 + lVar42 + 4) = fVar108;
                *(float *)(pFVar40 + lVar42 + 8) = fVar118;
                uVar24 = uVar26;
                if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                  uVar24 = uVar45;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
                dVar119 = local_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar125 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                auVar121._0_8_ =
                     local_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                auVar121._8_8_ =
                     dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                dVar85 = (double)(float)(*(uint *)(pFVar40 + lVar42) ^
                                        __xmm_80000000800000008000000080000000);
                auVar89._8_4_ = SUB84(dVar125,0);
                auVar89._0_8_ = dVar119;
                uVar107 = (undefined4)((ulonglong)dVar125 >> 0x20);
                auVar89._12_4_ = uVar107;
                dVar128 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 4) ^
                                         __xmm_80000000800000008000000080000000);
                auVar77._8_4_ = SUB84(dVar125,0);
                auVar77._0_8_ = dVar119;
                auVar77._12_4_ = uVar107;
                local_2f0 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 8) ^
                                           __xmm_80000000800000008000000080000000);
                uVar107 = SUB84(dVar128,0);
                uVar127 = (undefined4)((ulonglong)dVar128 >> 0x20);
                auVar146._8_8_ = 0;
                auVar146._0_8_ = local_2f0;
                auVar138._8_4_ = uVar107;
                auVar138._0_8_ = dVar85;
                auVar138._12_4_ = uVar127;
                auVar51._8_4_ = uVar107;
                auVar51._0_8_ = dVar85;
                auVar51._12_4_ = uVar127;
                auVar64._8_4_ = uVar107;
                auVar64._0_8_ = dVar85;
                auVar64._12_4_ = uVar127;
                auVar139._0_8_ = auVar138._8_8_ * dVar119 - dVar85 * auVar77._8_8_;
                auVar139._8_8_ = local_2f0 * dVar125 - auVar51._8_8_ * auVar121._0_8_;
                auVar111 = blendpd(auVar89,auVar121,2);
                dVar74 = auVar111._8_8_;
                auVar62 = blendpd(auVar64,auVar146,2);
                auVar132._8_4_ = SUB84(auVar139._8_8_,0);
                auVar132._0_8_ = auVar139._0_8_;
                auVar132._12_4_ = (int)((ulonglong)auVar139._8_8_ >> 0x20);
                local_300._8_4_ = uVar107;
                local_300._0_8_ = dVar85;
                local_300._12_4_ = uVar127;
                auVar65._0_8_ = auVar62._0_8_ * auVar121._0_8_ - auVar111._0_8_ * local_2f0;
                auVar65._8_8_ = auVar62._8_8_ * auVar121._8_8_ - dVar74 * 0.0;
                dVar137 = auVar132._8_8_ + auVar132._8_8_;
                dVar144 = auVar65._0_8_ + auVar65._0_8_;
                auVar62 = blendpd(auVar139,auVar65,2);
                uVar107 = SUB84(dVar144,0);
                auVar112._8_4_ = uVar107;
                auVar112._0_8_ = dVar137;
                uVar127 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar112._12_4_ = uVar127;
                auVar52._8_4_ = uVar107;
                auVar52._0_8_ = dVar137;
                auVar52._12_4_ = uVar127;
                auVar78._0_8_ =
                     (double)CONCAT44(local_208._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                                      ,local_208._0_4_ &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                auVar78._8_4_ = local_208._8_4_ & _UNK_15061cc88;
                auVar78._12_4_ = local_208._12_4_ & _UNK_15061cc8c;
                auVar140._0_8_ = auVar62._0_8_ + auVar62._0_8_;
                auVar140._8_8_ = auVar62._8_8_ + auVar62._8_8_;
                auVar101._8_4_ = uVar107;
                auVar101._0_8_ = dVar137;
                auVar101._12_4_ = uVar127;
                auVar113._0_8_ = auVar112._8_8_ * dVar119 - dVar137 * auVar77._8_8_;
                auVar113._8_8_ = auVar140._0_8_ * dVar125 - auVar52._8_8_ * auVar121._0_8_;
                auVar62 = blendpd(auVar101,auVar140,2);
                auVar53._8_4_ = SUB84(auVar140._8_8_,0);
                auVar53._0_8_ = auVar140._0_8_;
                auVar53._12_4_ = (int)((ulonglong)auVar140._8_8_ >> 0x20);
                auVar7._4_8_ = dVar74;
                auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                auVar90._0_8_ = auVar7._0_8_ << 0x20;
                auVar90._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                auVar90._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                auVar102._0_8_ = auVar62._0_8_ * auVar121._0_8_ - auVar140._0_8_ * auVar111._0_8_;
                auVar102._8_8_ = auVar62._8_8_ * auVar121._8_8_ - auVar53._8_8_ * dVar74;
                auVar91._8_8_ = auVar90._8_8_;
                auVar91._0_8_ = local_1f8;
                lVar46 = -(ulonglong)
                          (auVar78._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                lVar48 = -(ulonglong)
                          (auVar78._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                local_208);
                lVar47 = -(ulonglong)
                          ((double)CONCAT44((uint)((ulonglong)local_1f8 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(local_1f8,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                          (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                auVar79._0_8_ =
                     (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                      ~(uint)lVar46 & auVar62._0_4_);
                auVar79._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
                auVar79._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
                auVar54._8_4_ = SUB84(auVar113._8_8_,0);
                auVar54._0_8_ = auVar113._0_8_;
                auVar54._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
                local_2e8 = auVar79._0_8_ * (dVar137 * auVar121._8_8_ + dVar85 + auVar54._8_8_);
                dStack_2e0 = auVar79._8_8_ * (dVar144 * auVar121._8_8_ + dVar128 + auVar102._0_8_);
                auVar111 = blendpd(auVar113,auVar102,2);
                auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar91);
                uVar24 = uVar26;
                if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                  uVar24 = ~uVar39 >> 0x1f;
                }
                fVar98 = (float)local_2e8;
                local_2d8 = (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                             ~(uint)lVar47 & auVar62._0_4_) *
                            (auVar140._0_8_ * auVar121._8_8_ + local_2f0 + auVar111._0_8_);
                fVar108 = (float)dStack_2e0;
                fVar118 = (float)local_2d8;
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
                *(float *)(pFVar40 + lVar42) = fVar98;
                *(float *)(pFVar40 + lVar42 + 4) = fVar108;
                *(float *)(pFVar40 + lVar42 + 8) = fVar118;
                if (cVar21 == '\0') {
LAB_14dc60201:
                  cVar21 = '\0';
                }
                else {
                  uVar24 = uVar26;
                  if ((int)uVar39 < (pFVar43->Positions).ArrayNum) {
                    uVar24 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
                  local_388 = *(undefined8 *)(pFVar40 + lVar42);
                  fVar98 = *(float *)(pFVar40 + lVar42 + 8);
                  iVar25 = _finite((double)(float)local_388);
                  if (iVar25 == 0) goto LAB_14dc60201;
                  iVar25 = _finite((double)local_388._4_4_);
                  if ((iVar25 == 0) || (iVar25 = _finite((double)fVar98), iVar25 == 0))
                  goto LAB_14dc60201;
                  uVar24 = uVar26;
                  if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                    uVar24 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
                  local_37c = *(undefined8 *)(pFVar40 + lVar42);
                  fVar98 = *(float *)(pFVar40 + lVar42 + 8);
                  iVar25 = _finite((double)(float)local_37c);
                  if (iVar25 == 0) goto LAB_14dc60201;
                  iVar25 = _finite((double)local_37c._4_4_);
                  if ((iVar25 == 0) || (iVar25 = _finite((double)fVar98), iVar25 == 0))
                  goto LAB_14dc60201;
                  cVar21 = '\x01';
                }
                iVar25 = (pFVar43->Positions).ArrayNum;
                uVar39 = uVar39 + 1;
                lVar42 = lVar42 + 0xc;
                this = local_4d8;
                dVar74 = local_4e0;
                uVar24 = local_398;
                uVar45 = uStack_394;
                uVar124 = uStack_390;
                uVar126 = uStack_38c;
                dVar128 = local_508;
                uVar145 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar148 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                uVar149 = _UNK_15061cc88;
                uVar150 = _UNK_15061cc8c;
                dVar85 = local_3a8;
                dVar119 = dStack_3a0;
                bVar20 = bVar19;
                bVar22 = bVar10;
                bVar12 = bVar11;
                bVar13 = bVar14;
                bVar16 = bVar15;
              } while ((int)uVar39 < iVar25);
            }
            goto LAB_14dc607ce;
          }
          if (0 < iVar25) {
            lVar42 = 0;
            do {
              uVar45 = ~uVar39 >> 0x1f;
              uVar24 = 0;
              if ((int)uVar39 < iVar25) {
                uVar24 = uVar45;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
              dVar74 = local_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar85 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              auVar73._8_4_ = SUB84(dVar85,0);
              auVar73._0_8_ = dVar74;
              auVar73._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
              auVar92._0_8_ =
                   local_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              auVar92._8_8_ =
                   dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              dStack_2c8 = (double)*(float *)(pFVar40 + lVar42 + 4) * dVar128;
              local_2d0 = (double)*(float *)(pFVar40 + lVar42) * dVar128;
              auVar111 = blendpd(auVar73,auVar92,2);
              local_2c0 = (double)*(float *)(pFVar40 + lVar42 + 8) * dVar128;
              dVar137 = local_2d0 - (double)local_228._0_8_;
              dVar144 = dStack_2c8 - (double)local_228._8_8_;
              dVar128 = local_2c0 - local_218;
              uVar107 = SUB84(dVar144,0);
              auVar133._8_4_ = uVar107;
              auVar133._0_8_ = dVar137;
              uVar127 = (undefined4)((ulonglong)dVar144 >> 0x20);
              auVar133._12_4_ = uVar127;
              auVar55._8_4_ = uVar107;
              auVar55._0_8_ = dVar137;
              auVar55._12_4_ = uVar127;
              auVar66._8_4_ = uVar107;
              auVar66._0_8_ = dVar137;
              auVar66._12_4_ = uVar127;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = dVar128;
              auVar62 = blendpd(auVar66,auVar5,2);
              auVar134._0_8_ = auVar133._8_8_ * dVar74 - dVar137 * dVar85;
              auVar134._8_8_ = dVar128 * dVar85 - auVar55._8_8_ * auVar92._0_8_;
              auVar122._8_4_ = SUB84(auVar134._8_8_,0);
              auVar122._0_8_ = auVar134._0_8_;
              auVar122._12_4_ = (int)((ulonglong)auVar134._8_8_ >> 0x20);
              auVar67._0_8_ = auVar62._0_8_ * auVar92._0_8_ - dVar128 * auVar111._0_8_;
              auVar67._8_8_ = auVar62._8_8_ * auVar92._8_8_ - auVar111._8_8_ * 0.0;
              dVar119 = auVar122._8_8_ + auVar122._8_8_;
              dVar125 = auVar67._0_8_ + auVar67._0_8_;
              auVar62 = blendpd(auVar134,auVar67,2);
              uVar107 = SUB84(dVar125,0);
              auVar114._8_4_ = uVar107;
              auVar114._0_8_ = dVar119;
              uVar127 = (undefined4)((ulonglong)dVar125 >> 0x20);
              auVar114._12_4_ = uVar127;
              auVar56._8_4_ = uVar107;
              auVar56._0_8_ = dVar119;
              auVar56._12_4_ = uVar127;
              auVar103._8_4_ = uVar107;
              auVar103._0_8_ = dVar119;
              auVar103._12_4_ = uVar127;
              auVar135._0_8_ = auVar62._0_8_ + auVar62._0_8_;
              auVar135._8_8_ = auVar62._8_8_ + auVar62._8_8_;
              auVar62 = blendpd(auVar103,auVar135,2);
              auVar115._0_8_ = auVar114._8_8_ * dVar74 - dVar119 * dVar85;
              auVar115._8_8_ = auVar135._0_8_ * dVar85 - auVar56._8_8_ * auVar92._0_8_;
              auVar8._4_8_ = auVar92._8_8_;
              auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
              auVar93._0_8_ = auVar8._0_8_ << 0x20;
              auVar93._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar93._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar57._8_4_ = SUB84(auVar135._8_8_,0);
              auVar57._0_8_ = auVar135._0_8_;
              auVar57._12_4_ = (int)((ulonglong)auVar135._8_8_ >> 0x20);
              auVar80._0_8_ = (double)CONCAT44(uVar148 & local_208._4_4_,uVar145 & local_208._0_4_);
              auVar80._8_4_ = uVar149 & local_208._8_4_;
              auVar80._12_4_ = uVar150 & local_208._12_4_;
              auVar104._0_8_ = auVar62._0_8_ * auVar92._0_8_ - auVar135._0_8_ * auVar111._0_8_;
              auVar104._8_8_ = auVar62._8_8_ * auVar92._8_8_ - auVar57._8_8_ * auVar111._8_8_;
              auVar94._8_8_ = auVar93._8_8_;
              auVar94._0_8_ = local_1f8;
              lVar46 = -(ulonglong)
                        (auVar80._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar48 = -(ulonglong)
                        (auVar80._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              local_208);
              lVar47 = -(ulonglong)
                        ((double)CONCAT44(uVar148 & (uint)((ulonglong)local_1f8 >> 0x20),
                                          uVar145 & SUB84(local_1f8,0)) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              auVar81._0_8_ =
                   (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                    ~(uint)lVar46 & auVar62._0_4_);
              auVar81._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
              auVar81._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
              auVar58._8_4_ = SUB84(auVar115._8_8_,0);
              auVar58._0_8_ = auVar115._0_8_;
              auVar58._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
              local_2b8 = auVar81._0_8_ * (dVar119 * auVar92._8_8_ + dVar137 + auVar58._8_8_);
              dStack_2b0 = auVar81._8_8_ * (dVar125 * auVar92._8_8_ + dVar144 + auVar104._0_8_);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar94);
              uVar24 = 0;
              if ((int)uVar39 < (pFVar43->Positions).ArrayNum) {
                uVar24 = uVar45;
              }
              auVar111 = blendpd(auVar115,auVar104,2);
              fVar98 = (float)local_2b8;
              local_2a8 = (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                           ~(uint)lVar47 & auVar62._0_4_) *
                          (auVar135._0_8_ * auVar92._8_8_ + dVar128 + auVar111._0_8_);
              fVar108 = (float)dStack_2b0;
              fVar118 = (float)local_2a8;
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Positions).AllocatorInstance.Data;
              *(float *)(pFVar40 + lVar42) = fVar98;
              *(float *)(pFVar40 + lVar42 + 4) = fVar108;
              *(float *)(pFVar40 + lVar42 + 8) = fVar118;
              uVar24 = 0;
              if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                uVar24 = uVar45;
              }
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
              dVar119 = local_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar125 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              auVar136._0_8_ =
                   local_238 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              auVar136._8_8_ =
                   dStack_230 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              dVar74 = (double)(float)(*(uint *)(pFVar40 + lVar42) ^
                                      __xmm_80000000800000008000000080000000);
              auVar95._8_4_ = SUB84(dVar125,0);
              auVar95._0_8_ = dVar119;
              uVar107 = (undefined4)((ulonglong)dVar125 >> 0x20);
              auVar95._12_4_ = uVar107;
              dVar128 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 4) ^
                                       __xmm_80000000800000008000000080000000);
              auVar82._8_4_ = SUB84(dVar125,0);
              auVar82._0_8_ = dVar119;
              auVar82._12_4_ = uVar107;
              local_290 = (double)(float)(*(uint *)(pFVar40 + lVar42 + 8) ^
                                         __xmm_80000000800000008000000080000000);
              auVar147._8_8_ = 0;
              auVar147._0_8_ = local_290;
              uVar107 = SUB84(dVar128,0);
              uVar127 = (undefined4)((ulonglong)dVar128 >> 0x20);
              auVar141._8_4_ = uVar107;
              auVar141._0_8_ = dVar74;
              auVar141._12_4_ = uVar127;
              auVar59._8_4_ = uVar107;
              auVar59._0_8_ = dVar74;
              auVar59._12_4_ = uVar127;
              auVar111 = blendpd(auVar95,auVar136,2);
              auVar142._0_8_ = auVar141._8_8_ * dVar119 - dVar74 * auVar82._8_8_;
              auVar142._8_8_ = local_290 * dVar125 - auVar59._8_8_ * auVar136._0_8_;
              auVar123._8_4_ = SUB84(auVar142._8_8_,0);
              auVar123._0_8_ = auVar142._0_8_;
              auVar123._12_4_ = (int)((ulonglong)auVar142._8_8_ >> 0x20);
              auVar68._8_4_ = uVar107;
              auVar68._0_8_ = dVar74;
              auVar68._12_4_ = uVar127;
              auVar62 = blendpd(auVar68,auVar147,2);
              local_2a0._8_4_ = uVar107;
              local_2a0._0_8_ = dVar74;
              local_2a0._12_4_ = uVar127;
              auVar69._0_8_ = auVar62._0_8_ * auVar136._0_8_ - auVar111._0_8_ * local_290;
              auVar69._8_8_ = auVar62._8_8_ * auVar136._8_8_ - auVar111._8_8_ * 0.0;
              auVar62 = blendpd(auVar142,auVar69,2);
              dVar137 = auVar123._8_8_ + auVar123._8_8_;
              dVar144 = auVar69._0_8_ + auVar69._0_8_;
              auVar143._0_8_ = auVar62._0_8_ + auVar62._0_8_;
              auVar143._8_8_ = auVar62._8_8_ + auVar62._8_8_;
              dVar85 = auVar111._8_8_ * auVar143._8_8_;
              auVar116._8_4_ = SUB84(dVar144,0);
              auVar116._0_8_ = dVar137;
              uVar107 = (undefined4)((ulonglong)dVar144 >> 0x20);
              auVar116._12_4_ = uVar107;
              auVar105._8_4_ = SUB84(dVar144,0);
              auVar105._0_8_ = dVar137;
              auVar105._12_4_ = uVar107;
              auVar117._0_8_ = auVar116._8_8_ * dVar119 - auVar82._8_8_ * dVar137;
              auVar117._8_8_ = auVar143._0_8_ * dVar125 - auVar136._0_8_ * dVar144;
              auVar83._0_8_ =
                   (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_208._4_4_,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_208._0_4_);
              auVar83._8_4_ = _UNK_15061cc88 & local_208._8_4_;
              auVar83._12_4_ = _UNK_15061cc8c & local_208._12_4_;
              auVar62 = blendpd(auVar105,auVar143,2);
              auVar106._0_8_ = auVar62._0_8_ * auVar136._0_8_ - auVar111._0_8_ * auVar143._0_8_;
              auVar106._8_8_ = auVar62._8_8_ * auVar136._8_8_ - dVar85;
              auVar9._4_8_ = dVar85;
              auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
              auVar96._0_8_ = auVar9._0_8_ << 0x20;
              auVar96._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              auVar96._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              auVar97._8_8_ = auVar96._8_8_;
              auVar97._0_8_ = local_1f8;
              lVar46 = -(ulonglong)
                        ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                          (uint)((ulonglong)local_1f8 >> 0x20),
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                          SUB84(local_1f8,0)) <=
                        (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
              lVar47 = -(ulonglong)
                        (auVar83._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
              lVar48 = -(ulonglong)
                        (auVar83._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
              auVar70._8_4_ = SUB84(auVar136._8_8_,0);
              auVar70._0_8_ = auVar136._8_8_;
              auVar70._12_4_ = (int)((ulonglong)auVar136._8_8_ >> 0x20);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              local_208);
              auVar84._0_8_ =
                   (double)CONCAT44(~(uint)((ulonglong)lVar47 >> 0x20) & auVar62._4_4_,
                                    ~(uint)lVar47 & auVar62._0_4_);
              auVar84._8_4_ = ~(uint)lVar48 & auVar62._8_4_;
              auVar84._12_4_ = ~(uint)((ulonglong)lVar48 >> 0x20) & auVar62._12_4_;
              auVar60._8_4_ = SUB84(auVar117._8_8_,0);
              auVar60._0_8_ = auVar117._0_8_;
              auVar60._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
              local_288 = auVar84._0_8_ * (auVar136._8_8_ * dVar137 + dVar74 + auVar60._8_8_);
              dStack_280 = auVar84._8_8_ * (auVar70._8_8_ * dVar144 + dVar128 + auVar106._0_8_);
              auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar97);
              uVar24 = 0;
              if ((int)uVar39 < (pFVar43->Normals).ArrayNum) {
                uVar24 = ~uVar39 >> 0x1f;
              }
              auVar111 = blendpd(auVar117,auVar106,2);
              fVar98 = (float)local_288;
              local_278 = (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar62._4_4_,
                                           ~(uint)lVar46 & auVar62._0_4_) *
                          (auVar136._8_8_ * auVar143._0_8_ + local_290 + auVar111._0_8_);
              fVar108 = (float)dStack_280;
              fVar118 = (float)local_278;
              if ((uVar24 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar40 = (pFVar43->Normals).AllocatorInstance.Data;
              uVar39 = uVar39 + 1;
              *(float *)(pFVar40 + lVar42) = fVar98;
              *(float *)(pFVar40 + lVar42 + 4) = fVar108;
              *(float *)(pFVar40 + lVar42 + 8) = fVar118;
              lVar42 = lVar42 + 0xc;
              iVar25 = (pFVar43->Positions).ArrayNum;
              this = local_4d8;
              cVar21 = local_548;
              dVar74 = local_4e0;
              uVar24 = local_398;
              uVar45 = uStack_394;
              uVar124 = uStack_390;
              uVar126 = uStack_38c;
              dVar128 = local_508;
              uVar145 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar148 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar149 = _UNK_15061cc88;
              uVar150 = _UNK_15061cc8c;
              dVar85 = local_3a8;
              dVar119 = dStack_3a0;
              bVar20 = bVar19;
            } while ((int)uVar39 < iVar25);
            goto LAB_14dc607ce;
          }
        }
        else {
LAB_14dc607ce:
          if ((bSimulationDataCheckFinite != false) && (cVar21 == '\0')) {
            if (2 < (byte)LogChaosClothAsset._0_1_) {
              local_498 = (FName)local_538->_padding_;
              ::FName::ToString(&local_498,&local_440);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
              if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_440.Data.AllocatorInstance.Data);
              }
            }
            bVar19 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2610671844826545199>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                                ,0x3d1,"bSimDataIsFinite");
            if (bVar19) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (bSimulationDataResetOnNonFinite != false) {
              this->bNeedResetClothFromNanCheck = true;
            }
          }
        }
        if ((pFVar43 != (FClothSimulData *)0x0) &&
           (((!bVar20 || (cVar21 == '\0')) &&
            (*(int *)&(this->CurrentSimulationData).field_0x8 !=
             *(int *)&(this->CurrentSimulationData).field_0x34)))) {
          puVar3 = *(undefined1 **)&(this->CurrentSimulationData).field_0x40;
          puVar38 = &(this->CurrentSimulationData).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar38 = puVar3;
          }
          iVar25 = *(int *)(puVar38 +
                           ((longlong)*(int *)&(this->CurrentSimulationData).field_0x48 - 1U &
                           (longlong)(int)local_53c) * 4);
          if (iVar25 != -1) {
            do {
              if (*(uint *)((longlong)iVar25 * 0x110 + *(longlong *)&this->CurrentSimulationData) ==
                  local_53c) {
                TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                                 *)&this->CurrentSimulationData,iVar25);
                break;
              }
              iVar25 = *(int *)((longlong)iVar25 * 0x110 + 0x100 +
                               *(longlong *)&this->CurrentSimulationData);
            } while (iVar25 != -1);
          }
        }
        uVar37 = (ulonglong)(uint)local_1e8.ArrayNum;
        FVar36 = (ForElementType<int>)((longlong)local_4d0 + 4);
        uVar44 = (ulonglong)local_4ec;
      }
    }
    uVar24 = local_52c;
    if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_1e8.AllocatorInstance.SecondaryData);
      uVar24 = local_52c;
    }
  }
  else {
    TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
             *)&this->CurrentSimulationData);
  }
  if ((local_528.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_528.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_528.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_528.StatId,CycleScopeEnd);
  }
  local_528.EmittedEvent = '\0';
  if ((local_518.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_518.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_518.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_518.StatId,CycleScopeEnd);
  }
  local_518.EmittedEvent = '\0';
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("Cloth",uVar24);
  return;
}

