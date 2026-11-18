// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 14605f540

UClass * __cdecl UMovieSceneScalingDriver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneScalingDriver",
               &Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton,
               StaticRegisterNativesUMovieSceneScalingDriver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScalingDriver>,
               InternalVTableHelperCtorCaller<UMovieSceneScalingDriver>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton;
}

// UMovieSceneScalingDriver @ 146095b40

UMovieSceneScalingDriver * __thiscall
UMovieSceneScalingDriver::UMovieSceneScalingDriver
          (UMovieSceneScalingDriver *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScalingDriver__6B_;
  return this;
}

// UMovieSceneScalingDriver @ 146095b70

UMovieSceneScalingDriver * __thiscall
UMovieSceneScalingDriver::UMovieSceneScalingDriver
          (UMovieSceneScalingDriver *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScalingDriver__6B_;
  return this;
}

// ~UMovieSceneScalingDriver @ 1460986e0

void __thiscall UMovieSceneScalingDriver::~UMovieSceneScalingDriver(UMovieSceneScalingDriver *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1460cfbd0

UClass * __cdecl UMovieSceneScalingDriver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneScalingDriver",
               &Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton,
               StaticRegisterNativesUMovieSceneScalingDriver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScalingDriver>,
               InternalVTableHelperCtorCaller<UMovieSceneScalingDriver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneScalingDriver @ 1460fa2c0

void __cdecl UMovieSceneScalingDriver::StaticRegisterNativesUMovieSceneScalingDriver(void)

{
  return;
}

