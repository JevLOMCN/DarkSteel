// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FChaosAccelerationStructureTask @ 143d01300

FChaosAccelerationStructureTask * __thiscall
Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::FChaosAccelerationStructureTask
          (FChaosAccelerationStructureTask *this,ISpatialAccelerationCollectionFactory *param_1,
          TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
          *param_2,ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                   *param_3,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_4,
          bool param_5,bool param_6,bool param_7,atomic<bool> **param_8,atomic<bool> **param_9)

{
  this->ExternalStructure = param_4;
  this->IsForceFullBuild = param_5;
  this->bIsSingleThreaded = param_6;
  this->bNeedsReset = param_7;
  this->SpatialCollectionFactory = param_1;
  this->SpatialAccelerationCache = param_2;
  this->InternalStructure = param_3;
  this->bStarted = (atomic<bool>)0x0;
  this->bKillTask = (atomic<bool>)0x0;
  *param_8 = &this->bStarted;
  *param_9 = &this->bKillTask;
  return this;
}

// DoTask @ 143d4d2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::DoTask
          (FChaosAccelerationStructureTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  longlong lVar1;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar2;
  FLLMScope local_res8 [8];
  FMemScope local_res20;
  
  LOCK();
  this->bStarted = (atomic<bool>)0x1;
  UNLOCK();
  if (this->bKillTask == (atomic<bool>)0x0) {
    FLLMScope::FLLMScope(local_res8,ChaosAcceleration,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,ChaosAcceleration,true);
    if (AccelerationStructureSplitStaticAndDynamic == 1) {
      pIVar2 = this->ExternalStructure;
      lVar1 = 0x10;
    }
    else {
      UpdateStructure(this,this->InternalStructure,
                      (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                       *)0x0);
      pIVar2 = (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
      lVar1 = 0x18;
    }
    UpdateStructure(this,*(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                           **)((longlong)&this->SpatialCollectionFactory + lVar1),pIVar2);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// UpdateStructure @ 143d7ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::UpdateStructure
          (FChaosAccelerationStructureTask *this,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *pTVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  longlong *plVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AccelerationStructureTimeSlice> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  TStatId TVar24;
  FThreadSafeStaticStat<Chaos::FStat_STAT_CreateInitialAccelerationStructure> FVar25;
  FThreadSafeStaticStat<Chaos::FStat_STAT_CreateNonSlicedStructures> FVar26;
  byte bVar27;
  ISpatialAccelerationCollectionFactory *pIVar28;
  longlong lVar29;
  FNameEntryId FVar30;
  FName FVar31;
  ulonglong *puVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  longlong *plVar36;
  undefined1 *puVar37;
  uint *puVar38;
  int iVar39;
  uint uVar40;
  ulonglong uVar41;
  ForAnyElementType FVar42;
  ForAnyElementType *pFVar43;
  ushort uVar44;
  undefined1 auStackY_3a8 [32];
  ushort local_348 [2];
  uint local_344;
  char local_340;
  undefined1 local_33f;
  byte local_33e;
  undefined1 local_33d;
  undefined1 local_33c [4];
  ForAnyElementType local_338;
  undefined8 local_330;
  ForAnyElementType local_328;
  undefined8 local_320;
  uint local_318;
  uint uStack_314;
  longlong *local_310;
  FChaosAccelerationStructureTask *local_308;
  FCycleCounter local_300;
  FLLMScope local_2f0 [2];
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *local_2e8;
  FScriptContainerElement *local_2e0;
  undefined1 local_2d8 [2];
  undefined1 local_2d6 [2];
  FColor_u_0 local_2d4;
  FColor_u_0 local_2d0;
  FColor_u_0 local_2cc;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *local_2c8;
  undefined8 *local_2c0;
  int local_2b8;
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b0;
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  ForAnyElementType local_298;
  undefined8 local_290;
  undefined4 local_288;
  ForAnyElementType local_280;
  undefined8 local_278;
  undefined4 local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_240;
  FName local_230;
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *local_220;
  int iStack_218;
  uint uStack_214;
  undefined1 *local_210;
  undefined4 uStack_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  LARGE_INTEGER local_1f0;
  undefined8 *local_1e8;
  LARGE_INTEGER local_1e0;
  FScriptContainerElement *local_1d8;
  FStatMessage local_1d0;
  FStatMessage local_1c0;
  undefined8 *local_1b0;
  FMemScope local_1a8;
  int local_1a0;
  int local_19c;
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  FSourceLocation local_168;
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *local_148;
  undefined8 uStack_140;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int local_120;
  undefined4 uStack_11c;
  FName local_118 [2];
  FName local_108;
  FName local_100;
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *local_f8;
  undefined8 uStack_f0;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForAnyElementType local_c8;
  uint local_c0 [26];
  ulonglong local_58 [4];
  
  local_58[2] = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_308 = this;
  local_2e8 = param_1;
  local_2c8 = param_2;
  FLLMScope::FLLMScope(local_2f0,ChaosAcceleration,false,None,Default,true);
  FMemScope::FMemScope(&local_1a8,ChaosAcceleration,true);
  pIVar28 = this->SpatialCollectionFactory;
  local_33e = (**(code **)((longlong)*pIVar28 + 0x18))();
  iStack_218 = 0;
  local_344 = (uint)pIVar28 & 0xffffff00;
  local_340 = this->bNeedsReset;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[8] = 0;
  local_c0[9] = 0;
  local_c0[10] = 0;
  local_c0[0xb] = 0;
  local_c0[0xc] = 0;
  local_c0[0xd] = 0;
  local_c0[0xe] = 0;
  local_c0[0xf] = 0;
  local_c0[0x10] = 0;
  local_c0[0x11] = 0;
  local_c0[0x12] = 0;
  local_c0[0x13] = 0;
  local_c0[0x14] = 0;
  local_c0[0x15] = 0;
  local_c0[0x16] = 0;
  local_c0[0x17] = 0;
  local_c0[0x18] = 0;
  local_c0[0x19] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  local_328.Data = (FScriptContainerElement *)0x0;
  local_320 = 0;
  if (((bool)local_340 != false) &&
     (param_2 != (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0
     )) {
    (**(code **)(param_2->_padding_ + 0x68))(param_2);
  }
  pTVar6 = this->SpatialAccelerationCache;
  iVar18 = *(int *)&pTVar6->field_0x28;
  puVar1 = &pTVar6->field_0x10;
  uStack_214 = 1;
  local_200 = 0;
  iStack_204 = local_200;
  if (iVar18 != 0) {
    puVar38 = *(uint **)&pTVar6->field_0x20;
    if (*(uint **)&pTVar6->field_0x20 == (uint *)0x0) {
      puVar38 = (uint *)puVar1;
    }
    uVar40 = *puVar38;
    local_200 = 0;
    while (uVar40 == 0) {
      lVar29 = (longlong)iStack_218;
      local_200 = local_200 + 0x20;
      iStack_218 = iStack_218 + 1;
      iStack_204 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218) goto LAB_143d80121;
      uVar40 = puVar38[lVar29 + 1];
    }
    uStack_214 = -uVar40 & uVar40;
    uVar41 = (ulonglong)uStack_214 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar41 != 0) {
      for (; uVar41 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_1a0 = (int)lVar29;
    iStack_204 = local_1a0 + -1 + local_200;
    if (iVar18 < iStack_204) {
      iStack_204 = iVar18;
    }
  }
LAB_143d80121:
  uVar40 = *(uint *)&pTVar6->field_0x28;
  bVar27 = (byte)uVar40 & 0x1f;
  iStack_1f8 = *(int *)&pTVar6->field_0x8 - *(int *)&pTVar6->field_0x34;
  uVar35 = uVar40 & 0xffffffe0;
  iVar39 = (int)uVar40 >> 5;
  uStack_2b4 = 1 << bVar27;
  uVar33 = -1 << bVar27;
  uStack_208 = 0xffffffff;
  TStack_190._padding_ = CONCAT44(uStack_214,iStack_218);
  TStack_190.CurrentBitIndex = iStack_204;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  TStack_190._28_4_ = iStack_204;
  TStack_190.BaseBitIndex = local_200;
  uStack_170 = CONCAT44(uStack_1f4,iStack_1f8);
  local_2b8 = iVar39;
  pTStack_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_2a8 = uVar33;
  uStack_2a4 = uVar40;
  uStack_2a0 = uVar35;
  local_220 = pTVar6;
  local_210 = puVar1;
  iStack_1fc = iStack_204;
  local_198 = pTVar6;
  TStack_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar40 < 0) || (iVar18 < (int)uVar40)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&pTVar6->field_0x28;
  if (uVar40 != uVar5) {
    puVar37 = *(undefined1 **)&pTVar6->field_0x20;
    if (*(undefined1 **)&pTVar6->field_0x20 == (undefined1 *)0x0) {
      puVar37 = puVar1;
    }
    uVar33 = uVar33 & *(uint *)(puVar37 + (longlong)iVar39 * 4);
    while (uVar33 == 0) {
      uStack_2a0 = uVar35 + 0x20;
      local_2b8 = iVar39 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2b8)
      goto LAB_143d8028b;
      uVar33 = *(uint *)(puVar37 + (longlong)iVar39 * 4 + 4);
      local_2a8 = 0xffffffff;
      uVar35 = uStack_2a0;
      iVar39 = local_2b8;
    }
    uStack_2b4 = -uVar33 & uVar33;
    uVar41 = (ulonglong)uStack_2b4 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar41 != 0) {
      for (; uVar41 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_19c = (int)lVar29;
    uStack_2a4 = local_19c + -1 + uVar35;
    if ((int)uVar5 < (int)uStack_2a4) {
LAB_143d8028b:
      uStack_2a4 = uVar5;
    }
  }
  uStack_140 = CONCAT44(uStack_2b4,local_2b8);
  uStack_130 = CONCAT44(uStack_2a4,local_2a8);
  uStack_128 = CONCAT44(uStack_29c,uStack_2a0);
  local_120 = *(int *)&pTVar6->field_0x8 - *(int *)&pTVar6->field_0x34;
  pTStack_138 = pTStack_2b0;
  uStack_d0 = CONCAT44(uStack_11c,local_120);
  local_e8 = pTStack_2b0;
  local_148 = pTVar6;
  local_f8 = pTVar6;
  uStack_f0 = uStack_140;
  uStack_e0 = uStack_130;
  local_d8 = uStack_128;
  while( true ) {
    pTVar6 = local_198;
    if (*(int *)&local_198->field_0x8 - *(int *)&local_198->field_0x34 != (int)uStack_170) {
      local_33f = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_33f);
    }
    if (((TStack_190.CurrentBitIndex == uStack_e0._4_4_) && (TStack_190.Array == local_e8)) &&
       (pTVar6 == local_f8)) break;
    lVar29 = *(longlong *)pTVar6;
    local_348[0] = *(ushort *)(lVar29 + (longlong)TStack_190.CurrentBitIndex * 0x18);
    uVar7 = *(undefined8 *)(lVar29 + 8 + (longlong)TStack_190.CurrentBitIndex * 0x18);
    uVar40 = local_348[0] & 7;
    if ((local_33e & (byte)(1 << (sbyte)(local_348[0] & 7))) == 0) {
      uVar40 = 0;
    }
    uVar41 = (ulonglong)uVar40;
    uVar44 = local_348[0] >> 3;
    plVar19 = (longlong *)(**(code **)(local_2e8->_padding_ + 0xf0))();
    plVar36 = (longlong *)0x0;
    if (local_2c8 !=
        (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      plVar36 = (longlong *)(**(code **)(local_2c8->_padding_ + 0xf0))(local_2c8);
      if (plVar36 == (longlong *)0x0) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7803858562110718301>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                            ,0x15d,"false");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        cVar16 = (**(code **)(*plVar36 + 0x20))(plVar36);
        if (cVar16 != '\0') {
          plVar36 = (longlong *)0x0;
        }
      }
    }
    if (plVar19 == (longlong *)0x0) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7803858562110718339>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                          ,0x183,"false");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      if (local_340 != '\0') {
        cVar16 = (**(code **)(*plVar19 + 0x18))(plVar19);
        if ((cVar16 == '\0') && (AccelerationStructureSplitStaticAndDynamic == 1)) {
          cVar16 = (**(code **)(*plVar19 + 8))(plVar19);
          if ((cVar16 == '\0') &&
             (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<7803858562110718345>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                                  ,0x189,"SubStructure->IsAsyncTimeSlicingComplete()"), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (plVar36 != (longlong *)0x0) {
            (**(code **)(*plVar36 + 0x30))(plVar36);
            cVar16 = (**(code **)(*plVar36 + 8))(plVar36);
            if ((cVar16 != '\0') &&
               (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<7803858562110718350>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                                    ,0x18e,
                                    "!AccelerationSUBStructureCopy->IsAsyncTimeSlicingComplete()"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (**(code **)(*plVar36 + 0x38))(plVar36,plVar19);
            cVar16 = (**(code **)(*plVar36 + 8))(plVar36);
            if (cVar16 == '\0') {
              local_344 = CONCAT31(local_344._1_3_,1);
            }
          }
          goto LAB_143d8075e;
        }
        (**(code **)(*plVar19 + 0x68))(plVar19);
      }
      cVar16 = (**(code **)(*plVar19 + 8))(plVar19);
      if (cVar16 == '\0') {
        FVar21 = StatPtr_STAT_AccelerationStructureTimeSlice;
        if (StatPtr_STAT_AccelerationStructureTimeSlice ==
            (FThreadSafeStaticStat<Chaos::FStat_STAT_AccelerationStructureTimeSlice>)0x0) {
          pFVar20 = ::FName::FName(local_118,"STAT_AccelerationStructureTimeSlice");
          FVar21 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AccelerationStructureTimeSlice>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_AccelerationStructureTimeSlice,*pFVar20,
                              L"AccelerationStructureTimeSlice","STATGROUP_Chaos","STATCAT_Advanced"
                              ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
        }
        local_250.ComparisonIndex.Value = 0;
        local_250.Number = 0;
        bVar15 = false;
        bVar13 = false;
        FVar31 = *(FName *)FVar21;
        FVar30 = FVar31.ComparisonIndex.Value;
        uVar40 = FVar31.Number;
        if ((FVar30.Value == 0) && (uVar40 == 0)) {
LAB_143d80649:
          bVar12 = false;
          FVar31 = local_250;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_2d4.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_2d4._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
            bVar15 = false;
            bVar13 = true;
            if (-1 < CpuChannel->Enabled) {
              local_268.ComparisonIndex.Value = FVar30.Value;
              local_268.Number = uVar40;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_268,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                         ,0x1a1);
              bVar15 = true;
              bVar13 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_143d80649;
          local_318 = FVar30.Value;
          uStack_314 = uVar40;
          local_250 = FVar31;
          FThreadStats::AddMessage(FVar31,CycleScopeStart);
          bVar12 = true;
        }
        (**(code **)(*plVar19 + 0x10))(plVar19,local_308->IsForceFullBuild);
        cVar16 = (**(code **)(*plVar19 + 8))(plVar19);
        if (cVar16 == '\0') {
          local_344 = CONCAT31(local_344._1_3_,1);
        }
        else if (plVar36 != (longlong *)0x0) {
          (**(code **)(*plVar36 + 0x30))(plVar36,plVar19);
          cVar16 = (**(code **)(*plVar36 + 8))(plVar36);
          local_344 = CONCAT31(local_344._1_3_,(byte)local_344 | cVar16 == '\0');
        }
        if (bVar13) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar12) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
            local_1d0.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
            local_1d0.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_1f0);
            local_1d0.StatData.Pad[4] = '\0';
            local_1d0.StatData.Pad[5] = '\0';
            local_1d0.StatData.Pad[6] = '\0';
            local_1d0.StatData.Pad[7] = '\0';
            local_1d0.StatData.Pad[0] = local_1f0.s.LowPart._0_1_;
            local_1d0.StatData.Pad[1] = local_1f0.s.LowPart._1_1_;
            local_1d0.StatData.Pad[2] = local_1f0.s.LowPart._2_1_;
            local_1d0.StatData.Pad[3] = local_1f0.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar22,&local_1d0);
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
      }
      else if ((plVar36 == (longlong *)0x0) ||
              (cVar16 = (**(code **)(*plVar36 + 8))(plVar36), cVar16 != '\0')) {
        pFVar43 = &local_c8 + uVar41 * 2;
        uVar33 = local_c0[uVar41 * 4];
        puVar38 = local_c0 + uVar41 * 4;
        uVar35 = local_c0[uVar41 * 4];
        if ((int)local_c0[uVar41 * 4] < (int)(uVar44 + 1)) {
          uVar35 = uVar44 + 1;
        }
        if ((int)uVar33 < (int)uVar35) {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar35 - uVar33,pFVar43,(int *)puVar38,
                              (int *)(local_c0 + uVar41 * 4 + 1));
          DefaultConstructItems<Chaos::TSOAView<Chaos::FSpatialAccelerationCache>,int>
                    (pFVar43->Data + (longlong)iVar18 * 0x10,uVar35 - uVar33);
        }
        else {
          if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
          }
          if ((int)uVar35 < (int)uVar33) {
            uVar33 = uVar33 - uVar35;
            if (((int)(uVar33 | uVar35) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (uVar33 != 0) {
              iVar18 = (*puVar38 - uVar33) - uVar35;
              if (iVar18 != 0) {
                memmove(pFVar43->Data + (longlong)(int)uVar35 * 0x10,
                        pFVar43->Data + (longlong)(int)uVar35 * 0x10 + (longlong)(int)uVar33 * 0x10,
                        (longlong)iVar18 << 4);
              }
              *puVar38 = *puVar38 - uVar33;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,pFVar43,*puVar38,(int *)(local_c0 + uVar41 * 4 + 1));
            }
          }
        }
        if (((int)*puVar38 <= (int)(uint)uVar44) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar34 = pFVar43->Data;
        *(undefined8 *)(pFVar34 + (ulonglong)uVar44 * 0x10) = uVar7;
        *(undefined8 *)(pFVar34 + (ulonglong)uVar44 * 0x10 + 8) = 0;
        cVar16 = (**(code **)((longlong)*local_308->SpatialCollectionFactory + 8))
                           (local_308->SpatialCollectionFactory,uVar40);
        if (cVar16 == '\0') {
          if (((local_328.Data <= (FScriptContainerElement *)local_348) &&
              ((FScriptContainerElement *)local_348 < local_328.Data + (longlong)local_320._4_4_ * 2
              )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar18 = (uint)local_320;
          if ((uint)local_320 == local_320._4_4_) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_328,(int *)((longlong)&local_320 + 4));
          }
          local_320 = CONCAT44(local_320._4_4_,iVar18 + 1);
          FVar42.Data = local_328.Data;
        }
        else {
          if (((local_338.Data <= (FScriptContainerElement *)local_348) &&
              ((FScriptContainerElement *)local_348 < local_338.Data + (longlong)local_330._4_4_ * 2
              )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar18 = (int)local_330;
          if ((int)local_330 == local_330._4_4_) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_338,(int *)((longlong)&local_330 + 4));
          }
          local_330 = CONCAT44(local_330._4_4_,iVar18 + 1);
          FVar42.Data = local_338.Data;
        }
        *(ushort *)(FVar42.Data + (longlong)iVar18 * 2) = local_348[0];
      }
      else {
        TVar24 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_AccelerationStructureTimeSliceCopy,1>
                 ::GetStatId((FThreadSafeStaticStatInner<Chaos::FStat_STAT_AccelerationStructureTimeSliceCopy,1>
                              *)&StatPtr_STAT_AccelerationStructureTimeSliceCopy);
        local_168.Impl._Line = 0x1b5;
        local_168.Impl._Column = 5;
        local_168.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
        ;
        local_168.Impl._Function =
             "void __cdecl Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::UpdateStructure(class Chaos::ISpatialAccelerationCollection<class Chaos::FAccelerationStructureHandle,double,3> *,class Chaos::ISpatialAccelerationCollection<class Chaos::FAccelerationStructureHandle,double,3> *)"
        ;
        local_300.StatId.ComparisonIndex.Value = 0;
        local_300.StatId.Number = 0;
        local_300.EmittedEvent = 0;
        FCycleCounter::Start
                  (&local_300,*(TStatIdData **)&(TVar24.StatIdPtr)->Name,CycleStat|ClearEveryFrame,
                   false,&local_168);
        (**(code **)(*plVar36 + 0x38))(plVar36,plVar19);
        cVar16 = (**(code **)(*plVar36 + 8))(plVar36);
        local_344 = local_344 & 0xff;
        if (cVar16 == '\0') {
          local_344 = 1;
        }
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
      }
    }
LAB_143d8075e:
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  }
  if (local_340 != '\0') {
    iVar18 = (int)local_330;
    local_1d8 = local_338.Data + (longlong)(int)local_330 * 2;
    FVar42.Data = local_338.Data;
    while( true ) {
      pFVar34 = local_1d8;
      if ((int)local_330 != iVar18) {
        local_33d = 0;
        `TCheckedPointerIterator<Chaos::FSpatialAccelerationIdx,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_33d);
      }
      if (FVar42.Data == pFVar34) break;
      uVar44 = *(ushort *)FVar42.Data;
      FVar25 = StatPtr_STAT_CreateInitialAccelerationStructure;
      if (StatPtr_STAT_CreateInitialAccelerationStructure ==
          (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateInitialAccelerationStructure>)0x0) {
        pFVar20 = ::FName::FName(&local_108,"STAT_CreateInitialAccelerationStructure");
        FVar25 = (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateInitialAccelerationStructure>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_CreateInitialAccelerationStructure,*pFVar20,
                            L"CreateInitialAccelerationStructure","STATGROUP_Chaos",
                            "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar31 = *(FName *)FVar25;
      bVar13 = false;
      bVar15 = false;
      local_240.ComparisonIndex.Value = 0;
      local_240.Number = 0;
      FVar30 = FVar31.ComparisonIndex.Value;
      uVar40 = FVar31.Number;
      if ((FVar30.Value == 0) && (uVar40 == 0)) {
LAB_143d80cbf:
        bVar12 = false;
        FVar31 = local_240;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_2d0.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_2d0._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
          bVar13 = false;
          bVar15 = true;
          if (-1 < CpuChannel->Enabled) {
            local_258.ComparisonIndex.Value = FVar30.Value;
            local_258.Number = uVar40;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_258,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                       ,0x1d1);
            bVar13 = true;
            bVar15 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_143d80cbf;
        local_318 = FVar30.Value;
        uStack_314 = uVar40;
        local_240 = FVar31;
        FThreadStats::AddMessage(FVar31,CycleScopeStart);
        bVar13 = false;
        bVar12 = true;
      }
      if (((int)local_c0[(ulonglong)(uVar44 & 7) * 4] <= (int)(uint)(uVar44 >> 3)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar34 = (&local_c8)[(ulonglong)(uVar44 & 7) * 2].Data +
                (ulonglong)(uint)(uVar44 >> 3) * 0x10;
      local_298.Data = (FScriptContainerElement *)0x0;
      local_290 = 0;
      if (*(longlong *)(pFVar34 + 8) == 0) {
        local_288 = *(undefined4 *)(*(longlong *)pFVar34 + 0x18);
      }
      else {
        local_288 = *(undefined4 *)(*(longlong *)(pFVar34 + 8) + 8);
      }
      iVar39 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_298,(int *)((longlong)&local_290 + 4));
      local_290 = CONCAT44(local_290._4_4_,iVar39 + 1);
      uVar9 = *(undefined4 *)(pFVar34 + 4);
      uVar10 = *(undefined4 *)(pFVar34 + 8);
      uVar11 = *(undefined4 *)(pFVar34 + 0xc);
      pFVar4 = local_298.Data + (longlong)iVar39 * 0x10;
      *(undefined4 *)pFVar4 = *(undefined4 *)pFVar34;
      *(undefined4 *)(pFVar4 + 4) = uVar9;
      *(undefined4 *)(pFVar4 + 8) = uVar10;
      *(undefined4 *)(pFVar4 + 0xc) = uVar11;
      (**(code **)((longlong)*local_308->SpatialCollectionFactory + 0x10))
                (local_308->SpatialCollectionFactory,&local_310,&local_298,uVar44 & 7);
      (**(code **)(*local_310 + 0x28))();
      if (local_2c8 !=
          (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
        plVar19 = (longlong *)(**(code **)(local_2c8->_padding_ + 0xf0))();
        if (plVar19 == (longlong *)0x0) {
          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7803858562110718301>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                              ,0x15d,"false");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          cVar16 = (**(code **)(*plVar19 + 0x20))(plVar19);
          if ((cVar16 == '\0') && (cVar16 = (**(code **)(*local_310 + 8))(), cVar16 != '\0')) {
            (**(code **)(*plVar19 + 0x30))(plVar19,local_310);
            iVar39 = AccelerationStructureTimeSlicingMaxBytesCopy;
            if (local_308->IsForceFullBuild != false) {
              iVar39 = -1;
            }
            (**(code **)(*plVar19 + 0x38))(plVar19,local_310,iVar39);
            cVar16 = (**(code **)(*plVar19 + 8))(plVar19);
            local_344 = CONCAT31((int3)(local_344 >> 8),(byte)local_344 | cVar16 == '\0');
          }
        }
      }
      cVar16 = (**(code **)(*local_310 + 8))();
      pIVar14 = local_2e8;
      local_344 = CONCAT31(local_344._1_3_,(byte)local_344 | cVar16 == '\0');
      if (((local_2e8->ActiveBucketsMask & (byte)(1 << ((byte)uVar44 & 7))) != 0) &&
         ((**(code **)(local_2e8->_padding_ + 0xe8))(local_2e8,&local_1e8,uVar44),
         local_1e8 != (undefined8 *)0x0)) {
        (**(code **)*local_1e8)(local_1e8,1);
      }
      (**(code **)(pIVar14->_padding_ + 0xe0))(pIVar14,local_2d8,&local_310,uVar44 & 7);
      if (local_310 != (longlong *)0x0) {
        (**(code **)*local_310)(local_310,1);
      }
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data);
      }
      if (bVar15) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar12) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar22 == (FThreadStats *)0x0) {
          pFVar23 = FThreadStatsPool::Get();
          pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
        }
        if (pFVar22->ScopeCount <= pFVar22->bWaitForExplicitFlush) goto LAB_143d80fe8;
        local_1c0.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
        local_1c0.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1e0);
        local_1c0.StatData.Pad[4] = '\0';
        local_1c0.StatData.Pad[5] = '\0';
        local_1c0.StatData.Pad[6] = '\0';
        local_1c0.StatData.Pad[7] = '\0';
        local_1c0.StatData.Pad[0] = local_1e0.s.LowPart._0_1_;
        local_1c0.StatData.Pad[1] = local_1e0.s.LowPart._1_1_;
        local_1c0.StatData.Pad[2] = local_1e0.s.LowPart._2_1_;
        local_1c0.StatData.Pad[3] = local_1e0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar22,&local_1c0);
        piVar2 = &pFVar22->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 != 0) {
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar22,false,false);
          }
          goto LAB_143d80fe8;
        }
        FThreadStats::Flush(pFVar22,false,false);
        FVar42.Data = FVar42.Data + 2;
      }
      else {
LAB_143d80fe8:
        FVar42.Data = FVar42.Data + 2;
      }
    }
  }
  local_2e8->AllAsyncTasksComplete = (char)local_344 == '\0';
  if ((char)local_344 == '\0') {
    uVar41 = (ulonglong)(int)(uint)local_320;
    local_344 = (uint)local_320;
    pFVar34 = local_328.Data + uVar41 * 2;
    FVar42.Data = local_328.Data;
    local_2e0 = pFVar34;
    while( true ) {
      if ((uint)local_320 != (int)uVar41) {
        local_33c[0] = 0;
        `TCheckedPointerIterator<Chaos::FSpatialAccelerationIdx,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_33c);
      }
      if (FVar42.Data == pFVar34) break;
      uVar44 = *(ushort *)FVar42.Data;
      uVar41 = (ulonglong)(uVar44 & 7);
      uVar40 = (uint)(uVar44 >> 3);
      if ((int)uVar40 < (int)local_c0[uVar41 * 4]) {
        FVar26 = StatPtr_STAT_CreateNonSlicedStructures;
        if (StatPtr_STAT_CreateNonSlicedStructures ==
            (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateNonSlicedStructures>)0x0) {
          pFVar20 = ::FName::FName(&local_100,"STAT_CreateNonSlicedStructures");
          FVar26 = (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateNonSlicedStructures>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateNonSlicedStructures,
                              *pFVar20,L"CreateNonSlicedStructures","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        FVar31 = *(FName *)FVar26;
        bVar13 = false;
        bVar15 = false;
        local_230.ComparisonIndex.Value = 0;
        local_230.Number = 0;
        FVar30 = FVar31.ComparisonIndex.Value;
        uVar33 = FVar31.Number;
        if ((FVar30.Value == 0) && (uVar33 == 0)) {
LAB_143d8118a:
          bVar12 = false;
          FVar31 = local_230;
        }
        else {
          bVar13 = false;
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_2cc.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_2cc._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
            bVar13 = false;
            bVar15 = true;
            if (-1 < CpuChannel->Enabled) {
              local_260.ComparisonIndex.Value = FVar30.Value;
              local_260.Number = uVar33;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_260,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                         ,0x1f8);
              bVar13 = true;
              bVar15 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_143d8118a;
          local_318 = FVar30.Value;
          uStack_314 = uVar33;
          local_230 = FVar31;
          FThreadStats::AddMessage(FVar31,CycleScopeStart);
          bVar12 = true;
        }
        if (((int)local_c0[uVar41 * 4] <= (int)uVar40) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar34 = (&local_c8)[uVar41 * 2].Data + (ulonglong)uVar40 * 0x10;
        local_280.Data = (FScriptContainerElement *)0x0;
        local_278 = 0;
        if (*(longlong *)(pFVar34 + 8) == 0) {
          local_270 = *(undefined4 *)(*(longlong *)pFVar34 + 0x18);
        }
        else {
          local_270 = *(undefined4 *)(*(longlong *)(pFVar34 + 8) + 8);
        }
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_280,(int *)((longlong)&local_278 + 4));
        local_278 = CONCAT44(local_278._4_4_,iVar18 + 1);
        uVar9 = *(undefined4 *)(pFVar34 + 4);
        uVar10 = *(undefined4 *)(pFVar34 + 8);
        uVar11 = *(undefined4 *)(pFVar34 + 0xc);
        pFVar4 = local_280.Data + (longlong)iVar18 * 0x10;
        *(undefined4 *)pFVar4 = *(undefined4 *)pFVar34;
        *(undefined4 *)(pFVar4 + 4) = uVar9;
        *(undefined4 *)(pFVar4 + 8) = uVar10;
        *(undefined4 *)(pFVar4 + 0xc) = uVar11;
        (**(code **)((longlong)*local_308->SpatialCollectionFactory + 0x10))
                  (local_308->SpatialCollectionFactory,&local_2c0,&local_280,uVar44 & 7);
        if (local_2c8 !=
            (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
          plVar19 = (longlong *)(**(code **)(local_2c8->_padding_ + 0xf0))();
          if (plVar19 == (longlong *)0x0) {
            bVar17 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7803858562110718301>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                                ,0x15d,"false");
            if (bVar17) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          else {
            cVar16 = (**(code **)(*plVar19 + 0x20))(plVar19);
            if (cVar16 == '\0') {
              (**(code **)(*plVar19 + 0xa8))(plVar19,local_2c0);
            }
          }
        }
        pIVar14 = local_2e8;
        if (((local_2e8->ActiveBucketsMask & (byte)(1 << ((byte)uVar44 & 7))) != 0) &&
           ((**(code **)(local_2e8->_padding_ + 0xe8))(local_2e8,&local_1b0,uVar44),
           local_1b0 != (undefined8 *)0x0)) {
          (**(code **)*local_1b0)(local_1b0,1);
        }
        (**(code **)(pIVar14->_padding_ + 0xe0))(pIVar14,local_2d6,&local_2c0,uVar44 & 7);
        if (local_2c0 != (undefined8 *)0x0) {
          (**(code **)*local_2c0)(local_2c0,1);
        }
        if (local_280.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data);
        }
        if (bVar15) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pFVar34 = local_2e0;
        if (bVar12) {
          FThreadStats::AddMessage(FVar31,CycleScopeEnd);
          pFVar34 = local_2e0;
        }
      }
      uVar41 = (ulonglong)local_344;
      FVar42.Data = FVar42.Data + 2;
    }
  }
  if (local_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data);
  }
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  puVar32 = local_58 + 2;
  lVar29 = 8;
  do {
    puVar3 = puVar32 + -2;
    puVar32 = puVar32 + -2;
    lVar29 = lVar29 + -1;
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
  } while (lVar29 != 0);
  FMemScope::~FMemScope(&local_1a8);
  FLLMScope::~FLLMScope(local_2f0);
  return;
}

