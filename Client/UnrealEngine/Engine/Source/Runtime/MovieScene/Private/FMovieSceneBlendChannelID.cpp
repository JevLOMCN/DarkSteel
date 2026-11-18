// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FindSystem @ 1460c63e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBlenderSystem * __thiscall
FMovieSceneBlendChannelID::FindSystem
          (FMovieSceneBlendChannelID *this,UMovieSceneEntitySystemLinker *param_1)

{
  byte bVar1;
  int iVar2;
  UMovieSceneBlenderSystem *pUVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  UObject *local_res8;
  FString local_28;
  FString local_18;
  
  bVar1 = (this->SystemID).Value;
  if (UE::MovieScene::GBlenderSystemRegistry._8_4_ != UE::MovieScene::GBlenderSystemRegistry._52_4_)
  {
    lVar10 = 0x154beff68;
    if (UE::MovieScene::GBlenderSystemRegistry._64_8_ != 0) {
      lVar10 = UE::MovieScene::GBlenderSystemRegistry._64_8_;
    }
    for (iVar2 = *(int *)(lVar10 + ((ulonglong)(UE::MovieScene::GBlenderSystemRegistry._72_4_ - 1) &
                                   (ulonglong)bVar1) * 4); iVar2 != -1;
        iVar2 = *(int *)(UE::MovieScene::GBlenderSystemRegistry._0_8_ + 0x10 +
                        (longlong)iVar2 * 0x18)) {
      if (*(byte *)(UE::MovieScene::GBlenderSystemRegistry._0_8_ + (longlong)iVar2 * 0x18) == bVar1)
      {
        if (((iVar2 != -1) &&
            (lVar10 = UE::MovieScene::GBlenderSystemRegistry._0_8_ + (longlong)iVar2 * 0x18,
            lVar10 != 0)) && (puVar7 = (undefined8 *)(lVar10 + 8), puVar7 != (undefined8 *)0x0)) {
          pUVar6 = (UObject *)*puVar7;
          if (!UE::GC::GIsIncrementalReachabilityPending) goto LAB_1460c6460;
          if (pUVar6 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          goto LAB_1460c644a;
        }
        break;
      }
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_1460c644a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
LAB_1460c6460:
  local_res8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  pUVar3 = (UMovieSceneBlenderSystem *)
           UMovieSceneEntitySystemLinker::FindSystem
                     (param_1,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar3 == (UMovieSceneBlenderSystem *)0x0) {
    pFVar4 = GetTypeName<UMovieSceneBlenderSystem>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar5 = UMovieSceneBlenderSystem::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar5->_padding_)) {
    return pUVar3;
  }
  pFVar4 = GetTypeName<UMovieSceneBlenderSystem>(&local_28);
  pwVar8 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                     (&local_18,(UMovieSceneEntitySystem *)pUVar3);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar9);
}

// GetSystemClass @ 1460d04a0

TSubclassOf<UMovieSceneBlenderSystem> __thiscall
FMovieSceneBlendChannelID::GetSystemClass(FMovieSceneBlendChannelID *this)

{
  byte bVar1;
  int iVar2;
  UObject *pUVar3;
  TObjectPtr<UClass> in_RDX;
  UObject *pUVar4;
  longlong lVar5;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = (this->SystemID).Value;
  if (UE::MovieScene::GBlenderSystemRegistry._8_4_ != UE::MovieScene::GBlenderSystemRegistry._52_4_)
  {
    lVar5 = 0x154beff68;
    if (UE::MovieScene::GBlenderSystemRegistry._64_8_ != 0) {
      lVar5 = UE::MovieScene::GBlenderSystemRegistry._64_8_;
    }
    iVar2 = *(int *)(lVar5 + ((ulonglong)(UE::MovieScene::GBlenderSystemRegistry._72_4_ - 1) &
                             (ulonglong)bVar1) * 4);
    while (iVar2 != -1) {
      lVar5 = UE::MovieScene::GBlenderSystemRegistry._0_8_ + (longlong)iVar2 * 0x18;
      if (*(byte *)(UE::MovieScene::GBlenderSystemRegistry._0_8_ + (longlong)iVar2 * 0x18) == bVar1)
      {
        pUVar3 = (UObject *)(lVar5 + 8);
        if (lVar5 == 0) {
          pUVar3 = pUVar4;
        }
        pUVar4 = (UObject *)0x0;
        if (((pUVar3 != (UObject *)0x0) &&
            (pUVar4 = *(UObject **)pUVar3, UE::GC::GIsIncrementalReachabilityPending)) &&
           (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        break;
      }
      iVar2 = *(int *)(lVar5 + 0x10);
    }
  }
  *(UObject **)in_RDX.field0_0x0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return (TSubclassOf<UMovieSceneBlenderSystem>)in_RDX.field0_0x0;
}

