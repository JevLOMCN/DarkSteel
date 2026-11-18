// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// FCameraCutGameHandler @ 14689bfe0

/* WARNING: Enum "Type": Some values do not have unique names */

FCameraCutGameHandler * __thiscall
UE::MovieScene::FCameraCutGameHandler::FCameraCutGameHandler
          (FCameraCutGameHandler *this,UMovieSceneEntitySystemLinker *param_1,
          FSequenceInstance *param_2)

{
  this->Linker = param_1;
  this->SequenceInstance = param_2;
  return this;
}

// CachePreAnimatedValue @ 1468ac460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FCameraCutGameHandler::CachePreAnimatedValue
          (UMovieSceneEntitySystemLinker *param_1,FSequenceInstance *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  uchar local_res8 [8];
  <lambda_1> local_res10;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> local_18;
  
  FPreAnimatedStateExtension::GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraCutStorage>
            (&param_1->PreAnimatedState,&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraCutStorage>)
             FPreAnimatedCameraCutStorage::StorageID);
  pFVar1 = (param_2->SharedPlaybackState).Object;
  pTVar2 = (param_2->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar5 = FWeakObjectPtr::Get(&(pFVar1->WeakPlaybackContext).WeakPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *)local_18.Object ==
      (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8[0] = '\0';
  local_res10.PlaybackContext = pUVar5;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
  CachePreAnimatedValue<_UE::MovieScene::FCameraCutGameHandler::CachePreAnimatedValue_::__l2::<lambda_1>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *)
             local_18.Object,(FPreAnimatedStorageGroupHandle)0xffffffff,local_res8,&local_res10,
             AlwaysCache);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ForcePreAnimatedValueRestore @ 1468b4e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FCameraCutGameHandler::ForcePreAnimatedValueRestore
          (UMovieSceneEntitySystemLinker *param_1,FSequenceInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> local_28;
  UMovieSceneEntitySystemLinker *local_18;
  FRootInstanceHandle local_10;
  
  FPreAnimatedStateExtension::GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraCutStorage>
            (&param_1->PreAnimatedState,&local_28,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraCutStorage>)
             FPreAnimatedCameraCutStorage::StorageID);
  local_10 = param_2->RootInstanceHandle;
  local_18 = param_1;
  if ((local_28.Object == (FPreAnimatedCameraCutStorage *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(local_28.Object)->field_0x20 != *(int *)&(local_28.Object)->field_0x4c) {
    piVar3 = *(int **)&(local_28.Object)->field_0x58;
    if (*(int **)&(local_28.Object)->field_0x58 == (int *)0x0) {
      piVar3 = (int *)&(local_28.Object)->field_0x50;
    }
    iVar4 = *piVar3;
    if (iVar4 != -1) {
      do {
        pcVar5 = (char *)((longlong)iVar4 * 0x10 + *(longlong *)&(local_28.Object)->field_0x18);
        if (*pcVar5 == '\0') {
          if ((pcVar5 != (char *)0x0) && (*(int *)(pcVar5 + 4) != -1)) {
            if ((local_28.Object == (FPreAnimatedCameraCutStorage *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (**(code **)(*(longlong *)local_28.Object + 0x20))(local_28.Object,0,2,1,&local_18);
          }
          break;
        }
        iVar4 = *(int *)(pcVar5 + 8);
      } while (iVar4 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetCameraCut @ 1468cdee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCameraCutGameHandler::SetCameraCut
          (FCameraCutGameHandler *this,UObject *param_1,FMovieSceneCameraCutParams *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *pFVar2;
  APlayerCameraManager *pAVar3;
  code *pcVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  FCameraCutPlaybackCapability *pFVar9;
  IMovieScenePlayer *pIVar10;
  UObject *pUVar11;
  longlong lVar12;
  UClass *pUVar13;
  EAspectRatioAxisConstraint *pEVar14;
  int *piVar15;
  UCameraComponent *pUVar16;
  UMovieSceneMotionVectorSimulationSystem *pUVar17;
  ULocalPlayer *pUVar18;
  int iVar19;
  FPreAnimatedCameraCutState *pFVar20;
  uint uVar21;
  TObjectPtr<AActor>_u_0 TVar22;
  undefined1 *puVar23;
  AActor *pAVar24;
  TObjectPtr<AActor>_u_0 TVar25;
  TObjectPtr<AActor>_u_0 TVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_188 [8];
  FCameraCutPlaybackCapability *local_180;
  FWeakObjectPtr local_178;
  uint local_170;
  AActor *local_168;
  EAspectRatioAxisConstraint local_160 [2];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_158;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> local_148;
  float local_138;
  undefined4 local_134;
  float local_130;
  uint local_12c;
  FName local_128;
  FName local_120;
  FName local_118;
  APlayerController *local_110;
  IMovieScenePlayer *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined4 local_cc;
  uint local_c4;
  TObjectPtr<AActor>_u_0 local_c0;
  UCameraComponent *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [24];
  FObjectKey local_90;
  
  TVar26.DebugPtr = (AActor *)0x0;
  pTVar1 = (this->SequenceInstance->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  local_158.Object = (this->SequenceInstance->SharedPlaybackState).Object;
  local_158.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = FSharedPlaybackState::FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>
                       (local_158.Object);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    pFVar9 = FSharedPlaybackState::FindCapability<UE::MovieScene::FCameraCutPlaybackCapability>
                       (local_158.Object);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180 = pFVar9;
  pIVar10 = FPlayerIndexPlaybackCapability::GetPlayer(&local_158);
  local_108 = pIVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar9 == (FCameraCutPlaybackCapability *)0x0) {
    if (pIVar10 != (IMovieScenePlayer *)0x0) {
      cVar6 = (**(code **)(pIVar10->_padding_ + 0xd0))(pIVar10);
      goto LAB_1468cdf9a;
    }
  }
  else {
    cVar6 = (**(code **)*pFVar9)(pFVar9);
LAB_1468cdf9a:
    if (cVar6 == '\0') {
      return;
    }
  }
  pTVar1 = (this->SequenceInstance->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->SequenceInstance->SharedPlaybackState).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar11 = FWeakObjectPtr::Get(&(pFVar2->WeakPlaybackContext).WeakPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pUVar11 == (UObject *)0x0) {
    return;
  }
  lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x180))(pUVar11);
  if (lVar12 == 0) {
    return;
  }
  if (*(longlong *)(lVar12 + 0x230) == 0) {
    return;
  }
  if (*(char *)(lVar12 + 0x18a) == '\x02') {
    return;
  }
  if (*(char *)(lVar12 + 0x18a) == '\x04') {
    return;
  }
  local_110 = GetPlaybackController(pUVar11);
  if (local_110 == (APlayerController *)0x0) {
    return;
  }
  pAVar3 = (local_110->PlayerCameraManager).field0_0x0.DebugPtr;
  if (pAVar3 == (APlayerCameraManager *)0x0) {
    return;
  }
  pAVar24 = (pAVar3->PendingViewTarget).Target.field0_0x0.DebugPtr;
  if (pAVar24 == (AActor *)0x0) {
    pAVar24 = (pAVar3->ViewTarget).Target.field0_0x0.DebugPtr;
  }
  TVar22 = (TObjectPtr<AActor>_u_0)param_2->UnlockIfCameraObject;
  local_168 = pAVar24;
  if (TVar22.DebugPtr == (AActor *)0x0) {
LAB_1468ce08d:
    TVar22.DebugPtr = TVar26.DebugPtr;
  }
  else {
    pUVar13 = Z_Construct_UClass_AActor_NoRegister();
    iVar19 = (int)pUVar13->_padding_;
    if ((*(int *)((TVar22.DebugPtr)->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar19 * 8)
        != &pUVar13->_padding_)) goto LAB_1468ce08d;
  }
  if (((param_1 == (UObject *)0x0) && (TVar22.DebugPtr != (AActor *)0x0)) &&
     (TVar22.DebugPtr != pAVar24)) {
    return;
  }
  bVar8 = false;
  if (((pFVar9 != (FCameraCutPlaybackCapability *)0x0) &&
      (pEVar14 = (EAspectRatioAxisConstraint *)
                 (**(code **)((longlong)*pFVar9 + 0x10))(pFVar9,local_a8), pEVar14 != local_160)) &&
     ((char)pEVar14[1] != AspectRatio_MaintainYFOV)) {
    local_160[0] = *pEVar14;
    bVar8 = true;
  }
  if (param_1 == (UObject *)0x0) {
    FPreAnimatedStateExtension::FindStorage<UE::MovieScene::FPreAnimatedCameraCutStorage>
              (&this->Linker->PreAnimatedState,&local_148,
               (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraCutStorage>)
               FPreAnimatedCameraCutStorage::StorageID);
    if ((local_148.Object == (FPreAnimatedCameraCutStorage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(local_148.Object)->field_0x20 != *(int *)&(local_148.Object)->field_0x4c) {
      piVar15 = *(int **)&(local_148.Object)->field_0x58;
      if (*(int **)&(local_148.Object)->field_0x58 == (int *)0x0) {
        piVar15 = (int *)&(local_148.Object)->field_0x50;
      }
      iVar19 = *piVar15;
      if (iVar19 != -1) {
        lVar12 = *(longlong *)&(local_148.Object)->field_0x18;
        do {
          if (*(char *)(lVar12 + (longlong)iVar19 * 0x10) == '\0') {
            if ((iVar19 != -1) && (lVar12 = (longlong)iVar19 * 0x10 + lVar12, lVar12 != 0)) {
              uVar21 = *(uint *)(lVar12 + 4);
              if (uVar21 == 0xffffffff) goto LAB_1468ce17e;
              goto LAB_1468ce195;
            }
            break;
          }
          iVar19 = *(int *)(lVar12 + 8 + (longlong)iVar19 * 0x10);
        } while (iVar19 != -1);
      }
    }
    uVar21 = 0xffffffff;
LAB_1468ce17e:
    local_188[0] = 0;
    bVar7 = `UE::MovieScene::FCameraCutGameHandler::SetCameraCut'::__l24::<lambda_1>::operator()
                      (local_188);
    if (bVar7) {
LAB_1468ce195:
      if ((local_148.Object == (FPreAnimatedCameraCutStorage *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastViewTarget.ObjectSerialNumber = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastAspectRatioAxisConstraint.TypedValue = AspectRatio_MaintainYFOV;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastAspectRatioAxisConstraint._5_2_ = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastWorld.ObjectIndex = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastWorld.ObjectSerialNumber = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastLocalPlayer.ObjectIndex = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastLocalPlayer.ObjectSerialNumber = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastAspectRatioAxisConstraint._7_1_ = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastViewTarget.ObjectIndex = 0;
        `public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
        ::__l2::DefaultValue.LastAspectRatioAxisConstraint.bIsSet = false;
        _Init_thread_footer(&`public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      if (((int)uVar21 < 0) || (*(int *)&(local_148.Object)->field_0x90 <= (int)uVar21)) {
LAB_1468ce269:
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352369>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x231,"PreAnimatedStorage.IsValidIndex(StorageIndex.Value)");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1468ce296:
        pFVar20 = &`public:_struct_UE::MovieScene::FPreAnimatedCameraCutState_const&___ptr64___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::GetCachedValue(UE::MovieScene::FPreAnimatedStorageIndex)const___ptr64'
                   ::__l2::DefaultValue;
      }
      else {
        puVar23 = &(local_148.Object)->field_0x78;
        if (*(undefined1 **)&(local_148.Object)->field_0x88 != (undefined1 *)0x0) {
          puVar23 = *(undefined1 **)&(local_148.Object)->field_0x88;
        }
        if ((*(uint *)(puVar23 + (longlong)((int)(uVar21 + ((int)uVar21 >> 0x1f & 0x1fU)) >> 5) * 4)
             >> (uVar21 & 0x1f) & 1) == 0) goto LAB_1468ce269;
        if ((*(byte *)(*(longlong *)&(local_148.Object)->field_0x68 + 0x24 +
                      (longlong)(int)uVar21 * 0x28) & 1) == 0) goto LAB_1468ce296;
        pFVar20 = (FPreAnimatedCameraCutState *)
                  ((longlong)(int)uVar21 * 0x28 + 4 + *(longlong *)&(local_148.Object)->field_0x68);
      }
      local_90 = pFVar20->LastViewTarget;
      local_178.ObjectSerialNumber = local_90.ObjectSerialNumber;
      local_178.ObjectIndex = local_90.ObjectIndex;
      bVar8 = (pFVar20->LastAspectRatioAxisConstraint).bIsSet == false;
      if (bVar8) {
        param_1 = FWeakObjectPtr::Get(&local_178);
      }
      else {
        local_160[0] = (pFVar20->LastAspectRatioAxisConstraint).TypedValue;
        param_1 = FWeakObjectPtr::Get(&local_178);
      }
      bVar8 = !bVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if ((AActor *)param_1 != (AActor *)0x0) goto LAB_1468ce2f7;
LAB_1468ce31d:
    TVar22.DebugPtr = TVar26.DebugPtr;
  }
  else {
LAB_1468ce2f7:
    pUVar13 = Z_Construct_UClass_AActor_NoRegister();
    iVar19 = (int)pUVar13->_padding_;
    if ((*(int *)(((AActor *)param_1)->_padding_ + 0x38) < iVar19) ||
       (TVar22 = (TObjectPtr<AActor>_u_0)param_1,
       (longlong *)
       *(undefined1 **)(*(longlong *)(((AActor *)param_1)->_padding_ + 0x30) + (longlong)iVar19 * 8)
       != &pUVar13->_padding_)) goto LAB_1468ce31d;
  }
  pUVar16 = MovieSceneHelpers::CameraComponentFromRuntimeObject(param_1);
  pFVar9 = local_180;
  fVar28 = __real_40000000;
  fVar5 = __real_3f800000;
  if ((pUVar16 != (UCameraComponent *)0x0) && ((UObject *)pUVar16->_padding_ != param_1)) {
    param_1 = (UObject *)pUVar16->_padding_;
  }
  if ((AActor *)param_1 == local_168) {
    if (param_2->bJumpCut == false) {
      return;
    }
    (**(code **)(pAVar3->_padding_ + 0x920))(pAVar3);
    if (pUVar16 != (UCameraComponent *)0x0) {
      (**(code **)(pUVar16->_padding_ + 0x668))(pUVar16);
    }
    pUVar17 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneMotionVectorSimulationSystem>
                        (this->Linker);
    if (pUVar17 == (UMovieSceneMotionVectorSimulationSystem *)0x0) {
      return;
    }
    UMovieSceneMotionVectorSimulationSystem::SimulateAllTransforms(pUVar17);
    return;
  }
  uVar21 = local_c4 & 0xfffffffe;
  fVar29 = 0.0;
  local_cc = CONCAT31(local_cc._1_3_,1);
  local_170 = uVar21;
  if ((((param_2->BlendType).bIsSet == false) || (param_2->BlendTime <= 0.0)) ||
     (__real_3f800000 < param_2->PreviewBlendFactor ||
      __real_3f800000 == param_2->PreviewBlendFactor)) {
    if (5 < (byte)LogMovieScene._0_1_) {
      if (TVar22.DebugPtr != (AActor *)0x0) {
        local_118 = (FName)(TVar22.DebugPtr)->_padding_;
        TVar26.DebugPtr = (AActor *)&DAT_00000004;
        ::FName::ToString(&local_118,&local_e0);
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      pFVar9 = local_180;
      if ((TVar26.DebugPtr != (AActor *)0x0) &&
         (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        pFVar9 = local_180;
      }
    }
  }
  else {
    fVar27 = __real_3f800000;
    if (local_180 != (FCameraCutPlaybackCapability *)0x0) {
      fVar27 = (float)(**(code **)((longlong)*local_180 + 8))(local_180);
    }
    fVar29 = (float)((uint)fVar27 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((float)((uint)fVar27 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar29 = __real_322bcc77;
    }
    fVar29 = param_2->BlendTime / fVar29;
    if (5 < (byte)LogMovieScene._0_1_) {
      TVar25.DebugPtr = TVar26.DebugPtr;
      if (TVar22.DebugPtr != (AActor *)0x0) {
        local_128 = (FName)(TVar22.DebugPtr)->_padding_;
        TVar25.DebugPtr = (AActor *)&DAT_00000001;
        ::FName::ToString(&local_128,&local_f0);
      }
      if (local_168 != (AActor *)0x0) {
        local_120 = (FName)local_168->_padding_;
        TVar25._0_4_ = TVar25._0_4_ | 2;
        TVar25._4_4_ = 0;
        ::FName::ToString(&local_120,&local_100);
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if ((((ulonglong)TVar25.DebugPtr & 2) != 0) &&
         (TVar25._0_4_ = TVar25._0_4_ & 0xfffffffd, TVar25._4_4_ = 0,
         local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)TVar25.DebugPtr & 1) != 0) &&
         (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    if (((param_2->BlendType).bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    switch((param_2->BlendType).TypedValue) {
    default:
      fVar28 = fVar5;
      break;
    case QuadIn:
      TVar26.DebugPtr = (AActor *)&DAT_00000002;
      break;
    case QuadOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000003;
      break;
    case QuadInOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000004;
      break;
    case Cubic:
    case HermiteCubicInOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000001;
      fVar28 = __real_40400000;
      break;
    case CubicIn:
      TVar26.DebugPtr = (AActor *)&DAT_00000002;
      fVar28 = __real_40400000;
      break;
    case CubicOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000003;
      fVar28 = __real_40400000;
      break;
    case CubicInOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000004;
      fVar28 = __real_40400000;
      break;
    case QuartIn:
      TVar26.DebugPtr = (AActor *)&DAT_00000002;
      fVar28 = __real_40800000;
      break;
    case QuartOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000003;
      fVar28 = __real_40800000;
      break;
    case QuartInOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000004;
      fVar28 = __real_40800000;
      break;
    case QuintIn:
      TVar26.DebugPtr = (AActor *)&DAT_00000002;
      fVar28 = __real_40a00000;
      break;
    case QuintOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000003;
      fVar28 = __real_40a00000;
      break;
    case QuintInOut:
      TVar26.DebugPtr = (AActor *)&DAT_00000004;
      fVar28 = __real_40a00000;
    }
    local_cc = CONCAT31(local_cc._1_3_,TVar26._0_1_);
    uVar21 = (param_2->bLockPreviousCamera ^ local_170) & 1 ^ local_170;
    if ((TVar22.DebugPtr != (AActor *)0x0) &&
       ((pAVar3->PendingViewTarget).Target.field0_0x0.DebugPtr == TVar22.DebugPtr)) {
      if (5 < (byte)LogMovieScene._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      goto LAB_1468ce716;
    }
  }
  local_134 = local_cc;
  local_138 = fVar29;
  local_130 = fVar28;
  local_12c = uVar21;
  (**(code **)(pAVar3->_padding_ + 0x898))(pAVar3,TVar22.DebugPtr,&local_138);
LAB_1468ce716:
  pUVar18 = APlayerController::GetLocalPlayer(local_110);
  if ((pUVar18 != (ULocalPlayer *)0x0) && (bVar8)) {
    (pUVar18->AspectRatioAxisConstraint).Value = (undefined1)local_160[0];
  }
  if (((param_2->BlendType).bIsSet == false) || (param_2->bJumpCut != false)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((pUVar16 == (UCameraComponent *)0x0) || (!bVar8)) {
    pAVar3->bClientSimulatingViewTarget = 0;
    *(uint *)&pAVar3->field_0x2810 =
         *(uint *)&pAVar3->field_0x2810 | -(uint)(TVar22.DebugPtr != (AActor *)0x0) & 0x80;
    if (!bVar8) {
      return;
    }
  }
  else {
    (**(code **)(pUVar16->_padding_ + 0x668))();
    pAVar3->bClientSimulatingViewTarget = 0;
    *(uint *)&pAVar3->field_0x2810 =
         *(uint *)&pAVar3->field_0x2810 | -(uint)(TVar22.DebugPtr != (AActor *)0x0) & 0x80;
  }
  (**(code **)(pAVar3->_padding_ + 0x920))(pAVar3);
  pUVar17 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneMotionVectorSimulationSystem>
                      (this->Linker);
  if (pUVar17 != (UMovieSceneMotionVectorSimulationSystem *)0x0) {
    UMovieSceneMotionVectorSimulationSystem::SimulateAllTransforms(pUVar17);
  }
  local_b0 = 1;
  local_c0 = TVar22;
  local_b8 = pUVar16;
  if (pFVar9 == (FCameraCutPlaybackCapability *)0x0) {
    if (local_108 != (IMovieScenePlayer *)0x0) {
      (**(code **)(local_108->_padding_ + 0xe0))(local_108,TVar22.DebugPtr,0,1);
    }
  }
  else {
    (**(code **)((longlong)*pFVar9 + 0x18))(pFVar9,&local_c0);
  }
  return;
}

// operator() @ 1504f56d0

bool __thiscall
`UE::MovieScene::FCameraCutGameHandler::SetCameraCut'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8038938602010312406>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8038938602010312406>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

