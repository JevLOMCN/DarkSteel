// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// operator() @ 14825d950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
`FPhysScene_Chaos::OnSyncBodies'::__l2::FDispatcher::operator()
          (void *this,FClusterUnionPhysicsProxy *param_1)

{
  EWakeEventEntry EVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  FImplicitObject *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FWeakObjectPtr FVar11;
  FWeakObjectPtr FVar12;
  FWeakObjectPtr FVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined8 *puVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uchar uVar22;
  FSpatialAccelerationIdx FVar23;
  undefined4 extraout_EAX;
  undefined4 uVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_SyncBodiesClusterUnionPhysicsProxy> FVar27;
  FObjectPtr_u_0 *this_01;
  UClass *pUVar28;
  undefined7 extraout_var;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar30;
  undefined6 extraout_var_00;
  undefined4 uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
  *this_02;
  ulonglong uVar35;
  FChaosScene *this_03;
  ForAnyElementType *pFVar36;
  UClusterUnionComponent *this_04;
  ForAnyElementType FVar37;
  FName FVar38;
  FScriptContainerElement *pFVar39;
  TPBDRigidParticle<double,3> *pTVar40;
  longlong lVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar57;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar59;
  undefined1 auVar56 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStackY_498 [32];
  undefined1 local_437 [7];
  FName local_430;
  undefined8 *local_428;
  undefined1 local_420 [4];
  FColor_u_0 local_41c;
  TPBDRigidParticle<double,3> *local_418;
  TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
  local_410;
  FName local_400;
  FName local_3f8;
  FName local_3f0;
  FName local_3e8;
  UClusterUnionComponent *local_3d8;
  UClusterUnionComponent *local_3d0;
  UObject *local_3c8 [2];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  FWeakObjectPtr local_378;
  undefined1 uStack_370;
  EWakeEventEntry EStack_36f;
  undefined6 uStack_36e;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  FWeakObjectPtr local_328;
  undefined1 uStack_320;
  EWakeEventEntry EStack_31f;
  undefined6 uStack_31e;
  FLockedPhysicsObjectExternalInterface<1> local_318;
  FName *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  FWeakObjectPtr local_2a8;
  undefined1 uStack_2a0;
  EWakeEventEntry EStack_29f;
  undefined6 uStack_29e;
  FName local_298;
  double local_290;
  double local_288;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_278;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  FAccelerationStructureHandle local_198;
  FAccelerationStructureHandle local_160;
  TVector<double>_u_0 local_128;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  TTransform<double> local_e8;
  ulonglong local_88;
  FObjectPtr_u_0 *pFVar29;
  UClusterUnionComponent *SRWLock;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_498;
  this_04 = (UClusterUnionComponent *)0x0;
  bVar21 = false;
  FVar27 = StatPtr_STAT_SyncBodiesClusterUnionPhysicsProxy;
  local_428 = this;
  if (StatPtr_STAT_SyncBodiesClusterUnionPhysicsProxy ==
      (FThreadSafeStaticStat<FStat_STAT_SyncBodiesClusterUnionPhysicsProxy>)0x0) {
    pFVar26 = ::FName::FName(&local_298,"STAT_SyncBodiesClusterUnionPhysicsProxy");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_SyncBodiesClusterUnionPhysicsProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SyncBodiesClusterUnionPhysicsProxy,*pFVar26,
                        L"FPhysScene_Chaos::OnSyncBodies-FClusterUnionPhysicsProxy",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar38 = *(FName *)FVar27;
  bVar15 = false;
  bVar17 = false;
  local_3e8.ComparisonIndex.Value = 0;
  local_3e8.Number = 0;
  bVar19 = false;
  bVar20 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) &&
     (bVar14 = bVar15, bVar16 = bVar17, FVar38.Number == 0)) {
LAB_14825dace:
    bVar17 = bVar20;
    bVar15 = bVar19;
    bVar19 = false;
    local_3f8 = local_3e8;
    FVar38 = local_3e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_41c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_41c._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar15 = false;
      bVar17 = true;
      bVar19 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_400.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_400.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_400,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x989);
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    bVar14 = bVar15;
    bVar16 = bVar17;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14825dace;
    local_430 = FVar38;
    local_3f8 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar19 = true;
  }
  FPhysicsObjectExternalInterface::LockWrite(&local_318,(FChaosScene *)0x0);
  local_3f0 = (FName)(param_1->PhysicsObject).Ptr;
  lVar41 = *(longlong *)this;
  pTVar40 = (param_1->Particle_External).Ptr;
  SRWLock = this_04;
  if (Chaos::CVars::bEnableAsyncInitBody != false) {
    SRWLock = (UClusterUnionComponent *)(lVar41 + 800);
  }
  local_418 = pTVar40;
  if (SRWLock != (UClusterUnionComponent *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  this_02 = (TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
             *)(lVar41 + 0x348);
  this_01 = (FObjectPtr_u_0 *)
            TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
            ::Find(this_02,(IPhysicsProxyBase *)param_1);
  uVar31 = SUB84(this_02,0);
  pFVar29 = this_01;
  if ((this_01 == (FObjectPtr_u_0 *)0x0) || (this_01->Handle == (UObject *)0x0)) {
LAB_14825db55:
    uVar24 = SUB84(pFVar29,0);
  }
  else {
    pUVar28 = UClusterUnionComponent::StaticClass();
    bVar20 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar28);
    uVar31 = SUB84(pFVar29,0);
    pFVar29 = (FObjectPtr_u_0 *)CONCAT71(extraout_var,bVar20);
    uVar24 = SUB84(pFVar29,0);
    if (!bVar20) goto LAB_14825db55;
    this_04 = (UClusterUnionComponent *)this_01->Handle;
  }
  if (SRWLock != (UClusterUnionComponent *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    uVar31 = SUB84(SRWLock,0);
    uVar24 = extraout_EAX;
  }
  puVar18 = local_428;
  if (this_04 == (UClusterUnionComponent *)0x0) goto LAB_14825e290;
  local_e8.Translation.XY.m128d_f64[0] = *(double *)&pTVar40->field_0x20;
  local_e8.Translation.XY.m128d_f64[1] = *(double *)&pTVar40->field_0x28;
  local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_e8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar40->field_0x30;
  dVar50 = local_e8.Translation.ZW.m128d_f64[0] - *(double *)&this_04->field_0x220;
  dVar57 = 0.0 - *(double *)&this_04->field_0x228;
  dVar8 = (double)*(float *)&pTVar40->field_0x40;
  dVar7 = (double)*(float *)&pTVar40->field_0x44;
  dVar9 = (double)(float)*(undefined8 *)&pTVar40->field_0x48;
  dVar10 = (double)(float)((ulonglong)*(undefined8 *)&pTVar40->field_0x48 >> 0x20);
  uVar64 = SUB84(dVar10,0);
  uVar65 = (undefined4)((ulonglong)dVar10 >> 0x20);
  uVar62 = SUB84(dVar7,0);
  uVar63 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  uVar60 = SUB84(__real_3f1a36e2e0000000,0);
  uVar61 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar42._8_4_ = uVar60;
  auVar42._0_8_ = __real_3f1a36e2e0000000;
  auVar42._12_4_ = uVar61;
  auVar51._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar51._8_4_ = SUB84(dVar57,0) & _UNK_15061cc88;
  auVar51._12_4_ = (uint)((ulonglong)dVar57 >> 0x20) & _UNK_15061cc8c;
  local_290 = __real_3f1a36e2e0000000;
  auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < auVar51._8_8_);
  auVar43._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar51._0_8_);
  uVar32 = movmskpd(uVar31,auVar43);
  dVar50 = local_e8.Translation.XY.m128d_f64[0] - *(double *)&this_04->field_0x210;
  dVar57 = local_e8.Translation.XY.m128d_f64[1] - *(double *)&this_04->field_0x218;
  local_1c8._8_4_ = uVar64;
  local_1c8._0_8_ = dVar9;
  local_1c8._12_4_ = uVar65;
  auVar52._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar52._8_4_ = SUB84(dVar57,0) & _UNK_15061cc88;
  auVar52._12_4_ = (uint)((ulonglong)dVar57 >> 0x20) & _UNK_15061cc8c;
  local_1d8._8_4_ = uVar62;
  local_1d8._0_8_ = dVar8;
  local_1d8._12_4_ = uVar63;
  lVar41 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar52._8_8_);
  auVar5._8_4_ = (int)lVar41;
  auVar5._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar52._0_8_);
  auVar5._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
  iVar25 = movmskpd(uVar24,auVar5);
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar62;
  local_e8.Rotation.XY.m128d_f64[0] = dVar8;
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar63;
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar64;
  local_e8.Rotation.ZW.m128d_f64[0] = dVar9;
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar65;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  if ((uVar32 & 0x3fffffff) == 0 && iVar25 == 0) {
    auVar53._8_4_ = uVar64;
    auVar53._0_8_ = dVar9;
    auVar53._12_4_ = uVar65;
    local_288 = __real_3f1a36e2e0000000;
    dVar57 = dVar9 - *(double *)&this_04->field_0x200;
    dVar58 = auVar53._8_8_ - *(double *)&this_04->field_0x208;
    dVar50 = dVar8 + *(double *)&this_04->field_0x1f0;
    dVar7 = dVar7 + *(double *)&this_04->field_0x1f8;
    auVar54._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar57,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar54._8_4_ = SUB84(dVar58,0) & _UNK_15061cc88;
    auVar54._12_4_ = (uint)((ulonglong)dVar58 >> 0x20) & _UNK_15061cc8c;
    auVar44._8_4_ = uVar60;
    auVar44._0_8_ = __real_3f1a36e2e0000000;
    auVar44._12_4_ = uVar61;
    auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < auVar54._8_8_);
    auVar45._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar54._0_8_);
    iVar33 = movmskpd(0,auVar45);
    auVar55._8_4_ = uVar62;
    auVar55._0_8_ = dVar8;
    auVar55._12_4_ = uVar63;
    dVar58 = dVar8 - *(double *)&this_04->field_0x1f0;
    dVar59 = auVar55._8_8_ - *(double *)&this_04->field_0x1f8;
    auVar46._8_4_ = uVar60;
    auVar46._0_8_ = __real_3f1a36e2e0000000;
    auVar46._12_4_ = uVar61;
    dVar57 = dVar9 + *(double *)&this_04->field_0x200;
    dVar10 = dVar10 + *(double *)&this_04->field_0x208;
    auVar56._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar56._8_4_ = SUB84(dVar59,0) & _UNK_15061cc88;
    auVar56._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & _UNK_15061cc8c;
    auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < auVar56._8_8_);
    auVar47._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar56._0_8_);
    uVar32 = movmskpd(iVar25,auVar47);
    uVar34 = iVar33 << 2 | uVar32;
    if (uVar34 != 0) {
      auVar48._8_4_ = uVar60;
      auVar48._0_8_ = __real_3f1a36e2e0000000;
      auVar48._12_4_ = uVar61;
      auVar49._8_8_ =
           -(ulonglong)
            (auVar48._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar10,0) & _UNK_15061cc88));
      auVar49._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar57,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar34 = movmskpd(uVar34,auVar49);
      lVar41 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar7,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar41;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar50,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      iVar25 = movmskpd(uVar32,auVar6);
      if ((uVar34 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14825dcf5;
    }
  }
  else {
LAB_14825dcf5:
    local_220 = *(double *)&this_04->field_0x210;
    dStack_218 = *(double *)&this_04->field_0x218;
    local_210 = *(double *)&this_04->field_0x220;
    local_3b8 = local_e8.Translation.XY.m128d_f64[0] - local_220;
    bVar21 = true;
    pFVar36 = (ForAnyElementType *)(local_428 + 3);
    EVar1 = pTVar40->MWakeEvent;
    local_3a8 = local_e8.Translation.ZW.m128d_f64[0] - local_210;
    local_1b8._8_4_ = uVar62;
    local_1b8._0_8_ = dVar8;
    local_1b8._12_4_ = uVar63;
    local_1a8._8_4_ = uVar64;
    local_1a8._0_8_ = dVar9;
    local_1a8._12_4_ = uVar65;
    local_398._8_4_ = uVar62;
    local_398._0_8_ = dVar8;
    local_398._12_4_ = uVar63;
    local_388._8_4_ = uVar64;
    local_388._0_8_ = dVar9;
    local_388._12_4_ = uVar65;
    dStack_3b0 = local_e8.Translation.XY.m128d_f64[1] - dStack_218;
    local_238 = local_e8.Translation.XY.m128d_f64[0];
    dStack_230 = local_e8.Translation.XY.m128d_f64[1];
    local_228 = local_e8.Translation.ZW.m128d_f64[0];
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_04);
    }
    local_378.ObjectIndex = 0;
    local_378.ObjectSerialNumber = 0;
    local_3d8 = this_04;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_04);
    }
    FWeakObjectPtr::operator=(&local_378,(FObjectPtr)&local_3d8);
    uStack_370 = 1;
    EStack_36f = EVar1;
    if (((pFVar36->Data <= (FScriptContainerElement *)&local_3b8) &&
        ((FScriptContainerElement *)&local_3b8 <
         pFVar36->Data + (longlong)*(int *)((longlong)puVar18 + 0x24) * 0x50)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar25 = *(int *)(puVar18 + 4);
    if (iVar25 == *(int *)((longlong)puVar18 + 0x24)) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,pFVar36,(int *)((longlong)puVar18 + 0x24));
    }
    *(int *)(puVar18 + 4) = iVar25 + 1;
    lVar41 = (longlong)iVar25;
    pFVar39 = pFVar36->Data;
    *(double *)(pFVar39 + lVar41 * 0x50) = local_3b8;
    *(double *)(pFVar39 + lVar41 * 0x50 + 8) = dStack_3b0;
    *(double *)(pFVar39 + lVar41 * 0x50 + 0x10) = local_3a8;
    *(double *)(pFVar39 + lVar41 * 0x50 + 0x10 + 8) = dStack_3a0;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x20) = local_398._0_8_;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x20 + 8) = local_398._8_8_;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x30) = local_388._0_8_;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x30 + 8) = local_388._8_8_;
    FVar11.ObjectIndex._1_1_ = EStack_36f;
    FVar11.ObjectIndex._0_1_ = uStack_370;
    FVar11._2_6_ = uStack_36e;
    *(FWeakObjectPtr *)(pFVar39 + lVar41 * 0x50 + 0x40) = local_378;
    ((FWeakObjectPtr *)(pFVar39 + lVar41 * 0x50 + 0x40))[1] = FVar11;
  }
  pFVar36 = (ForAnyElementType *)(puVar18 + 3);
  EVar1 = pTVar40->MWakeEvent;
  if (EVar1 == None) {
    if (!bVar21) goto LAB_14825dff3;
LAB_14825e30e:
    UClusterUnionComponent::SyncClusterUnionFromProxy
              (this_04,&local_e8,
               (TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
                *)0x0);
  }
  else {
    if (bVar21) goto LAB_14825e30e;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_04);
    }
    local_2a8.ObjectIndex = 0;
    local_2a8.ObjectSerialNumber = 0;
    local_3d0 = this_04;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_04);
    }
    FWeakObjectPtr::operator=(&local_2a8,(FObjectPtr)&local_3d0);
    uStack_2a0 = 0;
    EStack_29f = EVar1;
    if (((pFVar36->Data <= (FScriptContainerElement *)&local_2e8) &&
        ((FScriptContainerElement *)&local_2e8 <
         pFVar36->Data + (longlong)*(int *)((longlong)puVar18 + 0x24) * 0x50)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar25 = *(int *)(puVar18 + 4);
    if (iVar25 == *(int *)((longlong)puVar18 + 0x24)) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,pFVar36,(int *)((longlong)puVar18 + 0x24));
      *(int *)(puVar18 + 4) = iVar25;
    }
    *(int *)(puVar18 + 4) = iVar25 + 1;
    lVar41 = (longlong)iVar25;
    pFVar39 = pFVar36->Data;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50) = local_2e8;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 8) = uStack_2e0;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x10) = local_2d8;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x10 + 8) = uStack_2d0;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x20) = local_2c8;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x20 + 8) = uStack_2c0;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x30) = local_2b8;
    *(undefined8 *)(pFVar39 + lVar41 * 0x50 + 0x30 + 8) = uStack_2b0;
    FVar13.ObjectIndex._1_1_ = EStack_29f;
    FVar13.ObjectIndex._0_1_ = uStack_2a0;
    FVar13._2_6_ = uStack_29e;
    *(FWeakObjectPtr *)(pFVar39 + lVar41 * 0x50 + 0x40) = local_2a8;
    ((FWeakObjectPtr *)(pFVar39 + lVar41 * 0x50 + 0x40))[1] = FVar13;
LAB_14825dff3:
    if (bGClusterUnionSyncBodiesMoveNewComponents == false) goto LAB_14825e30e;
    local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_410.ArrayNum = 0;
    local_410.ArrayMax = 0;
    UClusterUnionComponent::SyncClusterUnionFromProxy(this_04,&local_e8,&local_410);
    iVar25 = local_410.ArrayNum;
    uVar35 = (ulonglong)local_410.ArrayNum;
    pFVar39 = local_410.AllocatorInstance.Data + uVar35 * 0x70;
    FVar37.Data = local_410.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar35 != iVar25) {
        local_437[0] = 0;
        `TCheckedPointerIterator<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_437);
      }
      FVar38 = local_3f8;
      if (FVar37.Data == pFVar39) break;
      local_208 = *(double *)(FVar37.Data + 0x30);
      dStack_200 = *(double *)(FVar37.Data + 0x38);
      pUVar2 = *(UObject **)FVar37.Data;
      local_1f8 = *(double *)(FVar37.Data + 0x40);
      local_348 = *(undefined8 *)(FVar37.Data + 0x10);
      uStack_340 = *(undefined8 *)(FVar37.Data + 0x18);
      local_1f0 = *(double *)&pUVar2[0xd].field_0x8;
      dStack_1e8 = *(double *)&pUVar2[0xd].field_0x10;
      local_1e0 = *(double *)&pUVar2[0xd].field_0x18;
      local_368 = local_208 - local_1f0;
      local_338 = *(undefined8 *)(FVar37.Data + 0x20);
      uStack_330 = *(undefined8 *)(FVar37.Data + 0x28);
      EVar1 = pTVar40->MWakeEvent;
      local_358 = local_1f8 - local_1e0;
      dStack_360 = dStack_200 - dStack_1e8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_328.ObjectIndex = 0;
      local_328.ObjectSerialNumber = 0;
      local_3c8[0] = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_328,(FObjectPtr)local_3c8);
      uStack_320 = 1;
      EStack_31f = EVar1;
      if (((pFVar36->Data <= (FScriptContainerElement *)&local_368) &&
          ((FScriptContainerElement *)&local_368 <
           pFVar36->Data + (longlong)*(int *)((longlong)puVar18 + 0x24) * 0x50)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar33 = *(int *)(puVar18 + 4);
      if (iVar33 == *(int *)((longlong)puVar18 + 0x24)) {
        iVar33 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1050,pFVar36,(int *)((longlong)puVar18 + 0x24));
        *(int *)(puVar18 + 4) = iVar33;
      }
      *(int *)(puVar18 + 4) = iVar33 + 1;
      lVar41 = (longlong)iVar33;
      pFVar3 = pFVar36->Data;
      FVar37.Data = FVar37.Data + 0x70;
      *(double *)(pFVar3 + lVar41 * 0x50) = local_368;
      *(double *)(pFVar3 + lVar41 * 0x50 + 8) = dStack_360;
      *(double *)(pFVar3 + lVar41 * 0x50 + 0x10) = local_358;
      *(double *)(pFVar3 + lVar41 * 0x50 + 0x10 + 8) = dStack_350;
      *(undefined8 *)(pFVar3 + lVar41 * 0x50 + 0x20) = local_348;
      *(undefined8 *)(pFVar3 + lVar41 * 0x50 + 0x20 + 8) = uStack_340;
      *(undefined8 *)(pFVar3 + lVar41 * 0x50 + 0x30) = local_338;
      *(undefined8 *)(pFVar3 + lVar41 * 0x50 + 0x30 + 8) = uStack_330;
      FVar12.ObjectIndex._1_1_ = EStack_31f;
      FVar12.ObjectIndex._0_1_ = uStack_320;
      FVar12._2_6_ = uStack_31e;
      *(FWeakObjectPtr *)(pFVar3 + lVar41 * 0x50 + 0x40) = local_328;
      ((FWeakObjectPtr *)(pFVar3 + lVar41 * 0x50 + 0x40))[1] = FVar12;
      uVar35 = local_410._8_8_ & 0xffffffff;
    }
    pTVar40 = local_418;
    bVar14 = bVar15;
    bVar16 = bVar17;
    if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.AllocatorInstance.Data);
      pTVar40 = local_418;
    }
  }
  this_00 = *(FImplicitObject **)&pTVar40->field_0x50;
  bVar21 = false;
  if (this_00 == (FImplicitObject *)0x0) {
LAB_14825e32c:
    this_03 = (FChaosScene *)*local_428;
    if (!bVar21) goto LAB_14825e235;
    pIVar30 = FChaosScene::GetSpacialAcceleration(this_03);
    if (pIVar30 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      local_2f8 = &local_430;
      uStack_2f0 = 1;
      local_278._12_4_ = uStack_2ec;
      local_278.ArrayNum = 1;
      local_430 = local_3f0;
      local_278.DataPtr = (FPhysicsObject **)local_2f8;
      Chaos::FReadPhysicsObjectInterface<0>::GetWorldBounds
                ((FReadPhysicsObjectInterface<0> *)&local_318.Interface,
                 (TBox<double> *)&local_128._s_0,&local_278);
      local_268 = local_128._s_0.X;
      dStack_260 = local_128._s_0.Y;
      local_258 = local_128._s_0.Z;
      local_250 = local_110;
      uStack_248 = uStack_108;
      local_240 = local_100;
      Chaos::FReadPhysicsObjectInterface<0>::CreateAccelerationStructureHandle
                ((FReadPhysicsObjectInterface<0> *)&local_318.Interface,&local_198,
                 (FPhysicsObject *)local_430);
      pcVar4 = *(code **)(pIVar30->_padding_ + 0x98);
      Chaos::FReadPhysicsObjectInterface<0>::GetSpatialIndex
                ((FReadPhysicsObjectInterface<0> *)&local_318.Interface,(FPhysicsObject *)local_420)
      ;
      (*pcVar4)(pIVar30,&local_198,&local_268,1);
    }
  }
  else {
    uVar22 = Chaos::FImplicitObject::GetType(this_00);
    if ((uVar22 == '\x05') || (uVar22 == '\x0f')) {
      bVar21 = 0 < (int)this_00[1]._padding_;
      goto LAB_14825e32c;
    }
    this_03 = (FChaosScene *)*local_428;
LAB_14825e235:
    pIVar30 = FChaosScene::GetSpacialAcceleration(this_03);
    if (pIVar30 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      Chaos::FReadPhysicsObjectInterface<0>::CreateAccelerationStructureHandle
                ((FReadPhysicsObjectInterface<0> *)&local_318.Interface,&local_160,
                 (FPhysicsObject *)local_3f0);
      pcVar4 = *(code **)(pIVar30->_padding_ + 0x88);
      FVar23 = Chaos::FReadPhysicsObjectInterface<0>::GetSpatialIndex
                         ((FReadPhysicsObjectInterface<0> *)&local_318.Interface,
                          (FPhysicsObject *)(local_420 + 2));
      (*pcVar4)(pIVar30,&local_160,*(undefined2 *)CONCAT62(extraout_var_00,FVar23));
    }
  }
  pTVar40->MWakeEvent = None;
LAB_14825e290:
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_318.Lock);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  return;
}

// operator() @ 14825e440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPhysScene_Chaos::OnSyncBodies'::__l2::FDispatcher::operator()
          (void *this,FJointConstraintPhysicsProxy *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  FJointConstraint *pFVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SyncBodiesJointConstraintPhysicsProxy> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  FNameEntryId FVar16;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  undefined1 local_98 [12];
  uint uStack_8c;
  bool local_88;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  int local_70;
  undefined4 local_68;
  
  puVar15 = (undefined4 *)0x0;
  FVar16.Value = 0;
  FVar10 = StatPtr_STAT_SyncBodiesJointConstraintPhysicsProxy;
  if (StatPtr_STAT_SyncBodiesJointConstraintPhysicsProxy ==
      (FThreadSafeStaticStat<FStat_STAT_SyncBodiesJointConstraintPhysicsProxy>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_SyncBodiesJointConstraintPhysicsProxy");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SyncBodiesJointConstraintPhysicsProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SyncBodiesJointConstraintPhysicsProxy,*pFVar9,
                        L"FPhysScene_Chaos::OnSyncBodies-FJointConstraintPhysicsProxy",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar6 = false;
  bVar8 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar12.Value;
        local_res10.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x95a);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar12.Value;
      local_res10.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      FVar16.Value = FVar12.Value;
      goto LAB_14825e595;
    }
  }
  bVar7 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_14825e595:
  pFVar4 = param_1->Constraint_GT;
  if ((pFVar4->Output).bIsBreaking != false) {
    piVar5 = (pFVar4->JointSettings).Property.UserData;
    puVar14 = puVar15;
    if ((piVar5 != (int *)0x0) && (*piVar5 == 4)) {
      puVar14 = *(undefined4 **)(piVar5 + 2);
    }
    if (puVar14 != (undefined4 *)0x0) {
      local_80 = (undefined1  [8])0x0;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_80,
                 (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar14 + 6));
      uVar3 = *puVar14;
      local_68 = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FReadAccessScope *)local_98);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)local_78.Data + 0x68))(local_78.Data,uVar3);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_98);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FWriteAccessScope *)local_98);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_78.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
        local_70 = 0;
      }
      if (local_88 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_8c,local_98._8_4_),
                   (FDestructionSentinel *)local_98);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_80);
    }
    (pFVar4->Output).bIsBreaking = false;
  }
  if ((pFVar4->Output).bIsViolating != false) {
    piVar5 = (pFVar4->JointSettings).Property.UserData;
    puVar14 = puVar15;
    if ((piVar5 != (int *)0x0) && (*piVar5 == 4)) {
      puVar14 = *(undefined4 **)(piVar5 + 2);
    }
    if (puVar14 != (undefined4 *)0x0) {
      local_80 = (undefined1  [8])0x0;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy> *)local_80,
                 (TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy> *)
                 (puVar14 + 0xc));
      uVar3 = *puVar14;
      fVar1 = (pFVar4->Output).AngularViolation;
      fVar2 = (pFVar4->Output).LinearViolation;
      local_68 = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FReadAccessScope *)local_98);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)local_78.Data + 0x68))(local_78.Data,uVar3,fVar2,fVar1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_98);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FWriteAccessScope *)local_98);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_78.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
        local_70 = 0;
      }
      if (local_88 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_8c,local_98._8_4_),
                   (FDestructionSentinel *)local_98);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_80);
    }
    (pFVar4->Output).bIsViolating = false;
  }
  if ((pFVar4->Output).bDriveTargetChanged != false) {
    piVar5 = (pFVar4->JointSettings).Property.UserData;
    if ((piVar5 != (int *)0x0) && (*piVar5 == 4)) {
      puVar15 = *(undefined4 **)(piVar5 + 2);
    }
    if (puVar15 != (undefined4 *)0x0) {
      local_80 = (undefined1  [8])0x0;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_80,
                 (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(puVar15 + 0x12));
      uVar3 = *puVar15;
      local_68 = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FReadAccessScope *)local_98);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)local_78.Data + 0x68))(local_78.Data,uVar3);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_98);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FWriteAccessScope *)local_98);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_78.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
        local_70 = 0;
      }
      if (local_88 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_8c,local_98._8_4_),
                   (FDestructionSentinel *)local_98);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_80);
    }
    (pFVar4->Output).bDriveTargetChanged = false;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      uStack_8c = FVar13.Number & 0xffff6fff | 0x6000;
      local_98._8_4_ = FVar16.Value;
      QueryPerformanceCounter(&local_res10);
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[0] = local_res10.s.LowPart._0_1_;
      local_98[1] = local_res10.s.LowPart._1_1_;
      local_98[2] = local_res10.s.LowPart._2_1_;
      local_98[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_98);
      piVar5 = &this_00->ScopeCount;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
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

// operator() @ 14825e9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPhysScene_Chaos::OnSyncBodies'::__l2::FDispatcher::operator()
          (void *this,FSingleParticlePhysicsProxy *param_1)

{
  double dVar1;
  undefined8 uVar2;
  int *piVar3;
  FChaosScene *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FWeakObjectPtr FVar21;
  FWeakObjectPtr FVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  EWakeEventEntry EVar28;
  int iVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_SyncBodiesSingleParticlePhysicsProxy> FVar31;
  FBodyInstance *pFVar32;
  TGeometryParticle<double,3> *pTVar33;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar34;
  int iVar35;
  uint uVar36;
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *this_03;
  FName FVar37;
  ForAnyElementType *pFVar38;
  FBodyInstance *this_04;
  longlong lVar39;
  double dVar40;
  double dVar41;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_1e8;
  byte local_1e0;
  TGeometryParticle<double,3> *local_1d8;
  FName local_1d0;
  FSingleParticlePhysicsProxy *local_1c0;
  TGeometryParticle<double,3> *local_1b8;
  LARGE_INTEGER local_1b0;
  FStatMessage local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  FWeakObjectPtr local_158;
  undefined1 uStack_150;
  EWakeEventEntry EStack_14f;
  undefined6 uStack_14e;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FWeakObjectPtr local_108;
  undefined1 uStack_100;
  EWakeEventEntry EStack_ff;
  undefined6 uStack_fe;
  FName local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  
  pFVar32 = (FBodyInstance *)0x0;
  FVar31 = StatPtr_STAT_SyncBodiesSingleParticlePhysicsProxy;
  if (StatPtr_STAT_SyncBodiesSingleParticlePhysicsProxy ==
      (FThreadSafeStaticStat<FStat_STAT_SyncBodiesSingleParticlePhysicsProxy>)0x0) {
    pFVar30 = ::FName::FName(&local_f8,"STAT_SyncBodiesSingleParticlePhysicsProxy");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_SyncBodiesSingleParticlePhysicsProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SyncBodiesSingleParticlePhysicsProxy,*pFVar30,
                        L"FPhysScene_Chaos::OnSyncBodies-FSingleParticlePhysicsProxy",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar37 = *(FName *)FVar31;
  bVar23 = false;
  bVar25 = false;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_14825eafe:
    bVar24 = false;
    FVar37 = local_1d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar23 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_res20.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x92e);
        bVar23 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14825eafe;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar24 = true;
  }
  local_1d8 = (param_1->Particle).Ptr;
  piVar3 = local_1d8->MUserData;
  if (piVar3 == (int *)0x0) goto LAB_14825f081;
  this_04 = pFVar32;
  if ((*piVar3 != 1) || (this_04 = *(FBodyInstance **)(piVar3 + 2), this_04 == (FBodyInstance *)0x0)
     ) {
    if ((*piVar3 == 8) &&
       (((*(longlong *)(piVar3 + 2) != 0 &&
         (piVar3 = *(int **)(*(longlong *)(piVar3 + 2) + 0x10), this_04 = pFVar32,
         piVar3 != (int *)0x0)) && (*piVar3 == 1)))) {
      this_04 = *(FBodyInstance **)(piVar3 + 2);
    }
    if (this_04 == (FBodyInstance *)0x0) goto LAB_14825f081;
  }
  this_03 = &this_04->OwnerComponent;
  if (GEmitSyncBodiesUObjectStats != false) {
    pFVar32 = (FBodyInstance *)FWeakObjectPtr::Get(&this_03->WeakPtr);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_1e8,(UObjectBaseUtility *)pFVar32);
  if ((((this_04->_padding_ & 8) != 0) ||
      ((bVar26 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)this_04),
       bVar26 && (bVar26 = FBodyInstance::IsValidBodyInstance(this_04), bVar26)))) &&
     (pTVar33 = (TGeometryParticle<double,3> *)FWeakObjectPtr::Get(&this_03->WeakPtr),
     pTVar33 != (TGeometryParticle<double,3> *)0x0)) {
    bVar26 = false;
    dVar1 = *(double *)&(local_1d8->MXR).Property.MX.field_0x10;
    dVar19 = *(double *)&(local_1d8->MXR).Property.MX;
    dVar20 = *(double *)&(local_1d8->MXR).Property.MX.field_0x8;
    dVar10 = dVar1 - *(double *)&pTVar33[3].MXR.Property.MR;
    dVar11 = 0.0 - *(double *)&pTVar33[3].MXR.Property.MR.field_0x8;
    dVar16 = (double)*(float *)&(local_1d8->MXR).Property.MR;
    uVar2 = *(undefined8 *)&(local_1d8->MXR).Property.MR.field_0x8;
    dVar17 = (double)(float)uVar2;
    dVar18 = (double)(float)((ulonglong)uVar2 >> 0x20);
    dVar15 = (double)*(float *)&(local_1d8->MXR).Property.MR.field_0x4;
    local_f0 = __real_3f1a36e2e0000000;
    lVar39 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar11,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar39;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar6._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    uVar34 = movmskpd((int)this_03,auVar6);
    dVar10 = dVar19 - *(double *)&pTVar33[3].MXR.Property.MX.field_0x10;
    dVar11 = dVar20 - (double)pTVar33[3].MXR.Property._padding_;
    lVar39 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar11,0) & _UNK_15061cc88));
    auVar12._8_4_ = (int)lVar39;
    auVar12._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar12._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    iVar29 = movmskpd((int)local_1d8,auVar12);
    if ((uVar34 & 0x3fffffff) == 0 && iVar29 == 0) {
      dVar10 = dVar17 - *(double *)&pTVar33[3].MXR.Property.MX;
      dVar11 = dVar18 - *(double *)&pTVar33[3].MXR.Property.MX.field_0x8;
      local_e8 = __real_3f1a36e2e0000000;
      dVar40 = dVar16 + (double)pTVar33[3].Proxy;
      dVar41 = dVar15 + (double)pTVar33[3]._padding_;
      lVar39 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar11,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar39;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
      iVar35 = movmskpd(0,auVar7);
      dVar10 = dVar16 - (double)pTVar33[3].Proxy;
      dVar11 = dVar15 - (double)pTVar33[3]._padding_;
      lVar39 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar11,0) & _UNK_15061cc88));
      dVar11 = *(double *)&pTVar33[3].MXR.Property.MX + dVar17;
      dVar13 = *(double *)&pTVar33[3].MXR.Property.MX.field_0x8 + dVar18;
      auVar8._8_4_ = (int)lVar39;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
      uVar34 = movmskpd(iVar29,auVar8);
      uVar36 = iVar35 << 2 | uVar34;
      if (uVar36 != 0) {
        lVar39 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar13,0) & _UNK_15061cc88));
        auVar9._8_4_ = (int)lVar39;
        auVar9._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar11,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar9._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
        uVar36 = movmskpd(uVar36,auVar9);
        lVar39 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar41,0) & _UNK_15061cc88));
        auVar14._8_4_ = (int)lVar39;
        auVar14._0_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar14._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
        iVar29 = movmskpd(uVar34,auVar14);
        if ((uVar36 & 0x3fffffff) != 0 || iVar29 != 0) goto LAB_14825ed0f;
      }
    }
    else {
LAB_14825ed0f:
      pFVar38 = (ForAnyElementType *)((longlong)this + 0x18);
      bVar26 = false;
      if (this_04->InstanceBodyIndex == -1) {
        dVar10 = *(double *)&pTVar33[3].MXR.Property.MX.field_0x10;
        dVar11 = (double)pTVar33[3].MXR.Property._padding_;
        dVar13 = *(double *)&pTVar33[3].MXR.Property.MR;
        bVar26 = true;
        local_e0 = dVar19;
        dStack_d8 = dVar20;
        local_c8 = dVar10;
        dStack_c0 = dVar11;
        EVar28 = Chaos::FSingleParticlePhysicsProxy::GetWakeEvent(param_1);
        local_198 = dVar19 - dVar10;
        local_188 = dVar1 - dVar13;
        dStack_190 = dVar20 - dVar11;
        local_178._8_4_ = SUB84(dVar15,0);
        local_178._0_8_ = dVar16;
        local_178._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        local_168._8_4_ = SUB84(dVar18,0);
        local_168._0_8_ = dVar17;
        local_168._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_d0 = dVar1;
        local_b8 = dVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pTVar33);
        }
        local_158.ObjectIndex = 0;
        local_158.ObjectSerialNumber = 0;
        local_1d8 = pTVar33;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pTVar33);
        }
        FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_1d8);
        uStack_150 = 1;
        EStack_14f = EVar28;
        if (((pFVar38->Data <= (FScriptContainerElement *)&local_198) &&
            ((FScriptContainerElement *)&local_198 <
             pFVar38->Data + (longlong)*(int *)((longlong)this + 0x24) * 0x50)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar29 = *(int *)((longlong)this + 0x20);
        if (iVar29 == *(int *)((longlong)this + 0x24)) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1050,pFVar38,(int *)((longlong)this + 0x24));
        }
        *(int *)((longlong)this + 0x20) = iVar29 + 1;
        lVar39 = (longlong)iVar29;
        pFVar4 = pFVar38->Data;
        *(double *)(pFVar4 + lVar39 * 0x50) = local_198;
        *(double *)(pFVar4 + lVar39 * 0x50 + 8) = dStack_190;
        *(double *)(pFVar4 + lVar39 * 0x50 + 0x10) = local_188;
        *(double *)(pFVar4 + lVar39 * 0x50 + 0x10 + 8) = dStack_180;
        *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x20) = local_178._0_8_;
        *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x20 + 8) = local_178._8_8_;
        *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x30) = local_168._0_8_;
        *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x30 + 8) = local_168._8_8_;
        FVar21.ObjectIndex._1_1_ = EStack_14f;
        FVar21.ObjectIndex._0_1_ = uStack_150;
        FVar21._2_6_ = uStack_14e;
        *(FWeakObjectPtr *)(pFVar4 + lVar39 * 0x50 + 0x40) = local_158;
        ((FWeakObjectPtr *)(pFVar4 + lVar39 * 0x50 + 0x40))[1] = FVar21;
      }
      this_00 = *(FChaosScene **)((longlong)this + 8);
      local_1c0 = FBodyInstance::GetPhysicsActor(this_04);
      FChaosScene::UpdateActorInAccelerationStructure(this_00,&local_1c0);
    }
    pFVar38 = (ForAnyElementType *)((longlong)this + 0x18);
    EVar28 = Chaos::FSingleParticlePhysicsProxy::GetWakeEvent(param_1);
    if ((EVar28 != None) && (!bVar26)) {
      EVar28 = Chaos::FSingleParticlePhysicsProxy::GetWakeEvent(param_1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pTVar33);
      }
      local_108.ObjectIndex = 0;
      local_108.ObjectSerialNumber = 0;
      local_1b8 = pTVar33;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pTVar33);
      }
      FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_1b8);
      uStack_100 = 0;
      EStack_ff = EVar28;
      if (((pFVar38->Data <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 <
           pFVar38->Data + (longlong)*(int *)((longlong)this + 0x24) * 0x50)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar29 = *(int *)((longlong)this + 0x20);
      if (iVar29 == *(int *)((longlong)this + 0x24)) {
        iVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1050,pFVar38,(int *)((longlong)this + 0x24));
        *(int *)((longlong)this + 0x20) = iVar29;
      }
      *(int *)((longlong)this + 0x20) = iVar29 + 1;
      lVar39 = (longlong)iVar29;
      pFVar4 = pFVar38->Data;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50) = local_148;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 8) = uStack_140;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x10) = local_138;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x10 + 8) = uStack_130;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x20) = local_128;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x20 + 8) = uStack_120;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x30) = local_118;
      *(undefined8 *)(pFVar4 + lVar39 * 0x50 + 0x30 + 8) = uStack_110;
      FVar22.ObjectIndex._1_1_ = EStack_ff;
      FVar22.ObjectIndex._0_1_ = uStack_100;
      FVar22._2_6_ = uStack_fe;
      *(FWeakObjectPtr *)(pFVar4 + lVar39 * 0x50 + 0x40) = local_108;
      ((FWeakObjectPtr *)(pFVar4 + lVar39 * 0x50 + 0x40))[1] = FVar22;
    }
    Chaos::FSingleParticlePhysicsProxy::ClearEvents(param_1);
  }
  if ((local_1e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1e0 & 4) != 0) {
    FThreadStats::AddMessage(local_1e8,CycleScopeEnd);
  }
LAB_14825f081:
  if (bVar25) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar24) && (FVar37 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_1a8.NameAndInfo.Index = FVar37.ComparisonIndex.Value;
      local_1a8.NameAndInfo.Number = FVar37.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1b0);
      local_1a8.StatData.Pad[4] = '\0';
      local_1a8.StatData.Pad[5] = '\0';
      local_1a8.StatData.Pad[6] = '\0';
      local_1a8.StatData.Pad[7] = '\0';
      local_1a8.StatData.Pad[0] = local_1b0.s.LowPart._0_1_;
      local_1a8.StatData.Pad[1] = local_1b0.s.LowPart._1_1_;
      local_1a8.StatData.Pad[2] = local_1b0.s.LowPart._2_1_;
      local_1a8.StatData.Pad[3] = local_1b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_1a8);
      piVar3 = &this_01->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

