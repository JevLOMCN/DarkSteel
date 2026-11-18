// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dcf7ee0

UClass * __cdecl UMoviePipelineColorSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineColorSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineColorSetting",
               &Z_Registration_Info_UClass_UMoviePipelineColorSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineColorSetting,0xf8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMoviePipelineColorSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineColorSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineColorSetting.InnerSingleton;
}

// UMoviePipelineColorSetting @ 14dd0c7b0

UMoviePipelineColorSetting * __thiscall
UMoviePipelineColorSetting::UMoviePipelineColorSetting
          (UMoviePipelineColorSetting *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineColorSetting__6B_;
  (this->OCIOConfiguration).bIsEnabled = false;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  return this;
}

// UMoviePipelineColorSetting @ 14dd0c7f0

UMoviePipelineColorSetting * __thiscall
UMoviePipelineColorSetting::UMoviePipelineColorSetting(UMoviePipelineColorSetting *this)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineColorSetting__6B_;
  (this->OCIOConfiguration).bIsEnabled = false;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  this->bDisableToneCurve = false;
  return this;
}

// ~UMoviePipelineColorSetting @ 14dd0e3a0

void __thiscall
UMoviePipelineColorSetting::~UMoviePipelineColorSetting(UMoviePipelineColorSetting *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineColorSetting__6B_;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// GetPrivateStaticClass @ 14dd2de30

UClass * __cdecl UMoviePipelineColorSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineColorSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineColorSetting",
               &Z_Registration_Info_UClass_UMoviePipelineColorSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineColorSetting,0xf8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMoviePipelineColorSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineColorSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineColorSetting.InnerSingleton;
}

// IsValidOnPrimary @ 14dd33dd0

bool __thiscall UMoviePipelineColorSetting::IsValidOnPrimary(UMoviePipelineColorSetting *this)

{
  return true;
}

// IsValidOnShots @ 14dd33e20

bool __thiscall UMoviePipelineColorSetting::IsValidOnShots(UMoviePipelineColorSetting *this)

{
  return false;
}

// StaticRegisterNativesUMoviePipelineColorSetting @ 14dd455b0

void __cdecl UMoviePipelineColorSetting::StaticRegisterNativesUMoviePipelineColorSetting(void)

{
  return;
}

