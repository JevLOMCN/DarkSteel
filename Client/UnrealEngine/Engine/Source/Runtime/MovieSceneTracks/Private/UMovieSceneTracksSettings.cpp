// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 14658f680

UClass * __cdecl UMovieSceneTracksSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTracksSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTracksSettings",
               &Z_Registration_Info_UClass_UMovieSceneTracksSettings.InnerSingleton,
               StaticRegisterNativesUMovieSceneTracksSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneTracksSettings>,
               InternalVTableHelperCtorCaller<UMovieSceneTracksSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTracksSettings.InnerSingleton;
}

// UMovieSceneTracksSettings @ 14661bb60

UMovieSceneTracksSettings * __thiscall
UMovieSceneTracksSettings::UMovieSceneTracksSettings
          (UMovieSceneTracksSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTracksSettings__6B_;
  return this;
}

// UMovieSceneTracksSettings @ 14661bb90

UMovieSceneTracksSettings * __thiscall
UMovieSceneTracksSettings::UMovieSceneTracksSettings
          (UMovieSceneTracksSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bPreviewCameraCutsInSimulate = true;
  this->_padding_ = (longlong)&___7UMovieSceneTracksSettings__6B_;
  return this;
}

// ~UMovieSceneTracksSettings @ 146621e30

void __thiscall
UMovieSceneTracksSettings::~UMovieSceneTracksSettings(UMovieSceneTracksSettings *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneTracksSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146696e70

UClass * __cdecl UMovieSceneTracksSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTracksSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTracksSettings",
               &Z_Registration_Info_UClass_UMovieSceneTracksSettings.InnerSingleton,
               StaticRegisterNativesUMovieSceneTracksSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneTracksSettings>,
               InternalVTableHelperCtorCaller<UMovieSceneTracksSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTracksSettings.InnerSingleton;
}

// SetPreviewCameraCutsInSimulate @ 1466fb200

void __thiscall
UMovieSceneTracksSettings::SetPreviewCameraCutsInSimulate
          (UMovieSceneTracksSettings *this,bool param_1)

{
  if (param_1 != this->bPreviewCameraCutsInSimulate) {
    this->bPreviewCameraCutsInSimulate = param_1;
    UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  }
  return;
}

// StaticRegisterNativesUMovieSceneTracksSettings @ 1466fe8a0

void __cdecl UMovieSceneTracksSettings::StaticRegisterNativesUMovieSceneTracksSettings(void)

{
  return;
}

