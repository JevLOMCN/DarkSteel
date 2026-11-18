// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// FPhysicsReplicationAsync @ 1482d9250

FPhysicsReplicationAsync * __thiscall
FPhysicsReplicationAsync::FPhysicsReplicationAsync(FPhysicsReplicationAsync *this)

{
  undefined8 *puVar1;
  
  this->_padding_ = (longlong)&___7IPhysicsReplicationAsync__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TSimCallbackObject_UFPhysicsReplicationAsyncInput__UFSimCallbackNoOutput_Chaos___0EAB__Chaos__6B_
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x401;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsReplicationAsync__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Chaos__TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>__
  ;
  (this->ErrorCorrectionDefault).PingExtrapolation = 0.1;
  (this->ErrorCorrectionDefault).PingLimit = 100.0;
  (this->ErrorCorrectionDefault).ErrorPerLinearDifference = 1.0;
  (this->ErrorCorrectionDefault).ErrorPerAngularDifference = 1.0;
  (this->ErrorCorrectionDefault).MaxRestoredStateError = 1.0;
  (this->ErrorCorrectionDefault).MaxLinearHardSnapDistance = 400.0;
  (this->ErrorCorrectionDefault).PositionLerp = 0.0;
  (this->ErrorCorrectionDefault).AngleLerp = 0.4;
  (this->ErrorCorrectionDefault).LinearVelocityCoefficient = 100.0;
  (this->ErrorCorrectionDefault).AngularVelocityCoefficient = 10.0;
  (this->ErrorCorrectionDefault).ErrorAccumulationSeconds = 0.5;
  (this->ErrorCorrectionDefault).ErrorAccumulationDistanceSq = 15.0;
  (this->ErrorCorrectionDefault).ErrorAccumulationSimilarity = 100.0;
  FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData(&this->SettingsCurrent);
  FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData(&this->SettingsDefault);
  *(undefined8 *)&this->ObjectToTarget = 0;
  *(undefined8 *)&(this->ObjectToTarget).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToTarget).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToTarget).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToTarget).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToTarget).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToTarget).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToTarget).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToTarget).field_0x48 = 0;
  *(undefined8 *)&this->ObjectToSettings = 0;
  *(undefined8 *)&(this->ObjectToSettings).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToSettings).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToSettings).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToSettings).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToSettings).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToSettings).field_0x48 = 0;
  (this->ResimIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResimIslands).ArrayNum = 0;
  (this->ResimIslands).ArrayMax = 0;
  (this->ResimIslandsParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResimIslandsParticles).ArrayNum = 0;
  (this->ResimIslandsParticles).ArrayMax = 0;
  (this->ParticlesInResimIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlesInResimIslands).ArrayNum = 0;
  (this->ParticlesInResimIslands).ArrayMax = 0;
  (this->ReplicatedParticleIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedParticleIDs).ArrayNum = 0;
  (this->ReplicatedParticleIDs).ArrayMax = 0;
  this->ResimOutOfBoundsCounter = 0;
  this->ResimErrorLogTimer = 0.0;
  return this;
}

// operator() @ 1482e0730

bool __thiscall
`FPhysicsReplicationAsync::PredictiveInterpolation'::__l2::<lambda_1>::operator()
          (void *this,FReplicatedPhysicsTargetAsync *param_1,bool param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = (param_1->TargetState).Flags;
  if (!param_2) goto LAB_1482e07c8;
  if ((bVar1 & 1) == 0) {
LAB_1482e07a1:
    if (((bVar1 & 4) != 0) && (*(char *)((longlong)this + 0x10) != '\0')) goto LAB_1482e07c8;
  }
  else {
    if (*(char *)((longlong)this + 0x10) != '\0') {
      Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                (*(FPBDRigidsEvolutionBase **)(*(longlong *)this + 0xbd0),
                 *(TPBDRigidParticleHandleImp<double,3,1> **)((longlong)this + 8),Sleeping);
      if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bSleepConnectedBodies != false) {
        Chaos::FPBDRigidsEvolutionGBF::ApplySleepOnConnectedParticles
                  (*(FPBDRigidsEvolutionGBF **)(*(longlong *)this + 0xbd0),
                   *(TGeometryParticleHandleImp<double,3,1> **)((longlong)this + 8));
      }
    }
    if (param_1->AccumulatedSleepSeconds <=
        PhysicsReplicationCVars::PredictiveInterpolationCVars::SleepSecondsClearTarget &&
        PhysicsReplicationCVars::PredictiveInterpolationCVars::SleepSecondsClearTarget !=
        param_1->AccumulatedSleepSeconds) goto LAB_1482e07a1;
  }
  if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bDontClearTarget == false) {
    return true;
  }
LAB_1482e07c8:
  if (param_1->bAllowTargetAltering != false) {
    fVar5 = PhysicsReplicationCVars::PredictiveInterpolationCVars::ExtrapolationMinTime /
            *(float *)((longlong)this + 0x14);
    fVar4 = PhysicsReplicationCVars::PredictiveInterpolationCVars::ExtrapolationTimeMultiplier *
            param_1->AverageReceiveInterval;
    iVar3 = -((int)ROUND(__real_bf000000 - (fVar5 + fVar5)) >> 1);
    iVar2 = -((int)ROUND(__real_bf000000 - (fVar4 + fVar4)) >> 1);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    if (param_1->TickCount <= iVar3) {
      FPhysicsReplicationAsync::ExtrapolateTarget(param_1,*(float *)((longlong)this + 0x14));
      return false;
    }
    param_1->bAllowTargetAltering = false;
  }
  return false;
}

// AddObjectToReplication @ 1482e6aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FReplicatedPhysicsTargetAsync * __thiscall
FPhysicsReplicationAsync::AddObjectToReplication
          (FPhysicsReplicationAsync *this,FPhysicsObject *param_1)

{
  int *piVar1;
  TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FReplicatedPhysicsTargetAsync *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  FParticleID *pFVar8;
  FPhysicsObject *local_res10;
  FReadPhysicsObjectInterface<1> local_res18 [8];
  int local_res20;
  FParticleID local_158;
  FPhysicsObject **local_150;
  undefined8 *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  
  local_res10 = param_1;
  if (param_1 != (FPhysicsObject *)0x0) {
    local_res18[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
    pTVar7 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle(local_res18,local_res10);
    if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar2 = &this->ReplicatedParticleIDs;
      pFVar8 = Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
                         ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                          (int)pTVar7->_padding_);
      local_158 = *pFVar8;
      pFVar8 = (FParticleID *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar8 <= &local_158) && (&local_158 < pFVar8 + (this->ReplicatedParticleIDs).ArrayMax))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FReplicatedPhysicsTargetAsync *)(*pcVar3)();
          return pFVar6;
        }
      }
      iVar5 = (this->ReplicatedParticleIDs).ArrayNum;
      piVar1 = &(this->ReplicatedParticleIDs).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ReplicatedParticleIDs).ArrayNum = iVar5 + 1;
      *(FParticleID *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_158;
    }
    local_c8 = 0;
    local_ac = 0;
    local_9c = 0;
    local_128 = 0;
    local_88 = 0;
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_150 = &local_res10;
    local_108 = ___xmm_3ff00000000000000000000000000000;
    uStack_100 = _UNK_15061cbc8;
    local_148 = &local_138;
    local_e8 = 0;
    uStack_e0 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_b8 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_b0 = 0xffffffff;
    local_138 = 0;
    uStack_130 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_a8 = 0xffffffff;
    local_a4 = 5;
    local_a0 = 0x40a00000;
    local_98 = 0;
    uStack_90 = 0;
    local_20 = 0xffffffff;
    local_58 = 0;
    uStack_50 = 0;
    TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Chaos::FPhysicsObject_const_*_const_&,FReplicatedPhysicsTargetAsync_&&>_>
              ((TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
                *)&this->ObjectToTarget,
               (TPairInitializer<Chaos::FPhysicsObject_const_*_const_&,FReplicatedPhysicsTargetAsync_&&>
                *)&local_res20,(bool *)&local_150);
    return (FReplicatedPhysicsTargetAsync *)
           (*(longlong *)&this->ObjectToTarget + (longlong)local_res20 * 0x140 + 0x10);
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8944149740426101735>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                     ,999,"PhysicsObject");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FReplicatedPhysicsTargetAsync *)(*pcVar3)();
    return pFVar6;
  }
  return (FReplicatedPhysicsTargetAsync *)0x0;
}

// ApplyPhysicsReplicationLOD @ 1482e7a90

void __thiscall
FPhysicsReplicationAsync::ApplyPhysicsReplicationLOD
          (FPhysicsReplicationAsync *this,FPhysicsObject *param_1,
          FReplicatedPhysicsTargetAsync *param_2,uint param_3)

{
  EPhysicsReplicationMode EVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  
  lVar2 = this->_padding_;
  plVar3 = *(longlong **)(lVar2 + 600);
  if (plVar3 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    if (cVar4 != '\0') {
      pcVar5 = (char *)(**(code **)(*plVar3 + 0x20))(plVar3,param_1,param_3);
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        EVar1 = pcVar5[0xc];
        param_2->RepMode = EVar1;
        if ((EVar1 == PredictiveInterpolation) &&
           ((((param_2->TargetState).Flags & 1) == 0 &&
            (iVar6 = param_2->ServerFrame - param_2->FrameOffset, iVar6 < *(int *)(pcVar5 + 8))))) {
          ExtrapolateTarget(param_2,(float)((double)(*(int *)(lVar2 + 0x328) - iVar6) *
                                           (double)this->_padding_) - *(float *)(pcVar5 + 4));
          param_2->TickCount = *(int *)(pcVar5 + 8) - iVar6;
        }
      }
    }
  }
  return;
}

// ApplyTargetStatesAsync @ 1482e9a70

void __thiscall
FPhysicsReplicationAsync::ApplyTargetStatesAsync(FPhysicsReplicationAsync *this,float param_1)

{
  EPhysicsReplicationMode EVar1;
  longlong lVar2;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *this_00;
  char cVar3;
  int iVar4;
  longlong lVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  FParticleID *pFVar7;
  uint uVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  int iVar10;
  char cVar11;
  ulonglong uVar12;
  FReplicatedPhysicsTargetAsync *pFVar13;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  FParticleID local_88;
  FParticleID local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  Chaos::FPhysicsObjectInternalInterface::GetWrite();
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
              *)&this->ObjectToTarget);
  local_90 = 0;
  stack0xffffffffffffff48 = local_78._16_16_;
  auStack_c0._0_8_ = local_78._8_8_;
  local_a8 = local_58;
  pTStack_a0 = pTStack_50;
  uVar12 = local_78._24_8_ >> 0x20;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    iVar10 = 1;
    cVar11 = '\0';
    local_98 = (TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
                *)&this->ObjectToTarget;
    do {
      this_00 = local_98;
      cVar3 = '\x01';
      uVar8 = (uint)uVar12;
      lVar2 = *(longlong *)local_78._0_8_;
      lVar5 = (longlong)(int)uVar8 * 0x140;
      pTVar6 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle
                         (local_res8,*(FPhysicsObject **)(lVar2 + lVar5));
      if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1482e9c4d:
        TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_a0,uVar8);
        if (cVar11 != '\0') {
          uVar8 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
          if (uVar8 < 4) {
            iVar4 = 1;
          }
          else {
            uVar12 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar8) && (this_00->HashSize < iVar4)) || (iVar4 < this_00->HashSize)) {
            this_00->HashSize = iVar4;
            TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
            ::Rehash(this_00);
          }
        }
      }
      else {
        pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
          pTVar9 = pTVar6;
        }
        if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pFVar7 = Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
                             ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                              (int)pTVar6->_padding_);
          local_88 = *pFVar7;
          TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_>::Remove
                    (&this->ReplicatedParticleIDs,&local_88);
          goto LAB_1482e9c4d;
        }
        pFVar13 = (FReplicatedPhysicsTargetAsync *)(lVar5 + 0x10 + *(longlong *)local_78._0_8_);
        FetchObjectSettings(this,*(FPhysicsObject **)(lVar2 + lVar5));
        ApplyPhysicsReplicationLOD(this,*(FPhysicsObject **)(lVar2 + lVar5),pFVar13,1);
        EVar1 = (&pFVar13->RepMode)[(uint)~pFVar13->WaitForServerFrame >> 0x1f];
        if (EVar1 == Default) {
          cVar3 = (**(code **)(this->_padding_ + 0x30))(this,pTVar9,pFVar13,param_1);
        }
        else if (EVar1 == PredictiveInterpolation) {
          cVar3 = (**(code **)(this->_padding_ + 0x38))(this,pTVar9,pFVar13,param_1);
        }
        else if (EVar1 == Resimulation) {
          cVar3 = (**(code **)(this->_padding_ + 0x40))(this,pTVar9,pFVar13,param_1);
        }
        pFVar13->TickCount = pFVar13->TickCount + 1;
        if (cVar3 != '\0') {
          pFVar7 = Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
                             ((TGeometryParticlesImp<double,3,0> *)pTVar9->_padding_,
                              (int)pTVar9->_padding_);
          local_80 = *pFVar7;
          TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_>::Remove
                    (&this->ReplicatedParticleIDs,&local_80);
          uVar8 = uStack_ac;
          goto LAB_1482e9c4d;
        }
      }
      uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
      uVar12 = (ulonglong)uStack_ac;
      cVar11 = local_90._1_1_;
    } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
      if (3 < uVar8) {
        uVar12 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_98->HashSize < iVar10)) || (iVar10 < local_98->HashSize)) {
        local_98->HashSize = iVar10;
        TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
        ::Rehash(local_98);
      }
    }
  }
  return;
}

// ApplyTargetStatesAsync @ 1482e9d50

void __thiscall
FPhysicsReplicationAsync::ApplyTargetStatesAsync
          (FPhysicsReplicationAsync *this,float param_1,FPhysicsRepErrorCorrectionData *param_2,
          TArray<FPhysicsRepAsyncInputData,TSizedDefaultAllocator<32>_> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001482e9d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))();
  return;
}

// CacheResimInteractions @ 1482eaae0

void __thiscall FPhysicsReplicationAsync::CacheResimInteractions(FPhysicsReplicationAsync *this)

{
  int *piVar1;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *pTVar17;
  FReadPhysicsObjectInterface<1> local_res10 [8];
  undefined1 local_res18 [8];
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *local_res20;
  undefined4 local_b8 [2];
  undefined1 local_b0 [32];
  longlong local_90;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *pTStack_88;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  if ((PhysicsReplicationCVars::ResimulationCVars::bDisableReplicationOnInteraction) &&
     ((plVar5 = *(longlong **)(this->_padding_ + 600), plVar5 == (longlong *)0x0 ||
      (cVar9 = (**(code **)(*plVar5 + 8))(), cVar9 == '\0')))) {
    lVar6 = this->_padding_;
    if (lVar6 != 0) {
      local_res20 = &this->ResimIslands;
      (this->ResimIslands).ArrayNum = 0;
      if ((this->ResimIslands).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_res20->AllocatorInstance,0,&(this->ResimIslands).ArrayMax);
      }
      pTVar2 = &this->ResimIslandsParticles;
      (this->ResimIslandsParticles).ArrayNum = 0;
      if ((this->ResimIslandsParticles).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,&(this->ResimIslandsParticles).ArrayMax);
      }
      pTVar3 = &this->ParticlesInResimIslands;
      piVar1 = &(this->ParticlesInResimIslands).ArrayMax;
      (this->ParticlesInResimIslands).ArrayNum = 0;
      if ((this->ParticlesInResimIslands).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
        local_res20 = &this->ResimIslands;
      }
      pTVar17 = &this->ResimIslands;
      lVar6 = *(longlong *)(lVar6 + 0xbd0);
      local_res10[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
      TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_b0,
                 (TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
                  *)&this->ObjectToTarget);
      local_40 = 0;
      stack0xffffffffffffff98 = local_b0._16_16_;
      local_78 = (longlong *)local_b0._0_8_;
      auStack_70._0_8_ = local_b0._8_8_;
      local_58 = local_90;
      pTStack_50 = pTStack_88;
      uVar14 = local_b0._24_8_ >> 0x20;
      uVar16 = local_b0._28_4_;
      local_48 = (TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
                  *)&this->ObjectToTarget;
      if ((int)uVar16 < *(int *)(local_b0._16_8_ + 0x18)) {
        do {
          if ((*(char *)((longlong)(int)uVar14 * 0x140 + 0xac + *local_78) == '\x02') &&
             (pTVar13 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle
                                  (local_res10,
                                   *(FPhysicsObject **)((longlong)(int)uVar16 * 0x140 + *local_78)),
             pTVar13 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
            Chaos::Private::FPBDIslandManager::FindParticleIslands
                      ((FPBDIslandManager *)(lVar6 + 0x100),pTVar13,pTVar17);
            Chaos::Private::FPBDIslandManager::FindParticlesInIslands
                      ((FPBDIslandManager *)(lVar6 + 0x100),pTVar17,pTVar2);
            pFVar15 = (pTVar2->AllocatorInstance).Data;
            iVar12 = (this->ResimIslandsParticles).ArrayNum;
            pFVar4 = pFVar15 + (longlong)iVar12 * 8;
            while( true ) {
              if ((this->ResimIslandsParticles).ArrayNum != iVar12) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              if (pFVar15 == pFVar4) break;
              local_b8[0] = *(undefined4 *)(*(longlong *)pFVar15 + 0x10);
              pFVar7 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar7 <= (FScriptContainerElement *)local_b8) &&
                  ((FScriptContainerElement *)local_b8 < pFVar7 + (longlong)*piVar1 * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar11 = (this->ParticlesInResimIslands).ArrayNum;
              if (iVar11 == *piVar1) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar3->AllocatorInstance,piVar1);
              }
              pFVar15 = pFVar15 + 8;
              (this->ParticlesInResimIslands).ArrayNum = iVar11 + 1;
              *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_b8[0]
              ;
            }
          }
          uStack_60 = uStack_60 & ~auStack_70._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
          uVar14 = (ulonglong)uStack_5c;
          pTVar17 = local_res20;
          uVar16 = uStack_5c;
        } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
        if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
          uVar16 = *(int *)&(local_48->Elements).field_0x8 -
                   *(int *)&(local_48->Elements).field_0x34;
          if (uVar16 < 4) {
            iVar12 = 1;
          }
          else {
            uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
            lVar6 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar12 = 1 << ((byte)lVar6 & 0x1f);
          }
          if (((0 < (int)uVar16) && (local_48->HashSize < iVar12)) || (iVar12 < local_48->HashSize))
          {
            local_48->HashSize = iVar12;
            TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
            ::Rehash(local_48);
          }
        }
      }
    }
  }
  else {
    piVar1 = &(this->ParticlesInResimIslands).ArrayMax;
    (this->ParticlesInResimIslands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ParticlesInResimIslands).AllocatorInstance,0,piVar1);
      return;
    }
  }
  return;
}

// CheckTargetResimValidity @ 1482ebb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPhysicsReplicationAsync::CheckTargetResimValidity
          (FPhysicsReplicationAsync *this,FReplicatedPhysicsTargetAsync *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UEnum *this_00;
  int iVar5;
  FName local_res10;
  FString local_28;
  
  if (((param_1->RepMode == Resimulation) && (this->_padding_ != 0)) &&
     (lVar2 = *(longlong *)(this->_padding_ + 0x238), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0x4e0);
    iVar5 = param_1->ServerFrame - param_1->FrameOffset;
    if ((iVar5 < iVar1) && (iVar1 - *(int *)(lVar2 + 0x4e8) <= iVar5)) {
      if ((0 < this->ResimOutOfBoundsCounter) &&
         (PhysicsReplicationCVars::ResimulationCVars::LogOutOfBoundsTimeLimit <
          this->ResimErrorLogTimer)) {
        if (4 < (byte)LogPhysics._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
        }
        this->ResimOutOfBoundsCounter = 0;
      }
    }
    else {
      if ((iVar5 < iVar1 - *(int *)(lVar2 + 0x4e8)) ||
         (PhysicsReplicationCVars::ResimulationCVars::bApplyPredictiveInterpolationWhenBehindServer)
         ) {
        param_1->RepMode = PredictiveInterpolation;
      }
      if ((this->ResimOutOfBoundsCounter == 0) && (2 < (byte)LogPhysics._0_1_)) {
        this_00 = StaticEnum<enum_EPhysicsReplicationMode>();
        if ((this_00 == (UEnum *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UEnum::GetNameByValue(this_00,(long64)&local_res10);
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      this->ResimOutOfBoundsCounter = this->ResimOutOfBoundsCounter + 1;
      this->ResimErrorLogTimer = 0.0;
    }
  }
  return;
}

// DebugDrawReplicationMode @ 1482f1d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPhysicsReplicationAsync::DebugDrawReplicationMode
          (FPhysicsReplicationAsync *this,FPhysicsRepAsyncInputData *param_1)

{
  undefined8 uVar1;
  EPhysicsReplicationMode EVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FReplicatedPhysicsTargetAsync *pFVar7;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TAABB<double,3> *pTVar8;
  TRotation<double,3> *pTVar9;
  FDebugDrawQueue *this_01;
  uint uVar10;
  EPhysicsReplicationMode *pEVar11;
  FSingleParticlePhysicsProxy *this_02;
  longlong lVar12;
  FReadPhysicsObjectInterface<1> local_res18 [8];
  FColor_u_0 local_res20 [2];
  TVector<double>_u_0 local_78;
  TQuat<double> local_58;
  TRotation<double,3> local_38;
  
  if (PhysicsReplicationCVars::DebugDrawShowRepMode != 0) {
    if (param_1->PhysicsObject == (FPhysicsObject *)0x0) {
      if (param_1->Proxy == (FSingleParticlePhysicsProxy *)0x0) {
        return;
      }
      this_02 = param_1->Proxy;
      local_res20[0] = FColor::White.field0_0x0;
      local_58.X = UE::Math::TQuat<double>::Identity.X;
      local_58.Y = UE::Math::TQuat<double>::Identity.Y;
      local_78._s_0.X = ___xmm_40240000000000004024000000000000;
      local_78._s_0.Y = _UNK_15104e4d8;
      local_78._s_0.Z = __real_4024000000000000;
      local_58.Z = UE::Math::TQuat<double>::Identity.Z;
      local_58.W = UE::Math::TQuat<double>::Identity.W;
      if (this_02 != (FSingleParticlePhysicsProxy *)0x0) {
        if (this_02->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          this_02 = (FSingleParticlePhysicsProxy *)0x0;
        }
        Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_02);
        uVar3 = (uint)this_02->Handle->_padding_;
        lVar12 = (longlong)(int)uVar3;
        lVar4 = this_02->Handle->_padding_;
        uVar10 = 0;
        if ((int)uVar3 < *(int *)(lVar4 + 0x50)) {
          uVar10 = ~uVar3 >> 0x1f;
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
        lVar4 = *(longlong *)(lVar4 + 0x48);
        local_58.X = (double)*(float *)(lVar4 + lVar12 * 0x10);
        local_58.Y = (double)*(float *)(lVar4 + 4 + lVar12 * 0x10);
        uVar1 = *(undefined8 *)(lVar4 + 8 + lVar12 * 0x10);
        local_58.Z = (double)(float)uVar1;
        local_58.W = (double)(float)((ulonglong)uVar1 >> 0x20);
        local_res20[0] = FColor::Green.field0_0x0;
      }
    }
    else {
      local_78._s_0.X = ___xmm_40240000000000004024000000000000;
      local_78._s_0.Y = _UNK_15104e4d8;
      local_res20[0] = FColor::White.field0_0x0;
      local_78._s_0.Z = __real_4024000000000000;
      local_58.Z = UE::Math::TQuat<double>::Identity.Z;
      local_58.W = UE::Math::TQuat<double>::Identity.W;
      local_58.X = UE::Math::TQuat<double>::Identity.X;
      local_58.Y = UE::Math::TQuat<double>::Identity.Y;
      pFVar7 = TMapBase<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>_>
               ::Find((TMapBase<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>_>
                       *)&this->ObjectToTarget,param_1->PhysicsObject);
      if (pFVar7 != (FReplicatedPhysicsTargetAsync *)0x0) {
        local_res18[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
        this_00 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle
                            (local_res18,param_1->PhysicsObject);
        if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar8 = Chaos::TGeometryParticleHandleImp<double,3,1>::LocalBounds(this_00);
          local_78._s_0.X =
               (*(double *)&pTVar8->MMax - *(double *)&pTVar8->MMin) * __real_3fe0000000000000;
          local_78._s_0.Z =
               (*(double *)&(pTVar8->MMax).field_0x10 - *(double *)&(pTVar8->MMin).field_0x10) *
               __real_3fe0000000000000;
          local_78._s_0.Y =
               (*(double *)&(pTVar8->MMax).field_0x8 - *(double *)&(pTVar8->MMin).field_0x8) *
               __real_3fe0000000000000;
          pTVar9 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetR(this_00,&local_38);
          local_58.X = *(double *)pTVar9;
          local_58.Y = *(double *)&pTVar9->field_0x8;
          local_58.Z = *(double *)&pTVar9->field_0x10;
          local_58.W = *(double *)&pTVar9->field_0x18;
        }
        if (pFVar7->WaitForServerFrame < 0) {
          pEVar11 = &pFVar7->RepMode;
        }
        else {
          pEVar11 = &pFVar7->RepModeOverride;
        }
        EVar2 = *pEVar11;
        local_res20[0] = FColor::Cyan.field0_0x0;
        if (((EVar2 != Default) &&
            (local_res20[0] = FColor::Yellow.field0_0x0, EVar2 != PredictiveInterpolation)) &&
           (local_res20[0] = FColor::Cyan.field0_0x0, EVar2 == Resimulation)) {
          local_res20[0] = FColor::Red.field0_0x0;
        }
      }
    }
    this_01 = Chaos::FDebugDrawQueue::GetInstance();
    Chaos::FDebugDrawQueue::DrawDebugBox
              (this_01,(TVector<double> *)param_1,(TVector<double> *)&local_78._s_0,&local_58,
               (FColor *)&local_res20[0]._s_0,false,PhysicsReplicationCVars::DebugDrawLifeTime,'\0',
               __real_3f800000);
  }
  return;
}

// DefaultReplication @ 1482f25b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPhysicsReplicationAsync::DefaultReplication
          (FPhysicsReplicationAsync *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          FReplicatedPhysicsTargetAsync *param_2,float param_3)

{
  FNetworkPhysicsSettingsDefaultReplication *pFVar1;
  float fVar2;
  ForAnyElementType FVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  ForAnyElementType FVar15;
  EObjectStateType EVar16;
  TSharedPtr<FString,1> *pTVar17;
  FString *pFVar18;
  TVector<double,3> *pTVar19;
  TRotation<double,3> *pTVar20;
  TVector<double> *pTVar21;
  TQuat<double> *pTVar22;
  bool bVar23;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  bool bVar26;
  double dVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  double dVar31;
  double extraout_XMM0_Qa;
  double dVar32;
  double dVar33;
  double dVar34;
  double extraout_XMM0_Qb;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ForAnyElementType FVar53;
  double dVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  undefined1 in_register_000012c4 [12];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  double dVar66;
  double dVar67;
  uint uVar68;
  uint uVar69;
  float fVar70;
  undefined8 uVar71;
  double dVar72;
  double dVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar77;
  double dVar78;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  float fVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  double local_328;
  FScriptContainerElement *local_320;
  FString local_318;
  double local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  FString local_298;
  double local_288;
  undefined1 local_278 [32];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_238;
  double local_228;
  double dStack_220;
  double local_218;
  TQuat<double> local_208;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined1 local_1b8;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 local_188;
  ForAnyElementType FStack_180;
  undefined1 local_178 [16];
  double local_168;
  FScriptContainerElement *local_158;
  FScriptContainerElement *pFStack_150;
  double local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_e8;
  
  auVar36._4_12_ = in_register_000012c4;
  auVar36._0_4_ = param_3;
  dVar27 = (double)this->_padding_;
  if (dVar27 == 0.0) {
    return true;
  }
  if (PhysicsReplicationCVars::ResimulationCVars::bDisableReplicationOnInteraction) {
    pFVar24 = (this->ParticlesInResimIslands).AllocatorInstance.Data;
    pFVar11 = pFVar24 + (longlong)(this->ParticlesInResimIslands).ArrayNum * 4;
    for (; pFVar24 != pFVar11; pFVar24 = pFVar24 + 4) {
      if (*(int *)pFVar24 == *(int *)&param_1->field_0x10) {
        return false;
      }
    }
  }
  local_2b8 = *(undefined1 (*) [16])&(param_2->TargetState).Quaternion;
  pFVar11 = (FScriptContainerElement *)(param_2->TargetState).Quaternion.Z;
  dVar34 = (param_2->TargetState).Quaternion.W;
  auVar4._4_8_ = unaff_XMM7_Qb;
  auVar4._0_4_ = local_2b8._4_4_;
  auVar79._0_8_ = auVar4._0_8_ << 0x20;
  auVar79._8_4_ = local_2b8._8_4_;
  auVar79._12_4_ = local_2b8._12_4_;
  FVar53.Data = local_2b8._0_8_;
  dVar58 = local_2b8._8_8_;
  uVar9 = *(undefined8 *)&(param_2->TargetState).LinVel.field_0x10;
  uStack_240 = *(undefined8 *)&(param_2->TargetState).AngVel;
  uVar71 = *(undefined8 *)&(param_2->TargetState).LinVel;
  uVar77 = *(undefined8 *)&(param_2->TargetState).LinVel.field_0x8;
  local_248 = (undefined4)uVar9;
  uStack_244 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_258 = (undefined4)uVar71;
  uStack_254 = (undefined4)((ulonglong)uVar71 >> 0x20);
  uStack_250 = (undefined4)uVar77;
  uStack_24c = (undefined4)((ulonglong)uVar77 >> 0x20);
  local_1a8 = *(double *)&(param_2->TargetState).Flags;
  uStack_1a0 = *(undefined8 *)&(param_2->TargetState).field_0x78;
  auVar73 = *(undefined1 (*) [16])&(param_2->TargetState).AngVel.field_0x8;
  auVar35 = *(undefined1 (*) [16])&(param_2->TargetState).Position;
  auVar37 = *(undefined1 (*) [16])&(param_2->TargetState).Position.field_0x10;
  fVar70 = (float)((double)FVar53.Data * (double)FVar53.Data + auVar79._8_8_ * auVar79._8_8_ +
                  (double)pFVar11 * (double)pFVar11 + dVar34 * dVar34);
  local_308 = dVar27;
  local_2a8._0_8_ = pFVar11;
  local_2a8._8_8_ = dVar34;
  local_108 = auVar73;
  if ((param_1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) ||
     (pTVar17 = Chaos::TGeometryParticleHandleImp<double,3,1>::DebugName
                          ((TGeometryParticleHandleImp<double,3,1> *)param_1),
     pTVar17->Object == (FString *)0x0)) {
    pFVar18 = ::FString::FString((FString *)local_2d8,L"");
    pFVar24 = (pFVar18->Data).AllocatorInstance.Data;
    (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar18->Data).ArrayNum = 0;
    (pFVar18->Data).ArrayMax = 0;
    if ((FScriptContainerElement *)local_2d8._0_8_ != (FScriptContainerElement *)0x0) {
      local_320 = pFVar24;
      FMemory::Free((void *)local_2d8._0_8_);
    }
    local_320 = pFVar24;
    if (param_1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_1482f279c;
    if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      bVar26 = true;
      goto LAB_1482f37ed;
    }
  }
  else {
    pTVar17 = Chaos::TGeometryParticleHandleImp<double,3,1>::DebugName
                        ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    pFVar18 = TSharedPtr<FString,1>::operator*<FString>(pTVar17);
    pFVar18 = ::FString::FString((FString *)&local_238,pFVar18);
    pFVar24 = (pFVar18->Data).AllocatorInstance.Data;
    (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar18->Data).ArrayNum = 0;
    (pFVar18->Data).ArrayMax = 0;
    local_320 = pFVar24;
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
      local_320 = pFVar24;
    }
LAB_1482f279c:
    fVar87 = __real_3f800000;
    if (__real_38d1b717 <= fVar70) {
      if ((float)((uint)(fVar70 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_38d1b717) {
        fVar70 = CharacterMovementCVars::NetPingExtrapolation;
        if (CharacterMovementCVars::NetPingExtrapolation < 0.0) {
          fVar70 = (this->ErrorCorrectionDefault).PingExtrapolation;
        }
        fVar45 = CharacterMovementCVars::NetPingLimit;
        if (CharacterMovementCVars::NetPingLimit <= 0.0) {
          fVar45 = (this->ErrorCorrectionDefault).PingLimit;
        }
        local_360 = CharacterMovementCVars::ErrorPerLinearDifference;
        if (CharacterMovementCVars::ErrorPerLinearDifference < 0.0) {
          local_360 = (this->ErrorCorrectionDefault).ErrorPerLinearDifference;
        }
        local_364 = CharacterMovementCVars::ErrorPerAngularDifference;
        if (CharacterMovementCVars::ErrorPerAngularDifference < 0.0) {
          local_364 = (this->ErrorCorrectionDefault).ErrorPerAngularDifference;
        }
        local_368 = CharacterMovementCVars::MaxRestoredStateError;
        if (CharacterMovementCVars::MaxRestoredStateError < 0.0) {
          local_368 = (this->ErrorCorrectionDefault).MaxRestoredStateError;
        }
        local_350 = CharacterMovementCVars::ErrorAccumulationSeconds;
        if (CharacterMovementCVars::ErrorAccumulationSeconds < 0.0) {
          local_350 = (this->ErrorCorrectionDefault).ErrorAccumulationSeconds;
        }
        local_35c = CharacterMovementCVars::ErrorAccumulationDistanceSq;
        if (CharacterMovementCVars::ErrorAccumulationDistanceSq < 0.0) {
          local_35c = (this->ErrorCorrectionDefault).ErrorAccumulationDistanceSq;
        }
        local_358 = CharacterMovementCVars::ErrorAccumulationSimilarity;
        if (CharacterMovementCVars::ErrorAccumulationSimilarity < 0.0) {
          local_358 = (this->ErrorCorrectionDefault).ErrorAccumulationSimilarity;
        }
        local_344 = CharacterMovementCVars::PositionLerp;
        if (CharacterMovementCVars::PositionLerp < 0.0) {
          local_344 = (this->ErrorCorrectionDefault).PositionLerp;
        }
        local_34c = CharacterMovementCVars::LinearVelocityCoefficient;
        if (CharacterMovementCVars::LinearVelocityCoefficient < 0.0) {
          local_34c = (this->ErrorCorrectionDefault).LinearVelocityCoefficient;
        }
        local_340 = CharacterMovementCVars::AngleLerp;
        if (CharacterMovementCVars::AngleLerp < 0.0) {
          local_340 = (this->ErrorCorrectionDefault).AngleLerp;
        }
        local_348 = CharacterMovementCVars::AngularVelocityCoefficient;
        if (CharacterMovementCVars::AngularVelocityCoefficient < 0.0) {
          local_348 = (this->ErrorCorrectionDefault).AngularVelocityCoefficient;
        }
        fVar2 = CharacterMovementCVars::MaxLinearHardSnapDistance;
        if (CharacterMovementCVars::MaxLinearHardSnapDistance < 0.0) {
          fVar2 = (this->ErrorCorrectionDefault).MaxLinearHardSnapDistance;
        }
        if ((this->SettingsCurrent).DefaultReplicationSettings.bOverrideMaxLinearHardSnapDistance !=
            0) {
          fVar2 = (this->SettingsCurrent).DefaultReplicationSettings.MaxLinearHardSnapDistance;
        }
        local_218 = 0.0;
        local_208.Z = ___xmm_3ff00000000000000000000000000000;
        local_208.W = _UNK_15061cbc8;
        local_228 = 0.0;
        dStack_220 = 0.0;
        local_208.X = 0.0;
        local_208.Y = 0.0;
        local_1b8 = 0;
        pTVar19 = Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        local_228 = *(double *)pTVar19;
        dStack_220 = *(double *)&pTVar19->field_0x8;
        local_218 = *(double *)&pTVar19->field_0x10;
        pTVar20 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
                            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                             (TRotation<double,3> *)local_278);
        local_208.X = *(double *)pTVar20;
        local_208.Y = *(double *)&pTVar20->field_0x8;
        local_208.Z = *(double *)&pTVar20->field_0x10;
        local_208.W = *(double *)&pTVar20->field_0x18;
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                   (TVector<double,3> *)&local_338,*(int *)&param_1->field_0x8);
        local_1d0 = local_338;
        dStack_1c8 = uStack_330;
        local_1c0 = local_328;
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                   (TVector<double,3> *)&local_338,*(int *)&param_1->field_0x8);
        local_1d8 = local_328;
        fVar65 = this->LatencyOneWay;
        if (fVar45 <= this->LatencyOneWay) {
          fVar65 = fVar45;
        }
        auVar14._8_4_ = uStack_250;
        auVar14._0_8_ = CONCAT44(uStack_254,local_258);
        auVar14._12_4_ = uStack_24c;
        local_1e8 = local_338;
        dStack_1e0 = uStack_330;
        auVar5._4_8_ = auVar36._8_8_;
        auVar5._0_4_ = uStack_254;
        auVar60._0_8_ = auVar5._0_8_ << 0x20;
        auVar60._8_4_ = uStack_250;
        auVar60._12_4_ = uStack_24c;
        local_158 = auVar60._8_8_;
        pFStack_150 = auVar14._8_8_;
        if (fVar65 <= 0.0) {
          fVar65 = 0.0;
        }
        local_168 = (double)(fVar65 * fVar70);
        local_198 = (double)local_158 * local_168;
        local_288 = (double)CONCAT44(uStack_254,local_258) * local_168;
        local_168 = (double)CONCAT44(uStack_244,local_248) * local_168;
        local_318.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)(auVar35._0_8_ + local_288);
        auVar6._4_8_ = pFStack_150;
        auVar6._0_4_ = uStack_244;
        auVar54._0_8_ = auVar6._0_8_ << 0x20;
        auVar54._8_4_ = (int)uStack_240;
        auVar54._12_4_ = (int)((ulonglong)uStack_240 >> 0x20);
        local_118 = auVar54._8_8_;
        local_328 = auVar37._0_8_ + local_168;
        uStack_110 = uStack_240;
        auVar7._4_8_ = pFStack_150;
        auVar7._0_4_ = auVar73._4_4_;
        auVar61._0_8_ = auVar7._0_8_ << 0x20;
        auVar61._8_4_ = auVar73._8_4_;
        auVar61._12_4_ = auVar73._12_4_;
        local_2f8 = auVar61._8_8_;
        dStack_2f0 = auVar73._8_8_;
        dVar50 = auVar73._0_8_;
        local_2d8._8_4_ = auVar35._8_4_;
        local_2d8._0_8_ = auVar35._8_8_ + local_198;
        local_2d8._12_4_ = auVar35._12_4_;
        local_238.ArrayNum = auVar37._8_4_;
        local_238.AllocatorInstance.Data = (FScriptContainerElement *)local_328;
        local_238.ArrayMax = auVar37._12_4_;
        fVar70 = (float)SQRT(local_118 * local_118 + dVar50 * dVar50 + local_2f8 * local_2f8);
        if (fVar70 <= __real_322bcc77) {
          local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar77 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
        else {
          dVar31 = (double)(fVar87 / fVar70);
          uVar9 = dVar50 * dVar31;
          uVar71 = local_2f8 * dVar31;
          uVar77 = local_118 * dVar31;
        }
        __libm_sse2_sincos_();
        dVar72 = (double)uVar71 * extraout_XMM0_Qa;
        dVar78 = (double)uVar77 * extraout_XMM0_Qa;
        dVar50 = (double)uVar9 * extraout_XMM0_Qa;
        auVar73._8_4_ = SUB84(dVar72,0);
        auVar73._0_8_ = dVar72;
        auVar73._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
        local_298.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)(local_318.Data.AllocatorInstance.Data - local_228);
        dVar31 = dVar78 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 (double)FVar53.Data * extraout_XMM0_Qb +
                 (double)pFVar11 * dVar50 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar72 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar51 = dVar78 * (double)pFVar11 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar58 * extraout_XMM0_Qb +
                 dVar34 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar73._8_8_ * (double)FVar53.Data *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar85 = (undefined4)((ulonglong)dVar51 >> 0x20);
        dVar32 = (double)local_2a8._0_8_ * extraout_XMM0_Qb;
        dVar66 = local_208.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar67 = local_208.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar33 = (double)local_2b8._0_8_ * dVar50;
        local_2a8._0_8_ = (double)local_238.AllocatorInstance.Data - local_218;
        local_2b8._0_8_ = (double)local_2d8._0_8_ - dStack_220;
        auVar35._0_8_ =
             (double)local_298.Data.AllocatorInstance.Data *
             (double)local_298.Data.AllocatorInstance.Data;
        auVar35._8_8_ = 0;
        dVar32 = dVar78 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar32 + dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar72 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar50 = dVar78 * (double)FVar53.Data *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 (double)local_2a8._8_8_ * extraout_XMM0_Qb +
                 (double)local_2b8._8_8_ * dVar50 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar72 * (double)pFVar11 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar86 = SUB84(dVar50,0);
        uVar83 = (undefined4)((ulonglong)dVar50 >> 0x20);
        dVar78 = local_208.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar76 = local_208.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        auVar55._0_8_ =
             (double)local_2b8._0_8_ * (double)local_2b8._0_8_ + auVar35._0_8_ +
             (double)local_2a8._0_8_ * (double)local_2a8._0_8_;
        auVar55._8_8_ = 0;
        auVar62._8_4_ = uVar86;
        auVar62._0_8_ = dVar32;
        auVar62._12_4_ = uVar83;
        local_138._8_4_ = SUB84(dVar51,0);
        local_138._0_8_ = dVar31;
        local_138._12_4_ = uVar85;
        local_128._8_4_ = uVar86;
        local_128._0_8_ = dVar32;
        local_128._12_4_ = uVar83;
        dVar72 = auVar62._8_8_;
        auVar36 = sqrtpd(auVar35,auVar55);
        auVar56._8_4_ = SUB84(dVar76,0);
        auVar56._0_8_ = dVar78;
        auVar56._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
        fVar70 = (float)auVar36._0_8_;
        local_188 = (FScriptContainerElement *)
                    (dVar31 * dVar67 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]);
        FStack_180.Data =
             (FScriptContainerElement *)
             (dVar31 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]);
        auVar47._8_4_ = SUB84(dVar51,0);
        auVar47._0_8_ = dVar51;
        auVar47._12_4_ = uVar85;
        auVar37._8_4_ = uVar86;
        auVar37._0_8_ = dVar72;
        auVar37._12_4_ = uVar83;
        auVar38._8_4_ = SUB84(dVar32,0);
        auVar38._0_8_ = dVar32;
        auVar38._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        dVar33 = auVar38._8_8_ * dVar78 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar34 = (double)local_188 + dVar72 * dVar78 +
                 dVar51 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar32 * auVar56._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar58 = (double)FStack_180.Data + auVar37._8_8_ * dVar76 +
                 auVar47._8_8_ * dVar67 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar33;
        auVar63._0_8_ = dVar72 * dVar66;
        auVar63._8_8_ = dVar50 * dVar67;
        dVar72 = dVar31 * auVar56._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar63._0_8_ +
                 dVar51 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar32 * dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar50 = dVar31 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 auVar63._8_8_ +
                 dVar51 * dVar76 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar32 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar8._4_8_ = dVar33;
        auVar8._0_4_ = (int)((ulonglong)dVar72 >> 0x20);
        auVar39._0_8_ = auVar8._0_8_ << 0x20;
        auVar39._8_4_ = SUB84(dVar50,0);
        auVar39._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
        dVar31 = auVar39._8_8_;
        dVar50 = __real_bff0000000000000;
        if ((__real_bff0000000000000 <= dVar31) &&
           (dVar50 = dVar31, __real_3ff0000000000000 <= dVar31)) {
          dVar50 = __real_3ff0000000000000;
        }
        auVar40._8_4_ = SUB84(dVar58,0);
        auVar40._0_8_ = dVar34;
        auVar40._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
        dVar31 = dVar72 * dVar72 + dVar34 * dVar34;
        dVar51 = auVar40._8_8_ * dVar58 + 0.0;
        auVar41._8_4_ = SUB84(dVar51,0);
        auVar41._0_8_ = dVar31;
        auVar41._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        auVar42._0_8_ = auVar41._8_8_ + dVar31;
        auVar42._8_8_ = dVar31 + dVar51;
        auVar36 = sqrtpd(auVar63,auVar42);
        uVar28 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar42._0_8_);
        uVar30 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar42._8_8_);
        auVar73 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
        uVar29 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar42._0_8_);
        auVar74._0_8_ = uVar28 & (ulonglong)(auVar73._0_8_ * dVar34);
        uVar10 = uVar30 & (ulonglong)(auVar73._8_8_ * dVar58);
        auVar74._8_4_ = (undefined4)uVar10;
        auVar74._12_4_ = (undefined4)(uVar10 >> 0x20);
        auVar57._0_4_ =
             ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
        auVar57._4_4_ =
             ~(uint)(uVar28 >> 0x20) &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
        auVar57._8_4_ =
             ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
        auVar57._12_4_ =
             ~(uint)(uVar30 >> 0x20) &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
        local_178 = auVar74 | auVar57;
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
        local_e8 = (double)(CONCAT44(~(uint)(uVar29 >> 0x20) &
                                     (uint)((ulonglong)
                                            (double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                           0x20),
                                     ~(uint)uVar29 &
                                     SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0))
                           | uVar29 & (ulonglong)(auVar36._0_8_ * dVar72));
        dVar34 = acos(dVar50);
        for (fVar87 = (float)(dVar34 + dVar34); __real_40490fdb < fVar87;
            fVar87 = fVar87 + __real_c0c90fdb) {
        }
        for (; fVar87 < __real_c0490fdb; fVar87 = fVar87 + __real_40c90fdb) {
        }
        fVar87 = fVar87 * __real_42652ee0;
        uVar10 = (ulonglong)local_1a8 & 1;
        Chaos::TPBDRigidParticleHandleImp<double,3,1>::Sleeping(param_1);
        FVar53.Data = local_318.Data.AllocatorInstance.Data;
        uVar83 = local_318.Data.AllocatorInstance.Data._0_4_;
        uVar84 = local_318.Data.AllocatorInstance.Data._4_4_;
        uVar85 = local_2d8._0_4_;
        uVar86 = local_2d8._4_4_;
        fVar45 = (float)((uint)fVar87 & __xmm_7fffffff7fffffff7fffffff7fffffff) * local_364 +
                 fVar70 * local_360;
        local_188 = local_318.Data.AllocatorInstance.Data;
        FStack_180.Data = local_2d8._0_8_;
        FVar15.Data = FStack_180.Data;
        bVar26 = fVar45 < local_368;
        if (local_368 <= fVar45) {
          dVar34 = (param_2->PrevPos).field0_0x0._s_0.X;
          dVar58 = (param_2->PrevPos).field0_0x0._s_0.Y;
          FVar3.Data = (FScriptContainerElement *)
                       ((param_2->PrevPosTarget).field0_0x0._s_0.X - dVar34);
          dVar50 = (param_2->PrevPos).field0_0x0._s_0.Z;
          dVar31 = (param_2->PrevPosTarget).field0_0x0._s_0.Y - dVar58;
          dVar51 = (param_2->PrevPosTarget).field0_0x0._s_0.Z - dVar50;
          local_1a8 = __real_3e45798ee0000000;
          uStack_1a0 = 0;
          local_2d8._8_8_ = dVar31;
          local_2d8._0_8_ = FVar3.Data;
          local_2d8._16_8_ = dVar51;
          pTVar21 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)local_2d8,(TVector<double> *)local_278,
                               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
          dVar33 = (double)FVar15.Data - dStack_220;
          dVar32 = (double)local_318.Data.AllocatorInstance.Data - local_228;
          if ((local_35c <=
               (float)((dStack_220 - dVar58) * (pTVar21->field0_0x0)._s_0.Y +
                       (local_228 - dVar34) * (pTVar21->field0_0x0)._s_0.X +
                      (local_218 - dVar50) * (pTVar21->field0_0x0)._s_0.Z)) ||
             ((float)(dVar33 * dVar31 + dVar32 * (double)FVar3.Data +
                     ((double)local_238.AllocatorInstance.Data - local_218) * dVar51) <= local_358))
          {
            fVar45 = param_2->AccumulatedErrorSeconds - param_3;
            if (fVar45 <= 0.0) {
              fVar45 = 0.0;
            }
          }
          else {
            fVar45 = param_3 + param_2->AccumulatedErrorSeconds;
          }
          param_2->AccumulatedErrorSeconds = fVar45;
          if (((fVar2 < fVar70) || (local_350 < fVar45)) ||
             (CharacterMovementCVars::AlwaysHardSnap != 0)) {
            uVar81 = local_248;
            uVar82 = uStack_244;
            uVar88 = local_258;
            uVar89 = uStack_254;
            uVar90 = uStack_250;
            uVar91 = uStack_24c;
            if (PhysicsReplicationCVars::LogPhysicsReplicationHardSnaps != 0) {
              if (2 < (byte)LogTemp._0_1_) {
                Chaos::TPBDRigidParticleHandleImp<double,3,1>::Sleeping(param_1);
                ::FString::PrintfImpl((FString *)local_2d8,L"X=%3.3f Y=%3.3f Z=%3.3f");
                uVar82 = uStack_244;
                uVar81 = local_248;
                uVar91 = uStack_24c;
                uVar90 = uStack_250;
                uVar89 = uStack_254;
                uVar88 = local_258;
                ::FString::PrintfImpl(&local_318,L"X=%3.3f Y=%3.3f Z=%3.3f");
                ::FString::PrintfImpl(&local_298,L"X=%3.3f Y=%3.3f Z=%3.3f");
                ::FString::PrintfImpl((FString *)local_2b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
                ::FString::PrintfImpl((FString *)local_2a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
                if ((FScriptContainerElement *)local_2a8._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_2a8._0_8_);
                }
                if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_2b8._0_8_);
                }
                if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_298.Data.AllocatorInstance.Data);
                }
                if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_318.Data.AllocatorInstance.Data);
                }
                dVar27 = local_308;
                if ((FScriptContainerElement *)local_2d8._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_2d8._0_8_);
                  dVar27 = local_308;
                }
              }
              if (fVar70 <= fVar2) {
                if (2 < (byte)LogTemp._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)&PTR_u_Hard_snap_due_t_151a7d6c0,
                             (FLogCategoryBase *)&LogTemp);
                }
              }
              else if (2 < (byte)LogTemp._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
              }
            }
            dVar34 = local_328;
            param_2->AccumulatedErrorSeconds = 0.0;
            bVar26 = true;
            bVar25 = PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodies;
            if (pFVar1->bOverrideCorrectConnectedBodies != 0) {
              bVar25 = (this->SettingsCurrent).DefaultReplicationSettings.bCorrectConnectedBodies;
            }
            bVar23 = PhysicsReplicationCVars::DefaultReplicationCVars::
                     bCorrectConnectedBodiesFriction;
            if (pFVar1->bOverrideCorrectConnectedBodiesFriction != 0) {
              bVar23 = (this->SettingsCurrent).DefaultReplicationSettings.
                       bCorrectConnectedBodiesFriction;
            }
            local_278._0_16_ = local_138;
            local_278._16_16_ = local_128;
            local_158 = FVar53.Data;
            local_148 = local_328;
            pFStack_150 = FVar15.Data;
            Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
                      (*(FPBDRigidsEvolutionGBF **)((longlong)dVar27 + 0xbd0),
                       (TGeometryParticleHandleImp<double,3,1> *)param_1,
                       (TVector<double,3> *)&local_158,(TRotation<double,3> *)local_278,bVar25,
                       bVar23,&this->ReplicatedParticleIDs);
            local_338._4_4_ = uVar89;
            local_338._0_4_ = uVar88;
            uStack_330._4_4_ = uVar91;
            uStack_330._0_4_ = uVar90;
            local_328._4_4_ = uVar82;
            local_328._0_4_ = uVar81;
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&local_338);
            local_338 = local_118 * __real_3f91df46a0000000;
            uStack_330 = (double)local_108._0_8_ * __real_3f91df46a0000000;
            local_328 = local_2f8 * __real_3f91df46a0000000;
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&local_338);
          }
          else {
            local_318.Data.AllocatorInstance.Data =
                 *(FScriptContainerElement **)&(param_2->TargetState).AngVel.field_0x10;
            dVar66 = *(double *)&(param_2->TargetState).LinVel;
            dVar67 = *(double *)&(param_2->TargetState).LinVel.field_0x8;
            dVar34 = *(double *)&(param_2->TargetState).LinVel.field_0x10;
            dVar78 = *(double *)&(param_2->TargetState).AngVel;
            dVar76 = *(double *)&(param_2->TargetState).AngVel.field_0x8;
            dVar50 = (double)local_344;
            dVar72 = (double)param_3;
            local_308 = (double)fVar87;
            dVar59 = dVar32 * dVar50 + local_228;
            dVar58 = dVar50 * dVar33 + dStack_220;
            auVar64._0_8_ = (double)local_340;
            auVar64._8_8_ = 0;
            dVar50 = dVar50 * ((double)local_238.AllocatorInstance.Data - local_218) + local_218;
            dVar31 = (double)local_34c;
            dVar51 = (double)local_348;
            pTVar22 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                ((TQuat<double> *)local_278,&local_208,(TQuat<double> *)local_138,
                                 auVar64._0_8_);
            dVar32 = pTVar22->X;
            dVar33 = pTVar22->Y;
            dVar12 = pTVar22->Z;
            dVar13 = pTVar22->W;
            dVar46 = dVar12 * dVar12 + dVar32 * dVar32;
            dVar52 = dVar13 * dVar13 + dVar33 * dVar33;
            auVar43._8_4_ = SUB84(dVar52,0);
            auVar43._0_8_ = dVar46;
            auVar43._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
            auVar44._0_8_ = auVar43._8_8_ + dVar46;
            auVar44._8_8_ = dVar46 + dVar52;
            auVar36 = sqrtpd(auVar64,auVar44);
            uVar30 = -(ulonglong)(local_1a8 <= auVar44._0_8_);
            uVar29 = -(ulonglong)(local_1a8 <= auVar44._8_8_);
            auVar73 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36)
            ;
            uVar68 = (uint)(uVar30 >> 0x20);
            uVar69 = (uint)(uVar29 >> 0x20);
            auVar80._0_8_ = uVar30 & (ulonglong)(auVar73._0_8_ * dVar32);
            uVar28 = uVar29 & (ulonglong)(auVar73._8_8_ * dVar33);
            auVar80._8_4_ = (undefined4)uVar28;
            auVar80._12_4_ = (undefined4)(uVar28 >> 0x20);
            auVar48._0_4_ =
                 ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar48._4_4_ =
                 ~uVar68 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar48._8_4_ =
                 ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar48._12_4_ =
                 ~uVar69 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36)
            ;
            auVar75._0_4_ =
                 ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar75._4_4_ =
                 ~uVar68 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar75._8_4_ =
                 ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar75._12_4_ =
                 ~uVar69 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar49._0_8_ = (ulonglong)(auVar36._0_8_ * dVar12) & uVar30;
            uVar29 = (ulonglong)(auVar36._8_8_ * dVar13) & uVar29;
            auVar49._8_4_ = (undefined4)uVar29;
            auVar49._12_4_ = (undefined4)(uVar29 >> 0x20);
            local_2f8 = dVar59;
            dStack_2f0 = dVar58;
            local_2e8 = dVar50;
            Chaos::TGeometryParticleHandleImp<double,3,1>::SetX
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                       (TVector<double,3> *)&local_2f8,false);
            local_278._0_16_ = auVar80 | auVar48;
            local_278._16_16_ = auVar75 | auVar49;
            Chaos::TGeometryParticleHandleImp<double,3,1>::SetR
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                       (TRotation<double,3> *)local_278,false);
            local_2f8 = dVar31 * (double)local_298.Data.AllocatorInstance.Data * dVar72 + dVar66;
            dStack_2f0 = dVar31 * (double)local_2b8._0_8_ * dVar72 + dVar67;
            local_2e8 = dVar31 * (double)local_2a8._0_8_ * dVar72 + dVar34;
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&local_2f8);
            local_2f8 = (local_308 * (double)local_178._0_8_ * dVar51 * dVar72 + dVar78) *
                        __real_3f91df46a0000000;
            local_2e8 = (local_308 * local_e8 * dVar51 * dVar72 +
                        (double)local_318.Data.AllocatorInstance.Data) * __real_3f91df46a0000000;
            dStack_2f0 = (local_308 * (double)local_178._8_8_ * dVar51 * dVar72 + dVar76) *
                         __real_3f91df46a0000000;
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&local_2f8);
            uVar83 = (undefined4)local_188;
            uVar84 = local_188._4_4_;
            uVar85 = FStack_180.Data._0_4_;
            uVar86 = FStack_180.Data._4_4_;
            dVar34 = local_328;
          }
        }
        else {
          param_2->AccumulatedErrorSeconds = 0.0;
          dVar34 = local_328;
        }
        if ((uVar10 != 0) &&
           (EVar16 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1),
           EVar16 != Kinematic)) {
          Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                    (*(FPBDRigidsEvolutionBase **)((longlong)dVar27 + 0xbd0),param_1,Sleeping);
        }
        (param_2->PrevPos).field0_0x0._s_0.X = local_228;
        (param_2->PrevPos).field0_0x0._s_0.Y = dStack_220;
        *(undefined4 *)&(param_2->PrevPosTarget).field0_0x0 = uVar83;
        *(undefined4 *)((longlong)&(param_2->PrevPosTarget).field0_0x0 + 4) = uVar84;
        *(undefined4 *)((longlong)&(param_2->PrevPosTarget).field0_0x0 + 8) = uVar85;
        *(undefined4 *)((longlong)&(param_2->PrevPosTarget).field0_0x0 + 0xc) = uVar86;
        (param_2->PrevPos).field0_0x0._s_0.Z = local_218;
        (param_2->PrevPosTarget).field0_0x0._s_0.Z = dVar34;
        goto LAB_1482f37ed;
      }
      if (2 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
    }
    else if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      bVar26 = true;
      goto LAB_1482f37ed;
    }
  }
  bVar26 = true;
LAB_1482f37ed:
  if (local_320 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320);
  }
  return bVar26;
}

// DefaultReplication_DEPRECATED @ 1482f3880

void __thiscall
FPhysicsReplicationAsync::DefaultReplication_DEPRECATED
          (FPhysicsReplicationAsync *this,FRigidBodyHandle_Internal *param_1,
          FPhysicsRepAsyncInputData *param_2,float param_3,FPhysicsRepErrorCorrectionData *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  FRewindData *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  EObjectStateType EVar20;
  TGeometryParticleHandleImp<double,3,1> *pTVar21;
  TVector<double,3> *pTVar22;
  TQuat<double> *pTVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  longlong lVar25;
  TGeometryParticleHandleImp<double,3,1> *pTVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  double dVar45;
  double dVar46;
  uint uVar47;
  double dVar48;
  uint uVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar57;
  undefined1 auVar56 [16];
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  TVector<double,3> local_240;
  TVector<double,3> local_228;
  undefined1 local_210 [16];
  double local_200;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  TQuat<double> local_1a8;
  TVector<double,3> local_188;
  TVector<double,3> local_170;
  undefined1 local_158;
  TQuat<double> local_148;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TQuat<double> local_e8 [6];
  
  if (param_1 != (FRigidBodyHandle_Internal *)0x0) {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
    pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pTVar21 = pTVar26;
    if (1 < *(byte *)((longlong)
                      &(*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48)->_padding_
                     + 4)) {
      pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
    }
    if (pTVar21 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      local_148.X = (param_2->TargetState).Quaternion.X;
      local_148.Y = (param_2->TargetState).Quaternion.Y;
      fVar30 = param_4->AngularVelocityCoefficient;
      fVar32 = param_4->PositionLerp;
      fVar31 = param_4->AngleLerp;
      dVar11 = *(double *)&(param_2->TargetState).Position;
      dVar12 = *(double *)&(param_2->TargetState).Position.field_0x8;
      local_158 = 0;
      local_1e8 = *(double *)&(param_2->TargetState).Position.field_0x10;
      fVar33 = param_4->LinearVelocityCoefficient;
      local_148.Z = (param_2->TargetState).Quaternion.Z;
      local_148.W = (param_2->TargetState).Quaternion.W;
      local_1b8 = 0.0;
      local_1c8 = 0.0;
      dStack_1c0 = 0.0;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      pTVar22 = Chaos::TParticles<double,3>::GetX
                          ((TParticles<double,3> *)**(undefined8 **)&param_1->field_0x48,
                           *(int *)(*(undefined8 **)&param_1->field_0x48 + 1));
      local_1c8 = *(double *)pTVar22;
      dStack_1c0 = *(double *)&pTVar22->field_0x8;
      local_1b8 = *(double *)&pTVar22->field_0x10;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      uVar47 = *(uint *)(*(longlong **)&param_1->field_0x48 + 1);
      lVar25 = (longlong)(int)uVar47;
      lVar3 = **(longlong **)&param_1->field_0x48;
      uVar49 = 0;
      if ((int)uVar47 < *(int *)(lVar3 + 0x50)) {
        uVar49 = ~uVar47 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x48);
      uVar2 = *(undefined8 *)(lVar3 + 8 + lVar25 * 0x10);
      local_1a8.Y = (double)*(float *)(lVar3 + 4 + lVar25 * 0x10);
      local_1a8.X = (double)*(float *)(lVar3 + lVar25 * 0x10);
      local_1a8.Z = (double)(float)uVar2;
      local_1a8.W = (double)(float)((ulonglong)uVar2 >> 0x20);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      pTVar21 = pTVar26;
      if (*(char *)((longlong)
                    &(*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48)->_padding_ +
                   4) != '\0') {
        pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      }
      if (pTVar21 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        local_240._0_4_ = 0;
        local_240._4_4_ = 0;
        local_240._8_4_ = 0;
        local_240._12_4_ = 0;
        local_240._16_8_ = 0;
        local_240._0_8_ = 0;
        local_240._8_8_ = 0;
        local_200 = 0.0;
      }
      else {
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                  ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar21->_padding_,&local_240,
                   (int)pTVar21->_padding_);
      }
      local_170._0_4_ = local_240._0_4_;
      local_170._4_4_ = local_240._4_4_;
      local_170._8_4_ = local_240._8_4_;
      local_170._12_4_ = local_240._12_4_;
      local_170._16_8_ = local_240._16_8_;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      pTVar21 = pTVar26;
      if (*(char *)((longlong)
                    &(*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48)->_padding_ +
                   4) != '\0') {
        pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      }
      if (pTVar21 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        local_228._0_4_ = 0;
        local_228._4_4_ = 0;
        local_228._8_4_ = 0;
        local_228._12_4_ = 0;
        local_228._16_8_ = 0;
        local_228._0_8_ = 0;
        local_228._8_8_ = 0;
      }
      else {
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar21->_padding_,&local_228,
                   (int)pTVar21->_padding_);
      }
      dVar45 = local_1a8.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar48 = local_1a8.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar8 = local_1a8.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar9 = local_1a8.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar11 = dVar11 - local_1c8;
      auVar52._8_4_ = SUB84(dVar9,0);
      auVar52._0_8_ = dVar8;
      auVar52._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar51._8_4_ = SUB84(dVar48,0);
      auVar51._0_8_ = dVar45;
      auVar51._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      dVar35 = local_1e8 - local_1b8;
      auVar42._8_4_ = SUB84(local_148.Y,0);
      auVar42._0_8_ = local_148.Y;
      auVar42._12_4_ = (int)((ulonglong)local_148.Y >> 0x20);
      auVar41._0_8_ =
           local_148.Y * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      auVar41._8_8_ =
           local_148.Y * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar12 = dVar12 - dStack_1c0;
      dVar55 = local_148.X * auVar52._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_148.W * dVar45 + auVar41._0_8_ +
               local_148.Z * auVar51._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar57 = local_148.X * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
               + local_148.W * dVar48 + auVar41._8_8_ +
               local_148.Z * dVar45 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar10 = local_148.X * auVar51._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + local_148.W * dVar8
               + local_148.Y * dVar45 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               local_148.Z * auVar52._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar8 = local_148.X * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
              + local_148.W * dVar9 +
              auVar42._8_8_ * dVar48 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              local_148.Z * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar9 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar57) && (dVar9 = dVar57, __real_3ff0000000000000 <= dVar57)
         ) {
        dVar9 = __real_3ff0000000000000;
      }
      dVar48 = dVar55 * dVar55 + dVar10 * dVar10;
      dVar57 = dVar8 * dVar8 + 0.0;
      dVar45 = dVar57 + dVar48;
      dVar48 = dVar48 + dVar57;
      auVar6._8_4_ = SUB84(dVar48,0);
      auVar6._0_8_ = dVar45;
      auVar6._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar42 = sqrtpd(auVar41,auVar6);
      uVar27 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar45);
      uVar29 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar48);
      auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
      uVar28 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar45);
      auVar53._0_8_ = uVar27 & (ulonglong)(auVar52._0_8_ * dVar10);
      uVar13 = uVar29 & (ulonglong)(auVar52._8_8_ * dVar8);
      auVar53._8_4_ = (undefined4)uVar13;
      auVar53._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar39._0_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
      auVar39._4_4_ =
           ~(uint)(uVar27 >> 0x20) &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
      auVar39._8_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
      auVar39._12_4_ =
           ~(uint)(uVar29 >> 0x20) &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
      auVar53 = auVar53 | auVar39;
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
      local_200 = (double)(CONCAT44(~(uint)(uVar28 >> 0x20) &
                                    (uint)((ulonglong)
                                           (double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                          0x20),
                                    ~(uint)uVar28 &
                                    SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                          uVar28 & (ulonglong)(auVar42._0_8_ * dVar55));
      local_210 = auVar53;
      local_188._0_4_ = local_228._0_4_;
      local_188._4_4_ = local_228._4_4_;
      local_188._8_4_ = local_228._8_4_;
      local_188._12_4_ = local_228._12_4_;
      local_188._16_8_ = local_228._16_8_;
      dVar8 = acos(dVar9);
      for (fVar44 = (float)(dVar8 + dVar8); __real_40490fdb < fVar44;
          fVar44 = fVar44 + __real_c0c90fdb) {
      }
      for (; fVar44 < __real_c0490fdb; fVar44 = fVar44 + __real_40c90fdb) {
      }
      dVar57 = *(double *)&(param_2->TargetState).LinVel;
      dVar34 = (double)fVar33;
      dVar40 = (double)param_3;
      dVar45 = (double)(fVar44 * __real_42652ee0);
      dVar55 = dVar12 * dVar34 * dVar40 + *(double *)&(param_2->TargetState).LinVel.field_0x8;
      dVar14 = *(double *)&(param_2->TargetState).AngVel;
      dVar15 = *(double *)&(param_2->TargetState).AngVel.field_0x8;
      local_1e8 = dVar35 * dVar34 * dVar40 + *(double *)&(param_2->TargetState).LinVel.field_0x10;
      local_248 = *(double *)&(param_2->TargetState).AngVel.field_0x10;
      dVar8 = (double)fVar30;
      dVar9 = (double)fVar32;
      dVar10 = dVar9 * dVar11 + local_1c8;
      dVar48 = dVar45 * local_200 * dVar8 * dVar40 + local_248;
      dVar46 = dVar35 * dVar9 + local_1b8;
      auVar43._0_8_ = (double)fVar31;
      auVar43._8_8_ = 0;
      dVar50 = dVar9 * dVar12 + dStack_1c0;
      pTVar23 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          (local_e8,&local_1a8,&local_148,auVar43._0_8_);
      dVar9 = pTVar23->X;
      dVar16 = pTVar23->Y;
      dVar17 = pTVar23->Z;
      dVar18 = pTVar23->W;
      dVar35 = dVar9 * dVar9 + dVar17 * dVar17;
      dVar38 = dVar16 * dVar16 + dVar18 * dVar18;
      dVar12 = dVar38 + dVar35;
      dVar35 = dVar35 + dVar38;
      auVar7._8_4_ = SUB84(dVar35,0);
      auVar7._0_8_ = dVar12;
      auVar7._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar42 = sqrtpd(auVar43,auVar7);
      uVar28 = -(ulonglong)(__real_3e45798ee0000000 <= dVar12);
      uVar27 = -(ulonglong)(__real_3e45798ee0000000 <= dVar35);
      auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
      uVar47 = (uint)(uVar28 >> 0x20);
      uVar49 = (uint)(uVar27 >> 0x20);
      auVar54._0_8_ = uVar28 & (ulonglong)(auVar52._0_8_ * dVar9);
      uVar13 = uVar27 & (ulonglong)(auVar52._8_8_ * dVar16);
      auVar54._8_4_ = (undefined4)uVar13;
      auVar54._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar36._0_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar36._4_4_ =
           ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar36._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar36._12_4_ =
           ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar54 = auVar54 | auVar36;
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
      auVar56._0_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar56._4_4_ =
           ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar56._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar56._12_4_ =
           ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar37._0_8_ = (ulonglong)(auVar42._0_8_ * dVar17) & uVar28;
      uVar27 = (ulonglong)(auVar42._8_8_ * dVar18) & uVar27;
      auVar37._8_4_ = (undefined4)uVar27;
      auVar37._12_4_ = (undefined4)(uVar27 >> 0x20);
      auVar56 = auVar56 | auVar37;
      local_258 = dVar10;
      local_250 = dVar50;
      local_248 = dVar46;
      local_108 = auVar54;
      local_f8 = auVar56;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      pFVar4 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
      if (pFVar4 != (FRewindData *)0x0) {
        Chaos::FRewindData::MarkDirtyFromPT
                  (pFVar4,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
      }
      pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      pTVar24 = pTVar26;
      if (1 < *(byte *)((longlong)&pTVar21->_padding_ + 4)) {
        pTVar24 = pTVar21;
      }
      if ((pTVar24 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (EVar20 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24), EVar20 == Sleeping
         )) {
        Chaos::SetObjectStateHelper
                  ((IPhysicsProxyBase *)param_1,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar24,
                   Dynamic,true,true);
      }
      Chaos::TGeometryParticleHandleImp<double,3,1>::SetX
                (pTVar21,(TVector<double,3> *)&local_258,true);
      pTVar21 = pTVar26;
      if (1 < *(byte *)((longlong)
                        &(*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48)->
                         _padding_ + 4)) {
        pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      }
      if (pTVar21 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetP
                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar21,(TVector<double,3> *)&local_258
                  );
      }
      local_278 = auVar54._0_8_;
      local_268 = auVar56._0_8_;
      local_270 = auVar54._8_8_;
      local_260 = auVar56._8_8_;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
      pFVar4 = *(FRewindData **)(*(longlong *)&param_1->field_0x8 + 0x238);
      if (pFVar4 != (FRewindData *)0x0) {
        Chaos::FRewindData::MarkDirtyFromPT
                  (pFVar4,*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48);
      }
      pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      pTVar24 = pTVar26;
      if (1 < *(byte *)((longlong)&pTVar21->_padding_ + 4)) {
        pTVar24 = pTVar21;
      }
      if ((pTVar24 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (EVar20 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24), EVar20 == Sleeping
         )) {
        Chaos::SetObjectStateHelper
                  ((IPhysicsProxyBase *)param_1,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar24,
                   Dynamic,true,true);
      }
      Chaos::TGeometryParticleHandleImp<double,3,1>::SetR
                (pTVar21,(TRotation<double,3> *)&local_278,true);
      pTVar21 = pTVar26;
      if (1 < *(byte *)((longlong)
                        &(*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48)->
                         _padding_ + 4)) {
        pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
      }
      if (pTVar21 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar47 = (uint)pTVar21->_padding_;
        lVar3 = pTVar21->_padding_;
        fVar30 = (float)local_278;
        fVar32 = (float)local_270;
        uVar49 = 0;
        if ((int)uVar47 < *(int *)(lVar3 + 0x568)) {
          uVar49 = ~uVar47 >> 0x1f;
        }
        fVar31 = (float)local_268;
        fVar33 = (float)local_260;
        if ((uVar49 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x560) + (longlong)(int)uVar47 * 0x10);
        *puVar1 = CONCAT44(fVar32,fVar30);
        puVar1[1] = CONCAT44(fVar33,fVar31);
      }
      local_118 = local_1e8;
      local_128._8_4_ = SUB84(dVar55,0);
      local_128._0_8_ = dVar11 * dVar34 * dVar40 + dVar57;
      local_128._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      Chaos::FRigidBodyHandle_Internal::SetV(param_1,(TVector<double,3> *)local_128,true);
      local_1e0 = (dVar45 * auVar53._0_8_ * dVar8 * dVar40 + dVar14) * __real_3f91df46a0000000;
      local_1d8 = (dVar45 * auVar53._8_8_ * dVar8 * dVar40 + dVar15) * __real_3f91df46a0000000;
      local_1d0 = dVar48 * __real_3f91df46a0000000;
      Chaos::FRigidBodyHandle_Internal::SetW(param_1,(TVector<double,3> *)&local_1e0,true);
      if (((param_2->TargetState).Flags & 1) != 0) {
        Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
        pTVar21 = pTVar26;
        if (*(char *)((longlong)
                      &(*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48)->_padding_
                     + 4) != '\0') {
          pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
        }
        if (pTVar21 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar24 = pTVar26;
          if (1 < *(byte *)((longlong)&pTVar21->_padding_ + 4)) {
            pTVar24 = pTVar21;
          }
          if (pTVar24 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            EVar20 = Kinematic;
          }
          else {
            EVar20 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
          }
          if (EVar20 == Kinematic) {
            return;
          }
        }
        if (this->_padding_ != 0) {
          if (1 < *(byte *)((longlong)
                            &(*(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48)->
                             _padding_ + 4)) {
            pTVar26 = *(TGeometryParticleHandleImp<double,3,1> **)&param_1->field_0x48;
          }
          Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                    (*(FPBDRigidsEvolutionBase **)(this->_padding_ + 0xbd0),
                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar26,Sleeping);
        }
      }
    }
  }
  return;
}

// ExtrapolateTarget @ 148302060

void __cdecl
FPhysicsReplicationAsync::ExtrapolateTarget
          (FReplicatedPhysicsTargetAsync *param_1,int param_2,float param_3)

{
  ExtrapolateTarget(param_1,(float)param_2 * param_3);
  return;
}

// ExtrapolateTarget @ 148302080

void __cdecl
FPhysicsReplicationAsync::ExtrapolateTarget(FReplicatedPhysicsTargetAsync *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 extraout_XMM0 [16];
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  
  dVar7 = (double)param_2;
  dVar1 = *(double *)&(param_1->TargetState).LinVel.field_0x8;
  dVar2 = *(double *)&(param_1->TargetState).LinVel.field_0x10;
  dVar3 = *(double *)&(param_1->TargetState).Position.field_0x8;
  dVar4 = *(double *)&(param_1->TargetState).Position.field_0x10;
  *(double *)&(param_1->TargetState).Position =
       dVar7 * *(double *)&(param_1->TargetState).LinVel +
       *(double *)&(param_1->TargetState).Position;
  *(double *)&(param_1->TargetState).Position.field_0x8 = dVar7 * dVar1 + dVar3;
  *(double *)&(param_1->TargetState).Position.field_0x10 = dVar7 * dVar2 + dVar4;
  dVar1 = *(double *)&(param_1->TargetState).AngVel;
  dVar2 = *(double *)&(param_1->TargetState).AngVel.field_0x8;
  dVar3 = *(double *)&(param_1->TargetState).AngVel.field_0x10;
  auVar15._0_8_ = dVar1 * dVar1;
  auVar15._8_8_ = 0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar2 * dVar2 + auVar15._0_8_ + dVar3 * dVar3;
  auVar16 = sqrtpd(auVar15,auVar16);
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_322bcc77 < (float)auVar16._0_8_) {
    dVar4 = (double)(__real_3f800000 / (float)auVar16._0_8_);
    uVar8 = dVar4 * dVar1;
    uVar9 = dVar4 * dVar2;
    uVar10 = dVar4 * dVar3;
  }
  __libm_sse2_sincos_();
  dVar20 = extraout_XMM0._0_8_;
  dVar1 = dVar20 * (double)uVar9;
  dVar11 = (param_1->TargetState).Quaternion.X;
  dVar12 = (param_1->TargetState).Quaternion.Y;
  dVar7 = dVar20 * (double)uVar10;
  dVar20 = dVar20 * (double)uVar8;
  dVar13 = (param_1->TargetState).Quaternion.Z;
  dVar14 = (param_1->TargetState).Quaternion.W;
  dVar19 = extraout_XMM0._8_8_;
  auVar17._8_4_ = extraout_XMM0._8_4_;
  auVar17._0_8_ = dVar19;
  auVar17._12_4_ = extraout_XMM0._12_4_;
  auVar18._8_4_ = SUB84(dVar7,0);
  auVar18._0_8_ = dVar7;
  auVar18._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar2 = dVar20 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar19 * dVar11 +
          dVar1 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = dVar20 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar17._8_8_ * dVar12 +
          dVar1 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar18._8_8_ * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar4 = dVar20 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar19 * dVar13 +
          dVar1 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar7 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar1 = dVar20 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar19 * dVar14 +
          dVar1 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar5._8_4_ = SUB84(dVar3,0);
  auVar5._0_8_ = dVar2;
  auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  (param_1->TargetState).Quaternion.X = dVar2;
  (param_1->TargetState).Quaternion.Y = (double)auVar5._8_8_;
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = dVar4;
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  (param_1->TargetState).Quaternion.Z = dVar4;
  (param_1->TargetState).Quaternion.W = (double)auVar6._8_8_;
  return;
}

// FetchObjectSettings @ 148302290

void __thiscall
FPhysicsReplicationAsync::FetchObjectSettings
          (FPhysicsReplicationAsync *this,FPhysicsObject *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 *puVar5;
  FNetworkPhysicsSettings FVar6;
  FNetworkPhysicsSettingsData *pFVar7;
  FNetworkPhysicsSettingsData *pFVar8;
  FNetworkPhysicsSettingsData *pFVar9;
  FNetworkPhysicsSettingsData *pFVar10;
  bool bVar11;
  uint uStackX_c;
  
  pFVar9 = (FNetworkPhysicsSettingsData *)0x0;
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->ObjectToSettings).field_0x8 != *(int *)&(this->ObjectToSettings).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ObjectToSettings).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ObjectToSettings).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ObjectToSettings).field_0x48 - 1U &
                              (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar1 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToSettings);
        if ((FPhysicsObject *)*plVar3 == param_1) {
          pFVar10 = (FNetworkPhysicsSettingsData *)(plVar3 + 1);
          if (plVar3 == (longlong *)0x0) {
            pFVar10 = pFVar9;
          }
          if ((((pFVar10 != (FNetworkPhysicsSettingsData *)0x0) &&
               (pFVar10->GeneralSettings != (FNetworkPhysicsSettings)0x0)) &&
              (*(longlong *)&pFVar10->DefaultReplicationSettings != 0)) &&
             (0 < *(int *)(*(longlong *)&pFVar10->DefaultReplicationSettings + 8))) {
            pFVar7 = *(FNetworkPhysicsSettingsData **)&pFVar10->DefaultReplicationSettings;
            pFVar8 = pFVar7;
            if (pFVar7 == (FNetworkPhysicsSettingsData *)0x0) goto LAB_1483023b3;
            iVar1 = *(int *)&pFVar7->DefaultReplicationSettings;
            goto joined_r0x0001483023a0;
          }
          break;
        }
        iVar1 = (int)plVar3[3];
      } while (iVar1 != -1);
    }
  }
  FVar6 = (FNetworkPhysicsSettings)&this->SettingsDefault;
  pFVar7 = (FNetworkPhysicsSettingsData *)((ulonglong)uStackX_c << 0x20);
  pFVar10 = pFVar9;
  goto LAB_148302343;
LAB_1483023b3:
  pFVar10 = (FNetworkPhysicsSettingsData *)&DAT_00000001;
  FVar6 = (FNetworkPhysicsSettings)pFVar9;
  pFVar7 = pFVar8;
  goto LAB_148302343;
  while( true ) {
    LOCK();
    iVar2 = *(int *)&pFVar7->DefaultReplicationSettings;
    bVar11 = iVar1 == iVar2;
    if (bVar11) {
      *(int *)&pFVar7->DefaultReplicationSettings = iVar1 + 1;
      iVar2 = iVar1;
    }
    UNLOCK();
    iVar1 = iVar2;
    if (bVar11) break;
joined_r0x0001483023a0:
    pFVar8 = pFVar9;
    if (iVar1 == 0) goto LAB_1483023b3;
  }
  FVar6 = pFVar10->GeneralSettings;
  pFVar10 = (FNetworkPhysicsSettingsData *)&DAT_00000001;
LAB_148302343:
  FNetworkPhysicsSettingsData::operator=
            (&this->SettingsCurrent,(FNetworkPhysicsSettingsData *)FVar6);
  if (pFVar10 != (FNetworkPhysicsSettingsData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
    return;
  }
  return;
}

// GetFNameForStatId @ 14830a960

FName __thiscall FPhysicsReplicationAsync::GetFNameForStatId(FPhysicsReplicationAsync *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&::StaticName);
  return in_RDX;
}

// OnPhysicsObjectUnregistered_Internal @ 1483133a0

void __thiscall
FPhysicsReplicationAsync::OnPhysicsObjectUnregistered_Internal
          (FPhysicsReplicationAsync *this,FPhysicsObject *param_1)

{
  uint uVar1;
  FPhysicsObject *local_res8;
  
  RemoveObjectFromReplication((FPhysicsReplicationAsync *)&this[-1].ResimOutOfBoundsCounter,param_1)
  ;
  if (*(int *)&this->ObjectToSettings != *(int *)&(this->ObjectToSettings).field_0x2c) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<Chaos::FPhysicsObject_const_*>
              ((TSet<TTuple<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,0>,FDefaultSetAllocator>
                *)&(this->ObjectToTarget).field_0x48,uVar1 >> 0x10 ^ uVar1,&local_res8);
  }
  return;
}

// OnPostInitialize_Internal @ 1483134c0

void __thiscall FPhysicsReplicationAsync::OnPostInitialize_Internal(FPhysicsReplicationAsync *this)

{
  *(int **)(this->_padding_ + 0x250) = &this[-1].ResimOutOfBoundsCounter;
  return;
}

// OnPreSimulate_Internal @ 148314080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FPhysicsReplicationAsync::OnPreSimulate_Internal(FPhysicsReplicationAsync *this)

{
  TObjectPtr<UCurveFloat> *pTVar1;
  FPBDRigidsSolver *this_00;
  longlong lVar2;
  FRewindData *this_01;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FChaosSolversModule *pFVar11;
  IChaosSettingsProvider *pIVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  ulonglong uVar14;
  longlong lVar15;
  TOptional<FPhysicsRepErrorCorrectionData> *pTVar16;
  FSingleParticlePhysicsProxy *pFVar17;
  FPhysicsRepAsyncInputData *pFVar18;
  uint uVar19;
  FPhysicsRepAsyncInputData *pFVar20;
  undefined1 local_res10 [8];
  FReadPhysicsObjectInterface<1> local_res18 [8];
  uint local_res20;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  TVector<double>_u_0 local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
  *pTStack_78;
  
  if (CharacterMovementCVars::SkipPhysicsReplication == 0) {
    this_00 = (FPBDRigidsSolver *)this->_padding_;
    if ((this_00 == (FPBDRigidsSolver *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigidsSolver",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                           ,0x39d,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->ReplicatedParticleIDs).ArrayMax =
         (int)(float)((double)(float)(this->ReplicatedParticleIDs).ArrayMax +
                     (double)this_00->_padding_);
    dVar7 = _UNK_150689668;
    dVar6 = ___xmm_3f91df46a00000003f91df46a0000000;
    dVar5 = __real_3f91df46a0000000;
    lVar2 = this_00->_padding_;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x4e0) < *(int *)(lVar2 + 0x4e4)) {
        cVar9 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bPostResimWaitForUpdate;
        if (((uint)(this->SettingsCurrent).DefaultReplicationSettings.MaxLinearHardSnapDistance &
            0x2000) != 0) {
          cVar9 = *(char *)((longlong)
                            &(this->SettingsCurrent).PredictiveInterpolationSettings.
                             SoftSnapPosStrength + 3);
        }
        if (cVar9 == '\0') {
          return;
        }
        if (*(int *)(lVar2 + 0x4e0) + 1 != *(int *)(lVar2 + 0x4e4)) {
          return;
        }
        pTVar1 = &(this->SettingsDefault).NetworkPhysicsComponentSettings.InputDecayCurve.
                  ExternalCurve;
        TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_a0,
                   (TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
                    *)pTVar1);
        local_c0 = 0;
        stack0xffffffffffffff18 = local_a0._16_16_;
        auStack_f0._0_8_ = local_a0._8_8_;
        local_d8 = local_80;
        pTStack_d0 = pTStack_78;
        uVar14 = local_a0._24_8_ >> 0x20;
        local_c8 = (TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
                    *)pTVar1;
        if (*(int *)(local_a0._16_8_ + 0x18) <= local_a0._28_4_) {
          return;
        }
        do {
          lVar15 = (longlong)(int)uVar14 * 0x140;
          lVar2 = *(longlong *)local_a0._0_8_;
          if (*(char *)(lVar15 + 0xac + lVar2) == '\x01') {
            *(int *)(lVar15 + 0x128 + lVar2) =
                 *(int *)(lVar15 + 0x9c + lVar2) + this_00->CurrentFrame;
          }
          uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
          uVar14 = (ulonglong)uStack_dc;
        } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
        if ((char)local_c0 == '\0') {
          return;
        }
        if (local_c0._1_1_ == '\0') {
          return;
        }
        uVar19 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
        if (uVar19 < 4) {
          iVar10 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar2 & 0x1f);
        }
        if ((((int)uVar19 < 1) || (iVar10 <= local_c8->HashSize)) && (local_c8->HashSize <= iVar10))
        {
          return;
        }
        local_c8->HashSize = iVar10;
        TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
        ::Rehash(local_c8);
        return;
      }
    }
    lVar15 = this->_padding_;
    if (lVar15 != 0) {
      local_res20 = *(uint *)(lVar15 + 0x28);
      uVar14 = (ulonglong)(int)local_res20;
      pFVar18 = *(FPhysicsRepAsyncInputData **)(lVar15 + 0x20);
      pFVar20 = pFVar18 + uVar14;
      while( true ) {
        if (*(int *)(lVar15 + 0x28) != (int)uVar14) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FPhysicsRepAsyncInputData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar18 == pFVar20) break;
        if ((pFVar18->TargetState).Flags == '\0') {
          RemoveObjectFromReplication
                    ((FPhysicsReplicationAsync *)&this[-1].ResimOutOfBoundsCounter,
                     pFVar18->PhysicsObject);
          pFVar18 = pFVar18 + 1;
          uVar14 = (ulonglong)local_res20;
        }
        else {
          if ((lVar2 == 0) && (pFVar18->RepMode == Resimulation)) {
            pFVar11 = FChaosSolversModule::GetModule();
            pIVar12 = FChaosSolversModule::GetSettingsProvider(pFVar11);
            cVar9 = (**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
            if (((cVar9 == '\0') ||
                ((Chaos::ForceDisableAsyncPhysics != 0 ||
                 ((double)this_00->_padding_ <= 0.0 && (double)this_00->_padding_ != 0.0)))) ||
               (Chaos::UseAsyncInterpolation == 0)) {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<8944149740426101702>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                                 ,0x3c6,
                                 "Chaos::FPBDRigidsSolver::IsNetworkPhysicsPredictionEnabled() && RigidsSolver->IsUsingFixedDt()"
                                );
              if (bVar8) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              Chaos::FPBDRigidsSolver::EnableRewindCapture(this_00);
            }
          }
          if ((((pFVar18->PhysicsObject != (FPhysicsObject *)0x0) &&
               ((pFVar18->FrameOffset).bIsSet != false)) && (this->_padding_ != 0)) &&
             (this_01 = *(FRewindData **)(this->_padding_ + 0x238), this_01 != (FRewindData *)0x0))
          {
            local_res18[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
            pTVar13 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle
                                (local_res18,pFVar18->PhysicsObject);
            if (pTVar13 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              if (((pFVar18->FrameOffset).bIsSet == false) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              dVar4 = dVar7 * *(double *)&(pFVar18->TargetState).AngVel.field_0x8;
              local_b8._s_0.Z = *(double *)&(pFVar18->TargetState).AngVel.field_0x10 * dVar5;
              local_b8._8_4_ = SUB84(dVar4,0);
              local_b8._0_8_ = dVar6 * *(double *)&(pFVar18->TargetState).AngVel;
              local_b8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              Chaos::FRewindData::SetTargetStateAtFrame
                        (this_01,pTVar13,pFVar18->ServerFrame - (pFVar18->FrameOffset).TypedValue,
                         PrePushData,(TVector<double> *)pFVar18,&(pFVar18->TargetState).Quaternion,
                         (TVector<double> *)&(pFVar18->TargetState).LinVel,
                         (TVector<double> *)&local_b8._s_0,(bool)((pFVar18->TargetState).Flags & 1))
              ;
            }
          }
          UpdateAsyncTarget((FPhysicsReplicationAsync *)&this[-1].ResimOutOfBoundsCounter,pFVar18,
                            this_00);
          DebugDrawReplicationMode
                    ((FPhysicsReplicationAsync *)&this[-1].ResimOutOfBoundsCounter,pFVar18);
          pFVar17 = pFVar18->Proxy;
          if (pFVar17 != (FSingleParticlePhysicsProxy *)0x0) {
            if (pFVar17->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              pFVar17 = (FSingleParticlePhysicsProxy *)0x0;
            }
            pTVar16 = &pFVar18->ErrorCorrection;
            if ((pFVar18->ErrorCorrection).bIsSet == false) {
              pTVar16 = (TOptional<FPhysicsRepErrorCorrectionData> *)(lVar15 + 0x10);
            }
            (**(code **)(*(longlong *)&this[-1].ResimOutOfBoundsCounter + 0x28))
                      (&this[-1].ResimOutOfBoundsCounter,pFVar17,pFVar18,
                       (float)(double)this->_padding_,pTVar16);
          }
          pFVar18 = pFVar18 + 1;
          uVar14 = (ulonglong)local_res20;
        }
      }
    }
    pFVar11 = FChaosSolversModule::GetModule();
    pIVar12 = FChaosSolversModule::GetSettingsProvider(pFVar11);
    cVar9 = (**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
    if (cVar9 != '\0') {
      CacheResimInteractions((FPhysicsReplicationAsync *)&this[-1].ResimOutOfBoundsCounter);
    }
    (**(code **)(*(longlong *)&this[-1].ResimOutOfBoundsCounter + 0x20))
              (&this[-1].ResimOutOfBoundsCounter,(float)(double)this->_padding_);
  }
  return;
}

// PredictiveInterpolation @ 148318780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPhysicsReplicationAsync::PredictiveInterpolation
          (FPhysicsReplicationAsync *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          FReplicatedPhysicsTargetAsync *param_2,float param_3)

{
  bool *pbVar1;
  FScriptContainerElement *pFVar2;
  TRotation<float,3> TVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  double dVar12;
  EObjectStateType EVar13;
  EObjectStateType EVar14;
  undefined1 uVar15;
  bool bVar16;
  undefined1 uVar17;
  FColor FVar18;
  FDebugDrawQueue *pFVar19;
  undefined4 extraout_var;
  TVector<double,3> *pTVar20;
  TRotation<double,3> *pTVar21;
  TVector<double> *pTVar22;
  TQuat<double> *pTVar23;
  undefined4 extraout_var_00;
  FReplicatedPhysicsTargetAsync *pFVar24;
  bool bVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  bool bVar28;
  int iVar29;
  FNetworkPhysicsSettingsPredictiveInterpolation *pFVar30;
  undefined1 *puVar31;
  longlong lVar32;
  char cVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined4 uVar37;
  undefined4 uVar52;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar53;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  double dVar55;
  undefined1 auVar57 [16];
  double dVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar56;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar67;
  float fVar68;
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar79;
  undefined1 auVar78 [16];
  uint uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  undefined1 auVar88 [16];
  float fVar89;
  double dVar90;
  undefined1 auVar91 [16];
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  TVector<double>_u_0 local_2e0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  float local_2a8 [4];
  undefined1 local_298 [8];
  undefined8 uStack_290;
  undefined1 local_288 [16];
  double local_278;
  EKinematicTargetMode local_270;
  float local_268;
  float local_264;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  double local_238;
  undefined1 local_228 [8];
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  EKinematicTargetMode local_200;
  undefined1 local_1f8 [20];
  float fStack_1e4;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TQuat<double> local_198;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined1 local_148;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  TQuat<double> local_e8 [6];
  
  if ((PhysicsReplicationCVars::PredictiveInterpolationCVars::bSkipReplication) ||
     (dVar4 = (double)this->_padding_, dVar4 == 0.0)) {
    return true;
  }
  if (PhysicsReplicationCVars::ResimulationCVars::bDisableReplicationOnInteraction) {
    pFVar27 = (this->ParticlesInResimIslands).AllocatorInstance.Data;
    pFVar2 = pFVar27 + (longlong)(this->ParticlesInResimIslands).ArrayNum * 4;
    for (; pFVar27 != pFVar2; pFVar27 = pFVar27 + 4) {
      if (*(int *)pFVar27 == *(int *)&param_1->field_0x10) {
        param_2->WaitForServerFrame = *(int *)((longlong)dVar4 + 0x328) + param_2->FrameOffset;
        param_2->RepModeOverride = Resimulation;
        return false;
      }
    }
  }
  fVar89 = __real_3f800000;
  if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bDrawDebugTargets) {
    _local_258 = *(undefined1 (*) [16])&(param_2->TargetState).Position;
    iVar29 = 0x1e;
    if (param_2->TickCount < 0x1e) {
      iVar29 = param_2->TickCount;
    }
    local_248 = (double)PhysicsReplicationCVars::PredictiveInterpolationCVars::DrawDebugZOffset +
                *(double *)&(param_2->TargetState).Position.field_0x10;
    pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
    fVar68 = PhysicsReplicationCVars::DebugDrawLifeTime;
    FVar18 = FColor::MakeRandomSeededColor((int)local_2a8);
    fVar89 = __real_3f800000;
    iVar26 = -4;
    if (-4 < iVar29) {
      iVar26 = iVar29;
    }
    local_1f8._0_8_ = (undefined8)((float)iVar26 * __real_3f400000 + __real_40a00000);
    local_1f8._8_8_ = local_1f8._0_8_;
    unique0x1000341f = local_1f8._0_8_;
    Chaos::FDebugDrawQueue::DrawDebugBox
              (pFVar19,(TVector<double> *)&local_258,(TVector<double> *)local_1f8,
               &(param_2->TargetState).Quaternion,(FColor *)CONCAT44(extraout_var,FVar18.field0_0x0)
               ,false,fVar68,'\0',__real_3f800000);
  }
  EVar13 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  EVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  if (((EVar14 == Dynamic) ||
      (EVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1),
      EVar14 == Sleeping)) || (EVar13 == Sleeping)) {
    uVar17 = 1;
    uVar15 = 1;
    bVar16 = true;
    if (EVar13 != Sleeping) goto LAB_148318956;
    bVar16 = true;
    fVar68 = param_3 + param_2->AccumulatedSleepSeconds;
  }
  else {
    uVar15 = 0;
    bVar16 = false;
LAB_148318956:
    fVar68 = 0.0;
    uVar17 = uVar15;
  }
  local_1f8[0x10] = uVar17;
  param_2->AccumulatedSleepSeconds = fVar68;
  dVar69 = __real_bff0000000000000;
  fStack_1e4 = param_3;
  local_1f8[0x11] = EVar13 == Sleeping;
  local_1f8._0_8_ = dVar4;
  local_1f8._8_8_ = param_1;
  if (-1 < param_2->WaitForServerFrame) {
    bVar16 = `FPhysicsReplicationAsync::PredictiveInterpolation'::__l2::<lambda_1>::operator()
                       (local_1f8,param_2,true);
    return bVar16;
  }
  if (((PhysicsReplicationCVars::PredictiveInterpolationCVars::bEarlyOutWithVelocity == false) &&
      (dVar56 = *(double *)&(param_2->TargetState).LinVel,
      dVar87 = *(double *)&(param_2->TargetState).LinVel.field_0x8,
      dVar92 = *(double *)&(param_2->TargetState).LinVel.field_0x10,
      __real_3f1a36e2e0000000 <= dVar87 * dVar87 + dVar56 * dVar56 + dVar92 * dVar92)) ||
     (pTVar20 = Chaos::TParticles<double,3>::GetX
                          (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8),
     dVar92 = (param_2->PrevPosTarget).field0_0x0._s_0.Y - *(double *)&pTVar20->field_0x8,
     dVar56 = (param_2->PrevPosTarget).field0_0x0._s_0.Z - *(double *)&pTVar20->field_0x10,
     dVar87 = (param_2->PrevPosTarget).field0_0x0._s_0.X - *(double *)pTVar20,
     (double)PhysicsReplicationCVars::PredictiveInterpolationCVars::EarlyOutDistanceSqr <=
     dVar92 * dVar92 + dVar87 * dVar87 + dVar56 * dVar56)) {
    bVar28 = false;
  }
  else {
    bVar28 = true;
    pTVar21 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
                        ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                         (TRotation<double,3> *)local_228);
    dVar56 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * *(double *)pTVar21 *
             (param_2->TargetState).Quaternion.X *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             (param_2->TargetState).Quaternion.W *
             *(double *)&pTVar21->field_0x18 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] +
             (param_2->TargetState).Quaternion.Y *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
             *(double *)&pTVar21->field_0x8 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             *(double *)&pTVar21->field_0x10 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] *
             (param_2->TargetState).Quaternion.Z *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    if ((dVar69 <= dVar56) && (dVar69 = dVar56, __real_3ff0000000000000 <= dVar56)) {
      dVar69 = __real_3ff0000000000000;
    }
    dVar69 = acos(dVar69);
    fVar68 = FMath::UnwindRadians<float>((float)(dVar69 + dVar69));
    if ((float)((uint)(fVar68 * __real_42652ee0) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        PhysicsReplicationCVars::PredictiveInterpolationCVars::EarlyOutAngle) {
      bVar16 = `FPhysicsReplicationAsync::PredictiveInterpolation'::__l2::<lambda_1>::operator()
                         (local_1f8,param_2,true);
      return bVar16;
    }
  }
  pTVar23 = &(param_2->TargetState).Quaternion;
  puVar31 = &param_1->field_0x8;
  fVar68 = param_2->AverageReceiveInterval;
  if (param_2->ReceiveInterval != 0) {
    fVar54 = (float)param_2->ReceiveInterval;
    fVar67 = fVar89 / (fVar54 * PhysicsReplicationCVars::PredictiveInterpolationCVars::
                                AverageReceiveIntervalSmoothing);
    if (fVar89 <= fVar67) {
      fVar67 = fVar89;
    }
    if (fVar67 <= 0.0) {
      fVar67 = 0.0;
    }
    fVar68 = fVar67 * (fVar54 - fVar68) + fVar68;
  }
  param_2->AverageReceiveInterval = fVar68;
  local_1a8 = 0.0;
  local_198.Z = ___xmm_3ff00000000000000000000000000000;
  local_198.W = _UNK_15061cbc8;
  local_1b8 = 0.0;
  dStack_1b0 = 0.0;
  local_198.X = 0.0;
  local_198.Y = 0.0;
  local_148 = 0;
  pTVar20 = Chaos::TParticles<double,3>::GetX(*(TParticles<double,3> **)param_1,*(int *)puVar31);
  local_1b8 = *(double *)pTVar20;
  dStack_1b0 = *(double *)&pTVar20->field_0x8;
  local_1a8 = *(double *)&pTVar20->field_0x10;
  pTVar21 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                       (TRotation<double,3> *)local_228);
  local_198.X = *(double *)pTVar21;
  local_198.Y = *(double *)&pTVar21->field_0x8;
  local_198.Z = *(double *)&pTVar21->field_0x10;
  local_198.W = *(double *)&pTVar21->field_0x18;
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)local_298,
             *(int *)puVar31);
  local_178 = (double)local_298;
  dStack_170 = (double)uStack_290;
  local_168 = (double)local_288._0_8_;
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)local_298,
             *(int *)puVar31);
  dVar12 = __real_3e45798ee0000000;
  dVar69 = *(double *)&(param_2->TargetState).LinVel.field_0x10;
  dVar56 = *(double *)&(param_2->TargetState).AngVel;
  dVar87 = *(double *)&(param_2->TargetState).AngVel.field_0x8;
  dVar92 = *(double *)&(param_2->TargetState).AngVel.field_0x10;
  TVar3 = *(TRotation<float,3> *)&(param_2->TargetState).LinVel;
  dVar55 = TVar3._0_8_;
  local_160 = (double)local_298;
  dStack_158 = (double)uStack_290;
  local_1e0 = *(double *)&(param_2->TargetState).Position;
  dStack_1d8 = *(double *)&(param_2->TargetState).Position.field_0x8;
  local_150 = (double)local_288._0_8_;
  local_e8[0].Z = (param_2->TargetState).Quaternion.Z;
  local_e8[0].W = (param_2->TargetState).Quaternion.W;
  local_218 = *(double *)&(param_2->TargetState).Position.field_0x10;
  local_e8[0].X = pTVar23->X;
  local_e8[0].Y = (param_2->TargetState).Quaternion.Y;
  dVar53 = dVar56 * __real_3f91df46a0000000;
  dVar90 = dVar87 * __real_3f91df46a0000000;
  dVar84 = dVar92 * __real_3f91df46a0000000;
  local_2e0._s_0.Z = dVar69;
  _local_258 = (undefined1  [16])TVar3;
  local_238 = dVar69;
  local_1d0 = dVar84;
  local_1c8 = dVar90;
  local_1c0 = dVar53;
  if ((((!bVar16) &&
       (PhysicsReplicationCVars::PredictiveInterpolationCVars::bKinematicHardSnap != false)) ||
      (fVar68 = param_2->AccumulatedErrorSeconds,
      PhysicsReplicationCVars::PredictiveInterpolationCVars::ErrorAccumulationSeconds < fVar68)) ||
     (PhysicsReplicationCVars::PredictiveInterpolationCVars::bAlwaysHardSnap != false)) {
    param_2->AccumulatedErrorSeconds = 0.0;
    EVar13 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
    if (EVar13 == Kinematic) {
      local_200 = Position;
      local_228._4_4_ = (float)(param_2->PrevRotTarget).Y;
      local_228._0_4_ = (float)(param_2->PrevRotTarget).X;
      uStack_220._0_4_ = (float)(param_2->PrevRotTarget).Z;
      local_218 = (param_2->PrevPosTarget).field0_0x0._s_0.X;
      dStack_210 = (param_2->PrevPosTarget).field0_0x0._s_0.Y;
      uStack_220._4_4_ = (float)(param_2->PrevRotTarget).W;
      local_208 = (param_2->PrevPosTarget).field0_0x0._s_0.Z;
      Chaos::FPBDRigidsEvolutionGBF::SetParticleKinematicTarget
                (*(FPBDRigidsEvolutionGBF **)((longlong)dVar4 + 0xbd0),
                 (TGeometryParticleHandleImp<double,3,1> *)param_1,(FKinematicTarget *)local_228);
    }
    else {
      bVar16 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectConnectedBodies;
      if ((this->SettingsCurrent).PredictiveInterpolationSettings.bOverrideCorrectConnectedBodies !=
          0) {
        bVar16 = (this->SettingsCurrent).PredictiveInterpolationSettings.bCorrectConnectedBodies;
      }
      local_298 = (undefined1  [8])(param_2->PrevRotTarget).X;
      uStack_290 = (param_2->PrevRotTarget).Y;
      local_288._0_8_ = (param_2->PrevRotTarget).Z;
      local_288._8_8_ = (param_2->PrevRotTarget).W;
      _local_228 = *(TRotation<float,3> *)&(param_2->PrevPosTarget).field0_0x0;
      local_218 = (param_2->PrevPosTarget).field0_0x0._s_0.Z;
      Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
                (*(FPBDRigidsEvolutionGBF **)((longlong)dVar4 + 0xbd0),
                 (TGeometryParticleHandleImp<double,3,1> *)param_1,(TVector<double,3> *)local_228,
                 (TRotation<double,3> *)local_298,bVar16,true,&this->ReplicatedParticleIDs);
      _local_228 = TVar3;
      local_218 = dVar69;
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8
                 ,(TVector<double,3> *)local_228);
      uStack_290 = dVar90;
      local_298 = (undefined1  [8])dVar53;
      local_288._0_8_ = dVar84;
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8
                 ,(TVector<double,3> *)local_298);
    }
    dVar69 = *(double *)&(param_2->TargetState).LinVel.field_0x8;
    dVar4 = *(double *)&(param_2->TargetState).LinVel.field_0x10;
    (param_2->PrevLinVel).field0_0x0._s_0.X = *(double *)&(param_2->TargetState).LinVel;
    (param_2->PrevLinVel).field0_0x0._s_0.Y = dVar69;
    (param_2->PrevLinVel).field0_0x0._s_0.Z = dVar4;
    bVar16 = `FPhysicsReplicationAsync::PredictiveInterpolation'::__l2::<lambda_1>::operator()
                       (local_1f8,param_2,true);
    return bVar16;
  }
  bVar16 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bVelocityBased == false;
  auVar5._4_8_ = local_e8[0].W;
  auVar5._0_4_ = TVar3._4_4_;
  auVar57._0_8_ = auVar5._0_8_ << 0x20;
  auVar57._8_4_ = TVar3._8_4_;
  auVar57._12_4_ = TVar3._12_4_;
  local_108 = auVar57._8_8_;
  uStack_100 = TVar3._8_8_;
  if ((PhysicsReplicationCVars::PredictiveInterpolationCVars::bDisableErrorVelocityLimits != false)
     || ((auVar81._0_8_ = SQRT(dVar55 * dVar55 + local_108 * local_108 + dVar69 * dVar69),
         auVar81._8_8_ = 0,
         auVar81._0_8_ <
         (double)PhysicsReplicationCVars::PredictiveInterpolationCVars::ErrorAccLinVelMaxLimit &&
         (auVar73._0_8_ =
               (dVar87 * dVar87 + dVar56 * dVar56 + dVar92 * dVar92) * ___real_3f33f6a1d5e3be40,
         auVar73._8_8_ = 0, auVar57 = sqrtpd(auVar81,auVar73),
         auVar57._0_8_ <
         (double)PhysicsReplicationCVars::PredictiveInterpolationCVars::ErrorAccAngVelMaxLimit)))) {
    dVar69 = (double)param_3;
    dVar56 = dVar69 * (param_2->PrevLinVel).field0_0x0._s_0.X;
    dVar87 = dVar69 * (param_2->PrevLinVel).field0_0x0._s_0.Y;
    dVar69 = dVar69 * (param_2->PrevLinVel).field0_0x0._s_0.Z;
    pTVar22 = UE::Math::TVector<double>::GetSafeNormal
                        (&param_2->PrevLinVel,(TVector<double> *)local_298,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    auVar38._0_8_ =
         (local_1b8 - (param_2->PrevPos).field0_0x0._s_0.X) * (pTVar22->field0_0x0)._s_0.X;
    auVar38._8_8_ = 0;
    auVar88._0_8_ = dVar87 * dVar87 + dVar56 * dVar56 + dVar69 * dVar69;
    auVar88._8_8_ = 0;
    auVar57 = sqrtpd(auVar38,auVar88);
    fVar67 = (float)((dStack_1b0 - (param_2->PrevPos).field0_0x0._s_0.Y) *
                     (pTVar22->field0_0x0)._s_0.Y + auVar38._0_8_ +
                    (local_1a8 - (param_2->PrevPos).field0_0x0._s_0.Z) *
                    (pTVar22->field0_0x0)._s_0.Z) / (float)auVar57._0_8_;
    if (fVar89 <= fVar67) {
      fVar67 = fVar89;
    }
    if (fVar67 <= 0.0) {
      fVar67 = 0.0;
    }
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::MinExpectedDistanceCovered <= fVar67)
    {
      if (fVar68 <= 0.0) goto LAB_148318efe;
      fVar68 = fVar68 - param_3 * PhysicsReplicationCVars::PredictiveInterpolationCVars::
                                  ErrorAccumulationDecreaseMultiplier;
      if (fVar68 <= 0.0) {
        fVar68 = 0.0;
      }
    }
    else {
      fVar68 = fVar68 + param_3;
    }
    param_2->AccumulatedErrorSeconds = fVar68;
    bVar16 = true;
  }
  else {
    param_2->AccumulatedErrorSeconds = 0.0;
  }
LAB_148318efe:
  cVar33 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bDisableSoftSnap;
  if ((this->SettingsCurrent).PredictiveInterpolationSettings.bOverrideDisableSoftSnap != 0) {
    cVar33 = (this->SettingsCurrent).PredictiveInterpolationSettings.bDisableSoftSnap;
  }
  if ((cVar33 != '\0') &&
     (PhysicsReplicationCVars::PredictiveInterpolationCVars::bVelocityBased != false)) {
    bVar16 = false;
  }
  EVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  if (EVar14 == Kinematic) {
    fVar68 = param_2->AverageReceiveInterval;
    fVar67 = (float)((param_2->ReceiveFrame - *(int *)((longlong)dVar4 + 0x328)) -
                    ((int)ROUND(__real_bf000000 - (fVar68 + fVar68)) >> 1));
    if (((PhysicsReplicationCVars::PredictiveInterpolationCVars::bKinematicPrediction == false) ||
        (param_2->bAllowTargetAltering == false)) && (fVar67 <= 0.0)) {
      bVar16 = true;
      goto LAB_1483191c7;
    }
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bKinematicPrediction == false) {
      fVar68 = fVar67;
    }
    pFVar24 = param_2;
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bKinematicPrediction == false) {
      pFVar24 = (FReplicatedPhysicsTargetAsync *)&param_2->PrevPosTarget;
    }
    local_218 = *(double *)&(pFVar24->TargetState).Position.field_0x10;
    auVar74._0_8_ = (double)(fVar89 / fVar68);
    auVar74._8_8_ = 0;
    dVar56 = (*(double *)&(pFVar24->TargetState).Position - local_1b8) * auVar74._0_8_ + local_1b8;
    dVar69 = (local_218 - local_1a8) * auVar74._0_8_ + local_1a8;
    dVar87 = (*(double *)&(pFVar24->TargetState).Position.field_0x8 - dStack_1b0) * auVar74._0_8_ +
             dStack_1b0;
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bKinematicPrediction == false) {
      pTVar23 = &param_2->PrevRotTarget;
    }
    pTVar23 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        ((TQuat<double> *)local_228,&local_198,pTVar23,auVar74._0_8_);
    dVar92 = pTVar23->X;
    dVar53 = pTVar23->Y;
    dVar84 = pTVar23->Z;
    dVar90 = pTVar23->W;
    local_270 = Position;
    local_288._8_8_ = dVar87;
    local_288._0_8_ = dVar56;
    dVar55 = dVar92 * dVar92 + dVar84 * dVar84;
    dVar66 = dVar53 * dVar53 + dVar90 * dVar90;
    auVar39._8_4_ = SUB84(dVar66,0);
    auVar39._0_8_ = dVar55;
    auVar39._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
    auVar40._0_8_ = auVar39._8_8_ + dVar55;
    auVar40._8_8_ = dVar55 + dVar66;
    auVar57 = sqrtpd(auVar74,auVar40);
    uVar34 = -(ulonglong)(dVar12 <= auVar40._0_8_);
    uVar35 = -(ulonglong)(dVar12 <= auVar40._8_8_);
    uVar79 = (uint)(uVar34 >> 0x20);
    uVar80 = (uint)(uVar35 >> 0x20);
    auVar81 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
    auVar82._0_8_ = uVar34 & (ulonglong)(auVar81._0_8_ * dVar92);
    uVar11 = uVar35 & (ulonglong)(auVar81._8_8_ * dVar53);
    auVar82._8_4_ = (undefined4)uVar11;
    auVar82._12_4_ = (undefined4)(uVar11 >> 0x20);
    auVar58._0_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar58._4_4_ =
         ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar58._8_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar58._12_4_ =
         ~uVar80 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
    auVar78._0_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar78._4_4_ =
         ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar78._8_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar78._12_4_ =
         ~uVar80 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar59._0_8_ = (ulonglong)(auVar57._0_8_ * dVar84) & uVar34;
    uVar35 = (ulonglong)(auVar57._8_8_ * dVar90) & uVar35;
    auVar59._8_4_ = (undefined4)uVar35;
    auVar59._12_4_ = (undefined4)(uVar35 >> 0x20);
    local_298._4_4_ = (float)SUB168(auVar82 | auVar58,8);
    local_298._0_4_ = (float)SUB168(auVar82 | auVar58,0);
    uStack_290._0_4_ = (float)SUB168(auVar78 | auVar59,0);
    uStack_290._4_4_ = (float)SUB168(auVar78 | auVar59,8);
    local_278 = dVar69;
    Chaos::FPBDRigidsEvolutionGBF::SetParticleKinematicTarget
              (*(FPBDRigidsEvolutionGBF **)((longlong)dVar4 + 0xbd0),
               (TGeometryParticleHandleImp<double,3,1> *)param_1,(FKinematicTarget *)local_298);
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bDrawDebugTargets != false) {
      iVar29 = 0x1e;
      if (param_2->TickCount < 0x1e) {
        iVar29 = param_2->TickCount;
      }
      local_248 = (double)PhysicsReplicationCVars::PredictiveInterpolationCVars::DrawDebugZOffset +
                  dVar69;
      dStack_250 = dVar87;
      local_258 = dVar56;
      pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
      fVar68 = PhysicsReplicationCVars::DebugDrawLifeTime;
      FVar18 = FColor::MakeRandomSeededColor((int)local_2a8);
      iVar26 = -4;
      if (-4 < iVar29) {
        iVar26 = iVar29;
      }
      Chaos::FDebugDrawQueue::DrawDebugSphere
                (pFVar19,(TVector<double> *)&local_258,
                 (double)((float)iVar26 * __real_3f400000 + __real_40400000),8,
                 (FColor *)CONCAT44(extraout_var_00,FVar18.field0_0x0),false,fVar68,'\0',fVar89);
      bVar16 = false;
      goto LAB_1483191c7;
    }
  }
  else {
    if (EVar13 == Sleeping) {
      Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                (*(FPBDRigidsEvolutionBase **)((longlong)dVar4 + 0xbd0),param_1,Dynamic);
    }
    fVar68 = param_3 * param_2->AverageReceiveInterval;
    local_268 = PhysicsReplicationCVars::PredictiveInterpolationCVars::
                PosInterpolationTimeMultiplier;
    if (pFVar30->bOverridePosInterpolationTimeMultiplier != 0) {
      local_268 = (this->SettingsCurrent).PredictiveInterpolationSettings.
                  PosInterpolationTimeMultiplier;
    }
    local_268 = local_268 * fVar68;
    local_2a8[0] = this->LatencyOneWay + this->LatencyOneWay;
    fVar67 = PhysicsReplicationCVars::PredictiveInterpolationCVars::PosCorrectionTimeMin;
    if (pFVar30->bOverridePosCorrectionTimeMin != 0) {
      fVar67 = (this->SettingsCurrent).PredictiveInterpolationSettings.PosCorrectionTimeMin;
    }
    fVar54 = PhysicsReplicationCVars::PredictiveInterpolationCVars::PosCorrectionTimeBase;
    if (pFVar30->bOverridePosCorrectionTimeBase != 0) {
      fVar54 = (this->SettingsCurrent).PredictiveInterpolationSettings.PosCorrectionTimeBase;
    }
    fVar9 = PhysicsReplicationCVars::PredictiveInterpolationCVars::PosCorrectionTimeMultiplier;
    if (pFVar30->bOverridePosCorrectionTimeMultiplier != 0) {
      fVar9 = (this->SettingsCurrent).PredictiveInterpolationSettings.PosCorrectionTimeMultiplier;
    }
    fVar54 = local_2a8[0] * fVar9 + fVar54 + fVar68;
    if (fVar54 <= fVar67 + param_3) {
      fVar54 = fVar67 + param_3;
    }
    fVar67 = PhysicsReplicationCVars::PredictiveInterpolationCVars::RotCorrectionTimeMin;
    if (pFVar30->bOverrideRotCorrectionTimeMin != 0) {
      fVar67 = (this->SettingsCurrent).PredictiveInterpolationSettings.RotCorrectionTimeMin;
    }
    fVar9 = PhysicsReplicationCVars::PredictiveInterpolationCVars::RotCorrectionTimeBase;
    if (pFVar30->bOverrideRotCorrectionTimeBase != 0) {
      fVar9 = (this->SettingsCurrent).PredictiveInterpolationSettings.RotCorrectionTimeBase;
    }
    fVar10 = PhysicsReplicationCVars::PredictiveInterpolationCVars::RotCorrectionTimeMultiplier;
    if (pFVar30->bOverrideRotCorrectionTimeMultiplier != 0) {
      fVar10 = (this->SettingsCurrent).PredictiveInterpolationSettings.RotCorrectionTimeMultiplier;
    }
    local_f8._8_8_ = dStack_1b0;
    local_f8._0_8_ = local_1b8;
    local_264 = local_2a8[0] * fVar10 + fVar9 + fVar68;
    local_130 = local_1a8;
    if (local_264 <= fVar67 + param_3) {
      local_264 = fVar67 + param_3;
    }
    if (bVar28) {
      cVar33 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bSkipVelocityRepOnPosEarlyOut;
      if (pFVar30.bOverrideSkipVelocityRepOnPosEarlyOut != 0) {
        cVar33 = (this->SettingsCurrent).PredictiveInterpolationSettings.
                 bSkipVelocityRepOnPosEarlyOut;
      }
      if (cVar33 == '\0') goto LAB_1483193b4;
    }
    else {
LAB_1483193b4:
      dVar87 = local_1e0 - local_1b8;
      dVar56 = local_218 - local_1a8;
      local_128 = dStack_1d8;
      dStack_120 = dStack_1d8;
      auVar6._4_8_ = dStack_1d8;
      auVar6._0_4_ = (int)((ulonglong)local_1b8 >> 0x20);
      auVar41._0_8_ = auVar6._0_8_ << 0x20;
      auVar41._8_4_ = SUB84(dStack_1b0,0);
      auVar41._12_4_ = (int)((ulonglong)dStack_1b0 >> 0x20);
      dVar69 = dStack_1d8 - auVar41._8_8_;
      fVar68 = param_3 / local_268;
      if (fVar89 <= param_3 / local_268) {
        fVar68 = fVar89;
      }
      if (fVar68 <= 0.0) {
        fVar68 = 0.0;
      }
      dVar92 = (double)fVar68;
      if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectionAsVelocity == false) {
        local_118 = dVar92 * (local_108 - dStack_170) + dStack_170;
        dVar84 = dVar92 * (dVar55 - local_178) + local_178;
        dVar53 = dVar92 * (local_2e0._s_0.Z - local_168) + local_168;
        fVar68 = param_3 / fVar54;
        if (fVar89 <= param_3 / fVar54) {
          fVar68 = fVar89;
        }
        local_288._0_8_ = dVar53;
        if (fVar68 <= 0.0) {
          fVar68 = 0.0;
        }
        dVar92 = (double)fVar68;
        local_138 = dVar84;
        pTVar20 = Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        local_130 = dVar92 * dVar56 + *(double *)&pTVar20->field_0x10;
        local_f8._8_8_ = dVar92 * dVar69 + *(double *)&pTVar20->field_0x8;
        local_f8._0_8_ = dVar92 * dVar87 + *(double *)pTVar20;
        local_2b8._0_8_ = local_130;
        dVar69 = local_118;
      }
      else {
        dVar90 = __real_3ff0000000000000 / (double)fVar54;
        dVar84 = (dVar87 * dVar90 + (dVar55 - local_178)) * dVar92 + local_178;
        dVar53 = (dVar56 * dVar90 + (local_2e0._s_0.Z - local_168)) * dVar92 + local_168;
        local_288._0_8_ = dVar53;
        dVar69 = (dVar69 * dVar90 + (local_108 - dStack_170)) * dVar92 + dStack_170;
        local_138 = dVar84;
      }
      local_2c8._8_8_ = dVar69;
      local_2c8._0_8_ = dVar84;
      local_2b8._0_8_ = local_288._0_8_;
      local_118 = dVar84;
      dStack_110 = dVar69;
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8
                 ,(TVector<double,3> *)local_2c8);
      if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bDrawDebugVectors != false) {
        dVar87 = local_258;
        dVar84 = (double)PhysicsReplicationCVars::PredictiveInterpolationCVars::DrawDebugZOffset +
                 local_218;
        local_248 = local_238;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_258,dVar12);
        pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
        dVar92 = local_128;
        fVar68 = __real_40000000;
        fVar89 = __real_bf800000;
        dVar56 = __real_3fe0000000000000;
        local_2c8._0_8_ = dVar87 * __real_3fe0000000000000 + local_1e0;
        local_2e0._s_0.X = local_1e0;
        local_2c8._8_8_ = local_108 * __real_3fe0000000000000 + local_128;
        local_2e0._s_0.Y = local_128;
        dVar87 = local_2e0._s_0.Z * __real_3fe0000000000000;
        local_2e0._s_0.Z = dVar84;
        local_2b8._0_8_ = dVar87 + dVar84;
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar19,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)local_2c8,
                   __real_40a00000,&FColor::Green,false,__real_bf800000,'\0',__real_40000000);
        pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
        local_2c8._0_8_ = local_178 * dVar56 + local_1e0;
        local_2e0._s_0.X = local_1e0;
        local_2e0._s_0.Y = dVar92;
        local_2c8._8_8_ = dStack_170 * dVar56 + dVar92;
        local_2b8._0_8_ = local_168 * dVar56 + dVar84 + __real_4024000000000000;
        local_2e0._s_0.Z = dVar84 + __real_4024000000000000;
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar19,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)local_2c8,
                   __real_40a00000,&FColor::Blue,false,fVar89,'\0',fVar68);
        pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
        local_2c8._0_8_ = ((param_2->PrevLinVel).field0_0x0._s_0.X - local_178) * dVar56 + local_1e0
        ;
        local_2e0._s_0.X = local_1e0;
        local_2e0._s_0.Y = dVar92;
        local_2c8._8_8_ = ((param_2->PrevLinVel).field0_0x0._s_0.Y - dStack_170) * dVar56 + dVar92;
        local_2b8._0_8_ =
             ((param_2->PrevLinVel).field0_0x0._s_0.Z - local_168) * dVar56 + dVar84 +
             __real_4034000000000000;
        local_2e0._s_0.Z = dVar84 + __real_4034000000000000;
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar19,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)local_2c8,
                   __real_40a00000,&FColor::Red,false,fVar89,'\0',fVar68);
        pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
        local_2e0._s_0.Z = dVar84 + __real_403e000000000000;
        local_2c8._0_8_ = local_138 * dVar56 + local_1e0;
        local_2e0._s_0.Y = dVar92;
        local_2c8._8_8_ = dVar69 * dVar56 + dVar92;
        local_2e0._s_0.X = local_1e0;
        local_2b8._0_8_ = dVar53 * dVar56 + local_2e0._s_0.Z;
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar19,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)local_2c8,
                   __real_40a00000,&FColor::Magenta,false,fVar89,'\0',fVar68);
        pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
        dVar92 = local_128;
        dVar87 = local_1e0;
        local_2e0._s_0.X = local_1e0;
        local_2c8._0_8_ = ((param_2->PrevLinVel).field0_0x0._s_0.X - local_138) * dVar56 + local_1e0
        ;
        local_2c8._8_8_ = ((param_2->PrevLinVel).field0_0x0._s_0.Y - dVar69) * dVar56 + local_128;
        local_2e0._s_0.Y = local_128;
        local_2b8._0_8_ =
             ((param_2->PrevLinVel).field0_0x0._s_0.Z - dVar53) * dVar56 + dVar84 +
             __real_4044000000000000;
        local_2e0._s_0.Z = dVar84 + __real_4044000000000000;
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar19,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)local_2c8,
                   __real_40a00000,&FColor::Orange,false,fVar89,'\0',fVar68);
        pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
        dVar69 = (double)local_2a8[0];
        local_2e0._s_0.Z = dVar84 + __real_4049000000000000;
        local_2c8._0_8_ = dVar69 * local_258 + dVar87;
        local_2c8._8_8_ = dVar69 * dStack_250 + dVar92;
        local_2b8._0_8_ = dVar69 * (double)local_248 + local_2e0._s_0.Z;
        local_2e0._s_0.X = dVar87;
        local_2e0._s_0.Y = dVar92;
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar19,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)local_2c8,
                   __real_40a00000,&FColor::White,false,fVar89,'\0',fVar68);
        pFVar19 = Chaos::FDebugDrawQueue::GetInstance();
        local_2e0._s_0.Z = dVar84 + __real_404e000000000000;
        dVar69 = (double)local_268;
        local_2e0._s_0.X = dVar87;
        local_2c8._8_8_ = dVar69 * dStack_250 + dVar92;
        local_2c8._0_8_ = dVar69 * local_258 + dVar87;
        local_2e0._s_0.Y = dVar92;
        local_2b8._0_8_ = dVar69 * (double)local_248 + local_2e0._s_0.Z;
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar19,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)local_2c8,
                   __real_40a00000,&FColor::Yellow,false,fVar89,'\0',fVar68);
        fVar89 = __real_3f800000;
      }
      (param_2->PrevLinVel).field0_0x0._s_0.X = local_118;
      (param_2->PrevLinVel).field0_0x0._s_0.Y = dStack_110;
      (param_2->PrevLinVel).field0_0x0._s_0.Z = (double)local_288._0_8_;
    }
    fVar68 = local_264;
    local_1c0 = local_1c0 - local_160;
    local_1c8 = local_1c8 - dStack_158;
    local_1d0 = local_1d0 - local_150;
    auVar94._8_8_ = local_198.Y;
    auVar94._0_8_ = local_198.X;
    fVar67 = param_3 / local_268;
    if (fVar89 <= param_3 / local_268) {
      fVar67 = fVar89;
    }
    dStack_250 = local_198.W;
    local_258 = local_198.Z;
    if (fVar67 <= 0.0) {
      fVar67 = 0.0;
    }
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectionAsVelocity == false) {
      dVar87 = (double)fVar67;
      dVar69 = local_1c0 * dVar87 + local_160;
      dVar56 = local_1c8 * dVar87 + dStack_158;
      dVar87 = local_1d0 * dVar87 + local_150;
      pTVar23 = (TQuat<double> *)
                Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
                          ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                           (TRotation<double,3> *)local_228);
      fVar67 = param_3 / fVar68;
      if (fVar89 <= param_3 / fVar68) {
        fVar67 = fVar89;
      }
      if (fVar67 <= 0.0) {
        fVar67 = 0.0;
      }
      auVar76._0_8_ = (double)fVar67;
      auVar76._8_8_ = 0;
      pTVar23 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          ((TQuat<double> *)local_298,pTVar23,local_e8,auVar76._0_8_);
      dVar92 = pTVar23->X;
      dVar53 = pTVar23->Y;
      dVar84 = pTVar23->Z;
      dVar90 = pTVar23->W;
      dVar55 = dVar84 * dVar84 + dVar92 * dVar92;
      dVar66 = dVar90 * dVar90 + dVar53 * dVar53;
      auVar48._8_4_ = SUB84(dVar66,0);
      auVar48._0_8_ = dVar55;
      auVar48._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
      auVar49._0_8_ = auVar48._8_8_ + dVar55;
      auVar49._8_8_ = dVar55 + dVar66;
      auVar57 = sqrtpd(auVar76,auVar49);
      uVar34 = -(ulonglong)(dVar12 <= auVar49._0_8_);
      uVar35 = -(ulonglong)(dVar12 <= auVar49._8_8_);
      auVar81 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
      uVar79 = (uint)(uVar34 >> 0x20);
      uVar80 = (uint)(uVar35 >> 0x20);
      auVar93._0_8_ = uVar34 & (ulonglong)(auVar81._0_8_ * dVar92);
      uVar11 = uVar35 & (ulonglong)(auVar81._8_8_ * dVar53);
      auVar93._8_4_ = (undefined4)uVar11;
      auVar93._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar62._0_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar62._4_4_ =
           ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar62._8_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar62._12_4_ =
           ~uVar80 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar94 = auVar93 | auVar62;
      auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
      auVar91._0_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar91._4_4_ =
           ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar91._8_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar91._12_4_ =
           ~uVar80 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar63._0_8_ = (ulonglong)(auVar57._0_8_ * dVar84) & uVar34;
      uVar35 = (ulonglong)(auVar57._8_8_ * dVar90) & uVar35;
      auVar63._8_4_ = (undefined4)uVar35;
      auVar63._12_4_ = (undefined4)(uVar35 >> 0x20);
      auVar91 = auVar91 | auVar63;
    }
    else {
      dVar92 = local_198.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar84 = local_198.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar87 = local_198.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar90 = local_198.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar42._8_4_ = SUB84(local_e8[0].W,0);
      auVar42._0_8_ = local_e8[0].W;
      auVar42._12_4_ = (int)((ulonglong)local_e8[0].W >> 0x20);
      auVar85._8_4_ = SUB84(dVar84,0);
      auVar85._0_8_ = dVar92;
      auVar85._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
      auVar60._8_4_ = SUB84(local_e8[0].Y,0);
      auVar60._0_8_ = local_e8[0].Y;
      auVar60._12_4_ = (int)((ulonglong)local_e8[0].Y >> 0x20);
      auVar70._8_4_ = SUB84(dVar90,0);
      auVar70._0_8_ = dVar87;
      auVar70._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
      auVar43._8_4_ = SUB84(local_e8[0].Z,0);
      auVar43._0_8_ = local_e8[0].Z;
      auVar43._12_4_ = (int)((ulonglong)local_e8[0].Z >> 0x20);
      dVar53 = auVar43._8_8_ * dVar87 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar75._0_8_ =
           local_e8[0].Y * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      auVar75._8_8_ =
           local_e8[0].Y * dVar90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar69 = local_e8[0].X * auVar70._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_e8[0].W * dVar92 + auVar75._0_8_ +
               local_e8[0].Z * auVar85._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar56 = local_e8[0].X * dVar87 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               local_e8[0].W * dVar84 + auVar75._8_8_ +
               local_e8[0].Z * dVar92 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar37 = SUB84(__real_bff0000000000000,0);
      uVar52 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      dVar87 = local_e8[0].X * auVar85._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_e8[0].W * dVar87 +
               local_e8[0].Y * dVar92 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               local_e8[0].Z * auVar70._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar92 = local_e8[0].X * dVar92 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar42._8_8_ * dVar90 +
               auVar60._8_8_ * dVar84 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar53;
      auVar7._4_8_ = dVar53;
      auVar7._0_4_ = (int)((ulonglong)dVar69 >> 0x20);
      auVar44._0_8_ = auVar7._0_8_ << 0x20;
      auVar44._8_4_ = SUB84(dVar56,0);
      auVar44._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
      dVar56 = auVar44._8_8_;
      if (__real_bff0000000000000 <= dVar56) {
        if (__real_3ff0000000000000 <= dVar56) {
          dVar56 = __real_3ff0000000000000;
        }
        uVar37 = SUB84(dVar56,0);
        uVar52 = (undefined4)((ulonglong)dVar56 >> 0x20);
      }
      auVar61._8_4_ = SUB84(dVar92,0);
      auVar61._0_8_ = dVar87;
      auVar61._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
      dVar56 = dVar87 * dVar87 + dVar69 * dVar69;
      dVar53 = auVar61._8_8_ * dVar92 + 0.0;
      auVar45._8_4_ = SUB84(dVar53,0);
      auVar45._0_8_ = dVar56;
      auVar45._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      auVar46._0_8_ = auVar45._8_8_ + dVar56;
      auVar46._8_8_ = dVar56 + dVar53;
      auVar57 = sqrtpd(auVar75,auVar46);
      uVar35 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar46._0_8_)
      ;
      uVar36 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar46._8_8_)
      ;
      auVar81 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
      uVar34 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar46._0_8_)
      ;
      auVar86._0_8_ = uVar35 & (ulonglong)(auVar81._0_8_ * dVar87);
      uVar11 = uVar36 & (ulonglong)(auVar81._8_8_ * dVar92);
      auVar86._8_4_ = (undefined4)uVar11;
      auVar86._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar71._0_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
      auVar71._4_4_ =
           ~(uint)(uVar35 >> 0x20) &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
      auVar71._8_4_ = ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
      auVar71._12_4_ =
           ~(uint)(uVar36 >> 0x20) &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
      auVar86 = auVar86 | auVar71;
      auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
      dVar53 = (double)(CONCAT44(~(uint)(uVar34 >> 0x20) &
                                 (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float1000.m128_f32[2] >> 0x20
                                       ),~(uint)uVar34 &
                                         SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],
                                               0)) | uVar34 & (ulonglong)(auVar57._0_8_ * dVar69));
      dVar69 = acos((double)CONCAT44(uVar52,uVar37));
      fVar68 = FMath::UnwindRadians<float>((float)(dVar69 + dVar69));
      dVar69 = (double)(fVar68 / local_264);
      auVar8._4_8_ = extraout_var_01._4_8_;
      auVar8._0_4_ = auVar86._4_4_;
      auVar47._0_8_ = auVar8._0_8_ << 0x20;
      auVar47._8_4_ = auVar86._8_4_;
      auVar47._12_4_ = auVar86._12_4_;
      dVar92 = (double)fVar67;
      dVar87 = (dVar53 * dVar69 + local_1d0) * dVar92 + local_150;
      dVar56 = (auVar47._8_8_ * dVar69 + local_1c8) * dVar92 + dStack_158;
      dVar69 = (auVar86._0_8_ * dVar69 + local_1c0) * dVar92 + local_160;
      auVar91 = _local_258;
      local_218 = dVar53;
    }
    uStack_290 = dVar56;
    local_298 = (undefined1  [8])dVar69;
    local_288._0_8_ = dVar87;
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
               (TVector<double,3> *)local_298);
    (param_2->PrevPos).field0_0x0._s_0.X = local_1b8;
    (param_2->PrevPos).field0_0x0._s_0.Y = dStack_1b0;
    (param_2->PrevPos).field0_0x0._s_0.Z = local_1a8;
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectionAsVelocity == false) {
      bVar28 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectConnectedBodies;
      if (pFVar30.bOverrideCorrectConnectedBodies != 0) {
        bVar28 = (this->SettingsCurrent).PredictiveInterpolationSettings.bCorrectConnectedBodies;
      }
      bVar25 = PhysicsReplicationCVars::PredictiveInterpolationCVars::
               bCorrectConnectedBodiesFriction;
      if (pFVar30.bOverrideCorrectConnectedBodiesFriction != 0) {
        bVar25 = (this->SettingsCurrent).PredictiveInterpolationSettings.
                 bCorrectConnectedBodiesFriction;
      }
      _local_228 = (TRotation<float,3>)local_f8;
      local_218 = local_130;
      _local_298 = auVar94;
      local_288 = auVar91;
      Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
                (*(FPBDRigidsEvolutionGBF **)((longlong)dVar4 + 0xbd0),
                 (TGeometryParticleHandleImp<double,3,1> *)param_1,(TVector<double,3> *)local_228,
                 (TRotation<double,3> *)local_298,bVar28,bVar25,&this->ReplicatedParticleIDs);
    }
    if (bVar16) {
      fVar68 = PhysicsReplicationCVars::PredictiveInterpolationCVars::SoftSnapPosStrength;
      if (pFVar30.bOverrideSoftSnapPosStrength != 0) {
        fVar68 = (this->SettingsCurrent).PredictiveInterpolationSettings.SoftSnapPosStrength;
      }
      if (fVar89 <= fVar68) {
        fVar68 = fVar89;
      }
      pbVar1 = &(this->SettingsCurrent).PredictiveInterpolationSettings.bSoftSnapToSource;
      if (fVar68 <= 0.0) {
        fVar68 = 0.0;
      }
      cVar33 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bSoftSnapToSource;
      if (pFVar30.bOverrideSoftSnapToSource != 0) {
        cVar33 = *pbVar1;
      }
      dVar69 = (double)fVar68;
      pFVar24 = (FReplicatedPhysicsTargetAsync *)&param_2->PrevPosTarget;
      if (cVar33 == '\0') {
        pFVar24 = param_2;
      }
      dVar56 = (*(double *)&(pFVar24->TargetState).Position - local_1b8) * dVar69 + local_1b8;
      dVar87 = (*(double *)&(pFVar24->TargetState).Position.field_0x8 - dStack_1b0) * dVar69 +
               dStack_1b0;
      local_288._0_8_ =
           (*(double *)&(pFVar24->TargetState).Position.field_0x10 - local_1a8) * dVar69 + local_1a8
      ;
      fVar68 = PhysicsReplicationCVars::PredictiveInterpolationCVars::SoftSnapRotStrength;
      if (pFVar30.bOverrideSoftSnapRotStrength != 0) {
        fVar68 = (this->SettingsCurrent).PredictiveInterpolationSettings.SoftSnapRotStrength;
      }
      if (fVar89 <= fVar68) {
        fVar68 = fVar89;
      }
      if (fVar68 <= 0.0) {
        fVar68 = 0.0;
      }
      auVar77._0_8_ = (double)fVar68;
      auVar77._8_8_ = 0;
      cVar33 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bSoftSnapToSource;
      if (pFVar30.bOverrideSoftSnapToSource != 0) {
        cVar33 = *pbVar1;
      }
      lVar32 = 0xc0;
      if (cVar33 == '\0') {
        lVar32 = 0x20;
      }
      pTVar23 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          ((TQuat<double> *)local_228,&local_198,
                           (TQuat<double> *)(&(param_2->TargetState).Position.field_0x0 + lVar32),
                           auVar77._0_8_);
      dVar69 = pTVar23->X;
      dVar92 = pTVar23->Y;
      dVar53 = pTVar23->Z;
      dVar84 = pTVar23->W;
      dVar90 = dVar53 * dVar53 + dVar69 * dVar69;
      dVar55 = dVar84 * dVar84 + dVar92 * dVar92;
      auVar50._8_4_ = SUB84(dVar55,0);
      auVar50._0_8_ = dVar90;
      auVar50._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      auVar51._0_8_ = auVar50._8_8_ + dVar90;
      auVar51._8_8_ = dVar90 + dVar55;
      auVar57 = sqrtpd(auVar77,auVar51);
      uVar34 = -(ulonglong)(dVar12 <= auVar51._0_8_);
      uVar35 = -(ulonglong)(dVar12 <= auVar51._8_8_);
      uVar79 = (uint)(uVar34 >> 0x20);
      uVar80 = (uint)(uVar35 >> 0x20);
      auVar81 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
      auVar83._0_8_ = uVar34 & (ulonglong)(auVar81._0_8_ * dVar69);
      uVar11 = uVar35 & (ulonglong)(auVar81._8_8_ * dVar92);
      auVar83._8_4_ = (undefined4)uVar11;
      auVar83._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar64._0_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar64._4_4_ =
           ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar64._8_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar64._12_4_ =
           ~uVar80 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_2c8 = auVar83 | auVar64;
      auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
      auVar72._0_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar72._4_4_ =
           ~uVar79 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar72._8_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar72._12_4_ =
           ~uVar80 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar65._0_8_ = (ulonglong)(auVar57._0_8_ * dVar53) & uVar34;
      uVar35 = (ulonglong)(auVar57._8_8_ * dVar84) & uVar35;
      auVar65._8_4_ = (undefined4)uVar35;
      auVar65._12_4_ = (undefined4)(uVar35 >> 0x20);
      local_2b8 = auVar72 | auVar65;
      bVar16 = PhysicsReplicationCVars::PredictiveInterpolationCVars::bCorrectConnectedBodies;
      if (pFVar30.bOverrideCorrectConnectedBodies != 0) {
        bVar16 = (this->SettingsCurrent).PredictiveInterpolationSettings.bCorrectConnectedBodies;
      }
      bVar28 = PhysicsReplicationCVars::PredictiveInterpolationCVars::
               bCorrectConnectedBodiesFriction;
      if (pFVar30.bOverrideCorrectConnectedBodiesFriction != 0) {
        bVar28 = (this->SettingsCurrent).PredictiveInterpolationSettings.
                 bCorrectConnectedBodiesFriction;
      }
      uStack_220 = dVar87;
      local_228 = (undefined1  [8])dVar56;
      local_218 = (double)local_288._0_8_;
      Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
                (*(FPBDRigidsEvolutionGBF **)((longlong)dVar4 + 0xbd0),
                 (TGeometryParticleHandleImp<double,3,1> *)param_1,(TVector<double,3> *)local_228,
                 (TRotation<double,3> *)local_2c8,bVar16,bVar28,&this->ReplicatedParticleIDs);
    }
  }
  bVar16 = false;
LAB_1483191c7:
  bVar16 = `FPhysicsReplicationAsync::PredictiveInterpolation'::__l2::<lambda_1>::operator()
                     (local_1f8,param_2,bVar16);
  return bVar16;
}

// RegisterSettings @ 14831b0f0

void __thiscall
FPhysicsReplicationAsync::RegisterSettings
          (FPhysicsReplicationAsync *this,FPhysicsObject *param_1,
          TWeakPtr<FNetworkPhysicsSettingsData_const_,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNetworkPhysicsSettingsData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TWeakPtr<FNetworkPhysicsSettingsData_const_,1> *pTVar6;
  uint uVar7;
  FPhysicsObject *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 != (FPhysicsObject *)0x0) {
    uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    pTVar6 = TMapBase<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,0>_>
             ::FindOrAddImpl<Chaos::FPhysicsObject_const_*_const_&>
                       ((TMapBase<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,TWeakPtr<FNetworkPhysicsSettingsData_const_,1>,0>_>
                         *)&this->ObjectToSettings,uVar7 >> 0x10 ^ uVar7,local_res10);
    pTVar3 = (param_2->WeakReferenceCount).ReferenceController;
    pFVar4 = param_2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (pTVar6->WeakReferenceCount).ReferenceController;
    pTVar6->Object = pFVar4;
    (pTVar6->WeakReferenceCount).ReferenceController = pTVar3;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  pTVar3 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// RemoveObjectFromReplication @ 14831d6d0

void __thiscall
FPhysicsReplicationAsync::RemoveObjectFromReplication
          (FPhysicsReplicationAsync *this,FPhysicsObject *param_1)

{
  longlong lVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  FParticleID *pFVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  FReadPhysicsObjectInterface<1> local_res10 [8];
  FParticleID local_res18 [2];
  
  if (param_1 != (FPhysicsObject *)0x0) {
    if (*(int *)&(this->ObjectToTarget).field_0x8 != *(int *)&(this->ObjectToTarget).field_0x34) {
      puVar6 = *(undefined1 **)&(this->ObjectToTarget).field_0x40;
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->ObjectToTarget).field_0x38;
      }
      iVar5 = *(int *)(puVar6 + (((ulonglong)(uVar4 >> 0x10) ^ (longlong)(int)uVar4) &
                                (longlong)*(int *)&(this->ObjectToTarget).field_0x48 - 1U) * 4);
      if (iVar5 != -1) {
        lVar1 = *(longlong *)&(this->ObjectToTarget).field_0x0;
        do {
          if (*(FPhysicsObject **)((longlong)iVar5 * 0x140 + lVar1) == param_1) {
            TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>,FDefaultSetAllocator>
                             *)&this->ObjectToTarget,iVar5);
            break;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x140 + 0x130 + lVar1);
        } while (iVar5 != -1);
      }
    }
    local_res10[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
    pTVar2 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle(local_res10,param_1);
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar3 = Chaos::TGeometryParticlesImp<double,3,0>::ParticleID
                         ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
                          (int)pTVar2->_padding_);
      local_res18[0] = *pFVar3;
      TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_>::Remove
                (&this->ReplicatedParticleIDs,local_res18);
    }
  }
  return;
}

// ResimulationReplication @ 14831e120

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPhysicsReplicationAsync::ResimulationReplication
          (FPhysicsReplicationAsync *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          FReplicatedPhysicsTargetAsync *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  char cVar14;
  bool bVar15;
  EObjectStateType EVar16;
  FColor FVar17;
  FChaosSolversModule *pFVar18;
  IChaosSettingsProvider *pIVar19;
  FParticlePositionRotation *pFVar20;
  FParticleVelocities *pFVar21;
  FDebugDrawQueue *pFVar22;
  TVector<double,3> *pTVar23;
  FReplicatedPhysicsTargetAsync *pFVar24;
  TRotation<double,3> *pTVar25;
  TQuat<double> *pTVar26;
  FDebugDrawQueue *this_00;
  undefined4 extraout_var;
  byte bVar27;
  bool bVar28;
  TVector<double>_u_0 *pTVar29;
  FColor_u_0 FVar30;
  longlong lVar31;
  undefined1 uVar32;
  FNetworkPhysicsSettingsResimulation *pFVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  float fVar37;
  double dVar38;
  double dVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  uint uVar54;
  uint uVar55;
  double dVar56;
  double dVar57;
  double dVar59;
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double local_res8;
  FGeometryParticleState local_1e0;
  undefined1 local_1b8 [32];
  TQuat<double> local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  FDebugDrawQueue *local_138;
  uint local_130;
  longlong local_128;
  undefined1 local_118 [32];
  TQuat<double> local_f8;
  FRewindData *local_d8;
  
  local_128 = this->_padding_;
  if (((local_128 == 0) ||
      (local_d8 = *(FRewindData **)(local_128 + 0x238), local_d8 == (FRewindData *)0x0)) ||
     (param_2->ServerFrame < 1)) {
    return true;
  }
  iVar34 = param_2->ServerFrame - param_2->FrameOffset;
  if (local_d8->CurFrame <= iVar34) {
    return true;
  }
  if (iVar34 < local_d8->CurFrame - local_d8->FramesSaved) {
    return true;
  }
  bVar27 = (param_2->TargetState).Flags & 1;
  local_130 = CONCAT31(local_130._1_3_,1);
  Chaos::FRewindData::GetPastStateAtFrame
            (local_d8,&local_1e0,(TGeometryParticleHandleImp<double,3,1> *)param_1,iVar34,
             PrePushData);
  pFVar18 = FChaosSolversModule::GetModule();
  pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
  cVar14 = (**(code **)((longlong)*pIVar19 + 0x20))(pIVar19);
  if ((cVar14 != '\0') ||
     (bVar28 = false, pFVar33->bOverrideResimulationErrorPositionThreshold != 0)) {
    bVar28 = true;
  }
  pFVar18 = FChaosSolversModule::GetModule();
  pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
  cVar14 = (**(code **)((longlong)*pIVar19 + 0x30))(pIVar19);
  if ((cVar14 != '\0') ||
     (bVar11 = false, pFVar33->bOverrideResimulationErrorRotationThreshold != 0)) {
    bVar11 = true;
  }
  pFVar18 = FChaosSolversModule::GetModule();
  pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
  cVar14 = (**(code **)((longlong)*pIVar19 + 0x40))(pIVar19);
  if ((cVar14 != '\0') ||
     (bVar9 = false, pFVar33->bOverrideResimulationErrorLinearVelocityThreshold != 0)) {
    bVar9 = true;
  }
  pFVar18 = FChaosSolversModule::GetModule();
  pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
  cVar14 = (**(code **)((longlong)*pIVar19 + 0x50))(pIVar19);
  dVar2 = __real_404ca5dc0d03cf26;
  FVar30 = FColor::Black.field0_0x0;
  if ((cVar14 != '\0') ||
     (bVar10 = false, pFVar33->bOverrideResimulationErrorAngularVelocityThreshold != 0)) {
    bVar10 = true;
  }
  bVar15 = false;
  local_138 = (FDebugDrawQueue *)CONCAT44(local_138._4_4_,FColor::Black.field0_0x0);
  local_res8 = (double)((ulonglong)local_res8 & 0xffffffffffffff00);
  bVar12 = false;
  if (bVar28) {
    pFVar18 = FChaosSolversModule::GetModule();
    pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
    fVar37 = (float)(**(code **)((longlong)*pIVar19 + 0x28))(pIVar19);
    pTVar13 = local_1e0.Particle;
    if (pFVar33->bOverrideResimulationErrorPositionThreshold != 0) {
      fVar37 = (this->SettingsCurrent).ResimulationSettings.ResimulationErrorPositionThreshold;
    }
    if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar20 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                            (&(local_1e0.State)->ParticlePositionRotation,local_1e0.FrameAndPhase,
                             local_1e0.Pool), pFVar20 == (FParticlePositionRotation *)0x0)) {
      pFVar20 = (FParticlePositionRotation *)
                Chaos::TParticles<double,3>::GetX
                          ((TParticles<double,3> *)
                           (((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                            &pTVar13->_padding_)->AllocatorInstance).Data,
                           ((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                           &pTVar13->_padding_)->ArrayNum);
    }
    local_198._0_16_ = *(undefined1 (*) [16])&pFVar20->MX;
    local_198.Z = *(double *)&(pFVar20->MX).field_0x10;
    local_158._s_0.X = (double)*(undefined8 *)&(param_2->TargetState).Position;
    local_158._s_0.Y = (double)*(undefined8 *)&(param_2->TargetState).Position.field_0x8;
    local_158._s_0.Z = (double)*(undefined8 *)&(param_2->TargetState).Position.field_0x10;
    bVar15 = Chaos::FRewindData::CheckVectorThreshold
                       ((TVector<double,3> *)&local_158._s_0,(TVector<double,3> *)&local_198,fVar37)
    ;
    if (!bVar15) goto LAB_14831e370;
    local_138 = (FDebugDrawQueue *)CONCAT44(local_138._4_4_,FColor::Orange.field0_0x0);
  }
  else {
LAB_14831e370:
    dVar38 = local_res8;
    if (bVar9) {
      pFVar18 = FChaosSolversModule::GetModule();
      pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
      fVar37 = (float)(**(code **)((longlong)*pIVar19 + 0x48))(pIVar19);
      if ((this->SettingsCurrent).ResimulationSettings.
          bOverrideResimulationErrorLinearVelocityThreshold != 0) {
        fVar37 = (this->SettingsCurrent).ResimulationSettings.
                 ResimulationErrorLinearVelocityThreshold;
      }
      pFVar22 = (FDebugDrawQueue *)0x0;
      if ((char)((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                &(local_1e0.Particle)->_padding_)->ArrayMax != '\0') {
        pFVar22 = (FDebugDrawQueue *)local_1e0.Particle;
      }
      if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
         (pFVar21 = Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                              (&(local_1e0.State)->Velocities,local_1e0.FrameAndPhase,local_1e0.Pool
                              ), pFVar21 == (FParticleVelocities *)0x0)) {
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)
                   (pFVar22->CommandQueue).AllocatorInstance.Data,(TVector<double,3> *)&local_198,
                   (pFVar22->CommandQueue).ArrayNum);
      }
      else {
        local_198.X = (double)(float)*(undefined8 *)&pFVar21->MV;
        local_198.Y = (double)(float)((ulonglong)*(undefined8 *)&pFVar21->MV >> 0x20);
        local_198.Z = (double)*(float *)&(pFVar21->MV).field_0x8;
        local_118._16_8_ = local_198.Z;
      }
      uVar8 = (ulonglong)local_198.Y >> 0x20;
      local_158._s_0.X = (double)*(undefined8 *)&(param_2->TargetState).LinVel;
      local_158._s_0.Y = (double)*(undefined8 *)&(param_2->TargetState).LinVel.field_0x8;
      local_158._s_0.Z = (double)*(undefined8 *)&(param_2->TargetState).LinVel.field_0x10;
      local_198.Y._0_4_ = SUB84(local_198.Y,0);
      local_198.Y._4_4_ = (int)uVar8;
      bVar15 = Chaos::FRewindData::CheckVectorThreshold
                         ((TVector<double,3> *)&local_158._s_0,(TVector<double,3> *)&local_198,
                          fVar37);
      if (bVar15) {
        local_res8 = (double)CONCAT71(local_res8._1_7_,1);
      }
      else {
LAB_14831e45e:
        if (bVar10) {
          pFVar18 = FChaosSolversModule::GetModule();
          pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
          fVar37 = (float)(**(code **)((longlong)*pIVar19 + 0x58))(pIVar19);
          if ((this->SettingsCurrent).ResimulationSettings.
              bOverrideResimulationErrorAngularVelocityThreshold != 0) {
            fVar37 = (this->SettingsCurrent).ResimulationSettings.
                     ResimulationErrorAngularVelocityThreshold;
          }
          pFVar22 = (FDebugDrawQueue *)0x0;
          if ((char)((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                    &(local_1e0.Particle)->_padding_)->ArrayMax != '\0') {
            pFVar22 = (FDebugDrawQueue *)local_1e0.Particle;
          }
          if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
             (pFVar21 = Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                                  (&(local_1e0.State)->Velocities,local_1e0.FrameAndPhase,
                                   local_1e0.Pool), pFVar21 == (FParticleVelocities *)0x0)) {
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                      ((TKinematicGeometryParticlesImp<double,3,0> *)
                       (pFVar22->CommandQueue).AllocatorInstance.Data,
                       (TVector<double,3> *)&local_198,(pFVar22->CommandQueue).ArrayNum);
            local_118._16_8_ = local_198.Z;
          }
          else {
            local_198.X = (double)*(float *)&pFVar21->MW;
            local_198.Y = (double)*(float *)&(pFVar21->MW).field_0x4;
            local_198.Z = (double)*(float *)&(pFVar21->MW).field_0x8;
          }
          local_1b8._8_8_ = local_198.Y * dVar2;
          local_1b8._0_8_ = local_198.X * dVar2;
          local_1b8._16_8_ = local_198.Z * dVar2;
          local_198._0_16_ = *(undefined1 (*) [16])&(param_2->TargetState).AngVel;
          local_198.Z = *(double *)&(param_2->TargetState).AngVel.field_0x10;
          bVar15 = Chaos::FRewindData::CheckVectorThreshold
                             ((TVector<double,3> *)&local_198,(TVector<double,3> *)local_1b8,fVar37)
          ;
          if (bVar15) {
            bVar12 = true;
          }
          else {
LAB_14831e56b:
            bVar12 = false;
            if (bVar11) {
              pFVar18 = FChaosSolversModule::GetModule();
              pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
              fVar37 = (float)(**(code **)((longlong)*pIVar19 + 0x38))(pIVar19);
              if ((this->SettingsCurrent).ResimulationSettings.
                  bOverrideResimulationErrorRotationThreshold != 0) {
                fVar37 = (this->SettingsCurrent).ResimulationSettings.
                         ResimulationErrorRotationThreshold;
              }
              pTVar25 = Chaos::FGeometryParticleState::GetR
                                  (&local_1e0,(TRotation<double,3> *)&local_f8);
              local_118._0_16_ = *(undefined1 (*) [16])pTVar25;
              local_118._16_8_ = *(undefined8 *)&pTVar25->field_0x10;
              local_118._24_4_ = *(int *)&pTVar25->field_0x18;
              local_118._28_4_ = *(int *)&pTVar25->field_0x1c;
              local_198.X = (param_2->TargetState).Quaternion.X;
              local_198.Y = (param_2->TargetState).Quaternion.Y;
              local_198.Z = (param_2->TargetState).Quaternion.Z;
              local_198.W = (param_2->TargetState).Quaternion.W;
              bVar15 = Chaos::FRewindData::CheckQuaternionThreshold
                                 (&local_198,(TQuat<double> *)local_118,fVar37);
              if (bVar15) {
                FVar30 = FColor::Magenta.field0_0x0;
              }
              local_138 = (FDebugDrawQueue *)CONCAT44(local_138._4_4_,FVar30.Bits);
            }
          }
        }
        else {
          bVar12 = false;
          if (bVar15 == false) goto LAB_14831e56b;
        }
      }
    }
    else {
      local_res8 = (double)((ulonglong)local_res8 & 0xffffffffffffff00);
      if (bVar15 == false) {
        local_res8 = (double)((ulonglong)dVar38 & 0xffffffffffffff00);
        goto LAB_14831e45e;
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FAutoConsoleVariableRef::FAutoConsoleVariableRef
              (&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                ::__l2::CVarDebugNetworkPhysicsPrediction,L"np2.DebugNetworkPhysicsPrediction",
               &`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                ::__l2::DebugNetworkPhysicsPrediction,L"Debugs network physics prediction",0);
    atexit(`Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction'::__l2::
           _dynamic_atexit_destructor_for__CVarDebugNetworkPhysicsPrediction__);
    _Init_thread_footer(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
      ::__l2::DebugNetworkPhysicsPrediction != 0) {
    if ((4 < (byte)LogTemp._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp),
       4 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    pTVar13 = local_1e0.Particle;
    if (4 < (byte)LogTemp._0_1_) {
      if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
         (pFVar20 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                              (&(local_1e0.State)->ParticlePositionRotation,local_1e0.FrameAndPhase,
                               local_1e0.Pool), pFVar20 == (FParticlePositionRotation *)0x0)) {
        Chaos::TParticles<double,3>::GetX
                  ((TParticles<double,3> *)
                   (((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                    &pTVar13->_padding_)->AllocatorInstance).Data,
                   ((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                   &pTVar13->_padding_)->ArrayNum);
      }
      ::FString::PrintfImpl((FString *)local_1b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl((FString *)&local_178._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if ((FDebugDrawQueue *)local_178._s_0.X != (FDebugDrawQueue *)0x0) {
        FMemory::Free((void *)local_178._s_0.X);
      }
      if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1b8._0_8_);
      }
      if (4 < (byte)LogTemp._0_1_) {
        pFVar22 = (FDebugDrawQueue *)0x0;
        if ((char)((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                  &(local_1e0.Particle)->_padding_)->ArrayMax != '\0') {
          pFVar22 = (FDebugDrawQueue *)local_1e0.Particle;
        }
        if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
           (pFVar21 = Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                                (&(local_1e0.State)->Velocities,local_1e0.FrameAndPhase,
                                 local_1e0.Pool), pFVar21 == (FParticleVelocities *)0x0)) {
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)
                     (pFVar22->CommandQueue).AllocatorInstance.Data,(TVector<double,3> *)&local_198,
                     (pFVar22->CommandQueue).ArrayNum);
          local_118._16_8_ = local_198.Z;
        }
        ::FString::PrintfImpl((FString *)&local_178._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl((FString *)local_1b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1b8._0_8_);
        }
        if ((FDebugDrawQueue *)local_178._s_0.X != (FDebugDrawQueue *)0x0) {
          FMemory::Free((void *)local_178._s_0.X);
        }
        if (4 < (byte)LogTemp._0_1_) {
          Chaos::FGeometryParticleState::GetR(&local_1e0,(TRotation<double,3> *)&local_f8);
          ::FString::PrintfImpl((FString *)&local_178._s_0,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
          ::FString::PrintfImpl((FString *)local_1b8,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1b8._0_8_);
          }
          if ((FDebugDrawQueue *)local_178._s_0.X != (FDebugDrawQueue *)0x0) {
            FMemory::Free((void *)local_178._s_0.X);
          }
          if (4 < (byte)LogTemp._0_1_) {
            pFVar22 = (FDebugDrawQueue *)0x0;
            if ((char)((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                      &(local_1e0.Particle)->_padding_)->ArrayMax != '\0') {
              pFVar22 = (FDebugDrawQueue *)local_1e0.Particle;
            }
            if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
               (pFVar21 = Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                                    (&(local_1e0.State)->Velocities,local_1e0.FrameAndPhase,
                                     local_1e0.Pool), pFVar21 == (FParticleVelocities *)0x0)) {
              Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                        ((TKinematicGeometryParticlesImp<double,3,0> *)
                         (pFVar22->CommandQueue).AllocatorInstance.Data,
                         (TVector<double,3> *)&local_198,(pFVar22->CommandQueue).ArrayNum);
              local_118._16_8_ = local_198.Z;
            }
            ::FString::PrintfImpl((FString *)&local_178._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
            ::FString::PrintfImpl((FString *)local_1b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Particle_Target_151a7d9e8,
                       (FLogCategoryBase *)&LogTemp);
            if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_1b8._0_8_);
            }
            if ((FDebugDrawQueue *)local_178._s_0.X != (FDebugDrawQueue *)0x0) {
              FMemory::Free((void *)local_178._s_0.X);
            }
          }
        }
      }
    }
  }
  fVar37 = __real_40a00000;
  if (((PhysicsReplicationCVars::ResimulationCVars::bDrawDebug != false) ||
      (RenderInterpolationCVars::bRenderInterpDebugDrawResimTrigger != false)) && (bVar15 != false))
  {
    local_1b8._16_8_ = __real_4024000000000000;
    dVar38 = ___xmm_40340000000000004044000000000000;
    dVar43 = _UNK_151a801c8;
    if (RenderInterpolationCVars::bRenderInterpDebugDrawResimTrigger != false) {
      local_1b8._16_8_ = __real_4000000000000000;
      dVar38 = ___xmm_40080000000000004018000000000000;
      dVar43 = _UNK_151a801b8;
    }
    dVar5 = (double)RenderInterpolationCVars::RenderInterpDebugDrawResimBoxScale;
    local_1b8._16_8_ = (double)local_1b8._16_8_ * dVar5;
    local_1b8._8_8_ = dVar43 * dVar5;
    local_1b8._0_8_ = (FScriptContainerElement *)(dVar38 * dVar5);
    fVar60 = __real_3fc00000;
    if (RenderInterpolationCVars::bRenderInterpDebugDrawResimTrigger != false) {
      fVar60 = __real_3f000000;
    }
    fVar60 = RenderInterpolationCVars::RenderInterpDebugDrawResimBoxScale * fVar60;
    if (RenderInterpolationCVars::bRenderInterpDebugDrawResimTrigger == false) {
      pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
      fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
      pTVar26 = (TQuat<double> *)
                Chaos::FGeometryParticleState::GetR(&local_1e0,(TRotation<double,3> *)&local_f8);
      pTVar23 = Chaos::TParticles<double,3>::GetX
                          (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
      Chaos::FDebugDrawQueue::DrawDebugBox
                (pFVar22,(TVector<double> *)pTVar23,(TVector<double> *)local_1b8,pTVar26,
                 &FColor::White,false,fVar61,'\0',fVar60);
      local_178._s_0.X = (double)Chaos::FDebugDrawQueue::GetInstance();
      fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
      pTVar23 = Chaos::TParticles<double,3>::GetX
                          (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
      pTVar13 = local_1e0.Particle;
      if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
         (pFVar20 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                              (&(local_1e0.State)->ParticlePositionRotation,local_1e0.FrameAndPhase,
                               local_1e0.Pool), pFVar20 == (FParticlePositionRotation *)0x0)) {
        pFVar20 = (FParticlePositionRotation *)
                  Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)
                             (((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                              &pTVar13->_padding_)->AllocatorInstance).Data,
                             ((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                             &pTVar13->_padding_)->ArrayNum);
      }
      local_158._s_0.X =
           (*(double *)&(param_2->TargetState).Position - *(double *)&pFVar20->MX) +
           *(double *)pTVar23;
      local_158._s_0.Y =
           (*(double *)&(param_2->TargetState).Position.field_0x8 -
           *(double *)&(pFVar20->MX).field_0x8) + *(double *)&pTVar23->field_0x8;
      local_158._s_0.Z =
           (*(double *)&(param_2->TargetState).Position.field_0x10 -
           *(double *)&(pFVar20->MX).field_0x10) + *(double *)&pTVar23->field_0x10;
      Chaos::FDebugDrawQueue::DrawDebugBox
                ((FDebugDrawQueue *)local_178._s_0.X,(TVector<double> *)&local_158._s_0,
                 (TVector<double> *)local_1b8,&(param_2->TargetState).Quaternion,
                 (FColor *)&local_138,false,fVar61,'\0',fVar60);
      if (local_res8._0_1_ != '\0') {
        pFVar22 = (FDebugDrawQueue *)0x0;
        if ((char)((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                  &(local_1e0.Particle)->_padding_)->ArrayMax != '\0') {
          pFVar22 = (FDebugDrawQueue *)local_1e0.Particle;
        }
        if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
           (pFVar21 = Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                                (&(local_1e0.State)->Velocities,local_1e0.FrameAndPhase,
                                 local_1e0.Pool), pFVar21 == (FParticleVelocities *)0x0)) {
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)
                     (pFVar22->CommandQueue).AllocatorInstance.Data,(TVector<double,3> *)&local_198,
                     (pFVar22->CommandQueue).ArrayNum);
          local_118._16_8_ = local_198.Z;
          dVar38 = local_198.X;
          dVar43 = local_198.Y;
          pFVar7 = (FScriptContainerElement *)local_198.Z;
        }
        else {
          dVar38 = (double)(float)*(undefined8 *)&pFVar21->MV;
          dVar43 = (double)(float)((ulonglong)*(undefined8 *)&pFVar21->MV >> 0x20);
          pFVar7 = (FScriptContainerElement *)(double)*(float *)&(pFVar21->MV).field_0x8;
        }
        dVar5 = *(double *)&(param_2->TargetState).LinVel;
        dVar1 = *(double *)&(param_2->TargetState).LinVel.field_0x8;
        dVar44 = *(double *)&(param_2->TargetState).LinVel.field_0x10;
        pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
        fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        local_158._s_0.X = (dVar5 - dVar38) + *(double *)pTVar23;
        local_158._s_0.Y = (dVar1 - dVar43) + *(double *)&pTVar23->field_0x8;
        local_158._s_0.Z = (dVar44 - (double)pFVar7) + *(double *)&pTVar23->field_0x10;
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar22,(TVector<double> *)pTVar23,(TVector<double> *)&local_158._s_0,fVar37,
                   &FColor::Orange,false,fVar61,'\0',fVar60);
      }
      if (bVar12) {
        pTVar23 = Chaos::FGeometryParticleState::GetW(&local_1e0,(TVector<double,3> *)local_118);
        dVar38 = *(double *)&(param_2->TargetState).AngVel;
        dVar43 = *(double *)&(param_2->TargetState).AngVel.field_0x8;
        dVar5 = *(double *)&(param_2->TargetState).AngVel.field_0x10;
        dVar1 = *(double *)pTVar23;
        dVar44 = *(double *)&pTVar23->field_0x8;
        dVar49 = *(double *)&pTVar23->field_0x10;
        pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
        fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
        pFVar24 = (FReplicatedPhysicsTargetAsync *)
                  Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        pTVar23 = Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        pTVar29 = &local_158;
        local_158._s_0.X = (dVar38 - dVar1 * dVar2) + *(double *)pTVar23;
        local_158._s_0.Y = (dVar43 - dVar44 * dVar2) + *(double *)&pTVar23->field_0x8;
        local_158._s_0.Z = (dVar5 - dVar49 * dVar2) + *(double *)&pTVar23->field_0x10;
        goto LAB_14831f103;
      }
    }
    else {
      pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
      fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
      local_178._s_0.X =
           (double)Chaos::FGeometryParticleState::GetR(&local_1e0,(TRotation<double,3> *)&local_f8);
      pTVar13 = local_1e0.Particle;
      if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
         (pFVar20 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                              (&(local_1e0.State)->ParticlePositionRotation,local_1e0.FrameAndPhase,
                               local_1e0.Pool), pFVar20 == (FParticlePositionRotation *)0x0)) {
        pFVar20 = (FParticlePositionRotation *)
                  Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)
                             (((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                              &pTVar13->_padding_)->AllocatorInstance).Data,
                             ((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                             &pTVar13->_padding_)->ArrayNum);
      }
      Chaos::FDebugDrawQueue::DrawDebugBox
                (pFVar22,(TVector<double> *)pFVar20,(TVector<double> *)local_1b8,
                 (TQuat<double> *)local_178._s_0.X,&FColor::White,false,fVar61,'\0',fVar60);
      pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
      Chaos::FDebugDrawQueue::DrawDebugBox
                (pFVar22,(TVector<double> *)param_2,(TVector<double> *)local_1b8,
                 &(param_2->TargetState).Quaternion,(FColor *)&local_138,false,
                 PhysicsReplicationCVars::DebugDrawLifeTime,'\0',fVar60);
      local_138 = Chaos::FDebugDrawQueue::GetInstance();
      fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
      local_178._s_0.X = (double)local_1e0.Particle;
      if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
         (pFVar20 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                              (&(local_1e0.State)->ParticlePositionRotation,local_1e0.FrameAndPhase,
                               local_1e0.Pool), pFVar20 == (FParticlePositionRotation *)0x0)) {
        pFVar20 = (FParticlePositionRotation *)
                  Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)local_178._s_0.X,
                             *(int *)((longlong)local_178._s_0.X + 8));
      }
      pTVar23 = Chaos::TParticles<double,3>::GetX
                          (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
      Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                (local_138,(TVector<double> *)pTVar23,(TVector<double> *)pFVar20,fVar37,
                 &FColor::White,false,fVar61,'\0',fVar60);
      pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
      pTVar13 = local_1e0.Particle;
      fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
      if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
         (pFVar20 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                              (&(local_1e0.State)->ParticlePositionRotation,local_1e0.FrameAndPhase,
                               local_1e0.Pool), pFVar20 == (FParticlePositionRotation *)0x0)) {
        pFVar20 = (FParticlePositionRotation *)
                  Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)
                             (((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                              &pTVar13->_padding_)->AllocatorInstance).Data,
                             ((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                             &pTVar13->_padding_)->ArrayNum);
      }
      Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                (pFVar22,(TVector<double> *)pFVar20,(TVector<double> *)param_2,fVar37,&FColor::Black
                 ,false,fVar61,'\0',fVar60);
      if (local_res8._0_1_ != '\0') {
        pTVar23 = Chaos::FGeometryParticleState::GetV(&local_1e0,(TVector<double,3> *)local_118);
        dVar38 = *(double *)&(param_2->TargetState).LinVel;
        dVar43 = *(double *)&(param_2->TargetState).LinVel.field_0x8;
        dVar5 = *(double *)&(param_2->TargetState).LinVel.field_0x10;
        dVar1 = *(double *)pTVar23;
        dVar44 = *(double *)&pTVar23->field_0x8;
        dVar49 = *(double *)&pTVar23->field_0x10;
        pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
        local_1b8._16_8_ = (dVar5 - dVar49) + *(double *)&(param_2->TargetState).Position.field_0x10
        ;
        local_1b8._8_8_ = (dVar43 - dVar44) + *(double *)&(param_2->TargetState).Position.field_0x8;
        local_1b8._0_8_ =
             (FScriptContainerElement *)
             ((dVar38 - dVar1) + *(double *)&(param_2->TargetState).Position);
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar22,(TVector<double> *)param_2,(TVector<double> *)local_1b8,fVar37,
                   &FColor::Orange,false,PhysicsReplicationCVars::DebugDrawLifeTime,'\0',fVar60);
      }
      if (bVar12) {
        pTVar23 = Chaos::FGeometryParticleState::GetW(&local_1e0,(TVector<double,3> *)local_118);
        dVar38 = *(double *)&(param_2->TargetState).AngVel;
        dVar43 = *(double *)&(param_2->TargetState).AngVel.field_0x8;
        dVar5 = *(double *)&(param_2->TargetState).AngVel.field_0x10;
        dVar1 = *(double *)pTVar23;
        dVar44 = *(double *)&pTVar23->field_0x8;
        dVar49 = *(double *)&pTVar23->field_0x10;
        pFVar22 = Chaos::FDebugDrawQueue::GetInstance();
        local_1b8._16_8_ =
             (dVar5 - dVar49 * dVar2) + *(double *)&(param_2->TargetState).Position.field_0x10;
        pTVar29 = (TVector<double>_u_0 *)local_1b8;
        local_1b8._8_8_ =
             (dVar43 - dVar44 * dVar2) + *(double *)&(param_2->TargetState).Position.field_0x8;
        local_1b8._0_8_ =
             (FScriptContainerElement *)
             ((dVar38 - dVar1 * dVar2) + *(double *)&(param_2->TargetState).Position);
        pFVar24 = param_2;
        fVar61 = PhysicsReplicationCVars::DebugDrawLifeTime;
LAB_14831f103:
        Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar22,(TVector<double> *)&pTVar29->_s_0,(TVector<double> *)pFVar24,fVar37,
                   &FColor::Magenta,false,fVar61,'\0',fVar60);
      }
    }
  }
  EVar16 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  lVar31 = local_128;
  if ((EVar16 == Sleeping) && (bVar27 == 0)) {
    Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
              (*(FPBDRigidsEvolutionBase **)(local_128 + 0xbd0),param_1,Dynamic);
  }
  if (((bVar15 == false) || (param_2->TickCount != 0)) || (iVar34 <= local_d8->BlockResimFrame)) {
    cVar14 = PhysicsReplicationCVars::ResimulationCVars::bRuntimeCorrectionEnabled;
    if ((this->SettingsCurrent).ResimulationSettings.bOverrideRuntimeCorrectionEnabled != 0) {
      cVar14 = (this->SettingsCurrent).ResimulationSettings.bRuntimeCorrectionEnabled;
    }
    uVar54 = local_130;
    if (cVar14 != '\0') {
      iVar34 = (*(int *)(lVar31 + 0x328) - param_2->TickCount) - iVar34;
      iVar3 = param_2->TickCount;
      iVar4 = iVar3 - iVar34;
      if (iVar3 <= iVar34) {
        if (0 < iVar34) {
          if ((local_1e0.State == (FGeometryParticleStateBase *)0x0) ||
             (pFVar20 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                                  (&(local_1e0.State)->ParticlePositionRotation,
                                   local_1e0.FrameAndPhase,local_1e0.Pool),
             pFVar20 == (FParticlePositionRotation *)0x0)) {
            pFVar20 = (FParticlePositionRotation *)
                      Chaos::TParticles<double,3>::GetX
                                ((TParticles<double,3> *)
                                 (((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                                  &(local_1e0.Particle)->_padding_)->AllocatorInstance).Data,
                                 ((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)
                                 &(local_1e0.Particle)->_padding_)->ArrayNum);
          }
          dVar2 = *(double *)&(param_2->TargetState).Position;
          dVar38 = *(double *)&(param_2->TargetState).Position.field_0x8;
          dVar43 = *(double *)&(param_2->TargetState).Position.field_0x10;
          dVar5 = *(double *)&pFVar20->MX;
          dVar1 = *(double *)&(pFVar20->MX).field_0x8;
          dVar44 = *(double *)&(pFVar20->MX).field_0x10;
          fVar60 = PhysicsReplicationCVars::ResimulationCVars::PosStabilityMultiplier;
          if ((this->SettingsCurrent).ResimulationSettings.bOverridePosStabilityMultiplier != 0) {
            fVar60 = (this->SettingsCurrent).ResimulationSettings.PosStabilityMultiplier;
          }
          fVar61 = (float)iVar34;
          dVar49 = (double)(fVar60 / fVar61);
          pTVar23 = Chaos::TParticles<double,3>::GetX
                              (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
          pFVar22 = (FDebugDrawQueue *)(dVar49 * (dVar2 - dVar5) + *(double *)pTVar23);
          dVar2 = dVar49 * (dVar38 - dVar1) + *(double *)&pTVar23->field_0x8;
          local_178._s_0.Z = dVar49 * (dVar43 - dVar44) + *(double *)&pTVar23->field_0x10;
          fVar60 = PhysicsReplicationCVars::ResimulationCVars::RotStabilityMultiplier;
          if ((this->SettingsCurrent).ResimulationSettings.bOverrideRotStabilityMultiplier != 0) {
            fVar60 = (this->SettingsCurrent).ResimulationSettings.RotStabilityMultiplier;
          }
          local_178._s_0.X = (double)pFVar22;
          local_178._s_0.Y = dVar2;
          pTVar25 = Chaos::FGeometryParticleState::GetR(&local_1e0,(TRotation<double,3> *)local_118)
          ;
          dVar5 = (param_2->TargetState).Quaternion.Z;
          dVar6 = (param_2->TargetState).Quaternion.W;
          dVar53 = (param_2->TargetState).Quaternion.X;
          dVar57 = (param_2->TargetState).Quaternion.Y;
          dVar56 = *(double *)pTVar25 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]
          ;
          dVar59 = *(double *)&pTVar25->field_0x8 *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar38 = *(double *)&pTVar25->field_0x10 *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar43 = *(double *)&pTVar25->field_0x18 *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar52._8_4_ = SUB84(dVar43,0);
          auVar52._0_8_ = dVar43;
          auVar52._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          auVar45._8_4_ = SUB84(dVar59,0);
          auVar45._0_8_ = dVar59;
          auVar45._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          auVar62._8_4_ = SUB84(dVar38,0);
          auVar62._0_8_ = dVar38;
          auVar62._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          dVar1 = dVar56 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar43 * dVar53 +
                  dVar59 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar38 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar44 = dVar56 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + auVar52._8_8_ * dVar57 +
                   auVar45._8_8_ * dVar6 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar62._8_8_ * dVar53 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar49 = dVar56 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar43 * dVar5 +
                   dVar59 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + dVar38 * dVar6 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar6 = dVar56 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar43 * dVar6 +
                  dVar59 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                  + dVar38 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
          ;
          pTVar25 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
                              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                               (TRotation<double,3> *)local_118);
          auVar52 = *(undefined1 (*) [16])pTVar25;
          auVar62 = *(undefined1 (*) [16])&pTVar25->field_0x10;
          dVar38 = auVar52._0_8_;
          dVar53 = auVar62._8_8_;
          auVar50._8_4_ = auVar52._0_4_;
          auVar50._0_8_ = dVar38;
          auVar50._12_4_ = auVar52._4_4_;
          dVar43 = auVar52._8_8_;
          auVar39._8_4_ = auVar62._8_4_;
          auVar39._0_8_ = dVar53;
          auVar39._12_4_ = auVar62._12_4_;
          auVar46._8_4_ = auVar52._8_4_;
          auVar46._0_8_ = dVar43;
          auVar46._12_4_ = auVar52._12_4_;
          dVar5 = auVar62._0_8_;
          auVar40._8_4_ = auVar62._0_4_;
          auVar40._0_8_ = dVar5;
          auVar40._12_4_ = auVar62._4_4_;
          local_f8.X = dVar38 * dVar6 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar53 * dVar1 +
                       dVar43 * dVar49 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       dVar5 * dVar44 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_f8.Y = auVar50._8_8_ * dVar49 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       auVar39._8_8_ * dVar44 +
                       auVar46._8_8_ * dVar6 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar40._8_8_ * dVar1 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_f8.Z = dVar38 * dVar44 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar53 * dVar49 +
                       dVar43 * dVar1 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar5 * dVar6 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_f8.W = dVar38 * dVar1 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       dVar53 * dVar6 +
                       dVar43 * dVar44 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       dVar5 * dVar49 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          pTVar26 = (TQuat<double> *)
                    Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
                              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                               (TRotation<double,3> *)local_118);
          auVar51._0_8_ = (double)(fVar60 / fVar61);
          auVar51._8_8_ = 0;
          pTVar26 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (&local_198,pTVar26,&local_f8,auVar51._0_8_);
          dVar38 = pTVar26->X;
          dVar43 = pTVar26->Y;
          dVar5 = pTVar26->Z;
          dVar1 = pTVar26->W;
          local_res8 = __real_3e45798ee0000000;
          dVar44 = dVar38 * dVar38 + dVar5 * dVar5;
          dVar49 = dVar43 * dVar43 + dVar1 * dVar1;
          auVar41._8_4_ = SUB84(dVar49,0);
          auVar41._0_8_ = dVar44;
          auVar41._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
          auVar42._0_8_ = auVar41._8_8_ + dVar44;
          auVar42._8_8_ = dVar44 + dVar49;
          auVar52 = sqrtpd(auVar51,auVar42);
          uVar35 = -(ulonglong)(__real_3e45798ee0000000 <= auVar42._0_8_);
          uVar36 = -(ulonglong)(__real_3e45798ee0000000 <= auVar42._8_8_);
          auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
          uVar54 = (uint)(uVar35 >> 0x20);
          uVar55 = (uint)(uVar36 >> 0x20);
          auVar63._0_8_ = uVar35 & (ulonglong)(auVar62._0_8_ * dVar38);
          uVar8 = uVar36 & (ulonglong)(auVar62._8_8_ * dVar43);
          auVar63._8_4_ = (undefined4)uVar8;
          auVar63._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar47._0_4_ =
               ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar47._4_4_ =
               ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar47._8_4_ =
               ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar47._12_4_ =
               ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
          auVar58._0_4_ =
               ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar58._4_4_ =
               ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar58._8_4_ =
               ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar58._12_4_ =
               ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar48._0_8_ = (ulonglong)(auVar52._0_8_ * dVar5) & uVar35;
          uVar36 = (ulonglong)(auVar52._8_8_ * dVar1) & uVar36;
          auVar48._8_4_ = (undefined4)uVar36;
          auVar48._12_4_ = (undefined4)(uVar36 >> 0x20);
          local_1b8._0_16_ = auVar58 | auVar48;
          cVar14 = PhysicsReplicationCVars::ResimulationCVars::bRuntimeVelocityCorrection;
          if ((this->SettingsCurrent).ResimulationSettings.bOverrideRuntimeVelocityCorrection != 0)
          {
            cVar14 = (this->SettingsCurrent).ResimulationSettings.bRuntimeVelocityCorrection;
          }
          if (cVar14 != '\0') {
            pTVar23 = Chaos::FGeometryParticleState::GetV(&local_1e0,(TVector<double,3> *)local_118)
            ;
            dVar38 = *(double *)&(param_2->TargetState).LinVel;
            dVar43 = *(double *)&(param_2->TargetState).LinVel.field_0x8;
            dVar5 = *(double *)&(param_2->TargetState).LinVel.field_0x10;
            dVar1 = *(double *)pTVar23;
            dVar44 = *(double *)&pTVar23->field_0x8;
            dVar49 = *(double *)&pTVar23->field_0x10;
            fVar60 = PhysicsReplicationCVars::ResimulationCVars::VelStabilityMultiplier;
            if ((this->SettingsCurrent).ResimulationSettings.bOverrideVelStabilityMultiplier != 0) {
              fVar60 = (this->SettingsCurrent).ResimulationSettings.VelStabilityMultiplier;
            }
            dVar6 = (double)(fVar60 / fVar61);
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       (TVector<double,3> *)&local_158._s_0,*(int *)&param_1->field_0x8);
            dVar57 = dVar6 * (dVar38 - dVar1) + local_158._s_0.X;
            dVar53 = *(double *)&(param_2->TargetState).AngVel * __real_3f91df46a0000000;
            dVar1 = dVar6 * (dVar43 - dVar44) + local_158._s_0.Y;
            local_118._16_8_ =
                 (FScriptContainerElement *)(dVar6 * (dVar5 - dVar49) + local_158._s_0.Z);
            dVar44 = *(double *)&(param_2->TargetState).AngVel.field_0x8 * __real_3f91df46a0000000;
            dVar49 = *(double *)&(param_2->TargetState).AngVel.field_0x10 * __real_3f91df46a0000000;
            pTVar23 = Chaos::FGeometryParticleState::GetW
                                (&local_1e0,(TVector<double,3> *)&local_198);
            dVar38 = *(double *)pTVar23;
            dVar43 = *(double *)&pTVar23->field_0x8;
            dVar5 = *(double *)&pTVar23->field_0x10;
            fVar60 = PhysicsReplicationCVars::ResimulationCVars::AngVelStabilityMultiplier;
            if ((this->SettingsCurrent).ResimulationSettings.bOverrideAngVelStabilityMultiplier != 0
               ) {
              fVar60 = (this->SettingsCurrent).ResimulationSettings.AngVelStabilityMultiplier;
            }
            dVar6 = (double)(fVar60 / (float)iVar34);
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       (TVector<double,3> *)&local_158._s_0,*(int *)&param_1->field_0x8);
            local_198.Z = (double)local_118._16_8_;
            local_198.X = dVar57;
            local_198.Y = dVar1;
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&local_198);
            local_198.Z = dVar6 * (dVar49 - dVar5) + local_158._s_0.Z;
            local_198.Y = dVar6 * (dVar44 - dVar43) + local_158._s_0.Y;
            local_198.X = dVar6 * (dVar53 - dVar38) + local_158._s_0.X;
            Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
                      (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                       *(int *)&param_1->field_0x8,(TVector<double,3> *)&local_198);
          }
          auVar52 = local_1b8._0_16_;
          if (PhysicsReplicationCVars::ResimulationCVars::bDrawDebug != false) {
            this_00 = Chaos::FDebugDrawQueue::GetInstance();
            fVar60 = PhysicsReplicationCVars::DebugDrawLifeTime;
            FVar17 = FColor::MakeRandomSeededColor((int)&local_res8);
            pTVar23 = Chaos::TParticles<double,3>::GetX
                                (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
            Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
                      (this_00,(TVector<double> *)pTVar23,(TVector<double> *)&local_178._s_0,fVar37,
                       (FColor *)CONCAT44(extraout_var,FVar17.field0_0x0),false,fVar60,'\0',
                       __real_3f000000);
            lVar31 = local_128;
          }
          bVar28 = PhysicsReplicationCVars::ResimulationCVars::bRuntimeCorrectConnectedBodies;
          if ((this->SettingsCurrent).ResimulationSettings.bOverrideRuntimeCorrectConnectedBodies !=
              0) {
            bVar28 = (this->SettingsCurrent).ResimulationSettings.bRuntimeCorrectConnectedBodies;
          }
          local_198.Y = dVar2;
          local_198.X = (double)pFVar22;
          local_198.Z = local_178._s_0.Z;
          local_118._0_16_ = auVar63 | auVar47;
          local_118._16_16_ = auVar52;
          Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
                    (*(FPBDRigidsEvolutionGBF **)(lVar31 + 0xbd0),
                     (TGeometryParticleHandleImp<double,3,1> *)param_1,
                     (TVector<double,3> *)&local_198,(TRotation<double,3> *)local_118,bVar28,true,
                     &this->ReplicatedParticleIDs);
        }
        iVar3 = param_2->TickCount;
        iVar4 = iVar3 - iVar34;
      }
      uVar32 = SBORROW4(iVar3,iVar34) == iVar4 < 0;
      uVar54 = (uint)(byte)uVar32;
      if (SBORROW4(iVar3,iVar34) != iVar4 < 0) goto LAB_14831f849;
    }
  }
  else {
    Chaos::FRewindData::RequestResimulation
              (local_d8,iVar34,(TGeometryParticleHandleImp<double,3,1> *)param_1);
    uVar54 = local_130;
  }
  uVar32 = (undefined1)uVar54;
  if (bVar27 != 0) {
    local_f8.X = (param_2->TargetState).Quaternion.X;
    local_f8.Y = (param_2->TargetState).Quaternion.Y;
    local_f8.Z = (param_2->TargetState).Quaternion.Z;
    local_f8.W = (param_2->TargetState).Quaternion.W;
    local_198._0_16_ = *(undefined1 (*) [16])&(param_2->TargetState).Position;
    local_198.Z = *(double *)&(param_2->TargetState).Position.field_0x10;
    Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
              (*(FPBDRigidsEvolutionGBF **)(lVar31 + 0xbd0),
               (TGeometryParticleHandleImp<double,3,1> *)param_1,(TVector<double,3> *)&local_198,
               (TRotation<double,3> *)&local_f8,true,true,&this->ReplicatedParticleIDs);
    Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
              (*(FPBDRigidsEvolutionBase **)(lVar31 + 0xbd0),param_1,Sleeping);
    if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bSleepConnectedBodies == false) {
      return (bool)uVar32;
    }
    Chaos::FPBDRigidsEvolutionGBF::ApplySleepOnConnectedParticles
              (*(FPBDRigidsEvolutionGBF **)(lVar31 + 0xbd0),
               (TGeometryParticleHandleImp<double,3,1> *)param_1);
    return (bool)uVar32;
  }
LAB_14831f849:
  if (-1 < param_2->WaitForServerFrame) {
    uVar32 = 0;
  }
  return (bool)uVar32;
}

// UpdateAsyncTarget @ 148326c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPhysicsReplicationAsync::UpdateAsyncTarget
          (FPhysicsReplicationAsync *this,FPhysicsRepAsyncInputData *param_1,
          FPBDRigidsSolver *param_2)

{
  EPhysicsReplicationMode EVar1;
  FPhysicsObject *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  FColor FVar10;
  FReplicatedPhysicsTargetAsync *pFVar11;
  FReplicatedPhysicsTargetAsync *pFVar12;
  FDebugDrawQueue *this_00;
  undefined4 extraout_var;
  FVector_NetQuantize100 *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 local_res20 [8];
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [3];
  
  pFVar2 = param_1->PhysicsObject;
  if (pFVar2 != (FPhysicsObject *)0x0) {
    pFVar11 = TMapBase<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>_>
              ::Find((TMapBase<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsObject_const_*,FReplicatedPhysicsTargetAsync,0>_>
                      *)&this->ObjectToTarget,pFVar2);
    pFVar12 = pFVar11;
    if (pFVar11 == (FReplicatedPhysicsTargetAsync *)0x0) {
      pFVar12 = AddObjectToReplication(this,pFVar2);
      dVar22 = *(double *)&(param_1->TargetState).Position.field_0x8;
      (pFVar12->PrevPos).field0_0x0._s_0.X = *(double *)&(param_1->TargetState).Position;
      (pFVar12->PrevPos).field0_0x0._s_0.Y = dVar22;
      (pFVar12->PrevPos).field0_0x0._s_0.Z = *(double *)&(param_1->TargetState).Position.field_0x10;
      dVar22 = *(double *)&(param_1->TargetState).Position.field_0x8;
      (pFVar12->PrevPosTarget).field0_0x0._s_0.X = *(double *)&(param_1->TargetState).Position;
      (pFVar12->PrevPosTarget).field0_0x0._s_0.Y = dVar22;
      (pFVar12->PrevPosTarget).field0_0x0._s_0.Z =
           *(double *)&(param_1->TargetState).Position.field_0x10;
      dVar22 = (param_1->TargetState).Quaternion.Y;
      (pFVar12->PrevRotTarget).X = (param_1->TargetState).Quaternion.X;
      (pFVar12->PrevRotTarget).Y = dVar22;
      dVar22 = (param_1->TargetState).Quaternion.W;
      (pFVar12->PrevRotTarget).Z = (param_1->TargetState).Quaternion.Z;
      (pFVar12->PrevRotTarget).W = dVar22;
      dVar22 = *(double *)&(param_1->TargetState).LinVel.field_0x8;
      (pFVar12->PrevLinVel).field0_0x0._s_0.X = *(double *)&(param_1->TargetState).LinVel;
      (pFVar12->PrevLinVel).field0_0x0._s_0.Y = dVar22;
      (pFVar12->PrevLinVel).field0_0x0._s_0.Z = *(double *)&(param_1->TargetState).LinVel.field_0x10
      ;
      pFVar12->RepModeOverride = param_1->RepMode;
    }
    if ((pFVar12 == (FReplicatedPhysicsTargetAsync *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Target",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                           ,0x43f,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pFVar11 == (FReplicatedPhysicsTargetAsync *)0x0) || (param_1->ServerFrame == 0)) ||
       (pFVar12->ServerFrame < param_1->ServerFrame)) {
      iVar16 = pFVar12->ServerFrame;
      iVar15 = param_2->CurrentFrame;
      if (iVar16 < 0) {
        iVar17 = 0;
        iVar16 = 0;
      }
      else {
        iVar17 = pFVar12->TickCount;
        if (iVar16 < 1) {
          iVar16 = 0;
        }
        else {
          iVar16 = param_1->ServerFrame - iVar16;
        }
      }
      bVar8 = pFVar12->bAllowTargetAltering;
      if ((param_1->FrameOffset).bIsSet == true) {
        bVar18 = pFVar12->FrameOffset != (param_1->FrameOffset).TypedValue;
      }
      else {
        bVar18 = true;
      }
      if ((((pFVar12->TargetState).Flags & 1) == 0) && (((param_1->TargetState).Flags & 1) == 0)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      local_a8 = *(double *)&(pFVar12->TargetState).LinVel.field_0x10;
      pFVar12->bAllowTargetAltering = bVar9;
      local_b8 = *(double *)&(pFVar12->TargetState).LinVel;
      dStack_b0 = *(double *)&(pFVar12->TargetState).LinVel.field_0x8;
      iVar14 = iVar16;
      if (iVar16 < 1) {
        iVar14 = pFVar12->ReceiveFrame;
        if (iVar14 < 0) {
          iVar14 = iVar15 + -1;
        }
        iVar14 = iVar15 - iVar14;
      }
      pFVar12->ReceiveInterval = iVar14;
      pFVar12->ServerFrame = param_1->ServerFrame;
      pFVar12->ReceiveFrame = iVar15;
      uVar4 = *(undefined8 *)&(param_1->TargetState).Position.field_0x8;
      *(undefined8 *)&(pFVar12->TargetState).Position =
           *(undefined8 *)&(param_1->TargetState).Position;
      *(undefined8 *)&(pFVar12->TargetState).Position.field_0x8 = uVar4;
      uVar4 = *(undefined8 *)&(param_1->TargetState).field_0x18;
      *(undefined8 *)&(pFVar12->TargetState).Position.field_0x10 =
           *(undefined8 *)&(param_1->TargetState).Position.field_0x10;
      *(undefined8 *)&(pFVar12->TargetState).field_0x18 = uVar4;
      dVar22 = (param_1->TargetState).Quaternion.Y;
      (pFVar12->TargetState).Quaternion.X = (param_1->TargetState).Quaternion.X;
      (pFVar12->TargetState).Quaternion.Y = dVar22;
      dVar22 = (param_1->TargetState).Quaternion.W;
      (pFVar12->TargetState).Quaternion.Z = (param_1->TargetState).Quaternion.Z;
      (pFVar12->TargetState).Quaternion.W = dVar22;
      uVar4 = *(undefined8 *)&(param_1->TargetState).LinVel.field_0x8;
      *(undefined8 *)&(pFVar12->TargetState).LinVel = *(undefined8 *)&(param_1->TargetState).LinVel;
      *(undefined8 *)&(pFVar12->TargetState).LinVel.field_0x8 = uVar4;
      uVar4 = *(undefined8 *)&(param_1->TargetState).AngVel;
      *(undefined8 *)&(pFVar12->TargetState).LinVel.field_0x10 =
           *(undefined8 *)&(param_1->TargetState).LinVel.field_0x10;
      *(undefined8 *)&(pFVar12->TargetState).AngVel = uVar4;
      uVar4 = *(undefined8 *)&(param_1->TargetState).AngVel.field_0x10;
      *(undefined8 *)&(pFVar12->TargetState).AngVel.field_0x8 =
           *(undefined8 *)&(param_1->TargetState).AngVel.field_0x8;
      *(undefined8 *)&(pFVar12->TargetState).AngVel.field_0x10 = uVar4;
      uVar5 = *(undefined7 *)&(param_1->TargetState).field_0x71;
      uVar4 = *(undefined8 *)&(param_1->TargetState).field_0x78;
      (pFVar12->TargetState).Flags = (param_1->TargetState).Flags;
      *(undefined7 *)&(pFVar12->TargetState).field_0x71 = uVar5;
      *(undefined8 *)&(pFVar12->TargetState).field_0x78 = uVar4;
      EVar1 = param_1->RepMode;
      pFVar12->RepMode = EVar1;
      if ((param_1->FrameOffset).bIsSet == false) {
        iVar15 = 0;
      }
      else {
        iVar15 = (param_1->FrameOffset).TypedValue;
      }
      pFVar12->FrameOffset = iVar15;
      pFVar12->TickCount = 0;
      pFVar12->AccumulatedSleepSeconds = 0.0;
      if (pFVar12->WaitForServerFrame < param_1->ServerFrame) {
        pFVar12->RepModeOverride = EVar1;
        pFVar12->WaitForServerFrame = -1;
      }
      ApplyPhysicsReplicationLOD(this,param_1->PhysicsObject,pFVar12,0xffffffff);
      CheckTargetResimValidity(this,pFVar12);
      fVar6 = __real_3f800000;
      if (pFVar12->RepMode == PredictiveInterpolation) {
        if (PhysicsReplicationCVars::PredictiveInterpolationCVars::bDrawDebugTargets != false) {
          dVar22 = (double)PhysicsReplicationCVars::PredictiveInterpolationCVars::DrawDebugZOffset;
          this_00 = Chaos::FDebugDrawQueue::GetInstance();
          fVar7 = PhysicsReplicationCVars::DebugDrawLifeTime;
          FVar10 = FColor::MakeRandomSeededColor((int)local_res20);
          local_a0._s_0.Z = dVar22 + *(double *)&(param_1->TargetState).Position.field_0x10;
          local_a0._s_0.X = (double)*(undefined8 *)&(param_1->TargetState).Position;
          local_a0._s_0.Y = (double)*(undefined8 *)&(param_1->TargetState).Position.field_0x8;
          local_88[0]._s_0.X = ___xmm_402e000000000000402e000000000000;
          local_88[0]._s_0.Y = _UNK_15148ba88;
          local_88[0]._s_0.Z = __real_402e000000000000;
          Chaos::FDebugDrawQueue::DrawDebugBox
                    (this_00,(TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88[0]._s_0,
                     &(param_1->TargetState).Quaternion,
                     (FColor *)CONCAT44(extraout_var,FVar10.field0_0x0),false,fVar7,'\0',fVar6);
        }
        if (((pFVar12->TickCount == 0) && (pFVar11 != (FReplicatedPhysicsTargetAsync *)0x0)) &&
           ((bVar8 != false && ((pFVar12->bAllowTargetAltering != false && (!bVar18)))))) {
          iVar17 = iVar17 - pFVar12->ReceiveInterval;
          iVar15 = ((int)ROUND(__real_bf000000 -
                               (pFVar12->AverageReceiveInterval + pFVar12->AverageReceiveInterval))
                   >> 1) * PhysicsReplicationCVars::PredictiveInterpolationCVars::
                           TargetTickAlignmentClampMultiplier;
          iVar14 = -iVar15;
          if (iVar17 < -iVar15) {
            iVar14 = iVar17;
          }
          if (iVar15 < iVar14) {
            iVar15 = iVar14;
          }
          pFVar12->TickCount = iVar15;
          if (pFVar12->WaitForServerFrame < 0) {
            ExtrapolateTarget(pFVar12,(float)(double)this->_padding_ * (float)iVar15);
          }
        }
        if (((((PhysicsReplicationCVars::PredictiveInterpolationCVars::TeleportDetectionEnabled == 1
               ) && (pFVar11 != (FReplicatedPhysicsTargetAsync *)0x0)) && (0 < iVar16)) &&
            ((Chaos::ForceDisableAsyncPhysics == 0 && (0.0 <= (double)param_2->_padding_)))) &&
           ((Chaos::UseAsyncInterpolation != 0 &&
            (dVar19 = *(double *)&(param_1->TargetState).Position.field_0x10 -
                      (pFVar12->PrevPosTarget).field0_0x0._s_0.Z,
            dVar21 = *(double *)&(param_1->TargetState).Position.field_0x8 -
                     (pFVar12->PrevPosTarget).field0_0x0._s_0.Y,
            dVar22 = *(double *)&(param_1->TargetState).Position -
                     (pFVar12->PrevPosTarget).field0_0x0._s_0.X,
            dVar22 = dVar21 * dVar21 + dVar22 * dVar22 + dVar19 * dVar19,
            (double)(PhysicsReplicationCVars::PredictiveInterpolationCVars::
                     TeleportDetectionMinDistance *
                    PhysicsReplicationCVars::PredictiveInterpolationCVars::
                    TeleportDetectionMinDistance) < dVar22)))) {
          dVar19 = *(double *)&(param_1->TargetState).LinVel;
          dVar21 = *(double *)&(param_1->TargetState).LinVel.field_0x8;
          dVar20 = *(double *)&(param_1->TargetState).LinVel.field_0x10;
          pFVar13 = (FVector_NetQuantize100 *)&local_b8;
          if (dStack_b0 * dStack_b0 + local_b8 * local_b8 + local_a8 * local_a8 <
              dVar21 * dVar21 + dVar19 * dVar19 + dVar20 * dVar20) {
            pFVar13 = &(param_1->TargetState).LinVel;
          }
          dVar19 = (double)((float)((double)iVar16 * (double)param_2->_padding_) *
                           PhysicsReplicationCVars::PredictiveInterpolationCVars::
                           TeleportDetectionVelocityMultiplier);
          dVar20 = *(double *)&pFVar13->field_0x8 * dVar19;
          dVar21 = *(double *)&pFVar13->field_0x10 * dVar19;
          if ((double)(float)(dVar20 * dVar20 +
                              *(double *)pFVar13 * dVar19 * *(double *)pFVar13 * dVar19 +
                             dVar21 * dVar21) < dVar22) {
            pFVar12->AccumulatedErrorSeconds =
                 PhysicsReplicationCVars::PredictiveInterpolationCVars::ErrorAccumulationSeconds +
                 fVar6;
          }
        }
        dVar22 = *(double *)&(param_1->TargetState).Position.field_0x8;
        (pFVar12->PrevPosTarget).field0_0x0._s_0.X = *(double *)&(param_1->TargetState).Position;
        (pFVar12->PrevPosTarget).field0_0x0._s_0.Y = dVar22;
        (pFVar12->PrevPosTarget).field0_0x0._s_0.Z =
             *(double *)&(param_1->TargetState).Position.field_0x10;
        dVar22 = (param_1->TargetState).Quaternion.Y;
        (pFVar12->PrevRotTarget).X = (param_1->TargetState).Quaternion.X;
        (pFVar12->PrevRotTarget).Y = dVar22;
        dVar22 = (param_1->TargetState).Quaternion.W;
        (pFVar12->PrevRotTarget).Z = (param_1->TargetState).Quaternion.Z;
        (pFVar12->PrevRotTarget).W = dVar22;
      }
    }
    this->LatencyOneWay = param_1->LatencyOneWay;
  }
  return;
}

// UpdateRewindDataTarget @ 14832a260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPhysicsReplicationAsync::UpdateRewindDataTarget
          (FPhysicsReplicationAsync *this,FPhysicsRepAsyncInputData *param_1)

{
  FRewindData *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  FReadPhysicsObjectInterface<1> local_res10 [8];
  TVector<double>_u_0 local_28;
  
  if ((((param_1->PhysicsObject != (FPhysicsObject *)0x0) &&
       ((param_1->FrameOffset).bIsSet != false)) && (this->_padding_ != 0)) &&
     (this_00 = *(FRewindData **)(this->_padding_ + 0x238), this_00 != (FRewindData *)0x0)) {
    local_res10[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
    pTVar4 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle(local_res10,param_1->PhysicsObject);
    if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (((param_1->FrameOffset).bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      dVar2 = *(double *)&(param_1->TargetState).AngVel.field_0x8 * _UNK_150689668;
      local_28._s_0.Z =
           *(double *)&(param_1->TargetState).AngVel.field_0x10 *
           ___xmm_3f91df46a00000003f91df46a0000000;
      local_28._8_4_ = SUB84(dVar2,0);
      local_28._0_8_ =
           *(double *)&(param_1->TargetState).AngVel * ___xmm_3f91df46a00000003f91df46a0000000;
      local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      Chaos::FRewindData::SetTargetStateAtFrame
                (this_00,pTVar4,param_1->ServerFrame - (param_1->FrameOffset).TypedValue,PrePushData
                 ,(TVector<double> *)param_1,&(param_1->TargetState).Quaternion,
                 (TVector<double> *)&(param_1->TargetState).LinVel,(TVector<double> *)&local_28._s_0
                 ,(bool)((param_1->TargetState).Flags & 1));
    }
  }
  return;
}

// UsePhysicsReplicationLOD @ 14832a9d0

bool __thiscall FPhysicsReplicationAsync::UsePhysicsReplicationLOD(FPhysicsReplicationAsync *this)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(this->_padding_ + 600);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 8))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

