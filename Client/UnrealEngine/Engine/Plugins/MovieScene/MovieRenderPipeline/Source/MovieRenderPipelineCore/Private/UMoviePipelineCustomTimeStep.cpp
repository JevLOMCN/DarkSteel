// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 15

// StaticClass @ 14dcf8930

UClass * __cdecl UMoviePipelineCustomTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCustomTimeStep",
               &Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCustomTimeStep,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineCustomTimeStep>,
               InternalVTableHelperCtorCaller<UMoviePipelineCustomTimeStep>,local_res8,
               UEngineCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.InnerSingleton;
}

// UMoviePipelineCustomTimeStep @ 14dd0ca90

UMoviePipelineCustomTimeStep * __thiscall
UMoviePipelineCustomTimeStep::UMoviePipelineCustomTimeStep
          (UMoviePipelineCustomTimeStep *this,FVTableHelper *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineCustomTimeStep__6B_;
  (this->TimeCache).UndilatedDeltaTime = 0.0;
  return this;
}

// UMoviePipelineCustomTimeStep @ 14dd0cac0

UMoviePipelineCustomTimeStep * __thiscall
UMoviePipelineCustomTimeStep::UMoviePipelineCustomTimeStep
          (UMoviePipelineCustomTimeStep *this,FObjectInitializer *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineCustomTimeStep__6B_;
  (this->TimeCache).UndilatedDeltaTime = 0.0;
  return this;
}

// ~UMoviePipelineCustomTimeStep @ 14dd0e570

void __thiscall
UMoviePipelineCustomTimeStep::~UMoviePipelineCustomTimeStep(UMoviePipelineCustomTimeStep *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineCustomTimeStep__6B_;
  UEngineCustomTimeStep::~UEngineCustomTimeStep((UEngineCustomTimeStep *)this);
  return;
}

// CacheWorldSettings @ 14dd17ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMoviePipelineCustomTimeStep::CacheWorldSettings(UMoviePipelineCustomTimeStep *this)

{
  UWorld *this_00;
  AWorldSettings *pAVar1;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pAVar1 = UWorld::GetWorldSettings(this_00,false,true);
  if (pAVar1 != (AWorldSettings *)0x0) {
    this->PrevMinUndilatedFrameTime = pAVar1->MinUndilatedFrameTime;
    this->PrevMaxUndilatedFrameTime = pAVar1->MaxUndilatedFrameTime;
  }
  return;
}

// GetPrivateStaticClass @ 14dd2e120

UClass * __cdecl UMoviePipelineCustomTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCustomTimeStep",
               &Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCustomTimeStep,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineCustomTimeStep>,
               InternalVTableHelperCtorCaller<UMoviePipelineCustomTimeStep>,local_res8,
               UEngineCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.InnerSingleton;
}

// GetSynchronizationState @ 14dd30210

ECustomTimeStepSynchronizationState __thiscall
UMoviePipelineCustomTimeStep::GetSynchronizationState(UMoviePipelineCustomTimeStep *this)

{
  return Synchronized;
}

// Initialize @ 14dd33040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMoviePipelineCustomTimeStep::Initialize(UMoviePipelineCustomTimeStep *this,UEngine *param_1)

{
  return true;
}

// RestoreCachedWorldSettings @ 14dd3f7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMoviePipelineCustomTimeStep::RestoreCachedWorldSettings(UMoviePipelineCustomTimeStep *this)

{
  UWorld *this_00;
  AWorldSettings *pAVar1;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pAVar1 = UWorld::GetWorldSettings(this_00,false,true);
  if (pAVar1 != (AWorldSettings *)0x0) {
    pAVar1->MinUndilatedFrameTime = this->PrevMinUndilatedFrameTime;
    pAVar1->MaxUndilatedFrameTime = this->PrevMaxUndilatedFrameTime;
  }
  return;
}

// SetCachedFrameTiming @ 14dd400c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineCustomTimeStep::SetCachedFrameTiming
          (UMoviePipelineCustomTimeStep *this,FFrameTimeStepCache *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  if ((double)CONCAT44((uint)((ulonglong)param_1->UndilatedDeltaTime >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_1->UndilatedDeltaTime,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a) {
    bVar1 = `UMoviePipelineCustomTimeStep::SetCachedFrameTiming'::__l3::<lambda_1>::operator()
                      (local_res10);
    if (!bVar1) {
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      (this->TimeCache).UndilatedDeltaTime = __real_3fa5555555555555;
      return;
    }
  }
  (this->TimeCache).UndilatedDeltaTime = param_1->UndilatedDeltaTime;
  return;
}

// Shutdown @ 14dd41cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMoviePipelineCustomTimeStep::Shutdown(UMoviePipelineCustomTimeStep *this,UEngine *param_1)

{
  return;
}

// StaticRegisterNativesUMoviePipelineCustomTimeStep @ 14dd45620

void __cdecl UMoviePipelineCustomTimeStep::StaticRegisterNativesUMoviePipelineCustomTimeStep(void)

{
  return;
}

// UpdateTimeStep @ 14dd4b720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMoviePipelineCustomTimeStep::UpdateTimeStep(UMoviePipelineCustomTimeStep *this,UEngine *param_1)

{
  double dVar1;
  bool bVar2;
  UWorld *this_00;
  AWorldSettings *pAVar3;
  undefined1 local_res8 [32];
  
  dVar1 = (this->TimeCache).UndilatedDeltaTime;
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    bVar2 = `UMoviePipelineCustomTimeStep::UpdateTimeStep'::__l3::<lambda_1>::operator()(local_res8)
    ;
    if (!bVar2) goto LAB_14dd4b7cc;
  }
  FApp::LastTime = FApp::CurrentTime;
  FApp::DeltaTime = (atomic<double>)(this->TimeCache).UndilatedDeltaTime;
  FApp::CurrentTime = (atomic<double>)((double)FApp::DeltaTime + (double)FApp::CurrentTime);
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar3 = UWorld::GetWorldSettings(this_00,false,true);
  if (pAVar3 != (AWorldSettings *)0x0) {
    pAVar3->MinUndilatedFrameTime = (float)(this->TimeCache).UndilatedDeltaTime;
    pAVar3->MaxUndilatedFrameTime = (float)(this->TimeCache).UndilatedDeltaTime;
  }
LAB_14dd4b7cc:
  (this->TimeCache).UndilatedDeltaTime = 0.0;
  return false;
}

// operator() @ 15058dcb0

bool __thiscall
`UMoviePipelineCustomTimeStep::SetCachedFrameTiming'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7424115317783133365>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783133365>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058dd30

bool __thiscall
`UMoviePipelineCustomTimeStep::UpdateTimeStep'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7424115317783133408>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783133408>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

