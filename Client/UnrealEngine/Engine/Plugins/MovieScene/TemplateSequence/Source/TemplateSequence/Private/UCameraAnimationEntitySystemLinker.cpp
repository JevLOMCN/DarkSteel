// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 6

// StaticClass @ 14ac63bf0

UClass * __cdecl UCameraAnimationEntitySystemLinker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UMovieSceneEntitySystemLinker::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationEntitySystemLinker",
               &Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton,
               StaticRegisterNativesUCameraAnimationEntitySystemLinker,0x798,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationEntitySystemLinker>,
               InternalVTableHelperCtorCaller<UCameraAnimationEntitySystemLinker>,local_res8,
               UMovieSceneEntitySystemLinker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton;
}

// UCameraAnimationEntitySystemLinker @ 14ac6fe00

/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationEntitySystemLinker * __thiscall
UCameraAnimationEntitySystemLinker::UCameraAnimationEntitySystemLinker
          (UCameraAnimationEntitySystemLinker *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker
            ((UMovieSceneEntitySystemLinker *)this,param_1);
  *(undefined ***)this = &___7UCameraAnimationEntitySystemLinker__6B_;
  return this;
}

// UCameraAnimationEntitySystemLinker @ 14ac6fe30

/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationEntitySystemLinker * __thiscall
UCameraAnimationEntitySystemLinker::UCameraAnimationEntitySystemLinker
          (UCameraAnimationEntitySystemLinker *this,FObjectInitializer *param_1)

{
  EEntitySystemCategory EVar1;
  UClass *local_res8;
  
  UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker
            ((UMovieSceneEntitySystemLinker *)this,param_1);
  *(undefined4 *)&this->field_0x748 = 2;
  *(undefined ***)this = &___7UCameraAnimationEntitySystemLinker__6B_;
  EVar1 = UCameraAnimationSequenceSubsystem::GetCameraAnimationSystemCategory();
  UE::MovieScene::FSystemFilter::SetAllowedCategories
            ((FSystemFilter *)&this->field_0x750,
             EVar1 | (PropertySystems|BlenderSystems|ChannelEvaluators|Core));
  local_res8 = Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  UE::MovieScene::FSystemFilter::AllowSystem
            ((FSystemFilter *)&this->field_0x750,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  return this;
}

// ~UCameraAnimationEntitySystemLinker @ 14ac71500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationEntitySystemLinker::~UCameraAnimationEntitySystemLinker
          (UCameraAnimationEntitySystemLinker *this)

{
  *(undefined ***)this = &___7UCameraAnimationEntitySystemLinker__6B_;
  UMovieSceneEntitySystemLinker::~UMovieSceneEntitySystemLinker
            ((UMovieSceneEntitySystemLinker *)this);
  return;
}

// GetPrivateStaticClass @ 14ac77850

UClass * __cdecl UCameraAnimationEntitySystemLinker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UMovieSceneEntitySystemLinker::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationEntitySystemLinker",
               &Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton,
               StaticRegisterNativesUCameraAnimationEntitySystemLinker,0x798,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationEntitySystemLinker>,
               InternalVTableHelperCtorCaller<UCameraAnimationEntitySystemLinker>,local_res8,
               UMovieSceneEntitySystemLinker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton;
}

// StaticRegisterNativesUCameraAnimationEntitySystemLinker @ 14ac80490

void __cdecl
UCameraAnimationEntitySystemLinker::StaticRegisterNativesUCameraAnimationEntitySystemLinker(void)

{
  return;
}

