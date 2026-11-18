// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// StaticClass @ 1492c22c0

UClass * __cdecl ANiagaraLensEffectBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraLensEffectBase",
               &Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton,
               StaticRegisterNativesANiagaraLensEffectBase,0x360,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraLensEffectBase>,
               InternalVTableHelperCtorCaller<ANiagaraLensEffectBase>,local_res8,
               ANiagaraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton;
}

// ANiagaraLensEffectBase @ 1492d0050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ANiagaraLensEffectBase * __thiscall
ANiagaraLensEffectBase::ANiagaraLensEffectBase
          (ANiagaraLensEffectBase *this,FObjectInitializer *param_1)

{
  FName FVar1;
  longlong lVar2;
  __m128d _Var3;
  FName *pFVar4;
  FName local_res8;
  FName local_res10;
  
  pFVar4 = ::FName::FName(&local_res8,L"Sprite");
  FVar1 = *pFVar4;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  pFVar4 = ::FName::FName(&local_res10,L"ArrowComponent0");
  FVar1 = *pFVar4;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  ANiagaraActor::ANiagaraActor((ANiagaraActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__ANiagaraActor__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  *&(this->DesiredRelativeTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->DesiredRelativeTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->DesiredRelativeTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->DesiredRelativeTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->DesiredRelativeTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var3 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  this->bAllowMultipleInstances = '\0';
  this->bResetWhenRetriggered = '\x01';
  *&(this->DesiredRelativeTransform).Scale3D.ZW.m128d_f64 = _Var3.m128d_f64;
  (this->EmittersToTreatAsSame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmittersToTreatAsSame).ArrayNum = 0;
  (this->EmittersToTreatAsSame).ArrayMax = 0;
  (this->OwningCameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  this->BaseAuthoredFOV = 80.0;
  ANiagaraActor::SetDestroyOnSystemFinish((ANiagaraActor *)this,true);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x27d) = *(byte *)(lVar2 + 0x27d) | 2;
    *(byte *)(lVar2 + 0x9a) = *(byte *)(lVar2 + 0x9a) & 0xf7;
  }
  return this;
}

// ANiagaraLensEffectBase @ 1492d01b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ANiagaraLensEffectBase * __thiscall
ANiagaraLensEffectBase::ANiagaraLensEffectBase(ANiagaraLensEffectBase *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  ANiagaraActor::ANiagaraActor((ANiagaraActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__ANiagaraActor__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DesiredRelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DesiredRelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DesiredRelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DesiredRelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DesiredRelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DesiredRelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DesiredRelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DesiredRelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DesiredRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DesiredRelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DesiredRelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DesiredRelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->EmittersToTreatAsSame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmittersToTreatAsSame).ArrayNum = 0;
  (this->EmittersToTreatAsSame).ArrayMax = 0;
  (this->OwningCameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  return this;
}

// ~ANiagaraLensEffectBase @ 1492d3b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ANiagaraLensEffectBase::~ANiagaraLensEffectBase(ANiagaraLensEffectBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__ANiagaraActor__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  pFVar1 = (this->EmittersToTreatAsSame).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICameraLensEffectInterface__6B_;
  ANiagaraActor::~ANiagaraActor((ANiagaraActor *)this);
  return;
}

// ActivateLensEffect @ 1492da270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ANiagaraLensEffectBase::ActivateLensEffect(ANiagaraLensEffectBase *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  pUVar4 = AActor::GetWorld((AActor *)&this[-1]._padding_);
  if (pUVar4 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraLensEffectBase.cpp"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)&this[-1].EmittersToTreatAsSame.ArrayNum;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492da2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b8))(plVar1,0);
    return;
  }
  return;
}

// AdjustBaseFOV @ 1492db210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ANiagaraLensEffectBase::AdjustBaseFOV(ANiagaraLensEffectBase *this,float param_1)

{
  *(float *)&this->_padding_ = param_1;
  return;
}

// DeactivateLensEffect @ 1492e04d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ANiagaraLensEffectBase::DeactivateLensEffect(ANiagaraLensEffectBase *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&this[-1].EmittersToTreatAsSame.ArrayNum;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492e04dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c0))();
    return;
  }
  return;
}

// EndPlay @ 1492e2e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ANiagaraLensEffectBase::EndPlay(ANiagaraLensEffectBase *this,Type param_1)

{
  APlayerCameraManager *pAVar1;
  code *pcVar2;
  ANiagaraLensEffectBase *local_18;
  longlong *local_10;
  
  AActor::EndPlay((AActor *)this,param_1);
  pAVar1 = (this->OwningCameraManager).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerCameraManager *)0x0) {
    pcVar2 = *(code **)(pAVar1->_padding_ + 0x8b8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_10 = &this->_padding_;
    if (this == (ANiagaraLensEffectBase *)0x0) {
      local_10 = (longlong *)0x0;
    }
    local_18 = this;
    (*pcVar2)(pAVar1,&local_18);
  }
  return;
}

// GetBaseFOV @ 1492ed5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __thiscall ANiagaraLensEffectBase::GetBaseFOV(ANiagaraLensEffectBase *this)

{
  return *(float *)&this->_padding_;
}

// GetPrivateStaticClass @ 1492f0de0

UClass * __cdecl ANiagaraLensEffectBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraLensEffectBase",
               &Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton,
               StaticRegisterNativesANiagaraLensEffectBase,0x360,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraLensEffectBase>,
               InternalVTableHelperCtorCaller<ANiagaraLensEffectBase>,local_res8,
               ANiagaraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraLensEffectBase.InnerSingleton;
}

// GetRelativeTransform @ 1492f19e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TTransform<double> * __thiscall
ANiagaraLensEffectBase::GetRelativeTransform(ANiagaraLensEffectBase *this)

{
  return (TTransform<double> *)&this->_padding_;
}

// IsLooping @ 1492f87e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ANiagaraLensEffectBase::IsLooping(ANiagaraLensEffectBase *this)

{
  if (*(longlong *)(*(longlong *)&this[-1].EmittersToTreatAsSame.ArrayNum + 0x550) == 0) {
    return false;
  }
  return false;
}

// NotifyRetriggered @ 1492f9360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ANiagaraLensEffectBase::NotifyRetriggered(ANiagaraLensEffectBase *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  pUVar4 = AActor::GetWorld((AActor *)&this[-1]._padding_);
  if (pUVar4 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraLensEffectBase.cpp"
                       ,0x4b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)&this[-1].EmittersToTreatAsSame.ArrayNum;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492f93ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b8))(plVar1,*(byte *)((longlong)&this->_padding_ + 4) >> 1 & 1);
    return;
  }
  return;
}

// NotifyWillBePooled @ 1492f93d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ANiagaraLensEffectBase::NotifyWillBePooled(ANiagaraLensEffectBase *this)

{
  ANiagaraActor::SetDestroyOnSystemFinish((ANiagaraActor *)&this[-1]._padding_,false);
  return;
}

// RegisterCamera @ 149302560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
ANiagaraLensEffectBase::RegisterCamera(ANiagaraLensEffectBase *this,APlayerCameraManager *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// ResetWhenTriggered @ 1493041f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ANiagaraLensEffectBase::ResetWhenTriggered(ANiagaraLensEffectBase *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 4) >> 1 & 1);
}

// ShouldAllowMultipleInstances @ 149309070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ANiagaraLensEffectBase::ShouldAllowMultipleInstances(ANiagaraLensEffectBase *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 4) & 1);
}

// ShouldTreatEmitterAsSame @ 149309090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
ANiagaraLensEffectBase::ShouldTreatEmitterAsSame
          (ANiagaraLensEffectBase *this,TSubclassOf<AActor> param_1)

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
      goto LAB_149309131;
    }
  }
  lVar5 = 0;
LAB_149309131:
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
LAB_14930919b:
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
      if (!bVar3) goto LAB_14930919b;
      lVar8 = *plVar7;
    }
    lVar6 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar6 == 0) || (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 == (UClass *)0x0))
    {
LAB_1493091d8:
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
      if (!bVar3) goto LAB_1493091d8;
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

// StaticRegisterNativesANiagaraLensEffectBase @ 149309d90

void __cdecl ANiagaraLensEffectBase::StaticRegisterNativesANiagaraLensEffectBase(void)

{
  return;
}

// _getUObject @ 14930e700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall ANiagaraLensEffectBase::_getUObject(ANiagaraLensEffectBase *this)

{
  return (UObject *)&this[-1]._padding_;
}

