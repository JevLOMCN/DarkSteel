// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467cdbe0

UClass * __cdecl UMovieSceneFadeSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeSystem",
               &Z_Registration_Info_UClass_UMovieSceneFadeSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneFadeSystem,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFadeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeSystem.InnerSingleton;
}

// UMovieSceneFadeSystem @ 146809270

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneFadeSystem * __thiscall
UMovieSceneFadeSystem::UMovieSceneFadeSystem(UMovieSceneFadeSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneFadeSystem__6B_;
  (this->PreAnimatedStorage).Object = (FPreAnimatedFadeStateStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneFadeSystem @ 1468092b0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneFadeSystem * __thiscall
UMovieSceneFadeSystem::UMovieSceneFadeSystem
          (UMovieSceneFadeSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneFadeSystem__6B_;
  (this->PreAnimatedStorage).Object = (FPreAnimatedFadeStateStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<UE::MovieScene::FFadeComponentData> *)&this->_padding_ = pFVar2->Fade;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)pFVar3->DoubleResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneFadeSystem @ 14680f640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneFadeSystem::~UMovieSceneFadeSystem(UMovieSceneFadeSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneFadeSystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedStorage).SharedReferenceCount.ReferenceController);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146835be0

UClass * __cdecl UMovieSceneFadeSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeSystem",
               &Z_Registration_Info_UClass_UMovieSceneFadeSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneFadeSystem,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFadeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeSystem.InnerSingleton;
}

// OnLink @ 146842a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneFadeSystem::OnLink(UMovieSceneFadeSystem *this)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> local_18;
  
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedFadeStateStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedFadeStateStorage>)
             UE::MovieScene::FPreAnimatedFadeStateStorage::StorageID);
  if (&this->PreAnimatedStorage != &local_18) {
    (this->PreAnimatedStorage).Object = local_18.Object;
    local_18.Object = (FPreAnimatedFadeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedStorage).SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 146844fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneFadeSystem::OnRun
          (UMovieSceneFadeSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FPreAnimatedFadeStateStorage *local_res8;
  undefined8 *local_res20;
  byte local_50;
  undefined7 uStack_4f;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  TComponentTypeID<UE::MovieScene::FFadeComponentData> local_3c;
  TComponentTypeID<double> local_3a;
  undefined8 local_38;
  TStatIdData *pTStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar8 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_40._2_2_ = pFVar7->RootInstanceHandle;
  local_3c = pFVar8->Fade;
  local_3a = pFVar7->DoubleResult[0];
  lVar3 = this->_padding_;
  iVar2 = *(int *)(lVar3 + 0x2c8);
  uStack_20 = CONCAT44(uStack_44,iVar2) & 0xffffff00ffffffff;
  local_38 = 0;
  pTStack_30 = &TStatId::TStatId_NAME_None;
  if ((iVar2 == 1) || (iVar2 == 0x101)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  local_28._1_7_ = uStack_4f;
  local_28._0_1_ = local_50 & 0xe0 | bVar5;
  if (*(longlong *)(lVar3 + 0x580) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_res8 = *(FPreAnimatedFadeStateStorage **)(lVar3 + 0x580);
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
  ::
  Dispatch_PerAllocation<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&>
            ((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
              *)local_40,(FEntityManager *)&local_res20,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (FInstanceRegistry **)param_2,
             (TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> *)&local_res8);
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res20)(local_res20,1);
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 14684ca60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneFadeSystem::OnSchedulePersistentTasks
          (UMovieSceneFadeSystem *this,IEntitySystemScheduler *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1> local_res18;
  undefined1 local_98 [4];
  TComponentTypeID<UE::MovieScene::FFadeComponentData> local_94;
  TComponentTypeID<double> local_92;
  undefined8 local_90;
  TStatIdData *pTStack_88;
  byte local_80;
  undefined7 uStack_7f;
  ulonglong uStack_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined8 local_50;
  TStatIdData *pTStack_48;
  byte local_40;
  undefined7 uStack_3f;
  undefined4 uStack_38;
  uint uStack_34;
  FInstanceRegistry *local_30;
  undefined1 local_28;
  
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  uVar4 = uStack_34;
  local_40 = local_40 & 0xe0;
  pTStack_48 = &TStatId::TStatId_NAME_None;
  local_98._2_2_ = pFVar6->RootInstanceHandle;
  local_94 = pFVar7->Fade;
  local_92 = pFVar6->DoubleResult[0];
  lVar2 = this->_padding_;
  local_50 = 0;
  uStack_38 = 0x6ff;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_7f = uStack_3f;
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
  local_80 = local_80 | local_40;
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
  local_res18.Object = *(FPreAnimatedFadeStateStorage **)(lVar2 + 0x580);
  local_60 = CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffd;
  local_70._8_8_ = pTStack_88;
  local_70._0_8_ = L"struct UE::MovieScene::FEvaluateFade";
  local_30 = (FInstanceRegistry *)
             UE::MovieScene::
             TScheduledEntityTask<UE::MovieScene::FEvaluateFade,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
             ::ScheduledRun_PerAllocation;
  local_28 = 3;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FEvaluateFade,UE::MovieScene::FInstanceRegistry_*,TSharedPtr<UE::MovieScene::FPreAnimatedFadeStateStorage,1>_&>
            ((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TReadAccess<double>_>
              *)local_98,(FEntityManager *)&stack0x00000008,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_70,&local_30,&local_res18);
  return;
}

// StaticRegisterNativesUMovieSceneFadeSystem @ 14686cac0

void __cdecl UMovieSceneFadeSystem::StaticRegisterNativesUMovieSceneFadeSystem(void)

{
  return;
}

