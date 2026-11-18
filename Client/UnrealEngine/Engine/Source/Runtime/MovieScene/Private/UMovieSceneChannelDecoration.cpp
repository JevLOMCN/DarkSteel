// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146053ab0

UClass * __cdecl UMovieSceneChannelDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelDecoration",
               &Z_Registration_Info_UClass_UMovieSceneChannelDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelDecoration.InnerSingleton;
}

// UMovieSceneChannelDecoration @ 146058df0

UMovieSceneChannelDecoration * __thiscall
UMovieSceneChannelDecoration::UMovieSceneChannelDecoration
          (UMovieSceneChannelDecoration *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelDecoration__6B_;
  return this;
}

// UMovieSceneChannelDecoration @ 146058e20

UMovieSceneChannelDecoration * __thiscall
UMovieSceneChannelDecoration::UMovieSceneChannelDecoration
          (UMovieSceneChannelDecoration *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelDecoration__6B_;
  return this;
}

// ~UMovieSceneChannelDecoration @ 1460595d0

void __thiscall
UMovieSceneChannelDecoration::~UMovieSceneChannelDecoration(UMovieSceneChannelDecoration *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b250

UClass * __cdecl UMovieSceneChannelDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelDecoration",
               &Z_Registration_Info_UClass_UMovieSceneChannelDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelDecoration.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneChannelDecoration @ 14605cf60

void __cdecl UMovieSceneChannelDecoration::StaticRegisterNativesUMovieSceneChannelDecoration(void)

{
  return;
}

