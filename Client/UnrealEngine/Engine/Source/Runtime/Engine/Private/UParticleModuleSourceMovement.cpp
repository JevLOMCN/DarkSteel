// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1473137c0

UClass * __cdecl UParticleModuleSourceMovement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSourceMovement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSourceMovement",
               &Z_Registration_Info_UClass_UParticleModuleSourceMovement.InnerSingleton,
               StaticRegisterNativesUParticleModuleSourceMovement,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSourceMovement>,
               InternalVTableHelperCtorCaller<UParticleModuleSourceMovement>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSourceMovement.InnerSingleton;
}

// UParticleModuleSourceMovement @ 1473189d0

UParticleModuleSourceMovement * __thiscall
UParticleModuleSourceMovement::UParticleModuleSourceMovement
          (UParticleModuleSourceMovement *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModuleLocationBase::UParticleModuleLocationBase
            ((UParticleModuleLocationBase *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSourceMovement__6B_;
  (this->SourceMovementScale)._padding_ = 0;
  (this->SourceMovementScale)._padding_ = 0;
  (this->SourceMovementScale)._padding_ = 0;
  *(undefined4 *)&(this->SourceMovementScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceMovementScale)._padding_ + 4) = 0;
  (this->SourceMovementScale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceMovementScale).MaxValue = 0.0;
  (this->SourceMovementScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceMovementScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceMovementScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceMovementScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceMovementScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceMovementScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SourceMovementScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleSourceMovement @ 1473195c0

void __thiscall
UParticleModuleSourceMovement::~UParticleModuleSourceMovement(UParticleModuleSourceMovement *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSourceMovement__6B_;
  pvVar1 = (void *)(this->SourceMovementScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UParticleModuleLocationBase::~UParticleModuleLocationBase((UParticleModuleLocationBase *)this);
  return;
}

// GetPrivateStaticClass @ 14731b770

UClass * __cdecl UParticleModuleSourceMovement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSourceMovement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSourceMovement",
               &Z_Registration_Info_UClass_UParticleModuleSourceMovement.InnerSingleton,
               StaticRegisterNativesUParticleModuleSourceMovement,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSourceMovement>,
               InternalVTableHelperCtorCaller<UParticleModuleSourceMovement>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSourceMovement.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSourceMovement @ 14731cf90

void __cdecl UParticleModuleSourceMovement::StaticRegisterNativesUParticleModuleSourceMovement(void)

{
  return;
}

// UParticleModuleSourceMovement @ 14815e460

UParticleModuleSourceMovement * __thiscall
UParticleModuleSourceMovement::UParticleModuleSourceMovement
          (UParticleModuleSourceMovement *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleSourceMovement__6B_;
  (this->SourceMovementScale)._padding_ = 0;
  (this->SourceMovementScale)._padding_ = 0;
  (this->SourceMovementScale)._padding_ = 0;
  *(undefined4 *)&(this->SourceMovementScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceMovementScale)._padding_ + 4) = 0;
  (this->SourceMovementScale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceMovementScale).MaxValue = 0.0;
  (this->SourceMovementScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceMovementScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceMovementScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceMovementScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceMovementScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceMovementScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SourceMovementScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  return this;
}

// CanTickInAnyThread @ 148168ae0

bool __thiscall
UParticleModuleSourceMovement::CanTickInAnyThread(UParticleModuleSourceMovement *this)

{
  return true;
}

// FinalUpdate @ 148173a70

void __thiscall
UParticleModuleSourceMovement::FinalUpdate
          (UParticleModuleSourceMovement *this,FUpdateContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  UObject *pUVar16;
  ulonglong uVar17;
  TVector<double>_u_0 local_88 [4];
  ulonglong uVar15;
  
  lVar13 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
  dVar8 = *(double *)(lVar13 + 0x20);
  dVar9 = *(double *)(lVar13 + 0x28);
  dVar10 = *(double *)(lVar13 + 0x30);
  pdVar14 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 200))();
  fVar1 = param_1->DeltaTime;
  dVar2 = *pdVar14;
  dVar3 = pdVar14[1];
  dVar4 = pdVar14[2];
  lVar13 = param_1->_padding_;
  lVar6 = *(longlong *)(lVar13 + 0x168);
  iVar5 = *(int *)(lVar13 + 0x188);
  lVar7 = *(longlong *)(lVar13 + 0x170);
  iVar11 = *(int *)(lVar13 + 0x18c) + -1;
  lVar13 = (longlong)iVar11;
  local_88[0]._16_8_ = dVar10;
  if (-1 < iVar11) {
    do {
      uVar12 = (uint)*(ushort *)(lVar7 + lVar13 * 2) * iVar5;
      uVar15 = (ulonglong)uVar12;
      uVar17 = (ulonglong)uVar12;
      if (((*(uint *)(uVar15 + 0x6c + lVar6) & 0x4000000) == 0) &&
         ((fVar1 + fVar1) * *(float *)(uVar15 + 0x94 + lVar6) < *(float *)(uVar15 + 0x90 + lVar6)))
      {
        pUVar16 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
        FRawDistributionVector::GetValue
                  (&this->SourceMovementScale,(TVector<double> *)&local_88[0]._s_0,
                   *(float *)(uVar17 + 0x90 + lVar6),pUVar16,0,(FRandomStream *)0x0);
        *(double *)(uVar17 + 0x18 + lVar6) =
             (dVar8 - dVar2) * (double)local_88[0]._0_8_ + *(double *)(uVar17 + 0x18 + lVar6);
        *(double *)(uVar17 + 0x20 + lVar6) =
             (dVar9 - dVar3) * (double)local_88[0]._8_8_ + *(double *)(uVar17 + 0x20 + lVar6);
        *(double *)(uVar17 + 0x28 + lVar6) =
             (dVar10 - dVar4) * (double)local_88[0]._16_8_ + *(double *)(uVar17 + 0x28 + lVar6);
      }
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  return;
}

// InitializeDefaults @ 148184cb0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleSourceMovement::InitializeDefaults(UParticleModuleSourceMovement *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->SourceMovementScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionSourceMovementScale");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 1.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 1.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SourceMovementScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b8f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleSourceMovement::PostInitProperties(UParticleModuleSourceMovement *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->SourceMovementScale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionSourceMovementScale");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Constant).field0_0x0._s_0.X = 1.0;
      (pUVar3->Constant).field0_0x0._s_0.Y = 1.0;
      (pUVar3->Constant).field0_0x0._s_0.Z = 1.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->SourceMovementScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

