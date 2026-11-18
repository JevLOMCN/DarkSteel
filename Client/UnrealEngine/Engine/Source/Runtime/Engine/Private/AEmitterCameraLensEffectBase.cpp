// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 1472756a0

UClass * __cdecl AEmitterCameraLensEffectBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EmitterCameraLensEffectBase",
               &Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton,
               StaticRegisterNativesAEmitterCameraLensEffectBase,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AEmitterCameraLensEffectBase>,
               InternalVTableHelperCtorCaller<AEmitterCameraLensEffectBase>,local_res8,
               AEmitter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton;
}

// AEmitterCameraLensEffectBase @ 147276490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AEmitterCameraLensEffectBase * __thiscall
AEmitterCameraLensEffectBase::AEmitterCameraLensEffectBase
          (AEmitterCameraLensEffectBase *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  AEmitter::AEmitter((AEmitter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AEmitter__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  (this->PS_CameraEffect).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->BaseCamera).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->EmittersToTreatAsSame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmittersToTreatAsSame).ArrayNum = 0;
  (this->EmittersToTreatAsSame).ArrayMax = 0;
  return this;
}

// ~AEmitterCameraLensEffectBase @ 1472777b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AEmitterCameraLensEffectBase::~AEmitterCameraLensEffectBase(AEmitterCameraLensEffectBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AEmitter__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  pFVar1 = (this->EmittersToTreatAsSame).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICameraLensEffectInterface__6B_;
  AEmitter::~AEmitter((AEmitter *)this);
  return;
}

// GetPrivateStaticClass @ 147279170

UClass * __cdecl AEmitterCameraLensEffectBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EmitterCameraLensEffectBase",
               &Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton,
               StaticRegisterNativesAEmitterCameraLensEffectBase,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AEmitterCameraLensEffectBase>,
               InternalVTableHelperCtorCaller<AEmitterCameraLensEffectBase>,local_res8,
               AEmitter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton;
}

// StaticRegisterNativesAEmitterCameraLensEffectBase @ 147279630

void __cdecl AEmitterCameraLensEffectBase::StaticRegisterNativesAEmitterCameraLensEffectBase(void)

{
  return;
}

// _getUObject @ 147279ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall AEmitterCameraLensEffectBase::_getUObject(AEmitterCameraLensEffectBase *this)

{
  return (UObject *)&this[-1]._padding_;
}

// AEmitterCameraLensEffectBase @ 148159f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AEmitterCameraLensEffectBase * __thiscall
AEmitterCameraLensEffectBase::AEmitterCameraLensEffectBase
          (AEmitterCameraLensEffectBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  __m128 _Var9;
  FName *pFVar10;
  TQuat<double> *pTVar11;
  FName local_res8;
  FName local_res10;
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  pFVar10 = ::FName::FName(&local_res8,L"Sprite");
  FVar2 = *pFVar10;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  pFVar10 = ::FName::FName(&local_res10,L"ArrowComponent0");
  FVar2 = *pFVar10;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AEmitter::AEmitter((AEmitter *)this,param_1);
  (this->PS_CameraEffect).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->BaseCamera).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  this->_padding_ = (longlong)&_vftable__for__AEmitter__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  _Var9 = GlobalVectorConstants::Float0001;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  (this->RelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[0] = (double)_Var9.m128_f32[2];
  (this->RelativeTransform).Rotation.ZW.m128d_f64[1] = (double)_Var9.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->RelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->RelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  _Var9 = GlobalVectorConstants::Float1110;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)_Var9.m128_f32[2];
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)_Var9.m128_f32[3];
  local_58.Yaw = _UNK_15076bfd8;
  local_58.Pitch = ___xmm_40668000000000000000000000000000;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  (this->EmittersToTreatAsSame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmittersToTreatAsSame).ArrayNum = 0;
  (this->EmittersToTreatAsSame).ArrayMax = 0;
  local_58.Roll = 0.0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x41200000;
  this->BaseFOV = 80.0;
  pTVar11 = UE::Math::TRotator<double>::Quaternion(&local_58,&local_38);
  dVar6 = pTVar11->Y;
  dVar7 = pTVar11->Z;
  dVar8 = pTVar11->W;
  (this->RelativeTransform).Rotation.XY.m128d_f64[0] = pTVar11->X;
  (this->RelativeTransform).Rotation.XY.m128d_f64[1] = dVar6;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[0] = dVar7;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar6 = _UNK_150b45b78;
  (this->RelativeTransform).Translation.XY.m128d_f64[0] = ___xmm_00000000000000004056800000000000;
  (this->RelativeTransform).Translation.XY.m128d_f64[1] = dVar6;
  (this->RelativeTransform).Translation.ZW.m128d_f64[0] = 0.0;
  (this->RelativeTransform).Translation.ZW.m128d_f64[1] = 0.0;
  dVar6 = _UNK_150689688;
  (this->RelativeTransform).Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (this->RelativeTransform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = _UNK_150689518;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
  pbVar1 = (byte *)(this->_padding_ + 0x27d);
  *pbVar1 = *pbVar1 | 2;
  *(undefined4 *)(this->_padding_ + 0x63c) = 0;
  this->bResetWhenRetriggered = '\0';
  this->DistFromCamera_DEPRECATED = 3.4028235e+38;
  return this;
}

// ActivateLensEffect @ 1481646e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall AEmitterCameraLensEffectBase::ActivateLensEffect(AEmitterCameraLensEffectBase *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  pUVar3 = AActor::GetWorld((AActor *)&this[-1]._padding_);
  if (pUVar3 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                       ,0x151a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->_padding_ != 0) {
    (**(code **)(this[-1]._padding_ + 0x770))(&this[-1]._padding_);
  }
  return;
}

// AdjustBaseFOV @ 148166110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AEmitterCameraLensEffectBase::AdjustBaseFOV(AEmitterCameraLensEffectBase *this,float param_1)

{
  *(float *)&this->_padding_ = param_1;
  return;
}

// DeactivateLensEffect @ 14816e9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AEmitterCameraLensEffectBase::DeactivateLensEffect(AEmitterCameraLensEffectBase *this)

{
  undefined1 *puVar1;
  UParticleSystemComponent *this_00;
  UParticleSystem *pUVar2;
  FParticleEmitterInstance *this_01;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  UWorld *pUVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT> FVar13;
  FName FVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  FColor_u_0 aFStackX_18 [2];
  uint uStackX_20;
  FName FStack_b8;
  UWorld *pUStack_b0;
  FName FStack_a8;
  FName FStack_98;
  FName FStack_90;
  FString FStack_88;
  FString FStack_78;
  FName FStack_68;
  FInGameScopedCycleCounter aFStack_60 [2];
  
  this_00 = (UParticleSystemComponent *)this[-1].RelativeTransform.Rotation.ZW.m128d_f64[0];
  if (this_00 == (UParticleSystemComponent *)0x0) {
    return;
  }
  pUVar11 = *(UWorld **)&this_00->field_0xb0;
  if (pUVar11 == (UWorld *)0x0) {
    pUStack_b0 = pUVar11;
    pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
  }
  pUStack_b0 = pUVar11;
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (aFStack_60,pUVar11,VFXSignificance,GameThread,this_00->bIsManagingSignificance);
  FVar13 = StatPtr_STAT_ParticlesOverview_GT;
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar12 = ::FName::FName(&FStack_68,"STAT_ParticlesOverview_GT");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar12,
                        L"GT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar13;
  bVar6 = false;
  bVar5 = false;
  FStack_a8.ComparisonIndex.Value = 0;
  FStack_a8.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_b8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        FStack_b8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_b8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0xd1c);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_14816ebaf;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  FVar14 = FStack_a8;
LAB_14816ebaf:
  bVar8 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar8) {
    if ((this_00->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      UParticleSystemComponent::WaitForAsyncAndFinalize(this_00,STALL,true);
    }
    if (pUVar11 == (UWorld *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0xd2c,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (1 < (byte)LogParticles._0_1_) {
        pUVar2 = (this_00->Template).field0_0x0.DebugPtr;
        if (pUVar2 != (UParticleSystem *)0x0) {
          FStack_98 = (FName)pUVar2->_padding_;
          ::FName::ToString(&FStack_98,&FStack_88);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        if ((pUVar2 != (UParticleSystem *)0x0) &&
           (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
        }
      }
      UParticleSystemComponent::ResetParticles(this_00,true);
      this_00->bSuppressSpawning = '\0';
      this_00->bDeactivateTriggered = '\0';
      this_00->bWasDeactivated = '\0';
      this_00->bSuppressSpawning = '\x01';
      this_00->bWasDeactivated = '\x01';
    }
    else {
      if (5 < (byte)LogParticles._0_1_) {
        pUVar2 = (this_00->Template).field0_0x0.DebugPtr;
        if (pUVar2 != (UParticleSystem *)0x0) {
          FStack_90 = (FName)pUVar2->_padding_;
          ::FName::ToString(&FStack_90,&FStack_78);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        if ((pUVar2 != (UParticleSystem *)0x0) &&
           (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
      }
      if ((this_00->field_0x9a & 0x10) != 0) {
        TMulticastDelegate<void___cdecl(UParticleSystemComponent_*,bool),FDefaultDelegateUserPolicy>
        ::Broadcast(&UParticleSystemComponent::OnSystemPreActivationChange,this_00,false);
      }
      this_00->bSuppressSpawning = '\0';
      this_00->bDeactivateTriggered = '\0';
      this_00->bWasDeactivated = '\0';
      bVar8 = false;
      this_00->bSuppressSpawning = '\x01';
      this_00->bWasDeactivated = '\x01';
      uVar18 = 0;
      if (0 < (this_00->EmitterInstances).ArrayNum) {
        lVar17 = 0;
        do {
          uStackX_20 = ~uVar18 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar18 < (this_00->EmitterInstances).ArrayNum) {
            uVar16 = uStackX_20;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_01 = *(FParticleEmitterInstance **)
                     ((this_00->EmitterInstances).AllocatorInstance.Data + lVar17 * 8);
          if (this_01 != (FParticleEmitterInstance *)0x0) {
            if (this_01->bKillOnDeactivate == '\0') {
              (**(code **)(this_01->_padding_ + 0x148))();
            }
            else {
              FParticleEmitterInstance::PreDestructorCall(this_01);
              uVar16 = 0;
              lVar15 = 0;
              if (0 < (this_00->EmitterInstances).ArrayNum) {
                do {
                  if (lVar15 != lVar17) {
                    uVar10 = 0;
                    if ((int)uVar16 < (this_00->EmitterInstances).ArrayNum) {
                      uVar10 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (*(longlong *)
                         ((this_00->EmitterInstances).AllocatorInstance.Data + lVar15 * 8) != 0) {
                      uVar10 = 0;
                      if ((int)uVar16 < (this_00->EmitterInstances).ArrayNum) {
                        uVar10 = ~uVar16 >> 0x1f;
                      }
                      if ((uVar10 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      plVar3 = *(longlong **)
                                ((this_00->EmitterInstances).AllocatorInstance.Data + lVar15 * 8);
                      (**(code **)(*plVar3 + 0x178))(plVar3,this_01);
                    }
                  }
                  uVar16 = uVar16 + 1;
                  lVar15 = lVar15 + 1;
                } while ((int)uVar16 < (this_00->EmitterInstances).ArrayNum);
              }
              (**(code **)this_01->_padding_)(this_01);
              uVar16 = 0;
              if ((int)uVar18 < (this_00->EmitterInstances).ArrayNum) {
                uVar16 = uStackX_20;
              }
              if ((uVar16 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar8 = true;
              *(undefined8 *)((this_00->EmitterInstances).AllocatorInstance.Data + lVar17 * 8) = 0;
            }
          }
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 1;
        } while ((int)uVar18 < (this_00->EmitterInstances).ArrayNum);
        if (bVar8) {
          if ((this_00->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
            UParticleSystemComponent::WaitForAsyncAndFinalize(this_00,ENSURE_AND_STALL,true);
          }
          if (*(FParticleSystemSceneProxy **)&this_00->field_0x530 !=
              (FParticleSystemSceneProxy *)0x0) {
            FParticleSystemSceneProxy::UpdateData
                      (*(FParticleSystemSceneProxy **)&this_00->field_0x530,
                       (FParticleDynamicData *)0x0);
          }
          UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
        }
      }
      (**(code **)(*(longlong *)this_00 + 0x420))(this_00,1);
      UPrimitiveComponent::SetLastRenderTime
                ((UPrimitiveComponent *)this_00,(float)pUStack_b0->TimeSeconds);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(aFStack_60);
  return;
}

// EndPlay @ 1481725f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AEmitterCameraLensEffectBase::EndPlay(AEmitterCameraLensEffectBase *this,Type param_1)

{
  APlayerCameraManager *pAVar1;
  code *pcVar2;
  AEmitterCameraLensEffectBase *local_18;
  longlong *local_10;
  
  pAVar1 = (this->BaseCamera).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerCameraManager *)0x0) {
    pcVar2 = *(code **)(pAVar1->_padding_ + 0x8b8);
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_10 = &this->_padding_;
    if (this == (AEmitterCameraLensEffectBase *)0x0) {
      local_10 = (longlong *)0x0;
    }
    local_18 = this;
    (*pcVar2)(pAVar1,&local_18);
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetAttachedEmitterTransform @ 148178070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TTransform<double> * __cdecl
AEmitterCameraLensEffectBase::GetAttachedEmitterTransform
          (TTransform<double> *__return_storage_ptr__,AEmitterCameraLensEffectBase *param_1,
          TVector<double> *param_2,TRotator<double> *param_3,float param_4)

{
  ICameraLensEffectInterface::GetAttachedEmitterTransform
            (__return_storage_ptr__,(AActor *)param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// GetBaseFOV @ 1481780a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __thiscall AEmitterCameraLensEffectBase::GetBaseFOV(AEmitterCameraLensEffectBase *this)

{
  return *(float *)&this->_padding_;
}

// GetRelativeTransform @ 14817d510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TTransform<double> * __thiscall
AEmitterCameraLensEffectBase::GetRelativeTransform(AEmitterCameraLensEffectBase *this)

{
  return (TTransform<double> *)&this->_padding_;
}

// IsLooping @ 148185b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall AEmitterCameraLensEffectBase::IsLooping(AEmitterCameraLensEffectBase *this)

{
  if (this->_padding_ != 0) {
    return (bool)(*(byte *)(this->_padding_ + 0xfa) & 1);
  }
  return false;
}

// NotifyRetriggered @ 148186860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall AEmitterCameraLensEffectBase::NotifyRetriggered(AEmitterCameraLensEffectBase *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)this[-1].RelativeTransform.Rotation.ZW.m128d_f64[0];
  if ((plVar1 != (longlong *)0x0) &&
     (((*(byte *)(plVar1 + 0xaf) & 0x10) != 0 || ((this->_padding_ & 0x200000000) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014818688d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b8))(plVar1,*(byte *)((longlong)&this->_padding_ + 4) >> 1 & 1);
    return;
  }
  return;
}

// NotifyWillBePooled @ 1481868a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall AEmitterCameraLensEffectBase::NotifyWillBePooled(AEmitterCameraLensEffectBase *this)

{
  double *pdVar1;
  
  pdVar1 = this[-1].RelativeTransform.Rotation.ZW.m128d_f64 + 1;
  *(uint *)pdVar1 = *(uint *)pdVar1 & 0xfffffffe;
  return;
}

// PostInitializeComponents @ 14818c180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AEmitterCameraLensEffectBase::PostInitializeComponents(AEmitterCameraLensEffectBase *this)

{
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,Particles,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Particles,true);
  UPrimitiveComponent::SetDepthPriorityGroup((UPrimitiveComponent *)this->_padding_,SDPG_Foreground)
  ;
  AEmitter::PostInitializeComponents((AEmitter *)this);
  (**(code **)(this->_padding_ + 0x60))();
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PostLoad @ 14818c200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall AEmitterCameraLensEffectBase::PostLoad(AEmitterCameraLensEffectBase *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,Particles,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Particles,true);
  AActor::PostLoad((AActor *)this);
  if (this->DistFromCamera_DEPRECATED != __real_7f7fffff) {
    dVar1 = (this->RelativeTransform).Translation.ZW.m128d_f64[0];
    auVar2._8_4_ = *(undefined4 *)((this->RelativeTransform).Translation.XY.m128d_f64 + 1);
    auVar2._0_8_ = (double)this->DistFromCamera_DEPRECATED;
    auVar2._12_4_ =
         *(undefined4 *)((longlong)(this->RelativeTransform).Translation.XY.m128d_f64 + 0xc);
    *(undefined1 (*) [16])(this->RelativeTransform).Translation.XY.m128d_f64 = auVar2;
    (this->RelativeTransform).Translation.ZW.m128d_f64[0] = dVar1;
    (this->RelativeTransform).Translation.ZW.m128d_f64[1] = 0.0;
    this->DistFromCamera_DEPRECATED = 3.4028235e+38;
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RegisterCamera @ 14818e060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AEmitterCameraLensEffectBase::RegisterCamera
          (AEmitterCameraLensEffectBase *this,APlayerCameraManager *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// ResetWhenTriggered @ 148193440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall AEmitterCameraLensEffectBase::ResetWhenTriggered(AEmitterCameraLensEffectBase *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 4) >> 1 & 1);
}

// ShouldAllowMultipleInstances @ 1481991b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
AEmitterCameraLensEffectBase::ShouldAllowMultipleInstances(AEmitterCameraLensEffectBase *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 4) & 1);
}

// ShouldTreatEmitterAsSame @ 1481993e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
AEmitterCameraLensEffectBase::ShouldTreatEmitterAsSame
          (AEmitterCameraLensEffectBase *this,TSubclassOf<AActor> param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return false;
  }
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return false;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return false;
  }
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_148199481;
    }
  }
  lVar5 = 0;
LAB_148199481:
  if (lVar5 == this[-1]._padding_) {
    return true;
  }
  plVar2 = (longlong *)this->_padding_;
  lVar5 = this->_padding_;
  plVar7 = plVar2;
  do {
    if (plVar7 == plVar2 + (int)lVar5) {
      return false;
    }
    lVar8 = *plVar7;
    if ((lVar8 == 0) || (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 == (UClass *)0x0))
    {
LAB_1481994eb:
      lVar8 = 0;
    }
    else {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1481994eb;
      lVar8 = *plVar7;
    }
    lVar6 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar6 == 0) || (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 == (UClass *)0x0))
    {
LAB_148199528:
      lVar6 = 0;
    }
    else {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_148199528;
      lVar6 = *(longlong *)param_1.Class.field0_0x0;
    }
    if (lVar8 == lVar6) {
      if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) == -1) {
        return false;
      }
      return true;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}

// UpdateLocation @ 1481b2c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AEmitterCameraLensEffectBase::UpdateLocation
          (AEmitterCameraLensEffectBase *this,TVector<double> *param_1,TRotator<double> *param_2,
          float param_3)

{
  undefined1 auStackY_a8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  ICameraLensEffectInterface::GetAttachedEmitterTransform
            (&local_78,(AActor *)&this[-1]._padding_,param_1,param_2,param_3);
  AActor::SetActorTransform((AActor *)&this[-1]._padding_,&local_78,false,(FHitResult *)0x0,None);
  return;
}

