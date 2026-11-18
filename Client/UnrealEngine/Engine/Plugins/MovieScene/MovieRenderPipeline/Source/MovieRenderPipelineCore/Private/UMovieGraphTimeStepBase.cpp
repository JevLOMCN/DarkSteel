// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// Initialize @ 14dc83ff0

void __thiscall UMovieGraphTimeStepBase::Initialize(UMovieGraphTimeStepBase *this)

{
  return;
}

// Shutdown @ 14dc897c0

void __thiscall UMovieGraphTimeStepBase::Shutdown(UMovieGraphTimeStepBase *this)

{
  return;
}

// StaticClass @ 14dc89aa0

UClass * __cdecl UMovieGraphTimeStepBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphTimeStepBase",
               &Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphTimeStepBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphTimeStepBase>,
               InternalVTableHelperCtorCaller<UMovieGraphTimeStepBase>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton;
}

// UMovieGraphTimeStepBase @ 14dcb1380

UMovieGraphTimeStepBase * __thiscall
UMovieGraphTimeStepBase::UMovieGraphTimeStepBase
          (UMovieGraphTimeStepBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphTimeStepBase__6B_;
  return this;
}

// UMovieGraphTimeStepBase @ 14dcb13b0

UMovieGraphTimeStepBase * __thiscall
UMovieGraphTimeStepBase::UMovieGraphTimeStepBase
          (UMovieGraphTimeStepBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphTimeStepBase__6B_;
  return this;
}

// ~UMovieGraphTimeStepBase @ 14dcb3420

void __thiscall UMovieGraphTimeStepBase::~UMovieGraphTimeStepBase(UMovieGraphTimeStepBase *this)

{
  *(undefined ***)this = &___7UMovieGraphTimeStepBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCalculatedTimeData @ 14dccae50

FMovieGraphTimeStepData * __thiscall
UMovieGraphTimeStepBase::GetCalculatedTimeData
          (UMovieGraphTimeStepBase *this,FMovieGraphTimeStepData *__return_storage_ptr__)

{
  __return_storage_ptr__->OutputFrameNumber = 0;
  __return_storage_ptr__->ShotOutputFrameNumber = 0;
  __return_storage_ptr__->RenderedFrameNumber = 0;
  __return_storage_ptr__->FrameDeltaTime = 0.0;
  __return_storage_ptr__->WorldTimeDilation = 0.0;
  __return_storage_ptr__->bHasRelativeTimeBeenUsed = false;
  __return_storage_ptr__->WorldSeconds = 0.0;
  __return_storage_ptr__->MotionBlurFraction = 0.0;
  (__return_storage_ptr__->FrameRate).Numerator = 0;
  (__return_storage_ptr__->FrameRate).Denominator = 0;
  __return_storage_ptr__->TemporalSampleIndex = 0;
  __return_storage_ptr__->TemporalSampleCount = 0;
  __return_storage_ptr__->SpatialSampleIndex = 0;
  __return_storage_ptr__->SpatialSampleCount = 0;
  __return_storage_ptr__->bIsFirstTemporalSampleForFrame = false;
  __return_storage_ptr__->bIsLastTemporalSampleForFrame = false;
  __return_storage_ptr__->bDiscardOutput = false;
  __return_storage_ptr__->bRequiresAccumulator = false;
  (__return_storage_ptr__->EvaluatedConfig).field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  (__return_storage_ptr__->RootTimeCode).Hours = 0;
  (__return_storage_ptr__->RootTimeCode).Minutes = 0;
  (__return_storage_ptr__->RootTimeCode).Seconds = 0;
  (__return_storage_ptr__->RootTimeCode).Frames = 0;
  (__return_storage_ptr__->RootTimeCode).Subframe = 0.0;
  (__return_storage_ptr__->RootTimeCode).bDropFrameFormat = false;
  __return_storage_ptr__->RootFrameNumber = 0;
  (__return_storage_ptr__->ShotTimeCode).Hours = 0;
  (__return_storage_ptr__->ShotTimeCode).Minutes = 0;
  (__return_storage_ptr__->ShotTimeCode).Seconds = 0;
  (__return_storage_ptr__->ShotTimeCode).Frames = 0;
  (__return_storage_ptr__->ShotTimeCode).Subframe = 0.0;
  (__return_storage_ptr__->ShotTimeCode).bDropFrameFormat = false;
  (__return_storage_ptr__->ShotFrameNumber).Value = 0;
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14dcd0c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphPipeline * __thiscall
UMovieGraphTimeStepBase::GetOwningGraph(UMovieGraphTimeStepBase *this)

{
  UClass *pUVar1;
  UMovieGraphPipeline *pUVar2;
  
  pUVar1 = UMovieGraphPipeline::StaticClass();
  pUVar2 = (UMovieGraphPipeline *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetPrivateStaticClass @ 14dcd3470

UClass * __cdecl UMovieGraphTimeStepBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphTimeStepBase",
               &Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphTimeStepBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphTimeStepBase>,
               InternalVTableHelperCtorCaller<UMovieGraphTimeStepBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton;
}

// IsExpansionForTSRequired @ 14dcd71b0

bool __thiscall
UMovieGraphTimeStepBase::IsExpansionForTSRequired
          (UMovieGraphTimeStepBase *this,TObjectPtr<UMovieGraphEvaluatedConfig> *param_1)

{
  return false;
}

// StaticRegisterNativesUMovieGraphTimeStepBase @ 14dce6890

void __cdecl UMovieGraphTimeStepBase::StaticRegisterNativesUMovieGraphTimeStepBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickProducingFrames @ 14dce8750

void __thiscall UMovieGraphTimeStepBase::TickProducingFrames(UMovieGraphTimeStepBase *this)

{
  return;
}

// execGetCalculatedTimeData @ 14dcf06c0

void __cdecl
UMovieGraphTimeStepBase::execGetCalculatedTimeData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieGraphTimeStepData *pFVar1;
  undefined1 local_88 [128];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FMovieGraphTimeStepData *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_88);
  FMovieGraphTimeStepData::operator=(param_3,pFVar1);
  return;
}

