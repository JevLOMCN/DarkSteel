// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 14687ab40

UClass * __cdecl UMovieSceneVisibilitySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilitySystem",
               &Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneVisibilitySystem,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneVisibilitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilitySystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton;
}

// UMovieSceneVisibilitySystem @ 14689f2b0

UMovieSceneVisibilitySystem * __thiscall
UMovieSceneVisibilitySystem::UMovieSceneVisibilitySystem
          (UMovieSceneVisibilitySystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneVisibilitySystem__6B_;
  (this->PreAnimatedStorage).Object = (FPreAnimatedVisibilityStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneVisibilitySystem @ 14689f2f0

UMovieSceneVisibilitySystem * __thiscall
UMovieSceneVisibilitySystem::UMovieSceneVisibilitySystem
          (UMovieSceneVisibilitySystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined4 *)&this->_padding_ = 2;
  this->_padding_ = (longlong)&___7UMovieSceneVisibilitySystem__6B_;
  (this->PreAnimatedStorage).Object = (FPreAnimatedVisibilityStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(ushort *)&this->_padding_ = (pFVar2->Tags).Visibility.Value;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = (pFVar3->Tags).Ignored.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  local_res8 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_res18 = Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  UMovieSceneEntitySystem::DefineImplicitPrerequisite
            ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
             (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  return this;
}

// ~UMovieSceneVisibilitySystem @ 1468a1160

void __thiscall
UMovieSceneVisibilitySystem::~UMovieSceneVisibilitySystem(UMovieSceneVisibilitySystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneVisibilitySystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedStorage).SharedReferenceCount.ReferenceController);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 1468b8870

UClass * __cdecl UMovieSceneVisibilitySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilitySystem",
               &Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneVisibilitySystem,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneVisibilitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilitySystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton;
}

// OnLink @ 1468c0dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneVisibilitySystem::OnLink(UMovieSceneVisibilitySystem *this)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> local_18;
  
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedVisibilityStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedVisibilityStorage>)
             UE::MovieScene::FPreAnimatedVisibilityStorage::StorageID);
  if (&this->PreAnimatedStorage != &local_18) {
    (this->PreAnimatedStorage).Object = local_18.Object;
    local_18.Object = (FPreAnimatedVisibilityStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedStorage).SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 1468c1ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneVisibilitySystem::OnRun
          (UMovieSceneVisibilitySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined1 auStack_1d8 [32];
  FComponentTypeID local_1b8;
  FComponentTypeID local_1b6;
  FComponentTypeID local_1b4;
  ushort local_1b2;
  FComponentTypeID local_1b0 [4];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  FVisibilityTask local_198;
  undefined8 local_180;
  TStatIdData *pTStack_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  undefined2 local_160;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_15e;
  TComponentTypeID<UObject_*> TStack_15c;
  TComponentTypeID<bool> TStack_15a;
  undefined8 uStack_158;
  TStatIdData *pTStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [4];
  FComponentAccess FStack_134;
  FComponentAccess FStack_132;
  undefined8 uStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  int local_60;
  int local_5c;
  int local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_198.PreAnimatedStorage.Object = (this->PreAnimatedStorage).Object;
  local_198.PreAnimatedStorage.SharedReferenceCount.ReferenceController =
       (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController;
  if (local_198.PreAnimatedStorage.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.PreAnimatedStorage.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.PreAnimatedStorage.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTStack_178 = &TStatId::TStatId_NAME_None;
  TStack_15e = pFVar1->RootInstanceHandle;
  TStack_15c = pFVar1->BoundObject;
  TStack_15a = pFVar1->BoolResult;
  local_1b4.Value = (pFVar1->Tags).NeedsLink.Value;
  local_180 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  local_1b2 = (pFVar2->Tags).Visibility.Value;
  uStack_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_110.AllMask.Bits.NumBits = 0;
  local_138._2_2_ = TStack_15e;
  local_138._0_2_ = local_160;
  unique0x10000216 = TStack_15c;
  unique0x10000218 = TStack_15a;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_168 = 0x6ff;
  uStack_148 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_164;
  uStack_140._0_4_ = 0x6ff;
  uStack_130 = 0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_170 = local_170 & 0xe0;
  uStack_120 = uStack_148;
  local_118 = uStack_140;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 6),&local_110);
  local_1a8._First = &local_1b4;
  local_1a8._Last = local_1b0;
  UE::MovieScene::FComponentMask::SetAll(&local_110.AllMask,&local_1a8);
  local_1b8.Value = (pFVar1->Tags).Ignored.Value;
  local_1a8._First = &local_1b8;
  local_1a8._Last = &local_1b6;
  UE::MovieScene::FComponentMask::SetAll(&local_110.NoneMask,&local_1a8);
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<bool>_>
  ::RunInline_PerAllocation<UE::MovieScene::FVisibilityTask>
            ((TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<bool>_>
              *)local_138,(FEntityManager *)(this->_padding_ + 0x28),&local_198);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.PreAnimatedStorage.SharedReferenceCount.ReferenceController);
  return;
}

// OnUnlink @ 1468c4280

void __thiscall UMovieSceneVisibilitySystem::OnUnlink(UMovieSceneVisibilitySystem *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PreAnimatedStorage !=
      (TSharedPtr<UE::MovieScene::FPreAnimatedVisibilityStorage,1> *)&local_18) {
    (this->PreAnimatedStorage).Object = (FPreAnimatedVisibilityStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedStorage).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// StaticRegisterNativesUMovieSceneVisibilitySystem @ 1468d02a0

void __cdecl UMovieSceneVisibilitySystem::StaticRegisterNativesUMovieSceneVisibilitySystem(void)

{
  return;
}

