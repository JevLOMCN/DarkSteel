// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// ~FMoviePipelineOutputMerger @ 14dd0d560

void __thiscall
FMoviePipelineOutputMerger::~FMoviePipelineOutputMerger(FMoviePipelineOutputMerger *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  longlong *plVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActiveDataMutex);
  DestructItems<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,int>
            ((TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame> *)
             (this->PendingData).Pairs.AllocatorInstance.Data,(this->PendingData).Pairs.ArrayNum);
  pFVar3 = (this->PendingData).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->FinishedFrames).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->FinishedFrames).Tail = pTVar4->NextNode;
    FMoviePipelineMergerOutputFrame::~FMoviePipelineMergerOutputFrame(&pTVar4->Item);
    ::operator_delete(pTVar4,400);
    pTVar4 = (this->FinishedFrames).Tail;
  }
  this->_padding_ = (longlong)&___7IMoviePipelineOutputMerger_MoviePipeline__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// GetNumOutstandingFrames @ 14dd294a0

int __thiscall FMoviePipelineOutputMerger::GetNumOutstandingFrames(FMoviePipelineOutputMerger *this)

{
  return (this->PendingData).Pairs.ArrayNum;
}

// AbandonOutstandingWork @ 14dd70e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FMoviePipelineOutputMerger::AbandonOutstandingWork(FMoviePipelineOutputMerger *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [312];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  lpCriticalSection = &this->ActiveDataMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar6 = _UNK_150631d98;
    uVar5 = ___xmm_00000000ffffffff0000008000000000;
    while (pTVar2 = ((this->FinishedFrames).Tail)->NextNode, pTVar2 != (TNode *)0x0) {
      pTVar3 = (this->FinishedFrames).Tail;
      (this->FinishedFrames).Tail = pTVar2;
      local_1c8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
      FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(local_1c8 + 8));
      local_1c8._296_8_ = (FMoviePipelinePassIdentifier *)0x0;
      local_1c8._304_4_ = 0;
      local_1c8._308_4_ = 0;
      local_90._0_8_ = (FScriptContainerElement *)0x0;
      local_90._8_8_ = 0;
      local_70 = (void *)0x0;
      local_68 = uVar5;
      uStack_60 = uVar6;
      local_50 = (void *)0x0;
      local_48 = 0;
      FMoviePipelineMergerOutputFrame::operator=
                (&((this->FinishedFrames).Tail)->Item,(FMoviePipelineMergerOutputFrame *)local_1c8);
      local_1c8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
      local_48 = 0;
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_90,0,local_90._8_4_);
      iVar4 = SUB84(local_90._8_8_,4);
      local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
      }
      uVar7 = local_68._4_4_;
      uStack_60 = 0xffffffff;
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
      if (0x80 < uVar7) {
        local_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_90._0_8_);
      }
      DestructItems<FMoviePipelinePassIdentifier,int>
                ((FMoviePipelinePassIdentifier *)local_1c8._296_8_,local_1c8._304_4_);
      if ((FMoviePipelinePassIdentifier *)local_1c8._296_8_ != (FMoviePipelinePassIdentifier *)0x0)
      {
        FMemory::Free((void *)local_1c8._296_8_);
      }
      FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(local_1c8 + 8));
      if (pTVar3 != (TNode *)0x0) {
        FMoviePipelineMergerOutputFrame::~FMoviePipelineMergerOutputFrame(&pTVar3->Item);
        ::operator_delete(pTVar3,400);
      }
    }
    DestructItems<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,int>
              ((TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame> *)
               (this->PendingData).Pairs.AllocatorInstance.Data,(this->PendingData).Pairs.ArrayNum);
    piVar1 = &(this->PendingData).Pairs.ArrayMax;
    (this->PendingData).Pairs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2a8,8,0,(ForAnyElementType *)&this->PendingData,0,piVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnCompleteRenderPassDataAvailable_AnyThread @ 14dd90730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread
          (FMoviePipelineOutputMerger *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
  *this_00;
  FString *pFVar1;
  IImagePixelDataPayload IVar2;
  FImagePixelData *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  IImagePixelDataPayload *pIVar8;
  IImagePixelDataPayload *pIVar9;
  FMoviePipelineOutputMerger *pFVar10;
  bool bVar11;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar12;
  FMoviePipelineMergerOutputFrame *pFVar13;
  TNode *pTVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  undefined8 *puVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FMoviePipelineFrameOutputState *pFVar23;
  IImagePixelDataPayload IVar24;
  IImagePixelDataPayload IVar25;
  uint uVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  FMoviePipelineOutputMerger *pFVar29;
  uint uVar30;
  undefined8 *puVar31;
  FMoviePipelineFrameOutputState *this_01;
  undefined1 auStackY_338 [32];
  FKeyForward local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6;
  undefined1 local_2e5;
  undefined1 local_2e4;
  undefined1 local_2e3 [3];
  ForAnyElementType local_2e0;
  undefined8 local_2d8;
  IImagePixelDataPayload *local_2d0;
  FMoviePipelineFrameOutputState *local_2c8;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *local_2c0;
  FMoviePipelineOutputMerger *local_2b8;
  longlong local_2b0;
  int local_2a8;
  int local_2a4;
  IImagePixelDataPayload **local_2a0;
  FValueComparisonClass<_public:_virtual_void___cdecl_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_29_::<lambda_3>_>
  local_298;
  LPCRITICAL_SECTION local_290;
  IImagePixelDataPayload *local_288;
  int iStack_280;
  uint uStack_27c;
  IImagePixelDataPayload local_278;
  undefined4 uStack_270;
  int iStack_26c;
  int local_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  IImagePixelDataPayload *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  FMoviePipelinePassIdentifier local_228;
  undefined4 local_1ec;
  undefined1 local_1e8 [312];
  undefined1 local_b0 [64];
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ActiveDataMutex;
  local_2c0 = param_1;
  local_2b8 = this;
  local_290 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pFVar28 = (FScriptContainerElement *)0x0;
  local_2d0 = (param_1->Ptr->Payload).Object;
  if ((local_2d0 == (IImagePixelDataPayload *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Payload",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineOutputBuilder.cpp"
                          ,0x3f,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = (this->PendingData).Pairs.ArrayNum;
  pFVar19 = (this->PendingData).Pairs.AllocatorInstance.Data;
  pFVar22 = pFVar19 + (longlong)iVar18 * 0x2a8;
  while( true ) {
    if ((this->PendingData).Pairs.ArrayNum != iVar18) {
      local_2e7 = 0;
      `TCheckedPointerIterator<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2e7);
    }
    if (pFVar19 == pFVar22) goto LAB_14dd90816;
    if (*(int *)pFVar19 == *(int *)(local_2d0 + 0x1a)) break;
    pFVar19 = pFVar19 + 0x2a8;
  }
  pFVar28 = pFVar19 + 0x120;
  if (pFVar28 == (FScriptContainerElement *)0x0) {
LAB_14dd90816:
    local_2e6 = 0;
    bVar11 = `FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l17::
             <lambda_1>::operator()(&local_2e6);
    if (!bVar11) goto LAB_14dd90fda;
  }
  pIVar8 = local_2d0;
  puVar20 = *(undefined8 **)(pFVar28 + 0x128);
  puVar31 = puVar20 + (longlong)*(int *)(pFVar28 + 0x130) * 4;
  for (; puVar20 != puVar31; puVar20 = puVar20 + 4) {
    iVar18 = *(int *)(puVar20 + 1);
    if (iVar18 == *(int *)(pIVar8 + 0x57)) {
      if (1 < iVar18) {
        iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar20,(wchar_t *)pIVar8[0x56]);
        bVar11 = iVar18 == 0;
        goto LAB_14dd9087a;
      }
LAB_14dd90881:
      iVar18 = *(int *)(puVar20 + 3);
      if (iVar18 == *(int *)(pIVar8 + 0x59)) {
        if (iVar18 < 2) goto LAB_14dd908d6;
        iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)puVar20[2],(wchar_t *)pIVar8[0x58]);
        bVar11 = iVar18 == 0;
      }
      else {
        bVar11 = iVar18 + *(int *)(pIVar8 + 0x59) == 1;
      }
      if (bVar11) goto LAB_14dd908d6;
    }
    else {
      bVar11 = iVar18 + *(int *)(pIVar8 + 0x57) == 1;
LAB_14dd9087a:
      if (bVar11) goto LAB_14dd90881;
    }
  }
  local_2a0 = &local_2d0;
  bVar11 = `FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l20::
           <lambda_2>::operator()(&local_2a0);
  if (bVar11) {
LAB_14dd908d6:
    pIVar8 = local_2d0;
    iStack_280 = 0;
    local_2c8 = (FMoviePipelineFrameOutputState *)(local_2d0 + 0x30);
    iVar18 = *(int *)(local_2d0 + 0x35);
    local_278 = (IImagePixelDataPayload)(local_2d0 + 0x32);
    local_268 = 0;
    uStack_27c = 1;
    iStack_26c = 0;
    if (iVar18 != 0) {
      IVar25 = local_2d0[0x34];
      if (local_2d0[0x34] == (IImagePixelDataPayload)0x0) {
        IVar25 = local_278;
      }
      uVar21 = *(uint *)IVar25;
      while (uVar21 == 0) {
        lVar15 = (longlong)iStack_280;
        local_268 = local_268 + 0x20;
        iStack_280 = iStack_280 + 1;
        iStack_26c = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_280)
        goto LAB_14dd9097f;
        uVar21 = ((uint *)((longlong)IVar25 + 4))[lVar15];
      }
      uStack_27c = -uVar21 & uVar21;
      uVar16 = (ulonglong)uStack_27c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_2a8 = (int)lVar15;
      iStack_26c = local_268 + -1 + local_2a8;
      if (iVar18 < iStack_26c) {
        iStack_26c = iVar18;
      }
    }
LAB_14dd9097f:
    IVar25 = (IImagePixelDataPayload)(local_2d0 + 0x32);
    uStack_264 = local_1ec;
    iStack_260 = *(int *)(local_2d0 + 0x31) - *(int *)&local_2d0[0x36].field_0x4;
    uVar21 = *(uint *)(local_2d0 + 0x35);
    uStack_270 = 0xffffffff;
    TStack_250.CurrentBitIndex = iStack_26c;
    TStack_250.UnvisitedBitMask = 0xffffffff;
    TStack_250._padding_ = CONCAT44(uStack_27c,iStack_280);
    uVar30 = uVar21 & 0xffffffe0;
    iVar17 = (int)uVar21 >> 5;
    TStack_250._28_4_ = local_1ec;
    TStack_250.BaseBitIndex = local_268;
    uStack_230 = CONCAT44(uStack_25c,iStack_260);
    local_288 = (IImagePixelDataPayload *)local_2c8;
    local_258 = (IImagePixelDataPayload *)local_2c8;
    TStack_250.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_278;
    if ((((int)uVar21 < 0) || (iVar18 < (int)uVar21)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar23 = local_2c8;
    uVar26 = *(uint *)(pIVar8 + 0x35);
    if (uVar21 != uVar26) {
      IVar2 = pIVar8[0x34];
      IVar24 = IVar25;
      if (IVar2 != (IImagePixelDataPayload)0x0) {
        IVar24 = IVar2;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)IVar24 + (longlong)iVar17 * 4);
      while (uVar21 == 0) {
        lVar15 = (longlong)iVar17;
        uVar30 = uVar30 + 0x20;
        iVar17 = iVar17 + 1;
        uVar21 = uVar26;
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14dd90aa0;
        uVar21 = ((uint *)((longlong)IVar24 + 4))[lVar15];
      }
      uVar16 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_2a4 = (int)lVar15;
      uVar21 = local_2a4 + -1 + uVar30;
      if ((int)uVar26 < (int)uVar21) {
        uVar21 = uVar26;
      }
    }
LAB_14dd90aa0:
    while( true ) {
      pIVar8 = local_258;
      if (*(int *)(local_258 + 1) - *(int *)&local_258[6].field_0x4 != (int)uStack_230) {
        local_2e5 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e5);
      }
      pIVar9 = local_2d0;
      if (((TStack_250.CurrentBitIndex == uVar21) &&
          ((IImagePixelDataPayload)TStack_250.Array == IVar25)) &&
         ((FMoviePipelineFrameOutputState *)pIVar8 == pFVar23)) break;
      pFVar1 = (FString *)((longlong)*pIVar8 + (longlong)TStack_250.CurrentBitIndex * 0x28);
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString_const_&,FString_const_&>
                ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)(pFVar28 + 0xb8),pFVar1,pFVar1 + 1);
      TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
    }
    ::FString::FString(&local_228.Name,(FString *)(local_2d0 + 0x56));
    ::FString::FString(&local_228.CameraName,(FString *)(pIVar9 + 0x58));
    uVar21 = ::GetTypeHash(&local_228);
    pTVar12 = TMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
              ::FindOrAddImpl<FMoviePipelinePassIdentifier_const_&>
                        ((TMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                          *)(pFVar28 + 0x138),uVar21,(FMoviePipelinePassIdentifier *)(pIVar9 + 0x56)
                        );
    iVar18 = 0;
    if (pTVar12 != local_2c0) {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = local_2c0->Ptr;
      local_2c0->Ptr = (FImagePixelData *)0x0;
      if (pFVar3 != (FImagePixelData *)0x0) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    if (*(int *)(pFVar28 + 0x140) - *(int *)(pFVar28 + 0x16c) == *(int *)(pFVar28 + 0x130)) {
      local_298.Predicate.Predicate =
           (TDereferenceWrapper<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,_public:_virtual_void___cdecl_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_29_::<lambda_3>_>
            )&local_2e8;
      TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
      ::
      StableSort<TSortableMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l29::<lambda_3>_>_>
                ((TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
                  *)(pFVar28 + 0x138),&local_298);
    }
    pFVar10 = local_2b8;
    local_2e0.Data = (FScriptContainerElement *)0x0;
    local_2d8 = 0;
    for (; (uVar7 = _UNK_150631d98, uVar6 = ___xmm_00000000ffffffff0000008000000000, -1 < iVar18 &&
           (iVar18 < (pFVar10->PendingData).Pairs.ArrayNum)); iVar18 = iVar18 + 1) {
      if ((iVar18 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23 = (FMoviePipelineFrameOutputState *)
                ((pFVar10->PendingData).Pairs.AllocatorInstance.Data + (longlong)iVar18 * 0x2a8);
      if (((local_2e0.Data <= pFVar23) &&
          (pFVar23 < (FMoviePipelineFrameOutputState *)
                     (local_2e0.Data + (longlong)local_2d8._4_4_ * 0x120))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((int)local_2d8 == local_2d8._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x120,8,&local_2e0,(int *)((longlong)&local_2d8 + 4));
        local_2d8 = CONCAT44(local_2d8._4_4_,iVar17);
      }
      lVar15 = (longlong)(int)local_2d8;
      local_2d8 = CONCAT44(local_2d8._4_4_,(int)local_2d8 + 1);
      FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(local_2e0.Data + lVar15 * 0x120),pFVar23);
    }
    uVar16 = (ulonglong)(int)local_2d8;
    this_00 = &pFVar10->PendingData;
    pFVar23 = (FMoviePipelineFrameOutputState *)(local_2e0.Data + uVar16 * 0x120);
    local_2c0 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)
                CONCAT44(local_2c0._4_4_,(int)local_2d8);
    FVar27.Data = local_2e0.Data;
    pFVar29 = pFVar10;
    while( true ) {
      local_2c8 = (FMoviePipelineFrameOutputState *)FVar27.Data;
      if ((int)local_2d8 != (int)uVar16) {
        local_2e4 = 0;
        `TCheckedPointerIterator<FMoviePipelineFrameOutputState,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2e4);
      }
      if ((FMoviePipelineFrameOutputState *)FVar27.Data == pFVar23) break;
      pFVar13 = TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
                ::Find(this_00,(FMoviePipelineFrameOutputState *)FVar27.Data);
      if ((pFVar13 == (FMoviePipelineMergerOutputFrame *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Value != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                              ,0x141,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar13->ExpectedRenderPasses).ArrayNum !=
          *(int *)&(pFVar13->ImageOutputData).field_0x8 -
          *(int *)&(pFVar13->ImageOutputData).field_0x34) break;
      local_1e8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
      FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(local_1e8 + 8));
      local_b0._40_8_ = uVar6;
      local_b0._48_8_ = uVar7;
      local_1e8._296_8_ = (FMoviePipelinePassIdentifier *)0x0;
      local_1e8._304_4_ = 0;
      local_1e8._308_4_ = 0;
      local_b0._0_8_ = 0;
      local_b0._8_8_ = 0;
      local_b0._32_8_ = 0;
      local_70 = (void *)0x0;
      local_68 = 0;
      uVar21 = Algo::
               BinarySearchBy<TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>,FMoviePipelineFrameOutputState,TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>::FKeyForward,TLess<FMoviePipelineFrameOutputState_const_&>_>
                         (&this_00->Pairs,(FMoviePipelineFrameOutputState *)FVar27.Data,local_2e8,
                          (TLess<FMoviePipelineFrameOutputState_const_&>)local_2e8);
      if (uVar21 == 0xffffffff) {
        local_2e3[0] = 0;
        `FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l33::<lambda_4>
        ::operator()(local_2e3);
      }
      else {
        uVar26 = ~uVar21 >> 0x1f;
        uVar30 = 0;
        if ((int)uVar21 < (pFVar10->PendingData).Pairs.ArrayNum) {
          uVar30 = uVar26;
        }
        if ((uVar30 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2b0 = (longlong)(int)uVar21 * 0x2a8;
        FMoviePipelineMergerOutputFrame::operator=
                  ((FMoviePipelineMergerOutputFrame *)local_1e8,
                   (FMoviePipelineMergerOutputFrame *)
                   ((this_00->Pairs).AllocatorInstance.Data + local_2b0 + 0x120));
        uVar30 = 0;
        if ((int)uVar21 < (pFVar10->PendingData).Pairs.ArrayNum) {
          uVar30 = uVar26;
        }
        if ((uVar30 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_01 = (FMoviePipelineFrameOutputState *)
                  ((this_00->Pairs).AllocatorInstance.Data + local_2b0);
        FMoviePipelineMergerOutputFrame::~FMoviePipelineMergerOutputFrame
                  ((FMoviePipelineMergerOutputFrame *)(this_01 + 1));
        FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(this_01);
        iVar18 = (pFVar10->PendingData).Pairs.ArrayNum + ~uVar21;
        if (iVar18 != 0) {
          memmove(this_01,&this_01[2].ShotName.Data.ArrayNum,(longlong)iVar18 * 0x2a8);
        }
        iVar18 = (pFVar10->PendingData).Pairs.ArrayNum + -1;
        (pFVar10->PendingData).Pairs.ArrayNum = iVar18;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2a8,8,(ForAnyElementType *)this_00,iVar18,
                   &(pFVar10->PendingData).Pairs.ArrayMax);
        FVar27.Data = (FScriptContainerElement *)local_2c8;
        pFVar29 = local_2b8;
      }
      pTVar14 = ::operator_new(400);
      if (pTVar14 != (TNode *)0x0) {
        pTVar14->NextNode = (TNode *)0x0;
        FMoviePipelineMergerOutputFrame::FMoviePipelineMergerOutputFrame
                  (&pTVar14->Item,(FMoviePipelineMergerOutputFrame *)local_1e8);
        pTVar4 = (pFVar29->FinishedFrames).Head;
        (pFVar29->FinishedFrames).Head = pTVar14;
        pTVar4->NextNode = pTVar14;
      }
      local_1e8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
      local_68 = 0;
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b0);
      DestructItems<FMoviePipelinePassIdentifier,int>
                ((FMoviePipelinePassIdentifier *)local_1e8._296_8_,local_1e8._304_4_);
      if ((FMoviePipelinePassIdentifier *)local_1e8._296_8_ != (FMoviePipelinePassIdentifier *)0x0)
      {
        FMemory::Free((void *)local_1e8._296_8_);
      }
      FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(local_1e8 + 8));
      uVar16 = (ulonglong)local_2c0 & 0xffffffff;
      FVar27.Data = FVar27.Data + 0x120;
    }
    DestructItems<FMoviePipelineFrameOutputState,int>
              ((FMoviePipelineFrameOutputState *)local_2e0.Data,(int)local_2d8);
    lpCriticalSection = local_290;
    if ((FMoviePipelineFrameOutputState *)local_2e0.Data != (FMoviePipelineFrameOutputState *)0x0) {
      FMemory::Free(local_2e0.Data);
    }
  }
LAB_14dd90fda:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// OnSingleSampleDataAvailable_AnyThread @ 14dd95110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread
          (FMoviePipelineOutputMerger *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FImagePixelData *local_20;
  FWeakObjectPtr local_18;
  undefined8 local_10;
  
  local_18 = (this->WeakMoviePipeline).WeakPtr;
  local_20 = param_1->Ptr;
  param_1->Ptr = (FImagePixelData *)0x0;
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,void>
                ::Call;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  return;
}

// QueueOutputFrame_GameThread @ 14dd98060

FMoviePipelineMergerOutputFrame * __thiscall
FMoviePipelineOutputMerger::QueueOutputFrame_GameThread
          (FMoviePipelineOutputMerger *this,FMoviePipelineFrameOutputState *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FMoviePipelineMergerOutputFrame *pFVar3;
  
  lpCriticalSection = &this->ActiveDataMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
           ::Find(&this->PendingData,param_1);
  if (pFVar3 != (FMoviePipelineMergerOutputFrame *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PendingData.Find(CachedOutputState)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineOutputBuilder.cpp"
                       ,0x16,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMoviePipelineMergerOutputFrame *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
           ::Emplace<FMoviePipelineFrameOutputState_const_&>(&this->PendingData,param_1);
  FMoviePipelineFrameOutputState::operator=(&pFVar3->FrameOutputState,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar3;
}

// operator() @ 15058eaf0

bool __thiscall
`FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l17::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5889326003146195017>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5889326003146195017>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058edb0

bool __thiscall
`FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l20::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5889326003146195023>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5889326003146195023>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15058eef0

bool __thiscall
`FMoviePipelineOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l33::<lambda_4>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5889326003146195075>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5889326003146195075>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

