// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1465932b0

UClass * __cdecl UMovieScenePlatformCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePlatformCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePlatformCondition",
               &Z_Registration_Info_UClass_UMovieScenePlatformCondition.InnerSingleton,
               StaticRegisterNativesUMovieScenePlatformCondition,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePlatformCondition>,
               InternalVTableHelperCtorCaller<UMovieScenePlatformCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePlatformCondition.InnerSingleton;
}

// UMovieScenePlatformCondition @ 14661b780

UMovieScenePlatformCondition * __thiscall
UMovieScenePlatformCondition::UMovieScenePlatformCondition
          (UMovieScenePlatformCondition *this,FVTableHelper *param_1)

{
  UMovieSceneCondition::UMovieSceneCondition((UMovieSceneCondition *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePlatformCondition__6B_;
  (this->ValidPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidPlatforms).ArrayNum = 0;
  (this->ValidPlatforms).ArrayMax = 0;
  return this;
}

// UMovieScenePlatformCondition @ 14661b7c0

UMovieScenePlatformCondition * __thiscall
UMovieScenePlatformCondition::UMovieScenePlatformCondition
          (UMovieScenePlatformCondition *this,FObjectInitializer *param_1)

{
  UMovieSceneCondition::UMovieSceneCondition((UMovieSceneCondition *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePlatformCondition__6B_;
  (this->ValidPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidPlatforms).ArrayNum = 0;
  (this->ValidPlatforms).ArrayMax = 0;
  return this;
}

// ~UMovieScenePlatformCondition @ 146621cd0

void __thiscall
UMovieScenePlatformCondition::~UMovieScenePlatformCondition(UMovieScenePlatformCondition *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieScenePlatformCondition__6B_;
  pFVar1 = (this->ValidPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneCondition::~UMovieSceneCondition((UMovieSceneCondition *)this);
  return;
}

// EvaluateConditionInternal @ 146668db0

bool __thiscall
UMovieScenePlatformCondition::EvaluateConditionInternal
          (UMovieScenePlatformCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  FName *pFVar1;
  bool bVar2;
  FName *pFVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  UGameplayStatics::GetPlatformName(&local_18);
  pFVar3 = (FName *)(this->ValidPlatforms).AllocatorInstance.Data;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = pFVar3 + (this->ValidPlatforms).ArrayNum;
  do {
    if (pFVar3 == pFVar1) {
      bVar2 = false;
LAB_146668e1f:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return bVar2;
    }
    bVar2 = ::FName::Equals(*pFVar3,(wchar_t *)FVar4.Data);
    if (bVar2) {
      bVar2 = true;
      goto LAB_146668e1f;
    }
    pFVar3 = pFVar3 + 1;
  } while( true );
}

// GetCheckFrequencyInternal @ 146689860

EMovieSceneConditionCheckFrequency __thiscall
UMovieScenePlatformCondition::GetCheckFrequencyInternal(UMovieScenePlatformCondition *this)

{
  return Once;
}

// GetPrivateStaticClass @ 146696870

UClass * __cdecl UMovieScenePlatformCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePlatformCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePlatformCondition",
               &Z_Registration_Info_UClass_UMovieScenePlatformCondition.InnerSingleton,
               StaticRegisterNativesUMovieScenePlatformCondition,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePlatformCondition>,
               InternalVTableHelperCtorCaller<UMovieScenePlatformCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePlatformCondition.InnerSingleton;
}

// GetScopeInternal @ 1466973c0

EMovieSceneConditionScope __thiscall
UMovieScenePlatformCondition::GetScopeInternal(UMovieScenePlatformCondition *this)

{
  return Global;
}

// StaticRegisterNativesUMovieScenePlatformCondition @ 1466fe7f0

void __cdecl UMovieScenePlatformCondition::StaticRegisterNativesUMovieScenePlatformCondition(void)

{
  return;
}

