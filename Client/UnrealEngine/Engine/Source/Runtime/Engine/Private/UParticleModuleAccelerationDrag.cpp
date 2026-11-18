// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1472f6ba0

UClass * __cdecl UParticleModuleAccelerationDrag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationDrag",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationDrag,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAccelerationDrag>,
               InternalVTableHelperCtorCaller<UParticleModuleAccelerationDrag>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.InnerSingleton;
}

// UParticleModuleAccelerationDrag @ 1472fc320

UParticleModuleAccelerationDrag * __thiscall
UParticleModuleAccelerationDrag::UParticleModuleAccelerationDrag
          (UParticleModuleAccelerationDrag *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationDrag__6B_;
  (this->DragCoefficient_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->DragCoefficientRaw)._padding_ = 0;
  (this->DragCoefficientRaw)._padding_ = 0;
  (this->DragCoefficientRaw)._padding_ = 0;
  *(undefined4 *)&(this->DragCoefficientRaw)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DragCoefficientRaw)._padding_ + 4) = 0;
  (this->DragCoefficientRaw).MinValue = 0.0;
  (this->DragCoefficientRaw).MaxValue = 0.0;
  (this->DragCoefficientRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleAccelerationDrag @ 1472fd6c0

void __thiscall
UParticleModuleAccelerationDrag::~UParticleModuleAccelerationDrag
          (UParticleModuleAccelerationDrag *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationDrag__6B_;
  pvVar1 = (void *)(this->DragCoefficientRaw)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472ffb80

UClass * __cdecl UParticleModuleAccelerationDrag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationDrag",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationDrag,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAccelerationDrag>,
               InternalVTableHelperCtorCaller<UParticleModuleAccelerationDrag>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAccelerationDrag @ 147301740

void __cdecl
UParticleModuleAccelerationDrag::StaticRegisterNativesUParticleModuleAccelerationDrag(void)

{
  return;
}

// UParticleModuleAccelerationDrag @ 14815b4b0

UParticleModuleAccelerationDrag * __thiscall
UParticleModuleAccelerationDrag::UParticleModuleAccelerationDrag
          (UParticleModuleAccelerationDrag *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationDrag__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x82;
  (this->DragCoefficient_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->DragCoefficientRaw)._padding_ = 0;
  (this->DragCoefficientRaw)._padding_ = 0;
  (this->DragCoefficientRaw)._padding_ = 0;
  *(undefined4 *)&(this->DragCoefficientRaw)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DragCoefficientRaw)._padding_ + 4) = 0;
  (this->DragCoefficientRaw).MinValue = 0.0;
  (this->DragCoefficientRaw).MaxValue = 0.0;
  (this->DragCoefficientRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// CompileModule @ 1481694f0

void __thiscall
UParticleModuleAccelerationDrag::CompileModule
          (UParticleModuleAccelerationDrag *this,FParticleEmitterBuildInfo *param_1)

{
  FComposableFloatDistribution::Initialize
            (&param_1->DragCoefficient,(this->DragCoefficientRaw).Distribution.field0_0x0.DebugPtr);
  return;
}

// InitializeDefaults @ 148182ba0

void __thiscall
UParticleModuleAccelerationDrag::InitializeDefaults(UParticleModuleAccelerationDrag *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->DragCoefficientRaw);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionDragCoefficient");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->DragCoefficientRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 148189650

void __thiscall
UParticleModuleAccelerationDrag::PostInitProperties(UParticleModuleAccelerationDrag *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->DragCoefficientRaw);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionDragCoefficient");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->DragCoefficientRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// PostLoad @ 14818c320

void __thiscall UParticleModuleAccelerationDrag::PostLoad(UParticleModuleAccelerationDrag *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UParticleModuleAccelerationDrag **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Update @ 1481a88a0

void __thiscall
UParticleModuleAccelerationDrag::Update
          (UParticleModuleAccelerationDrag *this,FUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  UObject *pUVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar8 = __xmm_80000000800000008000000080000000;
  lVar12 = param_1->_padding_;
  fVar1 = param_1->DeltaTime;
  lVar6 = *(longlong *)(lVar12 + 0x168);
  iVar5 = *(int *)(lVar12 + 0x188);
  lVar7 = *(longlong *)(lVar12 + 0x170);
  iVar9 = *(int *)(lVar12 + 0x18c) + -1;
  lVar12 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      uVar10 = (uint)*(ushort *)(lVar7 + lVar12 * 2) * iVar5;
      uVar13 = (ulonglong)uVar10;
      if ((*(uint *)((ulonglong)uVar10 + 0x6c + lVar6) & 0x4000000) == 0) {
        pUVar11 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
        fVar14 = FRawDistributionFloat::GetValue
                           (&this->DragCoefficientRaw,*(float *)(uVar13 + 0x90 + lVar6),pUVar11,
                            (FRandomStream *)0x0);
        fVar2 = *(float *)(uVar13 + 0x40 + lVar6);
        fVar14 = (float)((uint)fVar14 ^ uVar8);
        fVar3 = *(float *)(uVar13 + 0x44 + lVar6);
        fVar4 = *(float *)(uVar13 + 0x48 + lVar6);
        fVar16 = fVar2 * fVar14 * fVar1;
        fVar15 = fVar3 * fVar14 * fVar1;
        fVar14 = fVar4 * fVar14 * fVar1;
        *(float *)(uVar13 + 0x40 + lVar6) = fVar16 + fVar2;
        *(float *)(uVar13 + 0x44 + lVar6) = fVar15 + fVar3;
        *(float *)(uVar13 + 0x48 + lVar6) = fVar14 + fVar4;
        *(float *)(uVar13 + 0x30 + lVar6) = fVar16 + *(float *)(uVar13 + 0x30 + lVar6);
        *(float *)(uVar13 + 0x34 + lVar6) = fVar15 + *(float *)(uVar13 + 0x34 + lVar6);
        *(float *)(uVar13 + 0x38 + lVar6) = fVar14 + *(float *)(uVar13 + 0x38 + lVar6);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  return;
}

