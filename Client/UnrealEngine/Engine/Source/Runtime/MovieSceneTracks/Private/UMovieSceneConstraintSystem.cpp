// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 146723e50

UClass * __cdecl UMovieSceneConstraintSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneConstraintSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneConstraintSystem",
               &Z_Registration_Info_UClass_UMovieSceneConstraintSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneConstraintSystem,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneConstraintSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneConstraintSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneConstraintSystem.InnerSingleton;
}

// UMovieSceneConstraintSystem @ 146763a60

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneConstraintSystem * __thiscall
UMovieSceneConstraintSystem::UMovieSceneConstraintSystem
          (UMovieSceneConstraintSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneConstraintSystem__6B_;
  (this->DynamicOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicOffsets).ArrayNum = 0;
  (this->DynamicOffsets).ArrayMax = 0;
  return this;
}

// UMovieSceneConstraintSystem @ 146763aa0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneConstraintSystem * __thiscall
UMovieSceneConstraintSystem::UMovieSceneConstraintSystem
          (UMovieSceneConstraintSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  UClass *local_res8;
  UObject *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneConstraintSystem__6B_;
  (this->DynamicOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicOffsets).ArrayNum = 0;
  (this->DynamicOffsets).ArrayMax = 0;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FConstraintComponentData> *)&this->_padding_ = pFVar2->ConstraintChannel;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0x2c;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = UMovieSceneComponentTransformSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->EvalTime;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneConstraintSystem @ 14676a2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneConstraintSystem::~UMovieSceneConstraintSystem(UMovieSceneConstraintSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneConstraintSystem__6B_;
  pFVar1 = (this->DynamicOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146798560

UClass * __cdecl UMovieSceneConstraintSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneConstraintSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneConstraintSystem",
               &Z_Registration_Info_UClass_UMovieSceneConstraintSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneConstraintSystem,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneConstraintSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneConstraintSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneConstraintSystem.InnerSingleton;
}

// OnRun @ 1467ae740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieSceneConstraintSystem::OnRun
          (UMovieSceneConstraintSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  int iVar2;
  ESystemPhase EVar3;
  Type TVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  FBuiltInComponentTypes *pFVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar13;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  FInstanceRegistry *local_c8;
  FInstanceRegistry *local_c0;
  undefined1 local_b8 [8];
  TSharedPtr<UE::MovieScene::FPreAnimatedConstraintStorage,1> local_b0;
  TComponentTypeID<UObject_*> local_a0;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_9e;
  TComponentTypeID<FConstraintComponentData> local_9c;
  TComponentTypeID<FFrameTime> local_9a;
  undefined8 local_98;
  TStatIdData *pTStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  uchar local_70 [8];
  TStatIdData *pTStack_68;
  byte local_60;
  undefined7 uStack_5f;
  undefined4 uStack_58;
  uint uStack_54;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_50;
  
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_50);
  EVar3 = (local_50.Object)->CurrentPhase;
  if (EVar3 == Instantiation) {
    UE::MovieScene::FPreAnimatedStateExtension::
    GetOrCreateStorage<UE::MovieScene::FPreAnimatedConstraintStorage>
              ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_b0,
               (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedConstraintStorage>)
               UE::MovieScene::FPreAnimatedConstraintStorage::StorageID);
    pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
    if ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits> *)local_b0.Object ==
        (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits>::
    BeginTrackingAndCachePreAnimatedValues<UObject_*,FConstraintComponentData>
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedConstraintTraits> *)
               local_b0.Object,(UMovieSceneEntitySystemLinker *)this->_padding_,pFVar10->BoundObject
               ,pFVar9->ConstraintChannel);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
  }
  else if (EVar3 == Evaluation) {
    pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
    uVar6 = uStack_54;
    uStack_58 = 0x6ff;
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    pTStack_68 = &TStatId::TStatId_NAME_None;
    local_60 = local_60 & 0xe0;
    local_9e = pFVar10->InstanceHandle;
    uStack_54 = uStack_54 & 0xffffff00;
    local_a0 = pFVar10->BoundObject;
    local_9c = pFVar9->ConstraintChannel;
    local_9a = pFVar10->EvalTime;
    TVar4 = (((UMovieSceneEntitySystemLinker *)this->_padding_)->EntityManager).GatherThread;
    uStack_80 = CONCAT44(uVar6,TVar4) & 0xffffff00ffffffff;
    local_98 = 0;
    pTStack_90 = &TStatId::TStatId_NAME_None;
    if ((TVar4 == GameThread) || (TVar4 == GameThread_Local)) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    local_88._1_7_ = uStack_5f;
    local_88._0_1_ = bVar8 | local_60;
    local_c8 = UMovieSceneEntitySystemLinker::GetInstanceRegistry
                         ((UMovieSceneEntitySystemLinker *)this->_padding_);
    local_c0 = (FInstanceRegistry *)(**(code **)(this->_padding_ + 0x180))(this);
    UE::MovieScene::
    TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*>
              ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                *)&local_a0,(FEntityManager *)local_b8,
               (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
               (FSystemSubsequentTasks *)param_1,(UWorld **)param_2,&local_c0,
               (UMovieSceneConstraintSystem **)&local_c8);
    if (local_b8 != (undefined1  [8])0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_b8)(local_b8,1);
      }
    }
  }
  else if (EVar3 == Finalization) {
    this_00 = (FWeakObjectPtr *)(this->DynamicOffsets).AllocatorInstance.Data;
    iVar2 = (this->DynamicOffsets).ArrayNum;
    this_01 = this_00 + 1;
    pFVar13 = this_00 + (longlong)iVar2 * 2;
    while( true ) {
      if ((this->DynamicOffsets).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UMovieSceneConstraintSystem::FUpdateHandleForConstraint,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar13) break;
      bVar7 = FWeakObjectPtr::IsValid(this_00);
      if (bVar7) {
        bVar7 = FWeakObjectPtr::IsValid(this_01);
        if (bVar7) {
          pUVar11 = FWeakObjectPtr::Get(this_00);
          pcVar5 = *(code **)(*(longlong *)pUVar11 + 800);
          pUVar12 = FWeakObjectPtr::Get(this_01);
          (*pcVar5)(pUVar11,pUVar12);
        }
      }
      this_00 = this_00 + 2;
      this_01 = this_01 + 2;
    }
    (this->DynamicOffsets).ArrayNum = 0;
    if ((this->DynamicOffsets).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->DynamicOffsets).AllocatorInstance,0,
                 &(this->DynamicOffsets).ArrayMax);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  return;
}

// OnSchedulePersistentTasks @ 1467b0230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieSceneConstraintSystem::OnSchedulePersistentTasks
          (UMovieSceneConstraintSystem *this,IEntitySystemScheduler *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  FBuiltInComponentTypes *pFVar7;
  UMovieSceneConstraintSystem *local_res20;
  TComponentTypeID<UObject_*> local_98;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_96;
  TComponentTypeID<FConstraintComponentData> local_94;
  TComponentTypeID<FFrameTime> local_92;
  undefined8 local_90;
  TStatIdData *pTStack_88;
  byte local_80;
  undefined7 uStack_7f;
  ulonglong uStack_78;
  FInstanceRegistry *local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_48;
  TStatIdData *pTStack_40;
  byte local_38;
  undefined7 uStack_37;
  undefined4 uStack_30;
  uint uStack_2c;
  UWorld *local_28;
  undefined1 local_20;
  
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar4 = uStack_2c;
  local_48 = 0;
  pTStack_40 = &TStatId::TStatId_NAME_None;
  local_38 = local_38 & 0xe0;
  local_94 = pFVar6->ConstraintChannel;
  local_98 = pFVar7->BoundObject;
  lVar2 = this->_padding_;
  local_96 = pFVar7->InstanceHandle;
  local_92 = pFVar7->EvalTime;
  uStack_30 = 0x6ff;
  uStack_2c = uStack_2c & 0xffffff00;
  uStack_7f = uStack_37;
  local_90 = 0;
  pTStack_88 = &TStatId::TStatId_NAME_None;
  iVar1 = *(int *)(lVar2 + 0x2c8);
  uStack_78 = CONCAT44(uVar4,iVar1) & 0xffffff00ffffffff;
  if ((iVar1 == 1) || (iVar1 == 0x101)) {
    local_80 = 1;
  }
  else {
    local_80 = 0;
  }
  local_80 = local_38 | local_80;
  if (*(longlong *)(lVar2 + 0x580) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res20 = *(UMovieSceneConstraintSystem **)(lVar2 + 0x580);
  local_70 = (FInstanceRegistry *)(**(code **)(this->_padding_ + 0x180))(this);
  local_58 = CONCAT71(uStack_7f,local_80) | 2;
  local_68._8_8_ = pTStack_88;
  local_68._0_8_ = L"struct UE::MovieScene::FEvaluateConstraintChannels";
  local_28 = (UWorld *)
             UE::MovieScene::
             TScheduledEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
             ::ScheduledRun_PerEntity;
  local_20 = 3;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
  ::
  ScheduleImpl<UE::MovieScene::FEvaluateConstraintChannels,UWorld_*,UE::MovieScene::FInstanceRegistry_*,UMovieSceneConstraintSystem_*>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
              *)&local_98,(FEntityManager *)&stack0x00000008,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_68,&local_28,&local_70,&local_res20);
  return;
}

// StaticRegisterNativesUMovieSceneConstraintSystem @ 1467c2860

void __cdecl UMovieSceneConstraintSystem::StaticRegisterNativesUMovieSceneConstraintSystem(void)

{
  return;
}

