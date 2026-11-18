// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 1473138c0

UClass * __cdecl UParticleModuleSubUV::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSubUV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSubUV",
               &Z_Registration_Info_UClass_UParticleModuleSubUV.InnerSingleton,
               StaticRegisterNativesUParticleModuleSubUV,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSubUV>,
               InternalVTableHelperCtorCaller<UParticleModuleSubUV>,local_res8,
               UParticleModuleSubUVBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSubUV.InnerSingleton;
}

// UParticleModuleSubUV @ 147318b80

UParticleModuleSubUV * __thiscall
UParticleModuleSubUV::UParticleModuleSubUV(UParticleModuleSubUV *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSubUV__6B_;
  (this->Animation).field0_0x0.DebugPtr = (USubUVAnimation *)0x0;
  (this->SubImageIndex)._padding_ = 0;
  (this->SubImageIndex)._padding_ = 0;
  (this->SubImageIndex)._padding_ = 0;
  *(undefined4 *)&(this->SubImageIndex)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SubImageIndex)._padding_ + 4) = 0;
  (this->SubImageIndex).MinValue = 0.0;
  (this->SubImageIndex).MaxValue = 0.0;
  (this->SubImageIndex).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleSubUV @ 1473196d0

void __thiscall UParticleModuleSubUV::~UParticleModuleSubUV(UParticleModuleSubUV *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSubUV__6B_;
  pvVar1 = (void *)(this->SubImageIndex)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleSubUVBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731ba70

UClass * __cdecl UParticleModuleSubUV::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSubUV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSubUV",
               &Z_Registration_Info_UClass_UParticleModuleSubUV.InnerSingleton,
               StaticRegisterNativesUParticleModuleSubUV,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSubUV>,
               InternalVTableHelperCtorCaller<UParticleModuleSubUV>,local_res8,
               UParticleModuleSubUVBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSubUV.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSubUV @ 14731cfd0

void __cdecl UParticleModuleSubUV::StaticRegisterNativesUParticleModuleSubUV(void)

{
  return;
}

// UParticleModuleSubUV @ 14815e690

UParticleModuleSubUV * __thiscall
UParticleModuleSubUV::UParticleModuleSubUV(UParticleModuleSubUV *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleSubUV__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  (this->Animation).field0_0x0.DebugPtr = (USubUVAnimation *)0x0;
  (this->SubImageIndex)._padding_ = 0;
  (this->SubImageIndex)._padding_ = 0;
  (this->SubImageIndex)._padding_ = 0;
  *(undefined4 *)&(this->SubImageIndex)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SubImageIndex)._padding_ + 4) = 0;
  (this->SubImageIndex).MinValue = 0.0;
  (this->SubImageIndex).MaxValue = 0.0;
  (this->SubImageIndex).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// CompileModule @ 148169fe0

void __thiscall
UParticleModuleSubUV::CompileModule(UParticleModuleSubUV *this,FParticleEmitterBuildInfo *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->RequiredModule == (UParticleModuleRequired *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EmitterInfo.RequiredModule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                       ,0x7f3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (param_1->RequiredModule->InterpolationMethod).Value;
  if ((uVar1 == '\x01') || (uVar1 == '\x02')) {
    FComposableFloatDistribution::Initialize
              (&param_1->SubImageIndex,(this->SubImageIndex).Distribution.field0_0x0.DebugPtr);
  }
  return;
}

// DetermineImageIndex @ 148170110

float __thiscall
UParticleModuleSubUV::DetermineImageIndex
          (UParticleModuleSubUV *this,FContext *param_1,int param_2,FBaseParticle *param_3,
          EParticleSubUVInterpMethod param_4,FFullSubUVPayload *param_5,float param_6)

{
  float fVar1;
  FParticleEmitterInstance *pFVar2;
  USubUVAnimation *pUVar3;
  UParticleModuleRequired *pUVar4;
  IParticleEmitterInstanceOwner IVar5;
  code *pcVar6;
  bool bVar7;
  UParticleLODLevel *pUVar8;
  FParticleRandomSeedInstancePayload *pFVar9;
  UObject *pUVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 extraout_var [12];
  
  pFVar2 = param_1->Owner;
  pUVar8 = UParticleEmitter::GetCurrentLODLevel(pFVar2->SpriteTemplate,pFVar2);
  if ((pUVar8 == (UParticleLODLevel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                         ,0x87a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    fVar13 = (float)(*pcVar6)();
    return fVar13;
  }
  pUVar3 = pFVar2->SpriteTemplate->SubUVAnimation;
  if (pUVar3 == (USubUVAnimation *)0x0) {
    pUVar4 = (pUVar8->RequiredModule).field0_0x0.DebugPtr;
    iVar12 = pUVar4->SubImages_Vertical * pUVar4->SubImages_Horizontal;
  }
  else {
    iVar12 = pUVar3->SubImages_Vertical * pUVar3->SubImages_Horizontal;
  }
  fVar13 = param_5->ImageIndex;
  if (param_4 - PSUVIM_Linear < 2) {
    IVar5 = *param_1->Owner->Component;
    if (this->bUseRealTime == 0) {
      pUVar10 = (UObject *)(**(code **)((longlong)IVar5 + 8))();
      fVar13 = param_3->RelativeTime;
    }
    else {
      pUVar10 = (UObject *)(**(code **)((longlong)IVar5 + 8))();
      fVar13 = (float)(**(code **)((longlong)*pFVar2->Component + 0x58))();
      fVar13 = param_3->RelativeTime / fVar13;
    }
    auVar14._0_4_ =
         FRawDistributionFloat::GetValue(&this->SubImageIndex,fVar13,pUVar10,(FRandomStream *)0x0);
    auVar14._4_12_ = extraout_var;
    if (param_4 == PSUVIM_Linear) {
      auVar14 = roundps(auVar14,ZEXT416((uint)auVar14._0_4_),3);
    }
  }
  else if (param_4 - PSUVIM_Random < 2) {
    fVar1 = ((pUVar8->RequiredModule).field0_0x0.DebugPtr)->RandomImageTime;
    if (((fVar1 == 0.0) || (fVar1 < param_3->RelativeTime - param_5->RandomImageTime)) ||
       (param_5->RandomImageTime == 0.0)) {
      pFVar9 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                         (param_1->Owner,(UParticleModule *)this);
      if (pFVar9 == (FParticleRandomSeedInstancePayload *)0x0) {
        pFVar9 = (FParticleRandomSeedInstancePayload *)
                 (**(code **)((longlong)*param_1->Owner->Component + 0x120))();
      }
      if (iVar12 < 1) {
        iVar12 = 0;
      }
      else {
        uVar11 = (pFVar9->RandomStream).Seed * 0xbb38435 + 0x3619636b;
        (pFVar9->RandomStream).Seed = uVar11;
        iVar12 = (int)(((float)(uVar11 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar12);
      }
      fVar13 = (float)iVar12;
      param_5->RandomImageTime = param_3->RelativeTime;
    }
    auVar14 = ZEXT416((uint)fVar13);
    if (param_4 == PSUVIM_Random) {
      auVar14 = roundps(auVar14,auVar14,3);
    }
  }
  else {
    auVar14 = ZEXT816(0);
  }
  return auVar14._0_4_;
}

// InitializeDefaults @ 148184f30

void __thiscall UParticleModuleSubUV::InitializeDefaults(UParticleModuleSubUV *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->SubImageIndex);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionSubImage");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SubImageIndex).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// IsPostLoadThreadSafe @ 148185c10

bool __thiscall UParticleModuleSubUV::IsPostLoadThreadSafe(UParticleModuleSubUV *this)

{
  return false;
}

// PostInitProperties @ 14818bba0

void __thiscall UParticleModuleSubUV::PostInitProperties(UParticleModuleSubUV *this)

{
  FName *pFVar1;
  UDistributionFloatConstant *pUVar2;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar1 = ::FName::FName(&local_res8,L"DistributionSubImage");
    pUVar2 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->SubImageIndex).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar2;
  }
  return;
}

// PostLoad @ 14818c620

void __thiscall UParticleModuleSubUV::PostLoad(UParticleModuleSubUV *this)

{
  USubUVAnimation *this_00;
  
  UObject::PostLoad((UObject *)this);
  this_00 = (this->Animation).field0_0x0.DebugPtr;
  if (this_00 != (USubUVAnimation *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    return;
  }
  return;
}

// SetToSensibleDefaults @ 148198190

void __thiscall
UParticleModuleSubUV::SetToSensibleDefaults(UParticleModuleSubUV *this,UParticleEmitter *param_1)

{
  UDistributionFloat *pUVar1;
  bool bVar2;
  undefined4 uVar3;
  UDistributionFloatConstantCurve *pUVar4;
  UClass *pUVar5;
  int iVar6;
  
  pUVar4 = NewObject<UDistributionFloatConstantCurve>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar4 == (UDistributionFloatConstantCurve *)0x0)) {
    (this->SubImageIndex).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    if (pUVar4 == (UDistributionFloatConstantCurve *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->SubImageIndex).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  pUVar5 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
  bVar2 = FObjectPtr::IsA((FObjectPtr *)&(this->SubImageIndex).Distribution,pUVar5);
  if ((bVar2) &&
     (pUVar1 = (this->SubImageIndex).Distribution.field0_0x0.DebugPtr,
     pUVar1 != (UDistributionFloat *)0x0)) {
    iVar6 = 0;
    do {
      uVar3 = (**(code **)(pUVar1->_padding_ + 0x58))(&pUVar1->_padding_);
      (**(code **)(pUVar1->_padding_ + 0x70))(&pUVar1->_padding_,0,uVar3,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    pUVar1->bIsDirty = '\x01';
  }
  return;
}

// Spawn @ 14819da30

void __thiscall UParticleModuleSubUV::Spawn(UParticleModuleSubUV *this,FSpawnContext *param_1)

{
  uchar uVar1;
  uint uVar2;
  FParticleEmitterInstance *pFVar3;
  UParticleModuleTypeDataBase *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UParticleLODLevel *pUVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  pFVar3 = (FParticleEmitterInstance *)param_1->_padding_;
  if ((pFVar3->SpriteTemplate == (UParticleEmitter *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner->SpriteTemplate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                         ,0x82f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar8 = UParticleEmitter::GetCurrentLODLevel(pFVar3->SpriteTemplate,pFVar3);
  if ((pUVar8 == (UParticleLODLevel *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                         ,0x832,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar1 = (((pUVar8->RequiredModule).field0_0x0.DebugPtr)->InterpolationMethod).Value;
  if ((uVar1 != '\0') && (uVar2 = pFVar3->SubUVDataOffset, uVar2 != 0)) {
    pUVar4 = (pUVar8->TypeDataModule).field0_0x0.DebugPtr;
    if ((pUVar4 != (UParticleModuleTypeDataBase *)0x0) &&
       (cVar7 = (**(code **)(*(longlong *)pUVar4 + 0x3d0))(), cVar7 == '\0')) {
      return;
    }
    puVar9 = (undefined4 *)
             ((longlong)&(param_1->ParticleBase->OldLocation).field0_0x0 + (ulonglong)uVar2);
    uVar10 = (**(code **)(this->_padding_ + 0x398))
                       (this,param_1,param_1->Offset,param_1->ParticleBase,uVar1,puVar9,
                        param_1->SpawnTime);
    *puVar9 = uVar10;
  }
  return;
}

// Update @ 1481b15d0

void __thiscall UParticleModuleSubUV::Update(UParticleModuleSubUV *this,FUpdateContext *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FParticleEmitterInstance *pFVar7;
  UParticleModuleRequired *pUVar8;
  UParticleModuleTypeDataBase *pUVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  float fVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  UParticleLODLevel *pUVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  
  pFVar7 = (FParticleEmitterInstance *)param_1->_padding_;
  if ((pFVar7->SpriteTemplate == (UParticleEmitter *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner->SpriteTemplate",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                          ,0x84c,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pUVar17 = UParticleEmitter::GetCurrentLODLevel(pFVar7->SpriteTemplate,pFVar7);
  pUVar8 = (pUVar17->RequiredModule).field0_0x0.DebugPtr;
  uVar3 = (pUVar8->InterpolationMethod).Value;
  if ((((uVar3 != '\0') && (uVar4 = pFVar7->SubUVDataOffset, uVar4 != 0)) &&
      ((1 < (byte)(uVar3 - 3) || (pUVar8->RandomImageChanges != 0)))) &&
     ((pUVar9 = (pUVar17->TypeDataModule).field0_0x0.DebugPtr,
      pUVar9 == (UParticleModuleTypeDataBase *)0x0 ||
      (cVar15 = (**(code **)(*(longlong *)pUVar9 + 0x3d0))(), cVar15 != '\0')))) {
    fVar13 = __real_3f800000;
    lVar18 = param_1->_padding_;
    iVar5 = param_1->Offset;
    lVar10 = *(longlong *)(lVar18 + 0x170);
    lVar11 = *(longlong *)(lVar18 + 0x168);
    iVar6 = *(int *)(lVar18 + 0x188);
    iVar16 = *(int *)(lVar18 + 0x18c) + -1;
    fVar2 = param_1->DeltaTime;
    lVar18 = (longlong)iVar16;
    if (-1 < iVar16) {
      do {
        lVar19 = (ulonglong)((uint)*(ushort *)(lVar10 + lVar18 * 2) * iVar6) + lVar11;
        if (((*(uint *)(lVar19 + 0x6c) & 0x4000000) == 0) && (*(float *)(lVar19 + 0x90) <= fVar13))
        {
          puVar1 = (undefined4 *)(lVar19 + (ulonglong)uVar4);
          uVar20 = (**(code **)(this->_padding_ + 0x398))
                             (this,param_1,iVar5,lVar19,uVar3,puVar1,fVar2);
          *puVar1 = uVar20;
        }
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
  }
  return;
}

