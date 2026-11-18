// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147305bb0

UClass * __cdecl UParticleModuleLocationPrimitiveCylinder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveCylinder",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder,0x138,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveCylinder>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveCylinder>,local_res8,
               UParticleModuleLocationPrimitiveBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.InnerSingleton;
}

// UParticleModuleLocationPrimitiveCylinder @ 14730a870

UParticleModuleLocationPrimitiveCylinder * __thiscall
UParticleModuleLocationPrimitiveCylinder::UParticleModuleLocationPrimitiveCylinder
          (UParticleModuleLocationPrimitiveCylinder *this,FVTableHelper *param_1)

{
  UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
            ((UParticleModuleLocationPrimitiveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveCylinder__6B_;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  *(undefined4 *)&(this->StartRadius)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRadius)._padding_ + 4) = 0;
  (this->StartRadius).MinValue = 0.0;
  (this->StartRadius).MaxValue = 0.0;
  (this->StartRadius).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartHeight)._padding_ = 0;
  (this->StartHeight)._padding_ = 0;
  (this->StartHeight)._padding_ = 0;
  *(undefined4 *)&(this->StartHeight)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartHeight)._padding_ + 4) = 0;
  (this->StartHeight).MinValue = 0.0;
  (this->StartHeight).MaxValue = 0.0;
  (this->StartHeight).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleLocationPrimitiveCylinder @ 14730b810

void __thiscall
UParticleModuleLocationPrimitiveCylinder::~UParticleModuleLocationPrimitiveCylinder
          (UParticleModuleLocationPrimitiveCylinder *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveCylinder__6B_;
  pvVar1 = (void *)(this->StartHeight)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->StartRadius)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730e1e0

UClass * __cdecl UParticleModuleLocationPrimitiveCylinder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveCylinder",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder,0x138,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveCylinder>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveCylinder>,local_res8,
               UParticleModuleLocationPrimitiveBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder @ 14730fdd0

void __cdecl
UParticleModuleLocationPrimitiveCylinder::
StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder(void)

{
  return;
}

// UParticleModuleLocationPrimitiveCylinder @ 14815cf30

UParticleModuleLocationPrimitiveCylinder * __thiscall
UParticleModuleLocationPrimitiveCylinder::UParticleModuleLocationPrimitiveCylinder
          (UParticleModuleLocationPrimitiveCylinder *this,FObjectInitializer *param_1)

{
  UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
            ((UParticleModuleLocationPrimitiveBase *)this,param_1);
  this->RadialVelocity = 1;
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveCylinder__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x40;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  *(undefined4 *)&(this->StartRadius)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRadius)._padding_ + 4) = 0;
  (this->StartRadius).MinValue = 0.0;
  (this->StartRadius).MaxValue = 0.0;
  (this->StartRadius).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartHeight)._padding_ = 0;
  (this->StartHeight)._padding_ = 0;
  (this->StartHeight)._padding_ = 0;
  *(undefined4 *)&(this->StartHeight)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartHeight)._padding_ + 4) = 0;
  (this->StartHeight).MinValue = 0.0;
  (this->StartHeight).MaxValue = 0.0;
  (this->StartHeight).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->HeightAxis).Value = '\x02';
  return this;
}

// InitializeDefaults @ 148183fb0

void __thiscall
UParticleModuleLocationPrimitiveCylinder::InitializeDefaults
          (UParticleModuleLocationPrimitiveCylinder *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->StartRadius);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRadius");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 50.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartRadius).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->StartHeight);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartHeight");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 50.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartHeight).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818a600

void __thiscall
UParticleModuleLocationPrimitiveCylinder::PostInitProperties
          (UParticleModuleLocationPrimitiveCylinder *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UParticleModuleLocationPrimitiveBase::PostInitProperties
            ((UParticleModuleLocationPrimitiveBase *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->StartRadius);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRadius");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 50.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartRadius).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->StartHeight);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartHeight");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 50.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartHeight).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// Render3DPreview @ 14818fde0

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
UParticleModuleLocationPrimitiveCylinder::Render3DPreview
          (UParticleModuleLocationPrimitiveCylinder *this,FPreviewContext *param_1)

{
  return;
}

// Spawn @ 14819bea0

void __thiscall
UParticleModuleLocationPrimitiveCylinder::Spawn
          (UParticleModuleLocationPrimitiveCylinder *this,FSpawnContext *param_1)

{
  FRandomStream *pFVar1;
  
  pFVar1 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar1 == (FRandomStream *)0x0) {
    pFVar1 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  SpawnEx(this,param_1,pFVar1);
  return;
}

// SpawnEx @ 14819eaa0

void __thiscall
UParticleModuleLocationPrimitiveCylinder::SpawnEx
          (UParticleModuleLocationPrimitiveCylinder *this,FSpawnContext *param_1,
          FRandomStream *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  FBaseParticle *pFVar16;
  FBaseParticle *pFVar17;
  longlong lVar18;
  FBaseParticle *pFVar19;
  UObject *pUVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  FBaseParticle *local_res8;
  FBaseParticle *local_res10;
  FRandomStream *local_res18;
  longlong local_res20;
  double local_178 [3];
  FBaseParticle *local_160;
  double local_158 [6];
  TVector<double> local_128;
  double local_110 [6];
  double local_e0 [20];
  
  local_160 = param_1->ParticleBase;
  uVar5 = (this->HeightAxis).Value;
  lVar22 = 0;
  lVar21 = 2;
  local_res8 = (FBaseParticle *)&DAT_00000001;
  if (uVar5 == '\0') {
    local_res8 = (FBaseParticle *)&DAT_00000002;
    lVar22 = 1;
    lVar21 = 0;
  }
  else if (uVar5 == '\x01') {
    local_res8 = (FBaseParticle *)&DAT_00000002;
    lVar21 = 1;
  }
  lVar7 = param_1->_padding_;
  local_res10 = (FBaseParticle *)param_1;
  local_res18 = param_2;
  local_res20 = lVar7;
  pUVar20 = (UObject *)(**(code **)(**(longlong **)(lVar7 + 0x10) + 8))();
  auVar31 = ZEXT416((uint)*(float *)(lVar7 + 0x1a0));
  FRawDistributionVector::GetValue
            ((FRawDistributionVector *)&this->_padding_,&local_128,*(float *)(lVar7 + 0x1a0),pUVar20
             ,0,param_2);
  local_178[2] = 0.0;
  local_178[0] = 0.0;
  local_178[1] = 0.0;
  pUVar20 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar24 = FRawDistributionFloat::GetValue
                     (&this->StartRadius,*(float *)(lVar7 + 0x1a0),pUVar20,param_2);
  pUVar20 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar25 = FRawDistributionFloat::GetValue
                     (&this->StartHeight,*(float *)(lVar7 + 0x1a0),pUVar20,param_2);
  lVar7 = local_res20;
  pFVar16 = local_res8;
  bVar15 = false;
  dVar30 = (double)fVar24;
  iVar23 = 0;
  fVar25 = fVar25 * __real_3f000000;
  local_158[3] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_158[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_158[5] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  do {
    (**(code **)(this->_padding_ + 0x398))(this,lVar7,local_110 + 6,local_res18);
    pFVar19 = local_160;
    lVar18 = local_res20;
    pFVar17 = local_res10;
    dVar2 = local_110[lVar21 + 6];
    local_158[lVar22 + 3] = local_110[lVar22 + 6];
    local_158[(longlong)((longlong)(pFVar16->OldLocation).field0_0x0.XYZ + 3)] =
         local_110[(longlong)((longlong)(pFVar16->OldLocation).field0_0x0.XYZ + 6)];
    local_158[lVar21 + 3] = dVar2;
    dVar3 = local_158[(longlong)((longlong)(pFVar16->OldLocation).field0_0x0.XYZ + 3)];
    dVar4 = local_158[lVar22 + 3];
    dVar34 = dVar3 * dVar30;
    dVar35 = dVar4 * dVar30;
    if ((double)(fVar24 * fVar24) < dVar35 * dVar35 + dVar34 * dVar34) {
      if (0x31 < iVar23) {
        bVar15 = true;
      }
    }
    else {
      bVar15 = true;
    }
    iVar23 = iVar23 + 1;
  } while (!bVar15);
  auVar10._4_8_ = auVar31._8_8_;
  auVar10._0_4_ = (int)((ulonglong)local_158[3] >> 0x20);
  auVar31._0_8_ = auVar10._0_8_ << 0x20;
  auVar31._8_4_ = SUB84(local_158[4],0);
  auVar31._12_4_ = (int)((ulonglong)local_158[4] >> 0x20);
  local_158[2] = local_158[5];
  local_158[0] = local_158[3];
  local_158[1] = local_158[4];
  dVar29 = auVar31._8_8_ * auVar31._8_8_ + local_158[3] * local_158[3] + local_158[5] * local_158[5]
  ;
  if (__real_3e45798ee0000000 < dVar29) {
    dVar29 = __real_3ff0000000000000 / SQRT(dVar29);
    auVar9._8_4_ = SUB84(local_158[5] * dVar29,0);
    auVar9._0_8_ = local_158[4] * dVar29;
    auVar9._12_4_ = (int)((ulonglong)(local_158[5] * dVar29) >> 0x20);
    local_158[1] = local_158[4] * dVar29;
    local_158[2] = auVar9._8_8_;
    local_158[0] = local_158[3] * dVar29;
  }
  dVar29 = dVar4 * dVar4 + dVar3 * dVar3;
  if (dVar29 <= __real_3e45798ee0000000) {
    dVar4 = 0.0;
    dVar29 = 0.0;
  }
  else {
    dVar29 = __real_3ff0000000000000 / SQRT(dVar29);
    dVar4 = dVar4 * dVar29;
    dVar29 = dVar29 * dVar3;
  }
  lVar7 = this->_padding_;
  pdVar1 = local_178 + lVar22;
  local_158[lVar22] = dVar4;
  dVar3 = (double)fVar25;
  local_158[(longlong)pFVar16] = dVar29;
  dVar2 = dVar3 * dVar2;
  local_178[lVar21] = dVar2;
  if (((lVar7 & 0x40) != 0) &&
     (dVar2 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
              dVar3, uVar26 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar27 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3e45798ee2308c3a <= (double)CONCAT44(uVar27,uVar26) &&
     (double)CONCAT44(uVar27,uVar26) != __real_3e45798ee2308c3a)) {
    dVar35 = dVar30 * local_158[lVar22];
    dVar34 = dVar29 * dVar30;
  }
  *pdVar1 = dVar35;
  local_178[(longlong)pFVar16] = dVar34;
  uVar26 = (uint)__xmm_80000000000000008000000000000000;
  uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar29 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar27,SUB84(dVar3,0) ^ uVar26);
  dVar2 = local_158[(longlong)pFVar16];
  dVar34 = *(double *)(local_res20 + 0x80);
  dVar35 = *(double *)(local_res20 + 0x88);
  local_110[lVar22 + 3] =
       (double)CONCAT44((uint)((ulonglong)local_158[lVar22] >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_158[lVar22],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
       dVar30;
  dVar4 = *pdVar1;
  local_110[(longlong)((longlong)(pFVar16->OldLocation).field0_0x0.XYZ + 3)] =
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * dVar30;
  local_110[lVar21 + 3] = dVar3;
  dVar30 = local_110[lVar22 + 3];
  dVar2 = (double)(float)dVar4;
  if (dVar30 <= (double)(float)dVar4) {
    dVar2 = dVar30;
  }
  dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar27,SUB84(dVar30,0) ^ uVar26);
  if (dVar2 <= dVar30) {
    dVar2 = dVar30;
  }
  dVar30 = local_110[(longlong)((longlong)(pFVar16->OldLocation).field0_0x0.XYZ + 3)];
  *pdVar1 = dVar2;
  dVar2 = (double)(float)local_178[(longlong)pFVar16];
  if (dVar30 <= dVar2) {
    dVar2 = dVar30;
  }
  dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar27,SUB84(dVar30,0) ^ uVar26);
  if (dVar2 <= dVar30) {
    dVar2 = dVar30;
  }
  local_178[(longlong)pFVar16] = dVar2;
  dVar30 = local_128.field0_0x0.XYZ[lVar22];
  dVar2 = (double)(float)local_178[lVar21];
  if (dVar3 <= (double)(float)local_178[lVar21]) {
    dVar2 = dVar3;
  }
  dVar3 = local_128.field0_0x0.XYZ[lVar21];
  if (dVar2 <= dVar29) {
    dVar2 = dVar29;
  }
  local_178[lVar21] = dVar2;
  *pdVar1 = dVar30 + *pdVar1;
  local_178[(longlong)pFVar16] =
       local_128.field0_0x0.XYZ[(longlong)pFVar16] + local_178[(longlong)pFVar16];
  dVar4 = *(double *)(local_res20 + 0x60);
  dVar29 = *(double *)(local_res20 + 0x68);
  dVar3 = dVar3 + local_178[lVar21];
  local_178[lVar21] = dVar3;
  dVar11 = *(double *)(local_res20 + 0xa0);
  dVar12 = *(double *)(local_res20 + 0xa8);
  dVar13 = *(double *)(local_res20 + 0xc0);
  dVar14 = *(double *)(local_res20 + 200);
  dVar30 = (pFVar19->Location).field0_0x0._s_0.Y;
  dVar2 = (pFVar19->Location).field0_0x0._s_0.X;
  (pFVar19->Location).field0_0x0._s_0.Z =
       *(double *)(local_res20 + 0x70) * local_178[0] +
       local_178[1] * *(double *)(local_res20 + 0x90) +
       *(double *)(local_res20 + 0xb0) * local_178[2] + *(double *)(local_res20 + 0xd0) * 0.0 +
       (pFVar19->Location).field0_0x0._s_0.Z;
  (pFVar19->Location).field0_0x0._s_0.Y =
       dVar35 * local_178[1] + local_178[0] * dVar29 + local_178[2] * dVar12 + dVar14 * 0.0 + dVar30
  ;
  (pFVar19->Location).field0_0x0._s_0.X =
       dVar34 * local_178[1] + local_178[0] * dVar4 + local_178[2] * dVar11 + dVar13 * 0.0 + dVar2;
  if ((this->_padding_ & 0x80) != 0) {
    dVar30 = local_178[(longlong)pFVar16];
    dVar2 = local_128.field0_0x0.XYZ[(longlong)pFVar16];
    dVar4 = local_128.field0_0x0.XYZ[lVar21];
    local_110[lVar22] = *pdVar1 - local_128.field0_0x0.XYZ[lVar22];
    local_110[(longlong)pFVar16] = dVar30 - dVar2;
    local_110[lVar21] = dVar3 - dVar4;
    if (this->RadialVelocity != 0) {
      local_110[lVar21] = 0.0;
    }
    plVar8 = *(longlong **)((longlong)(local_res10->OldLocation).field0_0x0._s_0.X + 0x10);
    pUVar20 = (UObject *)(**(code **)(*plVar8 + 8))(plVar8,local_178,pdVar1);
    fVar24 = FRawDistributionFloat::GetValue
                       ((FRawDistributionFloat *)&this->_padding_,*(float *)(lVar18 + 0x1a0),pUVar20
                        ,local_res18);
    dVar2 = *(double *)(lVar18 + 0x68);
    dVar30 = (double)fVar24;
    local_110[1] = local_110[1] * dVar30;
    local_110[2] = local_110[2] * dVar30;
    local_110[0] = local_110[0] * dVar30;
    dVar30 = *(double *)(lVar18 + 0x88);
    dVar3 = *(double *)(lVar18 + 0xa8);
    dVar4 = *(double *)(lVar18 + 200);
    fVar28 = (float)(*(double *)(lVar18 + 0x60) * local_110[0] +
                     local_110[1] * *(double *)(lVar18 + 0x80) +
                     *(double *)(lVar18 + 0xa0) * local_110[2] + *(double *)(lVar18 + 0xc0) * 0.0);
    fVar33 = (float)(*(double *)(lVar18 + 0x90) * local_110[1] +
                     local_110[0] * *(double *)(lVar18 + 0x70) +
                     *(double *)(lVar18 + 0xb0) * local_110[2] + *(double *)(lVar18 + 0xd0) * 0.0);
    (pFVar19->Velocity).field0_0x0._s_0.X = fVar28 + (pFVar19->Velocity).field0_0x0._s_0.X;
    fVar32 = (float)(dVar2 * local_110[0] + local_110[1] * dVar30 + dVar3 * local_110[2] +
                    dVar4 * 0.0);
    fVar24 = (pFVar19->Velocity).field0_0x0._s_0.Y;
    (pFVar19->Velocity).field0_0x0._s_0.Z = fVar33 + (pFVar19->Velocity).field0_0x0._s_0.Z;
    (pFVar19->Velocity).field0_0x0._s_0.Y = fVar32 + fVar24;
    fVar24 = (pFVar19->BaseVelocity).field0_0x0._s_0.Y;
    fVar25 = (pFVar19->BaseVelocity).field0_0x0._s_0.Z;
    (pFVar19->BaseVelocity).field0_0x0._s_0.X = fVar28 + (pFVar19->BaseVelocity).field0_0x0._s_0.X;
    (pFVar19->BaseVelocity).field0_0x0._s_0.Y = fVar32 + fVar24;
    (pFVar19->BaseVelocity).field0_0x0._s_0.Z = fVar33 + fVar25;
  }
  iVar23 = _finite((pFVar19->Location).field0_0x0._s_0.X);
  if (((iVar23 == 0) || (iVar23 = _finite((pFVar19->Location).field0_0x0._s_0.Y), iVar23 == 0)) ||
     (iVar23 = _finite((pFVar19->Location).field0_0x0._s_0.Z), iVar23 == 0)) {
    local_res8 = pFVar17;
    `UParticleModuleLocationPrimitiveCylinder::SpawnEx'::__l2::<lambda_1>::operator()(&local_res8);
  }
  iVar23 = _finite((double)(pFVar19->Velocity).field0_0x0._s_0.X);
  if (((iVar23 == 0) ||
      (iVar23 = _finite((double)(pFVar19->Velocity).field0_0x0._s_0.Y), iVar23 == 0)) ||
     (iVar23 = _finite((double)(pFVar19->Velocity).field0_0x0._s_0.Z), iVar23 == 0)) {
    local_160 = pFVar17;
    `UParticleModuleLocationPrimitiveCylinder::SpawnEx'::__l2::<lambda_2>::operator()(&local_160);
  }
  return;
}

// operator() @ 150525c30

bool __thiscall
`UParticleModuleLocationPrimitiveCylinder::SpawnEx'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554901>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554901>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150525d0f;
    }
  }
  bVar4 = false;
LAB_150525d0f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150526c00

bool __thiscall
`UParticleModuleLocationPrimitiveCylinder::SpawnEx'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554902>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554902>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150526cdf;
    }
  }
  bVar4 = false;
LAB_150526cdf:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

