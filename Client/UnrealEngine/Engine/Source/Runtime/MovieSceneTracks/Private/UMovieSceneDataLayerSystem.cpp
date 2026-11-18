// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 13

// StaticClass @ 1467cf1b0

UClass * __cdecl UMovieSceneDataLayerSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDataLayerSystem",
               &Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneDataLayerSystem,0xf8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneDataLayerSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneDataLayerSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.InnerSingleton;
}

// UMovieSceneDataLayerSystem @ 146808820

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneDataLayerSystem * __thiscall
UMovieSceneDataLayerSystem::UMovieSceneDataLayerSystem
          (UMovieSceneDataLayerSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDataLayerSystem__6B_;
  (this->ApplicableFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ApplicableFilter).Cache.LastSystemVersion = 0;
  (this->ApplicableFilter).bContainsMatch = false;
  (this->DesiredLayerStates).Object = (FDesiredLayerStates *)0x0;
  (this->DesiredLayerStates).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakPreAnimatedStorage).Object = (FPreAnimatedDataLayerStorage *)0x0;
  (this->WeakPreAnimatedStorage).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ApplicableFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  return this;
}

// UMovieSceneDataLayerSystem @ 1468088a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneDataLayerSystem * __thiscall
UMovieSceneDataLayerSystem::UMovieSceneDataLayerSystem
          (UMovieSceneDataLayerSystem *this,FObjectInitializer *param_1)

{
  TSharedPtr<UE::MovieScene::FDesiredLayerStates,1> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneDataLayerSystem *pUVar6;
  FScriptContainerElement *this_00;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  FComponentTypeID local_res18;
  ushort local_res1a;
  FComponentTypeID local_res1c [2];
  UClass *local_res20;
  UObject *local_88;
  FMovieSceneTracksComponentTypes *local_80;
  FBuiltInComponentTypes *local_78;
  TReferenceControllerBase<1> *local_70;
  FSharedReferencer<1> aFStack_68 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_58;
  initializer_list<UE::MovieScene::FComponentTypeID> local_48;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneDataLayerSystem__6B_;
  pTVar1 = &this->DesiredLayerStates;
  (this->ApplicableFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ApplicableFilter).Cache.LastSystemVersion = 0;
  (this->ApplicableFilter).bContainsMatch = false;
  pTVar1->Object = (FDesiredLayerStates *)0x0;
  (this->DesiredLayerStates).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakPreAnimatedStorage).Object = (FPreAnimatedDataLayerStorage *)0x0;
  (this->WeakPreAnimatedStorage).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_78 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_80 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 2;
  *(TComponentTypeID<FMovieSceneDataLayerComponentData> *)&this->_padding_ = local_80->DataLayer;
  if ((this->_padding_ & 0x10) != 0) {
    local_res20 = Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_88 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_88);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_88,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res20);
    return this;
  }
  aFStack_68[0].ReferenceController = ::operator_new(0x60);
  if (aFStack_68[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    local_70 = ___xmm_00000000000000000000000000000010;
    aFStack_68[0].ReferenceController = _UNK_150651568;
  }
  else {
    (aFStack_68[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = aFStack_68[0].ReferenceController + 1;
    (aFStack_68[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (aFStack_68[0].ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDesiredLayerStates_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    aFStack_68[0].ReferenceController[2]._padding_ = 0;
    aFStack_68[0].ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[1]._padding_ = 0;
    aFStack_68[0].ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[3]._padding_ = 0;
    aFStack_68[0].ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    aFStack_68[0].ReferenceController[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&aFStack_68[0].ReferenceController[4]._padding_ + 4) = 0;
    *(undefined4 *)&aFStack_68[0].ReferenceController[4]._padding_ = 0xffffffff;
    aFStack_68[0].ReferenceController[5]._padding_ = 0;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UMovieSceneDataLayerSystem *)(*pcVar3)();
        return pUVar6;
      }
    }
    LOCK();
    (aFStack_68[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(aFStack_68[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = aFStack_68[0].ReferenceController;
    local_70 = pTVar8;
  }
  if (pTVar1 != (TSharedPtr<UE::MovieScene::FDesiredLayerStates,1> *)&local_70) {
    pTVar1->Object = (FDesiredLayerStates *)pTVar8;
    local_70 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DesiredLayerStates).SharedReferenceCount,aFStack_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_68[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_res8.Value = *(ushort *)&local_80->DataLayer;
  local_58._First = &local_res8;
  local_58._Last = local_resa;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&this->ApplicableFilter,&local_58);
  piVar2 = &(this->ApplicableFilter).Filter.ComplexMasks.ArrayMax;
  local_res18.Value = (local_78->Tags).NeedsLink.Value;
  local_res1a = (local_78->Tags).NeedsUnlink.Value;
  iVar5 = (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&(this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance,piVar2)
    ;
  }
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = iVar5 + 1;
  local_48._First = &local_res18;
  this_00 = (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data +
            (longlong)iVar5 * 0x3c;
  local_48._Last = local_res1c;
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0x180;
  this_00[0x38].field_0x0 = 2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_48);
  return this;
}

// ~UMovieSceneDataLayerSystem @ 14680f4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneDataLayerSystem::~UMovieSceneDataLayerSystem(UMovieSceneDataLayerSystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7UMovieSceneDataLayerSystem__6B_;
  pTVar3 = (this->WeakPreAnimatedStorage).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DesiredLayerStates).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// operator() @ 146812f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneDataLayerSystem::BeginTrackingEntities'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,
          TRead<FMovieSceneDataLayerComponentData> param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  FMovieSceneEntityID FVar3;
  FRootInstanceHandle FVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FComponentMask *pFVar9;
  FBuiltInComponentTypes *pFVar10;
  FEntityAllocation *pFVar11;
  UDataLayerInstance *pUVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  TRead<UE::MovieScene::FMovieSceneEntityID> local_res18;
  TRead<UE::MovieScene::FRootInstanceHandle> local_res20;
  undefined1 local_68 [4];
  int local_64;
  UDataLayerManager *local_60;
  FPreAnimatedStateEntry local_58 [2];
  
  pFVar9 = UE::MovieScene::FEntityAllocationProxy::GetAllocationType(param_1);
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar2 = (pFVar10->Tags).RestoreState.Value;
  if (((uVar2 == 0xffff) || ((pFVar9->Bits).NumBits <= (int)(uint)uVar2)) ||
     ((*(uint *)(pFVar9->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
      == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((*(int *)(*(longlong *)(*(longlong *)this + 0x28) + 0x468) != 0) || (bVar13 != false)) {
    iVar14 = 0;
    local_64 = 0;
    pFVar11 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
    local_res18 = param_2;
    local_res20 = param_3;
    if (pFVar11->Size != 0) {
      do {
        lVar6 = *(longlong *)param_4;
        if (lVar6 == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5079450867980041563>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneDataLayerSystem.cpp"
                             ,0x2a5,"Section");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          FVar3.Value = *(ushort *)local_res18;
          FVar4 = *(FRootInstanceHandle *)local_res20;
          local_60 = UMovieSceneDataLayerSystem::GetDataLayerManager
                               (*(UMovieSceneDataLayerSystem **)this,FVar3,FVar4);
          if (local_60 != (UDataLayerManager *)0x0) {
            puVar15 = *(undefined8 **)(lVar6 + 0x118);
            iVar5 = *(int *)(lVar6 + 0x120);
            puVar1 = puVar15 + iVar5;
            while( true ) {
              if (*(int *)(lVar6 + 0x120) != iVar5) {
                local_68[0] = 0;
                `TCheckedPointerIterator<UDataLayerAsset_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_68);
              }
              iVar14 = local_64;
              if (puVar15 == puVar1) break;
              pUVar12 = UDataLayerManager::GetDataLayerInstanceFromAsset
                                  (local_60,(UDataLayerAsset *)*puVar15);
              if (pUVar12 != (UDataLayerInstance *)0x0) {
                if ((*(longlong *)((longlong)this + 0x10) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::MovieScene::FPreAnimatedDataLayerStorage::MakeEntry
                          (*(FPreAnimatedDataLayerStorage **)((longlong)this + 0x10),local_58,
                           pUVar12);
                UE::MovieScene::FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                          (*(FPreAnimatedEntityCaptureSource **)((longlong)this + 8),local_58,FVar3,
                           FVar4,bVar13);
              }
              puVar15 = puVar15 + 1;
            }
          }
        }
        param_4 = (TRead<FMovieSceneDataLayerComponentData>)((longlong)param_4 + 8);
        iVar14 = iVar14 + 1;
        local_res18 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)local_res18 + 2);
        local_res20 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)local_res20 + 4);
        local_64 = iVar14;
        pFVar11 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
      } while (iVar14 < (int)(uint)pFVar11->Size);
    }
  }
  return;
}

// BeginTrackingEntities @ 14681e4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneDataLayerSystem::BeginTrackingEntities(UMovieSceneDataLayerSystem *this)

{
  atomic<int> *paVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  atomic<int> aVar3;
  ushort uVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  FPreAnimatedEntityCaptureSource *pFVar10;
  undefined1 auStack_238 [32];
  <lambda_1> local_218 [8];
  TSharedPtr<UE::MovieScene::FPreAnimatedDataLayerStorage,1> local_210;
  undefined8 local_1f8;
  TStatIdData *pTStack_1f0;
  byte local_1e8;
  undefined7 uStack_1e7;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  <lambda_1> local_1d8;
  undefined2 local_1b8;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_1b6;
  TComponentTypeID<FMovieSceneDataLayerComponentData> TStack_1b4;
  undefined2 uStack_1b2;
  undefined8 uStack_1b0;
  TStatIdData *pTStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  TBitArray<TFixedAllocator<12>_> local_190;
  undefined1 local_158 [4];
  FComponentAccess aFStack_154 [2];
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar10 = UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                      ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468));
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedDataLayerStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_210,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedDataLayerStorage>)
             UE::MovieScene::FPreAnimatedDataLayerStorage::StorageID);
  (this->WeakPreAnimatedStorage).Object = local_210.Object;
  if (local_210.SharedReferenceCount.ReferenceController !=
      (this->WeakPreAnimatedStorage).WeakReferenceCount.ReferenceController) {
    if (local_210.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_210.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_210.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->WeakPreAnimatedStorage).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))();
      }
    }
    (this->WeakPreAnimatedStorage).WeakReferenceCount.ReferenceController =
         local_210.SharedReferenceCount.ReferenceController;
  }
  local_1d8.PreAnimatedStorage.Object = local_210.Object;
  local_1d8.PreAnimatedStorage.SharedReferenceCount.ReferenceController =
       local_210.SharedReferenceCount.ReferenceController;
  if (local_210.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_210.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_210.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (pFVar8->Tags).NeedsLink.Value;
  local_190.MaxBits = 0x180;
  local_190.NumBits = 0;
  local_1d8.__this = this;
  local_1d8.EntityMetaData = pFVar10;
  TBitArray<TFixedAllocator<12>_>::Add(&local_190,false,uVar4 + 1);
  if (local_190.NumBits <= (int)(uint)uVar4) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_1f8 = 0;
  pTVar2 = local_190.AllocatorInstance.InlineData + (uVar4 >> 5);
  uStack_1e0 = 0x6ff;
  uStack_1dc = uStack_1dc & 0xffffff00;
  uStack_1a0 = CONCAT71(uStack_1e7,local_1e8) & 0xffffffffffffffe0;
  uStack_198._4_4_ = uStack_1dc;
  uStack_198._0_4_ = AnyHiPriThreadHiPriTask;
  local_130.AllMask.Bits.NumBits = 0;
  *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  pTStack_1f0 = &TStatId::TStatId_NAME_None;
  TStack_1b6 = pFVar8->RootInstanceHandle;
  TStack_1b4 = pFVar9->DataLayer;
  uStack_1b0 = 0;
  pTStack_1a8 = &TStatId::TStatId_NAME_None;
  local_158._2_2_ = TStack_1b6;
  local_158._0_2_ = local_1b8;
  unique0x100002ab = TStack_1b4;
  unique0x100002ad = uStack_1b2;
  local_130.AllMask.Bits.MaxBits = 0x180;
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  pwStack_150 = (wchar_t *)0x0;
  local_148 = &TStatId::TStatId_NAME_None;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_7c = 0x180;
  local_48 = 0;
  local_44 = 0x180;
  local_1e8 = local_1e8 & 0xe0;
  uStack_140 = uStack_1a0;
  local_138 = uStack_198;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
  UE::Core::Private::
  BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&local_190,(TBitArray<TFixedAllocator<12>_> *)&local_130,MaxSize,local_218);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneDataLayerComponentData>_>
  ::
  Iterate_PerAllocationImpl<_UMovieSceneDataLayerSystem::BeginTrackingEntities_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneDataLayerComponentData>_>
              *)local_158,(FEntityManager *)(this->_padding_ + 0x28),&local_130,&local_1d8);
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.PreAnimatedStorage.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_210.SharedReferenceCount.ReferenceController);
  return;
}

// GetDataLayerManager @ 146834540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerManager * __thiscall
UMovieSceneDataLayerSystem::GetDataLayerManager
          (UMovieSceneDataLayerSystem *this,FMovieSceneEntityID param_1,FRootInstanceHandle param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDataLayerManager *pUVar5;
  UObject *pUVar6;
  UWorldPartition *this_00;
  UWorldPartition *pUVar7;
  longlong lVar8;
  
  lVar1 = this->_padding_;
  if ((*(longlong *)(lVar1 + 0x580) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UDataLayerManager *)(*pcVar3)();
    return pUVar5;
  }
  lVar8 = ((ulonglong)(uint)param_2 & 0xffff) * 0x140;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x580) + 8);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar8 + 0x120 + lVar1);
  lVar1 = *(longlong *)(lVar8 + 0x118 + lVar1);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pUVar6 == (UObject *)0x0) {
    return (UDataLayerManager *)0x0;
  }
  pUVar7 = (UWorldPartition *)0x0;
  if ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0) {
    this_00 = pUVar7;
    if ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0) {
      this_00 = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject(pUVar6);
    }
    if (this_00 != (UWorldPartition *)0x0) {
      pUVar7 = (UWorldPartition *)UWorldPartition::GetDataLayerManager(this_00);
    }
  }
  return (UDataLayerManager *)pUVar7;
}

// GetPrivateStaticClass @ 146835760

UClass * __cdecl UMovieSceneDataLayerSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDataLayerSystem",
               &Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneDataLayerSystem,0xf8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneDataLayerSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneDataLayerSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.InnerSingleton;
}

// IsRelevantImpl @ 14683f040

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneDataLayerSystem::IsRelevantImpl
          (UMovieSceneDataLayerSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ushort uVar1;
  FDesiredLayerStates *pFVar2;
  FComponentMask *pFVar3;
  
  uVar1 = (ushort)this->_padding_;
  pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  if ((((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
      ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
       == 0)) &&
     ((pFVar2 = (this->DesiredLayerStates).Object, pFVar2 == (FDesiredLayerStates *)0x0 ||
      (*(int *)&(pFVar2->StatesByInstance).field_0x8 ==
       *(int *)&(pFVar2->StatesByInstance).field_0x34)))) {
    return false;
  }
  return true;
}

// OnLink @ 146842a50

void __thiscall UMovieSceneDataLayerSystem::OnLink(UMovieSceneDataLayerSystem *this)

{
  return;
}

// OnRun @ 146844310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneDataLayerSystem::OnRun
          (UMovieSceneDataLayerSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedPlaybackState *this_00;
  code *pcVar6;
  atomic<int> aVar7;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *pTVar8;
  bool bVar9;
  EDataLayerUpdateFlags EVar10;
  atomic<int> aVar11;
  UWorld *this_01;
  FBuiltInComponentTypes *pFVar12;
  FMovieSceneTracksComponentTypes *pFVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  USubsystem *pUVar16;
  FDesiredLayerStates *this_02;
  FInstanceRegistry *pFVar17;
  UMovieSceneSequence *pUVar18;
  UClass *pUVar19;
  longlong lVar20;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *pTVar21;
  ForAnyElementType FVar22;
  int iVar23;
  uint uVar24;
  UClass *pUVar25;
  longlong lVar26;
  int iVar27;
  undefined1 *puVar28;
  uint *puVar29;
  wchar_t *pwVar30;
  uint uVar31;
  undefined1 auStack_2d8 [32];
  FScriptContainerElement *local_2b8;
  FComponentTypeID local_2a8;
  FComponentTypeID local_2a6;
  undefined1 local_2a4 [2];
  TComponentTypeID<short> local_2a2;
  undefined2 uStack_2a0;
  wchar_t *local_298;
  FString local_290;
  FMovieSceneSequenceID local_280 [2];
  uint local_278;
  uint uStack_274;
  undefined1 *puStack_270;
  undefined4 local_268;
  int iStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  int local_230;
  int local_228;
  LARGE_INTEGER local_220;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *local_218;
  FName local_210;
  FString local_208;
  undefined8 local_1f0;
  TStatIdData *pTStack_1e8;
  byte local_1e0;
  undefined7 uStack_1df;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  <lambda_1> local_1b8;
  FLogScopedCategoryAndVerbosityOverride local_1a8;
  undefined2 local_198;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_196;
  TComponentTypeID<FMovieSceneDataLayerComponentData> TStack_194;
  TComponentTypeID<short> TStack_192;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined8 local_188;
  TStatIdData *pTStack_180;
  ulonglong local_178;
  undefined8 uStack_170;
  undefined1 local_168 [4];
  FComponentAccess aFStack_164 [6];
  wchar_t *local_158;
  TStatIdData *pTStack_150;
  ulonglong local_148;
  undefined8 uStack_140;
  FEntityComponentFilter local_138;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_01 == (UWorld *)0x0) {
    return;
  }
  bVar9 = UE::MovieScene::FCachedEntityFilterResult_Match::Matches
                    (&this->ApplicableFilter,(FEntityManager *)(this->_padding_ + 0x28));
  if (!bVar9) {
    return;
  }
  pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar13 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  BeginTrackingEntities(this);
  if (((this->DesiredLayerStates).Object == (FDesiredLayerStates *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::MovieScene::FDesiredLayerStates::Reset((this->DesiredLayerStates).Object);
  pTStack_1e8 = &TStatId::TStatId_NAME_None;
  TStack_192 = pFVar12->HierarchicalBias;
  pUVar19 = (UClass *)0x0;
  local_1f0 = 0;
  _local_2a2 = CONCAT22(0x7fff,TStack_192);
  TStack_196 = pFVar12->RootInstanceHandle;
  TStack_194 = pFVar13->DataLayer;
  uStack_190 = 0x7fff;
  local_168._2_2_ = TStack_196;
  local_168._0_2_ = local_198;
  unique0x100006d7 = TStack_194;
  unique0x100006d9 = TStack_192;
  aFStack_164._6_6_ = uStack_18e;
  aFStack_164[2].ComponentType.Value = 0x7fff;
  local_2a8.Value = (pFVar12->Tags).NeedsUnlink.Value;
  uStack_1d8 = 0x6ff;
  uStack_1d4 = uStack_1d4 & 0xffffff00;
  local_178 = CONCAT71(uStack_1df,local_1e0) & 0xffffffffffffffe0;
  uStack_170._4_4_ = uStack_1d4;
  uStack_170._0_4_ = AnyHiPriThreadHiPriTask;
  local_188 = 0;
  pTStack_180 = &TStatId::TStatId_NAME_None;
  local_138.AllMask.Bits.NumBits = 0;
  local_158 = (wchar_t *)0x0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_138.AllMask.Bits.MaxBits = 0x180;
  local_138.NoneMask.Bits.NumBits = 0;
  local_138.NoneMask.Bits.MaxBits = 0x180;
  local_138.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ComplexMasks.ArrayNum = 0;
  local_138.ComplexMasks.ArrayMax = 0;
  local_88 = 0;
  local_84 = 0x180;
  local_50 = 0;
  local_4c = 0x180;
  local_1e0 = local_1e0 & 0xe0;
  local_1b8.__this = this;
  local_1b8.BuiltInComponents = pFVar12;
  local_148 = local_178;
  uStack_140 = uStack_170;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_138);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 4),&local_138);
  local_1c8._First = &local_2a8;
  local_1c8._Last = &local_2a6;
  UE::MovieScene::FComponentMask::SetAll(&local_138.NoneMask,&local_1c8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneDataLayerComponentData>,UE::MovieScene::TOptionalReadAccess<short>_>
  ::Iterate_PerAllocationImpl<_UMovieSceneDataLayerSystem::UpdateDesiredStates_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneDataLayerComponentData>,UE::MovieScene::TOptionalReadAccess<short>_>
              *)local_168,(FEntityManager *)(this->_padding_ + 0x28),&local_138,&local_1b8);
  if (local_138.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ComplexMasks.AllocatorInstance.Data);
  }
  pUVar14 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar14 != (UClass *)0x0) goto LAB_146844549;
  }
  else if (pUVar14 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
LAB_146844549:
    pUVar15 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
    if (pUVar15 != (UClass *)0x0) {
      iVar27 = (int)pUVar15->_padding_;
      if (((int)pUVar14->_padding_ < iVar27) ||
         ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar27 * 8) !=
          &pUVar15->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) goto LAB_14684457a;
    }
  }
  pUVar14 = pUVar19;
LAB_14684457a:
  pUVar16 = FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&this_01->SubsystemCollection,pUVar14);
  if (pUVar16 == (USubsystem *)0x0) {
    if (2 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
  }
  else {
    this_02 = TSharedPtr<UE::MovieScene::FDesiredLayerStates,1>::operator->
                        (&this->DesiredLayerStates);
    pUVar14 = (UClass *)(this->WeakPreAnimatedStorage).WeakReferenceCount.ReferenceController;
    pUVar15 = pUVar19;
    pUVar25 = pUVar14;
    if (pUVar14 != (UClass *)0x0) {
      aVar7 = *(atomic<int> *)&pUVar14->_padding_;
      do {
        pUVar25 = pUVar19;
        if (aVar7 == (atomic<int>)0x0) goto LAB_146844605;
        LOCK();
        aVar11 = *(atomic<int> *)&pUVar14->_padding_;
        bVar9 = aVar7 == aVar11;
        if (bVar9) {
          *(atomic<int> *)&pUVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
          aVar11 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar11;
      } while (!bVar9);
      pUVar15 = (UClass *)(this->WeakPreAnimatedStorage).Object;
      pUVar25 = pUVar14;
    }
LAB_146844605:
    EVar10 = UE::MovieScene::FDesiredLayerStates::Apply
                       (this_02,(FPreAnimatedDataLayerStorage *)pUVar15);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar25);
    QueryPerformanceCounter(&local_220);
    local_298 = (wchar_t *)0x0;
    if ((EVar10 & FlushStreamingFull) == None) {
      pwVar30 = (wchar_t *)pUVar19;
      if ((EVar10 & FlushStreamingVisibility) != None) {
        bVar9 = -1 < CpuChannel->Enabled;
        if (bVar9) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId541,
                     "UMovieSceneDataLayerSystem_FlushStreamingVisibility",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneDataLayerSystem.cpp"
                     ,0x21d);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId541);
        }
        pwVar30 = L"FlushStreamingVisibility";
        local_298 = L"FlushStreamingVisibility";
        (**(code **)(pUVar16[1]._padding_ + 0x10))(&pUVar16[1]._padding_);
        UWorld::FlushLevelStreaming(this_01,Visibility);
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
    else if (CpuChannel->Enabled < 0) {
      UWorld::BlockTillLevelStreamingCompleted(this_01);
      local_298 = L"FlushStreamingFull";
      pwVar30 = L"FlushStreamingFull";
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId534,"UMovieSceneDataLayerSystem_FlushStreamingFull",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneDataLayerSystem.cpp"
                 ,0x216);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId534);
      UWorld::BlockTillLevelStreamingCompleted(this_01);
      FCpuProfilerTrace::OutputEndEvent();
      local_298 = L"FlushStreamingFull";
      pwVar30 = L"FlushStreamingFull";
    }
    if (2 < (byte)LogMovieScene._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                (&local_1a8,(FName)LogMovieScene._4_8_,Warning);
      if ((UClass *)pwVar30 != (UClass *)0x0) {
        local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.Data.ArrayNum = 0;
        local_290.Data.ArrayMax = 0;
        pFVar17 = UMovieSceneEntitySystemLinker::GetInstanceRegistry
                            ((UMovieSceneEntitySystemLinker *)this->_padding_);
        uStack_274 = 1;
        local_278 = 0;
        iStack_264 = 0;
        iStack_260 = 0;
        pTVar21 = &pFVar17->Instances;
        iVar27 = *(int *)&(pFVar17->Instances).field_0x28;
        puVar1 = &(pFVar17->Instances).field_0x10;
        if (iVar27 != 0) {
          puVar29 = *(uint **)&(pFVar17->Instances).field_0x20;
          if (puVar29 == (uint *)0x0) {
            puVar29 = (uint *)puVar1;
          }
          uVar24 = *puVar29;
          iStack_260 = 0;
          while (uVar24 == 0) {
            iStack_260 = iStack_260 + 0x20;
            iVar23 = (int)pUVar19;
            local_278 = iVar23 + 1;
            pUVar19 = (UClass *)(ulonglong)local_278;
            if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_278)
            goto LAB_14684481c;
            uVar24 = puVar29[(longlong)iVar23 + 1];
          }
          uStack_274 = -uVar24 & uVar24;
          uVar2 = (ulonglong)uStack_274 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_228 = (int)lVar20;
          iStack_264 = iStack_260 + -1 + local_228;
          if (iVar27 < iStack_264) {
LAB_14684481c:
            iStack_264 = iVar27;
          }
        }
        local_268 = 0xffffffff;
        uVar24 = *(uint *)&(pFVar17->Instances).field_0x28;
        local_230 = *(int *)&(pFVar17->Instances).field_0x8 -
                    *(int *)&(pFVar17->Instances).field_0x34;
        local_250._padding_ = CONCAT44(uStack_274,local_278);
        local_250.CurrentBitIndex = iStack_264;
        local_250.UnvisitedBitMask = 0xffffffff;
        local_250._28_4_ = uStack_25c;
        local_250.BaseBitIndex = iStack_260;
        iVar23 = (int)uVar24 >> 5;
        uVar31 = uVar24 & 0xffffffe0;
        puStack_270 = puVar1;
        local_258 = pTVar21;
        local_250.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        local_218 = pTVar21;
        if ((((int)uVar24 < 0) || (iVar27 < (int)uVar24)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar8 = local_218;
        uVar3 = *(uint *)&(pFVar17->Instances).field_0x28;
        if (uVar24 != uVar3) {
          puVar4 = *(undefined1 **)&(pFVar17->Instances).field_0x20;
          puVar28 = puVar1;
          if (puVar4 != (undefined1 *)0x0) {
            puVar28 = puVar4;
          }
          uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar23 * 4);
          while (uVar24 == 0) {
            lVar20 = (longlong)iVar23;
            uVar31 = uVar31 + 0x20;
            iVar23 = iVar23 + 1;
            uVar24 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
            goto LAB_146844900;
            uVar24 = *(uint *)(puVar28 + lVar20 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar24 = (uVar31 - 1) + (int)lVar20;
          if ((int)uVar3 < (int)uVar24) {
            uVar24 = uVar3;
          }
        }
LAB_146844900:
        while( true ) {
          if (*(int *)&pTVar21->field_0x8 - *(int *)&pTVar21->field_0x34 != local_230) {
            `TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::
            TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2a4);
          }
          if (((local_250.CurrentBitIndex == uVar24) &&
              (local_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar21 == pTVar8)) break;
          lVar20 = *(longlong *)pTVar21;
          lVar26 = (longlong)local_250.CurrentBitIndex * 0x140;
          pTVar5 = *(TReferenceControllerBase<1> **)(lVar26 + 0x120 + lVar20);
          this_00 = *(FSharedPlaybackState **)(lVar26 + 0x118 + lVar20);
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          local_280[0].Value = *(uint *)(lVar26 + 0x128 + lVar20);
          pUVar18 = UE::MovieScene::FSharedPlaybackState::GetSequence(this_00,local_280);
          iVar27 = local_290.Data.ArrayNum + -1;
          if (local_290.Data.ArrayNum == 0) {
            iVar27 = 0;
          }
          if (iVar27 != 0) {
            ::FString::AppendChars(&local_290,L",",1);
          }
          local_210 = (FName)pUVar18->_padding_;
          ::FName::ToString(&local_210,&local_208);
          iVar27 = local_208.Data.ArrayNum + -1;
          if (local_208.Data.ArrayNum == 0) {
            iVar27 = 0;
          }
          ::FString::AppendChars(&local_290,(wchar_t *)local_208.Data.AllocatorInstance.Data,iVar27)
          ;
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          local_250.UnvisitedBitMask = local_250.UnvisitedBitMask & ~local_250._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_250);
          pTVar21 = local_258;
        }
        if (2 < (byte)LogMovieScene._0_1_) {
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_290.Data.ArrayNum != 0) {
            FVar22.Data = local_290.Data.AllocatorInstance.Data;
          }
          FWindowsPlatformTime::Seconds();
          local_2b8 = FVar22.Data;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        }
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
      }
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogMovieScene,Warning);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_1a8);
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneDataLayerSystem @ 14686ca60

void __cdecl UMovieSceneDataLayerSystem::StaticRegisterNativesUMovieSceneDataLayerSystem(void)

{
  return;
}

// UpdateDesiredStates @ 146870ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneDataLayerSystem::UpdateDesiredStates(UMovieSceneDataLayerSystem *this)

{
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *pFVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  undefined1 auStack_1d8 [32];
  FComponentTypeID local_1b8;
  FComponentTypeID local_1b6;
  TComponentTypeID<short> local_1b4;
  undefined2 uStack_1b2;
  undefined8 local_1a8;
  TStatIdData *pTStack_1a0;
  byte local_198;
  undefined7 uStack_197;
  undefined4 uStack_190;
  uint uStack_18c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  <lambda_1> local_178;
  undefined2 local_168;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_166;
  TComponentTypeID<FMovieSceneDataLayerComponentData> TStack_164;
  TComponentTypeID<short> TStack_162;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [6];
  wchar_t *local_128;
  TStatIdData *pTStack_120;
  ulonglong local_118;
  undefined8 uStack_110;
  FEntityComponentFilter local_108;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  BeginTrackingEntities(this);
  if ((this->DesiredLayerStates).Object == (FDesiredLayerStates *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::MovieScene::FDesiredLayerStates::Reset((this->DesiredLayerStates).Object);
  pTStack_1a0 = &TStatId::TStatId_NAME_None;
  TStack_162 = pFVar3->HierarchicalBias;
  _local_1b4 = CONCAT22(0x7fff,TStack_162);
  TStack_166 = pFVar3->RootInstanceHandle;
  TStack_164 = pFVar4->DataLayer;
  uStack_160 = 0x7fff;
  local_138._2_2_ = TStack_166;
  local_138._0_2_ = local_168;
  unique0x100001bb = TStack_164;
  unique0x100001bd = TStack_162;
  aFStack_134._6_6_ = uStack_15e;
  aFStack_134[2].ComponentType.Value = 0x7fff;
  local_1b8.Value = (pFVar3->Tags).NeedsUnlink.Value;
  local_1a8 = 0;
  uStack_18c = uStack_18c & 0xffffff00;
  local_108.AllMask.Bits.NumBits = 0;
  local_108.NoneMask.Bits.NumBits = 0;
  local_108.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ComplexMasks.ArrayNum = 0;
  local_108.ComplexMasks.ArrayMax = 0;
  local_58 = 0;
  local_20 = 0;
  uStack_190 = 0x6ff;
  local_118 = CONCAT71(uStack_197,local_198) & 0xffffffffffffffe0;
  uStack_110._4_4_ = uStack_18c;
  uStack_110._0_4_ = AnyHiPriThreadHiPriTask;
  local_128 = (wchar_t *)0x0;
  pTStack_120 = &TStatId::TStatId_NAME_None;
  local_108.AllMask.Bits.MaxBits = 0x180;
  local_108.NoneMask.Bits.MaxBits = 0x180;
  local_54 = 0x180;
  local_1c = 0x180;
  local_198 = local_198 & 0xe0;
  local_178.__this = this;
  local_178.BuiltInComponents = pFVar3;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_108);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_108);
  local_188._First = &local_1b8;
  local_188._Last = &local_1b6;
  UE::MovieScene::FComponentMask::SetAll(&local_108.NoneMask,&local_188);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneDataLayerComponentData>,UE::MovieScene::TOptionalReadAccess<short>_>
  ::Iterate_PerAllocationImpl<_UMovieSceneDataLayerSystem::UpdateDesiredStates_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneDataLayerComponentData>,UE::MovieScene::TOptionalReadAccess<short>_>
              *)local_138,(FEntityManager *)(this->_padding_ + 0x28),&local_108,&local_178);
  if (local_108.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

