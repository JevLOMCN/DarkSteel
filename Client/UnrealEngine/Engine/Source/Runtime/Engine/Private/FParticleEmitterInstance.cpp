// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 89

// FParticleEmitterInstance @ 1480f3f20

FParticleEmitterInstance * __thiscall
FParticleEmitterInstance::FParticleEmitterInstance
          (FParticleEmitterInstance *this,IParticleEmitterInstanceOwner *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->bIsBeam = '\0';
  this->bFakeBurstsWhenSpawningSupressed = '\0';
  this->bAxisLockEnabled = '\0';
  this->_padding_ = (longlong)&___7FParticleEmitterInstance__6B_;
  this->SpriteTemplate = (UParticleEmitter *)0x0;
  this->Component = param_1;
  puVar2 = &this->field_0x160;
  this->bEnabled = '\x01';
  this->bIgnoreComponentScale = '\0';
  this->bRequiresLoopNotification = '\0';
  this->bHaltSpawningExternal = '\0';
  this->bHaltSpawning = '\0';
  this->bKillOnCompleted = '\0';
  this->bKillOnDeactivate = '\0';
  (this->PivotOffset).field0_0x0._s_0.X = -0.5;
  (this->PivotOffset).field0_0x0._s_0.Y = -0.5;
  this->CurrentLODLevel = (UParticleLODLevel *)0x0;
  this->CurrentLODLevelIndex = 0;
  this->TypeDataOffset = 0;
  this->TypeDataInstanceOffset = -1;
  this->SubUVDataOffset = 0;
  this->DynamicParameterDataOffset = 0;
  this->LightDataOffset = 0;
  this->LightVolumetricScatteringIntensity = 0.0;
  this->OrbitModuleOffset = 0;
  this->CameraPayloadOffset = 0;
  this->PayloadOffset = 0;
  (this->LockAxisFlags).Value = '\0';
  this->SortMode = 0;
  this->ParticleData = (uchar *)0x0;
  this->ParticleIndices = (ushort *)0x0;
  this->InstanceData = (uchar *)0x0;
  this->InstancePayloadSize = 0;
  this->ParticleSize = 0;
  this->ParticleStride = 0;
  this->ActiveParticles = 0;
  this->ParticleCounter = 0;
  this->MaxActiveParticles = 0;
  this->SpawnFraction = 0.0;
  this->SecondsSinceCreation = 0.0;
  this->EmitterTime = 0.0;
  (this->ParticleBoundingBox).IsValid = '\0';
  (this->BurstFired).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurstFired).ArrayNum = 0;
  (this->BurstFired).ArrayMax = 0;
  this->LoopCount = 0;
  this->IsRenderDataDirty = 0;
  this->EmitterDuration = 0.0;
  (this->EmitterDurations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterDurations).ArrayNum = 0;
  (this->EmitterDurations).ArrayMax = 0;
  this->TrianglesToRender = 0;
  this->MaxVertexIndex = 0;
  this->CurrentMaterial = (UMaterialInterface *)0x0;
  this->EventCount = 0;
  this->MaxEventCount = 0;
  (this->PositionOffsetThisTick).field0_0x0._s_0.X = 0.0;
  (this->PositionOffsetThisTick).field0_0x0._s_0.Y = 0.0;
  (this->PositionOffsetThisTick).field0_0x0._s_0.Z = 0.0;
  (this->HighQualityLights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HighQualityLights).ArrayNum = 0;
  (this->HighQualityLights).ArrayMax = 0;
  return this;
}

// ~FParticleEmitterInstance @ 1480f7020

void __thiscall FParticleEmitterInstance::~FParticleEmitterInstance(FParticleEmitterInstance *this)

{
  int *piVar1;
  TArray<UPointLightComponent_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FLODBurstFired,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  pTVar2 = &this->HighQualityLights;
  uVar9 = 0;
  this->_padding_ = (longlong)&___7FParticleEmitterInstance__6B_;
  if (0 < (this->HighQualityLights).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->HighQualityLights).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + lVar10);
      (**(code **)(*plVar4 + 0x4a0))(plVar4,0);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < (this->HighQualityLights).ArrayNum);
  }
  (this->HighQualityLights).ArrayNum = 0;
  if ((this->HighQualityLights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->HighQualityLights).ArrayMax);
  }
  FMemory::Free(this->ParticleData);
  FMemory::Free(this->ParticleIndices);
  FMemory::Free(this->InstanceData);
  pTVar3 = &this->BurstFired;
  DestructItems<FLODBurstFired,int>
            ((FLODBurstFired *)(pTVar3->AllocatorInstance).Data,(this->BurstFired).ArrayNum);
  piVar1 = &(this->BurstFired).ArrayMax;
  (this->BurstFired).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->EmitterDurations).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FLODBurstFired,int>
            ((FLODBurstFired *)(pTVar3->AllocatorInstance).Data,(this->BurstFired).ArrayNum);
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if (pFVar5 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar5);
  return;
}

// operator() @ 1480f8db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FParticleEmitterInstance::SpawnParticles'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  UParticleModule *pUVar5;
  byte *pbVar6;
  FName FVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_SpriteParticlesSpawned> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res8;
  longlong local_res20;
  FString local_118;
  FString local_108;
  FName local_f8;
  undefined8 local_f0;
  FName local_e8;
  FName local_e0;
  FStatMessage local_d8;
  longlong local_c8;
  uint local_c0;
  float local_bc;
  longlong local_b8;
  FName local_b0;
  void *local_a8 [2];
  void *local_98 [11];
  
  lVar3 = *(longlong *)(*(longlong *)this + 8);
  if ((*(int *)(lVar3 + 0x48) < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar9 = __real_3f800000;
  fVar22 = 0.0;
  lVar3 = **(longlong **)(lVar3 + 0x40);
  fVar20 = **(float **)((longlong)this + 8);
  iVar2 = **(int **)((longlong)this + 0x10);
  if ((iVar2 < 1) || (**(float **)((longlong)this + 0x18) <= 0.0)) {
    if (iVar2 < 1) {
      return;
    }
  }
  else {
    fVar22 = __real_3f800000 / (float)iVar2;
  }
  local_res8 = 0;
  fVar21 = __real_3f800000;
  do {
    lVar14 = *(longlong *)this;
    if ((*(longlong *)(lVar14 + 0x168) == 0) || (*(longlong *)(lVar14 + 0x170) == 0)) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8227774926602373263>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                          ,0x88f,"ParticleData && ParticleIndices");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (bErrorReported == false) {
        if (1 < (byte)LogParticles._0_1_) {
          (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x88))
                    (*(longlong **)(*(longlong *)this + 0x10),local_98);
          cVar11 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xa0))();
          if ((cVar11 == '\0') ||
             (lVar14 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd8))(),
             lVar14 == 0)) {
            ::FString::FString(&local_108,L"None");
          }
          else {
            local_e0 = *(FName *)(lVar14 + 0x18);
            ::FName::ToString(&local_e0,&local_108);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_98[0] != (void *)0x0) {
            FMemory::Free(local_98[0]);
          }
        }
        bErrorReported = true;
      }
      *(undefined4 *)(*(longlong *)this + 0x18c) = 0;
      **(undefined4 **)((longlong)this + 0x10) = 0;
    }
    else {
      uVar1 = *(ushort *)(*(longlong *)(lVar14 + 0x170) + (longlong)*(int *)(lVar14 + 0x18c) * 2);
      if (*(int *)(lVar14 + 0x194) <= (int)(uint)uVar1) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8227774926602373278>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                            ,0x89e,"NextFreeIndex < MaxActiveParticles");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (1 < (byte)LogParticles._0_1_) {
          (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x88))
                    (*(longlong **)(*(longlong *)this + 0x10),local_a8);
          cVar11 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xa0))();
          if ((cVar11 == '\0') ||
             (lVar14 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd8))(),
             lVar14 == 0)) {
            ::FString::FString(&local_118,L"None");
          }
          else {
            local_f8 = *(FName *)(lVar14 + 0x18);
            ::FName::ToString(&local_f8,&local_118);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_a8[0] != (void *)0x0) {
            FMemory::Free(local_a8[0]);
          }
        }
        FParticleEmitterInstance::FixupParticleIndices(*(FParticleEmitterInstance **)this);
        lVar14 = *(longlong *)this;
        uVar1 = *(ushort *)(*(longlong *)(lVar14 + 0x170) + (longlong)*(int *)(lVar14 + 0x18c) * 2);
      }
      iVar2 = *(int *)(lVar14 + 0x18c);
      lVar18 = (longlong)(int)((uint)uVar1 * *(int *)(lVar14 + 0x188)) +
               *(longlong *)(lVar14 + 0x168);
      *(int *)(lVar14 + 0x18c) = iVar2 + 1;
      if (param_1) {
        fVar21 = fVar21 - fVar22;
        **(float **)((longlong)this + 8) =
             **(float **)((longlong)this + 8) - **(float **)((longlong)this + 0x18);
      }
      (**(code **)(**(longlong **)this + 200))
                (*(longlong **)this,lVar18,*(undefined8 *)((longlong)this + 0x20),
                 *(undefined8 *)((longlong)this + 0x28));
      uVar19 = 0;
      lVar14 = **(longlong **)((longlong)this + 0x30);
      if (0 < *(int *)(lVar14 + 0x78)) {
        local_res20 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar19 < *(int *)(lVar14 + 0x78)) {
            uVar12 = ~uVar19 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar4 = *(longlong **)(local_res20 + *(longlong *)(lVar14 + 0x70));
          if ((char)plVar4[5] < '\0') {
            uVar12 = 0;
            if ((int)uVar19 < *(int *)(lVar3 + 0x78)) {
              uVar12 = ~uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar14 = *(longlong *)this;
            pUVar5 = *(UParticleModule **)(local_res20 + *(longlong *)(lVar3 + 0x70));
            pcVar8 = *(code **)(*plVar4 + 0x2b8);
            if ((*(longlong *)(lVar14 + 8) == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SpriteTemplate",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                                    ,0x5fc,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar15 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                      ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                              *)(*(longlong *)(lVar14 + 8) + 0x60),pUVar5);
            local_c0 = 0;
            if (puVar15 != (uint *)0x0) {
              local_c0 = *puVar15;
            }
            local_c8 = lVar14;
            local_bc = fVar20;
            local_b8 = lVar18;
            (*pcVar8)(plVar4,&local_c8);
            iVar13 = _finite(*(double *)(lVar18 + 0x18));
            if (((iVar13 == 0) || (iVar13 = _finite(*(double *)(lVar18 + 0x20)), iVar13 == 0)) ||
               (iVar13 = _finite(*(double *)(lVar18 + 0x28)), iVar13 == 0)) {
              local_f0 = *(undefined8 *)this;
              ``FParticleEmitterInstance::SpawnParticles'::__l2::<lambda_1>::operator()'::__l41::
              <lambda_1>::operator()(&local_f0);
            }
          }
          uVar19 = uVar19 + 1;
          local_res20 = local_res20 + 8;
          lVar14 = **(longlong **)((longlong)this + 0x30);
        } while ((int)uVar19 < *(int *)(lVar14 + 0x78));
      }
      (**(code **)(**(longlong **)this + 0xd0))(*(longlong **)this,lVar18,fVar21,fVar20);
      if (*(float *)(lVar18 + 0x90) <= fVar9) {
        pbVar6 = (byte *)**(undefined8 **)((longlong)this + 0x38);
        if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 1) != 0)) {
          plVar4 = *(longlong **)(**(longlong **)((longlong)this + 0x30) + 0x58);
          (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)this,pbVar6,lVar18);
        }
        if (!param_1) {
          fVar21 = fVar21 - fVar22;
          fVar20 = fVar20 - **(float **)((longlong)this + 0x18);
        }
        if (FThreadStats::bPrimaryEnable != false) {
          FVar17 = StatPtr_STAT_SpriteParticlesSpawned;
          if (StatPtr_STAT_SpriteParticlesSpawned ==
              (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesSpawned>)0x0) {
            pFVar16 = ::FName::FName(&local_b0,"STAT_SpriteParticlesSpawned");
            FVar17 = (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesSpawned>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteParticlesSpawned,
                                *pFVar16,L"Sprite Ptcls Spawned","STATGROUP_Particles",
                                "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar7 = *(FName *)FVar17;
          if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_d8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
            local_d8.StatData.Pad[0] = '\x01';
            local_d8.StatData.Pad[1] = '\0';
            local_d8.StatData.Pad[2] = '\0';
            local_d8.StatData.Pad[3] = '\0';
            local_d8.StatData.Pad[4] = '\0';
            local_d8.StatData.Pad[5] = '\0';
            local_d8.StatData.Pad[6] = '\0';
            local_d8.StatData.Pad[7] = '\0';
            local_e8 = FVar7;
            local_d8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_00,&local_d8);
            FStatsTrace::Add(&local_e8,1);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
      }
      else {
        (**(code **)(**(longlong **)this + 0xe8))(*(longlong **)this,iVar2);
      }
    }
    local_res8 = local_res8 + 1;
    if (**(int **)((longlong)this + 0x10) <= local_res8) {
      return;
    }
  } while( true );
}

// ApplyWorldOffset @ 1480fe020

void __thiscall
FParticleEmitterInstance::ApplyWorldOffset
          (FParticleEmitterInstance *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UParticleLODLevel *pUVar6;
  
  UpdateTransforms(this);
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  (this->Location).field0_0x0._s_0.X = dVar1 + (this->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar2 + (this->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.Z = dVar3 + (this->Location).field0_0x0._s_0.Z;
  dVar4 = (this->OldLocation).field0_0x0._s_0.Y;
  dVar5 = (this->OldLocation).field0_0x0._s_0.Z;
  (this->OldLocation).field0_0x0._s_0.X = dVar1 + (this->OldLocation).field0_0x0._s_0.X;
  (this->OldLocation).field0_0x0._s_0.Y = dVar2 + dVar4;
  (this->OldLocation).field0_0x0._s_0.Z = dVar3 + dVar5;
  pUVar6 = GetCurrentLODLevelChecked(this);
  if (((pUVar6->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->PositionOffsetThisTick).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->PositionOffsetThisTick).field0_0x0._s_0.Y = dVar2;
    (this->PositionOffsetThisTick).field0_0x0._s_0.Z = dVar1;
  }
  return;
}

// BeginTrail @ 1480fea70

void __thiscall FParticleEmitterInstance::BeginTrail(FParticleEmitterInstance *this)

{
  return;
}

// CalculateOrbitOffset @ 1481014b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticleEmitterInstance::CalculateOrbitOffset
          (FParticleEmitterInstance *this,FOrbitChainModuleInstancePayload *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4,float param_5,
          TVector<double> *param_6,TMatrix<double> *param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auStack_198 [32];
  TVector<double>_u_0 local_178;
  TRotator<double> local_160;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  dVar18 = (double)param_5;
  dVar2 = dVar18 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  dVar14 = dVar18 * (param_4->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
  dVar18 = dVar18 * (param_4->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z;
  (param_3->field0_0x0)._s_0.X = dVar2;
  (param_3->field0_0x0)._s_0.Y = dVar14;
  (param_3->field0_0x0)._s_0.Z = dVar18;
  (param_1->Rotation).field0_0x0._s_0.X = (float)dVar2;
  (param_1->Rotation).field0_0x0._s_0.Y = (float)dVar14;
  (param_1->Rotation).field0_0x0._s_0.Z = (float)dVar18;
  dVar18 = (param_3->field0_0x0)._s_0.X;
  uVar12 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar12) &&
        (double)CONCAT44(uVar13,uVar12) != __real_3f1a36e2e0000000) ||
      (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
      uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar12) &&
      (double)CONCAT44(uVar13,uVar12) != __real_3f1a36e2e0000000)) ||
     (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
     uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar12) &&
     (double)CONCAT44(uVar13,uVar12) != __real_3f1a36e2e0000000)) {
    dVar2 = (param_3->field0_0x0)._s_0.Z;
    dVar14 = (param_3->field0_0x0)._s_0.Y;
    auVar15._8_4_ = SUB84(dVar2,0);
    auVar15._0_8_ = dVar2;
    auVar15._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_178._s_0.Z =
         (dVar14 * param_7->M[1][2] + dVar18 * param_7->M[0][2] + dVar2 * param_7->M[2][2] +
         param_7->M[3][2] * 0.0) * __real_4076800000000000;
    local_178._s_0.X =
         (param_7->M[0][0] * dVar18 + param_7->M[1][0] * dVar14 + dVar2 * param_7->M[2][0] +
         param_7->M[3][0] * 0.0) * __real_4076800000000000;
    local_178._s_0.Y =
         (param_7->M[0][1] * dVar18 + param_7->M[1][1] * dVar14 + auVar15._8_8_ * param_7->M[2][1] +
         param_7->M[3][1] * 0.0) * __real_4076800000000000;
    UE::Math::TRotator<double>::MakeFromEuler(&local_160,(TVector<double> *)&local_178._s_0);
    UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
              ((TRotationTranslationMatrix<double> *)&local_148,&local_160,
               &UE::Math::TVector<double>::ZeroVector);
    local_c8.M[0][0] = local_148;
    local_c8.M[0][1] = dStack_140;
    local_c8.M[0][2] = local_138;
    local_c8.M[0][3] = dStack_130;
    local_c8.M[1][0] = local_128;
    local_c8.M[1][1] = dStack_120;
    local_c8.M[1][2] = local_118;
    local_c8.M[1][3] = dStack_110;
    local_c8.M[2][0] = local_108;
    local_c8.M[2][1] = dStack_100;
    local_c8.M[2][2] = local_f8;
    local_c8.M[2][3] = dStack_f0;
    local_c8.M[3][0] = local_e8;
    local_c8.M[3][1] = dStack_e0;
    local_c8.M[3][2] = local_d8;
    local_c8.M[3][3] = dStack_d0;
    VectorMatrixMultiply(param_7,param_7,&local_c8);
    dVar11 = __real_3ff0000000000000;
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar14 = (param_2->field0_0x0)._s_0.Y;
    dVar18 = (param_2->field0_0x0)._s_0.Z;
    dVar3 = param_7->M[0][1];
    dVar4 = param_7->M[1][1];
    auVar16._8_4_ = SUB84(dVar18,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar5 = param_7->M[2][1];
    dVar6 = param_7->M[3][1];
    auVar17._8_4_ = SUB84(__real_3ff0000000000000,0);
    auVar17._0_8_ = __real_3ff0000000000000;
    auVar17._12_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar7 = param_7->M[1][2];
    dVar8 = param_7->M[0][2];
    dVar9 = param_7->M[2][2];
    dVar10 = param_7->M[3][2];
    (param_6->field0_0x0)._s_0.X =
         param_7->M[0][0] * dVar2 + param_7->M[1][0] * dVar14 + dVar18 * param_7->M[2][0] +
         __real_3ff0000000000000 * param_7->M[3][0];
    (param_6->field0_0x0)._s_0.Y =
         dVar3 * dVar2 + dVar4 * dVar14 + auVar16._8_8_ * dVar5 + auVar17._8_8_ * dVar6;
    (param_6->field0_0x0)._s_0.Z = dVar14 * dVar7 + dVar2 * dVar8 + dVar18 * dVar9 + dVar10 * dVar11
    ;
  }
  else {
    dVar18 = (param_2->field0_0x0)._s_0.Y;
    (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_6->field0_0x0)._s_0.Y = dVar18;
    (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  (param_2->field0_0x0)._s_0.X = 0.0;
  (param_2->field0_0x0)._s_0.Y = 0.0;
  (param_2->field0_0x0)._s_0.Z = 0.0;
  (param_3->field0_0x0)._s_0.X = 0.0;
  (param_3->field0_0x0)._s_0.Y = 0.0;
  (param_3->field0_0x0)._s_0.Z = 0.0;
  (param_4->field0_0x0)._s_0.X = 0.0;
  (param_4->field0_0x0)._s_0.Y = 0.0;
  (param_4->field0_0x0)._s_0.Z = 0.0;
  return;
}

// CalculateParticleStride @ 1481017f0

uint __thiscall
FParticleEmitterInstance::CalculateParticleStride(FParticleEmitterInstance *this,uint param_1)

{
  return param_1;
}

// CheckEmitterFinished @ 148101c70

void __thiscall FParticleEmitterInstance::CheckEmitterFinished(FParticleEmitterInstance *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UParticleModuleSpawn *pUVar3;
  UParticleModuleRequired *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UParticleLODLevel *pUVar9;
  float fVar10;
  
  pUVar9 = GetCurrentLODLevelChecked(this);
  if (this->ActiveParticles == 0) {
    pUVar3 = (pUVar9->SpawnModule).field0_0x0.DebugPtr;
    if ((pUVar3 == (UParticleModuleSpawn *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SpawnModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x37b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (pUVar3->BurstList).ArrayNum;
    if (iVar2 != 0) {
      uVar8 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar8 = ~(iVar2 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = (pUVar3->BurstList).AllocatorInstance.Data +
               ((longlong)(pUVar3->BurstList).ArrayNum * 3 + -3) * 4;
      if ((pFVar1 != (FScriptContainerElement *)0x0) &&
         (this->EmitterTime < *(float *)(pFVar1 + 8) || this->EmitterTime == *(float *)(pFVar1 + 8))
         ) {
        return;
      }
    }
    pUVar4 = (pUVar9->RequiredModule).field0_0x0.DebugPtr;
    if ((pUVar4 == (UParticleModuleRequired *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequiredModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x386,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar7 = (**(code **)(this->_padding_ + 0xd8))(this);
    if ((cVar7 != '\0') ||
       (((fVar10 = (float)(**(code **)(pUVar3->_padding_ + 0x3a8))(pUVar3), fVar10 == 0.0 &&
         (pUVar4->EmitterDuration == 0.0)) && (pUVar4->EmitterLoops == 0)))) {
      this->bEmitterIsDone = '\x01';
    }
  }
  return;
}

// CheckSpawnCount @ 148101dd0

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
FParticleEmitterInstance::CheckSpawnCount(FParticleEmitterInstance *this,int param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  UObjectBaseUtility *this_00;
  FString *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_58;
  int local_50;
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  cVar2 = (**(code **)((longlong)*this->Component + 0x40))();
  if (cVar2 != '\0') {
    (**(code **)((longlong)*this->Component + 0xe8))(this->Component,&local_58);
    uVar8 = 0;
    if (0 < local_50) {
      lVar9 = 0;
      iVar7 = local_50;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , iVar7 = local_50, bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(FParticleEmitterInstance **)(lVar9 + local_58) == this) break;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < iVar7);
    }
    lVar9 = (**(code **)((longlong)*this->Component + 0xd8))();
    if (lVar9 != 0) {
      this_00 = (UObjectBaseUtility *)(**(code **)((longlong)*this->Component + 0xd8))();
      pFVar6 = UObjectBaseUtility::GetPathName(this_00,&local_38,(UObject *)0x0);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    ::FString::PrintfImpl
              (&local_48,
               L"Emitter %2d spawn vertices: %10d (%8.3f kB of verts), clamp to %10d (%8.3f kB) - spawned %4d: %s"
              );
    if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar4 = UEngine::OnScreenDebugMessageExists(GEngine,(ulonglong)this | 0x8000000);
    if ((!bVar4) && (4 < (byte)LogParticles._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
    UEngine::AddOnScreenDebugMessage
              (GEngine,(ulonglong)this | 0x8000000,__real_40a00000,(FColor)0xffffff00,&local_48,true
               ,&UE::Math::TVector2<double>::UnitVector);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndTrail @ 148107cc0

void __thiscall FParticleEmitterInstance::EndTrail(FParticleEmitterInstance *this)

{
  return;
}

// FakeBursts @ 148108b20

void __thiscall FParticleEmitterInstance::FakeBursts(FParticleEmitterInstance *this)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UParticleLODLevel *pUVar8;
  uint uVar9;
  UParticleModuleSpawn *pUVar10;
  longlong lVar11;
  longlong lVar12;
  
  pUVar8 = GetCurrentLODLevelChecked(this);
  pUVar10 = (pUVar8->SpawnModule).field0_0x0.DebugPtr;
  if (0 < (pUVar10->BurstList).ArrayNum) {
    uVar9 = 0;
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (pUVar10->BurstList).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
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
      pFVar3 = (pUVar10->BurstList).AllocatorInstance.Data;
      iVar2 = pUVar8->Level;
      if (iVar2 < (this->BurstFired).ArrayNum) {
        if ((iVar2 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->BurstFired).AllocatorInstance.Data;
        if (((int)uVar9 < *(int *)(pFVar4 + (longlong)iVar2 * 0x10 + 8)) &&
           (fVar1 = *(float *)(pFVar3 + lVar12 + 8),
           fVar1 < this->EmitterTime || fVar1 == this->EmitterTime)) {
          if (((int)uVar9 < 0) &&
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
          *(undefined1 *)(lVar11 + *(longlong *)(pFVar4 + (longlong)iVar2 * 0x10)) = 1;
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0xc;
      pUVar10 = (pUVar8->SpawnModule).field0_0x0.DebugPtr;
    } while ((int)uVar9 < (pUVar10->BurstList).ArrayNum);
  }
  return;
}

// FillReplayData @ 148109600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FParticleEmitterInstance::FillReplayData
          (FParticleEmitterInstance *this,FDynamicEmitterReplayDataBase *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  UParticleLODLevel *pUVar4;
  UParticleModuleRequired *pUVar5;
  UParticleEmitter *pUVar6;
  UParticleModule *pUVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleEmitterInstance_FillReplayData>
  FVar16;
  longlong lVar17;
  FThreadSafeStaticStat<FStat_STAT_RTParticleData> FVar18;
  int *piVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float *pfVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  float fVar27;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_84;
  undefined4 local_7c;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  piVar25 = (int *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleEmitterInstance_FillReplayData ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleEmitterInstance_FillReplayData>
         )0x0) {
      pFVar15 = ::FName::FName(&local_68,"STAT_ParticleEmitterInstance_FillReplayData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleEmitterInstance_FillReplayData,
                 *pFVar15,L"STAT_ParticleEmitterInstance_FillReplayData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_ParticleEmitterInstance_FillReplayData;
  if (StatPtr_STAT_ParticleEmitterInstance_FillReplayData ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleEmitterInstance_FillReplayData>
       )0x0) {
    pFVar15 = ::FName::FName(&local_60,"STAT_ParticleEmitterInstance_FillReplayData");
    FVar16 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleEmitterInstance_FillReplayData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleEmitterInstance_FillReplayData,*pFVar15,
                          L"STAT_ParticleEmitterInstance_FillReplayData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar9 = false;
  bVar11 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_res20.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xae0);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar10 = true;
      goto LAB_148109769;
    }
  }
  bVar10 = false;
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
LAB_148109769:
  if ((((this->SpriteTemplate == (UParticleEmitter *)0x0) || (this->ActiveParticles < 1)) ||
      (this->bEnabled == 0)) ||
     ((pUVar4 = this->CurrentLODLevel, pUVar4 == (UParticleLODLevel *)0x0 || (pUVar4->bEnabled == 0)
      ))) {
    bVar12 = false;
  }
  else {
    if ((this->MaxActiveParticles < this->ActiveParticles) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxActiveParticles >= ActiveParticles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                            ,0xaf8,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    param_1->eEmitterType = DET_Unknown;
    param_1->ActiveParticleCount = this->ActiveParticles;
    param_1->ParticleStride = this->ParticleStride;
    param_1->SortMode = this->SortMode;
    *(undefined8 *)&(param_1->Scale).field0_0x0 =
         UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    (param_1->Scale).field0_0x0._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    lVar17 = (**(code **)((longlong)*this->Component + 0x10))();
    local_50 = *(double *)(lVar17 + 0x40);
    dStack_48 = *(double *)(lVar17 + 0x48);
    local_40 = *(double *)(lVar17 + 0x50);
    (param_1->Scale).field0_0x0._s_0.X = (float)local_50;
    (param_1->Scale).field0_0x0._s_0.Y = (float)dStack_48;
    (param_1->Scale).field0_0x0._s_0.Z = (float)local_40;
    iVar14 = this->MaxActiveParticles * this->ParticleStride;
    FParticleDataContainer::Alloc(&param_1->DataContainer,iVar14,this->MaxActiveParticles);
    lVar17 = (longlong)(param_1->DataContainer).MemBlockSize;
    if ((lVar17 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar18 = StatPtr_STAT_RTParticleData;
      if (StatPtr_STAT_RTParticleData == (FThreadSafeStaticStat<FStat_STAT_RTParticleData>)0x0) {
        pFVar15 = ::FName::FName(&local_58,"STAT_RTParticleData");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_RTParticleData>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTParticleData,*pFVar15,
                            L"Ptcls Data RT Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar18,Add,lVar17,false);
    }
    memcpy((param_1->DataContainer).ParticleData,this->ParticleData,(longlong)iVar14);
    memcpy((param_1->DataContainer).ParticleIndices,this->ParticleIndices,
           (longlong)(param_1->DataContainer).ParticleIndicesNumShorts * 2);
    pUVar5 = (pUVar4->RequiredModule).field0_0x0.DebugPtr;
    piVar19 = ::operator_new(0x30);
    if (piVar19 != (int *)0x0) {
      piVar19[0] = 0;
      piVar19[1] = 0;
      piVar19[2] = 0;
      piVar19[3] = 0;
      piVar19[8] = 0;
      piVar19[9] = 0;
      piVar19[10] = 0;
      piVar19[0xb] = 0;
      piVar19[4] = 0;
      piVar19[5] = 0;
      piVar19[6] = 0;
      piVar19[7] = 0;
      piVar25 = piVar19;
    }
    *(byte *)(piVar25 + 10) =
         (pUVar5->CutoutTexture).field0_0x0.DebugPtr != (UTexture2D *)0x0 |
         *(byte *)(piVar25 + 10) & 0xfe;
    bVar12 = UParticleModuleRequired::ShouldUseVelocityForMotionBlur(pUVar5);
    *(byte *)(piVar25 + 10) = bVar12 * '\x02' | *(byte *)(piVar25 + 10) & 0xfd;
    *piVar25 = pUVar5->SubImages_Vertical * pUVar5->SubImages_Horizontal;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(piVar25 + 4),
               &(pUVar5->DerivedData).BoundingGeometry);
    iVar14 = 8;
    if ((pUVar5->BoundingMode).Value == '\0') {
      iVar14 = 4;
    }
    piVar25[1] = iVar14;
    iVar14 = 6;
    if ((pUVar5->BoundingMode).Value == '\0') {
      iVar14 = 2;
    }
    piVar25[2] = iVar14;
    piVar25[3] = (int)pUVar5->AlphaThreshold;
    *(FRHIShaderResourceView **)(piVar25 + 8) =
         (pUVar5->BoundingGeometryBuffer->ShaderResourceView).Reference;
    *(int **)&param_1[1].eEmitterType = piVar25;
    param_1[1]._padding_ = 0;
    if (this->LastDeltaTime <= __real_38d1b717) {
      fVar27 = 0.0;
    }
    else {
      fVar27 = __real_3f800000 / this->LastDeltaTime;
    }
    *(float *)&param_1[1].DataContainer.ParticleData = fVar27;
    if (((pUVar4->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
      puVar20 = (undefined8 *)(**(code **)((longlong)*this->Component + 0x78))();
      local_7c = *(undefined4 *)(puVar20 + 1);
      puVar21 = &local_84;
      local_84 = *puVar20;
    }
    else {
      local_88 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      puVar21 = &local_90;
      local_90 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    }
    uVar3 = *(undefined4 *)(puVar21 + 1);
    *(undefined8 *)((longlong)&param_1[1].DataContainer.ParticleData + 4) = *puVar21;
    *(undefined4 *)((longlong)&param_1[1].DataContainer.ParticleIndices + 4) = uVar3;
    pUVar5 = (pUVar4->RequiredModule).field0_0x0.DebugPtr;
    if (pUVar5->bUseMaxDrawCount == '\0') {
      fVar27 = -NAN;
    }
    else {
      fVar27 = (float)pUVar5->MaxDrawCount;
    }
    param_1[1].Scale.field0_0x0._s_0.X = fVar27;
    param_1[1].field_0x5e = (((pUVar4->RequiredModule).field0_0x0.DebugPtr)->ScreenAlignment).Value;
    param_1[1].field_0x5c = ((pUVar4->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
    *(uchar *)&param_1[2]._padding_ = (this->SpriteTemplate->EmitterRenderMode).Value;
    param_1[1].Scale.field0_0x0._s_0.Z = (float)this->DynamicParameterDataOffset;
    param_1[1].SortMode = this->LightDataOffset;
    *(float *)&param_1[1].MacroUVOverride = this->LightVolumetricScatteringIntensity;
    param_1[1].MacroUVOverride.Radius = (float)this->CameraPayloadOffset;
    param_1[1].MacroUVOverride.Position.field0_0x0._s_0.X = (float)this->SubUVDataOffset;
    param_1[1].MacroUVOverride.Position.field0_0x0._s_0.Y =
         (float)((pUVar4->RequiredModule).field0_0x0.DebugPtr)->SubImages_Horizontal;
    param_1[1].MacroUVOverride.Position.field0_0x0._s_0.Z =
         (float)((pUVar4->RequiredModule).field0_0x0.DebugPtr)->SubImages_Vertical;
    (param_1->MacroUVOverride).bOverride =
         ((pUVar4->RequiredModule).field0_0x0.DebugPtr)->bOverrideSystemMacroUV;
    (param_1->MacroUVOverride).Radius =
         ((pUVar4->RequiredModule).field0_0x0.DebugPtr)->MacroUVRadius;
    pUVar5 = (pUVar4->RequiredModule).field0_0x0.DebugPtr;
    dVar1 = (pUVar5->MacroUVPosition).field0_0x0._s_0.Y;
    dVar2 = (pUVar5->MacroUVPosition).field0_0x0._s_0.Z;
    (param_1->MacroUVOverride).Position.field0_0x0._s_0.X =
         (float)(pUVar5->MacroUVPosition).field0_0x0._s_0.X;
    (param_1->MacroUVOverride).Position.field0_0x0._s_0.Y = (float)dVar1;
    (param_1->MacroUVOverride).Position.field0_0x0._s_0.Z = (float)dVar2;
    param_1[1].field_0x5d = 0;
    if ((this->bAxisLockEnabled != '\0') &&
       (param_1[1].field_0x5f = (this->LockAxisFlags).Value, (this->LockAxisFlags).Value != '\0')) {
      param_1[1].field_0x5d = 1;
    }
    if (0 < (pUVar4->OrbitModules).ArrayNum) {
      pUVar6 = this->SpriteTemplate;
      if (((pUVar6->LODLevels).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      uVar24 = (pUVar4->OrbitModules).ArrayNum - 1;
      lVar17 = *(longlong *)(pUVar6->LODLevels).AllocatorInstance.Data;
      uVar26 = 0;
      if ((int)uVar24 < *(int *)(lVar17 + 0x98)) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pUVar7 = *(UParticleModule **)(*(longlong *)(lVar17 + 0x90) + (longlong)(int)uVar24 * 8);
      if ((pUVar7 == (UParticleModule *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("LastOrbit",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                              ,0xb3a,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pfVar22 = (float *)TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                         ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                                 *)&this->SpriteTemplate->ModuleOffsetMap,pUVar7);
      param_1[1].Scale.field0_0x0._s_0.Y = *pfVar22;
    }
    *(uchar *)((longlong)&param_1[2]._padding_ + 1) =
         (((pUVar4->RequiredModule).field0_0x0.DebugPtr)->EmitterNormalsMode).Value;
    pUVar5 = (pUVar4->RequiredModule).field0_0x0.DebugPtr;
    dVar1 = (pUVar5->NormalsSphereCenter).field0_0x0._s_0.Y;
    dVar2 = (pUVar5->NormalsSphereCenter).field0_0x0._s_0.Z;
    param_1[1].ParticleStride = (int)(float)(pUVar5->NormalsSphereCenter).field0_0x0._s_0.X;
    *(float *)&param_1[1].field_0x14 = (float)dVar1;
    param_1[1].DataContainer.MemBlockSize = (int)(float)dVar2;
    pUVar5 = (pUVar4->RequiredModule).field0_0x0.DebugPtr;
    dVar1 = (pUVar5->NormalsCylinderDirection).field0_0x0._s_0.Y;
    dVar2 = (pUVar5->NormalsCylinderDirection).field0_0x0._s_0.Z;
    param_1[1].DataContainer.ParticleDataNumBytes =
         (int)(float)(pUVar5->NormalsCylinderDirection).field0_0x0._s_0.X;
    param_1[1].DataContainer.ParticleIndicesNumShorts = (int)(float)dVar1;
    *(float *)&param_1[1].DataContainer.field_0xc = (float)dVar2;
    *(ulonglong *)((longlong)&param_1[2]._padding_ + 4) =
         CONCAT44((float)(this->PivotOffset).field0_0x0._s_0.Y,
                  (float)(this->PivotOffset).field0_0x0._s_0.X);
    bVar12 = UParticleModuleRequired::ShouldUseVelocityForMotionBlur
                       ((pUVar4->RequiredModule).field0_0x0.DebugPtr);
    *(bool *)&param_1[2].ActiveParticleCount = bVar12;
    *(byte *)((longlong)&param_1[2].ActiveParticleCount + 1) =
         ((pUVar4->RequiredModule).field0_0x0.DebugPtr)->bRemoveHMDRoll;
    param_1[2].ParticleStride =
         (int)((pUVar4->RequiredModule).field0_0x0.DebugPtr)->MinFacingCameraBlendDistance;
    *(float *)&param_1[2].field_0x14 =
         ((pUVar4->RequiredModule).field0_0x0.DebugPtr)->MaxFacingCameraBlendDistance;
    bVar12 = true;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
      piVar25 = &this_00->ScopeCount;
      *piVar25 = *piVar25 + -1;
      if (*piVar25 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar12;
}

// FixupParticleIndices @ 14810a980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FParticleEmitterInstance::FixupParticleIndices(FParticleEmitterInstance *this)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_78 [32];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  uVar11 = this->MaxActiveParticles + 0x1f;
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar7 = uVar11 >> 5;
  local_40.MaxBits = 0x80;
  local_40.NumBits = this->MaxActiveParticles;
  if (uVar11 >> 5 != 0) {
    if (4 < uVar7) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_40.AllocatorInstance,0,uVar7,4);
      local_40.MaxBits = uVar7 << 5;
    }
    FVar6 = (ForElementType<unsigned_int>)&local_40;
    if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar6 = local_40.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar6,0,(ulonglong)uVar7 << 2);
    uVar11 = local_40.NumBits & 0x8000001f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
    }
    if (uVar11 != 0) {
      FVar6 = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar6 = local_40.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar6 +
                       (longlong)((int)(local_40.NumBits + (local_40.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar11 & 0x1f);
    }
  }
  iVar10 = this->ActiveParticles;
  iVar8 = 0;
  uVar11 = local_40.NumBits;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      uVar2 = *(ushort *)(lVar12 + (longlong)this->ParticleIndices);
      if ((int)(uint)uVar2 < this->MaxActiveParticles) {
        if (((int)uVar11 <= (int)(uint)uVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), uVar11 = local_40.NumBits, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar6 = (ForElementType<unsigned_int>)&local_40;
        if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar6 = local_40.AllocatorInstance.SecondaryData;
        }
        if ((*(uint *)((longlong)FVar6 + (ulonglong)(uint)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1)
            != 0) goto LAB_14810ab51;
        if (((int)uVar11 <= (int)(uint)uVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar6 = (ForElementType<unsigned_int>)&local_40;
        if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar6 = local_40.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uint *)((longlong)FVar6 + (ulonglong)(uint)(uVar2 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
        uVar11 = local_40.NumBits;
      }
      else {
LAB_14810ab51:
        if (iVar8 != this->ActiveParticles + -1) {
          *(ushort *)(lVar12 + (longlong)this->ParticleIndices) =
               this->ParticleIndices[(longlong)this->ActiveParticles + -1];
          uVar11 = local_40.NumBits;
        }
        this->ActiveParticles = this->ActiveParticles + -1;
        iVar8 = iVar8 + -1;
        lVar12 = lVar12 + -2;
      }
      iVar10 = this->ActiveParticles;
      iVar8 = iVar8 + 1;
      lVar12 = lVar12 + 2;
    } while (iVar8 < iVar10);
  }
  if (iVar10 < this->MaxActiveParticles) {
    do {
      FVar6 = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar6 = local_40.AllocatorInstance.SecondaryData;
      }
      iVar8 = 0;
      lVar12 = 0;
      if (uVar11 + 0x1f >> 5 != 0) {
LAB_14810abd0:
        uVar7 = *(uint *)((longlong)FVar6 + lVar12 * 4);
        if (uVar7 == 0xffffffff) goto code_r0x00014810abd9;
        uVar7 = ~uVar7;
        iVar3 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        iVar9 = 0x20;
        if (uVar7 != 0) {
          iVar9 = iVar3;
        }
        iVar9 = iVar9 + iVar8 * 0x20;
        if (((int)uVar11 <= iVar9) || (iVar9 == -1)) goto LAB_14810abe3;
        if (((iVar9 < 0) || ((int)uVar11 <= iVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar6 = (ForElementType<unsigned_int>)&local_40;
        if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar6 = local_40.AllocatorInstance.SecondaryData;
        }
        iVar8 = iVar9;
        if (iVar9 < 0) {
          iVar8 = iVar9 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar6 + (longlong)(iVar8 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
        TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&local_40);
        this->ParticleIndices[iVar10] = (ushort)iVar9;
        goto LAB_14810ac17;
      }
LAB_14810abe3:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8227774926602373218>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x862,"FreeIndex != INDEX_NONE");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this->ParticleIndices[iVar10] = (ushort)iVar10;
LAB_14810ac17:
      iVar10 = iVar10 + 1;
      uVar11 = local_40.NumBits;
    } while (iVar10 < this->MaxActiveParticles);
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
code_r0x00014810abd9:
  iVar8 = iVar8 + 1;
  lVar12 = lVar12 + 1;
  if ((int)(uVar11 + 0x1f >> 5) <= iVar8) goto LAB_14810abe3;
  goto LAB_14810abd0;
}

// ForceSpawn @ 14810b150

void __thiscall
FParticleEmitterInstance::ForceSpawn
          (FParticleEmitterInstance *this,float param_1,int param_2,int param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  
  GetCurrentLODLevelChecked(this);
  if (((this->SpriteTemplate->LODLevels).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 < 1) {
    if (param_3 < 1) {
      return;
    }
    fVar5 = 0.0;
  }
  else {
    fVar5 = param_1 / (float)param_2;
  }
  iVar4 = this->ActiveParticles + param_2 + param_3;
  if ((iVar4 < this->MaxActiveParticles) ||
     (cVar3 = (**(code **)(this->_padding_ + 0x18))
                        (this,(int)(SQRT(SQRT((float)iVar4)) + __real_3f800000) + iVar4,
                         param_1 < __real_3d4ccccd), cVar3 == '\x01')) {
    SpawnParticles(this,param_2,param_1,fVar5,param_4,param_5,(FParticleEventInstancePayload *)0x0);
    SpawnParticles(this,param_3,param_1,0.0,param_4,param_5,(FParticleEventInstancePayload *)0x0);
  }
  return;
}

// ForceUpdateBoundingBox @ 14810bd60

void __thiscall FParticleEmitterInstance::ForceUpdateBoundingBox(FParticleEmitterInstance *this)

{
  double dVar1;
  double dVar2;
  UParticleEmitter *pUVar3;
  uchar *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  bool bVar22;
  int iVar23;
  longlong lVar24;
  UParticleLODLevel *pUVar25;
  TTransform<double> *this_00;
  TMatrix<double> *pTVar26;
  byte bVar27;
  ushort *puVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  TMatrix<double> local_1e8;
  undefined7 uStack_137;
  TMatrix<double> local_128 [2];
  
  lVar24 = (**(code **)((longlong)*this->Component + 0x10))();
  dVar19 = *(double *)(lVar24 + 0x40);
  dVar20 = *(double *)(lVar24 + 0x48);
  dVar18 = *(double *)(lVar24 + 0x50);
  pUVar25 = GetCurrentLODLevelChecked(this);
  pUVar3 = this->SpriteTemplate;
  if (((pUVar3->LODLevels).ArrayNum < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(longlong *)(pUVar3->LODLevels).AllocatorInstance.Data == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("HighestLODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                          ,0x590,L""), bVar22)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParticleBoundingBox).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParticleBoundingBox).Max.field0_0x0._s_0.Y = (double)uVar21;
  (this->ParticleBoundingBox).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar34 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.X;
  dVar6 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Y;
  (this->ParticleBoundingBox).IsValid = '\0';
  dVar1 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Z;
  (this->ParticleBoundingBox).Min.field0_0x0._s_0.X = dVar34;
  (this->ParticleBoundingBox).Min.field0_0x0._s_0.Y = dVar6;
  (this->ParticleBoundingBox).Min.field0_0x0._s_0.Z = dVar1;
  iVar23 = GetOrbitPayloadOffset(this);
  lVar24 = (longlong)iVar23;
  bVar27 = ((pUVar25->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
  if (bVar27 == 0) {
    pTVar26 = &local_1e8;
    local_1e8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_1e8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_1e8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_1e8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_1e8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_1e8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_1e8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_1e8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_1e8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_1e8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_1e8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_1e8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_1e8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_1e8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_1e8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_1e8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  }
  else {
    this_00 = (TTransform<double> *)(**(code **)((longlong)*this->Component + 0x20))();
    pTVar26 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,local_128);
  }
  dVar1 = __real_4290000000000000;
  dVar34 = __real_c290000000000000;
  dVar6 = __real_4290000000000000;
  dVar33 = __real_c290000000000000;
  dVar7 = __real_4290000000000000;
  dVar15 = __real_c290000000000000;
  if (0 < this->ActiveParticles) {
    uVar29 = (ulonglong)(uint)this->ActiveParticles;
    puVar4 = this->ParticleData;
    puVar28 = this->ParticleIndices;
    dVar11 = __real_4290000000000000;
    dVar12 = __real_c290000000000000;
    dVar13 = __real_4290000000000000;
    dVar14 = __real_c290000000000000;
    dVar16 = __real_4290000000000000;
    dVar17 = __real_c290000000000000;
    do {
      iVar23 = (uint)*puVar28 * this->ParticleStride;
      if (lVar24 == -1) {
        dVar34 = (double)*(float *)(puVar4 + (longlong)iVar23 + 0x60) * dVar19;
        dVar1 = (double)*(float *)(puVar4 + (longlong)iVar23 + 100) * dVar20;
        dVar35 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        uVar30 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar31 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        dVar1 = (double)*(float *)(puVar4 + (longlong)iVar23 + 0x68) * dVar18;
        if (dVar35 <= (double)CONCAT44(uVar31,uVar30)) {
          dVar35 = (double)CONCAT44(uVar31,uVar30);
        }
        uVar30 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar31 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (dVar35 <= (double)CONCAT44(uVar31,uVar30)) {
          dVar35 = (double)CONCAT44(uVar31,uVar30);
        }
      }
      else {
        fVar32 = (float)(*(uint *)(puVar4 + lVar24 + 0x10 + (longlong)iVar23) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff);
        if ((float)(*(uint *)(puVar4 + lVar24 + 0x10 + (longlong)iVar23) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            (float)(*(uint *)(puVar4 + lVar24 + 0xc + (longlong)iVar23) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar32 = (float)(*(uint *)(puVar4 + lVar24 + 0xc + (longlong)iVar23) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
        }
        if (fVar32 <= (float)(*(uint *)(puVar4 + lVar24 + 0x14 + (longlong)iVar23) &
                             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar32 = (float)(*(uint *)(puVar4 + lVar24 + 0x14 + (longlong)iVar23) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
        }
        dVar35 = (double)fVar32;
      }
      dVar2 = *(double *)(puVar4 + (longlong)iVar23 + 0x28);
      dVar6 = *(double *)(puVar4 + (longlong)iVar23 + 0x18);
      dVar7 = *(double *)(puVar4 + (longlong)iVar23 + 0x20);
      if (bVar27 != 0) {
        dVar1 = dVar6 * pTVar26->M[0][1];
        dVar33 = dVar6 * pTVar26->M[0][2];
        dVar34 = dVar7 * pTVar26->M[1][2];
        dVar6 = dVar7 * pTVar26->M[1][0] + dVar6 * pTVar26->M[0][0] + dVar2 * pTVar26->M[2][0] +
                __real_3ff0000000000000 * pTVar26->M[3][0];
        dVar7 = dVar7 * pTVar26->M[1][1] + dVar1 + dVar2 * pTVar26->M[2][1] +
                __real_3ff0000000000000 * pTVar26->M[3][1];
        dVar2 = dVar34 + dVar33 + dVar2 * pTVar26->M[2][2] +
                __real_3ff0000000000000 * pTVar26->M[3][2];
      }
      puVar28 = puVar28 + 1;
      dVar1 = dVar6 - dVar35;
      if (dVar11 <= dVar6 - dVar35) {
        dVar1 = dVar11;
      }
      dVar34 = dVar6 + dVar35;
      if (dVar6 + dVar35 <= dVar12) {
        dVar34 = dVar12;
      }
      dVar6 = dVar7 - dVar35;
      if (dVar13 <= dVar7 - dVar35) {
        dVar6 = dVar13;
      }
      dVar33 = dVar7 + dVar35;
      if (dVar7 + dVar35 <= dVar14) {
        dVar33 = dVar14;
      }
      dVar7 = dVar2 - dVar35;
      if (dVar16 <= dVar2 - dVar35) {
        dVar7 = dVar16;
      }
      dVar15 = dVar2 + dVar35;
      if (dVar2 + dVar35 <= dVar17) {
        dVar15 = dVar17;
      }
      uVar29 = uVar29 - 1;
      dVar11 = dVar1;
      dVar12 = dVar34;
      dVar13 = dVar6;
      dVar14 = dVar33;
      dVar16 = dVar7;
      dVar17 = dVar15;
    } while (uVar29 != 0);
  }
  auVar8._8_4_ = SUB84(dVar6,0);
  auVar8._0_8_ = dVar1;
  auVar8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&(this->ParticleBoundingBox).Min.field0_0x0 = auVar8;
  auVar9._8_4_ = SUB84(dVar34,0);
  auVar9._0_8_ = dVar7;
  auVar9._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ParticleBoundingBox).Min.field0_0x0 + 0x10) = auVar9;
  auVar10._8_4_ = SUB84(dVar15,0);
  auVar10._0_8_ = dVar33;
  auVar10._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ParticleBoundingBox).Max.field0_0x0 + 8) = auVar10;
  (this->ParticleBoundingBox).IsValid = 1;
  (this->ParticleBoundingBox).Pad[0] = (char)uStack_137;
  (this->ParticleBoundingBox).Pad[1] = (char)((uint7)uStack_137 >> 8);
  (this->ParticleBoundingBox).Pad[2] = (char)((uint7)uStack_137 >> 0x10);
  (this->ParticleBoundingBox).Pad[3] = (char)((uint7)uStack_137 >> 0x18);
  (this->ParticleBoundingBox).Pad[4] = (char)((uint7)uStack_137 >> 0x20);
  (this->ParticleBoundingBox).Pad[5] = (char)((uint7)uStack_137 >> 0x28);
  (this->ParticleBoundingBox).Pad[6] = (char)((uint7)uStack_137 >> 0x30);
  return;
}

// GatherMaterialRelevance @ 14810d0a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FParticleEmitterInstance::GatherMaterialRelevance
          (FParticleEmitterInstance *this,FMaterialRelevance *param_1,UParticleLODLevel *param_2,
          EShaderPlatform param_3)

{
  code *pcVar1;
  bool bVar2;
  FMaterialRelevance FVar3;
  UMaterial *pUVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  if (this->CurrentMaterial != (UMaterialInterface *)0x0) {
    FVar3 = UMaterialInterface::GetRelevance_Concurrent
                      (this->CurrentMaterial,(EShaderPlatform)local_res8);
    uVar6 = *(uint *)&param_1->field0_0x0 >> 0x12;
    (param_1->field0_0x0).Raw = (param_1->field0_0x0).Raw | *(ulonglong *)FVar3.field0_0x0;
    uVar7 = *(uint *)FVar3.field0_0x0 >> 0x12;
    if (((byte)(*(uint *)FVar3.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar6 & 0x3f)) {
      uVar7 = uVar6;
    }
    uVar6 = (uint)(param_1->field0_0x0).Raw;
    *(uint *)&param_1->field0_0x0 = (uVar7 << 0x12 ^ uVar6) & 0xfc0000 ^ uVar6;
    return;
  }
  pUVar4 = (UMaterial *)
           (((param_2->RequiredModule).field0_0x0.DebugPtr)->Material).field0_0x0.DebugPtr;
  if (pUVar4 == (UMaterial *)0x0) {
    pUVar4 = UMaterial::GetDefaultMaterial(MD_Surface);
    if (pUVar4 == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UMaterial::GetDefaultMaterial(MD_Surface)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0xb69,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar4 = UMaterial::GetDefaultMaterial(MD_Surface);
    EVar5 = (EShaderPlatform)local_10;
  }
  else {
    EVar5 = (EShaderPlatform)local_18;
  }
  FVar3 = UMaterialInterface::GetRelevance_Concurrent((UMaterialInterface *)pUVar4,EVar5);
  uVar6 = *(uint *)&param_1->field0_0x0 >> 0x12;
  (param_1->field0_0x0).Raw = (param_1->field0_0x0).Raw | *(ulonglong *)FVar3.field0_0x0;
  uVar7 = *(uint *)FVar3.field0_0x0 >> 0x12;
  if (((byte)(*(uint *)FVar3.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar6 & 0x3f)) {
    uVar7 = uVar6;
  }
  uVar6 = (uint)(param_1->field0_0x0).Raw;
  *(uint *)&param_1->field0_0x0 = (uVar7 << 0x12 ^ uVar6) & 0xfc0000 ^ uVar6;
  return;
}

// GatherMaterialRelevance @ 14810d1c0

void __thiscall
FParticleEmitterInstance::GatherMaterialRelevance
          (FParticleEmitterInstance *this,FMaterialRelevance *param_1,UParticleLODLevel *param_2,
          Type param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0x168);
  if (param_3 == Num) {
                    /* WARNING: Could not recover jumptable at 0x00014810d1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014810d1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}

// GetAllocatedSize @ 14810fe20

void __thiscall
FParticleEmitterInstance::GetAllocatedSize(FParticleEmitterInstance *this,int *param_1,int *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  return;
}

// GetBeamEndPoint @ 14810ffb0

bool __thiscall
FParticleEmitterInstance::GetBeamEndPoint(FParticleEmitterInstance *this,TVector<double> *param_1)

{
  return false;
}

// GetBeamSourcePoint @ 148110080

bool __thiscall
FParticleEmitterInstance::GetBeamSourcePoint
          (FParticleEmitterInstance *this,int param_1,TVector<double> *param_2)

{
  return false;
}

// GetBeamSourceStrength @ 148110140

bool __thiscall
FParticleEmitterInstance::GetBeamSourceStrength
          (FParticleEmitterInstance *this,int param_1,float *param_2)

{
  return false;
}

// GetBeamSourceTangent @ 148110210

bool __thiscall
FParticleEmitterInstance::GetBeamSourceTangent
          (FParticleEmitterInstance *this,int param_1,TVector<double> *param_2)

{
  return false;
}

// GetBeamTargetPoint @ 1481102e0

bool __thiscall
FParticleEmitterInstance::GetBeamTargetPoint
          (FParticleEmitterInstance *this,int param_1,TVector<double> *param_2)

{
  return false;
}

// GetBeamTargetStrength @ 1481103a0

bool __thiscall
FParticleEmitterInstance::GetBeamTargetStrength
          (FParticleEmitterInstance *this,int param_1,float *param_2)

{
  return false;
}

// GetBeamTargetTangent @ 148110470

bool __thiscall
FParticleEmitterInstance::GetBeamTargetTangent
          (FParticleEmitterInstance *this,int param_1,TVector<double> *param_2)

{
  return false;
}

// GetBoundingBox @ 1481104d0

TBox<double> * __thiscall
FParticleEmitterInstance::GetBoundingBox
          (FParticleEmitterInstance *this,TBox<double> *__return_storage_ptr__)

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
  
  dVar1 = (this->ParticleBoundingBox).Min.field0_0x0._s_0.Y;
  dVar2 = (this->ParticleBoundingBox).Min.field0_0x0._s_0.Z;
  dVar3 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (this->ParticleBoundingBox).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Y;
  dVar4 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->ParticleBoundingBox).IsValid;
  uVar6 = (this->ParticleBoundingBox).Pad[0];
  uVar7 = (this->ParticleBoundingBox).Pad[1];
  uVar8 = (this->ParticleBoundingBox).Pad[2];
  uVar9 = (this->ParticleBoundingBox).Pad[3];
  uVar10 = (this->ParticleBoundingBox).Pad[4];
  uVar11 = (this->ParticleBoundingBox).Pad[5];
  uVar12 = (this->ParticleBoundingBox).Pad[6];
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

// GetCurrentBurstRateOffset @ 148110640

float __thiscall
FParticleEmitterInstance::GetCurrentBurstRateOffset
          (FParticleEmitterInstance *this,float *param_1,int *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  UParticleLODLevel *pUVar9;
  UObject *pUVar10;
  UParticleModuleSpawn *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  longlong local_b8;
  FContext local_b0;
  FRandomStream *local_a8;
  
  fVar18 = 0.0;
  pUVar9 = GetCurrentLODLevelChecked(this);
  pUVar11 = (pUVar9->SpawnModule).field0_0x0.DebugPtr;
  if ((pUVar11->BurstList).ArrayNum < 1) {
    return 0.0;
  }
  local_b0.Owner = this;
  local_a8 = UParticleModule::GetRandomStream((UParticleModule *)pUVar11,&local_b0);
  fVar6 = __real_bf000000;
  fVar5 = __real_3f800000;
  fVar4 = __real_3727c5ac;
  uVar14 = 0;
  pUVar11 = (pUVar9->SpawnModule).field0_0x0.DebugPtr;
  if ((pUVar11->BurstList).ArrayNum < 1) {
    fVar18 = 0.0;
  }
  else {
    lVar16 = 0;
    local_b8 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar14 < (pUVar11->BurstList).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        fVar18 = (float)(*pcVar3)();
        return fVar18;
      }
      pFVar15 = (pUVar11->BurstList).AllocatorInstance.Data + local_b8;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        iVar13 = pUVar9->Level;
        lVar12 = (longlong)iVar13;
        if (iVar13 < (this->BurstFired).ArrayNum) {
          if ((iVar13 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            fVar18 = (float)(*pcVar3)();
            return fVar18;
          }
          pFVar2 = (this->BurstFired).AllocatorInstance.Data;
          if ((int)uVar14 < *(int *)(pFVar2 + lVar12 * 0x10 + 8)) {
            if (((int)uVar14 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              fVar18 = (float)(*pcVar3)();
              return fVar18;
            }
            if ((*(char *)(lVar16 + *(longlong *)(pFVar2 + lVar12 * 0x10)) == '\0') &&
               (*(float *)(pFVar15 + 8) < this->EmitterTime ||
                *(float *)(pFVar15 + 8) == this->EmitterTime)) {
              if (*param_1 <= fVar4 && fVar4 != *param_1) {
                *param_1 = 1e-05;
              }
              iVar1 = *(int *)(pFVar15 + 4);
              iVar13 = *(int *)pFVar15;
              if (-1 < iVar1) {
                iVar13 = (iVar13 - iVar1) + 1;
                if (iVar13 < 1) {
                  iVar13 = 0;
                }
                else {
                  uVar8 = local_a8->Seed * 0xbb38435 + 0x3619636b;
                  local_a8->Seed = uVar8;
                  iVar13 = (int)(((float)(uVar8 >> 9 | 0x3f800000) - fVar5) * (float)iVar13);
                }
                iVar13 = iVar1 + iVar13;
              }
              pUVar11 = (pUVar9->SpawnModule).field0_0x0.DebugPtr;
              pUVar10 = (UObject *)(**(code **)((longlong)*this->Component + 8))();
              fVar17 = FRawDistributionFloat::GetValue
                                 (&pUVar11->BurstScale,this->EmitterTime,pUVar10,
                                  (FRandomStream *)0x0);
              iVar13 = -((int)ROUND(fVar6 - fVar17 * ((float)iVar13 + (float)iVar13)) >> 1);
              fVar17 = *param_1;
              *param_2 = *param_2 + iVar13;
              uVar8 = 0;
              if ((int)uVar14 < *(int *)(pFVar2 + lVar12 * 0x10 + 8)) {
                uVar8 = ~uVar14 >> 0x1f;
              }
              fVar18 = fVar18 + (float)iVar13 / fVar17;
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                fVar18 = (float)(*pcVar3)();
                return fVar18;
              }
              *(undefined1 *)(lVar16 + *(longlong *)(pFVar2 + lVar12 * 0x10)) = 1;
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
      pUVar11 = (pUVar9->SpawnModule).field0_0x0.DebugPtr;
      local_b8 = local_b8 + 0xc;
      lVar16 = lVar16 + 1;
    } while ((int)uVar14 < (pUVar11->BurstList).ArrayNum);
  }
  return fVar18;
}

// GetCurrentLODLevelChecked @ 148110a50

UParticleLODLevel * __thiscall
FParticleEmitterInstance::GetCurrentLODLevelChecked(FParticleEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  UParticleLODLevel *pUVar3;
  
  if (this->SpriteTemplate == (UParticleEmitter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpriteTemplate != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x8e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UParticleLODLevel *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = this->CurrentLODLevel;
  if (pUVar3 == (UParticleLODLevel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODLevel != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x8e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UParticleLODLevel *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((pUVar3->RequiredModule).field0_0x0.DebugPtr == (UParticleModuleRequired *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODLevel->RequiredModule != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x8e6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UParticleLODLevel *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetCurrentMaterial @ 148110b70

UMaterialInterface * __thiscall
FParticleEmitterInstance::GetCurrentMaterial(FParticleEmitterInstance *this)

{
  UMaterialInterface *pUVar1;
  char cVar2;
  UMaterial *pUVar3;
  
  pUVar1 = this->CurrentMaterial;
  if (pUVar1 != (UMaterialInterface *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1,1);
    if (cVar2 != '\0') {
      this->CurrentMaterial = pUVar1;
      return pUVar1;
    }
  }
  pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
  this->CurrentMaterial = (UMaterialInterface *)pUVar3;
  return (UMaterialInterface *)pUVar3;
}

// GetDynamicData @ 1481130b0

FDynamicEmitterDataBase * __thiscall
FParticleEmitterInstance::GetDynamicData(FParticleEmitterInstance *this,bool param_1,Type param_2)

{
  return (FDynamicEmitterDataBase *)0x0;
}

// GetMeshRotationOffset @ 1481167b0

int __thiscall FParticleEmitterInstance::GetMeshRotationOffset(FParticleEmitterInstance *this)

{
  return 0;
}

// GetModuleDataOffset @ 148116860

uint __thiscall
FParticleEmitterInstance::GetModuleDataOffset
          (FParticleEmitterInstance *this,UParticleModule *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
  if (this->SpriteTemplate == (UParticleEmitter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpriteTemplate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x5fc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  puVar4 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
           ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                   *)&this->SpriteTemplate->ModuleOffsetMap,param_1);
  if (puVar4 != (uint *)0x0) {
    return *puVar4;
  }
  return 0;
}

// GetModuleInstanceData @ 1481168d0

uchar * __thiscall
FParticleEmitterInstance::GetModuleInstanceData
          (FParticleEmitterInstance *this,UParticleModule *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  uchar *puVar4;
  
  if (this->InstanceData != (uchar *)0x0) {
    puVar3 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
             ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                     *)&this->SpriteTemplate->ModuleInstanceOffsetMap,param_1);
    if (puVar3 != (uint *)0x0) {
      if ((uint)this->InstancePayloadSize <= *puVar3) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("*Offset < (uint32)InstancePayloadSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x60a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          puVar4 = (uchar *)(*pcVar1)();
          return puVar4;
        }
      }
      return this->InstanceData + *puVar3;
    }
  }
  return (uchar *)0x0;
}

// GetModuleRandomSeedInstanceData @ 148116960

FParticleRandomSeedInstancePayload * __thiscall
FParticleEmitterInstance::GetModuleRandomSeedInstanceData
          (FParticleEmitterInstance *this,UParticleModule *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FParticleRandomSeedInstancePayload *pFVar4;
  
  if (this->InstanceData != (uchar *)0x0) {
    puVar3 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
             ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                     *)&this->SpriteTemplate->ModuleRandomSeedInstanceOffsetMap,param_1);
    if (puVar3 != (uint *)0x0) {
      if ((uint)this->InstancePayloadSize <= *puVar3) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("*Offset < (uint32)InstancePayloadSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x61a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FParticleRandomSeedInstancePayload *)(*pcVar1)();
          return pFVar4;
        }
      }
      return (FParticleRandomSeedInstancePayload *)(this->InstanceData + *puVar3);
    }
  }
  return (FParticleRandomSeedInstancePayload *)0x0;
}

// GetOrbitPayloadOffset @ 1481178a0

int __thiscall FParticleEmitterInstance::GetOrbitPayloadOffset(FParticleEmitterInstance *this)

{
  UParticleEmitter *pUVar1;
  longlong lVar2;
  UParticleModule *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UParticleLODLevel *pUVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  pUVar7 = GetCurrentLODLevelChecked(this);
  if (0 < (pUVar7->OrbitModules).ArrayNum) {
    pUVar1 = this->SpriteTemplate;
    if ((pUVar1->LODLevels).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    lVar2 = *(longlong *)(pUVar1->LODLevels).AllocatorInstance.Data;
    if (lVar2 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HighestLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x4d2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    uVar10 = (pUVar7->OrbitModules).ArrayNum - 1;
    uVar9 = 0;
    if ((int)uVar10 < *(int *)(lVar2 + 0x98)) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    pUVar3 = *(UParticleModule **)(*(longlong *)(lVar2 + 0x90) + (longlong)(int)uVar10 * 8);
    if (pUVar3 != (UParticleModule *)0x0) {
      puVar8 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
               ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                       *)&this->SpriteTemplate->ModuleOffsetMap,pUVar3);
      if (puVar8 != (uint *)0x0) {
        return *puVar8;
      }
    }
  }
  return -1;
}

// GetParticle @ 148117e70

FBaseParticle * __thiscall
FParticleEmitterInstance::GetParticle(FParticleEmitterInstance *this,int param_1)

{
  if ((param_1 < this->ActiveParticles) && (-1 < param_1)) {
    return (FBaseParticle *)
           (this->ParticleData + (int)((uint)this->ParticleIndices[param_1] * this->ParticleStride))
    ;
  }
  return (FBaseParticle *)0x0;
}

// GetParticleDirect @ 148117ec0

FBaseParticle * __thiscall
FParticleEmitterInstance::GetParticleDirect(FParticleEmitterInstance *this,int param_1)

{
  if ((0 < this->ActiveParticles) && (param_1 < this->MaxActiveParticles)) {
    return (FBaseParticle *)(this->ParticleData + param_1 * this->ParticleStride);
  }
  return (FBaseParticle *)0x0;
}

// GetParticleLocationWithOrbitOffset @ 148117ef0

TVector<double> * __thiscall
FParticleEmitterInstance::GetParticleLocationWithOrbitOffset
          (FParticleEmitterInstance *this,TVector<double> *__return_storage_ptr__,
          FBaseParticle *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = GetOrbitPayloadOffset(this);
  if (iVar5 == -1) {
    dVar4 = (param_1->Location).field0_0x0._s_0.Y;
    dVar3 = (param_1->Location).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Location).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    return __return_storage_ptr__;
  }
  lVar6 = (longlong)iVar5;
  fVar1 = *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar6 + 0x10);
  dVar3 = (param_1->Location).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)*(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar6 + 0xc) +
       (param_1->Location).field0_0x0._s_0.X;
  fVar2 = *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar6 + 0x14);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)fVar2 + (param_1->Location).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetReplayData @ 148118cb0

FDynamicEmitterReplayDataBase * __thiscall
FParticleEmitterInstance::GetReplayData(FParticleEmitterInstance *this)

{
  return (FDynamicEmitterReplayDataBase *)0x0;
}

// GetResourceSizeEx @ 148118f20

void __thiscall
FParticleEmitterInstance::GetResourceSizeEx(FParticleEmitterInstance *this,FResourceSizeEx *param_1)

{
  return;
}

// GetScreenAlignmentAndScale @ 1481190c0

void __thiscall
FParticleEmitterInstance::GetScreenAlignmentAndScale
          (FParticleEmitterInstance *this,int *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  UParticleLODLevel *pUVar3;
  longlong lVar4;
  
  pUVar3 = GetCurrentLODLevelChecked(this);
  *param_1 = (uint)(((pUVar3->RequiredModule).field0_0x0.DebugPtr)->ScreenAlignment).Value;
  (param_2->field0_0x0)._s_0.X = 1.0;
  (param_2->field0_0x0)._s_0.Y = 1.0;
  (param_2->field0_0x0)._s_0.Z = 1.0;
  lVar4 = (**(code **)((longlong)*this->Component + 0x10))();
  dVar2 = *(double *)(lVar4 + 0x48);
  dVar1 = *(double *)(lVar4 + 0x50);
  (param_2->field0_0x0)._s_0.X = *(double *)(lVar4 + 0x40);
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar1;
  return;
}

// GetTypeDataModuleInstanceData @ 14811c4a0

uchar * __thiscall
FParticleEmitterInstance::GetTypeDataModuleInstanceData(FParticleEmitterInstance *this)

{
  if ((this->InstanceData != (uchar *)0x0) && (this->TypeDataInstanceOffset != -1)) {
    return this->InstanceData + this->TypeDataInstanceOffset;
  }
  return (uchar *)0x0;
}

// HasCompleted @ 14811d550

bool __thiscall FParticleEmitterInstance::HasCompleted(FParticleEmitterInstance *this)

{
  int iVar1;
  UParticleLODLevel *pUVar2;
  float fVar3;
  
  if (this->SpriteTemplate != (UParticleEmitter *)0x0) {
    pUVar2 = GetCurrentLODLevelChecked(this);
    iVar1 = ((pUVar2->RequiredModule).field0_0x0.DebugPtr)->EmitterLoops;
    if (((iVar1 == 0) ||
        (fVar3 = (float)iVar1 * this->EmitterDuration,
        this->SecondsSinceCreation <= fVar3 && fVar3 != this->SecondsSinceCreation)) ||
       (0 < this->ActiveParticles)) {
      return false;
    }
  }
  return true;
}

// Init @ 14811e410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleEmitterInstance::Init(FParticleEmitterInstance *this)

{
  double dVar1;
  UParticleModule *pUVar2;
  void *_Src;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_Init> FVar17;
  FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitSize> FVar18;
  uchar *puVar19;
  uint *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  byte bVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  FName FVar28;
  uint7 uVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  UParticleEmitter *pUVar34;
  FScriptContainerElement *pFVar35;
  float fVar36;
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_120;
  FColor_u_0 local_110;
  FColor_u_0 local_10c;
  uint local_108;
  uint local_104;
  FName local_100;
  FName local_f8;
  FName local_f0;
  longlong local_e8;
  undefined8 local_e0;
  byte local_d8;
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  FName local_c0;
  FName local_b0;
  undefined8 local_a0;
  byte local_98;
  void *local_90;
  undefined8 local_88;
  UParticleEmitter *local_80;
  FScriptContainerElement *local_78;
  FName local_70;
  FName local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  
  local_108 = 0;
  FVar17 = StatPtr_STAT_ParticleEmitterInstance_Init;
  if (StatPtr_STAT_ParticleEmitterInstance_Init ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_Init>)0x0) {
    pFVar16 = ::FName::FName(&local_70,"STAT_ParticleEmitterInstance_Init");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_Init>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleEmitterInstance_Init,
                        *pFVar16,L"EmitterInstance Init GT","STATGROUP_Particles","STATCAT_Advanced"
                        ,L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar17;
  bVar6 = false;
  bVar8 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  bVar10 = false;
  bVar12 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14811e572:
    bVar8 = bVar12;
    bVar6 = bVar10;
    bVar10 = false;
    local_100 = local_c0;
    FVar28 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_f8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0x1ec);
        bVar6 = true;
        bVar8 = true;
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14811e572;
    local_100 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar10 = true;
  }
  if ((this->SpriteTemplate == (UParticleEmitter *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpriteTemplate != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                          ,0x1ee,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar34 = this->SpriteTemplate;
  if (((pUVar34->LODLevels).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar32 = *(longlong *)(pUVar34->LODLevels).AllocatorInstance.Data;
  local_e8 = lVar32;
  if ((*(longlong *)(lVar32 + 0x30) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("HighLODLevel->RequiredModule",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                          ,500,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar31 = this->ParticleSize;
  this->CurrentMaterial = *(UMaterialInterface **)(*(longlong *)(lVar32 + 0x30) + 0x30);
  if (iVar31 == 0) {
    FVar18 = StatPtr_STAT_ParticleEmitterInstance_InitSize;
    if (StatPtr_STAT_ParticleEmitterInstance_InitSize ==
        (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitSize>)0x0) {
      pFVar16 = ::FName::FName(&local_68,"STAT_ParticleEmitterInstance_InitSize");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleEmitterInstance_InitSize,*pFVar16,
                          L"EmitterInstance Init Sizes GT","STATGROUP_Particles","STATCAT_Advanced",
                          L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_120 = *(FName *)FVar18;
    bVar7 = false;
    bVar12 = false;
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    bVar13 = false;
    bVar11 = false;
    if ((local_120.ComparisonIndex.Value.Value == 0) && (local_120.Number == 0)) {
LAB_14811e76f:
      bVar7 = bVar13;
      bVar12 = bVar11;
      bVar11 = false;
      local_120 = local_b0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_10c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_10c._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar7 = false;
        bVar12 = true;
        bVar13 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f0.ComparisonIndex.Value = local_120.ComparisonIndex.Value.Value;
          local_f0.Number = local_120.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                     ,0x1fc);
          bVar7 = true;
          bVar12 = true;
          bVar13 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14811e76f;
      FThreadStats::AddMessage(local_120,CycleScopeStart);
      bVar11 = true;
    }
    pUVar34 = this->SpriteTemplate;
    this->field_0x160 = (pUVar34->field_0x37 << 5 ^ this->field_0x160) & 0x40 ^ this->field_0x160;
    this->field_0x161 = ((byte)pUVar34->field_0x37 >> 1 ^ this->field_0x161) & 2 ^ this->field_0x161
    ;
    puVar19 = this->InstanceData;
    (this->LockAxisFlags).Value = (pUVar34->LockAxisFlags).Value;
    this->DynamicParameterDataOffset = pUVar34->DynamicParameterDataOffset;
    this->LightDataOffset = pUVar34->LightDataOffset;
    this->LightVolumetricScatteringIntensity = pUVar34->LightVolumetricScatteringIntensity;
    this->CameraPayloadOffset = pUVar34->CameraPayloadOffset;
    this->ParticleSize = pUVar34->ParticleSize;
    dVar1 = (pUVar34->PivotOffset).field0_0x0._s_0.Y;
    (this->PivotOffset).field0_0x0._s_0.X = (pUVar34->PivotOffset).field0_0x0._s_0.X;
    (this->PivotOffset).field0_0x0._s_0.Y = dVar1;
    this->TypeDataOffset = pUVar34->TypeDataOffset;
    this->TypeDataInstanceOffset = pUVar34->TypeDataInstanceOffset;
    if ((puVar19 == (uchar *)0x0) ||
       (iVar15 = this->InstancePayloadSize, iVar15 < pUVar34->ReqInstanceBytes)) {
      puVar19 = FMemory::Realloc(puVar19,(longlong)pUVar34->ReqInstanceBytes,0);
      this->InstanceData = puVar19;
      iVar15 = this->SpriteTemplate->ReqInstanceBytes;
      this->InstancePayloadSize = iVar15;
    }
    memset(puVar19,0,(longlong)iVar15);
    pUVar34 = this->SpriteTemplate;
    pFVar33 = (pUVar34->ModulesNeedingInstanceData).AllocatorInstance.Data;
    iVar15 = (pUVar34->ModulesNeedingInstanceData).ArrayNum;
    pFVar35 = pFVar33 + (longlong)iVar15 * 8;
    while( true ) {
      if ((pUVar34->ModulesNeedingInstanceData).ArrayNum != iVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UParticleModule_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar33 == pFVar35) break;
      pUVar2 = *(UParticleModule **)pFVar33;
      if ((pUVar2 == (UParticleModule *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleModule",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                              ,0x215,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar19 = GetModuleInstanceData(this,pUVar2);
      if ((puVar19 == (uchar *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrepInstData != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                              ,0x217,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,this,puVar19);
      pFVar33 = pFVar33 + 8;
    }
    local_80 = this->SpriteTemplate;
    local_104 = (local_80->ModulesNeedingRandomSeedInstanceData).ArrayNum;
    uVar25 = (ulonglong)(int)local_104;
    pFVar35 = (local_80->ModulesNeedingRandomSeedInstanceData).AllocatorInstance.Data;
    local_78 = pFVar35 + uVar25 * 8;
    uVar27 = local_108;
    while( true ) {
      pFVar33 = local_78;
      if ((local_80->ModulesNeedingRandomSeedInstanceData).ArrayNum != (int)uVar25) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UParticleModule_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar35 == pFVar33) break;
      pUVar2 = *(UParticleModule **)pFVar35;
      if ((pUVar2 == (UParticleModule *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleModule",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                              ,0x21d,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->InstanceData == (uchar *)0x0) ||
         (puVar20 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                    ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                            *)&this->SpriteTemplate->ModuleRandomSeedInstanceOffsetMap,pUVar2),
         puVar20 == (uint *)0x0)) {
        puVar19 = (uchar *)0x0;
LAB_14811ea0c:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("SeedInstancePayload != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                            ,0x21f,L"");
        if (bVar13) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if (((uint)this->InstancePayloadSize <= *puVar20) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("*Offset < (uint32)InstancePayloadSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                                ,0x61a,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar19 = this->InstanceData + *puVar20;
        if (puVar19 == (uchar *)0x0) goto LAB_14811ea0c;
      }
      puVar21 = (undefined8 *)(**(code **)(pUVar2->_padding_ + 0x380))(pUVar2);
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x378);
      if (puVar21 == (undefined8 *)0x0) {
        uVar27 = uVar27 | 2;
        local_a0 = 0;
        local_98 = local_98 & 0xf4 | 4;
        local_90 = (void *)0x0;
        local_88 = 0;
      }
      else {
        local_e0 = *puVar21;
        uVar27 = uVar27 | 1;
        local_c8 = *(int *)(puVar21 + 3);
        lVar32 = (longlong)local_c8;
        _Src = (void *)puVar21[2];
        local_d8 = *(byte *)(puVar21 + 1) & 0xf | local_d8 & 0xf0;
        local_d0.Data = (FScriptContainerElement *)0x0;
        if (local_c8 == 0) {
          local_c4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_c8,0,&local_d0,local_c8,&local_c4);
          memcpy(local_d0.Data,_Src,lVar32 << 2);
        }
      }
      (*pcVar3)(pUVar2,this,puVar19);
      if (((uVar27 & 2) != 0) && (uVar27 = uVar27 & 0xfffffffd, local_90 != (void *)0x0)) {
        FMemory::Free(local_90);
      }
      if (((uVar27 & 1) != 0) &&
         (uVar27 = uVar27 & 0xfffffffe, local_d0.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data);
      }
      pFVar35 = pFVar35 + 8;
      uVar25 = (ulonglong)local_104;
    }
    this->PayloadOffset = this->ParticleSize;
    iVar15 = (**(code **)(this->_padding_ + 0x78))(this);
    this->ParticleSize = this->ParticleSize + 0xf + iVar15 & 0xfffffff0;
    iVar15 = (**(code **)(this->_padding_ + 0x88))(this);
    FVar28 = local_100;
    this->ParticleStride = iVar15;
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    lVar32 = local_e8;
    if (bVar11) {
      FThreadStats::AddMessage(local_120,CycleScopeEnd);
      lVar32 = local_e8;
    }
  }
  uVar25 = 0;
  (**(code **)(this->_padding_ + 0x160))(this,&this->SpriteTemplate->MeshMaterials);
  this->SpawnFraction = 0.0;
  this->SecondsSinceCreation = 0.0;
  this->EmitterTime = 0.0;
  this->ParticleCounter = 0;
  UpdateTransforms(this);
  lVar22 = (**(code **)((longlong)*this->Component + 0x10))();
  puVar19 = this->ParticleData;
  local_60 = *(undefined4 *)(lVar22 + 0x20);
  uStack_5c = *(undefined4 *)(lVar22 + 0x24);
  uStack_58 = *(undefined4 *)(lVar22 + 0x28);
  uStack_54 = *(undefined4 *)(lVar22 + 0x2c);
  local_50 = *(double *)(lVar22 + 0x30);
  *(undefined4 *)&(this->Location).field0_0x0 = local_60;
  *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 4) = uStack_5c;
  *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 8) = uStack_58;
  *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 0xc) = uStack_54;
  this->TrianglesToRender = 0;
  this->MaxVertexIndex = 0;
  *(undefined4 *)&(this->OldLocation).field0_0x0 = local_60;
  *(undefined4 *)((longlong)&(this->OldLocation).field0_0x0 + 4) = uStack_5c;
  *(undefined4 *)((longlong)&(this->OldLocation).field0_0x0 + 8) = uStack_58;
  *(undefined4 *)((longlong)&(this->OldLocation).field0_0x0 + 0xc) = uStack_54;
  (this->Location).field0_0x0._s_0.Z = local_50;
  (this->OldLocation).field0_0x0._s_0.Z = local_50;
  if (puVar19 == (uchar *)0x0) {
    this->MaxActiveParticles = 0;
    this->ActiveParticles = 0;
  }
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParticleBoundingBox).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParticleBoundingBox).Max.field0_0x0._s_0.Y = (double)uVar9;
  (this->ParticleBoundingBox).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar4 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.X;
  dVar5 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Y;
  (this->ParticleBoundingBox).IsValid = '\0';
  dVar1 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Z;
  (this->ParticleBoundingBox).Min.field0_0x0._s_0.X = dVar4;
  (this->ParticleBoundingBox).Min.field0_0x0._s_0.Y = dVar5;
  (this->ParticleBoundingBox).Min.field0_0x0._s_0.Z = dVar1;
  iVar15 = *(int *)(*(longlong *)(lVar32 + 0x30) + 0xd4);
  fVar36 = __real_3f800000;
  if (iVar15 != 0) {
    fVar36 = __real_3f7d70a4 / (float)(iVar15 + 1);
  }
  *(float *)(*(longlong *)(lVar32 + 0x30) + 0xd0) = fVar36;
  if (((iVar31 != 0) ||
      (cVar14 = (**(code **)((longlong)*this->Component + 0x48))(), cVar14 != '\x01')) ||
     (pUVar34 = this->SpriteTemplate, pUVar34->QualityLevelSpawnRateScale <= 0.0)) {
    this->LoopCount = 0;
    if (iVar31 != 0) goto LAB_14811ef37;
  }
  else {
    iVar31 = *(int *)(lVar32 + 0xb4);
    uVar29 = (uint7)(uint3)((uint)iVar31 >> 8);
    if ((iVar31 < 1) && (pUVar34->InitialAllocationCount < 1)) {
      (**(code **)(this->_padding_ + 0x18))(this,10,CONCAT71(uVar29,1));
      this->LoopCount = 0;
    }
    else {
      iVar15 = pUVar34->InitialAllocationCount;
      if (iVar15 < 1) {
        iVar24 = 100;
        if (iVar31 < 100) {
          iVar24 = iVar31;
        }
      }
      else {
        iVar24 = 100;
        if (iVar15 < 100) {
          iVar24 = iVar15;
        }
      }
      (**(code **)(this->_padding_ + 0x18))(this,iVar24,CONCAT71(uVar29,1));
      this->LoopCount = 0;
    }
  }
  bVar23 = (this->field_0x160 ^ *(byte *)(*(longlong *)(lVar32 + 0x30) + 0x71)) & 2 ^
           this->field_0x160;
  this->field_0x160 = bVar23;
  this->field_0x160 = (bVar23 ^ *(byte *)(*(longlong *)(lVar32 + 0x30) + 0x71)) & 4 ^ bVar23;
  this->SortMode = (uint)*(byte *)(*(longlong *)(lVar32 + 0x30) + 0x72);
  iVar31 = (this->SpriteTemplate->LODLevels).ArrayNum;
  iVar15 = (this->BurstFired).ArrayNum;
  if (iVar15 < iVar31) {
    TArray<FLODBurstFired,TSizedDefaultAllocator<32>_>::AddZeroed(&this->BurstFired,iVar31 - iVar15)
    ;
  }
  pUVar34 = this->SpriteTemplate;
  if (0 < (pUVar34->LODLevels).ArrayNum) {
    local_res8 = 0;
    uVar30 = uVar25;
    do {
      uVar26 = (uint)uVar25;
      uVar27 = 0;
      if ((int)uVar26 < (pUVar34->LODLevels).ArrayNum) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar32 = *(longlong *)((pUVar34->LODLevels).AllocatorInstance.Data + uVar30);
      if ((lVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODLevel",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                              ,0x280,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar27 = 0;
      if ((int)uVar26 < (this->BurstFired).ArrayNum) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar35 = (this->BurstFired).AllocatorInstance.Data + local_res8;
      iVar31 = *(int *)(*(longlong *)(lVar32 + 0x50) + 0xa0);
      iVar15 = *(int *)&pFVar35[8].field_0x0;
      if (iVar15 < iVar31) {
        iVar31 = iVar31 - iVar15;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar31,(ForAnyElementType *)pFVar35,(int *)(pFVar35 + 8),
                            (int *)(pFVar35 + 0xc));
        memset((void *)(*(longlong *)&pFVar35->field_0x0 + (longlong)iVar15),0,(longlong)iVar31);
      }
      pUVar34 = this->SpriteTemplate;
      local_res8 = local_res8 + 0x10;
      uVar25 = (ulonglong)(uVar26 + 1);
      uVar30 = uVar30 + 8;
      FVar28 = local_100;
    } while ((int)(uVar26 + 1) < (pUVar34->LODLevels).ArrayNum);
  }
LAB_14811ef37:
  (**(code **)(this->_padding_ + 0x90))(this);
  this->bEmitterIsDone = '\0';
  this->IsRenderDataDirty = 1;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// InitParameters @ 14811ff60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleEmitterInstance::InitParameters(FParticleEmitterInstance *this,UParticleEmitter *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitParameters> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_ParticleEmitterInstance_InitParameters;
  if (StatPtr_STAT_ParticleEmitterInstance_InitParameters ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitParameters>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_ParticleEmitterInstance_InitParameters");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitParameters>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ParticleEmitterInstance_InitParameters,*pFVar4,
                       L"EmitterInstance InitParams GT","STATGROUP_Particles","STATCAT_Advanced",
                       L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    this->SpriteTemplate = param_1;
    SetupEmitterDuration(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0x1e1);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    this->SpriteTemplate = param_1;
    SetupEmitterDuration(this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_38);
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
  }
  return;
}

// IsDynamicDataRequired @ 148123380

bool __thiscall
FParticleEmitterInstance::IsDynamicDataRequired
          (FParticleEmitterInstance *this,UParticleLODLevel *param_1)

{
  UParticleModuleRequired *pUVar1;
  
  if ((((0 < this->ActiveParticles) &&
       (((this->SpriteTemplate == (UParticleEmitter *)0x0 ||
         ((this->SpriteTemplate->EmitterRenderMode).Value != '\x04')) &&
        (param_1 != (UParticleLODLevel *)0x0)))) && (param_1->bEnabled != 0)) &&
     ((pUVar1 = (param_1->RequiredModule).field0_0x0.DebugPtr, pUVar1->bUseMaxDrawCount == '\0' ||
      (pUVar1->MaxDrawCount != 0)))) {
    return true;
  }
  return false;
}

// IsMeshRotationActive @ 148123510

bool __thiscall FParticleEmitterInstance::IsMeshRotationActive(FParticleEmitterInstance *this)

{
  return false;
}

// IsTrailEmitter @ 148123710

bool __thiscall FParticleEmitterInstance::IsTrailEmitter(FParticleEmitterInstance *this)

{
  return false;
}

// KillParticle @ 148123730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleEmitterInstance::KillParticle(FParticleEmitterInstance *this,int param_1)

{
  UParticleModuleEventGenerator *pUVar1;
  FName FVar2;
  UParticleLODLevel *pUVar3;
  byte *pbVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar7;
  ushort uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  FName local_res8;
  FStatMessage local_28;
  
  uVar11 = (ulonglong)param_1;
  if (param_1 < this->ActiveParticles) {
    pUVar3 = GetCurrentLODLevelChecked(this);
    pbVar4 = (byte *)0x0;
    pUVar1 = (pUVar3->EventGenerator).field0_0x0.DebugPtr;
    if (((pUVar1 == (UParticleModuleEventGenerator *)0x0) ||
        (pbVar4 = GetModuleInstanceData(this,(UParticleModule *)pUVar1), pbVar4 == (byte *)0x0)) ||
       ((*pbVar4 & 2) != 0)) {
      uVar8 = this->ParticleIndices[uVar11];
      if (pbVar4 != (byte *)0x0) {
        pUVar1 = (pUVar3->EventGenerator).field0_0x0.DebugPtr;
        (**(code **)(pUVar1->_padding_ + 0x3a0))
                  (pUVar1,this,pbVar4,this->ParticleData + (int)((uint)uVar8 * this->ParticleStride)
                  );
      }
    }
    else {
      uVar8 = this->ParticleIndices[uVar11];
    }
    lVar9 = uVar11 * 2;
    iVar7 = this->ActiveParticles;
    if (param_1 < iVar7 + -1) {
      do {
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        *(undefined2 *)((longlong)this->ParticleIndices + lVar9) =
             *(undefined2 *)((longlong)this->ParticleIndices + lVar9 + 2);
        iVar7 = this->ActiveParticles;
        lVar9 = lVar9 + 2;
      } while ((int)uVar10 < iVar7 + -1);
    }
    this->ParticleIndices[(longlong)iVar7 + -1] = uVar8;
    this->ActiveParticles = this->ActiveParticles + -1;
    if (FThreadStats::bPrimaryEnable != false) {
      FVar6 = StatPtr_STAT_SpriteParticlesKilled;
      if (StatPtr_STAT_SpriteParticlesKilled ==
          (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_SpriteParticlesKilled");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteParticlesKilled,*pFVar5,
                           L"Sprite Ptcls Killed","STATGROUP_Particles","STATCAT_Advanced",
                           L"Particles",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar6;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar2;
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_28.StatData.Pad[0] = '\x01';
        local_28.StatData.Pad[1] = '\0';
        local_28.StatData.Pad[2] = '\0';
        local_28.StatData.Pad[3] = '\0';
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_res8 = FVar2;
        local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
        FStatsTrace::Add(&local_res8,1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
          return;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// KillParticles @ 148123cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleEmitterInstance::KillParticles(FParticleEmitterInstance *this)

{
  ushort uVar1;
  UParticleModuleEventGenerator *pUVar2;
  FName FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  UParticleLODLevel *pUVar8;
  byte *pbVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar12;
  longlong lVar13;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_88;
  FStatMessage local_78;
  void *local_68 [5];
  
  if (0 < this->ActiveParticles) {
    pUVar8 = GetCurrentLODLevelChecked(this);
    pbVar9 = (byte *)0x0;
    pUVar2 = (pUVar8->EventGenerator).field0_0x0.DebugPtr;
    if (((pUVar2 != (UParticleModuleEventGenerator *)0x0) &&
        (pbVar9 = GetModuleInstanceData(this,(UParticleModule *)pUVar2), pbVar9 != (byte *)0x0)) &&
       ((*pbVar9 & 2) == 0)) {
      pbVar9 = (byte *)0x0;
    }
    fVar5 = __real_3f800000;
    bVar6 = false;
    iVar12 = this->ActiveParticles + -1;
    lVar13 = (longlong)iVar12;
    if (-1 < iVar12) {
      do {
        uVar1 = this->ParticleIndices[lVar13];
        if ((int)(uint)uVar1 < this->MaxActiveParticles) {
          if (fVar5 < *(float *)(this->ParticleData +
                                (longlong)(int)((uint)uVar1 * this->ParticleStride) + 0x90)) {
            if (pbVar9 != (byte *)0x0) {
              pUVar2 = (pUVar8->EventGenerator).field0_0x0.DebugPtr;
              (**(code **)(pUVar2->_padding_ + 0x3a0))(pUVar2,this);
            }
            this->ParticleIndices[lVar13] =
                 this->ParticleIndices[(longlong)this->ActiveParticles + -1];
            this->ParticleIndices[(longlong)this->ActiveParticles + -1] = uVar1;
            this->ActiveParticles = this->ActiveParticles + -1;
            if (FThreadStats::bPrimaryEnable != false) {
              FVar11 = StatPtr_STAT_SpriteParticlesKilled;
              if (StatPtr_STAT_SpriteParticlesKilled ==
                  (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled>)0x0) {
                pFVar10 = ::FName::FName(&local_res20,"STAT_SpriteParticlesKilled");
                FVar11 = (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteParticlesKilled
                                    ,*pFVar10,L"Sprite Ptcls Killed","STATGROUP_Particles",
                                    "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
                                    MCR_Invalid);
              }
              FVar3 = *(FName *)FVar11;
              if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                this_00 = TlsGetValue(FThreadStats::TlsSlot);
                if (this_00 == (FThreadStats *)0x0) {
                  this_01 = FThreadStatsPool::Get();
                  this_00 = FThreadStatsPool::GetFromPool(this_01);
                }
                local_78.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
                local_78.StatData.Pad[0] = '\x01';
                local_78.StatData.Pad[1] = '\0';
                local_78.StatData.Pad[2] = '\0';
                local_78.StatData.Pad[3] = '\0';
                local_78.StatData.Pad[4] = '\0';
                local_78.StatData.Pad[5] = '\0';
                local_78.StatData.Pad[6] = '\0';
                local_78.StatData.Pad[7] = '\0';
                local_res10 = FVar3;
                local_78.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
                FThreadStats::AddStatMessage(this_00,&local_78);
                FStatsTrace::Add(&local_res10,1);
                if (this_00->ScopeCount == 0) {
                  FThreadStats::Flush(this_00,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(this_00,false,false);
                }
              }
            }
          }
        }
        else {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8227774926602373529>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                             ,0x999,"CurrentIndex < MaxActiveParticles");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = true;
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
      if (bVar6) {
        if (1 < (byte)LogParticles._0_1_) {
          (**(code **)((longlong)*this->Component + 0x88))(this->Component,local_68);
          cVar7 = (**(code **)((longlong)*this->Component + 0xa0))();
          if ((cVar7 == '\0') ||
             (lVar13 = (**(code **)((longlong)*this->Component + 0xd8))(), lVar13 == 0)) {
            ::FString::FString(&local_88,L"None");
          }
          else {
            local_res18 = *(FName *)(lVar13 + 0x18);
            ::FName::ToString(&local_res18,&local_88);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
        }
        FixupParticleIndices(this);
      }
    }
  }
  return;
}

// KillParticlesForced @ 148124100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleEmitterInstance::KillParticlesForced(FParticleEmitterInstance *this,bool param_1)

{
  ushort uVar1;
  UParticleModuleEventGenerator *pUVar2;
  FName FVar3;
  int iVar4;
  UParticleLODLevel *pUVar5;
  byte *pbVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar9;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  pUVar5 = GetCurrentLODLevelChecked(this);
  pbVar6 = (byte *)0x0;
  if ((((param_1) &&
       (pUVar2 = (pUVar5->EventGenerator).field0_0x0.DebugPtr, pbVar6 = (byte *)0x0,
       pUVar2 != (UParticleModuleEventGenerator *)0x0)) &&
      (pbVar6 = GetModuleInstanceData(this,(UParticleModule *)pUVar2), pbVar6 != (byte *)0x0)) &&
     ((*pbVar6 & 2) == 0)) {
    pbVar6 = (byte *)0x0;
  }
  iVar4 = this->ActiveParticles + -1;
  lVar9 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      uVar1 = this->ParticleIndices[lVar9];
      if (pbVar6 != (byte *)0x0) {
        pUVar2 = (pUVar5->EventGenerator).field0_0x0.DebugPtr;
        (**(code **)(pUVar2->_padding_ + 0x3a0))
                  (pUVar2,this,pbVar6,this->ParticleData + (int)((uint)uVar1 * this->ParticleStride)
                  );
      }
      this->ParticleIndices[lVar9] = this->ParticleIndices[(longlong)this->ActiveParticles + -1];
      this->ParticleIndices[(longlong)this->ActiveParticles + -1] = uVar1;
      this->ActiveParticles = this->ActiveParticles + -1;
      if (FThreadStats::bPrimaryEnable != false) {
        FVar8 = StatPtr_STAT_SpriteParticlesKilled;
        if (StatPtr_STAT_SpriteParticlesKilled ==
            (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled>)0x0) {
          pFVar7 = ::FName::FName(&local_res20,"STAT_SpriteParticlesKilled");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesKilled>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteParticlesKilled,
                             *pFVar7,L"Sprite Ptcls Killed","STATGROUP_Particles","STATCAT_Advanced"
                             ,L"Particles",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar8;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_48.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
          local_48.StatData.Pad[0] = '\x01';
          local_48.StatData.Pad[1] = '\0';
          local_48.StatData.Pad[2] = '\0';
          local_48.StatData.Pad[3] = '\0';
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_res18 = FVar3;
          local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_48);
          FStatsTrace::Add(&local_res18,1);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  this->ParticleCounter = 0;
  return;
}

// OnDeactivateSystem @ 1481244e0

void __thiscall FParticleEmitterInstance::OnDeactivateSystem(FParticleEmitterInstance *this)

{
  return;
}

// OnEmitterInstanceKilled @ 148124530

void __thiscall
FParticleEmitterInstance::OnEmitterInstanceKilled
          (FParticleEmitterInstance *this,FParticleEmitterInstance *param_1)

{
  return;
}

// ParticlePrefetch @ 148125800

void __thiscall FParticleEmitterInstance::ParticlePrefetch(FParticleEmitterInstance *this)

{
  longlong lVar1;
  
  lVar1 = (longlong)this->ActiveParticles;
  if (0 < lVar1) {
    do {
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}

// PostSpawn @ 148126ed0

void __thiscall
FParticleEmitterInstance::PostSpawn
          (FParticleEmitterInstance *this,FBaseParticle *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  UParticleLODLevel *pUVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pUVar9 = GetCurrentLODLevelChecked(this);
  if (((pUVar9->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    dVar3 = (this->OldLocation).field0_0x0._s_0.X;
    dVar4 = (this->OldLocation).field0_0x0._s_0.Y;
    dVar11 = (this->Location).field0_0x0._s_0.X - dVar3;
    dVar12 = (this->OldLocation).field0_0x0._s_0.Z;
    dVar5 = (this->Location).field0_0x0._s_0.Y;
    dVar6 = (this->Location).field0_0x0._s_0.Z;
    dVar10 = dVar5 - dVar4;
    dVar8 = dVar6 - dVar12;
    if (__real_3ff0000000000000 < dVar10 * dVar10 + dVar11 * dVar11 + dVar8 * dVar8) {
      dVar11 = (double)param_2;
      dVar8 = (param_1->Location).field0_0x0._s_0.Y;
      dVar10 = (param_1->Location).field0_0x0._s_0.Z;
      (param_1->Location).field0_0x0._s_0.X =
           (dVar3 - (this->Location).field0_0x0._s_0.X) * dVar11 +
           (param_1->Location).field0_0x0._s_0.X;
      (param_1->Location).field0_0x0._s_0.Y = (dVar4 - dVar5) * dVar11 + dVar8;
      (param_1->Location).field0_0x0._s_0.Z = (dVar12 - dVar6) * dVar11 + dVar10;
    }
  }
  dVar4 = (param_1->Location).field0_0x0._s_0.Y;
  dVar3 = (param_1->Location).field0_0x0._s_0.Z;
  (param_1->OldLocation).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (param_1->OldLocation).field0_0x0._s_0.Y = dVar4;
  (param_1->OldLocation).field0_0x0._s_0.Z = dVar3;
  fVar1 = (param_1->Velocity).field0_0x0._s_0.Z;
  fVar2 = (param_1->Velocity).field0_0x0._s_0.X;
  dVar12 = (double)param_3;
  dVar3 = (param_1->Location).field0_0x0._s_0.Z;
  dVar4 = (param_1->Location).field0_0x0._s_0.X;
  (param_1->Location).field0_0x0._s_0.Y =
       (double)(param_1->Velocity).field0_0x0._s_0.Y * dVar12 +
       (param_1->Location).field0_0x0._s_0.Y;
  (param_1->Location).field0_0x0._s_0.Z = (double)fVar1 * dVar12 + dVar3;
  (param_1->Location).field0_0x0._s_0.X = (double)fVar2 * dVar12 + dVar4;
  uVar7 = this->ParticleCounter;
  this->ParticleCounter = uVar7 + 1;
  param_1->Flags = param_1->Flags | uVar7 & 0x1ffffff | 0x2000000;
  return;
}

// PreDestructorCall @ 148127310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleEmitterInstance::PreDestructorCall(FParticleEmitterInstance *this)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_GTParticleData> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  iVar2 = (this->ParticleStride + 2) * this->MaxActiveParticles;
  if (iVar2 != 0) {
    FVar4 = StatPtr_STAT_GTParticleData;
    if (StatPtr_STAT_GTParticleData == (FThreadSafeStaticStat<FStat_STAT_GTParticleData>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_GTParticleData");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_GTParticleData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GTParticleData,*pFVar3,
                         L"Ptcls Data GT Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                         L"Particle Mem",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_18.StatData.Pad = (uchar  [8])(longlong)iVar2;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,-(longlong)iVar2);
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

// PreSpawn @ 148127ad0

void __thiscall
FParticleEmitterInstance::PreSpawn
          (FParticleEmitterInstance *this,FBaseParticle *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (FBaseParticle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x936,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->ParticleSize < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x938,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  memset(param_1,0,(longlong)this->ParticleSize);
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (param_1->Location).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_1->Location).field0_0x0._s_0.Y = dVar1;
  (param_1->Location).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  (param_1->BaseVelocity).field0_0x0._s_0.X = (float)(param_3->field0_0x0)._s_0.X;
  (param_1->BaseVelocity).field0_0x0._s_0.Y = (float)dVar1;
  (param_1->BaseVelocity).field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  (param_1->Velocity).field0_0x0._s_0.X = (float)(param_3->field0_0x0)._s_0.X;
  (param_1->Velocity).field0_0x0._s_0.Y = (float)dVar1;
  (param_1->Velocity).field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (param_1->Location).field0_0x0._s_0.X =
       (param_1->Location).field0_0x0._s_0.X - (this->PositionOffsetThisTick).field0_0x0._s_0.X;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  (param_1->Location).field0_0x0._s_0.Y = dVar1 - (this->PositionOffsetThisTick).field0_0x0._s_0.Y;
  (param_1->Location).field0_0x0._s_0.Z = dVar2 - (this->PositionOffsetThisTick).field0_0x0._s_0.Z;
  return;
}

// ProcessParticleEvents @ 148127ce0

void __thiscall
FParticleEmitterInstance::ProcessParticleEvents
          (FParticleEmitterInstance *this,float param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UParticleLODLevel *pUVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [4];
  
  pUVar6 = GetCurrentLODLevelChecked(this);
  if (0 < (pUVar6->EventReceiverModules).ArrayNum) {
    (**(code **)((longlong)*this->Component + 0x160))(this->Component,local_78);
    (**(code **)((longlong)*this->Component + 0x168))(this->Component,local_68);
    (**(code **)((longlong)*this->Component + 0x170))(this->Component,local_58);
    (**(code **)((longlong)*this->Component + 0x178))(this->Component,local_48);
    (**(code **)((longlong)*this->Component + 0x180))(this->Component,local_38);
    uVar9 = 0;
    if (0 < (pUVar6->EventReceiverModules).ArrayNum) {
      lVar8 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (pUVar6->EventReceiverModules).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((pUVar6->EventReceiverModules).AllocatorInstance.Data + lVar8);
        if ((plVar1 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EventRcvr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                               ,0xaa9,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar4 = (**(code **)(*plVar1 + 0x398))(plVar1,1);
        if (((cVar4 != '\0') && (0 < (int)local_78[1])) && (uVar7 = 0, 0 < (int)local_78[1])) {
          do {
            pcVar2 = *(code **)(*plVar1 + 0x3a0);
            uVar5 = 0;
            if ((int)uVar7 < (int)local_78[1]) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(plVar1,this,(longlong)(int)uVar7 * 0x50 + local_78[0],param_1);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)local_78[1]);
        }
        cVar4 = (**(code **)(*plVar1 + 0x398))(plVar1,2);
        if (((cVar4 != '\0') && (0 < (int)local_68[1])) && (uVar7 = 0, 0 < (int)local_68[1])) {
          do {
            pcVar2 = *(code **)(*plVar1 + 0x3a0);
            uVar5 = 0;
            if ((int)uVar7 < (int)local_68[1]) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(plVar1,this,(longlong)(int)uVar7 * 0x70 + local_68[0],param_1);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)local_68[1]);
        }
        cVar4 = (**(code **)(*plVar1 + 0x398))(plVar1,3);
        if (((cVar4 != '\0') && (0 < (int)local_58[1])) && (uVar7 = 0, 0 < (int)local_58[1])) {
          do {
            pcVar2 = *(code **)(*plVar1 + 0x3a0);
            uVar5 = 0;
            if ((int)uVar7 < (int)local_58[1]) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(plVar1,this,(longlong)(int)uVar7 * 0xa0 + local_58[0],param_1);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)local_58[1]);
        }
        cVar4 = (**(code **)(*plVar1 + 0x398))(plVar1,4);
        if (((cVar4 != '\0') && (0 < (int)local_48[1])) && (uVar7 = 0, 0 < (int)local_48[1])) {
          do {
            pcVar2 = *(code **)(*plVar1 + 0x3a0);
            uVar5 = 0;
            if ((int)uVar7 < (int)local_48[1]) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(plVar1,this,(longlong)(int)uVar7 * 0x58 + local_48[0],param_1);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)local_48[1]);
        }
        cVar4 = (**(code **)(*plVar1 + 0x398))(plVar1,5);
        if (((cVar4 != '\0') && (0 < (int)local_38[1])) && (uVar7 = 0, 0 < (int)local_38[1])) {
          do {
            pcVar2 = *(code **)(*plVar1 + 0x3a0);
            uVar5 = 0;
            if ((int)uVar7 < (int)local_38[1]) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(plVar1,this,(longlong)(int)uVar7 * 0x50 + local_38[0],param_1);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)local_38[1]);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar9 < (pUVar6->EventReceiverModules).ArrayNum);
    }
  }
  return;
}

// RequiredBytes @ 148129fa0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FParticleEmitterInstance::RequiredBytes(FParticleEmitterInstance *this)

{
  char cVar1;
  IParticleEmitterInstanceOwner IVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  UObjectBaseUtility *this_00;
  int iVar10;
  UParticleEmitter *pUVar11;
  longlong lVar12;
  void *local_48 [2];
  FString local_38;
  
  pUVar11 = this->SpriteTemplate;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  iVar10 = 0;
  if ((pUVar11->LODLevels).ArrayNum < 1) {
    uVar8 = 0;
  }
  else {
    lVar12 = 0;
    do {
      if (bVar4) goto LAB_14812a143;
      if (iVar10 < (pUVar11->LODLevels).ArrayNum) {
        if ((iVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        lVar9 = *(longlong *)((pUVar11->LODLevels).AllocatorInstance.Data + lVar12);
        if (lVar9 != 0) {
          cVar1 = *(char *)(*(longlong *)(lVar9 + 0x30) + 0xc1);
          if (iVar10 < 1) {
            if (cVar1 != '\0') goto LAB_14812a109;
          }
          else if (cVar1 != '\0') {
            if (2 < (byte)LogParticles._0_1_) {
              lVar9 = (**(code **)((longlong)*this->Component + 0xd8))();
              IVar2 = *this->Component;
              if (lVar9 == 0) {
                bVar5 = true;
                (**(code **)((longlong)IVar2 + 0x90))(this->Component,local_48);
              }
              else {
                this_00 = (UObjectBaseUtility *)(**(code **)((longlong)IVar2 + 0xd8))();
                bVar6 = true;
                UObjectBaseUtility::GetPathName(this_00,&local_38,(UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
              if ((bVar5) && (bVar5 = false, local_48[0] != (void *)0x0)) {
                FMemory::Free(local_48[0]);
              }
              if ((bVar6) &&
                 (bVar6 = false,
                 local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
            }
LAB_14812a109:
            bVar4 = true;
          }
        }
      }
      pUVar11 = this->SpriteTemplate;
      iVar10 = iVar10 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar10 < (pUVar11->LODLevels).ArrayNum);
    if (bVar4) {
LAB_14812a143:
      this->SubUVDataOffset = this->PayloadOffset;
      uVar8 = 8;
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}

// ResetBurstList @ 14812a5a0

void __thiscall FParticleEmitterInstance::ResetBurstList(FParticleEmitterInstance *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = 0;
  if (0 < (this->BurstFired).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->BurstFired).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->BurstFired).AllocatorInstance.Data;
      uVar6 = 0;
      lVar8 = 0;
      iVar5 = *(int *)(pFVar1 + lVar9 + 8);
      if (0 < iVar5) {
        do {
          uVar4 = 0;
          if ((int)uVar6 < iVar5) {
            uVar4 = ~uVar6 >> 0x1f;
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
          uVar6 = uVar6 + 1;
          *(undefined1 *)(lVar8 + *(longlong *)(pFVar1 + lVar9)) = 0;
          lVar8 = lVar8 + 1;
          iVar5 = *(int *)(pFVar1 + lVar9 + 8);
        } while ((int)uVar6 < iVar5);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < (this->BurstFired).ArrayNum);
  }
  return;
}

// ResetParticleParameters @ 14812a6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticleEmitterInstance::ResetParticleParameters(FParticleEmitterInstance *this,float param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  UParticleEmitter *pUVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  UParticleLODLevel *pUVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  int iVar12;
  uchar *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<int> FVar19;
  ForElementType<int> FVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auStack_e8 [32];
  uchar *local_c8;
  ForElementType<int> local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  uchar local_98 [8];
  ForElementType<int> local_90;
  int local_68;
  int local_64;
  ulonglong local_60;
  ulonglong uVar20;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar9 = GetCurrentLODLevelChecked(this);
  pUVar5 = this->SpriteTemplate;
  iVar12 = (pUVar5->LODLevels).ArrayNum;
  if (iVar12 < 1) {
    local_c8 = (uchar *)0x0;
    local_c0 = (ForElementType<int>)(longlong)iVar12;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar16 = *(longlong *)(pUVar5->LODLevels).AllocatorInstance.Data;
  if ((lVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("HighestLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x68f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar10 = (ForElementType<int>)0x0;
  local_64 = 8;
  local_90.SecondaryData = (ForElementType<int>)0x0;
  local_68 = 0;
  lVar24 = (longlong)(pUVar9->OrbitModules).ArrayNum;
  FVar19 = FVar10;
  FVar21 = FVar10;
  if (0 < lVar24) {
    do {
      uVar23 = FVar10._0_4_;
      uVar11 = 0;
      if ((int)uVar23 < *(int *)(lVar16 + 0x98)) {
        uVar11 = ~uVar23 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_c8 = (uchar *)(longlong)(int)uVar23;
        local_c0 = (ForElementType<int>)(longlong)*(int *)(lVar16 + 0x98);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar21 = local_90.SecondaryData;
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar25 = *(ulonglong *)(*(longlong *)(lVar16 + 0x90) + (longlong)FVar19 * 8);
      if (uVar25 != 0) {
        pUVar5 = this->SpriteTemplate;
        uVar11 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        if (*(int *)&(pUVar5->ModuleOffsetMap).field_0x8 !=
            *(int *)&(pUVar5->ModuleOffsetMap).field_0x34) {
          puVar6 = *(undefined1 **)&(pUVar5->ModuleOffsetMap).field_0x40;
          puVar15 = &(pUVar5->ModuleOffsetMap).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar15 = puVar6;
          }
          iVar12 = *(int *)(puVar15 +
                           (ulonglong)
                           (*(int *)&(pUVar5->ModuleOffsetMap).field_0x48 - 1U &
                           (uVar11 >> 0x10 ^ uVar11)) * 4);
          if (iVar12 != -1) {
            do {
              lVar14 = *(longlong *)&pUVar5->ModuleOffsetMap + (longlong)iVar12 * 0x18;
              if (*(ulonglong *)(*(longlong *)&pUVar5->ModuleOffsetMap + (longlong)iVar12 * 0x18) ==
                  uVar25) {
                puVar13 = (uchar *)(lVar14 + 8);
                if (lVar14 == 0) {
                  puVar13 = (uchar *)0x0;
                }
                if (puVar13 != (uchar *)0x0) {
                  local_98._0_4_ = *(undefined4 *)puVar13;
                  FVar10 = (ForElementType<int>)&local_90;
                  if (FVar21 != (ForElementType<int>)0x0) {
                    FVar10 = FVar21;
                  }
                  if ((ulonglong)FVar10 <= local_98) {
                    FVar10 = (ForElementType<int>)&local_90;
                    if (FVar21 != (ForElementType<int>)0x0) {
                      FVar10 = FVar21;
                    }
                    if (local_98 < (uchar *)((longlong)FVar10 + (longlong)local_64 * 4)) {
                      local_b0 = (longlong)local_68;
                      local_a8 = 4;
                      local_c8 = local_98;
                      local_c0 = (ForElementType<int>)&local_90;
                      if (FVar21 != (ForElementType<int>)0x0) {
                        local_c0 = FVar21;
                      }
                      local_b8 = (longlong)local_64;
                      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      FVar21 = local_90.SecondaryData;
                      if (bVar8) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                  }
                  if (local_68 == local_64) {
                    local_68 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                         (0x404,&local_90,&local_64);
                    FVar21 = local_90.SecondaryData;
                  }
                  lVar14 = (longlong)local_68;
                  FVar10 = (ForElementType<int>)&local_90;
                  if (FVar21 != (ForElementType<int>)0x0) {
                    FVar10 = FVar21;
                  }
                  local_68 = local_68 + 1;
                  *(undefined4 *)((longlong)FVar10 + lVar14 * 4) = local_98._0_4_;
                  FVar21 = local_90.SecondaryData;
                }
                break;
              }
              iVar12 = *(int *)(lVar14 + 0x10);
            } while (iVar12 != -1);
          }
        }
      }
      FVar10._0_4_ = uVar23 + 1;
      FVar10._4_4_ = 0;
      FVar19 = (ForElementType<int>)((longlong)FVar19 + 1);
    } while ((longlong)FVar19 < lVar24);
  }
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar22 = 0;
  uVar25 = uVar22;
  if (0 < this->ActiveParticles) {
    do {
      uVar17 = 0;
      iVar12 = (uint)*(ushort *)((longlong)this->ParticleIndices + uVar25) * this->ParticleStride;
      puVar13 = this->ParticleData;
      *(undefined8 *)(puVar13 + (longlong)iVar12 + 0x40) =
           *(undefined8 *)(puVar13 + (longlong)iVar12 + 0x30);
      *(undefined4 *)(puVar13 + (longlong)iVar12 + 0x48) =
           *(undefined4 *)(puVar13 + (longlong)iVar12 + 0x38);
      *(ulonglong *)(puVar13 + (longlong)iVar12 + 0x60) =
           CONCAT44(*(uint *)(puVar13 + (longlong)iVar12 + 0x54) & uVar11,
                    *(uint *)(puVar13 + (longlong)iVar12 + 0x50) & uVar11);
      *(undefined4 *)(puVar13 + (longlong)iVar12 + 0x5c) =
           *(undefined4 *)(puVar13 + (longlong)iVar12 + 0x4c);
      *(uint *)(puVar13 + (longlong)iVar12 + 0x68) =
           *(uint *)(puVar13 + (longlong)iVar12 + 0x58) & uVar11;
      *(undefined8 *)(puVar13 + (longlong)iVar12 + 0x70) =
           *(undefined8 *)(puVar13 + (longlong)iVar12 + 0x80);
      *(undefined8 *)(puVar13 + (longlong)iVar12 + 0x78) =
           *(undefined8 *)(puVar13 + (longlong)iVar12 + 0x88);
      if (((*(uint *)(puVar13 + (longlong)iVar12 + 0x6c) & 0x2000000) == 0) ||
         ((~this->SpriteTemplate->bUseLegacySpawningBehavior & 1) == 0)) {
        fVar26 = param_1 * *(float *)(puVar13 + (longlong)iVar12 + 0x94);
      }
      else {
        fVar26 = 0.0;
      }
      *(float *)(puVar13 + (longlong)iVar12 + 0x90) =
           fVar26 + *(float *)(puVar13 + (longlong)iVar12 + 0x90);
      iVar3 = this->CameraPayloadOffset;
      if (0 < iVar3) {
        *(undefined4 *)(puVar13 + (longlong)iVar3 + 4 + (longlong)iVar12) =
             *(undefined4 *)(puVar13 + (longlong)iVar3 + (longlong)iVar12);
      }
      uVar20 = uVar17;
      if (0 < local_68) {
        do {
          uVar18 = (uint)uVar20;
          uVar23 = 0;
          if ((int)uVar18 < local_68) {
            uVar23 = ~uVar18 >> 0x1f;
          }
          if (uVar23 == 0) {
            local_c0 = (ForElementType<int>)(longlong)local_68;
            local_c8 = (uchar *)(longlong)(int)uVar18;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          FVar19 = (ForElementType<int>)&local_90;
          if (local_90.SecondaryData != (ForElementType<int>)0x0) {
            FVar19 = local_90.SecondaryData;
          }
          lVar16 = (longlong)*(int *)((longlong)FVar19 + uVar17);
          uVar17 = uVar17 + 4;
          uVar4 = *(undefined4 *)(puVar13 + lVar16 + 0x14 + (longlong)iVar12);
          *(undefined8 *)(puVar13 + lVar16 + 0x3c + (longlong)iVar12) =
               *(undefined8 *)(puVar13 + lVar16 + 0xc + (longlong)iVar12);
          *(undefined8 *)(puVar13 + lVar16 + 0xc + (longlong)iVar12) =
               *(undefined8 *)(puVar13 + lVar16 + iVar12);
          uVar1 = *(undefined8 *)(puVar13 + lVar16 + 0x24 + (longlong)iVar12);
          *(undefined4 *)(puVar13 + lVar16 + 0x44 + (longlong)iVar12) = uVar4;
          *(undefined4 *)(puVar13 + lVar16 + 0x14 + (longlong)iVar12) =
               *(undefined4 *)(puVar13 + lVar16 + 8 + (longlong)iVar12);
          uVar4 = *(undefined4 *)(puVar13 + lVar16 + 0x2c + (longlong)iVar12);
          *(undefined8 *)(puVar13 + lVar16 + 0x30 + (longlong)iVar12) = uVar1;
          *(undefined4 *)(puVar13 + lVar16 + 0x38 + (longlong)iVar12) = uVar4;
          uVar20 = (ulonglong)(uVar18 + 1);
        } while ((int)(uVar18 + 1) < local_68);
      }
      uVar23 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar23;
      FVar21 = local_90.SecondaryData;
      uVar25 = uVar25 + 2;
    } while ((int)uVar23 < this->ActiveParticles);
  }
  if (FVar21 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar21);
  }
  return;
}

// Resize @ 14812ac20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FParticleEmitterInstance::Resize(FParticleEmitterInstance *this,int param_1,bool param_2)

{
  FName FVar1;
  IParticleEmitterInstanceOwner IVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_Resize> FVar12;
  longlong lVar13;
  UObjectBaseUtility *this_00;
  FThreadSafeStaticStat<FStat_STAT_GTParticleData> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  uchar *puVar17;
  ushort *puVar18;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterGTMem_Waste> FVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  FName local_e8;
  FName local_e0;
  FColor_u_0 local_d8 [2];
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  FScriptContainerElement *local_48 [2];
  
  lVar13 = 0;
  FVar12 = StatPtr_STAT_ParticleEmitterInstance_Resize;
  if (StatPtr_STAT_ParticleEmitterInstance_Resize ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_Resize>)0x0) {
    pFVar11 = ::FName::FName(&local_78,"STAT_ParticleEmitterInstance_Resize");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_Resize>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleEmitterInstance_Resize,
                        *pFVar11,L"EmitterInstance Resize GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar12;
  bVar5 = false;
  bVar4 = false;
  bVar6 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  if ((FVar1.ComparisonIndex.Value.Value != 0) || (FVar1.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
        local_c8.Number = FVar1.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0x2d2);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = FVar1;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      bVar5 = true;
    }
  }
  if (GEngine->MaxParticleResize < 1) {
LAB_14812ae43:
    iVar20 = this->MaxActiveParticles;
    if (iVar20 < param_1) {
      iVar10 = this->ParticleStride + 2;
      iVar20 = iVar20 * iVar10;
      local_e0 = (FName)(longlong)iVar20;
      if (iVar20 != 0) {
        FVar14 = StatPtr_STAT_GTParticleData;
        if (StatPtr_STAT_GTParticleData == (FThreadSafeStaticStat<FStat_STAT_GTParticleData>)0x0) {
          pFVar11 = ::FName::FName(&local_70,"STAT_GTParticleData");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_GTParticleData>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GTParticleData,*pFVar11,
                              L"Ptcls Data GT Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                              L"Particle Mem",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar1 = *(FName *)FVar14;
        local_e8 = FVar1;
        local_d0 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar15 == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
          }
          FVar7 = local_e0;
          local_a8.NameAndInfo.Index = local_d0.ComparisonIndex.Value;
          local_a8.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
          local_a8.StatData.Pad = (uchar  [8])local_e0;
          local_b0 = FVar1;
          FThreadStats::AddStatMessage(pFVar15,&local_a8);
          FStatsTrace::Add(&local_b0,-(longlong)FVar7);
          if (pFVar15->ScopeCount == 0) {
            FThreadStats::Flush(pFVar15,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar15,false,false);
          }
        }
      }
      iVar10 = iVar10 * param_1;
      if (iVar10 != 0) {
        FVar14 = StatPtr_STAT_GTParticleData;
        if (StatPtr_STAT_GTParticleData == (FThreadSafeStaticStat<FStat_STAT_GTParticleData>)0x0) {
          pFVar11 = ::FName::FName(&local_68,"STAT_GTParticleData");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_GTParticleData>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GTParticleData,*pFVar11,
                              L"Ptcls Data GT Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                              L"Particle Mem",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar1 = *(FName *)FVar14;
        local_e8 = FVar1;
        local_e0 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar15 == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
          }
          local_98.NameAndInfo.Index = local_e0.ComparisonIndex.Value;
          local_98.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
          local_d0 = FVar1;
          local_98.StatData.Pad = (uchar  [8])(longlong)iVar10;
          FThreadStats::AddStatMessage(pFVar15,&local_98);
          FStatsTrace::Add(&local_d0,(longlong)iVar10);
          if (pFVar15->ScopeCount == 0) {
            FThreadStats::Flush(pFVar15,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar15,false,false);
          }
        }
      }
      puVar17 = FMemory::Realloc(this->ParticleData,(longlong)(param_1 * this->ParticleStride),0);
      this->ParticleData = puVar17;
      if ((puVar17 == (uchar *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParticleData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                             ,0x2f5,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if (this->ParticleIndices == (ushort *)0x0) {
        this->MaxActiveParticles = 0;
      }
      puVar18 = FMemory::Realloc(this->ParticleIndices,(longlong)(param_1 + 1) * 2,0);
      uVar22 = (ulonglong)this->MaxActiveParticles;
      this->ParticleIndices = puVar18;
      if (this->MaxActiveParticles < param_1) {
        lVar23 = uVar22 * 2;
        do {
          *(short *)(lVar23 + (longlong)this->ParticleIndices) = (short)uVar22;
          uVar21 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar21;
          lVar23 = lVar23 + 2;
        } while ((int)uVar21 < param_1);
      }
      this->MaxActiveParticles = param_1;
      iVar20 = param_1;
    }
    iVar20 = (iVar20 - this->ActiveParticles) * (this->ParticleStride + 2);
    local_e0 = (FName)(longlong)iVar20;
    if ((iVar20 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar19 = StatPtr_STAT_DynamicEmitterGTMem_Waste;
      if (StatPtr_STAT_DynamicEmitterGTMem_Waste ==
          (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterGTMem_Waste>)0x0) {
        pFVar11 = ::FName::FName(&local_60,"STAT_DynamicEmitterGTMem_Waste");
        FVar19 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterGTMem_Waste>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterGTMem_Waste,
                            *pFVar11,L"DynEmitter GTMem Waste","STATGROUP_ParticleMem",
                            "STATCAT_Advanced",L"Particle Mem",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar1 = *(FName *)FVar19;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        FVar7 = local_e0;
        local_88.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_88.StatData.Pad = (uchar  [8])local_e0;
        local_e8 = FVar1;
        local_88.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar15,&local_88);
        FStatsTrace::Add(&local_e8,(long64)FVar7);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    if (param_2) {
      if ((((this->SpriteTemplate->LODLevels).ArrayNum < 1) ||
          (lVar13 = *(longlong *)(this->SpriteTemplate->LODLevels).AllocatorInstance.Data,
          lVar13 == 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODLevel",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                             ,0x317,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if (*(int *)(lVar13 + 0xb4) < this->MaxActiveParticles) {
        *(int *)(lVar13 + 0xb4) = this->MaxActiveParticles;
      }
    }
    bVar8 = true;
  }
  else {
    if (param_1 < 0) {
LAB_14812ad8b:
      if (2 < (byte)LogParticles._0_1_) {
        lVar13 = (**(code **)((longlong)*this->Component + 0xd8))();
        IVar2 = *this->Component;
        if (lVar13 == 0) {
          (**(code **)((longlong)IVar2 + 0x80))(this->Component,local_48);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          local_58.Data.AllocatorInstance.Data = local_48[0];
        }
        else {
          this_00 = (UObjectBaseUtility *)(**(code **)((longlong)IVar2 + 0xd8))();
          UObjectBaseUtility::GetPathName(this_00,&local_58,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (param_1 <= GEngine->MaxParticleResize) goto LAB_14812ae43;
      if (GEngine->MaxParticleResizeWarn < param_1) goto LAB_14812ad8b;
    }
    bVar8 = false;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(local_c0,CycleScopeEnd);
  }
  return bVar8;
}

// Rewind @ 14812da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleEmitterInstance::Rewind(FParticleEmitterInstance *this)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  bVar3 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  cVar2 = (**(code **)((longlong)*this->Component + 0x38))();
  if ((cVar2 != '\0') && (5 < (byte)LogParticles._0_1_)) {
    if ((this->SpriteTemplate != (UParticleEmitter *)0x0) &&
       (lVar1 = this->SpriteTemplate->_padding_, lVar1 != 0)) {
      local_res8 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res8,&local_18);
      bVar3 = true;
    }
    (**(code **)((longlong)*this->Component + 0x50))();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bEnabled = '\x01';
  this->SecondsSinceCreation = 0.0;
  this->EmitterTime = 0.0;
  this->LoopCount = 0;
  this->ParticleCounter = 0;
                    /* WARNING: Could not recover jumptable at 0x00014812db8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this);
  return;
}

// SetBeamEndPoint @ 14812f060

void __thiscall
FParticleEmitterInstance::SetBeamEndPoint(FParticleEmitterInstance *this,TVector<double> *param_1)

{
  return;
}

// SetBeamSourcePoint @ 14812f170

void __thiscall
FParticleEmitterInstance::SetBeamSourcePoint
          (FParticleEmitterInstance *this,TVector<double> *param_1,int param_2)

{
  return;
}

// SetBeamSourceStrength @ 14812f250

void __thiscall
FParticleEmitterInstance::SetBeamSourceStrength
          (FParticleEmitterInstance *this,float param_1,int param_2)

{
  return;
}

// SetBeamSourceTangent @ 14812f360

void __thiscall
FParticleEmitterInstance::SetBeamSourceTangent
          (FParticleEmitterInstance *this,TVector<double> *param_1,int param_2)

{
  return;
}

// SetBeamTargetPoint @ 14812f470

void __thiscall
FParticleEmitterInstance::SetBeamTargetPoint
          (FParticleEmitterInstance *this,TVector<double> *param_1,int param_2)

{
  return;
}

// SetBeamTargetStrength @ 14812f550

void __thiscall
FParticleEmitterInstance::SetBeamTargetStrength
          (FParticleEmitterInstance *this,float param_1,int param_2)

{
  return;
}

// SetBeamTargetTangent @ 14812f660

void __thiscall
FParticleEmitterInstance::SetBeamTargetTangent
          (FParticleEmitterInstance *this,TVector<double> *param_1,int param_2)

{
  return;
}

// SetCurrentLODIndex @ 14812f900

void __thiscall
FParticleEmitterInstance::SetCurrentLODIndex
          (FParticleEmitterInstance *this,int param_1,bool param_2)

{
  int iVar1;
  UParticleEmitter *pUVar2;
  UParticleLODLevel *pUVar3;
  UParticleModuleSpawn *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar13;
  
  pUVar2 = this->SpriteTemplate;
  if (pUVar2 != (UParticleEmitter *)0x0) {
    this->CurrentLODLevelIndex = param_1;
    if (param_1 < (pUVar2->LODLevels).ArrayNum) {
      uVar11 = 0;
      if (param_1 < (pUVar2->LODLevels).ArrayNum) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (pUVar2->LODLevels).AllocatorInstance.Data + (longlong)param_1 * 8;
    }
    else {
      this->CurrentLODLevelIndex = 0;
      if (((pUVar2->LODLevels).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (pUVar2->LODLevels).AllocatorInstance.Data;
    }
    this->CurrentLODLevel = *(UParticleLODLevel **)pFVar9;
    uVar11 = this->CurrentLODLevelIndex;
    uVar8 = 0;
    if ((int)uVar11 < (this->EmitterDurations).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this->EmitterDuration =
         *(float *)((this->EmitterDurations).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
    if ((this->CurrentLODLevel == (UParticleLODLevel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentLODLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x478,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr ==
         (UParticleModuleRequired *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentLODLevel->RequiredModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x479,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_2) {
      pUVar3 = this->CurrentLODLevel;
      bVar10 = (this->field_0x160 ^ ((pUVar3->RequiredModule).field0_0x0.DebugPtr)->field_0x71) & 4
               ^ this->field_0x160;
      this->field_0x160 = bVar10;
      this->field_0x160 =
           (bVar10 ^ ((pUVar3->RequiredModule).field0_0x0.DebugPtr)->field_0x71) & 2 ^ bVar10;
      iVar1 = (this->BurstFired).ArrayNum;
      pUVar4 = (pUVar3->SpawnModule).field0_0x0.DebugPtr;
      if (iVar1 < this->CurrentLODLevelIndex + 1) {
        TArray<FLODBurstFired,TSizedDefaultAllocator<32>_>::AddZeroed
                  (&this->BurstFired,(this->CurrentLODLevelIndex - iVar1) + 1);
      }
      uVar11 = this->CurrentLODLevelIndex;
      uVar8 = 0;
      if ((int)uVar11 < (this->BurstFired).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar1 = (pUVar4->BurstList).ArrayNum;
      this_00 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                ((this->BurstFired).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10);
      if (this_00->ArrayNum < iVar1) {
        TArray<bool,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,iVar1 - this_00->ArrayNum);
      }
      uVar11 = 0;
      if (0 < (pUVar4->BurstList).ArrayNum) {
        lVar13 = 0;
        lVar12 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (pUVar4->BurstList).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          if (((this->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->EmitterDelay +
              *(float *)((pUVar4->BurstList).AllocatorInstance.Data + lVar12 + 8) <
              this->EmitterTime) {
            uVar8 = 0;
            if ((int)uVar11 < this_00->ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            (this_00->AllocatorInstance).Data[lVar13] = (FScriptContainerElement)0x1;
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 0xc;
        } while ((int)uVar11 < (pUVar4->BurstList).ArrayNum);
      }
    }
    cVar7 = (**(code **)((longlong)*this->Component + 0x48))();
    if ((cVar7 == '\x01') && (this->CurrentLODLevel->bEnabled == 0)) {
      (**(code **)(this->_padding_ + 0xf0))(this,0);
    }
  }
  return;
}

// SetHaltSpawning @ 1481306c0

void __thiscall
FParticleEmitterInstance::SetHaltSpawning(FParticleEmitterInstance *this,bool param_1)

{
  this->bHaltSpawning = '\0';
  this->field_0x160 = this->field_0x160 | param_1 << 4;
  return;
}

// SetHaltSpawningExternal @ 1481306e0

void __thiscall
FParticleEmitterInstance::SetHaltSpawningExternal(FParticleEmitterInstance *this,bool param_1)

{
  this->bHaltSpawningExternal = '\0';
  this->field_0x160 = this->field_0x160 | param_1 << 5;
  return;
}

// SetMeshMaterials @ 148130730

void __thiscall
FParticleEmitterInstance::SetMeshMaterials
          (FParticleEmitterInstance *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// SetTrailSourceData @ 1481319f0

void __thiscall
FParticleEmitterInstance::SetTrailSourceData
          (FParticleEmitterInstance *this,FName param_1,FName param_2,ETrailWidthMode param_3,
          float param_4)

{
  return;
}

// SetupEmitterDuration @ 148131bd0

void __thiscall FParticleEmitterInstance::SetupEmitterDuration(FParticleEmitterInstance *this)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  UParticleModule *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FRandomStream *pFVar14;
  uint uVar15;
  UParticleEmitter *pUVar16;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  longlong local_res8;
  UParticleEmitter **local_res10;
  FContext local_res18;
  
  if (this->SpriteTemplate != (UParticleEmitter *)0x0) {
    uVar19 = 0;
    piVar2 = &(this->EmitterDurations).ArrayNum;
    iVar5 = *piVar2;
    if ((iVar5 == 0) || (iVar5 != (this->SpriteTemplate->LODLevels).ArrayNum)) {
      pTVar17 = &this->EmitterDurations;
      piVar1 = &(this->EmitterDurations).ArrayMax;
      (this->EmitterDurations).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar17->AllocatorInstance,0,piVar1);
      }
      iVar5 = (this->SpriteTemplate->LODLevels).ArrayNum;
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar5,&pTVar17->AllocatorInstance,piVar2,piVar1);
      pFVar7 = (pTVar17->AllocatorInstance).Data;
      memmove(pFVar7 + (longlong)iVar5 * 4,pFVar7,(longlong)iVar11 << 2);
    }
    fVar9 = __real_3f800000;
    local_res10 = &this->SpriteTemplate;
    pTVar17 = &this->EmitterDurations;
    pUVar16 = this->SpriteTemplate;
    uVar18 = 0;
    if (0 < (pUVar16->LODLevels).ArrayNum) {
      local_res8 = 0;
      do {
        uVar15 = uVar18;
        if ((int)uVar19 < (pUVar16->LODLevels).ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)((pUVar16->LODLevels).AllocatorInstance.Data + local_res8);
        this_00 = *(UParticleModule **)(lVar6 + 0x30);
        local_res18.Owner = this;
        pFVar14 = UParticleModule::GetRandomStream(this_00,&local_res18);
        fVar3 = *(float *)&this_00[3].field_0x28;
        fVar20 = (float)(**(code **)((longlong)*this->Component + 0x118))();
        fVar20 = fVar20 + fVar3;
        this->CurrentDelay = fVar20;
        if ((this_00[4]._padding_ & 0x20000) != 0) {
          uVar15 = pFVar14->Seed * 0xbb38435 + 0x3619636b;
          pFVar14->Seed = uVar15;
          fVar3 = *(float *)&this_00[3].field_0x2c;
          fVar20 = (float)(**(code **)((longlong)*this->Component + 0x118))();
          fVar20 = (*(float *)&this_00[3].field_0x28 - fVar3) *
                   ((float)(uVar15 >> 9 | 0x3f800000) - fVar9) + fVar3 + fVar20;
          this->CurrentDelay = fVar20;
        }
        if ((this_00[2]._padding_ & 0x8000000) == 0) {
          uVar15 = *(uint *)(lVar6 + 0x28);
          fVar3 = *(float *)((longlong)&this_00[2]._padding_ + 4);
          uVar13 = uVar18;
          if ((int)uVar15 < (this->EmitterDurations).ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(float *)((pTVar17->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) = fVar20 + fVar3
          ;
        }
        else {
          uVar12 = pFVar14->Seed * 0xbb38435 + 0x3619636b;
          pFVar14->Seed = uVar12;
          fVar3 = *(float *)((longlong)&this_00[6]._padding_ + 4);
          uVar15 = *(uint *)(lVar6 + 0x28);
          fVar20 = *(float *)((longlong)&this_00[2]._padding_ + 4);
          uVar13 = uVar18;
          if ((int)uVar15 < (this->EmitterDurations).ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          fVar4 = this->CurrentDelay;
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(float *)((pTVar17->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) =
               (fVar20 - fVar3) * ((float)(uVar12 >> 9 | 0x3f800000) - fVar9) + fVar3 + fVar4;
        }
        if (((this->LoopCount == 1) && ((this_00[4]._padding_ & 1) != 0)) &&
           ((iVar5 = *(int *)((longlong)&this_00[5]._padding_ + 4), iVar5 == 0 || (1 < iVar5)))) {
          uVar15 = *(uint *)(lVar6 + 0x28);
          fVar3 = this->CurrentDelay;
          uVar13 = uVar18;
          if ((int)uVar15 < (this->EmitterDurations).ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pTVar17->AllocatorInstance).Data;
          *(float *)(pFVar7 + (longlong)(int)uVar15 * 4) =
               *(float *)(pFVar7 + (longlong)(int)uVar15 * 4) - fVar3;
        }
        uVar19 = uVar19 + 1;
        local_res8 = local_res8 + 8;
        pUVar16 = *local_res10;
      } while ((int)uVar19 < (pUVar16->LODLevels).ArrayNum);
    }
    uVar19 = this->CurrentLODLevelIndex;
    if ((int)uVar19 < (this->EmitterDurations).ArrayNum) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this->EmitterDuration =
         *(float *)((this->EmitterDurations).AllocatorInstance.Data + (longlong)(int)uVar19 * 4);
  }
  return;
}

// Spawn @ 148134840

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FParticleEmitterInstance::Spawn(FParticleEmitterInstance *this,float param_1)

{
  int iVar1;
  UParticleEmitter *pUVar2;
  longlong *plVar3;
  UParticleModuleSpawn *pUVar4;
  UParticleModuleSpawn *this_00;
  UParticleModuleEventGenerator *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_SpriteSpawnTime> FVar13;
  UParticleLODLevel *pUVar14;
  UObject *pUVar15;
  FParticleEventInstancePayload *pFVar16;
  int iVar17;
  char cVar18;
  ulonglong uVar19;
  FName FVar20;
  byte bVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  char local_res8;
  float local_res10 [2];
  char local_res18;
  byte local_res20;
  int local_118;
  int local_114;
  float local_110;
  int local_10c;
  int local_108;
  FColor_u_0 local_104;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FParticleEmitterInstance *local_e0;
  longlong local_d8;
  TVector<double>_u_0 local_d0;
  FName local_b8 [15];
  
  FVar13 = StatPtr_STAT_SpriteSpawnTime;
  local_res10[0] = param_1;
  if (StatPtr_STAT_SpriteSpawnTime == (FThreadSafeStaticStat<FStat_STAT_SpriteSpawnTime>)0x0) {
    pFVar12 = ::FName::FName(local_b8,"STAT_SpriteSpawnTime");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_SpriteSpawnTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteSpawnTime,*pFVar12,
                        L"Sprite Spawn Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar21 = 0;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  local_res20 = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_1481349c6:
    local_f8 = local_f0;
    FVar20 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_104.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_104._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar21 = 1;
      local_res20 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_100.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0x7ae);
        bVar21 = 3;
        local_res20 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481349c6;
    local_f8 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    local_res20 = bVar21 | 4;
  }
  pUVar14 = GetCurrentLODLevelChecked(this);
  pUVar2 = this->SpriteTemplate;
  fVar27 = this->SpawnFraction;
  fVar31 = 0.0;
  local_118 = 0;
  fVar32 = 0.0;
  if (((pUVar2->LODLevels).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    fVar27 = (float)(*pcVar6)();
    return fVar27;
  }
  uVar19 = 0;
  cVar9 = '\x01';
  cVar10 = '\x01';
  local_res18 = '\x01';
  local_res8 = '\x01';
  lVar22 = *(longlong *)(pUVar2->LODLevels).AllocatorInstance.Data;
  local_d8 = lVar22;
  if (0.0 < this->SpriteTemplate->QualityLevelSpawnRateScale) {
    uVar26 = uVar19;
    iVar23 = 0;
    if ((pUVar14->SpawningModules).ArrayNum < 1) {
LAB_148134c71:
      pUVar4 = (pUVar14->SpawnModule).field0_0x0.DebugPtr;
      pUVar15 = (UObject *)(**(code **)((longlong)*this->Component + 8))();
      this_00 = (pUVar14->SpawnModule).field0_0x0.DebugPtr;
      fVar28 = FRawDistributionFloat::GetValue
                         (&pUVar4->RateScale,this->EmitterTime,pUVar15,(FRandomStream *)0x0);
      fVar29 = UParticleModuleSpawn::GetGlobalRateScale(this_00);
      pUVar4 = (pUVar14->SpawnModule).field0_0x0.DebugPtr;
      pUVar15 = (UObject *)(**(code **)((longlong)*this->Component + 8))();
      fVar30 = FRawDistributionFloat::GetValue
                         (&pUVar4->Rate,this->EmitterTime,pUVar15,(FRandomStream *)0x0);
      fVar32 = fVar30 * fVar28 * fVar29 + fVar32;
      cVar10 = local_res8;
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
    }
    else {
      do {
        uVar24 = (uint)uVar26;
        uVar11 = 0;
        if ((int)uVar24 < (pUVar14->SpawningModules).ArrayNum) {
          uVar11 = ~uVar24 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , cVar9 = local_res18, cVar10 = local_res8, bVar7)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        plVar3 = *(longlong **)((pUVar14->SpawningModules).AllocatorInstance.Data + uVar19);
        cVar18 = local_res18;
        if ((plVar3 != (longlong *)0x0) && ((char)plVar3[5] < '\0')) {
          uVar11 = 0;
          if ((int)uVar24 < *(int *)(lVar22 + 0x68)) {
            uVar11 = ~uVar24 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            fVar27 = (float)(*pcVar6)();
            return fVar27;
          }
          uVar11 = GetModuleDataOffset(this,*(UParticleModule **)
                                             (*(longlong *)(lVar22 + 0x60) + uVar19));
          local_114 = 0;
          local_110 = 0.0;
          local_e0 = this;
          cVar8 = (**(code **)(*plVar3 + 0x398))
                            (plVar3,&local_e0,uVar11,fVar27,local_res10[0],&local_114,&local_110);
          if (local_110 <= 0.0) {
            local_110 = 0.0;
          }
          if (local_114 < 0) {
            local_114 = 0;
          }
          local_10c = 0;
          fVar32 = fVar32 + local_110;
          cVar9 = (**(code **)(*plVar3 + 0x3a0))
                            (plVar3,this,uVar11,fVar27,local_res10[0],&local_10c);
          cVar18 = '\0';
          cVar10 = cVar18;
          if (cVar9 != '\0') {
            cVar10 = local_res8;
          }
          local_118 = local_118 + local_10c;
          lVar22 = local_d8;
          cVar9 = cVar18;
          local_res8 = cVar10;
          if (cVar8 != '\0') {
            cVar18 = local_res18;
            cVar9 = local_res18;
          }
        }
        local_res18 = cVar18;
        uVar19 = uVar19 + 8;
        uVar26 = (ulonglong)(uVar24 + 1);
      } while ((int)(uVar24 + 1) < (pUVar14->SpawningModules).ArrayNum);
      FVar20 = local_f8;
      iVar23 = local_118;
      if (cVar9 != '\0') goto LAB_148134c71;
    }
    if (cVar10 != '\0') {
      local_108 = 0;
      (**(code **)(this->_padding_ + 0x98))(this,local_res10,&local_108);
      iVar23 = iVar23 + local_108;
    }
    fVar28 = UParticleEmitter::GetQualityLevelSpawnRateMult(this->SpriteTemplate);
    fVar32 = fVar28 * fVar32;
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    iVar23 = -((int)ROUND(__real_bf000000 - (fVar28 + fVar28) * (float)iVar23) >> 1);
    if ((0.0 < fVar32) || (0 < iVar23)) {
      fVar28 = fVar32 * local_res10[0] + fVar27;
      iVar25 = (int)ROUND((fVar28 + fVar28) - __real_3f000000) >> 1;
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = __real_3f800000 / fVar32;
      }
      iVar1 = this->ActiveParticles;
      fVar29 = (float)iVar25;
      iVar17 = iVar1 + iVar25 + iVar23;
      fVar30 = fVar32 * fVar27 + local_res10[0];
      if (FXConsoleVariables::MaxCPUParticlesPerEmitter < iVar17) {
        iVar17 = FXConsoleVariables::MaxCPUParticlesPerEmitter - iVar1;
        if (iVar17 < iVar23) {
          iVar23 = iVar17;
        }
        if (iVar17 - iVar23 < iVar25) {
          iVar25 = iVar17 - iVar23;
        }
        iVar17 = iVar25 + iVar23 + iVar1;
      }
      if (this->SpriteTemplate->bUseLegacySpawningBehavior == 0) {
        fVar33 = 0.0;
      }
      else {
        if (0.0 < (float)iVar23) {
          fVar31 = __real_3f800000 / (float)iVar23;
        }
        fVar33 = fVar31 * local_res10[0];
      }
      if ((iVar17 < this->MaxActiveParticles) ||
         (cVar10 = (**(code **)(this->_padding_ + 0x18))
                             (this,(int)(SQRT(SQRT((float)iVar17)) + __real_3f800000) + iVar17,
                              local_res10[0] < __real_3d4ccccd), cVar10 == '\x01')) {
        pUVar5 = (pUVar14->EventGenerator).field0_0x0.DebugPtr;
        pFVar16 = (FParticleEventInstancePayload *)0x0;
        if ((pUVar5 != (UParticleModuleEventGenerator *)0x0) &&
           ((pFVar16 = (FParticleEventInstancePayload *)
                       GetModuleInstanceData(this,(UParticleModule *)pUVar5),
            pFVar16 != (FParticleEventInstancePayload *)0x0 &&
            (pFVar16->bSpawnEventsPresent == 0 && pFVar16->bBurstEventsPresent == 0)))) {
          pFVar16 = (FParticleEventInstancePayload *)0x0;
        }
        local_d0._s_0.X = (this->EmitterToSimulation).M[3][0];
        local_d0._s_0.Y = (this->EmitterToSimulation).M[3][1];
        local_d0._s_0.Z = (this->EmitterToSimulation).M[3][2];
        SpawnParticles(this,iVar25,fVar30 - fVar32,fVar32,(TVector<double> *)&local_d0._s_0,
                       &UE::Math::TVector<double>::ZeroVector,pFVar16);
        SpawnParticles(this,iVar23,fVar33,fVar31,(TVector<double> *)&local_d0._s_0,
                       &UE::Math::TVector<double>::ZeroVector,pFVar16);
        fVar27 = fVar28 - fVar29;
      }
      goto LAB_148134f2b;
    }
  }
  fVar27 = this->SpawnFraction;
LAB_148134f2b:
  bVar21 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar21 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar21 & 4) != 0) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return fVar27;
}

// SpawnParticles @ 148136570

void __thiscall
FParticleEmitterInstance::SpawnParticles
          (FParticleEmitterInstance *this,int param_1,float param_2,float param_3,
          TVector<double> *param_4,TVector<double> *param_5,FParticleEventInstancePayload *param_6)

{
  UParticleModuleEventGenerator *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UParticleLODLevel *local_res8;
  int local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  FParticleEmitterInstance *local_58;
  float *local_50;
  int *local_48;
  float *local_40;
  TVector<double> *local_38;
  TVector<double> *local_30;
  UParticleLODLevel **local_28;
  FParticleEventInstancePayload **local_20;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_res8 = GetCurrentLODLevelChecked(this);
  if ((this->MaxActiveParticles < this->ActiveParticles) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveParticles <= MaxActiveParticles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x87a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((local_res8->EventGenerator).field0_0x0.DebugPtr == (UParticleModuleEventGenerator *)0x0) &&
      (param_6 != (FParticleEventInstancePayload *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel->EventGenerator != 0 || EventPayload == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x87b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->MaxActiveParticles < this->ActiveParticles + local_res10[0]) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8227774926602373246>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x87e,"ActiveParticles + Count <= MaxActiveParticles"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = this->MaxActiveParticles - this->ActiveParticles;
  if (local_res10[0] < iVar4) {
    iVar4 = local_res10[0];
  }
  local_res10[0] = iVar4;
  if (((param_6 != (FParticleEventInstancePayload *)0x0) && (param_6->bBurstEventsPresent != 0)) &&
     (0 < iVar4)) {
    pUVar1 = (local_res8->EventGenerator).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x3b0))(pUVar1,this);
  }
  local_50 = local_res18;
  local_48 = local_res10;
  local_40 = local_res20;
  local_38 = param_4;
  local_30 = param_5;
  local_28 = &local_res8;
  local_20 = &param_6;
  local_58 = this;
  `FParticleEmitterInstance::SpawnParticles'::__l2::<lambda_1>::operator()
            (&local_58,this->SpriteTemplate->bUseLegacySpawningBehavior);
  return;
}

// Tick @ 148139630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleEmitterInstance::Tick(FParticleEmitterInstance *this,float param_1,bool param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SpriteTickTime> FVar11;
  UParticleLODLevel *pUVar12;
  FThreadSafeStaticStat<FStat_STAT_SpriteParticles> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FName FVar16;
  FNameEntryId FVar17;
  uchar auVar18 [8];
  float fVar19;
  float fVar20;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res20;
  LARGE_INTEGER local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FStatMessage local_80;
  FStatMessage local_70 [3];
  
  FVar11 = StatPtr_STAT_SpriteTickTime;
  if (StatPtr_STAT_SpriteTickTime == (FThreadSafeStaticStat<FStat_STAT_SpriteTickTime>)0x0) {
    pFVar10 = ::FName::FName(&local_a0,"STAT_SpriteTickTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_SpriteTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteTickTime,*pFVar10,
                        L"Sprite Tick Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_res8.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0x329);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_148139799;
    }
  }
  bVar5 = false;
  FVar16 = local_90;
LAB_148139799:
  if (this->SpriteTemplate == (UParticleEmitter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpriteTemplate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x32b,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->SpriteTemplate->LODLevels).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpriteTemplate->LODLevels.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x32c,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar20 = this->SecondsSinceCreation;
  pUVar12 = GetCurrentLODLevelChecked(this);
  fVar19 = (float)(**(code **)(this->_padding_ + 0x28))(this,param_1);
  if (this->bEnabled == 0) {
    FakeBursts(this);
  }
  else {
    (**(code **)(this->_padding_ + 0xe0))(this);
    (**(code **)(this->_padding_ + 0xa0))(this,param_1);
    this->CurrentMaterial =
         (UMaterialInterface *)
         (((pUVar12->RequiredModule).field0_0x0.DebugPtr)->Material).field0_0x0;
    (**(code **)(this->_padding_ + 0x38))(this,param_1,pUVar12);
    fVar20 = (float)(**(code **)(this->_padding_ + 0x30))
                              (this,param_1,pUVar12,param_2,fVar20 <= 0.0);
    this->SpawnFraction = fVar20;
    (**(code **)(this->_padding_ + 0x40))(this,param_1,pUVar12);
    if (0 < this->ActiveParticles) {
      (**(code **)(this->_padding_ + 0xa8))(this,param_1);
      (**(code **)(this->_padding_ + 0x68))(this,param_1);
    }
    (**(code **)(this->_padding_ + 0x48))(this,param_1);
    CheckEmitterFinished(this);
    this->IsRenderDataDirty = 1;
  }
  auVar18 = (uchar  [8])(longlong)this->ActiveParticles;
  this->LastDeltaTime = param_1;
  this->EmitterTime = fVar19 + this->EmitterTime;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PositionOffsetThisTick).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PositionOffsetThisTick).field0_0x0._s_0.Y = (double)uVar7;
  (this->PositionOffsetThisTick).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((auVar18 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar13 = StatPtr_STAT_SpriteParticles;
    if (StatPtr_STAT_SpriteParticles == (FThreadSafeStaticStat<FStat_STAT_SpriteParticles>)0x0) {
      pFVar10 = ::FName::FName(&local_98,"STAT_SpriteParticles");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_SpriteParticles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteParticles,*pFVar10,
                          L"Sprite Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar13;
    FVar17 = FVar2.ComparisonIndex.Value;
    uVar9 = FVar2.Number;
    local_res8.ComparisonIndex.Value = FVar17.Value;
    local_res8.Number = uVar9;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      local_80.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
      local_res20 = FVar2;
      local_80.StatData.Pad = auVar18;
      local_80.NameAndInfo.Index.Value = FVar17.Value;
      FThreadStats::AddStatMessage(pFVar14,&local_80);
      FStatsTrace::Add(&local_res20,(long64)auVar18);
      if (pFVar14->ScopeCount == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_70[0].NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_70[0].NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_70[0].StatData.Pad[4] = '\0';
      local_70[0].StatData.Pad[5] = '\0';
      local_70[0].StatData.Pad[6] = '\0';
      local_70[0].StatData.Pad[7] = '\0';
      local_70[0].StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_70[0].StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_70[0].StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_70[0].StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,local_70);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return;
}

// Tick_EmitterTimeSetup @ 14813ac30

float __thiscall
FParticleEmitterInstance::Tick_EmitterTimeSetup
          (FParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  double dVar1;
  IParticleEmitterInstanceOwner *pIVar2;
  UParticleModuleRequired *pUVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  UParticleModule *pUVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  cVar9 = (**(code **)((longlong)*this->Component + 0x108))();
  pIVar2 = this->Component;
  if (cVar9 == '\0') {
    uVar5 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 4);
    uVar6 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 8);
    uVar7 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 0xc);
    dVar1 = (this->Location).field0_0x0._s_0.Z;
    *(undefined4 *)&(this->OldLocation).field0_0x0 = *(undefined4 *)&(this->Location).field0_0x0;
    *(undefined4 *)((longlong)&(this->OldLocation).field0_0x0 + 4) = uVar5;
    *(undefined4 *)((longlong)&(this->OldLocation).field0_0x0 + 8) = uVar6;
    *(undefined4 *)((longlong)&(this->OldLocation).field0_0x0 + 0xc) = uVar7;
    (this->OldLocation).field0_0x0._s_0.Z = dVar1;
    lVar10 = (**(code **)((longlong)*pIVar2 + 0x10))();
    dVar8 = *(double *)(lVar10 + 0x28);
    dVar1 = *(double *)(lVar10 + 0x30);
    (this->Location).field0_0x0._s_0.X = *(double *)(lVar10 + 0x20);
    (this->Location).field0_0x0._s_0.Y = dVar8;
    (this->Location).field0_0x0._s_0.Z = dVar1;
  }
  else {
    lVar10 = (**(code **)((longlong)*pIVar2 + 0x10))();
    dVar8 = *(double *)(lVar10 + 0x28);
    dVar1 = *(double *)(lVar10 + 0x30);
    (this->Location).field0_0x0._s_0.X = *(double *)(lVar10 + 0x20);
    (this->Location).field0_0x0._s_0.Y = dVar8;
    (this->Location).field0_0x0._s_0.Z = dVar1;
    dVar8 = (this->Location).field0_0x0._s_0.Y;
    dVar1 = (this->Location).field0_0x0._s_0.Z;
    (this->OldLocation).field0_0x0._s_0.X = (this->Location).field0_0x0._s_0.X;
    (this->OldLocation).field0_0x0._s_0.Y = dVar8;
    (this->OldLocation).field0_0x0._s_0.Z = dVar1;
  }
  UpdateTransforms(this);
  fVar16 = this->EmitterDuration;
  fVar14 = param_1 + this->SecondsSinceCreation;
  bVar4 = false;
  this->SecondsSinceCreation = fVar14;
  fVar15 = __real_38d1b717;
  if (((param_2->RequiredModule).field0_0x0.DebugPtr)->bUseLegacyEmitterTime == 0) {
    fVar15 = param_1 + this->EmitterTime;
    this->EmitterTime = fVar15;
    if ((fVar16 <= 0.0) || (fVar15 < fVar16)) goto LAB_14813ad62;
    fVar16 = this->CurrentDelay;
  }
  else {
    this->EmitterTime = fVar14;
    if (fVar15 < fVar16) {
      fVar16 = FGenericPlatformMath::Fmod(fVar14,fVar16);
      this->EmitterTime = fVar16;
      bVar4 = this->EmitterDuration <=
              this->SecondsSinceCreation - (float)this->LoopCount * this->EmitterDuration;
    }
LAB_14813ad62:
    fVar16 = this->CurrentDelay;
    if (!bVar4) goto LAB_14813ae58;
  }
  this->LoopCount = this->LoopCount + 1;
  (**(code **)(this->_padding_ + 0x90))(this);
  if (this->MaxEventCount < this->EventCount) {
    this->MaxEventCount = this->EventCount;
  }
  this->EventCount = 0;
  if (((param_2->RequiredModule).field0_0x0.DebugPtr)->bUseLegacyEmitterTime == 0) {
    this->EmitterTime = this->EmitterTime - this->EmitterDuration;
  }
  pUVar3 = (param_2->RequiredModule).field0_0x0.DebugPtr;
  if ((pUVar3->bDurationRecalcEachLoop != 0) ||
     ((pUVar3->bDelayFirstLoopOnly != 0 && (this->LoopCount == 1)))) {
    SetupEmitterDuration(this);
  }
  if ((this->bRequiresLoopNotification != '\0') && (iVar13 = -3, -3 < (param_2->Modules).ArrayNum))
  {
    do {
      if (iVar13 == -3) {
        iVar12 = -3;
      }
      else if (iVar13 == -2) {
        iVar12 = -4;
      }
      else {
        iVar12 = -2;
        if (iVar13 != -1) {
          iVar12 = iVar13;
        }
      }
      pUVar11 = UParticleLODLevel::GetModuleAtIndex(param_2,iVar12);
      if ((pUVar11 != (UParticleModule *)0x0) && (pUVar11->bRequiresLoopingNotification != '\0')) {
        (**(code **)(pUVar11->_padding_ + 0x338))(pUVar11,this);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (param_2->Modules).ArrayNum);
  }
LAB_14813ae58:
  if ((((param_2->RequiredModule).field0_0x0.DebugPtr)->bDelayFirstLoopOnly != 0) &&
     (0 < this->LoopCount)) {
    fVar16 = 0.0;
  }
  this->EmitterTime = this->EmitterTime - fVar16;
  return fVar16;
}

// Tick_MaterialOverrides @ 14813aeb0

void __thiscall
FParticleEmitterInstance::Tick_MaterialOverrides(FParticleEmitterInstance *this,int param_1)

{
  UParticleLODLevel *pUVar1;
  UParticleModuleRequired *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong local_38;
  int local_30;
  
  pUVar1 = this->CurrentLODLevel;
  (**(code **)((longlong)*this->Component + 0xf0))(this->Component,&local_38);
  uVar9 = 0;
  uVar11 = 0;
  if (((pUVar1 != (UParticleLODLevel *)0x0) &&
      ((pUVar1->RequiredModule).field0_0x0.DebugPtr != (UParticleModuleRequired *)0x0)) &&
     (lVar6 = (**(code **)((longlong)*this->Component + 0xd8))(), lVar6 != 0)) {
    pUVar2 = (pUVar1->RequiredModule).field0_0x0.DebugPtr;
    lVar6 = (**(code **)((longlong)*this->Component + 0xd8))();
    if ((0 < (pUVar2->NamedMaterialOverrides).ArrayNum) &&
       (iVar7 = *(int *)(lVar6 + 0x170), uVar13 = uVar9, 0 < iVar7)) {
      do {
        uVar8 = (uint)uVar9;
        uVar12 = ~uVar8 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar10 = *(longlong *)(lVar6 + 0x168);
        if (((pUVar2->NamedMaterialOverrides).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar6 + 0x170);
        if (*(longlong *)(pUVar2->NamedMaterialOverrides).AllocatorInstance.Data ==
            *(longlong *)(lVar10 + uVar13)) {
          uVar5 = uVar11;
          if ((int)uVar8 < iVar7) {
            uVar5 = uVar12;
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
          lVar10 = (longlong)(int)uVar8;
          this->CurrentMaterial =
               *(UMaterialInterface **)(*(longlong *)(lVar6 + 0x168) + 8 + lVar10 * 0x10);
          if ((int)uVar8 < 0) {
            return;
          }
          if (local_30 <= (int)uVar8) {
            return;
          }
          uVar5 = uVar11;
          if ((int)uVar8 < local_30) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)(local_38 + lVar10 * 8) == 0) {
            return;
          }
          if ((int)uVar8 < local_30) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this->CurrentMaterial = *(UMaterialInterface **)(local_38 + lVar10 * 8);
          return;
        }
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar13 = uVar13 + 0x10;
      } while ((int)(uVar8 + 1) < iVar7);
    }
  }
  if ((-1 < param_1) && (param_1 < local_30)) {
    uVar5 = uVar11;
    if (param_1 < local_30) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(local_38 + (longlong)param_1 * 8) != 0) {
      if (param_1 < local_30) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->CurrentMaterial = *(UMaterialInterface **)(local_38 + (longlong)param_1 * 8);
    }
  }
  return;
}

// Tick_ModuleFinalUpdate @ 14813b990

void __thiscall
FParticleEmitterInstance::Tick_ModuleFinalUpdate
          (FParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  UParticleEmitter *pUVar1;
  longlong lVar2;
  longlong *plVar3;
  UParticleModuleTypeDataBase *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FParticleEmitterInstance *local_58;
  uint local_50;
  float local_4c;
  FParticleEmitterInstance *local_48;
  uint local_40;
  float local_3c;
  
  pUVar1 = this->SpriteTemplate;
  if (((pUVar1->LODLevels).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *(longlong *)(pUVar1->LODLevels).AllocatorInstance.Data;
  if ((lVar2 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("HighestLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x44f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = 0;
  if (0 < (param_2->UpdateModules).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (param_2->UpdateModules).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
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
      plVar3 = *(longlong **)((param_2->UpdateModules).AllocatorInstance.Data + lVar9);
      if (((plVar3 != (longlong *)0x0) && ((char)*(byte *)(plVar3 + 5) < '\0')) &&
         ((*(byte *)(plVar3 + 5) & 4) != 0)) {
        pcVar5 = *(code **)(*plVar3 + 0x2c8);
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(lVar2 + 0x88)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_50 = GetModuleDataOffset(this,*(UParticleModule **)
                                             (lVar9 + *(longlong *)(lVar2 + 0x80)));
        local_58 = this;
        local_4c = param_1;
        (*pcVar5)(plVar3,&local_58);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (param_2->UpdateModules).ArrayNum);
  }
  pUVar4 = (param_2->TypeDataModule).field0_0x0.DebugPtr;
  if (((pUVar4 != (UParticleModuleTypeDataBase *)0x0) && ((char)pUVar4->field_0x28 < '\0')) &&
     ((pUVar4->field_0x28 & 4) != 0)) {
    pcVar5 = *(code **)(*(longlong *)pUVar4 + 0x2c8);
    local_40 = GetModuleDataOffset(this,*(UParticleModule **)(lVar2 + 0x48));
    local_48 = this;
    local_3c = param_1;
    (*pcVar5)(pUVar4,&local_48);
  }
  return;
}

// Tick_ModulePostUpdate @ 14813bd80

void __thiscall
FParticleEmitterInstance::Tick_ModulePostUpdate
          (FParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  UParticleModuleTypeDataBase *pUVar1;
  FParticleEmitterInstance *local_18;
  int local_10;
  float local_c;
  
  pUVar1 = (param_2->TypeDataModule).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleModuleTypeDataBase *)0x0) {
    local_10 = this->TypeDataOffset;
    local_18 = this;
    local_c = param_1;
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,&local_18);
  }
  return;
}

// Tick_ModuleUpdate @ 14813bfd0

void __thiscall
FParticleEmitterInstance::Tick_ModuleUpdate
          (FParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  UParticleEmitter *pUVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FParticleEmitterInstance *local_48;
  uint local_40;
  float local_3c;
  
  pUVar1 = this->SpriteTemplate;
  if (((pUVar1->LODLevels).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)(pUVar1->LODLevels).AllocatorInstance.Data;
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HighestLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x42c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < (param_2->UpdateModules).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (param_2->UpdateModules).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
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
      plVar3 = *(longlong **)((param_2->UpdateModules).AllocatorInstance.Data + lVar8);
      if (((plVar3 != (longlong *)0x0) && ((char)*(byte *)(plVar3 + 5) < '\0')) &&
         ((*(byte *)(plVar3 + 5) & 2) != 0)) {
        pcVar4 = *(code **)(*plVar3 + 0x2c0);
        uVar6 = 0;
        if ((int)uVar7 < *(int *)(lVar2 + 0x88)) {
          uVar6 = ~uVar7 >> 0x1f;
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
        local_40 = GetModuleDataOffset(this,*(UParticleModule **)
                                             (lVar8 + *(longlong *)(lVar2 + 0x80)));
        local_48 = this;
        local_3c = param_1;
        (*pcVar4)(plVar3,&local_48);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (param_2->UpdateModules).ArrayNum);
  }
  return;
}

// Tick_SpawnParticles @ 14813c1e0

float __thiscall
FParticleEmitterInstance::Tick_SpawnParticles
          (FParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  float fVar2;
  
  if (((this->bHaltSpawning != '\0' || this->bHaltSpawningExternal != '\0') || (param_3)) ||
     (this->EmitterTime <= 0.0 && this->EmitterTime != 0.0)) {
    if (this->bFakeBurstsWhenSpawningSupressed == '\0') {
      return this->SpawnFraction;
    }
    FakeBursts(this);
  }
  else {
    iVar1 = ((param_2->RequiredModule).field0_0x0.DebugPtr)->EmitterLoops;
    if (((iVar1 == 0) || (this->LoopCount < iVar1)) ||
       ((fVar2 = (float)iVar1 * this->EmitterDuration,
        this->SecondsSinceCreation <= fVar2 && fVar2 != this->SecondsSinceCreation || (param_4)))) {
      fVar2 = (float)(**(code **)(this->_padding_ + 0xb8))(this);
      this->SpawnFraction = fVar2;
      return fVar2;
    }
  }
  return this->SpawnFraction;
}

// UpdateBoundingBox @ 14813f710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleEmitterInstance::UpdateBoundingBox(FParticleEmitterInstance *this,float param_1)

{
  FObjectPtr_u_0 *this_00;
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  uint uVar5;
  UParticleEmitter *pUVar6;
  FObjectPtr FVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  bool bVar21;
  char cVar22;
  bool bVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds> FVar28;
  longlong lVar29;
  UClass *pUVar30;
  TTransform<double> *this_01;
  TMatrix<double> *pTVar31;
  FName FVar32;
  uint uVar33;
  ulonglong uVar34;
  double *pdVar35;
  ulonglong uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  FColor_u_0 local_320 [2];
  FName local_318;
  FName local_310;
  FName local_308;
  UParticleLODLevel *local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  undefined1 local_2d8 [16];
  FName local_2c8 [2];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  TMatrix<double> local_218;
  undefined1 local_168;
  undefined7 uStack_167;
  TMatrix<double> local_158 [2];
  
  uVar36 = 0;
  FVar28 = StatPtr_STAT_ParticleUpdateBounds;
  if (StatPtr_STAT_ParticleUpdateBounds ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)0x0) {
    pFVar27 = ::FName::FName(local_2c8,"STAT_ParticleUpdateBounds");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleUpdateBounds,*pFVar27,
                        L"Update Bounds Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar28;
  bVar17 = false;
  bVar19 = false;
  local_308.ComparisonIndex.Value = 0;
  local_308.Number = 0;
  bVar21 = false;
  bVar18 = false;
  if ((FVar32.ComparisonIndex.Value.Value != 0) || (FVar32.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_320[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_320[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar17 = false;
      bVar19 = true;
      bVar21 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_318.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_318.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_318,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0x4f8);
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_310 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar21 = true;
      goto LAB_14813f89c;
    }
  }
  bVar19 = bVar18;
  bVar17 = bVar21;
  bVar21 = false;
  local_310 = local_308;
  FVar32 = local_308;
LAB_14813f89c:
  lVar29 = (**(code **)((longlong)*this->Component + 0xd8))();
  cVar22 = (**(code **)((longlong)*this->Component + 0x100))();
  if (((cVar22 == '\0') && (lVar29 != 0)) && ((*(byte *)(lVar29 + 0xf4) & 2) == 0)) {
    bVar18 = true;
  }
  else {
    bVar18 = false;
  }
  lVar29 = (**(code **)((longlong)*this->Component + 0x10))();
  local_2f0 = *(double *)(lVar29 + 0x40);
  dStack_2e8 = *(double *)(lVar29 + 0x48);
  local_2e0 = *(double *)(lVar29 + 0x50);
  local_2f8 = GetCurrentLODLevelChecked(this);
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar18) {
    (this->ParticleBoundingBox).Max.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->ParticleBoundingBox).Max.field0_0x0._s_0.Y = (double)uVar20;
    (this->ParticleBoundingBox).Max.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar10 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.X;
    dVar12 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Y;
    (this->ParticleBoundingBox).IsValid = '\0';
    dVar1 = (this->ParticleBoundingBox).Max.field0_0x0._s_0.Z;
    (this->ParticleBoundingBox).Min.field0_0x0._s_0.X = dVar10;
    (this->ParticleBoundingBox).Min.field0_0x0._s_0.Y = dVar12;
    (this->ParticleBoundingBox).Min.field0_0x0._s_0.Z = dVar1;
  }
  pUVar6 = this->SpriteTemplate;
  if (((pUVar6->LODLevels).ArrayNum < 1) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar29 = *(longlong *)(pUVar6->LODLevels).AllocatorInstance.Data;
  if ((lVar29 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("HighestLODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                          ,0x509,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar1 = __real_bfe0000000000000;
  local_2d8._8_8_ = 0;
  local_2d8._0_8_ = __real_bfe0000000000000;
  if ((bVar18) && (uVar5 = *(uint *)(lVar29 + 0x40), uVar34 = uVar36, uVar5 != 0)) {
    do {
      uVar33 = (uint)uVar34;
      uVar25 = 0;
      if ((int)uVar33 < *(int *)(lVar29 + 0x40)) {
        uVar25 = ~uVar33 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = (FObjectPtr_u_0 *)(*(longlong *)(lVar29 + 0x38) + (longlong)(int)uVar33 * 8);
      if (*(longlong *)(*(longlong *)(lVar29 + 0x38) + (longlong)(int)uVar33 * 8) != 0) {
        pUVar30 = Z_Construct_UClass_UParticleModulePivotOffset_NoRegister();
        bVar23 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar30);
        if ((bVar23) &&
           (FVar7.field0_0x0 = (FObjectPtr_u_0)this_00->Handle, FVar7.field0_0x0 != (UObject *)0x0))
        {
          auVar3 = *(undefined1 (*) [16])((longlong)FVar7.field0_0x0 + 0x30);
          dVar1 = auVar3._8_8_ - __real_3fe0000000000000;
          local_2d8._8_4_ = auVar3._8_4_;
          local_2d8._0_8_ = auVar3._0_8_ - __real_3fe0000000000000;
          local_2d8._12_4_ = auVar3._12_4_;
          break;
        }
      }
      uVar34 = (ulonglong)(uVar33 + 1);
    } while (uVar33 + 1 < uVar5);
  }
  iVar26 = GetOrbitPayloadOffset(this);
  local_328 = __real_c290000000000000;
  local_338 = __real_4290000000000000;
  lVar29 = (longlong)iVar26;
  local_330 = __real_4290000000000000;
  local_340 = __real_c290000000000000;
  bVar24 = ((local_2f8->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
  if (bVar24 == 0) {
    pTVar31 = &local_218;
    local_218.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_218.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_218.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_218.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_218.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_218.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_218.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_218.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_218.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_218.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_218.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_218.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_218.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_218.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_218.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_218.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  }
  else {
    this_01 = (TTransform<double> *)(**(code **)((longlong)*this->Component + 0x20))();
    pTVar31 = UE::Math::TTransform<double>::ToMatrixWithScale(this_01,local_158);
  }
  uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_2b8 = pTVar31->M[0][0];
  dStack_2b0 = pTVar31->M[0][1];
  local_2a8 = pTVar31->M[0][2];
  dStack_2a0 = pTVar31->M[0][3];
  local_298 = pTVar31->M[1][0];
  dStack_290 = pTVar31->M[1][1];
  local_288 = pTVar31->M[1][2];
  dStack_280 = pTVar31->M[1][3];
  local_278 = pTVar31->M[2][0];
  dStack_270 = pTVar31->M[2][1];
  local_268 = pTVar31->M[2][2];
  dStack_260 = pTVar31->M[2][3];
  local_258 = pTVar31->M[3][0];
  dStack_250 = pTVar31->M[3][1];
  local_248 = pTVar31->M[3][2];
  dStack_240 = pTVar31->M[3][3];
  uVar34 = uVar36;
  dVar15 = local_338;
  dVar16 = local_328;
  dVar12 = local_338;
  dVar10 = local_328;
  if (0 < this->ActiveParticles) {
    do {
      fVar39 = __real_40c90fdb;
      pdVar35 = (double *)
                (this->ParticleData +
                (int)((uint)*(ushort *)(uVar36 + (longlong)this->ParticleIndices) *
                     this->ParticleStride));
      uVar45 = *(uint *)((longlong)pdVar35 + 0x6c);
      dVar42 = pdVar35[3];
      dVar43 = pdVar35[4];
      dVar2 = pdVar35[5];
      *(uint *)((longlong)pdVar35 + 0x6c) = uVar45 & 0xfdffffff;
      *pdVar35 = dVar42;
      pdVar35[1] = dVar43;
      pdVar35[2] = dVar2;
      if (((uVar45 >> 0x19 & 1) == 0) ||
         ((~this->SpriteTemplate->bUseLegacySpawningBehavior & 1) == 0)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if (((uVar45 >> 0x1a & 1) != 0) || (bVar23)) {
        fVar44 = *(float *)((longlong)pdVar35 + 0x3c);
      }
      else {
        if ((uVar45 >> 0x1c & 1) == 0) {
          dVar42 = (double)(param_1 * *(float *)(pdVar35 + 8)) + pdVar35[3];
          dVar43 = (double)(param_1 * *(float *)((longlong)pdVar35 + 0x44)) + pdVar35[4];
          dVar2 = (double)(param_1 * *(float *)(pdVar35 + 9)) + pdVar35[5];
        }
        fVar44 = *(float *)((longlong)pdVar35 + 0x3c);
        if ((uVar45 >> 0x1d & 1) == 0) {
          fVar44 = param_1 * *(float *)((longlong)pdVar35 + 0x5c) + fVar44;
        }
      }
      dVar13 = 0.0;
      if (bVar18) {
        if (lVar29 == -1) {
          dVar10 = (double)*(float *)((longlong)pdVar35 + 100) * dStack_2e8;
          uVar45 = SUB84((double)*(float *)(pdVar35 + 0xc) * local_2f0,0) & uVar25;
          uVar46 = (uint)((ulonglong)((double)*(float *)(pdVar35 + 0xc) * local_2f0) >> 0x20) &
                   uVar33;
          uVar37 = SUB84(dVar10,0) & uVar25;
          uVar40 = (uint)((ulonglong)dVar10 >> 0x20) & uVar33;
          if ((double)CONCAT44(uVar46,uVar45) <= (double)CONCAT44(uVar40,uVar37)) {
            uVar45 = uVar37;
            uVar46 = uVar40;
          }
          uVar37 = SUB84((double)*(float *)(pdVar35 + 0xd) * local_2e0,0) & uVar25;
          uVar40 = (uint)((ulonglong)((double)*(float *)(pdVar35 + 0xd) * local_2e0) >> 0x20) &
                   uVar33;
          if ((double)CONCAT44(uVar46,uVar45) <= (double)CONCAT44(uVar40,uVar37)) {
            uVar45 = uVar37;
            uVar46 = uVar40;
          }
          dVar13 = (double)CONCAT44(uVar46,uVar45);
        }
        else {
          fVar41 = (float)(*(uint *)(lVar29 + 0x10 + (longlong)pdVar35) & uVar5);
          fVar38 = (float)(*(uint *)(lVar29 + 0xc + (longlong)pdVar35) & uVar5);
          if (fVar41 <= fVar38) {
            fVar41 = fVar38;
          }
          fVar38 = (float)(*(uint *)(lVar29 + 0x14 + (longlong)pdVar35) & uVar5);
          if (fVar41 <= fVar38) {
            fVar41 = fVar38;
          }
          dVar13 = (double)fVar41;
        }
        dVar10 = (double)*(float *)((longlong)pdVar35 + 100) * dVar1;
        uVar45 = SUB84(dVar10,0) & uVar25;
        uVar46 = (uint)((ulonglong)dVar10 >> 0x20) & uVar33;
        uVar37 = SUB84((double)*(float *)(pdVar35 + 0xc) * (double)local_2d8._0_8_,0) & uVar25;
        uVar40 = (uint)((ulonglong)((double)*(float *)(pdVar35 + 0xc) * (double)local_2d8._0_8_) >>
                       0x20) & uVar33;
        if ((double)CONCAT44(uVar46,uVar45) <= (double)CONCAT44(uVar40,uVar37)) {
          uVar45 = uVar37;
          uVar46 = uVar40;
        }
        if ((double)CONCAT44(uVar46,uVar45) <= 0.0) {
          uVar45 = 0;
          uVar46 = 0;
        }
        dVar13 = dVar13 + (double)CONCAT44(uVar46,uVar45);
      }
      dVar10 = (this->PositionOffsetThisTick).field0_0x0._s_0.X;
      dVar43 = dVar43 + (this->PositionOffsetThisTick).field0_0x0._s_0.Y;
      dVar2 = dVar2 + (this->PositionOffsetThisTick).field0_0x0._s_0.Z;
      dVar42 = dVar42 + dVar10;
      *pdVar35 = dVar10 + *pdVar35;
      pdVar35[1] = pdVar35[1] + (this->PositionOffsetThisTick).field0_0x0._s_0.Y;
      pdVar35[2] = (this->PositionOffsetThisTick).field0_0x0._s_0.Z + pdVar35[2];
      pdVar35[3] = dVar42;
      pdVar35[4] = dVar43;
      pdVar35[5] = dVar2;
      fVar39 = FGenericPlatformMath::Fmod(fVar44,fVar39);
      *(float *)((longlong)pdVar35 + 0x3c) = fVar39;
      dVar10 = dVar16;
      dVar12 = dVar15;
      dVar14 = local_330;
      if (bVar18) {
        if (bVar24 != 0) {
          dVar12 = dVar43 * local_288;
          dVar10 = dStack_2b0 * dVar42;
          dVar14 = local_2a8 * dVar42;
          dVar42 = dVar43 * local_298 + local_2b8 * dVar42 + dVar2 * local_278 +
                   __real_3ff0000000000000 * local_258;
          dVar43 = dVar43 * dStack_290 + dVar10 + dVar2 * dStack_270 +
                   __real_3ff0000000000000 * dStack_250;
          dVar2 = dVar14 + dVar12 + dVar2 * local_268 + __real_3ff0000000000000 * local_248;
        }
        dVar10 = dVar42 + dVar13;
        if (dVar42 + dVar13 <= dVar16) {
          dVar10 = dVar16;
        }
        dVar12 = dVar42 - dVar13;
        if (dVar15 <= dVar42 - dVar13) {
          dVar12 = dVar15;
        }
        dVar15 = dVar43 - dVar13;
        if (local_338 <= dVar43 - dVar13) {
          dVar15 = local_338;
        }
        dVar16 = dVar43 + dVar13;
        if (dVar43 + dVar13 <= local_328) {
          dVar16 = local_328;
        }
        dVar42 = dVar2 + dVar13;
        if (dVar2 + dVar13 <= local_340) {
          dVar42 = local_340;
        }
        local_340 = dVar42;
        local_338 = dVar15;
        dVar14 = dVar2 - dVar13;
        local_328 = dVar16;
        if (local_330 <= dVar2 - dVar13) {
          dVar14 = local_330;
        }
      }
      local_330 = dVar14;
      uVar45 = (int)uVar34 + 1;
      uVar36 = uVar36 + 2;
      FVar32 = local_310;
      uVar34 = (ulonglong)uVar45;
      dVar15 = dVar12;
      dVar16 = dVar10;
    } while ((int)uVar45 < this->ActiveParticles);
  }
  if (bVar18) {
    local_168 = 1;
    auVar3._8_4_ = SUB84(local_338,0);
    auVar3._0_8_ = dVar12;
    auVar3._12_4_ = (int)((ulonglong)local_338 >> 0x20);
    *(undefined1 (*) [16])&(this->ParticleBoundingBox).Min.field0_0x0 = auVar3;
    auVar11._8_4_ = SUB84(dVar10,0);
    auVar11._0_8_ = local_330;
    auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->ParticleBoundingBox).Min.field0_0x0 + 0x10) = auVar11;
    auVar9._8_4_ = SUB84(local_340,0);
    auVar9._0_8_ = local_328;
    auVar9._12_4_ = (int)((ulonglong)local_340 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->ParticleBoundingBox).Max.field0_0x0 + 8) = auVar9;
    (this->ParticleBoundingBox).IsValid = 1;
    (this->ParticleBoundingBox).Pad[0] = (char)uStack_167;
    (this->ParticleBoundingBox).Pad[1] = (char)((uint7)uStack_167 >> 8);
    (this->ParticleBoundingBox).Pad[2] = (char)((uint7)uStack_167 >> 0x10);
    (this->ParticleBoundingBox).Pad[3] = (char)((uint7)uStack_167 >> 0x18);
    (this->ParticleBoundingBox).Pad[4] = (char)((uint7)uStack_167 >> 0x20);
    (this->ParticleBoundingBox).Pad[5] = (char)((uint7)uStack_167 >> 0x28);
    (this->ParticleBoundingBox).Pad[6] = (char)((uint7)uStack_167 >> 0x30);
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// UpdateOrbitData @ 148141520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FParticleEmitterInstance::UpdateOrbitData(FParticleEmitterInstance *this,float param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  UParticleEmitter *pUVar8;
  UParticleModule *pUVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  ForElementType<int> FVar20;
  FOrbitChainModuleInstancePayload *pFVar21;
  ForElementType<UE::Math::TVector<double>_> FVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  FOrbitChainModuleInstancePayload *pFVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  FOrbitChainModuleInstancePayload *pFVar30;
  undefined1 auStackY_318 [32];
  char local_2d8;
  double local_2d0;
  double dStack_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double dStack_298;
  undefined8 local_290;
  FParticleEmitterInstance *local_288;
  int local_280;
  uint local_27c;
  longlong local_278;
  UParticleLODLevel *local_270;
  FOrbitChainModuleInstancePayload *local_268;
  longlong local_260;
  uchar *local_258;
  size_t local_250;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  undefined1 local_218 [32];
  ForElementType<int> local_1f8;
  int local_1f0 [2];
  ForElementType<UE::Math::TVector<double>_> local_1e8;
  int local_120 [2];
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_288 = this;
  local_270 = GetCurrentLODLevelChecked(this);
  iVar18 = (local_270->OrbitModules).ArrayNum;
  lVar24 = (longlong)iVar18;
  if (0 < iVar18) {
    pUVar8 = this->SpriteTemplate;
    local_280 = iVar18;
    if (((pUVar8->LODLevels).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar29 = *(longlong *)(pUVar8->LODLevels).AllocatorInstance.Data;
    if ((lVar29 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("HighestLODLevel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                            ,0x6ef,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar27 = iVar18 + 1;
    local_1e8.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
    local_120[0] = 0;
    local_120[1] = 8;
    iVar16 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                       (0x18,8,iVar27,&local_1e8,local_120,local_120 + 1);
    FVar22 = (ForElementType<UE::Math::TVector<double>_>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar22 = local_1e8.SecondaryData;
    }
    local_250 = (longlong)iVar27 * 0x18;
    memset((void *)((longlong)FVar22 + (longlong)iVar16 * 0x18),0,local_250);
    local_1f8 = (ForElementType<int>)0x0;
    local_1f0[0] = 0;
    local_1f0[1] = 8;
    iVar16 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (4,4,iVar27,(ForElementType<int> *)local_218,local_1f0,local_1f0 + 1);
    FVar20 = (ForElementType<int>)local_218;
    if (local_1f8 != (ForElementType<int>)0x0) {
      FVar20 = local_1f8;
    }
    memset((void *)((longlong)FVar20 + (longlong)iVar16 * 4),0,(longlong)iVar27 * 4);
    uVar23 = 0;
    local_278 = lVar24;
    if (0 < iVar18) {
      lVar25 = 0;
      do {
        uVar28 = 0;
        if ((int)uVar23 < *(int *)(lVar29 + 0x98)) {
          uVar28 = ~uVar23 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pUVar9 = *(UParticleModule **)(*(longlong *)(lVar29 + 0x90) + lVar25 * 8);
        if ((pUVar9 == (UParticleModule *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("HighestOrbitModule",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                                ,0x6f9,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((this->SpriteTemplate == (UParticleEmitter *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("SpriteTemplate",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                                ,0x5fc,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar19 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                  ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                          *)&this->SpriteTemplate->ModuleOffsetMap,pUVar9);
        if (puVar19 == (uint *)0x0) {
          uVar28 = 0;
        }
        else {
          uVar28 = *puVar19;
        }
        uVar17 = 0;
        if ((int)uVar23 < local_1f0[0]) {
          uVar17 = ~uVar23 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar20 = (ForElementType<int>)local_218;
        if (local_1f8 != (ForElementType<int>)0x0) {
          FVar20 = local_1f8;
        }
        uVar23 = uVar23 + 1;
        *(uint *)((longlong)FVar20 + lVar25 * 4) = uVar28;
        lVar25 = lVar25 + 1;
      } while (lVar25 < lVar24);
    }
    dVar14 = _UNK_150689518;
    dVar13 = ___xmm_00000000000000003ff0000000000000;
    dVar12 = _UNK_15061cbc8;
    dVar11 = ___xmm_3ff00000000000000000000000000000;
    iVar18 = this->ActiveParticles + -1;
    local_260 = (longlong)iVar18;
    if (-1 < iVar18) {
      do {
        uVar23 = 0;
        local_258 = this->ParticleData +
                    (int)((uint)this->ParticleIndices[local_260] * this->ParticleStride);
        if ((*(uint *)(local_258 + 0x6c) & 0x4000000) == 0) {
          local_290 = 0.0;
          local_2a8 = 0.0;
          local_2c0 = 0.0;
          uVar28 = 0;
          local_268 = (FOrbitChainModuleInstancePayload *)0x0;
          lVar29 = 0;
          local_2d8 = '\0';
          local_118.M[0][0] = dVar13;
          local_118.M[0][1] = dVar14;
          local_118.M[0][2] = 0.0;
          local_118.M[0][3] = 0.0;
          local_118.M[1][0] = dVar11;
          local_118.M[1][1] = dVar12;
          local_118.M[1][2] = 0.0;
          local_118.M[1][3] = 0.0;
          local_118.M[2][0] = 0.0;
          local_118.M[2][1] = 0.0;
          local_118.M[2][2] = dVar13;
          local_118.M[2][3] = dVar14;
          local_118.M[3][0] = 0.0;
          local_118.M[3][1] = 0.0;
          local_118.M[3][2] = dVar11;
          local_118.M[3][3] = dVar12;
          _local_2a0 = ZEXT816(0);
          _local_2b8 = ZEXT816(0);
          _local_2d0 = ZEXT816(0);
          this = local_288;
          if (0 < lVar24) {
            lVar24 = 0;
            pFVar26 = (FOrbitChainModuleInstancePayload *)0x0;
            do {
              uVar17 = 0;
              if ((int)uVar28 < local_1f0[0]) {
                uVar17 = ~uVar28 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar20 = (ForElementType<int>)local_218;
              if (local_1f8 != (ForElementType<int>)0x0) {
                FVar20 = local_1f8;
              }
              iVar18 = *(int *)((longlong)FVar20 + lVar29 * 4);
              uVar17 = 0;
              if ((int)uVar28 < (local_270->OrbitModules).ArrayNum) {
                uVar17 = ~uVar28 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar25 = *(longlong *)((local_270->OrbitModules).AllocatorInstance.Data + lVar29 * 8);
              if ((lVar25 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("OrbitModule",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                                      ,0x716,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar21 = pFVar26;
              if (iVar18 != 0) {
                pFVar30 = (FOrbitChainModuleInstancePayload *)(local_258 + iVar18);
                local_27c = local_280 - 1;
                pFVar21 = pFVar30;
                if (uVar28 != local_27c) {
                  pFVar21 = pFVar26;
                }
                cVar7 = *(char *)(lVar25 + 0x38);
                if (cVar7 == '\0') {
                  if ((*(byte *)(lVar25 + 0x28) & 0x80) != 0) {
                    dStack_298 = dStack_298 + (double)(pFVar30->Offset).field0_0x0._s_0.Y;
                    local_2a0 = local_2a0 + (double)(pFVar30->Offset).field0_0x0._s_0.X;
                    local_290 = (double)local_290 + (double)(pFVar30->Offset).field0_0x0._s_0.Z;
                    dStack_2b0 = dStack_2b0 + (double)(pFVar30->Rotation).field0_0x0._s_0.Y;
                    local_2b8 = local_2b8 + (double)(pFVar30->Rotation).field0_0x0._s_0.X;
                    local_2a8 = (double)local_2a8 + (double)(pFVar30->Rotation).field0_0x0._s_0.Z;
                    dStack_2c8 = dStack_2c8 + (double)(pFVar30->RotationRate).field0_0x0._s_0.Y;
                    local_2d0 = local_2d0 + (double)(pFVar30->RotationRate).field0_0x0._s_0.X;
                    local_2c0 = (double)local_2c0 +
                                (double)(pFVar30->RotationRate).field0_0x0._s_0.Z;
                  }
                }
                else if (cVar7 == '\x01') {
                  if ((*(byte *)(lVar25 + 0x28) & 0x80) != 0) {
                    dStack_298 = dStack_298 * (double)(pFVar30->Offset).field0_0x0._s_0.Y;
                    local_2a0 = local_2a0 * (double)(pFVar30->Offset).field0_0x0._s_0.X;
                    local_290 = (double)local_290 * (double)(pFVar30->Offset).field0_0x0._s_0.Z;
                    dStack_2b0 = dStack_2b0 * (double)(pFVar30->Rotation).field0_0x0._s_0.Y;
                    local_2b8 = local_2b8 * (double)(pFVar30->Rotation).field0_0x0._s_0.X;
                    local_2a8 = (double)local_2a8 * (double)(pFVar30->Rotation).field0_0x0._s_0.Z;
                    dStack_2c8 = dStack_2c8 * (double)(pFVar30->RotationRate).field0_0x0._s_0.Y;
                    local_2d0 = local_2d0 * (double)(pFVar30->RotationRate).field0_0x0._s_0.X;
                    local_2c0 = (double)local_2c0 *
                                (double)(pFVar30->RotationRate).field0_0x0._s_0.Z;
                  }
                }
                else if (cVar7 == '\x02') {
                  if ((0 < (int)uVar28) && (local_2d8 == '\x02')) {
                    CalculateOrbitOffset
                              (local_288,local_268,(TVector<double> *)&local_2a0,
                               (TVector<double> *)&local_2b8,(TVector<double> *)&local_2d0,param_1,
                               (TVector<double> *)&local_248._s_0,&local_118);
                    uVar4 = local_248._s_0.Z;
                    uVar3 = local_248._s_0.Y;
                    uVar2 = local_248._s_0.X;
                    if (-1 < *(char *)(lVar25 + 0x28)) {
                      dStack_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                      local_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                      dStack_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                      local_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                      dStack_2c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                      local_2d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                      local_290 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    }
                    uVar17 = 0;
                    if ((int)uVar23 < local_120[0]) {
                      uVar17 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    FVar22 = (ForElementType<UE::Math::TVector<double>_>)&local_1e8;
                    if (local_1e8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0)
                    {
                      FVar22 = local_1e8.SecondaryData;
                    }
                    uVar23 = uVar23 + 1;
                    *(double *)(lVar24 + (longlong)FVar22) = (double)uVar2;
                    ((double *)(lVar24 + (longlong)FVar22))[1] = (double)uVar3;
                    *(undefined8 *)(lVar24 + 0x10 + (longlong)FVar22) = uVar4;
                    lVar24 = lVar24 + 0x18;
                  }
                  if ((*(byte *)(lVar25 + 0x28) & 0x80) != 0) {
                    uVar2 = *(undefined8 *)&(pFVar30->Rotation).field0_0x0;
                    uVar3 = *(undefined8 *)&(pFVar30->Offset).field0_0x0;
                    uVar4 = *(undefined8 *)&(pFVar30->RotationRate).field0_0x0;
                    local_290 = (undefined8)(pFVar30->Offset).field0_0x0._s_0.Z;
                    local_2a8 = (undefined8)(pFVar30->Rotation).field0_0x0._s_0.Z;
                    local_2c0 = (undefined8)(pFVar30->RotationRate).field0_0x0._s_0.Z;
                    dStack_298 = (double)(float)((ulonglong)uVar3 >> 0x20);
                    local_2a0 = (double)(float)uVar3;
                    dStack_2b0 = (double)(float)((ulonglong)uVar2 >> 0x20);
                    local_2b8 = (double)(float)uVar2;
                    dStack_2c8 = (double)(float)((ulonglong)uVar4 >> 0x20);
                    local_2d0 = (double)(float)uVar4;
                  }
                }
                if (uVar28 == local_27c) {
                  CalculateOrbitOffset
                            (local_288,pFVar30,(TVector<double> *)&local_2a0,
                             (TVector<double> *)&local_2b8,(TVector<double> *)&local_2d0,param_1,
                             (TVector<double> *)&local_230._s_0,&local_118);
                  uVar4 = local_230._s_0.Z;
                  uVar3 = local_230._s_0.Y;
                  uVar2 = local_230._s_0.X;
                  uVar17 = 0;
                  if ((int)uVar23 < local_120[0]) {
                    uVar17 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  FVar22 = (ForElementType<UE::Math::TVector<double>_>)&local_1e8;
                  if (local_1e8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
                    FVar22 = local_1e8.SecondaryData;
                  }
                  uVar23 = uVar23 + 1;
                  *(double *)(lVar24 + (longlong)FVar22) = (double)uVar2;
                  ((double *)(lVar24 + (longlong)FVar22))[1] = (double)uVar3;
                  *(undefined8 *)(lVar24 + 0x10 + (longlong)FVar22) = uVar4;
                  lVar24 = lVar24 + 0x18;
                }
                if (*(char *)(lVar25 + 0x28) < '\0') {
                  local_2d8 = *(char *)(lVar25 + 0x38);
                  local_268 = pFVar30;
                }
              }
              uVar28 = uVar28 + 1;
              lVar29 = lVar29 + 1;
              pFVar26 = pFVar21;
            } while (lVar29 < local_278);
            lVar24 = local_278;
            this = local_288;
            if (pFVar21 != (FOrbitChainModuleInstancePayload *)0x0) {
              uVar28 = 0;
              *(undefined8 *)&(pFVar21->Offset).field0_0x0 =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              (pFVar21->Offset).field0_0x0._s_0.Z =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              lVar24 = (longlong)(int)uVar23;
              if (0 < (int)uVar23) {
                lVar29 = 0;
                do {
                  uVar23 = 0;
                  if ((int)uVar28 < local_120[0]) {
                    uVar23 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  FVar22 = (ForElementType<UE::Math::TVector<double>_>)&local_1e8;
                  if (local_1e8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
                    FVar22 = local_1e8.SecondaryData;
                  }
                  uVar28 = uVar28 + 1;
                  lVar25 = lVar29 + 8;
                  dVar5 = *(double *)(lVar29 + 0x10 + (longlong)FVar22);
                  dVar6 = *(double *)(lVar29 + (longlong)FVar22);
                  lVar29 = lVar29 + 0x18;
                  fVar1 = (pFVar21->Offset).field0_0x0._s_0.Z;
                  (pFVar21->Offset).field0_0x0._s_0.Y =
                       (float)*(double *)(lVar25 + (longlong)FVar22) +
                       (pFVar21->Offset).field0_0x0._s_0.Y;
                  (pFVar21->Offset).field0_0x0._s_0.Z = (float)dVar5 + fVar1;
                  (pFVar21->Offset).field0_0x0._s_0.X =
                       (float)dVar6 + (pFVar21->Offset).field0_0x0._s_0.X;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              FVar22 = (ForElementType<UE::Math::TVector<double>_>)&local_1e8;
              if (local_1e8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
                FVar22 = local_1e8.SecondaryData;
              }
              memset((void *)FVar22,0,local_250);
              lVar24 = local_278;
              this = local_288;
            }
          }
        }
        local_260 = local_260 + -1;
      } while (-1 < local_260);
    }
    if (local_1f8 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_1f8);
    }
    if (local_1e8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FMemory::Free((void *)local_1e8.SecondaryData);
    }
  }
  return;
}

// UpdateTransforms @ 148142580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FParticleEmitterInstance::UpdateTransforms(FParticleEmitterInstance *this)

{
  UParticleModuleRequired *pUVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UParticleLODLevel *pUVar5;
  TTransform<double> *this_00;
  TRotationTranslationMatrix<double> *pTVar6;
  undefined1 auStack_258 [32];
  TRotationTranslationMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (this->SpriteTemplate == (UParticleEmitter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpriteTemplate != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0x2ad,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = GetCurrentLODLevelChecked(this);
  this_00 = (TTransform<double> *)(**(code **)((longlong)*this->Component + 0x20))();
  UE::Math::TTransform<double>::ToMatrixNoScale(this_00,&local_1b8);
  pUVar1 = (pUVar5->RequiredModule).field0_0x0.DebugPtr;
  pTVar6 = UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
                     (&local_238,&pUVar1->EmitterRotation,&pUVar1->EmitterOrigin);
  local_138.M[0][0] = *(double *)pTVar6;
  local_138.M[0][1] = *(double *)&pTVar6->field_0x8;
  local_138.M[0][2] = *(double *)&pTVar6->field_0x10;
  local_138.M[0][3] = *(double *)&pTVar6->field_0x18;
  local_138.M[1][0] = *(double *)&pTVar6->field_0x20;
  local_138.M[1][1] = *(double *)&pTVar6->field_0x28;
  local_138.M[1][2] = *(double *)&pTVar6->field_0x30;
  local_138.M[1][3] = *(double *)&pTVar6->field_0x38;
  local_138.M[2][0] = *(double *)&pTVar6->field_0x40;
  local_138.M[2][1] = *(double *)&pTVar6->field_0x48;
  local_138.M[2][2] = *(double *)&pTVar6->field_0x50;
  local_138.M[2][3] = *(double *)&pTVar6->field_0x58;
  local_138.M[3][0] = *(double *)&pTVar6->field_0x60;
  local_138.M[3][1] = *(double *)&pTVar6->field_0x68;
  local_138.M[3][2] = *(double *)&pTVar6->field_0x70;
  local_138.M[3][3] = *(double *)&pTVar6->field_0x78;
  if (((pUVar5->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    VectorMatrixMultiply(&local_b8,&local_138,&local_1b8);
    (this->EmitterToSimulation).M[0][0] = local_b8.M[0][0];
    (this->EmitterToSimulation).M[0][1] = local_b8.M[0][1];
    (this->EmitterToSimulation).M[0][2] = local_b8.M[0][2];
    (this->EmitterToSimulation).M[0][3] = local_b8.M[0][3];
    (this->EmitterToSimulation).M[1][0] = local_b8.M[1][0];
    (this->EmitterToSimulation).M[1][1] = local_b8.M[1][1];
    (this->EmitterToSimulation).M[1][2] = local_b8.M[1][2];
    (this->EmitterToSimulation).M[1][3] = local_b8.M[1][3];
    (this->EmitterToSimulation).M[2][0] = local_b8.M[2][0];
    (this->EmitterToSimulation).M[2][1] = local_b8.M[2][1];
    (this->EmitterToSimulation).M[2][2] = local_b8.M[2][2];
    (this->EmitterToSimulation).M[2][3] = local_b8.M[2][3];
    (this->EmitterToSimulation).M[3][0] = local_b8.M[3][0];
    (this->EmitterToSimulation).M[3][1] = local_b8.M[3][1];
    (this->EmitterToSimulation).M[3][2] = local_b8.M[3][2];
    (this->EmitterToSimulation).M[3][3] = local_b8.M[3][3];
    dVar3 = UE::Math::TMatrix<double>::Identity.M[0][1];
    (this->SimulationToWorld).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    (this->SimulationToWorld).M[0][1] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
    (this->SimulationToWorld).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    (this->SimulationToWorld).M[0][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[1][1];
    (this->SimulationToWorld).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    (this->SimulationToWorld).M[1][1] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
    (this->SimulationToWorld).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    (this->SimulationToWorld).M[1][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[2][1];
    (this->SimulationToWorld).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    (this->SimulationToWorld).M[2][1] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
    (this->SimulationToWorld).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    (this->SimulationToWorld).M[2][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[3][1];
    (this->SimulationToWorld).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    (this->SimulationToWorld).M[3][1] = dVar3;
    local_1b8.M[3][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
    local_1b8.M[3][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
    local_1b8.M[3][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
    local_1b8.M[3][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
  }
  else {
    (this->EmitterToSimulation).M[0][0] = local_138.M[0][0];
    (this->EmitterToSimulation).M[0][1] = local_138.M[0][1];
    (this->EmitterToSimulation).M[0][2] = local_138.M[0][2];
    (this->EmitterToSimulation).M[0][3] = local_138.M[0][3];
    (this->SimulationToWorld).M[0][0] = local_1b8.M[0][0];
    (this->SimulationToWorld).M[0][1] = local_1b8.M[0][1];
    (this->SimulationToWorld).M[0][2] = local_1b8.M[0][2];
    (this->SimulationToWorld).M[0][3] = local_1b8.M[0][3];
    (this->SimulationToWorld).M[1][0] = local_1b8.M[1][0];
    (this->SimulationToWorld).M[1][1] = local_1b8.M[1][1];
    (this->EmitterToSimulation).M[1][0] = local_138.M[1][0];
    (this->EmitterToSimulation).M[1][1] = local_138.M[1][1];
    (this->SimulationToWorld).M[1][2] = local_1b8.M[1][2];
    (this->SimulationToWorld).M[1][3] = local_1b8.M[1][3];
    (this->EmitterToSimulation).M[1][2] = local_138.M[1][2];
    (this->EmitterToSimulation).M[1][3] = local_138.M[1][3];
    (this->SimulationToWorld).M[2][0] = local_1b8.M[2][0];
    (this->SimulationToWorld).M[2][1] = local_1b8.M[2][1];
    (this->EmitterToSimulation).M[2][0] = local_138.M[2][0];
    (this->EmitterToSimulation).M[2][1] = local_138.M[2][1];
    (this->EmitterToSimulation).M[2][2] = local_138.M[2][2];
    (this->EmitterToSimulation).M[2][3] = local_138.M[2][3];
    (this->SimulationToWorld).M[2][2] = local_1b8.M[2][2];
    (this->SimulationToWorld).M[2][3] = local_1b8.M[2][3];
    (this->EmitterToSimulation).M[3][0] = local_138.M[3][0];
    (this->EmitterToSimulation).M[3][1] = local_138.M[3][1];
    (this->SimulationToWorld).M[3][0] = local_1b8.M[3][0];
    (this->SimulationToWorld).M[3][1] = local_1b8.M[3][1];
    (this->EmitterToSimulation).M[3][2] = local_138.M[3][2];
    (this->EmitterToSimulation).M[3][3] = local_138.M[3][3];
  }
  *(undefined4 *)((this->SimulationToWorld).M[3] + 2) = local_1b8.M[3][2]._0_4_;
  *(undefined4 *)((longlong)(this->SimulationToWorld).M[3] + 0x14) = local_1b8.M[3][2]._4_4_;
  *(undefined4 *)((this->SimulationToWorld).M[3] + 3) = local_1b8.M[3][3]._0_4_;
  *(undefined4 *)((longlong)(this->SimulationToWorld).M[3] + 0x1c) = local_1b8.M[3][3]._4_4_;
  return;
}

// UseLocalSpace @ 1481432c0

bool __thiscall FParticleEmitterInstance::UseLocalSpace(FParticleEmitterInstance *this)

{
  UParticleLODLevel *pUVar1;
  
  pUVar1 = GetCurrentLODLevelChecked(this);
  return ((pUVar1->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
}

