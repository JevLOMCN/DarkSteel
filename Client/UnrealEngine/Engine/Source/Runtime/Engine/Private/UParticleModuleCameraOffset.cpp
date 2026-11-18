// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1472f8f40

UClass * __cdecl UParticleModuleCameraOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCameraOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCameraOffset",
               &Z_Registration_Info_UClass_UParticleModuleCameraOffset.InnerSingleton,
               StaticRegisterNativesUParticleModuleCameraOffset,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleCameraOffset>,
               InternalVTableHelperCtorCaller<UParticleModuleCameraOffset>,local_res8,
               UParticleModuleCameraBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCameraOffset.InnerSingleton;
}

// UParticleModuleCameraOffset @ 1472fcbe0

UParticleModuleCameraOffset * __thiscall
UParticleModuleCameraOffset::UParticleModuleCameraOffset
          (UParticleModuleCameraOffset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleCameraOffset__6B_;
  (this->CameraOffset)._padding_ = 0;
  (this->CameraOffset)._padding_ = 0;
  (this->CameraOffset)._padding_ = 0;
  *(undefined4 *)&(this->CameraOffset)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->CameraOffset)._padding_ + 4) = 0;
  (this->CameraOffset).MinValue = 0.0;
  (this->CameraOffset).MaxValue = 0.0;
  (this->CameraOffset).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleCameraOffset @ 1472fdad0

void __thiscall
UParticleModuleCameraOffset::~UParticleModuleCameraOffset(UParticleModuleCameraOffset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleCameraOffset__6B_;
  pvVar1 = (void *)(this->CameraOffset)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300600

UClass * __cdecl UParticleModuleCameraOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCameraOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCameraOffset",
               &Z_Registration_Info_UClass_UParticleModuleCameraOffset.InnerSingleton,
               StaticRegisterNativesUParticleModuleCameraOffset,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleCameraOffset>,
               InternalVTableHelperCtorCaller<UParticleModuleCameraOffset>,local_res8,
               UParticleModuleCameraBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCameraOffset.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleCameraOffset @ 147301820

void __cdecl UParticleModuleCameraOffset::StaticRegisterNativesUParticleModuleCameraOffset(void)

{
  return;
}

// UParticleModuleCameraOffset @ 14815b9b0

UParticleModuleCameraOffset * __thiscall
UParticleModuleCameraOffset::UParticleModuleCameraOffset
          (UParticleModuleCameraOffset *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleCameraOffset__6B_;
  this->bSpawnTimeOnly = 0;
  (this->CameraOffset)._padding_ = 0;
  (this->CameraOffset)._padding_ = 0;
  (this->CameraOffset)._padding_ = 0;
  *(undefined4 *)&(this->CameraOffset)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->CameraOffset)._padding_ + 4) = 0;
  (this->CameraOffset).MinValue = 0.0;
  (this->CameraOffset).MaxValue = 0.0;
  (this->CameraOffset).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->UpdateMethod).Value = '\0';
  return this;
}

// CanTickInAnyThread @ 148168a30

bool __thiscall UParticleModuleCameraOffset::CanTickInAnyThread(UParticleModuleCameraOffset *this)

{
  return true;
}

// InitializeDefaults @ 1481830d0

void __thiscall UParticleModuleCameraOffset::InitializeDefaults(UParticleModuleCameraOffset *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->CameraOffset);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionCameraOffset");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CameraOffset).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 148189bf0

void __thiscall UParticleModuleCameraOffset::PostInitProperties(UParticleModuleCameraOffset *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->CameraOffset);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionCameraOffset");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->CameraOffset).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// RequiredBytes @ 148191810

uint __thiscall
UParticleModuleCameraOffset::RequiredBytes
          (UParticleModuleCameraOffset *this,UParticleModuleTypeDataBase *param_1)

{
  return 8;
}

// Spawn @ 14819a160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleCameraOffset::Spawn(UParticleModuleCameraOffset *this,FSpawnContext *param_1)

{
  uchar uVar1;
  FParticleEmitterInstance *pFVar2;
  UParticleLODLevel *pUVar3;
  longlong lVar4;
  UObject *pUVar5;
  longlong lVar6;
  FBaseParticle *pFVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  
  fVar22 = __real_3f800000;
  pFVar2 = (FParticleEmitterInstance *)param_1->_padding_;
  if (pFVar2 == (FParticleEmitterInstance *)0x0) {
    pFVar7 = param_1->ParticleBase;
    uVar18 = param_1->Offset;
    lVar6 = 0;
  }
  else {
    pUVar3 = UParticleEmitter::GetCurrentLODLevel(pFVar2->SpriteTemplate,pFVar2);
    lVar6 = param_1->_padding_;
    if ((pUVar3 != (UParticleLODLevel *)0x0) &&
       (((pUVar3->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0)) {
      lVar4 = (**(code **)*pFVar2->Component)();
      lVar6 = param_1->_padding_;
      uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(lVar4 + 0x40);
      uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)(lVar4 + 0x44);
      uVar20 = _UNK_15061cc88 & *(uint *)(lVar4 + 0x48);
      uVar21 = _UNK_15061cc8c & *(uint *)(lVar4 + 0x4c);
      auVar17._0_8_ =
           CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)(lVar4 + 0x54),
                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(lVar4 + 0x50));
      auVar17._8_4_ = _UNK_15061cc88 & *(uint *)(lVar4 + 0x58);
      auVar17._12_4_ = _UNK_15061cc8c & *(uint *)(lVar4 + 0x5c);
      auVar11._4_4_ = uVar19;
      auVar11._0_4_ = uVar18;
      auVar11._8_4_ = uVar20;
      auVar11._12_4_ = uVar21;
      auVar16._8_8_ = auVar17._0_8_;
      auVar16._0_8_ = auVar11._8_8_;
      auVar14._4_4_ = uVar19;
      auVar14._0_4_ = uVar18;
      auVar14._8_4_ = uVar20;
      auVar14._12_4_ = uVar21;
      auVar15 = maxpd(auVar14,auVar16);
      auVar10._4_4_ = uVar19;
      auVar10._0_4_ = uVar18;
      auVar10._8_4_ = uVar20;
      auVar10._12_4_ = uVar21;
      auVar12._12_4_ = uVar19;
      auVar12._8_4_ = uVar18;
      auVar12._0_8_ = auVar17._0_8_;
      auVar16 = maxpd(auVar15,auVar12);
      auVar11 = blendpd(auVar10,auVar17,2);
      auVar13._8_4_ = auVar17._8_4_;
      auVar13._0_8_ = auVar17._0_8_;
      auVar13._12_4_ = auVar17._12_4_;
      auVar15._4_4_ = uVar21;
      auVar15._0_4_ = uVar20;
      auVar11 = maxpd(auVar13,auVar11);
      fVar22 = (float)auVar16._0_8_;
      auVar15._8_4_ = auVar17._8_4_;
      auVar15._12_4_ = auVar17._12_4_;
      maxpd(auVar11,auVar15);
    }
    uVar18 = pFVar2->CameraPayloadOffset;
    pFVar7 = param_1->ParticleBase;
    if (uVar18 == 0) {
      uVar18 = param_1->Offset;
    }
  }
  uVar8 = (ulonglong)uVar18;
  pUVar5 = (UObject *)(**(code **)(**(longlong **)(lVar6 + 0x10) + 8))();
  fVar9 = FRawDistributionFloat::GetValue
                    (&this->CameraOffset,pFVar7->RelativeTime,pUVar5,(FRandomStream *)0x0);
  uVar1 = (this->UpdateMethod).Value;
  fVar9 = fVar9 * fVar22;
  if (uVar1 == '\0') {
    *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar8) = fVar9;
    *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar8 + 4) = fVar9;
  }
  else {
    fVar22 = *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar8 + 4);
    if (uVar1 == '\x01') {
      fVar22 = fVar22 + fVar9;
    }
    else {
      fVar22 = fVar22 * fVar9;
    }
    *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar8 + 4) = fVar22;
  }
  return;
}

// Update @ 1481aa140

void __thiscall
UParticleModuleCameraOffset::Update(UParticleModuleCameraOffset *this,FUpdateContext *param_1)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  if (this->bSpawnTimeOnly == 0) {
    uVar2 = param_1->Offset;
    lVar8 = param_1->_padding_;
    iVar10 = *(int *)(lVar8 + 0x18c) + -1;
    lVar4 = *(longlong *)(lVar8 + 0x168);
    iVar3 = *(int *)(lVar8 + 0x188);
    lVar12 = *(longlong *)(lVar8 + 0x170);
    if (-1 < iVar10) {
      lVar11 = (longlong)iVar10;
      if (lVar8 == 0) {
        if (-1 < iVar10) {
          uVar7 = (ulonglong)uVar2;
          do {
            lVar8 = (ulonglong)((uint)*(ushort *)(lVar12 + lVar11 * 2) * iVar3) + lVar4;
            if ((*(uint *)(lVar8 + 0x6c) & 0x4000000) == 0) {
              pUVar6 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              fVar13 = FRawDistributionFloat::GetValue
                                 (&this->CameraOffset,*(float *)(lVar8 + 0x90),pUVar6,
                                  (FRandomStream *)0x0);
              uVar1 = (this->UpdateMethod).Value;
              if (uVar1 == '\x01') {
                fVar13 = fVar13 + *(float *)(uVar7 + 4 + lVar8);
              }
              else if (uVar1 == '\x02') {
                fVar13 = fVar13 * *(float *)(uVar7 + 4 + lVar8);
              }
              *(float *)(uVar7 + 4 + lVar8) = fVar13;
            }
            lVar11 = lVar11 + -1;
          } while (-1 < lVar11);
        }
      }
      else {
        puVar9 = (ushort *)(lVar12 + lVar11 * 2);
        do {
          lVar12 = (ulonglong)((uint)*puVar9 * iVar3) + lVar4;
          if ((*(uint *)(lVar12 + 0x6c) & 0x4000000) == 0) {
            uVar5 = uVar2;
            if (*(uint *)(lVar8 + 0x40) != 0) {
              uVar5 = *(uint *)(lVar8 + 0x40);
            }
            uVar7 = (ulonglong)uVar5;
            pUVar6 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            fVar13 = FRawDistributionFloat::GetValue
                               (&this->CameraOffset,*(float *)(lVar12 + 0x90),pUVar6,
                                (FRandomStream *)0x0);
            uVar1 = (this->UpdateMethod).Value;
            if (uVar1 == '\x01') {
              fVar13 = fVar13 + *(float *)(uVar7 + 4 + lVar12);
            }
            else if (uVar1 == '\x02') {
              fVar13 = fVar13 * *(float *)(uVar7 + 4 + lVar12);
            }
            *(float *)(uVar7 + 4 + lVar12) = fVar13;
          }
          puVar9 = puVar9 + -1;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
    }
  }
  return;
}

