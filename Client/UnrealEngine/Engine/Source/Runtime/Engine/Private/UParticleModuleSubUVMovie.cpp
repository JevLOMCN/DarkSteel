// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147313ff0

UClass * __cdecl UParticleModuleSubUVMovie::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSubUVMovie.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSubUVMovie",
               &Z_Registration_Info_UClass_UParticleModuleSubUVMovie.InnerSingleton,
               StaticRegisterNativesUParticleModuleSubUVMovie,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSubUVMovie>,
               InternalVTableHelperCtorCaller<UParticleModuleSubUVMovie>,local_res8,
               UParticleModuleSubUV::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSubUVMovie.InnerSingleton;
}

// UParticleModuleSubUVMovie @ 147318c00

UParticleModuleSubUVMovie * __thiscall
UParticleModuleSubUVMovie::UParticleModuleSubUVMovie
          (UParticleModuleSubUVMovie *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSubUVMovie__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->FrameRate)._padding_ = 0;
  (this->FrameRate)._padding_ = 0;
  (this->FrameRate)._padding_ = 0;
  *(undefined4 *)&(this->FrameRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->FrameRate)._padding_ + 4) = 0;
  (this->FrameRate).MinValue = 0.0;
  (this->FrameRate).MaxValue = 0.0;
  (this->FrameRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleSubUVMovie @ 147319730

void __thiscall
UParticleModuleSubUVMovie::~UParticleModuleSubUVMovie(UParticleModuleSubUVMovie *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSubUVMovie__6B_;
  pvVar1 = (void *)(this->FrameRate)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleSubUV__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModuleSubUVBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731bbf0

UClass * __cdecl UParticleModuleSubUVMovie::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSubUVMovie.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSubUVMovie",
               &Z_Registration_Info_UClass_UParticleModuleSubUVMovie.InnerSingleton,
               StaticRegisterNativesUParticleModuleSubUVMovie,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSubUVMovie>,
               InternalVTableHelperCtorCaller<UParticleModuleSubUVMovie>,local_res8,
               UParticleModuleSubUV::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSubUVMovie.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSubUVMovie @ 14731cff0

void __cdecl UParticleModuleSubUVMovie::StaticRegisterNativesUParticleModuleSubUVMovie(void)

{
  return;
}

// UParticleModuleSubUVMovie @ 14815e730

UParticleModuleSubUVMovie * __thiscall
UParticleModuleSubUVMovie::UParticleModuleSubUVMovie
          (UParticleModuleSubUVMovie *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleSubUVMovie__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14 | 0x83;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->FrameRate)._padding_ = 0;
  (this->FrameRate)._padding_ = 0;
  (this->FrameRate)._padding_ = 0;
  *(undefined4 *)&(this->FrameRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->FrameRate)._padding_ + 4) = 0;
  (this->FrameRate).MinValue = 0.0;
  (this->FrameRate).MaxValue = 0.0;
  (this->FrameRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  this->StartingFrame = 1;
  return this;
}

// DetermineImageIndex @ 148170300

float __thiscall
UParticleModuleSubUVMovie::DetermineImageIndex
          (UParticleModuleSubUVMovie *this,FContext *param_1,int param_2,FBaseParticle *param_3,
          EParticleSubUVInterpMethod param_4,FFullSubUVPayload *param_5,float param_6)

{
  FParticleEmitterInstance *pFVar1;
  UObject *pUVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  pFVar1 = param_1->Owner;
  pfVar3 = (float *)((longlong)&(param_3->OldLocation).field0_0x0 + (longlong)param_2);
  pUVar2 = (UObject *)(**(code **)((longlong)*pFVar1->Component + 8))();
  if (this->bUseEmitterTime == 0) {
    fVar4 = param_3->RelativeTime;
  }
  else {
    fVar4 = pFVar1->EmitterTime;
  }
  fVar4 = FRawDistributionFloat::GetValue(&this->FrameRate,fVar4,pUVar2,(FRandomStream *)0x0);
  if ((this->_padding_ & 1) != 0) {
    fVar6 = (float)(**(code **)((longlong)*pFVar1->Component + 0x58))();
    param_6 = param_6 / fVar6;
  }
  fVar6 = param_6 + *pfVar3;
  *pfVar3 = fVar6;
  fVar6 = fVar6 * fVar4;
  if (param_4 != PSUVIM_Linear_Blend) {
    auVar5 = roundps(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),3);
    fVar6 = auVar5._0_4_;
  }
  return fVar6;
}

// GetCurveObjects @ 148179490

void __thiscall
UParticleModuleSubUVMovie::GetCurveObjects
          (UParticleModuleSubUVMovie *this,
          TArray<FParticleCurvePair,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  UParticleModule::GetCurveObjects((UParticleModule *)this,param_1);
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + lVar10 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(pFVar1 + lVar10);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar8,L"SubImageIndex");
      if (iVar7 == 0) {
        if (uVar9 == 0xffffffff) {
          return;
        }
        uVar6 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar2 + (longlong)(int)uVar9 * 0x18;
        pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar9 * 0x18);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        iVar7 = param_1->ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(pFVar1,pFVar1 + 0x18,(longlong)iVar7 * 0x18);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        return;
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// InitializeDefaults @ 148184fb0

void __thiscall UParticleModuleSubUVMovie::InitializeDefaults(UParticleModuleSubUVMovie *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->FrameRate);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionFrameRate");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 30.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->FrameRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818bc20

void __thiscall UParticleModuleSubUVMovie::PostInitProperties(UParticleModuleSubUVMovie *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionSubImage");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this->_padding_ = (longlong)pUVar3;
  }
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->FrameRate);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionFrameRate");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 30.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->FrameRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// RequiredBytes @ 1481918a0

uint __thiscall
UParticleModuleSubUVMovie::RequiredBytes
          (UParticleModuleSubUVMovie *this,UParticleModuleTypeDataBase *param_1)

{
  return 4;
}

// SetToSensibleDefaults @ 148198240

void __thiscall
UParticleModuleSubUVMovie::SetToSensibleDefaults
          (UParticleModuleSubUVMovie *this,UParticleEmitter *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  UDistributionFloatConstantCurve *pUVar4;
  UClass *pUVar5;
  int iVar6;
  
  pUVar4 = NewObject<UDistributionFloatConstantCurve>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar4 == (UDistributionFloatConstantCurve *)0x0)) {
    this->_padding_ = (longlong)pUVar4;
    if (pUVar4 == (UDistributionFloatConstantCurve *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    this->_padding_ = (longlong)pUVar4;
  }
  pUVar5 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
  bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
  if ((bVar2) && (lVar1 = this->_padding_, lVar1 != 0)) {
    iVar6 = 0;
    do {
      uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x58))(lVar1 + 0x28);
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x70))(lVar1 + 0x28,0,uVar3,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
  }
  return;
}

// Spawn @ 14819db40

void __thiscall
UParticleModuleSubUVMovie::Spawn(UParticleModuleSubUVMovie *this,FSpawnContext *param_1)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FParticleEmitterInstance *pFVar5;
  UParticleModuleTypeDataBase *pUVar6;
  USubUVAnimation *pUVar7;
  UParticleModuleRequired *pUVar8;
  FBaseParticle *pFVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  UParticleLODLevel *pUVar13;
  UObject *pUVar14;
  FRandomStream *pFVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  pFVar5 = (FParticleEmitterInstance *)param_1->_padding_;
  if ((pFVar5->SpriteTemplate == (UParticleEmitter *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner->SpriteTemplate",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                          ,0x8ef,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar13 = UParticleEmitter::GetCurrentLODLevel(pFVar5->SpriteTemplate,pFVar5);
  if ((pUVar13 == (UParticleLODLevel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                          ,0x8f2,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar2 = pFVar5->SubUVDataOffset;
  uVar1 = (((pUVar13->RequiredModule).field0_0x0.DebugPtr)->InterpolationMethod).Value;
  if (uVar1 == '\0') {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  if (1 < (byte)(uVar1 - 1)) {
    pFVar5 = (FParticleEmitterInstance *)param_1->_padding_;
    if ((pFVar5->SpriteTemplate == (UParticleEmitter *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner->SpriteTemplate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                            ,0x82f,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pUVar13 = UParticleEmitter::GetCurrentLODLevel(pFVar5->SpriteTemplate,pFVar5);
    if ((pUVar13 == (UParticleLODLevel *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODLevel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                            ,0x832,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar2 = pFVar5->SubUVDataOffset;
    uVar1 = (((pUVar13->RequiredModule).field0_0x0.DebugPtr)->InterpolationMethod).Value;
    if (uVar1 == '\0') {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
    pUVar6 = (pUVar13->TypeDataModule).field0_0x0.DebugPtr;
    if ((pUVar6 != (UParticleModuleTypeDataBase *)0x0) &&
       (cVar12 = (**(code **)(*(longlong *)pUVar6 + 0x3d0))(), cVar12 == '\0')) {
      return;
    }
    puVar18 = (undefined4 *)
              ((longlong)&(param_1->ParticleBase->OldLocation).field0_0x0 + (ulonglong)uVar2);
    uVar19 = (**(code **)(this->_padding_ + 0x398))
                       (this,param_1,param_1->Offset,param_1->ParticleBase,uVar1,puVar18,
                        param_1->SpawnTime);
    *puVar18 = uVar19;
    return;
  }
  pUVar6 = (pUVar13->TypeDataModule).field0_0x0.DebugPtr;
  if ((pUVar6 != (UParticleModuleTypeDataBase *)0x0) &&
     (cVar12 = (**(code **)(*(longlong *)pUVar6 + 0x3d0))(), cVar12 == '\0')) {
    return;
  }
  pUVar7 = pFVar5->SpriteTemplate->SubUVAnimation;
  if (pUVar7 == (USubUVAnimation *)0x0) {
    pUVar8 = (pUVar13->RequiredModule).field0_0x0.DebugPtr;
    iVar17 = pUVar8->SubImages_Vertical * pUVar8->SubImages_Horizontal;
  }
  else {
    iVar17 = pUVar7->SubImages_Vertical * pUVar7->SubImages_Horizontal;
  }
  pFVar9 = param_1->ParticleBase;
  uVar3 = param_1->Offset;
  if (iVar17 == 0) {
    iVar17 = 1;
  }
  pUVar14 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  if (this->bUseEmitterTime == 0) {
    fVar20 = pFVar9->RelativeTime;
  }
  else {
    fVar20 = pFVar5->EmitterTime;
  }
  fVar20 = FRawDistributionFloat::GetValue(&this->FrameRate,fVar20,pUVar14,(FRandomStream *)0x0);
  *(undefined4 *)((longlong)&(pFVar9->OldLocation).field0_0x0 + (ulonglong)uVar3) = 0;
  iVar4 = this->StartingFrame;
  if (iVar4 < 2) {
    fVar21 = 0.0;
    if (iVar4 != 0) goto LAB_14819ddee;
    pFVar15 = UParticleModule::GetRandomStream((UParticleModule *)this,(FContext *)param_1);
    uVar16 = pFVar15->Seed * 0xbb38435 + 0x3619636b;
    pFVar15->Seed = uVar16;
    auVar22 = ZEXT416((uint)(((float)(uVar16 >> 9 | 0x3f800000) - __real_3f800000) *
                            (float)(iVar17 + -1)));
    auVar22 = roundps(auVar22,auVar22,3);
    fVar21 = auVar22._0_4_;
  }
  else {
    fVar21 = (float)(iVar17 + -1);
    if ((float)iVar4 <= (float)(iVar17 + -1)) {
      fVar21 = (float)iVar4;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
  }
  *(float *)((longlong)&(pFVar9->OldLocation).field0_0x0 + (ulonglong)uVar3) = fVar21;
LAB_14819ddee:
  *(float *)((longlong)&(pFVar9->OldLocation).field0_0x0 + (ulonglong)uVar2) = fVar21 * fVar20;
  return;
}

