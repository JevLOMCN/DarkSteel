// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146056960

UClass * __cdecl UMovieSceneTrackDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTrackDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackDecoration.InnerSingleton;
}

// UMovieSceneTrackDecoration @ 1460594b0

UMovieSceneTrackDecoration * __thiscall
UMovieSceneTrackDecoration::UMovieSceneTrackDecoration
          (UMovieSceneTrackDecoration *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTrackDecoration__6B_;
  return this;
}

// UMovieSceneTrackDecoration @ 1460594e0

UMovieSceneTrackDecoration * __thiscall
UMovieSceneTrackDecoration::UMovieSceneTrackDecoration
          (UMovieSceneTrackDecoration *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTrackDecoration__6B_;
  return this;
}

// ~UMovieSceneTrackDecoration @ 146059730

void __thiscall
UMovieSceneTrackDecoration::~UMovieSceneTrackDecoration(UMovieSceneTrackDecoration *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605bfc0

UClass * __cdecl UMovieSceneTrackDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTrackDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackDecoration.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneTrackDecoration @ 14605d0b0

void __cdecl UMovieSceneTrackDecoration::StaticRegisterNativesUMovieSceneTrackDecoration(void)

{
  return;
}

