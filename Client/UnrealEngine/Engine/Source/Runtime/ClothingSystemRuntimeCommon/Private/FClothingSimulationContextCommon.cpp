// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 12

// FClothingSimulationContextCommon @ 148c19e00

FClothingSimulationContextCommon * __thiscall
FClothingSimulationContextCommon::FClothingSimulationContextCommon
          (FClothingSimulationContextCommon *this)

{
  undefined8 uVar1;
  
  IClothingSimulationContext::IClothingSimulationContext((IClothingSimulationContext *)this);
  this->_padding_ = (longlong)&___7FClothingSimulationContextCommon__6B_;
  (this->BoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTransforms).ArrayNum = 0;
  (this->BoneTransforms).ArrayMax = 0;
  (this->RefToLocals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefToLocals).ArrayNum = 0;
  (this->RefToLocals).ArrayMax = 0;
  *&(this->ComponentToWorld).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ComponentToWorld).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ComponentToWorld).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ComponentToWorld).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ComponentToWorld).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ComponentToWorld).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldGravity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldGravity).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldGravity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WindVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WindVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->WindVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CacheData).CachedPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheData).CachedPositions.ArrayNum = 0;
  (this->CacheData).CachedPositions.ArrayMax = 0;
  (this->CacheData).CachedVelocities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheData).CachedVelocities.ArrayNum = 0;
  (this->CacheData).CachedVelocities.ArrayMax = 0;
  (this->CacheData).CacheIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheData).CacheIndices.ArrayNum = 0;
  (this->CacheData).CacheIndices.ArrayMax = 0;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms = 0;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x8 = 0;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x20 = 0;
  this->WindAdaption = 0.0;
  this->DeltaSeconds = 0.0;
  this->TeleportMode = None;
  this->VelocityScale = 1.0;
  this->MaxDistanceScale = 1.0;
  this->SolverGeometryScale = 1.0;
  this->PredictedLod = -1;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x28 = 0;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x2c = 0x80;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x34 = 0;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x40 = 0;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x48 = 0;
  return this;
}

// ~FClothingSimulationContextCommon @ 148c1aa50

void __thiscall
FClothingSimulationContextCommon::~FClothingSimulationContextCommon
          (FClothingSimulationContextCommon *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FClothingSimulationContextCommon__6B_;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CacheData).CachedReferenceSpaceTransforms);
  pFVar2 = (this->CacheData).CacheIndices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CacheData).CachedVelocities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CacheData).CachedPositions.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RefToLocals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BoneTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IClothingSimulationContext::~IClothingSimulationContext((IClothingSimulationContext *)this);
  return;
}

// Fill @ 148c25fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FClothingSimulationContextCommon::Fill
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1,float param_2,
          float param_3,bool param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ClothFillContext> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FLLMScope local_res8 [2];
  FColor_u_0 local_res10 [2];
  FName local_88;
  LARGE_INTEGER local_80;
  FMemScope local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58 [3];
  
  FVar8 = StatPtr_STAT_ClothFillContext;
  if (StatPtr_STAT_ClothFillContext == (FThreadSafeStaticStat<FStat_STAT_ClothFillContext>)0x0) {
    pFVar7 = ::FName::FName(&local_70,"STAT_ClothFillContext");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ClothFillContext>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothFillContext,*pFVar7,
                       L"Fill Context","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar10.Value;
        local_88.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingSimulation.cpp"
                   ,0x34);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_80.s.LowPart = FVar10.Value;
      local_80.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_148c2612a;
    }
  }
  bVar4 = false;
  FVar11 = local_68;
LAB_148c2612a:
  FLLMScope::FLLMScope(local_res8,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_78,SkeletalMesh,true);
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingSimulation.cpp"
                       ,0x37,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x10))(this,param_1);
  (**(code **)(this->_padding_ + 0x18))(this,param_1);
  (**(code **)(this->_padding_ + 0x20))(this,param_1);
  (**(code **)(this->_padding_ + 0x28))(this,param_1);
  (**(code **)(this->_padding_ + 0x30))(this,param_1);
  (**(code **)(this->_padding_ + 0x38))(this,param_2,param_3);
  (**(code **)(this->_padding_ + 0x40))(this,param_1,param_2,param_3);
  (**(code **)(this->_padding_ + 0x48))(this,param_1);
  (**(code **)(this->_padding_ + 0x50))(this,param_1);
  this->PredictedLod = *(int *)((longlong)&param_1->_padding_ + 4);
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_58[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
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

// FillBoneTransforms @ 148c26330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClothingSimulationContextCommon::FillBoneTransforms
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 *puVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  void *_Src;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  USkeletalMesh *pUVar12;
  UObject *pUVar13;
  longlong lVar14;
  FReferenceSkeleton *this_00;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
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
  undefined4 uVar46;
  undefined1 auStackY_178 [32];
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->_padding_);
  if (pUVar13 == (UObject *)0x0) {
    pTVar1 = &this->BoneTransforms;
    plVar17 = &param_1->_padding_ + (longlong)(int)param_1->_padding_ * 2;
    if (pTVar1 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)plVar17) {
      iVar6 = (int)plVar17[1];
      piVar2 = &(this->BoneTransforms).ArrayMax;
      _Src = (void *)*plVar17;
      (this->BoneTransforms).ArrayNum = iVar6;
      if ((iVar6 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
        if (iVar6 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar6 * 0x60);
        }
      }
    }
  }
  else {
    uVar5 = (uint)param_1->_padding_;
    if (uVar5 == 0) {
      if (pUVar12 != (USkeletalMesh *)0x0) {
        lVar14 = (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
        iVar6 = *(int *)(lVar14 + 0x28);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Empty
                  (&this->BoneTransforms,iVar6);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (&this->BoneTransforms,iVar6);
      }
    }
    else {
      pTVar1 = &this->BoneTransforms;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      uVar19 = 0;
      (this->BoneTransforms).ArrayNum = 0;
      if ((this->BoneTransforms).ArrayMax < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar5,&pTVar1->AllocatorInstance,0,&(this->BoneTransforms).ArrayMax);
      }
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::AddDefaulted(pTVar1,uVar5);
      iVar6 = *(int *)&pUVar13[0x28].field_0x20;
      uVar21 = uVar19;
      uVar22 = uVar19;
      if (0 < (int)uVar5) {
        do {
          uVar18 = (uint)uVar19;
          if (((int)uVar18 < 0) || ((int)param_1->_padding_ <= (int)uVar18)) {
LAB_148c26587:
            if (pUVar12 != (USkeletalMesh *)0x0) {
              this_00 = (FReferenceSkeleton *)(**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
              uVar11 = FReferenceSkeleton::GetParentIndex(this_00,uVar18);
              uVar15 = 0;
              if ((((int)uVar11 < 0) || ((this->BoneTransforms).ArrayNum <= (int)uVar11)) ||
                 ((int)uVar18 <= (int)uVar11)) {
                lVar14 = (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
                uVar20 = ~uVar18 >> 0x1f;
                if ((int)uVar18 < *(int *)(lVar14 + 0x38)) {
                  uVar15 = uVar20;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                lVar14 = *(longlong *)(lVar14 + 0x30);
                puVar3 = (undefined4 *)(lVar14 + uVar21);
                uVar23 = *puVar3;
                uVar24 = puVar3[1];
                uVar25 = puVar3[2];
                uVar26 = puVar3[3];
                puVar3 = (undefined4 *)(lVar14 + 0x10 + uVar21);
                uVar27 = *puVar3;
                uVar28 = puVar3[1];
                uVar29 = puVar3[2];
                uVar30 = puVar3[3];
                puVar3 = (undefined4 *)(lVar14 + 0x20 + uVar21);
                uVar31 = *puVar3;
                uVar32 = puVar3[1];
                uVar33 = puVar3[2];
                uVar34 = puVar3[3];
                puVar3 = (undefined4 *)(lVar14 + 0x30 + uVar21);
                uVar35 = *puVar3;
                uVar36 = puVar3[1];
                uVar37 = puVar3[2];
                uVar38 = puVar3[3];
                puVar3 = (undefined4 *)(lVar14 + 0x40 + uVar21);
                uVar39 = *puVar3;
                uVar40 = puVar3[1];
                uVar41 = puVar3[2];
                uVar42 = puVar3[3];
                puVar3 = (undefined4 *)(lVar14 + 0x50 + uVar21);
                uVar43 = *puVar3;
                uVar44 = puVar3[1];
                uVar45 = puVar3[2];
                uVar46 = puVar3[3];
              }
              else {
                uVar20 = uVar15;
                if ((int)uVar11 < (this->BoneTransforms).ArrayNum) {
                  uVar20 = ~uVar11 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar4 = (pTVar1->AllocatorInstance).Data;
                lVar14 = (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
                uVar20 = ~uVar18 >> 0x1f;
                if ((int)uVar18 < *(int *)(lVar14 + 0x38)) {
                  uVar15 = uVar20;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                local_108.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_108.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_108.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_108.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_108.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_108.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_108.Translation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                local_108.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_108.Translation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
                local_108.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_108.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                local_108.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
                UE::Math::TTransform<double>::Multiply
                          (&local_108,(TTransform<double> *)(pFVar4 + (longlong)(int)uVar11 * 0x60),
                           (TTransform<double> *)
                           ((longlong)(int)uVar18 * 0x60 + *(longlong *)(lVar14 + 0x30)));
                uVar23 = local_108.Rotation.XY.m128d_f64[0]._0_4_;
                uVar24 = local_108.Rotation.XY.m128d_f64[0]._4_4_;
                uVar25 = local_108.Rotation.XY.m128d_f64[1]._0_4_;
                uVar26 = local_108.Rotation.XY.m128d_f64[1]._4_4_;
                uVar27 = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar28 = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar29 = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar30 = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar31 = local_108.Translation.XY.m128d_f64[0]._0_4_;
                uVar32 = local_108.Translation.XY.m128d_f64[0]._4_4_;
                uVar33 = local_108.Translation.XY.m128d_f64[1]._0_4_;
                uVar34 = local_108.Translation.XY.m128d_f64[1]._4_4_;
                uVar35 = local_108.Translation.ZW.m128d_f64[0]._0_4_;
                uVar36 = local_108.Translation.ZW.m128d_f64[0]._4_4_;
                uVar37 = local_108.Translation.ZW.m128d_f64[1]._0_4_;
                uVar38 = local_108.Translation.ZW.m128d_f64[1]._4_4_;
                uVar39 = local_108.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar40 = local_108.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar41 = local_108.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar42 = local_108.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar43 = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar44 = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar45 = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar46 = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
              }
              uVar15 = uVar20 & (int)uVar18 < (this->BoneTransforms).ArrayNum;
              goto LAB_148c267af;
            }
          }
          else {
            if (((int)uVar18 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar7 = *(int *)(param_1->_padding_ + uVar22 * 4);
            if ((iVar7 == -1) ||
               ((int)*(longlong *)
                      ((longlong)(&pUVar13[0x27].field_0x0 + (longlong)iVar6 * 0x10) + 8) <= iVar7))
            goto LAB_148c26587;
            if ((iVar7 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar16 = (longlong)iVar7 * 0x60;
            lVar14 = *(longlong *)(&pUVar13[0x27].field_0x0 + (longlong)iVar6 * 0x10);
            puVar3 = (undefined4 *)(lVar16 + lVar14);
            uVar23 = *puVar3;
            uVar24 = puVar3[1];
            uVar25 = puVar3[2];
            uVar26 = puVar3[3];
            puVar3 = (undefined4 *)(lVar16 + 0x10 + lVar14);
            uVar27 = *puVar3;
            uVar28 = puVar3[1];
            uVar29 = puVar3[2];
            uVar30 = puVar3[3];
            puVar3 = (undefined4 *)(lVar16 + 0x20 + lVar14);
            uVar31 = *puVar3;
            uVar32 = puVar3[1];
            uVar33 = puVar3[2];
            uVar34 = puVar3[3];
            puVar3 = (undefined4 *)(lVar16 + 0x30 + lVar14);
            uVar35 = *puVar3;
            uVar36 = puVar3[1];
            uVar37 = puVar3[2];
            uVar38 = puVar3[3];
            puVar3 = (undefined4 *)(lVar16 + 0x40 + lVar14);
            uVar39 = *puVar3;
            uVar40 = puVar3[1];
            uVar41 = puVar3[2];
            uVar42 = puVar3[3];
            puVar3 = (undefined4 *)(lVar16 + 0x50 + lVar14);
            uVar43 = *puVar3;
            uVar44 = puVar3[1];
            uVar45 = puVar3[2];
            uVar46 = puVar3[3];
            uVar15 = 0;
            if ((int)uVar18 < (this->BoneTransforms).ArrayNum) {
              uVar15 = ~uVar18 >> 0x1f;
            }
LAB_148c267af:
            if ((uVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar8 = (pTVar1->AllocatorInstance).Data;
            pFVar4 = pFVar8 + uVar21;
            *(undefined4 *)pFVar4 = uVar23;
            *(undefined4 *)(pFVar4 + 4) = uVar24;
            *(undefined4 *)(pFVar4 + 8) = uVar25;
            *(undefined4 *)(pFVar4 + 0xc) = uVar26;
            pFVar4 = pFVar8 + uVar21 + 0x10;
            *(undefined4 *)pFVar4 = uVar27;
            *(undefined4 *)(pFVar4 + 4) = uVar28;
            *(undefined4 *)(pFVar4 + 8) = uVar29;
            *(undefined4 *)(pFVar4 + 0xc) = uVar30;
            pFVar4 = pFVar8 + uVar21 + 0x20;
            *(undefined4 *)pFVar4 = uVar31;
            *(undefined4 *)(pFVar4 + 4) = uVar32;
            *(undefined4 *)(pFVar4 + 8) = uVar33;
            *(undefined4 *)(pFVar4 + 0xc) = uVar34;
            pFVar4 = pFVar8 + uVar21 + 0x30;
            *(undefined4 *)pFVar4 = uVar35;
            *(undefined4 *)(pFVar4 + 4) = uVar36;
            *(undefined4 *)(pFVar4 + 8) = uVar37;
            *(undefined4 *)(pFVar4 + 0xc) = uVar38;
            pFVar4 = pFVar8 + uVar21 + 0x40;
            *(undefined4 *)pFVar4 = uVar39;
            *(undefined4 *)(pFVar4 + 4) = uVar40;
            *(undefined4 *)(pFVar4 + 8) = uVar41;
            *(undefined4 *)(pFVar4 + 0xc) = uVar42;
            pFVar8 = pFVar8 + uVar21 + 0x50;
            *(undefined4 *)pFVar8 = uVar43;
            *(undefined4 *)(pFVar8 + 4) = uVar44;
            *(undefined4 *)(pFVar8 + 8) = uVar45;
            *(undefined4 *)(pFVar8 + 0xc) = uVar46;
          }
          uVar19 = (ulonglong)(uVar18 + 1);
          uVar22 = uVar22 + 1;
          uVar21 = uVar21 + 0x60;
        } while ((longlong)uVar22 < (longlong)(int)uVar5);
      }
    }
  }
  return;
}

// FillComponentToWorld @ 148c26920

void __thiscall
FClothingSimulationContextCommon::FillComponentToWorld
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1->_padding_;
  (this->ComponentToWorld).Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->ComponentToWorld).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (double)param_1->_padding_;
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (double)param_1->_padding_;
  (this->ComponentToWorld).Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->ComponentToWorld).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (double)param_1->_padding_;
  (this->ComponentToWorld).Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->ComponentToWorld).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (double)param_1->_padding_;
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (double)param_1->_padding_;
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1] = dVar1;
  return;
}

// FillDeltaSeconds @ 148c26c40

void __thiscall
FClothingSimulationContextCommon::FillDeltaSeconds
          (FClothingSimulationContextCommon *this,float param_1,float param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  this->DeltaSeconds = param_1;
  return;
}

// FillMaxDistanceScale @ 148c26c60

void __thiscall
FClothingSimulationContextCommon::FillMaxDistanceScale
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1)

{
  float fVar1;
  
  fVar1 = USkeletalMeshComponent::GetClothMaxDistanceScale(param_1);
  this->MaxDistanceScale = fVar1;
  return;
}

// FillRefToLocals @ 148c27240

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
FClothingSimulationContextCommon::FillRefToLocals
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1,bool param_2)

{
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  USkeletalMesh *pUVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  
  pTVar1 = &this->RefToLocals;
  piVar2 = &(this->RefToLocals).ArrayMax;
  (this->RefToLocals).ArrayNum = 0;
  piVar3 = &(this->RefToLocals).ArrayNum;
  if ((this->RefToLocals).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (param_2) {
    pUVar20 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    if (pUVar20 != (USkeletalMesh *)0x0) {
      lVar21 = (**(code **)(pUVar20->_padding_ + 0x318))(pUVar20);
      iVar5 = *(int *)(lVar21 + 0x28);
      lVar21 = (longlong)iVar5;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar5,&pTVar1->AllocatorInstance,piVar3,piVar2);
      uVar23 = 0;
      if (0 < iVar5) {
        lVar22 = 0;
        do {
          uVar17 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
          uVar16 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
          uVar15 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
          uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
          uVar13 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
          uVar12 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
          fVar11 = UE::Math::TMatrix<float>::Identity.M[0][3];
          fVar10 = UE::Math::TMatrix<float>::Identity.M[0][2];
          fVar9 = UE::Math::TMatrix<float>::Identity.M[0][1];
          fVar8 = UE::Math::TMatrix<float>::Identity.M[0][0];
          uVar19 = 0;
          if ((int)uVar23 < *piVar3) {
            uVar19 = ~uVar23 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (pTVar1->AllocatorInstance).Data;
          uVar23 = uVar23 + 1;
          pFVar4 = pFVar6 + lVar22;
          *(float *)pFVar4 = fVar8;
          *(float *)(pFVar4 + 4) = fVar9;
          *(float *)(pFVar4 + 8) = fVar10;
          *(float *)(pFVar4 + 0xc) = fVar11;
          *(undefined8 *)(pFVar6 + lVar22 + 0x10) = uVar12;
          *(undefined8 *)(pFVar6 + lVar22 + 0x10 + 8) = uVar13;
          *(undefined8 *)(pFVar6 + lVar22 + 0x20) = uVar14;
          *(undefined8 *)(pFVar6 + lVar22 + 0x20 + 8) = uVar15;
          *(undefined8 *)(pFVar6 + lVar22 + 0x30) = uVar16;
          *(undefined8 *)(pFVar6 + lVar22 + 0x30 + 8) = uVar17;
          lVar22 = lVar22 + 0x40;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
    }
  }
  else {
    USkinnedMeshComponent::GetCurrentRefToLocalMatrices
              ((USkinnedMeshComponent *)param_1,pTVar1,*(int *)((longlong)&param_1->_padding_ + 4),
               (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0);
  }
  return;
}

// FillSolverGeometryScale @ 148c273f0

void __thiscall
FClothingSimulationContextCommon::FillSolverGeometryScale
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1)

{
  this->SolverGeometryScale = param_1->ClothGeometryScale;
  return;
}

// FillTeleportMode @ 148c27410

void __thiscall
FClothingSimulationContextCommon::FillTeleportMode
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1,float param_2,
          float param_3)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  EClothingTeleportMode EVar4;
  float fVar5;
  float fVar6;
  
  pTVar2 = GClothMaxDeltaTimeTeleportMultiplier.Ref;
  if (param_1->ClothTeleportMode == None) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    EVar4 = Teleport;
    if (param_3 * pTVar2->ShadowedValue[0] < param_2) goto LAB_148c2749e;
  }
  EVar4 = param_1->ClothTeleportMode;
LAB_148c2749e:
  this->TeleportMode = EVar4;
  pTVar2 = GClothMaxVelocityScale.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((this->TeleportMode != None) || (param_2 <= 0.0)) {
    this->VelocityScale = 0.0;
  }
  else {
    fVar6 = pTVar2->ShadowedValue[0];
    if (__real_3f800000 <= pTVar2->ShadowedValue[0]) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (param_1->ClothVelocityScale <= fVar6) {
      fVar6 = param_1->ClothVelocityScale;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar5 = param_2;
    if (param_3 <= param_2) {
      fVar5 = param_3;
    }
    this->VelocityScale = (fVar6 * fVar5) / param_2;
  }
  return;
}

// FillWindVelocity @ 148c27560

void __thiscall
FClothingSimulationContextCommon::FillWindVelocity
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1)

{
  USkeletalMeshComponent::GetWindForCloth_GameThread
            (param_1,&this->WindVelocity,&this->WindAdaption);
  return;
}

// FillWorldGravity @ 148c27580

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
FClothingSimulationContextCommon::FillWorldGravity
          (FClothingSimulationContextCommon *this,USkeletalMeshComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  float fVar3;
  
  this_00 = (UWorld *)param_1->_padding_;
  if (((this_00 == (UWorld *)0x0) &&
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
      this_00 == (UWorld *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingSimulation.cpp"
                         ,0x9d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar3 = UWorld::GetGravityZ(this_00);
  (this->WorldGravity).field0_0x0._s_0.X = 0.0;
  (this->WorldGravity).field0_0x0._s_0.Y = 0.0;
  (this->WorldGravity).field0_0x0._s_0.Z = (double)fVar3;
  return;
}

