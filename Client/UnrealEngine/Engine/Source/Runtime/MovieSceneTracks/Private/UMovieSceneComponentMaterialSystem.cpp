// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 146726980

UClass * __cdecl UMovieSceneComponentMaterialSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentMaterialSystem,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentMaterialSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.InnerSingleton;
}

// UMovieSceneComponentMaterialSystem @ 1467633f0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneComponentMaterialSystem * __thiscall
UMovieSceneComponentMaterialSystem::UMovieSceneComponentMaterialSystem
          (UMovieSceneComponentMaterialSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  ::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
            (&this->SystemImpl);
  return this;
}

// UMovieSceneComponentMaterialSystem @ 146763430

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneComponentMaterialSystem * __thiscall
UMovieSceneComponentMaterialSystem::UMovieSceneComponentMaterialSystem
          (UMovieSceneComponentMaterialSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  ::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
            (&this->SystemImpl);
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FComponentMaterialInfo> *)&this->_padding_ = pFVar3->ComponentMaterialInfo;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->ObjectResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->BoundMaterial;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneComponentMaterialSystem @ 14676a200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMaterialSystem::~UMovieSceneComponentMaterialSystem
          (UMovieSceneComponentMaterialSystem *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  ::
  ~TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
            (&this->SystemImpl);
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146798260

UClass * __cdecl UMovieSceneComponentMaterialSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentMaterialSystem,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentMaterialSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.InnerSingleton;
}

// OnLink @ 1467a9d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneComponentMaterialSystem::OnLink(UMovieSceneComponentMaterialSystem *this)

{
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  *this_00;
  TSharedPtr<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>,1>
  *pTVar1;
  TComponentTypeID<FComponentMaterialInfo> TVar2;
  FSharedReferencer<1> FVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  FBuiltInComponentTypes *pFVar5;
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
  *local_38;
  FSharedReferencer<1> FStack_30;
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
  *local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage,1> local_18;
  
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage>)
             UE::MovieScene::FPreAnimatedComponentMaterialSwitcherStorage::StorageID);
  FVar3.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  local_38 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
              *)local_18.Object;
  FStack_30.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->SystemImpl;
  if (this_00 !=
      (TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
       *)&local_38) {
    (this_00->MaterialSwitcherStorage).Object =
         (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
          *)local_18.Object;
    local_38 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SystemImpl).MaterialSwitcherStorage.SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),
             (TSharedPtr<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage,1> *)
             &local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage>)
             UE::MovieScene::FPreAnimatedComponentMaterialParameterStorage::StorageID);
  local_28 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
              *)local_18.Object;
  FStack_20.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &(this->SystemImpl).MaterialParameterStorage;
  if (pTVar1 != (TSharedPtr<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>,1>
                 *)&local_28) {
    pTVar1->Object =
         (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
          *)local_18.Object;
    local_28 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SystemImpl).MaterialParameterStorage.SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  TVar2 = pFVar4->ComponentMaterialInfo;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  ::OnLink(this_00,(UMovieSceneEntitySystemLinker *)this->_padding_,pFVar5->BoundObject,TVar2);
  return;
}

// OnRun @ 1467ae660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMaterialSystem::OnRun
          (UMovieSceneComponentMaterialSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TComponentTypeID<FComponentMaterialInfo> TVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  TVar1 = pFVar2->ComponentMaterialInfo;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  ::OnRun(&this->SystemImpl,(UMovieSceneEntitySystemLinker *)this->_padding_,pFVar3->BoundObject,
          TVar1,param_1,param_2);
  return;
}

// OnUnlink @ 1467b0d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMaterialSystem::OnUnlink(UMovieSceneComponentMaterialSystem *this)

{
  UMovieSceneEntitySystemLinker *this_00;
  code *pcVar1;
  bool bVar2;
  UMovieSceneEntityGroupingSystem *this_01;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  this_01 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEntityGroupingSystem>(this_00);
  if (this_01 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6637814119938391682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieSceneMaterialSystem.h"
                       ,0x17e,"GroupingSystem");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UMovieSceneEntityGroupingSystem::RemoveGrouping
              (this_01,(FEntityGroupingPolicyKey)(this->SystemImpl).GroupingKey.Index);
  }
  (this->SystemImpl).GroupingKey.Index = -1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->Events,
             &this->SystemImpl);
  return;
}

// SavePreAnimatedState @ 1467c08d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMaterialSystem::SavePreAnimatedState
          (UMovieSceneComponentMaterialSystem *this,FPreAnimationParameters *param_1)

{
  TComponentTypeID<FComponentMaterialInfo> TVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  TVar1 = pFVar2->ComponentMaterialInfo;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  ::SavePreAnimatedState
            ((TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
              *)&this->_padding_,
             *(UMovieSceneEntitySystemLinker **)
              &this[-1].SystemImpl.ReinitializeBoundMaterials.Filter.ComplexMasks.ArrayNum,
             pFVar3->BoundObject,TVar1,param_1);
  return;
}

// StaticRegisterNativesUMovieSceneComponentMaterialSystem @ 1467c2820

void __cdecl
UMovieSceneComponentMaterialSystem::StaticRegisterNativesUMovieSceneComponentMaterialSystem(void)

{
  return;
}

// _getUObject @ 1467ca740

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UMovieSceneComponentMaterialSystem::_getUObject(UMovieSceneComponentMaterialSystem *this)

{
  return (UObject *)
         ((longlong)
          this[-1].SystemImpl.ReinitializeBoundMaterials.Filter.NoneMask.Bits.AllocatorInstance.
          InlineData + 0x18);
}

