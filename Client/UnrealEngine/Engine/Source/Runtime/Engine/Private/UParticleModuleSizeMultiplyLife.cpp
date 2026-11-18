// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 1473128c0

UClass * __cdecl UParticleModuleSizeMultiplyLife::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeMultiplyLife",
               &Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeMultiplyLife,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSizeMultiplyLife>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeMultiplyLife>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.InnerSingleton;
}

// UParticleModuleSizeMultiplyLife @ 147318850

UParticleModuleSizeMultiplyLife * __thiscall
UParticleModuleSizeMultiplyLife::UParticleModuleSizeMultiplyLife
          (UParticleModuleSizeMultiplyLife *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSizeMultiplyLife__6B_;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  *(undefined4 *)&(this->LifeMultiplier)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LifeMultiplier)._padding_ + 4) = 0;
  (this->LifeMultiplier).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValue = 0.0;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleSizeMultiplyLife @ 1473194e0

void __thiscall
UParticleModuleSizeMultiplyLife::~UParticleModuleSizeMultiplyLife
          (UParticleModuleSizeMultiplyLife *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSizeMultiplyLife__6B_;
  pvVar1 = (void *)(this->LifeMultiplier)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleSizeBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731b470

UClass * __cdecl UParticleModuleSizeMultiplyLife::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeMultiplyLife",
               &Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeMultiplyLife,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSizeMultiplyLife>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeMultiplyLife>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.InnerSingleton;
}

// IsSizeMultiplyLife @ 14731cea0

bool __thiscall
UParticleModuleSizeMultiplyLife::IsSizeMultiplyLife(UParticleModuleSizeMultiplyLife *this)

{
  return true;
}

// StaticRegisterNativesUParticleModuleSizeMultiplyLife @ 14731cf50

void __cdecl
UParticleModuleSizeMultiplyLife::StaticRegisterNativesUParticleModuleSizeMultiplyLife(void)

{
  return;
}

// UParticleModuleSizeMultiplyLife @ 14815e200

UParticleModuleSizeMultiplyLife * __thiscall
UParticleModuleSizeMultiplyLife::UParticleModuleSizeMultiplyLife
          (UParticleModuleSizeMultiplyLife *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleSizeMultiplyLife__6B_;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  *(undefined4 *)&(this->LifeMultiplier)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LifeMultiplier)._padding_ + 4) = 0;
  (this->LifeMultiplier).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValue = 0.0;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->MultiplyX = 1;
  this->MultiplyZ = 1;
  this->MultiplyY = 1;
  return this;
}

// CompileModule @ 148169ee0

void __thiscall
UParticleModuleSizeMultiplyLife::CompileModule
          (UParticleModuleSizeMultiplyLife *this,FParticleEmitterBuildInfo *param_1)

{
  undefined1 *puVar1;
  FComposableVectorDistribution *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  uVar2 = SUB84(__real_3ff0000000000000,0);
  uVar3 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar4 = uVar2;
  uVar5 = uVar3;
  if (this->MultiplyZ == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  if (this->MultiplyY == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  local_38._s_0.X = 0.0;
  if (this->MultiplyX != 0) {
    local_38._s_0.X = __real_3ff0000000000000;
  }
  local_20._s_0.X = __real_3ff0000000000000 - local_38._s_0.X;
  local_38._s_0.Y = (double)CONCAT44(uVar3,uVar2);
  local_38._s_0.Z = (double)CONCAT44(uVar5,uVar4);
  this_00 = &param_1->SizeScale;
  local_20._s_0.Y = __real_3ff0000000000000 - (double)CONCAT44(uVar3,uVar2);
  local_20._s_0.Z = __real_3ff0000000000000 - (double)CONCAT44(uVar5,uVar4);
  FComposableVectorDistribution::Initialize
            (this_00,(this->LifeMultiplier).Distribution.field0_0x0.DebugPtr);
  FComposableVectorDistribution::ScaleByConstantVector(this_00,(TVector<double> *)&local_38._s_0);
  FComposableVectorDistribution::AddConstantVector(this_00,(TVector<double> *)&local_20._s_0);
  return;
}

// InitializeDefaults @ 148184bb0

void __thiscall
UParticleModuleSizeMultiplyLife::InitializeDefaults(UParticleModuleSizeMultiplyLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->LifeMultiplier);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLifeMultiplier");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b7d0

void __thiscall
UParticleModuleSizeMultiplyLife::PostInitProperties(UParticleModuleSizeMultiplyLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->LifeMultiplier);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionLifeMultiplier");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148198030

void __thiscall
UParticleModuleSizeMultiplyLife::SetToSensibleDefaults
          (UParticleModuleSizeMultiplyLife *this,UParticleEmitter *param_1)

{
  UDistributionVector *pUVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  UDistributionVectorConstantCurve *pUVar5;
  UClass *pUVar6;
  int iVar7;
  int iVar8;
  
  pUVar5 = NewObject<UDistributionVectorConstantCurve>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar5 == (UDistributionVectorConstantCurve *)0x0)) {
    (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar5;
    if (pUVar5 == (UDistributionVectorConstantCurve *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar5;
  }
  pUVar6 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->LifeMultiplier).Distribution,pUVar6);
  uVar2 = __real_3f800000;
  if ((bVar3) &&
     (pUVar1 = (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr,
     pUVar1 != (UDistributionVector *)0x0)) {
    iVar8 = 0;
    do {
      uVar4 = (**(code **)(pUVar1->_padding_ + 0x58))(&pUVar1->_padding_);
      iVar7 = 0;
      do {
        (**(code **)(pUVar1->_padding_ + 0x70))(&pUVar1->_padding_,iVar7,uVar4,uVar2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    pUVar1->bIsDirty = '\x01';
  }
  return;
}

// Spawn @ 14819d8c0

void __thiscall
UParticleModuleSizeMultiplyLife::Spawn(UParticleModuleSizeMultiplyLife *this,FSpawnContext *param_1)

{
  FBaseParticle *pFVar1;
  UObject *pUVar2;
  TVector<double>_u_0 local_28;
  
  pFVar1 = param_1->ParticleBase;
  pUVar2 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->LifeMultiplier,(TVector<double> *)&local_28._s_0,pFVar1->RelativeTime,pUVar2,0,
             (FRandomStream *)0x0);
  if (this->MultiplyX != 0) {
    (pFVar1->Size).field0_0x0._s_0.X =
         (float)((double)(pFVar1->Size).field0_0x0._s_0.X * local_28._s_0.X);
  }
  if (this->MultiplyY != 0) {
    (pFVar1->Size).field0_0x0._s_0.Y =
         (float)((double)(pFVar1->Size).field0_0x0._s_0.Y * local_28._s_0.Y);
  }
  if (this->MultiplyZ != 0) {
    (pFVar1->Size).field0_0x0._s_0.Z =
         (float)((double)(pFVar1->Size).field0_0x0._s_0.Z * local_28._s_0.Z);
  }
  return;
}

// Update @ 1481b0de0

void __thiscall
UParticleModuleSizeMultiplyLife::Update
          (UParticleModuleSizeMultiplyLife *this,FUpdateContext *param_1)

{
  FRawDistributionVector *this_00;
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  longlong lVar10;
  longlong *plVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FDistributionLookupTable *pFVar17;
  UObject *pUVar18;
  TVector<double> *pTVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong local_res10;
  FDistributionLookupTable *local_res18;
  float *local_res20;
  float *local_98;
  TVector<double> local_90;
  TVector<double> local_78;
  TVector<double> local_60;
  
  lVar23 = param_1->_padding_;
  if (lVar23 == 0) {
    return;
  }
  if (*(int *)(lVar23 + 0x18c) < 1) {
    return;
  }
  if (*(longlong *)(lVar23 + 0x168) == 0) {
    return;
  }
  if (*(longlong *)(lVar23 + 0x170) == 0) {
    return;
  }
  this_00 = &this->LifeMultiplier;
  pFVar17 = &FRawDistributionVector::GetFastRawDistribution(this_00)->LookupTable;
  puVar1 = &this->field_0x90;
  uVar22 = (ulonglong)(uint)*(undefined4 *)puVar1;
  uVar15 = 0;
  local_res18 = pFVar17;
  if (this->MultiplyX == 0) {
    uVar20 = ZPULL(*(undefined4 *)puVar1,1,1);
    if (uVar20 == 0) {
      if (this->MultiplyZ != 0) goto LAB_1481b11eb;
    }
    else {
      uVar15 = uVar20;
      if (this->MultiplyZ == 0) {
LAB_1481b11eb:
        iVar21 = (uVar15 ^ 1) + 1;
        goto LAB_1481b11f0;
      }
    }
LAB_1481b10a1:
    lVar23 = param_1->_padding_;
    uVar22 = *(longlong *)(lVar23 + 0x170);
    lVar10 = *(longlong *)(lVar23 + 0x168);
    iVar21 = *(int *)(lVar23 + 0x188);
    iVar14 = *(int *)(lVar23 + 0x18c) + -1;
    lVar23 = (longlong)iVar14;
    local_res10 = uVar22;
    if (-1 < iVar14) {
      do {
        uVar15 = (uint)*(ushort *)(uVar22 + lVar23 * 2) * iVar21;
        uVar24 = (ulonglong)uVar15;
        if ((*(uint *)((ulonglong)uVar15 + 0x6c + lVar10) & 0x4000000) == 0) {
          pUVar18 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          pTVar19 = FRawDistributionVector::GetValue
                              (this_00,&local_60,*(float *)(uVar24 + 0x90 + lVar10),pUVar18,0,
                               (FRandomStream *)0x0);
          dVar7 = (pTVar19->field0_0x0)._s_0.Y;
          dVar9 = (pTVar19->field0_0x0)._s_0.Z;
          if (this->MultiplyX != 0) {
            *(float *)(uVar24 + 0x60 + lVar10) =
                 (float)(pTVar19->field0_0x0)._s_0.X * *(float *)(uVar24 + 0x60 + lVar10);
          }
          if (this->MultiplyY != 0) {
            *(float *)(uVar24 + 100 + lVar10) = (float)dVar7 * *(float *)(uVar24 + 100 + lVar10);
          }
          uVar22 = local_res10;
          if (this->MultiplyZ != 0) {
            *(float *)(uVar24 + 0x68 + lVar10) = (float)dVar9 * *(float *)(uVar24 + 0x68 + lVar10);
          }
        }
        lVar23 = lVar23 + -1;
      } while (-1 < lVar23);
    }
  }
  else {
    if (this->MultiplyY == 1 && this->MultiplyZ == 1) {
      lVar23 = param_1->_padding_;
      lVar10 = *(longlong *)(lVar23 + 0x168);
      iVar21 = *(int *)(lVar23 + 0x188);
      lVar25 = *(longlong *)(lVar23 + 0x170);
      iVar14 = *(int *)(lVar23 + 0x18c) + -1;
      lVar23 = (longlong)iVar14;
      if (pFVar17 == (FDistributionLookupTable *)0x0) {
        local_res18 = (FDistributionLookupTable *)0x0;
        if (iVar14 < 0) {
          return;
        }
        do {
          uVar15 = (uint)*(ushort *)(lVar25 + lVar23 * 2) * iVar21;
          uVar24 = (ulonglong)uVar15;
          if ((*(uint *)((ulonglong)uVar15 + 0x6c + lVar10) & 0x4000000) == 0) {
            plVar11 = *(longlong **)(param_1->_padding_ + 0x10);
            pUVar18 = (UObject *)(**(code **)(*plVar11 + 8))(plVar11,uVar22);
            pTVar19 = FRawDistributionVector::GetValue
                                (this_00,&local_78,*(float *)(uVar24 + 0x90 + lVar10),pUVar18,0,
                                 (FRandomStream *)0x0);
            dVar9 = (pTVar19->field0_0x0)._s_0.Z;
            uVar22 = (ulonglong)(int)((uint)*(ushort *)(lVar25 + 2 + lVar23 * 2) * iVar21 + 0x40);
            dVar7 = (pTVar19->field0_0x0)._s_0.X;
            uVar8 = *(undefined8 *)(uVar24 + 100 + lVar10);
            *(float *)(uVar24 + 100 + lVar10) = (float)uVar8 * (float)(pTVar19->field0_0x0)._s_0.Y;
            *(float *)(uVar24 + 0x68 + lVar10) = (float)((ulonglong)uVar8 >> 0x20) * (float)dVar9;
            *(float *)(uVar24 + 0x60 + lVar10) = (float)dVar7 * *(float *)(uVar24 + 0x60 + lVar10);
          }
          lVar23 = lVar23 + -1;
        } while (-1 < lVar23);
        return;
      }
      if (iVar14 < 0) {
        return;
      }
      do {
        uVar15 = (uint)*(ushort *)(lVar25 + lVar23 * 2) * iVar21;
        uVar22 = (ulonglong)uVar15;
        if ((*(uint *)((ulonglong)uVar15 + 0x6c + lVar10) & 0x4000000) == 0) {
          local_res10 = local_res10 & 0xffffffff00000000;
          FDistributionLookupTable::GetEntry
                    (pFVar17,*(float *)(uVar22 + 0x90 + lVar10),&local_res20,&local_98,
                     (float *)&local_res10);
          fVar2 = *local_res20;
          fVar3 = local_98[2];
          fVar4 = local_res20[2];
          fVar5 = local_res20[2];
          fVar6 = *local_98;
          *(float *)(uVar22 + 100 + lVar10) =
               ((local_98[1] - local_res20[1]) * (float)local_res10 + local_res20[1]) *
               *(float *)(uVar22 + 100 + lVar10);
          *(float *)(uVar22 + 0x68 + lVar10) =
               ((fVar3 - fVar4) * (float)local_res10 + fVar5) * *(float *)(uVar22 + 0x68 + lVar10);
          *(float *)(uVar22 + 0x60 + lVar10) =
               ((fVar6 - fVar2) * (float)local_res10 + fVar2) * *(float *)(uVar22 + 0x60 + lVar10);
          pFVar17 = local_res18;
        }
        lVar23 = lVar23 + -1;
      } while (-1 < lVar23);
      return;
    }
    if ((this->MultiplyY != 0) || (this->MultiplyZ != 0)) goto LAB_1481b10a1;
    iVar21 = 0;
LAB_1481b11f0:
    lVar23 = param_1->_padding_;
    pFVar17 = *(FDistributionLookupTable **)(lVar23 + 0x170);
    lVar10 = *(longlong *)(lVar23 + 0x168);
    iVar14 = *(int *)(lVar23 + 0x188);
    iVar16 = *(int *)(lVar23 + 0x18c) + -1;
    lVar23 = (longlong)iVar16;
    if (-1 < iVar16) {
      uVar22 = (ulonglong)iVar21;
      local_res18 = pFVar17;
      do {
        lVar25 = (ulonglong)((uint)*(ushort *)((longlong)pFVar17 + lVar23 * 2) * iVar14) + lVar10;
        if ((*(uint *)(lVar25 + 0x6c) & 0x4000000) == 0) {
          pUVar18 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          FRawDistributionVector::GetValue
                    (this_00,&local_90,*(float *)(lVar25 + 0x90),pUVar18,0,(FRandomStream *)0x0);
          if ((2 < uVar22) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          dVar7 = local_90.field0_0x0.XYZ[uVar22];
          if ((2 < uVar22) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(float *)(lVar25 + 0x60 + uVar22 * 4) =
               (float)((double)*(float *)(lVar25 + 0x60 + uVar22 * 4) * dVar7);
          pFVar17 = local_res18;
        }
        lVar23 = lVar23 + -1;
      } while (-1 < lVar23);
    }
  }
  return;
}

