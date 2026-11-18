// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 16

// StaticClass @ 14dc67de0

UClass * __cdecl UMoviePipelineOutputBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineOutputBase,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineOutputBase>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton;
}

// UMoviePipelineOutputBase @ 14dc73a80

UMoviePipelineOutputBase * __thiscall
UMoviePipelineOutputBase::UMoviePipelineOutputBase
          (UMoviePipelineOutputBase *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  *(undefined ***)this = &___7UMoviePipelineOutputBase__6B_;
  return this;
}

// UMoviePipelineOutputBase @ 14dc73ab0

UMoviePipelineOutputBase * __thiscall
UMoviePipelineOutputBase::UMoviePipelineOutputBase(UMoviePipelineOutputBase *this)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this);
  *(undefined ***)this = &___7UMoviePipelineOutputBase__6B_;
  return this;
}

// ~UMoviePipelineOutputBase @ 14dc74a90

void __thiscall UMoviePipelineOutputBase::~UMoviePipelineOutputBase(UMoviePipelineOutputBase *this)

{
  *(undefined ***)this = &___7UMoviePipelineOutputBase__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// BeginFinalizeImpl @ 14dc783e0

void __thiscall UMoviePipelineOutputBase::BeginFinalizeImpl(UMoviePipelineOutputBase *this)

{
  return;
}

// FinalizeImpl @ 14dc7e780

void __thiscall UMoviePipelineOutputBase::FinalizeImpl(UMoviePipelineOutputBase *this)

{
  return;
}

// GetPrivateStaticClass @ 14dc827d0

UClass * __cdecl UMoviePipelineOutputBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineOutputBase,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineOutputBase>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton;
}

// HasFinishedProcessingImpl @ 14dc83f00

bool __thiscall UMoviePipelineOutputBase::HasFinishedProcessingImpl(UMoviePipelineOutputBase *this)

{
  return true;
}

// IsValidOnPrimary @ 14dc844d0

bool __thiscall UMoviePipelineOutputBase::IsValidOnPrimary(UMoviePipelineOutputBase *this)

{
  return true;
}

// IsValidOnShots @ 14dc84510

bool __thiscall UMoviePipelineOutputBase::IsValidOnShots(UMoviePipelineOutputBase *this)

{
  return false;
}

// OnPipelineFinishedImpl @ 14dc851e0

void __thiscall UMoviePipelineOutputBase::OnPipelineFinishedImpl(UMoviePipelineOutputBase *this)

{
  return;
}

// OnPostTickImpl @ 14dc851f0

void __thiscall UMoviePipelineOutputBase::OnPostTickImpl(UMoviePipelineOutputBase *this)

{
  return;
}

// OnReceiveImageDataImpl @ 14dc85200

void __thiscall
UMoviePipelineOutputBase::OnReceiveImageDataImpl
          (UMoviePipelineOutputBase *this,FMoviePipelineMergerOutputFrame *param_1)

{
  return;
}

// OnShotFinishedImpl @ 14dc85220

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineOutputBase::OnShotFinishedImpl
          (UMoviePipelineOutputBase *this,UMoviePipelineExecutorShot *param_1,bool param_2)

{
  return;
}

// ShouldCropOverscanImpl @ 14dc896f0

bool __thiscall UMoviePipelineOutputBase::ShouldCropOverscanImpl(UMoviePipelineOutputBase *this)

{
  return true;
}

// StaticRegisterNativesUMoviePipelineOutputBase @ 14dc89d50

void __cdecl UMoviePipelineOutputBase::StaticRegisterNativesUMoviePipelineOutputBase(void)

{
  return;
}

