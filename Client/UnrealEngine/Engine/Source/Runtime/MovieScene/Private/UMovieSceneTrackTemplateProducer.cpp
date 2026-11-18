// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146064a30

UClass * __cdecl UMovieSceneTrackTemplateProducer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackTemplateProducer",
               &Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackTemplateProducer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackTemplateProducer>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackTemplateProducer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton;
}

// UMovieSceneTrackTemplateProducer @ 146095eb0

UMovieSceneTrackTemplateProducer * __thiscall
UMovieSceneTrackTemplateProducer::UMovieSceneTrackTemplateProducer
          (UMovieSceneTrackTemplateProducer *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTrackTemplateProducer__6B_;
  return this;
}

// UMovieSceneTrackTemplateProducer @ 146095ee0

UMovieSceneTrackTemplateProducer * __thiscall
UMovieSceneTrackTemplateProducer::UMovieSceneTrackTemplateProducer
          (UMovieSceneTrackTemplateProducer *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTrackTemplateProducer__6B_;
  return this;
}

// ~UMovieSceneTrackTemplateProducer @ 146098850

void __thiscall
UMovieSceneTrackTemplateProducer::~UMovieSceneTrackTemplateProducer
          (UMovieSceneTrackTemplateProducer *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1460d0010

UClass * __cdecl UMovieSceneTrackTemplateProducer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackTemplateProducer",
               &Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackTemplateProducer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackTemplateProducer>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackTemplateProducer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneTrackTemplateProducer @ 1460fa320

void __cdecl
UMovieSceneTrackTemplateProducer::StaticRegisterNativesUMovieSceneTrackTemplateProducer(void)

{
  return;
}

