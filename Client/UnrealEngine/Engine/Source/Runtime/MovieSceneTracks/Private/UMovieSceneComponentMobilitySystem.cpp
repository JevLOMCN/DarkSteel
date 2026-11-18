// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 146725f10

UClass * __cdecl UMovieSceneComponentMobilitySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMobilitySystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentMobilitySystem,600,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentMobilitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMobilitySystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.InnerSingleton;
}

// UMovieSceneComponentMobilitySystem @ 1467635d0

UMovieSceneComponentMobilitySystem * __thiscall
UMovieSceneComponentMobilitySystem::UMovieSceneComponentMobilitySystem
          (UMovieSceneComponentMobilitySystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntityInstantiatorSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>::
  TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>
            (&this->MobilityTracker);
  (this->Filter).AllMask.Bits.MaxBits = 0x180;
  (this->Filter).AllMask.Bits.NumBits = 0;
  (this->Filter).NoneMask.Bits.NumBits = 0;
  (this->Filter).ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filter).ComplexMasks.ArrayNum = 0;
  (this->Filter).ComplexMasks.ArrayMax = 0;
  (this->PendingMobilitiesToRestore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingMobilitiesToRestore).ArrayNum = 0;
  (this->PendingMobilitiesToRestore).ArrayMax = 0;
  (this->Filter).NoneMask.Bits.MaxBits = 0x180;
  return this;
}

// UMovieSceneComponentMobilitySystem @ 146763650

UMovieSceneComponentMobilitySystem * __thiscall
UMovieSceneComponentMobilitySystem::UMovieSceneComponentMobilitySystem
          (UMovieSceneComponentMobilitySystem *this,FObjectInitializer *param_1)

{
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar1;
  FComponentTypeID FVar2;
  EEntitySystemCategory EVar3;
  int iVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  FBuiltInComponentTypes *pFVar6;
  FScriptContainerElement *this_00;
  undefined8 local_res8;
  UClass *local_res18 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntityInstantiatorSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>::
  TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>
            (&this->MobilityTracker);
  (this->Filter).AllMask.Bits.MaxBits = 0x180;
  pTVar1 = &(this->Filter).ComplexMasks;
  (this->Filter).AllMask.Bits.NumBits = 0;
  (this->Filter).NoneMask.Bits.NumBits = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Filter).ComplexMasks.ArrayNum = 0;
  (this->Filter).ComplexMasks.ArrayMax = 0;
  (this->PendingMobilitiesToRestore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingMobilitiesToRestore).ArrayNum = 0;
  (this->PendingMobilitiesToRestore).ArrayMax = 0;
  (this->Filter).NoneMask.Bits.MaxBits = 0x180;
  EVar3 = UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory();
  *(EEntitySystemCategory *)&this->_padding_ = (EEntitySystemCategory)this->_padding_ | EVar3;
  UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  iVar4 = (this->Filter).ComplexMasks.ArrayNum;
  local_res8 = (UClass *)
               CONCAT62(CONCAT42(local_res8._4_4_,pFVar5->AttachParent),
                        (pFVar5->ComponentTransform).PropertyTag.Value);
  if (iVar4 == (this->Filter).ComplexMasks.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&pTVar1->AllocatorInstance,&(this->Filter).ComplexMasks.ArrayMax);
  }
  (this->Filter).ComplexMasks.ArrayNum = iVar4 + 1;
  local_28._First = (FComponentTypeID *)&local_res8;
  this_00 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x3c;
  local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 4);
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_28);
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UClass *)this->_padding_;
    FVar2.Value = (pFVar6->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar2);
  }
  return this;
}

// ~UMovieSceneComponentMobilitySystem @ 14676a250

void __thiscall
UMovieSceneComponentMobilitySystem::~UMovieSceneComponentMobilitySystem
          (UMovieSceneComponentMobilitySystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntityInstantiatorSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  pFVar1 = (this->PendingMobilitiesToRestore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Filter).ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>::
  ~TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>
            (&this->MobilityTracker);
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// operator() @ 14676d9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UMovieSceneComponentMobilitySystem::SavePreAnimatedState'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  ForElementType<USceneComponent_*> FVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> TVar5;
  FMovieSceneEntityID FVar6;
  int iVar7;
  FRootInstanceHandle FVar8;
  int iVar9;
  USceneComponent *pUVar10;
  UObject *pUVar11;
  TPreAnimatedStateGroupManager<FObjectKey> *this_00;
  code *pcVar12;
  bool bVar13;
  FPreAnimatedStorageIndex FVar14;
  FPreAnimatedComponentMobilityStorage *this_01;
  bool bVar15;
  EPreAnimatedStorageRequirement EVar16;
  FEntityAllocation *pFVar17;
  FComponentMask *pFVar18;
  FBuiltInComponentTypes *pFVar19;
  FMovieSceneTracksComponentTypes *pFVar20;
  UClass *pUVar21;
  longlong lVar22;
  Type *pTVar23;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *pTVar24;
  bool bVar25;
  ulonglong uVar26;
  ForElementType<USceneComponent_*> FVar27;
  longlong lVar28;
  FPreAnimatedStorageIndex FVar29;
  undefined1 auStackY_158 [32];
  FPreAnimatedStorageIndex local_120 [2];
  undefined1 local_118 [8];
  FPreAnimatedComponentMobilityStorage *local_110;
  FObjectKey local_108;
  FPreAnimatedStorageIndex local_100 [2];
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  FObjectKey local_e8;
  FWeakObjectPtr local_e0;
  FWeakObjectPtr local_d8;
  longlong local_d0;
  FPreAnimatedStateEntry local_c8;
  ForElementType<USceneComponent_*> local_b8;
  ulonglong local_b0;
  TRead<UE::MovieScene::FMovieSceneEntityID> local_a8;
  TRead<UE::MovieScene::FRootInstanceHandle> local_a0;
  TSharedPtr<UE::MovieScene::FPreAnimatedComponentMobilityStorage,1> local_98;
  UObject *local_88;
  UObject *local_80;
  FPreAnimatedEntityCaptureSource *local_78;
  TArray<USceneComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_a8 = param_2;
  local_a0 = param_3;
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedComponentMobilityStorage>
            (*(FPreAnimatedStateExtension **)this,&local_98,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedComponentMobilityStorage>)
             UE::MovieScene::FPreAnimatedComponentMobilityStorage::StorageID);
  local_78 = UE::MovieScene::FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                       (*(FPreAnimatedStateExtension **)this);
  pFVar17 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
  pFVar18 = UE::MovieScene::FEntityAllocationProxy::GetAllocationType(param_1);
  pFVar19 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar4 = (pFVar19->Tags).RestoreState.Value;
  if (((uVar4 == 0xffff) || ((pFVar18->Bits).NumBits <= (int)(uint)uVar4)) ||
     ((*(uint *)(pFVar18->Bits).AllocatorInstance.InlineData[uVar4 >> 5].Pad >> (uVar4 & 0x1f) & 1)
      == 0)) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
  }
  if ((**(int **)this != 0) || (bVar25 != false)) {
    pFVar18 = UE::MovieScene::FEntityAllocationProxy::GetAllocationType(param_1);
    pFVar20 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    TVar5 = pFVar20->AttachParent;
    if ((TVar5 == (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>)0xffff) ||
       (((pFVar18->Bits).NumBits <= (int)(uint)(ushort)TVar5 ||
        (bVar13 = true,
        (*(uint *)(pFVar18->Bits).AllocatorInstance.InlineData[(ushort)TVar5 >> 5].Pad >>
         ((ushort)TVar5 & 0x1f) & 1) == 0)))) {
      bVar13 = false;
    }
    uVar26 = (ulonglong)pFVar17->Size;
    local_d0 = 0;
    local_b0 = uVar26;
    if (uVar26 != 0) {
      do {
        lVar28 = local_d0;
        pUVar10 = *(USceneComponent **)((longlong)param_4 + local_d0 * 8);
        if (pUVar10 != (USceneComponent *)0x0) {
          pUVar21 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar7 = (int)pUVar21->_padding_;
          if ((iVar7 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
              &pUVar21->_padding_)) {
            FVar6.Value = *(ushort *)param_2;
            FVar8 = *(FRootInstanceHandle *)param_3;
            local_70.AllocatorInstance.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
            local_70.ArrayNum = 0;
            local_70.ArrayMax = 4;
            UE::MovieScene::GetFlattenedHierarchy(pUVar10,&local_70);
            iVar7 = local_70.ArrayNum;
            uVar26 = (ulonglong)local_70.ArrayNum;
            FVar27 = (ForElementType<USceneComponent_*>)&local_70;
            if (local_70.AllocatorInstance.SecondaryData != (ForElementType<USceneComponent_*>)0x0)
            {
              FVar27 = local_70.AllocatorInstance.SecondaryData;
            }
            FVar1 = (ForElementType<USceneComponent_*>)((longlong)FVar27 + uVar26 * 8);
            while( true ) {
              local_b8 = FVar27;
              if ((uint)uVar26 != iVar7) {
                local_118[0] = 0;
                `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_118);
              }
              param_3 = local_a0;
              param_2 = local_a8;
              if (FVar27 == FVar1) break;
              pUVar11 = *(UObject **)FVar27;
              if ((local_98.Object == (FPreAnimatedComponentMobilityStorage *)0x0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              this_01 = local_98.Object;
              if ((*(longlong *)&(local_98.Object)->field_0xc8 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              this_00 = *(TPreAnimatedStateGroupManager<FObjectKey> **)&this_01->field_0xc8;
              local_f0.ObjectIndex = 0;
              local_f0.ObjectSerialNumber = 0;
              if (pUVar11 == (UObject *)0x0) {
                UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey
                          (this_00,&local_108);
                local_f8.ObjectIndex = 0;
                local_f8.ObjectSerialNumber = 0;
              }
              else {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar11);
                }
                local_e0.ObjectIndex = 0;
                local_e0.ObjectSerialNumber = 0;
                local_88 = pUVar11;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar11);
                }
                FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_88);
                local_f0 = local_e0;
                UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey
                          (this_00,&local_108);
                local_f8.ObjectIndex = 0;
                local_f8.ObjectSerialNumber = 0;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar11);
                }
                local_d8.ObjectIndex = 0;
                local_d8.ObjectSerialNumber = 0;
                local_80 = pUVar11;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar11);
                }
                FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_80);
                local_f8 = local_d8;
              }
              UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::
              GetOrCreateStorageIndex
                        ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits> *)
                         this_01,&local_e8);
              local_c8.GroupHandle.Value = local_108.ObjectIndex;
              local_c8.ValueHandle.TypeID.TypeID =
                   (uint)UE::MovieScene::FPreAnimatedComponentMobilityStorage::StorageID;
              local_c8.ValueHandle.StorageIndex.Value = local_e8.ObjectIndex;
              UE::MovieScene::FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                        (local_78,&local_c8,FVar6,FVar8,bVar25);
              if ((local_98.Object == (FPreAnimatedComponentMobilityStorage *)0x0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              FVar14.Value = local_c8.ValueHandle.StorageIndex.Value;
              lVar28 = (longlong)local_c8.ValueHandle.StorageIndex.Value;
              local_110 = local_98.Object;
              EVar16 = UE::MovieScene::FPreAnimatedStateExtension::GetStorageRequirement
                                 (*(FPreAnimatedStateExtension **)&(local_98.Object)->field_0xb0,
                                  &local_c8);
              local_100[0].Value = FVar14.Value;
              if ((FVar14.Value == -1) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StorageIndex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                      ,0x1b6,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar22 = (longlong)FVar14.Value * 0x10 + *(longlong *)&local_110->field_0x68;
              if (EVar16 == Persistent) {
                bVar15 = (*(byte *)(lVar22 + 0xc) & 1) == 0;
LAB_14676ddef:
                if (bVar15) {
                  local_120[0].Value = 0;
                  FVar29.Value = local_120[0].Value;
                  if (pUVar11 != (UObject *)0x0) {
                    pUVar21 = Z_Construct_UClass_USceneComponent_NoRegister();
                    iVar9 = (int)pUVar21->_padding_;
                    FVar29.Value = local_120[0].Value;
                    if ((iVar9 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) +
                         (longlong)iVar9 * 8) == &pUVar21->_padding_)) {
                      FVar29.Value = (uint)(byte)pUVar11[10].field_0x1b;
                    }
                  }
                  local_120[0].Value = FVar14.Value;
                  if ((FVar14.Value == -1) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("StorageIndex",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                          ,0x195,L""), bVar15)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  lVar22 = (longlong)local_120[0].Value * 0x10 + *(longlong *)&local_110->field_0x68
                  ;
                  if (EVar16 == Persistent) {
                    if (((*(byte *)(lVar22 + 0xc) & 1) != 0) &&
                       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<3111672766223352219>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                            ,0x19b,"!CachedData.bInitialized"), bVar15)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    *(byte *)(lVar22 + 0xc) = *(byte *)(lVar22 + 0xc) | 3;
                    *(int *)(lVar22 + 8) = FVar29.Value;
                  }
                  else if (EVar16 == Transient) {
                    if ((((*(byte *)(lVar22 + 0xc) & 1) != 0) &&
                        (pTVar23 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                   ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                           *)&local_110->field_0xa0,local_120),
                        pTVar23 != (Type *)0x0)) &&
                       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<3111672766223352226>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                            ,0x1a2,
                                            "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                                           ), bVar15)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    if ((*(byte *)(lVar22 + 0xc) & 1) == 0) {
                      *(int *)(lVar22 + 8) = FVar29.Value;
                      *(byte *)(lVar22 + 0xc) = *(byte *)(lVar22 + 0xc) | 1;
                    }
                    else {
                      pTVar24 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                ::
                                AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                                          ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                            *)&local_110->field_0xa0,local_120);
                      *(int *)pTVar24 = local_120[0].Value;
                      *(int *)&pTVar24->field_0x4 = FVar29.Value;
                    }
                  }
                }
              }
              else if ((EVar16 == Transient) &&
                      ((bVar3 = *(byte *)(lVar22 + 0xc), (bVar3 & 1) == 0 || ((bVar3 & 2) != 0)))) {
                pTVar23 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                  *)&local_110->field_0xa0,local_100);
                bVar15 = pTVar23 == (Type *)0x0;
                goto LAB_14676ddef;
              }
              if (bVar13) {
                if ((FVar14.Value == -1) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StorageIndex",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                        ,0x200,L""), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pbVar2 = (byte *)(lVar28 * 0x10 + 0xc + *(longlong *)&local_110->field_0x68);
                *pbVar2 = *pbVar2 | 2;
              }
              uVar26 = (ulonglong)(uint)local_70.ArrayNum;
              FVar27 = (ForElementType<USceneComponent_*>)((longlong)local_b8 + 8);
            }
            lVar28 = local_d0;
            uVar26 = local_b0;
            if (local_70.AllocatorInstance.SecondaryData != (ForElementType<USceneComponent_*>)0x0)
            {
              FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
              lVar28 = local_d0;
              uVar26 = local_b0;
            }
          }
        }
        local_d0 = lVar28 + 1;
        param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
        param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
        local_a8 = param_2;
        local_a0 = param_3;
      } while (local_d0 < (longlong)uVar26);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 146798320

UClass * __cdecl UMovieSceneComponentMobilitySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMobilitySystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentMobilitySystem,600,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentMobilitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMobilitySystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMobilitySystem.InnerSingleton;
}

// IsRelevantImpl @ 1467a5c00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneComponentMobilitySystem::IsRelevantImpl
          (UMovieSceneComponentMobilitySystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::FEntityManager::Contains(&param_1->EntityManager,&this->Filter);
  return bVar1;
}

// OnLink @ 1467a9ee0

void __thiscall UMovieSceneComponentMobilitySystem::OnLink(UMovieSceneComponentMobilitySystem *this)

{
  UMovieSceneComponentMobilitySystem *local_res8;
  
  if ((char)(this->MobilityTracker)._padding_ == '\0') {
    *(undefined1 *)&(this->MobilityTracker)._padding_ = 1;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMovieSceneComponentMobilitySystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              (&(this->MobilityTracker).WeakOwningSystem.WeakPtr,(FObjectPtr)&local_res8);
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
    ::
    AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *)(this->_padding_ + 0x698),
               (TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *)
               &local_res8,(pmf_226d8089)&this->MobilityTracker);
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
    ::
    AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *)(this->_padding_ + 0x6b8),
               (TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *)
               &local_res8,(pmf_226d8089)&this->MobilityTracker);
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
    ::
    AddRaw<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *)(this->_padding_ + 0x6d8),
               (TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *)
               &local_res8,(pmf_30497937)&this->MobilityTracker);
  }
  return;
}

// OnRun @ 1467ae6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMobilitySystem::OnRun
          (UMovieSceneComponentMobilitySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FBuiltInComponentTypes *pFVar1;
  FMobilityCacheHandler local_res8;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
  UpdateFromComponents<UObject_*>
            (&this->MobilityTracker,(UMovieSceneEntitySystemLinker *)this->_padding_,&this->Filter,
             pFVar1->BoundObject);
  local_res8.System = this;
  UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
  ProcessInvalidatedOutputs<UE::MovieScene::FMobilityCacheHandler>
            (&this->MobilityTracker,(UMovieSceneEntitySystemLinker *)this->_padding_,&local_res8);
  return;
}

// OnUnlink @ 1467b0d80

void __thiscall
UMovieSceneComponentMobilitySystem::OnUnlink(UMovieSceneComponentMobilitySystem *this)

{
  code *pcVar1;
  bool bVar2;
  FMobilityCacheHandler local_res8 [4];
  
  if ((this->PendingMobilitiesToRestore).ArrayNum != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<835970364319203489>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneComponentMobilitySystem.cpp"
                       ,0xa1,"PendingMobilitiesToRestore.Num() == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->PendingMobilitiesToRestore).ArrayNum = 0;
    if ((this->PendingMobilitiesToRestore).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PendingMobilitiesToRestore).AllocatorInstance,0,
                 &(this->PendingMobilitiesToRestore).ArrayMax);
    }
  }
  local_res8[0].System = this;
  UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
  Destroy<UE::MovieScene::FMobilityCacheHandler>(&this->MobilityTracker,local_res8);
  return;
}

// RestorePreAnimatedState @ 1467baf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMobilitySystem::RestorePreAnimatedState
          (UMovieSceneComponentMobilitySystem *this,FPreAnimationParameters *param_1)

{
  return;
}

// SavePreAnimatedState @ 1467c0930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMobilitySystem::SavePreAnimatedState
          (UMovieSceneComponentMobilitySystem *this,FPreAnimationParameters *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  FScriptContainerElement *this_00;
  ushort *puVar7;
  int iVar8;
  undefined1 auStack_268 [32];
  <lambda_1> local_248;
  <lambda_1> local_247 [3];
  FComponentTypeID local_244;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> local_242;
  <lambda_1> local_240 [2];
  undefined8 local_230;
  TStatIdData *pTStack_228;
  byte local_220;
  undefined7 uStack_21f;
  undefined4 uStack_218;
  uint uStack_214;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  undefined2 local_1f8;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_1f6;
  TComponentTypeID<UObject_*> TStack_1f4;
  undefined2 uStack_1f2;
  undefined8 uStack_1f0;
  TStatIdData *pTStack_1e8;
  ulonglong uStack_1e0;
  undefined8 uStack_1d8;
  ushort local_1d0 [3];
  ushort local_1ca;
  TBitArray<TFixedAllocator<12>_> local_1c8;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_240[0].Extension = param_1->CacheExtension;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_190.NumBits = 0;
  local_190.MaxBits = 0x180;
  if (param_1->CacheExtension->bEntriesInvalidated == false) {
    uVar2 = (pFVar5->Tags).NeedsLink.Value;
    TBitArray<TFixedAllocator<12>_>::Add(&local_190,false,uVar2 + 1);
    if ((local_190.NumBits <= (int)(uint)uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = local_190.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  puVar7 = local_1d0;
  local_1d0[0] = (pFVar5->Tags).NeedsUnlink.Value;
  local_1d0[1] = (pFVar5->Tags).Finished.Value;
  local_1d0[2] = (pFVar5->Tags).Ignored.Value;
  local_1c8.NumBits = 0;
  local_1c8.MaxBits = 0x180;
  while( true ) {
    uVar2 = *puVar7;
    iVar8 = ((uint)uVar2 - local_1c8.NumBits) + 1;
    if (0 < iVar8) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_1c8,false,iVar8);
    }
    if ((local_1c8.NumBits <= (int)(uint)uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) break;
    pTVar1 = local_1c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    puVar7 = puVar7 + 1;
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
    if (puVar7 == &local_1ca) {
      pTStack_228 = &TStatId::TStatId_NAME_None;
      TStack_1f6 = pFVar5->RootInstanceHandle;
      TStack_1f4 = pFVar5->BoundObject;
      local_230 = 0;
      uStack_218 = 0x6ff;
      uStack_214 = uStack_214 & 0xffffff00;
      uStack_1e0 = CONCAT71(uStack_21f,local_220) & 0xffffffffffffffe0;
      uStack_1d8._4_4_ = uStack_214;
      uStack_1d8._0_4_ = AnyHiPriThreadHiPriTask;
      local_130.AllMask.Bits.NumBits = 0;
      uStack_1f0 = 0;
      pTStack_1e8 = &TStatId::TStatId_NAME_None;
      local_130.AllMask.Bits.MaxBits = 0x180;
      local_158._2_2_ = TStack_1f6;
      local_158._0_2_ = local_1f8;
      unique0x100002c5 = TStack_1f4;
      unique0x100002c7 = uStack_1f2;
      local_130.NoneMask.Bits.NumBits = 0;
      local_130.NoneMask.Bits.MaxBits = 0x180;
      local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pwStack_150 = (wchar_t *)0x0;
      local_148 = &TStatId::TStatId_NAME_None;
      local_130.ComplexMasks.ArrayNum = 0;
      local_130.ComplexMasks.ArrayMax = 0;
      local_80 = 0;
      local_7c = 0x180;
      local_48 = 0;
      local_44 = 0x180;
      local_220 = local_220 & 0xe0;
      uStack_140 = uStack_1e0;
      local_138 = uStack_1d8;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_190,(TBitArray<TFixedAllocator<12>_> *)&local_130,MaxSize,&local_248);
      local_244.Value = (pFVar6->ComponentTransform).PropertyTag.Value;
      local_242 = pFVar6->AttachParent;
      iVar8 = local_130.ComplexMasks.ArrayNum;
      if (local_130.ComplexMasks.ArrayNum == local_130.ComplexMasks.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x43c,&local_130.ComplexMasks.AllocatorInstance,
                           &local_130.ComplexMasks.ArrayMax);
      }
      local_130.ComplexMasks.ArrayNum = iVar8 + 1;
      local_208._First = &local_244;
      this_00 = local_130.ComplexMasks.AllocatorInstance.Data + (longlong)iVar8 * 0x3c;
      local_208._Last = (FComponentTypeID *)local_240;
      *(int *)(this_00 + 0x30) = 0;
      *(int *)(this_00 + 0x34) = 0x180;
      this_00[0x38] = (FScriptContainerElement)0x2;
      UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_208);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_1c8,&local_130.NoneMask.Bits,MaxSize,local_247);
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>_>
      ::
      Iterate_PerAllocationImpl<_UMovieSceneComponentMobilitySystem::SavePreAnimatedState_::__l2::<lambda_1>_&>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>_>
                  *)local_158,
                 (FEntityManager *)(this[-1].Filter.ComplexMasks.AllocatorInstance.Data + 0x28),
                 &local_130,local_240);
      if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
      }
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// StaticRegisterNativesUMovieSceneComponentMobilitySystem @ 1467c2830

void __cdecl
UMovieSceneComponentMobilitySystem::StaticRegisterNativesUMovieSceneComponentMobilitySystem(void)

{
  return;
}

// _getUObject @ 1467ca750

/* WARNING: Type propagation algorithm not settling */

UObject * __thiscall
UMovieSceneComponentMobilitySystem::_getUObject(UMovieSceneComponentMobilitySystem *this)

{
  return (UObject *)(this[-1].Filter.NoneMask.Bits.AllocatorInstance.InlineData + 4);
}

