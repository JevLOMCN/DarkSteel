// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 1467ce2f0

UClass * __cdecl UMovieScenePiecewiseBoolBlenderSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseBoolBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseBoolBlenderSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseBoolBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseBoolBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.InnerSingleton;
}

// UMovieScenePiecewiseBoolBlenderSystem @ 14680a350

UMovieScenePiecewiseBoolBlenderSystem * __thiscall
UMovieScenePiecewiseBoolBlenderSystem::UMovieScenePiecewiseBoolBlenderSystem
          (UMovieScenePiecewiseBoolBlenderSystem *this,FVTableHelper *param_1)

{
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseBoolBlenderSystem__6B_;
  (this->Impl).BlenderSystem = (UMovieSceneBlenderSystem *)0x0;
  (this->Impl).ResultComponentID = (TComponentTypeID<bool>)0xffff;
  (this->Impl).ChannelRelevancyCache.LastSystemVersion = 0;
  (this->Impl).BlendChannelResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Impl).BlendChannelResults.ArrayNum = 0;
  (this->Impl).BlendChannelResults.ArrayMax = 0;
  return this;
}

// UMovieScenePiecewiseBoolBlenderSystem @ 14680a3a0

UMovieScenePiecewiseBoolBlenderSystem * __thiscall
UMovieScenePiecewiseBoolBlenderSystem::UMovieScenePiecewiseBoolBlenderSystem
          (UMovieScenePiecewiseBoolBlenderSystem *this,FObjectInitializer *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseBoolBlenderSystem__6B_;
  (this->Impl).BlenderSystem = (UMovieSceneBlenderSystem *)0x0;
  (this->Impl).ResultComponentID = (TComponentTypeID<bool>)0xffff;
  (this->Impl).ChannelRelevancyCache.LastSystemVersion = 0;
  (this->Impl).BlendChannelResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Impl).BlendChannelResults.ArrayNum = 0;
  (this->Impl).BlendChannelResults.ArrayMax = 0;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  (this->Impl).ResultComponentID = pFVar1->BoolResult;
  (this->Impl).BlenderSystem = (UMovieSceneBlenderSystem *)this;
  return this;
}

// ~UMovieScenePiecewiseBoolBlenderSystem @ 14680f870

void __thiscall
UMovieScenePiecewiseBoolBlenderSystem::~UMovieScenePiecewiseBoolBlenderSystem
          (UMovieScenePiecewiseBoolBlenderSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseBoolBlenderSystem__6B_;
  pFVar1 = (this->Impl).BlendChannelResults.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836360

UClass * __cdecl UMovieScenePiecewiseBoolBlenderSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseBoolBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseBoolBlenderSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseBoolBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseBoolBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.InnerSingleton;
}

// OnRun @ 146847290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseBoolBlenderSystem::OnRun
          (UMovieScenePiecewiseBoolBlenderSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  UE::MovieScene::TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>::
  Run(&this->Impl,(UMovieSceneEntitySystemLinker *)this->_padding_,
      (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,param_1,param_2);
  return;
}

// OnSchedulePersistentTasks @ 14684d050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseBoolBlenderSystem::OnSchedulePersistentTasks
          (UMovieScenePiecewiseBoolBlenderSystem *this,IEntitySystemScheduler *param_1)

{
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  UE::MovieScene::TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>::
  Schedule(&this->Impl,(UMovieSceneEntitySystemLinker *)this->_padding_,
           (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,param_1);
  return;
}

// StaticRegisterNativesUMovieScenePiecewiseBoolBlenderSystem @ 14686cb60

void __cdecl
UMovieScenePiecewiseBoolBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseBoolBlenderSystem
          (void)

{
  return;
}

