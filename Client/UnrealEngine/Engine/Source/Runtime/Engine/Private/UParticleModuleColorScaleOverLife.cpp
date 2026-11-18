// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1472f66b0

UClass * __cdecl UParticleModuleColorScaleOverLife::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColorScaleOverLife",
               &Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleColorScaleOverLife,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleColorScaleOverLife>,
               InternalVTableHelperCtorCaller<UParticleModuleColorScaleOverLife>,local_res8,
               UParticleModuleColorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.InnerSingleton;
}

// UParticleModuleColorScaleOverLife @ 1472fcff0

UParticleModuleColorScaleOverLife * __thiscall
UParticleModuleColorScaleOverLife::UParticleModuleColorScaleOverLife
          (UParticleModuleColorScaleOverLife *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleColorScaleOverLife__6B_;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ColorScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ColorScaleOverLife)._padding_ + 4) = 0;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValue = 0.0;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->AlphaScaleOverLife)._padding_ = 0;
  (this->AlphaScaleOverLife)._padding_ = 0;
  (this->AlphaScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->AlphaScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->AlphaScaleOverLife)._padding_ + 4) = 0;
  (this->AlphaScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->AlphaScaleOverLife).MinValue = 0.0;
  (this->AlphaScaleOverLife).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleColorScaleOverLife @ 1472fdce0

void __thiscall
UParticleModuleColorScaleOverLife::~UParticleModuleColorScaleOverLife
          (UParticleModuleColorScaleOverLife *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleColorScaleOverLife__6B_;
  pvVar1 = (void *)(this->AlphaScaleOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->ColorScaleOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300b40

UClass * __cdecl UParticleModuleColorScaleOverLife::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColorScaleOverLife",
               &Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleColorScaleOverLife,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleColorScaleOverLife>,
               InternalVTableHelperCtorCaller<UParticleModuleColorScaleOverLife>,local_res8,
               UParticleModuleColorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleColorScaleOverLife @ 147301890

void __cdecl
UParticleModuleColorScaleOverLife::StaticRegisterNativesUParticleModuleColorScaleOverLife(void)

{
  return;
}

// UParticleModuleColorScaleOverLife @ 14815bf70

UParticleModuleColorScaleOverLife * __thiscall
UParticleModuleColorScaleOverLife::UParticleModuleColorScaleOverLife
          (UParticleModuleColorScaleOverLife *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleColorScaleOverLife__6B_;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ColorScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ColorScaleOverLife)._padding_ + 4) = 0;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValue = 0.0;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x13;
  (this->AlphaScaleOverLife)._padding_ = 0;
  (this->AlphaScaleOverLife)._padding_ = 0;
  (this->AlphaScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->AlphaScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->AlphaScaleOverLife)._padding_ + 4) = 0;
  (this->AlphaScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->AlphaScaleOverLife).MinValue = 0.0;
  (this->AlphaScaleOverLife).MaxValue = 0.0;
  return this;
}

// CompileModule @ 1481698d0

void __thiscall
UParticleModuleColorScaleOverLife::CompileModule
          (UParticleModuleColorScaleOverLife *this,FParticleEmitterBuildInfo *param_1)

{
  int iVar1;
  UDistributionVector *pUVar2;
  longlong lVar3;
  UDistributionFloat *pUVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UClass *pUVar8;
  
  bVar5 = true;
  bVar6 = true;
  bVar7 = UParticleModule::IsUsedInGPUEmitter((UParticleModule *)this);
  if (bVar7) {
    pUVar2 = (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr;
    pUVar8 = Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      FRawDistributionVector::operator=(&param_1->DynamicColorScale,&this->ColorScaleOverLife);
      bVar5 = false;
    }
    pUVar4 = (this->AlphaScaleOverLife).Distribution.field0_0x0.DebugPtr;
    pUVar8 = Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
    lVar3 = pUVar4->_padding_;
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       (bVar6 = true,
       (longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar8->_padding_)) {
      FDistributionLookupTable::operator=
                ((FDistributionLookupTable *)&param_1->DynamicAlphaScale,
                 (FDistributionLookupTable *)&this->AlphaScaleOverLife);
      (param_1->DynamicAlphaScale).MinValue = (this->AlphaScaleOverLife).MinValue;
      (param_1->DynamicAlphaScale).MaxValue = (this->AlphaScaleOverLife).MaxValue;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 = (this->AlphaScaleOverLife).Distribution.field0_0x0.DebugPtr,
         pUVar4 != (UDistributionFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (param_1->DynamicAlphaScale).Distribution.field0_0x0 =
           (this->AlphaScaleOverLife).Distribution.field0_0x0;
      bVar6 = false;
    }
    if (!bVar5) goto LAB_1481699f7;
  }
  FComposableVectorDistribution::ScaleByVectorDistribution
            (&param_1->ColorScale,(this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr);
LAB_1481699f7:
  if (!bVar6) {
    return;
  }
  FComposableFloatDistribution::ScaleByDistribution
            (&param_1->AlphaScale,(this->AlphaScaleOverLife).Distribution.field0_0x0.DebugPtr);
  return;
}

// InitializeDefaults @ 1481836c0

void __thiscall
UParticleModuleColorScaleOverLife::InitializeDefaults(UParticleModuleColorScaleOverLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->ColorScaleOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionColorScaleOverLife");
    pUVar3 = NewObject<UDistributionVectorConstantCurve>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->AlphaScaleOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionAlphaScaleOverLife");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->AlphaScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 148189fb0

void __thiscall
UParticleModuleColorScaleOverLife::PostInitProperties(UParticleModuleColorScaleOverLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->ColorScaleOverLife);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionColorScaleOverLife");
      pUVar3 = NewObject<UDistributionVectorConstantCurve>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->AlphaScaleOverLife);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionAlphaScaleOverLife");
      pUVar4 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar4->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->AlphaScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197a80

void __thiscall
UParticleModuleColorScaleOverLife::SetToSensibleDefaults
          (UParticleModuleColorScaleOverLife *this,UParticleEmitter *param_1)

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
    (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar5;
    if (pUVar5 == (UDistributionVectorConstantCurve *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar5;
  }
  pUVar6 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->ColorScaleOverLife).Distribution,pUVar6);
  uVar2 = __real_3f800000;
  if ((bVar3) &&
     (pUVar1 = (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr,
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

// Spawn @ 14819a8b0

void __thiscall
UParticleModuleColorScaleOverLife::Spawn
          (UParticleModuleColorScaleOverLife *this,FSpawnContext *param_1)

{
  float fVar1;
  longlong lVar2;
  FBaseParticle *pFVar3;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TVector<double> local_38 [2];
  
  lVar2 = param_1->_padding_;
  pFVar3 = param_1->ParticleBase;
  if (this->bEmitterTime == 0) {
    pUVar4 = (UObject *)(**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
    pTVar5 = FRawDistributionVector::GetValue
                       (&this->ColorScaleOverLife,local_38,pFVar3->RelativeTime,pUVar4,0,
                        (FRandomStream *)0x0);
    uVar8 = *(undefined4 *)&pTVar5->field0_0x0;
    uVar9 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 4);
    uVar10 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 8);
    uVar11 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 0xc);
    local_38[0].field0_0x0._16_8_ = (pTVar5->field0_0x0)._s_0.Z;
    pUVar4 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    fVar7 = pFVar3->RelativeTime;
  }
  else {
    pUVar4 = (UObject *)(**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
    pTVar5 = FRawDistributionVector::GetValue
                       (&this->ColorScaleOverLife,local_38,*(float *)(lVar2 + 0x1a0),pUVar4,0,
                        (FRandomStream *)0x0);
    uVar8 = *(undefined4 *)&pTVar5->field0_0x0;
    uVar9 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 4);
    uVar10 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 8);
    uVar11 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 0xc);
    local_38[0].field0_0x0._16_8_ = (pTVar5->field0_0x0)._s_0.Z;
    pUVar4 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    fVar7 = *(float *)(lVar2 + 0x1a0);
  }
  fVar6 = FRawDistributionFloat::GetValue
                    (&this->AlphaScaleOverLife,fVar7,pUVar4,(FRandomStream *)0x0);
  fVar7 = (pFVar3->Color).field0_0x0._s_0.A;
  (pFVar3->Color).field0_0x0._s_0.R =
       (float)(double)CONCAT44(uVar9,uVar8) * (pFVar3->Color).field0_0x0._s_0.R;
  fVar1 = (pFVar3->Color).field0_0x0._s_0.G;
  (pFVar3->Color).field0_0x0._s_0.B =
       (float)(double)local_38[0].field0_0x0._16_8_ * (pFVar3->Color).field0_0x0._s_0.B;
  (pFVar3->Color).field0_0x0._s_0.A = fVar6 * fVar7;
  (pFVar3->Color).field0_0x0._s_0.G = (float)(double)CONCAT44(uVar11,uVar10) * fVar1;
  return;
}

// Update @ 1481ac980

void __thiscall
UParticleModuleColorScaleOverLife::Update
          (UParticleModuleColorScaleOverLife *this,FUpdateContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  FDistributionLookupTable *this_00;
  UObject *pUVar24;
  TVector<double> *pTVar25;
  int iVar26;
  FDistributionLookupTable *pFVar27;
  longlong lVar28;
  ulonglong uVar29;
  float fVar30;
  FRawDistributionVector *local_res8;
  FDistributionLookupTable *local_res10;
  float *local_res18;
  FRawDistributionFloat *local_res20;
  float *local_a8;
  float *local_a0;
  float *local_98;
  TVector<double> local_90 [3];
  
  local_res18 = (float *)param_1->_padding_;
  local_res8 = &this->ColorScaleOverLife;
  local_res10 = &FRawDistributionVector::GetFastRawDistribution(local_res8)->LookupTable;
  local_res20 = &this->AlphaScaleOverLife;
  this_00 = &FRawDistributionFloat::GetFastRawDistribution(local_res20)->LookupTable;
  if ((local_res10 == (FDistributionLookupTable *)0x0) ||
     (this_00 == (FDistributionLookupTable *)0x0)) {
    lVar28 = param_1->_padding_;
    lVar17 = *(longlong *)(lVar28 + 0x168);
    iVar16 = *(int *)(lVar28 + 0x188);
    lVar18 = *(longlong *)(lVar28 + 0x170);
    iVar26 = *(int *)(lVar28 + 0x18c) + -1;
    lVar28 = (longlong)iVar26;
    if (this->bEmitterTime == 0) {
      if (-1 < iVar26) {
        do {
          uVar23 = (uint)*(ushort *)(lVar18 + lVar28 * 2) * iVar16;
          uVar29 = (ulonglong)uVar23;
          if ((*(uint *)((ulonglong)uVar23 + 0x6c + lVar17) & 0x4000000) == 0) {
            pUVar24 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            pTVar25 = FRawDistributionVector::GetValue
                                (local_res8,local_90,*(float *)(uVar29 + 0x90 + lVar17),pUVar24,0,
                                 (FRandomStream *)0x0);
            dVar13 = (pTVar25->field0_0x0)._s_0.X;
            dVar14 = (pTVar25->field0_0x0)._s_0.Y;
            dVar15 = (pTVar25->field0_0x0)._s_0.Z;
            pUVar24 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            fVar30 = FRawDistributionFloat::GetValue
                               (local_res20,*(float *)(uVar29 + 0x90 + lVar17),pUVar24,
                                (FRandomStream *)0x0);
            pfVar1 = (float *)(uVar29 + 0x70 + lVar17);
            fVar3 = pfVar1[1];
            fVar4 = pfVar1[2];
            fVar5 = pfVar1[3];
            pfVar2 = (float *)(uVar29 + 0x70 + lVar17);
            *pfVar2 = (float)dVar13 * *pfVar1;
            pfVar2[1] = (float)dVar14 * fVar3;
            pfVar2[2] = (float)dVar15 * fVar4;
            pfVar2[3] = fVar30 * fVar5;
          }
          lVar28 = lVar28 + -1;
        } while (-1 < lVar28);
      }
    }
    else if (-1 < iVar26) {
      do {
        uVar23 = (uint)*(ushort *)(lVar18 + lVar28 * 2) * iVar16;
        if ((*(uint *)((ulonglong)uVar23 + 0x6c + lVar17) & 0x4000000) == 0) {
          pUVar24 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          pTVar25 = FRawDistributionVector::GetValue
                              (local_res8,local_90,local_res18[0x68],pUVar24,0,(FRandomStream *)0x0)
          ;
          dVar13 = (pTVar25->field0_0x0)._s_0.X;
          dVar14 = (pTVar25->field0_0x0)._s_0.Y;
          dVar15 = (pTVar25->field0_0x0)._s_0.Z;
          pUVar24 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          fVar30 = FRawDistributionFloat::GetValue
                             (local_res20,local_res18[0x68],pUVar24,(FRandomStream *)0x0);
          pfVar1 = (float *)((ulonglong)uVar23 + 0x70 + lVar17);
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          pfVar2 = (float *)((ulonglong)uVar23 + 0x70 + lVar17);
          *pfVar2 = *pfVar1 * (float)dVar13;
          pfVar2[1] = fVar3 * (float)dVar14;
          pfVar2[2] = fVar4 * (float)dVar15;
          pfVar2[3] = fVar5 * fVar30;
        }
        lVar28 = lVar28 + -1;
      } while (-1 < lVar28);
    }
  }
  else {
    lVar28 = param_1->_padding_;
    lVar17 = *(longlong *)(lVar28 + 0x168);
    iVar16 = *(int *)(lVar28 + 0x188);
    lVar18 = *(longlong *)(lVar28 + 0x170);
    iVar26 = *(int *)(lVar28 + 0x18c) + -1;
    lVar28 = (longlong)iVar26;
    if (this->bEmitterTime == 0) {
      pFVar27 = local_res10;
      if (-1 < iVar26) {
        do {
          uVar23 = (uint)*(ushort *)(lVar18 + lVar28 * 2) * iVar16;
          uVar29 = (ulonglong)uVar23;
          if ((*(uint *)((ulonglong)uVar23 + 0x6c + lVar17) & 0x4000000) == 0) {
            local_res8 = (FRawDistributionVector *)((ulonglong)local_res8 & 0xffffffff00000000);
            FDistributionLookupTable::GetEntry
                      (pFVar27,*(float *)(uVar29 + 0x90 + lVar17),&local_res18,
                       (float **)&local_res20,(float *)&local_res8);
            fVar22 = local_res8._0_4_;
            local_res8 = (FRawDistributionVector *)((ulonglong)local_res8 & 0xffffffff00000000);
            fVar3 = *(float *)&local_res20->_padding_;
            fVar4 = *local_res18;
            fVar5 = *(float *)((longlong)&local_res20->_padding_ + 4);
            fVar30 = local_res18[1];
            fVar6 = *(float *)&local_res20->_padding_;
            fVar7 = local_res18[2];
            fVar8 = *local_res18;
            fVar9 = local_res18[1];
            fVar10 = local_res18[2];
            FDistributionLookupTable::GetEntry
                      (this_00,*(float *)(uVar29 + 0x90 + lVar17),&local_98,&local_a0,
                       (float *)&local_res8);
            fVar11 = *local_98;
            fVar12 = *local_a0;
            pfVar1 = (float *)(uVar29 + 0x70 + lVar17);
            fVar19 = pfVar1[1];
            fVar20 = pfVar1[2];
            fVar21 = pfVar1[3];
            pfVar2 = (float *)(uVar29 + 0x70 + lVar17);
            *pfVar2 = ((fVar3 - fVar4) * fVar22 + fVar8) * *pfVar1;
            pfVar2[1] = ((fVar5 - fVar30) * fVar22 + fVar9) * fVar19;
            pfVar2[2] = ((fVar6 - fVar7) * fVar22 + fVar10) * fVar20;
            pfVar2[3] = ((fVar12 - fVar11) * local_res8._0_4_ + fVar11) * fVar21;
            pFVar27 = local_res10;
          }
          lVar28 = lVar28 + -1;
        } while (-1 < lVar28);
      }
    }
    else {
      pFVar27 = local_res10;
      if (-1 < iVar26) {
        do {
          pfVar1 = local_res18;
          uVar23 = (uint)*(ushort *)(lVar18 + lVar28 * 2) * iVar16;
          if ((*(uint *)((ulonglong)uVar23 + 0x6c + lVar17) & 0x4000000) == 0) {
            local_res8 = (FRawDistributionVector *)((ulonglong)local_res8 & 0xffffffff00000000);
            FDistributionLookupTable::GetEntry
                      (pFVar27,local_res18[0x68],(float **)&local_res20,&local_a8,
                       (float *)&local_res8);
            fVar22 = local_res8._0_4_;
            local_res8 = (FRawDistributionVector *)((ulonglong)local_res8 & 0xffffffff00000000);
            fVar3 = *local_a8;
            fVar4 = *(float *)&local_res20->_padding_;
            fVar5 = local_a8[1];
            fVar30 = *(float *)((longlong)&local_res20->_padding_ + 4);
            fVar6 = local_a8[2];
            fVar7 = *(float *)&local_res20->_padding_;
            fVar8 = *(float *)&local_res20->_padding_;
            fVar9 = *(float *)((longlong)&local_res20->_padding_ + 4);
            fVar10 = *(float *)&local_res20->_padding_;
            FDistributionLookupTable::GetEntry
                      (this_00,pfVar1[0x68],&local_a0,&local_98,(float *)&local_res8);
            fVar11 = *local_a0;
            fVar12 = *local_98;
            pfVar1 = (float *)((ulonglong)uVar23 + 0x70 + lVar17);
            fVar19 = pfVar1[1];
            fVar20 = pfVar1[2];
            fVar21 = pfVar1[3];
            pfVar2 = (float *)((ulonglong)uVar23 + 0x70 + lVar17);
            *pfVar2 = ((fVar3 - fVar4) * fVar22 + fVar8) * *pfVar1;
            pfVar2[1] = ((fVar5 - fVar30) * fVar22 + fVar9) * fVar19;
            pfVar2[2] = ((fVar6 - fVar7) * fVar22 + fVar10) * fVar20;
            pfVar2[3] = ((fVar12 - fVar11) * local_res8._0_4_ + fVar11) * fVar21;
            pFVar27 = local_res10;
          }
          lVar28 = lVar28 + -1;
        } while (-1 < lVar28);
      }
    }
  }
  return;
}

