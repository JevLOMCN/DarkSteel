// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1472f7b20

UClass * __cdecl UParticleModuleAttractorPointGravity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorPointGravity",
               &Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorPointGravity,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorPointGravity>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorPointGravity>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.InnerSingleton;
}

// UParticleModuleAttractorPointGravity @ 1472fc640

UParticleModuleAttractorPointGravity * __thiscall
UParticleModuleAttractorPointGravity::UParticleModuleAttractorPointGravity
          (UParticleModuleAttractorPointGravity *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAttractorPointGravity__6B_;
  (this->Strength_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StrengthRaw)._padding_ = 0;
  (this->StrengthRaw)._padding_ = 0;
  (this->StrengthRaw)._padding_ = 0;
  *(undefined4 *)&(this->StrengthRaw)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StrengthRaw)._padding_ + 4) = 0;
  (this->StrengthRaw).MinValue = 0.0;
  (this->StrengthRaw).MaxValue = 0.0;
  (this->StrengthRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleAttractorPointGravity @ 1472fd8a0

void __thiscall
UParticleModuleAttractorPointGravity::~UParticleModuleAttractorPointGravity
          (UParticleModuleAttractorPointGravity *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleAttractorPointGravity__6B_;
  pvVar1 = (void *)(this->StrengthRaw)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473000c0

UClass * __cdecl UParticleModuleAttractorPointGravity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorPointGravity",
               &Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorPointGravity,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorPointGravity>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorPointGravity>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorPointGravity.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAttractorPointGravity @ 1473017b0

void __cdecl
UParticleModuleAttractorPointGravity::StaticRegisterNativesUParticleModuleAttractorPointGravity
          (void)

{
  return;
}

// UParticleModuleAttractorPointGravity @ 14815b910

UParticleModuleAttractorPointGravity * __thiscall
UParticleModuleAttractorPointGravity::UParticleModuleAttractorPointGravity
          (UParticleModuleAttractorPointGravity *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleAttractorPointGravity__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0xc0;
  (this->Strength_DEPRECATED).field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StrengthRaw)._padding_ = 0;
  (this->StrengthRaw)._padding_ = 0;
  (this->StrengthRaw)._padding_ = 0;
  *(undefined4 *)&(this->StrengthRaw)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StrengthRaw)._padding_ + 4) = 0;
  (this->StrengthRaw).MinValue = 0.0;
  (this->StrengthRaw).MaxValue = 0.0;
  (this->StrengthRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// CompileModule @ 148169530

void __thiscall
UParticleModuleAttractorPointGravity::CompileModule
          (UParticleModuleAttractorPointGravity *this,FParticleEmitterBuildInfo *param_1)

{
  double dVar1;
  
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  (param_1->PointAttractorPosition).field0_0x0._s_0.X = (this->Position).field0_0x0._s_0.X;
  (param_1->PointAttractorPosition).field0_0x0._s_0.Y = dVar1;
  (param_1->PointAttractorPosition).field0_0x0._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  param_1->PointAttractorRadius = this->Radius;
  FComposableFloatDistribution::Initialize
            (&param_1->PointAttractorStrength,(this->StrengthRaw).Distribution.field0_0x0.DebugPtr);
  return;
}

// InitializeDefaults @ 148183050

void __thiscall
UParticleModuleAttractorPointGravity::InitializeDefaults(UParticleModuleAttractorPointGravity *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->StrengthRaw);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStrength");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StrengthRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 148189b60

void __thiscall
UParticleModuleAttractorPointGravity::PostInitProperties(UParticleModuleAttractorPointGravity *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->StrengthRaw);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStrength");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StrengthRaw).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// PostLoad @ 14818c340

void __thiscall
UParticleModuleAttractorPointGravity::PostLoad(UParticleModuleAttractorPointGravity *this)

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
    if (*(UParticleModuleAttractorPointGravity **)FVar5 == this) {
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

// Render3DPreview @ 14818fd90

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
UParticleModuleAttractorPointGravity::Render3DPreview
          (UParticleModuleAttractorPointGravity *this,FPreviewContext *param_1)

{
  return;
}

