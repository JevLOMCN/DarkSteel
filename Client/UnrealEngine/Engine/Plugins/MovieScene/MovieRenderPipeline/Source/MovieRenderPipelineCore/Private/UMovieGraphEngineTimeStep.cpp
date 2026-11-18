// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// UMovieGraphEngineTimeStep @ 14dc72f50

UMovieGraphEngineTimeStep * __thiscall
UMovieGraphEngineTimeStep::UMovieGraphEngineTimeStep(UMovieGraphEngineTimeStep *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,pFVar1);
  this->_padding_ = (longlong)&___7UMovieGraphEngineTimeStep__6B_;
  (this->TimeCache).UndilatedDeltaTime = 0.0;
  (this->SharedTimeStepData).OutputFrameNumber = 0;
  (this->SharedTimeStepData).RenderedFrameNumber = 0;
  (this->SharedTimeStepData).bHasTimeDilationBeenUsed = false;
  this->PrevMinUndilatedFrameTime = 0.0;
  this->PrevMaxUndilatedFrameTime = 0.0;
  return this;
}

// GetSynchronizationState @ 14dc82f50

ECustomTimeStepSynchronizationState __thiscall
UMovieGraphEngineTimeStep::GetSynchronizationState(UMovieGraphEngineTimeStep *this)

{
  return Synchronized;
}

// Initialize @ 14dc83fa0

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
UMovieGraphEngineTimeStep::Initialize(UMovieGraphEngineTimeStep *this,UEngine *param_1)

{
  UWorld *this_00;
  AWorldSettings *pAVar1;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pAVar1 = UWorld::GetWorldSettings(this_00,false,true);
  if (pAVar1 != (AWorldSettings *)0x0) {
    this->PrevMinUndilatedFrameTime = pAVar1->MinUndilatedFrameTime;
    this->PrevMaxUndilatedFrameTime = pAVar1->MaxUndilatedFrameTime;
  }
  return true;
}

// SetCachedFrameTiming @ 14dc88ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphEngineTimeStep::SetCachedFrameTiming
          (UMovieGraphEngineTimeStep *this,FTimeStepCache *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  if ((double)CONCAT44((uint)((ulonglong)param_1->UndilatedDeltaTime >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_1->UndilatedDeltaTime,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a) {
    bVar1 = `UMovieGraphEngineTimeStep::SetCachedFrameTiming'::__l3::<lambda_1>::operator()
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

// Shutdown @ 14dc89770

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
UMovieGraphEngineTimeStep::Shutdown(UMovieGraphEngineTimeStep *this,UEngine *param_1)

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

// UpdateTimeStep @ 14dc8cf40

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
UMovieGraphEngineTimeStep::UpdateTimeStep(UMovieGraphEngineTimeStep *this,UEngine *param_1)

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
    bVar2 = `UMovieGraphEngineTimeStep::UpdateTimeStep'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar2) goto LAB_14dc8cfec;
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
LAB_14dc8cfec:
  (this->TimeCache).UndilatedDeltaTime = 0.0;
  return false;
}

// StaticClass @ 14dc9e2e0

UClass * __cdecl UMovieGraphEngineTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEngineTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton,
               StaticRegisterNativesUMovieGraphEngineTimeStep,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphEngineTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphEngineTimeStep>,local_res8,
               UEngineCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton;
}

// UMovieGraphEngineTimeStep @ 14dcafe80

UMovieGraphEngineTimeStep * __thiscall
UMovieGraphEngineTimeStep::UMovieGraphEngineTimeStep
          (UMovieGraphEngineTimeStep *this,FVTableHelper *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphEngineTimeStep__6B_;
  (this->TimeCache).UndilatedDeltaTime = 0.0;
  (this->SharedTimeStepData).OutputFrameNumber = 0;
  (this->SharedTimeStepData).RenderedFrameNumber = 0;
  (this->SharedTimeStepData).bHasTimeDilationBeenUsed = false;
  return this;
}

// ~UMovieGraphEngineTimeStep @ 14dcb2de0

void __thiscall
UMovieGraphEngineTimeStep::~UMovieGraphEngineTimeStep(UMovieGraphEngineTimeStep *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphEngineTimeStep__6B_;
  UEngineCustomTimeStep::~UEngineCustomTimeStep((UEngineCustomTimeStep *)this);
  return;
}

// GetPrivateStaticClass @ 14dcd26a0

UClass * __cdecl UMovieGraphEngineTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEngineTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton,
               StaticRegisterNativesUMovieGraphEngineTimeStep,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphEngineTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphEngineTimeStep>,local_res8,
               UEngineCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphEngineTimeStep @ 14dce6520

void __cdecl UMovieGraphEngineTimeStep::StaticRegisterNativesUMovieGraphEngineTimeStep(void)

{
  return;
}

// operator() @ 15058b5c0

bool __thiscall
`UMovieGraphEngineTimeStep::SetCachedFrameTiming'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3003204213271429976>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3003204213271429976>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058b600

bool __thiscall
`UMovieGraphEngineTimeStep::UpdateTimeStep'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3003204213271429989>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3003204213271429989>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

