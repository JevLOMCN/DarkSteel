// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 1467cea70

UClass * __cdecl UMovieScenePiecewiseByteBlenderSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseByteBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseByteBlenderSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseByteBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseByteBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.InnerSingleton;
}

// UMovieScenePiecewiseByteBlenderSystem @ 14680a400

UMovieScenePiecewiseByteBlenderSystem * __thiscall
UMovieScenePiecewiseByteBlenderSystem::UMovieScenePiecewiseByteBlenderSystem
          (UMovieScenePiecewiseByteBlenderSystem *this,FVTableHelper *param_1)

{
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseByteBlenderSystem__6B_;
  (this->Impl).BlenderSystem = (UMovieSceneBlenderSystem *)0x0;
  (this->Impl).ResultComponentID = (TComponentTypeID<unsigned_char>)0xffff;
  (this->Impl).ChannelRelevancyCache.LastSystemVersion = 0;
  (this->Impl).BlendChannelResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Impl).BlendChannelResults.ArrayNum = 0;
  (this->Impl).BlendChannelResults.ArrayMax = 0;
  return this;
}

// UMovieScenePiecewiseByteBlenderSystem @ 14680a450

UMovieScenePiecewiseByteBlenderSystem * __thiscall
UMovieScenePiecewiseByteBlenderSystem::UMovieScenePiecewiseByteBlenderSystem
          (UMovieScenePiecewiseByteBlenderSystem *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseByteBlenderSystem__6B_;
  (this->Impl).BlenderSystem = (UMovieSceneBlenderSystem *)0x0;
  (this->Impl).ResultComponentID = (TComponentTypeID<unsigned_char>)0xffff;
  (this->Impl).ChannelRelevancyCache.LastSystemVersion = 0;
  (this->Impl).BlendChannelResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Impl).BlendChannelResults.ArrayNum = 0;
  (this->Impl).BlendChannelResults.ArrayMax = 0;
  pUVar1 = Z_Construct_UClass_UByteChannelEvaluatorSystem_NoRegister();
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  (this->Impl).ResultComponentID = pFVar2->ByteResult;
  (this->Impl).BlenderSystem = (UMovieSceneBlenderSystem *)this;
  if ((pUVar1 != (UClass *)0x0) && ((this->_padding_ & 0x10) != 0)) {
    local_res8 = (UObject *)((this->Impl).BlenderSystem)->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieScenePiecewiseByteBlenderSystem @ 14680f8b0

void __thiscall
UMovieScenePiecewiseByteBlenderSystem::~UMovieScenePiecewiseByteBlenderSystem
          (UMovieScenePiecewiseByteBlenderSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseByteBlenderSystem__6B_;
  pFVar1 = (this->Impl).BlendChannelResults.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836420

UClass * __cdecl UMovieScenePiecewiseByteBlenderSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseByteBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseByteBlenderSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseByteBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseByteBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.InnerSingleton;
}

// OnRun @ 1468472e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseByteBlenderSystem::OnRun
          (UMovieScenePiecewiseByteBlenderSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  UE::MovieScene::
  TSimpleBlenderSystemImpl<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>::
  Run(&this->Impl,(UMovieSceneEntitySystemLinker *)this->_padding_,
      (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,param_1,param_2);
  return;
}

// StaticRegisterNativesUMovieScenePiecewiseByteBlenderSystem @ 14686cb70

void __cdecl
UMovieScenePiecewiseByteBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseByteBlenderSystem
          (void)

{
  return;
}

