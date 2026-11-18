// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc67aa0

UClass * __cdecl AMoviePipelineGameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineGameMode",
               &Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton,
               StaticRegisterNativesAMoviePipelineGameMode,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AMoviePipelineGameMode>,
               InternalVTableHelperCtorCaller<AMoviePipelineGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton;
}

// AMoviePipelineGameMode @ 14dc72250

AMoviePipelineGameMode * __thiscall
AMoviePipelineGameMode::AMoviePipelineGameMode(AMoviePipelineGameMode *this,FVTableHelper *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  *(undefined ***)this = &___7AMoviePipelineGameMode__6B_;
  return this;
}

// AMoviePipelineGameMode @ 14dc72280

AMoviePipelineGameMode * __thiscall
AMoviePipelineGameMode::AMoviePipelineGameMode
          (AMoviePipelineGameMode *this,FObjectInitializer *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  *(undefined ***)this = &___7AMoviePipelineGameMode__6B_;
  return this;
}

// ~AMoviePipelineGameMode @ 14dc74140

void __thiscall AMoviePipelineGameMode::~AMoviePipelineGameMode(AMoviePipelineGameMode *this)

{
  *(undefined ***)this = &___7AMoviePipelineGameMode__6B_;
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// BeginPlay @ 14dc783f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AMoviePipelineGameMode::BeginPlay(AMoviePipelineGameMode *this)

{
  APlayerController *pAVar1;
  
  pAVar1 = UGameplayStatics::GetPlayerController((UObject *)this,0);
  if (pAVar1 != (APlayerController *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0xc18))(pAVar1,1,1,1,1,1);
  }
  return;
}

// GetPrivateStaticClass @ 14dc81780

UClass * __cdecl AMoviePipelineGameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineGameMode",
               &Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton,
               StaticRegisterNativesAMoviePipelineGameMode,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AMoviePipelineGameMode>,
               InternalVTableHelperCtorCaller<AMoviePipelineGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton;
}

// StaticRegisterNativesAMoviePipelineGameMode @ 14dc89ad0

void __cdecl AMoviePipelineGameMode::StaticRegisterNativesAMoviePipelineGameMode(void)

{
  return;
}

