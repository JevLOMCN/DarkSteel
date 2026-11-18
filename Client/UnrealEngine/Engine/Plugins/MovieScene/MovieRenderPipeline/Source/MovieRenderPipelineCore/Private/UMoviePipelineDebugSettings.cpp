// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dcf8c60

UClass * __cdecl UMoviePipelineDebugSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDebugSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineDebugSettings",
               &Z_Registration_Info_UClass_UMoviePipelineDebugSettings.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDebugSettings,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDebugSettings>,
               InternalVTableHelperCtorCaller<UMoviePipelineDebugSettings>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDebugSettings.InnerSingleton;
}

// UMoviePipelineDebugSettings @ 14dd0caf0

UMoviePipelineDebugSettings * __thiscall
UMoviePipelineDebugSettings::UMoviePipelineDebugSettings
          (UMoviePipelineDebugSettings *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineDebugSettings__6B_;
  return this;
}

// UMoviePipelineDebugSettings @ 14dd0cb20

UMoviePipelineDebugSettings * __thiscall
UMoviePipelineDebugSettings::UMoviePipelineDebugSettings(UMoviePipelineDebugSettings *this)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this);
  this->bWriteAllSamples = false;
  this->bCaptureFramesWithRenderDoc = false;
  this->_padding_ = (longlong)&___7UMoviePipelineDebugSettings__6B_;
  this->CaptureFrame = 0;
  this->bIsRenderDebugCaptureAvailable = false;
  return this;
}

// ~UMoviePipelineDebugSettings @ 14dd0e590

void __thiscall
UMoviePipelineDebugSettings::~UMoviePipelineDebugSettings(UMoviePipelineDebugSettings *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineDebugSettings__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// GetPrivateStaticClass @ 14dd2e1e0

UClass * __cdecl UMoviePipelineDebugSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDebugSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineDebugSettings",
               &Z_Registration_Info_UClass_UMoviePipelineDebugSettings.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDebugSettings,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDebugSettings>,
               InternalVTableHelperCtorCaller<UMoviePipelineDebugSettings>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDebugSettings.InnerSingleton;
}

// IsValidOnPrimary @ 14dd33df0

bool __thiscall UMoviePipelineDebugSettings::IsValidOnPrimary(UMoviePipelineDebugSettings *this)

{
  return true;
}

// IsValidOnShots @ 14dd33e40

bool __thiscall UMoviePipelineDebugSettings::IsValidOnShots(UMoviePipelineDebugSettings *this)

{
  return false;
}

// StaticRegisterNativesUMoviePipelineDebugSettings @ 14dd45630

void __cdecl UMoviePipelineDebugSettings::StaticRegisterNativesUMoviePipelineDebugSettings(void)

{
  return;
}

