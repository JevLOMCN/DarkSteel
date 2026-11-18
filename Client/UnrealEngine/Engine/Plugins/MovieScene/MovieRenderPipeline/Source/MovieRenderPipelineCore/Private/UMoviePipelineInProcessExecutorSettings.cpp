// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc679e0

UClass * __cdecl UMoviePipelineInProcessExecutorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineInProcessExecutorSettings",
               &Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton,
               StaticRegisterNativesUMoviePipelineInProcessExecutorSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineInProcessExecutorSettings>,
               InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton;
}

// UMoviePipelineInProcessExecutorSettings @ 14dc73a40

UMoviePipelineInProcessExecutorSettings * __thiscall
UMoviePipelineInProcessExecutorSettings::UMoviePipelineInProcessExecutorSettings
          (UMoviePipelineInProcessExecutorSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutorSettings__6B_;
  (this->AdditionalCommandLineArguments).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AdditionalCommandLineArguments).Data.ArrayNum = 0;
  (this->AdditionalCommandLineArguments).Data.ArrayMax = 0;
  (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->InheritedCommandLineArguments).Data.ArrayNum = 0;
  (this->InheritedCommandLineArguments).Data.ArrayMax = 0;
  return this;
}

// ~UMoviePipelineInProcessExecutorSettings @ 14dc74a40

void __thiscall
UMoviePipelineInProcessExecutorSettings::~UMoviePipelineInProcessExecutorSettings
          (UMoviePipelineInProcessExecutorSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutorSettings__6B_;
  pFVar1 = (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalCommandLineArguments).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14dc7f3d0

FName __thiscall
UMoviePipelineInProcessExecutorSettings::GetCategoryName
          (UMoviePipelineInProcessExecutorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Plugins");
  return in_RDX;
}

// GetContainerName @ 14dc7f520

FName __thiscall
UMoviePipelineInProcessExecutorSettings::GetContainerName
          (UMoviePipelineInProcessExecutorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Project");
  return in_RDX;
}

// GetPrivateStaticClass @ 14dc82710

UClass * __cdecl UMoviePipelineInProcessExecutorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineInProcessExecutorSettings",
               &Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton,
               StaticRegisterNativesUMoviePipelineInProcessExecutorSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineInProcessExecutorSettings>,
               InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton;
}

// StaticRegisterNativesUMoviePipelineInProcessExecutorSettings @ 14dc89d40

void __cdecl
UMoviePipelineInProcessExecutorSettings::
StaticRegisterNativesUMoviePipelineInProcessExecutorSettings(void)

{
  return;
}

