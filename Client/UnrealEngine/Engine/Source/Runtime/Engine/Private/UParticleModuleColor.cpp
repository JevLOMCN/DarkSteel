// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 1472f6170

UClass * __cdecl UParticleModuleColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColor",
               &Z_Registration_Info_UClass_UParticleModuleColor.InnerSingleton,
               StaticRegisterNativesUParticleModuleColor,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleColor>,
               InternalVTableHelperCtorCaller<UParticleModuleColor>,local_res8,
               UParticleModuleColorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColor.InnerSingleton;
}

// UParticleModuleColor @ 1472fce60

UParticleModuleColor * __thiscall
UParticleModuleColor::UParticleModuleColor(UParticleModuleColor *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleColor__6B_;
  (this->StartColor)._padding_ = 0;
  (this->StartColor)._padding_ = 0;
  *(undefined4 *)&(this->StartColor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartColor)._padding_ + 4) = 0;
  (this->StartColor)._padding_ = 0;
  (this->StartColor).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartColor).MaxValue = 0.0;
  (this->StartColor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartColor).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartColor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartColor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartColor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartColor).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartColor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->StartAlpha)._padding_ = 0;
  (this->StartAlpha)._padding_ = 0;
  (this->StartAlpha)._padding_ = 0;
  *(undefined4 *)&(this->StartAlpha)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartAlpha)._padding_ + 4) = 0;
  (this->StartAlpha).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartAlpha).MinValue = 0.0;
  (this->StartAlpha).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleColor @ 1472fdc20

void __thiscall UParticleModuleColor::~UParticleModuleColor(UParticleModuleColor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleColor__6B_;
  pvVar1 = (void *)(this->StartAlpha)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->StartColor)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300900

UClass * __cdecl UParticleModuleColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColor",
               &Z_Registration_Info_UClass_UParticleModuleColor.InnerSingleton,
               StaticRegisterNativesUParticleModuleColor,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleColor>,
               InternalVTableHelperCtorCaller<UParticleModuleColor>,local_res8,
               UParticleModuleColorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColor.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleColor @ 147301860

void __cdecl UParticleModuleColor::StaticRegisterNativesUParticleModuleColor(void)

{
  return;
}

// UParticleModuleColor @ 14815bd90

UParticleModuleColor * __thiscall
UParticleModuleColor::UParticleModuleColor(UParticleModuleColor *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleColor__6B_;
  (this->StartColor)._padding_ = 0;
  (this->StartColor)._padding_ = 0;
  *(undefined4 *)&(this->StartColor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartColor)._padding_ + 4) = 0;
  (this->StartColor)._padding_ = 0;
  (this->StartColor).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartColor).MaxValue = 0.0;
  (this->StartColor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartColor).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartColor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartColor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartColor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartColor).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartColor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->StartAlpha)._padding_ = 0;
  (this->StartAlpha)._padding_ = 0;
  (this->StartAlpha)._padding_ = 0;
  *(undefined4 *)&(this->StartAlpha)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartAlpha)._padding_ + 4) = 0;
  (this->StartAlpha).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartAlpha).MinValue = 0.0;
  (this->StartAlpha).MaxValue = 0.0;
  this->bClampAlpha = '\x01';
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd | 0x11;
  return this;
}

// AddModuleCurvesToEditor @ 148165da0

bool __thiscall
UParticleModuleColor::AddModuleCurvesToEditor
          (UParticleModuleColor *this,UInterpCurveEdSetup *param_1,
          TArray<FCurveEdEntry_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// CompileModule @ 148169610

void __thiscall
UParticleModuleColor::CompileModule(UParticleModuleColor *this,FParticleEmitterBuildInfo *param_1)

{
  undefined8 uVar1;
  TVector<double> *pTVar2;
  int iVar3;
  float fVar4;
  FRandomStream local_res8;
  FName local_res10;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  local_res10 = (FName)this->_padding_;
  ::FName::ToString(&local_res10,(FString *)&local_48._s_0);
  iVar3 = local_48._8_4_ + -1;
  uVar1 = local_48._s_0.X;
  if (local_48._8_4_ == 0) {
    iVar3 = 0;
    uVar1 = L"";
  }
  local_res8.InitialSeed = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)uVar1);
  local_res8.Seed = local_res8.InitialSeed;
  if ((wchar_t *)local_48._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_48._s_0.X);
  }
  pTVar2 = FRawDistributionVector::GetValue
                     (&this->StartColor,(TVector<double> *)&local_48._s_0,0.0,(UObject *)0x0,0,
                      &local_res8);
  local_30._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  local_30._s_0.Y = (pTVar2->field0_0x0)._s_0.Y;
  local_30._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  fVar4 = FRawDistributionFloat::GetValue(&this->StartAlpha,0.0,(UObject *)0x0,&local_res8);
  FComposableVectorDistribution::InitializeWithConstant
            (&param_1->ColorScale,(TVector<double> *)&local_30._s_0);
  FComposableFloatDistribution::InitializeWithConstant(&param_1->AlphaScale,fVar4);
  return;
}

// InitializeDefaults @ 1481834e0

void __thiscall UParticleModuleColor::InitializeDefaults(UParticleModuleColor *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->StartColor);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartColor");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartColor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->StartAlpha);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartAlpha");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->StartAlpha).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 148189dc0

void __thiscall UParticleModuleColor::PostInitProperties(UParticleModuleColor *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->StartColor);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartColor");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartColor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->StartAlpha);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartAlpha");
      pUVar4 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar4->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->StartAlpha).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197870

void __thiscall
UParticleModuleColor::SetToSensibleDefaults(UParticleModuleColor *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionVector> *this_00;
  UDistributionVector *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = &(this->StartColor).Distribution;
  if ((this_00->field0_0x0).DebugPtr != (UDistributionVector *)0x0) {
    pUVar3 = Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if ((bVar2) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UDistributionVector *)0x0))
    {
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1->bIsDirty = '\x01';
    }
  }
  return;
}

// Spawn @ 14819a670

void __thiscall UParticleModuleColor::Spawn(UParticleModuleColor *this,FSpawnContext *param_1)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  FRandomStream *pFVar3;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector<double> local_58 [3];
  
  pFVar3 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar3 == (FRandomStream *)0x0) {
    pFVar3 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar4 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  pTVar5 = FRawDistributionVector::GetValue
                     (&this->StartColor,local_58,*(float *)(lVar1 + 0x1a0),pUVar4,0,pFVar3);
  fVar9 = (float)(pTVar5->field0_0x0)._s_0.X;
  fVar7 = (float)(pTVar5->field0_0x0)._s_0.Y;
  fVar8 = (float)(pTVar5->field0_0x0)._s_0.Z;
  pUVar4 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar6 = FRawDistributionFloat::GetValue(&this->StartAlpha,*(float *)(lVar1 + 0x1a0),pUVar4,pFVar3)
  ;
  (pFVar2->Color).field0_0x0._s_0.R = fVar9;
  (pFVar2->Color).field0_0x0._s_0.G = fVar7;
  (pFVar2->Color).field0_0x0._s_0.B = fVar8;
  (pFVar2->Color).field0_0x0._s_0.A = fVar6;
  (pFVar2->BaseColor).field0_0x0._s_0.R = fVar9;
  (pFVar2->BaseColor).field0_0x0._s_0.G = fVar7;
  (pFVar2->BaseColor).field0_0x0._s_0.B = fVar8;
  (pFVar2->BaseColor).field0_0x0._s_0.A = fVar6;
  return;
}

// SpawnEx @ 14819e350

void __thiscall
UParticleModuleColor::SpawnEx
          (UParticleModuleColor *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  UObject *pUVar3;
  TVector<double> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TVector<double> local_58 [3];
  
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar3 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  pTVar4 = FRawDistributionVector::GetValue
                     (&this->StartColor,local_58,*(float *)(lVar1 + 0x1a0),pUVar3,0,param_2);
  fVar8 = (float)(pTVar4->field0_0x0)._s_0.X;
  fVar6 = (float)(pTVar4->field0_0x0)._s_0.Y;
  fVar7 = (float)(pTVar4->field0_0x0)._s_0.Z;
  pUVar3 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar5 = FRawDistributionFloat::GetValue
                    (&this->StartAlpha,*(float *)(lVar1 + 0x1a0),pUVar3,param_2);
  (pFVar2->Color).field0_0x0._s_0.R = fVar8;
  (pFVar2->Color).field0_0x0._s_0.G = fVar6;
  (pFVar2->Color).field0_0x0._s_0.B = fVar7;
  (pFVar2->Color).field0_0x0._s_0.A = fVar5;
  (pFVar2->BaseColor).field0_0x0._s_0.R = fVar8;
  (pFVar2->BaseColor).field0_0x0._s_0.G = fVar6;
  (pFVar2->BaseColor).field0_0x0._s_0.B = fVar7;
  (pFVar2->BaseColor).field0_0x0._s_0.A = fVar5;
  return;
}

