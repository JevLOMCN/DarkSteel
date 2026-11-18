// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1472f7450

UClass * __cdecl UParticleModuleAttractorParticle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorParticle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorParticle",
               &Z_Registration_Info_UClass_UParticleModuleAttractorParticle.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorParticle,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorParticle>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorParticle>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorParticle.InnerSingleton;
}

// UParticleModuleAttractorParticle @ 1472fc4f0

UParticleModuleAttractorParticle * __thiscall
UParticleModuleAttractorParticle::UParticleModuleAttractorParticle
          (UParticleModuleAttractorParticle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAttractorParticle__6B_;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  *(undefined4 *)&(this->Range)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Range)._padding_ + 4) = 0;
  (this->Range).MinValue = 0.0;
  (this->Range).MaxValue = 0.0;
  (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  *(undefined4 *)&(this->Strength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Strength)._padding_ + 4) = 0;
  (this->Strength).MinValue = 0.0;
  (this->Strength).MaxValue = 0.0;
  (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleAttractorParticle @ 1472fd7f0

void __thiscall
UParticleModuleAttractorParticle::~UParticleModuleAttractorParticle
          (UParticleModuleAttractorParticle *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleAttractorParticle__6B_;
  pvVar1 = (void *)(this->Strength)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Range)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472fff40

UClass * __cdecl UParticleModuleAttractorParticle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorParticle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorParticle",
               &Z_Registration_Info_UClass_UParticleModuleAttractorParticle.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorParticle,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorParticle>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorParticle>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorParticle.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAttractorParticle @ 147301790

void __cdecl
UParticleModuleAttractorParticle::StaticRegisterNativesUParticleModuleAttractorParticle(void)

{
  return;
}

// UParticleModuleAttractorParticle @ 14815b6e0

UParticleModuleAttractorParticle * __thiscall
UParticleModuleAttractorParticle::UParticleModuleAttractorParticle
          (UParticleModuleAttractorParticle *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleAttractorParticle__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  (this->Range)._padding_ = 0;
  *(undefined4 *)&(this->Range)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Range)._padding_ + 4) = 0;
  (this->Range).MinValue = 0.0;
  (this->Range).MaxValue = 0.0;
  (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  *(undefined4 *)&(this->Strength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Strength)._padding_ + 4) = 0;
  (this->Strength).MinValue = 0.0;
  (this->Strength).MaxValue = 0.0;
  (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->bStrengthByDistance = 1;
  this->bAffectBaseVelocity = 0;
  this->bRenewSource = 0;
  (this->SelectionMethod).Value = '\0';
  this->LastSelIndex = 0;
  this->EmitterName = ::ConstructorStatics.NAME_None;
  return this;
}

// InitializeDefaults @ 148182e10

void __thiscall
UParticleModuleAttractorParticle::InitializeDefaults(UParticleModuleAttractorParticle *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->Range);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionRange");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->Strength);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStrength");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 148189900

void __thiscall
UParticleModuleAttractorParticle::PostInitProperties(UParticleModuleAttractorParticle *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->Range);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionRange");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->Strength);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStrength");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// RequiredBytes @ 148191800

uint __thiscall
UParticleModuleAttractorParticle::RequiredBytes
          (UParticleModuleAttractorParticle *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x14;
}

// Spawn @ 148199f40

void __thiscall
UParticleModuleAttractorParticle::Spawn
          (UParticleModuleAttractorParticle *this,FSpawnContext *param_1)

{
  uchar uVar1;
  longlong *plVar2;
  FBaseParticle *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FParticleRandomSeedInstancePayload *pFVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_28;
  int local_20;
  
  if (this->EmitterName == (FName)0x0) {
    return;
  }
  plVar2 = *(longlong **)(param_1->_padding_ + 0x10);
  (**(code **)(*plVar2 + 0xe8))(plVar2,&local_28);
  iVar9 = 0;
  uVar10 = 0;
  if (local_20 < 1) {
    return;
  }
  lVar12 = 0;
  iVar8 = local_20;
  while( true ) {
    uVar6 = 0;
    if ((int)uVar10 < iVar8) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       iVar8 = local_20, bVar5)) break;
    plVar2 = *(longlong **)(lVar12 + local_28);
    if ((plVar2 != (longlong *)0x0) && (*(FName *)(plVar2[1] + 0x28) == this->EmitterName)) {
      uVar11 = (ulonglong)(uint)param_1->Offset;
      pFVar3 = param_1->ParticleBase;
      lVar12 = (**(code **)(*plVar2 + 0x108))(plVar2,this->LastSelIndex);
      if (lVar12 != 0) {
        iVar9 = this->LastSelIndex;
        this->LastSelIndex = iVar9 + 1;
        *(int *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11) = iVar9;
        return;
      }
      uVar1 = (this->SelectionMethod).Value;
      if (uVar1 == '\0') {
        pFVar7 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                           ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this);
        if (pFVar7 == (FParticleRandomSeedInstancePayload *)0x0) {
          pFVar7 = (FParticleRandomSeedInstancePayload *)
                   (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
        }
        iVar8 = *(int *)((longlong)plVar2 + 0x18c);
        if (0 < iVar8) {
          uVar10 = (pFVar7->RandomStream).Seed * 0xbb38435 + 0x3619636b;
          (pFVar7->RandomStream).Seed = uVar10;
          iVar9 = (int)(((float)(uVar10 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar8);
        }
        this->LastSelIndex = iVar9;
        *(int *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11) = iVar9;
      }
      else if ((uVar1 == '\x01') && (0 < *(int *)((longlong)plVar2 + 0x18c))) {
        do {
          lVar12 = (**(code **)(*plVar2 + 0x108))(plVar2,iVar9);
          if (lVar12 != 0) {
            this->LastSelIndex = iVar9;
            *(int *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11) = iVar9;
            *(int *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11 + 4) = (int)lVar12;
            *(undefined8 *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11 + 8) =
                 *(undefined8 *)(lVar12 + 0x40);
            *(undefined4 *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11 + 0x10) =
                 *(undefined4 *)(lVar12 + 0x48);
            return;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)((longlong)plVar2 + 0x18c));
        *(undefined4 *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11 + 4) = 0;
        return;
      }
      *(undefined4 *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar11 + 4) = 0;
      return;
    }
    uVar10 = uVar10 + 1;
    lVar12 = lVar12 + 8;
    if (iVar8 <= (int)uVar10) {
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Update @ 1481a93b0

void __thiscall
UParticleModuleAttractorParticle::Update
          (UParticleModuleAttractorParticle *this,FUpdateContext *param_1)

{
  float fVar1;
  double dVar2;
  FParticleEmitterInstance *pFVar3;
  FParticleEmitterInstance *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  UParticleLODLevel *pUVar17;
  UParticleLODLevel *pUVar18;
  ulonglong uVar19;
  UObject *pUVar20;
  undefined1 (*pauVar21) [16];
  byte bVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  byte bVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  double dVar55;
  undefined4 uVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  longlong local_158;
  int local_150;
  double local_130;
  double local_118;
  
  pFVar3 = (FParticleEmitterInstance *)param_1->_padding_;
  if (this->EmitterName != (FName)0x0) {
    (**(code **)((longlong)*pFVar3->Component + 0xe8))(pFVar3->Component,&local_158);
    uVar24 = 0;
    if (0 < local_150) {
      lVar26 = 0;
      iVar23 = local_150;
      do {
        uVar15 = 0;
        if ((int)uVar24 < iVar23) {
          uVar15 = ~uVar24 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), iVar23 = local_150, bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = *(FParticleEmitterInstance **)(lVar26 + local_158);
        if ((pFVar4 != (FParticleEmitterInstance *)0x0) &&
           (pFVar4->SpriteTemplate->EmitterName == this->EmitterName)) {
          pUVar17 = UParticleEmitter::GetCurrentLODLevel(pFVar3->SpriteTemplate,pFVar3);
          if ((pUVar17 == (UParticleLODLevel *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LODLevel",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                                  ,0x10dc,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar18 = UParticleEmitter::GetCurrentLODLevel(pFVar3->SpriteTemplate,pFVar4);
          if ((pUVar18 == (UParticleLODLevel *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SrcLODLevel",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                                  ,0x10de,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar13 = __real_3e45798ee0000000;
          dVar12 = __real_3ff0000000000000;
          uVar24 = param_1->Offset;
          fVar1 = param_1->DeltaTime;
          bVar28 = ((pUVar17->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
          lVar26 = param_1->_padding_;
          bVar22 = ((pUVar18->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
          lVar5 = *(longlong *)(lVar26 + 0x168);
          iVar23 = *(int *)(lVar26 + 0x188);
          lVar6 = *(longlong *)(lVar26 + 0x170);
          iVar16 = *(int *)(lVar26 + 0x18c) + -1;
          lVar26 = (longlong)iVar16;
          if (iVar16 < 0) {
            return;
          }
          do {
            uVar27 = (ulonglong)uVar24;
            lVar25 = (ulonglong)((uint)*(ushort *)(lVar6 + lVar26 * 2) * iVar23) + lVar5;
            if ((*(uint *)(lVar25 + 0x6c) & 0x4000000) == 0) {
              if (*(int *)(uVar27 + lVar25) == -1) {
                if (this->bInheritSourceVel != 0) {
                  *(float *)(lVar25 + 0x40) =
                       *(float *)(uVar27 + 8 + lVar25) + *(float *)(lVar25 + 0x40);
                  *(float *)(lVar25 + 0x44) =
                       *(float *)(uVar27 + 0xc + lVar25) + *(float *)(lVar25 + 0x44);
                  *(float *)(lVar25 + 0x48) =
                       *(float *)(uVar27 + 0x10 + lVar25) + *(float *)(lVar25 + 0x48);
                }
              }
              else {
                uVar19 = (**(code **)(pFVar4->_padding_ + 0x108))(pFVar4);
                if (uVar19 != 0) {
                  uVar15 = *(uint *)(uVar27 + 4 + lVar25);
                  if (((uVar15 == 0) || (uVar19 == uVar15)) || (this->bRenewSource != 0)) {
                    pUVar20 = (UObject *)
                              (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
                    fVar29 = FRawDistributionFloat::GetValue
                                       (&this->Range,*(float *)(uVar19 + 0x90),pUVar20,
                                        (FRandomStream *)0x0);
                    dVar2 = *(double *)(uVar19 + 0x28);
                    local_118 = *(double *)(lVar25 + 0x28);
                    dVar57 = *(double *)(uVar19 + 0x18);
                    dVar10 = *(double *)(uVar19 + 0x20);
                    dVar43 = *(double *)(lVar25 + 0x18);
                    dVar8 = *(double *)(lVar25 + 0x20);
                    local_130 = dVar2;
                    if (bVar28 != bVar22) {
                      if (bVar22 != 0) {
                        pauVar21 = (undefined1 (*) [16])
                                   (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))
                                             ();
                        auVar47 = pauVar21[1];
                        dVar37 = auVar47._0_8_;
                        dVar2 = dVar2 * *(double *)pauVar21[5];
                        dVar50 = *(double *)(pauVar21[5] + 8) * 0.0;
                        auVar30 = *pauVar21;
                        auVar33 = *pauVar21;
                        dVar11 = *(double *)(pauVar21[1] + 8);
                        dVar57 = *(double *)pauVar21[4] * dVar57;
                        dVar10 = *(double *)(pauVar21[4] + 8) * dVar10;
                        uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
                        auVar42 = blendpd(auVar30,auVar47,2);
                        auVar58._8_4_ = SUB84(dVar10,0);
                        auVar58._0_8_ = dVar57;
                        auVar58._12_4_ = uVar56;
                        auVar59._0_8_ = auVar58._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar57;
                        auVar59._8_8_ = dVar2 * auVar30._8_8_ - dVar37 * dVar10;
                        auVar44._8_4_ = SUB84(dVar10,0);
                        auVar44._0_8_ = dVar57;
                        auVar44._12_4_ = uVar56;
                        auVar30._8_4_ = SUB84(dVar50,0);
                        auVar30._0_8_ = dVar2;
                        auVar30._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                        auVar30 = blendpd(auVar44,auVar30,2);
                        auVar51._8_4_ = SUB84(auVar59._8_8_,0);
                        auVar51._0_8_ = auVar59._0_8_;
                        auVar51._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
                        auVar31._0_8_ = auVar30._0_8_ * dVar37 - auVar42._0_8_ * dVar2;
                        auVar31._8_8_ = auVar30._8_8_ * auVar47._8_8_ - auVar42._8_8_ * dVar50;
                        auVar30 = blendpd(auVar59,auVar31,2);
                        dVar50 = auVar51._8_8_ + auVar51._8_8_;
                        dVar55 = auVar31._0_8_ + auVar31._0_8_;
                        auVar60._0_8_ = auVar30._0_8_ + auVar30._0_8_;
                        auVar60._8_8_ = auVar30._8_8_ + auVar30._8_8_;
                        auVar45._8_4_ = SUB84(dVar55,0);
                        auVar45._0_8_ = dVar50;
                        uVar56 = (undefined4)((ulonglong)dVar55 >> 0x20);
                        auVar45._12_4_ = uVar56;
                        auVar38._8_4_ = SUB84(dVar55,0);
                        auVar38._0_8_ = dVar50;
                        auVar38._12_4_ = uVar56;
                        auVar30 = blendpd(auVar38,auVar60,2);
                        auVar46._0_8_ = auVar45._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar50;
                        auVar46._8_8_ = auVar60._0_8_ * auVar33._8_8_ - dVar37 * dVar55;
                        auVar42._8_4_ = SUB84(auVar46._8_8_,0);
                        auVar42._0_8_ = auVar46._0_8_;
                        auVar42._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
                        auVar44 = blendpd(auVar33,auVar47,2);
                        auVar33._0_8_ = auVar30._0_8_ * dVar37 - auVar44._0_8_ * auVar60._0_8_;
                        auVar33._8_8_ =
                             auVar30._8_8_ * auVar47._8_8_ - auVar44._8_8_ * auVar60._8_8_;
                        auVar47 = blendpd(auVar46,auVar33,2);
                        local_130 = dVar11 * auVar60._0_8_ + dVar2 + auVar47._0_8_;
                        dVar57 = dVar11 * dVar50 + dVar57 + auVar42._8_8_;
                        dVar10 = dVar11 * dVar55 + dVar10 + auVar33._0_8_;
                      }
                      if (bVar28 != 0) {
                        pauVar21 = (undefined1 (*) [16])
                                   (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))
                                             ();
                        auVar47 = pauVar21[1];
                        dVar55 = auVar47._0_8_;
                        dVar43 = *(double *)(lVar25 + 0x28) * *(double *)pauVar21[5];
                        dVar50 = *(double *)(pauVar21[5] + 8) * 0.0;
                        auVar30 = *pauVar21;
                        dVar37 = *(double *)(pauVar21[1] + 8);
                        dVar2 = *(double *)pauVar21[4] * *(double *)(lVar25 + 0x18);
                        dVar8 = *(double *)(pauVar21[4] + 8) * *(double *)(lVar25 + 0x20);
                        uVar56 = (undefined4)((ulonglong)dVar8 >> 0x20);
                        auVar33 = *pauVar21;
                        auVar44 = blendpd(auVar33,auVar47,2);
                        auVar52._8_4_ = SUB84(dVar8,0);
                        auVar52._0_8_ = dVar2;
                        auVar52._12_4_ = uVar56;
                        auVar53._0_8_ = auVar52._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar2;
                        auVar53._8_8_ = dVar43 * auVar33._8_8_ - dVar55 * dVar8;
                        auVar32._8_4_ = SUB84(dVar8,0);
                        auVar32._0_8_ = dVar2;
                        auVar32._12_4_ = uVar56;
                        auVar9._8_4_ = SUB84(dVar50,0);
                        auVar9._0_8_ = dVar43;
                        auVar9._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                        auVar33 = blendpd(auVar32,auVar9,2);
                        auVar34._0_8_ = auVar33._0_8_ * dVar55 - auVar44._0_8_ * dVar43;
                        auVar34._8_8_ = auVar33._8_8_ * auVar47._8_8_ - auVar44._8_8_ * dVar50;
                        auVar33 = blendpd(auVar53,auVar34,2);
                        dVar50 = auVar53._8_8_ + auVar53._8_8_;
                        dVar11 = auVar34._0_8_ + auVar34._0_8_;
                        uVar56 = (undefined4)((ulonglong)dVar11 >> 0x20);
                        auVar54._0_8_ = auVar33._0_8_ + auVar33._0_8_;
                        auVar54._8_8_ = auVar33._8_8_ + auVar33._8_8_;
                        auVar48._8_4_ = SUB84(dVar11,0);
                        auVar48._0_8_ = dVar50;
                        auVar48._12_4_ = uVar56;
                        auVar39._8_4_ = SUB84(dVar11,0);
                        auVar39._0_8_ = dVar50;
                        auVar39._12_4_ = uVar56;
                        auVar33 = blendpd(auVar39,auVar54,2);
                        auVar49._0_8_ = auVar48._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar50;
                        auVar49._8_8_ = auVar54._0_8_ * auVar30._8_8_ - dVar55 * dVar11;
                        auVar30 = blendpd(auVar30,auVar47,2);
                        auVar35._8_4_ = SUB84(auVar49._8_8_,0);
                        auVar35._0_8_ = auVar49._0_8_;
                        auVar35._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
                        auVar40._0_8_ = auVar33._0_8_ * dVar55 - auVar30._0_8_ * auVar54._0_8_;
                        auVar40._8_8_ =
                             auVar33._8_8_ * auVar47._8_8_ - auVar30._8_8_ * auVar54._8_8_;
                        auVar47 = blendpd(auVar49,auVar40,2);
                        local_118 = auVar54._0_8_ * dVar37 + dVar43 + auVar47._0_8_;
                        dVar43 = dVar50 * dVar37 + dVar2 + auVar35._8_8_;
                        dVar8 = dVar11 * dVar37 + dVar8 + auVar40._0_8_;
                      }
                    }
                    dVar2 = local_130 - local_118;
                    dVar57 = dVar57 - dVar43;
                    dVar10 = dVar10 - dVar8;
                    dVar43 = dVar10 * dVar10 + dVar57 * dVar57 + dVar2 * dVar2;
                    if ((float)SQRT(dVar43) <= fVar29) {
                      if (this->bStrengthByDistance == 0) {
                        pUVar20 = (UObject *)
                                  (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
                        fVar29 = *(float *)(uVar19 + 0x90);
                      }
                      else {
                        pUVar20 = (UObject *)0x0;
                        fVar29 = (fVar29 - (float)SQRT(dVar43)) / fVar29;
                      }
                      fVar29 = FRawDistributionFloat::GetValue
                                         (&this->Strength,fVar29,pUVar20,(FRandomStream *)0x0);
                      if (dVar13 < dVar43) {
                        dVar43 = dVar12 / SQRT(dVar43);
                        dVar57 = dVar57 * dVar43;
                        dVar10 = dVar10 * dVar43;
                        dVar2 = dVar2 * dVar43;
                      }
                      fVar36 = (float)dVar57 * fVar29 * fVar1;
                      fVar41 = (float)dVar10 * fVar29 * fVar1;
                      fVar29 = (float)dVar2 * fVar29 * fVar1;
                      *(float *)(lVar25 + 0x40) = fVar36 + *(float *)(lVar25 + 0x40);
                      *(float *)(lVar25 + 0x44) = fVar41 + *(float *)(lVar25 + 0x44);
                      *(float *)(lVar25 + 0x48) = fVar29 + *(float *)(lVar25 + 0x48);
                      *(undefined8 *)(uVar27 + 8 + lVar25) = *(undefined8 *)(uVar19 + 0x40);
                      *(undefined4 *)(uVar27 + 0x10 + lVar25) = *(undefined4 *)(uVar19 + 0x48);
                      if (this->bAffectBaseVelocity != 0) {
                        *(float *)(lVar25 + 0x30) = fVar36 + *(float *)(lVar25 + 0x30);
                        *(float *)(lVar25 + 0x34) = fVar41 + *(float *)(lVar25 + 0x34);
                        *(float *)(lVar25 + 0x38) = fVar29 + *(float *)(lVar25 + 0x38);
                      }
                    }
                  }
                  else {
                    *(undefined4 *)(uVar27 + lVar25) = 0xffffffff;
                    *(undefined4 *)(uVar27 + 4 + lVar25) = 0;
                  }
                }
              }
            }
            lVar26 = lVar26 + -1;
          } while (-1 < lVar26);
          return;
        }
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + 8;
      } while ((int)uVar24 < iVar23);
    }
  }
  return;
}

