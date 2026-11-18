// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147306010

UClass * __cdecl UParticleModuleLocationPrimitiveSphere::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveSphere",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveSphere,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationPrimitiveSphere>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveSphere>,local_res8,
               UParticleModuleLocationPrimitiveBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.InnerSingleton;
}

// UParticleModuleLocationPrimitiveSphere @ 14730a950

UParticleModuleLocationPrimitiveSphere * __thiscall
UParticleModuleLocationPrimitiveSphere::UParticleModuleLocationPrimitiveSphere
          (UParticleModuleLocationPrimitiveSphere *this,FVTableHelper *param_1)

{
  UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
            ((UParticleModuleLocationPrimitiveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveSphere__6B_;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  *(undefined4 *)&(this->StartRadius)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRadius)._padding_ + 4) = 0;
  (this->StartRadius).MinValue = 0.0;
  (this->StartRadius).MaxValue = 0.0;
  (this->StartRadius).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleLocationPrimitiveSphere @ 14730b8d0

void __thiscall
UParticleModuleLocationPrimitiveSphere::~UParticleModuleLocationPrimitiveSphere
          (UParticleModuleLocationPrimitiveSphere *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveSphere__6B_;
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

// GetPrivateStaticClass @ 14730e360

UClass * __cdecl UParticleModuleLocationPrimitiveSphere::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveSphere",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveSphere,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationPrimitiveSphere>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveSphere>,local_res8,
               UParticleModuleLocationPrimitiveBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationPrimitiveSphere @ 14730fdf0

void __cdecl
UParticleModuleLocationPrimitiveSphere::StaticRegisterNativesUParticleModuleLocationPrimitiveSphere
          (void)

{
  return;
}

// UParticleModuleLocationPrimitiveSphere @ 14815d0a0

UParticleModuleLocationPrimitiveSphere * __thiscall
UParticleModuleLocationPrimitiveSphere::UParticleModuleLocationPrimitiveSphere
          (UParticleModuleLocationPrimitiveSphere *this,FObjectInitializer *param_1)

{
  UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
            ((UParticleModuleLocationPrimitiveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveSphere__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x40;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  (this->StartRadius)._padding_ = 0;
  *(undefined4 *)&(this->StartRadius)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRadius)._padding_ + 4) = 0;
  (this->StartRadius).MinValue = 0.0;
  (this->StartRadius).MaxValue = 0.0;
  (this->StartRadius).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// InitializeDefaults @ 1481840a0

void __thiscall
UParticleModuleLocationPrimitiveSphere::InitializeDefaults
          (UParticleModuleLocationPrimitiveSphere *this)

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
  return;
}

// PostInitProperties @ 14818a710

void __thiscall
UParticleModuleLocationPrimitiveSphere::PostInitProperties
          (UParticleModuleLocationPrimitiveSphere *this)

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
  }
  return;
}

// Render3DPreview @ 14818fdf0

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
UParticleModuleLocationPrimitiveSphere::Render3DPreview
          (UParticleModuleLocationPrimitiveSphere *this,FPreviewContext *param_1)

{
  return;
}

// Spawn @ 14819bef0

void __thiscall
UParticleModuleLocationPrimitiveSphere::Spawn
          (UParticleModuleLocationPrimitiveSphere *this,FSpawnContext *param_1)

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

// SpawnEx @ 14819f210

void __thiscall
UParticleModuleLocationPrimitiveSphere::SpawnEx
          (UParticleModuleLocationPrimitiveSphere *this,FSpawnContext *param_1,
          FRandomStream *param_2)

{
  float fVar1;
  longlong lVar2;
  FBaseParticle *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  int iVar12;
  UObject *pUVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  FSpawnContext *local_res8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  TVector<double>_u_0 local_88 [4];
  
  lVar2 = param_1->_padding_;
  pFVar3 = param_1->ParticleBase;
  pUVar13 = (UObject *)(**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
  FRawDistributionVector::GetValue
            ((FRawDistributionVector *)&this->_padding_,(TVector<double> *)&local_88[0]._s_0,
             *(float *)(lVar2 + 0x1a0),pUVar13,0,param_2);
  (**(code **)(this->_padding_ + 0x398))(this,lVar2,&local_b8,param_2);
  local_90 = local_a8;
  local_a0 = local_b8;
  dStack_98 = dStack_b0;
  dVar25 = dStack_b0 * dStack_b0 + local_b8 * local_b8 + local_a8 * local_a8;
  dVar18 = local_b8;
  dVar4 = dStack_b0;
  dVar20 = local_a8;
  if (__real_3e45798ee0000000 < dVar25) {
    local_res8 = (FSpawnContext *)(__real_3ff0000000000000 / SQRT(dVar25));
    dVar18 = local_b8 * (double)local_res8;
    dVar4 = dStack_b0 * (double)local_res8;
    dVar20 = local_a8 * (double)local_res8;
  }
  if (((this->_padding_ & 0x40) != 0) && (__real_3e45798ee0000000 < dVar25)) {
    local_res8 = (FSpawnContext *)(__real_3ff0000000000000 / SQRT(dVar25));
    local_b8 = local_b8 * (double)local_res8;
    dStack_b0 = dStack_b0 * (double)local_res8;
    local_a8 = local_a8 * (double)local_res8;
  }
  pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar14 = FRawDistributionFloat::GetValue
                     (&this->StartRadius,*(float *)(lVar2 + 0x1a0),pUVar13,param_2);
  lVar11 = this->_padding_;
  dVar17 = (double)fVar14;
  dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * dVar17
  ;
  dVar25 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * dVar17;
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * dVar17;
  uVar26 = (uint)__xmm_80000000000000008000000000000000;
  uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((lVar11 & 9) == 0) {
    dVar20 = 0.0;
  }
  else {
    dVar20 = (double)(float)(local_b8 * dVar17);
    if (dVar18 <= (double)(float)(local_b8 * dVar17)) {
      dVar20 = dVar18;
    }
    uVar28 = SUB84(dVar18,0) ^ uVar26;
    uVar29 = (uint)((ulonglong)dVar18 >> 0x20) ^ uVar27;
    if (dVar20 <= (double)CONCAT44(uVar29,uVar28)) {
      dVar20 = (double)CONCAT44(uVar29,uVar28);
    }
  }
  if ((lVar11 & 0x12) == 0) {
    dVar18 = 0.0;
  }
  else {
    dVar18 = (double)(float)(dStack_b0 * dVar17);
    if (dVar25 <= (double)(float)(dStack_b0 * dVar17)) {
      dVar18 = dVar25;
    }
    uVar28 = SUB84(dVar25,0) ^ uVar26;
    uVar29 = (uint)((ulonglong)dVar25 >> 0x20) ^ uVar27;
    if (dVar18 <= (double)CONCAT44(uVar29,uVar28)) {
      dVar18 = (double)CONCAT44(uVar29,uVar28);
    }
  }
  if ((lVar11 & 0x24) == 0) {
    dVar25 = 0.0;
  }
  else {
    dVar25 = (double)(float)(local_a8 * dVar17);
    if (dVar4 <= (double)(float)(local_a8 * dVar17)) {
      dVar25 = dVar4;
    }
    uVar26 = SUB84(dVar4,0) ^ uVar26;
    uVar27 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar27;
    if (dVar25 <= (double)CONCAT44(uVar27,uVar26)) {
      dVar25 = (double)CONCAT44(uVar27,uVar26);
    }
  }
  dVar20 = (double)local_88[0]._0_8_ + dVar20;
  dVar25 = (double)local_88[0]._16_8_ + dVar25;
  dVar21 = *(double *)(lVar2 + 0x68);
  dVar18 = (double)local_88[0]._8_8_ + dVar18;
  dVar22 = *(double *)(lVar2 + 0x88);
  auVar15._8_4_ = SUB84(dVar18,0);
  auVar15._0_8_ = dVar18;
  auVar15._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  dVar5 = *(double *)(lVar2 + 0xa8);
  dVar6 = *(double *)(lVar2 + 200);
  dVar7 = *(double *)(lVar2 + 0x70);
  dVar8 = *(double *)(lVar2 + 0x90);
  dVar9 = *(double *)(lVar2 + 0xb0);
  dVar10 = *(double *)(lVar2 + 0xd0);
  dVar4 = (pFVar3->Location).field0_0x0._s_0.Y;
  (pFVar3->Location).field0_0x0._s_0.X =
       dVar20 * *(double *)(lVar2 + 0x60) + dVar18 * *(double *)(lVar2 + 0x80) +
       dVar25 * *(double *)(lVar2 + 0xa0) + *(double *)(lVar2 + 0xc0) * 0.0 +
       (pFVar3->Location).field0_0x0._s_0.X;
  dVar17 = (pFVar3->Location).field0_0x0._s_0.Z;
  (pFVar3->Location).field0_0x0._s_0.Y =
       dVar20 * dVar21 + auVar15._8_8_ * dVar22 + dVar25 * dVar5 + dVar6 * 0.0 + dVar4;
  (pFVar3->Location).field0_0x0._s_0.Z =
       dVar7 * dVar20 + dVar18 * dVar8 + dVar9 * dVar25 + dVar10 * 0.0 + dVar17;
  if ((this->_padding_ & 0x80) != 0) {
    pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    fVar14 = FRawDistributionFloat::GetValue
                       ((FRawDistributionFloat *)&this->_padding_,*(float *)(lVar2 + 0x1a0),pUVar13,
                        param_2);
    dVar21 = (double)fVar14;
    dVar17 = dVar21 * (dVar18 - (double)local_88[0]._8_8_);
    dVar22 = dVar21 * (dVar25 - (double)local_88[0]._16_8_);
    dVar21 = dVar21 * (dVar20 - (double)local_88[0]._0_8_);
    auVar16._8_4_ = SUB84(dVar21,0);
    auVar16._0_8_ = dVar21;
    auVar16._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar18 = *(double *)(lVar2 + 0x90);
    dVar4 = *(double *)(lVar2 + 0x70);
    dVar20 = *(double *)(lVar2 + 0xb0);
    dVar25 = *(double *)(lVar2 + 0xd0);
    fVar19 = (float)(dVar17 * *(double *)(lVar2 + 0x80) + dVar21 * *(double *)(lVar2 + 0x60) +
                     dVar22 * *(double *)(lVar2 + 0xa0) + *(double *)(lVar2 + 0xc0) * 0.0);
    fVar23 = (float)(dVar17 * *(double *)(lVar2 + 0x88) + auVar16._8_8_ * *(double *)(lVar2 + 0x68)
                     + dVar22 * *(double *)(lVar2 + 0xa8) + *(double *)(lVar2 + 200) * 0.0);
    fVar14 = (pFVar3->Velocity).field0_0x0._s_0.Y;
    (pFVar3->Velocity).field0_0x0._s_0.X = fVar19 + (pFVar3->Velocity).field0_0x0._s_0.X;
    (pFVar3->Velocity).field0_0x0._s_0.Y = fVar23 + fVar14;
    fVar24 = (float)(dVar21 * dVar4 + dVar18 * dVar17 + dVar22 * dVar20 + dVar25 * 0.0);
    (pFVar3->Velocity).field0_0x0._s_0.Z = fVar24 + (pFVar3->Velocity).field0_0x0._s_0.Z;
    fVar14 = (pFVar3->BaseVelocity).field0_0x0._s_0.Y;
    fVar1 = (pFVar3->BaseVelocity).field0_0x0._s_0.Z;
    (pFVar3->BaseVelocity).field0_0x0._s_0.X = fVar19 + (pFVar3->BaseVelocity).field0_0x0._s_0.X;
    (pFVar3->BaseVelocity).field0_0x0._s_0.Y = fVar23 + fVar14;
    (pFVar3->BaseVelocity).field0_0x0._s_0.Z = fVar24 + fVar1;
  }
  iVar12 = _finite((pFVar3->Location).field0_0x0._s_0.X);
  if (((iVar12 == 0) || (iVar12 = _finite((pFVar3->Location).field0_0x0._s_0.Y), iVar12 == 0)) ||
     (iVar12 = _finite((pFVar3->Location).field0_0x0._s_0.Z), iVar12 == 0)) {
    local_res8 = param_1;
    `UParticleModuleLocationPrimitiveSphere::SpawnEx'::__l2::<lambda_1>::operator()(&local_res8);
  }
  iVar12 = _finite((double)(pFVar3->Velocity).field0_0x0._s_0.X);
  if (((iVar12 == 0) ||
      (iVar12 = _finite((double)(pFVar3->Velocity).field0_0x0._s_0.Y), iVar12 == 0)) ||
     (iVar12 = _finite((double)(pFVar3->Velocity).field0_0x0._s_0.Z), iVar12 == 0)) {
    local_res8 = param_1;
    `UParticleModuleLocationPrimitiveSphere::SpawnEx'::__l2::<lambda_2>::operator()(&local_res8);
  }
  return;
}

// operator() @ 150525d60

bool __thiscall
`UParticleModuleLocationPrimitiveSphere::SpawnEx'::__l2::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555131>);
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
                      (&bGEnsureHasExecuted<7003914095707555131>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150525e3f;
    }
  }
  bVar4 = false;
LAB_150525e3f:
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

// operator() @ 150526d30

bool __thiscall
`UParticleModuleLocationPrimitiveSphere::SpawnEx'::__l2::<lambda_2>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555132>);
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
                      (&bGEnsureHasExecuted<7003914095707555132>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150526e0f;
    }
  }
  bVar4 = false;
LAB_150526e0f:
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

