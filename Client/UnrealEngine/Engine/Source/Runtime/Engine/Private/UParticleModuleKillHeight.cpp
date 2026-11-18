// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472f8050

UClass * __cdecl UParticleModuleKillHeight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleKillHeight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleKillHeight",
               &Z_Registration_Info_UClass_UParticleModuleKillHeight.InnerSingleton,
               StaticRegisterNativesUParticleModuleKillHeight,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleKillHeight>,
               InternalVTableHelperCtorCaller<UParticleModuleKillHeight>,local_res8,
               UParticleModuleKillBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleKillHeight.InnerSingleton;
}

// UParticleModuleKillHeight @ 1472fd3d0

UParticleModuleKillHeight * __thiscall
UParticleModuleKillHeight::UParticleModuleKillHeight
          (UParticleModuleKillHeight *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleKillHeight__6B_;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  *(undefined4 *)&(this->Height)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Height)._padding_ + 4) = 0;
  (this->Height).MinValue = 0.0;
  (this->Height).MaxValue = 0.0;
  (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleKillHeight @ 1472fdf40

void __thiscall
UParticleModuleKillHeight::~UParticleModuleKillHeight(UParticleModuleKillHeight *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleKillHeight__6B_;
  pvVar1 = (void *)(this->Height)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473012b0

UClass * __cdecl UParticleModuleKillHeight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleKillHeight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleKillHeight",
               &Z_Registration_Info_UClass_UParticleModuleKillHeight.InnerSingleton,
               StaticRegisterNativesUParticleModuleKillHeight,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleKillHeight>,
               InternalVTableHelperCtorCaller<UParticleModuleKillHeight>,local_res8,
               UParticleModuleKillBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleKillHeight.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleKillHeight @ 147301930

void __cdecl UParticleModuleKillHeight::StaticRegisterNativesUParticleModuleKillHeight(void)

{
  return;
}

// UParticleModuleKillHeight @ 14815c4d0

UParticleModuleKillHeight * __thiscall
UParticleModuleKillHeight::UParticleModuleKillHeight
          (UParticleModuleKillHeight *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x15;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleKillHeight__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0xc2;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  *(undefined4 *)&(this->Height)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Height)._padding_ + 4) = 0;
  (this->Height).MinValue = 0.0;
  (this->Height).MaxValue = 0.0;
  (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// InitializeDefaults @ 1481839a0

void __thiscall UParticleModuleKillHeight::InitializeDefaults(UParticleModuleKillHeight *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->Height);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionHeight");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818a2c0

void __thiscall UParticleModuleKillHeight::PostInitProperties(UParticleModuleKillHeight *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->Height);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionHeight");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// Render3DPreview @ 14818fdb0

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
UParticleModuleKillHeight::Render3DPreview(UParticleModuleKillHeight *this,FPreviewContext *param_1)

{
  return;
}

// Update @ 1481ad4c0

void __thiscall
UParticleModuleKillHeight::Update(UParticleModuleKillHeight *this,FUpdateContext *param_1)

{
  double *pdVar1;
  int iVar2;
  FParticleEmitterInstance *pFVar3;
  longlong lVar4;
  double dVar5;
  UParticleLODLevel *pUVar6;
  UObject *pUVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  ushort *puVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double local_a8;
  
  pFVar3 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar6 = UParticleEmitter::GetCurrentLODLevel(pFVar3->SpriteTemplate,pFVar3);
  pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar13 = FRawDistributionFloat::GetValue
                     (&this->Height,pFVar3->EmitterTime,pUVar7,(FRandomStream *)0x0);
  if (this->bApplyPSysScale != 0) {
    lVar8 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    fVar13 = (float)((double)fVar13 * SUB168(*(undefined1 (*) [16])(lVar8 + 0x50),0));
  }
  if (this->bAbsolute == 0) {
    lVar8 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    fVar13 = (float)((double)fVar13 + SUB168(*(undefined1 (*) [16])(lVar8 + 0x30),0));
  }
  lVar8 = param_1->_padding_;
  iVar11 = *(int *)(lVar8 + 0x18c) + -1;
  lVar4 = *(longlong *)(lVar8 + 0x168);
  iVar2 = *(int *)(lVar8 + 0x188);
  if (-1 < iVar11) {
    puVar12 = (ushort *)(*(longlong *)(lVar8 + 0x170) + (longlong)iVar11 * 2);
    do {
      uVar9 = (ulonglong)((uint)*puVar12 * iVar2);
      if ((*(uint *)(uVar9 + 0x6c + lVar4) & 0x4000000) == 0) {
        local_a8 = *(double *)(uVar9 + 0x28 + lVar4);
        pdVar1 = (double *)(uVar9 + 0x18 + lVar4);
        dVar23 = *pdVar1;
        dVar24 = pdVar1[1];
        if (((pUVar6->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0) {
          pauVar10 = (undefined1 (*) [16])
                     (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
          auVar22 = pauVar10[1];
          dVar16 = auVar22._0_8_;
          local_a8 = local_a8 * *(double *)pauVar10[5];
          dVar5 = *(double *)(pauVar10[5] + 8) * 0.0;
          auVar14 = *pauVar10;
          auVar17 = *pauVar10;
          auVar18 = blendpd(auVar14,auVar22,2);
          dVar23 = *(double *)pauVar10[4] * dVar23;
          dVar24 = *(double *)(pauVar10[4] + 8) * dVar24;
          uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
          auVar26._8_4_ = SUB84(dVar24,0);
          auVar26._0_8_ = dVar23;
          auVar26._12_4_ = uVar25;
          auVar27._0_8_ = auVar26._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar23;
          auVar27._8_8_ = local_a8 * auVar14._8_8_ - dVar16 * dVar24;
          auVar19._8_4_ = SUB84(dVar24,0);
          auVar19._0_8_ = dVar23;
          auVar19._12_4_ = uVar25;
          auVar14._8_4_ = SUB84(dVar5,0);
          auVar14._0_8_ = local_a8;
          auVar14._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          auVar14 = blendpd(auVar19,auVar14,2);
          auVar15._0_8_ = auVar14._0_8_ * dVar16 - auVar18._0_8_ * local_a8;
          auVar15._8_8_ = auVar14._8_8_ * auVar22._8_8_ - auVar18._8_8_ * dVar5;
          auVar14 = blendpd(auVar27,auVar15,2);
          auVar28._0_8_ = auVar14._0_8_ + auVar14._0_8_;
          auVar28._8_8_ = auVar14._8_8_ + auVar14._8_8_;
          dVar23 = auVar27._8_8_ + auVar27._8_8_;
          dVar24 = auVar15._0_8_ + auVar15._0_8_;
          auVar20._8_4_ = SUB84(dVar24,0);
          auVar20._0_8_ = dVar23;
          uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
          auVar20._12_4_ = uVar25;
          auVar18._8_4_ = SUB84(dVar24,0);
          auVar18._0_8_ = dVar23;
          auVar18._12_4_ = uVar25;
          auVar14 = blendpd(auVar18,auVar28,2);
          auVar19 = blendpd(auVar17,auVar22,2);
          auVar21._0_8_ = auVar20._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar23;
          auVar21._8_8_ = auVar28._0_8_ * auVar17._8_8_ - dVar16 * dVar24;
          auVar17._0_8_ = auVar14._0_8_ * dVar16 - auVar19._0_8_ * auVar28._0_8_;
          auVar17._8_8_ = auVar14._8_8_ * auVar22._8_8_ - auVar19._8_8_ * auVar28._8_8_;
          auVar22 = blendpd(auVar21,auVar17,2);
          local_a8 = auVar28._0_8_ * *(double *)(pauVar10[1] + 8) + local_a8 + auVar22._0_8_;
        }
        if (this->bFloor == 0) {
          if ((double)fVar13 < local_a8) goto LAB_1481ad714;
        }
        else if (local_a8 < (double)fVar13) {
LAB_1481ad714:
          (**(code **)(pFVar3->_padding_ + 0xe8))(pFVar3,iVar11);
        }
      }
      puVar12 = puVar12 + -1;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  return;
}

