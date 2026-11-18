// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1460622e0

UClass * __cdecl UMovieSceneTimeWarpSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpSource",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTimeWarpSource>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpSource>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton;
}

// UMovieSceneTimeWarpSource @ 146095d80

UMovieSceneTimeWarpSource * __thiscall
UMovieSceneTimeWarpSource::UMovieSceneTimeWarpSource
          (UMovieSceneTimeWarpSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTimeWarpSource__6B_;
  return this;
}

// UMovieSceneTimeWarpSource @ 146095db0

UMovieSceneTimeWarpSource * __thiscall
UMovieSceneTimeWarpSource::UMovieSceneTimeWarpSource
          (UMovieSceneTimeWarpSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTimeWarpSource__6B_;
  return this;
}

// ~UMovieSceneTimeWarpSource @ 1460987d0

void __thiscall
UMovieSceneTimeWarpSource::~UMovieSceneTimeWarpSource(UMovieSceneTimeWarpSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1460cfea0

UClass * __cdecl UMovieSceneTimeWarpSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpSource",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTimeWarpSource>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneTimeWarpSource @ 1460fa300

void __cdecl UMovieSceneTimeWarpSource::StaticRegisterNativesUMovieSceneTimeWarpSource(void)

{
  return;
}

