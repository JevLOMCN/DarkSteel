// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf8e60

UClass * __cdecl UMoviePipelineCommandLineEncoderSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCommandLineEncoderSettings",
               &Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCommandLineEncoderSettings,0xf8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineCommandLineEncoderSettings>,
               InternalVTableHelperCtorCaller<UMoviePipelineCommandLineEncoderSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.InnerSingleton;
}

// UMoviePipelineCommandLineEncoderSettings @ 14dd0c8f0

UMoviePipelineCommandLineEncoderSettings * __thiscall
UMoviePipelineCommandLineEncoderSettings::UMoviePipelineCommandLineEncoderSettings
          (UMoviePipelineCommandLineEncoderSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineCommandLineEncoderSettings__6B_;
  (this->ExecutablePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutablePath).Data.ArrayNum = 0;
  (this->ExecutablePath).Data.ArrayMax = 0;
  FText::FText(&this->CodecHelpText);
  (this->VideoCodec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoCodec).Data.ArrayNum = 0;
  (this->VideoCodec).Data.ArrayMax = 0;
  (this->AudioCodec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioCodec).Data.ArrayNum = 0;
  (this->AudioCodec).Data.ArrayMax = 0;
  (this->OutputFileExtension).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFileExtension).Data.ArrayNum = 0;
  (this->OutputFileExtension).Data.ArrayMax = 0;
  (this->CommandLineFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLineFormat).Data.ArrayNum = 0;
  (this->CommandLineFormat).Data.ArrayMax = 0;
  (this->VideoInputStringFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoInputStringFormat).Data.ArrayNum = 0;
  (this->VideoInputStringFormat).Data.ArrayMax = 0;
  (this->AudioInputStringFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputStringFormat).Data.ArrayNum = 0;
  (this->AudioInputStringFormat).Data.ArrayMax = 0;
  (this->EncodeSettings_Low).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncodeSettings_Low).Data.ArrayNum = 0;
  (this->EncodeSettings_Low).Data.ArrayMax = 0;
  (this->EncodeSettings_Med).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncodeSettings_Med).Data.ArrayNum = 0;
  (this->EncodeSettings_Med).Data.ArrayMax = 0;
  (this->EncodeSettings_High).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncodeSettings_High).Data.ArrayNum = 0;
  (this->EncodeSettings_High).Data.ArrayMax = 0;
  (this->EncodeSettings_Epic).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncodeSettings_Epic).Data.ArrayNum = 0;
  (this->EncodeSettings_Epic).Data.ArrayMax = 0;
  return this;
}

// ~UMoviePipelineCommandLineEncoderSettings @ 14dd0e430

void __thiscall
UMoviePipelineCommandLineEncoderSettings::~UMoviePipelineCommandLineEncoderSettings
          (UMoviePipelineCommandLineEncoderSettings *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineCommandLineEncoderSettings__6B_;
  pFVar1 = (this->EncodeSettings_Epic).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EncodeSettings_High).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EncodeSettings_Med).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EncodeSettings_Low).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputStringFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VideoInputStringFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CommandLineFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputFileExtension).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioCodec).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VideoCodec).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->CodecHelpText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->ExecutablePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14dd23fb0

FName __thiscall
UMoviePipelineCommandLineEncoderSettings::GetCategoryName
          (UMoviePipelineCommandLineEncoderSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Plugins");
  return in_RDX;
}

// GetContainerName @ 14dd24570

FName __thiscall
UMoviePipelineCommandLineEncoderSettings::GetContainerName
          (UMoviePipelineCommandLineEncoderSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Project");
  return in_RDX;
}

// GetPrivateStaticClass @ 14dd2dfb0

UClass * __cdecl UMoviePipelineCommandLineEncoderSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCommandLineEncoderSettings",
               &Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCommandLineEncoderSettings,0xf8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineCommandLineEncoderSettings>,
               InternalVTableHelperCtorCaller<UMoviePipelineCommandLineEncoderSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.InnerSingleton;
}

// StaticRegisterNativesUMoviePipelineCommandLineEncoderSettings @ 14dd455d0

void __cdecl
UMoviePipelineCommandLineEncoderSettings::
StaticRegisterNativesUMoviePipelineCommandLineEncoderSettings(void)

{
  return;
}

