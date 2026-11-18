// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 35

// FClothingSimulation @ 14db8f0d0

FClothingSimulation * __thiscall
Chaos::FClothingSimulation::FClothingSimulation(FClothingSimulation *this)

{
  undefined8 uVar1;
  TUniquePtr<Chaos::ClothingSimulationConsole::FCommand,TDefaultDelete<Chaos::ClothingSimulationConsole::FCommand>_>
  TVar2;
  FCommand *this_00;
  FCommand *pFVar3;
  
  FClothingSimulationCommon::FClothingSimulationCommon((FClothingSimulationCommon *)this);
  pFVar3 = (FCommand *)0x0;
  this->_padding_ = (longlong)&___7FClothingSimulation_Chaos__6B_;
  (this->Visualization)._padding_ = (longlong)&___7FClothVisualizationNoGC_Chaos__6B_;
  (this->Visualization).Solver = (FClothingSimulationSolver *)0x0;
  (this->Solver).Ptr = (FClothingSimulationSolver *)0x0;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->Cloths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cloths).ArrayNum = 0;
  (this->Cloths).ArrayMax = 0;
  (this->Colliders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Colliders).ArrayNum = 0;
  (this->Colliders).ArrayMax = 0;
  (this->Configs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configs).ArrayNum = 0;
  (this->Configs).ArrayMax = 0;
  (this->ExternalCollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).Spheres.ArrayNum = 0;
  (this->ExternalCollisionData).Spheres.ArrayMax = 0;
  (this->ExternalCollisionData).SphereConnections.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).SphereConnections.ArrayNum = 0;
  (this->ExternalCollisionData).SphereConnections.ArrayMax = 0;
  (this->ExternalCollisionData).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).Convexes.ArrayNum = 0;
  (this->ExternalCollisionData).Convexes.ArrayMax = 0;
  (this->ExternalCollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCollisionData).Boxes.ArrayNum = 0;
  (this->ExternalCollisionData).Boxes.ArrayMax = 0;
  (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->ClothSharedSimConfig = (UChaosClothSharedSimConfig *)0x0;
  (this->LODHasAnyRenderClothMappingData).NumBits = 0;
  *(undefined8 *)&(this->LODHasAnyRenderClothMappingData).MaxBits = 0x80;
  this->NumKinematicParticles = (TAtomic<int>)0x0;
  this->NumDynamicParticles = (TAtomic<int>)0x0;
  this->NumIterations = (TAtomic<int>)0x0;
  this->NumSubsteps = (TAtomic<int>)0x0;
  this->SimulationTime = (TAtomic<float>)0x0;
  this->bIsTeleported = (TAtomic<bool>)0x0;
  this->bUseLocalSpaceSimulation = true;
  this->bUseGravityOverride = false;
  uVar1 = ChaosClothingSimulationDefault::Gravity.field0_0x0._s_0.Y;
  (this->GravityOverride).field0_0x0._s_0.X =
       ChaosClothingSimulationDefault::Gravity.field0_0x0._s_0.X;
  (this->GravityOverride).field0_0x0._s_0.Y = (double)uVar1;
  (this->GravityOverride).field0_0x0._s_0.Z =
       ChaosClothingSimulationDefault::Gravity.field0_0x0._s_0.Z;
  this->MaxDistancesMultipliers = 1.0;
  this->StepCount = 0;
  this->ResetCount = 0;
  this->bHasInvalidReferenceBoneTransforms = false;
  if (ClothingSimulationConsole::Command.Ptr == (FCommand *)0x0) {
    this_00 = ::operator_new(0x20);
    if (this_00 != (FCommand *)0x0) {
      pFVar3 = ClothingSimulationConsole::FCommand::FCommand(this_00);
    }
    TVar2.Ptr = ClothingSimulationConsole::Command.Ptr;
    ClothingSimulationConsole::Command.Ptr = pFVar3;
    TDefaultDelete<Chaos::ClothingSimulationConsole::FCommand>::operator()
              ((TDefaultDelete<Chaos::ClothingSimulationConsole::FCommand> *)
               &ClothingSimulationConsole::Command,TVar2.Ptr);
  }
  return this;
}

// ~FClothingSimulation @ 14db9f430

void __thiscall Chaos::FClothingSimulation::~FClothingSimulation(FClothingSimulation *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  FClothingSimulationSolver *this_00;
  
  this->_padding_ = (longlong)&___7FClothingSimulation_Chaos__6B_;
  FVar1 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->ExternalCollisionData).Boxes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)
             (this->ExternalCollisionData).Convexes.AllocatorInstance.Data,
             (this->ExternalCollisionData).Convexes.ArrayNum);
  pFVar2 = (this->ExternalCollisionData).Convexes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExternalCollisionData).SphereConnections.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExternalCollisionData).Spheres.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>
              *)(this->Configs).AllocatorInstance.Data,(this->Configs).ArrayNum);
  pFVar2 = (this->Configs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>
              *)(this->Colliders).AllocatorInstance.Data,(this->Colliders).ArrayNum);
  pFVar2 = (this->Colliders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>
              *)(this->Cloths).AllocatorInstance.Data,(this->Cloths).ArrayNum);
  pFVar2 = (this->Cloths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>
              *)(this->Meshes).AllocatorInstance.Data,(this->Meshes).ArrayNum);
  pFVar2 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this_00 = (this->Solver).Ptr;
  if (this_00 != (FClothingSimulationSolver *)0x0) {
    FClothingSimulationSolver::~FClothingSimulationSolver(this_00);
    ::operator_delete(this_00,0x530);
  }
  (this->Visualization)._padding_ = (longlong)&___7FClothVisualizationNoGC_Chaos__6B_;
  FClothingSimulationCommon::~FClothingSimulationCommon((FClothingSimulationCommon *)this);
  return;
}

// AddExternalCollisions @ 14dbb9110

void __thiscall
Chaos::FClothingSimulation::AddExternalCollisions
          (FClothingSimulation *this,FClothCollisionData *param_1)

{
  FClothCollisionData::Append(&this->ExternalCollisionData,param_1);
  return;
}

// AppendSimulationData @ 14dbbb500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulation::AppendSimulationData
          (FClothingSimulation *this,
          TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
          *param_1,USkeletalMeshComponent *param_2,USkinnedMeshComponent *param_3)

{
  TRigidTransform<double,3> *pTVar1;
  double *pdVar2;
  FClothingSimulationSolver *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  bool bVar11;
  bool bVar12;
  uint uVar13;
  longlong *plVar14;
  FClothingSimulationCloth *pFVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothGetSimulationData> FVar21;
  FClothingSimulationContextCommon *pFVar22;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar23;
  FClothSimulData *this_00;
  TTransform<double> *pTVar24;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  FName FVar30;
  FName FVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  bool bVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
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
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar54;
  double dVar55;
  uint uVar57;
  double dVar58;
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar86;
  double dVar87;
  double dVar91;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auStackY_3b8 [32];
  undefined1 local_356;
  char local_355;
  undefined1 local_354 [4];
  uint local_350 [2];
  FName local_348;
  int local_340;
  longlong local_338;
  USkeletalMeshComponent *local_330;
  FColor_u_0 local_328 [2];
  uint local_320 [2];
  uint local_318 [2];
  uint local_310;
  FScriptContainerElement *local_308;
  FName local_300;
  USkinnedMeshComponent *local_2f8;
  TVector<double,3> *local_2f0;
  double local_2e8;
  FName local_2e0;
  FScriptContainerElement *local_2d8;
  longlong *local_2d0;
  FName local_2c8;
  TTransform<double> *local_2b8;
  undefined8 local_2b0;
  FClothingSimulation *local_2a8;
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  *local_2a0;
  FName local_298;
  FClothingSimulationCloth *local_290;
  FString local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  FName local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  undefined8 local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  undefined1 local_208 [16];
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_1d8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_1c8;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar36 = -1 < CpuChannel->Enabled;
  local_330 = param_2;
  local_2f8 = param_3;
  local_2a8 = this;
  local_2a0 = (TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
               *)param_1;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId680,"FClothingSimulation_GetSimulationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
               ,0x2a8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId680);
  }
  FVar21 = StatPtr_STAT_ChaosClothGetSimulationData;
  if (StatPtr_STAT_ChaosClothGetSimulationData ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothGetSimulationData>)0x0) {
    pFVar20 = ::FName::FName(&local_268,"STAT_ChaosClothGetSimulationData");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothGetSimulationData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothGetSimulationData,
                        *pFVar20,L"Chaos Cloth Get Simulation Data","STATGROUP_ChaosCloth",
                        "STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar11 = false;
  bVar12 = false;
  local_2c8.ComparisonIndex.Value = 0;
  local_2c8.Number = 0;
  FVar30 = *(FName *)FVar21;
  bVar16 = false;
  bVar17 = false;
  if ((FVar30.ComparisonIndex.Value.Value != 0) || (FVar30.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_328[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_328[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_300.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_300.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_300,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                   ,0x2a9);
        bVar11 = true;
        bVar12 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_348 = FVar30;
      local_2e0 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar16 = true;
      goto LAB_14dbbb717;
    }
  }
  bVar12 = bVar17;
  bVar11 = bVar16;
  bVar16 = false;
  local_2e0 = local_2c8;
  FVar30 = local_2c8;
LAB_14dbbb717:
  pFVar3 = (this->Solver).Ptr;
  dVar70 = pFVar3->LocalSpaceScale;
  local_2f0 = &pFVar3->LocalSpaceLocation;
  local_2e8 = dVar70;
  pFVar22 = GetClothingSimulationContext(this,param_2);
  if ((pFVar22 == (FClothingSimulationContextCommon *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                          ,0x2b2,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = __xmm_80000000800000008000000080000000;
  local_2b8 = &pFVar22->ComponentToWorld;
  if (local_2f8 == (USkinnedMeshComponent *)0x0) {
    local_2d0 = &param_2->_padding_ + (longlong)(int)param_2->_padding_ * 2;
  }
  else {
    local_2d0 = &local_2f8->_padding_ + (longlong)local_2f8->CurrentReadComponentTransforms * 2;
  }
  local_310 = (this->Cloths).ArrayNum;
  uVar28 = (ulonglong)(int)local_310;
  pFVar34 = (this->Cloths).AllocatorInstance.Data;
  uVar66 = (undefined4)__real_3ff0000000000000;
  uVar68 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_348 = (FName)(pFVar34 + uVar28 * 8);
  local_2b0 = __real_3ff0000000000000;
  local_260 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_258 = _UNK_150689688;
  FVar31 = local_348;
  dVar77 = ___xmm_3ff00000000000003ff0000000000000;
  dVar51 = _UNK_150689688;
  do {
    while( true ) {
      plVar14 = local_2d0;
      local_2d8 = pFVar34;
      if ((this->Cloths).ArrayNum != (int)uVar28) {
        local_356 = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_356);
      }
      if ((FName)pFVar34 == FVar31) goto LAB_14dbbc2cc;
      local_350[0] = *(uint *)(*(longlong **)pFVar34 + 4);
      plVar4 = (longlong *)**(longlong **)pFVar34;
      if (plVar4 != (longlong *)0x0) break;
      local_320[0] = local_350[0];
      if (*(int *)&(((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                      *)param_1)->Elements).field_0x8 ==
          *(int *)&(((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                      *)param_1)->Elements).field_0x34) {
LAB_14dbbc25b:
        pFVar34 = pFVar34 + 8;
        uVar28 = (ulonglong)local_310;
      }
      else {
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                           *)param_1,local_350[0],(int *)local_320);
        uVar28 = (ulonglong)local_310;
        pFVar34 = pFVar34 + 8;
      }
    }
    local_340 = (**(code **)(*plVar4 + 0x10))();
    pTVar23 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                      *)(*(longlong *)pFVar34 + 0x100),(this->Solver).Ptr);
    if ((pTVar23 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_340 != *(int *)&pTVar23->field_0x8) {
      FClothingSimulationSolver::Update((this->Solver).Ptr,0.0);
    }
    iVar18 = FClothingSimulationCloth::GetParticleRangeId
                       (*(FClothingSimulationCloth **)pFVar34,(this->Solver).Ptr);
    if (iVar18 == -1) {
LAB_14dbbc239:
      local_318[0] = local_350[0];
      FVar31 = local_348;
      if (*(int *)&(((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                      *)param_1)->Elements).field_0x8 !=
          *(int *)&(((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                      *)param_1)->Elements).field_0x34) {
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                           *)param_1,local_350[0],(int *)local_318);
        FVar31 = local_348;
      }
      goto LAB_14dbbc25b;
    }
    pTVar23 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                      *)(*(longlong *)pFVar34 + 0x100),(this->Solver).Ptr);
    if ((pTVar23 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)&pTVar23->field_0x8 == -1) goto LAB_14dbbc239;
    plVar4 = (longlong *)**(longlong **)pFVar34;
    if (local_2f8 == (USkinnedMeshComponent *)0x0) {
      if (plVar4 == (longlong *)0x0) {
        iVar18 = -1;
      }
      else {
        iVar18 = (**(code **)(*plVar4 + 0xa8))();
      }
    }
    else {
      if (plVar4 == (longlong *)0x0) {
        uVar19 = 0xffffffff;
LAB_14dbbb94c:
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar19 = (**(code **)(*plVar4 + 0xa8))();
        uVar27 = 0;
        if ((int)uVar19 < (int)local_330->_padding_) {
          uVar27 = ~uVar19 >> 0x1f;
        }
        if (uVar27 == 0) goto LAB_14dbbb94c;
      }
      iVar18 = *(int *)(local_330->_padding_ + (longlong)(int)uVar19 * 4);
    }
    if ((iVar18 < 0) || ((int)plVar14[0xc4] <= iVar18)) {
      if ((2 < (byte)LogSkeletalMesh._0_1_) && (this->bHasInvalidReferenceBoneTransforms == false))
      {
        local_298 = (FName)local_330->_padding_;
        ::FName::ToString(&local_298,&local_288);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
      }
      this->bHasInvalidReferenceBoneTransforms = true;
LAB_14dbbc2cc:
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar16) {
        FThreadStats::AddMessage(FVar30,CycleScopeEnd);
      }
      if (bVar36) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if ((iVar18 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar33 = plVar14[0xc3];
    lVar29 = (longlong)iVar18 * 0x60;
    local_1b8.Rotation.XY.m128d_f64[0] = *(double *)(lVar29 + lVar33);
    local_1b8.Rotation.XY.m128d_f64[1] = ((double *)(lVar29 + lVar33))[1];
    pdVar2 = (double *)(lVar29 + 0x10 + lVar33);
    local_1b8.Rotation.ZW.m128d_f64[0] = *pdVar2;
    local_1b8.Rotation.ZW.m128d_f64[1] = pdVar2[1];
    pdVar2 = (double *)(lVar29 + 0x20 + lVar33);
    local_1b8.Translation.XY.m128d_f64[0] = *pdVar2;
    local_1b8.Translation.XY.m128d_f64[1] = pdVar2[1];
    pdVar2 = (double *)(lVar29 + 0x30 + lVar33);
    local_1b8.Translation.ZW.m128d_f64[0] = *pdVar2;
    local_1b8.Translation.ZW.m128d_f64[1] = pdVar2[1];
    pdVar2 = (double *)(lVar29 + 0x40 + lVar33);
    local_1b8.Scale3D.XY.m128d_f64[0] = *pdVar2;
    local_1b8.Scale3D.XY.m128d_f64[1] = pdVar2[1];
    pdVar2 = (double *)(lVar29 + 0x50 + lVar33);
    local_1b8.Scale3D.ZW.m128d_f64[0] = *pdVar2;
    dVar55 = pdVar2[1];
    local_1b8.Scale3D.ZW.m128d_f64[1] = dVar55;
    UE::Math::TTransform<double>::Multiply(&local_1b8,&local_1b8,local_2b8);
    auVar10._4_8_ = dVar55;
    auVar10._0_4_ = (int)((ulonglong)local_1b8.Scale3D.XY.m128d_f64[0] >> 0x20);
    auVar47._0_8_ = auVar10._0_8_ << 0x20;
    auVar47._8_4_ = SUB84(local_1b8.Scale3D.XY.m128d_f64[1],0);
    auVar47._12_4_ = (int)((ulonglong)local_1b8.Scale3D.XY.m128d_f64[1] >> 0x20);
    local_240 = CONCAT44(uVar68,uVar66);
    local_1b8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_355 = auVar47._8_8_ * local_1b8.Scale3D.XY.m128d_f64[0] *
                local_1b8.Scale3D.ZW.m128d_f64[0] < 0.0;
    local_250 = dVar77;
    dStack_248 = dVar51;
    local_1b8.Scale3D.XY.m128d_f64[0] = dVar77;
    local_1b8.Scale3D.XY.m128d_f64[1] = dVar51;
    local_1b8.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uVar68,uVar66);
    this_00 = TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                          *)param_1,local_350[0],(int *)local_350);
    (this_00->Transform).Rotation.XY.m128d_f64[0] = local_1b8.Rotation.XY.m128d_f64[0];
    (this_00->Transform).Rotation.XY.m128d_f64[1] = local_1b8.Rotation.XY.m128d_f64[1];
    (this_00->Transform).Rotation.ZW.m128d_f64[0] = local_1b8.Rotation.ZW.m128d_f64[0];
    (this_00->Transform).Rotation.ZW.m128d_f64[1] = local_1b8.Rotation.ZW.m128d_f64[1];
    (this_00->Transform).Translation.XY.m128d_f64[0] = local_1b8.Translation.XY.m128d_f64[0];
    (this_00->Transform).Translation.XY.m128d_f64[1] = local_1b8.Translation.XY.m128d_f64[1];
    (this_00->Transform).Translation.ZW.m128d_f64[0] = local_1b8.Translation.ZW.m128d_f64[0];
    (this_00->Transform).Translation.ZW.m128d_f64[1] = local_1b8.Translation.ZW.m128d_f64[1];
    (this_00->Transform).Scale3D.XY.m128d_f64[0] = local_1b8.Scale3D.XY.m128d_f64[0];
    (this_00->Transform).Scale3D.XY.m128d_f64[1] = local_1b8.Scale3D.XY.m128d_f64[1];
    (this_00->Transform).Scale3D.ZW.m128d_f64[0] = local_1b8.Scale3D.ZW.m128d_f64[0];
    (this_00->Transform).Scale3D.ZW.m128d_f64[1] = local_1b8.Scale3D.ZW.m128d_f64[1];
    pTVar24 = UE::Math::TTransform<double>::GetRelativeTransform(&local_1b8,&local_158,local_2b8);
    dVar55 = (pTVar24->Rotation).XY.m128d_f64[1];
    (this_00->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
         (pTVar24->Rotation).XY.m128d_f64[0];
    (this_00->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar55;
    dVar55 = (pTVar24->Rotation).ZW.m128d_f64[1];
    (this_00->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
         (pTVar24->Rotation).ZW.m128d_f64[0];
    (this_00->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar55;
    dVar55 = (pTVar24->Translation).XY.m128d_f64[1];
    (this_00->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
         (pTVar24->Translation).XY.m128d_f64[0];
    (this_00->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar55;
    dVar55 = (pTVar24->Translation).ZW.m128d_f64[1];
    (this_00->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
         (pTVar24->Translation).ZW.m128d_f64[0];
    (this_00->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar55;
    dVar55 = (pTVar24->Scale3D).XY.m128d_f64[1];
    (this_00->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
         (pTVar24->Scale3D).XY.m128d_f64[0];
    (this_00->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar55;
    *(undefined1 (*) [16])(this_00->ComponentRelativeTransform).Scale3D.ZW.m128d_f64 =
         *(undefined1 (*) [16])(pTVar24->Scale3D).ZW.m128d_f64;
    local_290 = *(FClothingSimulationCloth **)pFVar34;
    pTVar1 = &local_290->ReferenceSpaceTransform;
    local_308 = (FScriptContainerElement *)pTVar1;
    pTVar25 = FClothingSimulationCloth::GetParticlePositions
                        (local_290,&local_1d8,(this->Solver).Ptr);
    TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_>::
    operator=<Chaos::TVector<float,3>_const_,int>(&this_00->Positions,pTVar25);
    pTVar25 = FClothingSimulationCloth::GetParticleNormals
                        (*(FClothingSimulationCloth **)pFVar34,&local_1c8,(this->Solver).Ptr);
    TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_>::
    operator=<Chaos::TVector<float,3>_const_,int>(&this_00->Normals,pTVar25);
    pFVar15 = local_290;
    pFVar26 = local_308;
    iVar18 = (this_00->Positions).ArrayNum;
    if (bChaos_GetSimData_ISPC_Enabled == false) {
      uVar19 = 0;
      local_338 = 0;
      if (0 < iVar18) {
        lVar33 = 0;
        local_278 = 0;
        uStack_270 = 0;
        do {
          uVar28 = local_278;
          uVar35 = ~uVar19 >> 0x1f;
          uVar27 = 0;
          if ((int)uVar19 < iVar18) {
            uVar27 = uVar35;
          }
          if ((uVar27 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar34 = (this_00->Positions).AllocatorInstance.Data;
          dVar55 = *(double *)pFVar26 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]
          ;
          dVar58 = *(double *)(pFVar26 + 8) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar52._8_4_ = SUB84(dVar58,0);
          auVar52._0_8_ = dVar55;
          auVar52._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          auVar59._0_8_ =
               *(double *)(pFVar26 + 0x10) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar59._8_8_ =
               *(double *)(pFVar26 + 0x18) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dStack_230 = (double)*(float *)(pFVar34 + lVar33 + 4) * dVar70 +
                       *(double *)&local_2f0->field_0x8;
          local_238 = (double)*(float *)(pFVar34 + lVar33) * dVar70 + *(double *)local_2f0;
          auVar53 = blendpd(auVar52,auVar59,2);
          local_228 = (double)*(float *)(pFVar34 + lVar33 + 8) * dVar70 +
                      *(double *)&local_2f0->field_0x10;
          dVar87 = local_238 - *(double *)&(pFVar15->ReferenceSpaceTransform).field_0x20;
          dVar91 = dStack_230 - *(double *)&(pFVar15->ReferenceSpaceTransform).field_0x28;
          dVar51 = local_228 - *(double *)&(pFVar15->ReferenceSpaceTransform).field_0x30;
          auVar82._8_4_ = SUB84(dVar91,0);
          auVar82._0_8_ = dVar87;
          uVar66 = (undefined4)((ulonglong)dVar91 >> 0x20);
          auVar82._12_4_ = uVar66;
          auVar46._8_4_ = SUB84(dVar91,0);
          auVar46._0_8_ = dVar87;
          auVar46._12_4_ = uVar66;
          auVar72._8_8_ = 0;
          auVar72._0_8_ = dVar51;
          auVar47 = blendpd(auVar46,auVar72,2);
          auVar63._8_4_ = SUB84(auVar59._0_8_,0);
          auVar63._0_8_ = dVar58;
          auVar63._12_4_ = (int)((ulonglong)auVar59._0_8_ >> 0x20);
          auVar83._0_8_ = auVar82._8_8_ * dVar55 - dVar58 * dVar87;
          auVar83._8_8_ = dVar51 * dVar58 - auVar63._8_8_ * dVar91;
          auVar48._0_8_ = auVar47._0_8_ * auVar59._0_8_ - dVar51 * auVar53._0_8_;
          auVar48._8_8_ = auVar47._8_8_ * auVar59._8_8_ - auVar53._8_8_ * 0.0;
          dVar70 = auVar83._8_8_ + auVar83._8_8_;
          dVar77 = auVar48._0_8_ + auVar48._0_8_;
          uVar66 = SUB84(dVar77,0);
          uVar68 = (undefined4)((ulonglong)dVar77 >> 0x20);
          auVar47 = blendpd(auVar83,auVar48,2);
          auVar84._0_8_ = auVar47._0_8_ + auVar47._0_8_;
          auVar84._8_8_ = auVar47._8_8_ + auVar47._8_8_;
          auVar78._8_4_ = uVar66;
          auVar78._0_8_ = dVar70;
          auVar78._12_4_ = uVar68;
          auVar40._8_4_ = uVar66;
          auVar40._0_8_ = dVar70;
          auVar40._12_4_ = uVar68;
          auVar71._8_4_ = uVar66;
          auVar71._0_8_ = dVar70;
          auVar71._12_4_ = uVar68;
          auVar72 = blendpd(auVar71,auVar84,2);
          auVar79._0_8_ = auVar78._8_8_ * dVar55 - dVar70 * dVar58;
          auVar79._8_8_ = auVar84._0_8_ * dVar58 - auVar40._8_8_ * auVar59._0_8_;
          auVar41._8_4_ = SUB84(auVar84._8_8_,0);
          auVar41._0_8_ = auVar84._0_8_;
          auVar41._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
          auVar47 = *(undefined1 (*) [16])&(pFVar15->ReferenceSpaceTransform).field_0x40;
          auVar73._0_8_ = auVar72._0_8_ * auVar59._0_8_ - auVar84._0_8_ * auVar53._0_8_;
          auVar73._8_8_ = auVar72._8_8_ * auVar59._8_8_ - auVar41._8_8_ * auVar53._8_8_;
          auVar72 = *(undefined1 (*) [16])&(pFVar15->ReferenceSpaceTransform).field_0x50;
          auVar60._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar47._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar47._0_4_);
          auVar60._8_4_ = _UNK_15061cc88 & auVar47._8_4_;
          auVar60._12_4_ = _UNK_15061cc8c & auVar47._12_4_;
          uVar37 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar72._4_4_,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar72._0_4_)
                    <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
          lVar29 = -(ulonglong)
                    (auVar60._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar38 = -(ulonglong)
                    (auVar60._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar61._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar47._4_4_,
                                ~(uint)lVar29 & auVar47._0_4_);
          auVar61._8_4_ = ~(uint)lVar38 & auVar47._8_4_;
          auVar61._12_4_ = ~(uint)((ulonglong)lVar38 >> 0x20) & auVar47._12_4_;
          auVar53._8_4_ = SUB84(auVar79._8_8_,0);
          auVar53._0_8_ = auVar79._0_8_;
          auVar53._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
          uVar27 = 0;
          if ((int)uVar19 < (this_00->Positions).ArrayNum) {
            uVar27 = uVar35;
          }
          auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar6._0_8_ = auVar72._0_8_;
          auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
          auVar72 = blendpd(auVar79,auVar73,2);
          local_220 = auVar61._0_8_ * (dVar70 * auVar59._8_8_ + dVar87 + auVar53._8_8_);
          dStack_218 = auVar61._8_8_ * (dVar77 * auVar59._8_8_ + dVar91 + auVar73._0_8_);
          fVar67 = (float)local_220;
          local_210 = (double)(CONCAT44(~(uint)(uVar37 >> 0x20) & auVar47._4_4_,
                                        ~(uint)uVar37 & auVar47._0_4_) | uVar28 & uVar37) *
                      (auVar84._0_8_ * auVar59._8_8_ + dVar51 + auVar72._0_8_);
          fVar69 = (float)dStack_218;
          fVar76 = (float)local_210;
          if ((uVar27 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar34 = (this_00->Positions).AllocatorInstance.Data;
          *(float *)(pFVar34 + lVar33) = fVar67;
          *(float *)(pFVar34 + lVar33 + 4) = fVar69;
          *(float *)(pFVar34 + lVar33 + 8) = fVar76;
          uVar27 = 0;
          if ((int)uVar19 < (this_00->Normals).ArrayNum) {
            uVar27 = uVar35;
          }
          if ((uVar27 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar34 = (this_00->Normals).AllocatorInstance.Data;
          dVar70 = *(double *)pFVar26 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]
          ;
          dVar77 = *(double *)(pFVar26 + 8) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar66 = (undefined4)((ulonglong)dVar77 >> 0x20);
          dVar51 = *(double *)(pFVar26 + 0x10) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar55 = *(double *)(pFVar26 + 0x18) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar87 = (double)(float)(*(uint *)(pFVar34 + lVar33) ^ uVar13);
          auVar56._8_4_ = SUB84(dVar77,0);
          auVar56._0_8_ = dVar70;
          auVar56._12_4_ = uVar66;
          dVar58 = (double)(float)(*(uint *)(pFVar34 + lVar33 + 4) ^ uVar13);
          auVar62._8_4_ = SUB84(dVar77,0);
          auVar62._0_8_ = dVar70;
          auVar62._12_4_ = uVar66;
          local_1f8 = (double)(float)(*(uint *)(pFVar34 + lVar33 + 8) ^ uVar13);
          auVar8._8_4_ = SUB84(dVar55,0);
          auVar8._0_8_ = dVar51;
          auVar8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
          auVar63 = blendpd(auVar62,auVar8,2);
          auVar47 = *(undefined1 (*) [16])&(pFVar15->ReferenceSpaceTransform).field_0x40;
          uVar66 = SUB84(dVar58,0);
          uVar68 = (undefined4)((ulonglong)dVar58 >> 0x20);
          auVar88._8_4_ = uVar66;
          auVar88._0_8_ = dVar87;
          auVar88._12_4_ = uVar68;
          auVar42._8_4_ = uVar66;
          auVar42._0_8_ = dVar87;
          auVar42._12_4_ = uVar68;
          auVar49._8_4_ = uVar66;
          auVar49._0_8_ = dVar87;
          auVar49._12_4_ = uVar68;
          auVar89._0_8_ = auVar88._8_8_ * dVar70 - dVar87 * auVar56._8_8_;
          auVar89._8_8_ = local_1f8 * dVar77 - auVar42._8_8_ * dVar51;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = local_1f8;
          auVar72 = blendpd(auVar49,auVar9,2);
          auVar85._8_4_ = SUB84(auVar89._8_8_,0);
          auVar85._0_8_ = auVar89._0_8_;
          auVar85._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
          local_208._8_4_ = uVar66;
          local_208._0_8_ = dVar87;
          local_208._12_4_ = uVar68;
          auVar50._0_8_ = auVar72._0_8_ * dVar51 - local_1f8 * auVar63._0_8_;
          auVar50._8_8_ = auVar72._8_8_ * dVar55 - auVar63._8_8_ * 0.0;
          dVar91 = auVar85._8_8_ + auVar85._8_8_;
          dVar86 = auVar50._0_8_ + auVar50._0_8_;
          auVar72 = blendpd(auVar89,auVar50,2);
          uVar66 = SUB84(dVar86,0);
          auVar80._8_4_ = uVar66;
          auVar80._0_8_ = dVar91;
          uVar68 = (undefined4)((ulonglong)dVar86 >> 0x20);
          auVar80._12_4_ = uVar68;
          auVar43._8_4_ = uVar66;
          auVar43._0_8_ = dVar91;
          auVar43._12_4_ = uVar68;
          auVar74._8_4_ = uVar66;
          auVar74._0_8_ = dVar91;
          auVar74._12_4_ = uVar68;
          auVar90._0_8_ = auVar72._0_8_ + auVar72._0_8_;
          auVar90._8_8_ = auVar72._8_8_ + auVar72._8_8_;
          auVar81._0_8_ = auVar80._8_8_ * dVar70 - dVar91 * auVar56._8_8_;
          auVar81._8_8_ = auVar90._0_8_ * dVar77 - auVar43._8_8_ * dVar51;
          auVar72 = blendpd(auVar74,auVar90,2);
          auVar44._8_4_ = SUB84(auVar90._8_8_,0);
          auVar44._0_8_ = auVar90._0_8_;
          auVar44._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
          auVar64._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar47._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar47._0_4_);
          auVar64._8_4_ = _UNK_15061cc88 & auVar47._8_4_;
          auVar64._12_4_ = _UNK_15061cc8c & auVar47._12_4_;
          auVar75._0_8_ = auVar72._0_8_ * dVar51 - auVar90._0_8_ * auVar63._0_8_;
          auVar75._8_8_ = auVar72._8_8_ * dVar55 - auVar44._8_8_ * auVar63._8_8_;
          auVar72 = *(undefined1 (*) [16])&(pFVar15->ReferenceSpaceTransform).field_0x50;
          lVar29 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar72._4_4_,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar72._0_4_)
                    <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
          lVar38 = -(ulonglong)
                    (auVar64._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar39 = -(ulonglong)
                    (auVar64._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar45._8_4_ = SUB84(auVar81._8_8_,0);
          auVar45._0_8_ = auVar81._0_8_;
          auVar45._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
          auVar65._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar38 >> 0x20) & auVar47._4_4_,
                                ~(uint)lVar38 & auVar47._0_4_);
          auVar65._8_4_ = ~(uint)lVar39 & auVar47._8_4_;
          auVar65._12_4_ = ~(uint)((ulonglong)lVar39 >> 0x20) & auVar47._12_4_;
          local_1f0 = auVar65._0_8_ * (dVar91 * dVar55 + dVar87 + auVar45._8_8_);
          dStack_1e8 = auVar65._8_8_ * (dVar86 * dVar55 + dVar58 + auVar75._0_8_);
          uVar54 = (uint)lVar29;
          uVar57 = (uint)((ulonglong)lVar29 >> 0x20);
          auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar7._0_8_ = auVar72._0_8_;
          auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
          uVar27 = 0;
          if ((int)uVar19 < (this_00->Normals).ArrayNum) {
            uVar27 = uVar35;
          }
          auVar72 = blendpd(auVar81,auVar75,2);
          fVar67 = (float)local_1f0;
          local_1e0 = (double)(CONCAT44(~uVar57 & auVar47._4_4_,~uVar54 & auVar47._0_4_) |
                              CONCAT44(local_278._4_4_ & uVar57,(uint)local_278 & uVar54)) *
                      (auVar90._0_8_ * dVar55 + local_1f8 + auVar72._0_8_);
          fVar69 = (float)dStack_1e8;
          fVar76 = (float)local_1e0;
          if ((uVar27 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar34 = (this_00->Normals).AllocatorInstance.Data;
          uVar19 = uVar19 + 1;
          local_338 = local_338 + 1;
          *(float *)(pFVar34 + lVar33) = fVar67;
          *(float *)(pFVar34 + lVar33 + 4) = fVar69;
          *(float *)(pFVar34 + lVar33 + 8) = fVar76;
          lVar33 = lVar33 + 0xc;
          iVar18 = (this_00->Positions).ArrayNum;
          dVar70 = local_2e8;
        } while ((int)uVar19 < iVar18);
        uVar66 = (undefined4)local_2b0;
        uVar68 = (undefined4)((ulonglong)local_2b0 >> 0x20);
        FVar30 = local_2e0;
        pFVar34 = local_2d8;
        dVar77 = local_260;
        dVar51 = dStack_258;
      }
    }
    else {
      GetClothingSimulationData
                ((this_00->Positions).AllocatorInstance.Data,
                 (this_00->Normals).AllocatorInstance.Data,pTVar1,local_2f0);
    }
    if (local_355 != '\0') {
      iVar18 = (this_00->Normals).ArrayNum;
      pFVar32 = (this_00->Normals).AllocatorInstance.Data;
      pFVar26 = pFVar32 + (longlong)iVar18 * 0xc;
      local_308 = pFVar26;
      while( true ) {
        if ((this_00->Normals).ArrayNum != iVar18) {
          local_354[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_354);
          pFVar26 = local_308;
        }
        if (pFVar32 == pFVar26) break;
        *(uint *)pFVar32 = *(uint *)pFVar32 ^ uVar13;
        *(uint *)(pFVar32 + 4) = *(uint *)(pFVar32 + 4) ^ uVar13;
        *(uint *)(pFVar32 + 8) = *(uint *)(pFVar32 + 8) ^ uVar13;
        pFVar32 = pFVar32 + 0xc;
      }
    }
    iVar18 = (**(code **)(*(longlong *)**(undefined8 **)pFVar34 + 0x20))
                       ((longlong *)**(undefined8 **)pFVar34,local_340);
    pFVar34 = pFVar34 + 8;
    uVar28 = (ulonglong)local_310;
    this_00->LODIndex = iVar18;
    FVar31 = local_348;
    param_1 = (TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
               *)local_2a0;
    this = local_2a8;
  } while( true );
}

// ClearExternalCollisions @ 14dbc2c50

void __thiscall Chaos::FClothingSimulation::ClearExternalCollisions(FClothingSimulation *this)

{
  FClothCollisionData::Reset(&this->ExternalCollisionData);
  return;
}

// CreateActor @ 14dbc3df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulation::CreateActor
          (FClothingSimulation *this,USkeletalMeshComponent *param_1,UClothingAssetBase *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FClothingSimulationSolver *pFVar4;
  FClothingSimulationMesh *pFVar5;
  FClothingSimulationConfig *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothCreateActor> FVar23;
  UClass *pUVar24;
  TObjectPtr<UClothConfigBase> *pTVar25;
  UClass *pUVar26;
  FClothingSimulationContextCommon *pFVar27;
  double *pdVar28;
  FClothingSimulationSkeletalMesh *this_00;
  UChaosClothConfig *pUVar29;
  USkeletalMesh *pUVar30;
  FReferenceSkeleton *pFVar31;
  FClothingSimulationCollider *this_01;
  UChaosClothConfig *pUVar32;
  FClothingSimulationCloth *this_02;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  UChaosClothConfig *pUVar33;
  bool bVar34;
  FClothingSimulationCloth *local_res8;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  FName local_168;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> local_158;
  FName local_148;
  UChaosClothConfig *local_140;
  undefined8 local_138;
  undefined8 local_130;
  FName local_128;
  FName local_120;
  LARGE_INTEGER local_118;
  FString local_110;
  FString local_100;
  FStatMessage local_f0;
  FName local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  
  pUVar33 = (UChaosClothConfig *)0x0;
  bVar34 = -1 < CpuChannel->Enabled;
  local_res20 = param_3;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId342,"FClothingSimulation_CreateActor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
               ,0x156);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId342);
  }
  FVar23 = StatPtr_STAT_ChaosClothCreateActor;
  if (StatPtr_STAT_ChaosClothCreateActor ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothCreateActor>)0x0) {
    pFVar22 = ::FName::FName(&local_e0,"STAT_ChaosClothCreateActor");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothCreateActor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothCreateActor,*pFVar22,
                        L"Chaos Cloth Create Actor","STATGROUP_ChaosCloth","STATCAT_Advanced",
                        L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  FVar3 = *(FName *)FVar23;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_148.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                   ,0x157);
        bVar14 = true;
        bVar13 = true;
      }
    }
    bVar15 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar15 = true;
      local_168 = FVar3;
    }
  }
  if ((param_1 == (USkeletalMeshComponent *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOwnerComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                          ,0x159,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->Solver).Ptr == (FClothingSimulationSolver *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                          ,0x15a,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (param_2 == (UClothingAssetBase *)0x0) goto LAB_14dbc47c8;
  pUVar24 = Z_Construct_UClass_UClothingAssetCommon_NoRegister();
  iVar2 = (int)pUVar24->_padding_;
  if ((*(int *)(param_2->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar24->_padding_)) {
    param_2 = (UClothingAssetBase *)pUVar33;
  }
  if (this->ClothSharedSimConfig == (UChaosClothSharedSimConfig *)0x0) {
    pUVar24 = UChaosClothSharedSimConfig::StaticClass();
    pTVar25 = TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
                      *)&(((UChaosClothConfig *)param_2)->EdgeStiffnessWeighted).High,
                     (FName)pUVar24->_padding_);
    if (((pTVar25 == (TObjectPtr<UClothConfigBase> *)0x0) ||
        (pUVar29 = (UChaosClothConfig *)(pTVar25->field0_0x0).DebugPtr,
        pUVar29 == (UChaosClothConfig *)0x0)) ||
       (pUVar24 = (UClass *)pUVar29->_padding_, pUVar26 = UChaosClothSharedSimConfig::StaticClass(),
       pUVar24 != pUVar26)) {
      pUVar29 = pUVar33;
    }
    this->ClothSharedSimConfig = (UChaosClothSharedSimConfig *)pUVar29;
    UpdateSimulationFromSharedSimConfig(this);
    pFVar27 = GetClothingSimulationContext(this,param_1);
    if ((pFVar27 == (FClothingSimulationContextCommon *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Context",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                            ,0x16b,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar10 = __real_3ff0000000000000;
    if (this->bUseLocalSpaceSimulation != false) {
      dVar10 = (double)pFVar27->SolverGeometryScale;
    }
    if (dVar10 <= __real_3e45798ee0000000) {
      dVar10 = __real_3e45798ee0000000;
    }
    pFVar4 = (this->Solver).Ptr;
    dVar10 = __real_3ff0000000000000 / dVar10;
    auVar9._8_4_ = SUB84(dVar10,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    pFVar4->OldLocalSpaceScale = dVar10;
    pFVar4->LocalSpaceScale = (double)auVar9._8_8_;
    pFVar4 = (this->Solver).Ptr;
    if (this->bUseLocalSpaceSimulation == false) {
      pdVar28 = &local_c0;
      local_b0 = 0;
      local_c0 = 0.0;
      uStack_b8 = 0;
    }
    else {
      local_68 = (pFVar27->ComponentToWorld).Translation.XY.m128d_f64[0];
      dStack_60 = (pFVar27->ComponentToWorld).Translation.XY.m128d_f64[1];
      pdVar28 = &local_d8;
      local_58 = (pFVar27->ComponentToWorld).Translation.ZW.m128d_f64[0];
      local_d8 = local_68;
      dStack_d0 = dStack_60;
      local_c8 = local_58;
    }
    dVar11 = *pdVar28;
    dVar12 = pdVar28[1];
    dVar10 = pdVar28[2];
    *(double *)&pFVar4->LocalSpaceLocation = dVar11;
    *(double *)&(pFVar4->LocalSpaceLocation).field_0x8 = dVar12;
    *(double *)&pFVar4->OldLocalSpaceLocation = dVar11;
    *(double *)&(pFVar4->OldLocalSpaceLocation).field_0x8 = dVar12;
    *(double *)&(pFVar4->LocalSpaceLocation).field_0x10 = dVar10;
    *(double *)&(pFVar4->OldLocalSpaceLocation).field_0x10 = dVar10;
    pFVar4 = (this->Solver).Ptr;
    if (this->bUseLocalSpaceSimulation == false) {
      pdVar28 = &local_88;
      local_88 = UE::Math::TQuat<double>::Identity.X;
      dStack_80 = UE::Math::TQuat<double>::Identity.Y;
      local_78 = UE::Math::TQuat<double>::Identity.Z;
      dStack_70 = UE::Math::TQuat<double>::Identity.W;
    }
    else {
      pdVar28 = &local_a8;
      local_a8 = (pFVar27->ComponentToWorld).Rotation.XY.m128d_f64[0];
      dStack_a0 = (pFVar27->ComponentToWorld).Rotation.XY.m128d_f64[1];
      local_98 = (pFVar27->ComponentToWorld).Rotation.ZW.m128d_f64[0];
      dStack_90 = (pFVar27->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    }
    dVar10 = pdVar28[1];
    dVar11 = pdVar28[2];
    dVar12 = pdVar28[3];
    *(double *)&pFVar4->LocalSpaceRotation = *pdVar28;
    *(double *)&(pFVar4->LocalSpaceRotation).field_0x8 = dVar10;
    *(double *)&(pFVar4->LocalSpaceRotation).field_0x10 = dVar11;
    *(double *)&(pFVar4->LocalSpaceRotation).field_0x18 = dVar12;
  }
  else {
    pUVar24 = UChaosClothSharedSimConfig::StaticClass();
    pTVar25 = TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
                      *)&(((UChaosClothConfig *)param_2)->EdgeStiffnessWeighted).High,
                     (FName)pUVar24->_padding_);
    if (((pTVar25 == (TObjectPtr<UClothConfigBase> *)0x0) ||
        (pUVar29 = (UChaosClothConfig *)(pTVar25->field0_0x0).DebugPtr,
        pUVar29 == (UChaosClothConfig *)0x0)) ||
       (pUVar24 = (UClass *)pUVar29->_padding_, pUVar26 = UChaosClothSharedSimConfig::StaticClass(),
       pUVar24 != pUVar26)) {
      pUVar29 = pUVar33;
    }
    if (((UChaosClothConfig *)this->ClothSharedSimConfig != pUVar29) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClothSharedSimConfig == Asset->GetClothConfig<UChaosClothSharedSimConfig>()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                            ,0x175,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pUVar24 = UChaosClothConfig::StaticClass();
  pTVar25 = TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
                    *)&(((UChaosClothConfig *)param_2)->EdgeStiffnessWeighted).High,
                   (FName)pUVar24->_padding_);
  if (pTVar25 == (TObjectPtr<UClothConfigBase> *)0x0) {
LAB_14dbc474f:
    if ((byte)LogChaosCloth._0_1_ < 3) goto LAB_14dbc47c8;
    lVar7 = param_1->_padding_;
    if (lVar7 != 0) {
      local_120 = *(FName *)(lVar7 + 0x18);
      ::FName::ToString(&local_120,&local_100);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    bVar16 = lVar7 == 0;
  }
  else {
    pUVar29 = (UChaosClothConfig *)(pTVar25->field0_0x0).DebugPtr;
    if ((pUVar29 == (UChaosClothConfig *)0x0) ||
       (pUVar24 = (UClass *)pUVar29->_padding_, local_140 = pUVar29,
       pUVar26 = UChaosClothConfig::StaticClass(), pUVar24 != pUVar26)) {
      local_140 = (UChaosClothConfig *)0x0;
      pUVar29 = pUVar33;
    }
    if (pUVar29 == (UChaosClothConfig *)0x0) goto LAB_14dbc474f;
    this_00 = ::operator_new(0x30);
    pUVar29 = pUVar33;
    if (this_00 != (FClothingSimulationSkeletalMesh *)0x0) {
      pUVar29 = (UChaosClothConfig *)
                FClothingSimulationSkeletalMesh::FClothingSimulationSkeletalMesh
                          (this_00,(UClothingAssetCommon *)param_2,param_1);
    }
    uVar17 = (this->Meshes).ArrayNum;
    piVar1 = &(this->Meshes).ArrayMax;
    if (uVar17 == *piVar1) {
      uVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->Meshes).AllocatorInstance,piVar1);
    }
    (this->Meshes).ArrayNum = uVar17 + 1;
    *(UChaosClothConfig **)((this->Meshes).AllocatorInstance.Data + (longlong)(int)uVar17 * 8) =
         pUVar29;
    pUVar30 = CastChecked<USkeletalMesh,UObject>
                        ((UObject *)((UChaosClothConfig *)param_2)->_padding_);
    pFVar31 = (FReferenceSkeleton *)(**(code **)(pUVar30->_padding_ + 800))(pUVar30);
    this_01 = ::operator_new(0x88);
    pUVar29 = pUVar33;
    if (this_01 != (FClothingSimulationCollider *)0x0) {
      pUVar29 = (UChaosClothConfig *)
                FClothingSimulationCollider::FClothingSimulationCollider
                          (this_01,(((TObjectPtr<UPhysicsAsset> *)
                                    &((UChaosClothConfig *)param_2)->MinPerParticleMass)->field0_0x0
                                   ).DebugPtr,pFVar31);
    }
    uVar18 = (this->Colliders).ArrayNum;
    piVar1 = &(this->Colliders).ArrayMax;
    if (uVar18 == *piVar1) {
      uVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->Colliders).AllocatorInstance,piVar1);
    }
    (this->Colliders).ArrayNum = uVar18 + 1;
    *(UChaosClothConfig **)((this->Colliders).AllocatorInstance.Data + (longlong)(int)uVar18 * 8) =
         pUVar29;
    uVar19 = 0;
    if ((int)uVar18 < (this->Colliders).ArrayNum) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(FClothCollisionData **)
     (*(longlong *)((this->Colliders).AllocatorInstance.Data + (longlong)(int)uVar18 * 8) + 0x10) =
         &this->ExternalCollisionData;
    pUVar32 = ::operator_new(0x28);
    pUVar29 = pUVar33;
    if (pUVar32 != (UChaosClothConfig *)0x0) {
      *(undefined1 *)&pUVar32->_padding_ = 0;
      pUVar32->_padding_ = 0;
      pUVar32->_padding_ = 0;
      pUVar32->_padding_ = 0;
      (((TArray<TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>,TSizedDefaultAllocator<32>_>
         *)&pUVar32->_padding_)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pUVar29 = pUVar32;
    }
    uVar19 = (this->Configs).ArrayNum;
    if (uVar19 == (this->Configs).ArrayMax) {
      uVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->Configs).AllocatorInstance,&(this->Configs).ArrayMax);
    }
    (this->Configs).ArrayNum = uVar19 + 1;
    *(UChaosClothConfig **)((this->Configs).AllocatorInstance.Data + (longlong)(int)uVar19 * 8) =
         pUVar29;
    uVar20 = 0;
    uVar21 = uVar20;
    if ((int)uVar19 < (this->Configs).ArrayNum) {
      uVar21 = ~uVar19 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FClothingSimulationConfig::Initialize
              (*(FClothingSimulationConfig **)
                ((this->Configs).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),local_140,
               (UChaosClothSharedSimConfig *)0x0,true);
    uVar21 = uVar20;
    if ((int)uVar18 < (this->Colliders).ArrayNum) {
      uVar21 = ~uVar18 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_138 = *(undefined8 *)
                 ((this->Colliders).AllocatorInstance.Data + (longlong)(int)uVar18 * 8);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    *(undefined8 *)local_158.AllocatorInstance.Data = local_138;
    uVar18 = uVar20;
    if ((int)uVar17 < (this->Meshes).ArrayNum) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = *(FClothingSimulationMesh **)
              ((this->Meshes).AllocatorInstance.Data + (longlong)(int)uVar17 * 8);
    uVar17 = uVar20;
    if ((int)uVar19 < (this->Configs).ArrayNum) {
      uVar17 = ~uVar19 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = *(FClothingSimulationConfig **)
              ((this->Configs).AllocatorInstance.Data + (longlong)(int)uVar19 * 8);
    this_02 = ::operator_new(0x160);
    if (this_02 == (FClothingSimulationCloth *)0x0) {
      local_res8 = (FClothingSimulationCloth *)0x0;
    }
    else {
      local_res8 = FClothingSimulationCloth::FClothingSimulationCloth
                             (this_02,pFVar6,pFVar5,&local_158,local_res20);
    }
    uVar17 = (this->Cloths).ArrayNum;
    piVar1 = &(this->Cloths).ArrayMax;
    if (uVar17 == *piVar1) {
      uVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->Cloths).AllocatorInstance,piVar1);
    }
    (this->Cloths).ArrayNum = uVar17 + 1;
    local_130 = 0;
    *(FClothingSimulationCloth **)
     ((this->Cloths).AllocatorInstance.Data + (longlong)(int)uVar17 * 8) = local_res8;
    TDefaultDelete<Chaos::FClothingSimulationCloth>::operator()
              ((TDefaultDelete<Chaos::FClothingSimulationCloth> *)&local_130,
               (FClothingSimulationCloth *)0x0);
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    pFVar4 = (this->Solver).Ptr;
    uVar18 = uVar20;
    if ((int)uVar17 < (this->Cloths).ArrayNum) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FClothingSimulationSolver::AddCloth
              (pFVar4,*(FClothingSimulationCloth **)
                       ((this->Cloths).AllocatorInstance.Data + (longlong)(int)uVar17 * 8));
    if ((int)uVar17 < (this->Cloths).ArrayNum) {
      uVar20 = ~uVar17 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)((this->Cloths).AllocatorInstance.Data + (longlong)(int)uVar17 * 8);
    LOCK();
    this->NumCloths = (TAtomic<int>)(this->Cloths).ArrayNum;
    UNLOCK();
    LOCK();
    this->NumKinematicParticles =
         (TAtomic<int>)((int)this->NumKinematicParticles + *(int *)(lVar7 + 0x150));
    UNLOCK();
    LOCK();
    this->NumDynamicParticles =
         (TAtomic<int>)((int)this->NumDynamicParticles + *(int *)(lVar7 + 0x154));
    UNLOCK();
    if ((byte)LogChaosCloth._0_1_ < 6) goto LAB_14dbc47c8;
    if (param_1->_padding_ != 0) {
      local_128 = *(FName *)(param_1->_padding_ + 0x18);
      pUVar33 = (UChaosClothConfig *)0x2;
      ::FName::ToString(&local_128,&local_110);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    bVar16 = pUVar33 == (UChaosClothConfig *)0x0;
    local_100.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
  }
  if ((!bVar16) && (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
LAB_14dbc47c8:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar15) && (local_168 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_f0.NameAndInfo.Index = local_168.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = local_168.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_118);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_118.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_118.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_118.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_118.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_f0);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateContext @ 14dbc7330

IClothingSimulationContext * __thiscall
Chaos::FClothingSimulation::CreateContext(FClothingSimulation *this)

{
  FClothingSimulationContextCommon *pFVar1;
  
  pFVar1 = ::operator_new(0x160);
  if (pFVar1 != (FClothingSimulationContextCommon *)0x0) {
    pFVar1 = FClothingSimulationContextCommon::FClothingSimulationContextCommon(pFVar1);
    return (IClothingSimulationContext *)pFVar1;
  }
  return (IClothingSimulationContext *)0x0;
}

// DestroyActors @ 14dbd3d20

void __thiscall Chaos::FClothingSimulation::DestroyActors(FClothingSimulation *this)

{
  (**(code **)(this->_padding_ + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00014dbd3d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this);
  return;
}

// DestroyContext @ 14dbd3d50

void __thiscall
Chaos::FClothingSimulation::DestroyContext
          (FClothingSimulation *this,IClothingSimulationContext *param_1)

{
  if (param_1 != (IClothingSimulationContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dbd3d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}

// DisableGravityOverride @ 14dbd4a00

void __thiscall Chaos::FClothingSimulation::DisableGravityOverride(FClothingSimulation *this)

{
  this->bUseGravityOverride = false;
  return;
}

// EndCreateActor @ 14dbefa20

void __thiscall Chaos::FClothingSimulation::EndCreateActor(FClothingSimulation *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  USkeletalMeshComponent *this_01;
  ForElementType<unsigned_int> FVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  USkeletalMesh *pUVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_68;
  
  (this->LODHasAnyRenderClothMappingData).NumBits = 0;
  pFVar18 = (this->Cloths).AllocatorInstance.Data;
  uVar3 = (this->Cloths).ArrayNum;
  uVar13 = (ulonglong)(int)uVar3;
  pFVar1 = pFVar18 + uVar13 * 8;
  do {
    if ((this->Cloths).ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar18 == pFVar1) {
      return;
    }
    local_res20 = (int)(*(longlong **)pFVar18)[4];
    lVar5 = **(longlong **)pFVar18;
    if ((((lVar5 != 0) &&
         (this_01 = *(USkeletalMeshComponent **)(lVar5 + 0x28),
         this_01 != (USkeletalMeshComponent *)0x0)) &&
        (pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01),
        pUVar11 != (USkeletalMesh *)0x0)) &&
       (plVar12 = (longlong *)(**(code **)(pUVar11->_padding_ + 0x398))(pUVar11),
       plVar12 != (longlong *)0x0)) {
      this_00 = &this->LODHasAnyRenderClothMappingData;
      if ((this->LODHasAnyRenderClothMappingData).NumBits < (int)plVar12[1]) {
        TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(this_00,(int)plVar12[1],false);
      }
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        local_68 = 0;
        do {
          if ((((int)uVar16 < 0) || ((this->LODHasAnyRenderClothMappingData).NumBits <= (int)uVar16)
              ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar6 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<unsigned_int>)this_00;
          if (FVar6 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = FVar6;
          }
          uVar17 = uVar16;
          if ((int)uVar16 < 0) {
            uVar17 = uVar16 + 0x1f;
          }
          lVar5 = (longlong)((int)uVar17 >> 5) * 4;
          uVar17 = 1 << ((byte)uVar16 & 0x1f);
          if ((*(uint *)((longlong)FVar14 + lVar5) & uVar17) == 0) {
            uVar10 = 0;
            if ((int)uVar16 < (int)plVar12[1]) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = *(longlong *)(local_68 + *plVar12);
            iVar4 = *(int *)(lVar7 + 0x18);
            lVar15 = *(longlong *)(lVar7 + 0x10);
            lVar19 = (longlong)iVar4 * 0x118 + lVar15;
            while( true ) {
              if (*(int *)(lVar7 + 0x18) != iVar4) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res18);
              }
              if (lVar15 == lVar19) break;
              if (*(int *)(lVar15 + 0x30) != 0) {
                if ((*(int *)(lVar15 + 0x30) < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if ((*(int *)(*(longlong *)(lVar15 + 0x28) + 8) != 0) &&
                   (*(short *)(lVar15 + 0x50) == local_res20)) {
                  if ((((int)uVar16 < 0) ||
                      ((this->LODHasAnyRenderClothMappingData).NumBits <= (int)uVar16)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar9)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  FVar6 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
                  FVar14 = (ForElementType<unsigned_int>)this_00;
                  if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                    FVar14 = FVar6;
                  }
                  puVar2 = (uint *)((longlong)FVar14 + lVar5);
                  *puVar2 = *puVar2 | uVar17;
                }
              }
              lVar15 = lVar15 + 0x118;
            }
          }
          local_68 = local_68 + 8;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
    }
    uVar13 = (ulonglong)uVar3;
    pFVar18 = pFVar18 + 8;
  } while( true );
}

// FillContextAndPrepareTick @ 14dbf2d30

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
Chaos::FClothingSimulation::FillContextAndPrepareTick
          (FClothingSimulation *this,USkeletalMeshComponent *param_1,float param_2,
          IClothingSimulationContext *param_3,bool param_4,bool param_5)

{
  FClothingSimulationSolver *pFVar1;
  UWorld *pUVar2;
  double *pdVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [56];
  TVector<double>_u_0 local_a0;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (!param_5) {
    if (((param_1 != (USkeletalMeshComponent *)0x0) &&
        (((pUVar2 = (UWorld *)param_1->_padding_, pUVar2 != (UWorld *)0x0 ||
          (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
          pUVar2 != (UWorld *)0x0)) &&
         ((pUVar2->PhysicsField).field0_0x0.DebugPtr != (UPhysicsFieldComponent *)0x0)))) &&
       ((this->Solver).Ptr != (FClothingSimulationSolver *)0x0)) {
      pdVar3 = (double *)
               (**(code **)(param_1->_padding_ + 0x598))(param_1,local_d8,&param_1->_padding_);
      pFVar1 = (this->Solver).Ptr;
      local_a0._s_0.X = *pdVar3 - pdVar3[3];
      local_a0._s_0.Y = pdVar3[1] - pdVar3[4];
      local_80 = pdVar3[4] + pdVar3[1];
      local_70 = 1;
      local_88 = pdVar3[3] + *pdVar3;
      local_a0._s_0.Z = pdVar3[2] - pdVar3[5];
      local_78 = pdVar3[5] + pdVar3[2];
      UPhysicsFieldComponent::FillTransientCommands
                ((pUVar2->PhysicsField).field0_0x0.DebugPtr,false,(TBox<double> *)&local_a0._s_0,
                 pFVar1->Time,&(pFVar1->PerSolverField).TransientCommands);
      pFVar1 = (this->Solver).Ptr;
      UPhysicsFieldComponent::FillPersistentCommands
                ((pUVar2->PhysicsField).field0_0x0.DebugPtr,false,(TBox<double> *)&local_a0._s_0,
                 pFVar1->Time,&(pFVar1->PerSolverField).PersistentCommands);
    }
    FClothingSimulationCommon::FillContextAndPrepareTick
              ((FClothingSimulationCommon *)this,param_1,param_2,param_3,param_4,false);
  }
  return;
}

// ForceClothNextUpdateTeleportAndReset_AnyThread @ 14dbf3510

void __thiscall
Chaos::FClothingSimulation::ForceClothNextUpdateTeleportAndReset_AnyThread
          (FClothingSimulation *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Cloths).AllocatorInstance.Data;
  iVar2 = (this->Cloths).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    pFVar4 = pFVar4 + 8;
    *(undefined1 *)(lVar3 + 0x44) = 1;
  }
  return;
}

// GetBounds @ 14dbf8110

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
Chaos::FClothingSimulation::GetBounds
          (FClothingSimulation *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          USkeletalMeshComponent *param_1)

{
  FClothingSimulationSolver *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  TBoxSphereBounds<double,double> *pTVar14;
  FClothingSimulationContextCommon *pFVar15;
  FClothingSimulationContextCommon *pFVar16;
  uint uVar17;
  undefined4 uVar18;
  FClothingSimulationSolver *this_00;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148 [2];
  undefined7 extraout_var;
  
  if (((this->Solver).Ptr == (FClothingSimulationSolver *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                          ,0x319,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
    return pTVar14;
  }
  this_00 = (this->Solver).Ptr;
  FClothingSimulationSolver::CalculateBounds(this_00,__return_storage_ptr__);
  uVar11 = _UNK_15061cc8c;
  uVar10 = _UNK_15061cc88;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (this->bUseLocalSpaceSimulation == false) {
    if (param_1 == (USkeletalMeshComponent *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar15 = GetClothingSimulationContext(this,param_1);
    uVar18 = SUB84(this,0);
    pFVar16 = pFVar15;
    if (pFVar15 == (FClothingSimulationContextCommon *)0x0) {
      uVar18 = 0x5084c518;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                          ,0x326,L"");
      pFVar16 = (FClothingSimulationContextCommon *)CONCAT71(extraout_var,bVar12);
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
        return pTVar14;
      }
    }
    uVar11 = _UNK_15061cc8c;
    uVar10 = _UNK_15061cc88;
    uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    lVar19 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c &
                               *(uint *)((longlong)(pFVar15->ComponentToWorld).Scale3D.ZW.m128d_f64
                                        + 0xc),
                               _UNK_15061cc88 &
                               *(uint *)((pFVar15->ComponentToWorld).Scale3D.ZW.m128d_f64 + 1)));
    auVar40._8_4_ = (int)lVar19;
    auVar40._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                           *(uint *)((longlong)(pFVar15->ComponentToWorld).Scale3D.ZW.m128d_f64 + 4)
                           ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(pFVar15->ComponentToWorld).Scale3D.ZW.m128d_f64));
    auVar40._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar17 = movmskpd(uVar18,auVar40);
    auVar26._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(_UNK_15061cc8c &
                           *(uint *)((longlong)(pFVar15->ComponentToWorld).Scale3D.XY.m128d_f64 +
                                    0xc),
                           _UNK_15061cc88 &
                           *(uint *)((pFVar15->ComponentToWorld).Scale3D.XY.m128d_f64 + 1)));
    auVar26._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                           *(uint *)((longlong)(pFVar15->ComponentToWorld).Scale3D.XY.m128d_f64 + 4)
                           ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(pFVar15->ComponentToWorld).Scale3D.XY.m128d_f64));
    iVar13 = movmskpd((int)pFVar16,auVar26);
    if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
      local_288.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_288.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_288.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_288.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_288.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_288.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(&pFVar15->ComponentToWorld,&local_288);
    }
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_288,local_148);
    auVar40 = *(undefined1 (*) [16])&(__return_storage_ptr__->BoxExtent).field0_0x0;
    dVar38 = auVar40._0_8_;
    dVar33 = auVar40._8_8_;
    dVar6 = (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
    dVar7 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
    dVar32 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
    dVar20 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
    auVar27._8_4_ = auVar40._0_4_;
    auVar27._0_8_ = dVar38;
    auVar27._12_4_ = auVar40._4_4_;
    dVar31 = auVar27._8_8_ * local_148[0].M[0][1];
    auVar28._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar38 * local_148[0].M[0][0]) >> 0x20) & uVar9,
                          SUB84(dVar38 * local_148[0].M[0][0],0) & uVar8);
    auVar28._8_4_ = SUB84(dVar31,0) & uVar10;
    auVar28._12_4_ = (uint)((ulonglong)dVar31 >> 0x20) & uVar11;
    dVar34 = (double)CONCAT44((uint)((ulonglong)(dVar33 * local_148[0].M[1][0]) >> 0x20) & uVar9,
                              SUB84(dVar33 * local_148[0].M[1][0],0) & uVar8) + auVar28._0_8_ +
             (double)CONCAT44((uint)((ulonglong)(dVar32 * local_148[0].M[2][0]) >> 0x20) & uVar9,
                              SUB84(dVar32 * local_148[0].M[2][0],0) & uVar8);
    dVar37 = (double)CONCAT44((uint)((ulonglong)(dVar33 * local_148[0].M[1][1]) >> 0x20) & uVar11,
                              SUB84(dVar33 * local_148[0].M[1][1],0) & uVar10) + auVar28._8_8_ +
             (double)CONCAT44((uint)((ulonglong)(dVar32 * local_148[0].M[2][1]) >> 0x20) & uVar11,
                              SUB84(dVar32 * local_148[0].M[2][1],0) & uVar10);
    dVar31 = (double)CONCAT44((uint)((ulonglong)(dVar33 * local_148[0].M[1][2]) >> 0x20) & uVar9,
                              SUB84(dVar33 * local_148[0].M[1][2],0) & uVar8) +
             (double)CONCAT44((uint)((ulonglong)(dVar38 * local_148[0].M[0][2]) >> 0x20) & uVar9,
                              SUB84(dVar38 * local_148[0].M[0][2],0) & uVar8) +
             (double)CONCAT44((uint)((ulonglong)(dVar32 * local_148[0].M[2][2]) >> 0x20) & uVar9,
                              SUB84(dVar32 * local_148[0].M[2][2],0) & uVar8);
    local_1c8.M[3][0] =
         local_148[0].M[1][0] * dVar7 + local_148[0].M[0][0] * dVar6 + local_148[0].M[2][0] * dVar20
         + local_148[0].M[3][0];
    local_1c8.M[3][1] =
         local_148[0].M[1][1] * dVar7 + local_148[0].M[0][1] * dVar6 + local_148[0].M[2][1] * dVar20
         + local_148[0].M[3][1];
    auVar36._0_8_ =
         local_148[0].M[1][0] * local_148[0].M[1][0] + local_148[0].M[0][0] * local_148[0].M[0][0] +
         local_148[0].M[2][0] * local_148[0].M[2][0];
    auVar36._8_8_ =
         local_148[0].M[1][1] * local_148[0].M[1][1] + local_148[0].M[0][1] * local_148[0].M[0][1] +
         local_148[0].M[2][1] * local_148[0].M[2][1];
    auVar29._8_4_ = SUB84(auVar36._8_8_,0);
    auVar29._0_8_ = auVar36._0_8_;
    auVar29._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
    auVar30._8_8_ = auVar36._8_8_;
    auVar30._0_8_ = auVar29._8_8_;
    auVar40 = maxpd(auVar36,auVar30);
    dVar32 = local_148[0].M[1][2] * local_148[0].M[1][2] +
             local_148[0].M[0][2] * local_148[0].M[0][2] +
             local_148[0].M[2][2] * local_148[0].M[2][2];
    local_1c8.M[3][2] =
         local_148[0].M[1][2] * dVar7 + local_148[0].M[0][2] * dVar6 + local_148[0].M[2][2] * dVar20
         + local_148[0].M[3][2];
    auVar5._8_4_ = SUB84(dVar32,0);
    auVar5._0_8_ = dVar32;
    auVar5._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    auVar40 = maxpd(auVar40,auVar5);
    dVar32 = SQRT(dVar31 * dVar31 + dVar34 * dVar34 + dVar37 * dVar37);
    dVar20 = SQRT(auVar40._0_8_) * __return_storage_ptr__->SphereRadius;
    if (dVar20 <= dVar32) {
      dVar32 = dVar20;
    }
  }
  else {
    pFVar1 = (this->Solver).Ptr;
    local_228.Translation.XY.m128d_f64[0] = *(double *)&pFVar1->LocalSpaceLocation;
    local_228.Translation.XY.m128d_f64[1] = *(double *)&(pFVar1->LocalSpaceLocation).field_0x8;
    local_228.Rotation.XY.m128d_f64[0] = *(double *)&pFVar1->LocalSpaceRotation;
    local_228.Rotation.XY.m128d_f64[1] = *(double *)&(pFVar1->LocalSpaceRotation).field_0x8;
    local_228.Rotation.ZW.m128d_f64[0] = *(double *)&(pFVar1->LocalSpaceRotation).field_0x10;
    local_228.Rotation.ZW.m128d_f64[1] = *(double *)&(pFVar1->LocalSpaceRotation).field_0x18;
    local_228.Translation.ZW.m128d_f64[0] = *(double *)&(pFVar1->LocalSpaceLocation).field_0x10;
    local_228.Translation.ZW.m128d_f64[1] = 0.0;
    local_228.Scale3D.ZW.m128d_f64[0]._0_4_ = ___xmm_00000000000000003ff0000000000000;
    local_228.Scale3D.ZW.m128d_f64[0]._4_4_ = _UNK_150689514;
    local_228.Scale3D.ZW.m128d_f64[1]._0_4_ = _UNK_150689518;
    local_228.Scale3D.ZW.m128d_f64[1]._4_4_ = _UNK_15068951c;
    local_228.Scale3D.XY.m128d_f64[0]._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
    local_228.Scale3D.XY.m128d_f64[0]._4_4_ = _UNK_150689684;
    local_228.Scale3D.XY.m128d_f64[1]._0_4_ = _UNK_150689688;
    local_228.Scale3D.XY.m128d_f64[1]._4_4_ = _UNK_15068968c;
    lVar19 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c & _UNK_15068951c,_UNK_15061cc88 & _UNK_150689518));
    auVar3._8_4_ = (int)lVar19;
    auVar3._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689514,
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     ___xmm_00000000000000003ff0000000000000));
    auVar3._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar17 = movmskpd((int)this_00,auVar3);
    auVar21._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(_UNK_15061cc8c & _UNK_15068968c,_UNK_15061cc88 & _UNK_150689688));
    auVar21._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689684,
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           ___xmm_3ff00000000000003ff0000000000000));
    iVar13 = movmskpd((int)pFVar1,auVar21);
    if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
      local_2e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_2e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_2e8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_2e8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_2e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_2e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(&local_228,&local_2e8);
    }
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_2e8,&local_1c8);
    dVar31 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    dVar6 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
    dVar7 = (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
    dVar33 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
    dVar32 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
    dVar20 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
    auVar22._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_1c8.M[0][0] * dVar31) >> 0x20) & uVar9,
                          SUB84(local_1c8.M[0][0] * dVar31,0) & uVar8);
    auVar22._8_4_ = SUB84(local_1c8.M[0][1] * dVar31,0) & uVar10;
    auVar22._12_4_ = (uint)((ulonglong)(local_1c8.M[0][1] * dVar31) >> 0x20) & uVar11;
    auVar35._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_1c8.M[1][0] * dVar6) >> 0x20) & uVar9,
                          SUB84(local_1c8.M[1][0] * dVar6,0) & uVar8);
    auVar35._8_4_ = SUB84(local_1c8.M[1][1] * dVar6,0) & uVar10;
    auVar35._12_4_ = (uint)((ulonglong)(local_1c8.M[1][1] * dVar6) >> 0x20) & uVar11;
    auVar23._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_1c8.M[2][0] * dVar32) >> 0x20) & uVar9,
                          SUB84(local_1c8.M[2][0] * dVar32,0) & uVar8);
    auVar23._8_4_ = SUB84(local_1c8.M[2][1] * dVar32,0) & uVar10;
    auVar23._12_4_ = (uint)((ulonglong)(local_1c8.M[2][1] * dVar32) >> 0x20) & uVar11;
    dVar34 = auVar35._0_8_ + auVar22._0_8_ + auVar23._0_8_;
    dVar37 = auVar35._8_8_ + auVar22._8_8_ + auVar23._8_8_;
    dVar31 = (double)CONCAT44((uint)((ulonglong)(local_1c8.M[1][2] * dVar6) >> 0x20) & uVar9,
                              SUB84(local_1c8.M[1][2] * dVar6,0) & uVar8) +
             (double)CONCAT44((uint)((ulonglong)(local_1c8.M[0][2] * dVar31) >> 0x20) & uVar9,
                              SUB84(local_1c8.M[0][2] * dVar31,0) & uVar8) +
             (double)CONCAT44((uint)((ulonglong)(local_1c8.M[2][2] * dVar32) >> 0x20) & uVar9,
                              SUB84(local_1c8.M[2][2] * dVar32,0) & uVar8);
    local_1c8.M[3][0] =
         local_1c8.M[1][0] * dVar33 + local_1c8.M[0][0] * dVar7 + local_1c8.M[2][0] * dVar20 +
         local_1c8.M[3][0];
    local_1c8.M[3][1] =
         local_1c8.M[1][1] * dVar33 + local_1c8.M[0][1] * dVar7 + local_1c8.M[2][1] * dVar20 +
         local_1c8.M[3][1];
    auVar39._0_8_ =
         local_1c8.M[1][0] * local_1c8.M[1][0] + local_1c8.M[0][0] * local_1c8.M[0][0] +
         local_1c8.M[2][0] * local_1c8.M[2][0];
    auVar39._8_8_ =
         local_1c8.M[1][1] * local_1c8.M[1][1] + local_1c8.M[0][1] * local_1c8.M[0][1] +
         local_1c8.M[2][1] * local_1c8.M[2][1];
    auVar24._8_4_ = SUB84(auVar39._8_8_,0);
    auVar24._0_8_ = auVar39._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
    auVar25._8_8_ = auVar39._8_8_;
    auVar25._0_8_ = auVar24._8_8_;
    auVar40 = maxpd(auVar39,auVar25);
    dVar32 = local_1c8.M[1][2] * local_1c8.M[1][2] + local_1c8.M[0][2] * local_1c8.M[0][2] +
             local_1c8.M[2][2] * local_1c8.M[2][2];
    local_1c8.M[3][2] =
         local_1c8.M[1][2] * dVar33 + local_1c8.M[0][2] * dVar7 + local_1c8.M[2][2] * dVar20 +
         local_1c8.M[3][2];
    auVar4._8_4_ = SUB84(dVar32,0);
    auVar4._0_8_ = dVar32;
    auVar4._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    auVar40 = maxpd(auVar40,auVar4);
    dVar32 = SQRT(dVar31 * dVar31 + dVar34 * dVar34 + dVar37 * dVar37);
    dVar20 = SQRT(auVar40._0_8_) * __return_storage_ptr__->SphereRadius;
    if (dVar20 <= dVar32) {
      dVar32 = dVar20;
    }
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_1c8.M[3][0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_1c8.M[3][1];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_1c8.M[3][2];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar34;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar37;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar31;
  __return_storage_ptr__->SphereRadius = dVar32;
  return __return_storage_ptr__;
}

// GetCloth @ 14dbf8790

FClothingSimulationCloth * __thiscall
Chaos::FClothingSimulation::GetCloth(FClothingSimulation *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Cloths).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Cloths).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FClothingSimulationCloth *)0x0;
    }
    if ((*(FClothingSimulationCloth **)pFVar2)->GroupId == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  return *(FClothingSimulationCloth **)pFVar2;
}

// GetClothingSimulationContext @ 14dbf8bb0

FClothingSimulationContextCommon * __thiscall
Chaos::FClothingSimulation::GetClothingSimulationContext
          (FClothingSimulation *this,USkeletalMeshComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar2 = (param_1->ClothingSimulationInstances).ArrayNum;
  pFVar3 = (param_1->ClothingSimulationInstances).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((param_1->ClothingSimulationInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FClothingSimulationInstance_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    if (*(FClothingSimulation **)pFVar3 == this) {
      return *(FClothingSimulationContextCommon **)(pFVar3 + 8);
    }
    pFVar3 = pFVar3 + 0x28;
  }
  return (FClothingSimulationContextCommon *)0x0;
}

// GetCollisions @ 14dbfa6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulation::GetCollisions
          (FClothingSimulation *this,FClothCollisionData *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FClothCollisionData *pFVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FClothCollisionData local_78;
  
  FClothCollisionData::Reset(param_1);
  pFVar8 = (this->Cloths).AllocatorInstance.Data;
  iVar3 = (this->Cloths).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Cloths).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar5 = *(longlong *)pFVar8;
    puVar7 = *(undefined8 **)(lVar5 + 0x10);
    iVar4 = *(int *)(lVar5 + 0x18);
    puVar2 = puVar7 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x18) != iVar4) {
        `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar7 == puVar2) break;
      pFVar6 = FClothingSimulationCollider::GetCollisionData
                         ((FClothingSimulationCollider *)*puVar7,&local_78,(this->Solver).Ptr,
                          *(FClothingSimulationCloth **)pFVar8);
      FClothCollisionData::Append(param_1,pFVar6);
      if (local_78.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Boxes.AllocatorInstance.Data);
      }
      DestructItems<FClothCollisionPrim_Convex,int>
                ((FClothCollisionPrim_Convex *)local_78.Convexes.AllocatorInstance.Data,
                 local_78.Convexes.ArrayNum);
      if ((FClothCollisionPrim_Convex *)local_78.Convexes.AllocatorInstance.Data !=
          (FClothCollisionPrim_Convex *)0x0) {
        FMemory::Free(local_78.Convexes.AllocatorInstance.Data);
      }
      if (local_78.SphereConnections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.SphereConnections.AllocatorInstance.Data);
      }
      if (local_78.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Spheres.AllocatorInstance.Data);
      }
      puVar7 = puVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  if (param_2) {
    FClothCollisionData::Append(param_1,&this->ExternalCollisionData);
  }
  if (6 < (byte)LogChaosCloth._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
  }
  return;
}

// GetNumCloths @ 14dbfcc90

int __thiscall Chaos::FClothingSimulation::GetNumCloths(FClothingSimulation *this)

{
  return (int)this->NumCloths;
}

// GetNumDynamicParticles @ 14dbfcca0

int __thiscall Chaos::FClothingSimulation::GetNumDynamicParticles(FClothingSimulation *this)

{
  return (int)this->NumDynamicParticles;
}

// GetNumIterations @ 14dbfcda0

int __thiscall Chaos::FClothingSimulation::GetNumIterations(FClothingSimulation *this)

{
  return (int)this->NumIterations;
}

// GetNumKinematicParticles @ 14dbfce30

int __thiscall Chaos::FClothingSimulation::GetNumKinematicParticles(FClothingSimulation *this)

{
  return (int)this->NumKinematicParticles;
}

// GetNumSubsteps @ 14dbfd180

int __thiscall Chaos::FClothingSimulation::GetNumSubsteps(FClothingSimulation *this)

{
  return (int)this->NumSubsteps;
}

// GetSimulationTime @ 14dbfffa0

float __thiscall Chaos::FClothingSimulation::GetSimulationTime(FClothingSimulation *this)

{
  return (float)this->SimulationTime;
}

// HardResetSimulation @ 14dc01e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulation::HardResetSimulation
          (FClothingSimulation *this,IClothingSimulationContext *param_1)

{
  IClothingSimulationContext IVar1;
  int iVar2;
  uint uVar3;
  FClothingSimulationSolver *pFVar4;
  undefined8 *puVar5;
  FClothingSimulationMesh *pFVar6;
  void *pvVar7;
  FClothingSimulationConfig *pFVar8;
  FClothingSimulationCloth *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  IClothingSimulationContext IVar14;
  IClothingSimulationContext IVar15;
  bool bVar16;
  IClothingSimulationContext *pIVar17;
  UClass *pUVar18;
  TObjectPtr<UClothConfigBase> *pTVar19;
  UClass *pUVar20;
  FClothingSimulationCloth *pFVar21;
  longlong lVar22;
  FScriptContainerElement *this_00;
  UChaosClothConfig *pUVar23;
  undefined1 auStackX_8 [8];
  FScriptContainerElement *pFStackX_10;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> TStack_e8;
  TDefaultDelete<Chaos::FClothingSimulationCloth> aTStack_d8 [8];
  IClothingSimulationContext IStack_d0;
  IClothingSimulationContext IStack_c8;
  IClothingSimulationContext IStack_c0;
  IClothingSimulationContext IStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  IClothingSimulationContext IStack_98;
  IClothingSimulationContext IStack_90;
  IClothingSimulationContext IStack_88;
  IClothingSimulationContext IStack_80;
  IClothingSimulationContext IStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  IClothingSimulationContext IStack_58;
  IClothingSimulationContext IStack_50;
  IClothingSimulationContext IStack_48;
  
  UpdateSimulationFromSharedSimConfig(this);
  dVar13 = __real_3ff0000000000000;
  if (this->bUseLocalSpaceSimulation != false) {
    dVar13 = (double)*(float *)&param_1[0x1a].field_0x4;
  }
  if (dVar13 <= __real_3e45798ee0000000) {
    dVar13 = __real_3e45798ee0000000;
  }
  pFVar4 = (this->Solver).Ptr;
  dVar13 = __real_3ff0000000000000 / dVar13;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  pFVar4->OldLocalSpaceScale = dVar13;
  pFVar4->LocalSpaceScale = (double)auVar12._8_8_;
  pFVar4 = (this->Solver).Ptr;
  if (this->bUseLocalSpaceSimulation == false) {
    pIVar17 = &IStack_b8;
    uStack_a8 = 0;
    IStack_b8 = (IClothingSimulationContext)0x0;
    uStack_b0 = 0;
  }
  else {
    pIVar17 = &IStack_d0;
    IStack_58 = param_1[10];
    IStack_50 = param_1[0xb];
    IStack_48 = param_1[0xc];
    IStack_d0 = param_1[10];
    IStack_c8 = param_1[0xb];
    IStack_c0 = param_1[0xc];
  }
  IVar14 = *pIVar17;
  IVar15 = pIVar17[1];
  IVar1 = pIVar17[2];
  *(IClothingSimulationContext *)&pFVar4->LocalSpaceLocation = IVar14;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceLocation).field_0x8 = IVar15;
  *(IClothingSimulationContext *)&pFVar4->OldLocalSpaceLocation = IVar14;
  *(IClothingSimulationContext *)&(pFVar4->OldLocalSpaceLocation).field_0x8 = IVar15;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceLocation).field_0x10 = IVar1;
  *(IClothingSimulationContext *)&(pFVar4->OldLocalSpaceLocation).field_0x10 = IVar1;
  pFVar4 = (this->Solver).Ptr;
  if (this->bUseLocalSpaceSimulation == false) {
    pIVar17 = &IStack_78;
    IStack_78 = (IClothingSimulationContext)UE::Math::TQuat<double>::Identity.X;
    dStack_70 = UE::Math::TQuat<double>::Identity.Y;
    dStack_68 = UE::Math::TQuat<double>::Identity.Z;
    dStack_60 = UE::Math::TQuat<double>::Identity.W;
  }
  else {
    pIVar17 = &IStack_98;
    IStack_98 = param_1[6];
    IStack_90 = param_1[7];
    IStack_88 = param_1[8];
    IStack_80 = param_1[9];
  }
  IVar1 = pIVar17[1];
  IVar14 = pIVar17[2];
  IVar15 = pIVar17[3];
  *(IClothingSimulationContext *)&pFVar4->LocalSpaceRotation = *pIVar17;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceRotation).field_0x8 = IVar1;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceRotation).field_0x10 = IVar14;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceRotation).field_0x18 = IVar15;
  ResetStats(this);
  FClothingSimulationSolver::RemoveCloths((this->Solver).Ptr);
  this_00 = (this->Cloths).AllocatorInstance.Data;
  iVar2 = (this->Cloths).ArrayNum;
  pFStackX_10 = this_00 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar10 = pFStackX_10;
    if ((this->Cloths).ArrayNum != iVar2) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (this_00 == pFVar10) {
      if (6 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
      return;
    }
    puVar5 = *(undefined8 **)this_00;
    pFVar6 = (FClothingSimulationMesh *)*puVar5;
    TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_e8.ArrayNum = *(int *)(puVar5 + 3);
    lVar22 = (longlong)TStack_e8.ArrayNum;
    pvVar7 = (void *)puVar5[2];
    if (TStack_e8.ArrayNum == 0) {
      TStack_e8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,TStack_e8.ArrayNum,0,&TStack_e8.AllocatorInstance,TStack_e8.ArrayNum,
                 &TStack_e8.ArrayMax);
      memcpy(TStack_e8.AllocatorInstance.Data,pvVar7,lVar22 << 3);
    }
    lVar22 = pFVar6[1]._padding_;
    uVar3 = *(uint *)(*(longlong *)this_00 + 0x20);
    pUVar18 = UChaosClothConfig::StaticClass();
    pTVar19 = TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
                      *)(lVar22 + 0x40),(FName)pUVar18->_padding_);
    if (((pTVar19 == (TObjectPtr<UClothConfigBase> *)0x0) ||
        (pUVar23 = (UChaosClothConfig *)(pTVar19->field0_0x0).DebugPtr,
        pUVar23 == (UChaosClothConfig *)0x0)) ||
       (pUVar18 = (UClass *)pUVar23->_padding_, pUVar20 = UChaosClothConfig::StaticClass(),
       pUVar18 != pUVar20)) {
      pUVar23 = (UChaosClothConfig *)0x0;
    }
    pFVar8 = *(FClothingSimulationConfig **)(*(longlong *)this_00 + 8);
    if ((pFVar8 == (FClothingSimulationConfig *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Config",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                            ,0x371,L""), bVar16)) break;
    FClothingSimulationConfig::Initialize(pFVar8,pUVar23,(UChaosClothSharedSimConfig *)0x0,true);
    pFVar21 = ::operator_new(0x160);
    if (pFVar21 == (FClothingSimulationCloth *)0x0) {
      pFVar21 = (FClothingSimulationCloth *)0x0;
    }
    else {
      pFVar21 = FClothingSimulationCloth::FClothingSimulationCloth
                          (pFVar21,pFVar8,pFVar6,&TStack_e8,uVar3);
    }
    if (this_00 == (FScriptContainerElement *)aTStack_d8) {
      if (pFVar21 != (FClothingSimulationCloth *)0x0) {
        if (((pFVar21->PropertyCollection).Object != (FManagedArrayCollection *)0x0) &&
           (pFVar8 = pFVar21->Config, pFVar8 != (FClothingSimulationConfig *)0x0)) {
          DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
                    ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                      *)(pFVar8->Properties).AllocatorInstance.Data,(pFVar8->Properties).ArrayNum);
          pFVar10 = (pFVar8->Properties).AllocatorInstance.Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
                    ((TSharedPtr<FManagedArrayCollection,1> *)
                     (pFVar8->PropertyCollections).AllocatorInstance.Data,
                     (pFVar8->PropertyCollections).ArrayNum);
          pFVar10 = (pFVar8->PropertyCollections).AllocatorInstance.Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          ::operator_delete(pFVar8,0x28);
        }
        *(undefined4 *)&(pFVar21->LODIndices).field_0x48 = 0;
        pvVar7 = *(void **)&(pFVar21->LODIndices).field_0x40;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar21->LODIndices);
        DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int>
                  ((TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>
                    *)(pFVar21->LODData).AllocatorInstance.Data,(pFVar21->LODData).ArrayNum);
        pFVar10 = (pFVar21->LODData).AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        pFVar10 = (pFVar21->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar21->PropertyCollection).SharedReferenceCount.ReferenceController);
        pFVar10 = (pFVar21->Colliders).AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        ::operator_delete(pFVar21,0x160);
      }
    }
    else {
      pFVar9 = *(FClothingSimulationCloth **)this_00;
      *(FClothingSimulationCloth **)this_00 = pFVar21;
      TDefaultDelete<Chaos::FClothingSimulationCloth>::operator()
                ((TDefaultDelete<Chaos::FClothingSimulationCloth> *)this_00,pFVar9);
    }
    FClothingSimulationSolver::AddCloth((this->Solver).Ptr,*(FClothingSimulationCloth **)this_00);
    lVar22 = *(longlong *)this_00;
    LOCK();
    this->NumCloths = (TAtomic<int>)(this->Cloths).ArrayNum;
    UNLOCK();
    LOCK();
    this->NumKinematicParticles =
         (TAtomic<int>)((int)this->NumKinematicParticles + *(int *)(lVar22 + 0x150));
    UNLOCK();
    LOCK();
    this->NumDynamicParticles =
         (TAtomic<int>)((int)this->NumDynamicParticles + *(int *)(lVar22 + 0x154));
    UNLOCK();
    if (TStack_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_e8.AllocatorInstance.Data);
    }
    this_00 = this_00 + 8;
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// Initialize @ 14dc027e0

void __thiscall Chaos::FClothingSimulation::Initialize(FClothingSimulation *this)

{
  TUniquePtr<Chaos::FClothingSimulationSolver,TDefaultDelete<Chaos::FClothingSimulationSolver>_>
  *pTVar1;
  FClothingSimulationSolver *this_00;
  FClothingSimulationSolver *pFVar2;
  undefined8 local_18 [2];
  
  pFVar2 = ::operator_new(0x530);
  if (pFVar2 == (FClothingSimulationSolver *)0x0) {
    pFVar2 = (FClothingSimulationSolver *)0x0;
  }
  else {
    pFVar2 = FClothingSimulationSolver::FClothingSimulationSolver
                       (pFVar2,(FClothingSimulationConfig *)0x0,bClothUseLegacyEvolution);
  }
  pTVar1 = &this->Solver;
  if (pTVar1 == (TUniquePtr<Chaos::FClothingSimulationSolver,TDefaultDelete<Chaos::FClothingSimulationSolver>_>
                 *)local_18) {
    if (pFVar2 == (FClothingSimulationSolver *)0x0) goto LAB_14dc0285f;
    FClothingSimulationSolver::~FClothingSimulationSolver(pFVar2);
  }
  else {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar2;
    if (this_00 == (FClothingSimulationSolver *)0x0) goto LAB_14dc0285f;
    FClothingSimulationSolver::~FClothingSimulationSolver(this_00);
    pFVar2 = this_00;
  }
  ::operator_delete(pFVar2,0x530);
LAB_14dc0285f:
  (this->Visualization).Solver = pTVar1->Ptr;
  ResetStats(this);
  return;
}

// IsTeleported @ 14dc04d10

bool __thiscall Chaos::FClothingSimulation::IsTeleported(FClothingSimulation *this)

{
  return (bool)this->bIsTeleported;
}

// RefreshClothConfig @ 14dc0b480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulation::RefreshClothConfig
          (FClothingSimulation *this,IClothingSimulationContext *param_1)

{
  IClothingSimulationContext IVar1;
  int iVar2;
  uint uVar3;
  FClothingSimulationSolver *pFVar4;
  undefined8 *puVar5;
  FClothingSimulationMesh *pFVar6;
  void *pvVar7;
  FClothingSimulationConfig *pFVar8;
  FClothingSimulationCloth *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  IClothingSimulationContext IVar14;
  IClothingSimulationContext IVar15;
  bool bVar16;
  IClothingSimulationContext *pIVar17;
  UClass *pUVar18;
  TObjectPtr<UClothConfigBase> *pTVar19;
  UClass *pUVar20;
  FClothingSimulationCloth *pFVar21;
  longlong lVar22;
  FScriptContainerElement *this_00;
  UChaosClothConfig *pUVar23;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> local_e8;
  TDefaultDelete<Chaos::FClothingSimulationCloth> local_d8 [8];
  IClothingSimulationContext local_d0;
  IClothingSimulationContext IStack_c8;
  IClothingSimulationContext local_c0;
  IClothingSimulationContext local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  IClothingSimulationContext local_98;
  IClothingSimulationContext IStack_90;
  IClothingSimulationContext local_88;
  IClothingSimulationContext IStack_80;
  IClothingSimulationContext local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  IClothingSimulationContext local_58;
  IClothingSimulationContext IStack_50;
  IClothingSimulationContext local_48;
  
  UpdateSimulationFromSharedSimConfig(this);
  dVar13 = __real_3ff0000000000000;
  if (this->bUseLocalSpaceSimulation != false) {
    dVar13 = (double)*(float *)&param_1[0x1a].field_0x4;
  }
  if (dVar13 <= __real_3e45798ee0000000) {
    dVar13 = __real_3e45798ee0000000;
  }
  pFVar4 = (this->Solver).Ptr;
  dVar13 = __real_3ff0000000000000 / dVar13;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  pFVar4->OldLocalSpaceScale = dVar13;
  pFVar4->LocalSpaceScale = (double)auVar12._8_8_;
  pFVar4 = (this->Solver).Ptr;
  if (this->bUseLocalSpaceSimulation == false) {
    pIVar17 = &local_b8;
    local_a8 = 0;
    local_b8 = (IClothingSimulationContext)0x0;
    uStack_b0 = 0;
  }
  else {
    pIVar17 = &local_d0;
    local_58 = param_1[10];
    IStack_50 = param_1[0xb];
    local_48 = param_1[0xc];
    local_d0 = param_1[10];
    IStack_c8 = param_1[0xb];
    local_c0 = param_1[0xc];
  }
  IVar14 = *pIVar17;
  IVar15 = pIVar17[1];
  IVar1 = pIVar17[2];
  *(IClothingSimulationContext *)&pFVar4->LocalSpaceLocation = IVar14;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceLocation).field_0x8 = IVar15;
  *(IClothingSimulationContext *)&pFVar4->OldLocalSpaceLocation = IVar14;
  *(IClothingSimulationContext *)&(pFVar4->OldLocalSpaceLocation).field_0x8 = IVar15;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceLocation).field_0x10 = IVar1;
  *(IClothingSimulationContext *)&(pFVar4->OldLocalSpaceLocation).field_0x10 = IVar1;
  pFVar4 = (this->Solver).Ptr;
  if (this->bUseLocalSpaceSimulation == false) {
    pIVar17 = &local_78;
    local_78 = (IClothingSimulationContext)UE::Math::TQuat<double>::Identity.X;
    dStack_70 = UE::Math::TQuat<double>::Identity.Y;
    local_68 = UE::Math::TQuat<double>::Identity.Z;
    dStack_60 = UE::Math::TQuat<double>::Identity.W;
  }
  else {
    pIVar17 = &local_98;
    local_98 = param_1[6];
    IStack_90 = param_1[7];
    local_88 = param_1[8];
    IStack_80 = param_1[9];
  }
  IVar1 = pIVar17[1];
  IVar14 = pIVar17[2];
  IVar15 = pIVar17[3];
  *(IClothingSimulationContext *)&pFVar4->LocalSpaceRotation = *pIVar17;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceRotation).field_0x8 = IVar1;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceRotation).field_0x10 = IVar14;
  *(IClothingSimulationContext *)&(pFVar4->LocalSpaceRotation).field_0x18 = IVar15;
  ResetStats(this);
  FClothingSimulationSolver::RemoveCloths((this->Solver).Ptr);
  this_00 = (this->Cloths).AllocatorInstance.Data;
  iVar2 = (this->Cloths).ArrayNum;
  local_res10 = this_00 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar10 = local_res10;
    if ((this->Cloths).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar10) {
      if (6 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
      return;
    }
    puVar5 = *(undefined8 **)this_00;
    pFVar6 = (FClothingSimulationMesh *)*puVar5;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = *(int *)(puVar5 + 3);
    lVar22 = (longlong)local_e8.ArrayNum;
    pvVar7 = (void *)puVar5[2];
    if (local_e8.ArrayNum == 0) {
      local_e8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_e8.ArrayNum,0,&local_e8.AllocatorInstance,local_e8.ArrayNum,
                 &local_e8.ArrayMax);
      memcpy(local_e8.AllocatorInstance.Data,pvVar7,lVar22 << 3);
    }
    lVar22 = pFVar6[1]._padding_;
    uVar3 = *(uint *)(*(longlong *)this_00 + 0x20);
    pUVar18 = UChaosClothConfig::StaticClass();
    pTVar19 = TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
                      *)(lVar22 + 0x40),(FName)pUVar18->_padding_);
    if (((pTVar19 == (TObjectPtr<UClothConfigBase> *)0x0) ||
        (pUVar23 = (UChaosClothConfig *)(pTVar19->field0_0x0).DebugPtr,
        pUVar23 == (UChaosClothConfig *)0x0)) ||
       (pUVar18 = (UClass *)pUVar23->_padding_, pUVar20 = UChaosClothConfig::StaticClass(),
       pUVar18 != pUVar20)) {
      pUVar23 = (UChaosClothConfig *)0x0;
    }
    pFVar8 = *(FClothingSimulationConfig **)(*(longlong *)this_00 + 8);
    if ((pFVar8 == (FClothingSimulationConfig *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Config",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                            ,0x371,L""), bVar16)) break;
    FClothingSimulationConfig::Initialize(pFVar8,pUVar23,(UChaosClothSharedSimConfig *)0x0,true);
    pFVar21 = ::operator_new(0x160);
    if (pFVar21 == (FClothingSimulationCloth *)0x0) {
      pFVar21 = (FClothingSimulationCloth *)0x0;
    }
    else {
      pFVar21 = FClothingSimulationCloth::FClothingSimulationCloth
                          (pFVar21,pFVar8,pFVar6,&local_e8,uVar3);
    }
    if (this_00 == (FScriptContainerElement *)local_d8) {
      if (pFVar21 != (FClothingSimulationCloth *)0x0) {
        if (((pFVar21->PropertyCollection).Object != (FManagedArrayCollection *)0x0) &&
           (pFVar8 = pFVar21->Config, pFVar8 != (FClothingSimulationConfig *)0x0)) {
          DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
                    ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                      *)(pFVar8->Properties).AllocatorInstance.Data,(pFVar8->Properties).ArrayNum);
          pFVar10 = (pFVar8->Properties).AllocatorInstance.Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
                    ((TSharedPtr<FManagedArrayCollection,1> *)
                     (pFVar8->PropertyCollections).AllocatorInstance.Data,
                     (pFVar8->PropertyCollections).ArrayNum);
          pFVar10 = (pFVar8->PropertyCollections).AllocatorInstance.Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          ::operator_delete(pFVar8,0x28);
        }
        *(undefined4 *)&(pFVar21->LODIndices).field_0x48 = 0;
        pvVar7 = *(void **)&(pFVar21->LODIndices).field_0x40;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar21->LODIndices);
        DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int>
                  ((TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>
                    *)(pFVar21->LODData).AllocatorInstance.Data,(pFVar21->LODData).ArrayNum);
        pFVar10 = (pFVar21->LODData).AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        pFVar10 = (pFVar21->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar21->PropertyCollection).SharedReferenceCount.ReferenceController);
        pFVar10 = (pFVar21->Colliders).AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        ::operator_delete(pFVar21,0x160);
      }
    }
    else {
      pFVar9 = *(FClothingSimulationCloth **)this_00;
      *(FClothingSimulationCloth **)this_00 = pFVar21;
      TDefaultDelete<Chaos::FClothingSimulationCloth>::operator()
                ((TDefaultDelete<Chaos::FClothingSimulationCloth> *)this_00,pFVar9);
    }
    FClothingSimulationSolver::AddCloth((this->Solver).Ptr,*(FClothingSimulationCloth **)this_00);
    lVar22 = *(longlong *)this_00;
    LOCK();
    this->NumCloths = (TAtomic<int>)(this->Cloths).ArrayNum;
    UNLOCK();
    LOCK();
    this->NumKinematicParticles =
         (TAtomic<int>)((int)this->NumKinematicParticles + *(int *)(lVar22 + 0x150));
    UNLOCK();
    LOCK();
    this->NumDynamicParticles =
         (TAtomic<int>)((int)this->NumDynamicParticles + *(int *)(lVar22 + 0x154));
    UNLOCK();
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    this_00 = this_00 + 8;
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// RefreshPhysicsAsset @ 14dc0ba20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FClothingSimulation::RefreshPhysicsAsset(FClothingSimulation *this)

{
  FClothingSimulationSolver::RefreshCloths((this->Solver).Ptr);
  if (6 < (byte)LogChaosCloth._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    return;
  }
  return;
}

// ResetStats @ 14dc10650

void __thiscall Chaos::FClothingSimulation::ResetStats(FClothingSimulation *this)

{
  FClothingSimulationSolver *pFVar1;
  FClothingSimulationConfig *pFVar2;
  code *pcVar3;
  bool bVar4;
  TAtomic<int> TVar5;
  TAtomic<int> TVar6;
  FCollectionPropertyConstFacade *pFVar7;
  int *piVar8;
  
  if (((this->Solver).Ptr == (FClothingSimulationSolver *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                         ,0x1ce,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  this->NumCloths = (TAtomic<int>)0x0;
  UNLOCK();
  LOCK();
  this->NumKinematicParticles = (TAtomic<int>)0x0;
  UNLOCK();
  LOCK();
  this->NumDynamicParticles = (TAtomic<int>)0x0;
  UNLOCK();
  LOCK();
  this->SimulationTime = (TAtomic<float>)0x0;
  UNLOCK();
  pFVar1 = (this->Solver).Ptr;
  pFVar2 = pFVar1->Config;
  if (pFVar2 != (FClothingSimulationConfig *)0x0) {
    pFVar7 = (FCollectionPropertyConstFacade *)
             FClothingSimulationConfig::GetProperties(pFVar2,pFVar1->SolverLOD);
    piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&pFVar7->KeyNameIndices,FClothingSimulationSolver::NumSubstepsName);
    if ((piVar8 != (int *)0x0) && (*piVar8 != -1)) {
      TVar5 = (TAtomic<int>)
              Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                        (pFVar7,*piVar8,&pFVar7->LowValueArray);
      goto LAB_14dc10703;
    }
  }
  TVar5 = (TAtomic<int>)0x1;
LAB_14dc10703:
  TVar6 = (TAtomic<int>)0x1;
  LOCK();
  this->NumSubsteps = TVar5;
  UNLOCK();
  pFVar1 = (this->Solver).Ptr;
  pFVar2 = pFVar1->Config;
  if (pFVar2 != (FClothingSimulationConfig *)0x0) {
    pFVar7 = (FCollectionPropertyConstFacade *)
             FClothingSimulationConfig::GetProperties(pFVar2,pFVar1->SolverLOD);
    piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&pFVar7->KeyNameIndices,FClothingSimulationSolver::NumIterationsName);
    if ((piVar8 != (int *)0x0) && (*piVar8 != -1)) {
      TVar6 = (TAtomic<int>)
              Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                        (pFVar7,*piVar8,&pFVar7->LowValueArray);
    }
  }
  LOCK();
  this->NumIterations = TVar6;
  UNLOCK();
  this->bHasInvalidReferenceBoneTransforms = false;
  return;
}

// SetGravityOverride @ 14dc12260

void __thiscall
Chaos::FClothingSimulation::SetGravityOverride(FClothingSimulation *this,TVector<double> *param_1)

{
  double dVar1;
  
  this->bUseGravityOverride = true;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->GravityOverride).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->GravityOverride).field0_0x0._s_0.Y = dVar1;
  (this->GravityOverride).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// ShouldSimulateLOD @ 14dc19f20

bool __thiscall Chaos::FClothingSimulation::ShouldSimulateLOD(FClothingSimulation *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  undefined1 local_res10 [8];
  
  if ((-1 < param_1) && (param_1 < (this->LODHasAnyRenderClothMappingData).NumBits)) {
    FVar8 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this->LODHasAnyRenderClothMappingData;
    }
    if ((*(uint *)((longlong)FVar8 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1)
        != 0) {
      pFVar7 = (this->Cloths).AllocatorInstance.Data;
      iVar2 = (this->Cloths).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Cloths).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        plVar3 = (longlong *)**(longlong **)pFVar7;
        if (plVar3 != (longlong *)0x0) {
          uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
          cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar5);
          if ((cVar4 != '\0') && (iVar6 = (**(code **)(*plVar3 + 0x30))(plVar3,uVar5), 0 < iVar6)) {
            return true;
          }
        }
        pFVar7 = pFVar7 + 8;
      }
    }
  }
  return false;
}

// Shutdown @ 14dc1a010

void __thiscall Chaos::FClothingSimulation::Shutdown(FClothingSimulation *this)

{
  int *piVar1;
  int iVar2;
  FClothingSimulationSolver *this_00;
  FScriptContainerElement *pFVar3;
  
  (this->Visualization).Solver = (FClothingSimulationSolver *)0x0;
  this_00 = (this->Solver).Ptr;
  if (this_00 != (FClothingSimulationSolver *)0x0) {
    (this->Solver).Ptr = (FClothingSimulationSolver *)0x0;
    FClothingSimulationSolver::~FClothingSimulationSolver(this_00);
    ::operator_delete(this_00,0x530);
  }
  piVar1 = &(this->Meshes).ArrayMax;
  pFVar3 = (this->Meshes).AllocatorInstance.Data;
  iVar2 = (this->Meshes).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>
                *)pFVar3,iVar2);
    (this->Meshes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Meshes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationMesh,TDefaultDelete<Chaos::FClothingSimulationMesh>_>
                *)pFVar3,iVar2);
    (this->Meshes).ArrayNum = 0;
  }
  piVar1 = &(this->Cloths).ArrayMax;
  pFVar3 = (this->Cloths).AllocatorInstance.Data;
  iVar2 = (this->Cloths).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>
                *)pFVar3,iVar2);
    (this->Cloths).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Cloths).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>
                *)pFVar3,iVar2);
    (this->Cloths).ArrayNum = 0;
  }
  piVar1 = &(this->Colliders).ArrayMax;
  pFVar3 = (this->Colliders).AllocatorInstance.Data;
  iVar2 = (this->Colliders).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>
                *)pFVar3,iVar2);
    (this->Colliders).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Colliders).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCollider,TDefaultDelete<Chaos::FClothingSimulationCollider>_>
                *)pFVar3,iVar2);
    (this->Colliders).ArrayNum = 0;
  }
  piVar1 = &(this->Configs).ArrayMax;
  pFVar3 = (this->Configs).AllocatorInstance.Data;
  iVar2 = (this->Configs).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>
                *)pFVar3,iVar2);
    (this->Configs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Configs).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>
                *)pFVar3,iVar2);
    (this->Configs).ArrayNum = 0;
  }
  this->ClothSharedSimConfig = (UChaosClothSharedSimConfig *)0x0;
  return;
}

// Simulate_AnyThread @ 14dc1a180

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
Chaos::FClothingSimulation::Simulate_AnyThread
          (FClothingSimulation *this,IClothingSimulationContext *param_1)

{
  int *piVar1;
  FClothVisualizationNoGC *this_00;
  float fVar2;
  float fVar3;
  IClothingSimulationContext IVar4;
  IClothingSimulationContext IVar5;
  char cVar6;
  TAtomic<float> TVar7;
  TAtomic<int> TVar8;
  FClothingSimulationConfig *this_01;
  FEvolution *pFVar9;
  FClothingSimulationSolver *pFVar10;
  FClothingSimulationCloth *this_02;
  code *pcVar11;
  double dVar12;
  IClothingSimulationContext IVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  TConsoleVariableData<bool> *pTVar18;
  bool bVar19;
  TAtomic<int> TVar20;
  int iVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSimulate> FVar23;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  IClothingSimulationContext *pIVar24;
  FCollectionPropertyFacade *this_05;
  longlong lVar25;
  FClothConstraints *pFVar26;
  FVelocityAndPressureField *pFVar27;
  longlong lVar28;
  uint uVar29;
  FNameEntryId FVar30;
  FName FVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  bool bVar35;
  TAtomic<float> TVar36;
  float fVar37;
  double dVar38;
  float fVar39;
  uint local_res20;
  uint uStackX_24;
  undefined1 local_1a7;
  undefined1 local_1a6 [2];
  FColor_u_0 local_1a4;
  FName local_1a0;
  FName local_198;
  FName local_190;
  LARGE_INTEGER local_180;
  LARGE_INTEGER local_178;
  LARGE_INTEGER local_170;
  FStatMessage local_168;
  TVector<double>_u_0 local_158;
  FName local_140;
  IClothingSimulationContext local_138;
  IClothingSimulationContext IStack_130;
  IClothingSimulationContext local_128;
  IClothingSimulationContext local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  TVector<double>_u_0 local_108;
  IClothingSimulationContext local_e8;
  IClothingSimulationContext IStack_e0;
  IClothingSimulationContext local_d8;
  IClothingSimulationContext IStack_d0;
  IClothingSimulationContext local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  IClothingSimulationContext local_a8;
  IClothingSimulationContext IStack_a0;
  IClothingSimulationContext local_98;
  
  bVar35 = -1 < CpuChannel->Enabled;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId560,"FClothingSimulation_Simulate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
               ,0x230);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId560);
  }
  bVar19 = false;
  if (ClothingSimulationConsole::Command.Ptr != (FCommand *)0x0) {
    if (((ClothingSimulationConsole::Command.Ptr)->bIsPaused == (TAtomic<bool>)0x0) ||
       ((TAtomic<int>)this->StepCount != (ClothingSimulationConsole::Command.Ptr)->StepCount)) {
      this->StepCount = (int)(ClothingSimulationConsole::Command.Ptr)->StepCount;
      FVar23 = StatPtr_STAT_ChaosClothSimulate;
      if (StatPtr_STAT_ChaosClothSimulate ==
          (FThreadSafeStaticStat<FStat_STAT_ChaosClothSimulate>)0x0) {
        pFVar22 = ::FName::FName(&local_140,"STAT_ChaosClothSimulate");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSimulate>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSimulate,*pFVar22,
                            L"Chaos Cloth Simulate","STATGROUP_ChaosCloth","STATCAT_Advanced",
                            L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar31 = *(FName *)FVar23;
      bVar14 = false;
      bVar16 = false;
      local_190.ComparisonIndex.Value = 0;
      local_190.Number = 0;
      FVar30 = FVar31.ComparisonIndex.Value;
      uVar29 = FVar31.Number;
      if ((FVar30.Value == 0) && (uVar29 == 0)) {
LAB_14dc1a397:
        bVar15 = false;
        local_198 = local_190;
        FVar31 = local_190;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_1a4.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          bVar14 = false;
          bVar16 = true;
          if (-1 < CpuChannel->Enabled) {
            local_1a0.ComparisonIndex.Value = FVar30.Value;
            local_1a0.Number = uVar29;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                       ,0x235);
            bVar14 = true;
            bVar16 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc1a397;
        local_res20 = FVar30.Value;
        uStackX_24 = uVar29;
        local_198 = FVar31;
        FThreadStats::AddMessage(FVar31,CycleScopeStart);
        bVar15 = true;
      }
      fVar2 = *(float *)&param_1[0x18].field_0x4;
      if (fVar2 == 0.0) {
        if (bVar16) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar15) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          this_03 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_03 == (FThreadStats *)0x0) {
            this_04 = FThreadStatsPool::Get();
            this_03 = FThreadStatsPool::GetFromPool(this_04);
          }
          if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
            local_168.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
            local_168.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_180);
            local_168.StatData.Pad[4] = '\0';
            local_168.StatData.Pad[5] = '\0';
            local_168.StatData.Pad[6] = '\0';
            local_168.StatData.Pad[7] = '\0';
            local_168.StatData.Pad[0] = local_180.s.LowPart._0_1_;
            local_168.StatData.Pad[1] = local_180.s.LowPart._1_1_;
            local_168.StatData.Pad[2] = local_180.s.LowPart._2_1_;
            local_168.StatData.Pad[3] = local_180.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_03,&local_168);
            piVar1 = &this_03->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(this_03,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_03,false,false);
            }
          }
        }
        goto LAB_14dc1ae86;
      }
      fVar3 = ((this->Solver).Ptr)->DeltaTime;
      fVar39 = fVar2;
      if (bClothUseTimeStepSmoothing != false) {
        fVar39 = (fVar2 - fVar3) * __real_3dcccccd + fVar3;
      }
      QueryPerformanceCounter(&local_178);
      TVar7 = this->SimulationTime;
      dVar12 = (double)local_178.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      if (((ClothingSimulationConsole::Command.Ptr != (FCommand *)0x0) &&
          (TVar20 = (ClothingSimulationConsole::Command.Ptr)->ResetCount,
          TVar8 = (TAtomic<int>)this->ResetCount,
          this->ResetCount = (int)(ClothingSimulationConsole::Command.Ptr)->ResetCount,
          TVar8 != TVar20)) || ((1 < (byte)param_1[0x19].field_0x4 || ((float)TVar7 == 0.0)))) {
        bVar19 = true;
      }
      cVar6 = param_1[0x19].field_0x4;
      LOCK();
      this->bIsTeleported = (TAtomic<bool>)(cVar6 != '\0');
      UNLOCK();
      pFVar10 = (this->Solver).Ptr;
      if (this->bUseLocalSpaceSimulation == false) {
        pIVar24 = &local_120;
        local_110 = 0;
        local_120 = (IClothingSimulationContext)0x0;
        uStack_118 = 0;
      }
      else {
        pIVar24 = &local_138;
        local_a8 = param_1[10];
        IStack_a0 = param_1[0xb];
        local_98 = param_1[0xc];
        local_138 = param_1[10];
        IStack_130 = param_1[0xb];
        local_128 = param_1[0xc];
      }
      IVar4 = pIVar24[2];
      IVar5 = *pIVar24;
      IVar13 = pIVar24[1];
      *(IClothingSimulationContext *)&pFVar10->LocalSpaceLocation = IVar5;
      *(IClothingSimulationContext *)&(pFVar10->LocalSpaceLocation).field_0x8 = IVar13;
      *(IClothingSimulationContext *)&(pFVar10->LocalSpaceLocation).field_0x10 = IVar4;
      if (bVar19) {
        *(IClothingSimulationContext *)&pFVar10->OldLocalSpaceLocation = IVar5;
        *(IClothingSimulationContext *)&(pFVar10->OldLocalSpaceLocation).field_0x8 = IVar13;
        *(IClothingSimulationContext *)&(pFVar10->OldLocalSpaceLocation).field_0x10 = IVar4;
      }
      pFVar10 = (this->Solver).Ptr;
      if (this->bUseLocalSpaceSimulation == false) {
        pIVar24 = &local_c8;
        local_c8 = (IClothingSimulationContext)UE::Math::TQuat<double>::Identity.X;
        dStack_c0 = UE::Math::TQuat<double>::Identity.Y;
        local_b8 = UE::Math::TQuat<double>::Identity.Z;
        dStack_b0 = UE::Math::TQuat<double>::Identity.W;
      }
      else {
        pIVar24 = &local_e8;
        local_e8 = param_1[6];
        IStack_e0 = param_1[7];
        local_d8 = param_1[8];
        IStack_d0 = param_1[9];
      }
      IVar4 = pIVar24[1];
      IVar5 = pIVar24[2];
      IVar13 = pIVar24[3];
      *(IClothingSimulationContext *)&pFVar10->LocalSpaceRotation = *pIVar24;
      *(IClothingSimulationContext *)&(pFVar10->LocalSpaceRotation).field_0x8 = IVar4;
      *(IClothingSimulationContext *)&(pFVar10->LocalSpaceRotation).field_0x10 = IVar5;
      *(IClothingSimulationContext *)&(pFVar10->LocalSpaceRotation).field_0x18 = IVar13;
      fVar17 = __real_42c80000;
      pFVar10 = (this->Solver).Ptr;
      IVar4 = param_1[0x16];
      fVar3 = *(float *)(param_1 + 0x18);
      fVar37 = (float)(double)param_1[0x17] * __real_42c80000;
      *(float *)&pFVar10->WindVelocity = (float)(double)param_1[0x15] * __real_42c80000;
      *(float *)&(pFVar10->WindVelocity).field_0x4 = (float)(double)IVar4 * fVar17;
      *(float *)&(pFVar10->WindVelocity).field_0x8 = fVar37;
      pFVar10->LegacyWindAdaption = fVar3;
      pFVar10 = (this->Solver).Ptr;
      pIVar24 = (IClothingSimulationContext *)&this->GravityOverride;
      if (this->bUseGravityOverride == false) {
        pIVar24 = param_1 + 0x12;
      }
      IVar4 = pIVar24[1];
      IVar5 = pIVar24[2];
      *(float *)&pFVar10->Gravity = (float)(double)*pIVar24;
      *(float *)&(pFVar10->Gravity).field_0x4 = (float)(double)IVar4;
      *(float *)&(pFVar10->Gravity).field_0x8 = (float)(double)IVar5;
      ((this->Solver).Ptr)->bIsClothGravityOverrideEnabled = this->bUseGravityOverride == false;
      dVar38 = __real_3ff0000000000000;
      if (!bVar19) {
        dVar38 = ((double)*(float *)(param_1 + 0x19) * (double)fVar39) / (double)fVar2;
      }
      ((this->Solver).Ptr)->VelocityScale = dVar38;
      pFVar33 = (this->Cloths).AllocatorInstance.Data;
      iVar21 = (this->Cloths).ArrayNum;
      pFVar34 = pFVar33 + (longlong)iVar21 * 8;
      while( true ) {
        if ((this->Cloths).ArrayNum != iVar21) {
          local_res20 = local_res20 & 0xffffff00;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
        }
        FVar31 = local_198;
        if (pFVar33 == pFVar34) break;
        *(undefined4 *)(*(longlong *)pFVar33 + 0x38) = *(undefined4 *)(param_1 + 0x1a);
        if (bVar19) {
          *(undefined1 *)(*(longlong *)pFVar33 + 0x44) = 1;
        }
        if (cVar6 != '\0') {
          *(undefined1 *)(*(longlong *)pFVar33 + 0x45) = 1;
        }
        pFVar33 = pFVar33 + 8;
      }
      pFVar10 = (this->Solver).Ptr;
      if ((pFVar10->bEnableSolver == false) && (0 < *(int *)(param_1 + 0x21))) {
        FClothingSimulationSolver::UpdateFromCache
                  (pFVar10,(FClothingSimulationCacheData *)(param_1 + 0x1c));
      }
      else {
        FClothingSimulationSolver::Update(pFVar10,fVar39);
        pFVar33 = (this->Configs).AllocatorInstance.Data;
        iVar21 = (this->Configs).ArrayNum;
        pFVar34 = pFVar33 + (longlong)iVar21 * 8;
        while( true ) {
          if ((this->Configs).ArrayNum != iVar21) {
            local_1a7 = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationConfig,TDefaultDelete<Chaos::FClothingSimulationConfig>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_1a7);
          }
          if (pFVar33 == pFVar34) break;
          this_01 = *(FClothingSimulationConfig **)pFVar33;
          if (this_01->bIsLegacySingleLOD == false) {
            local_1a6[0] = 0;
            `Chaos::FClothingSimulationConfig::GetProperties'::__l2::<lambda_1>::operator()
                      (local_1a6);
          }
          this_05 = FClothingSimulationConfig::GetProperties(this_01,0);
          Softs::FCollectionPropertyFacade::ClearDirtyFlags(this_05);
          pFVar33 = pFVar33 + 8;
        }
      }
      pFVar10 = (this->Solver).Ptr;
      pFVar9 = (pFVar10->Evolution).Ptr;
      if (pFVar9 == (FEvolution *)0x0) {
        TVar20 = (TAtomic<int>)((pFVar10->PBDEvolution).Ptr)->MNumIterations;
      }
      else {
        TVar20 = (TAtomic<int>)pFVar9->NumUsedIterations;
      }
      LOCK();
      this->NumIterations = TVar20;
      UNLOCK();
      QueryPerformanceCounter(&local_170);
      TVar36 = (TAtomic<float>)
               (float)(((double)local_170.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar12)
                      * __real_408f400000000000);
      if ((float)TVar7 != 0.0) {
        TVar36 = (TAtomic<float>)(((float)TVar36 - (float)TVar7) * __real_3cf5c28f + (float)TVar7);
      }
      LOCK();
      this->SimulationTime = TVar36;
      UNLOCK();
      if (bVar16) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar15) {
        FThreadStats::AddMessage(FVar31,CycleScopeEnd);
      }
    }
    else {
      this->StepCount = (int)(ClothingSimulationConsole::Command.Ptr)->StepCount;
    }
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawLocalSpace.Ref;
  lVar28 = 0;
  bVar19 = IsInParallelGameThread();
  lVar32 = 1;
  if (bVar19) {
LAB_14dc1a8c5:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1a8c5;
  }
  this_00 = &this->Visualization;
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawLocalSpace(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawBounds.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1a8f9:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1a8f9;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawBounds(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawGravity.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1a929:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1a929;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawGravity(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawPhysMeshWired.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1a959:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1a959;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawPhysMeshWired(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawAnimMeshWired.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1a989:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1a989;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawAnimMeshWired(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawPointVelocities.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1a9b9:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1a9b9;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawPointVelocities(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawAnimNormals.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1a9e9:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1a9e9;
  }
  dVar12 = __real_4034000000000000;
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawAnimNormals
              (this_00,(FPrimitiveDrawInterface *)0x0,__real_4034000000000000);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawAnimVelocities.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1aa24:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1aa24;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawAnimVelocities(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawPointNormals.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1aa54:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1aa54;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawPointNormals(this_00,(FPrimitiveDrawInterface *)0x0,dVar12);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawCollision.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1aa87:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1aa87;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawCollision(this_00,(FPrimitiveDrawInterface *)0x0,false);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawBackstops.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1aaba:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1aaba;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawBackstops(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawBackstopDistances.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1aaea:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1aaea;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawBackstopDistances(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawMaxDistances.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1ab1a:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1ab1a;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawMaxDistances(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawMaxDistanceValues.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1ab4a:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1ab4a;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawMaxDistanceValues(this_00,(FCanvas *)0x0,(FSceneView *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawAnimDrive.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1ab7d:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1ab7d;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawAnimDrive(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawEdgeConstraint.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1abad:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1abad;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawEdgeConstraint(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawBendingConstraint.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1abdd:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1abdd;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawBendingConstraint(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawLongRangeConstraint.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1ac0d:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1ac0d;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawLongRangeConstraint(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawWindForces.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1ac3d:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1ac3d;
  }
  if (pTVar18->ShadowedValue[lVar25] != false) {
    FClothVisualizationNoGC::DrawWindAndPressureForces
              (this_00,(FPrimitiveDrawInterface *)0x0,__real_4024000000000000);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawWindVelocity.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14dc1ac75:
    lVar25 = lVar28;
  }
  else {
    bVar19 = IsInGameThread();
    lVar25 = 1;
    if (bVar19) goto LAB_14dc1ac75;
  }
  if ((pTVar18->ShadowedValue[lVar25] != false) &&
     (pFVar10 = (this->Visualization).Solver, pFVar10 != (FClothingSimulationSolver *)0x0)) {
    iVar21 = (pFVar10->Cloths).ArrayNum;
    pFVar34 = (pFVar10->Cloths).AllocatorInstance.Data;
    if ((iVar21 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    dVar12 = __real_3fb999999999999a;
    pFVar33 = pFVar34 + (longlong)iVar21 * 8;
    for (; pFVar34 != pFVar33; pFVar34 = pFVar34 + 8) {
      this_02 = *(FClothingSimulationCloth **)pFVar34;
      iVar21 = FClothingSimulationCloth::GetParticleRangeId(this_02,(this->Visualization).Solver);
      if (iVar21 != -1) {
        pFVar10 = (this->Visualization).Solver;
        if ((pFVar10->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
          pFVar26 = FClothingSimulationSolver::GetClothConstraints(pFVar10,iVar21);
          pFVar27 = (pFVar26->VelocityAndPressureField).Object;
        }
        else {
          pFVar27 = FClothingSimulationSolver::GetWindVelocityAndPressureField
                              (pFVar10,this_02->GroupId);
        }
        if (pFVar27 != (FVelocityAndPressureField *)0x0) {
          local_108._s_0.X = (double)*(undefined8 *)&(this_02->ReferenceSpaceTransform).field_0x20;
          local_108._s_0.Y = (double)*(undefined8 *)&(this_02->ReferenceSpaceTransform).field_0x28;
          local_108._s_0.Z = (double)*(undefined8 *)&(this_02->ReferenceSpaceTransform).field_0x30;
          dVar38 = ((this->Visualization).Solver)->LocalSpaceScale;
          local_158._s_0.X =
               (double)*(float *)&pFVar27->Velocity * dVar38 * dVar12 + local_108._s_0.X;
          local_158._s_0.Y =
               (double)*(float *)&(pFVar27->Velocity).field_0x4 * dVar38 * dVar12 + local_108._s_0.Y
          ;
          local_158._s_0.Z =
               (double)*(float *)&(pFVar27->Velocity).field_0x8 * dVar38 * dVar12 + local_108._s_0.Z
          ;
          DrawArrow((FPrimitiveDrawInterface *)0x0,(TVector<double> *)&local_108._s_0,
                    (TVector<double> *)&local_158._s_0,&FLinearColor::Blue);
        }
      }
    }
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawSelfCollision.Ref;
  bVar19 = IsInParallelGameThread();
  if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
    lVar28 = 0;
  }
  else {
    lVar28 = 1;
  }
  if (pTVar18->ShadowedValue[lVar28] != false) {
    FClothVisualizationNoGC::DrawSelfCollision(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawSelfIntersection.Ref;
  bVar19 = IsInParallelGameThread();
  if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
    lVar28 = 0;
  }
  else {
    lVar28 = 1;
  }
  if (pTVar18->ShadowedValue[lVar28] != false) {
    FClothVisualizationNoGC::DrawSelfIntersection(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawTeleportReset.Ref;
  bVar19 = IsInParallelGameThread();
  if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
    lVar28 = 0;
  }
  else {
    lVar28 = 1;
  }
  if (pTVar18->ShadowedValue[lVar28] != false) {
    FClothVisualizationNoGC::DrawTeleportReset(this_00,(FPrimitiveDrawInterface *)0x0);
  }
  pTVar18 = ClothingSimulationCVar::DebugDrawExtremlyDeformedEdges.Ref;
  bVar19 = IsInParallelGameThread();
  if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
    lVar32 = 0;
  }
  if (pTVar18->ShadowedValue[lVar32] != false) {
    FClothVisualizationNoGC::DrawExtremlyDeformedEdges(this_00,(FPrimitiveDrawInterface *)0x0);
  }
LAB_14dc1ae86:
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateSimulationFromSharedSimConfig @ 14dc23c90

void __thiscall
Chaos::FClothingSimulation::UpdateSimulationFromSharedSimConfig(FClothingSimulation *this)

{
  int *piVar1;
  FClothingSimulationSolver *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  FClothingSimulationConfig *this_01;
  uint uVar7;
  
  if (((this->Solver).Ptr == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulation.cpp"
                         ,0x1e1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (this->Solver).Ptr;
  if (this->ClothSharedSimConfig == (UChaosClothSharedSimConfig *)0x0) {
    FClothingSimulationSolver::SetConfig(this_00,(FClothingSimulationConfig *)0x0);
    return;
  }
  this_01 = this_00->Config;
  if (this_01 == (FClothingSimulationConfig *)0x0) {
    puVar5 = ::operator_new(0x28);
    puVar6 = (undefined1 *)0x0;
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(undefined8 *)(puVar5 + 0x20) = 0;
      puVar6 = puVar5;
    }
    uVar4 = (this->Configs).ArrayNum;
    piVar1 = &(this->Configs).ArrayMax;
    if (uVar4 == *piVar1) {
      uVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Configs).AllocatorInstance,piVar1);
    }
    (this->Configs).ArrayNum = uVar4 + 1;
    *(undefined1 **)((this->Configs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = puVar6;
    uVar7 = 0;
    if ((int)uVar4 < (this->Configs).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
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
    this_01 = *(FClothingSimulationConfig **)
               ((this->Configs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    FClothingSimulationSolver::SetConfig((this->Solver).Ptr,this_01);
  }
  FClothingSimulationConfig::Initialize
            (this_01,(UChaosClothConfig *)0x0,this->ClothSharedSimConfig,true);
  return;
}

// UpdateStats @ 14dc244d0

void __thiscall
Chaos::FClothingSimulation::UpdateStats(FClothingSimulation *this,FClothingSimulationCloth *param_1)

{
  LOCK();
  this->NumCloths = (TAtomic<int>)(this->Cloths).ArrayNum;
  UNLOCK();
  LOCK();
  this->NumKinematicParticles =
       (TAtomic<int>)((int)this->NumKinematicParticles + param_1->NumActiveKinematicParticles);
  UNLOCK();
  LOCK();
  this->NumDynamicParticles =
       (TAtomic<int>)((int)this->NumDynamicParticles + param_1->NumActiveDynamicParticles);
  UNLOCK();
  return;
}

