// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 5

// StaticClass @ 146bd2fd0

UClass * __cdecl UMovieSceneAudioCaptureProtocolBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneAudioCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneAudioCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioCaptureProtocolBase>,local_res8,
               UMovieSceneCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton;
}

// UMovieSceneAudioCaptureProtocolBase @ 146bd8730

UMovieSceneAudioCaptureProtocolBase * __thiscall
UMovieSceneAudioCaptureProtocolBase::UMovieSceneAudioCaptureProtocolBase
          (UMovieSceneAudioCaptureProtocolBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x40 = 0;
  *(undefined ***)this = &___7UMovieSceneAudioCaptureProtocolBase__6B_;
  return this;
}

// ~UMovieSceneAudioCaptureProtocolBase @ 146bd9660

void __thiscall
UMovieSceneAudioCaptureProtocolBase::~UMovieSceneAudioCaptureProtocolBase
          (UMovieSceneAudioCaptureProtocolBase *this)

{
  *(undefined ***)this = &___7UMovieSceneCaptureProtocolBase__6B_;
  if (this->field_0x40 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146be0ae0

UClass * __cdecl UMovieSceneAudioCaptureProtocolBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneAudioCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneAudioCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioCaptureProtocolBase>,local_res8,
               UMovieSceneCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase @ 146be8d50

void __cdecl
UMovieSceneAudioCaptureProtocolBase::StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase(void)

{
  return;
}

