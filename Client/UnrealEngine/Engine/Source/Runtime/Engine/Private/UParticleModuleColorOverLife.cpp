// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 1472f6420

UClass * __cdecl UParticleModuleColorOverLife::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColorOverLife.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColorOverLife",
               &Z_Registration_Info_UClass_UParticleModuleColorOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleColorOverLife,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleColorOverLife>,
               InternalVTableHelperCtorCaller<UParticleModuleColorOverLife>,local_res8,
               UParticleModuleColorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColorOverLife.InnerSingleton;
}

// UParticleModuleColorOverLife @ 1472fcf40

UParticleModuleColorOverLife * __thiscall
UParticleModuleColorOverLife::UParticleModuleColorOverLife
          (UParticleModuleColorOverLife *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleColorOverLife__6B_;
  (this->ColorOverLife)._padding_ = 0;
  (this->ColorOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ColorOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ColorOverLife)._padding_ + 4) = 0;
  (this->ColorOverLife)._padding_ = 0;
  (this->ColorOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorOverLife).MaxValue = 0.0;
  (this->ColorOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ColorOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->AlphaOverLife)._padding_ = 0;
  (this->AlphaOverLife)._padding_ = 0;
  (this->AlphaOverLife)._padding_ = 0;
  *(undefined4 *)&(this->AlphaOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->AlphaOverLife)._padding_ + 4) = 0;
  (this->AlphaOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->AlphaOverLife).MinValue = 0.0;
  (this->AlphaOverLife).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleColorOverLife @ 1472fdc90

void __thiscall
UParticleModuleColorOverLife::~UParticleModuleColorOverLife(UParticleModuleColorOverLife *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleColorOverLife__6B_;
  pvVar1 = (void *)(this->AlphaOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->ColorOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300a80

UClass * __cdecl UParticleModuleColorOverLife::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColorOverLife.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColorOverLife",
               &Z_Registration_Info_UClass_UParticleModuleColorOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleColorOverLife,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleColorOverLife>,
               InternalVTableHelperCtorCaller<UParticleModuleColorOverLife>,local_res8,
               UParticleModuleColorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColorOverLife.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleColorOverLife @ 147301880

void __cdecl UParticleModuleColorOverLife::StaticRegisterNativesUParticleModuleColorOverLife(void)

{
  return;
}

// UParticleModuleColorOverLife @ 14815bea0

UParticleModuleColorOverLife * __thiscall
UParticleModuleColorOverLife::UParticleModuleColorOverLife
          (UParticleModuleColorOverLife *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleColorOverLife__6B_;
  (this->ColorOverLife)._padding_ = 0;
  (this->ColorOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ColorOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ColorOverLife)._padding_ + 4) = 0;
  (this->ColorOverLife)._padding_ = 0;
  (this->ColorOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorOverLife).MaxValue = 0.0;
  (this->ColorOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ColorOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ColorOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x13;
  this->bClampAlpha = 1;
  (this->AlphaOverLife)._padding_ = 0;
  (this->AlphaOverLife)._padding_ = 0;
  (this->AlphaOverLife)._padding_ = 0;
  *(undefined4 *)&(this->AlphaOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->AlphaOverLife)._padding_ + 4) = 0;
  (this->AlphaOverLife).MinValue = 0.0;
  (this->AlphaOverLife).MaxValue = 0.0;
  (this->AlphaOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// AddModuleCurvesToEditor @ 148165db0

bool __thiscall
UParticleModuleColorOverLife::AddModuleCurvesToEditor
          (UParticleModuleColorOverLife *this,UInterpCurveEdSetup *param_1,
          TArray<FCurveEdEntry_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// CompileModule @ 148169720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleColorOverLife::CompileModule
          (UParticleModuleColorOverLife *this,FParticleEmitterBuildInfo *param_1)

{
  int iVar1;
  UDistributionVector *pUVar2;
  longlong lVar3;
  UDistributionFloat *pUVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  bool bVar8;
  UClass *pUVar9;
  TVector<double>_u_0 local_38;
  
  bVar5 = true;
  bVar6 = true;
  bVar8 = UParticleModule::IsUsedInGPUEmitter((UParticleModule *)this);
  if (bVar8) {
    pUVar2 = (this->ColorOverLife).Distribution.field0_0x0.DebugPtr;
    pUVar9 = Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) {
      FRawDistributionVector::operator=(&param_1->DynamicColor,&this->ColorOverLife);
      local_38._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_38._s_0.Y = _UNK_150689688;
      bVar5 = false;
      local_38._s_0.Z = __real_3ff0000000000000;
      FComposableVectorDistribution::InitializeWithConstant
                (&param_1->ColorScale,(TVector<double> *)&local_38._s_0);
    }
    pUVar4 = (this->AlphaOverLife).Distribution.field0_0x0.DebugPtr;
    pUVar9 = Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
    lVar3 = pUVar4->_padding_;
    iVar1 = (int)pUVar9->_padding_;
    bVar6 = true;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) {
      FDistributionLookupTable::operator=
                ((FDistributionLookupTable *)&param_1->DynamicAlpha,
                 (FDistributionLookupTable *)&this->AlphaOverLife);
      (param_1->DynamicAlpha).MinValue = (this->AlphaOverLife).MinValue;
      (param_1->DynamicAlpha).MaxValue = (this->AlphaOverLife).MaxValue;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 = (this->AlphaOverLife).Distribution.field0_0x0.DebugPtr,
         pUVar4 != (UDistributionFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      fVar7 = __real_3f800000;
      (param_1->DynamicAlpha).Distribution.field0_0x0 =
           (this->AlphaOverLife).Distribution.field0_0x0;
      FComposableFloatDistribution::InitializeWithConstant(&param_1->AlphaScale,fVar7);
      bVar6 = false;
    }
    if (!bVar5) goto LAB_148169899;
  }
  FComposableVectorDistribution::Initialize
            (&param_1->ColorScale,(this->ColorOverLife).Distribution.field0_0x0.DebugPtr);
LAB_148169899:
  if (bVar6) {
    FComposableFloatDistribution::Initialize
              (&param_1->AlphaScale,(this->AlphaOverLife).Distribution.field0_0x0.DebugPtr);
  }
  return;
}

// InitializeDefaults @ 1481835d0

void __thiscall UParticleModuleColorOverLife::InitializeDefaults(UParticleModuleColorOverLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->ColorOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionColorOverLife");
    pUVar3 = NewObject<UDistributionVectorConstantCurve>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ColorOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->AlphaOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionAlphaOverLife");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->AlphaOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 148189ec0

void __thiscall UParticleModuleColorOverLife::PostInitProperties(UParticleModuleColorOverLife *this)

{
  FName *pFVar1;
  UDistributionVectorConstantCurve *pUVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar1 = ::FName::FName(&local_res8,L"DistributionColorOverLife");
    pUVar2 = NewObject<UDistributionVectorConstantCurve>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDistributionVectorConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ColorOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar2;
    pFVar1 = ::FName::FName(&local_res8,L"DistributionAlphaOverLife");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->AlphaOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// SetToSensibleDefaults @ 1481978d0

void __thiscall
UParticleModuleColorOverLife::SetToSensibleDefaults
          (UParticleModuleColorOverLife *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionFloat> *this_00;
  UDistributionVector *pUVar1;
  UDistributionFloat *pUVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UDistributionVectorConstantCurve *pUVar6;
  UClass *pUVar7;
  UDistributionFloatConstantCurve *pUVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  pUVar6 = NewObject<UDistributionVectorConstantCurve>((UObject *)this);
  uVar5 = __real_3f800000;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UDistributionVectorConstantCurve *)0x0)) {
    (this->ColorOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar6;
    if (pUVar6 == (UDistributionVectorConstantCurve *)0x0) goto LAB_1481979c2;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
    (this->ColorOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar6;
  }
  pUVar7 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->ColorOverLife).Distribution,pUVar7);
  if ((bVar3) &&
     (pUVar1 = (this->ColorOverLife).Distribution.field0_0x0.DebugPtr,
     pUVar1 != (UDistributionVector *)0x0)) {
    iVar10 = 0;
    do {
      uVar4 = (**(code **)(pUVar1->_padding_ + 0x58))(&pUVar1->_padding_);
      iVar9 = 0;
      do {
        uVar11 = uVar5;
        if (iVar10 != 0) {
          uVar11 = 0;
        }
        (**(code **)(pUVar1->_padding_ + 0x70))(&pUVar1->_padding_,iVar9,uVar4,uVar11);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 2);
    pUVar1->bIsDirty = '\x01';
  }
LAB_1481979c2:
  pUVar8 = NewObject<UDistributionFloatConstantCurve>((UObject *)this);
  this_00 = &(this->AlphaOverLife).Distribution;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar8 == (UDistributionFloatConstantCurve *)0x0)) {
    (this_00->field0_0x0).DebugPtr = (UDistributionFloat *)pUVar8;
    if (pUVar8 == (UDistributionFloatConstantCurve *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
    (this_00->field0_0x0).DebugPtr = (UDistributionFloat *)pUVar8;
  }
  pUVar7 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
  if ((bVar3) && (pUVar2 = (this_00->field0_0x0).DebugPtr, pUVar2 != (UDistributionFloat *)0x0)) {
    uVar4 = (**(code **)(pUVar2->_padding_ + 0x58))(&pUVar2->_padding_);
    (**(code **)(pUVar2->_padding_ + 0x70))(&pUVar2->_padding_,0,uVar4,uVar5);
    uVar5 = (**(code **)(pUVar2->_padding_ + 0x58))(&pUVar2->_padding_);
    (**(code **)(pUVar2->_padding_ + 0x70))(&pUVar2->_padding_,0,uVar5,0);
    pUVar2->bIsDirty = '\x01';
  }
  return;
}

// Spawn @ 14819a7b0

void __thiscall
UParticleModuleColorOverLife::Spawn(UParticleModuleColorOverLife *this,FSpawnContext *param_1)

{
  FBaseParticle *pFVar1;
  UObject *pUVar2;
  float fVar3;
  TVector<double>_u_0 local_28;
  
  pFVar1 = param_1->ParticleBase;
  pUVar2 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->ColorOverLife,(TVector<double> *)&local_28._s_0,pFVar1->RelativeTime,pUVar2,0,
             (FRandomStream *)0x0);
  pUVar2 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar3 = FRawDistributionFloat::GetValue
                    (&this->AlphaOverLife,pFVar1->RelativeTime,pUVar2,(FRandomStream *)0x0);
  (pFVar1->Color).field0_0x0._s_0.R = (float)local_28._s_0.X;
  (pFVar1->BaseColor).field0_0x0._s_0.R = (float)local_28._s_0.X;
  (pFVar1->Color).field0_0x0._s_0.G = (float)local_28._s_0.Y;
  (pFVar1->BaseColor).field0_0x0._s_0.G = (float)local_28._s_0.Y;
  (pFVar1->Color).field0_0x0._s_0.B = (float)local_28._s_0.Z;
  (pFVar1->Color).field0_0x0._s_0.A = fVar3;
  (pFVar1->BaseColor).field0_0x0._s_0.B = (float)local_28._s_0.Z;
  (pFVar1->BaseColor).field0_0x0._s_0.A = fVar3;
  return;
}

// Update @ 1481ac670

void __thiscall
UParticleModuleColorOverLife::Update(UParticleModuleColorOverLife *this,FUpdateContext *param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  FRawDistributionVector *this_00;
  FRawDistributionFloat *this_01;
  int iVar7;
  uint uVar8;
  FRawDistribution *this_02;
  FDistributionLookupTable *this_03;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  FRawDistributionVector *local_res10;
  FRawDistributionFloat *local_res18;
  float *local_res20;
  TVector<double> local_78 [2];
  
  lVar11 = param_1->_padding_;
  if ((((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18c))) && (*(longlong *)(lVar11 + 0x168) != 0)) &&
     (*(longlong *)(lVar11 + 0x170) != 0)) {
    local_res10 = &this->ColorOverLife;
    this_02 = FRawDistributionVector::GetFastRawDistribution(local_res10);
    local_res18 = &this->AlphaOverLife;
    this_03 = &FRawDistributionFloat::GetFastRawDistribution(local_res18)->LookupTable;
    this_01 = local_res18;
    this_00 = local_res10;
    if ((this_02 == (FRawDistribution *)0x0) || (this_03 == (FDistributionLookupTable *)0x0)) {
      lVar11 = param_1->_padding_;
      lVar3 = *(longlong *)(lVar11 + 0x168);
      iVar2 = *(int *)(lVar11 + 0x188);
      lVar4 = *(longlong *)(lVar11 + 0x170);
      iVar7 = *(int *)(lVar11 + 0x18c) + -1;
      lVar11 = (longlong)iVar7;
      if (-1 < iVar7) {
        do {
          uVar8 = (uint)*(ushort *)(lVar4 + lVar11 * 2) * iVar2;
          uVar12 = (ulonglong)uVar8;
          if ((*(uint *)((ulonglong)uVar8 + 0x6c + lVar3) & 0x4000000) == 0) {
            pUVar9 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            pTVar10 = FRawDistributionVector::GetValue
                                (this_00,local_78,*(float *)(uVar12 + 0x90 + lVar3),pUVar9,0,
                                 (FRandomStream *)0x0);
            dVar5 = (pTVar10->field0_0x0)._s_0.X;
            dVar6 = (pTVar10->field0_0x0)._s_0.Y;
            dVar1 = (pTVar10->field0_0x0)._s_0.Z;
            pUVar9 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            fVar13 = FRawDistributionFloat::GetValue
                               (this_01,*(float *)(uVar12 + 0x90 + lVar3),pUVar9,
                                (FRandomStream *)0x0);
            *(float *)(uVar12 + 0x7c + lVar3) = fVar13;
            *(float *)(uVar12 + 0x70 + lVar3) = (float)dVar5;
            *(float *)(uVar12 + 0x74 + lVar3) = (float)dVar6;
            *(float *)(uVar12 + 0x78 + lVar3) = (float)dVar1;
            local_78[0].field0_0x0._16_8_ = dVar1;
          }
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
    }
    else {
      lVar11 = param_1->_padding_;
      lVar3 = *(longlong *)(lVar11 + 0x168);
      iVar2 = *(int *)(lVar11 + 0x188);
      lVar4 = *(longlong *)(lVar11 + 0x170);
      iVar7 = *(int *)(lVar11 + 0x18c) + -1;
      lVar11 = (longlong)iVar7;
      if (-1 < iVar7) {
        do {
          uVar8 = (uint)*(ushort *)(lVar4 + lVar11 * 2) * iVar2;
          uVar12 = (ulonglong)uVar8;
          if ((*(uint *)((ulonglong)uVar8 + 0x6c + lVar3) & 0x4000000) == 0) {
            FRawDistribution::GetValue3None
                      (this_02,*(float *)(uVar12 + 0x90 + lVar3),(float *)(lVar3 + 0x70 + uVar12));
            local_res10 = (FRawDistributionVector *)((ulonglong)local_res10 & 0xffffffff00000000);
            FDistributionLookupTable::GetEntry
                      (this_03,*(float *)(uVar12 + 0x90 + lVar3),(float **)&local_res18,&local_res20
                       ,(float *)&local_res10);
            *(float *)(uVar12 + 0x7c + lVar3) =
                 (*local_res20 - *(float *)&local_res18->_padding_) * local_res10._0_4_ +
                 *(float *)&local_res18->_padding_;
          }
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
    }
  }
  return;
}

