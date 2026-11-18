// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// operator() @ 14880efd0

void __thiscall `FSubtitleManager::QueueSubtitles'::__l2::<lambda_1>::operator()(void *this)

{
  FOnQueueSubtitles *this_00;
  float fVar1;
  TArray<FSubtitleCue,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  UAudioComponent *pUVar4;
  UObject *pUVar5;
  FSubtitleManager *pFVar6;
  
  pUVar4 = UAudioComponent::GetAudioComponentFromID(*(ulong64 *)this);
  if (pUVar4 != (UAudioComponent *)0x0) {
    this_00 = &pUVar4->OnQueueSubtitles;
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this_00);
    if (bVar3) {
      fVar1 = *(float *)((longlong)this + 0x1c);
      pTVar2 = *(TArray<FSubtitleCue,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28);
      bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                        ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this_00);
      if (!bVar3) {
        return;
      }
      FOnQueueSubtitles_DelegateWrapper
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this_00,pTVar2,fVar1);
      return;
    }
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  if (pUVar5 == (UObject *)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar6 = ::operator_new(200);
    SSubtitleManager = (FSubtitleManager *)0x0;
    if (pFVar6 != (FSubtitleManager *)0x0) {
      *(undefined8 *)&(pFVar6->ActiveSubtitles).field_0x10 = 0;
      *(undefined8 *)&(pFVar6->ActiveSubtitles).field_0x18 = 0;
      *(undefined8 *)&(pFVar6->ActiveSubtitles).field_0x38 = 0;
      *(undefined8 *)&(pFVar6->ActiveSubtitles).field_0x48 = 0;
      pFVar6->CurrentSubtitleHeight = 0.0;
      pFVar6->_padding_ = 0;
      *(undefined8 *)&(pFVar6->ActiveMovieSubtitles).field_0x10 = 0;
      *(undefined8 *)&(pFVar6->ActiveMovieSubtitles).field_0x18 = 0;
      *(undefined8 *)&(pFVar6->ActiveMovieSubtitles).field_0x38 = 0;
      *(undefined8 *)&(pFVar6->ActiveMovieSubtitles).field_0x48 = 0;
      *(undefined8 *)&pFVar6->OnSetSubtitleTextDelegate = 0;
      *(undefined8 *)&(pFVar6->OnSetSubtitleTextDelegate).field_0x8 = 0;
      *(undefined8 *)&(pFVar6->OnSetSubtitleTextDelegate).field_0x10 = 0;
      *(undefined8 *)&(pFVar6->OnSetSubtitleTextDelegate).field_0x18 = 2;
      *(undefined8 *)&pFVar6->ActiveSubtitles = 0;
      *(undefined8 *)&(pFVar6->ActiveSubtitles).field_0x8 = 0;
      *(undefined8 *)&(pFVar6->ActiveSubtitles).field_0x20 = 0;
      *(undefined4 *)&(pFVar6->ActiveSubtitles).field_0x28 = 0;
      *(undefined4 *)&(pFVar6->ActiveSubtitles).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar6->ActiveSubtitles).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar6->ActiveSubtitles).field_0x34 = 0;
      *(undefined8 *)&(pFVar6->ActiveSubtitles).field_0x40 = 0;
      *(undefined8 *)&pFVar6->ActiveMovieSubtitles = 0;
      *(undefined8 *)&(pFVar6->ActiveMovieSubtitles).field_0x8 = 0;
      *(undefined8 *)&(pFVar6->ActiveMovieSubtitles).field_0x20 = 0;
      *(undefined4 *)&(pFVar6->ActiveMovieSubtitles).field_0x28 = 0;
      *(undefined4 *)&(pFVar6->ActiveMovieSubtitles).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar6->ActiveMovieSubtitles).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar6->ActiveMovieSubtitles).field_0x34 = 0;
      *(undefined8 *)&(pFVar6->ActiveMovieSubtitles).field_0x40 = 0;
      SSubtitleManager = pFVar6;
    }
    _Init_thread_footer(&::_TSS0);
  }
  FSubtitleManager::QueueSubtitles
            (SSubtitleManager,*(long64 *)((longlong)this + 0x10),*(float *)((longlong)this + 0x18),
             (bool)(*(byte *)((longlong)this + 0x20) & 1),
             (bool)(*(byte *)((longlong)this + 0x20) >> 1 & 1),*(float *)((longlong)this + 0x1c),
             *(TArray<FSubtitleCue,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28),
             *(float *)((longlong)this + 0x30),(float)*(double *)(pUVar5 + 0x3a));
  return;
}

// DisplaySubtitle @ 14882fe80

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
FSubtitleManager::DisplaySubtitle
          (FSubtitleManager *this,FCanvas *param_1,FActiveSubtitle *param_2,TIntRect<int> *param_3,
          FLinearColor *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  UFont *pUVar4;
  uint uVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  TVector2<double>_u_0 local_4b8;
  TVector2<double>_u_0 local_4a8;
  undefined1 local_498 [16];
  undefined1 local_488 [544];
  undefined1 local_268 [560];
  
  bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
  if (bVar3) {
    DisplaySubtitle_ToDisplays(this,param_2);
    return;
  }
  if ((GEngine == (UEngine *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                         ,0x86,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == (FCanvas *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Canvas",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                         ,0x87,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 == (FActiveSubtitle *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Subtitle != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                         ,0x88,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->CurrentSubtitleHeight = 0.0;
  pUVar4 = UEngine::GetSubtitleFont();
  if (pUVar4 == (UFont *)0x0) {
    if (2 < (byte)LogSubtitle._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSubtitle);
    }
  }
  else {
    pUVar4 = UEngine::GetSubtitleFont();
    fVar10 = UFont::GetMaxCharHeight(pUVar4);
    (**(code **)(param_1->RenderTarget->_padding_ + 0x28))(param_1->RenderTarget,local_498);
    iVar6 = (int)(fVar10 * __real_3f8ccccd);
    if (param_2->bSingleLine == false) {
      uVar5 = (param_2->Subtitles).ArrayNum - 1;
      if (-1 < (int)uVar5) {
        lVar8 = (longlong)(int)uVar5 * 0x18;
        do {
          uVar9 = 0;
          if ((int)uVar5 < (param_2->Subtitles).ArrayNum) {
            uVar9 = ~uVar5 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = (FText *)((param_2->Subtitles).AllocatorInstance.Data + lVar8);
          bVar3 = FText::IsEmpty(pFVar7);
          if (!bVar3) {
            pUVar4 = UEngine::GetSubtitleFont();
            local_4a8._s_0.Y = (double)*(int *)((longlong)&param_3->field0_0x0 + 0xc);
            local_4a8._s_0.X =
                 (double)((*(int *)((longlong)&param_3->field0_0x0 + 8) -
                          *(int *)&param_3->field0_0x0) / 2 + *(int *)&param_3->field0_0x0);
            FCanvasTextItem::FCanvasTextItem
                      ((FCanvasTextItem *)local_268,(TVector2<double> *)&local_4a8._s_0,pFVar7,
                       pUVar4,param_4);
            local_268._68_4_ = 0x3dcccccd;
            local_268._188_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
            local_268[0xba] = 1;
            local_268[0xb8] = 1;
            FCanvas::DrawItem(param_1,(FCanvasItem *)local_268);
            piVar1 = (int *)((longlong)&param_3->field0_0x0 + 0xc);
            *piVar1 = *piVar1 - iVar6;
            this->CurrentSubtitleHeight = (float)iVar6 + this->CurrentSubtitleHeight;
            FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_268);
          }
          lVar8 = lVar8 + -0x18;
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
      }
    }
    else {
      uVar5 = param_2->Index;
      uVar9 = 0;
      if ((int)uVar5 < (param_2->Subtitles).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (FText *)((param_2->Subtitles).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18);
      bVar3 = FText::IsEmpty(pFVar7);
      if (!bVar3) {
        piVar1 = (int *)((longlong)&param_3->field0_0x0 + 0xc);
        *piVar1 = *piVar1 + -0x18;
        pUVar4 = UEngine::GetSubtitleFont();
        local_4b8._s_0.Y = (double)*(int *)((longlong)&param_3->field0_0x0 + 0xc);
        local_4b8._s_0.X =
             (double)((*(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0)
                      / 2 + *(int *)&param_3->field0_0x0);
        FCanvasTextItem::FCanvasTextItem
                  ((FCanvasTextItem *)local_488,(TVector2<double> *)&local_4b8._s_0,pFVar7,pUVar4,
                   param_4);
        local_488._68_4_ = 0x3dcccccd;
        local_488[0xba] = 1;
        local_488._188_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
        local_488[0xb8] = 1;
        FCanvas::DrawItem(param_1,(FCanvasItem *)local_488);
        this->CurrentSubtitleHeight = (float)iVar6 + this->CurrentSubtitleHeight;
        FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_488);
      }
    }
  }
  return;
}

// DisplaySubtitle_ToDisplays @ 148830290

void __thiscall
FSubtitleManager::DisplaySubtitle_ToDisplays(FSubtitleManager *this,FActiveSubtitle *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  TMap<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
  *pTVar5;
  bool bVar6;
  FString *pFVar7;
  FText *pFVar8;
  longlong lVar9;
  int iVar10;
  FText *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  TMap<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
  *pTVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_118;
  undefined1 local_108 [8];
  FString local_100;
  FString local_f0;
  TMap<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [8];
  TMap<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
  *local_a0;
  FText local_98;
  TMap<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FText local_58;
  
  puVar1 = &(this->ActiveMovieSubtitles).field_0x10;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar18 = &this->ActiveMovieSubtitles;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  iVar15 = *(int *)&(this->ActiveMovieSubtitles).field_0x28;
  iStack_d8 = 0;
  uStack_d4 = 1;
  local_c0 = 0;
  iStack_c4 = iStack_d8;
  if (iVar15 != 0) {
    puVar17 = *(uint **)&(this->ActiveMovieSubtitles).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    local_c0 = 0;
    iStack_d8 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14883034d;
      uVar13 = puVar17[lVar9 + 1];
    }
    uStack_d4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_b0 = (int)lVar9;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar15 < iStack_c4) {
      iStack_c4 = iVar15;
    }
  }
LAB_14883034d:
  uVar13 = *(uint *)&(this->ActiveMovieSubtitles).field_0x28;
  iStack_b8 = *(int *)&(this->ActiveMovieSubtitles).field_0x8 -
              *(int *)&(this->ActiveMovieSubtitles).field_0x34;
  uVar12 = uVar13 & 0xffffffe0;
  uStack_c8 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_d4,iStack_d8);
  TStack_80.CurrentBitIndex = iStack_c4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iStack_c4;
  TStack_80.BaseBitIndex = local_c0;
  uStack_60 = CONCAT44(uStack_b4,iStack_b8);
  local_e0 = pTVar18;
  local_d0 = puVar1;
  iStack_bc = iStack_c4;
  local_a0 = pTVar18;
  local_88 = pTVar18;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar15 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->ActiveMovieSubtitles).field_0x28;
  if (uVar13 != uVar3) {
    puVar16 = *(undefined1 **)&(this->ActiveMovieSubtitles).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148830450;
      uVar13 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_ac = (int)lVar9;
    uVar13 = local_ac + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_148830450:
  while( true ) {
    pTVar5 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<FActiveSubtitle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar18))
    break;
    lVar9 = (longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar5;
    if (*(longlong *)(lVar9 + 8) != 0) {
      if (1 < local_118.Data.ArrayNum) {
        ::FString::AppendChar(&local_118,L'\n');
      }
      lVar9 = *(longlong *)(lVar9 + 8);
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      if (lVar9 != 0) {
        iVar15 = *(int *)(lVar9 + 0x18);
        pFVar11 = *(FText **)(lVar9 + 0x10);
        pFVar8 = (FText *)((longlong)pFVar11 + (longlong)iVar15 * 0x18);
        while( true ) {
          if (*(int *)(lVar9 + 0x18) != iVar15) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FSubtitleCue,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          pTVar18 = local_a0;
          if (pFVar11 == pFVar8) break;
          bVar6 = FText::IsEmpty(pFVar11);
          if (!bVar6) {
            if (1 < local_100.Data.ArrayNum) {
              ::FString::AppendChar(&local_100,L'\n');
            }
            pFVar7 = FText::ToString(pFVar11);
            iVar10 = (pFVar7->Data).ArrayNum;
            iVar14 = iVar10 + -1;
            if (iVar10 == 0) {
              iVar14 = 0;
            }
            ::FString::AppendChars
                      (&local_100,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar14);
          }
          pFVar11 = (FText *)&pFVar11[1].Flags;
        }
      }
      iVar15 = local_100.Data.ArrayNum + -1;
      if (local_100.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars(&local_118,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar15);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  if (param_1 != (FActiveSubtitle *)0x0) {
    if (param_1->bSingleLine == false) {
      if (1 < local_118.Data.ArrayNum) {
        ::FString::AppendChar(&local_118,L'\n');
      }
      iVar15 = (param_1->Subtitles).ArrayNum;
      pFVar11 = (FText *)(param_1->Subtitles).AllocatorInstance.Data;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.Data.ArrayNum = 0;
      local_f0.Data.ArrayMax = 0;
      pFVar8 = (FText *)((longlong)pFVar11 + (longlong)iVar15 * 0x18);
      while( true ) {
        if ((param_1->Subtitles).ArrayNum != iVar15) {
          `TCheckedPointerIterator<FSubtitleCue,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_108);
        }
        if (pFVar11 == pFVar8) break;
        bVar6 = FText::IsEmpty(pFVar11);
        if (!bVar6) {
          if (1 < local_f0.Data.ArrayNum) {
            ::FString::AppendChar(&local_f0,L'\n');
          }
          pFVar7 = FText::ToString(pFVar11);
          iVar14 = (pFVar7->Data).ArrayNum;
          iVar10 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar10 = 0;
          }
          ::FString::AppendChars(&local_f0,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar10);
        }
        pFVar11 = (FText *)&pFVar11[1].Flags;
      }
      iVar15 = local_f0.Data.ArrayNum + -1;
      if (local_f0.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars(&local_118,(wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar15);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar13 = param_1->Index;
      uVar12 = 0;
      if ((int)uVar13 < (param_1->Subtitles).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = FText::ToString((FText *)((param_1->Subtitles).AllocatorInstance.Data +
                                        (longlong)(int)uVar13 * 0x18));
      if (&local_118 != pFVar7) {
        iVar15 = (pFVar7->Data).ArrayNum;
        _Src = (pFVar7->Data).AllocatorInstance.Data;
        local_118.Data.ArrayNum = iVar15;
        if ((iVar15 == 0) && (local_118.Data.ArrayMax == 0)) {
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,local_118.Data.ArrayMax,(ForAnyElementType *)&local_118,iVar15,
                     &local_118.Data.ArrayMax);
          if (iVar15 != 0) {
            memcpy(local_118.Data.AllocatorInstance.Data,_Src,(longlong)iVar15 * 2);
          }
        }
      }
    }
  }
  if (local_118.Data.ArrayNum < 2) {
    pFVar8 = FText::GetEmpty();
    local_98.TextData.Reference = (pFVar8->TextData).Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,local_a8);
    }
    local_98.Flags = pFVar8->Flags;
    TMulticastDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSetSubtitleTextDelegate,&local_98);
    local_58.TextData.Reference = local_98.TextData.Reference;
  }
  else {
    pFVar8 = FText::FromString(&local_58,&local_118);
    TMulticastDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSetSubtitleTextDelegate,pFVar8);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// DisplaySubtitles @ 1488307c0

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
FSubtitleManager::DisplaySubtitles
          (FSubtitleManager *this,FCanvas *param_1,TIntRect<int> *param_2,float param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  FCanvas *pFVar6;
  bool bVar7;
  int iVar8;
  long64 lVar9;
  FActiveSubtitle *pFVar10;
  UFont *pUVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 local_res8 [8];
  FCanvas *local_res10;
  uint local_f8;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [36];
  undefined4 local_4c;
  
  local_res10 = param_1;
  bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
  if (bVar7) {
    lVar9 = FindHighestPrioritySubtitle(this,param_3);
    if (lVar9 == 0) {
      DisplaySubtitle_ToDisplays(this,(FActiveSubtitle *)0x0);
    }
    else {
      pFVar10 = TMapBase<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
                ::Find((TMapBase<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
                        *)&this->ActiveSubtitles,lVar9);
      DisplaySubtitle_ToDisplays(this,pFVar10);
    }
  }
  else {
    if ((GEngine == (UEngine *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GEngine",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                           ,0x1b1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_1 == (FCanvas *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCanvas",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                           ,0x1b2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GEngine->bSubtitlesEnabled == 1 && GEngine->bSubtitlesForcedOff == 0) {
      pUVar11 = UEngine::GetSubtitleFont();
      if (pUVar11 == (UFont *)0x0) {
        if (2 < (byte)LogSubtitle._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSubtitle);
        }
      }
      else if (0 < (*(int *)((longlong)&param_2->field0_0x0 + 0xc) -
                   *(int *)((longlong)&param_2->field0_0x0 + 4)) *
                   (*(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0)) {
        piVar12 = (int *)(**(code **)(param_1->RenderTarget->_padding_ + 0x28))
                                   (param_1->RenderTarget,local_88);
        iVar8 = (*piVar12 * 10) / 100;
        lVar13 = (**(code **)(param_1->RenderTarget->_padding_ + 0x28))
                           (param_1->RenderTarget,local_80);
        iVar16 = *(int *)(lVar13 + 4);
        piVar12 = (int *)(**(code **)(param_1->RenderTarget->_padding_ + 0x28))
                                   (param_1->RenderTarget,local_78);
        iVar14 = *piVar12;
        lVar13 = (**(code **)(param_1->RenderTarget->_padding_ + 0x28))
                           (param_1->RenderTarget,local_70);
        iVar18 = *(int *)&param_2->field0_0x0;
        iVar16 = *(int *)(lVar13 + 4) - (iVar16 * 10) / 100;
        if ((iVar18 < iVar8) || (iVar14 - iVar8 < *(int *)((longlong)&param_2->field0_0x0 + 8))) {
          iVar2 = *(int *)((longlong)&param_2->field0_0x0 + 8);
          iVar14 = iVar2 - (iVar14 - iVar8);
          if (iVar14 < iVar8 - iVar18) {
            iVar14 = iVar8 - iVar18;
          }
          *(int *)&param_2->field0_0x0 = iVar18 + iVar14;
          *(int *)((longlong)&param_2->field0_0x0 + 8) = iVar2 - iVar14;
        }
        if (iVar16 < *(int *)((longlong)&param_2->field0_0x0 + 0xc)) {
          *(int *)((longlong)&param_2->field0_0x0 + 0xc) = iVar16;
        }
        SplitLinesToSafeZone(this,param_1,param_2);
        lVar9 = FindHighestPrioritySubtitle(this,param_3);
        if (lVar9 == 0) {
          iVar16 = 0;
          if (*(int *)&(this->ActiveMovieSubtitles).field_0x8 -
              *(int *)&(this->ActiveMovieSubtitles).field_0x34 < 1) {
            this->CurrentSubtitleHeight = 0.0;
          }
          else {
            TStack_b0.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveMovieSubtitles).field_0x10;
            iVar14 = *(int *)&(this->ActiveMovieSubtitles).field_0x28;
            local_f8 = 1;
            uVar20 = local_f8;
            local_f8 = 1;
            iVar18 = 0;
            iVar8 = 0;
            if (iVar14 != 0) {
              puVar15 = *(uint **)&(this->ActiveMovieSubtitles).field_0x20;
              if (puVar15 == (uint *)0x0) {
                puVar15 = (uint *)TStack_b0.Array;
              }
              local_f8 = *puVar15;
              while (local_f8 == 0) {
                lVar13 = (longlong)iVar16;
                iVar18 = iVar18 + 0x20;
                iVar16 = iVar16 + 1;
                local_f8 = uVar20;
                if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16)
                goto LAB_148830ac6;
                local_f8 = puVar15[lVar13 + 1];
              }
              local_f8 = -local_f8 & local_f8;
              uVar1 = (ulonglong)local_f8 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar8 = iVar18 + -1 + (int)lVar13;
              if (iVar14 < iVar8) {
LAB_148830ac6:
                iVar8 = iVar14;
              }
            }
            puVar21 = &(this->ActiveMovieSubtitles).field_0x10;
            uVar20 = *(uint *)&(this->ActiveMovieSubtitles).field_0x28;
            uVar19 = uVar20 & 0xffffffe0;
            TStack_b0.CurrentBitIndex = iVar8;
            TStack_b0.UnvisitedBitMask = 0xffffffff;
            TStack_b0._padding_ = CONCAT44(local_f8,iVar16);
            iVar16 = (int)uVar20 >> 5;
            TStack_b0._28_4_ = local_4c;
            TStack_b0.BaseBitIndex = iVar18;
            uStack_90 = CONCAT44(uStack_bc,
                                 *(int *)&(this->ActiveMovieSubtitles).field_0x8 -
                                 *(int *)&(this->ActiveMovieSubtitles).field_0x34);
            if (((int)uVar20 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar6 = local_res10;
            uVar3 = *(uint *)&(this->ActiveMovieSubtitles).field_0x28;
            if (uVar20 != uVar3) {
              puVar4 = *(undefined1 **)&(this->ActiveMovieSubtitles).field_0x20;
              puVar17 = puVar21;
              if (puVar4 != (undefined1 *)0x0) {
                puVar17 = puVar4;
              }
              uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
              while (uVar20 == 0) {
                lVar13 = (longlong)iVar16;
                uVar19 = uVar19 + 0x20;
                iVar16 = iVar16 + 1;
                uVar20 = uVar3;
                if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                goto LAB_148830bf0;
                uVar20 = *(uint *)(puVar17 + lVar13 * 4 + 4);
              }
              uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
              lVar13 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              uVar20 = (int)lVar13 + -1 + uVar19;
              if ((int)uVar3 < (int)uVar20) {
                uVar20 = uVar3;
              }
            }
LAB_148830bf0:
            while( true ) {
              if (*(int *)&(this->ActiveMovieSubtitles).field_0x8 -
                  *(int *)&(this->ActiveMovieSubtitles).field_0x34 != (int)uStack_90) {
                `TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<FActiveSubtitle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
              }
              if ((TStack_b0.CurrentBitIndex == uVar20) &&
                 (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) break;
              pFVar10 = *(FActiveSubtitle **)
                         ((longlong)TStack_b0.CurrentBitIndex * 0x20 + 8 +
                         *(longlong *)&this->ActiveMovieSubtitles);
              if (pFVar10 != (FActiveSubtitle *)0x0) {
                DisplaySubtitle(this,pFVar6,pFVar10,param_2,&FLinearColor::White);
              }
              TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
            }
          }
        }
        else {
          pFVar10 = TMapBase<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
                    ::Find((TMapBase<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
                            *)&this->ActiveSubtitles,lVar9);
          DisplaySubtitle(this,param_1,pFVar10,param_2,&FLinearColor::White);
        }
      }
    }
  }
  return;
}

// FindHighestPrioritySubtitle @ 14883a3f0

long64 __thiscall
FSubtitleManager::FindHighestPrioritySubtitle(FSubtitleManager *this,float param_1)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long64 lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  fVar12 = __real_bf800000;
  lVar7 = 0;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
              *)&this->ActiveSubtitles);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
              *)&this->ActiveSubtitles;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar9 = (longlong)(int)uVar8 * 0x30;
      lVar3 = *local_68;
      iVar6 = *(int *)(lVar9 + 0x20 + lVar3);
      uVar11 = *(uint *)(lVar9 + 8 + lVar3);
      if (uVar11 == iVar6 - 1U) {
        TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,(int)uVar8);
        local_30 = '\x01';
      }
      else {
        uVar10 = 0;
        if ((int)uVar11 < iVar6) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          lVar7 = (*pcVar4)();
          return lVar7;
        }
        uVar10 = *(int *)(lVar9 + 8 + lVar3) + 1;
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar9 + 0x20 + lVar3)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          lVar7 = (*pcVar4)();
          return lVar7;
        }
        if (*(float *)(*(longlong *)(lVar9 + 0x18 + lVar3) + 0x10 + (longlong)(int)uVar10 * 0x18) <=
            param_1) {
          piVar1 = (int *)(lVar9 + 8 + lVar3);
          *piVar1 = *piVar1 + 1;
        }
        fVar2 = *(float *)(lVar9 + 0xc + lVar3);
        if (fVar12 < fVar2) {
          lVar7 = *(long64 *)(*local_68 + (longlong)(int)uStack_4c * 0x30);
          fVar12 = fVar2;
        }
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar11 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_38->HashSize < iVar6)) || (iVar6 < local_38->HashSize)) {
        local_38->HashSize = iVar6;
        TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return lVar7;
}

// GetSubtitleManager @ 1488436c0

FSubtitleManager * __cdecl FSubtitleManager::GetSubtitleManager(void)

{
  FSubtitleManager *pFVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar1 = ::operator_new(200);
    SSubtitleManager = (FSubtitleManager *)0x0;
    if (pFVar1 != (FSubtitleManager *)0x0) {
      *(undefined8 *)&(pFVar1->ActiveSubtitles).field_0x10 = 0;
      *(undefined8 *)&(pFVar1->ActiveSubtitles).field_0x18 = 0;
      *(undefined8 *)&(pFVar1->ActiveSubtitles).field_0x38 = 0;
      *(undefined8 *)&(pFVar1->ActiveSubtitles).field_0x48 = 0;
      pFVar1->CurrentSubtitleHeight = 0.0;
      pFVar1->_padding_ = 0;
      *(undefined8 *)&(pFVar1->ActiveMovieSubtitles).field_0x10 = 0;
      *(undefined8 *)&(pFVar1->ActiveMovieSubtitles).field_0x18 = 0;
      *(undefined8 *)&(pFVar1->ActiveMovieSubtitles).field_0x38 = 0;
      *(undefined8 *)&(pFVar1->ActiveMovieSubtitles).field_0x48 = 0;
      *(undefined8 *)&pFVar1->OnSetSubtitleTextDelegate = 0;
      *(undefined8 *)&(pFVar1->OnSetSubtitleTextDelegate).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->OnSetSubtitleTextDelegate).field_0x10 = 0;
      *(undefined8 *)&(pFVar1->OnSetSubtitleTextDelegate).field_0x18 = 2;
      *(undefined8 *)&pFVar1->ActiveSubtitles = 0;
      *(undefined8 *)&(pFVar1->ActiveSubtitles).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ActiveSubtitles).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ActiveSubtitles).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ActiveSubtitles).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ActiveSubtitles).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ActiveSubtitles).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ActiveSubtitles).field_0x40 = 0;
      *(undefined8 *)&pFVar1->ActiveMovieSubtitles = 0;
      *(undefined8 *)&(pFVar1->ActiveMovieSubtitles).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ActiveMovieSubtitles).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ActiveMovieSubtitles).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ActiveMovieSubtitles).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ActiveMovieSubtitles).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ActiveMovieSubtitles).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ActiveMovieSubtitles).field_0x40 = 0;
      SSubtitleManager = pFVar1;
    }
    _Init_thread_footer(&::_TSS0);
    return SSubtitleManager;
  }
  return SSubtitleManager;
}

// KillAllSubtitles @ 148848230

void __thiscall FSubtitleManager::KillAllSubtitles(FSubtitleManager *this)

{
  TMap<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->ActiveSubtitles;
  bVar3 = 1 < *(int *)&(this->ActiveSubtitles).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FActiveSubtitle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FActiveSubtitle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ActiveSubtitles).field_0x8);
  puVar1 = &(this->ActiveSubtitles).field_0xc;
  *(undefined4 *)&(this->ActiveSubtitles).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ActiveSubtitles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveSubtitles).field_0x34 = 0;
  iVar2 = *(int *)&(this->ActiveSubtitles).field_0x2c;
  *(undefined4 *)&(this->ActiveSubtitles).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ActiveSubtitles).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveSubtitles).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ActiveSubtitles).field_0x48 = 1;
    TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// KillSubtitles @ 1488482f0

void __thiscall FSubtitleManager::KillSubtitles(FSubtitleManager *this,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->ActiveSubtitles).field_0x8 != *(int *)&(this->ActiveSubtitles).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ActiveSubtitles).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ActiveSubtitles).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)((int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) &
                              (longlong)*(int *)&(this->ActiveSubtitles).field_0x48 - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ActiveSubtitles).field_0x0;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x30) == param_1) {
          TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
                           *)&this->ActiveSubtitles,iVar2);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
      return;
    }
  }
  return;
}

// QueueSubtitles @ 14884fc40

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
FSubtitleManager::QueueSubtitles
          (FSubtitleManager *this,long64 param_1,float param_2,bool param_3,bool param_4,
          float param_5,TArray<FSubtitleCue,TSizedDefaultAllocator<32>_> *param_6,float param_7,
          float param_8)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FText *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FSubtitleCue *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  long64 local_res10;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0;
  bool local_af;
  FSubtitleCue *local_a8;
  int local_a0;
  uint local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [8];
  long64 *local_88;
  undefined1 *local_80;
  
  local_res10 = param_1;
  if ((GEngine == (UEngine *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                         ,0x42,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                         ,0x43,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = param_6->ArrayNum;
  if ((iVar12 != 0) && (param_2 != 0.0)) {
    if (param_5 == 0.0) {
      if (2 < (byte)LogSubtitle._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSubtitle);
      }
    }
    else if (local_res10 == 0) {
      if (5 < (byte)LogSubtitle._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSubtitle);
      }
    }
    else {
      FVar11.Data = (FScriptContainerElement *)0x0;
      uVar17 = 1;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0._0_4_ = 0;
      local_e0._4_4_ = 0;
      uVar8 = 0;
      if (1 < iVar12) {
        lVar16 = 0x18;
        do {
          uVar7 = uVar8;
          if ((int)uVar17 < iVar12) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar14 = (param_6->AllocatorInstance).Data + lVar16 + 0x10;
          if (param_7 < *(float *)pFVar14 || param_7 == *(float *)pFVar14) {
            uVar7 = uVar8;
            if ((int)(uVar17 - 1) < param_6->ArrayNum) {
              uVar7 = -uVar17 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar13 = (FSubtitleCue *)((param_6->AllocatorInstance).Data + lVar16 + -0x18);
            if (((local_e8.Data <= pFVar13) &&
                (pFVar13 < (FSubtitleCue *)(local_e8.Data + (longlong)local_e0._4_4_ * 0x18))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((int)local_e0 == local_e0._4_4_) {
              local_e0._0_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_e8,(int *)((longlong)&local_e0 + 4));
            }
            FVar5.Data = local_e8.Data;
            lVar10 = (longlong)(int)local_e0;
            local_e0._0_4_ = (int)local_e0 + 1;
            *(undefined8 *)&local_e8.Data[lVar10 * 0x18].field_0x0 = 0;
            pIVar2 = (pFVar13->Text).TextData.Reference;
            *(ITextData **)&local_e8.Data[lVar10 * 0x18].field_0x0 = pIVar2;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_98);
            }
            *(uint *)(FVar5.Data + lVar10 * 0x18 + 8) = (pFVar13->Text).Flags;
            *(float *)(FVar5.Data + lVar10 * 0x18 + 0x10) = pFVar13->Time;
          }
          iVar12 = param_6->ArrayNum;
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 0x18;
        } while ((int)uVar17 < iVar12);
      }
      if ((int)(iVar12 - 1U) < iVar12) {
        uVar8 = ~(iVar12 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (FSubtitleCue *)
                ((param_6->AllocatorInstance).Data + ((longlong)param_6->ArrayNum * 3 + -3) * 8);
      if (((local_e8.Data <= pFVar13) &&
          (pFVar13 < (FSubtitleCue *)(local_e8.Data + (longlong)local_e0._4_4_ * 0x18))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)local_e0 == local_e0._4_4_) {
        local_e0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_e8,(int *)((longlong)&local_e0 + 4));
      }
      FVar5.Data = local_e8.Data;
      lVar16 = (longlong)(int)local_e0;
      local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + 1);
      *(undefined8 *)&local_e8.Data[lVar16 * 0x18].field_0x0 = 0;
      pIVar2 = (pFVar13->Text).TextData.Reference;
      *(ITextData **)&local_e8.Data[lVar16 * 0x18].field_0x0 = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_94);
      }
      *(uint *)(FVar5.Data + lVar16 * 0x18 + 8) = (pFVar13->Text).Flags;
      *(float *)(FVar5.Data + lVar16 * 0x18 + 0x10) = pFVar13->Time;
      iVar12 = (int)local_e0;
      uVar15 = (ulonglong)(int)local_e0;
      pFVar1 = local_e8.Data + uVar15 * 0x18;
      pFVar14 = local_e8.Data + 0x10;
      while( true ) {
        local_a0 = (int)uVar15;
        if ((int)uVar15 != iVar12) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<FSubtitleCue,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_d8);
          local_a0 = (int)local_e0;
        }
        FVar5.Data = local_e8.Data;
        if (pFVar14 + -0x10 == pFVar1) break;
        if ((param_5 < *(float *)pFVar14) &&
           (*(float *)pFVar14 = param_5, 2 < (byte)LogSubtitle._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSubtitle);
        }
        *(float *)pFVar14 = (*(float *)pFVar14 - param_7) + param_8;
        pFVar14 = pFVar14 + 0x18;
        uVar15 = local_e0 & 0xffffffff;
      }
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_9c = 0;
      if (local_a0 != 0) {
        local_c8._0_4_ = local_a0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_a0,0,&local_d0,local_a0,(int *)((longlong)&local_c8 + 4));
        ConstructItems<FSubtitleCue,FSubtitleCue,int>
                  (local_d0.Data,(FSubtitleCue *)FVar5.Data,local_a0);
        FVar11.Data = local_d0.Data;
        local_9c = local_c8._4_4_;
        local_a0 = (int)local_c8;
      }
      local_af = param_4;
      local_c0._8_4_ = 0;
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_c8 = 0;
      local_c0._12_4_ = param_2;
      local_b0 = param_3;
      local_a8 = (FSubtitleCue *)FVar11.Data;
      DestructItems<FSubtitleCue,int>((FSubtitleCue *)0x0,0);
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      local_88 = &local_res10;
      local_80 = local_c0 + 8;
      TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<__int64_const_&,FActiveSubtitle_&&>_>
                ((TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
                  *)&this->ActiveSubtitles,
                 (TPairInitializer<__int64_const_&,FActiveSubtitle_&&> *)local_c0,(bool *)&local_88)
      ;
      lVar16 = (longlong)(int)local_c0._0_4_ * 0x30 + *(longlong *)&this->ActiveSubtitles;
      DestructItems<FSubtitleCue,int>(local_a8,local_a0);
      if (local_a8 != (FSubtitleCue *)0x0) {
        FMemory::Free(local_a8);
      }
      uVar8 = *(uint *)(lVar16 + 0x20);
      if (uVar8 == *(uint *)(lVar16 + 0x24)) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar16 + 0x18),(int *)(lVar16 + 0x24));
      }
      lVar10 = (longlong)(int)uVar8;
      *(uint *)(lVar16 + 0x20) = uVar8 + 1;
      DefaultConstructItems<FSubtitleCue,int>
                ((void *)(*(longlong *)(lVar16 + 0x18) + lVar10 * 0x18),1);
      uVar17 = 0;
      if ((int)uVar8 < *(int *)(lVar16 + 0x20)) {
        uVar17 = ~uVar8 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar16 = *(longlong *)(lVar16 + 0x18);
      pFVar9 = FText::GetEmpty();
      pIVar2 = *(ITextData **)(lVar16 + lVar10 * 0x18);
      pIVar3 = (pFVar9->TextData).Reference;
      if (pIVar2 != pIVar3) {
        *(ITextData **)(lVar16 + lVar10 * 0x18) = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_90);
        }
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      *(uint *)(lVar16 + 8 + lVar10 * 0x18) = pFVar9->Flags;
      *(float *)(lVar16 + 0x10 + lVar10 * 0x18) = (param_5 - param_7) + param_8;
      DestructItems<FSubtitleCue,int>((FSubtitleCue *)local_e8.Data,(int)local_e0);
      if ((FSubtitleCue *)local_e8.Data != (FSubtitleCue *)0x0) {
        FMemory::Free(local_e8.Data);
      }
    }
  }
  return;
}

// QueueSubtitles @ 148850330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FSubtitleManager::QueueSubtitles(FQueueSubtitleParams *param_1)

{
  code *pcVar1;
  ulong64 uVar2;
  FWeakObjectPtr FVar3;
  long64 lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TArray<FSubtitleCue,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  FName *pFVar9;
  TStatId TVar10;
  FName local_res8;
  FName local_res10;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar8 = IsInAudioThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SubtitleManager.cpp"
                       ,0x22,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_AudioQueueSubtitles ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_FSubtitleManager::QueueSubtitles(FQueueSubtitleParams_const_&)_::_2_::FStat_STAT_AudioQueueSubtitles>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res8,"STAT_AudioQueueSubtitles");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioQueueSubtitles,*pFVar9,
                   L"FGameThreadAudioTask.QueueSubtitles","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioQueueSubtitles;
  if (StatPtr_STAT_AudioQueueSubtitles ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FSubtitleManager::QueueSubtitles(FQueueSubtitleParams_const_&)_::_2_::FStat_STAT_AudioQueueSubtitles>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_AudioQueueSubtitles");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioQueueSubtitles,*pFVar9,
                    L"FGameThreadAudioTask.QueueSubtitles","STATGROUP_TaskGraphTasks",
                    "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid
                   );
  }
  uVar2 = param_1->AudioComponentID;
  FVar3 = (param_1->WorldPtr).WeakPtr;
  local_48[0] = (code *)0x0;
  lVar4 = param_1->WaveInstance;
  uVar5 = *(undefined8 *)&param_1->SubtitlePriority;
  uVar6 = *(undefined8 *)&param_1->field_0x20;
  pTVar7 = param_1->Subtitles;
  local_res8.ComparisonIndex.Value = (uint)param_1->RequestedStartTime;
  local_res8.Number = *(uint *)&param_1->field_0x34;
  local_20 = FMemory::Malloc(0x40,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FSubtitleManager::QueueSubtitles'::`2'::<lambda_1>,1,1>::
               _vftable_;
  local_20[1] = uVar2;
  *(FWeakObjectPtr *)(local_20 + 2) = FVar3;
  local_20[3] = lVar4;
  local_20[4] = uVar5;
  local_20[5] = uVar6;
  local_20[6] = pTVar7;
  *(FName *)(local_20 + 7) = local_res8;
  if (local_20 + 1 != (ulong64 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSubtitleManager::QueueSubtitles'::__l2::<lambda_1>,void>::
                  Call;
  }
  FAudioThread::RunCommandOnGameThread((TUniqueFunction<void___cdecl(void)> *)local_48,TVar10);
  return;
}

// SetMovieSubtitle @ 148859050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSubtitleManager::SetMovieSubtitle
          (FSubtitleManager *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  atomic<int> aVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FActiveSubtitle,1> *pTVar7;
  FText *pFVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FActiveSubtitle *pFVar15;
  uint uVar16;
  atomic<int> aVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res10 [24];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FWeakObjectPtr local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  TSharedPtr<FActiveSubtitle,1> local_90;
  FSubtitleCue local_80;
  UObject *local_68;
  FWeakObjectPtr local_60;
  TSharedPtr<FActiveSubtitle,1> local_58;
  FText local_48;
  
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    local_68 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_68);
    local_60 = local_a8;
    uVar16 = local_a8.ObjectIndex - local_a8.ObjectSerialNumber ^
             (uint)local_a8.ObjectSerialNumber >> 0xd;
    uVar12 = (-0x61c88647 - local_a8.ObjectSerialNumber) - uVar16 ^ uVar16 << 8;
    uVar13 = (local_a8.ObjectSerialNumber - uVar12) - uVar16 ^ uVar12 >> 0xd;
    uVar16 = (uVar16 - uVar13) - uVar12 ^ uVar13 >> 0xc;
    uVar12 = (uVar12 - uVar16) - uVar13 ^ uVar16 << 0x10;
    uVar13 = (uVar13 - uVar12) - uVar16 ^ uVar12 >> 5;
    uVar16 = (uVar16 - uVar13) - uVar12 ^ uVar13 >> 3;
    uVar12 = (uVar12 - uVar16) - uVar13 ^ uVar16 << 10;
    pTVar7 = TMapBase<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
             ::FindOrAddImpl<FObjectKey>
                       ((TMapBase<FObjectKey,TSharedPtr<FActiveSubtitle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FActiveSubtitle,1>,0>_>
                         *)&this->ActiveMovieSubtitles,(uVar13 - uVar12) - uVar16 ^ uVar12 >> 0xf,
                        (FObjectKey *)&local_60);
    local_58.Object = (FActiveSubtitle *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != &local_58) {
      pTVar7->Object = (FActiveSubtitle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar7->SharedReferenceCount,&local_58.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    iVar1 = param_2->ArrayNum;
    if (0 < iVar1) {
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = 0;
      pFVar14 = (param_2->AllocatorInstance).Data;
      pFVar18 = pFVar14 + (longlong)iVar1 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar1) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar14 == pFVar18) break;
        FText::FText(&local_80.Text);
        local_80.Time = 0.0;
        pFVar8 = FText::FromString(&local_48,(FString *)pFVar14);
        FText::operator=(&local_80.Text,pFVar8);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        if (((local_b8.Data <= &local_80) &&
            (&local_80 < (FSubtitleCue *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x18))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)local_b0._0_4_;
        if (local_b0._0_4_ == (atomic<int>)local_b0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_b8,(int *)((longlong)&local_b0 + 4));
        }
        FVar3.Data = local_b8.Data;
        lVar9 = (longlong)iVar6;
        local_b0 = CONCAT44(local_b0._4_4_,iVar6 + 1);
        *(undefined8 *)&local_b8.Data[lVar9 * 0x18].field_0x0 = 0;
        *(ITextData **)&local_b8.Data[lVar9 * 0x18].field_0x0 = local_80.Text.TextData.Reference;
        if (local_80.Text.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.Text.TextData.Reference + 8))();
        }
        *(uint *)(FVar3.Data + lVar9 * 0x18 + 8) = local_80.Text.Flags;
        *(float *)(FVar3.Data + lVar9 * 0x18 + 0x10) = local_80.Time;
        if (local_80.Text.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.Text.TextData.Reference + 0x10))();
        }
        pFVar14 = pFVar14 + 0x10;
      }
      pTVar10 = ::operator_new(0x30);
      FVar3.Data = local_b8.Data;
      FVar11.Data = (FScriptContainerElement *)0x0;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        local_90.Object = ___xmm_00000000000000000000000000000010;
        pFVar15 = (FActiveSubtitle *)&DAT_00000010;
        local_90.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFActiveSubtitle___00_SharedPointerInternals__6B_;
        aVar17 = (atomic<int>)0x0;
        aVar4 = local_b0._0_4_;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_98._0_4_ = local_b0._0_4_;
        if (local_b0._0_4_ != (atomic<int>)0x0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)local_b0._0_4_,0,&local_a0,(int)local_b0._0_4_,
                     (int *)((longlong)&local_98 + 4));
          ConstructItems<FSubtitleCue,FSubtitleCue,int>
                    (local_a0.Data,(FSubtitleCue *)FVar3.Data,(int)aVar4);
          FVar11.Data = local_a0.Data;
          aVar17 = local_98._4_4_;
        }
        *(undefined4 *)&pTVar10[1]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar10[1]._padding_ + 4) = 0x3f800000;
        *(undefined2 *)&pTVar10[1].SharedReferenceCount = 1;
        pTVar10[2]._padding_ = (longlong)FVar11.Data;
        pTVar10[2].WeakReferenceCount = aVar17;
        local_a0.Data = (FScriptContainerElement *)0x0;
        pTVar10[2].SharedReferenceCount = local_98._0_4_;
        local_98 = 0;
        DestructItems<FSubtitleCue,int>((FSubtitleCue *)0x0,0);
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        pFVar15 = (FActiveSubtitle *)(pTVar10 + 1);
        if ((pFVar15 == (FActiveSubtitle *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        local_90.SharedReferenceCount.ReferenceController = pTVar10;
        FVar11.Data = (FScriptContainerElement *)pTVar10;
        local_90.Object = pFVar15;
      }
      if (pTVar7 != &local_90) {
        pTVar7->Object = pFVar15;
        local_90.Object = (FActiveSubtitle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&pTVar7->SharedReferenceCount,&local_90.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar11.Data);
      DestructItems<FSubtitleCue,int>((FSubtitleCue *)local_b8.Data,(int)local_b0._0_4_);
      if ((FSubtitleCue *)local_b8.Data != (FSubtitleCue *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
  }
  return;
}

// SplitLinesToSafeZone @ 148859930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSubtitleManager::SplitLinesToSafeZone
          (FSubtitleManager *this,FCanvas *param_1,TIntRect<int> *param_2)

{
  TMap<__int64,FActiveSubtitle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>_>
  *pTVar1;
  uint *puVar2;
  float fVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FString *pFVar16;
  FText *pFVar18;
  int iVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  FText *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  ForAnyElementType *pFVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  undefined1 local_res8 [8];
  FCanvas *local_res10;
  TIntRect<int> *local_res18;
  longlong local_res20;
  FString local_238;
  TArray<FWrappedStringElement,TSizedDefaultAllocator<32>_> local_228;
  FString local_218;
  FString local_208;
  longlong local_1f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1c0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined1 auStack_190 [16];
  uint uStack_180;
  uint uStack_17c;
  longlong local_178;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  *pTStack_170;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  *local_168;
  undefined2 local_160;
  FString local_158;
  FString local_148;
  FTextSizingParameters local_138;
  TStringView<wchar_t> local_f8;
  FText local_e8;
  undefined1 local_d8 [32];
  longlong local_b8;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  *pTStack_b0;
  size_t sVar17;
  
  pTVar1 = &this->ActiveSubtitles;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_d8,
             (TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
              *)pTVar1);
  dVar8 = _UNK_150689688;
  dVar7 = ___xmm_3ff00000000000003ff0000000000000;
  local_160 = 0;
  stack0xfffffffffffffe78 = local_d8._16_16_;
  local_198 = (longlong *)local_d8._0_8_;
  auStack_190._0_8_ = local_d8._8_8_;
  local_178 = local_b8;
  pTStack_170 = pTStack_b0;
  uVar20 = local_d8._24_8_ >> 0x20;
  local_168 = (TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_d8._28_4_ < *(int *)(local_d8._16_8_ + 0x18)) {
    do {
      lVar27 = (longlong)(int)uVar20 * 0x30;
      lVar30 = *local_198;
      local_res20 = lVar27;
      local_1f8 = lVar30;
      if (*(char *)(lVar27 + 0x10 + lVar30) == '\0') {
        ::FString::Empty(&local_238,0x100);
        pFVar26 = (ForAnyElementType *)(lVar30 + 0x18 + lVar27);
        if ((*(int *)&pFVar26[1].Data < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar23 = (FText *)pFVar26->Data;
        pFVar16 = FText::ToString(pFVar23);
        if (&local_238 != pFVar16) {
          iVar10 = (pFVar16->Data).ArrayNum;
          pFVar21 = (pFVar16->Data).AllocatorInstance.Data;
          local_238.Data.ArrayNum = iVar10;
          if ((iVar10 == 0) && (local_238.Data.ArrayMax == 0)) {
            local_238.Data.ArrayNum = 0;
            local_238.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar10,local_238.Data.ArrayMax,(ForAnyElementType *)&local_238,iVar10,
                       &local_238.Data.ArrayMax);
            if (iVar10 != 0) {
              memcpy(local_238.Data.AllocatorInstance.Data,pFVar21,(longlong)iVar10 * 2);
            }
          }
        }
        fVar32 = 0.0;
        fVar3 = *(float *)&pFVar23[1].TextData.Reference;
        uVar25 = 1;
        if (1 < *(int *)(lVar27 + 0x20 + lVar30)) {
          lVar29 = 0x18;
          do {
            uVar14 = 0;
            if ((int)uVar25 < *(int *)&pFVar26[1].Data) {
              uVar14 = ~uVar25 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar23 = (FText *)(pFVar26->Data + lVar29);
            pFVar16 = FText::ToString(pFVar23);
            iVar10 = (pFVar16->Data).ArrayNum;
            uVar14 = iVar10 - 1;
            if (iVar10 == 0) {
              uVar14 = 0;
            }
            ::FString::AppendChars
                      (&local_238,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,uVar14);
            uVar25 = uVar25 + 1;
            lVar29 = lVar29 + 0x18;
            fVar32 = *(float *)&pFVar23[1].TextData.Reference - fVar3;
          } while ((int)uVar25 < *(int *)(lVar27 + 0x20 + lVar30));
        }
        uVar25 = 0;
        iVar13 = 0;
        iVar28 = 0;
        iVar10 = ::FString::Find(&local_238,L"/n",2,IgnoreCase,FromStart,-1);
        while (-1 < iVar10) {
          iVar12 = local_238.Data.ArrayNum + -1;
          if (local_238.Data.ArrayNum == 0) {
            iVar12 = 0;
          }
          iVar11 = (iVar12 - iVar10) + -2;
          pFVar21 = (FScriptContainerElement *)L"";
          if (local_238.Data.ArrayNum != 0) {
            pFVar21 = local_238.Data.AllocatorInstance.Data;
          }
          iVar19 = iVar12;
          if (iVar11 < iVar12) {
            iVar19 = iVar11;
          }
          iVar11 = iVar28;
          if (0 < iVar19) {
            iVar11 = iVar19;
          }
          ::FString::FString(&local_158,
                             (wchar_t *)(pFVar21 + ((longlong)iVar12 - (longlong)iVar11) * 2));
          iVar12 = local_238.Data.ArrayNum + -1;
          if (local_238.Data.ArrayNum == 0) {
            iVar12 = iVar28;
          }
          if (iVar10 < iVar12) {
            iVar12 = iVar10;
          }
          iVar10 = iVar13;
          if (0 < iVar12) {
            iVar10 = iVar12;
          }
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_238.Data.ArrayNum != 0) {
            FVar22.Data = local_238.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize((FString *)&local_1e0,(wchar_t *)FVar22.Data,iVar10);
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_1f0,&local_1e0,2 - (uint)(local_1e0.ArrayNum != 0));
          ::FString::AppendChar((FString *)&local_1f0,L'\n');
          ::FString::ConcatFF(&local_218,(FString *)&local_1f0,&local_158);
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          local_238.Data.AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
          local_238.Data.ArrayNum = local_218.Data.ArrayNum;
          local_238.Data.ArrayMax = local_218.Data.ArrayMax;
          local_218.Data.ArrayNum = 0;
          local_218.Data.ArrayMax = 0;
          local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.AllocatorInstance.Data);
          }
          if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.AllocatorInstance.Data);
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          iVar10 = ::FString::Find(&local_238,L"/n",2,IgnoreCase,FromStart,-1);
        }
        iVar10 = ::FString::Find(&local_238,L"\\n",2,IgnoreCase,FromStart,-1);
        while (-1 < iVar10) {
          iVar12 = local_238.Data.ArrayNum + -1;
          if (local_238.Data.ArrayNum == 0) {
            iVar12 = 0;
          }
          iVar11 = (iVar12 - iVar10) + -2;
          pFVar21 = (FScriptContainerElement *)L"";
          if (local_238.Data.ArrayNum != 0) {
            pFVar21 = local_238.Data.AllocatorInstance.Data;
          }
          iVar19 = iVar12;
          if (iVar11 < iVar12) {
            iVar19 = iVar11;
          }
          iVar11 = iVar28;
          if (0 < iVar19) {
            iVar11 = iVar19;
          }
          ::FString::FString(&local_148,
                             (wchar_t *)(pFVar21 + ((longlong)iVar12 - (longlong)iVar11) * 2));
          iVar12 = local_238.Data.ArrayNum + -1;
          if (local_238.Data.ArrayNum == 0) {
            iVar12 = iVar28;
          }
          if (iVar10 < iVar12) {
            iVar12 = iVar10;
          }
          iVar10 = iVar13;
          if (0 < iVar12) {
            iVar10 = iVar12;
          }
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_238.Data.ArrayNum != 0) {
            FVar22.Data = local_238.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize((FString *)&local_1c0,(wchar_t *)FVar22.Data,iVar10);
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_1d0,&local_1c0,2 - (uint)(local_1c0.ArrayNum != 0));
          ::FString::AppendChar((FString *)&local_1d0,L'\n');
          ::FString::ConcatFF(&local_208,(FString *)&local_1d0,&local_148);
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          local_238.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
          local_238.Data.ArrayNum = local_208.Data.ArrayNum;
          local_238.Data.ArrayMax = local_208.Data.ArrayMax;
          local_208.Data.ArrayNum = 0;
          local_208.Data.ArrayMax = 0;
          local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.AllocatorInstance.Data);
          }
          if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.AllocatorInstance.Data);
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          iVar10 = ::FString::Find(&local_238,L"\\n",2,IgnoreCase,FromStart,-1);
        }
        local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.ArrayNum = 0;
        local_228.ArrayMax = 0;
        iVar10 = local_238.Data.ArrayNum + -1;
        if (local_238.Data.ArrayNum == 0) {
          iVar10 = iVar13;
        }
        local_138.DrawFont.field0_0x0 = (TObjectPtr<UFont_const_>_u_0)UEngine::GetSubtitleFont();
        local_138.DrawX = 0.0;
        local_138.DrawY = 0.0;
        local_138.DrawYL = 0.0;
        local_138.DrawXL =
             (float)(*(int *)((longlong)&local_res18->field0_0x0 + 8) -
                    *(int *)&local_res18->field0_0x0);
        local_138.Scaling.field0_0x0._s_0.X = dVar7;
        local_138.Scaling.field0_0x0._s_0.Y = dVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_138.DrawFont.field0_0x0.DebugPtr != (TObjectPtr<UFont_const_>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_138.DrawFont.field0_0x0);
        }
        local_138.SpacingAdjust.field0_0x0._s_0.X = 0.0;
        local_138.SpacingAdjust.field0_0x0._s_0.Y = 0.0;
        if (local_238.Data.ArrayNum == 0) {
          local_1a8 = (FScriptContainerElement *)0x15060d16c;
LAB_148859f6b:
          sVar17 = wcslen((wchar_t *)local_1a8);
          iVar13 = (int)sVar17;
        }
        else {
          local_1a8 = local_238.Data.AllocatorInstance.Data;
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_148859f6b;
        }
        local_f8._12_4_ = uStack_19c;
        local_f8.Size = iVar13;
        local_f8.DataPtr = (wchar_t *)local_1a8;
        iStack_1a0 = iVar13;
        FCanvas::WrapString(local_res10,&local_138,0.0,&local_f8,&local_228,
                            (TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *)0x0);
        DestructItems<FSubtitleCue,int>((FSubtitleCue *)pFVar26->Data,*(int *)&pFVar26[1].Data);
        puVar2 = (uint *)((longlong)&pFVar26[1].Data + 4);
        *(undefined4 *)&pFVar26[1].Data = 0;
        if (*puVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,pFVar26,0,(int *)puVar2);
        }
        fVar31 = 0.0;
        if (0 < local_228.ArrayNum) {
          do {
            uVar14 = *(uint *)&pFVar26[1].Data;
            if (uVar14 == *puVar2) {
              uVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,pFVar26,(int *)puVar2);
            }
            *(uint *)&pFVar26[1].Data = uVar14 + 1;
            DefaultConstructItems<FSubtitleCue,int>(pFVar26->Data + (longlong)(int)uVar14 * 0x18,1);
            uVar15 = 0;
            if ((int)uVar14 < *(int *)&pFVar26[1].Data) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar23 = (FText *)(pFVar26->Data + (longlong)(int)uVar14 * 0x18);
            uVar14 = 0;
            if ((int)uVar25 < local_228.ArrayNum) {
              uVar14 = ~uVar25 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar18 = FText::FromString(&local_e8,
                                        (FString *)
                                        (local_228.AllocatorInstance.Data +
                                        (longlong)(int)uVar25 * 0x20));
            FText::operator=(pFVar23,pFVar18);
            if (local_e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
            }
            *(float *)&pFVar23[1].TextData.Reference = fVar31 + fVar3;
            pFVar16 = FText::ToString(pFVar23);
            iVar28 = (pFVar16->Data).ArrayNum;
            iVar13 = iVar28 + -1;
            if (iVar28 == 0) {
              iVar13 = 0;
            }
            uVar25 = uVar25 + 1;
            fVar31 = fVar31 + (float)iVar13 * (fVar32 / (float)iVar10);
            lVar27 = local_res20;
          } while ((int)uVar25 < local_228.ArrayNum);
        }
        uVar25 = *(uint *)&pFVar26[1].Data;
        if (uVar25 == *puVar2) {
          uVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar26,(int *)puVar2);
        }
        lVar30 = (longlong)(int)uVar25;
        *(uint *)&pFVar26[1].Data = uVar25 + 1;
        DefaultConstructItems<FSubtitleCue,int>(pFVar26->Data + lVar30 * 0x18,1);
        uVar14 = 0;
        if ((int)uVar25 < *(int *)&pFVar26[1].Data) {
          uVar14 = ~uVar25 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar21 = pFVar26->Data;
        pFVar23 = FText::GetEmpty();
        pIVar4 = *(ITextData **)(pFVar21 + lVar30 * 0x18);
        pIVar5 = (pFVar23->TextData).Reference;
        if (pIVar4 != pIVar5) {
          *(ITextData **)(pFVar21 + lVar30 * 0x18) = pIVar5;
          if (pIVar5 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res8);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        *(uint *)(pFVar21 + lVar30 * 0x18 + 8) = pFVar23->Flags;
        *(float *)(pFVar21 + lVar30 * 0x18 + 0x10) = fVar32 + fVar3;
        if (4 < (byte)LogAudio._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        }
        lVar30 = local_1f8;
        uVar24 = 0;
        uVar20 = uVar24;
        if (0 < *(int *)(lVar27 + 0x20 + local_1f8) + -1) {
          do {
            uVar14 = (uint)uVar24;
            uVar25 = 0;
            if ((int)uVar14 < *(int *)&pFVar26[1].Data) {
              uVar25 = ~uVar14 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar21 = pFVar26->Data;
            uVar14 = uVar14 + 1;
            uVar24 = (ulonglong)uVar14;
            uVar25 = 0;
            if ((int)uVar14 < *(int *)&pFVar26[1].Data) {
              uVar25 = ~uVar14 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (4 < (byte)LogAudio._0_1_) {
              FText::ToString((FText *)(pFVar21 + uVar20));
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            }
            uVar20 = uVar20 + 0x18;
          } while ((int)uVar14 < *(int *)(lVar27 + 0x20 + lVar30) + -1);
        }
        *(undefined1 *)(lVar27 + 0x10 + lVar30) = 1;
        DestructItems<FWrappedStringElement,int>
                  ((FWrappedStringElement *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
        if ((FWrappedStringElement *)local_228.AllocatorInstance.Data !=
            (FWrappedStringElement *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
      }
      iVar10 = 1;
      uStack_180 = uStack_180 & ~auStack_190._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_190);
      uVar20 = (ulonglong)uStack_17c;
    } while ((int)uStack_17c < *(int *)(auStack_190._8_8_ + 0x18));
    if (((char)local_160 != '\0') && (local_160._1_1_ != '\0')) {
      uVar25 = *(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34;
      if (3 < uVar25) {
        uVar20 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
        lVar30 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar30 & 0x1f);
      }
      if (((0 < (int)uVar25) && (local_168->HashSize < iVar10)) || (iVar10 < local_168->HashSize)) {
        local_168->HashSize = iVar10;
        TSet<TTuple<__int64,FActiveSubtitle>,TDefaultMapHashableKeyFuncs<__int64,FActiveSubtitle,0>,FDefaultSetAllocator>
        ::Rehash(local_168);
      }
    }
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  return;
}

// SubtitleCuesToString @ 14885af80

FString * __thiscall
FSubtitleManager::SubtitleCuesToString
          (FSubtitleManager *this,FString *__return_storage_ptr__,FActiveSubtitle *param_1)

{
  FText *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FString *pFVar5;
  FText *this_00;
  int iVar6;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 != (FActiveSubtitle *)0x0) {
    this_00 = (FText *)(param_1->Subtitles).AllocatorInstance.Data;
    iVar2 = (param_1->Subtitles).ArrayNum;
    pFVar1 = (FText *)((longlong)this_00 + (longlong)iVar2 * 0x18);
    while( true ) {
      if ((param_1->Subtitles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSubtitleCue,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this_00 == pFVar1) break;
      bVar4 = FText::IsEmpty(this_00);
      if (!bVar4) {
        if (1 < (__return_storage_ptr__->Data).ArrayNum) {
          ::FString::AppendChar(__return_storage_ptr__,L'\n');
        }
        pFVar5 = FText::ToString(this_00);
        iVar3 = (pFVar5->Data).ArrayNum;
        iVar6 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar6);
      }
      this_00 = (FText *)&this_00[1].Flags;
    }
  }
  return __return_storage_ptr__;
}

// TrimRegionToSafeZone @ 14885c5c0

void __thiscall
FSubtitleManager::TrimRegionToSafeZone
          (FSubtitleManager *this,FCanvas *param_1,TIntRect<int> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res10 [8];
  
  piVar4 = (int *)(**(code **)(param_1->RenderTarget->_padding_ + 0x28))
                            (param_1->RenderTarget,local_res10);
  iVar3 = (*piVar4 * 10) / 100;
  lVar5 = (**(code **)(param_1->RenderTarget->_padding_ + 0x28))(param_1->RenderTarget,local_res10);
  iVar7 = *(int *)(lVar5 + 4);
  piVar4 = (int *)(**(code **)(param_1->RenderTarget->_padding_ + 0x28))
                            (param_1->RenderTarget,local_res10);
  iVar6 = *piVar4;
  lVar5 = (**(code **)(param_1->RenderTarget->_padding_ + 0x28))(param_1->RenderTarget,local_res10);
  iVar1 = *(int *)&param_2->field0_0x0;
  iVar7 = *(int *)(lVar5 + 4) - (iVar7 * 10) / 100;
  if ((iVar1 < iVar3) || (iVar6 - iVar3 < *(int *)((longlong)&param_2->field0_0x0 + 8))) {
    iVar2 = *(int *)((longlong)&param_2->field0_0x0 + 8);
    iVar6 = iVar2 - (iVar6 - iVar3);
    if (iVar6 < iVar3 - iVar1) {
      iVar6 = iVar3 - iVar1;
    }
    *(int *)&param_2->field0_0x0 = iVar1 + iVar6;
    *(int *)((longlong)&param_2->field0_0x0 + 8) = iVar2 - iVar6;
  }
  if (iVar7 < *(int *)((longlong)&param_2->field0_0x0 + 0xc)) {
    *(int *)((longlong)&param_2->field0_0x0 + 0xc) = iVar7;
  }
  return;
}

