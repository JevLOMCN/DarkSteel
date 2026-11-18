// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 1467cd360

UClass * __cdecl UMovieScenePiecewiseEnumBlenderSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseEnumBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseEnumBlenderSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseEnumBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseEnumBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.InnerSingleton;
}

// UMovieScenePiecewiseEnumBlenderSystem @ 14680a830

UMovieScenePiecewiseEnumBlenderSystem * __thiscall
UMovieScenePiecewiseEnumBlenderSystem::UMovieScenePiecewiseEnumBlenderSystem
          (UMovieScenePiecewiseEnumBlenderSystem *this,FVTableHelper *param_1)

{
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseEnumBlenderSystem__6B_;
  (this->Impl).BlenderSystem = (UMovieSceneBlenderSystem *)0x0;
  (this->Impl).ResultComponentID = (TComponentTypeID<unsigned_char>)0xffff;
  (this->Impl).ChannelRelevancyCache.LastSystemVersion = 0;
  (this->Impl).BlendChannelResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Impl).BlendChannelResults.ArrayNum = 0;
  (this->Impl).BlendChannelResults.ArrayMax = 0;
  return this;
}

// UMovieScenePiecewiseEnumBlenderSystem @ 14680a880

UMovieScenePiecewiseEnumBlenderSystem * __thiscall
UMovieScenePiecewiseEnumBlenderSystem::UMovieScenePiecewiseEnumBlenderSystem
          (UMovieScenePiecewiseEnumBlenderSystem *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseEnumBlenderSystem__6B_;
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

// ~UMovieScenePiecewiseEnumBlenderSystem @ 14680f950

void __thiscall
UMovieScenePiecewiseEnumBlenderSystem::~UMovieScenePiecewiseEnumBlenderSystem
          (UMovieScenePiecewiseEnumBlenderSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieScenePiecewiseEnumBlenderSystem__6B_;
  pFVar1 = (this->Impl).BlendChannelResults.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this);
  return;
}

// GetPrivateStaticClass @ 1468365a0

UClass * __cdecl UMovieScenePiecewiseEnumBlenderSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePiecewiseEnumBlenderSystem",
               &Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePiecewiseEnumBlenderSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePiecewiseEnumBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePiecewiseEnumBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.InnerSingleton;
}

// OnRun @ 146848620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePiecewiseEnumBlenderSystem::OnRun
          (UMovieScenePiecewiseEnumBlenderSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  UMovieSceneBlenderSystem::CompactBlendChannels((UMovieSceneBlenderSystem *)this);
  UE::MovieScene::
  TSimpleBlenderSystemImpl<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>::Run
            (&this->Impl,(UMovieSceneEntitySystemLinker *)this->_padding_,
             (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,param_1,param_2);
  return;
}

// StaticRegisterNativesUMovieScenePiecewiseEnumBlenderSystem @ 14686cb90

void __cdecl
UMovieScenePiecewiseEnumBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseEnumBlenderSystem
          (void)

{
  return;
}

