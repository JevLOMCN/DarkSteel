// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 5

// StaticClass @ 146bd2ed0

UClass * __cdecl UMovieSceneImageCaptureProtocolBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneImageCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneImageCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneImageCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneImageCaptureProtocolBase>,local_res8,
               UMovieSceneCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton;
}

// UMovieSceneImageCaptureProtocolBase @ 146bd8d70

UMovieSceneImageCaptureProtocolBase * __thiscall
UMovieSceneImageCaptureProtocolBase::UMovieSceneImageCaptureProtocolBase
          (UMovieSceneImageCaptureProtocolBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x40 = 0;
  *(undefined ***)this = &___7UMovieSceneImageCaptureProtocolBase__6B_;
  return this;
}

// ~UMovieSceneImageCaptureProtocolBase @ 146bd9870

void __thiscall
UMovieSceneImageCaptureProtocolBase::~UMovieSceneImageCaptureProtocolBase
          (UMovieSceneImageCaptureProtocolBase *this)

{
  *(undefined ***)this = &___7UMovieSceneCaptureProtocolBase__6B_;
  if (this->field_0x40 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146be0e70

UClass * __cdecl UMovieSceneImageCaptureProtocolBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneImageCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneImageCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneImageCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneImageCaptureProtocolBase>,local_res8,
               UMovieSceneCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneImageCaptureProtocolBase @ 146be8e30

void __cdecl
UMovieSceneImageCaptureProtocolBase::StaticRegisterNativesUMovieSceneImageCaptureProtocolBase(void)

{
  return;
}

