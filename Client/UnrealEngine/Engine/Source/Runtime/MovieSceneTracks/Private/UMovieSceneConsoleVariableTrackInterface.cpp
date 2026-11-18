// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 14658b2f0

UClass * __cdecl UMovieSceneConsoleVariableTrackInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneConsoleVariableTrackInterface",
               &Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneConsoleVariableTrackInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneConsoleVariableTrackInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneConsoleVariableTrackInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.InnerSingleton;
}

// UMovieSceneConsoleVariableTrackInterface @ 14661afe0

UMovieSceneConsoleVariableTrackInterface * __thiscall
UMovieSceneConsoleVariableTrackInterface::UMovieSceneConsoleVariableTrackInterface
          (UMovieSceneConsoleVariableTrackInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneConsoleVariableTrackInterface__6B_;
  return this;
}

// UMovieSceneConsoleVariableTrackInterface @ 14661b010

UMovieSceneConsoleVariableTrackInterface * __thiscall
UMovieSceneConsoleVariableTrackInterface::UMovieSceneConsoleVariableTrackInterface
          (UMovieSceneConsoleVariableTrackInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneConsoleVariableTrackInterface__6B_;
  return this;
}

// ~UMovieSceneConsoleVariableTrackInterface @ 146621be0

void __thiscall
UMovieSceneConsoleVariableTrackInterface::~UMovieSceneConsoleVariableTrackInterface
          (UMovieSceneConsoleVariableTrackInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1466964b0

UClass * __cdecl UMovieSceneConsoleVariableTrackInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneConsoleVariableTrackInterface",
               &Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneConsoleVariableTrackInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneConsoleVariableTrackInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneConsoleVariableTrackInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneConsoleVariableTrackInterface @ 1466fe7a0

void __cdecl
UMovieSceneConsoleVariableTrackInterface::
StaticRegisterNativesUMovieSceneConsoleVariableTrackInterface(void)

{
  return;
}

