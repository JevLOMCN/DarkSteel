// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dc69250

UClass * __cdecl UMoviePipelineViewFamilySetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineViewFamilySetting",
               &Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineViewFamilySetting,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineViewFamilySetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineViewFamilySetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton;
}

// UMoviePipelineViewFamilySetting @ 14dc73b40

UMoviePipelineViewFamilySetting * __thiscall
UMoviePipelineViewFamilySetting::UMoviePipelineViewFamilySetting
          (UMoviePipelineViewFamilySetting *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  *(undefined ***)this = &___7UMoviePipelineViewFamilySetting__6B_;
  return this;
}

// UMoviePipelineViewFamilySetting @ 14dc73b70

UMoviePipelineViewFamilySetting * __thiscall
UMoviePipelineViewFamilySetting::UMoviePipelineViewFamilySetting
          (UMoviePipelineViewFamilySetting *this)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this);
  *(undefined ***)this = &___7UMoviePipelineViewFamilySetting__6B_;
  return this;
}

// ~UMoviePipelineViewFamilySetting @ 14dc74ad0

void __thiscall
UMoviePipelineViewFamilySetting::~UMoviePipelineViewFamilySetting
          (UMoviePipelineViewFamilySetting *this)

{
  *(undefined ***)this = &___7UMoviePipelineViewFamilySetting__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// GetPrivateStaticClass @ 14dc82950

UClass * __cdecl UMoviePipelineViewFamilySetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineViewFamilySetting",
               &Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineViewFamilySetting,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineViewFamilySetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineViewFamilySetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton;
}

// IsValidOnPrimary @ 14dc844f0

bool __thiscall
UMoviePipelineViewFamilySetting::IsValidOnPrimary(UMoviePipelineViewFamilySetting *this)

{
  return true;
}

// IsValidOnShots @ 14dc84530

bool __thiscall
UMoviePipelineViewFamilySetting::IsValidOnShots(UMoviePipelineViewFamilySetting *this)

{
  return true;
}

// SetupViewFamily @ 14dc896c0

void __thiscall
UMoviePipelineViewFamilySetting::SetupViewFamily
          (UMoviePipelineViewFamilySetting *this,FSceneViewFamily *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineViewFamilySetting.h"
             ,0x13,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUMoviePipelineViewFamilySetting @ 14dc89d70

void __cdecl
UMoviePipelineViewFamilySetting::StaticRegisterNativesUMoviePipelineViewFamilySetting(void)

{
  return;
}

