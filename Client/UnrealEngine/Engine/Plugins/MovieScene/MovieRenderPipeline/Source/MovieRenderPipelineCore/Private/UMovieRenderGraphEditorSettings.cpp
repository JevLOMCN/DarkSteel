// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc98ec0

UClass * __cdecl UMovieRenderGraphEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieRenderGraphEditorSettings",
               &Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton,
               StaticRegisterNativesUMovieRenderGraphEditorSettings,0x118,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieRenderGraphEditorSettings>,
               InternalVTableHelperCtorCaller<UMovieRenderGraphEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton;
}

// UMovieRenderGraphEditorSettings @ 14dcb13e0

UMovieRenderGraphEditorSettings * __thiscall
UMovieRenderGraphEditorSettings::UMovieRenderGraphEditorSettings
          (UMovieRenderGraphEditorSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieRenderGraphEditorSettings__6B_;
  FMovieGraphPostRenderSettings::FMovieGraphPostRenderSettings(&this->PostRenderSettings);
  return this;
}

// UMovieRenderGraphEditorSettings @ 14dcb1410

UMovieRenderGraphEditorSettings * __thiscall
UMovieRenderGraphEditorSettings::UMovieRenderGraphEditorSettings
          (UMovieRenderGraphEditorSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UMovieRenderGraphEditorSettings__6B_;
  FMovieGraphPostRenderSettings::FMovieGraphPostRenderSettings(&this->PostRenderSettings);
  return this;
}

// ~UMovieRenderGraphEditorSettings @ 14dcb3440

void __thiscall
UMovieRenderGraphEditorSettings::~UMovieRenderGraphEditorSettings
          (UMovieRenderGraphEditorSettings *this)

{
  this->_padding_ = (longlong)&___7UMovieRenderGraphEditorSettings__6B_;
  FMovieGraphPostRenderSettings::~FMovieGraphPostRenderSettings(&this->PostRenderSettings);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14dccbb50

FName __thiscall
UMovieRenderGraphEditorSettings::GetCategoryName(UMovieRenderGraphEditorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 14dcd3520

UClass * __cdecl UMovieRenderGraphEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieRenderGraphEditorSettings",
               &Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton,
               StaticRegisterNativesUMovieRenderGraphEditorSettings,0x118,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieRenderGraphEditorSettings>,
               InternalVTableHelperCtorCaller<UMovieRenderGraphEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton;
}

// StaticRegisterNativesUMovieRenderGraphEditorSettings @ 14dce68d0

void __cdecl
UMovieRenderGraphEditorSettings::StaticRegisterNativesUMovieRenderGraphEditorSettings(void)

{
  return;
}

