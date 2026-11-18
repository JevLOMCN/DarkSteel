// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ApplyFade @ 14681cae0

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

void __cdecl
UE::MovieScene::FFadeUtil::ApplyFade
          (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,float param_2,
          FLinearColor *param_3,bool param_4)

{
  ulonglong uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  APlayerCameraManager *pAVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  IMovieScenePlayer *pIVar13;
  EMovieSceneViewportParams *pEVar14;
  UObject *pUVar15;
  APlayerController *pAVar16;
  byte bVar17;
  longlong lVar18;
  int iVar19;
  uint *puVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206 [2];
  byte local_204;
  int local_200;
  FLinearColor *local_1f8;
  longlong *local_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  FPlaybackCapabilityPtr local_190;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_180;
  undefined4 local_168;
  float fStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138;
  undefined7 uStack_137;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  ulonglong local_a8;
  longlong *plVar23;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_228;
  uStack_160 = *(undefined8 *)&param_3->field0_0x0;
  uStack_158 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  local_138 = 0;
  local_168 = 3;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_207 = param_4;
  local_1f8 = param_3;
  fStack_164 = param_2;
  bVar11 = IsInGameThread();
  if (!bVar11) {
    local_208 = bVar11;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::FViewportSettingsPlaybackCapability>'::__l2::<lambda_1>::
    operator()(&local_208);
  }
  FViewportSettingsPlaybackCapability::GetPlaybackCapabilityID();
  uVar12 = 1;
  FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,&local_190,1 << (local_204 & 0x1f));
  plVar23 = (longlong *)0x0;
  plVar21 = plVar23;
  if ((local_190.Ptr != (longlong *)0x0) &&
     (plVar21 = local_190.Ptr, local_190.StorageMode != Inline)) {
    if ((local_190.StorageMode == RawPointer) || (local_190.StorageMode == SharedPointer)) {
      plVar21 = *(longlong **)local_190.Ptr;
    }
    else {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                          ,0x30,L"Unexpected playback capability storage mode");
      plVar21 = plVar23;
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180.Object = pFVar3;
  local_180.SharedReferenceCount.ReferenceController = pTVar2;
  pIVar13 = FPlayerIndexPlaybackCapability::GetPlayer(&local_180);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  uVar22 = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  if (plVar21 == (longlong *)0x0) {
    if (pIVar13 != (IMovieScenePlayer *)0x0) {
      (**(code **)(pIVar13->_padding_ + 0x38))(pIVar13,local_f8);
    }
  }
  else {
    (**(code **)(*plVar21 + 8))(plVar21,local_f8);
  }
  uVar26 = local_d0;
  local_1d0 = 0;
  uStack_1d4 = local_1d0;
  if (local_d0 != 0) {
    puVar20 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar20 = local_d8;
    }
    uVar25 = *puVar20;
    plVar24 = plVar23;
    local_1d0 = 0;
    uVar22 = 0;
    while (uVar25 == 0) {
      iVar19 = (int)plVar23;
      local_1d0 = (int)plVar24 + 0x20;
      plVar24 = (longlong *)(ulonglong)local_1d0;
      uVar22 = iVar19 + 1;
      plVar23 = (longlong *)(ulonglong)uVar22;
      uStack_1d4 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
      goto LAB_14681ccf1;
      uVar25 = puVar20[(longlong)iVar19 + 1];
    }
    uVar12 = -uVar25 & uVar25;
    uVar1 = (ulonglong)uVar12 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_200 = (int)lVar18;
    uStack_1d4 = (local_1d0 - 1) + local_200;
    if ((int)local_d0 < (int)uStack_1d4) {
      uStack_1d4 = local_d0;
    }
  }
LAB_14681ccf1:
  local_1f0 = (longlong *)local_f8;
  uStack_1cc = local_fc;
  local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  iStack_1c8 = local_f8._8_4_ - local_c4;
  uVar25 = local_d0 & 0xffffffe0;
  uStack_1d8 = 0xffffffff;
  TStack_1b8.CurrentBitIndex = uStack_1d4;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  TStack_1b8._padding_ = CONCAT44(uVar12,uVar22);
  iVar19 = (int)local_d0 >> 5;
  TStack_1b8._28_4_ = local_fc;
  TStack_1b8.BaseBitIndex = local_1d0;
  uStack_198 = CONCAT44(uStack_1c4,iStack_1c8);
  bVar17 = (byte)local_d0;
  uStack_1e8 = uVar22;
  uStack_1e4 = uVar12;
  local_1c0 = local_1f0;
  TStack_1b8.Array = local_1e0;
  if (((int)local_d0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = uStack_158;
  uVar9 = uStack_160;
  fVar8 = fStack_164;
  uVar7 = local_168;
  if (uVar26 != local_d0) {
    puVar20 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar20 = local_d8;
    }
    uVar12 = -1 << (bVar17 & 0x1f) & puVar20[iVar19];
    while (uVar12 == 0) {
      lVar18 = (longlong)iVar19;
      uVar25 = uVar25 + 0x20;
      iVar19 = iVar19 + 1;
      uVar26 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14681cdfd;
      uVar12 = puVar20[lVar18 + 1];
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar26 = (int)lVar18 + -1 + uVar25;
    if ((int)local_d0 < (int)uVar26) {
      uVar26 = local_d0;
    }
  }
LAB_14681cdfd:
  uVar6 = CONCAT71(uStack_137,local_138);
  while( true ) {
    plVar23 = local_1c0;
    if ((int)local_1c0[1] - *(int *)((longlong)local_1c0 + 0x34) != (int)uStack_198) {
      `TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_206);
    }
    if (((TStack_1b8.CurrentBitIndex == uVar26) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
       (plVar23 == (longlong *)local_f8)) break;
    pEVar14 = TMapBase<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
              ::FindChecked((TMapBase<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
                             *)local_f8,
                            *(FViewportClient **)
                             (*plVar23 + (longlong)TStack_1b8.CurrentBitIndex * 0x48));
    pEVar14->SetWhichViewportParam = uVar7;
    pEVar14->FadeAmount = fVar8;
    *(undefined8 *)&(pEVar14->FadeColor).field0_0x0 = uVar9;
    *(undefined8 *)((longlong)&(pEVar14->FadeColor).field0_0x0 + 8) = uVar10;
    (pEVar14->ColorScale).field0_0x0._s_0.X = dStack_150;
    (pEVar14->ColorScale).field0_0x0._s_0.Y = local_148;
    (pEVar14->ColorScale).field0_0x0._s_0.Z = dStack_140;
    *(undefined8 *)&pEVar14->bEnableColorScaling = uVar6;
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  }
  if (plVar21 == (longlong *)0x0) {
    if (pIVar13 != (IMovieScenePlayer *)0x0) {
      (**(code **)(pIVar13->_padding_ + 0x30))(pIVar13,local_f8);
    }
  }
  else {
    (**(code **)*plVar21)(plVar21,local_f8);
  }
  pUVar15 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  if (((((pUVar15 != (UObject *)0x0) &&
        (lVar18 = (**(code **)(*(longlong *)pUVar15 + 0x180))(pUVar15), lVar18 != 0)) &&
       ((*(char *)(lVar18 + 0x18a) == '\x01' || (*(char *)(lVar18 + 0x18a) == '\x03')))) &&
      ((pAVar16 = UGameInstance::GetFirstLocalPlayerController
                            (*(UGameInstance **)(lVar18 + 0x230),(UWorld *)0x0),
       pAVar16 != (APlayerController *)0x0 &&
       (pAVar4 = (pAVar16->PlayerCameraManager).field0_0x0.DebugPtr,
       pAVar4 != (APlayerCameraManager *)0x0)))) && (((uint)pAVar4->_padding_ >> 0x1e & 1) == 0)) {
    pAVar4 = (pAVar16->PlayerCameraManager).field0_0x0.DebugPtr;
    local_128 = (local_1f8->field0_0x0)._s_0.R;
    fStack_124 = (local_1f8->field0_0x0)._s_0.G;
    fStack_120 = (local_1f8->field0_0x0)._s_0.B;
    fStack_11c = (local_1f8->field0_0x0)._s_0.A;
    (**(code **)(pAVar4->_padding_ + 0x918))(pAVar4,param_2,&local_128,local_207);
  }
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FViewportClient_*,EMovieSceneViewportParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

