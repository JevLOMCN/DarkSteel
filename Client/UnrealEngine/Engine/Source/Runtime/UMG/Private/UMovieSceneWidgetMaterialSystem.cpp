// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 11

// StaticClass @ 1468dee30

UClass * __cdecl UMovieSceneWidgetMaterialSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneWidgetMaterialSystem",
               &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneWidgetMaterialSystem,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneWidgetMaterialSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton;
}

// UMovieSceneWidgetMaterialSystem @ 146901da0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneWidgetMaterialSystem * __thiscall
UMovieSceneWidgetMaterialSystem::UMovieSceneWidgetMaterialSystem
          (UMovieSceneWidgetMaterialSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
            (&this->SystemImpl);
  return this;
}

// UMovieSceneWidgetMaterialSystem @ 146901de0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneWidgetMaterialSystem * __thiscall
UMovieSceneWidgetMaterialSystem::UMovieSceneWidgetMaterialSystem
          (UMovieSceneWidgetMaterialSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneUMGComponentTypes *pFVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  UObject *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
            (&this->SystemImpl);
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
  pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FWidgetMaterialHandle> *)&this->_padding_ = pFVar3->WidgetMaterialHandle;
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
    FVar1.Value = *(ushort *)&pFVar4->BoundMaterial;
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
  }
  return this;
}

// ~UMovieSceneWidgetMaterialSystem @ 146904bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneWidgetMaterialSystem::~UMovieSceneWidgetMaterialSystem
          (UMovieSceneWidgetMaterialSystem *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::
  ~TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
            (&this->SystemImpl);
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146922830

UClass * __cdecl UMovieSceneWidgetMaterialSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneWidgetMaterialSystem",
               &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneWidgetMaterialSystem,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneWidgetMaterialSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.InnerSingleton;
}

// OnLink @ 14692ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneWidgetMaterialSystem::OnLink(UMovieSceneWidgetMaterialSystem *this)

{
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  *this_00;
  TSharedPtr<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>,1>
  *pTVar1;
  FSharedReferencer<1> FVar2;
  FBuiltInComponentTypes *pFVar3;
  FMovieSceneUMGComponentTypes *pFVar4;
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  *local_38;
  FSharedReferencer<1> FStack_30;
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  *local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1> local_18;
  
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar4 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage>)
             UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage::StorageID);
  FVar2.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  local_38 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
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
      (TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
       *)&local_38) {
    (this_00->MaterialSwitcherStorage).Object =
         (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
          *)local_18.Object;
    local_38 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SystemImpl).MaterialSwitcherStorage.SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),
             (TSharedPtr<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1> *)&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage>)
             UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage::StorageID);
  local_28 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
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
  if (pTVar1 != (TSharedPtr<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>,1>
                 *)&local_28) {
    pTVar1->Object =
         (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
          *)local_18.Object;
    local_28 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SystemImpl).MaterialParameterStorage.SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::OnLink(this_00,(UMovieSceneEntitySystemLinker *)this->_padding_,pFVar3->BoundObject,
           pFVar4->WidgetMaterialHandle);
  return;
}

// OnRun @ 14692fc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneWidgetMaterialSystem::OnRun
          (UMovieSceneWidgetMaterialSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneUMGComponentTypes *pFVar2;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::OnRun(&this->SystemImpl,(UMovieSceneEntitySystemLinker *)this->_padding_,pFVar1->BoundObject,
          pFVar2->WidgetMaterialHandle,param_1,param_2);
  return;
}

// OnUnlink @ 146930c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneWidgetMaterialSystem::OnUnlink(UMovieSceneWidgetMaterialSystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *this_00;
  code *pcVar2;
  bool bVar3;
  UMovieSceneEntityGroupingSystem *this_01;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  this_01 = (UMovieSceneEntityGroupingSystem *)
            UMovieSceneEntitySystemLinker::FindSystem
                      (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (this_01 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6637814119938391682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieSceneMaterialSystem.h"
                       ,0x17e,"GroupingSystem");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)this_01);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
    UMovieSceneEntityGroupingSystem::RemoveGrouping
              (this_01,(FEntityGroupingPolicyKey)(this->SystemImpl).GroupingKey.Index);
  }
  (this->SystemImpl).GroupingKey.Index = -1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->Events,
             &this->SystemImpl);
  return;
}

// SavePreAnimatedState @ 146940230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneWidgetMaterialSystem::SavePreAnimatedState
          (UMovieSceneWidgetMaterialSystem *this,FPreAnimationParameters *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneUMGComponentTypes *pFVar2;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
  UE::MovieScene::
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::SavePreAnimatedState
            ((TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
              *)&this->_padding_,
             *(UMovieSceneEntitySystemLinker **)
              &this[-1].SystemImpl.ReinitializeBoundMaterials.Filter.ComplexMasks.ArrayNum,
             pFVar1->BoundObject,pFVar2->WidgetMaterialHandle,param_1);
  return;
}

// StaticRegisterNativesUMovieSceneWidgetMaterialSystem @ 1469459e0

void __cdecl
UMovieSceneWidgetMaterialSystem::StaticRegisterNativesUMovieSceneWidgetMaterialSystem(void)

{
  return;
}

// _getUObject @ 146950660

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UMovieSceneWidgetMaterialSystem::_getUObject(UMovieSceneWidgetMaterialSystem *this)

{
  return (UObject *)
         ((longlong)
          this[-1].SystemImpl.ReinitializeBoundMaterials.Filter.NoneMask.Bits.AllocatorInstance.
          InlineData + 0x18);
}

