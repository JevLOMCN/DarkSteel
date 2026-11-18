// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ToString @ 1440f3140

FString * __thiscall
Chaos::FGeometryParticleState::ToString
          (FGeometryParticleState *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticleID *pFVar5;
  FParticlePositionRotation *pFVar6;
  FParticleVelocities *pFVar7;
  FParticleDynamicMisc *pFVar8;
  FString *pFVar9;
  FParticleMassProps *pFVar10;
  ushort uVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  FParticleID local_res8;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TVector<double,3> local_78;
  TVector<double,3> local_60 [2];
  
  pFVar5 = TGeometryParticlesImp<double,3,0>::ParticleID
                     ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
                      (int)this->Particle->_padding_);
  local_res8 = *pFVar5;
  TGeometryParticlesImp<double,3,0>::ParticleID
            ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
             (int)this->Particle->_padding_);
  ::FString::PrintfImpl(__return_storage_ptr__,L"ParticleID:[Global: %d Local: %d]\n");
  pTVar13 = this->Particle;
  if ((this->State == (FGeometryParticleStateBase *)0x0) ||
     (pFVar6 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                         (&this->State->ParticlePositionRotation,this->FrameAndPhase,this->Pool),
     pFVar6 == (FParticlePositionRotation *)0x0)) {
    TParticles<double,3>::GetX((TParticles<double,3> *)pTVar13->_padding_,(int)pTVar13->_padding_);
  }
  ::FString::PrintfImpl(&local_328,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_338,L"GetX:%s\n");
  pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  iVar14 = local_338.Data.ArrayNum + -1;
  if (local_338.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_338.Data.AllocatorInstance.Data,iVar14);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  pTVar12 = this->Particle;
  uVar16 = 0;
  if ((this->State == (FGeometryParticleStateBase *)0x0) ||
     (pFVar6 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                         (&this->State->ParticlePositionRotation,this->FrameAndPhase,this->Pool),
     pFVar6 == (FParticlePositionRotation *)0x0)) {
    uVar15 = (uint)pTVar12->_padding_;
    uVar4 = uVar16;
    if ((int)uVar15 < *(int *)(pTVar12->_padding_ + 0x50)) {
      uVar4 = ~uVar15 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FString *)(*pcVar2)();
      return pFVar9;
    }
  }
  ::FString::PrintfImpl(&local_308,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  ::FString::PrintfImpl(&local_318,L"GetR:%s\n");
  uVar15 = local_318.Data.ArrayNum - 1;
  if (local_318.Data.ArrayNum == 0) {
    uVar15 = uVar16;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_318.Data.AllocatorInstance.Data,uVar15);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  pTVar12 = pTVar13;
  if (*(undefined1 *)((longlong)&this->Particle->_padding_ + 4) != '\0') {
    pTVar12 = this->Particle;
  }
  if (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar7 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                           (&this->State->Velocities,this->FrameAndPhase,this->Pool),
       pFVar7 == (FParticleVelocities *)0x0)) {
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar12->_padding_,&local_78,
                 (int)pTVar12->_padding_);
      local_60[1]._16_8_ = local_78._16_8_;
    }
    ::FString::PrintfImpl(&local_2e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_2f8,L"GetV:%s\n");
    uVar15 = local_2f8.Data.ArrayNum - 1;
    if (local_2f8.Data.ArrayNum == 0) {
      uVar15 = uVar16;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_2f8.Data.AllocatorInstance.Data,uVar15);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (*(undefined1 *)((longlong)&this->Particle->_padding_ + 4) != '\0') {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar7 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                           (&this->State->Velocities,this->FrameAndPhase,this->Pool),
       pFVar7 == (FParticleVelocities *)0x0)) {
      TKinematicGeometryParticlesImp<double,3,0>::GetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar12->_padding_,local_60,
                 (int)pTVar12->_padding_);
      local_60[1]._16_8_ = local_60[0]._16_8_;
    }
    ::FString::PrintfImpl(&local_2c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_2d8,L"GetW:%s\n");
    uVar15 = local_2d8.Data.ArrayNum - 1;
    if (local_2d8.Data.ArrayNum == 0) {
      uVar15 = uVar16;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_2d8.Data.AllocatorInstance.Data,uVar15);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  pTVar12 = pTVar13;
  if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
    pTVar12 = this->Particle;
  }
  if (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_2a8,L"%f");
    ::FString::PrintfImpl(&local_2b8,L"LinearEtherDrag:%s\n");
    uVar15 = local_2b8.Data.ArrayNum - 1;
    if (local_2b8.Data.ArrayNum == 0) {
      uVar15 = uVar16;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,uVar15);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_288,L"%f");
    ::FString::PrintfImpl(&local_298,L"AngularEtherDrag:%s\n");
    uVar15 = 0;
    uVar16 = local_298.Data.ArrayNum - 1;
    if (local_298.Data.ArrayNum == 0) {
      uVar16 = uVar15;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_298.Data.AllocatorInstance.Data,uVar16);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::MaxLinearSpeedSq
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_268,L"%f");
    ::FString::PrintfImpl(&local_278,L"MaxLinearSpeedSq:%s\n");
    uVar16 = local_278.Data.ArrayNum - 1;
    if (local_278.Data.ArrayNum == 0) {
      uVar16 = uVar15;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_278.Data.AllocatorInstance.Data,uVar16);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::MaxAngularSpeedSq
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_248,L"%f");
    ::FString::PrintfImpl(&local_258,L"MaxAngularSpeedSq:%s\n");
    uVar16 = local_258.Data.ArrayNum - 1;
    if (local_258.Data.ArrayNum == 0) {
      uVar16 = uVar15;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_258.Data.AllocatorInstance.Data,uVar16);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::InitialOverlapDepenetrationVelocity
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_228,L"%f");
    ::FString::PrintfImpl(&local_238,L"InitialOverlapDepenetrationVelocity:%s\n");
    uVar16 = local_238.Data.ArrayNum - 1;
    if (local_238.Data.ArrayNum == 0) {
      uVar16 = uVar15;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_238.Data.AllocatorInstance.Data,uVar16);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::SleepThresholdMultiplier
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_208,L"%f");
    ::FString::PrintfImpl(&local_218,L"SleepThresholdMultiplier:%s\n");
    uVar16 = local_218.Data.ArrayNum - 1;
    if (local_218.Data.ArrayNum == 0) {
      uVar16 = uVar15;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_218.Data.AllocatorInstance.Data,uVar16);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_1e8,L"%d");
    ::FString::PrintfImpl(&local_1f8,L"ObjectState:%s\n");
    uVar16 = local_1f8.Data.ArrayNum - 1;
    if (local_1f8.Data.ArrayNum == 0) {
      uVar16 = uVar15;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,uVar16);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_1c8,L"%d");
    ::FString::PrintfImpl(&local_1d8,L"CollisionGroup:%s\n");
    uVar16 = local_1d8.Data.ArrayNum - 1;
    if (local_1d8.Data.ArrayNum == 0) {
      uVar16 = uVar15;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,uVar16);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar8 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                           (&this->State->DynamicsMisc,this->FrameAndPhase,this->Pool),
       pFVar8 == (FParticleDynamicMisc *)0x0)) {
      uVar16 = (uint)pTVar12->_padding_;
      lVar1 = pTVar12->_padding_;
      if ((int)uVar16 < *(int *)(lVar1 + 0x2e0)) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FString *)(*pcVar2)();
        return pFVar9;
      }
      uVar11 = *(ushort *)(*(longlong *)(lVar1 + 0x2d8) + 8 + (longlong)(int)uVar16 * 0x10);
    }
    else {
      uVar11 = (pFVar8->MControlFlags).field0_0x0.Bits;
    }
    local_res8.GlobalID._0_2_ = uVar11;
    FRigidParticleControlFlags::ToString((FRigidParticleControlFlags *)&local_res8,&local_1a8);
    ::FString::PrintfImpl(&local_1b8,L"ControlFlags:%s\n");
    iVar17 = 0;
    iVar14 = local_1b8.Data.ArrayNum + -1;
    if (local_1b8.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,iVar14);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar10 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                            (&this->State->MassProps,this->FrameAndPhase,this->Pool),
       pFVar10 == (FParticleMassProps *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_188,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_198,L"CenterOfMass:%s\n");
    iVar14 = local_198.Data.ArrayNum + -1;
    if (local_198.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar14);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar10 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                            (&this->State->MassProps,this->FrameAndPhase,this->Pool),
       pFVar10 == (FParticleMassProps *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_168,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::PrintfImpl(&local_178,L"RotationOfMass:%s\n");
    iVar14 = local_178.Data.ArrayNum + -1;
    if (local_178.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar14);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar10 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                            (&this->State->MassProps,this->FrameAndPhase,this->Pool),
       pFVar10 == (FParticleMassProps *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::I((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_148,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_158,L"I:%s\n");
    iVar14 = local_158.Data.ArrayNum + -1;
    if (local_158.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar14);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    pTVar12 = pTVar13;
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar12 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar10 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                            (&this->State->MassProps,this->FrameAndPhase,this->Pool),
       pFVar10 == (FParticleMassProps *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::M((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
    }
    ::FString::PrintfImpl(&local_128,L"%f");
    ::FString::PrintfImpl(&local_138,L"M:%s\n");
    iVar14 = local_138.Data.ArrayNum + -1;
    if (local_138.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar14);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)*(undefined1 *)((longlong)&this->Particle->_padding_ + 4)) {
      pTVar13 = this->Particle;
    }
    if ((this->State == (FGeometryParticleStateBase *)0x0) ||
       (pFVar10 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                            (&this->State->MassProps,this->FrameAndPhase,this->Pool),
       pFVar10 == (FParticleMassProps *)0x0)) {
      TPBDRigidParticleHandleImp<double,3,1>::InvM
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar13);
    }
    ::FString::PrintfImpl(&local_108,L"%f");
    ::FString::PrintfImpl(&local_118,L"InvM:%s\n");
    iVar14 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar14);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (this->State != (FGeometryParticleStateBase *)0x0) {
      TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
                (&this->State->Dynamics,this->FrameAndPhase,this->Pool);
    }
    ::FString::PrintfImpl(&local_e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_f8,L"Acceleration:%s\n");
    iVar14 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar14);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (this->State != (FGeometryParticleStateBase *)0x0) {
      TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
                (&this->State->Dynamics,this->FrameAndPhase,this->Pool);
    }
    ::FString::PrintfImpl(&local_c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_d8,L"AngularAcceleration:%s\n");
    iVar14 = local_d8.Data.ArrayNum + -1;
    if (local_d8.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar14);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (this->State != (FGeometryParticleStateBase *)0x0) {
      TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
                (&this->State->Dynamics,this->FrameAndPhase,this->Pool);
    }
    ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_b8,L"LinearImpulseVelocity:%s\n");
    iVar14 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar14);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (this->State != (FGeometryParticleStateBase *)0x0) {
      TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
                (&this->State->Dynamics,this->FrameAndPhase,this->Pool);
    }
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_98,L"AngularImpulseVelocity:%s\n");
    iVar14 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar14 = iVar17;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar14);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

