// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472f7250

UClass * __cdecl UParticleModuleAttractorLine::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorLine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorLine",
               &Z_Registration_Info_UClass_UParticleModuleAttractorLine.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorLine,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorLine>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorLine>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorLine.InnerSingleton;
}

// UParticleModuleAttractorLine @ 1472fc470

UParticleModuleAttractorLine * __thiscall
UParticleModuleAttractorLine::UParticleModuleAttractorLine
          (UParticleModuleAttractorLine *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAttractorLine__6B_;
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

// ~UParticleModuleAttractorLine @ 1472fd7a0

void __thiscall
UParticleModuleAttractorLine::~UParticleModuleAttractorLine(UParticleModuleAttractorLine *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleAttractorLine__6B_;
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

// GetPrivateStaticClass @ 1472ffe80

UClass * __cdecl UParticleModuleAttractorLine::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorLine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorLine",
               &Z_Registration_Info_UClass_UParticleModuleAttractorLine.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorLine,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorLine>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorLine>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorLine.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAttractorLine @ 147301780

void __cdecl UParticleModuleAttractorLine::StaticRegisterNativesUParticleModuleAttractorLine(void)

{
  return;
}

// UParticleModuleAttractorLine @ 14815b650

UParticleModuleAttractorLine * __thiscall
UParticleModuleAttractorLine::UParticleModuleAttractorLine
          (UParticleModuleAttractorLine *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x15;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleAttractorLine__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0xc2;
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

// InitializeDefaults @ 148182d20

void __thiscall UParticleModuleAttractorLine::InitializeDefaults(UParticleModuleAttractorLine *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
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
  return;
}

// PostInitProperties @ 148189800

void __thiscall UParticleModuleAttractorLine::PostInitProperties(UParticleModuleAttractorLine *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
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
  }
  return;
}

// Render3DPreview @ 14818fd70

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
UParticleModuleAttractorLine::Render3DPreview
          (UParticleModuleAttractorLine *this,FPreviewContext *param_1)

{
  return;
}

// Update @ 1481a8f50

void __thiscall
UParticleModuleAttractorLine::Update(UParticleModuleAttractorLine *this,FUpdateContext *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  UObject *pUVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  dVar25 = (this->EndPoint1).field0_0x0._s_0.Z - (this->EndPoint0).field0_0x0._s_0.Z;
  dVar5 = (this->EndPoint1).field0_0x0._s_0.Y - (this->EndPoint0).field0_0x0._s_0.Y;
  dVar6 = (this->EndPoint1).field0_0x0._s_0.X - (this->EndPoint0).field0_0x0._s_0.X;
  dVar9 = __real_3e45798ee0000000;
  dVar10 = __real_3e45798ee0000000;
  dVar11 = __real_3e45798ee0000000;
  dVar12 = __real_3cb59e05ed79df30;
  if (dVar5 * dVar5 + dVar6 * dVar6 + dVar25 * dVar25 != 0.0) {
    dVar9 = dVar5;
    dVar10 = dVar25;
    dVar11 = dVar6;
    dVar12 = dVar6 * dVar6 + dVar5 * dVar5 + dVar25 * dVar25;
  }
  lVar18 = param_1->_padding_;
  fVar1 = param_1->DeltaTime;
  lVar3 = *(longlong *)(lVar18 + 0x168);
  iVar2 = *(int *)(lVar18 + 0x188);
  lVar4 = *(longlong *)(lVar18 + 0x170);
  iVar13 = *(int *)(lVar18 + 0x18c) + -1;
  lVar18 = (longlong)iVar13;
  if (-1 < iVar13) {
    do {
      uVar14 = (uint)*(ushort *)(lVar4 + lVar18 * 2) * iVar2;
      uVar17 = (ulonglong)uVar14;
      if ((*(uint *)((ulonglong)uVar14 + 0x6c + lVar3) & 0x4000000) == 0) {
        lVar15 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
        dVar25 = *(double *)(uVar17 + 0x18 + lVar3) - *(double *)(lVar15 + 0x20);
        dVar5 = (this->EndPoint0).field0_0x0._s_0.X;
        fVar24 = 0.0;
        dVar8 = *(double *)(uVar17 + 0x28 + lVar3) - *(double *)(lVar15 + 0x30);
        dVar7 = *(double *)(uVar17 + 0x20 + lVar3) - *(double *)(lVar15 + 0x28);
        dVar19 = __real_3ff0000000000000 / dVar12;
        dVar6 = (dVar7 - (this->EndPoint0).field0_0x0._s_0.Y) * dVar9 + (dVar25 - dVar5) * dVar11 +
                (dVar8 - (this->EndPoint0).field0_0x0._s_0.Z) * dVar10;
        fVar22 = 0.0;
        fVar23 = 0.0;
        dVar27 = dVar11 * dVar6 * dVar19;
        dVar26 = dVar9 * dVar6 * dVar19;
        dVar19 = dVar10 * dVar6 * dVar19;
        if (dVar11 != 0.0) {
          fVar23 = (float)((dVar27 - dVar5) / dVar11);
        }
        if (dVar9 != 0.0) {
          fVar24 = (float)((dVar26 - (this->EndPoint0).field0_0x0._s_0.Y) / dVar9);
        }
        if (dVar10 != 0.0) {
          fVar22 = (float)((dVar19 - (this->EndPoint0).field0_0x0._s_0.Z) / dVar10);
        }
        if ((((fVar23 == 0.0) && (fVar23 = fVar24, fVar24 == 0.0)) &&
            (fVar23 = fVar22, fVar24 = 0.0, fVar22 == 0.0)) ||
           ((0.0 <= fVar23 && (fVar24 = fVar23, fVar23 <= __real_3f800000)))) {
          pUVar16 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          fVar23 = FRawDistributionFloat::GetValue(&this->Range,fVar24,pUVar16,(FRandomStream *)0x0)
          ;
          dVar25 = dVar25 - dVar27;
          dVar7 = dVar7 - dVar26;
          dVar8 = dVar8 - dVar19;
          auVar20._0_8_ = dVar25 * dVar25;
          auVar20._8_8_ = 0;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = dVar7 * dVar7 + auVar20._0_8_ + dVar8 * dVar8;
          auVar21 = sqrtpd(auVar20,auVar21);
          if ((0.0 < fVar23) && ((float)auVar21._0_8_ <= fVar23)) {
            pUVar16 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            fVar23 = FRawDistributionFloat::GetValue
                               (&this->Strength,(fVar23 - (float)auVar21._0_8_) / fVar23,pUVar16,
                                (FRandomStream *)0x0);
            *(float *)(uVar17 + 0x40 + lVar3) =
                 (float)(dVar10 * dVar7 - dVar9 * dVar8) * fVar23 * fVar1 +
                 *(float *)(uVar17 + 0x40 + lVar3);
            *(float *)(uVar17 + 0x44 + lVar3) =
                 (float)(dVar11 * dVar8 - dVar10 * dVar25) * fVar23 * fVar1 +
                 *(float *)(uVar17 + 0x44 + lVar3);
            *(float *)(uVar17 + 0x48 + lVar3) =
                 (float)(dVar9 * dVar25 - dVar11 * dVar7) * fVar23 * fVar1 +
                 *(float *)(uVar17 + 0x48 + lVar3);
          }
        }
      }
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  return;
}

