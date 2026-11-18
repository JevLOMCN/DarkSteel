// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// AnimateBlendedCameraCut @ 1468aa9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FCameraCutAnimator::AnimateBlendedCameraCut
          (FCameraCutAnimator *this,FBlendedCameraCut *param_1,
          UMovieSceneEntitySystemLinker *param_2,FSequenceInstance *param_3)

{
  TOptional<EMovieSceneBuiltInEasing> *pTVar1;
  undefined1 *puVar2;
  float fVar3;
  undefined2 uVar4;
  undefined2 uVar6;
  FInstanceHandle FVar5;
  TReferenceControllerBase<1> *pTVar7;
  FSharedPlaybackState *pFVar8;
  FCameraCutCache *pFVar9;
  UMovieSceneSection *pUVar10;
  code *pcVar11;
  FCameraCutAnimator *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  byte bVar15;
  UObject *pUVar16;
  UObject *pUVar17;
  UObject *pUVar18;
  undefined1 auStackY_1b8 [32];
  uchar local_188 [8];
  FMovieSceneCameraCutParams local_180;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_158;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_148;
  <lambda_1> local_138;
  FCameraCutAnimator *local_130;
  UObject *local_128;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraCutStorage,1> local_120;
  FMovieSceneObjectBindingID local_108;
  FMovieSceneObjectBindingID local_e8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_c8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_b8;
  FCameraCutGameHandler local_a8;
  FCameraCutGameHandler local_98;
  FScopedPreAnimatedCaptureSource local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar7 = (param_3->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  local_158.Object = (param_3->SharedPlaybackState).Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_108.Guid.A = (param_1->CameraBindingID).Guid.A;
    local_108.Guid.B = (param_1->CameraBindingID).Guid.B;
    local_108.Guid.C = (param_1->CameraBindingID).Guid.C;
    local_108.Guid.D = (param_1->CameraBindingID).Guid.D;
    local_108.SequenceID = (param_1->CameraBindingID).SequenceID;
    local_108.ResolveParentIndex = (param_1->CameraBindingID).ResolveParentIndex;
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_108.Guid.A = (param_1->CameraBindingID).Guid.A;
    local_108.Guid.B = (param_1->CameraBindingID).Guid.B;
    local_108.Guid.C = (param_1->CameraBindingID).Guid.C;
    local_108.Guid.D = (param_1->CameraBindingID).Guid.D;
    local_108.SequenceID = (param_1->CameraBindingID).SequenceID;
    local_108.ResolveParentIndex = (param_1->CameraBindingID).ResolveParentIndex;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158.SharedReferenceCount.ReferenceController = pTVar7;
  local_130 = this;
  FMovieSceneObjectBindingID::ResolveBoundObjects
            (&local_108,&local_c8,(FMovieSceneSequenceID)(param_1->OperandSequenceID).Value,
             &local_158);
  pUVar18 = (UObject *)0x0;
  pUVar16 = pUVar18;
  if (0 < local_c8.ArrayNum) {
    pUVar16 = FWeakObjectPtr::Get(&(local_c8.DataPtr)->WeakPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (((((param_1->CameraBindingID).Guid.D != 0 || (param_1->CameraBindingID).Guid.C != 0) ||
       (param_1->CameraBindingID).Guid.B != 0) || (param_1->CameraBindingID).Guid.A != 0) &&
     (pUVar16 == (UObject *)0x0)) {
    return false;
  }
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_88,param_2,&param_1->Input);
  FPreAnimatedStateExtension::GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraCutStorage>
            (&param_2->PreAnimatedState,&local_120,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraCutStorage>)
             FPreAnimatedCameraCutStorage::StorageID);
  pTVar7 = (param_3->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_3->SharedPlaybackState).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar17 = FWeakObjectPtr::Get(&(pFVar8->WeakPlaybackContext).WeakPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *)local_120.Object ==
       (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    uVar14 = (*pcVar11)();
    return (bool)uVar14;
  }
  local_188[0] = '\0';
  local_138.PlaybackContext = pUVar17;
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
  CachePreAnimatedValue<_UE::MovieScene::FCameraCutGameHandler::CachePreAnimatedValue_::__l2::<lambda_1>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *)
             local_120.Object,(FPreAnimatedStorageGroupHandle)0xffffffff,local_188,&local_138,
             AlwaysCache);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  pTVar7 = (param_3->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_3->SharedPlaybackState).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar17 = FWeakObjectPtr::Get(&(pFVar8->WeakRootSequence).WeakPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pUVar17 == (UObject *)0x0) {
    bVar15 = 0;
  }
  else {
    bVar15 = (byte)pUVar17[2].field_0x1b >> 3 & 1;
  }
  if ((!(param_3->Context).bHasJumped) || ((bVar15 == 0 && ((param_3->Context).bHasLooped)))) {
    local_180.bJumpCut = false;
  }
  else {
    local_180.bJumpCut = true;
  }
  fVar3 = (param_1->EaseIn).RootBlendTime;
  pTVar1 = &(param_1->EaseIn).BlendType;
  local_180.UnlockIfCameraObject = (UObject *)0x0;
  local_180.BlendType.bIsSet = false;
  if ((pTVar1 != &local_180.BlendType) && ((param_1->EaseIn).BlendType.bIsSet != false)) {
    local_180.BlendType.TypedValue = pTVar1->TypedValue;
    local_180.BlendType.bIsSet = true;
  }
  local_180.bLockPreviousCamera = param_1->bLockPreviousCamera;
  pTVar7 = (param_3->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  local_148.Object = (param_3->SharedPlaybackState).Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_e8.Guid.A = (param_1->PreviousCameraBindingID).Guid.A;
    local_e8.Guid.B = (param_1->PreviousCameraBindingID).Guid.B;
    local_e8.Guid.C = (param_1->PreviousCameraBindingID).Guid.C;
    local_e8.Guid.D = (param_1->PreviousCameraBindingID).Guid.D;
    local_e8.SequenceID = (param_1->PreviousCameraBindingID).SequenceID;
    local_e8.ResolveParentIndex = (param_1->PreviousCameraBindingID).ResolveParentIndex;
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_e8.Guid.A = (param_1->PreviousCameraBindingID).Guid.A;
    local_e8.Guid.B = (param_1->PreviousCameraBindingID).Guid.B;
    local_e8.Guid.C = (param_1->PreviousCameraBindingID).Guid.C;
    local_e8.Guid.D = (param_1->PreviousCameraBindingID).Guid.D;
    local_e8.SequenceID = (param_1->PreviousCameraBindingID).SequenceID;
    local_e8.ResolveParentIndex = (param_1->PreviousCameraBindingID).ResolveParentIndex;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180.BlendTime = fVar3;
  local_148.SharedReferenceCount.ReferenceController = pTVar7;
  FMovieSceneObjectBindingID::ResolveBoundObjects
            (&local_e8,&local_b8,(FMovieSceneSequenceID)(param_1->PreviousOperandSequenceID).Value,
             &local_148);
  if (0 < local_b8.ArrayNum) {
    pUVar18 = FWeakObjectPtr::Get(&(local_b8.DataPtr)->WeakPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar12 = local_130;
  local_180.PreviewBlendFactor = param_1->PreviewBlendFactor;
  local_180.bCanBlend = param_1->bCanBlend;
  pFVar9 = local_130->CameraCutCache;
  local_180.PreviousCameraObject = pUVar18;
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar9);
  if ((pUVar16 == pUVar18) &&
     ((param_1->Input).Section.field0_0x0.DebugPtr ==
      (pFVar9->LastInput).Section.field0_0x0.DebugPtr)) {
    uVar4 = (pFVar9->LastInput).InstanceHandle.InstanceID;
    uVar6 = (pFVar9->LastInput).InstanceHandle.InstanceSerial;
    FVar5 = (param_1->Input).InstanceHandle;
    if ((FVar5.InstanceID != uVar4) || (FVar5.InstanceSerial != uVar6)) goto LAB_1468aacf3;
    if ((pUVar16 == (UObject *)0x0) && (fVar3 <= 0.0)) {
      bVar13 = false;
      goto LAB_1468aad6e;
    }
    local_a8.Linker = param_2;
    local_a8.SequenceInstance = param_3;
    FCameraCutGameHandler::SetCameraCut(&local_a8,pUVar16,&local_180);
  }
  else {
LAB_1468aacf3:
    local_180.UnlockIfCameraObject = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar12->CameraCutCache);
    local_98.Linker = param_2;
    local_98.SequenceInstance = param_3;
    FCameraCutGameHandler::SetCameraCut(&local_98,pUVar16,&local_180);
    pFVar9 = pFVar12->CameraCutCache;
    local_128 = pUVar16;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar16);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar9,(FObjectPtr)&local_128);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 = (param_1->Input).Section.field0_0x0.DebugPtr, pUVar10 != (UMovieSceneSection *)0x0
       )) {
      GC::MarkAsReachable((UObject *)pUVar10);
    }
    (pFVar9->LastInput).Section.field0_0x0 = (param_1->Input).Section.field0_0x0;
    *(FInstanceHandle *)&(pFVar9->LastInput).InstanceHandle.InstanceID =
         (param_1->Input).InstanceHandle;
    (pFVar9->LastInput).bInputHasBeenProcessed = (param_1->Input).bInputHasBeenProcessed;
  }
  bVar13 = true;
LAB_1468aad6e:
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_88);
  return bVar13;
}

// AnimatePreRoll @ 1468aadc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCameraCutAnimator::AnimatePreRoll
          (FCameraCutAnimator *this,FPreRollCameraCut *param_1,FSequenceInstance *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FStreamingManagerCollection *pFVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FMovieSceneSequenceID FVar7;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_78;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_68;
  FMovieSceneObjectBindingID local_58;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if (param_1->bHasCutTransform != false) {
    local_38._s_0.X = (param_1->CutTransform).Translation.XY.m128d_f64[0];
    local_38._s_0.Y = (param_1->CutTransform).Translation.XY.m128d_f64[1];
    local_38._s_0.Z = (param_1->CutTransform).Translation.ZW.m128d_f64[0];
    pFVar4 = IStreamingManager::Get();
    IStreamingManager::AddViewLocation
              ((IStreamingManager *)pFVar4,(TVector<double> *)&local_38._s_0,__real_3f800000,false,
               0.0);
    return;
  }
  local_78.Object = (param_2->SharedPlaybackState).Object;
  pTVar2 = (param_2->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    local_58.Guid.A = (param_1->CameraBindingID).Guid.A;
    local_58.Guid.B = (param_1->CameraBindingID).Guid.B;
    local_58.Guid.C = (param_1->CameraBindingID).Guid.C;
    local_58.Guid.D = (param_1->CameraBindingID).Guid.D;
    FVar7.Value = (param_2->SequenceID).Value;
    local_58.SequenceID = (param_1->CameraBindingID).SequenceID;
    local_58.ResolveParentIndex = (param_1->CameraBindingID).ResolveParentIndex;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    local_58.Guid.A = (param_1->CameraBindingID).Guid.A;
    local_58.Guid.B = (param_1->CameraBindingID).Guid.B;
    local_58.Guid.C = (param_1->CameraBindingID).Guid.C;
    local_58.Guid.D = (param_1->CameraBindingID).Guid.D;
    FVar7.Value = (param_2->SequenceID).Value;
    local_58.SequenceID = (param_1->CameraBindingID).SequenceID;
    local_58.ResolveParentIndex = (param_1->CameraBindingID).ResolveParentIndex;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.SharedReferenceCount.ReferenceController = pTVar2;
  FMovieSceneObjectBindingID::ResolveBoundObjects(&local_58,&local_68,FVar7,&local_78);
  if (local_68.ArrayNum < 1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&(local_68.DataPtr)->WeakPtr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_1468aaf05;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_1468aaf05:
  if (pUVar5 != (UObject *)0x0) {
    lVar3 = *(longlong *)(pUVar5 + 0xb);
    local_20._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_20._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_20._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_20._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar3 != 0) {
      local_20._0_4_ = *(undefined4 *)(lVar3 + 0x210);
      local_20._4_4_ = *(undefined4 *)(lVar3 + 0x214);
      local_20._8_4_ = *(undefined4 *)(lVar3 + 0x218);
      local_20._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
      local_20._s_0.Z = *(double *)(lVar3 + 0x220);
    }
    pFVar4 = IStreamingManager::Get();
    IStreamingManager::AddViewLocation
              ((IStreamingManager *)pFVar4,(TVector<double> *)&local_20._s_0,__real_3f800000,false,
               0.0);
  }
  return;
}

