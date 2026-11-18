// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147315200

UClass * __cdecl UParticleModuleVectorFieldScaleOverLife::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldScaleOverLife",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldScaleOverLife>
               ,InternalVTableHelperCtorCaller<UParticleModuleVectorFieldScaleOverLife>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.InnerSingleton;
}

// UParticleModuleVectorFieldScaleOverLife @ 1473190b0

UParticleModuleVectorFieldScaleOverLife * __thiscall
UParticleModuleVectorFieldScaleOverLife::UParticleModuleVectorFieldScaleOverLife
          (UParticleModuleVectorFieldScaleOverLife *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldScaleOverLife__6B_;
  (this->VectorFieldScaleOverLife_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  (this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  (this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  *(undefined4 *)&(this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->VectorFieldScaleOverLifeRaw)._padding_ + 4) = 0;
  (this->VectorFieldScaleOverLifeRaw).MinValue = 0.0;
  (this->VectorFieldScaleOverLifeRaw).MaxValue = 0.0;
  (this->VectorFieldScaleOverLifeRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleVectorFieldScaleOverLife @ 147319ab0

void __thiscall
UParticleModuleVectorFieldScaleOverLife::~UParticleModuleVectorFieldScaleOverLife
          (UParticleModuleVectorFieldScaleOverLife *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldScaleOverLife__6B_;
  pvVar1 = (void *)(this->VectorFieldScaleOverLifeRaw)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c730

UClass * __cdecl UParticleModuleVectorFieldScaleOverLife::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldScaleOverLife",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldScaleOverLife>
               ,InternalVTableHelperCtorCaller<UParticleModuleVectorFieldScaleOverLife>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife @ 14731d0e0

void __cdecl
UParticleModuleVectorFieldScaleOverLife::
StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife(void)

{
  return;
}

// UParticleModuleVectorFieldScaleOverLife @ 14815eb10

UParticleModuleVectorFieldScaleOverLife * __thiscall
UParticleModuleVectorFieldScaleOverLife::UParticleModuleVectorFieldScaleOverLife
          (UParticleModuleVectorFieldScaleOverLife *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldScaleOverLife__6B_;
  (this->VectorFieldScaleOverLife_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  (this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  (this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  *(undefined4 *)&(this->VectorFieldScaleOverLifeRaw)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->VectorFieldScaleOverLifeRaw)._padding_ + 4) = 0;
  (this->VectorFieldScaleOverLifeRaw).MinValue = 0.0;
  (this->VectorFieldScaleOverLifeRaw).MaxValue = 0.0;
  (this->VectorFieldScaleOverLifeRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// CompileModule @ 14816a230

void __thiscall
UParticleModuleVectorFieldScaleOverLife::CompileModule
          (UParticleModuleVectorFieldScaleOverLife *this,FParticleEmitterBuildInfo *param_1)

{
  FComposableFloatDistribution::ScaleByDistribution
            (&param_1->VectorFieldScaleOverLife,
             (this->VectorFieldScaleOverLifeRaw).Distribution.field0_0x0.DebugPtr);
  return;
}

// InitializeDefaults @ 1481850b0

void __thiscall
UParticleModuleVectorFieldScaleOverLife::InitializeDefaults
          (UParticleModuleVectorFieldScaleOverLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->VectorFieldScaleOverLifeRaw);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionVectorFieldScaleOverLife");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VectorFieldScaleOverLifeRaw).Distribution.field0_0x0.DebugPtr =
         (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818bdb0

void __thiscall
UParticleModuleVectorFieldScaleOverLife::PostInitProperties
          (UParticleModuleVectorFieldScaleOverLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->VectorFieldScaleOverLifeRaw);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionVectorFieldScaleOverLife");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->VectorFieldScaleOverLifeRaw).Distribution.field0_0x0.DebugPtr =
           (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// PostLoad @ 14818c6d0

void __thiscall
UParticleModuleVectorFieldScaleOverLife::PostLoad(UParticleModuleVectorFieldScaleOverLife *this)

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
    if (*(UParticleModuleVectorFieldScaleOverLife **)FVar5 == this) {
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

