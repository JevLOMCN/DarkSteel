// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dd5d810

UClass * __cdecl UMoviePipelineShotConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineShotConfig",
               &Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton,
               StaticRegisterNativesUMoviePipelineShotConfig,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineShotConfig>,
               InternalVTableHelperCtorCaller<UMoviePipelineShotConfig>,local_res8,
               UMoviePipelineConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton;
}

// UMoviePipelineShotConfig @ 14dd6b7f0

UMoviePipelineShotConfig * __thiscall
UMoviePipelineShotConfig::UMoviePipelineShotConfig
          (UMoviePipelineShotConfig *this,FVTableHelper *param_1)

{
  UMoviePipelineConfigBase::UMoviePipelineConfigBase((UMoviePipelineConfigBase *)this,param_1);
  *(undefined ***)this = &___7UMoviePipelineShotConfig__6B_;
  return this;
}

// ~UMoviePipelineShotConfig @ 14dd6c520

void __thiscall UMoviePipelineShotConfig::~UMoviePipelineShotConfig(UMoviePipelineShotConfig *this)

{
  *(undefined ***)this = &___7UMoviePipelineShotConfig__6B_;
  UMoviePipelineConfigBase::~UMoviePipelineConfigBase((UMoviePipelineConfigBase *)this);
  return;
}

// CanSettingBeAdded @ 14dd7a790

bool __thiscall
UMoviePipelineShotConfig::CanSettingBeAdded
          (UMoviePipelineShotConfig *this,UMoviePipelineSetting *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == (UMoviePipelineSetting *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSetting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineShotConfig.h"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd7a7cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  return (bool)uVar3;
}

// GetPrivateStaticClass @ 14dd8c470

UClass * __cdecl UMoviePipelineShotConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineShotConfig",
               &Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton,
               StaticRegisterNativesUMoviePipelineShotConfig,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineShotConfig>,
               InternalVTableHelperCtorCaller<UMoviePipelineShotConfig>,local_res8,
               UMoviePipelineConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineShotConfig.InnerSingleton;
}

// StaticRegisterNativesUMoviePipelineShotConfig @ 14dda6890

void __cdecl UMoviePipelineShotConfig::StaticRegisterNativesUMoviePipelineShotConfig(void)

{
  return;
}

