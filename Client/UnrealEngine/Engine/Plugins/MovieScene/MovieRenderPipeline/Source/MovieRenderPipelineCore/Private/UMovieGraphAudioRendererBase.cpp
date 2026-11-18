// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// StaticClass @ 14dc98400

UClass * __cdecl UMovieGraphAudioRendererBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphAudioRendererBase",
               &Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphAudioRendererBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphAudioRendererBase>,
               InternalVTableHelperCtorCaller<UMovieGraphAudioRendererBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton;
}

// UMovieGraphAudioRendererBase @ 14dcaee00

UMovieGraphAudioRendererBase * __thiscall
UMovieGraphAudioRendererBase::UMovieGraphAudioRendererBase
          (UMovieGraphAudioRendererBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphAudioRendererBase__6B_;
  (this->AudioState).FinishedSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).FinishedSegments.ArrayNum = 0;
  (this->AudioState).FinishedSegments.ArrayMax = 0;
  (this->AudioState).ActiveSubmixes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).ActiveSubmixes.ArrayNum = 0;
  (this->AudioState).ActiveSubmixes.ArrayMax = 0;
  (this->AudioState).bIsRecordingAudio = false;
  (this->AudioState).PrevUnfocusedAudioMultiplier = 1.0;
  (this->AudioState).PrevRenderEveryTickValue = 1;
  (this->AudioState).PrevNeverMuteNRTAudioValue = 0;
  return this;
}

// UMovieGraphAudioRendererBase @ 14dcaee50

UMovieGraphAudioRendererBase * __thiscall
UMovieGraphAudioRendererBase::UMovieGraphAudioRendererBase
          (UMovieGraphAudioRendererBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphAudioRendererBase__6B_;
  (this->AudioState).FinishedSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).FinishedSegments.ArrayNum = 0;
  (this->AudioState).FinishedSegments.ArrayMax = 0;
  (this->AudioState).ActiveSubmixes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).ActiveSubmixes.ArrayNum = 0;
  (this->AudioState).ActiveSubmixes.ArrayMax = 0;
  (this->AudioState).bIsRecordingAudio = false;
  (this->AudioState).PrevUnfocusedAudioMultiplier = 1.0;
  (this->AudioState).PrevRenderEveryTickValue = 1;
  (this->AudioState).PrevNeverMuteNRTAudioValue = 0;
  return this;
}

// ~UMovieGraphAudioRendererBase @ 14dcb2650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieGraphAudioRendererBase::~UMovieGraphAudioRendererBase(UMovieGraphAudioRendererBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphAudioRendererBase__6B_;
  DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
            ((TWeakPtr<Audio::FMixerSubmix,1> *)
             (this->AudioState).ActiveSubmixes.AllocatorInstance.Data,
             (this->AudioState).ActiveSubmixes.ArrayNum);
  pFVar1 = (this->AudioState).ActiveSubmixes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<MoviePipeline::FAudioState::FAudioSegment,int>
            ((FAudioSegment *)(this->AudioState).FinishedSegments.AllocatorInstance.Data,
             (this->AudioState).FinishedSegments.ArrayNum);
  pFVar1 = (this->AudioState).FinishedSegments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAudioState @ 14dccaad0

FAudioState * __thiscall
UMovieGraphAudioRendererBase::GetAudioState(UMovieGraphAudioRendererBase *this)

{
  return &this->AudioState;
}

// GetOwningGraph @ 14dcd0b80

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
UMovieGraphAudioRendererBase::GetOwningGraph(UMovieGraphAudioRendererBase *this)

{
  UClass *pUVar1;
  UMovieGraphPipeline *pUVar2;
  
  pUVar1 = UMovieGraphPipeline::StaticClass();
  pUVar2 = (UMovieGraphPipeline *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetPrivateStaticClass @ 14dcd1680

UClass * __cdecl UMovieGraphAudioRendererBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphAudioRendererBase",
               &Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphAudioRendererBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphAudioRendererBase>,
               InternalVTableHelperCtorCaller<UMovieGraphAudioRendererBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton;
}

// ProcessAudioTick @ 14dcda460

void __thiscall UMovieGraphAudioRendererBase::ProcessAudioTick(UMovieGraphAudioRendererBase *this)

{
  return;
}

// SetupAudioRendering @ 14dce3650

void __thiscall
UMovieGraphAudioRendererBase::SetupAudioRendering(UMovieGraphAudioRendererBase *this)

{
  return;
}

// StartAudioRecording @ 14dce5780

void __thiscall
UMovieGraphAudioRendererBase::StartAudioRecording(UMovieGraphAudioRendererBase *this)

{
  return;
}

// StaticRegisterNativesUMovieGraphAudioRendererBase @ 14dce6300

void __cdecl UMovieGraphAudioRendererBase::StaticRegisterNativesUMovieGraphAudioRendererBase(void)

{
  return;
}

// StopAudioRecording @ 14dce68e0

void __thiscall UMovieGraphAudioRendererBase::StopAudioRecording(UMovieGraphAudioRendererBase *this)

{
  return;
}

// TeardownAudioRendering @ 14dce6c10

void __thiscall
UMovieGraphAudioRendererBase::TeardownAudioRendering(UMovieGraphAudioRendererBase *this)

{
  return;
}

