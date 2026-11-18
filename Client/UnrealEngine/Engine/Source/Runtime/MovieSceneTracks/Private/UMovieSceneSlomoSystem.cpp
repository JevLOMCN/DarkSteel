// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 1467cf890

UClass * __cdecl UMovieSceneSlomoSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSlomoSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSlomoSystem",
               &Z_Registration_Info_UClass_UMovieSceneSlomoSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneSlomoSystem,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSlomoSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneSlomoSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSlomoSystem.InnerSingleton;
}

// UMovieSceneSlomoSystem @ 14680c010

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSlomoSystem * __thiscall
UMovieSceneSlomoSystem::UMovieSceneSlomoSystem(UMovieSceneSlomoSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  (this->PreAnimatedStorage).Object = (FPreAnimatedSlomoStateStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneSlomoSystem @ 14680c050

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSlomoSystem * __thiscall
UMovieSceneSlomoSystem::UMovieSceneSlomoSystem
          (UMovieSceneSlomoSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  (this->PreAnimatedStorage).Object = (FPreAnimatedSlomoStateStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(ushort *)&this->_padding_ = (pFVar2->Tags).Slomo.Value;
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

// ~UMovieSceneSlomoSystem @ 14680fde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSlomoSystem::~UMovieSceneSlomoSystem(UMovieSceneSlomoSystem *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedStorage).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// operator() @ 146813cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneSlomoSystem::SavePreAnimatedState'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocation *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3)

{
  FMovieSceneEntityID FVar1;
  TReferenceControllerBase<1> *pTVar2;
  TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>
  *this_00;
  code *pcVar3;
  FMovieSceneAnimTypeID FVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FPreAnimatedEntityCaptureSource *this_01;
  longlong lVar7;
  FComponentHeader *pFVar8;
  longlong lVar9;
  FComponentHeader *pFVar10;
  undefined1 auStackY_158 [32];
  FComponentTypeID local_124;
  FComponentTypeID local_122;
  undefined8 local_120;
  FMovieSceneAnimTypeID local_118;
  FPreAnimatedStateEntry local_110;
  TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0> local_100;
  longlong *local_f8;
  UObject *local_f0;
  <lambda_1> local_e8;
  ulonglong local_e0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_d8;
  FComponentMask local_c8;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar10 = param_1->ComponentHeaders;
  pFVar8 = pFVar10 + param_1->NumComponents;
  for (; pFVar10 != pFVar8; pFVar10 = pFVar10 + 1) {
    if ((pFVar10->ComponentType).Value == *(ushort *)(*(longlong *)((longlong)this + 8) + 0x120))
    goto LAB_146813d53;
  }
  pFVar10 = (FComponentHeader *)0x0;
LAB_146813d53:
  local_118.ID = (ulong64)AnimTypeID;
  local_e0 = (ulonglong)param_1->Size;
  if (local_e0 != 0) {
    lVar9 = 0;
    local_f8 = this;
    do {
      local_120._4_4_ = *(FRootInstanceHandle *)((longlong)param_3 + lVar9 * 4);
      lVar7 = (ulonglong)((uint)local_120._4_4_ & 0xffff) * 0x140;
      pTVar2 = *(TReferenceControllerBase<1> **)
                (lVar7 + 0x120 + *(longlong *)(*(longlong *)((longlong)this + 0x10) + 8));
      lVar7 = *(longlong *)(lVar7 + 0x118 + *(longlong *)(*(longlong *)((longlong)this + 0x10) + 8))
      ;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f0 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar7 + 0x18));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      lVar7 = *(longlong *)this;
      if ((*(longlong *)(lVar7 + 0x50) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.ID = local_118.ID;
      this_00 = *(TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>
                  **)(lVar7 + 0x50);
      FVar1.Value = *(ushort *)((longlong)param_2 + lVar9 * 2);
      if ((this_00->ParentExtension->NumRequestsForGlobalState != 0) ||
         (pFVar10 != (FComponentHeader *)0x0)) {
        local_c8.Bits.MaxBits = 0x180;
        local_c8.Bits.NumBits = 0;
        local_60 = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        local_48 = 0;
        local_5c = 0x180;
        pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
        local_124.Value = (pFVar6->Tags).NeedsLink.Value;
        local_d8._First = &local_124;
        local_d8._Last = &local_122;
        UE::MovieScene::FComponentMask::SetAll(&local_c8,&local_d8);
        local_100 = (TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0>)FVar4.ID;
        UE::MovieScene::
        TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>
        ::GetOrCreateStorageIndex(this_00,(FMovieSceneAnimTypeID *)&local_120);
        local_110.ValueHandle.TypeID.TypeID = (this_00->StorageID).TypeID;
        local_110.ValueHandle.StorageIndex.Value = (int)local_120;
        local_110.GroupHandle.Value = -1;
        this_01 = UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                            (this_00->ParentExtension);
        UE::MovieScene::FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                  (this_01,&local_110,FVar1,local_120._4_4_,pFVar10 != (FComponentHeader *)0x0);
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
      this = local_f8;
      lVar7 = *local_f8;
      if ((*(longlong *)(lVar7 + 0x50) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e8.PlaybackContext = local_f0;
      UE::MovieScene::
      TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>
      ::
      CachePreAnimatedValue<__UMovieSceneSlomoSystem::SavePreAnimatedState_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>
                (*(TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>_>
                   **)(lVar7 + 0x50),(FPreAnimatedStorageGroupHandle)0xffffffff,&local_118,&local_e8
                 ,CacheIfTracked);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)local_e0);
  }
  return;
}

// GetPrivateStaticClass @ 146836f60

UClass * __cdecl UMovieSceneSlomoSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSlomoSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSlomoSystem",
               &Z_Registration_Info_UClass_UMovieSceneSlomoSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneSlomoSystem,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSlomoSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneSlomoSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSlomoSystem.InnerSingleton;
}

// OnLink @ 1468432d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSlomoSystem::OnLink(UMovieSceneSlomoSystem *this)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedSlomoStateStorage,1> local_18;
  
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedSlomoStateStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSlomoStateStorage>)
             UE::MovieScene::FPreAnimatedSlomoStateStorage::StorageID);
  if (&this->PreAnimatedStorage != &local_18) {
    (this->PreAnimatedStorage).Object = local_18.Object;
    local_18.Object = (FPreAnimatedSlomoStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedStorage).SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 14684bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSlomoSystem::OnRun
          (UMovieSceneSlomoSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  byte bVar8;
  undefined1 auStackY_208 [32];
  FComponentTypeID local_1d8;
  FComponentTypeID local_1d6 [3];
  undefined8 local_1d0;
  undefined1 local_1c8 [32];
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_1a0;
  uint uStack_19c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_188;
  TComponentTypeID<double> TStack_186;
  uchar auStack_184 [4];
  uchar auStack_180 [8];
  TStatIdData *pTStack_178;
  ulonglong uStack_170;
  undefined1 auStack_168 [16];
  undefined1 local_158 [8];
  undefined8 uStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined1 local_138 [8];
  FEntityComponentFilter local_130;
  int local_80;
  int local_7c;
  int local_48;
  int local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_1c8._24_8_ = &TStatId::TStatId_NAME_None;
  local_188 = pFVar6->RootInstanceHandle;
  local_1d8.Value = (pFVar7->Tags).Slomo.Value;
  TStack_186 = pFVar6->DoubleResult[0];
  local_1c8._16_8_ = 0;
  uStack_19c = uStack_19c & 0xffffff00;
  auStack_180[0] = '\0';
  auStack_180[1] = '\0';
  auStack_180[2] = '\0';
  auStack_180[3] = '\0';
  auStack_180[4] = '\0';
  auStack_180[5] = '\0';
  auStack_180[6] = '\0';
  auStack_180[7] = '\0';
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_130.AllMask.Bits.NumBits = 0;
  local_158._2_2_ = TStack_186;
  local_158._0_2_ = local_188;
  local_158[4] = auStack_184[0];
  local_158[5] = auStack_184[1];
  local_158[6] = auStack_184[2];
  local_158[7] = auStack_184[3];
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_48 = 0;
  uStack_1a0 = 0x6ff;
  uStack_170 = CONCAT71(uStack_1a7,local_1a8) & 0xffffffffffffffe0;
  local_138._0_4_ = 0x6ff;
  local_138._4_4_ = uStack_19c;
  uStack_150 = 0;
  local_130.AllMask.Bits.MaxBits = 0x180;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  local_148 = &TStatId::TStatId_NAME_None;
  local_7c = 0x180;
  local_44 = 0x180;
  local_1a8 = local_1a8 & 0xe0;
  uStack_140 = uStack_170;
  auStack_168._0_4_ = local_138._0_4_;
  auStack_168._4_4_ = local_138._4_4_;
  UE::MovieScene::AddAccessorToFilter
            ((FComponentAccess *)local_158,(FEntityComponentFilter *)(local_138 + 8));
  UE::MovieScene::AddAccessorToFilter
            ((FComponentAccess *)(local_158 + 2),(FEntityComponentFilter *)(local_138 + 8));
  local_198._First = &local_1d8;
  local_198._Last = local_1d6;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(local_138 + 8),&local_198);
  lVar3 = this->_padding_;
  local_138._0_4_ = *(int *)(lVar3 + 0x2c8);
  if ((local_138._0_4_ == 1) || (local_138._0_4_ == 0x101)) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  uStack_140 = CONCAT71(uStack_140._1_7_,(byte)uStack_140 & 0xfe | bVar8);
  if (*(longlong *)(lVar3 + 0x580) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_1d0 = *(undefined8 *)(lVar3 + 0x580);
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
  ::Dispatch_PerAllocation<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::FInstanceRegistry_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
              *)local_158,(FEntityManager *)local_1c8,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (FInstanceRegistry **)param_2);
  if ((undefined8 *)local_1c8._0_8_ != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_1c8._0_8_ + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_1c8._0_8_)(local_1c8._0_8_,1);
    }
  }
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnSchedulePersistentTasks @ 146850d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSlomoSystem::OnSchedulePersistentTasks
          (UMovieSceneSlomoSystem *this,IEntitySystemScheduler *param_1)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  undefined1 auStackY_228 [32];
  FComponentTypeID local_1e8;
  FComponentTypeID local_1e6;
  undefined1 local_1e4 [12];
  undefined1 local_1d8 [16];
  ulonglong local_1c8;
  undefined8 local_1b8;
  TStatIdData *pTStack_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  uchar auStack_1a0 [4];
  uint uStack_19c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  FInstanceRegistry *local_188;
  undefined1 local_180;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_178;
  TComponentTypeID<double> TStack_176;
  undefined4 uStack_174;
  undefined8 uStack_170;
  TStatIdData *pTStack_168;
  ulonglong uStack_160;
  undefined4 uStack_158;
  uint uStack_154;
  undefined1 local_148 [8];
  undefined8 uStack_140;
  TStatIdData *local_138;
  ulonglong uStack_130;
  int local_128;
  uint uStack_124;
  FEntityComponentFilter local_120;
  int local_70;
  int local_6c;
  TTypeCompatibleBytes<unsigned_int> local_38;
  TTypeCompatibleBytes<unsigned_int> local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pTStack_1b0 = &TStatId::TStatId_NAME_None;
  local_178 = pFVar5->RootInstanceHandle;
  local_1e8.Value = (pFVar6->Tags).Slomo.Value;
  TStack_176 = pFVar5->DoubleResult[0];
  local_1b8 = 0;
  uStack_19c = uStack_19c & 0xffffff00;
  uStack_170 = 0;
  pTStack_168 = &TStatId::TStatId_NAME_None;
  local_120.AllMask.Bits.NumBits = 0;
  local_148._2_2_ = TStack_176;
  local_148._0_2_ = local_178;
  local_148._4_4_ = uStack_174;
  local_120.NoneMask.Bits.NumBits = 0;
  local_120.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ComplexMasks.ArrayNum = 0;
  local_120.ComplexMasks.ArrayMax = 0;
  local_70 = 0;
  local_38.Pad[0] = '\0';
  local_38.Pad[1] = '\0';
  local_38.Pad[2] = '\0';
  local_38.Pad[3] = '\0';
  auStack_1a0[0] = 0xff;
  auStack_1a0[1] = '\x06';
  auStack_1a0[2] = '\0';
  auStack_1a0[3] = '\0';
  uStack_160 = CONCAT71(uStack_1a7,local_1a8) & 0xffffffffffffffe0;
  local_128 = 0x6ff;
  uStack_124 = uStack_19c;
  uStack_140 = 0;
  local_120.AllMask.Bits.MaxBits = 0x180;
  local_120.NoneMask.Bits.MaxBits = 0x180;
  local_138 = &TStatId::TStatId_NAME_None;
  local_6c = 0x180;
  local_34.Pad[0] = 0x80;
  local_34.Pad[1] = '\x01';
  local_34.Pad[2] = '\0';
  local_34.Pad[3] = '\0';
  local_1a8 = local_1a8 & 0xe0;
  uStack_130 = uStack_160;
  uStack_158 = local_128;
  uStack_154 = uStack_124;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_148,&local_120);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 2),&local_120);
  local_198._First = &local_1e8;
  local_198._Last = &local_1e6;
  UE::MovieScene::FComponentMask::SetAll(&local_120.AllMask,&local_198);
  lVar1 = this->_padding_;
  local_128 = *(int *)(lVar1 + 0x2c8);
  if ((local_128 == 1) || (local_128 == 0x101)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  bVar3 = (byte)uStack_130 & 0xfe | bVar3;
  uStack_130._0_1_ = bVar3;
  if (*(longlong *)(lVar1 + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_1e4._4_8_ = *(undefined8 *)(lVar1 + 0x580);
  local_1c8 = CONCAT71(uStack_130._1_7_,(byte)uStack_130) | 2;
  local_1d8._8_8_ = local_138;
  local_1d8._0_8_ = L"struct UE::MovieScene::FEvaluateSlomo";
  local_188 = (FInstanceRegistry *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_180 = 3;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
  ::ScheduleImpl<UE::MovieScene::FEvaluateSlomo,UE::MovieScene::FInstanceRegistry_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<double>_>
              *)local_148,(FEntityManager *)local_1e4,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_1d8,&local_188);
  if (local_120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// SavePreAnimatedState @ 146869b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSlomoSystem::SavePreAnimatedState
          (UMovieSceneSlomoSystem *this,FPreAnimationParameters *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0> TVar6;
  undefined1 auStack_1e8 [32];
  FComponentTypeID local_1c8;
  FComponentTypeID local_1c6 [7];
  undefined8 local_1b8;
  TStatIdData *pTStack_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_1a0;
  uint uStack_19c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  <lambda_1> local_188;
  undefined2 local_170;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_16e;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  TStatIdData *pTStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  undefined1 local_148 [8];
  wchar_t *pwStack_140;
  TStatIdData *local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  FEntityComponentFilter local_120;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TVar6 = (TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0>)
              TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0>::CachedID;
      if (TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0>::CachedID == 0) {
        TVar6 = (TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0>)
                FMovieSceneAnimTypeID::Initialize
                          (&TMovieSceneAnimTypeID<UMovieSceneSlomoSystem,0>::CachedID,0);
      }
      AnimTypeID = TVar6;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  lVar1 = this[-1]._padding_;
  local_188.__this = (UMovieSceneSlomoSystem *)&this[-1]._padding_;
  if (*(longlong *)(lVar1 + 0x580) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_188.InstanceRegistry = *(FInstanceRegistry **)(lVar1 + 0x580);
  pTStack_1b0 = &TStatId::TStatId_NAME_None;
  TStack_16e = pFVar4->RootInstanceHandle;
  local_1b8 = 0;
  uStack_19c = uStack_19c & 0xffffff00;
  local_1c8.Value = (pFVar5->Tags).Slomo.Value;
  uStack_168 = 0;
  pTStack_160 = &TStatId::TStatId_NAME_None;
  local_120.AllMask.Bits.NumBits = 0;
  local_148._2_2_ = TStack_16e;
  local_148._0_2_ = local_170;
  local_148._4_4_ = uStack_16c;
  local_120.NoneMask.Bits.NumBits = 0;
  local_120.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ComplexMasks.ArrayNum = 0;
  local_120.ComplexMasks.ArrayMax = 0;
  local_70 = 0;
  local_38 = 0;
  uStack_1a0 = 0x6ff;
  uStack_158 = CONCAT71(uStack_1a7,local_1a8) & 0xffffffffffffffe0;
  uStack_150._4_4_ = uStack_19c;
  uStack_150._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_140 = (wchar_t *)0x0;
  local_138 = &TStatId::TStatId_NAME_None;
  local_120.AllMask.Bits.MaxBits = 0x180;
  local_120.NoneMask.Bits.MaxBits = 0x180;
  local_6c = 0x180;
  local_34 = 0x180;
  local_1a8 = local_1a8 & 0xe0;
  local_188.BuiltInComponents = pFVar4;
  uStack_130 = uStack_158;
  local_128 = uStack_150;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 2),&local_120);
  local_198._First = &local_1c8;
  local_198._Last = local_1c6;
  UE::MovieScene::FComponentMask::SetAll(&local_120.AllMask,&local_198);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>_>
  ::Iterate_PerAllocationImpl<_UMovieSceneSlomoSystem::SavePreAnimatedState_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>_>
              *)local_148,(FEntityManager *)(this[-1]._padding_ + 0x28),&local_120,&local_188);
  if (local_120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneSlomoSystem @ 14686cc60

void __cdecl UMovieSceneSlomoSystem::StaticRegisterNativesUMovieSceneSlomoSystem(void)

{
  return;
}

// _getUObject @ 146875420

UObject * __thiscall UMovieSceneSlomoSystem::_getUObject(UMovieSceneSlomoSystem *this)

{
  return (UObject *)&this[-1]._padding_;
}

